// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 60

// DivMod<10> @ 14f8fbe60

/* private: unsigned int __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<4>::DivMod<10>(void) __ptr64 */

uint __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<4>::DivMod<10>(BigUnsigned<4> *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  BigUnsigned<4> *pBVar5;
  
  uVar4 = 0;
  uVar3 = 0;
  lVar2 = (longlong)(*(int *)this + -1);
  if (-1 < *(int *)this + -1) {
    pBVar5 = this + lVar2 * 4 + 4;
    do {
      uVar4 = (uVar4 << 0x20) + (ulonglong)*(uint *)pBVar5;
      *(uint *)pBVar5 = (uint)(uVar4 / 10);
      uVar4 = uVar4 % 10;
      uVar3 = (uint)uVar4;
      lVar2 = lVar2 + -1;
      pBVar5 = pBVar5 + -4;
    } while (-1 < lVar2);
  }
  uVar1 = *(uint *)this;
  while ((0 < (int)uVar1 && (*(int *)(this + (ulonglong)uVar1 * 4) == 0))) {
    uVar1 = uVar1 - 1;
    *(uint *)this = uVar1;
  }
  return uVar3;
}

// DivMod<10> @ 14f8fbee0

/* private: unsigned int __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<84>::DivMod<10>(void) __ptr64 */

uint __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::DivMod<10>(BigUnsigned<84> *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  BigUnsigned<84> *pBVar5;
  
  uVar4 = 0;
  uVar3 = 0;
  lVar2 = (longlong)(*(int *)this + -1);
  if (-1 < *(int *)this + -1) {
    pBVar5 = this + lVar2 * 4 + 4;
    do {
      uVar4 = (uVar4 << 0x20) + (ulonglong)*(uint *)pBVar5;
      *(uint *)pBVar5 = (uint)(uVar4 / 10);
      uVar4 = uVar4 % 10;
      uVar3 = (uint)uVar4;
      lVar2 = lVar2 + -1;
      pBVar5 = pBVar5 + -4;
    } while (-1 < lVar2);
  }
  uVar1 = *(uint *)this;
  while ((0 < (int)uVar1 && (*(int *)(this + (ulonglong)uVar1 * 4) == 0))) {
    uVar1 = uVar1 - 1;
    *(uint *)this = uVar1;
  }
  return uVar3;
}

// _Adl_verify_range<std::_String_iterator<std::_String_val<std::_Simple_types<char>_>_>,std::_String_iterator<class_std::_String_val<struct_std::_Simple_types<char>_>_>_> @ 14f8fbf60

/* void __cdecl std::_Adl_verify_range<class std::_String_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >,class std::_String_iterator<class std::_String_val<struct
   std::_Simple_types<char> > > >(class std::_String_iterator<class std::_String_val<struct
   std::_Simple_types<char> > > const & __ptr64,class std::_String_iterator<class
   std::_String_val<struct std::_Simple_types<char> > > const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<std::_String_iterator<std::_String_val<std::_Simple_types<char>_>_>,std::_String_iterator<class_std::_String_val<struct_std::_Simple_types<char>_>_>_>
          (_String_iterator<std::_String_val<std::_Simple_types<char>_>_> *param_1,
          _String_iterator<std::_String_val<std::_Simple_types<char>_>_> *param_2)

{
  return;
}

// _Copy_memmove_n<unsigned_int_const*___ptr64,unsigned_int*___ptr64> @ 14f8fbf70

/* unsigned int * __ptr64 __cdecl std::_Copy_memmove_n<unsigned int const * __ptr64,unsigned int *
   __ptr64>(unsigned int const * __ptr64,unsigned __int64,unsigned int * __ptr64) */

uint * __cdecl
std::_Copy_memmove_n<unsigned_int_const*___ptr64,unsigned_int*___ptr64>
          (uint *param_1,__uint64 param_2,uint *param_3)

{
  memmove(param_3,param_1,param_2 * 4);
  return param_3 + param_2;
}

// _Could_compare_equal_to_value_type<char_const*___ptr64,char> @ 14f8fbfb0

/* bool __cdecl std::_Could_compare_equal_to_value_type<char const * __ptr64,char>(char const &
   __ptr64) */

bool __cdecl std::_Could_compare_equal_to_value_type<char_const*___ptr64,char>(char *param_1)

{
  return true;
}

// _Find_unchecked<char_const*___ptr64,char> @ 14f8fbfc0

/* char const * __ptr64 __cdecl std::_Find_unchecked<char const * __ptr64,char>(char const *
   __ptr64,char const * __ptr64 const,char const & __ptr64) */

char * __cdecl
std::_Find_unchecked<char_const*___ptr64,char>(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = __std_find_trivial_1(param_1,param_2,*param_3);
  return pcVar1;
}

// _Get_unwrapped<char_const*___ptr64_const&___ptr64> @ 14f8fbfd0

/* UNKNOWN __cdecl std::_Get_unwrapped<char const * __ptr64 const & __ptr64>(char const * __ptr64
   const & __ptr64) */

char * __cdecl std::_Get_unwrapped<char_const*___ptr64_const&___ptr64>(char **param_1)

{
  return *param_1;
}

// _Get_unwrapped<std::_String_iterator<std::_String_val<std::_Simple_types<char>_>_>_const&___ptr64> @ 14f8fbfe0

/* UNKNOWN __cdecl std::_Get_unwrapped<class std::_String_iterator<class std::_String_val<struct
   std::_Simple_types<char> > > const & __ptr64>(class std::_String_iterator<class
   std::_String_val<struct std::_Simple_types<char> > > const & __ptr64) */

_String_iterator<std::_String_val<std::_Simple_types<char>_>_> __cdecl
std::
_Get_unwrapped<std::_String_iterator<std::_String_val<std::_Simple_types<char>_>_>_const&___ptr64>
          (_String_iterator<std::_String_val<std::_Simple_types<char>_>_> *param_1)

{
  return *param_1;
}

// _Get_unwrapped_n<unsigned_int_const*___ptr64&___ptr64,int> @ 14f8fbff0

/* UNKNOWN __cdecl std::_Get_unwrapped_n<unsigned int const * __ptr64 & __ptr64,int>(unsigned int
   const * __ptr64 & __ptr64,int) */

uint * __cdecl
std::_Get_unwrapped_n<unsigned_int_const*___ptr64&___ptr64,int>(uint **param_1,int param_2)

{
  return *param_1;
}

// _Seek_wrapped<char_const*___ptr64,char_const*___ptr64> @ 14f8fc000

/* void __cdecl std::_Seek_wrapped<char const * __ptr64,char const * __ptr64>(char const * __ptr64 &
   __ptr64,char const * __ptr64 && __ptr64) */

void __cdecl
std::_Seek_wrapped<char_const*___ptr64,char_const*___ptr64>(char **param_1,char **param_2)

{
  *param_1 = *param_2;
  return;
}

// _To_address<unsigned_int_const*___ptr64> @ 14f8fc010

/* UNKNOWN __cdecl std::_To_address<unsigned int const * __ptr64>(unsigned int const * __ptr64 const
   & __ptr64) */

uint * __cdecl std::_To_address<unsigned_int_const*___ptr64>(uint **param_1)

{
  return *param_1;
}

// _Unfancy<char_const_> @ 14f8fc020

/* char const * __ptr64 __cdecl std::_Unfancy<char const >(char const * __ptr64) */

char * __cdecl std::_Unfancy<char_const_>(char *param_1)

{
  return param_1;
}

// __std_find_trivial<char_const_,char> @ 14f8fc030

/* char const * __ptr64 __cdecl __std_find_trivial<char const ,char>(char const * __ptr64,char const
   * __ptr64,char) */

char * __cdecl __std_find_trivial<char_const_,char>(char *param_1,char *param_2,char param_3)

{
  char *pcVar1;
  
  pcVar1 = __std_find_trivial_1(param_1,param_2,param_3);
  return pcVar1;
}

// advance<char_const*___ptr64,__int64> @ 14f8fc040

/* void __cdecl std::advance<char const * __ptr64,__int64>(char const * __ptr64 & __ptr64,__int64)
    */

void __cdecl std::advance<char_const*___ptr64,__int64>(char **param_1,__int64 param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}

// copy_n<unsigned_int_const*___ptr64,int,unsigned_int*___ptr64> @ 14f8fc050

/* unsigned int * __ptr64 __cdecl std::copy_n<unsigned int const * __ptr64,int,unsigned int *
   __ptr64>(unsigned int const * __ptr64,int,unsigned int * __ptr64) */

uint * __cdecl
std::copy_n<unsigned_int_const*___ptr64,int,unsigned_int*___ptr64>
          (uint *param_1,int param_2,uint *param_3)

{
  if (0 < param_2) {
    memmove(param_3,param_1,(longlong)param_2 * 4);
    return param_3 + param_2;
  }
  return param_3;
}

// find<char_const*___ptr64,char> @ 14f8fc0a0

/* char const * __ptr64 __cdecl std::find<char const * __ptr64,char>(char const * __ptr64,char const
   * __ptr64 const,char const & __ptr64) */

char * __cdecl std::find<char_const*___ptr64,char>(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = __std_find_trivial_1(param_1,param_2,*param_3);
  return pcVar1;
}

// forward<char_const*___ptr64> @ 14f8fc0b0

/* char const * __ptr64 && __ptr64 __cdecl std::forward<char const * __ptr64>(char const * __ptr64 &
   __ptr64) */

char ** __cdecl std::forward<char_const*___ptr64>(char **param_1)

{
  return param_1;
}

// move<char&___ptr64> @ 14f8fc0c0

/* char && __ptr64 __cdecl std::move<char & __ptr64>(char & __ptr64) */

char * __cdecl std::move<char&___ptr64>(char *param_1)

{
  return param_1;
}

// next<char_const*___ptr64> @ 14f8fc0d0

/* char const * __ptr64 __cdecl std::next<char const * __ptr64>(char const * __ptr64,__int64) */

char * __cdecl std::next<char_const*___ptr64>(char *param_1,__int64 param_2)

{
  return param_1 + param_2;
}

// prev<char_const*___ptr64> @ 14f8fc0e0

/* char const * __ptr64 __cdecl std::prev<char const * __ptr64>(char const * __ptr64,__int64) */

char * __cdecl std::prev<char_const*___ptr64>(char *param_1,__int64 param_2)

{
  return param_1 + -param_2;
}

// reverse<std::_String_iterator<std::_String_val<std::_Simple_types<char>_>_>_> @ 14f8fc0f0

/* void __cdecl std::reverse<class std::_String_iterator<class std::_String_val<struct
   std::_Simple_types<char> > > >(class std::_String_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >,class std::_String_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >) */

void __cdecl
std::reverse<std::_String_iterator<std::_String_val<std::_Simple_types<char>_>_>_>
          (_String_iterator<std::_String_val<std::_Simple_types<char>_>_> param_1,
          _String_iterator<std::_String_val<std::_Simple_types<char>_>_> param_2)

{
  __std_reverse_trivially_swappable_1((void *)param_1,(void *)param_2);
  return;
}

// swap<char,0> @ 14f8fc100

/* void __cdecl std::swap<char,0>(char & __ptr64,char & __ptr64) */

void __cdecl std::swap<char,0>(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = cVar1;
  return;
}

// to_address<unsigned_int_const_> @ 14f8fc120

/* unsigned int const * __ptr64 __cdecl std::to_address<unsigned int const >(unsigned int const *
   __ptr64 const) */

uint * __cdecl std::to_address<unsigned_int_const_>(uint *param_1)

{
  return param_1;
}

// BigUnsigned<4> @ 14f8fc130

/* public: __cdecl absl::lts_20240722::strings_internal::BigUnsigned<4>::BigUnsigned<4>(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

BigUnsigned<4> * __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<4>::BigUnsigned<4>
          (BigUnsigned<4> *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  int iVar2;
  ulong64 uVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  BigUnsigned<4> *pBVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  
  uVar3 = param_1->_Mysize;
  uVar8 = 0;
  pcVar4 = param_1->_Mydata;
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 4) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  pcVar1 = pcVar4 + uVar3;
  for (pcVar6 = pcVar4; (pcVar6 != pcVar1 && ((byte)(*pcVar6 - 0x30U) < 10)); pcVar6 = pcVar6 + 1) {
  }
  if (pcVar6 != pcVar1) {
    return this;
  }
  if (uVar3 == 0) {
    return this;
  }
  uVar5 = ReadDigits(this,pcVar4,pcVar1,0x27);
  if ((int)uVar5 < 1) {
    return this;
  }
  if ((int)uVar5 < 10) {
    iVar2 = *(int *)this;
    uVar5 = *(uint *)((longlong)&kTenToNth + (longlong)(int)uVar5 * 4);
    if (iVar2 == 0) {
      return this;
    }
    if (uVar5 == 1) {
      return this;
    }
    if (uVar5 == 0) {
      if (0 < iVar2) {
        memset(this + 4,0,(longlong)iVar2 << 2);
      }
      *(undefined4 *)this = 0;
      return this;
    }
    uVar13 = uVar8;
    pBVar10 = this;
    if (iVar2 < 1) {
      return this;
    }
    do {
      pBVar10 = pBVar10 + 4;
      uVar14 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar14;
      uVar9 = uVar13 + (ulonglong)*(uint *)pBVar10 * (ulonglong)uVar5;
      *(uint *)pBVar10 = (uint)uVar9;
      iVar2 = *(int *)this;
      uVar13 = uVar9 >> 0x20;
    } while ((int)uVar14 < iVar2);
    if (uVar9 >> 0x20 == 0) {
      return this;
    }
    if (3 < iVar2) {
      return this;
    }
    *(int *)(this + (longlong)iVar2 * 4 + 4) = (int)(uVar9 >> 0x20);
    *(int *)this = *(int *)this + 1;
    return this;
  }
  uVar14 = uVar5;
  if (0xc < (int)uVar5) {
    uVar13 = (ulonglong)uVar5 / 0xd;
    uVar14 = uVar5 + (int)uVar13 * -0xd;
    do {
      if ((*(int *)this != 0) && (uVar9 = uVar8, uVar12 = uVar8, pBVar10 = this, 0 < *(int *)this))
      {
        do {
          pBVar10 = pBVar10 + 4;
          uVar11 = (int)uVar12 + 1;
          uVar7 = uVar9 + (ulonglong)*(uint *)pBVar10 * 0x48c27395;
          *(uint *)pBVar10 = (uint)uVar7;
          iVar2 = *(int *)this;
          uVar9 = uVar7 >> 0x20;
          uVar12 = (ulonglong)uVar11;
        } while ((int)uVar11 < iVar2);
        if ((uVar7 >> 0x20 != 0) && (iVar2 < 4)) {
          *(int *)(this + (longlong)iVar2 * 4 + 4) = (int)(uVar7 >> 0x20);
          *(int *)this = *(int *)this + 1;
        }
      }
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    if ((int)uVar14 < 1) goto LAB_14f8fc2ad;
  }
  uVar14 = *(uint *)((longlong)&kFiveToNth + (longlong)(int)uVar14 * 4);
  iVar2 = *(int *)this;
  if ((iVar2 != 0) && (uVar14 != 1)) {
    if (uVar14 == 0) {
      if (0 < iVar2) {
        memset(this + 4,0,(longlong)iVar2 << 2);
      }
      *(undefined4 *)this = 0;
      ShiftLeft(this,uVar5);
      return this;
    }
    uVar13 = uVar8;
    pBVar10 = this;
    if (0 < iVar2) {
      do {
        pBVar10 = pBVar10 + 4;
        uVar11 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar11;
        uVar9 = uVar13 + (ulonglong)*(uint *)pBVar10 * (ulonglong)uVar14;
        *(uint *)pBVar10 = (uint)uVar9;
        iVar2 = *(int *)this;
        uVar13 = uVar9 >> 0x20;
      } while ((int)uVar11 < iVar2);
      if ((uVar9 >> 0x20 != 0) && (iVar2 < 4)) {
        *(int *)(this + (longlong)iVar2 * 4 + 4) = (int)(uVar9 >> 0x20);
        *(int *)this = *(int *)this + 1;
      }
    }
  }
LAB_14f8fc2ad:
  ShiftLeft(this,uVar5);
  return this;
}

// BigUnsigned<4> @ 14f8fc350

/* public: __cdecl absl::lts_20240722::strings_internal::BigUnsigned<4>::BigUnsigned<4>(void)
   __ptr64 */

BigUnsigned<4> * __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<4>::BigUnsigned<4>(BigUnsigned<4> *this)

{
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 4) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  return this;
}

// BigUnsigned<4> @ 14f8fc370

/* public: __cdecl absl::lts_20240722::strings_internal::BigUnsigned<4>::BigUnsigned<4>(unsigned
   __int64) __ptr64 */

BigUnsigned<4> * __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<4>::BigUnsigned<4>
          (BigUnsigned<4> *this,__uint64 param_1)

{
  if (param_1 >> 0x20 != 0) {
    *(int *)(this + 4) = (int)param_1;
    *(undefined4 *)this = 2;
    *(int *)(this + 8) = (int)(param_1 >> 0x20);
    *(undefined8 *)(this + 0xc) = 0;
    return this;
  }
  *(__uint64 *)(this + 4) = param_1;
  *(uint *)this = (uint)(param_1 != 0);
  *(undefined8 *)(this + 0xc) = 0;
  return this;
}

// BigUnsigned<84> @ 14f8fc3c0

/* public: __cdecl absl::lts_20240722::strings_internal::BigUnsigned<84>::BigUnsigned<84>(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

BigUnsigned<84> * __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::BigUnsigned<84>
          (BigUnsigned<84> *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  BigUnsigned<84> *pBVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  
  uVar7 = 0;
  *(undefined4 *)this = 0;
  memset(this + 4,0,0x150);
  pcVar3 = param_1->_Mydata;
  pcVar1 = pcVar3 + param_1->_Mysize;
  for (pcVar5 = pcVar3; (pcVar5 != pcVar1 && ((byte)(*pcVar5 - 0x30U) < 10)); pcVar5 = pcVar5 + 1) {
  }
  if (pcVar5 != pcVar1) {
    return this;
  }
  if (param_1->_Mysize == 0) {
    return this;
  }
  uVar4 = ReadDigits(this,pcVar3,pcVar1,0x32a);
  if ((int)uVar4 < 1) {
    return this;
  }
  if ((int)uVar4 < 10) {
    iVar2 = *(int *)this;
    uVar4 = *(uint *)((longlong)&kTenToNth + (longlong)(int)uVar4 * 4);
    if (iVar2 == 0) {
      return this;
    }
    if (uVar4 == 1) {
      return this;
    }
    if (uVar4 == 0) {
      if (0 < iVar2) {
        memset(this + 4,0,(longlong)iVar2 << 2);
      }
      *(undefined4 *)this = 0;
      return this;
    }
    uVar12 = uVar7;
    pBVar9 = this;
    if (iVar2 < 1) {
      return this;
    }
    do {
      pBVar9 = pBVar9 + 4;
      uVar13 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar13;
      uVar8 = uVar12 + (ulonglong)*(uint *)pBVar9 * (ulonglong)uVar4;
      *(uint *)pBVar9 = (uint)uVar8;
      iVar2 = *(int *)this;
      uVar12 = uVar8 >> 0x20;
    } while ((int)uVar13 < iVar2);
    if (uVar8 >> 0x20 == 0) {
      return this;
    }
    if (0x53 < iVar2) {
      return this;
    }
    *(int *)(this + (longlong)iVar2 * 4 + 4) = (int)(uVar8 >> 0x20);
    *(int *)this = *(int *)this + 1;
    return this;
  }
  uVar13 = uVar4;
  if (0xc < (int)uVar4) {
    uVar12 = (ulonglong)uVar4 / 0xd;
    uVar13 = uVar4 + (int)uVar12 * -0xd;
    do {
      if ((*(int *)this != 0) && (uVar8 = uVar7, uVar11 = uVar7, pBVar9 = this, 0 < *(int *)this)) {
        do {
          pBVar9 = pBVar9 + 4;
          uVar10 = (int)uVar11 + 1;
          uVar6 = uVar8 + (ulonglong)*(uint *)pBVar9 * 0x48c27395;
          *(uint *)pBVar9 = (uint)uVar6;
          iVar2 = *(int *)this;
          uVar8 = uVar6 >> 0x20;
          uVar11 = (ulonglong)uVar10;
        } while ((int)uVar10 < iVar2);
        if ((uVar6 >> 0x20 != 0) && (iVar2 < 0x54)) {
          *(int *)(this + (longlong)iVar2 * 4 + 4) = (int)(uVar6 >> 0x20);
          *(int *)this = *(int *)this + 1;
        }
      }
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if ((int)uVar13 < 1) goto LAB_14f8fc54d;
  }
  uVar13 = *(uint *)((longlong)&kFiveToNth + (longlong)(int)uVar13 * 4);
  iVar2 = *(int *)this;
  if ((iVar2 != 0) && (uVar13 != 1)) {
    if (uVar13 == 0) {
      if (0 < iVar2) {
        memset(this + 4,0,(longlong)iVar2 << 2);
      }
      *(undefined4 *)this = 0;
      ShiftLeft(this,uVar4);
      return this;
    }
    uVar12 = uVar7;
    pBVar9 = this;
    if (0 < iVar2) {
      do {
        pBVar9 = pBVar9 + 4;
        uVar10 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar10;
        uVar8 = uVar12 + (ulonglong)*(uint *)pBVar9 * (ulonglong)uVar13;
        *(uint *)pBVar9 = (uint)uVar8;
        iVar2 = *(int *)this;
        uVar12 = uVar8 >> 0x20;
      } while ((int)uVar10 < iVar2);
      if ((uVar8 >> 0x20 != 0) && (iVar2 < 0x54)) {
        *(int *)(this + (longlong)iVar2 * 4 + 4) = (int)(uVar8 >> 0x20);
        *(int *)this = *(int *)this + 1;
      }
    }
  }
LAB_14f8fc54d:
  ShiftLeft(this,uVar4);
  return this;
}

// operator== @ 14f8fc5f0

/* public: bool __cdecl std::_String_view_iterator<struct std::char_traits<char> >::operator==(class
   std::_String_view_iterator<struct std::char_traits<char> > const & __ptr64)const __ptr64 */

bool __thiscall
std::_String_view_iterator<std::char_traits<char>_>::operator==
          (_String_view_iterator<std::char_traits<char>_> *this,
          _String_view_iterator<struct_std::char_traits<char>_> *param_1)

{
  return this->_Myptr == *(char **)param_1;
}

// AddWithCarry @ 14f8fc600

/* private: void __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<4>::AddWithCarry(int,unsigned int) __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<4>::AddWithCarry
          (BigUnsigned<4> *this,int param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  BigUnsigned<4> *pBVar3;
  uint uVar4;
  longlong lVar5;
  int local_18 [6];
  
  if (param_2 != 0) {
    if (param_1 < 4) {
      lVar5 = (longlong)param_1;
      do {
        if (param_2 == 0) break;
        uVar4 = *(int *)(this + lVar5 * 4 + 4) + param_2;
        *(uint *)(this + lVar5 * 4 + 4) = uVar4;
        lVar2 = lVar5 + 1;
        iVar1 = param_1 + 1;
        if (param_2 <= uVar4) {
          lVar2 = lVar5;
          iVar1 = param_1;
        }
        param_1 = iVar1;
        param_2 = (uint)(uVar4 < param_2);
        lVar5 = lVar2;
      } while (param_1 < 4);
    }
    local_18[0] = param_1 + 1;
    pBVar3 = (BigUnsigned<4> *)local_18;
    if (param_1 + 1 < *(int *)this) {
      pBVar3 = this;
    }
    iVar1 = 4;
    if (*(int *)pBVar3 < 4) {
      iVar1 = *(int *)pBVar3;
    }
    *(int *)this = iVar1;
  }
  return;
}

// AddWithCarry @ 14f8fc680

/* private: void __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<4>::AddWithCarry(int,unsigned __int64) __ptr64
    */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<4>::AddWithCarry
          (BigUnsigned<4> *this,int param_1,__uint64 param_2)

{
  longlong lVar1;
  longlong lVar2;
  BigUnsigned<4> *pBVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar7;
  bool bVar8;
  bool bVar9;
  int local_18;
  int local_14;
  int local_10 [4];
  int iVar6;
  
  pBVar3 = (BigUnsigned<4> *)&local_18;
  lVar2 = (longlong)param_1;
  if (param_2 == 0) {
    return;
  }
  if (3 < param_1) {
    return;
  }
  *(uint *)(this + lVar2 * 4 + 4) = *(int *)(this + lVar2 * 4 + 4) + (uint)param_2;
  uVar7 = param_2 >> 0x20;
  if (*(uint *)(this + lVar2 * 4 + 4) < (uint)param_2) {
    iVar6 = (int)(param_2 >> 0x20);
    uVar5 = iVar6 + 1;
    uVar7 = (ulonglong)uVar5;
    if (uVar5 == 0) {
      local_18 = param_1 + 2;
      lVar2 = (longlong)(param_1 + 2);
      for (uVar5 = iVar6 + 2; (lVar2 < 4 && (uVar5 != 0)); uVar5 = (uint)(uVar4 < uVar5)) {
        uVar4 = *(int *)(this + lVar2 * 4 + 4) + uVar5;
        *(uint *)(this + lVar2 * 4 + 4) = uVar4;
        iVar6 = local_18 + 1;
        lVar1 = lVar2 + 1;
        if (uVar5 <= uVar4) {
          iVar6 = local_18;
          lVar1 = lVar2;
        }
        local_18 = iVar6;
        lVar2 = lVar1;
      }
      local_18 = local_18 + 1;
      bVar9 = SBORROW4(local_18,*(int *)this);
      bVar8 = local_18 - *(int *)this < 0;
      goto LAB_14f8fc775;
    }
  }
  local_10[0] = param_1 + 1;
  if ((int)uVar7 == 0) {
    bVar9 = SBORROW4(local_10[0],*(int *)this);
    bVar8 = local_10[0] - *(int *)this < 0;
    pBVar3 = (BigUnsigned<4> *)local_10;
  }
  else {
    lVar2 = lVar2 + 1;
    while ((lVar2 < 4 && (uVar5 = (uint)uVar7, uVar5 != 0))) {
      uVar4 = *(int *)(this + lVar2 * 4 + 4) + uVar5;
      *(uint *)(this + lVar2 * 4 + 4) = uVar4;
      iVar6 = local_10[0] + 1;
      lVar1 = lVar2 + 1;
      if (uVar5 <= uVar4) {
        iVar6 = local_10[0];
        lVar1 = lVar2;
      }
      local_10[0] = iVar6;
      lVar2 = lVar1;
      uVar7 = (ulonglong)(uVar4 < uVar5);
    }
    local_14 = local_10[0] + 1;
    bVar9 = SBORROW4(local_14,*(int *)this);
    bVar8 = local_14 - *(int *)this < 0;
    pBVar3 = (BigUnsigned<4> *)&local_14;
  }
LAB_14f8fc775:
  if (bVar9 != bVar8) {
    pBVar3 = this;
  }
  iVar6 = 4;
  if (*(int *)pBVar3 < 4) {
    iVar6 = *(int *)pBVar3;
  }
  *(int *)this = iVar6;
  return;
}

// AddWithCarry @ 14f8fc7a0

/* private: void __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<84>::AddWithCarry(int,unsigned int) __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::AddWithCarry
          (BigUnsigned<84> *this,int param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  BigUnsigned<84> *pBVar3;
  uint uVar4;
  longlong lVar5;
  int local_18 [6];
  
  if (param_2 != 0) {
    if (param_1 < 0x54) {
      lVar5 = (longlong)param_1;
      do {
        if (param_2 == 0) break;
        uVar4 = *(int *)(this + lVar5 * 4 + 4) + param_2;
        *(uint *)(this + lVar5 * 4 + 4) = uVar4;
        lVar2 = lVar5 + 1;
        iVar1 = param_1 + 1;
        if (param_2 <= uVar4) {
          lVar2 = lVar5;
          iVar1 = param_1;
        }
        param_1 = iVar1;
        param_2 = (uint)(uVar4 < param_2);
        lVar5 = lVar2;
      } while (param_1 < 0x54);
    }
    local_18[0] = param_1 + 1;
    pBVar3 = (BigUnsigned<84> *)local_18;
    if (param_1 + 1 < *(int *)this) {
      pBVar3 = this;
    }
    iVar1 = 0x54;
    if (*(int *)pBVar3 < 0x54) {
      iVar1 = *(int *)pBVar3;
    }
    *(int *)this = iVar1;
  }
  return;
}

// AddWithCarry @ 14f8fc820

/* private: void __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<84>::AddWithCarry(int,unsigned __int64) __ptr64
    */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::AddWithCarry
          (BigUnsigned<84> *this,int param_1,__uint64 param_2)

{
  longlong lVar1;
  longlong lVar2;
  BigUnsigned<84> *pBVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar7;
  bool bVar8;
  bool bVar9;
  int local_18;
  int local_14;
  int local_10 [4];
  int iVar6;
  
  pBVar3 = (BigUnsigned<84> *)&local_18;
  lVar2 = (longlong)param_1;
  if (param_2 == 0) {
    return;
  }
  if (0x53 < param_1) {
    return;
  }
  *(uint *)(this + lVar2 * 4 + 4) = *(int *)(this + lVar2 * 4 + 4) + (uint)param_2;
  uVar7 = param_2 >> 0x20;
  if (*(uint *)(this + lVar2 * 4 + 4) < (uint)param_2) {
    iVar6 = (int)(param_2 >> 0x20);
    uVar5 = iVar6 + 1;
    uVar7 = (ulonglong)uVar5;
    if (uVar5 == 0) {
      local_18 = param_1 + 2;
      lVar2 = (longlong)(param_1 + 2);
      for (uVar5 = iVar6 + 2; (lVar2 < 0x54 && (uVar5 != 0)); uVar5 = (uint)(uVar4 < uVar5)) {
        uVar4 = *(int *)(this + lVar2 * 4 + 4) + uVar5;
        *(uint *)(this + lVar2 * 4 + 4) = uVar4;
        iVar6 = local_18 + 1;
        lVar1 = lVar2 + 1;
        if (uVar5 <= uVar4) {
          iVar6 = local_18;
          lVar1 = lVar2;
        }
        local_18 = iVar6;
        lVar2 = lVar1;
      }
      local_18 = local_18 + 1;
      bVar9 = SBORROW4(local_18,*(int *)this);
      bVar8 = local_18 - *(int *)this < 0;
      goto LAB_14f8fc915;
    }
  }
  local_10[0] = param_1 + 1;
  if ((int)uVar7 == 0) {
    bVar9 = SBORROW4(local_10[0],*(int *)this);
    bVar8 = local_10[0] - *(int *)this < 0;
    pBVar3 = (BigUnsigned<84> *)local_10;
  }
  else {
    lVar2 = lVar2 + 1;
    while ((lVar2 < 0x54 && (uVar5 = (uint)uVar7, uVar5 != 0))) {
      uVar4 = *(int *)(this + lVar2 * 4 + 4) + uVar5;
      *(uint *)(this + lVar2 * 4 + 4) = uVar4;
      iVar6 = local_10[0] + 1;
      lVar1 = lVar2 + 1;
      if (uVar5 <= uVar4) {
        iVar6 = local_10[0];
        lVar1 = lVar2;
      }
      local_10[0] = iVar6;
      lVar2 = lVar1;
      uVar7 = (ulonglong)(uVar4 < uVar5);
    }
    local_14 = local_10[0] + 1;
    bVar9 = SBORROW4(local_14,*(int *)this);
    bVar8 = local_14 - *(int *)this < 0;
    pBVar3 = (BigUnsigned<84> *)&local_14;
  }
LAB_14f8fc915:
  if (bVar9 != bVar8) {
    pBVar3 = this;
  }
  iVar6 = 0x54;
  if (*(int *)pBVar3 < 0x54) {
    iVar6 = *(int *)pBVar3;
  }
  *(int *)this = iVar6;
  return;
}

// Digits10 @ 14f8fc940

/* public: static int __cdecl absl::lts_20240722::strings_internal::BigUnsigned<4>::Digits10(void)
    */

int __cdecl absl::lts_20240722::strings_internal::BigUnsigned<4>::Digits10(void)

{
  return 0x26;
}

// Digits10 @ 14f8fc950

/* public: static int __cdecl absl::lts_20240722::strings_internal::BigUnsigned<84>::Digits10(void)
    */

int __cdecl absl::lts_20240722::strings_internal::BigUnsigned<84>::Digits10(void)

{
  return 0x329;
}

// FiveToTheNth @ 14f8fc960

/* public: static class absl::lts_20240722::strings_internal::BigUnsigned<4> __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<4>::FiveToTheNth(int) */

BigUnsigned<4> * __cdecl
absl::lts_20240722::strings_internal::BigUnsigned<4>::FiveToTheNth(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined4 in_register_0000000c;
  BigUnsigned<4> *this;
  uint in_EDX;
  int iVar5;
  
  this = (BigUnsigned<4> *)CONCAT44(in_register_0000000c,param_1);
  *(undefined4 *)(this + 4) = 1;
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  bVar3 = true;
  for (; 0x1a < (int)in_EDX; in_EDX = in_EDX + uVar2 * -0x1b) {
    uVar2 = in_EDX / 0x1b;
    if (0x14 < in_EDX / 0x1b) {
      uVar2 = 0x14;
    }
    iVar4 = uVar2 * 2;
    if (bVar3) {
      if (uVar2 != 0) {
        memmove(this + 4,&DAT_1535369d0 + (longlong)(int)((uVar2 - 1) * uVar2) * 4,
                (longlong)iVar4 << 2);
      }
      *(int *)this = iVar4;
      bVar3 = false;
    }
    else {
      iVar1 = *(int *)this;
      iVar5 = iVar1 + -2 + iVar4;
      if (3 < iVar5) {
        iVar5 = 3;
      }
      for (; -1 < iVar5; iVar5 = iVar5 + -1) {
        MultiplyStep(this,iVar1,(uint *)(&DAT_1535369d0 + (longlong)(int)((uVar2 - 1) * uVar2) * 4),
                     iVar4,iVar5);
      }
    }
  }
  MultiplyByFiveToTheNth(this,in_EDX);
  return this;
}

// FiveToTheNth @ 14f8fcab0

/* public: static class absl::lts_20240722::strings_internal::BigUnsigned<84> __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<84>::FiveToTheNth(int) */

BigUnsigned<84> * __cdecl
absl::lts_20240722::strings_internal::BigUnsigned<84>::FiveToTheNth(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined4 in_register_0000000c;
  BigUnsigned<84> *this;
  uint in_EDX;
  int iVar5;
  
  this = (BigUnsigned<84> *)CONCAT44(in_register_0000000c,param_1);
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 1;
  memset(this + 0xc,0,0x148);
  bVar3 = true;
  for (; 0x1a < (int)in_EDX; in_EDX = in_EDX + uVar2 * -0x1b) {
    uVar2 = in_EDX / 0x1b;
    if (0x14 < in_EDX / 0x1b) {
      uVar2 = 0x14;
    }
    iVar4 = uVar2 * 2;
    if (bVar3) {
      if (uVar2 != 0) {
        memmove(this + 4,&DAT_1535369d0 + (longlong)(int)((uVar2 - 1) * uVar2) * 4,
                (longlong)iVar4 << 2);
      }
      *(int *)this = iVar4;
      bVar3 = false;
    }
    else {
      iVar1 = *(int *)this;
      iVar5 = iVar1 + -2 + iVar4;
      if (0x53 < iVar5) {
        iVar5 = 0x53;
      }
      for (; -1 < iVar5; iVar5 = iVar5 + -1) {
        MultiplyStep(this,iVar1,(uint *)(&DAT_1535369d0 + (longlong)(int)((uVar2 - 1) * uVar2) * 4),
                     iVar4,iVar5);
      }
    }
  }
  MultiplyByFiveToTheNth(this,in_EDX);
  return this;
}

// GetWord @ 14f8fcc00

/* public: unsigned int __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<4>::GetWord(int)const __ptr64 */

uint __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<4>::GetWord(BigUnsigned<4> *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    return *(uint *)(this + (longlong)param_1 * 4 + 4);
  }
  return 0;
}

// MultiplyBy @ 14f8fcc50

/* private: void __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<4>::MultiplyBy(int,unsigned int const *
   __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<4>::MultiplyBy
          (BigUnsigned<4> *this,int param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  __uint64 _Var8;
  longlong lVar9;
  BigUnsigned<4> *pBVar10;
  
  uVar7 = param_1 + -2 + *(int *)this;
  if (3 < (int)uVar7) {
    uVar7 = 3;
  }
  if (-1 < (int)uVar7) {
    uVar1 = *(int *)this - 1;
    do {
      uVar3 = uVar1;
      if ((int)uVar7 < (int)uVar1) {
        uVar3 = uVar7;
      }
      uVar5 = 0;
      _Var8 = 0;
      lVar9 = (longlong)(int)uVar3;
      if (-1 < (int)uVar3) {
        pBVar10 = this + lVar9 * 4 + 4;
        lVar4 = (longlong)(int)(uVar7 - uVar3);
        do {
          if (param_1 <= lVar4) break;
          uVar3 = *(uint *)pBVar10;
          pBVar10 = pBVar10 + -4;
          puVar2 = param_2 + lVar4;
          lVar4 = lVar4 + 1;
          uVar6 = uVar5 + (ulonglong)*puVar2 * (ulonglong)uVar3;
          uVar5 = uVar6 & 0xffffffff;
          _Var8 = _Var8 + (uVar6 >> 0x20);
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
      }
      AddWithCarry(this,uVar7 + 1,_Var8);
      *(int *)(this + (ulonglong)uVar7 * 4 + 4) = (int)uVar5;
      if ((uVar5 != 0) && (*(int *)this <= (int)uVar7)) {
        *(uint *)this = uVar7 + 1;
      }
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  return;
}

// MultiplyBy @ 14f8fcd40

/* public: void __cdecl absl::lts_20240722::strings_internal::BigUnsigned<4>::MultiplyBy(unsigned
   int) __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<4>::MultiplyBy(BigUnsigned<4> *this,uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  BigUnsigned<4> *pBVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((*(int *)this != 0) && (param_1 != 1)) {
    if (param_1 == 0) {
      if (*(int *)this < 1) {
        *(undefined4 *)this = 0;
        return;
      }
      memset(this + 4,0,(longlong)*(int *)this << 2);
      *(undefined4 *)this = 0;
      return;
    }
    uVar3 = 0;
    uVar6 = uVar3;
    pBVar4 = this;
    if (0 < *(int *)this) {
      do {
        pBVar4 = pBVar4 + 4;
        uVar5 = (int)uVar6 + 1;
        uVar2 = uVar3 + (ulonglong)*(uint *)pBVar4 * (ulonglong)param_1;
        *(uint *)pBVar4 = (uint)uVar2;
        iVar1 = *(int *)this;
        uVar3 = uVar2 >> 0x20;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < iVar1);
      if ((uVar3 != 0) && (iVar1 < 4)) {
        *(int *)(this + (longlong)iVar1 * 4 + 4) = (int)(uVar2 >> 0x20);
        *(int *)this = *(int *)this + 1;
      }
    }
  }
  return;
}

// MultiplyBy @ 14f8fcdb0

/* public: void __cdecl absl::lts_20240722::strings_internal::BigUnsigned<4>::MultiplyBy(unsigned
   __int64) __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<4>::MultiplyBy
          (BigUnsigned<4> *this,__uint64 param_1)

{
  __uint64 local_res10 [3];
  
  local_res10[0] = param_1;
  if ((int)(param_1 >> 0x20) == 0) {
    MultiplyBy(this,(uint)param_1);
    return;
  }
  MultiplyBy(this,2,(uint *)local_res10);
  return;
}

// MultiplyByFiveToTheNth @ 14f8fcdf0

/* public: void __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<4>::MultiplyByFiveToTheNth(int) __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<4>::MultiplyByFiveToTheNth
          (BigUnsigned<4> *this,int param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  BigUnsigned<4> *pBVar4;
  int iVar5;
  ulonglong uVar6;
  
  if (0xc < param_1) {
    uVar6 = (ulonglong)(uint)param_1 / 0xd;
    param_1 = param_1 + (int)uVar6 * -0xd;
    do {
      if (*(int *)this != 0) {
        uVar3 = 0;
        iVar5 = 0;
        pBVar4 = this;
        if (0 < *(int *)this) {
          do {
            pBVar4 = pBVar4 + 4;
            iVar5 = iVar5 + 1;
            uVar2 = uVar3 + (ulonglong)*(uint *)pBVar4 * 0x48c27395;
            *(uint *)pBVar4 = (uint)uVar2;
            iVar1 = *(int *)this;
            uVar3 = uVar2 >> 0x20;
          } while (iVar5 < iVar1);
          if ((uVar3 != 0) && (iVar1 < 4)) {
            *(int *)(this + (longlong)iVar1 * 4 + 4) = (int)(uVar2 >> 0x20);
            *(int *)this = *(int *)this + 1;
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (param_1 < 1) {
    return;
  }
  MultiplyBy(this,*(uint *)((longlong)&kFiveToNth + (longlong)param_1 * 4));
  return;
}

// MultiplyByTenToTheNth @ 14f8fce90

/* public: void __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<4>::MultiplyByTenToTheNth(int) __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<4>::MultiplyByTenToTheNth
          (BigUnsigned<4> *this,int param_1)

{
  if (9 < param_1) {
    MultiplyByFiveToTheNth(this,param_1);
    ShiftLeft(this,param_1);
    return;
  }
  if (0 < param_1) {
    MultiplyBy(this,*(uint *)((longlong)&kTenToNth + (longlong)param_1 * 4));
  }
  return;
}

// MultiplyByTenToTheNth @ 14f8fcef0

/* public: void __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<84>::MultiplyByTenToTheNth(int) __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::MultiplyByTenToTheNth
          (BigUnsigned<84> *this,int param_1)

{
  if (9 < param_1) {
    MultiplyByFiveToTheNth(this,param_1);
    ShiftLeft(this,param_1);
    return;
  }
  if (0 < param_1) {
    MultiplyBy(this,*(uint *)((longlong)&kTenToNth + (longlong)param_1 * 4));
  }
  return;
}

// MultiplyStep @ 14f8fcf50

/* private: void __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<4>::MultiplyStep(int,unsigned int const *
   __ptr64,int,int) __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<4>::MultiplyStep
          (BigUnsigned<4> *this,int param_1,uint *param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  BigUnsigned<4> *pBVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  BigUnsigned<4> *pBVar12;
  bool bVar13;
  bool bVar14;
  int local_18;
  int local_14;
  int local_10 [2];
  
  pBVar3 = (BigUnsigned<4> *)&local_18;
  iVar8 = param_1 + -1;
  if (param_4 < param_1 + -1) {
    iVar8 = param_4;
  }
  uVar5 = 0;
  uVar7 = 0;
  lVar11 = (longlong)iVar8;
  if (-1 < iVar8) {
    lVar10 = (longlong)(param_4 - iVar8);
    pBVar12 = this + lVar11 * 4 + 4;
    do {
      if (param_3 <= lVar10) break;
      uVar9 = *(uint *)pBVar12;
      pBVar12 = pBVar12 + -4;
      puVar1 = param_2 + lVar10;
      lVar10 = lVar10 + 1;
      uVar6 = uVar5 + (ulonglong)*puVar1 * (ulonglong)uVar9;
      uVar5 = uVar6 & 0xffffffff;
      uVar7 = uVar7 + (uVar6 >> 0x20);
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar8 = param_4 + 1;
  if ((uVar7 != 0) && (iVar8 < 4)) {
    lVar11 = (longlong)iVar8;
    uVar6 = uVar7 >> 0x20;
    *(uint *)(this + lVar11 * 4 + 4) = *(int *)(this + lVar11 * 4 + 4) + (uint)uVar7;
    if ((*(uint *)(this + lVar11 * 4 + 4) < (uint)uVar7) &&
       (uVar9 = (int)(uVar7 >> 0x20) + 1, uVar6 = (ulonglong)uVar9, uVar9 == 0)) {
      lVar11 = (longlong)(param_4 + 3);
      local_18 = param_4 + 3;
      for (uVar9 = 1; (lVar11 < 4 && (uVar9 != 0)); uVar9 = (uint)(uVar4 < uVar9)) {
        uVar4 = *(int *)(this + lVar11 * 4 + 4) + uVar9;
        *(uint *)(this + lVar11 * 4 + 4) = uVar4;
        iVar2 = local_18 + 1;
        lVar10 = lVar11 + 1;
        if (uVar9 <= uVar4) {
          iVar2 = local_18;
          lVar10 = lVar11;
        }
        lVar11 = lVar10;
        local_18 = iVar2;
      }
      local_18 = local_18 + 1;
      bVar14 = SBORROW4(local_18,*(int *)this);
      bVar13 = local_18 - *(int *)this < 0;
    }
    else {
      local_10[0] = param_4 + 2;
      if ((int)uVar6 == 0) {
        bVar14 = SBORROW4(local_10[0],*(int *)this);
        bVar13 = local_10[0] - *(int *)this < 0;
        pBVar3 = (BigUnsigned<4> *)local_10;
      }
      else {
        lVar11 = lVar11 + 1;
        while ((lVar11 < 4 && (uVar9 = (uint)uVar6, uVar9 != 0))) {
          uVar4 = *(int *)(this + lVar11 * 4 + 4) + uVar9;
          *(uint *)(this + lVar11 * 4 + 4) = uVar4;
          iVar2 = local_10[0] + 1;
          lVar10 = lVar11 + 1;
          if (uVar9 <= uVar4) {
            iVar2 = local_10[0];
            lVar10 = lVar11;
          }
          lVar11 = lVar10;
          local_10[0] = iVar2;
          uVar6 = (ulonglong)(uVar4 < uVar9);
        }
        local_14 = local_10[0] + 1;
        bVar14 = SBORROW4(local_14,*(int *)this);
        bVar13 = local_14 - *(int *)this < 0;
        pBVar3 = (BigUnsigned<4> *)&local_14;
      }
    }
    if (bVar14 != bVar13) {
      pBVar3 = this;
    }
    iVar2 = 4;
    if (*(int *)pBVar3 < 4) {
      iVar2 = *(int *)pBVar3;
    }
    *(int *)this = iVar2;
  }
  *(int *)(this + (longlong)param_4 * 4 + 4) = (int)uVar5;
  if ((uVar5 != 0) && (*(int *)this <= param_4)) {
    *(int *)this = iVar8;
  }
  return;
}

// MultiplyStep @ 14f8fd100

/* private: void __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<84>::MultiplyStep(int,unsigned int const *
   __ptr64,int,int) __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::MultiplyStep
          (BigUnsigned<84> *this,int param_1,uint *param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  BigUnsigned<84> *pBVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  BigUnsigned<84> *pBVar12;
  bool bVar13;
  bool bVar14;
  int local_18;
  int local_14;
  int local_10 [2];
  
  pBVar3 = (BigUnsigned<84> *)&local_18;
  iVar8 = param_1 + -1;
  if (param_4 < param_1 + -1) {
    iVar8 = param_4;
  }
  uVar5 = 0;
  uVar7 = 0;
  lVar11 = (longlong)iVar8;
  if (-1 < iVar8) {
    lVar10 = (longlong)(param_4 - iVar8);
    pBVar12 = this + lVar11 * 4 + 4;
    do {
      if (param_3 <= lVar10) break;
      uVar9 = *(uint *)pBVar12;
      pBVar12 = pBVar12 + -4;
      puVar1 = param_2 + lVar10;
      lVar10 = lVar10 + 1;
      uVar6 = uVar5 + (ulonglong)*puVar1 * (ulonglong)uVar9;
      uVar5 = uVar6 & 0xffffffff;
      uVar7 = uVar7 + (uVar6 >> 0x20);
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar8 = param_4 + 1;
  if ((uVar7 != 0) && (iVar8 < 0x54)) {
    lVar11 = (longlong)iVar8;
    uVar6 = uVar7 >> 0x20;
    *(uint *)(this + lVar11 * 4 + 4) = *(int *)(this + lVar11 * 4 + 4) + (uint)uVar7;
    if ((*(uint *)(this + lVar11 * 4 + 4) < (uint)uVar7) &&
       (uVar9 = (int)(uVar7 >> 0x20) + 1, uVar6 = (ulonglong)uVar9, uVar9 == 0)) {
      lVar11 = (longlong)(param_4 + 3);
      local_18 = param_4 + 3;
      for (uVar9 = 1; (lVar11 < 0x54 && (uVar9 != 0)); uVar9 = (uint)(uVar4 < uVar9)) {
        uVar4 = *(int *)(this + lVar11 * 4 + 4) + uVar9;
        *(uint *)(this + lVar11 * 4 + 4) = uVar4;
        iVar2 = local_18 + 1;
        lVar10 = lVar11 + 1;
        if (uVar9 <= uVar4) {
          iVar2 = local_18;
          lVar10 = lVar11;
        }
        lVar11 = lVar10;
        local_18 = iVar2;
      }
      local_18 = local_18 + 1;
      bVar14 = SBORROW4(local_18,*(int *)this);
      bVar13 = local_18 - *(int *)this < 0;
    }
    else {
      local_10[0] = param_4 + 2;
      if ((int)uVar6 == 0) {
        bVar14 = SBORROW4(local_10[0],*(int *)this);
        bVar13 = local_10[0] - *(int *)this < 0;
        pBVar3 = (BigUnsigned<84> *)local_10;
      }
      else {
        lVar11 = lVar11 + 1;
        while ((lVar11 < 0x54 && (uVar9 = (uint)uVar6, uVar9 != 0))) {
          uVar4 = *(int *)(this + lVar11 * 4 + 4) + uVar9;
          *(uint *)(this + lVar11 * 4 + 4) = uVar4;
          iVar2 = local_10[0] + 1;
          lVar10 = lVar11 + 1;
          if (uVar9 <= uVar4) {
            iVar2 = local_10[0];
            lVar10 = lVar11;
          }
          lVar11 = lVar10;
          local_10[0] = iVar2;
          uVar6 = (ulonglong)(uVar4 < uVar9);
        }
        local_14 = local_10[0] + 1;
        bVar14 = SBORROW4(local_14,*(int *)this);
        bVar13 = local_14 - *(int *)this < 0;
        pBVar3 = (BigUnsigned<84> *)&local_14;
      }
    }
    if (bVar14 != bVar13) {
      pBVar3 = this;
    }
    iVar2 = 0x54;
    if (*(int *)pBVar3 < 0x54) {
      iVar2 = *(int *)pBVar3;
    }
    *(int *)this = iVar2;
  }
  *(int *)(this + (longlong)param_4 * 4 + 4) = (int)uVar5;
  if ((uVar5 != 0) && (*(int *)this <= param_4)) {
    *(int *)this = iVar8;
  }
  return;
}

// ReadDigits @ 14f8fd2b0

/* private: int __cdecl absl::lts_20240722::strings_internal::BigUnsigned<4>::ReadDigits(char const
   * __ptr64,char const * __ptr64,int) __ptr64 */

int __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<4>::ReadDigits
          (BigUnsigned<4> *this,char *param_1,char *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char cVar13;
  BigUnsigned<4> *pBVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int local_38;
  int local_34 [3];
  
  if (0 < *(int *)this) {
    memset(this + 4,0,(longlong)*(int *)this << 2);
  }
  iVar18 = 0;
  bVar2 = false;
  *(undefined4 *)this = 0;
  for (; (param_1 < param_2 && (*param_1 == '0')); param_1 = param_1 + 1) {
  }
  if (param_1 < param_2) {
LAB_14f8fd320:
    pcVar6 = param_2 + -1;
    if (param_2[-1] == '0') goto code_r0x00014f8fd32d;
    if ((param_1 < param_2) && (param_2[-1] == '.')) {
      iVar18 = 0;
      param_2 = pcVar6;
      while ((param_1 < param_2 && (param_2[-1] == '0'))) {
        iVar18 = iVar18 + 1;
        param_2 = param_2 + -1;
      }
      goto LAB_14f8fd358;
    }
    goto LAB_14f8fd338;
  }
LAB_14f8fd358:
  uVar12 = 0;
  uVar8 = uVar12;
  uVar15 = uVar12;
  if (param_1 != param_2) {
    do {
      iVar5 = (int)uVar15;
      if (param_3 < 1) break;
      cVar1 = *param_1;
      if (cVar1 == '.') {
        bVar2 = true;
      }
      else {
        iVar3 = iVar18 + -1;
        if (!bVar2) {
          iVar3 = iVar18;
        }
        cVar13 = cVar1 + -0x30;
        param_3 = param_3 + -1;
        if (((param_3 == 0) && (param_1 + 1 != param_2)) && ((cVar13 == '\0' || (cVar13 == '\x05')))
           ) {
          cVar13 = cVar1 + -0x2f;
        }
        uVar4 = (int)cVar13 + (int)uVar8 * 10;
        uVar11 = (ulonglong)uVar4;
        uVar8 = uVar11;
        uVar15 = (ulonglong)(iVar5 + 1U);
        iVar18 = iVar3;
        if (iVar5 + 1U == 9) {
          if ((*(int *)this != 0) &&
             (uVar8 = uVar12, uVar15 = uVar12, pBVar14 = this, 0 < *(int *)this)) {
            do {
              pBVar14 = pBVar14 + 4;
              uVar17 = (int)uVar15 + 1;
              uVar7 = uVar8 + (ulonglong)*(uint *)pBVar14 * 1000000000;
              *(uint *)pBVar14 = (uint)uVar7;
              iVar5 = *(int *)this;
              uVar8 = uVar7 >> 0x20;
              uVar15 = (ulonglong)uVar17;
            } while ((int)uVar17 < iVar5);
            if ((uVar7 >> 0x20 != 0) && (iVar5 < 4)) {
              *(int *)(this + (longlong)iVar5 * 4 + 4) = (int)(uVar7 >> 0x20);
              *(int *)this = *(int *)this + 1;
            }
          }
          uVar8 = uVar12;
          uVar15 = uVar12;
          if (uVar4 != 0) {
            do {
              uVar16 = (uint)uVar15;
              uVar17 = (uint)uVar11;
              uVar4 = uVar16;
              if (uVar17 == 0) break;
              uVar10 = *(int *)(this + uVar8 * 4 + 4) + uVar17;
              *(uint *)(this + uVar8 * 4 + 4) = uVar10;
              uVar4 = uVar16 + 1;
              uVar15 = uVar8 + 1;
              if (uVar17 <= uVar10) {
                uVar4 = uVar16;
                uVar15 = uVar8;
              }
              uVar8 = uVar15;
              uVar15 = (ulonglong)uVar4;
              uVar11 = (ulonglong)(uVar10 < uVar17);
            } while ((longlong)uVar8 < 4);
            local_38 = uVar4 + 1;
            pBVar14 = (BigUnsigned<4> *)&local_38;
            if ((int)(uVar4 + 1) < *(int *)this) {
              pBVar14 = this;
            }
            iVar5 = 4;
            if (*(int *)pBVar14 < 4) {
              iVar5 = *(int *)pBVar14;
            }
            *(int *)this = iVar5;
            uVar8 = uVar12;
            uVar15 = uVar12;
          }
        }
      }
      iVar5 = (int)uVar15;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
    if (iVar5 != 0) {
      uVar4 = *(uint *)((longlong)&kTenToNth + (longlong)iVar5 * 4);
      iVar5 = *(int *)this;
      if ((iVar5 != 0) && (uVar4 != 1)) {
        if (uVar4 == 0) {
          if (0 < iVar5) {
            memset(this + 4,0,(longlong)iVar5 << 2);
          }
          *(undefined4 *)this = 0;
        }
        else {
          uVar15 = uVar12;
          pBVar14 = this;
          if (0 < iVar5) {
            do {
              pBVar14 = pBVar14 + 4;
              uVar17 = (int)uVar15 + 1;
              uVar11 = uVar12 + (ulonglong)*(uint *)pBVar14 * (ulonglong)uVar4;
              *(uint *)pBVar14 = (uint)uVar11;
              iVar5 = *(int *)this;
              uVar12 = uVar11 >> 0x20;
              uVar15 = (ulonglong)uVar17;
            } while ((int)uVar17 < iVar5);
            if ((uVar12 != 0) && (iVar5 < 4)) {
              *(int *)(this + (longlong)iVar5 * 4 + 4) = (int)(uVar11 >> 0x20);
              *(int *)this = *(int *)this + 1;
            }
          }
        }
      }
      uVar15 = 0;
      uVar12 = uVar15;
      if ((int)uVar8 != 0) {
        do {
          uVar16 = (uint)uVar12;
          uVar17 = (uint)uVar8;
          uVar4 = uVar16;
          if (uVar17 == 0) break;
          uVar10 = *(int *)(this + uVar15 * 4 + 4) + uVar17;
          *(uint *)(this + uVar15 * 4 + 4) = uVar10;
          uVar4 = uVar16 + 1;
          if (uVar17 <= uVar10) {
            uVar4 = uVar16;
          }
          uVar11 = uVar15 + 1;
          if (uVar17 <= uVar10) {
            uVar11 = uVar15;
          }
          uVar8 = (ulonglong)(uVar10 < uVar17);
          uVar15 = uVar11;
          uVar12 = (ulonglong)uVar4;
        } while ((longlong)uVar11 < 4);
        local_34[0] = uVar4 + 1;
        pBVar14 = (BigUnsigned<4> *)local_34;
        if ((int)(uVar4 + 1) < *(int *)this) {
          pBVar14 = this;
        }
        iVar5 = 4;
        if (*(int *)pBVar14 < 4) {
          iVar5 = *(int *)pBVar14;
        }
        *(int *)this = iVar5;
      }
    }
  }
  if ((param_1 < param_2) && (!bVar2)) {
    pvVar9 = __std_find_trivial_1(param_1,param_2,'.');
    return ((int)pvVar9 - (int)param_1) + iVar18;
  }
  return iVar18;
code_r0x00014f8fd32d:
  iVar18 = iVar18 + 1;
  param_2 = pcVar6;
  if (pcVar6 <= param_1) goto LAB_14f8fd338;
  goto LAB_14f8fd320;
LAB_14f8fd338:
  if ((iVar18 != 0) && (pcVar6 = __std_find_trivial_1(param_1,param_2,'.'), pcVar6 != param_2)) {
    iVar18 = 0;
  }
  goto LAB_14f8fd358;
}

// ReadDigits @ 14f8fd5f0

/* private: int __cdecl absl::lts_20240722::strings_internal::BigUnsigned<84>::ReadDigits(char const
   * __ptr64,char const * __ptr64,int) __ptr64 */

int __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::ReadDigits
          (BigUnsigned<84> *this,char *param_1,char *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char cVar13;
  BigUnsigned<84> *pBVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int local_38;
  int local_34 [3];
  
  if (0 < *(int *)this) {
    memset(this + 4,0,(longlong)*(int *)this << 2);
  }
  iVar18 = 0;
  bVar2 = false;
  *(undefined4 *)this = 0;
  for (; (param_1 < param_2 && (*param_1 == '0')); param_1 = param_1 + 1) {
  }
  if (param_1 < param_2) {
LAB_14f8fd660:
    pcVar6 = param_2 + -1;
    if (param_2[-1] == '0') goto code_r0x00014f8fd66d;
    if ((param_1 < param_2) && (param_2[-1] == '.')) {
      iVar18 = 0;
      param_2 = pcVar6;
      while ((param_1 < param_2 && (param_2[-1] == '0'))) {
        iVar18 = iVar18 + 1;
        param_2 = param_2 + -1;
      }
      goto LAB_14f8fd698;
    }
    goto LAB_14f8fd678;
  }
LAB_14f8fd698:
  uVar12 = 0;
  uVar8 = uVar12;
  uVar15 = uVar12;
  if (param_1 != param_2) {
    do {
      iVar5 = (int)uVar15;
      if (param_3 < 1) break;
      cVar1 = *param_1;
      if (cVar1 == '.') {
        bVar2 = true;
      }
      else {
        iVar3 = iVar18 + -1;
        if (!bVar2) {
          iVar3 = iVar18;
        }
        cVar13 = cVar1 + -0x30;
        param_3 = param_3 + -1;
        if (((param_3 == 0) && (param_1 + 1 != param_2)) && ((cVar13 == '\0' || (cVar13 == '\x05')))
           ) {
          cVar13 = cVar1 + -0x2f;
        }
        uVar4 = (int)cVar13 + (int)uVar8 * 10;
        uVar11 = (ulonglong)uVar4;
        uVar8 = uVar11;
        uVar15 = (ulonglong)(iVar5 + 1U);
        iVar18 = iVar3;
        if (iVar5 + 1U == 9) {
          if ((*(int *)this != 0) &&
             (uVar8 = uVar12, uVar15 = uVar12, pBVar14 = this, 0 < *(int *)this)) {
            do {
              pBVar14 = pBVar14 + 4;
              uVar17 = (int)uVar15 + 1;
              uVar7 = uVar8 + (ulonglong)*(uint *)pBVar14 * 1000000000;
              *(uint *)pBVar14 = (uint)uVar7;
              iVar5 = *(int *)this;
              uVar8 = uVar7 >> 0x20;
              uVar15 = (ulonglong)uVar17;
            } while ((int)uVar17 < iVar5);
            if ((uVar7 >> 0x20 != 0) && (iVar5 < 0x54)) {
              *(int *)(this + (longlong)iVar5 * 4 + 4) = (int)(uVar7 >> 0x20);
              *(int *)this = *(int *)this + 1;
            }
          }
          uVar8 = uVar12;
          uVar15 = uVar12;
          if (uVar4 != 0) {
            do {
              uVar16 = (uint)uVar15;
              uVar17 = (uint)uVar11;
              uVar4 = uVar16;
              if (uVar17 == 0) break;
              uVar10 = *(int *)(this + uVar8 * 4 + 4) + uVar17;
              *(uint *)(this + uVar8 * 4 + 4) = uVar10;
              uVar4 = uVar16 + 1;
              uVar15 = uVar8 + 1;
              if (uVar17 <= uVar10) {
                uVar4 = uVar16;
                uVar15 = uVar8;
              }
              uVar8 = uVar15;
              uVar15 = (ulonglong)uVar4;
              uVar11 = (ulonglong)(uVar10 < uVar17);
            } while ((longlong)uVar8 < 0x54);
            local_38 = uVar4 + 1;
            pBVar14 = (BigUnsigned<84> *)&local_38;
            if ((int)(uVar4 + 1) < *(int *)this) {
              pBVar14 = this;
            }
            iVar5 = 0x54;
            if (*(int *)pBVar14 < 0x54) {
              iVar5 = *(int *)pBVar14;
            }
            *(int *)this = iVar5;
            uVar8 = uVar12;
            uVar15 = uVar12;
          }
        }
      }
      iVar5 = (int)uVar15;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
    if (iVar5 != 0) {
      uVar4 = *(uint *)((longlong)&kTenToNth + (longlong)iVar5 * 4);
      iVar5 = *(int *)this;
      if ((iVar5 != 0) && (uVar4 != 1)) {
        if (uVar4 == 0) {
          if (0 < iVar5) {
            memset(this + 4,0,(longlong)iVar5 << 2);
          }
          *(undefined4 *)this = 0;
        }
        else {
          uVar15 = uVar12;
          pBVar14 = this;
          if (0 < iVar5) {
            do {
              pBVar14 = pBVar14 + 4;
              uVar17 = (int)uVar15 + 1;
              uVar11 = uVar12 + (ulonglong)*(uint *)pBVar14 * (ulonglong)uVar4;
              *(uint *)pBVar14 = (uint)uVar11;
              iVar5 = *(int *)this;
              uVar12 = uVar11 >> 0x20;
              uVar15 = (ulonglong)uVar17;
            } while ((int)uVar17 < iVar5);
            if ((uVar12 != 0) && (iVar5 < 0x54)) {
              *(int *)(this + (longlong)iVar5 * 4 + 4) = (int)(uVar11 >> 0x20);
              *(int *)this = *(int *)this + 1;
            }
          }
        }
      }
      uVar15 = 0;
      uVar12 = uVar15;
      if ((int)uVar8 != 0) {
        do {
          uVar16 = (uint)uVar12;
          uVar17 = (uint)uVar8;
          uVar4 = uVar16;
          if (uVar17 == 0) break;
          uVar10 = *(int *)(this + uVar15 * 4 + 4) + uVar17;
          *(uint *)(this + uVar15 * 4 + 4) = uVar10;
          uVar4 = uVar16 + 1;
          if (uVar17 <= uVar10) {
            uVar4 = uVar16;
          }
          uVar11 = uVar15 + 1;
          if (uVar17 <= uVar10) {
            uVar11 = uVar15;
          }
          uVar8 = (ulonglong)(uVar10 < uVar17);
          uVar15 = uVar11;
          uVar12 = (ulonglong)uVar4;
        } while ((longlong)uVar11 < 0x54);
        local_34[0] = uVar4 + 1;
        pBVar14 = (BigUnsigned<84> *)local_34;
        if ((int)(uVar4 + 1) < *(int *)this) {
          pBVar14 = this;
        }
        iVar5 = 0x54;
        if (*(int *)pBVar14 < 0x54) {
          iVar5 = *(int *)pBVar14;
        }
        *(int *)this = iVar5;
      }
    }
  }
  if ((param_1 < param_2) && (!bVar2)) {
    pvVar9 = __std_find_trivial_1(param_1,param_2,'.');
    return ((int)pvVar9 - (int)param_1) + iVar18;
  }
  return iVar18;
code_r0x00014f8fd66d:
  iVar18 = iVar18 + 1;
  param_2 = pcVar6;
  if (pcVar6 <= param_1) goto LAB_14f8fd678;
  goto LAB_14f8fd660;
LAB_14f8fd678:
  if ((iVar18 != 0) && (pcVar6 = __std_find_trivial_1(param_1,param_2,'.'), pcVar6 != param_2)) {
    iVar18 = 0;
  }
  goto LAB_14f8fd698;
}

// ReadFloatMantissa @ 14f8fd930

/* public: int __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<4>::ReadFloatMantissa(struct
   absl::lts_20240722::strings_internal::ParsedFloat const & __ptr64,int) __ptr64 */

int __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<4>::ReadFloatMantissa
          (BigUnsigned<4> *this,ParsedFloat *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)this) {
    memset(this + 4,0,(longlong)*(int *)this << 2);
  }
  *(undefined4 *)this = 0;
  if (*(char **)(param_1 + 0x18) == (char *)0x0) {
    iVar2 = *(int *)param_1;
    *(int *)(this + 4) = iVar2;
    iVar1 = (int)((ulonglong)*(undefined8 *)param_1 >> 0x20);
    *(int *)(this + 8) = iVar1;
    if (iVar1 == 0) {
      if (iVar2 != 0) {
        *(undefined4 *)this = 1;
      }
      iVar2 = *(int *)(param_1 + 8);
    }
    else {
      *(undefined4 *)this = 2;
      iVar2 = *(int *)(param_1 + 8);
    }
  }
  else {
    iVar2 = ReadDigits(this,*(char **)(param_1 + 0x18),*(char **)(param_1 + 0x20),param_2);
    iVar2 = iVar2 + *(int *)(param_1 + 0xc);
  }
  return iVar2;
}

// ReadFloatMantissa @ 14f8fd9d0

/* public: int __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<84>::ReadFloatMantissa(struct
   absl::lts_20240722::strings_internal::ParsedFloat const & __ptr64,int) __ptr64 */

int __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::ReadFloatMantissa
          (BigUnsigned<84> *this,ParsedFloat *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)this) {
    memset(this + 4,0,(longlong)*(int *)this << 2);
  }
  *(undefined4 *)this = 0;
  if (*(char **)(param_1 + 0x18) == (char *)0x0) {
    iVar2 = *(int *)param_1;
    *(int *)(this + 4) = iVar2;
    iVar1 = (int)((ulonglong)*(undefined8 *)param_1 >> 0x20);
    *(int *)(this + 8) = iVar1;
    if (iVar1 == 0) {
      if (iVar2 != 0) {
        *(undefined4 *)this = 1;
      }
      iVar2 = *(int *)(param_1 + 8);
    }
    else {
      *(undefined4 *)this = 2;
      iVar2 = *(int *)(param_1 + 8);
    }
  }
  else {
    iVar2 = ReadDigits(this,*(char **)(param_1 + 0x18),*(char **)(param_1 + 0x20),param_2);
    iVar2 = iVar2 + *(int *)(param_1 + 0xc);
  }
  return iVar2;
}

// SetToZero @ 14f8fda70

/* public: void __cdecl absl::lts_20240722::strings_internal::BigUnsigned<4>::SetToZero(void)
   __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<4>::SetToZero(BigUnsigned<4> *this)

{
  if (0 < *(int *)this) {
    memset(this + 4,0,(longlong)*(int *)this << 2);
    *(undefined4 *)this = 0;
    return;
  }
  *(undefined4 *)this = 0;
  return;
}

// ShiftLeft @ 14f8fdac0

/* public: void __cdecl absl::lts_20240722::strings_internal::BigUnsigned<4>::ShiftLeft(int) __ptr64
    */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<4>::ShiftLeft(BigUnsigned<4> *this,int param_1)

{
  BigUnsigned<4> *pBVar1;
  uint uVar2;
  int iVar3;
  sbyte sVar4;
  uint uVar5;
  BigUnsigned<4> *pBVar7;
  longlong lVar8;
  ulonglong uVar6;
  
  if (0 < param_1) {
    iVar3 = *(int *)this;
    uVar5 = (uint)param_1 >> 5;
    uVar6 = (ulonglong)uVar5;
    if (3 < uVar5) {
      if (0 < iVar3) {
        memset(this + 4,0,(longlong)iVar3 << 2);
      }
      *(undefined4 *)this = 0;
      return;
    }
    iVar3 = iVar3 + uVar5;
    if (4 < iVar3) {
      iVar3 = 4;
    }
    *(int *)this = iVar3;
    if ((param_1 & 0x1fU) == 0) {
      memmove(this + (((longlong)iVar3 * 4 + 4) -
                     (longlong)(this + ((((longlong)iVar3 - uVar6) + 1) * 4 - (longlong)(this + 4)))
                     ),this + 4,
              (size_t)(this + ((((longlong)iVar3 - uVar6) + 1) * 4 - (longlong)(this + 4))));
    }
    else {
      if (3 < iVar3) {
        iVar3 = 3;
      }
      sVar4 = (sbyte)(param_1 & 0x1fU);
      if ((longlong)uVar6 < (longlong)iVar3) {
        lVar8 = (longlong)iVar3 - uVar6;
        pBVar7 = this + lVar8 * 4;
        do {
          pBVar1 = pBVar7 + 4;
          uVar2 = *(uint *)pBVar7;
          pBVar7 = pBVar7 + -4;
          *(uint *)(pBVar7 + uVar6 * 4 + 8) =
               *(uint *)pBVar1 << sVar4 | uVar2 >> (0x20U - sVar4 & 0x1f);
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      *(int *)(this + uVar6 * 4 + 4) = *(int *)(this + 4) << sVar4;
      iVar3 = *(int *)this;
      if ((iVar3 < 4) && (*(int *)(this + (longlong)iVar3 * 4 + 4) != 0)) {
        *(int *)this = iVar3 + 1;
      }
    }
    if (uVar5 != 0) {
      memset(this + 4,0,uVar6 * 4);
    }
  }
  return;
}

// ToString @ 14f8fdc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __cdecl absl::lts_20240722::strings_internal::BigUnsigned<4>::ToString(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<4>::ToString
          (BigUnsigned<4> *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  longlong lVar8;
  void *pvVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_44;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_40;
  int local_38;
  uint auStack_34 [5];
  ulonglong local_20;
  
  uVar5 = local_48;
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = *(int *)this;
  auStack_34[0] = *(uint *)(this + 4);
  auStack_34[1] = *(undefined4 *)(this + 8);
  auStack_34[2] = *(undefined4 *)(this + 0xc);
  auStack_34[3] = *(undefined4 *)(this + 0x10);
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  local_44 = 1;
  local_40 = __return_storage_ptr__;
  iVar4 = local_38;
  do {
    if (iVar4 < 1) {
      if ((__return_storage_ptr__->_Mypair)._Myval2._Mysize == 0) {
        uVar10 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
        if (uVar10 == 0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
                    (__return_storage_ptr__,1,local_48,0x30);
        }
        else {
          (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 1;
          pbVar7 = __return_storage_ptr__;
          if (0xf < uVar10) {
            pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
          }
          *(undefined2 *)&(pbVar7->_Mypair)._Myval2._Bx = 0x30;
        }
      }
      if ((__return_storage_ptr__->_Mypair)._Myval2._Myres < 0x10) {
        pvVar9 = (void *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx +
                         (__return_storage_ptr__->_Mypair)._Myval2._Mysize);
        pbVar7 = __return_storage_ptr__;
      }
      else {
        pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
        pvVar9 = (void *)((longlong)&(pbVar7->_Mypair)._Myval2._Bx +
                         (__return_storage_ptr__->_Mypair)._Myval2._Mysize);
      }
      __std_reverse_trivially_swappable_1(pbVar7,pvVar9);
      return __return_storage_ptr__;
    }
    lVar8 = (longlong)(iVar4 + -1);
    uVar10 = 0;
    iVar1 = iVar4;
    iVar6 = local_38;
    if (-1 < iVar4 + -1) {
      do {
        uVar10 = (uVar10 << 0x20) + (ulonglong)auStack_34[lVar8];
        auStack_34[lVar8] = (uint)(uVar10 / 10);
        uVar10 = uVar10 % 10;
        lVar8 = lVar8 + -1;
        iVar1 = local_38;
      } while (-1 < lVar8);
    }
    do {
      local_38 = iVar6;
      iVar4 = iVar1;
      if (iVar4 < 1) break;
      iVar1 = iVar4 + -1;
      iVar6 = iVar1;
    } while (auStack_34[iVar1] == 0);
    uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
    uVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
    if (uVar2 < uVar3) {
      (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar2 + 1;
      pbVar7 = __return_storage_ptr__;
      if (0xf < uVar3) {
        pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
      }
      (pbVar7->_Mypair)._Myval2._Bx._Buf[uVar2] = (char)uVar10 + '0';
      (pbVar7->_Mypair)._Myval2._Bx._Buf[uVar2 + 1] = '\0';
    }
    else {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
                (__return_storage_ptr__,1,uVar5);
    }
  } while( true );
}

// ToString @ 14f8fddd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __cdecl absl::lts_20240722::strings_internal::BigUnsigned<84>::ToString(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::ToString
          (BigUnsigned<84> *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 uVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  BigUnsigned<84> *pBVar11;
  int *piVar12;
  void *pvVar13;
  ulonglong uVar14;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined4 local_194;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_190;
  int local_188;
  uint auStack_184 [87];
  ulonglong local_28;
  
  uVar6 = local_198;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  lVar9 = 2;
  piVar7 = &local_188;
  do {
    piVar12 = piVar7;
    pBVar11 = this;
    uVar4 = *(undefined8 *)(pBVar11 + 8);
    *(undefined8 *)piVar12 = *(undefined8 *)pBVar11;
    *(undefined8 *)(piVar12 + 2) = uVar4;
    uVar4 = *(undefined8 *)(pBVar11 + 0x18);
    *(undefined8 *)(piVar12 + 4) = *(undefined8 *)(pBVar11 + 0x10);
    *(undefined8 *)(piVar12 + 6) = uVar4;
    uVar4 = *(undefined8 *)(pBVar11 + 0x28);
    *(undefined8 *)(piVar12 + 8) = *(undefined8 *)(pBVar11 + 0x20);
    *(undefined8 *)(piVar12 + 10) = uVar4;
    uVar4 = *(undefined8 *)(pBVar11 + 0x38);
    *(undefined8 *)(piVar12 + 0xc) = *(undefined8 *)(pBVar11 + 0x30);
    *(undefined8 *)(piVar12 + 0xe) = uVar4;
    uVar4 = *(undefined8 *)(pBVar11 + 0x48);
    *(undefined8 *)(piVar12 + 0x10) = *(undefined8 *)(pBVar11 + 0x40);
    *(undefined8 *)(piVar12 + 0x12) = uVar4;
    uVar4 = *(undefined8 *)(pBVar11 + 0x58);
    *(undefined8 *)(piVar12 + 0x14) = *(undefined8 *)(pBVar11 + 0x50);
    *(undefined8 *)(piVar12 + 0x16) = uVar4;
    uVar4 = *(undefined8 *)(pBVar11 + 0x68);
    *(undefined8 *)(piVar12 + 0x18) = *(undefined8 *)(pBVar11 + 0x60);
    *(undefined8 *)(piVar12 + 0x1a) = uVar4;
    uVar4 = *(undefined8 *)(pBVar11 + 0x78);
    *(undefined8 *)(piVar12 + 0x1c) = *(undefined8 *)(pBVar11 + 0x70);
    *(undefined8 *)(piVar12 + 0x1e) = uVar4;
    lVar9 = lVar9 + -1;
    this = pBVar11 + 0x80;
    piVar7 = piVar12 + 0x20;
  } while (lVar9 != 0);
  uVar4 = *(undefined8 *)(pBVar11 + 0x88);
  *(undefined8 *)(piVar12 + 0x20) = *(undefined8 *)(pBVar11 + 0x80);
  *(undefined8 *)(piVar12 + 0x22) = uVar4;
  uVar4 = *(undefined8 *)(pBVar11 + 0x98);
  *(undefined8 *)(piVar12 + 0x24) = *(undefined8 *)(pBVar11 + 0x90);
  *(undefined8 *)(piVar12 + 0x26) = uVar4;
  uVar4 = *(undefined8 *)(pBVar11 + 0xa8);
  *(undefined8 *)(piVar12 + 0x28) = *(undefined8 *)(pBVar11 + 0xa0);
  *(undefined8 *)(piVar12 + 0x2a) = uVar4;
  uVar4 = *(undefined8 *)(pBVar11 + 0xb8);
  *(undefined8 *)(piVar12 + 0x2c) = *(undefined8 *)(pBVar11 + 0xb0);
  *(undefined8 *)(piVar12 + 0x2e) = uVar4;
  uVar4 = *(undefined8 *)(pBVar11 + 200);
  *(undefined8 *)(piVar12 + 0x30) = *(undefined8 *)(pBVar11 + 0xc0);
  *(undefined8 *)(piVar12 + 0x32) = uVar4;
  piVar12[0x34] = *(int *)(pBVar11 + 0xd0);
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  local_194 = 1;
  local_190 = __return_storage_ptr__;
  iVar5 = local_188;
  do {
    if (iVar5 < 1) {
      if ((__return_storage_ptr__->_Mypair)._Myval2._Mysize == 0) {
        uVar14 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
        if (uVar14 == 0) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
                    (__return_storage_ptr__,1,local_198,0x30);
        }
        else {
          (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 1;
          pbVar10 = __return_storage_ptr__;
          if (0xf < uVar14) {
            pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                      (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
          }
          *(undefined2 *)&(pbVar10->_Mypair)._Myval2._Bx = 0x30;
        }
      }
      if ((__return_storage_ptr__->_Mypair)._Myval2._Myres < 0x10) {
        pvVar13 = (void *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx +
                          (__return_storage_ptr__->_Mypair)._Myval2._Mysize);
        pbVar10 = __return_storage_ptr__;
      }
      else {
        pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
        pvVar13 = (void *)((longlong)&(pbVar10->_Mypair)._Myval2._Bx +
                          (__return_storage_ptr__->_Mypair)._Myval2._Mysize);
      }
      __std_reverse_trivially_swappable_1(pbVar10,pvVar13);
      return __return_storage_ptr__;
    }
    lVar9 = (longlong)(iVar5 + -1);
    uVar14 = 0;
    iVar1 = iVar5;
    iVar8 = local_188;
    if (-1 < iVar5 + -1) {
      do {
        uVar14 = (uVar14 << 0x20) + (ulonglong)auStack_184[lVar9];
        auStack_184[lVar9] = (uint)(uVar14 / 10);
        uVar14 = uVar14 % 10;
        lVar9 = lVar9 + -1;
        iVar1 = local_188;
      } while (-1 < lVar9);
    }
    do {
      local_188 = iVar8;
      iVar5 = iVar1;
      if (iVar5 < 1) break;
      iVar1 = iVar5 + -1;
      iVar8 = iVar1;
    } while (auStack_184[iVar1] == 0);
    uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
    uVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
    if (uVar2 < uVar3) {
      (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar2 + 1;
      pbVar10 = __return_storage_ptr__;
      if (0xf < uVar3) {
        pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
      }
      (pbVar10->_Mypair)._Myval2._Bx._Buf[uVar2] = (char)uVar14 + '0';
      (pbVar10->_Mypair)._Myval2._Bx._Buf[uVar2 + 1] = '\0';
    }
    else {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
                (__return_storage_ptr__,1,uVar6);
    }
  } while( true );
}

// _Unwrapped @ 14f8fe010

/* public: char * __ptr64 __cdecl std::_String_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::_Unwrapped(void)const __ptr64 */

char * __thiscall
std::_String_iterator<std::_String_val<std::_Simple_types<char>_>_>::_Unwrapped
          (_String_iterator<std::_String_val<std::_Simple_types<char>_>_> *this)

{
  return (char *)*this;
}

// ascii_isdigit @ 14f8fe020

/* bool __cdecl absl::lts_20240722::ascii_isdigit(unsigned char) */

bool __cdecl absl::lts_20240722::ascii_isdigit(uchar param_1)

{
  return (byte)(param_1 - 0x30) < 10;
}

// size @ 14f8fe030

/* public: int __cdecl absl::lts_20240722::strings_internal::BigUnsigned<4>::size(void)const __ptr64
    */

int __thiscall absl::lts_20240722::strings_internal::BigUnsigned<4>::size(BigUnsigned<4> *this)

{
  return *(int *)this;
}

// words @ 14f8fe040

/* public: unsigned int const * __ptr64 __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<4>::words(void)const __ptr64 */

uint * __thiscall absl::lts_20240722::strings_internal::BigUnsigned<4>::words(BigUnsigned<4> *this)

{
  return (uint *)(this + 4);
}

// words @ 14f8fe050

/* public: unsigned int const * __ptr64 __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<84>::words(void)const __ptr64 */

uint * __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::words(BigUnsigned<84> *this)

{
  return (uint *)(this + 4);
}

// FUN_150294450 @ 150294450

void FUN_150294450(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x28)
              );
  }
  return;
}

// FUN_150294480 @ 150294480

void FUN_150294480(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x28)
              );
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 183

// _Compressed_pair<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>,std::_Vector_val<std::_Simple_types<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>,1><> @ 1501ea890

/* public: __cdecl std::_Compressed_pair<class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>,class
   std::_Vector_val<struct std::_Simple_types<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >,1>::_Compressed_pair<class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>,class
   std::_Vector_val<struct std::_Simple_types<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> >,1><>(struct
   std::_Zero_then_variadic_args_t) __ptr64 */

_Compressed_pair<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>,std::_Vector_val<std::_Simple_types<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>,std::_Vector_val<std::_Simple_types<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>,1>
::
_Compressed_pair<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>,std::_Vector_val<std::_Simple_types<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>,1><>
          (_Compressed_pair<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>,std::_Vector_val<std::_Simple_types<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>,1>
           *this,_Zero_then_variadic_args_t param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// _List_node_emplace_op2<std::allocator<std::_List_node<int,void*___ptr64>_>_><int_const&___ptr64> @ 1501ea8b0

/* public: __cdecl std::_List_node_emplace_op2<class std::allocator<struct std::_List_node<int,void
   * __ptr64> > >::_List_node_emplace_op2<class std::allocator<struct std::_List_node<int,void *
   __ptr64> > ><int const & __ptr64>(class std::allocator<struct std::_List_node<int,void * __ptr64>
   > & __ptr64,int const & __ptr64) __ptr64 */

_List_node_emplace_op2<std::allocator<std::_List_node<int,void*___ptr64>_>_> * __thiscall
std::_List_node_emplace_op2<std::allocator<std::_List_node<int,void*___ptr64>_>_>::
_List_node_emplace_op2<std::allocator<std::_List_node<int,void*___ptr64>_>_><int_const&___ptr64>
          (_List_node_emplace_op2<std::allocator<std::_List_node<int,void*___ptr64>_>_> *this,
          allocator<std::_List_node<int,void*___ptr64>_> *param_1,int *param_2)

{
  void *pvVar1;
  
  *(allocator<std::_List_node<int,void*___ptr64>_> **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  pvVar1 = ::operator_new(0x18);
  *(void **)(this + 8) = pvVar1;
  *(int *)((longlong)pvVar1 + 0x10) = *param_2;
  return this;
}

// _Compressed_pair<std::allocator<std::_List_node<int,void*___ptr64>_>,std::_List_val<std::_List_simple_types<int>_>,1><std::allocator<int>_const&___ptr64> @ 1501ea900

/* public: __cdecl std::_Compressed_pair<class std::allocator<struct std::_List_node<int,void *
   __ptr64> >,class std::_List_val<struct std::_List_simple_types<int> >,1>::_Compressed_pair<class
   std::allocator<struct std::_List_node<int,void * __ptr64> >,class std::_List_val<struct
   std::_List_simple_types<int> >,1><class std::allocator<int> const & __ptr64>(struct
   std::_One_then_variadic_args_t,class std::allocator<int> const & __ptr64) __ptr64 */

_Compressed_pair<std::allocator<std::_List_node<int,void*___ptr64>_>,std::_List_val<std::_List_simple_types<int>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<std::_List_node<int,void*___ptr64>_>,std::_List_val<std::_List_simple_types<int>_>,1>
::
_Compressed_pair<std::allocator<std::_List_node<int,void*___ptr64>_>,std::_List_val<std::_List_simple_types<int>_>,1><std::allocator<int>_const&___ptr64>
          (_Compressed_pair<std::allocator<std::_List_node<int,void*___ptr64>_>,std::_List_val<std::_List_simple_types<int>_>,1>
           *this,_One_then_variadic_args_t param_1,allocator<int> *param_2)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// _Compressed_pair<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>,std::_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>,1><std::allocator<int>_const&___ptr64> @ 1501ea920

/* public: __cdecl std::_Compressed_pair<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> >,class std::_Vector_val<struct std::_Simple_types<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> > >,1>::_Compressed_pair<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> >,class std::_Vector_val<struct std::_Simple_types<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> > >,1><class std::allocator<int> const & __ptr64>(struct
   std::_One_then_variadic_args_t,class std::allocator<int> const & __ptr64) __ptr64 */

_Compressed_pair<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>,std::_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>,std::_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>,1>
::
_Compressed_pair<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>,std::_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>,1><std::allocator<int>_const&___ptr64>
          (_Compressed_pair<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>,std::_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>,1>
           *this,_One_then_variadic_args_t param_1,allocator<int> *param_2)

{
  (this->_Myval2)._Myfirst =
       (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
        *)0x0;
  (this->_Myval2)._Mylast =
       (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
        *)0x0;
  (this->_Myval2)._Myend =
       (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
        *)0x0;
  return this;
}

// _Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_><std::allocator<int>_const&___ptr64,0> @ 1501ea940

/* public: __cdecl std::_Hash_vec<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> > >::_Hash_vec<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> > ><class std::allocator<int> const & __ptr64,0>(class
   std::allocator<int> const & __ptr64) __ptr64 */

_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
* __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
::
_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_><std::allocator<int>_const&___ptr64,0>
          (_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
           *this,allocator<int> *param_1)

{
  (this->_Mypair)._Myval2._Myfirst =
       (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
        *)0x0;
  (this->_Mypair)._Myval2._Mylast =
       (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
        *)0x0;
  (this->_Mypair)._Myval2._Myend =
       (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
        *)0x0;
  return this;
}

// allocator<std::_List_node<int,void*___ptr64>_><int> @ 1501ea960

/* public: __cdecl std::allocator<struct std::_List_node<int,void * __ptr64> >::allocator<struct
   std::_List_node<int,void * __ptr64> ><int>(class std::allocator<int> const & __ptr64) __ptr64 */

allocator<std::_List_node<int,void*___ptr64>_> * __thiscall
std::allocator<std::_List_node<int,void*___ptr64>_>::
allocator<std::_List_node<int,void*___ptr64>_><int>
          (allocator<std::_List_node<int,void*___ptr64>_> *this,allocator<int> *param_1)

{
  return this;
}

// allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_><int> @ 1501ea970

/* public: __cdecl std::allocator<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> >,struct std::_Iterator_base0>
   >::allocator<class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> ><int>(class std::allocator<int>
   const & __ptr64) __ptr64 */

allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>
* __thiscall
std::
allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>
::
allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_><int>
          (allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>
           *this,allocator<int> *param_1)

{
  return this;
}

// _Compressed_pair<std::equal_to<int>,float,1><float> @ 1501ea980

/* public: __cdecl std::_Compressed_pair<struct std::equal_to<int>,float,1>::_Compressed_pair<struct
   std::equal_to<int>,float,1><float>(struct std::_Zero_then_variadic_args_t,float && __ptr64)
   __ptr64 */

_Compressed_pair<std::equal_to<int>,float,1> * __thiscall
std::_Compressed_pair<std::equal_to<int>,float,1>::
_Compressed_pair<std::equal_to<int>,float,1><float>
          (_Compressed_pair<std::equal_to<int>,float,1> *this,_Zero_then_variadic_args_t param_1,
          float *param_2)

{
  this->_Myval2 = *param_2;
  return this;
}

// _Compressed_pair<std::hash<int>,std::_Compressed_pair<std::equal_to<int>,float,1>,1><std::_Zero_then_variadic_args_t,float> @ 1501ea990

/* public: __cdecl std::_Compressed_pair<struct std::hash<int>,class std::_Compressed_pair<struct
   std::equal_to<int>,float,1>,1>::_Compressed_pair<struct std::hash<int>,class
   std::_Compressed_pair<struct std::equal_to<int>,float,1>,1><struct
   std::_Zero_then_variadic_args_t,float>(struct std::_Zero_then_variadic_args_t,struct
   std::_Zero_then_variadic_args_t && __ptr64,float && __ptr64) __ptr64 */

_Compressed_pair<std::hash<int>,std::_Compressed_pair<std::equal_to<int>,float,1>,1> * __thiscall
std::_Compressed_pair<std::hash<int>,std::_Compressed_pair<std::equal_to<int>,float,1>,1>::
_Compressed_pair<std::hash<int>,std::_Compressed_pair<std::equal_to<int>,float,1>,1><std::_Zero_then_variadic_args_t,float>
          (_Compressed_pair<std::hash<int>,std::_Compressed_pair<std::equal_to<int>,float,1>,1>
           *this,_Zero_then_variadic_args_t param_1,_Zero_then_variadic_args_t *param_2,
          float *param_3)

{
  (this->_Myval2)._Myval2 = *param_3;
  return this;
}

// pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_>,bool><std::_List_iterator<std::_List_val<std::_List_simple_types<int>_>_>,bool,0> @ 1501ea9a0

/* public: __cdecl std::pair<class std::_List_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> > >,bool>::pair<class std::_List_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> > >,bool><class std::_List_iterator<class
   std::_List_val<struct std::_List_simple_types<int> > >,bool,0>(class std::_List_iterator<class
   std::_List_val<struct std::_List_simple_types<int> > > && __ptr64,bool && __ptr64) __ptr64 */

pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_>,bool> * __thiscall
std::pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_>,bool>::
pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_>,bool><std::_List_iterator<std::_List_val<std::_List_simple_types<int>_>_>,bool,0>
          (pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_>,bool>
           *this,_List_iterator<std::_List_val<std::_List_simple_types<int>_>_> *param_1,
          bool *param_2)

{
  this->first = *(_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_> *)param_1;
  this->second = *param_2;
  return this;
}

// operator()<int> @ 1501ea9c0

/* public: unsigned __int64 __cdecl std::_Uhash_compare<int,struct std::hash<int>,struct
   std::equal_to<int> >::operator()<int>(int const & __ptr64)const __ptr64 */

__uint64 __thiscall
std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>::operator()<int>
          (_Uhash_compare<int,std::hash<int>,std::equal_to<int>_> *this,int *param_1)

{
  return ((((ulonglong)*(byte *)((longlong)param_1 + 1) ^
           ((ulonglong)(byte)*param_1 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
         (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3;
}

// operator()<int,int> @ 1501eaa10

/* public: bool __cdecl std::_Uhash_compare<int,struct std::hash<int>,struct std::equal_to<int>
   >::operator()<int,int>(int const & __ptr64,int const & __ptr64)const __ptr64 */

bool __thiscall
std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>::operator()<int,int>
          (_Uhash_compare<int,std::hash<int>,std::equal_to<int>_> *this,int *param_1,int *param_2)

{
  return *param_1 != *param_2;
}

// ConsumeConversion<1> @ 1501eaa20

/* char const * __ptr64 __cdecl absl::lts_20240722::str_format_internal::ConsumeConversion<1>(char
   const * __ptr64,char const * __ptr64 const,struct
   absl::lts_20240722::str_format_internal::UnboundConversion * __ptr64,int * __ptr64) */

char * __cdecl
absl::lts_20240722::str_format_internal::ConsumeConversion<1>
          (char *param_1,char *param_2,UnboundConversion *param_3,int *param_4)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  LengthMod LVar4;
  LengthMod LVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (param_1 == param_2) {
    return (char *)0x0;
  }
  bVar8 = *param_1;
  pbVar2 = (byte *)(param_1 + 1);
  if (8 < (byte)(bVar8 - 0x31)) {
    return (char *)0x0;
  }
  iVar11 = (char)bVar8 + -0x30;
  iVar6 = 9;
  iVar12 = 9;
  iVar10 = iVar12;
  while (pbVar2 != (byte *)param_2) {
    bVar8 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    if ((9 < (byte)(bVar8 - 0x30)) || (iVar10 = iVar10 + -1, iVar10 == 0)) break;
    iVar11 = (int)(char)bVar8 + (iVar11 * 5 + -0x18) * 2;
  }
  param_3->arg_position = iVar11;
  if (bVar8 != 0x24) {
    return (char *)0x0;
  }
  if (pbVar2 == (byte *)param_2) {
    return (char *)0x0;
  }
  bVar8 = *pbVar2;
  uVar9 = (ulonglong)bVar8;
  pbVar2 = pbVar2 + 1;
  pbVar3 = pbVar2;
  if ((char)bVar8 < 'A') {
    while (cVar7 = (char)uVar9, (char)bVar8 < '1') {
      if ((*(Flags *)((longlong)&ConvTagHolder::value + uVar9) &
          ~(kZero|kAlt|kSignCol|kShowPos|kLeft)) != ~(kNonBasic|kZero|kAlt|kSignCol|kShowPos|kLeft))
      goto LAB_1501eaaf9;
      param_3->flags =
           param_3->flags |
           *(Flags *)((longlong)&ConvTagHolder::value + uVar9) &
           (kZero|kAlt|kSignCol|kShowPos|kLeft);
      if (pbVar2 == (byte *)param_2) {
        return (char *)0x0;
      }
      bVar8 = *pbVar2;
      uVar9 = (ulonglong)bVar8;
      pbVar2 = pbVar2 + 1;
    }
    if (cVar7 < ':') {
LAB_1501eaaf9:
      if (cVar7 < '0') {
        if (cVar7 == '*') {
          param_3->flags = param_3->flags | kNonBasic;
          if (pbVar2 == (byte *)param_2) {
            return (char *)0x0;
          }
          bVar8 = *pbVar2;
          pbVar2 = pbVar2 + 1;
          if (8 < (byte)(bVar8 - 0x31)) {
            return (char *)0x0;
          }
          uVar1 = (int)(char)bVar8 - 0x30;
          while (pbVar2 != (byte *)param_2) {
            bVar8 = *pbVar2;
            pbVar2 = pbVar2 + 1;
            if ((9 < (byte)(bVar8 - 0x30)) || (iVar12 = iVar12 + -1, iVar12 == 0)) break;
            uVar1 = (int)(char)bVar8 + (uVar1 * 5 + -0x18) * 2;
          }
          (param_3->width).value_ = ~uVar1;
          if (bVar8 != 0x24) {
            return (char *)0x0;
          }
          if (pbVar2 == (byte *)param_2) {
            return (char *)0x0;
          }
          uVar9 = (ulonglong)*pbVar2;
          pbVar2 = pbVar2 + 1;
        }
      }
      else {
        iVar11 = 9;
        iVar10 = cVar7 + -0x30;
        while (pbVar2 != (byte *)param_2) {
          bVar8 = *pbVar2;
          uVar9 = (ulonglong)(uint)(int)(char)bVar8;
          pbVar2 = pbVar2 + 1;
          if ((9 < (byte)(bVar8 - 0x30)) || (iVar11 = iVar11 + -1, iVar11 == 0)) break;
          iVar10 = (int)(char)bVar8 + (iVar10 * 5 + -0x18) * 2;
        }
        param_3->flags = param_3->flags | kNonBasic;
        (param_3->width).value_ = iVar10;
      }
    }
    pbVar3 = pbVar2;
    if ((char)uVar9 == '.') {
      param_3->flags = param_3->flags | kNonBasic;
      if (pbVar2 == (byte *)param_2) {
        return (char *)0x0;
      }
      bVar8 = *pbVar2;
      uVar9 = (ulonglong)(uint)(int)(char)bVar8;
      pbVar3 = pbVar2 + 1;
      if ((byte)(bVar8 - 0x30) < 10) {
        iVar11 = (int)(char)bVar8 - 0x30;
        while (pbVar3 != (byte *)param_2) {
          bVar8 = *pbVar3;
          uVar9 = (ulonglong)(uint)(int)(char)bVar8;
          pbVar3 = pbVar3 + 1;
          if ((9 < (byte)(bVar8 - 0x30)) || (iVar6 = iVar6 + -1, iVar6 == 0)) break;
          iVar11 = (int)(char)bVar8 + (iVar11 * 5 + -0x18) * 2;
        }
        (param_3->precision).value_ = iVar11;
      }
      else if (bVar8 == 0x2a) {
        if (pbVar3 == (byte *)param_2) {
          return (char *)0x0;
        }
        bVar8 = *pbVar3;
        pbVar2 = pbVar2 + 2;
        if (8 < (byte)(bVar8 - 0x31)) {
          return (char *)0x0;
        }
        uVar1 = (int)(char)bVar8 - 0x30;
        while (pbVar2 != (byte *)param_2) {
          bVar8 = *pbVar2;
          pbVar2 = pbVar2 + 1;
          if ((9 < (byte)(bVar8 - 0x30)) || (iVar6 = iVar6 + -1, iVar6 == 0)) break;
          uVar1 = (int)(char)bVar8 + (uVar1 * 5 + -0x18) * 2;
        }
        (param_3->precision).value_ = ~uVar1;
        if (bVar8 != 0x24) {
          return (char *)0x0;
        }
        if (pbVar2 == (byte *)param_2) {
          return (char *)0x0;
        }
        uVar9 = (ulonglong)*pbVar2;
        pbVar3 = pbVar2 + 1;
      }
      else {
        (param_3->precision).value_ = 0;
      }
    }
  }
  LVar5 = *(LengthMod *)((longlong)&ConvTagHolder::value + (uVar9 & 0xff));
  if (((char)uVar9 == 'v') && (param_3->flags != kBasic)) {
    return (char *)0x0;
  }
  pbVar2 = pbVar3;
  if ((~(LVar5 >> 7) & 1) != 0) goto LAB_1501ead6a;
  if ((LVar5 & 0xc0) != 0x80) {
    return (char *)0x0;
  }
  LVar4 = LVar5 & 0x3f;
  if (pbVar3 == (byte *)param_2) {
    return (char *)0x0;
  }
  bVar8 = *pbVar3;
  pbVar2 = pbVar3 + 1;
  if (bVar8 == 0x68) {
    if (LVar4 == h) {
      param_3->length_mod = hh;
      if (pbVar2 == (byte *)param_2) {
        return (char *)0x0;
      }
      bVar8 = *pbVar2;
      LVar4 = hh;
      pbVar2 = pbVar3 + 2;
    }
    else {
LAB_1501ead37:
      param_3->length_mod = LVar4;
    }
  }
  else {
    if ((bVar8 != 0x6c) || (LVar4 != l)) goto LAB_1501ead37;
    param_3->length_mod = ll;
    if (pbVar2 == (byte *)param_2) {
      return (char *)0x0;
    }
    bVar8 = *pbVar2;
    LVar4 = ll;
    pbVar2 = pbVar3 + 2;
  }
  LVar5 = *(LengthMod *)((longlong)&ConvTagHolder::value + (ulonglong)bVar8);
  if ((bVar8 == 0x76) || ((~(LVar5 >> 7) & 1) == 0)) {
    return (char *)0x0;
  }
  if ((LVar4 == l) && (bVar8 == 99)) {
    param_3->flags = param_3->flags | kNonBasic;
  }
LAB_1501ead6a:
  param_3->conv = LVar5;
  return (char *)pbVar2;
}

// ConsumeConversion<0> @ 1501ead90

/* char const * __ptr64 __cdecl absl::lts_20240722::str_format_internal::ConsumeConversion<0>(char
   const * __ptr64,char const * __ptr64 const,struct
   absl::lts_20240722::str_format_internal::UnboundConversion * __ptr64,int * __ptr64) */

char * __cdecl
absl::lts_20240722::str_format_internal::ConsumeConversion<0>
          (char *param_1,char *param_2,UnboundConversion *param_3,int *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  LengthMod LVar4;
  LengthMod LVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  char cVar10;
  ulonglong uVar11;
  
  if (param_1 == param_2) {
    return (char *)0x0;
  }
  bVar8 = *param_1;
  uVar11 = (ulonglong)bVar8;
  pbVar2 = (byte *)(param_1 + 1);
  pbVar3 = pbVar2;
  if ((char)bVar8 < 'A') {
    iVar7 = 9;
    while (cVar10 = (char)uVar11, (char)bVar8 < '1') {
      if ((*(Flags *)((longlong)&ConvTagHolder::value + uVar11) &
          ~(kZero|kAlt|kSignCol|kShowPos|kLeft)) != ~(kNonBasic|kZero|kAlt|kSignCol|kShowPos|kLeft))
      goto LAB_1501eae19;
      param_3->flags =
           param_3->flags |
           *(Flags *)((longlong)&ConvTagHolder::value + uVar11) &
           (kZero|kAlt|kSignCol|kShowPos|kLeft);
      if (pbVar2 == (byte *)param_2) {
        return (char *)0x0;
      }
      bVar8 = *pbVar2;
      uVar11 = (ulonglong)bVar8;
      pbVar2 = pbVar2 + 1;
    }
    if (cVar10 < ':') {
LAB_1501eae19:
      if (cVar10 < '0') {
        if (cVar10 == '*') {
          param_3->flags = param_3->flags | kNonBasic;
          if (pbVar2 == (byte *)param_2) {
            return (char *)0x0;
          }
          uVar11 = (ulonglong)*pbVar2;
          pbVar2 = pbVar2 + 1;
          *param_4 = *param_4 + 1;
          (param_3->width).value_ = ~*param_4;
        }
      }
      else {
        iVar9 = 9;
        iVar6 = cVar10 + -0x30;
        if (pbVar2 != (byte *)param_2) {
          do {
            bVar8 = *pbVar2;
            uVar11 = (ulonglong)(uint)(int)(char)bVar8;
            pbVar2 = pbVar2 + 1;
            if ((9 < (byte)(bVar8 - 0x30)) || (iVar9 = iVar9 + -1, iVar9 == 0)) break;
            iVar6 = (int)(char)bVar8 + (iVar6 * 5 + -0x18) * 2;
          } while (pbVar2 != (byte *)param_2);
          if (bVar8 == 0x24) {
            if (*param_4 != 0) {
              return (char *)0x0;
            }
            *param_4 = -1;
            pcVar1 = ConsumeConversion<1>(param_1,param_2,param_3,param_4);
            return pcVar1;
          }
        }
        param_3->flags = param_3->flags | kNonBasic;
        (param_3->width).value_ = iVar6;
      }
    }
    pbVar3 = pbVar2;
    if ((char)uVar11 == '.') {
      param_3->flags = param_3->flags | kNonBasic;
      if (pbVar2 == (byte *)param_2) {
        return (char *)0x0;
      }
      bVar8 = *pbVar2;
      uVar11 = (ulonglong)(uint)(int)(char)bVar8;
      pbVar3 = pbVar2 + 1;
      if ((byte)(bVar8 - 0x30) < 10) {
        iVar6 = (int)(char)bVar8 - 0x30;
        while (pbVar3 != (byte *)param_2) {
          bVar8 = *pbVar3;
          uVar11 = (ulonglong)(uint)(int)(char)bVar8;
          pbVar3 = pbVar3 + 1;
          if ((9 < (byte)(bVar8 - 0x30)) || (iVar7 = iVar7 + -1, iVar7 == 0)) break;
          iVar6 = (int)(char)bVar8 + (iVar6 * 5 + -0x18) * 2;
        }
        (param_3->precision).value_ = iVar6;
      }
      else if (bVar8 == 0x2a) {
        if (pbVar3 == (byte *)param_2) {
          return (char *)0x0;
        }
        uVar11 = (ulonglong)*pbVar3;
        pbVar3 = pbVar2 + 2;
        *param_4 = *param_4 + 1;
        (param_3->precision).value_ = ~*param_4;
      }
      else {
        (param_3->precision).value_ = 0;
      }
    }
  }
  LVar5 = *(LengthMod *)((longlong)&ConvTagHolder::value + (uVar11 & 0xff));
  if (((char)uVar11 == 'v') && (param_3->flags != kBasic)) {
    return (char *)0x0;
  }
  pbVar2 = pbVar3;
  if ((~(LVar5 >> 7) & 1) != 0) goto LAB_1501eaff1;
  if ((LVar5 & 0xc0) != 0x80) {
    return (char *)0x0;
  }
  LVar4 = LVar5 & 0x3f;
  if (pbVar3 == (byte *)param_2) {
    return (char *)0x0;
  }
  bVar8 = *pbVar3;
  pbVar2 = pbVar3 + 1;
  if (bVar8 == 0x68) {
    if (LVar4 == h) {
      param_3->length_mod = hh;
      if (pbVar2 == (byte *)param_2) {
        return (char *)0x0;
      }
      bVar8 = *pbVar2;
      LVar4 = hh;
      pbVar2 = pbVar3 + 2;
    }
    else {
LAB_1501eafbe:
      param_3->length_mod = LVar4;
    }
  }
  else {
    if ((bVar8 != 0x6c) || (LVar4 != l)) goto LAB_1501eafbe;
    param_3->length_mod = ll;
    if (pbVar2 == (byte *)param_2) {
      return (char *)0x0;
    }
    bVar8 = *pbVar2;
    LVar4 = ll;
    pbVar2 = pbVar3 + 2;
  }
  LVar5 = *(LengthMod *)((longlong)&ConvTagHolder::value + (ulonglong)bVar8);
  if ((bVar8 == 0x76) || ((~(LVar5 >> 7) & 1) == 0)) {
    return (char *)0x0;
  }
  if ((LVar4 == l) && (bVar8 == 99)) {
    param_3->flags = param_3->flags | kNonBasic;
  }
LAB_1501eaff1:
  param_3->conv = LVar5;
  *param_4 = *param_4 + 1;
  param_3->arg_position = *param_4;
  return (char *)pbVar2;
}

// ParseFormatString<absl::lts_20240722::str_format_internal::ParsedFormatBase::ParsedFormatConsumer> @ 1501eb020

/* bool __cdecl absl::lts_20240722::str_format_internal::ParseFormatString<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ParsedFormatConsumer>(class
   std::basic_string_view<char,struct std::char_traits<char> >,struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ParsedFormatConsumer) */

bool __cdecl
absl::lts_20240722::str_format_internal::
ParseFormatString<absl::lts_20240722::str_format_internal::ParsedFormatBase::ParsedFormatConsumer>
          (undefined8 *param_1,ParsedFormatConsumer *param_2)

{
  byte *_Src;
  longlong lVar1;
  byte bVar2;
  FormatConversionChar FVar3;
  void *pvVar4;
  longlong lVar5;
  ConversionItem *pCVar6;
  char *pcVar7;
  undefined1 uVar8;
  bool bVar9;
  void *pvVar10;
  ulong64 uVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  size_t sVar15;
  ParsedFormatConsumer *pPVar16;
  int local_res8 [2];
  ParsedFormatConsumer *local_res10;
  byte *local_res18;
  UnboundConversion local_68;
  ConversionItem local_58;
  
  uVar8 = local_68._15_1_;
  pbVar12 = (byte *)*param_1;
  iVar13 = 0;
  pbVar14 = pbVar12 + param_1[1];
  local_res8[0] = 0;
  if (pbVar12 != pbVar14) {
    pPVar16 = param_2 + 8;
    local_res10 = param_2;
    local_res18 = pbVar14;
    do {
      sVar15 = (longlong)pbVar14 - (longlong)pbVar12;
      pvVar10 = memchr(pbVar12,0x25,sVar15);
      if (pvVar10 == (void *)0x0) {
        local_68.arg_position = (int)pbVar12;
        local_68.width.value_ = (int)((ulonglong)pbVar12 >> 0x20);
        local_68.precision.value_ = (int)sVar15;
        local_68._12_2_ = SUB82(sVar15 >> 0x20,0);
        local_68.conv = (FormatConversionChar)(sVar15 >> 0x30);
        local_68._15_1_ = SUB81(sVar15 >> 0x38,0);
        bVar9 = ParsedFormatBase::ParsedFormatConsumer::Append
                          (param_2,(basic_string_view<char,std::char_traits<char>_> *)&local_68);
        return bVar9;
      }
      sVar15 = (longlong)pvVar10 - (longlong)pbVar12;
      if (sVar15 != 0) {
        pvVar4 = *(void **)pPVar16;
        memcpy(pvVar4,pbVar12,sVar15);
        lVar1 = (longlong)pvVar4 + sVar15;
        *(longlong *)pPVar16 = lVar1;
        lVar5 = *(longlong *)local_res10;
        pCVar6 = *(ConversionItem **)(lVar5 + 0x18);
        uVar11 = lVar1 - *(longlong *)(lVar5 + 8);
        if ((*(ConversionItem **)(lVar5 + 0x10) == pCVar6) ||
           (*(char *)(*(longlong *)(lVar5 + 0x18) + -0x20) != '\0')) {
          local_58.is_conversion = false;
          local_58.conv.width.value_ = -1;
          local_58.conv.precision.value_ = -1;
          local_58.conv.flags = kBasic;
          local_58.conv.length_mod = none;
          local_58.conv.conv = v|s;
          local_58.text_end = uVar11;
          if (pCVar6 == *(ConversionItem **)(lVar5 + 0x20)) {
            std::
            vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
            ::
            _Emplace_reallocate<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
                      ((vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
                        *)(lVar5 + 0x10),pCVar6,&local_58);
          }
          else {
            *(ulonglong *)pCVar6 = (ulonglong)(uint7)local_58._1_7_ << 8;
            pCVar6->text_end = uVar11;
            (pCVar6->conv).arg_position = local_58.conv.arg_position;
            (pCVar6->conv).width = -1;
            (pCVar6->conv).precision = (InputValue)(int)0x130900ffffffff;
            (pCVar6->conv).flags = (char)(0x130900ffffffff >> 0x20);
            (pCVar6->conv).length_mod = (char)(0x130900ffffffff >> 0x28);
            (pCVar6->conv).conv = (char)(0x130900ffffffff >> 0x30);
            (pCVar6->conv).field_0xf = local_58.conv._15_1_;
            *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + 0x20;
          }
        }
        else {
          *(ulong64 *)(*(longlong *)(lVar5 + 0x18) + -0x18) = uVar11;
        }
      }
      pbVar14 = local_res18;
      _Src = (byte *)((longlong)pvVar10 + 1);
      if (local_res18 <= _Src) {
        return false;
      }
      bVar2 = *_Src;
      FVar3 = *(FormatConversionChar *)((longlong)&ConvTagHolder::value + (ulonglong)bVar2);
      if ((~(FVar3 >> 7) & 1) == 0) {
        if (bVar2 == 0x25) {
          pcVar7 = *(char **)(local_res10 + 8);
          lVar1 = *(longlong *)local_res10;
          *pcVar7 = s__[0];
          pcVar7 = pcVar7 + 1;
          pCVar6 = *(ConversionItem **)(lVar1 + 0x18);
          *(char **)(local_res10 + 8) = pcVar7;
          uVar11 = (longlong)pcVar7 - *(longlong *)(lVar1 + 8);
          if ((*(ConversionItem **)(lVar1 + 0x10) == pCVar6) ||
             (*(char *)(*(longlong *)(lVar1 + 0x18) + -0x20) != '\0')) {
            local_58.is_conversion = false;
            local_58.conv.width.value_ = -1;
            local_58.conv.precision.value_ = -1;
            local_58.conv.flags = kBasic;
            local_58.conv.length_mod = none;
            local_58.conv.conv = v|s;
            local_58.text_end = uVar11;
            if (pCVar6 == *(ConversionItem **)(lVar1 + 0x20)) {
              std::
              vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
              ::
              _Emplace_reallocate<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
                        ((vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
                          *)(lVar1 + 0x10),pCVar6,&local_58);
            }
            else {
              *(ulonglong *)pCVar6 = (ulonglong)(uint7)local_58._1_7_ << 8;
              pCVar6->text_end = uVar11;
              (pCVar6->conv).arg_position = local_58.conv.arg_position;
              (pCVar6->conv).width = -1;
              (pCVar6->conv).precision = (InputValue)(int)0x130900ffffffff;
              (pCVar6->conv).flags = (char)(0x130900ffffffff >> 0x20);
              (pCVar6->conv).length_mod = (char)(0x130900ffffffff >> 0x28);
              (pCVar6->conv).conv = (char)(0x130900ffffffff >> 0x30);
              (pCVar6->conv).field_0xf = local_58.conv._15_1_;
              *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x18) + 0x20;
            }
          }
          else {
            *(ulong64 *)(*(longlong *)(lVar1 + 0x18) + -0x18) = uVar11;
          }
          pPVar16 = local_res10 + 8;
          goto LAB_1501eb30b;
        }
        local_68.width.value_ = -1;
        local_68.precision.value_ = -1;
        local_68.flags = kBasic;
        local_68.length_mod = none;
        local_68.conv = v|s;
        if (iVar13 < 0) {
          pbVar12 = (byte *)ConsumeConversion<1>
                                      ((char *)_Src,(char *)local_res18,&local_68,local_res8);
        }
        else {
          pbVar12 = (byte *)ConsumeConversion<0>
                                      ((char *)_Src,(char *)local_res18,&local_68,local_res8);
        }
        if (pbVar12 == (byte *)0x0) {
          return false;
        }
        pvVar4 = *(void **)pPVar16;
        memcpy(pvVar4,_Src,(size_t)(pbVar12 + (-1 - (longlong)pvVar10)));
        param_2 = local_res10;
        pbVar14 = (byte *)((longlong)pvVar4 + (longlong)(pbVar12 + (-1 - (longlong)pvVar10)));
        *(byte **)pPVar16 = pbVar14;
        local_58.is_conversion = true;
        lVar1 = *(longlong *)local_res10;
        local_58.conv.arg_position = local_68.arg_position;
        local_58.conv.width.value_ = local_68.width.value_;
        local_58.conv.precision.value_ = local_68.precision.value_;
        local_58.conv.flags = local_68.flags;
        local_58.conv.length_mod = local_68.length_mod;
        local_58.conv.conv = local_68.conv;
        local_58.conv._15_1_ = local_68._15_1_;
        local_58.text_end = (longlong)pbVar14 - *(longlong *)(lVar1 + 8);
        pCVar6 = *(ConversionItem **)(lVar1 + 0x18);
        if (pCVar6 == *(ConversionItem **)(lVar1 + 0x20)) {
          std::
          vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
          ::
          _Emplace_reallocate<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
                    ((vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
                      *)(lVar1 + 0x10),pCVar6,&local_58);
          pbVar14 = local_res18;
          iVar13 = local_res8[0];
        }
        else {
          *(ulonglong *)pCVar6 = CONCAT71(local_58._1_7_,1);
          pCVar6->text_end = local_58.text_end;
          (pCVar6->conv).arg_position = local_68.arg_position;
          (pCVar6->conv).width = (InputValue)local_68.width.value_;
          (pCVar6->conv).precision = (InputValue)local_68.precision.value_;
          (pCVar6->conv).flags = local_68.flags;
          (pCVar6->conv).length_mod = local_68.length_mod;
          (pCVar6->conv).conv = local_68.conv;
          (pCVar6->conv).field_0xf = local_68._15_1_;
          *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x18) + 0x20;
          pbVar14 = local_res18;
          iVar13 = local_res8[0];
        }
      }
      else {
        if (iVar13 < 0) {
          return false;
        }
        pbVar12 = *(byte **)pPVar16;
        iVar13 = iVar13 + 1;
        local_58.is_conversion = true;
        *pbVar12 = bVar2;
        pbVar12 = pbVar12 + 1;
        lVar1 = *(longlong *)local_res10;
        *(byte **)pPVar16 = pbVar12;
        local_58.conv.width.value_ = -1;
        local_58.conv.precision.value_ = -1;
        local_58.conv.flags = kBasic;
        local_58.conv.length_mod = none;
        local_58.text_end = (longlong)pbVar12 - *(longlong *)(lVar1 + 8);
        pCVar6 = *(ConversionItem **)(lVar1 + 0x18);
        local_58.conv._15_1_ = uVar8;
        local_res8[0] = iVar13;
        local_58.conv.arg_position = iVar13;
        local_58.conv.conv = FVar3;
        if (pCVar6 == *(ConversionItem **)(lVar1 + 0x20)) {
          std::
          vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
          ::
          _Emplace_reallocate<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
                    ((vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
                      *)(lVar1 + 0x10),pCVar6,&local_58);
        }
        else {
          *(ulonglong *)pCVar6 = CONCAT71(local_58._1_7_,1);
          pCVar6->text_end = local_58.text_end;
          (pCVar6->conv).arg_position = iVar13;
          (pCVar6->conv).width = -1;
          (pCVar6->conv).precision = (InputValue)(int)0x900ffffffff;
          (pCVar6->conv).flags = (char)(0x900ffffffff >> 0x20);
          (pCVar6->conv).length_mod = (char)(0x900ffffffff >> 0x28);
          (pCVar6->conv).conv = FVar3;
          (pCVar6->conv).field_0xf = uVar8;
          *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x18) + 0x20;
        }
LAB_1501eb30b:
        pbVar12 = (byte *)((longlong)pvVar10 + 2);
        param_2 = local_res10;
      }
    } while (pbVar12 != pbVar14);
  }
  return true;
}

// _Adl_verify_range<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>*___ptr64> @ 1501eb360

/* void __cdecl std::_Adl_verify_range<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> >,struct std::_Iterator_base0> * __ptr64,class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> * __ptr64>(class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> >,struct std::_Iterator_base0> * __ptr64 const
   & __ptr64,class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> * __ptr64 const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>*___ptr64>
          (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
           **param_1,
          _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
          **param_2)

{
  return;
}

// _Allocate_at_least_helper<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_> @ 1501eb370

/* struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64
   __cdecl std::_Allocate_at_least_helper<class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> >(class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   & __ptr64,unsigned __int64 & __ptr64) */

ConversionItem * __cdecl
std::
_Allocate_at_least_helper<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
          (allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
           *param_1,__uint64 *param_2)

{
  void *pvVar1;
  ConversionItem *pCVar2;
  ulong64 uVar3;
  
  if (*param_2 < 0x800000000000000) {
    uVar3 = *param_2 * 0x20;
    if (uVar3 < 0x1000) {
      if (uVar3 != 0) {
        pCVar2 = ::operator_new(uVar3);
        return pCVar2;
      }
      return (ConversionItem *)0x0;
    }
    if (uVar3 < uVar3 + 0x27) {
      pvVar1 = ::operator_new(uVar3 + 0x27);
      if (pvVar1 != (void *)0x0) {
        pCVar2 = (ConversionItem *)((longlong)pvVar1 + 0x27U & 0xffffffffffffffe0);
        *(void **)&pCVar2[-1].conv.precision = pvVar1;
        return pCVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Construct_in_place<std::_List_node<int,void*___ptr64>*___ptr64,std::_List_node<int,void*___ptr64>*___ptr64&___ptr64> @ 1501eb3f0

/* void __cdecl std::_Construct_in_place<struct std::_List_node<int,void * __ptr64> * __ptr64,struct
   std::_List_node<int,void * __ptr64> * __ptr64 & __ptr64>(struct std::_List_node<int,void *
   __ptr64> * __ptr64 & __ptr64,struct std::_List_node<int,void * __ptr64> * __ptr64 & __ptr64) */

void __cdecl
std::
_Construct_in_place<std::_List_node<int,void*___ptr64>*___ptr64,std::_List_node<int,void*___ptr64>*___ptr64&___ptr64>
          (_List_node<int,void*___ptr64> **param_1,_List_node<int,void*___ptr64> **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Construct_in_place<std::_List_node<int,void*___ptr64>*___ptr64,std::_List_node<int,void*___ptr64>*___ptr64_const&___ptr64> @ 1501eb400

/* void __cdecl std::_Construct_in_place<struct std::_List_node<int,void * __ptr64> * __ptr64,struct
   std::_List_node<int,void * __ptr64> * __ptr64 const & __ptr64>(struct std::_List_node<int,void *
   __ptr64> * __ptr64 & __ptr64,struct std::_List_node<int,void * __ptr64> * __ptr64 const &
   __ptr64) */

void __cdecl
std::
_Construct_in_place<std::_List_node<int,void*___ptr64>*___ptr64,std::_List_node<int,void*___ptr64>*___ptr64_const&___ptr64>
          (_List_node<int,void*___ptr64> **param_1,_List_node<int,void*___ptr64> **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Construct_in_place<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> @ 1501eb410

/* void __cdecl std::_Construct_in_place<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>(struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem & __ptr64,struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem && __ptr64) */

void __cdecl
std::
_Construct_in_place<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
          (ConversionItem *param_1,ConversionItem *param_2)

{
  ulong64 uVar1;
  undefined7 uVar2;
  InputValue IVar3;
  InputValue IVar4;
  Flags FVar5;
  LengthMod LVar6;
  FormatConversionChar FVar7;
  undefined1 uVar8;
  
  uVar2 = *(undefined7 *)&param_2->field_0x1;
  uVar1 = param_2->text_end;
  param_1->is_conversion = param_2->is_conversion;
  *(undefined7 *)&param_1->field_0x1 = uVar2;
  param_1->text_end = uVar1;
  IVar3.value_ = (param_2->conv).width.value_;
  IVar4.value_ = (param_2->conv).precision.value_;
  FVar5 = (param_2->conv).flags;
  LVar6 = (param_2->conv).length_mod;
  FVar7 = (param_2->conv).conv;
  uVar8 = (param_2->conv).field_0xf;
  (param_1->conv).arg_position = (param_2->conv).arg_position;
  (param_1->conv).width = (InputValue)IVar3.value_;
  (param_1->conv).precision = (InputValue)IVar4.value_;
  (param_1->conv).flags = FVar5;
  (param_1->conv).length_mod = LVar6;
  (param_1->conv).conv = FVar7;
  (param_1->conv).field_0xf = uVar8;
  return;
}

// _Construct_in_place<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>_const&___ptr64> @ 1501eb430

/* void __cdecl std::_Construct_in_place<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> >,struct std::_Iterator_base0>,class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> const & __ptr64>(class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> >,struct std::_Iterator_base0> & __ptr64,class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> const & __ptr64) */

void __cdecl
std::
_Construct_in_place<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>_const&___ptr64>
          (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
           *param_1,
          _List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>
          *param_2)

{
  param_1->_Ptr = *(_List_node<int,void_*> **)param_2;
  return;
}

// _Copy_memmove<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem*___ptr64,absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem*___ptr64> @ 1501eb440

/* struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64
   __cdecl std::_Copy_memmove<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64,struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64>(struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64,struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64,struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64) */

ConversionItem * __cdecl
std::
_Copy_memmove<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem*___ptr64,absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem*___ptr64>
          (ConversionItem *param_1,ConversionItem *param_2,ConversionItem *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (ConversionItem *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Destroy_in_place<std::_List_node<int,void*___ptr64>*___ptr64> @ 1501eb480

/* void __cdecl std::_Destroy_in_place<struct std::_List_node<int,void * __ptr64> * __ptr64>(struct
   std::_List_node<int,void * __ptr64> * __ptr64 & __ptr64) */

void __cdecl
std::_Destroy_in_place<std::_List_node<int,void*___ptr64>*___ptr64>
          (_List_node<int,void*___ptr64> **param_1)

{
  return;
}

// _Destroy_range<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>*___ptr64> @ 1501eb490

/* void __cdecl std::_Destroy_range<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> >,struct std::_Iterator_base0> * __ptr64,class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> * __ptr64>(class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> >,struct std::_Iterator_base0> * __ptr64,class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> * __ptr64 const) */

void __cdecl
std::
_Destroy_range<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>*___ptr64>
          (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
           *param_1,
          _List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>
          *param_2)

{
  return;
}

// _Destroy_range<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_> @ 1501eb4a0

/* void __cdecl std::_Destroy_range<class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> >(struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64,struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64 const,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   & __ptr64) */

void __cdecl
std::
_Destroy_range<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
          (ConversionItem *param_1,ConversionItem *param_2,
          allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
          *param_3)

{
  return;
}

// _Emplace_back<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_const&___ptr64> @ 1501eb4b0

/* public: void __cdecl std::_Uninitialized_backout<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> >,struct std::_Iterator_base0> *
   __ptr64>::_Emplace_back<class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> const & __ptr64>(class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> const & __ptr64) __ptr64 */

void __thiscall
std::
_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64>
::
_Emplace_back<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_const&___ptr64>
          (_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64>
           *this,_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                 *param_1)

{
  **(undefined8 **)(this + 8) = param_1->_Ptr;
  *(longlong *)(this + 8) = *(longlong *)(this + 8) + 8;
  return;
}

// _Emplace_back<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> @ 1501eb4d0

/* public: void __cdecl std::_Uninitialized_backout_al<class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::_Emplace_back<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>(struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem && __ptr64) __ptr64 */

void __thiscall
std::
_Uninitialized_backout_al<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::_Emplace_back<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
          (_Uninitialized_backout_al<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
           *this,ConversionItem *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(this + 8);
  uVar2 = param_1->text_end;
  *puVar1 = *(undefined8 *)param_1;
  puVar1[1] = uVar2;
  uVar3 = *(undefined8 *)&(param_1->conv).precision;
  puVar1[2] = *(undefined8 *)&param_1->conv;
  puVar1[3] = uVar3;
  *(longlong *)(this + 8) = *(longlong *)(this + 8) + 0x20;
  return;
}

// _Emplace_back_with_unused_capacity<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> @ 1501eb4f0

/* private: struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem &
   __ptr64 __cdecl std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::_Emplace_back_with_unused_capacity<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>(struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem && __ptr64) __ptr64 */

ConversionItem * __thiscall
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::
_Emplace_back_with_unused_capacity<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
          (vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
           *this,ConversionItem *param_1)

{
  undefined8 *puVar1;
  ConversionItem *pCVar2;
  ulong64 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(this + 8);
  uVar3 = param_1->text_end;
  *puVar1 = *(undefined8 *)param_1;
  puVar1[1] = uVar3;
  uVar4 = *(undefined8 *)&(param_1->conv).precision;
  puVar1[2] = *(undefined8 *)&param_1->conv;
  puVar1[3] = uVar4;
  pCVar2 = *(ConversionItem **)(this + 8);
  *(ConversionItem **)(this + 8) = pCVar2 + 1;
  return pCVar2;
}

// _Emplace_one_at_back<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> @ 1501eb520

/* private: struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem &
   __ptr64 __cdecl std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::_Emplace_one_at_back<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>(struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem && __ptr64) __ptr64 */

ConversionItem * __thiscall
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::_Emplace_one_at_back<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
          (vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
           *this,ConversionItem *param_1)

{
  ulong64 uVar1;
  undefined7 uVar2;
  InputValue IVar3;
  InputValue IVar4;
  Flags FVar5;
  LengthMod LVar6;
  FormatConversionChar FVar7;
  undefined1 uVar8;
  ConversionItem *pCVar9;
  
  pCVar9 = *(ConversionItem **)(this + 8);
  if (pCVar9 != *(ConversionItem **)(this + 0x10)) {
    uVar2 = *(undefined7 *)&param_1->field_0x1;
    uVar1 = param_1->text_end;
    pCVar9->is_conversion = param_1->is_conversion;
    *(undefined7 *)&pCVar9->field_0x1 = uVar2;
    pCVar9->text_end = uVar1;
    IVar3.value_ = (param_1->conv).width.value_;
    IVar4.value_ = (param_1->conv).precision.value_;
    FVar5 = (param_1->conv).flags;
    LVar6 = (param_1->conv).length_mod;
    FVar7 = (param_1->conv).conv;
    uVar8 = (param_1->conv).field_0xf;
    (pCVar9->conv).arg_position = (param_1->conv).arg_position;
    (pCVar9->conv).width = (InputValue)IVar3.value_;
    (pCVar9->conv).precision = (InputValue)IVar4.value_;
    (pCVar9->conv).flags = FVar5;
    (pCVar9->conv).length_mod = LVar6;
    (pCVar9->conv).conv = FVar7;
    (pCVar9->conv).field_0xf = uVar8;
    pCVar9 = *(ConversionItem **)(this + 8);
    *(ConversionItem **)(this + 8) = pCVar9 + 1;
    return pCVar9;
  }
  pCVar9 = _Emplace_reallocate<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
                     (this,pCVar9,param_1);
  return pCVar9;
}

// _Emplace_reallocate<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> @ 1501eb560

/* private: struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem *
   __ptr64 __cdecl std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::_Emplace_reallocate<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>(struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64 const,struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem && __ptr64) __ptr64 */

ConversionItem * __thiscall
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::_Emplace_reallocate<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
          (vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
           *this,ConversionItem *param_1,ConversionItem *param_2)

{
  ConversionItem *pCVar1;
  longlong lVar2;
  ConversionItem *_Src;
  code *pcVar3;
  undefined7 uVar4;
  InputValue IVar5;
  InputValue IVar6;
  Flags FVar7;
  LengthMod LVar8;
  FormatConversionChar FVar9;
  undefined1 uVar10;
  void *pvVar11;
  ulonglong uVar12;
  ConversionItem *_Dst;
  void *pvVar13;
  ulong64 uVar14;
  ConversionItem *pCVar15;
  size_t _Size;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  lVar2 = *(longlong *)this;
  lVar16 = *(longlong *)(this + 8) - lVar2 >> 5;
  if (lVar16 == 0x7ffffffffffffff) {
    _Xlength();
    pcVar3 = (code *)swi(3);
    pCVar15 = (ConversionItem *)(*pcVar3)();
    return pCVar15;
  }
  uVar17 = lVar16 + 1;
  uVar12 = *(longlong *)(this + 0x10) - lVar2 >> 5;
  if (0x7ffffffffffffff - (uVar12 >> 1) < uVar12) {
LAB_1501eb6ff:
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  uVar12 = (uVar12 >> 1) + uVar12;
  uVar18 = uVar17;
  if (uVar17 <= uVar12) {
    uVar18 = uVar12;
  }
  if (0x7ffffffffffffff < uVar18) goto LAB_1501eb6ff;
  uVar12 = uVar18 * 0x20;
  if (uVar12 < 0x1000) {
    if (uVar12 == 0) {
      pCVar15 = (ConversionItem *)0x0;
    }
    else {
      pCVar15 = ::operator_new(uVar12);
    }
  }
  else {
    if (uVar12 + 0x27 <= uVar12) goto LAB_1501eb6ff;
    pvVar11 = ::operator_new(uVar12 + 0x27);
    if (pvVar11 == (void *)0x0) goto LAB_1501eb6f8;
    pCVar15 = (ConversionItem *)((longlong)pvVar11 + 0x27U & 0xffffffffffffffe0);
    *(void **)&pCVar15[-1].conv.precision = pvVar11;
  }
  pCVar1 = (ConversionItem *)
           (&pCVar15->is_conversion + ((longlong)param_1 - lVar2 & 0xffffffffffffffe0));
  uVar4 = *(undefined7 *)&param_2->field_0x1;
  uVar14 = param_2->text_end;
  pCVar1->is_conversion = param_2->is_conversion;
  *(undefined7 *)&pCVar1->field_0x1 = uVar4;
  pCVar1->text_end = uVar14;
  IVar5.value_ = (param_2->conv).width.value_;
  IVar6.value_ = (param_2->conv).precision.value_;
  FVar7 = (param_2->conv).flags;
  LVar8 = (param_2->conv).length_mod;
  FVar9 = (param_2->conv).conv;
  uVar10 = (param_2->conv).field_0xf;
  (pCVar1->conv).arg_position = (param_2->conv).arg_position;
  (pCVar1->conv).width = (InputValue)IVar5.value_;
  (pCVar1->conv).precision = (InputValue)IVar6.value_;
  (pCVar1->conv).flags = FVar7;
  (pCVar1->conv).length_mod = LVar8;
  (pCVar1->conv).conv = FVar9;
  (pCVar1->conv).field_0xf = uVar10;
  _Src = *(ConversionItem **)this;
  if (param_1 == *(ConversionItem **)(this + 8)) {
    _Size = (longlong)*(ConversionItem **)(this + 8) - (longlong)_Src;
    _Dst = pCVar15;
    param_1 = _Src;
  }
  else {
    memmove(pCVar15,_Src,(longlong)param_1 - (longlong)_Src);
    _Dst = pCVar1 + 1;
    _Size = *(longlong *)(this + 8) - (longlong)param_1;
  }
  memmove(_Dst,param_1,_Size);
  pvVar11 = *(void **)this;
  if (pvVar11 != (void *)0x0) {
    uVar14 = *(longlong *)(this + 0x10) - (longlong)pvVar11 & 0xffffffffffffffe0;
    pvVar13 = pvVar11;
    if (0xfff < uVar14) {
      uVar14 = uVar14 + 0x27;
      pvVar13 = *(void **)((longlong)pvVar11 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar11 + (-8 - (longlong)pvVar13))) {
LAB_1501eb6f8:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar13,uVar14);
  }
  *(ConversionItem **)this = pCVar15;
  *(ConversionItem **)(this + 8) = pCVar15 + uVar17;
  *(ConversionItem **)(this + 0x10) = pCVar15 + uVar18;
  return pCVar1;
}

// _Freenode0<std::allocator<std::_List_node<int,void*___ptr64>_>_> @ 1501eb720

/* public: static void __cdecl std::_List_node<int,void * __ptr64>::_Freenode0<class
   std::allocator<struct std::_List_node<int,void * __ptr64> > >(class std::allocator<struct
   std::_List_node<int,void * __ptr64> > & __ptr64,struct std::_List_node<int,void * __ptr64> *
   __ptr64) */

void __cdecl
std::_List_node<int,void*___ptr64>::_Freenode0<std::allocator<std::_List_node<int,void*___ptr64>_>_>
          (allocator<std::_List_node<int,void*___ptr64>_> *param_1,
          _List_node<int,void*___ptr64> *param_2)

{
  ::operator_delete(param_2,0x18);
  return;
}

// _Freenode<std::allocator<std::_List_node<int,void*___ptr64>_>_> @ 1501eb740

/* public: static void __cdecl std::_List_node<int,void * __ptr64>::_Freenode<class
   std::allocator<struct std::_List_node<int,void * __ptr64> > >(class std::allocator<struct
   std::_List_node<int,void * __ptr64> > & __ptr64,struct std::_List_node<int,void * __ptr64> *
   __ptr64) */

void __cdecl
std::_List_node<int,void*___ptr64>::_Freenode<std::allocator<std::_List_node<int,void*___ptr64>_>_>
          (allocator<std::_List_node<int,void*___ptr64>_> *param_1,
          _List_node<int,void*___ptr64> *param_2)

{
  ::operator_delete(param_2,0x18);
  return;
}

// _Get_unwrapped<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem*___ptr64_const&___ptr64> @ 1501eb760

/* UNKNOWN __cdecl std::_Get_unwrapped<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64 const &
   __ptr64>(struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem *
   __ptr64 const & __ptr64) */

ConversionItem * __cdecl
std::
_Get_unwrapped<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem*___ptr64_const&___ptr64>
          (ConversionItem **param_1)

{
  return *param_1;
}

// _Get_unwrapped<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64_const&___ptr64> @ 1501eb770

/* UNKNOWN __cdecl std::_Get_unwrapped<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> >,struct std::_Iterator_base0> * __ptr64 const
   & __ptr64>(class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> * __ptr64 const & __ptr64) */

_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0> *
__cdecl std::
        _Get_unwrapped<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64_const&___ptr64>
                  (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                   **param_1)

{
  return *param_1;
}

// _To_address<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem*___ptr64> @ 1501eb780

/* UNKNOWN __cdecl std::_To_address<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64>(struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64 const &
   __ptr64) */

ConversionItem * __cdecl
std::_To_address<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem*___ptr64>
          (ConversionItem **param_1)

{
  return *param_1;
}

// _Unfancy<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> @ 1501eb790

/* struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64
   __cdecl std::_Unfancy<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>(struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64) */

ConversionItem * __cdecl
std::_Unfancy<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
          (ConversionItem *param_1)

{
  return param_1;
}

// _Uninitialized_move<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem*___ptr64,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_> @ 1501eb7a0

/* struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64
   __cdecl std::_Uninitialized_move<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >(struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64
   const,struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64
   const,struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem *
   __ptr64,class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> & __ptr64) */

ConversionItem * __cdecl
std::
_Uninitialized_move<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem*___ptr64,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
          (ConversionItem *param_1,ConversionItem *param_2,ConversionItem *param_3,
          allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
          *param_4)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (ConversionItem *)
         (&param_3->is_conversion + ((longlong)param_2 - (longlong)param_1 & 0xffffffffffffffe0));
}

// addressof<std::_List_val<std::_List_simple_types<int>_>_const_> @ 1501eb7e0

/* class std::_List_val<struct std::_List_simple_types<int> > const * __ptr64 __cdecl
   std::addressof<class std::_List_val<struct std::_List_simple_types<int> > const >(class
   std::_List_val<struct std::_List_simple_types<int> > const & __ptr64) */

_List_val<std::_List_simple_types<int>_> * __cdecl
std::addressof<std::_List_val<std::_List_simple_types<int>_>_const_>
          (_List_val<struct_std::_List_simple_types<int>_> *param_1)

{
  return (_List_val<std::_List_simple_types<int>_> *)param_1;
}

// addressof<std::_List_node<int,void*___ptr64>*___ptr64> @ 1501eb7f0

/* struct std::_List_node<int,void * __ptr64> * __ptr64 * __ptr64 __cdecl std::addressof<struct
   std::_List_node<int,void * __ptr64> * __ptr64>(struct std::_List_node<int,void * __ptr64> *
   __ptr64 & __ptr64) */

_List_node<int,void*___ptr64> ** __cdecl
std::addressof<std::_List_node<int,void*___ptr64>*___ptr64>(_List_node<int,void*___ptr64> **param_1)

{
  return param_1;
}

// addressof<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> @ 1501eb800

/* struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64
   __cdecl std::addressof<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>(struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem & __ptr64) */

ConversionItem * __cdecl
std::addressof<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
          (ConversionItem *param_1)

{
  return param_1;
}

// addressof<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_> @ 1501eb810

/* class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> * __ptr64 __cdecl
   std::addressof<class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> >(class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> & __ptr64) */

_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0> *
__cdecl std::
        addressof<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>
                  (_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>
                   *param_1)

{
  return (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
          *)param_1;
}

// construct<int,int_const&___ptr64> @ 1501eb820

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::_List_node<int,void * __ptr64> > >::construct<int,int const & __ptr64>(class
   std::allocator<struct std::_List_node<int,void * __ptr64> > & __ptr64,int * __ptr64 const,int
   const & __ptr64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<std::_List_node<int,void*___ptr64>_>_>::
construct<int,int_const&___ptr64>
          (allocator<std::_List_node<int,void*___ptr64>_> *param_1,int *param_2,int *param_3)

{
  *param_2 = *param_3;
  return;
}

// construct<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> @ 1501eb830

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> >::construct<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>(class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   & __ptr64,struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem *
   __ptr64 const,struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem &&
   __ptr64) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::
construct<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
          (allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
           *param_1,ConversionItem *param_2,ConversionItem *param_3)

{
  ulong64 uVar1;
  undefined7 uVar2;
  InputValue IVar3;
  InputValue IVar4;
  Flags FVar5;
  LengthMod LVar6;
  FormatConversionChar FVar7;
  undefined1 uVar8;
  
  uVar2 = *(undefined7 *)&param_3->field_0x1;
  uVar1 = param_3->text_end;
  param_2->is_conversion = param_3->is_conversion;
  *(undefined7 *)&param_2->field_0x1 = uVar2;
  param_2->text_end = uVar1;
  IVar3.value_ = (param_3->conv).width.value_;
  IVar4.value_ = (param_3->conv).precision.value_;
  FVar5 = (param_3->conv).flags;
  LVar6 = (param_3->conv).length_mod;
  FVar7 = (param_3->conv).conv;
  uVar8 = (param_3->conv).field_0xf;
  (param_2->conv).arg_position = (param_3->conv).arg_position;
  (param_2->conv).width = (InputValue)IVar3.value_;
  (param_2->conv).precision = (InputValue)IVar4.value_;
  (param_2->conv).flags = FVar5;
  (param_2->conv).length_mod = LVar6;
  (param_2->conv).conv = FVar7;
  (param_2->conv).field_0xf = uVar8;
  return;
}

// construct_at<std::_List_node<int,void*___ptr64>*___ptr64,std::_List_node<int,void*___ptr64>*___ptr64&___ptr64,0> @ 1501eb850

/* struct std::_List_node<int,void * __ptr64> * __ptr64 * __ptr64 __cdecl std::construct_at<struct
   std::_List_node<int,void * __ptr64> * __ptr64,struct std::_List_node<int,void * __ptr64> *
   __ptr64 & __ptr64,0>(struct std::_List_node<int,void * __ptr64> * __ptr64 * __ptr64 const,struct
   std::_List_node<int,void * __ptr64> * __ptr64 & __ptr64) */

_List_node<int,void*___ptr64> ** __cdecl
std::
construct_at<std::_List_node<int,void*___ptr64>*___ptr64,std::_List_node<int,void*___ptr64>*___ptr64&___ptr64,0>
          (_List_node<int,void*___ptr64> **param_1,_List_node<int,void*___ptr64> **param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// construct_at<std::_List_node<int,void*___ptr64>*___ptr64,std::_List_node<int,void*___ptr64>*___ptr64_const&___ptr64,0> @ 1501eb860

/* struct std::_List_node<int,void * __ptr64> * __ptr64 * __ptr64 __cdecl std::construct_at<struct
   std::_List_node<int,void * __ptr64> * __ptr64,struct std::_List_node<int,void * __ptr64> *
   __ptr64 const & __ptr64,0>(struct std::_List_node<int,void * __ptr64> * __ptr64 * __ptr64
   const,struct std::_List_node<int,void * __ptr64> * __ptr64 const & __ptr64) */

_List_node<int,void*___ptr64> ** __cdecl
std::
construct_at<std::_List_node<int,void*___ptr64>*___ptr64,std::_List_node<int,void*___ptr64>*___ptr64_const&___ptr64,0>
          (_List_node<int,void*___ptr64> **param_1,_List_node<int,void*___ptr64> **param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// construct_at<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,0> @ 1501eb870

/* struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64
   __cdecl std::construct_at<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,0>(struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64 const,struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem && __ptr64) */

ConversionItem * __cdecl
std::
construct_at<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,0>
          (ConversionItem *param_1,ConversionItem *param_2)

{
  ulong64 uVar1;
  undefined7 uVar2;
  InputValue IVar3;
  InputValue IVar4;
  Flags FVar5;
  LengthMod LVar6;
  FormatConversionChar FVar7;
  undefined1 uVar8;
  
  uVar2 = *(undefined7 *)&param_2->field_0x1;
  uVar1 = param_2->text_end;
  param_1->is_conversion = param_2->is_conversion;
  *(undefined7 *)&param_1->field_0x1 = uVar2;
  param_1->text_end = uVar1;
  IVar3.value_ = (param_2->conv).width.value_;
  IVar4.value_ = (param_2->conv).precision.value_;
  FVar5 = (param_2->conv).flags;
  LVar6 = (param_2->conv).length_mod;
  FVar7 = (param_2->conv).conv;
  uVar8 = (param_2->conv).field_0xf;
  (param_1->conv).arg_position = (param_2->conv).arg_position;
  (param_1->conv).width = (InputValue)IVar3.value_;
  (param_1->conv).precision = (InputValue)IVar4.value_;
  (param_1->conv).flags = FVar5;
  (param_1->conv).length_mod = LVar6;
  (param_1->conv).conv = FVar7;
  (param_1->conv).field_0xf = uVar8;
  return param_1;
}

// construct_at<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>_const&___ptr64,0> @ 1501eb890

/* class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> * __ptr64 __cdecl
   std::construct_at<class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0>,class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> const & __ptr64,0>(class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> >,struct std::_Iterator_base0> * __ptr64
   const,class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> const & __ptr64) */

_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0> *
__cdecl std::
        construct_at<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>_const&___ptr64,0>
                  (_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>
                   *param_1,
                  _List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>
                  *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
          *)param_1;
}

// destroy<int> @ 1501eb8a0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::_List_node<int,void * __ptr64> > >::destroy<int>(class std::allocator<struct
   std::_List_node<int,void * __ptr64> > & __ptr64,int * __ptr64 const) */

void __cdecl
std::_Default_allocator_traits<std::allocator<std::_List_node<int,void*___ptr64>_>_>::destroy<int>
          (allocator<std::_List_node<int,void*___ptr64>_> *param_1,int *param_2)

{
  return;
}

// exchange<std::_List_node<int,void*___ptr64>*___ptr64,std::nullptr_t> @ 1501eb8b0

/* struct std::_List_node<int,void * __ptr64> * __ptr64 __cdecl std::exchange<struct
   std::_List_node<int,void * __ptr64> * __ptr64,std::nullptr_t>(struct std::_List_node<int,void *
   __ptr64> * __ptr64 & __ptr64,std::nullptr_t && __ptr64) */

_List_node<int,void*___ptr64> * __cdecl
std::exchange<std::_List_node<int,void*___ptr64>*___ptr64,std::nullptr_t>
          (_List_node<int,void*___ptr64> **param_1,std__nullptr_t *param_2)

{
  _List_node<int,void*___ptr64> *p_Var1;
  
  p_Var1 = *param_1;
  *param_1 = *(_List_node<int,void*___ptr64> **)param_2;
  return p_Var1;
}

// forward<std::_List_node<int,void*___ptr64>*___ptr64&___ptr64> @ 1501eb8c0

/* struct std::_List_node<int,void * __ptr64> * __ptr64 & __ptr64 __cdecl std::forward<struct
   std::_List_node<int,void * __ptr64> * __ptr64 & __ptr64>(struct std::_List_node<int,void *
   __ptr64> * __ptr64 & __ptr64) */

_List_node<int,void*___ptr64> ** __cdecl
std::forward<std::_List_node<int,void*___ptr64>*___ptr64&___ptr64>
          (_List_node<int,void*___ptr64> **param_1)

{
  return param_1;
}

// forward<std::_List_node<int,void*___ptr64>*___ptr64_const&___ptr64> @ 1501eb8d0

/* struct std::_List_node<int,void * __ptr64> * __ptr64 const & __ptr64 __cdecl std::forward<struct
   std::_List_node<int,void * __ptr64> * __ptr64 const & __ptr64>(struct std::_List_node<int,void *
   __ptr64> * __ptr64 const & __ptr64) */

_List_node<int,void*___ptr64> ** __cdecl
std::forward<std::_List_node<int,void*___ptr64>*___ptr64_const&___ptr64>
          (_List_node<int,void*___ptr64> **param_1)

{
  return param_1;
}

// forward<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_const&___ptr64> @ 1501eb8e0

/* class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> const & __ptr64 __cdecl
   std::forward<class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> const & __ptr64>(class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> const & __ptr64) */

_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0> *
__cdecl std::
        forward<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_const&___ptr64>
                  (_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>
                   *param_1)

{
  return (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
          *)param_1;
}

// forward<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> @ 1501eb8f0

/* struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem && __ptr64
   __cdecl std::forward<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>(struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem & __ptr64) */

ConversionItem * __cdecl
std::forward<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
          (ConversionItem *param_1)

{
  return param_1;
}

// forward<std::_List_iterator<std::_List_val<std::_List_simple_types<int>_>_>_> @ 1501eb900

/* class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<int> > > && __ptr64
   __cdecl std::forward<class std::_List_iterator<class std::_List_val<struct
   std::_List_simple_types<int> > > >(class std::_List_iterator<class std::_List_val<struct
   std::_List_simple_types<int> > > & __ptr64) */

_List_iterator<std::_List_val<std::_List_simple_types<int>_>_> * __cdecl
std::forward<std::_List_iterator<std::_List_val<std::_List_simple_types<int>_>_>_>
          (_List_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>_> *param_1)

{
  return (_List_iterator<std::_List_val<std::_List_simple_types<int>_>_> *)param_1;
}

// move<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem&___ptr64> @ 1501eb910

/* struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem && __ptr64
   __cdecl std::move<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem & __ptr64>(struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem & __ptr64) */

ConversionItem * __cdecl
std::move<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem&___ptr64>
          (ConversionItem *param_1)

{
  return param_1;
}

// to_address<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> @ 1501eb920

/* struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64
   __cdecl std::to_address<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>(struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64 const) */

ConversionItem * __cdecl
std::to_address<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
          (ConversionItem *param_1)

{
  return param_1;
}

// _Alloc_construct_ptr<std::allocator<std::_List_node<int,void*___ptr64>_>_> @ 1501eb950

/* public: __cdecl std::_Alloc_construct_ptr<class std::allocator<struct std::_List_node<int,void *
   __ptr64> > >::_Alloc_construct_ptr<class std::allocator<struct std::_List_node<int,void *
   __ptr64> > >(class std::allocator<struct std::_List_node<int,void * __ptr64> > & __ptr64) __ptr64
    */

_Alloc_construct_ptr<std::allocator<std::_List_node<int,void*___ptr64>_>_> * __thiscall
std::_Alloc_construct_ptr<std::allocator<std::_List_node<int,void*___ptr64>_>_>::
_Alloc_construct_ptr<std::allocator<std::_List_node<int,void*___ptr64>_>_>
          (_Alloc_construct_ptr<std::allocator<std::_List_node<int,void*___ptr64>_>_> *this,
          allocator<std::_List_node<int,void*___ptr64>_> *param_1)

{
  *(allocator<std::_List_node<int,void*___ptr64>_> **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// _Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_> @ 1501eb970

/* protected: __cdecl std::_Hash<class std::_Uset_traits<int,class std::_Uhash_compare<int,struct
   std::hash<int>,struct std::equal_to<int> >,class std::allocator<int>,0> >::_Hash<class
   std::_Uset_traits<int,class std::_Uhash_compare<int,struct std::hash<int>,struct
   std::equal_to<int> >,class std::allocator<int>,0> >(class std::_Uhash_compare<int,struct
   std::hash<int>,struct std::equal_to<int> > const & __ptr64,class std::allocator<int> const &
   __ptr64) __ptr64 */

_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
* __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
          (_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
           *this,_Uhash_compare<int,std::hash<int>,std::equal_to<int>_> *param_1,
          allocator<int> *param_2)

{
  _List_node<int,void_*> *p_Var1;
  
  this->_Traitsobj =
       (_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>
        )(param_1->_Mypair)._Myval2._Myval2;
  (this->_List)._Mypair._Myval2._Myhead = (_List_node<int,void_*> *)0x0;
  (this->_List)._Mypair._Myval2._Mysize = 0;
  p_Var1 = ::operator_new(0x18);
  p_Var1->_Next = p_Var1;
  p_Var1->_Prev = p_Var1;
  (this->_List)._Mypair._Myval2._Myhead = p_Var1;
  (this->_Vec)._Mypair._Myval2._Myfirst =
       (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
        *)0x0;
  (this->_Vec)._Mypair._Myval2._Mylast =
       (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
        *)0x0;
  (this->_Vec)._Mypair._Myval2._Myend =
       (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
        *)0x0;
  this->_Mask = 7;
  this->_Maxidx = 8;
  this->_Traitsobj =
       (_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>
        )0x3f800000;
  _Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
  ::_Assign_grow(&this->_Vec,0x10,(this->_List)._Mypair._Myval2._Myhead);
  return this;
}

// _List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_> @ 1501eb9f0

/* public: __cdecl std::_List_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> > >::_List_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> > >(struct std::_List_node<int,void * __ptr64> * __ptr64,class
   std::_List_val<struct std::_List_simple_types<int> > const * __ptr64) __ptr64 */

_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_> * __thiscall
std::_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_>::
_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_>
          (_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_> *this,
          _List_node<int,void*___ptr64> *param_1,_List_val<std::_List_simple_types<int>_> *param_2)

{
  *this = (_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_>)param_1;
  return this;
}

// _List_iterator<std::_List_val<std::_List_simple_types<int>_>_> @ 1501eba00

/* public: __cdecl std::_List_iterator<class std::_List_val<struct std::_List_simple_types<int> >
   >::_List_iterator<class std::_List_val<struct std::_List_simple_types<int> > >(struct
   std::_List_node<int,void * __ptr64> * __ptr64,class std::_List_val<struct
   std::_List_simple_types<int> > const * __ptr64) __ptr64 */

_List_iterator<std::_List_val<std::_List_simple_types<int>_>_> * __thiscall
std::_List_iterator<std::_List_val<std::_List_simple_types<int>_>_>::
_List_iterator<std::_List_val<std::_List_simple_types<int>_>_>
          (_List_iterator<std::_List_val<std::_List_simple_types<int>_>_> *this,
          _List_node<int,void*___ptr64> *param_1,_List_val<std::_List_simple_types<int>_> *param_2)

{
  *this = (_List_iterator<std::_List_val<std::_List_simple_types<int>_>_>)param_1;
  return this;
}

// _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0> @ 1501eba10

/* public: __cdecl std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0>::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> >,struct std::_Iterator_base0>(struct
   std::_List_node<int,void * __ptr64> * __ptr64,class std::_List_val<struct
   std::_List_simple_types<int> > const * __ptr64) __ptr64 */

_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0> *
__thiscall
std::
_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>::
_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
          (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
           *this,_List_node<int,void*___ptr64> *param_1,
          _List_val<std::_List_simple_types<int>_> *param_2)

{
  this->_Ptr = (_List_node<int,void_*> *)param_1;
  return this;
}

// _List_unchecked_iterator<std::_List_val<std::_List_simple_types<int>_>_> @ 1501eba20

/* public: __cdecl std::_List_unchecked_iterator<class std::_List_val<struct
   std::_List_simple_types<int> > >::_List_unchecked_iterator<class std::_List_val<struct
   std::_List_simple_types<int> > >(struct std::_List_node<int,void * __ptr64> * __ptr64,class
   std::_List_val<struct std::_List_simple_types<int> > const * __ptr64) __ptr64 */

_List_unchecked_iterator<std::_List_val<std::_List_simple_types<int>_>_> * __thiscall
std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<int>_>_>::
_List_unchecked_iterator<std::_List_val<std::_List_simple_types<int>_>_>
          (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<int>_>_> *this,
          _List_node<int,void*___ptr64> *param_1,_List_val<std::_List_simple_types<int>_> *param_2)

{
  *this = (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<int>_>_>)param_1;
  return this;
}

// _List_val<std::_List_simple_types<int>_> @ 1501eba30

/* public: __cdecl std::_List_val<struct std::_List_simple_types<int> >::_List_val<struct
   std::_List_simple_types<int> >(void) __ptr64 */

_List_val<std::_List_simple_types<int>_> * __thiscall
std::_List_val<std::_List_simple_types<int>_>::_List_val<std::_List_simple_types<int>_>
          (_List_val<std::_List_simple_types<int>_> *this)

{
  this->_Myhead = (_List_node<int,void_*> *)0x0;
  this->_Mysize = 0;
  return this;
}

// _Uhash_compare<int,std::hash<int>,std::equal_to<int>_> @ 1501eba50

/* public: __cdecl std::_Uhash_compare<int,struct std::hash<int>,struct std::equal_to<int>
   >::_Uhash_compare<int,struct std::hash<int>,struct std::equal_to<int> >(void) __ptr64 */

_Uhash_compare<int,std::hash<int>,std::equal_to<int>_> * __thiscall
std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>::
_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>
          (_Uhash_compare<int,std::hash<int>,std::equal_to<int>_> *this)

{
  (this->_Mypair)._Myval2._Myval2 = 0.0;
  return this;
}

// _Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64> @ 1501eba60

/* public: __cdecl std::_Uninitialized_backout<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> >,struct std::_Iterator_base0> *
   __ptr64>::_Uninitialized_backout<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> >,struct std::_Iterator_base0> *
   __ptr64>(class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> * __ptr64) __ptr64 */

_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64>
* __thiscall
std::
_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64>
::
_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64>
          (_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64>
           *this,_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                 *param_1)

{
  *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
    **)this = param_1;
  *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
    **)(this + 8) = param_1;
  return this;
}

// _Uninitialized_backout_al<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_> @ 1501eba80

/* public: __cdecl std::_Uninitialized_backout_al<class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::_Uninitialized_backout_al<class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> >(struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   & __ptr64) __ptr64 */

_Uninitialized_backout_al<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
* __thiscall
std::
_Uninitialized_backout_al<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::
_Uninitialized_backout_al<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
          (_Uninitialized_backout_al<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
           *this,ConversionItem *param_1,
          allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
          *param_2)

{
  *(ConversionItem **)this = param_1;
  *(ConversionItem **)(this + 8) = param_1;
  *(allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> **)
   (this + 0x10) = param_2;
  return this;
}

// _Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0> @ 1501ebaa0

/* public: __cdecl std::_Uset_traits<int,class std::_Uhash_compare<int,struct std::hash<int>,struct
   std::equal_to<int> >,class std::allocator<int>,0>::_Uset_traits<int,class
   std::_Uhash_compare<int,struct std::hash<int>,struct std::equal_to<int> >,class
   std::allocator<int>,0>(class std::_Uhash_compare<int,struct std::hash<int>,struct
   std::equal_to<int> > const & __ptr64) __ptr64 */

_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>
* __thiscall
std::
_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>
::
_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>
          (_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>
           *this,_Uhash_compare<int,std::hash<int>,std::equal_to<int>_> *param_1)

{
  *this = (_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>
           )(param_1->_Mypair)._Myval2._Myval2;
  return this;
}

// _Vector_val<std::_Simple_types<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_> @ 1501ebab0

/* public: __cdecl std::_Vector_val<struct std::_Simple_types<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> >::_Vector_val<struct
   std::_Simple_types<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> >(void) __ptr64 */

_Vector_val<std::_Simple_types<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
* __thiscall
std::
_Vector_val<std::_Simple_types<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::
_Vector_val<std::_Simple_types<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
          (_Vector_val<std::_Simple_types<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// _Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_> @ 1501ebad0

/* public: __cdecl std::_Vector_val<struct std::_Simple_types<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> > >::_Vector_val<struct std::_Simple_types<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> > >(void) __ptr64 */

_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
* __thiscall
std::
_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
::
_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
          (_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
           *this)

{
  this->_Myfirst =
       (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
        *)0x0;
  this->_Mylast =
       (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
        *)0x0;
  this->_Myend = (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                  *)0x0;
  return this;
}

// allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> @ 1501ebaf0

/* public: __cdecl std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>(void) __ptr64 */

allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> * __thiscall
std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>::
allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
          (allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
           *this)

{
  return this;
}

// list<int,std::allocator<int>_> @ 1501ebb00

/* public: __cdecl std::list<int,class std::allocator<int> >::list<int,class std::allocator<int>
   >(class std::allocator<int> const & __ptr64) __ptr64 */

list<int,std::allocator<int>_> * __thiscall
std::list<int,std::allocator<int>_>::list<int,std::allocator<int>_>
          (list<int,std::allocator<int>_> *this,allocator<int> *param_1)

{
  _List_node<int,void_*> *p_Var1;
  
  (this->_Mypair)._Myval2._Myhead = (_List_node<int,void_*> *)0x0;
  (this->_Mypair)._Myval2._Mysize = 0;
  p_Var1 = ::operator_new(0x18);
  p_Var1->_Next = p_Var1;
  p_Var1->_Prev = p_Var1;
  (this->_Mypair)._Myval2._Myhead = p_Var1;
  return this;
}

// vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_> @ 1501ebb40

/* public: __cdecl std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::vector<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >(void) __ptr64 */

vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
* __thiscall
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
          (vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// ParsedFormatBase @ 1501ebb60

/* WARNING: Type propagation algorithm not settling */
/* public: __cdecl absl::lts_20240722::str_format_internal::ParsedFormatBase::ParsedFormatBase(class
   std::basic_string_view<char,struct std::char_traits<char> >,bool,class std::initializer_list<enum
   absl::lts_20240722::FormatConversionCharSet>) __ptr64 */

ParsedFormatBase * __thiscall
absl::lts_20240722::str_format_internal::ParsedFormatBase::ParsedFormatBase
          (ParsedFormatBase *this,undefined4 *param_1,char param_2,longlong *param_4)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  _List_node<int,void_*> *p_Var5;
  bool bVar6;
  ParsedFormatBase PVar7;
  void *pvVar8;
  ulonglong uVar9;
  _List_node<int,void_*> *p_Var10;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
  _Var11;
  char cVar12;
  uint *puVar13;
  char *pcVar14;
  uint local_res10 [2];
  pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_>,bool> local_b8;
  pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_>,bool> local_a8;
  pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_>,bool> local_98;
  _Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
  local_88;
  
  pvVar8 = (void *)0x0;
  if (*(ulong64 *)(param_1 + 2) != 0) {
    pvVar8 = operator_new__(*(ulong64 *)(param_1 + 2));
  }
  *(void **)(this + 8) = pvVar8;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  local_b8._8_8_ = *(undefined8 *)(this + 8);
  local_a8.first._0_4_ = *param_1;
  local_a8.first._4_4_ = param_1[1];
  local_a8._8_4_ = param_1[2];
  local_a8._12_4_ = param_1[3];
  local_b8.first = (_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_>)this;
  bVar6 = ParseFormatString<absl::lts_20240722::str_format_internal::ParsedFormatBase::ParsedFormatConsumer>
                    (&local_a8,&local_b8);
  if (bVar6) {
    local_88._Traitsobj =
         (_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>
          )0x0;
    local_88._List._Mypair._Myval2._Myhead = (_List_node<int,void_*> *)0x0;
    local_88._List._Mypair._Myval2._Mysize = 0;
    local_88._List._Mypair._Myval2._Myhead = ::operator_new(0x18);
    (local_88._List._Mypair._Myval2._Myhead)->_Next = local_88._List._Mypair._Myval2._Myhead;
    (local_88._List._Mypair._Myval2._Myhead)->_Prev = local_88._List._Mypair._Myval2._Myhead;
    local_88._Vec._Mypair._Myval2._Myfirst =
         (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
          *)0x0;
    local_88._Vec._Mypair._Myval2._Mylast =
         (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
          *)0x0;
    local_88._Vec._Mypair._Myval2._Myend =
         (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
          *)0x0;
    local_88._Mask = 7;
    local_88._Maxidx = 8;
    local_88._Traitsobj =
         (_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>
          )0x3f800000;
    std::
    _Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
    ::_Assign_grow(&local_88._Vec,0x10,
                   (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                    )local_88._List._Mypair._Myval2._Myhead);
    pcVar14 = *(char **)(this + 0x10);
    pcVar2 = *(char **)(this + 0x18);
    lVar3 = param_4[1];
    lVar4 = *param_4;
    if (pcVar14 != pcVar2) {
      puVar13 = (uint *)(pcVar14 + 0x14);
LAB_1501ebc53:
      if (*pcVar14 == '\0') goto LAB_1501ebed5;
      if ((int)puVar13[1] < -1) {
        local_res10[0] = ~puVar13[1];
        if (((ulonglong)(longlong)(int)local_res10[0] <= (ulonglong)(lVar3 - lVar4 >> 3)) &&
           ((*(byte *)(lVar4 + -8 + (longlong)(int)local_res10[0] * 8) & 1) != 0)) {
          std::
          _Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
          ::emplace<int_const_&>(&local_88,&local_a8,(int *)local_res10);
          goto LAB_1501ebc9f;
        }
        if ((_List_node<int,void_*> *)local_88._Vec._Mypair._Myval2._Myfirst !=
            (_List_node<int,void_*> *)0x0) {
          uVar9 = ((longlong)local_88._Vec._Mypair._Myval2._Myend -
                   (longlong)local_88._Vec._Mypair._Myval2._Myfirst >> 3) * 8;
          p_Var10 = (_List_node<int,void_*> *)local_88._Vec._Mypair._Myval2._Myfirst;
          if (0xfff < uVar9) {
            uVar9 = uVar9 + 0x27;
            p_Var10 = *(_List_node<int,void_*> **)
                       &((_List_node<int,void_*> *)
                        ((longlong)local_88._Vec._Mypair._Myval2._Myfirst + 0xffffffffffffffe8))->
                        _Myval;
            if (0x1f < (ulonglong)
                       ((longlong)local_88._Vec._Mypair._Myval2._Myfirst + (-8 - (longlong)p_Var10))
               ) goto LAB_1501ec097;
          }
          ::operator_delete(p_Var10,uVar9);
          local_88._Vec._Mypair._Myval2._Myfirst =
               (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                *)0x0;
          local_88._Vec._Mypair._Myval2._Mylast =
               (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                *)0x0;
          local_88._Vec._Mypair._Myval2._Myend =
               (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                *)0x0;
        }
        (local_88._List._Mypair._Myval2._Myhead)->_Prev->_Next = (_List_node<int,void_*> *)0x0;
        p_Var10 = (local_88._List._Mypair._Myval2._Myhead)->_Next;
        while (p_Var10 != (_List_node<int,void_*> *)0x0) {
          p_Var5 = p_Var10->_Next;
          ::operator_delete(p_Var10,0x18);
          p_Var10 = p_Var5;
        }
      }
      else {
LAB_1501ebc9f:
        if ((int)*puVar13 < -1) {
          local_res10[0] = ~*puVar13;
          if (((ulonglong)(lVar3 - lVar4 >> 3) < (ulonglong)(longlong)(int)local_res10[0]) ||
             ((*(byte *)(lVar4 + -8 + (longlong)(int)local_res10[0] * 8) & 1) == 0)) {
            if ((_List_node<int,void_*> *)local_88._Vec._Mypair._Myval2._Myfirst !=
                (_List_node<int,void_*> *)0x0) {
              uVar9 = ((longlong)local_88._Vec._Mypair._Myval2._Myend -
                       (longlong)local_88._Vec._Mypair._Myval2._Myfirst >> 3) * 8;
              p_Var10 = (_List_node<int,void_*> *)local_88._Vec._Mypair._Myval2._Myfirst;
              if (0xfff < uVar9) {
                uVar9 = uVar9 + 0x27;
                p_Var10 = *(_List_node<int,void_*> **)
                           &((_List_node<int,void_*> *)
                            ((longlong)local_88._Vec._Mypair._Myval2._Myfirst + 0xffffffffffffffe8))
                            ->_Myval;
                if (0x1f < (ulonglong)
                           ((longlong)local_88._Vec._Mypair._Myval2._Myfirst +
                           (-8 - (longlong)p_Var10))) goto LAB_1501ec097;
              }
              ::operator_delete(p_Var10,uVar9);
              local_88._Vec._Mypair._Myval2._Myfirst =
                   (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                    *)0x0;
              local_88._Vec._Mypair._Myval2._Mylast =
                   (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                    *)0x0;
              local_88._Vec._Mypair._Myval2._Myend =
                   (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                    *)0x0;
            }
            (local_88._List._Mypair._Myval2._Myhead)->_Prev->_Next = (_List_node<int,void_*> *)0x0;
            p_Var10 = (local_88._List._Mypair._Myval2._Myhead)->_Next;
            while (p_Var10 != (_List_node<int,void_*> *)0x0) {
              p_Var5 = p_Var10->_Next;
              ::operator_delete(p_Var10,0x18);
              p_Var10 = p_Var5;
            }
            goto LAB_1501ebf95;
          }
          std::
          _Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
          ::emplace<int_const_&>(&local_88,&local_b8,(int *)local_res10);
        }
        cVar1 = *(char *)((longlong)puVar13 + 10);
        if (cVar1 == '\x13') {
          cVar12 = '\0';
        }
        else if (cVar1 == '\0') {
          cVar12 = 'c';
        }
        else if (cVar1 == '\x01') {
          cVar12 = 's';
        }
        else if (cVar1 == '\x02') {
          cVar12 = 'd';
        }
        else if (cVar1 == '\x03') {
          cVar12 = 'i';
        }
        else if (cVar1 == '\x04') {
          cVar12 = 'o';
        }
        else if (cVar1 == '\x05') {
          cVar12 = 'u';
        }
        else if (cVar1 == '\x06') {
          cVar12 = 'x';
        }
        else if (cVar1 == '\a') {
          cVar12 = 'X';
        }
        else if (cVar1 == '\b') {
          cVar12 = 'f';
        }
        else if (cVar1 == '\t') {
          cVar12 = 'F';
        }
        else if (cVar1 == '\n') {
          cVar12 = 'e';
        }
        else if (cVar1 == '\v') {
          cVar12 = 'E';
        }
        else if (cVar1 == '\f') {
          cVar12 = 'g';
        }
        else if (cVar1 == '\r') {
          cVar12 = 'G';
        }
        else if (cVar1 == '\x0e') {
          cVar12 = 'a';
        }
        else if (cVar1 == '\x0f') {
          cVar12 = 'A';
        }
        else if (cVar1 == '\x10') {
          cVar12 = 'n';
        }
        else if (cVar1 == '\x11') {
          cVar12 = 'p';
        }
        else {
          cVar12 = '\0';
          if (cVar1 == '\x12') {
            cVar12 = 'v';
          }
        }
        local_res10[0] = puVar13[-1];
        if ((ulonglong)(longlong)(int)local_res10[0] <= (ulonglong)(lVar3 - lVar4 >> 3)) {
          if (cVar12 == 'c') {
            uVar9 = 2;
          }
          else if (cVar12 == 's') {
            uVar9 = 4;
          }
          else if (cVar12 == 'd') {
            uVar9 = 8;
          }
          else if (cVar12 == 'i') {
            uVar9 = 0x10;
          }
          else if (cVar12 == 'o') {
            uVar9 = 0x20;
          }
          else if (cVar12 == 'u') {
            uVar9 = 0x40;
          }
          else if (cVar12 == 'x') {
            uVar9 = 0x80;
          }
          else if (cVar12 == 'X') {
            uVar9 = 0x100;
          }
          else if (cVar12 == 'f') {
            uVar9 = 0x200;
          }
          else if (cVar12 == 'F') {
            uVar9 = 0x400;
          }
          else if (cVar12 == 'e') {
            uVar9 = 0x800;
          }
          else if (cVar12 == 'E') {
            uVar9 = 0x1000;
          }
          else if (cVar12 == 'g') {
            uVar9 = 0x2000;
          }
          else if (cVar12 == 'G') {
            uVar9 = 0x4000;
          }
          else if (cVar12 == 'a') {
            uVar9 = 0x8000;
          }
          else if (cVar12 == 'A') {
            uVar9 = 0x10000;
          }
          else if (cVar12 == 'n') {
            uVar9 = 0x20000;
          }
          else if (cVar12 == 'p') {
            uVar9 = 0x40000;
          }
          else if (cVar12 == 'v') {
            uVar9 = 0x80000;
          }
          else {
            uVar9 = (ulonglong)(cVar12 == '*');
          }
          if ((*(ulonglong *)(lVar4 + -8 + (longlong)(int)local_res10[0] * 8) & uVar9) != 0) {
            std::
            _Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
            ::emplace<int_const_&>(&local_88,&local_98,(int *)local_res10);
            goto LAB_1501ebed5;
          }
        }
        if (local_88._Vec._Mypair._Myval2._Myfirst !=
            (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
             *)0x0) {
          uVar9 = ((longlong)local_88._Vec._Mypair._Myval2._Myend -
                   (longlong)local_88._Vec._Mypair._Myval2._Myfirst >> 3) * 8;
          _Var11._Ptr = (_List_node<int,void_*> *)local_88._Vec._Mypair._Myval2._Myfirst;
          if (0xfff < uVar9) {
            uVar9 = uVar9 + 0x27;
            _Var11._Ptr = ((_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                            *)&((_List_node<int,void_*> *)
                               ((longlong)local_88._Vec._Mypair._Myval2._Myfirst +
                               0xffffffffffffffe8))->_Myval)->_Ptr;
            if (0x1f < (ulonglong)
                       ((longlong)local_88._Vec._Mypair._Myval2._Myfirst +
                       (-8 - (longlong)_Var11._Ptr))) {
LAB_1501ec097:
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete(_Var11._Ptr,uVar9);
          local_88._Vec._Mypair._Myval2._Myfirst =
               (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                *)0x0;
          local_88._Vec._Mypair._Myval2._Mylast =
               (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                *)0x0;
          local_88._Vec._Mypair._Myval2._Myend =
               (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                *)0x0;
        }
        (local_88._List._Mypair._Myval2._Myhead)->_Prev->_Next = (_List_node<int,void_*> *)0x0;
        p_Var10 = (local_88._List._Mypair._Myval2._Myhead)->_Next;
        while (p_Var10 != (_List_node<int,void_*> *)0x0) {
          p_Var5 = p_Var10->_Next;
          ::operator_delete(p_Var10,0x18);
          p_Var10 = p_Var5;
        }
      }
LAB_1501ebf95:
      ::operator_delete(local_88._List._Mypair._Myval2._Myhead,0x18);
      goto LAB_1501ebfa3;
    }
LAB_1501ebee6:
    if ((local_88._List._Mypair._Myval2._Mysize == lVar3 - lVar4 >> 3) || (param_2 != '\0')) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    std::
    _Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
    ::
    ~_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
              (&local_88);
    if (bVar6) {
      PVar7 = (ParsedFormatBase)0x0;
      goto LAB_1501ebfa5;
    }
  }
LAB_1501ebfa3:
  PVar7 = (ParsedFormatBase)0x1;
LAB_1501ebfa5:
  *this = PVar7;
  return this;
LAB_1501ebed5:
  pcVar14 = pcVar14 + 0x20;
  puVar13 = puVar13 + 8;
  if (pcVar14 == pcVar2) goto LAB_1501ebee6;
  goto LAB_1501ebc53;
}

// ParsedFormatConsumer @ 1501ec110

/* public: __cdecl
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ParsedFormatConsumer::ParsedFormatConsumer(class
   absl::lts_20240722::str_format_internal::ParsedFormatBase * __ptr64) __ptr64 */

ParsedFormatConsumer * __thiscall
absl::lts_20240722::str_format_internal::ParsedFormatBase::ParsedFormatConsumer::
ParsedFormatConsumer(ParsedFormatConsumer *this,ParsedFormatBase *param_1)

{
  *(ParsedFormatBase **)this = param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  return this;
}

// _Clear_guard @ 1501ec130

/* public: __cdecl std::_Hash<class std::_Uset_traits<int,class std::_Uhash_compare<int,struct
   std::hash<int>,struct std::equal_to<int> >,class std::allocator<int>,0>
   >::_Clear_guard::_Clear_guard(class std::_Hash<class std::_Uset_traits<int,class
   std::_Uhash_compare<int,struct std::hash<int>,struct std::equal_to<int> >,class
   std::allocator<int>,0> > * __ptr64 const) __ptr64 */

_Clear_guard * __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::_Clear_guard::_Clear_guard
          (_Clear_guard *this,
          _Hash<class_std::_Uset_traits<int,class_std::_Uhash_compare<int,struct_std::hash<int>,struct_std::equal_to<int>_>,class_std::allocator<int>,0>_>
          *param_1)

{
  this->_Target =
       (_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
        *)param_1;
  return this;
}

// _Range_eraser @ 1501ec140

/* public: __cdecl std::_Hash<class std::_Uset_traits<int,class std::_Uhash_compare<int,struct
   std::hash<int>,struct std::equal_to<int> >,class std::allocator<int>,0>
   >::_Range_eraser::_Range_eraser(class std::list<int,class std::allocator<int> > & __ptr64,struct
   std::_List_node<int,void * __ptr64> * __ptr64 const) __ptr64 */

_Range_eraser * __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::_Range_eraser::_Range_eraser
          (_Range_eraser *this,list<int,std::allocator<int>_> *param_1,
          _List_node<int,void*___ptr64> *param_2)

{
  this->_List = param_1;
  this->_Predecessor = *(_List_node<int,void_*> **)(param_2 + 8);
  this->_Next = (_List_node<int,void_*> *)param_2;
  return this;
}

// ~_Alloc_construct_ptr<std::allocator<std::_List_node<int,void*___ptr64>_>_> @ 1501ec160

/* public: __cdecl std::_Alloc_construct_ptr<class std::allocator<struct std::_List_node<int,void *
   __ptr64> > >::~_Alloc_construct_ptr<class std::allocator<struct std::_List_node<int,void *
   __ptr64> > >(void) __ptr64 */

void __thiscall
std::_Alloc_construct_ptr<std::allocator<std::_List_node<int,void*___ptr64>_>_>::
~_Alloc_construct_ptr<std::allocator<std::_List_node<int,void*___ptr64>_>_>
          (_Alloc_construct_ptr<std::allocator<std::_List_node<int,void*___ptr64>_>_> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    ::operator_delete(*(void **)(this + 8),0x18);
    return;
  }
  return;
}

// ~_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_> @ 1501ec180

/* WARNING: Type propagation algorithm not settling */
/* public: __cdecl std::_Hash<class std::_Uset_traits<int,class std::_Uhash_compare<int,struct
   std::hash<int>,struct std::equal_to<int> >,class std::allocator<int>,0> >::~_Hash<class
   std::_Uset_traits<int,class std::_Uhash_compare<int,struct std::hash<int>,struct
   std::equal_to<int> >,class std::allocator<int>,0> >(void) __ptr64 */

void __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::
~_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
          (_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
           *this)

{
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
  *p_Var1;
  _List_node<int,void_*> *p_Var2;
  _List_node<int,void_*> *p_Var3;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
  *p_Var4;
  ulong64 uVar5;
  
  p_Var1 = (this->_Vec)._Mypair._Myval2._Myfirst;
  if (p_Var1 != (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                 *)0x0) {
    uVar5 = (longlong)(this->_Vec)._Mypair._Myval2._Myend - (longlong)p_Var1 & 0xfffffffffffffff8;
    p_Var4 = p_Var1;
    if (0xfff < uVar5) {
      p_Var4 = *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                 **)(p_Var1 + 0xffffffffffffffff);
      uVar5 = uVar5 + 0x27;
      if (0x1f < (ulonglong)((longlong)p_Var1 + (-8 - (longlong)p_Var4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(p_Var4,uVar5);
    (this->_Vec)._Mypair._Myval2._Myfirst =
         (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
          *)0x0;
    (this->_Vec)._Mypair._Myval2._Mylast =
         (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
          *)0x0;
    (this->_Vec)._Mypair._Myval2._Myend =
         (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
          *)0x0;
  }
  p_Var2 = (this->_List)._Mypair._Myval2._Myhead;
  p_Var2->_Prev->_Next = (_List_node<int,void_*> *)0x0;
  p_Var2 = p_Var2->_Next;
  while (p_Var2 != (_List_node<int,void_*> *)0x0) {
    p_Var3 = p_Var2->_Next;
    ::operator_delete(p_Var2,0x18);
    p_Var2 = p_Var3;
  }
  ::operator_delete((this->_List)._Mypair._Myval2._Myhead,0x18);
  return;
}

// ~_List_node_emplace_op2<std::allocator<std::_List_node<int,void*___ptr64>_>_> @ 1501ec230

/* public: __cdecl std::_List_node_emplace_op2<class std::allocator<struct std::_List_node<int,void
   * __ptr64> > >::~_List_node_emplace_op2<class std::allocator<struct std::_List_node<int,void *
   __ptr64> > >(void) __ptr64 */

void __thiscall
std::_List_node_emplace_op2<std::allocator<std::_List_node<int,void*___ptr64>_>_>::
~_List_node_emplace_op2<std::allocator<std::_List_node<int,void*___ptr64>_>_>
          (_List_node_emplace_op2<std::allocator<std::_List_node<int,void*___ptr64>_>_> *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    ::operator_delete(*(void **)(this + 8),0x18);
    return;
  }
  return;
}

// ~_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64> @ 1501ec250

/* public: __cdecl std::_Uninitialized_backout<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> >,struct std::_Iterator_base0> *
   __ptr64>::~_Uninitialized_backout<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> >,struct std::_Iterator_base0> *
   __ptr64>(void) __ptr64 */

void __thiscall
std::
_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64>
::
~_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64>
          (_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64>
           *this)

{
  return;
}

// ~_Uninitialized_backout_al<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_> @ 1501ec260

/* public: __cdecl std::_Uninitialized_backout_al<class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::~_Uninitialized_backout_al<class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> >(void) __ptr64 */

void __thiscall
std::
_Uninitialized_backout_al<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::
~_Uninitialized_backout_al<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
          (_Uninitialized_backout_al<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
           *this)

{
  return;
}

// ~unordered_set<int,std::hash<int>,std::equal_to<int>,std::allocator<int>_> @ 1501ec270

/* public: __cdecl std::unordered_set<int,struct std::hash<int>,struct std::equal_to<int>,class
   std::allocator<int> >::~unordered_set<int,struct std::hash<int>,struct std::equal_to<int>,class
   std::allocator<int> >(void) __ptr64 */

void __thiscall
std::unordered_set<int,std::hash<int>,std::equal_to<int>,std::allocator<int>_>::
~unordered_set<int,std::hash<int>,std::equal_to<int>,std::allocator<int>_>
          (unordered_set<int,std::hash<int>,std::equal_to<int>,std::allocator<int>_> *this)

{
  _Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
  ::
  ~_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
            ((_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
              *)this);
  return;
}

// ~vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_> @ 1501ec280

/* public: __cdecl std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::~vector<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >(void) __ptr64 */

void __thiscall
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::
~vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
          (vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
           *this)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    uVar3 = *(longlong *)(this + 0x10) - (longlong)pvVar1 & 0xffffffffffffffe0;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar2,uVar3);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}

// ~_Clear_guard @ 1501ec2f0

/* public: __cdecl std::_Hash<class std::_Uset_traits<int,class std::_Uhash_compare<int,struct
   std::hash<int>,struct std::equal_to<int> >,class std::allocator<int>,0>
   >::_Clear_guard::~_Clear_guard(void) __ptr64 */

void __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::_Clear_guard::~_Clear_guard(_Clear_guard *this)

{
  _Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
  *this_00;
  ulonglong uVar1;
  _List_node<int,void_*> *p_Var2;
  _List_node<int,void_*> *p_Var3;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
  local_res8;
  
  this_00 = this->_Target;
  if ((this_00 !=
       (_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
        *)0x0) && (uVar1 = (this_00->_List)._Mypair._Myval2._Mysize, uVar1 != 0)) {
    if (uVar1 < this_00->_Maxidx >> 3) {
      p_Var2 = (this_00->_List)._Mypair._Myval2._Myhead;
      _Unchecked_erase(this_00,(_List_node<int,void*___ptr64> *)p_Var2->_Next,
                       (_List_node<int,void*___ptr64> *)p_Var2);
      return;
    }
    p_Var2 = (this_00->_List)._Mypair._Myval2._Myhead;
    p_Var2->_Prev->_Next = (_List_node<int,void_*> *)0x0;
    p_Var2 = p_Var2->_Next;
    while (p_Var2 != (_List_node<int,void_*> *)0x0) {
      p_Var3 = p_Var2->_Next;
      ::operator_delete(p_Var2,0x18);
      p_Var2 = p_Var3;
    }
    p_Var2 = (this_00->_List)._Mypair._Myval2._Myhead;
    p_Var2->_Next = p_Var2;
    p_Var2 = (this_00->_List)._Mypair._Myval2._Myhead;
    p_Var2->_Prev = p_Var2;
    (this_00->_List)._Mypair._Myval2._Mysize = 0;
    local_res8._Ptr = (this_00->_List)._Mypair._Myval2._Myhead;
    fill<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_*,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>
              ((this_00->_Vec)._Mypair._Myval2._Myfirst,(this_00->_Vec)._Mypair._Myval2._Mylast,
               &local_res8);
  }
  return;
}

// ~_Range_eraser @ 1501ec3b0

/* public: __cdecl std::_Hash<class std::_Uset_traits<int,class std::_Uhash_compare<int,struct
   std::hash<int>,struct std::equal_to<int> >,class std::allocator<int>,0>
   >::_Range_eraser::~_Range_eraser(void) __ptr64 */

void __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::_Range_eraser::~_Range_eraser(_Range_eraser *this)

{
  this->_Predecessor->_Next = this->_Next;
  this->_Next->_Prev = this->_Predecessor;
  return;
}

// operator== @ 1501ec3d0

/* public: bool __cdecl std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0>::operator==(class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> const & __ptr64)const __ptr64 */

bool __thiscall
std::
_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>::
operator==(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
           *this,_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>
                 *param_1)

{
  return this->_Ptr == *(_List_node<int,void_*> **)param_1;
}

// operator* @ 1501ec3e0

/* public: int const & __ptr64 __cdecl std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> >,struct
   std::_Iterator_base0>::operator*(void)const __ptr64 */

int * __thiscall
std::
_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>::
operator*(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
          *this)

{
  return &this->_Ptr->_Myval;
}

// operator++ @ 1501ec3f0

/* public: class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> & __ptr64 __cdecl
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0>::operator++(void) __ptr64 */

_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>
* __thiscall
std::
_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>::
operator++(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
           *this)

{
  this->_Ptr = this->_Ptr->_Next;
  return (_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>
          *)this;
}

// operator-- @ 1501ec410

/* public: class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> & __ptr64 __cdecl
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0>::operator--(void) __ptr64 */

_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>
* __thiscall
std::
_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>::
operator--(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
           *this)

{
  this->_Ptr = this->_Ptr->_Prev;
  return (_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<int>_>,struct_std::_Iterator_base0>
          *)this;
}

// FUN_1501ec430 @ 1501ec430

undefined8 FUN_1501ec430(longlong *param_1,int param_2,char param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int local_res10 [6];
  pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_>,bool> local_18;
  
  lVar1 = *(longlong *)*param_1;
  if ((ulonglong)(longlong)param_2 <= (ulonglong)(((longlong *)*param_1)[1] - lVar1 >> 3)) {
    if (param_3 == 'c') {
      uVar2 = 2;
    }
    else if (param_3 == 's') {
      uVar2 = 4;
    }
    else if (param_3 == 'd') {
      uVar2 = 8;
    }
    else if (param_3 == 'i') {
      uVar2 = 0x10;
    }
    else if (param_3 == 'o') {
      uVar2 = 0x20;
    }
    else if (param_3 == 'u') {
      uVar2 = 0x40;
    }
    else if (param_3 == 'x') {
      uVar2 = 0x80;
    }
    else if (param_3 == 'X') {
      uVar2 = 0x100;
    }
    else if (param_3 == 'f') {
      uVar2 = 0x200;
    }
    else if (param_3 == 'F') {
      uVar2 = 0x400;
    }
    else if (param_3 == 'e') {
      uVar2 = 0x800;
    }
    else if (param_3 == 'E') {
      uVar2 = 0x1000;
    }
    else if (param_3 == 'g') {
      uVar2 = 0x2000;
    }
    else if (param_3 == 'G') {
      uVar2 = 0x4000;
    }
    else if (param_3 == 'a') {
      uVar2 = 0x8000;
    }
    else if (param_3 == 'A') {
      uVar2 = 0x10000;
    }
    else if (param_3 == 'n') {
      uVar2 = 0x20000;
    }
    else if (param_3 == 'p') {
      uVar2 = 0x40000;
    }
    else if (param_3 == 'v') {
      uVar2 = 0x80000;
    }
    else {
      uVar2 = (ulonglong)(param_3 == '*');
    }
    if ((*(ulonglong *)(lVar1 + (longlong)(param_2 + -1) * 8) & uVar2) != 0) {
      local_res10[0] = param_2;
      std::
      _Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
      ::emplace<int_const_&>
                ((_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
                  *)param_1[1],&local_18,local_res10);
      return 1;
    }
  }
  return 0;
}

// operator() @ 1501ec5b0

/* public: unsigned __int64 __cdecl std::_Conditionally_enabled_hash<int,1>::operator()(int const &
   __ptr64)const __ptr64 */

__uint64 __thiscall
std::_Conditionally_enabled_hash<int,1>::operator()
          (_Conditionally_enabled_hash<int,1> *this,int *param_1)

{
  return ((((ulonglong)*(byte *)((longlong)param_1 + 1) ^
           ((ulonglong)(byte)*param_1 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
         (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3;
}

// Append @ 1501ec600

/* public: bool __cdecl
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ParsedFormatConsumer::Append(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

bool __thiscall
absl::lts_20240722::str_format_internal::ParsedFormatBase::ParsedFormatConsumer::Append
          (ParsedFormatConsumer *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  size_t _Size;
  longlong lVar1;
  ConversionItem *pCVar2;
  ConversionItem local_28;
  
  if (param_1->_Mysize != 0) {
    _Size = param_1->_Mysize;
    memcpy(*(void **)(this + 8),param_1->_Mydata,_Size);
    *(size_t *)(this + 8) = *(longlong *)(this + 8) + _Size;
    lVar1 = *(longlong *)this;
    pCVar2 = *(ConversionItem **)(lVar1 + 0x18);
    local_28.text_end = *(longlong *)(this + 8) - *(longlong *)(lVar1 + 8);
    if ((*(ConversionItem **)(lVar1 + 0x10) != pCVar2) &&
       (*(char *)(*(longlong *)(lVar1 + 0x18) + -0x20) == '\0')) {
      *(ulong64 *)(*(longlong *)(lVar1 + 0x18) + -0x18) = local_28.text_end;
      return true;
    }
    local_28.is_conversion = false;
    local_28.conv.width.value_ = -1;
    local_28.conv.precision.value_ = -1;
    local_28.conv.flags = kBasic;
    local_28.conv.length_mod = none;
    local_28.conv.conv = v|s;
    if (pCVar2 != *(ConversionItem **)(lVar1 + 0x20)) {
      *(ulonglong *)pCVar2 = (ulonglong)(uint7)local_28._1_7_ << 8;
      pCVar2->text_end = local_28.text_end;
      (pCVar2->conv).arg_position = local_28.conv.arg_position;
      (pCVar2->conv).width = -1;
      (pCVar2->conv).precision = (InputValue)(int)0x130900ffffffff;
      (pCVar2->conv).flags = (char)(0x130900ffffffff >> 0x20);
      (pCVar2->conv).length_mod = (char)(0x130900ffffffff >> 0x28);
      (pCVar2->conv).conv = (char)(0x130900ffffffff >> 0x30);
      (pCVar2->conv).field_0xf = local_28.conv._15_1_;
      *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x18) + 0x20;
      return true;
    }
    std::
    vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
    ::_Emplace_reallocate<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
              ((vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
                *)(lVar1 + 0x10),pCVar2,&local_28);
  }
  return true;
}

// AppendText @ 1501ec6c0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ParsedFormatConsumer::AppendText(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

__uint64 __thiscall
absl::lts_20240722::str_format_internal::ParsedFormatBase::ParsedFormatConsumer::AppendText
          (ParsedFormatConsumer *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  size_t _Size;
  
  _Size = param_1->_Mysize;
  memcpy(*(void **)(this + 8),param_1->_Mydata,_Size);
  *(size_t *)(this + 8) = *(longlong *)(this + 8) + _Size;
  return *(longlong *)(this + 8) - *(longlong *)(*(longlong *)this + 8);
}

// CheckFastPathSetting @ 1501ec700

/* bool __cdecl absl::lts_20240722::str_format_internal::CheckFastPathSetting(struct
   absl::lts_20240722::str_format_internal::UnboundConversion const & __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::CheckFastPathSetting(UnboundConversion *param_1)

{
  if (((param_1->width).value_ < 0) && ((param_1->precision).value_ < 0)) {
    return true;
  }
  return param_1->flags != kBasic;
}

// ConsumeUnboundConversion @ 1501ec720

/* char const * __ptr64 __cdecl
   absl::lts_20240722::str_format_internal::ConsumeUnboundConversion(char const * __ptr64,char const
   * __ptr64,struct absl::lts_20240722::str_format_internal::UnboundConversion * __ptr64,int *
   __ptr64) */

char * __cdecl
absl::lts_20240722::str_format_internal::ConsumeUnboundConversion
          (char *param_1,char *param_2,UnboundConversion *param_3,int *param_4)

{
  uint uVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  LengthMod LVar5;
  LengthMod LVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  if (-1 < *param_4) {
    pcVar2 = ConsumeConversion<0>(param_1,param_2,param_3,param_4);
    return pcVar2;
  }
  if (param_1 == param_2) {
    return (char *)0x0;
  }
  bVar9 = *param_1;
  pbVar3 = (byte *)(param_1 + 1);
  if (8 < (byte)(bVar9 - 0x31)) {
    return (char *)0x0;
  }
  iVar12 = (char)bVar9 + -0x30;
  iVar7 = 9;
  iVar13 = 9;
  iVar11 = iVar13;
  while (pbVar3 != (byte *)param_2) {
    bVar9 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    if ((9 < (byte)(bVar9 - 0x30)) || (iVar11 = iVar11 + -1, iVar11 == 0)) break;
    iVar12 = (int)(char)bVar9 + (iVar12 * 5 + -0x18) * 2;
  }
  param_3->arg_position = iVar12;
  if (bVar9 != 0x24) {
    return (char *)0x0;
  }
  if (pbVar3 == (byte *)param_2) {
    return (char *)0x0;
  }
  bVar9 = *pbVar3;
  uVar10 = (ulonglong)bVar9;
  pbVar3 = pbVar3 + 1;
  pbVar4 = pbVar3;
  if ((char)bVar9 < 'A') {
    while (cVar8 = (char)uVar10, (char)bVar9 < '1') {
      if ((*(Flags *)((longlong)&ConvTagHolder::value + uVar10) &
          ~(kZero|kAlt|kSignCol|kShowPos|kLeft)) != ~(kNonBasic|kZero|kAlt|kSignCol|kShowPos|kLeft))
      goto LAB_1501eaaf9;
      param_3->flags =
           param_3->flags |
           *(Flags *)((longlong)&ConvTagHolder::value + uVar10) &
           (kZero|kAlt|kSignCol|kShowPos|kLeft);
      if (pbVar3 == (byte *)param_2) {
        return (char *)0x0;
      }
      bVar9 = *pbVar3;
      uVar10 = (ulonglong)bVar9;
      pbVar3 = pbVar3 + 1;
    }
    if (cVar8 < ':') {
LAB_1501eaaf9:
      if (cVar8 < '0') {
        if (cVar8 == '*') {
          param_3->flags = param_3->flags | kNonBasic;
          if (pbVar3 == (byte *)param_2) {
            return (char *)0x0;
          }
          bVar9 = *pbVar3;
          pbVar3 = pbVar3 + 1;
          if (8 < (byte)(bVar9 - 0x31)) {
            return (char *)0x0;
          }
          uVar1 = (int)(char)bVar9 - 0x30;
          while (pbVar3 != (byte *)param_2) {
            bVar9 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            if ((9 < (byte)(bVar9 - 0x30)) || (iVar13 = iVar13 + -1, iVar13 == 0)) break;
            uVar1 = (int)(char)bVar9 + (uVar1 * 5 + -0x18) * 2;
          }
          (param_3->width).value_ = ~uVar1;
          if (bVar9 != 0x24) {
            return (char *)0x0;
          }
          if (pbVar3 == (byte *)param_2) {
            return (char *)0x0;
          }
          uVar10 = (ulonglong)*pbVar3;
          pbVar3 = pbVar3 + 1;
        }
      }
      else {
        iVar12 = 9;
        iVar11 = cVar8 + -0x30;
        while (pbVar3 != (byte *)param_2) {
          bVar9 = *pbVar3;
          uVar10 = (ulonglong)(uint)(int)(char)bVar9;
          pbVar3 = pbVar3 + 1;
          if ((9 < (byte)(bVar9 - 0x30)) || (iVar12 = iVar12 + -1, iVar12 == 0)) break;
          iVar11 = (int)(char)bVar9 + (iVar11 * 5 + -0x18) * 2;
        }
        param_3->flags = param_3->flags | kNonBasic;
        (param_3->width).value_ = iVar11;
      }
    }
    pbVar4 = pbVar3;
    if ((char)uVar10 == '.') {
      param_3->flags = param_3->flags | kNonBasic;
      if (pbVar3 == (byte *)param_2) {
        return (char *)0x0;
      }
      bVar9 = *pbVar3;
      uVar10 = (ulonglong)(uint)(int)(char)bVar9;
      pbVar4 = pbVar3 + 1;
      if ((byte)(bVar9 - 0x30) < 10) {
        iVar12 = (int)(char)bVar9 - 0x30;
        while (pbVar4 != (byte *)param_2) {
          bVar9 = *pbVar4;
          uVar10 = (ulonglong)(uint)(int)(char)bVar9;
          pbVar4 = pbVar4 + 1;
          if ((9 < (byte)(bVar9 - 0x30)) || (iVar7 = iVar7 + -1, iVar7 == 0)) break;
          iVar12 = (int)(char)bVar9 + (iVar12 * 5 + -0x18) * 2;
        }
        (param_3->precision).value_ = iVar12;
      }
      else if (bVar9 == 0x2a) {
        if (pbVar4 == (byte *)param_2) {
          return (char *)0x0;
        }
        bVar9 = *pbVar4;
        pbVar3 = pbVar3 + 2;
        if (8 < (byte)(bVar9 - 0x31)) {
          return (char *)0x0;
        }
        uVar1 = (int)(char)bVar9 - 0x30;
        while (pbVar3 != (byte *)param_2) {
          bVar9 = *pbVar3;
          pbVar3 = pbVar3 + 1;
          if ((9 < (byte)(bVar9 - 0x30)) || (iVar7 = iVar7 + -1, iVar7 == 0)) break;
          uVar1 = (int)(char)bVar9 + (uVar1 * 5 + -0x18) * 2;
        }
        (param_3->precision).value_ = ~uVar1;
        if (bVar9 != 0x24) {
          return (char *)0x0;
        }
        if (pbVar3 == (byte *)param_2) {
          return (char *)0x0;
        }
        uVar10 = (ulonglong)*pbVar3;
        pbVar4 = pbVar3 + 1;
      }
      else {
        (param_3->precision).value_ = 0;
      }
    }
  }
  LVar6 = *(LengthMod *)((longlong)&ConvTagHolder::value + (uVar10 & 0xff));
  if (((char)uVar10 == 'v') && (param_3->flags != kBasic)) {
    return (char *)0x0;
  }
  pbVar3 = pbVar4;
  if ((~(LVar6 >> 7) & 1) != 0) goto LAB_1501ead6a;
  if ((LVar6 & 0xc0) != 0x80) {
    return (char *)0x0;
  }
  LVar5 = LVar6 & 0x3f;
  if (pbVar4 == (byte *)param_2) {
    return (char *)0x0;
  }
  bVar9 = *pbVar4;
  pbVar3 = pbVar4 + 1;
  if (bVar9 == 0x68) {
    if (LVar5 == h) {
      param_3->length_mod = hh;
      if (pbVar3 == (byte *)param_2) {
        return (char *)0x0;
      }
      bVar9 = *pbVar3;
      LVar5 = hh;
      pbVar3 = pbVar4 + 2;
    }
    else {
LAB_1501ead37:
      param_3->length_mod = LVar5;
    }
  }
  else {
    if ((bVar9 != 0x6c) || (LVar5 != l)) goto LAB_1501ead37;
    param_3->length_mod = ll;
    if (pbVar3 == (byte *)param_2) {
      return (char *)0x0;
    }
    bVar9 = *pbVar3;
    LVar5 = ll;
    pbVar3 = pbVar4 + 2;
  }
  LVar6 = *(LengthMod *)((longlong)&ConvTagHolder::value + (ulonglong)bVar9);
  if ((bVar9 == 0x76) || ((~(LVar6 >> 7) & 1) == 0)) {
    return (char *)0x0;
  }
  if ((LVar5 == l) && (bVar9 == 99)) {
    param_3->flags = param_3->flags | kNonBasic;
  }
LAB_1501ead6a:
  param_3->conv = LVar6;
  return (char *)pbVar3;
}

// ConsumeUnboundConversionNoInline @ 1501ec740

/* char const * __ptr64 __cdecl
   absl::lts_20240722::str_format_internal::ConsumeUnboundConversionNoInline(char const *
   __ptr64,char const * __ptr64,struct absl::lts_20240722::str_format_internal::UnboundConversion *
   __ptr64,int * __ptr64) */

char * __cdecl
absl::lts_20240722::str_format_internal::ConsumeUnboundConversionNoInline
          (char *param_1,char *param_2,UnboundConversion *param_3,int *param_4)

{
  uint uVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  LengthMod LVar5;
  LengthMod LVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  if (-1 < *param_4) {
    pcVar2 = ConsumeConversion<0>(param_1,param_2,param_3,param_4);
    return pcVar2;
  }
  if (param_1 == param_2) {
    return (char *)0x0;
  }
  bVar9 = *param_1;
  pbVar3 = (byte *)(param_1 + 1);
  if (8 < (byte)(bVar9 - 0x31)) {
    return (char *)0x0;
  }
  iVar12 = (char)bVar9 + -0x30;
  iVar7 = 9;
  iVar13 = 9;
  iVar11 = iVar13;
  while (pbVar3 != (byte *)param_2) {
    bVar9 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    if ((9 < (byte)(bVar9 - 0x30)) || (iVar11 = iVar11 + -1, iVar11 == 0)) break;
    iVar12 = (int)(char)bVar9 + (iVar12 * 5 + -0x18) * 2;
  }
  param_3->arg_position = iVar12;
  if (bVar9 != 0x24) {
    return (char *)0x0;
  }
  if (pbVar3 == (byte *)param_2) {
    return (char *)0x0;
  }
  bVar9 = *pbVar3;
  uVar10 = (ulonglong)bVar9;
  pbVar3 = pbVar3 + 1;
  pbVar4 = pbVar3;
  if ((char)bVar9 < 'A') {
    while (cVar8 = (char)uVar10, (char)bVar9 < '1') {
      if ((*(Flags *)((longlong)&ConvTagHolder::value + uVar10) &
          ~(kZero|kAlt|kSignCol|kShowPos|kLeft)) != ~(kNonBasic|kZero|kAlt|kSignCol|kShowPos|kLeft))
      goto LAB_1501eaaf9;
      param_3->flags =
           param_3->flags |
           *(Flags *)((longlong)&ConvTagHolder::value + uVar10) &
           (kZero|kAlt|kSignCol|kShowPos|kLeft);
      if (pbVar3 == (byte *)param_2) {
        return (char *)0x0;
      }
      bVar9 = *pbVar3;
      uVar10 = (ulonglong)bVar9;
      pbVar3 = pbVar3 + 1;
    }
    if (cVar8 < ':') {
LAB_1501eaaf9:
      if (cVar8 < '0') {
        if (cVar8 == '*') {
          param_3->flags = param_3->flags | kNonBasic;
          if (pbVar3 == (byte *)param_2) {
            return (char *)0x0;
          }
          bVar9 = *pbVar3;
          pbVar3 = pbVar3 + 1;
          if (8 < (byte)(bVar9 - 0x31)) {
            return (char *)0x0;
          }
          uVar1 = (int)(char)bVar9 - 0x30;
          while (pbVar3 != (byte *)param_2) {
            bVar9 = *pbVar3;
            pbVar3 = pbVar3 + 1;
            if ((9 < (byte)(bVar9 - 0x30)) || (iVar13 = iVar13 + -1, iVar13 == 0)) break;
            uVar1 = (int)(char)bVar9 + (uVar1 * 5 + -0x18) * 2;
          }
          (param_3->width).value_ = ~uVar1;
          if (bVar9 != 0x24) {
            return (char *)0x0;
          }
          if (pbVar3 == (byte *)param_2) {
            return (char *)0x0;
          }
          uVar10 = (ulonglong)*pbVar3;
          pbVar3 = pbVar3 + 1;
        }
      }
      else {
        iVar12 = 9;
        iVar11 = cVar8 + -0x30;
        while (pbVar3 != (byte *)param_2) {
          bVar9 = *pbVar3;
          uVar10 = (ulonglong)(uint)(int)(char)bVar9;
          pbVar3 = pbVar3 + 1;
          if ((9 < (byte)(bVar9 - 0x30)) || (iVar12 = iVar12 + -1, iVar12 == 0)) break;
          iVar11 = (int)(char)bVar9 + (iVar11 * 5 + -0x18) * 2;
        }
        param_3->flags = param_3->flags | kNonBasic;
        (param_3->width).value_ = iVar11;
      }
    }
    pbVar4 = pbVar3;
    if ((char)uVar10 == '.') {
      param_3->flags = param_3->flags | kNonBasic;
      if (pbVar3 == (byte *)param_2) {
        return (char *)0x0;
      }
      bVar9 = *pbVar3;
      uVar10 = (ulonglong)(uint)(int)(char)bVar9;
      pbVar4 = pbVar3 + 1;
      if ((byte)(bVar9 - 0x30) < 10) {
        iVar12 = (int)(char)bVar9 - 0x30;
        while (pbVar4 != (byte *)param_2) {
          bVar9 = *pbVar4;
          uVar10 = (ulonglong)(uint)(int)(char)bVar9;
          pbVar4 = pbVar4 + 1;
          if ((9 < (byte)(bVar9 - 0x30)) || (iVar7 = iVar7 + -1, iVar7 == 0)) break;
          iVar12 = (int)(char)bVar9 + (iVar12 * 5 + -0x18) * 2;
        }
        (param_3->precision).value_ = iVar12;
      }
      else if (bVar9 == 0x2a) {
        if (pbVar4 == (byte *)param_2) {
          return (char *)0x0;
        }
        bVar9 = *pbVar4;
        pbVar3 = pbVar3 + 2;
        if (8 < (byte)(bVar9 - 0x31)) {
          return (char *)0x0;
        }
        uVar1 = (int)(char)bVar9 - 0x30;
        while (pbVar3 != (byte *)param_2) {
          bVar9 = *pbVar3;
          pbVar3 = pbVar3 + 1;
          if ((9 < (byte)(bVar9 - 0x30)) || (iVar7 = iVar7 + -1, iVar7 == 0)) break;
          uVar1 = (int)(char)bVar9 + (uVar1 * 5 + -0x18) * 2;
        }
        (param_3->precision).value_ = ~uVar1;
        if (bVar9 != 0x24) {
          return (char *)0x0;
        }
        if (pbVar3 == (byte *)param_2) {
          return (char *)0x0;
        }
        uVar10 = (ulonglong)*pbVar3;
        pbVar4 = pbVar3 + 1;
      }
      else {
        (param_3->precision).value_ = 0;
      }
    }
  }
  LVar6 = *(LengthMod *)((longlong)&ConvTagHolder::value + (uVar10 & 0xff));
  if (((char)uVar10 == 'v') && (param_3->flags != kBasic)) {
    return (char *)0x0;
  }
  pbVar3 = pbVar4;
  if ((~(LVar6 >> 7) & 1) != 0) goto LAB_1501ead6a;
  if ((LVar6 & 0xc0) != 0x80) {
    return (char *)0x0;
  }
  LVar5 = LVar6 & 0x3f;
  if (pbVar4 == (byte *)param_2) {
    return (char *)0x0;
  }
  bVar9 = *pbVar4;
  pbVar3 = pbVar4 + 1;
  if (bVar9 == 0x68) {
    if (LVar5 == h) {
      param_3->length_mod = hh;
      if (pbVar3 == (byte *)param_2) {
        return (char *)0x0;
      }
      bVar9 = *pbVar3;
      LVar5 = hh;
      pbVar3 = pbVar4 + 2;
    }
    else {
LAB_1501ead37:
      param_3->length_mod = LVar5;
    }
  }
  else {
    if ((bVar9 != 0x6c) || (LVar5 != l)) goto LAB_1501ead37;
    param_3->length_mod = ll;
    if (pbVar3 == (byte *)param_2) {
      return (char *)0x0;
    }
    bVar9 = *pbVar3;
    LVar5 = ll;
    pbVar3 = pbVar4 + 2;
  }
  LVar6 = *(LengthMod *)((longlong)&ConvTagHolder::value + (ulonglong)bVar9);
  if ((bVar9 == 0x76) || ((~(LVar6 >> 7) & 1) == 0)) {
    return (char *)0x0;
  }
  if ((LVar5 == l) && (bVar9 == 99)) {
    param_3->flags = param_3->flags | kNonBasic;
  }
LAB_1501ead6a:
  param_3->conv = LVar6;
  return (char *)pbVar3;
}

// Contains @ 1501ec760

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* bool __cdecl absl::lts_20240722::str_format_internal::Contains(enum
   absl::lts_20240722::FormatConversionCharSet,char) */

bool __cdecl
absl::lts_20240722::str_format_internal::Contains(FormatConversionCharSet param_1,char param_2)

{
  if (param_2 == 'c') {
    return (param_1 & c) != 0;
  }
  if (param_2 == 's') {
    return (param_1 & kString) != 0;
  }
  if (param_2 == 'd') {
    return (param_1 & d) != 0;
  }
  if (param_2 == 'i') {
    return (param_1 & i) != 0;
  }
  if (param_2 == 'o') {
    return (param_1 & o) != 0;
  }
  if (param_2 == 'u') {
    return (param_1 & u) != 0;
  }
  if (param_2 == 'x') {
    return (param_1 & x) != 0;
  }
  if (param_2 == 'X') {
    return (param_1 & X) != 0;
  }
  if (param_2 == 'f') {
    return (param_1 & f) != 0;
  }
  if (param_2 == 'F') {
    return (param_1 & F) != 0;
  }
  if (param_2 == 'e') {
    return (param_1 & e) != 0;
  }
  if (param_2 == 'E') {
    return (param_1 & E) != 0;
  }
  if (param_2 == 'g') {
    return (param_1 & g) != 0;
  }
  if (param_2 == 'G') {
    return (param_1 & G) != 0;
  }
  if (param_2 == 'a') {
    return (param_1 & a) != 0;
  }
  if (param_2 == 'A') {
    return (param_1 & A) != 0;
  }
  if (param_2 == 'n') {
    return (param_1 & n) != 0;
  }
  if (param_2 == 'p') {
    return (param_1 & kPointer) != 0;
  }
  if (param_2 == 'v') {
    return (param_1 & v) != 0;
  }
  return (param_1 & param_2 == '*') != 0;
}

// ConvertOne @ 1501ec8c0

/* public: bool __cdecl
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ParsedFormatConsumer::ConvertOne(struct
   absl::lts_20240722::str_format_internal::UnboundConversion const & __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

bool __thiscall
absl::lts_20240722::str_format_internal::ParsedFormatBase::ParsedFormatConsumer::ConvertOne
          (ParsedFormatConsumer *this,UnboundConversion *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  size_t _Size;
  longlong lVar1;
  ConversionItem *pCVar2;
  ConversionItem local_28;
  
  _Size = param_2->_Mysize;
  memcpy(*(void **)(this + 8),param_2->_Mydata,_Size);
  *(size_t *)(this + 8) = *(longlong *)(this + 8) + _Size;
  lVar1 = *(longlong *)this;
  local_28.conv.arg_position = param_1->arg_position;
  local_28.conv.width.value_ = (param_1->width).value_;
  local_28.conv.precision.value_ = (param_1->precision).value_;
  local_28.conv.flags = param_1->flags;
  local_28.conv.length_mod = param_1->length_mod;
  local_28.conv.conv = param_1->conv;
  local_28.conv._15_1_ = param_1->field_0xf;
  local_28.is_conversion = true;
  local_28.text_end = *(longlong *)(this + 8) - *(longlong *)(lVar1 + 8);
  pCVar2 = *(ConversionItem **)(lVar1 + 0x18);
  if (pCVar2 != *(ConversionItem **)(lVar1 + 0x20)) {
    *(ulonglong *)pCVar2 = CONCAT71(local_28._1_7_,1);
    pCVar2->text_end = local_28.text_end;
    (pCVar2->conv).arg_position = local_28.conv.arg_position;
    (pCVar2->conv).width = (InputValue)local_28.conv.width.value_;
    (pCVar2->conv).precision = (InputValue)local_28.conv.precision.value_;
    (pCVar2->conv).flags = local_28.conv.flags;
    (pCVar2->conv).length_mod = local_28.conv.length_mod;
    (pCVar2->conv).conv = local_28.conv.conv;
    (pCVar2->conv).field_0xf = local_28.conv._15_1_;
    *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x18) + 0x20;
    return true;
  }
  std::
  vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
  ::_Emplace_reallocate<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
            ((vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
              *)(lVar1 + 0x10),pCVar2,&local_28);
  return true;
}

// FormatConversionCharToConvInt @ 1501ec970

/* unsigned __int64 __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionCharToConvInt(char) */

__uint64 __cdecl
absl::lts_20240722::str_format_internal::FormatConversionCharToConvInt(char param_1)

{
  if (param_1 == 'c') {
    return 2;
  }
  if (param_1 == 's') {
    return 4;
  }
  if (param_1 == 'd') {
    return 8;
  }
  if (param_1 == 'i') {
    return 0x10;
  }
  if (param_1 == 'o') {
    return 0x20;
  }
  if (param_1 == 'u') {
    return 0x40;
  }
  if (param_1 == 'x') {
    return 0x80;
  }
  if (param_1 == 'X') {
    return 0x100;
  }
  if (param_1 == 'f') {
    return 0x200;
  }
  if (param_1 == 'F') {
    return 0x400;
  }
  if (param_1 == 'e') {
    return 0x800;
  }
  if (param_1 == 'E') {
    return 0x1000;
  }
  if (param_1 == 'g') {
    return 0x2000;
  }
  if (param_1 == 'G') {
    return 0x4000;
  }
  if (param_1 == 'a') {
    return 0x8000;
  }
  if (param_1 == 'A') {
    return 0x10000;
  }
  if (param_1 == 'n') {
    return 0x20000;
  }
  if (param_1 == 'p') {
    return 0x40000;
  }
  if (param_1 == 'v') {
    return 0x80000;
  }
  return (ulonglong)(param_1 == '*');
}

// FormatConversionCharToConvValue @ 1501eca50

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* enum absl::lts_20240722::FormatConversionCharSet __cdecl
   absl::lts_20240722::str_format_internal::FormatConversionCharToConvValue(char) */

FormatConversionCharSet __cdecl
absl::lts_20240722::str_format_internal::FormatConversionCharToConvValue(char param_1)

{
  if (param_1 == 'c') {
    return c;
  }
  if (param_1 == 's') {
    return kString;
  }
  if (param_1 == 'd') {
    return d;
  }
  if (param_1 == 'i') {
    return i;
  }
  if (param_1 == 'o') {
    return o;
  }
  if (param_1 == 'u') {
    return u;
  }
  if (param_1 == 'x') {
    return x;
  }
  if (param_1 == 'X') {
    return X;
  }
  if (param_1 == 'f') {
    return f;
  }
  if (param_1 == 'F') {
    return F;
  }
  if (param_1 == 'e') {
    return e;
  }
  if (param_1 == 'E') {
    return E;
  }
  if (param_1 == 'g') {
    return g;
  }
  if (param_1 == 'G') {
    return G;
  }
  if (param_1 == 'a') {
    return a;
  }
  if (param_1 == 'A') {
    return A;
  }
  if (param_1 == 'n') {
    return n;
  }
  if (param_1 == 'p') {
    return kPointer;
  }
  if (param_1 == 'v') {
    return v;
  }
  return (ulonglong)(param_1 == '*');
}

// LengthModToString @ 1501ecb30

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::str_format_internal::LengthModToString(enum absl::lts_20240722::LengthMod) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::str_format_internal::LengthModToString
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          LengthMod param_1)

{
  switch(param_1) {
  case h:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 1;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    *(undefined2 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = 0x68;
    return __return_storage_ptr__;
  case hh:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 2;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    *(undefined2 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = 0x6868;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[2] = '\0';
    return __return_storage_ptr__;
  case l:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 1;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    *(undefined2 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = 0x6c;
    return __return_storage_ptr__;
  case ll:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 2;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    *(undefined2 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = 0x6c6c;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[2] = '\0';
    return __return_storage_ptr__;
  case L:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 1;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    *(undefined2 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = 0x4c;
    return __return_storage_ptr__;
  case j:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 1;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    *(undefined2 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = 0x6a;
    return __return_storage_ptr__;
  case z:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 1;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    *(undefined2 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = 0x7a;
    return __return_storage_ptr__;
  case t:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 1;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    *(undefined2 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = 0x74;
    return __return_storage_ptr__;
  case q:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 1;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    *(undefined2 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = 0x71;
    return __return_storage_ptr__;
  default:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
    return __return_storage_ptr__;
  }
}

// MatchesConversions @ 1501eccf0

/* private: bool __cdecl
   absl::lts_20240722::str_format_internal::ParsedFormatBase::MatchesConversions(bool,class
   std::initializer_list<enum absl::lts_20240722::FormatConversionCharSet>)const __ptr64 */

bool __thiscall
absl::lts_20240722::str_format_internal::ParsedFormatBase::MatchesConversions
          (ParsedFormatBase *this,char param_1,longlong *param_3)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  char *pcVar7;
  uint local_res20 [2];
  pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_>,bool> local_98;
  pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_>,bool> local_88;
  pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_>,bool> local_78;
  _Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
  local_68;
  
  local_68._Traitsobj =
       (_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>
        )0x0;
  local_68._List._Mypair._Myval2._Myhead = (_List_node<int,void_*> *)0x0;
  local_68._List._Mypair._Myval2._Mysize = 0;
  local_68._List._Mypair._Myval2._Myhead = ::operator_new(0x18);
  (local_68._List._Mypair._Myval2._Myhead)->_Next = local_68._List._Mypair._Myval2._Myhead;
  (local_68._List._Mypair._Myval2._Myhead)->_Prev = local_68._List._Mypair._Myval2._Myhead;
  local_68._Vec._Mypair._Myval2._Myfirst =
       (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
        *)0x0;
  local_68._Vec._Mypair._Myval2._Mylast =
       (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
        *)0x0;
  local_68._Vec._Mypair._Myval2._Myend =
       (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
        *)0x0;
  local_68._Mask = 7;
  local_68._Maxidx = 8;
  local_68._Traitsobj =
       (_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>
        )0x3f800000;
  std::
  _Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
  ::_Assign_grow(&local_68._Vec,0x10,
                 (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                  )local_68._List._Mypair._Myval2._Myhead);
  pcVar7 = *(char **)(this + 0x10);
  pcVar2 = *(char **)(this + 0x18);
  if (pcVar7 != pcVar2) {
    puVar6 = (uint *)(pcVar7 + 0x14);
    do {
      if (*pcVar7 != '\0') {
        if ((int)puVar6[1] < -1) {
          local_res20[0] = ~puVar6[1];
          if (((ulonglong)(param_3[1] - *param_3 >> 3) < (ulonglong)(longlong)(int)local_res20[0])
             || ((*(byte *)(*param_3 + -8 + (longlong)(int)local_res20[0] * 8) & 1) == 0))
          goto LAB_1501ed04b;
          std::
          _Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
          ::emplace<int_const_&>(&local_68,&local_98,(int *)local_res20);
        }
        if ((int)*puVar6 < -1) {
          local_res20[0] = ~*puVar6;
          if (((ulonglong)(param_3[1] - *param_3 >> 3) < (ulonglong)(longlong)(int)local_res20[0])
             || ((*(byte *)(*param_3 + -8 + (longlong)(int)local_res20[0] * 8) & 1) == 0))
          goto LAB_1501ed04b;
          std::
          _Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
          ::emplace<int_const_&>(&local_68,&local_88,(int *)local_res20);
        }
        cVar1 = *(char *)((longlong)puVar6 + 10);
        if (cVar1 == '\x13') {
          cVar4 = '\0';
        }
        else if (cVar1 == '\0') {
          cVar4 = 'c';
        }
        else if (cVar1 == '\x01') {
          cVar4 = 's';
        }
        else if (cVar1 == '\x02') {
          cVar4 = 'd';
        }
        else if (cVar1 == '\x03') {
          cVar4 = 'i';
        }
        else if (cVar1 == '\x04') {
          cVar4 = 'o';
        }
        else if (cVar1 == '\x05') {
          cVar4 = 'u';
        }
        else if (cVar1 == '\x06') {
          cVar4 = 'x';
        }
        else if (cVar1 == '\a') {
          cVar4 = 'X';
        }
        else if (cVar1 == '\b') {
          cVar4 = 'f';
        }
        else if (cVar1 == '\t') {
          cVar4 = 'F';
        }
        else if (cVar1 == '\n') {
          cVar4 = 'e';
        }
        else if (cVar1 == '\v') {
          cVar4 = 'E';
        }
        else if (cVar1 == '\f') {
          cVar4 = 'g';
        }
        else if (cVar1 == '\r') {
          cVar4 = 'G';
        }
        else if (cVar1 == '\x0e') {
          cVar4 = 'a';
        }
        else if (cVar1 == '\x0f') {
          cVar4 = 'A';
        }
        else if (cVar1 == '\x10') {
          cVar4 = 'n';
        }
        else if (cVar1 == '\x11') {
          cVar4 = 'p';
        }
        else {
          cVar4 = '\0';
          if (cVar1 == '\x12') {
            cVar4 = 'v';
          }
        }
        local_res20[0] = puVar6[-1];
        if ((ulonglong)(param_3[1] - *param_3 >> 3) < (ulonglong)(longlong)(int)local_res20[0])
        goto LAB_1501ed04b;
        if (cVar4 == 'c') {
          uVar3 = 2;
        }
        else if (cVar4 == 's') {
          uVar3 = 4;
        }
        else if (cVar4 == 'd') {
          uVar3 = 8;
        }
        else if (cVar4 == 'i') {
          uVar3 = 0x10;
        }
        else if (cVar4 == 'o') {
          uVar3 = 0x20;
        }
        else if (cVar4 == 'u') {
          uVar3 = 0x40;
        }
        else if (cVar4 == 'x') {
          uVar3 = 0x80;
        }
        else if (cVar4 == 'X') {
          uVar3 = 0x100;
        }
        else if (cVar4 == 'f') {
          uVar3 = 0x200;
        }
        else if (cVar4 == 'F') {
          uVar3 = 0x400;
        }
        else if (cVar4 == 'e') {
          uVar3 = 0x800;
        }
        else if (cVar4 == 'E') {
          uVar3 = 0x1000;
        }
        else if (cVar4 == 'g') {
          uVar3 = 0x2000;
        }
        else if (cVar4 == 'G') {
          uVar3 = 0x4000;
        }
        else if (cVar4 == 'a') {
          uVar3 = 0x8000;
        }
        else if (cVar4 == 'A') {
          uVar3 = 0x10000;
        }
        else if (cVar4 == 'n') {
          uVar3 = 0x20000;
        }
        else if (cVar4 == 'p') {
          uVar3 = 0x40000;
        }
        else if (cVar4 == 'v') {
          uVar3 = 0x80000;
        }
        else {
          uVar3 = (ulonglong)(cVar4 == '*');
        }
        if ((*(ulonglong *)(*param_3 + -8 + (longlong)(int)local_res20[0] * 8) & uVar3) == 0)
        goto LAB_1501ed04b;
        std::
        _Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
        ::emplace<int_const_&>(&local_68,&local_78,(int *)local_res20);
      }
      pcVar7 = pcVar7 + 0x20;
      puVar6 = puVar6 + 8;
    } while (pcVar7 != pcVar2);
  }
  if ((local_68._List._Mypair._Myval2._Mysize == param_3[1] - *param_3 >> 3) || (param_1 != '\0')) {
    bVar5 = true;
  }
  else {
LAB_1501ed04b:
    bVar5 = false;
  }
  std::
  _Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
  ::
  ~_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
            (&local_68);
  return bVar5;
}

// ParseDigits @ 1501ed080

/* int __cdecl absl::lts_20240722::str_format_internal::ParseDigits(char & __ptr64,char const *
   __ptr64 & __ptr64,char const * __ptr64 const) */

int __cdecl
absl::lts_20240722::str_format_internal::ParseDigits(char *param_1,char **param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = *param_2;
  iVar3 = *param_1 + -0x30;
  iVar4 = 9;
  while( true ) {
    if (pcVar2 == param_3) {
      return iVar3;
    }
    cVar1 = *pcVar2;
    *param_2 = pcVar2 + 1;
    *param_1 = cVar1;
    if (9 < (byte)(cVar1 - 0x30U)) break;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return iVar3;
    }
    pcVar2 = *param_2;
    iVar3 = (int)cVar1 + (iVar3 * 5 + -0x18) * 2;
  }
  return iVar3;
}

// _Alloc_sentinel_and_proxy @ 1501ed0e0

/* private: void __cdecl std::list<int,class std::allocator<int> >::_Alloc_sentinel_and_proxy(void)
   __ptr64 */

void __thiscall
std::list<int,std::allocator<int>_>::_Alloc_sentinel_and_proxy(list<int,std::allocator<int>_> *this)

{
  _List_node<int,void_*> *p_Var1;
  
  p_Var1 = ::operator_new(0x18);
  p_Var1->_Next = p_Var1;
  p_Var1->_Prev = p_Var1;
  (this->_Mypair)._Myval2._Myhead = p_Var1;
  return;
}

// _Allocate @ 1501ed110

/* public: void __cdecl std::_Alloc_construct_ptr<class std::allocator<struct
   std::_List_node<int,void * __ptr64> > >::_Allocate(void) __ptr64 */

void __thiscall
std::_Alloc_construct_ptr<std::allocator<std::_List_node<int,void*___ptr64>_>_>::_Allocate
          (_Alloc_construct_ptr<std::allocator<std::_List_node<int,void*___ptr64>_>_> *this)

{
  void *pvVar1;
  
  *(undefined8 *)(this + 8) = 0;
  pvVar1 = ::operator_new(0x18);
  *(void **)(this + 8) = pvVar1;
  return;
}

// _Bump_erased @ 1501ed140

/* public: void __cdecl std::_Hash<class std::_Uset_traits<int,class std::_Uhash_compare<int,struct
   std::hash<int>,struct std::equal_to<int> >,class std::allocator<int>,0>
   >::_Range_eraser::_Bump_erased(void) __ptr64 */

void __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::_Range_eraser::_Bump_erased(_Range_eraser *this)

{
  ulong64 *puVar1;
  _List_node<int,void_*> *p_Var2;
  
  p_Var2 = this->_Next;
  this->_Next = p_Var2->_Next;
  ::operator_delete(p_Var2,0x18);
  puVar1 = &(this->_List->_Mypair)._Myval2._Mysize;
  *puVar1 = *puVar1 - 1;
  return;
}

// _Calculate_growth @ 1501ed180

/* private: unsigned __int64 __cdecl std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::_Calculate_growth(unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::_Calculate_growth(vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
                    *this,__uint64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = *(longlong *)(this + 0x10) - *(longlong *)this >> 5;
  uVar1 = 0x7ffffffffffffff;
  if ((uVar2 <= 0x7ffffffffffffff - (uVar2 >> 1)) && (uVar1 = (uVar2 >> 1) + uVar2, uVar1 < param_1)
     ) {
    uVar1 = param_1;
  }
  return uVar1;
}

// _Change_array @ 1501ed1c0

/* private: void __cdecl std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::_Change_array(struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem
   * __ptr64 const,unsigned __int64,unsigned __int64) __ptr64 */

void __thiscall
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::_Change_array(vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
                *this,ConversionItem *param_1,__uint64 param_2,__uint64 param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    uVar3 = *(longlong *)(this + 0x10) - (longlong)pvVar1 & 0xffffffffffffffe0;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar2,uVar3);
  }
  *(ConversionItem **)this = param_1;
  *(ConversionItem **)(this + 8) = param_1 + param_2;
  *(ConversionItem **)(this + 0x10) = param_1 + param_3;
  return;
}

// _Check_max_size @ 1501ed260

/* protected: void __cdecl std::_Hash<class std::_Uset_traits<int,class
   std::_Uhash_compare<int,struct std::hash<int>,struct std::equal_to<int> >,class
   std::allocator<int>,0> >::_Check_max_size(void)const __ptr64 */

void __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::_Check_max_size(_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
                  *this)

{
  if ((this->_List)._Mypair._Myval2._Mysize != 0xaaaaaaaaaaaaaaa) {
    return;
  }
  _Xlength_error("unordered_map/set too long");
  return;
}

// _Check_rehash_required_1 @ 1501ed290

/* protected: bool __cdecl std::_Hash<class std::_Uset_traits<int,class
   std::_Uhash_compare<int,struct std::hash<int>,struct std::equal_to<int> >,class
   std::allocator<int>,0> >::_Check_rehash_required_1(void)const __ptr64 */

bool __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::_Check_rehash_required_1
          (_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
           *this)

{
  ulonglong uVar1;
  float fVar2;
  
  fVar2 = (float)((this->_List)._Mypair._Myval2._Mysize + 1);
  uVar1 = this->_Maxidx;
  if (-1 < (longlong)uVar1) {
    fVar2 = fVar2 / (float)(longlong)uVar1;
    return (float)this->_Traitsobj <= fVar2 && fVar2 != (float)this->_Traitsobj;
  }
  fVar2 = fVar2 / (float)uVar1;
  return (float)this->_Traitsobj <= fVar2 && fVar2 != (float)this->_Traitsobj;
}

// _Desired_grow_bucket_count @ 1501ed300

/* protected: unsigned __int64 __cdecl std::_Hash<class std::_Uset_traits<int,class
   std::_Uhash_compare<int,struct std::hash<int>,struct std::equal_to<int> >,class
   std::allocator<int>,0> >::_Desired_grow_bucket_count(unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::_Desired_grow_bucket_count
          (_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
           *this,__uint64 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  
  uVar1 = this->_Maxidx;
  fVar4 = ceilf((float)param_1 / (float)this->_Traitsobj);
  lVar2 = 0;
  if ((__real_5f000000 <= fVar4) && (fVar4 = fVar4 - __real_5f000000, fVar4 < __real_5f000000)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = 8;
  if (8 < (ulonglong)((longlong)fVar4 + lVar2)) {
    uVar3 = (longlong)fVar4 + lVar2;
  }
  if (uVar3 <= uVar1) {
    return uVar1;
  }
  if ((uVar1 < 0x200) && (uVar3 <= uVar1 * 8)) {
    uVar3 = uVar1 * 8;
  }
  return uVar3;
}

// _Do_hash @ 1501ed3b0

/* public: static unsigned __int64 __cdecl std::hash<int>::_Do_hash(int const & __ptr64) */

__uint64 __cdecl std::hash<int>::_Do_hash(int *param_1)

{
  return ((((ulonglong)*(byte *)((longlong)param_1 + 1) ^
           ((ulonglong)(byte)*param_1 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
         (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3;
}

// _Extract @ 1501ed400

/* public: static int const & __ptr64 __cdecl std::_In_place_key_extract_set<int,int>::_Extract(int
   const & __ptr64) */

int * __cdecl std::_In_place_key_extract_set<int,int>::_Extract(int *param_1)

{
  return param_1;
}

// _Get_first @ 1501ed410

/* public: struct std::equal_to<int> const & __ptr64 __cdecl std::_Compressed_pair<struct
   std::equal_to<int>,float,1>::_Get_first(void)const __ptr64 */

equal_to<int> * __thiscall
std::_Compressed_pair<std::equal_to<int>,float,1>::_Get_first
          (_Compressed_pair<std::equal_to<int>,float,1> *this)

{
  return (equal_to<int> *)this;
}

// _Get_first @ 1501ed420

/* public: struct std::hash<int> const & __ptr64 __cdecl std::_Compressed_pair<struct
   std::hash<int>,class std::_Compressed_pair<struct
   std::equal_to<int>,float,1>,1>::_Get_first(void)const __ptr64 */

hash<int> * __thiscall
std::_Compressed_pair<std::hash<int>,std::_Compressed_pair<std::equal_to<int>,float,1>,1>::
_Get_first(_Compressed_pair<std::hash<int>,std::_Compressed_pair<std::equal_to<int>,float,1>,1>
           *this)

{
  return (hash<int> *)this;
}

// _Get_first @ 1501ed430

/* public: class std::allocator<struct std::_List_node<int,void * __ptr64> > & __ptr64 __cdecl
   std::_Compressed_pair<class std::allocator<struct std::_List_node<int,void * __ptr64> >,class
   std::_List_val<struct std::_List_simple_types<int> >,1>::_Get_first(void) __ptr64 */

allocator<std::_List_node<int,void*___ptr64>_> * __thiscall
std::
_Compressed_pair<std::allocator<std::_List_node<int,void*___ptr64>_>,std::_List_val<std::_List_simple_types<int>_>,1>
::_Get_first(_Compressed_pair<std::allocator<std::_List_node<int,void*___ptr64>_>,std::_List_val<std::_List_simple_types<int>_>,1>
             *this)

{
  return (allocator<std::_List_node<int,void*___ptr64>_> *)this;
}

// _Get_first @ 1501ed440

/* public: class std::allocator<struct std::_List_node<int,void * __ptr64> > const & __ptr64 __cdecl
   std::_Compressed_pair<class std::allocator<struct std::_List_node<int,void * __ptr64> >,class
   std::_List_val<struct std::_List_simple_types<int> >,1>::_Get_first(void)const __ptr64 */

allocator<std::_List_node<int,void*___ptr64>_> * __thiscall
std::
_Compressed_pair<std::allocator<std::_List_node<int,void*___ptr64>_>,std::_List_val<std::_List_simple_types<int>_>,1>
::_Get_first(_Compressed_pair<std::allocator<std::_List_node<int,void*___ptr64>_>,std::_List_val<std::_List_simple_types<int>_>,1>
             *this)

{
  return (allocator<std::_List_node<int,void*___ptr64>_> *)this;
}

// _Get_first @ 1501ed450

/* public: class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> & __ptr64 __cdecl
   std::_Compressed_pair<class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>,class
   std::_Vector_val<struct std::_Simple_types<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> >,1>::_Get_first(void)
   __ptr64 */

allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> * __thiscall
std::
_Compressed_pair<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>,std::_Vector_val<std::_Simple_types<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>,1>
::_Get_first(_Compressed_pair<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>,std::_Vector_val<std::_Simple_types<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>,1>
             *this)

{
  return (allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> *)
         this;
}

// _Get_first @ 1501ed460

/* public: class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> const & __ptr64
   __cdecl std::_Compressed_pair<class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>,class
   std::_Vector_val<struct std::_Simple_types<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >,1>::_Get_first(void)const __ptr64 */

allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> * __thiscall
std::
_Compressed_pair<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>,std::_Vector_val<std::_Simple_types<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>,1>
::_Get_first(_Compressed_pair<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>,std::_Vector_val<std::_Simple_types<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>,1>
             *this)

{
  return (allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> *)
         this;
}

// _Get_first @ 1501ed470

/* public: class std::allocator<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> >,struct std::_Iterator_base0> > & __ptr64
   __cdecl std::_Compressed_pair<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> >,class std::_Vector_val<struct std::_Simple_types<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> > >,1>::_Get_first(void) __ptr64 */

allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>
* __thiscall
std::
_Compressed_pair<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>,std::_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>,1>
::_Get_first(_Compressed_pair<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>,std::_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>,1>
             *this)

{
  return (allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>
          *)this;
}

// _Get_first @ 1501ed480

/* public: class std::allocator<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<int> >,struct std::_Iterator_base0> > const &
   __ptr64 __cdecl std::_Compressed_pair<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> >,class std::_Vector_val<struct std::_Simple_types<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> > >,1>::_Get_first(void)const __ptr64 */

allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>
* __thiscall
std::
_Compressed_pair<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>,std::_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>,1>
::_Get_first(_Compressed_pair<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>,std::_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>,1>
             *this)

{
  return (allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>
          *)this;
}

// _Get_max_bucket_size @ 1501ed490

/* public: float & __ptr64 __cdecl std::_Uhash_compare<int,struct std::hash<int>,struct
   std::equal_to<int> >::_Get_max_bucket_size(void) __ptr64 */

float * __thiscall
std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>::_Get_max_bucket_size
          (_Uhash_compare<int,std::hash<int>,std::equal_to<int>_> *this)

{
  return (float *)this;
}

// _Get_max_bucket_size @ 1501ed4a0

/* public: float const & __ptr64 __cdecl std::_Uhash_compare<int,struct std::hash<int>,struct
   std::equal_to<int> >::_Get_max_bucket_size(void)const __ptr64 */

float * __thiscall
std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>::_Get_max_bucket_size
          (_Uhash_compare<int,std::hash<int>,std::equal_to<int>_> *this)

{
  return (float *)this;
}

// _Getal @ 1501ed4b0

/* private: class std::allocator<struct std::_List_node<int,void * __ptr64> > & __ptr64 __cdecl
   std::list<int,class std::allocator<int> >::_Getal(void) __ptr64 */

allocator<std::_List_node<int,void*___ptr64>_> * __thiscall
std::list<int,std::allocator<int>_>::_Getal(list<int,std::allocator<int>_> *this)

{
  return (allocator<std::_List_node<int,void*___ptr64>_> *)this;
}

// _Getal @ 1501ed4c0

/* private: class std::allocator<struct std::_List_node<int,void * __ptr64> > const & __ptr64
   __cdecl std::list<int,class std::allocator<int> >::_Getal(void)const __ptr64 */

allocator<std::_List_node<int,void*___ptr64>_> * __thiscall
std::list<int,std::allocator<int>_>::_Getal(list<int,std::allocator<int>_> *this)

{
  return (allocator<std::_List_node<int,void*___ptr64>_> *)this;
}

// _Getal @ 1501ed4d0

/* private: class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> & __ptr64 __cdecl
   std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::_Getal(void) __ptr64 */

allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> * __thiscall
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::_Getal(vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
         *this)

{
  return (allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> *)
         this;
}

// _Getal @ 1501ed4e0

/* private: class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> const & __ptr64
   __cdecl std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::_Getal(void)const __ptr64 */

allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> * __thiscall
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::_Getal(vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
         *this)

{
  return (allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> *)
         this;
}

// _Insert_new_node_before @ 1501ed4f0

/* protected: struct std::_List_node<int,void * __ptr64> * __ptr64 __cdecl std::_Hash<class
   std::_Uset_traits<int,class std::_Uhash_compare<int,struct std::hash<int>,struct
   std::equal_to<int> >,class std::allocator<int>,0> >::_Insert_new_node_before(unsigned
   __int64,struct std::_List_node<int,void * __ptr64> * __ptr64 const,struct
   std::_List_node<int,void * __ptr64> * __ptr64 const) __ptr64 */

_List_node<int,void*___ptr64> * __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::_Insert_new_node_before
          (_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
           *this,__uint64 param_1,_List_node<int,void*___ptr64> *param_2,
          _List_node<int,void*___ptr64> *param_3)

{
  ulong64 *puVar1;
  _List_node<int,void_*> *p_Var2;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
  *p_Var3;
  
  p_Var2 = *(_List_node<int,void_*> **)(param_2 + 8);
  puVar1 = &(this->_List)._Mypair._Myval2._Mysize;
  *puVar1 = *puVar1 + 1;
  *(_List_node<int,void*___ptr64> **)param_3 = param_2;
  *(_List_node<int,void_*> **)(param_3 + 8) = p_Var2;
  p_Var2->_Next = (_List_node<int,void_*> *)param_3;
  *(_List_node<int,void*___ptr64> **)(param_2 + 8) = param_3;
  p_Var3 = (this->_Vec)._Mypair._Myval2._Myfirst + (param_1 & this->_Mask) * 2;
  if (p_Var3->_Ptr == (this->_List)._Mypair._Myval2._Myhead) {
    p_Var3->_Ptr = (_List_node<int,void_*> *)param_3;
    p_Var3[1]._Ptr = (_List_node<int,void_*> *)param_3;
    return param_3;
  }
  if (p_Var3->_Ptr == (_List_node<int,void_*> *)param_2) {
    p_Var3->_Ptr = (_List_node<int,void_*> *)param_3;
    return param_3;
  }
  if (p_Var3[1]._Ptr == p_Var2) {
    p_Var3[1]._Ptr = (_List_node<int,void_*> *)param_3;
  }
  return param_3;
}

// _Kfn @ 1501ed550

/* public: static int const & __ptr64 __cdecl std::_Uset_traits<int,class
   std::_Uhash_compare<int,struct std::hash<int>,struct std::equal_to<int> >,class
   std::allocator<int>,0>::_Kfn(int const & __ptr64) */

int * __cdecl
std::
_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>
::_Kfn(int *param_1)

{
  return param_1;
}

// _Make_iter @ 1501ed560

/* public: class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<int> > >
   __cdecl std::list<int,class std::allocator<int> >::_Make_iter(struct std::_List_node<int,void *
   __ptr64> * __ptr64)const __ptr64 */

_List_iterator<std::_List_val<std::_List_simple_types<int>_>_> __thiscall
std::list<int,std::allocator<int>_>::_Make_iter
          (list<int,std::allocator<int>_> *this,_List_node<int,void*___ptr64> *param_1)

{
  undefined8 in_R8;
  
  *(undefined8 *)param_1 = in_R8;
  return (_List_iterator<std::_List_val<std::_List_simple_types<int>_>_>)param_1;
}

// _Max_bucket_size @ 1501ed570

/* protected: float & __ptr64 __cdecl std::_Hash<class std::_Uset_traits<int,class
   std::_Uhash_compare<int,struct std::hash<int>,struct std::equal_to<int> >,class
   std::allocator<int>,0> >::_Max_bucket_size(void) __ptr64 */

float * __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::_Max_bucket_size(_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
                   *this)

{
  return (float *)this;
}

// _Max_bucket_size @ 1501ed580

/* protected: float const & __ptr64 __cdecl std::_Hash<class std::_Uset_traits<int,class
   std::_Uhash_compare<int,struct std::hash<int>,struct std::equal_to<int> >,class
   std::allocator<int>,0> >::_Max_bucket_size(void)const __ptr64 */

float * __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::_Max_bucket_size(_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
                   *this)

{
  return (float *)this;
}

// _Min_load_factor_buckets @ 1501ed590

/* protected: unsigned __int64 __cdecl std::_Hash<class std::_Uset_traits<int,class
   std::_Uhash_compare<int,struct std::hash<int>,struct std::equal_to<int> >,class
   std::allocator<int>,0> >::_Min_load_factor_buckets(unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::_Min_load_factor_buckets
          (_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
           *this,__uint64 param_1)

{
  longlong lVar1;
  float fVar2;
  
  fVar2 = ceilf((float)param_1 / (float)this->_Traitsobj);
  lVar1 = 0;
  if ((__real_5f000000 <= fVar2) && (fVar2 = fVar2 - __real_5f000000, fVar2 < __real_5f000000)) {
    lVar1 = -0x8000000000000000;
  }
  return (longlong)fVar2 + lVar1;
}

// _Orphan_non_end @ 1501ed600

/* public: void __cdecl std::_List_val<struct std::_List_simple_types<int> >::_Orphan_non_end(void)
   __ptr64 */

void __thiscall
std::_List_val<std::_List_simple_types<int>_>::_Orphan_non_end
          (_List_val<std::_List_simple_types<int>_> *this)

{
  return;
}

// _Orphan_range @ 1501ed610

/* private: void __cdecl std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::_Orphan_range(struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem
   * __ptr64,struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem *
   __ptr64)const __ptr64 */

void __thiscall
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::_Orphan_range(vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
                *this,ConversionItem *param_1,ConversionItem *param_2)

{
  return;
}

// _Rehash_for_1 @ 1501ed620

/* protected: void __cdecl std::_Hash<class std::_Uset_traits<int,class
   std::_Uhash_compare<int,struct std::hash<int>,struct std::equal_to<int> >,class
   std::allocator<int>,0> >::_Rehash_for_1(void) __ptr64 */

void __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::_Rehash_for_1(_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
                *this)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = this->_Maxidx;
  fVar5 = ceilf((float)((this->_List)._Mypair._Myval2._Mysize + 1) / (float)this->_Traitsobj);
  lVar2 = 0;
  if ((__real_5f000000 <= fVar5) && (fVar5 = fVar5 - __real_5f000000, fVar5 < __real_5f000000)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = 8;
  if (8 < (ulonglong)((longlong)fVar5 + lVar2)) {
    uVar3 = (longlong)fVar5 + lVar2;
  }
  uVar4 = uVar1;
  if ((uVar1 < uVar3) && ((0x1ff < uVar1 || (uVar4 = uVar1 * 8, uVar1 * 8 < uVar3)))) {
    uVar4 = uVar3;
  }
  _Forced_rehash(this,uVar4);
  return;
}

// _Release @ 1501ed6e0

/* public: struct std::_List_node<int,void * __ptr64> * __ptr64 __cdecl
   std::_Alloc_construct_ptr<class std::allocator<struct std::_List_node<int,void * __ptr64> >
   >::_Release(void) __ptr64 */

_List_node<int,void*___ptr64> * __thiscall
std::_Alloc_construct_ptr<std::allocator<std::_List_node<int,void*___ptr64>_>_>::_Release
          (_Alloc_construct_ptr<std::allocator<std::_List_node<int,void*___ptr64>_>_> *this)

{
  _List_node<int,void*___ptr64> *p_Var1;
  
  p_Var1 = *(_List_node<int,void*___ptr64> **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  return p_Var1;
}

// _Release @ 1501ed700

/* public: class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> * __ptr64 __cdecl
   std::_Uninitialized_backout<class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> * __ptr64>::_Release(void) __ptr64 */

_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0> *
__thiscall
std::
_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64>
::_Release(_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>*___ptr64>
           *this)

{
  *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
    **)this = *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                **)(this + 8);
  return *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
           **)(this + 8);
}

// _Release @ 1501ed710

/* public: struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem *
   __ptr64 __cdecl std::_Uninitialized_backout_al<class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> >::_Release(void)
   __ptr64 */

ConversionItem * __thiscall
std::
_Uninitialized_backout_al<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::_Release(_Uninitialized_backout_al<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
           *this)

{
  *(ConversionItem **)this = *(ConversionItem **)(this + 8);
  return *(ConversionItem **)(this + 8);
}

// _Tidy @ 1501ed720

/* WARNING: Type propagation algorithm not settling */
/* public: void __cdecl std::_Hash_vec<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> > >::_Tidy(void) __ptr64 */

void __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
::_Tidy(_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
        *this)

{
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
  *p_Var1;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
  *p_Var2;
  ulong64 uVar3;
  
  p_Var1 = (this->_Mypair)._Myval2._Myfirst;
  if (p_Var1 != (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                 *)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)p_Var1 & 0xfffffffffffffff8;
    p_Var2 = p_Var1;
    if (0xfff < uVar3) {
      p_Var2 = *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                 **)(p_Var1 + 0xffffffffffffffff);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)p_Var1 + (-8 - (longlong)p_Var2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(p_Var2,uVar3);
    (this->_Mypair)._Myval2._Myfirst =
         (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
          *)0x0;
    (this->_Mypair)._Myval2._Mylast =
         (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
          *)0x0;
    (this->_Mypair)._Myval2._Myend =
         (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
          *)0x0;
  }
  return;
}

// _Tidy @ 1501ed790

/* private: void __cdecl std::list<int,class std::allocator<int> >::_Tidy(void) __ptr64 */

void __thiscall std::list<int,std::allocator<int>_>::_Tidy(list<int,std::allocator<int>_> *this)

{
  _List_node<int,void_*> *p_Var1;
  _List_node<int,void_*> *p_Var2;
  
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Prev->_Next = (_List_node<int,void_*> *)0x0;
  p_Var1 = p_Var1->_Next;
  while (p_Var1 != (_List_node<int,void_*> *)0x0) {
    p_Var2 = p_Var1->_Next;
    ::operator_delete(p_Var1,0x18);
    p_Var1 = p_Var2;
  }
  ::operator_delete((this->_Mypair)._Myval2._Myhead,0x18);
  return;
}

// _Tidy @ 1501ed800

/* private: void __cdecl std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::_Tidy(void) __ptr64 */

void __thiscall
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::_Tidy(vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
        *this)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    uVar3 = *(longlong *)(this + 0x10) - (longlong)pvVar1 & 0xffffffffffffffe0;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar2,uVar3);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}

// _Unchecked_begin @ 1501ed870

/* public: class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> __cdecl std::_Hash<class
   std::_Uset_traits<int,class std::_Uhash_compare<int,struct std::hash<int>,struct
   std::equal_to<int> >,class std::allocator<int>,0> >::_Unchecked_begin(void) __ptr64 */

_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
__thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::_Unchecked_begin(_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
                   *this)

{
  _List_node<int,void_*> *in_RDX;
  
  in_RDX->_Next = ((this->_List)._Mypair._Myval2._Myhead)->_Next;
  return (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
          )in_RDX;
}

// _Unchecked_begin @ 1501ed890

/* public: class std::_List_unchecked_iterator<class std::_List_val<struct
   std::_List_simple_types<int> > > __cdecl std::list<int,class std::allocator<int>
   >::_Unchecked_begin(void) __ptr64 */

_List_unchecked_iterator<std::_List_val<std::_List_simple_types<int>_>_> __thiscall
std::list<int,std::allocator<int>_>::_Unchecked_begin(list<int,std::allocator<int>_> *this)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<int>_>_> in_RDX;
  
  *(_List_node<int,void_*> **)in_RDX = ((this->_Mypair)._Myval2._Myhead)->_Next;
  return in_RDX;
}

// _Unchecked_end @ 1501ed8b0

/* public: class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> __cdecl std::_Hash<class
   std::_Uset_traits<int,class std::_Uhash_compare<int,struct std::hash<int>,struct
   std::equal_to<int> >,class std::allocator<int>,0> >::_Unchecked_end(void) __ptr64 */

_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
__thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::_Unchecked_end(_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
                 *this)

{
  _List_node<int,void_*> *in_RDX;
  
  in_RDX->_Next = (this->_List)._Mypair._Myval2._Myhead;
  return (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
          )in_RDX;
}

// _Unchecked_end @ 1501ed8d0

/* public: class std::_List_unchecked_iterator<class std::_List_val<struct
   std::_List_simple_types<int> > > __cdecl std::list<int,class std::allocator<int>
   >::_Unchecked_end(void) __ptr64 */

_List_unchecked_iterator<std::_List_val<std::_List_simple_types<int>_>_> __thiscall
std::list<int,std::allocator<int>_>::_Unchecked_end(list<int,std::allocator<int>_> *this)

{
  _List_unchecked_iterator<std::_List_val<std::_List_simple_types<int>_>_> in_RDX;
  
  *(_List_node<int,void_*> **)in_RDX = (this->_Mypair)._Myval2._Myhead;
  return in_RDX;
}

// _Unchecked_erase @ 1501ed8e0

/* private: struct std::_List_node<int,void * __ptr64> * __ptr64 __cdecl std::_Hash<class
   std::_Uset_traits<int,class std::_Uhash_compare<int,struct std::hash<int>,struct
   std::equal_to<int> >,class std::allocator<int>,0> >::_Unchecked_erase(struct
   std::_List_node<int,void * __ptr64> * __ptr64,struct std::_List_node<int,void * __ptr64> *
   __ptr64 const) __ptr64 */

_List_node<int,void*___ptr64> * __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::_Unchecked_erase(_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
                   *this,_List_node<int,void*___ptr64> *param_1,
                  _List_node<int,void*___ptr64> *param_2)

{
  ulong64 *puVar1;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
  *p_Var2;
  _List_node<int,void_*> *p_Var3;
  _List_node<int,void_*> *p_Var4;
  _List_node<int,void_*> *p_Var5;
  _List_node<int,void_*> *p_Var6;
  _List_node<int,void_*> *p_Var7;
  _List_node<int,void_*> *p_Var8;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
  *p_Var9;
  
  if (param_1 == param_2) {
    return param_2;
  }
  p_Var2 = (this->_Vec)._Mypair._Myval2._Myfirst;
  p_Var3 = (this->_List)._Mypair._Myval2._Myhead;
  p_Var4 = *(_List_node<int,void_*> **)(param_1 + 8);
  p_Var9 = p_Var2 + (this->_Mask &
                    (((((ulonglong)(byte)param_1[0x10] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)(byte)param_1[0x11]) * 0x100000001b3 ^
                     (ulonglong)(byte)param_1[0x12]) * 0x100000001b3 ^
                    (ulonglong)(byte)param_1[0x13]) * 0x100000001b3) * 2;
  p_Var5 = p_Var9->_Ptr;
  p_Var6 = p_Var9[1]._Ptr;
  p_Var7 = (_List_node<int,void_*> *)param_1;
  do {
    p_Var8 = p_Var7->_Next;
    ::operator_delete(p_Var7,0x18);
    puVar1 = &(this->_List)._Mypair._Myval2._Mysize;
    *puVar1 = *puVar1 - 1;
    if (p_Var7 == p_Var6) {
      p_Var6 = p_Var4;
      if (p_Var5 == (_List_node<int,void_*> *)param_1) {
        p_Var9->_Ptr = p_Var3;
        p_Var6 = p_Var3;
      }
      p_Var9[1]._Ptr = p_Var6;
      while (p_Var8 != (_List_node<int,void_*> *)param_2) {
        p_Var9 = p_Var2 + (this->_Mask &
                          (((((ulonglong)(byte)p_Var8->_Myval ^ 0xcbf29ce484222325) * 0x100000001b3
                            ^ (ulonglong)*(byte *)((longlong)&p_Var8->_Myval + 1)) * 0x100000001b3 ^
                           (ulonglong)*(byte *)((longlong)&p_Var8->_Myval + 2)) * 0x100000001b3 ^
                          (ulonglong)*(byte *)((longlong)&p_Var8->_Myval + 3)) * 0x100000001b3) * 2;
        p_Var5 = p_Var9[1]._Ptr;
        p_Var6 = p_Var8;
        while( true ) {
          p_Var8 = p_Var6->_Next;
          ::operator_delete(p_Var6,0x18);
          puVar1 = &(this->_List)._Mypair._Myval2._Mysize;
          *puVar1 = *puVar1 - 1;
          if (p_Var6 == p_Var5) break;
          p_Var6 = p_Var8;
          if (p_Var8 == (_List_node<int,void_*> *)param_2) goto LAB_1501ed9ba;
        }
        p_Var9->_Ptr = p_Var3;
        p_Var9[1]._Ptr = p_Var3;
      }
      goto LAB_1501ed9bd;
    }
    p_Var7 = p_Var8;
  } while (p_Var8 != (_List_node<int,void_*> *)param_2);
  if (p_Var5 == (_List_node<int,void_*> *)param_1) {
LAB_1501ed9ba:
    p_Var9->_Ptr = p_Var8;
  }
LAB_1501ed9bd:
  p_Var4->_Next = p_Var8;
  p_Var8->_Prev = p_Var4;
  return param_2;
}

// _Unchecked_splice @ 1501edac0

/* public: static struct std::_List_node<int,void * __ptr64> * __ptr64 __cdecl std::_List_val<struct
   std::_List_simple_types<int> >::_Unchecked_splice(struct std::_List_node<int,void * __ptr64> *
   __ptr64 const,struct std::_List_node<int,void * __ptr64> * __ptr64 const,struct
   std::_List_node<int,void * __ptr64> * __ptr64 const) */

_List_node<int,void*___ptr64> * __cdecl
std::_List_val<std::_List_simple_types<int>_>::_Unchecked_splice
          (_List_node<int,void*___ptr64> *param_1,_List_node<int,void*___ptr64> *param_2,
          _List_node<int,void*___ptr64> *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  *puVar1 = param_3;
  puVar2 = *(undefined8 **)(param_3 + 8);
  *puVar2 = param_1;
  puVar3 = *(undefined8 **)(param_1 + 8);
  *puVar3 = param_2;
  *(undefined8 **)(param_1 + 8) = puVar2;
  *(undefined8 **)(param_3 + 8) = puVar1;
  *(undefined8 **)(param_2 + 8) = puVar3;
  return param_3;
}

// _Xlength @ 1501edaf0

/* private: static void __cdecl std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::_Xlength(void) */

void __cdecl
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// allocate @ 1501edb10

/* public: struct std::_List_node<int,void * __ptr64> * __ptr64 __cdecl std::allocator<struct
   std::_List_node<int,void * __ptr64> >::allocate(unsigned __int64) __ptr64 */

_List_node<int,void*___ptr64> * __thiscall
std::allocator<std::_List_node<int,void*___ptr64>_>::allocate
          (allocator<std::_List_node<int,void*___ptr64>_> *this,__uint64 param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  _List_node<int,void*___ptr64> *p_Var3;
  
  if (param_1 < 0xaaaaaaaaaaaaaab) {
    uVar1 = param_1 * 0x18;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        p_Var3 = ::operator_new(uVar1);
        return p_Var3;
      }
      return (_List_node<int,void*___ptr64> *)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pvVar2 = ::operator_new(uVar1 + 0x27);
      if (pvVar2 != (void *)0x0) {
        p_Var3 = (_List_node<int,void*___ptr64> *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
        *(void **)(p_Var3 + -8) = pvVar2;
        return p_Var3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// allocate @ 1501edb90

/* public: struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem *
   __ptr64 __cdecl std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>::allocate(unsigned
   __int64) __ptr64 */

ConversionItem * __thiscall
std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>::allocate
          (allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
           *this,__uint64 param_1)

{
  void *pvVar1;
  ConversionItem *pCVar2;
  ulonglong uVar3;
  
  if (param_1 < 0x800000000000000) {
    uVar3 = param_1 * 0x20;
    if (uVar3 < 0x1000) {
      if (uVar3 != 0) {
        pCVar2 = ::operator_new(uVar3);
        return pCVar2;
      }
      return (ConversionItem *)0x0;
    }
    if (uVar3 < uVar3 + 0x27) {
      pvVar1 = ::operator_new(uVar3 + 0x27);
      if (pvVar1 != (void *)0x0) {
        pCVar2 = (ConversionItem *)((longlong)pvVar1 + 0x27U & 0xffffffffffffffe0);
        *(void **)&pCVar2[-1].conv.precision = pvVar1;
        return pCVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// allocate @ 1501edc10

/* public: class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> * __ptr64 __cdecl
   std::allocator<class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> >,struct std::_Iterator_base0> >::allocate(unsigned __int64) __ptr64
    */

_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0> *
__thiscall
std::
allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>
::allocate(allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>
           *this,__uint64 param_1)

{
  ulonglong uVar1;
  _List_node<int,void_*> *p_Var2;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
  *p_Var3;
  
  if (param_1 < 0x2000000000000000) {
    uVar1 = param_1 * 8;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        p_Var3 = ::operator_new(uVar1);
        return p_Var3;
      }
      return (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
              *)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      p_Var2 = ::operator_new(uVar1 + 0x27);
      if (p_Var2 != (_List_node<int,void_*> *)0x0) {
        p_Var3 = (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>
                  *)((ulonglong)((longlong)&p_Var2[1]._Prev + 7U) & 0xffffffffffffffe0);
        p_Var3[-1]._Ptr = p_Var2;
        return p_Var3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// as_flags @ 1501edc90

/* public: enum absl::lts_20240722::str_format_internal::Flags __cdecl
   absl::lts_20240722::str_format_internal::ConvTag::as_flags(void)const __ptr64 */

Flags __thiscall absl::lts_20240722::str_format_internal::ConvTag::as_flags(ConvTag *this)

{
  return this->tag_ & (kZero|kAlt|kSignCol|kShowPos|kLeft);
}

// as_length @ 1501edca0

/* public: enum absl::lts_20240722::LengthMod __cdecl
   absl::lts_20240722::str_format_internal::ConvTag::as_length(void)const __ptr64 */

LengthMod __thiscall absl::lts_20240722::str_format_internal::ConvTag::as_length(ConvTag *this)

{
  return this->tag_ & 0x3f;
}

// back @ 1501edcb0

/* public: struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem &
   __ptr64 __cdecl std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::back(void) __ptr64 */

ConversionItem * __thiscall
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::back(vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
       *this)

{
  return (ConversionItem *)(*(longlong *)(this + 8) + -0x20);
}

// begin @ 1501edcc0

/* WARNING: Enum "FormatConversionCharSet": Some values do not have unique names */
/* public: enum absl::lts_20240722::FormatConversionCharSet const * __ptr64 __cdecl
   std::initializer_list<enum absl::lts_20240722::FormatConversionCharSet>::begin(void)const __ptr64
    */

FormatConversionCharSet * __thiscall
std::initializer_list<absl::lts_20240722::FormatConversionCharSet>::begin
          (initializer_list<absl::lts_20240722::FormatConversionCharSet> *this)

{
  return *(FormatConversionCharSet **)this;
}

// bucket @ 1501edcd0

/* public: unsigned __int64 __cdecl std::_Hash<class std::_Uset_traits<int,class
   std::_Uhash_compare<int,struct std::hash<int>,struct std::equal_to<int> >,class
   std::allocator<int>,0> >::bucket(int const & __ptr64)const __ptr64 */

__uint64 __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::bucket(_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
         *this,int *param_1)

{
  return this->_Mask &
         (((((ulonglong)(byte)*param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_1 + 1)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
         (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3;
}

// bucket_count @ 1501edd20

/* public: unsigned __int64 __cdecl std::_Hash<class std::_Uset_traits<int,class
   std::_Uhash_compare<int,struct std::hash<int>,struct std::equal_to<int> >,class
   std::allocator<int>,0> >::bucket_count(void)const __ptr64 */

__uint64 __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::bucket_count(_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
               *this)

{
  return this->_Maxidx;
}

// capacity @ 1501edd30

/* public: unsigned __int64 __cdecl std::_Hash_vec<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> > >::capacity(void)const __ptr64 */

__uint64 __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
::capacity(_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
           *this)

{
  return (longlong)(this->_Mypair)._Myval2._Myend - (longlong)(this->_Mypair)._Myval2._Myfirst >> 3;
}

// capacity @ 1501edd50

/* public: unsigned __int64 __cdecl std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::capacity(void)const __ptr64 */

__uint64 __thiscall
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::capacity(vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
           *this)

{
  return *(longlong *)(this + 0x10) - *(longlong *)this >> 5;
}

// clear @ 1501edd70

/* public: void __cdecl std::list<int,class std::allocator<int> >::clear(void) __ptr64 */

void __thiscall std::list<int,std::allocator<int>_>::clear(list<int,std::allocator<int>_> *this)

{
  _List_node<int,void_*> *p_Var1;
  _List_node<int,void_*> *p_Var2;
  
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Prev->_Next = (_List_node<int,void_*> *)0x0;
  p_Var1 = p_Var1->_Next;
  while (p_Var1 != (_List_node<int,void_*> *)0x0) {
    p_Var2 = p_Var1->_Next;
    ::operator_delete(p_Var1,0x18);
    p_Var1 = p_Var2;
  }
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Next = p_Var1;
  p_Var1 = (this->_Mypair)._Myval2._Myhead;
  p_Var1->_Prev = p_Var1;
  (this->_Mypair)._Myval2._Mysize = 0;
  return;
}

// deallocate @ 1501edde0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::_List_node<int,void * __ptr64> > >::deallocate(class std::allocator<struct
   std::_List_node<int,void * __ptr64> > & __ptr64,struct std::_List_node<int,void * __ptr64> *
   __ptr64 const,unsigned __int64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<std::_List_node<int,void*___ptr64>_>_>::deallocate
          (allocator<std::_List_node<int,void*___ptr64>_> *param_1,
          _List_node<int,void*___ptr64> *param_2,__uint64 param_3)

{
  _List_node<int,void*___ptr64> *p_Var1;
  ulong64 uVar2;
  
  uVar2 = param_3 * 0x18;
  p_Var1 = param_2;
  if (0xfff < uVar2) {
    p_Var1 = *(_List_node<int,void*___ptr64> **)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if ((_List_node<int,void*___ptr64> *)0x1f < param_2 + (-8 - (longlong)p_Var1)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(p_Var1,uVar2);
  return;
}

// deallocate @ 1501ede30

/* public: void __cdecl std::allocator<struct std::_List_node<int,void * __ptr64>
   >::deallocate(struct std::_List_node<int,void * __ptr64> * __ptr64 const,unsigned __int64)
   __ptr64 */

void __thiscall
std::allocator<std::_List_node<int,void*___ptr64>_>::deallocate
          (allocator<std::_List_node<int,void*___ptr64>_> *this,
          _List_node<int,void*___ptr64> *param_1,__uint64 param_2)

{
  _List_node<int,void*___ptr64> *p_Var1;
  ulong64 uVar2;
  
  uVar2 = param_2 * 0x18;
  p_Var1 = param_1;
  if (0xfff < uVar2) {
    p_Var1 = *(_List_node<int,void*___ptr64> **)(param_1 + -8);
    uVar2 = uVar2 + 0x27;
    if ((_List_node<int,void*___ptr64> *)0x1f < param_1 + (-8 - (longlong)p_Var1)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(p_Var1,uVar2);
  return;
}

// deallocate @ 1501ede80

/* public: void __cdecl std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>::deallocate(struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem * __ptr64
   const,unsigned __int64) __ptr64 */

void __thiscall
std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>::
deallocate(allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
           *this,ConversionItem *param_1,__uint64 param_2)

{
  ConversionItem *pCVar1;
  ulong64 uVar2;
  
  uVar2 = param_2 * 0x20;
  pCVar1 = param_1;
  if (0xfff < uVar2) {
    pCVar1 = *(ConversionItem **)&param_1[-1].conv.precision;
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)pCVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pCVar1,uVar2);
  return;
}

// empty @ 1501eded0

/* public: bool __cdecl std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::empty(void)const __ptr64 */

bool __thiscall
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::empty(vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
        *this)

{
  return *(longlong *)this == *(longlong *)(this + 8);
}

// insert @ 1501edef0

/* public: struct std::pair<class std::_List_const_iterator<class std::_List_val<struct
   std::_List_simple_types<int> > >,bool> __cdecl std::_Hash<class std::_Uset_traits<int,class
   std::_Uhash_compare<int,struct std::hash<int>,struct std::equal_to<int> >,class
   std::allocator<int>,0> >::insert(int const & __ptr64) __ptr64 */

pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_>,bool> * __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::insert(_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
         *this,pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<int>_>_>,bool>
               *__return_storage_ptr__,int *param_1)

{
  emplace<int_const_&>(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// is_flags @ 1501edf10

/* public: bool __cdecl absl::lts_20240722::str_format_internal::ConvTag::is_flags(void)const
   __ptr64 */

bool __thiscall absl::lts_20240722::str_format_internal::ConvTag::is_flags(ConvTag *this)

{
  return (this->tag_ & 0xe0) == 0xc0;
}

// is_length @ 1501edf30

/* public: bool __cdecl absl::lts_20240722::str_format_internal::ConvTag::is_length(void)const
   __ptr64 */

bool __thiscall absl::lts_20240722::str_format_internal::ConvTag::is_length(ConvTag *this)

{
  return (this->tag_ & 0xc0) == 0x80;
}

// max_load_factor @ 1501edf50

/* public: float __cdecl std::_Hash<class std::_Uset_traits<int,class std::_Uhash_compare<int,struct
   std::hash<int>,struct std::equal_to<int> >,class std::allocator<int>,0>
   >::max_load_factor(void)const __ptr64 */

float __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::max_load_factor(_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
                  *this)

{
  return (float)this->_Traitsobj;
}

// max_size @ 1501edf60

/* public: static unsigned __int64 __cdecl std::_Default_allocator_traits<class
   std::allocator<struct std::_List_node<int,void * __ptr64> > >::max_size(class
   std::allocator<struct std::_List_node<int,void * __ptr64> > const & __ptr64) */

__uint64 __cdecl
std::_Default_allocator_traits<std::allocator<std::_List_node<int,void*___ptr64>_>_>::max_size
          (allocator<std::_List_node<int,void*___ptr64>_> *param_1)

{
  return 0xaaaaaaaaaaaaaaa;
}

// max_size @ 1501edf80

/* public: static unsigned __int64 __cdecl std::_Default_allocator_traits<class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::max_size(class std::allocator<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem> const & __ptr64) */

__uint64 __cdecl
std::
_Default_allocator_traits<std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::max_size(allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
           *param_1)

{
  return 0x7ffffffffffffff;
}

// max_size @ 1501edfa0

/* public: static unsigned __int64 __cdecl std::_Default_allocator_traits<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> > >::max_size(class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> > const & __ptr64) */

__uint64 __cdecl
std::
_Default_allocator_traits<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
::max_size(allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>
           *param_1)

{
  return 0x1fffffffffffffff;
}

// max_size @ 1501edfc0

/* public: unsigned __int64 __cdecl std::_Hash_vec<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> > >::max_size(void)const __ptr64 */

__uint64 __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
::max_size(_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
           *this)

{
  return 0x1fffffffffffffff;
}

// max_size @ 1501edfe0

/* public: unsigned __int64 __cdecl std::list<int,class std::allocator<int> >::max_size(void)const
   __ptr64 */

__uint64 __thiscall
std::list<int,std::allocator<int>_>::max_size(list<int,std::allocator<int>_> *this)

{
  return 0xaaaaaaaaaaaaaaa;
}

// max_size @ 1501ee000

/* public: unsigned __int64 __cdecl std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::max_size(void)const __ptr64 */

__uint64 __thiscall
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::max_size(vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
           *this)

{
  return 0x7ffffffffffffff;
}

// push_back @ 1501ee020

/* public: void __cdecl std::vector<struct
   absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,class
   std::allocator<struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
   >::push_back(struct absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem &&
   __ptr64) __ptr64 */

void __thiscall
std::
vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
::push_back(vector<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem,std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>_>
            *this,ConversionItem *param_1)

{
  ConversionItem *pCVar1;
  ulong64 uVar2;
  undefined7 uVar3;
  InputValue IVar4;
  InputValue IVar5;
  Flags FVar6;
  LengthMod LVar7;
  FormatConversionChar FVar8;
  undefined1 uVar9;
  
  pCVar1 = *(ConversionItem **)(this + 8);
  if (pCVar1 != *(ConversionItem **)(this + 0x10)) {
    uVar3 = *(undefined7 *)&param_1->field_0x1;
    uVar2 = param_1->text_end;
    pCVar1->is_conversion = param_1->is_conversion;
    *(undefined7 *)&pCVar1->field_0x1 = uVar3;
    pCVar1->text_end = uVar2;
    IVar4.value_ = (param_1->conv).width.value_;
    IVar5.value_ = (param_1->conv).precision.value_;
    FVar6 = (param_1->conv).flags;
    LVar7 = (param_1->conv).length_mod;
    FVar8 = (param_1->conv).conv;
    uVar9 = (param_1->conv).field_0xf;
    (pCVar1->conv).arg_position = (param_1->conv).arg_position;
    (pCVar1->conv).width = (InputValue)IVar4.value_;
    (pCVar1->conv).precision = (InputValue)IVar5.value_;
    (pCVar1->conv).flags = FVar6;
    (pCVar1->conv).length_mod = LVar7;
    (pCVar1->conv).conv = FVar8;
    (pCVar1->conv).field_0xf = uVar9;
    *(longlong *)(this + 8) = *(longlong *)(this + 8) + 0x20;
    return;
  }
  _Emplace_reallocate<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
            (this,pCVar1,param_1);
  return;
}

// set_from_arg @ 1501ee050

/* public: void __cdecl
   absl::lts_20240722::str_format_internal::UnboundConversion::InputValue::set_from_arg(int) __ptr64
    */

void __thiscall
absl::lts_20240722::str_format_internal::UnboundConversion::InputValue::set_from_arg
          (InputValue *this,int param_1)

{
  this->value_ = ~param_1;
  return;
}

// set_value @ 1501ee060

/* public: void __cdecl
   absl::lts_20240722::str_format_internal::UnboundConversion::InputValue::set_value(int) __ptr64 */

void __thiscall
absl::lts_20240722::str_format_internal::UnboundConversion::InputValue::set_value
          (InputValue *this,int param_1)

{
  this->value_ = param_1;
  return;
}

// size @ 1501ee070

/* public: unsigned __int64 __cdecl std::_Hash<class std::_Uset_traits<int,class
   std::_Uhash_compare<int,struct std::hash<int>,struct std::equal_to<int> >,class
   std::allocator<int>,0> >::size(void)const __ptr64 */

__uint64 __thiscall
std::
_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
::size(_Hash<std::_Uset_traits<int,std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>_>,std::allocator<int>,0>_>
       *this)

{
  return (this->_List)._Mypair._Myval2._Mysize;
}

// size @ 1501ee080

/* public: unsigned __int64 __cdecl std::_Hash_vec<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<int>
   >,struct std::_Iterator_base0> > >::size(void)const __ptr64 */

__uint64 __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
::size(_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<int>_>,std::_Iterator_base0>_>_>
       *this)

{
  return (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)(this->_Mypair)._Myval2._Myfirst >> 3
  ;
}

// size @ 1501ee0a0

/* public: unsigned __int64 __cdecl std::initializer_list<enum
   absl::lts_20240722::FormatConversionCharSet>::size(void)const __ptr64 */

__uint64 __thiscall
std::initializer_list<absl::lts_20240722::FormatConversionCharSet>::size
          (initializer_list<absl::lts_20240722::FormatConversionCharSet> *this)

{
  return *(longlong *)(this + 8) - *(longlong *)this >> 3;
}

// size @ 1501ee0c0

/* public: unsigned __int64 __cdecl std::list<int,class std::allocator<int> >::size(void)const
   __ptr64 */

__uint64 __thiscall std::list<int,std::allocator<int>_>::size(list<int,std::allocator<int>_> *this)

{
  return (this->_Mypair)._Myval2._Mysize;
}

// FUN_1503308f0 @ 1503308f0

void FUN_1503308f0(undefined8 param_1,longlong param_2)

{
  std::allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>::
  deallocate(*(allocator<absl::lts_20240722::str_format_internal::ParsedFormatBase::ConversionItem>
               **)(param_2 + 0x60),*(ConversionItem **)(param_2 + 0x78),
             *(__uint64 *)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


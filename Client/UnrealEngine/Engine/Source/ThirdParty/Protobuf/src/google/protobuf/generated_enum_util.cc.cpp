// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 107

// _Compressed_pair<std::allocator<unsigned_int>,std::_Vector_val<std::_Simple_types<unsigned_int>_>,1><> @ 14fb87e40

/* public: __cdecl std::_Compressed_pair<class std::allocator<unsigned int>,class
   std::_Vector_val<struct std::_Simple_types<unsigned int> >,1>::_Compressed_pair<class
   std::allocator<unsigned int>,class std::_Vector_val<struct std::_Simple_types<unsigned int>
   >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64 */

_Compressed_pair<std::allocator<unsigned_int>,std::_Vector_val<std::_Simple_types<unsigned_int>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<unsigned_int>,std::_Vector_val<std::_Simple_types<unsigned_int>_>,1>
::
_Compressed_pair<std::allocator<unsigned_int>,std::_Vector_val<std::_Simple_types<unsigned_int>_>,1><>
          (_Compressed_pair<std::allocator<unsigned_int>,std::_Vector_val<std::_Simple_types<unsigned_int>_>,1>
           *this,_Zero_then_variadic_args_t param_1)

{
  (this->_Myval2)._Myfirst = (uint *)0x0;
  (this->_Myval2)._Mylast = (uint *)0x0;
  (this->_Myval2)._Myend = (uint *)0x0;
  return this;
}

// _Compressed_pair<std::allocator<unsigned_int>,std::_Vector_val<std::_Simple_types<unsigned_int>_>,1><std::allocator<unsigned_int>_const&___ptr64> @ 14fb87e60

/* public: __cdecl std::_Compressed_pair<class std::allocator<unsigned int>,class
   std::_Vector_val<struct std::_Simple_types<unsigned int> >,1>::_Compressed_pair<class
   std::allocator<unsigned int>,class std::_Vector_val<struct std::_Simple_types<unsigned int>
   >,1><class std::allocator<unsigned int> const & __ptr64>(struct
   std::_One_then_variadic_args_t,class std::allocator<unsigned int> const & __ptr64) __ptr64 */

_Compressed_pair<std::allocator<unsigned_int>,std::_Vector_val<std::_Simple_types<unsigned_int>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<unsigned_int>,std::_Vector_val<std::_Simple_types<unsigned_int>_>,1>
::
_Compressed_pair<std::allocator<unsigned_int>,std::_Vector_val<std::_Simple_types<unsigned_int>_>,1><std::allocator<unsigned_int>_const&___ptr64>
          (_Compressed_pair<std::allocator<unsigned_int>,std::_Vector_val<std::_Simple_types<unsigned_int>_>,1>
           *this,_One_then_variadic_args_t param_1,allocator<unsigned_int> *param_2)

{
  (this->_Myval2)._Myfirst = (uint *)0x0;
  (this->_Myval2)._Mylast = (uint *)0x0;
  (this->_Myval2)._Myend = (uint *)0x0;
  return this;
}

// operator=<int&___ptr64,0> @ 14fb87e80

/* public: class std::optional<short> & __ptr64 __cdecl std::optional<short>::operator=<int &
   __ptr64,0>(int & __ptr64) __ptr64 */

optional<short> * __thiscall
std::optional<short>::operator=<int&___ptr64,0>(optional<short> *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (this[2] == (optional<short>)0x0) {
    this[2] = (optional<short>)0x1;
  }
  *(short *)this = (short)iVar1;
  return this;
}

// operator()<int&___ptr64,int&___ptr64> @ 14fb87ea0

/* public: bool __cdecl std::less<void>::operator()<int & __ptr64,int & __ptr64>(int & __ptr64,int &
   __ptr64)const __ptr64 */

bool __thiscall
std::less<void>::operator()<int&___ptr64,int&___ptr64>(less<void> *this,int *param_1,int *param_2)

{
  return *param_1 < *param_2;
}

// Construct<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64> @ 14fb87eb0

/* public: void __cdecl google::protobuf::internal::ExplicitlyConstructed<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >,1>::Construct<class std::basic_string_view<char,struct std::char_traits<char> > const &
   __ptr64>(class std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::internal::
ExplicitlyConstructed<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,1>::
Construct<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64>
          (ExplicitlyConstructed<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,1>
           *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,
             param_1->_Mydata,param_1->_Mysize);
  return;
}

// MakeSpan<unsigned_int> @ 14fb87ee0

/* class absl::lts_20240722::Span<unsigned int> __cdecl absl::lts_20240722::MakeSpan<unsigned
   int>(unsigned int * __ptr64,unsigned __int64) */

uint * __cdecl absl::lts_20240722::MakeSpan<unsigned_int>(uint *param_1,__uint64 param_2)

{
  undefined8 in_R8;
  
  *(__uint64 *)param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = in_R8;
  return param_1;
}

// _Adl_verify_range<google::protobuf::internal::EnumEntry_const*___ptr64,google::protobuf::internal::EnumEntry_const*___ptr64> @ 14fb87f00

/* void __cdecl std::_Adl_verify_range<struct google::protobuf::internal::EnumEntry const *
   __ptr64,struct google::protobuf::internal::EnumEntry const * __ptr64>(struct
   google::protobuf::internal::EnumEntry const * __ptr64 const & __ptr64,struct
   google::protobuf::internal::EnumEntry const * __ptr64 const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<google::protobuf::internal::EnumEntry_const*___ptr64,google::protobuf::internal::EnumEntry_const*___ptr64>
          (EnumEntry **param_1,EnumEntry **param_2)

{
  return;
}

// _Adl_verify_range<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_>,std::_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<int>_>_>_> @ 14fb87f10

/* void __cdecl std::_Adl_verify_range<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<int> > >,class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<int> > > >(class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<int> > > const & __ptr64,class std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<int> > > const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_>,std::_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<int>_>_>_>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_> *param_1,
          _Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_> *param_2)

{
  return;
}

// _Adl_verify_range<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>,std::_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<unsigned_int>_>_>_> @ 14fb87f20

/* void __cdecl std::_Adl_verify_range<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<unsigned int> > >,class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<unsigned int> > > >(class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<unsigned int> > > const & __ptr64,class std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<unsigned int> > > const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>,std::_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<unsigned_int>_>_>_>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_> *param_1,
          _Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_> *param_2)

{
  return;
}

// _Allocate_at_least_helper<std::allocator<unsigned_int>_> @ 14fb87f30

/* unsigned int * __ptr64 __cdecl std::_Allocate_at_least_helper<class std::allocator<unsigned int>
   >(class std::allocator<unsigned int> & __ptr64,unsigned __int64 & __ptr64) */

uint * __cdecl
std::_Allocate_at_least_helper<std::allocator<unsigned_int>_>
          (allocator<unsigned_int> *param_1,__uint64 *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  uint *puVar3;
  
  if (*param_2 < 0x4000000000000000) {
    uVar1 = *param_2 * 4;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        puVar3 = ::operator_new(uVar1);
        return puVar3;
      }
      return (uint *)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pvVar2 = ::operator_new(uVar1 + 0x27);
      if (pvVar2 != (void *)0x0) {
        puVar3 = (uint *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
        *(void **)(puVar3 + -2) = pvVar2;
        return puVar3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Assign<int&___ptr64> @ 14fb87fb0

/* public: void __cdecl std::_Optional_construct_base<short>::_Assign<int & __ptr64>(int & __ptr64)
   __ptr64 */

void __thiscall
std::_Optional_construct_base<short>::_Assign<int&___ptr64>
          (_Optional_construct_base<short> *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (this[2] == (_Optional_construct_base<short>)0x0) {
    this[2] = (_Optional_construct_base<short>)0x1;
  }
  *(short *)this = (short)iVar1;
  return;
}

// _Construct<int&___ptr64> @ 14fb87fd0

/* public: short & __ptr64 __cdecl std::_Optional_construct_base<short>::_Construct<int &
   __ptr64>(int & __ptr64) __ptr64 */

short * __thiscall
std::_Optional_construct_base<short>::_Construct<int&___ptr64>
          (_Optional_construct_base<short> *this,int *param_1)

{
  *(short *)this = (short)*param_1;
  this[2] = (_Optional_construct_base<short>)0x1;
  return (short *)this;
}

// _Construct_in_place<short,int&___ptr64> @ 14fb87ff0

/* void __cdecl std::_Construct_in_place<short,int & __ptr64>(short & __ptr64,int & __ptr64) */

void __cdecl std::_Construct_in_place<short,int&___ptr64>(short *param_1,int *param_2)

{
  *param_1 = (short)*param_2;
  return;
}

// _Construct_n<> @ 14fb88000

/* private: void __cdecl std::vector<unsigned int,class std::allocator<unsigned int>
   >::_Construct_n<>(unsigned __int64) __ptr64 */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Construct_n<>
          (vector<unsigned_int,std::allocator<unsigned_int>_> *this,__uint64 param_1)

{
  ulonglong _Size;
  void *pvVar1;
  uint *_Dst;
  
  if (param_1 != 0) {
    if (0x3fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    _Size = param_1 * 4;
    if (_Size < 0x1000) {
      if (_Size == 0) {
        _Dst = (uint *)0x0;
      }
      else {
        _Dst = ::operator_new(_Size);
      }
    }
    else {
      if (_Size + 0x27 <= _Size) {
                    /* WARNING: Subroutine does not return */
        _Throw_bad_array_new_length();
      }
      pvVar1 = ::operator_new(_Size + 0x27);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (uint *)((longlong)pvVar1 + 0x27U & 0xffffffffffffffe0);
      *(void **)(_Dst + -2) = pvVar1;
    }
    (this->_Mypair)._Myval2._Myfirst = _Dst;
    (this->_Mypair)._Myval2._Myend = _Dst + param_1;
    memset(_Dst,0,_Size);
    (this->_Mypair)._Myval2._Mylast = _Dst + param_1;
  }
  return;
}

// _Copy_unchecked<int*___ptr64,int*___ptr64,int*___ptr64> @ 14fb880c0

/* int * __ptr64 __cdecl std::_Copy_unchecked<int * __ptr64,int * __ptr64,int * __ptr64>(int *
   __ptr64,int * __ptr64,int * __ptr64) */

int * __cdecl
std::_Copy_unchecked<int*___ptr64,int*___ptr64,int*___ptr64>(int *param_1,int *param_2,int *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (int *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_unchecked<unsigned_int*___ptr64,unsigned_int*___ptr64,unsigned_int*___ptr64> @ 14fb88100

/* unsigned int * __ptr64 __cdecl std::_Copy_unchecked<unsigned int * __ptr64,unsigned int *
   __ptr64,unsigned int * __ptr64>(unsigned int * __ptr64,unsigned int * __ptr64,unsigned int *
   __ptr64) */

uint * __cdecl
std::_Copy_unchecked<unsigned_int*___ptr64,unsigned_int*___ptr64,unsigned_int*___ptr64>
          (uint *param_1,uint *param_2,uint *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (uint *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Emplace_back<> @ 14fb88140

/* public: void __cdecl std::_Uninitialized_backout_al<class std::allocator<int>
   >::_Emplace_back<>(void) __ptr64 */

void __thiscall
std::_Uninitialized_backout_al<std::allocator<int>_>::_Emplace_back<>
          (_Uninitialized_backout_al<std::allocator<int>_> *this)

{
  *this->_Last = 0;
  this->_Last = this->_Last + 1;
  return;
}

// _Emplace_back<> @ 14fb88160

/* public: void __cdecl std::_Uninitialized_backout_al<class std::allocator<unsigned int>
   >::_Emplace_back<>(void) __ptr64 */

void __thiscall
std::_Uninitialized_backout_al<std::allocator<unsigned_int>_>::_Emplace_back<>
          (_Uninitialized_backout_al<std::allocator<unsigned_int>_> *this)

{
  *this->_Last = 0;
  this->_Last = this->_Last + 1;
  return;
}

// _Emplace_back<unsigned_int> @ 14fb88180

/* public: void __cdecl std::_Uninitialized_backout_al<class std::allocator<unsigned int>
   >::_Emplace_back<unsigned int>(unsigned int && __ptr64) __ptr64 */

void __thiscall
std::_Uninitialized_backout_al<std::allocator<unsigned_int>_>::_Emplace_back<unsigned_int>
          (_Uninitialized_backout_al<std::allocator<unsigned_int>_> *this,uint *param_1)

{
  *this->_Last = *param_1;
  this->_Last = this->_Last + 1;
  return;
}

// _Get_unwrapped<google::protobuf::internal::EnumEntry_const*___ptr64&___ptr64> @ 14fb881a0

/* UNKNOWN __cdecl std::_Get_unwrapped<struct google::protobuf::internal::EnumEntry const * __ptr64
   & __ptr64>(struct google::protobuf::internal::EnumEntry const * __ptr64 & __ptr64) */

EnumEntry * __cdecl
std::_Get_unwrapped<google::protobuf::internal::EnumEntry_const*___ptr64&___ptr64>
          (EnumEntry **param_1)

{
  return *param_1;
}

// _Get_unwrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_>&___ptr64> @ 14fb881b0

/* UNKNOWN __cdecl std::_Get_unwrapped<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<int> > > & __ptr64>(class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<int> > > & __ptr64) */

_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_> __cdecl
std::_Get_unwrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_>&___ptr64>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_> *param_1)

{
  return *param_1;
}

// _Get_unwrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>&___ptr64> @ 14fb881c0

/* UNKNOWN __cdecl std::_Get_unwrapped<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<unsigned int> > > & __ptr64>(class std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<unsigned int> > > & __ptr64) */

_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_> __cdecl
std::
_Get_unwrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>&___ptr64>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_> *param_1)

{
  return *param_1;
}

// _Get_unwrapped<unsigned_int*___ptr64_const&___ptr64> @ 14fb881d0

/* UNKNOWN __cdecl std::_Get_unwrapped<unsigned int * __ptr64 const & __ptr64>(unsigned int *
   __ptr64 const & __ptr64) */

uint * __cdecl std::_Get_unwrapped<unsigned_int*___ptr64_const&___ptr64>(uint **param_1)

{
  return *param_1;
}

// _Get_unwrapped<google::protobuf::internal::EnumEntry_const*___ptr64_const&___ptr64> @ 14fb881e0

/* UNKNOWN __cdecl std::_Get_unwrapped<struct google::protobuf::internal::EnumEntry const * __ptr64
   const & __ptr64>(struct google::protobuf::internal::EnumEntry const * __ptr64 const & __ptr64) */

EnumEntry * __cdecl
std::_Get_unwrapped<google::protobuf::internal::EnumEntry_const*___ptr64_const&___ptr64>
          (EnumEntry **param_1)

{
  return *param_1;
}

// _Get_unwrapped_n<int*___ptr64&___ptr64,__int64> @ 14fb881f0

/* UNKNOWN __cdecl std::_Get_unwrapped_n<int * __ptr64 & __ptr64,__int64>(int * __ptr64 &
   __ptr64,__int64) */

int * __cdecl std::_Get_unwrapped_n<int*___ptr64&___ptr64,__int64>(int **param_1,__int64 param_2)

{
  return *param_1;
}

// _Idl_dist_add<__int64,__int64> @ 14fb88200

/* UNKNOWN __cdecl std::_Idl_dist_add<__int64,__int64>(__int64,__int64) */

longlong __cdecl std::_Idl_dist_add<__int64,__int64>(__int64 param_1,__int64 param_2)

{
  return param_1 + param_2;
}

// _Idl_distance<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_>,int*___ptr64> @ 14fb88210

/* UNKNOWN __cdecl std::_Idl_distance<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<int> > >,int * __ptr64>(int * __ptr64 const & __ptr64,int * __ptr64 const &
   __ptr64) */

longlong __cdecl
std::_Idl_distance<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_>,int*___ptr64>
          (int **param_1,int **param_2)

{
  return (longlong)*param_2 - (longlong)*param_1 >> 2;
}

// _Idl_distance<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>,unsigned_int*___ptr64> @ 14fb88230

/* UNKNOWN __cdecl std::_Idl_distance<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<unsigned int> > >,unsigned int * __ptr64>(unsigned int * __ptr64 const &
   __ptr64,unsigned int * __ptr64 const & __ptr64) */

longlong __cdecl
std::
_Idl_distance<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>,unsigned_int*___ptr64>
          (uint **param_1,uint **param_2)

{
  return (longlong)*param_2 - (longlong)*param_1 >> 2;
}

// _Next_iter<int_const*___ptr64> @ 14fb88250

/* int const * __ptr64 __cdecl std::_Next_iter<int const * __ptr64>(int const * __ptr64) */

int * __cdecl std::_Next_iter<int_const*___ptr64>(int *param_1)

{
  return param_1 + 1;
}

// _Next_iter<google::protobuf::internal::EnumEntry_const*___ptr64> @ 14fb88260

/* struct google::protobuf::internal::EnumEntry const * __ptr64 __cdecl std::_Next_iter<struct
   google::protobuf::internal::EnumEntry const * __ptr64>(struct
   google::protobuf::internal::EnumEntry const * __ptr64) */

EnumEntry * __cdecl
std::_Next_iter<google::protobuf::internal::EnumEntry_const*___ptr64>(EnumEntry *param_1)

{
  return param_1 + 0x18;
}

// _Pocma<std::allocator<int>_> @ 14fb88270

/* void __cdecl std::_Pocma<class std::allocator<int> >(class std::allocator<int> & __ptr64,class
   std::allocator<int> & __ptr64) */

void __cdecl std::_Pocma<std::allocator<int>_>(allocator<int> *param_1,allocator<int> *param_2)

{
  return;
}

// _Resize<std::_Value_init_tag> @ 14fb88280

/* private: void __cdecl std::vector<unsigned int,class std::allocator<unsigned int>
   >::_Resize<struct std::_Value_init_tag>(unsigned __int64,struct std::_Value_init_tag const &
   __ptr64) __ptr64 */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Resize<std::_Value_init_tag>
          (vector<unsigned_int,std::allocator<unsigned_int>_> *this,__uint64 param_1,
          _Value_init_tag *param_2)

{
  uint *_Dst;
  uint *puVar1;
  ulonglong uVar2;
  
  _Dst = (this->_Mypair)._Myval2._Mylast;
  puVar1 = (this->_Mypair)._Myval2._Myfirst;
  uVar2 = (longlong)_Dst - (longlong)puVar1 >> 2;
  if (param_1 < uVar2) {
    (this->_Mypair)._Myval2._Mylast = puVar1 + param_1;
    return;
  }
  if (uVar2 < param_1) {
    if ((ulonglong)((longlong)(this->_Mypair)._Myval2._Myend - (longlong)puVar1 >> 2) < param_1) {
      _Resize_reallocate<std::_Value_init_tag>(this,param_1,param_2);
      return;
    }
    memset(_Dst,0,(param_1 - uVar2) * 4);
    (this->_Mypair)._Myval2._Mylast = _Dst + (param_1 - uVar2);
  }
  return;
}

// _Seek_wrapped<int*___ptr64,int*___ptr64> @ 14fb88320

/* void __cdecl std::_Seek_wrapped<int * __ptr64,int * __ptr64>(int * __ptr64 & __ptr64,int *
   __ptr64 && __ptr64) */

void __cdecl std::_Seek_wrapped<int*___ptr64,int*___ptr64>(int **param_1,int **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Seek_wrapped<int_const*___ptr64,int_const*___ptr64&___ptr64> @ 14fb88330

/* void __cdecl std::_Seek_wrapped<int const * __ptr64,int const * __ptr64 & __ptr64>(int const *
   __ptr64 & __ptr64,int const * __ptr64 & __ptr64) */

void __cdecl
std::_Seek_wrapped<int_const*___ptr64,int_const*___ptr64&___ptr64>(int **param_1,int **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Seek_wrapped<google::protobuf::internal::EnumEntry_const*___ptr64,google::protobuf::internal::EnumEntry_const*___ptr64&___ptr64> @ 14fb88340

/* void __cdecl std::_Seek_wrapped<struct google::protobuf::internal::EnumEntry const *
   __ptr64,struct google::protobuf::internal::EnumEntry const * __ptr64 & __ptr64>(struct
   google::protobuf::internal::EnumEntry const * __ptr64 & __ptr64,struct
   google::protobuf::internal::EnumEntry const * __ptr64 & __ptr64) */

void __cdecl
std::
_Seek_wrapped<google::protobuf::internal::EnumEntry_const*___ptr64,google::protobuf::internal::EnumEntry_const*___ptr64&___ptr64>
          (EnumEntry **param_1,EnumEntry **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Unfancy<unsigned_int> @ 14fb88350

/* unsigned int * __ptr64 __cdecl std::_Unfancy<unsigned int>(unsigned int * __ptr64) */

uint * __cdecl std::_Unfancy<unsigned_int>(uint *param_1)

{
  return param_1;
}

// _Uninitialized_move<unsigned_int*___ptr64,std::allocator<unsigned_int>_> @ 14fb88360

/* unsigned int * __ptr64 __cdecl std::_Uninitialized_move<unsigned int * __ptr64,class
   std::allocator<unsigned int> >(unsigned int * __ptr64 const,unsigned int * __ptr64 const,unsigned
   int * __ptr64,class std::allocator<unsigned int> & __ptr64) */

uint * __cdecl
std::_Uninitialized_move<unsigned_int*___ptr64,std::allocator<unsigned_int>_>
          (uint *param_1,uint *param_2,uint *param_3,allocator<unsigned_int> *param_4)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return param_3 + ((longlong)param_2 - (longlong)param_1 >> 2);
}

// _Uninitialized_value_construct_n<std::allocator<int>_> @ 14fb883a0

/* int * __ptr64 __cdecl std::_Uninitialized_value_construct_n<class std::allocator<int> >(int *
   __ptr64,unsigned __int64,class std::allocator<int> & __ptr64) */

int * __cdecl
std::_Uninitialized_value_construct_n<std::allocator<int>_>
          (int *param_1,__uint64 param_2,allocator<int> *param_3)

{
  memset(param_1,0,param_2 * 4);
  return param_1 + param_2;
}

// _Uninitialized_value_construct_n<std::allocator<unsigned_int>_> @ 14fb883e0

/* unsigned int * __ptr64 __cdecl std::_Uninitialized_value_construct_n<class
   std::allocator<unsigned int> >(unsigned int * __ptr64,unsigned __int64,class
   std::allocator<unsigned int> & __ptr64) */

uint * __cdecl
std::_Uninitialized_value_construct_n<std::allocator<unsigned_int>_>
          (uint *param_1,__uint64 param_2,allocator<unsigned_int> *param_3)

{
  memset(param_1,0,param_2 * 4);
  return param_1 + param_2;
}

// addressof<short> @ 14fb88420

/* short * __ptr64 __cdecl std::addressof<short>(short & __ptr64) */

short * __cdecl std::addressof<short>(short *param_1)

{
  return param_1;
}

// addressof<std::_Vector_val<std::_Simple_types<unsigned_int>_>_> @ 14fb88430

/* class std::_Vector_val<struct std::_Simple_types<unsigned int> > * __ptr64 __cdecl
   std::addressof<class std::_Vector_val<struct std::_Simple_types<unsigned int> > >(class
   std::_Vector_val<struct std::_Simple_types<unsigned int> > & __ptr64) */

_Vector_val<std::_Simple_types<unsigned_int>_> * __cdecl
std::addressof<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>
          (_Vector_val<struct_std::_Simple_types<unsigned_int>_> *param_1)

{
  return (_Vector_val<std::_Simple_types<unsigned_int>_> *)param_1;
}

// addressof<std::vector<int,std::allocator<int>_>_> @ 14fb88440

/* class std::vector<int,class std::allocator<int> > * __ptr64 __cdecl std::addressof<class
   std::vector<int,class std::allocator<int> > >(class std::vector<int,class std::allocator<int> > &
   __ptr64) */

vector<int,std::allocator<int>_> * __cdecl
std::addressof<std::vector<int,std::allocator<int>_>_>
          (vector<int,class_std::allocator<int>_> *param_1)

{
  return (vector<int,std::allocator<int>_> *)param_1;
}

// advance<int_const*___ptr64,__int64> @ 14fb88450

/* void __cdecl std::advance<int const * __ptr64,__int64>(int const * __ptr64 & __ptr64,__int64) */

void __cdecl std::advance<int_const*___ptr64,__int64>(int **param_1,__int64 param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}

// advance<google::protobuf::internal::EnumEntry_const*___ptr64,__int64> @ 14fb88470

/* void __cdecl std::advance<struct google::protobuf::internal::EnumEntry const *
   __ptr64,__int64>(struct google::protobuf::internal::EnumEntry const * __ptr64 & __ptr64,__int64)
    */

void __cdecl
std::advance<google::protobuf::internal::EnumEntry_const*___ptr64,__int64>
          (EnumEntry **param_1,__int64 param_2)

{
  *param_1 = *param_1 + param_2 * 0x18;
  return;
}

// construct<int> @ 14fb88490

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<int>
   >::construct<int>(class std::allocator<int> & __ptr64,int * __ptr64 const) */

void __cdecl
std::_Default_allocator_traits<std::allocator<int>_>::construct<int>
          (allocator<int> *param_1,int *param_2)

{
  *param_2 = 0;
  return;
}

// construct<unsigned_int> @ 14fb884a0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<unsigned int>
   >::construct<unsigned int>(class std::allocator<unsigned int> & __ptr64,unsigned int * __ptr64
   const) */

void __cdecl
std::_Default_allocator_traits<std::allocator<unsigned_int>_>::construct<unsigned_int>
          (allocator<unsigned_int> *param_1,uint *param_2)

{
  *param_2 = 0;
  return;
}

// construct<unsigned_int,unsigned_int> @ 14fb884b0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<unsigned int>
   >::construct<unsigned int,unsigned int>(class std::allocator<unsigned int> & __ptr64,unsigned int
   * __ptr64 const,unsigned int && __ptr64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<unsigned_int>_>::construct<unsigned_int,unsigned_int>
          (allocator<unsigned_int> *param_1,uint *param_2,uint *param_3)

{
  *param_2 = *param_3;
  return;
}

// construct_at<short,int&___ptr64,0> @ 14fb884c0

/* short * __ptr64 __cdecl std::construct_at<short,int & __ptr64,0>(short * __ptr64 const,int &
   __ptr64) */

short * __cdecl std::construct_at<short,int&___ptr64,0>(short *param_1,int *param_2)

{
  *param_1 = (short)*param_2;
  return param_1;
}

// construct_at<int,0> @ 14fb884d0

/* int * __ptr64 __cdecl std::construct_at<int,0>(int * __ptr64 const) */

int * __cdecl std::construct_at<int,0>(int *param_1)

{
  *param_1 = 0;
  return param_1;
}

// construct_at<unsigned_int,0> @ 14fb884e0

/* unsigned int * __ptr64 __cdecl std::construct_at<unsigned int,0>(unsigned int * __ptr64 const) */

uint * __cdecl std::construct_at<unsigned_int,0>(uint *param_1)

{
  *param_1 = 0;
  return param_1;
}

// construct_at<unsigned_int,unsigned_int,0> @ 14fb884f0

/* unsigned int * __ptr64 __cdecl std::construct_at<unsigned int,unsigned int,0>(unsigned int *
   __ptr64 const,unsigned int && __ptr64) */

uint * __cdecl std::construct_at<unsigned_int,unsigned_int,0>(uint *param_1,uint *param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// copy<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>,unsigned_int*___ptr64> @ 14fb88500

/* unsigned int * __ptr64 __cdecl std::copy<class std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<unsigned int> > >,unsigned int * __ptr64>(class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<unsigned int> > >,class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<unsigned int> > >,unsigned
   int * __ptr64) */

uint * __cdecl
std::
copy<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>,unsigned_int*___ptr64>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_> param_1,
          _Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_> param_2,
          uint *param_3)

{
  memmove(param_3,(void *)param_1,(longlong)param_2 - (longlong)param_1);
  return (uint *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// distance<google::protobuf::internal::EnumEntry_const*___ptr64> @ 14fb88540

/* __int64 __cdecl std::distance<struct google::protobuf::internal::EnumEntry const *
   __ptr64>(struct google::protobuf::internal::EnumEntry const * __ptr64,struct
   google::protobuf::internal::EnumEntry const * __ptr64) */

__int64 __cdecl
std::distance<google::protobuf::internal::EnumEntry_const*___ptr64>
          (EnumEntry *param_1,EnumEntry *param_2)

{
  return ((longlong)param_2 - (longlong)param_1) / 0x18;
}

// forward<int_const*___ptr64&___ptr64> @ 14fb88570

/* int const * __ptr64 & __ptr64 __cdecl std::forward<int const * __ptr64 & __ptr64>(int const *
   __ptr64 & __ptr64) */

int ** __cdecl std::forward<int_const*___ptr64&___ptr64>(int **param_1)

{
  return param_1;
}

// forward<google::protobuf::internal::EnumEntry_const*___ptr64&___ptr64> @ 14fb88580

/* struct google::protobuf::internal::EnumEntry const * __ptr64 & __ptr64 __cdecl
   std::forward<struct google::protobuf::internal::EnumEntry const * __ptr64 & __ptr64>(struct
   google::protobuf::internal::EnumEntry const * __ptr64 & __ptr64) */

EnumEntry ** __cdecl
std::forward<google::protobuf::internal::EnumEntry_const*___ptr64&___ptr64>(EnumEntry **param_1)

{
  return param_1;
}

// forward<std::allocator<unsigned_int>_const&___ptr64> @ 14fb88590

/* class std::allocator<unsigned int> const & __ptr64 __cdecl std::forward<class
   std::allocator<unsigned int> const & __ptr64>(class std::allocator<unsigned int> const & __ptr64)
    */

allocator<unsigned_int> * __cdecl
std::forward<std::allocator<unsigned_int>_const&___ptr64>(allocator<unsigned_int> *param_1)

{
  return param_1;
}

// FUN_14fb885a0 @ 14fb885a0

longlong FUN_14fb885a0(longlong param_1,longlong param_2,int *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = param_2 - param_1 >> 2;
  if (0 < (longlong)uVar3) {
    do {
      uVar4 = uVar3 >> 1;
      iVar2 = *(int *)(param_1 + uVar4 * 4);
      if (iVar2 == -1) {
        iVar2 = (int)param_4[1];
      }
      else {
        iVar2 = *(int *)(*param_4 + 0x10 + (longlong)iVar2 * 0x18);
      }
      if ((longlong)*param_3 == -1) {
        iVar1 = (int)param_4[1];
      }
      else {
        iVar1 = *(int *)((longlong)*param_3 * 0x18 + 0x10 + *param_4);
      }
      if (iVar2 < iVar1) {
        param_1 = param_1 + uVar4 * 4 + 4;
        uVar4 = uVar3 + (-1 - uVar4);
      }
      uVar3 = uVar4;
    } while (0 < (longlong)uVar4);
  }
  return param_1;
}

// lower_bound<google::protobuf::internal::EnumEntry_const*___ptr64,google::protobuf::internal::EnumEntry,bool_(__cdecl*)(google::protobuf::internal::EnumEntry_const&___ptr64,google::protobuf::internal::EnumEntry_const&___ptr64)> @ 14fb88640

/* struct google::protobuf::internal::EnumEntry const * __ptr64 __cdecl std::lower_bound<struct
   google::protobuf::internal::EnumEntry const * __ptr64,struct
   google::protobuf::internal::EnumEntry,bool (__cdecl*)(struct
   google::protobuf::internal::EnumEntry const & __ptr64,struct
   google::protobuf::internal::EnumEntry const & __ptr64)>(struct
   google::protobuf::internal::EnumEntry const * __ptr64,struct
   google::protobuf::internal::EnumEntry const * __ptr64 const,struct
   google::protobuf::internal::EnumEntry const & __ptr64,bool (__cdecl*)(struct
   google::protobuf::internal::EnumEntry const & __ptr64,struct
   google::protobuf::internal::EnumEntry const & __ptr64)) */

EnumEntry * __cdecl
std::
lower_bound<google::protobuf::internal::EnumEntry_const*___ptr64,google::protobuf::internal::EnumEntry,bool_(__cdecl*)(google::protobuf::internal::EnumEntry_const&___ptr64,google::protobuf::internal::EnumEntry_const&___ptr64)>
          (EnumEntry *param_1,EnumEntry *param_2,EnumEntry *param_3,
          _func_bool_EnumEntry_ptr_EnumEntry_ptr *param_4)

{
  ulonglong uVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = ((longlong)param_2 - (longlong)param_1) / 6 +
          ((longlong)param_2 - (longlong)param_1 >> 0x3f);
  uVar4 = (lVar3 >> 2) - (lVar3 >> 0x3f);
  while (uVar1 = uVar4, 0 < (longlong)uVar1) {
    uVar4 = uVar1 >> 1;
    bVar2 = (*param_4)(param_1 + uVar4 * 0x18,param_3);
    if (bVar2) {
      param_1 = param_1 + uVar4 * 0x18 + 0x18;
      uVar4 = uVar1 + (-1 - uVar4);
    }
  }
  return param_1;
}

// merge<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_>,std::_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<int>_>_>,int*___ptr64> @ 14fb886f0

/* int * __ptr64 __cdecl std::merge<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<int> > >,class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<int> > >,int * __ptr64>(class std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<int> > >,class std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<int> > >,class std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<int> > >,class std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<int> > >,int * __ptr64) */

int * __cdecl
std::
merge<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_>,std::_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<int>_>_>,int*___ptr64>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_> param_1,
          _Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_> param_2,
          _Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_> param_3,
          _Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_> param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *_Dst;
  bool bVar4;
  
  if ((param_1 != param_2) && (piVar3 = param_5, param_3 != param_4)) {
    do {
      iVar1 = *(int *)param_3;
      param_5 = piVar3 + 1;
      iVar2 = *(int *)param_1;
      if (iVar1 < iVar2) {
        param_3 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_>)
                  ((longlong)param_3 + 4);
        *piVar3 = iVar1;
        bVar4 = param_3 == param_4;
      }
      else {
        param_1 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_>)
                  ((longlong)param_1 + 4);
        *piVar3 = iVar2;
        bVar4 = param_1 == param_2;
      }
      piVar3 = param_5;
    } while (!bVar4);
  }
  memmove(param_5,(void *)param_1,(longlong)param_2 - (longlong)param_1);
  _Dst = (void *)((longlong)param_5 + ((longlong)param_2 - (longlong)param_1));
  memmove(_Dst,(void *)param_3,(longlong)param_4 - (longlong)param_3);
  return (int *)(((longlong)param_4 - (longlong)param_3) + (longlong)_Dst);
}

// merge<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_>,std::_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<int>_>_>,int*___ptr64,std::less<void>_> @ 14fb88790

/* int * __ptr64 __cdecl std::merge<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<int> > >,class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<int> > >,int * __ptr64,struct std::less<void> >(class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<int> > >,class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<int> > >,class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<int> > >,class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<int> > >,int *
   __ptr64,struct std::less<void>) */

int * __cdecl
std::
merge<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_>,std::_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<int>_>_>,int*___ptr64,std::less<void>_>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_> param_1,
          _Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_> param_2,
          _Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_> param_3,
          _Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_> param_4,int *param_5,
          less<void> param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *_Dst;
  bool bVar4;
  
  if ((param_1 != param_2) && (piVar3 = param_5, param_3 != param_4)) {
    do {
      iVar1 = *(int *)param_1;
      param_5 = piVar3 + 1;
      iVar2 = *(int *)param_3;
      if (iVar2 < iVar1) {
        param_3 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_>)
                  ((longlong)param_3 + 4);
        *piVar3 = iVar2;
        bVar4 = param_3 == param_4;
      }
      else {
        param_1 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_>)
                  ((longlong)param_1 + 4);
        *piVar3 = iVar1;
        bVar4 = param_1 == param_2;
      }
      piVar3 = param_5;
    } while (!bVar4);
  }
  memmove(param_5,(void *)param_1,(longlong)param_2 - (longlong)param_1);
  _Dst = (void *)((longlong)param_5 + ((longlong)param_2 - (longlong)param_1));
  memmove(_Dst,(void *)param_3,(longlong)param_4 - (longlong)param_3);
  return (int *)(((longlong)param_4 - (longlong)param_3) + (longlong)_Dst);
}

// next<int_const*___ptr64> @ 14fb88830

/* int const * __ptr64 __cdecl std::next<int const * __ptr64>(int const * __ptr64,__int64) */

int * __cdecl std::next<int_const*___ptr64>(int *param_1,__int64 param_2)

{
  return param_1 + param_2;
}

// next<google::protobuf::internal::EnumEntry_const*___ptr64> @ 14fb88840

/* struct google::protobuf::internal::EnumEntry const * __ptr64 __cdecl std::next<struct
   google::protobuf::internal::EnumEntry const * __ptr64>(struct
   google::protobuf::internal::EnumEntry const * __ptr64,__int64) */

EnumEntry * __cdecl
std::next<google::protobuf::internal::EnumEntry_const*___ptr64>(EnumEntry *param_1,__int64 param_2)

{
  return param_1 + param_2 * 0x18;
}

// value_or<int> @ 14fb88850

/* public: short __cdecl std::optional<short>::value_or<int>(int && __ptr64)const __ptr64&  */

short __thiscall std::optional<short>::value_or<int>(optional<short> *this,int *param_1)

{
  if (this[2] != (optional<short>)0x0) {
    return *(short *)this;
  }
  return (short)*param_1;
}

// Span<unsigned_int> @ 14fb888d0

/* public: __cdecl absl::lts_20240722::Span<unsigned int>::Span<unsigned int>(unsigned int *
   __ptr64,unsigned __int64) __ptr64 */

Span<unsigned_int> * __thiscall
absl::lts_20240722::Span<unsigned_int>::Span<unsigned_int>
          (Span<unsigned_int> *this,uint *param_1,__uint64 param_2)

{
  *(uint **)this = param_1;
  *(__uint64 *)(this + 8) = param_2;
  return this;
}

// _Optional_construct_base<short> @ 14fb888f0

/* public: __cdecl std::_Optional_construct_base<short>::_Optional_construct_base<short>(void)
   __ptr64 */

_Optional_construct_base<short> * __thiscall
std::_Optional_construct_base<short>::_Optional_construct_base<short>
          (_Optional_construct_base<short> *this)

{
  this[2] = (_Optional_construct_base<short>)0x0;
  return this;
}

// _Optional_destruct_base<short,1> @ 14fb88900

/* public: __cdecl std::_Optional_destruct_base<short,1>::_Optional_destruct_base<short,1>(void)
   __ptr64 */

_Optional_destruct_base<short,1> * __thiscall
std::_Optional_destruct_base<short,1>::_Optional_destruct_base<short,1>
          (_Optional_destruct_base<short,1> *this)

{
  this[2] = (_Optional_destruct_base<short,1>)0x0;
  return this;
}

// _Uninitialized_backout_al<std::allocator<unsigned_int>_> @ 14fb88910

/* public: __cdecl std::_Uninitialized_backout_al<class std::allocator<unsigned int>
   >::_Uninitialized_backout_al<class std::allocator<unsigned int> >(unsigned int * __ptr64,class
   std::allocator<unsigned int> & __ptr64) __ptr64 */

_Uninitialized_backout_al<std::allocator<unsigned_int>_> * __thiscall
std::_Uninitialized_backout_al<std::allocator<unsigned_int>_>::
_Uninitialized_backout_al<std::allocator<unsigned_int>_>
          (_Uninitialized_backout_al<std::allocator<unsigned_int>_> *this,uint *param_1,
          allocator<unsigned_int> *param_2)

{
  this->_First = param_1;
  this->_Last = param_1;
  this->_Al = param_2;
  return this;
}

// _Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_> @ 14fb88930

/* public: __cdecl std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<unsigned int> > >::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<unsigned int> > >(unsigned int * __ptr64,struct std::_Container_base0 const *
   __ptr64) __ptr64 */

_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_> * __thiscall
std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>
          (_Vector_const_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_> *this,
          uint *param_1,_Container_base0 *param_2)

{
  this->_Ptr = param_1;
  return this;
}

// _Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_> @ 14fb88940

/* public: __cdecl std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<unsigned
   int> > >::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<unsigned int> >
   >(unsigned int * __ptr64,struct std::_Container_base0 const * __ptr64) __ptr64 */

_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_> * __thiscall
std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>::
_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_> *this,
          uint *param_1,_Container_base0 *param_2)

{
  *this = (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>)param_1;
  return this;
}

// _Vector_val<std::_Simple_types<unsigned_int>_> @ 14fb88950

/* public: __cdecl std::_Vector_val<struct std::_Simple_types<unsigned int> >::_Vector_val<struct
   std::_Simple_types<unsigned int> >(void) __ptr64 */

_Vector_val<std::_Simple_types<unsigned_int>_> * __thiscall
std::_Vector_val<std::_Simple_types<unsigned_int>_>::_Vector_val<std::_Simple_types<unsigned_int>_>
          (_Vector_val<std::_Simple_types<unsigned_int>_> *this)

{
  this->_Myfirst = (uint *)0x0;
  this->_Mylast = (uint *)0x0;
  this->_Myend = (uint *)0x0;
  return this;
}

// allocator<unsigned_int> @ 14fb88970

/* public: __cdecl std::allocator<unsigned int>::allocator<unsigned int>(void) __ptr64 */

allocator<unsigned_int> * __thiscall
std::allocator<unsigned_int>::allocator<unsigned_int>(allocator<unsigned_int> *this)

{
  return this;
}

// optional<short> @ 14fb88980

/* public: __cdecl std::optional<short>::optional<short>(void) __ptr64 */

optional<short> * __thiscall std::optional<short>::optional<short>(optional<short> *this)

{
  this[2] = (optional<short>)0x0;
  return this;
}

// vector<unsigned_int,std::allocator<unsigned_int>_> @ 14fb88990

/* public: __cdecl std::vector<unsigned int,class std::allocator<unsigned int> >::vector<unsigned
   int,class std::allocator<unsigned int> >(void) __ptr64 */

vector<unsigned_int,std::allocator<unsigned_int>_> * __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>_>::
vector<unsigned_int,std::allocator<unsigned_int>_>
          (vector<unsigned_int,std::allocator<unsigned_int>_> *this)

{
  (this->_Mypair)._Myval2._Myfirst = (uint *)0x0;
  (this->_Mypair)._Myval2._Mylast = (uint *)0x0;
  (this->_Mypair)._Myval2._Myend = (uint *)0x0;
  return this;
}

// ~_Tidy_guard<std::vector<unsigned_int,std::allocator<unsigned_int>_>_> @ 14fb889b0

/* public: __cdecl std::_Tidy_guard<class std::vector<unsigned int,class std::allocator<unsigned
   int> > >::~_Tidy_guard<class std::vector<unsigned int,class std::allocator<unsigned int> >
   >(void) __ptr64 */

void __thiscall
std::_Tidy_guard<std::vector<unsigned_int,std::allocator<unsigned_int>_>_>::
~_Tidy_guard<std::vector<unsigned_int,std::allocator<unsigned_int>_>_>
          (_Tidy_guard<std::vector<unsigned_int,std::allocator<unsigned_int>_>_> *this)

{
  uint *puVar1;
  vector<unsigned_int,std::allocator<unsigned_int>_> *pvVar2;
  uint *puVar3;
  ulong64 uVar4;
  
  pvVar2 = this->_Target;
  if (pvVar2 == (vector<unsigned_int,std::allocator<unsigned_int>_> *)0x0) {
    return;
  }
  puVar1 = (pvVar2->_Mypair)._Myval2._Myfirst;
  if (puVar1 != (uint *)0x0) {
    uVar4 = (longlong)(pvVar2->_Mypair)._Myval2._Myend - (longlong)puVar1 & 0xfffffffffffffffc;
    puVar3 = puVar1;
    if (0xfff < uVar4) {
      puVar3 = *(uint **)(puVar1 + -2);
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)puVar1 + (-8 - (longlong)puVar3))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(puVar3,uVar4);
    (pvVar2->_Mypair)._Myval2._Myfirst = (uint *)0x0;
    (pvVar2->_Mypair)._Myval2._Mylast = (uint *)0x0;
    (pvVar2->_Mypair)._Myval2._Myend = (uint *)0x0;
  }
  return;
}

// ~_Uninitialized_backout_al<std::allocator<unsigned_int>_> @ 14fb889d0

/* public: __cdecl std::_Uninitialized_backout_al<class std::allocator<unsigned int>
   >::~_Uninitialized_backout_al<class std::allocator<unsigned int> >(void) __ptr64 */

void __thiscall
std::_Uninitialized_backout_al<std::allocator<unsigned_int>_>::
~_Uninitialized_backout_al<std::allocator<unsigned_int>_>
          (_Uninitialized_backout_al<std::allocator<unsigned_int>_> *this)

{
  return;
}

// operator[] @ 14fb889e0

/* public: unsigned int & __ptr64 __cdecl absl::lts_20240722::Span<unsigned
   int>::operator[](unsigned __int64)const __ptr64 */

uint * __thiscall
absl::lts_20240722::Span<unsigned_int>::operator[](Span<unsigned_int> *this,__uint64 param_1)

{
  return (uint *)(*(longlong *)this + param_1 * 4);
}

// operator[] @ 14fb889f0

/* public: unsigned int & __ptr64 __cdecl std::vector<unsigned int,class std::allocator<unsigned
   int> >::operator[](unsigned __int64) __ptr64 */

uint * __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>_>::operator[]
          (vector<unsigned_int,std::allocator<unsigned_int>_> *this,__uint64 param_1)

{
  return (this->_Mypair)._Myval2._Myfirst + param_1;
}

// operator* @ 14fb88a00

/* public: short & __ptr64 __cdecl std::_Optional_construct_base<short>::operator*(void) __ptr64&
    */

short * __thiscall
std::_Optional_construct_base<short>::operator*(_Optional_construct_base<short> *this)

{
  return (short *)this;
}

// FUN_14fb88ab0 @ 14fb88ab0

undefined4 FUN_14fb88ab0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong _Size;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  _Size = uVar2;
  if (uVar1 < uVar2) {
    _Size = uVar1;
  }
  iVar3 = memcmp((void *)*param_1,(void *)*param_2,_Size);
  if (iVar3 == 0) {
    if (uVar1 <= uVar2) {
      if (uVar2 != uVar1) {
        return 0;
      }
      return 0;
    }
  }
  else if (-1 < iVar3) {
    return 0;
  }
  return 1;
}

// GenerateEnumData @ 14fb88b20

/* class std::vector<unsigned int,class std::allocator<unsigned int> > __cdecl
   google::protobuf::internal::GenerateEnumData(class absl::lts_20240722::Span<int const >) */

vector<unsigned_int,std::allocator<unsigned_int>_> * __cdecl
google::protobuf::internal::GenerateEnumData
          (vector<unsigned_int,std::allocator<unsigned_int>_> *__return_storage_ptr__,
          undefined8 *param_2)

{
  uint *_Dst;
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  ushort uVar5;
  uint *puVar6;
  size_t _Size;
  void *pvVar7;
  uint *puVar8;
  ulong64 uVar9;
  short sVar10;
  uint uVar11;
  __uint64 _Var12;
  uint *_Src;
  ulonglong uVar13;
  uint *_Src_00;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint *puVar18;
  char cVar19;
  uint uVar20;
  uint *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  bool bVar24;
  ushort local_res10;
  longlong local_res18;
  ushort local_res20;
  uint local_128;
  uint *local_120;
  uint *local_110;
  uint *local_108;
  vector<int,std::allocator<int>_> local_100;
  undefined4 local_e8;
  uint *local_e0;
  vector<unsigned_int,std::allocator<unsigned_int>_> local_d8;
  vector<int,std::allocator<int>_> local_c0;
  vector<int,std::allocator<int>_> local_a8;
  uint *local_90;
  uint *local_88;
  uint *local_80;
  longlong local_78;
  uint *local_70;
  longlong local_68;
  longlong local_60;
  uint *local_58;
  
  puVar18 = (uint *)0x0;
  local_e8 = 0;
  local_c0._Mypair._Myval2._Myfirst = (int *)0x0;
  local_c0._Mypair._Myval2._Mylast = (int *)0x0;
  local_110 = (uint *)0x0;
  local_c0._Mypair._Myval2._Myend = (int *)0x0;
  puVar14 = (uint *)0x0;
  local_100._Mypair._Myval2._Myfirst = (int *)0x0;
  local_100._Mypair._Myval2._Mylast = (int *)0x0;
  local_108 = (uint *)0x0;
  local_100._Mypair._Myval2._Myend = (int *)0x0;
  local_d8._Mypair._Myval2._Myfirst = (uint *)0x0;
  local_d8._Mypair._Myval2._Mylast = (uint *)0x0;
  local_e0 = (uint *)0x0;
  local_d8._Mypair._Myval2._Myend = (uint *)0x0;
  cVar19 = '\0';
  local_res10 = local_res10 & 0xff00;
  local_128 = 0;
  local_88 = (uint *)*param_2;
  local_58 = local_88 + param_2[1];
  puVar15 = (uint *)0x0;
  if (local_88 == local_58) {
    puVar8 = (uint *)0x0;
    puVar16 = (uint *)0x0;
    local_120 = (uint *)0x0;
    local_res20 = local_res10;
  }
  else {
    puVar8 = (uint *)0x0;
    puVar16 = (uint *)0x0;
    puVar14 = (uint *)0x0;
    local_120 = (uint *)0x0;
    uVar11 = (uint)local_res10;
    local_res20 = local_res10;
    puVar21 = puVar18;
    do {
      uVar1 = *local_88;
      local_res18 = CONCAT44(local_res18._4_4_,uVar1);
      if (cVar19 == '\0') {
        if ((int)(short)(ushort)uVar1 == uVar1) {
          uVar11 = uVar1 & 0xffff;
          cVar19 = '\x01';
          local_res10 = 1;
          puVar21 = (uint *)&DAT_00000001;
          local_128 = 1;
          local_res20 = (ushort)uVar1;
        }
        else {
          if (puVar8 == puVar18) {
            std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int_const_&>
                      (&local_c0,(int *)puVar8,(int *)&local_res18);
            local_110 = (uint *)local_c0._Mypair._Myval2._Myend;
            puVar8 = (uint *)local_c0._Mypair._Myval2._Mylast;
            puVar18 = (uint *)local_c0._Mypair._Myval2._Myend;
            goto LAB_14fb88e06;
          }
          *puVar8 = uVar1;
          puVar8 = puVar8 + 1;
          local_c0._Mypair._Myval2._Mylast = (int *)puVar8;
        }
      }
      else {
        sVar10 = (short)uVar11;
        uVar20 = (uint)puVar21;
        if ((uVar1 == (int)sVar10 + uVar20) && (uVar20 < 0xffff)) {
          local_128 = uVar20 + 1;
          puVar21 = (uint *)(ulonglong)local_128;
        }
        else {
          uVar23 = ((longlong)(int)uVar1 - (longlong)puVar21) - (longlong)sVar10;
          uVar17 = (longlong)local_120 - (longlong)puVar15 >> 2;
          uVar11 = (uint)uVar23;
          uVar23 = uVar23 & 0xffffffff;
          local_90 = puVar21;
          if (uVar23 < uVar17 << 5) {
            puVar15[uVar23 >> 5] = puVar15[uVar23 >> 5] | 1 << (uVar11 & 0x1f);
          }
          else {
            uVar13 = uVar23 + 0x20 >> 5;
            if ((((longlong)puVar16 - (longlong)puVar14 >> 2) + 1 + uVar17 < uVar13) ||
               (0xffff < uVar13 << 5)) {
              if (puVar16 == local_108) {
                std::vector<int,std::allocator<int>_>::_Emplace_reallocate<int_const_&>
                          (&local_100,(int *)puVar16,(int *)&local_res18);
                local_108 = (uint *)local_100._Mypair._Myval2._Myend;
                puVar16 = (uint *)local_100._Mypair._Myval2._Mylast;
                puVar18 = local_110;
                puVar14 = (uint *)local_100._Mypair._Myval2._Myfirst;
              }
              else {
                *puVar16 = uVar1;
                local_100._Mypair._Myval2._Mylast = (int *)(puVar16 + 1);
                puVar16 = (uint *)local_100._Mypair._Myval2._Mylast;
              }
            }
            else {
              puVar18 = puVar14;
              if (uVar13 < uVar17) {
                local_d8._Mypair._Myval2._Mylast = puVar15 + uVar13;
                local_120 = local_d8._Mypair._Myval2._Mylast;
              }
              else if (uVar17 < uVar13) {
                if ((ulonglong)((longlong)local_e0 - (longlong)puVar15 >> 2) < uVar13) {
                  std::vector<unsigned_int,std::allocator<unsigned_int>_>::
                  _Resize_reallocate<std::_Value_init_tag>
                            (&local_d8,uVar13,(_Value_init_tag *)&local_res18);
                  local_e0 = local_d8._Mypair._Myval2._Myend;
                  local_120 = local_d8._Mypair._Myval2._Mylast;
                  puVar15 = local_d8._Mypair._Myval2._Myfirst;
                }
                else {
                  memset(local_120,0,(uVar13 - uVar17) * 4);
                  local_d8._Mypair._Myval2._Mylast = local_120 + (uVar13 - uVar17);
                  local_120 = local_d8._Mypair._Myval2._Mylast;
                }
              }
              for (; puVar18 != puVar16; puVar18 = puVar18 + 1) {
                uVar17 = ((longlong)(int)*puVar18 - (longlong)local_90) - (longlong)sVar10;
                puVar15[(uVar17 & 0xffffffff) >> 5] =
                     puVar15[(uVar17 & 0xffffffff) >> 5] | 1 << ((uint)uVar17 & 0x1f);
              }
              local_100._Mypair._Myval2._Mylast = (int *)puVar16;
              if (puVar14 != puVar16) {
                local_100._Mypair._Myval2._Mylast = (int *)puVar14;
              }
              puVar15[uVar23 >> 5] = puVar15[uVar23 >> 5] | 1 << (uVar11 & 0x1f);
              puVar16 = (uint *)local_100._Mypair._Myval2._Mylast;
              puVar18 = local_110;
            }
          }
LAB_14fb88e06:
          puVar21 = (uint *)(ulonglong)local_128;
          uVar11 = (uint)local_res20;
          cVar19 = (char)local_res10;
        }
      }
      local_88 = local_88 + 1;
    } while (local_88 != local_58);
  }
  piVar4 = local_c0._Mypair._Myval2._Mylast;
  piVar3 = local_c0._Mypair._Myval2._Myfirst;
  piVar2 = local_100._Mypair._Myval2._Mylast;
  puVar18 = (uint *)local_100._Mypair._Myval2._Myfirst;
  local_a8._Mypair._Myval2._Myfirst = (int *)0x0;
  local_a8._Mypair._Myval2._Mylast = (int *)0x0;
  local_a8._Mypair._Myval2._Myend = (int *)0x0;
  if (puVar14 == puVar16) {
    local_a8._Mypair._Myval2._Myend = local_c0._Mypair._Myval2._Myend;
    local_c0._Mypair._Myval2._Myfirst = (int *)0x0;
    local_c0._Mypair._Myval2._Mylast = (int *)0x0;
    local_110 = (uint *)0x0;
    local_c0._Mypair._Myval2._Myend = (int *)0x0;
    puVar18 = (uint *)piVar3;
    puVar21 = (uint *)0x0;
    local_a8._Mypair._Myval2._Myfirst = piVar3;
    local_a8._Mypair._Myval2._Mylast = piVar4;
  }
  else {
    puVar21 = (uint *)piVar3;
    if ((uint *)local_c0._Mypair._Myval2._Myfirst == puVar8) {
      local_a8._Mypair._Myval2._Myend = local_100._Mypair._Myval2._Myend;
      puVar14 = (uint *)0x0;
      local_100._Mypair._Myval2._Myfirst = (int *)0x0;
      local_100._Mypair._Myval2._Mylast = (int *)0x0;
      local_108 = (uint *)0x0;
      local_100._Mypair._Myval2._Myend = (int *)0x0;
      local_a8._Mypair._Myval2._Myfirst = (int *)puVar18;
      local_a8._Mypair._Myval2._Mylast = piVar2;
    }
    else {
      _Var12 = ((longlong)puVar16 - (longlong)puVar14 >> 2) +
               ((longlong)puVar8 - (longlong)local_c0._Mypair._Myval2._Myfirst >> 2);
      puVar6 = (uint *)local_a8._Mypair._Myval2._Myfirst;
      _Src = (uint *)piVar3;
      _Src_00 = puVar14;
      if (_Var12 != 0) {
        std::vector<int,std::allocator<int>_>::_Resize_reallocate<std::_Value_init_tag>
                  (&local_a8,_Var12,(_Value_init_tag *)&local_res18);
        puVar6 = (uint *)local_a8._Mypair._Myval2._Myfirst;
      }
      do {
        puVar18 = (uint *)local_a8._Mypair._Myval2._Myfirst;
        _Dst = puVar6 + 1;
        if ((int)*_Src_00 < (int)*_Src) {
          *puVar6 = *_Src_00;
          _Src_00 = _Src_00 + 1;
          bVar24 = _Src_00 == puVar16;
        }
        else {
          *puVar6 = *_Src;
          _Src = _Src + 1;
          bVar24 = _Src == puVar8;
        }
        puVar6 = _Dst;
      } while (!bVar24);
      memmove(_Dst,_Src,(longlong)puVar8 - (longlong)_Src);
      memmove((void *)(((longlong)puVar8 - (longlong)_Src) + (longlong)_Dst),_Src_00,
              (longlong)puVar16 - (longlong)_Src_00);
    }
  }
  puVar8 = (uint *)0x0;
  lVar22 = (longlong)local_a8._Mypair._Myval2._Mylast - (longlong)puVar18 >> 2;
  _Size = (longlong)local_120 - (longlong)puVar15;
  local_res18 = (longlong)_Size >> 2;
  (__return_storage_ptr__->_Mypair)._Myval2._Myfirst = (uint *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mylast = (uint *)0x0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myend = (uint *)0x0;
  uVar17 = lVar22 + 2 + local_res18;
  if (uVar17 != 0) {
    if (0x3fffffffffffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
      std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Xlength();
    }
    uVar23 = uVar17 * 4;
    if (uVar23 < 0x1000) {
      if (uVar23 != 0) {
        puVar8 = ::operator_new(uVar23);
      }
    }
    else {
      if (uVar23 + 0x27 <= uVar23) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_bad_array_new_length();
      }
      pvVar7 = ::operator_new(uVar23 + 0x27);
      if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      puVar8 = (uint *)((longlong)pvVar7 + 0x27U & 0xffffffffffffffe0);
      *(void **)(puVar8 + -2) = pvVar7;
    }
    (__return_storage_ptr__->_Mypair)._Myval2._Myfirst = puVar8;
    (__return_storage_ptr__->_Mypair)._Myval2._Mylast = puVar8;
    (__return_storage_ptr__->_Mypair)._Myval2._Myend = puVar8 + uVar17;
    memset(puVar8,0,uVar23);
    (__return_storage_ptr__->_Mypair)._Myval2._Mylast = puVar8 + uVar17;
  }
  local_e8 = 2;
  puVar8 = (__return_storage_ptr__->_Mypair)._Myval2._Myfirst;
  uVar5 = local_res20;
  if ((char)local_res10 == '\0') {
    uVar5 = 0;
  }
  *puVar8 = (uint)uVar5 | local_128 << 0x10;
  puVar8[1] = (uint)(lVar22 << 0x10) | (int)local_res18 << 5;
  memmove(puVar8 + 2,puVar15,_Size);
  local_70 = (uint *)(_Size + (longlong)(puVar8 + 2));
  local_60 = 0;
  local_80 = puVar18;
  local_78 = lVar22;
  local_68 = lVar22;
  if (lVar22 != 0) {
    EytzingerLayoutSorter::Sort((EytzingerLayoutSorter *)&local_80,1);
    *local_70 = local_80[local_60];
    local_60 = local_60 + 1;
    EytzingerLayoutSorter::Sort((EytzingerLayoutSorter *)&local_80,2);
  }
  if (puVar18 != (uint *)0x0) {
    uVar17 = ((longlong)local_a8._Mypair._Myval2._Myend - (longlong)puVar18 >> 2) * 4;
    puVar8 = puVar18;
    if (0xfff < uVar17) {
      uVar17 = uVar17 + 0x27;
      puVar8 = *(uint **)(puVar18 + -2);
      if (0x1f < (ulonglong)((longlong)puVar18 + (-8 - (longlong)puVar8))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(puVar8,uVar17);
  }
  if (puVar15 != (uint *)0x0) {
    uVar17 = ((longlong)local_e0 - (longlong)puVar15 >> 2) * 4;
    puVar18 = puVar15;
    if (0xfff < uVar17) {
      uVar17 = uVar17 + 0x27;
      puVar18 = *(uint **)(puVar15 + -2);
      if (0x1f < (ulonglong)((longlong)puVar15 + (-8 - (longlong)puVar18))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(puVar18,uVar17);
  }
  if (puVar14 != (uint *)0x0) {
    uVar17 = ((longlong)local_108 - (longlong)puVar14 >> 2) * 4;
    puVar15 = puVar14;
    if (0xfff < uVar17) {
      uVar17 = uVar17 + 0x27;
      puVar15 = *(uint **)(puVar14 + -2);
      if (0x1f < (ulonglong)((longlong)puVar14 + (-8 - (longlong)puVar15))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(puVar15,uVar17);
  }
  if (puVar21 != (uint *)0x0) {
    uVar9 = (longlong)local_110 - (longlong)puVar21 & 0xfffffffffffffffc;
    puVar15 = puVar21;
    if (0xfff < uVar9) {
      uVar9 = uVar9 + 0x27;
      puVar15 = *(uint **)(puVar21 + -2);
      if (0x1f < (ulonglong)((longlong)puVar21 + (-8 - (longlong)puVar15))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(puVar15,uVar9);
  }
  return __return_storage_ptr__;
}

// InitializeEnumStrings @ 14fb89270

/* bool __cdecl google::protobuf::internal::InitializeEnumStrings(struct
   google::protobuf::internal::EnumEntry const * __ptr64,int const * __ptr64,unsigned __int64,class
   google::protobuf::internal::ExplicitlyConstructed<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,1> * __ptr64) */

bool __cdecl
google::protobuf::internal::InitializeEnumStrings
          (EnumEntry *param_1,int *param_2,__uint64 param_3,
          ExplicitlyConstructed<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,1>
          *param_4)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      iVar1 = param_2[uVar2];
      *(undefined8 *)param_4 = 0;
      *(undefined8 *)(param_4 + 8) = 0;
      *(ulong64 *)(param_4 + 0x10) = 0;
      *(ulong64 *)(param_4 + 0x18) = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_4,
                 *(char **)(param_1 + (longlong)iVar1 * 0x18),
                 *(ulong64 *)(param_1 + (longlong)iVar1 * 0x18 + 8));
      OnShutdownRun(DestroyString,param_4);
      uVar2 = uVar2 + 1;
      param_4 = param_4 + 0x20;
    } while (uVar2 < param_3);
  }
  return true;
}

// LookUpEnumName @ 14fb89310

/* int __cdecl google::protobuf::internal::LookUpEnumName(struct
   google::protobuf::internal::EnumEntry const * __ptr64,int const * __ptr64,unsigned __int64,int)
    */

int __cdecl
google::protobuf::internal::LookUpEnumName
          (EnumEntry *param_1,int *param_2,__uint64 param_3,int param_4)

{
  ulonglong uVar1;
  int *piVar2;
  ulonglong uVar3;
  
  uVar3 = (longlong)(param_3 * 4) >> 2;
  piVar2 = param_2;
  while (uVar1 = uVar3, 0 < (longlong)uVar1) {
    uVar3 = uVar1 >> 1;
    if ((piVar2[uVar3] != -1) &&
       (*(int *)(param_1 + (longlong)piVar2[uVar3] * 0x18 + 0x10) < param_4)) {
      piVar2 = piVar2 + uVar3 + 1;
      uVar3 = uVar1 + (-1 - uVar3);
    }
  }
  if ((piVar2 != param_2 + param_3) &&
     (*(int *)(param_1 + (longlong)*piVar2 * 0x18 + 0x10) == param_4)) {
    return (int)((longlong)piVar2 - (longlong)param_2 >> 2);
  }
  return -1;
}

// LookUpEnumValue @ 14fb893d0

/* bool __cdecl google::protobuf::internal::LookUpEnumValue(struct
   google::protobuf::internal::EnumEntry const * __ptr64,unsigned __int64,class
   std::basic_string_view<char,struct std::char_traits<char> >,int * __ptr64) */

bool __cdecl
google::protobuf::internal::LookUpEnumValue
          (EnumEntry *param_1,__uint64 param_2,
          basic_string_view<char,std::char_traits<char>_> *param_3,int *param_4)

{
  EnumEntry *pEVar1;
  longlong lVar2;
  ulonglong uVar3;
  char *_Buf2;
  ulonglong uVar4;
  bool bVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong _Size;
  
  _Buf2 = param_3->_Mydata;
  uVar4 = param_3->_Mysize;
  lVar2 = param_2 * 0x18;
  lVar8 = lVar2 / 6 + (lVar2 >> 0x3f);
  uVar9 = (lVar8 >> 2) - (lVar8 >> 0x3f);
  pEVar1 = param_1;
  while( true ) {
    uVar6 = uVar9;
    if ((longlong)uVar6 < 1) {
      if (pEVar1 != param_1 + lVar2) {
        if ((*(size_t *)(pEVar1 + 8) == param_3->_Mysize) &&
           (iVar7 = memcmp(*(void **)pEVar1,param_3->_Mydata,*(size_t *)(pEVar1 + 8)), iVar7 == 0))
        {
          *param_4 = *(int *)(pEVar1 + 0x10);
          return true;
        }
      }
      return false;
    }
    uVar9 = uVar6 >> 1;
    uVar3 = *(ulonglong *)(pEVar1 + uVar9 * 0x18 + 8);
    _Size = uVar3;
    if (uVar4 < uVar3) {
      _Size = uVar4;
    }
    iVar7 = memcmp(*(void **)(pEVar1 + uVar9 * 0x18),_Buf2,_Size);
    if (iVar7 != 0) break;
    if (uVar3 < uVar4) {
      bVar5 = true;
      goto LAB_14fb8948f;
    }
    if (uVar4 < uVar3) {
LAB_14fb8948d:
      bVar5 = false;
LAB_14fb8948f:
      if (bVar5) {
        pEVar1 = pEVar1 + uVar9 * 0x18 + 0x18;
        uVar9 = uVar6 + (-1 - uVar9);
      }
    }
  }
  if (-1 < iVar7) goto LAB_14fb8948d;
  bVar5 = true;
  goto LAB_14fb8948f;
}

// Sort @ 14fb89530

/* public: void __cdecl google::protobuf::internal::EytzingerLayoutSorter::Sort(unsigned __int64)
   __ptr64 */

void __thiscall
google::protobuf::internal::EytzingerLayoutSorter::Sort
          (EytzingerLayoutSorter *this,__uint64 param_1)

{
  longlong lVar1;
  
  if (param_1 < *(ulonglong *)(this + 8)) {
    do {
      Sort(this,param_1 * 2 + 1);
      lVar1 = *(longlong *)(this + 0x20);
      *(longlong *)(this + 0x20) = lVar1 + 1;
      *(undefined4 *)(*(longlong *)(this + 0x10) + param_1 * 4) =
           *(undefined4 *)(*(longlong *)this + lVar1 * 4);
      param_1 = param_1 * 2 + 2;
    } while (param_1 < *(ulonglong *)(this + 8));
  }
  return;
}

// ValidateEnum @ 14fb895a0

/* bool __cdecl google::protobuf::internal::ValidateEnum(int,unsigned int const * __ptr64) */

bool __cdecl google::protobuf::internal::ValidateEnum(int param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (longlong)param_1 - (longlong)(short)*param_2;
  uVar2 = (ulonglong)(*param_2 >> 0x10);
  if (uVar1 < uVar2) {
    return true;
  }
  uVar1 = uVar1 - uVar2;
  if ((ushort)param_2[1] <= uVar1) {
    uVar1 = 0;
    if ((ulonglong)*(ushort *)((longlong)param_2 + 6) != 0) {
      do {
        if (param_2[(ulonglong)(ushort)((ushort)param_2[1] >> 5) + uVar1 + 2] == param_1) {
          return true;
        }
        uVar1 = (ulonglong)
                ((int)param_2[(ulonglong)(ushort)((ushort)param_2[1] >> 5) + uVar1 + 2] <= param_1)
                + 1 + uVar1 * 2;
      } while (uVar1 < *(ushort *)((longlong)param_2 + 6));
    }
    return false;
  }
  return (bool)((byte)(param_2[(uVar1 >> 5) + 2] >> ((byte)uVar1 & 0x1f)) & 1);
}

// _Buy_nonzero @ 14fb89620

/* private: void __cdecl std::vector<unsigned int,class std::allocator<unsigned int>
   >::_Buy_nonzero(unsigned __int64) __ptr64 */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Buy_nonzero
          (vector<unsigned_int,std::allocator<unsigned_int>_> *this,__uint64 param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  uint *puVar3;
  
  if (0x3fffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = param_1 * 4;
  if (uVar1 < 0x1000) {
    if (uVar1 == 0) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = ::operator_new(uVar1);
    }
  }
  else {
    if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
    pvVar2 = ::operator_new(uVar1 + 0x27);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    puVar3 = (uint *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
    *(void **)(puVar3 + -2) = pvVar2;
  }
  (this->_Mypair)._Myval2._Myfirst = puVar3;
  (this->_Mypair)._Myval2._Mylast = puVar3;
  (this->_Mypair)._Myval2._Myend = puVar3 + param_1;
  return;
}

// _Buy_raw @ 14fb896c0

/* private: void __cdecl std::vector<unsigned int,class std::allocator<unsigned int>
   >::_Buy_raw(unsigned __int64) __ptr64 */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Buy_raw
          (vector<unsigned_int,std::allocator<unsigned_int>_> *this,__uint64 param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  uint *puVar3;
  
  if (param_1 < 0x4000000000000000) {
    uVar1 = param_1 * 4;
    if (uVar1 < 0x1000) {
      if (uVar1 == 0) {
        puVar3 = (uint *)0x0;
      }
      else {
        puVar3 = ::operator_new(uVar1);
      }
    }
    else {
      if (uVar1 + 0x27 <= uVar1) goto LAB_14fb89742;
      pvVar2 = ::operator_new(uVar1 + 0x27);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      puVar3 = (uint *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
      *(void **)(puVar3 + -2) = pvVar2;
    }
    (this->_Mypair)._Myval2._Myfirst = puVar3;
    (this->_Mypair)._Myval2._Mylast = puVar3;
    (this->_Mypair)._Myval2._Myend = puVar3 + param_1;
    return;
  }
LAB_14fb89742:
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Calculate_growth @ 14fb89750

/* private: unsigned __int64 __cdecl std::vector<unsigned int,class std::allocator<unsigned int>
   >::_Calculate_growth(unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Calculate_growth
          (vector<unsigned_int,std::allocator<unsigned_int>_> *this,__uint64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)(this->_Mypair)._Myval2._Myfirst >> 2
  ;
  uVar1 = 0x3fffffffffffffff;
  if ((uVar2 <= 0x3fffffffffffffff - (uVar2 >> 1)) &&
     (uVar1 = (uVar2 >> 1) + uVar2, uVar1 < param_1)) {
    uVar1 = param_1;
  }
  return uVar1;
}

// _Get_first @ 14fb89790

/* public: class std::allocator<unsigned int> const & __ptr64 __cdecl std::_Compressed_pair<class
   std::allocator<unsigned int>,class std::_Vector_val<struct std::_Simple_types<unsigned int>
   >,1>::_Get_first(void)const __ptr64 */

allocator<unsigned_int> * __thiscall
std::
_Compressed_pair<std::allocator<unsigned_int>,std::_Vector_val<std::_Simple_types<unsigned_int>_>,1>
::_Get_first(_Compressed_pair<std::allocator<unsigned_int>,std::_Vector_val<std::_Simple_types<unsigned_int>_>,1>
             *this)

{
  return (allocator<unsigned_int> *)this;
}

// _Getal @ 14fb897a0

/* private: class std::allocator<unsigned int> const & __ptr64 __cdecl std::vector<unsigned
   int,class std::allocator<unsigned int> >::_Getal(void)const __ptr64 */

allocator<unsigned_int> * __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Getal
          (vector<unsigned_int,std::allocator<unsigned_int>_> *this)

{
  return (allocator<unsigned_int> *)this;
}

// _Orphan_range @ 14fb897b0

/* private: void __cdecl std::vector<unsigned int,class std::allocator<unsigned int>
   >::_Orphan_range(unsigned int * __ptr64,unsigned int * __ptr64)const __ptr64 */

void __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>_>::_Orphan_range
          (vector<unsigned_int,std::allocator<unsigned_int>_> *this,uint *param_1,uint *param_2)

{
  return;
}

// _Release @ 14fb897c0

/* public: unsigned int * __ptr64 __cdecl std::_Uninitialized_backout_al<class
   std::allocator<unsigned int> >::_Release(void) __ptr64 */

uint * __thiscall
std::_Uninitialized_backout_al<std::allocator<unsigned_int>_>::_Release
          (_Uninitialized_backout_al<std::allocator<unsigned_int>_> *this)

{
  this->_First = this->_Last;
  return this->_Last;
}

// _Take_contents @ 14fb897d0

/* public: void __cdecl std::_Vector_val<struct std::_Simple_types<int> >::_Take_contents(class
   std::_Vector_val<struct std::_Simple_types<int> > & __ptr64) __ptr64 */

void __thiscall
std::_Vector_val<std::_Simple_types<int>_>::_Take_contents
          (_Vector_val<std::_Simple_types<int>_> *this,
          _Vector_val<struct_std::_Simple_types<int>_> *param_1)

{
  this->_Myfirst = *(int **)param_1;
  this->_Mylast = *(int **)(param_1 + 8);
  this->_Myend = *(int **)(param_1 + 0x10);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

// _Unwrapped @ 14fb89800

/* public: int * __ptr64 __cdecl std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<int> > >::_Unwrapped(void)const __ptr64 */

int * __thiscall
std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_>::_Unwrapped
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<int>_>_> *this)

{
  return (int *)*this;
}

// _Unwrapped @ 14fb89810

/* public: unsigned int * __ptr64 __cdecl std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<unsigned int> > >::_Unwrapped(void)const __ptr64 */

uint * __thiscall
std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_>::_Unwrapped
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_> *this)

{
  return (uint *)*this;
}

// allocate @ 14fb89820

/* public: unsigned int * __ptr64 __cdecl std::allocator<unsigned int>::allocate(unsigned __int64)
   __ptr64 */

uint * __thiscall
std::allocator<unsigned_int>::allocate(allocator<unsigned_int> *this,__uint64 param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  uint *puVar3;
  
  if (param_1 < 0x4000000000000000) {
    uVar1 = param_1 * 4;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        puVar3 = ::operator_new(uVar1);
        return puVar3;
      }
      return (uint *)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pvVar2 = ::operator_new(uVar1 + 0x27);
      if (pvVar2 != (void *)0x0) {
        puVar3 = (uint *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
        *(void **)(puVar3 + -2) = pvVar2;
        return puVar3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// begin @ 14fb898a0

/* public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<unsigned
   int> > > __cdecl std::vector<unsigned int,class std::allocator<unsigned int> >::begin(void)
   __ptr64 */

_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_> __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>_>::begin
          (vector<unsigned_int,std::allocator<unsigned_int>_> *this)

{
  _Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_> in_RDX;
  
  *(uint **)in_RDX = (this->_Mypair)._Myval2._Myfirst;
  return in_RDX;
}

// capacity @ 14fb898b0

/* public: unsigned __int64 __cdecl std::vector<unsigned int,class std::allocator<unsigned int>
   >::capacity(void)const __ptr64 */

__uint64 __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>_>::capacity
          (vector<unsigned_int,std::allocator<unsigned_int>_> *this)

{
  return (longlong)(this->_Mypair)._Myval2._Myend - (longlong)(this->_Mypair)._Myval2._Myfirst >> 2;
}

// data @ 14fb898d0

/* public: unsigned int * __ptr64 __cdecl std::vector<unsigned int,class std::allocator<unsigned
   int> >::data(void) __ptr64 */

uint * __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>_>::data
          (vector<unsigned_int,std::allocator<unsigned_int>_> *this)

{
  return (this->_Mypair)._Myval2._Myfirst;
}

// empty @ 14fb898e0

/* public: bool __cdecl std::vector<int,class std::allocator<int> >::empty(void)const __ptr64 */

bool __thiscall std::vector<int,std::allocator<int>_>::empty(vector<int,std::allocator<int>_> *this)

{
  return (this->_Mypair)._Myval2._Myfirst == (this->_Mypair)._Myval2._Mylast;
}

// end @ 14fb89900

/* public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<unsigned
   int> > > __cdecl std::vector<unsigned int,class std::allocator<unsigned int> >::end(void) __ptr64
    */

_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_> __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>_>::end
          (vector<unsigned_int,std::allocator<unsigned_int>_> *this)

{
  _Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned_int>_>_> in_RDX;
  
  *(uint **)in_RDX = (this->_Mypair)._Myval2._Mylast;
  return in_RDX;
}

// get_mutable @ 14fb89920

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::ExplicitlyConstructed<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >,1>::get_mutable(void) __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::
ExplicitlyConstructed<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,1>::
get_mutable(ExplicitlyConstructed<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,1>
            *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this;
}

// has_value @ 14fb89930

/* public: bool __cdecl std::optional<short>::has_value(void)const __ptr64 */

bool __thiscall std::optional<short>::has_value(optional<short> *this)

{
  return (bool)this[2];
}

// max_size @ 14fb89940

/* public: static unsigned __int64 __cdecl std::_Default_allocator_traits<class
   std::allocator<unsigned int> >::max_size(class std::allocator<unsigned int> const & __ptr64) */

__uint64 __cdecl
std::_Default_allocator_traits<std::allocator<unsigned_int>_>::max_size
          (allocator<unsigned_int> *param_1)

{
  return 0x3fffffffffffffff;
}

// max_size @ 14fb89960

/* public: unsigned __int64 __cdecl std::vector<unsigned int,class std::allocator<unsigned int>
   >::max_size(void)const __ptr64 */

__uint64 __thiscall
std::vector<unsigned_int,std::allocator<unsigned_int>_>::max_size
          (vector<unsigned_int,std::allocator<unsigned_int>_> *this)

{
  return 0x3fffffffffffffff;
}

// size @ 14fb89980

/* public: unsigned __int64 __cdecl absl::lts_20240722::Span<unsigned int>::size(void)const __ptr64
    */

__uint64 __thiscall absl::lts_20240722::Span<unsigned_int>::size(Span<unsigned_int> *this)

{
  return *(__uint64 *)(this + 8);
}

// FUN_1502accb0 @ 1502accb0

void FUN_1502accb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;
    std::vector<unsigned_int,std::allocator<unsigned_int>_>::
    ~vector<unsigned_int,std::allocator<unsigned_int>_>
              (*(vector<unsigned_int,std::allocator<unsigned_int>_> **)(param_2 + 0x150));
  }
  return;
}


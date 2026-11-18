// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 462

// FUN_14f92fb20 @ 14f92fb20

void FUN_14f92fb20(MapFieldBase *param_1,char param_2)

{
  ulonglong uVar1;
  
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(param_1);
  if (((param_2 != '\0') && (uVar1 = *(ulonglong *)param_1, (uVar1 & 1) != 0)) && (uVar1 != 1)) {
    *(undefined4 *)(uVar1 + 0x1f) = 0;
  }
  return;
}

// _Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*___ptr64,1><> @ 14f92fb70

/* public: __cdecl std::_Compressed_pair<struct std::default_delete<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64,1>::_Compressed_pair<struct std::default_delete<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64,1><>(struct
   std::_Zero_then_variadic_args_t) __ptr64 */

_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*___ptr64,1>
* __thiscall
std::
_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*___ptr64,1>
::
_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*___ptr64,1><>
          (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*___ptr64,1>
           *this,_Zero_then_variadic_args_t param_1)

{
  *(undefined8 *)this = 0;
  return this;
}

// tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><unsigned_int_const&___ptr64,0> @ 14f92fb90

/* public: __cdecl std::tuple<unsigned int const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64>::tuple<unsigned int
   const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const &
   __ptr64><unsigned int const & __ptr64,0>(unsigned int const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64) __ptr64 */

tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
* __thiscall
std::
tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
::
tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><unsigned_int_const&___ptr64,0>
          (tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *this,uint *param_1,NodeBase ***param_2)

{
  *(NodeBase ****)this = param_2;
  *(uint **)(this + 8) = param_1;
  return this;
}

// _Tuple_val<unsigned_int_const&___ptr64><unsigned_int_const&___ptr64> @ 14f92fbb0

/* public: __cdecl std::_Tuple_val<unsigned int const & __ptr64>::_Tuple_val<unsigned int const &
   __ptr64><unsigned int const & __ptr64>(unsigned int const & __ptr64) __ptr64 */

_Tuple_val<unsigned_int_const&___ptr64> * __thiscall
std::_Tuple_val<unsigned_int_const&___ptr64>::
_Tuple_val<unsigned_int_const&___ptr64><unsigned_int_const&___ptr64>
          (_Tuple_val<unsigned_int_const&___ptr64> *this,uint *param_1)

{
  *(uint **)this = param_1;
  return this;
}

// _Tuple_val<google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> @ 14f92fbc0

/* public: __cdecl std::_Tuple_val<struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64
   const & __ptr64>::_Tuple_val<struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64
   const & __ptr64><struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const &
   __ptr64>(struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64) __ptr64
    */

_Tuple_val<google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> * __thiscall
std::_Tuple_val<google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>::
_Tuple_val<google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          (_Tuple_val<google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> *this,
          NodeBase ***param_1)

{
  *(NodeBase ****)this = param_1;
  return this;
}

// tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,0> @ 14f92fbd0

/* public: __cdecl std::tuple<class std::basic_string_view<char,struct std::char_traits<char> >
   const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const &
   __ptr64>::tuple<class std::basic_string_view<char,struct std::char_traits<char> > const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64><class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,0>(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64) __ptr64 */

tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
* __thiscall
std::
tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
::
tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,0>
          (tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *this,basic_string_view<char,std::char_traits<char>_> *param_1,NodeBase ***param_2)

{
  *(NodeBase ****)this = param_2;
  *(basic_string_view<char,std::char_traits<char>_> **)(this + 8) = param_1;
  return this;
}

// _Tuple_val<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64><std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64> @ 14f92fbf0

/* public: __cdecl std::_Tuple_val<class std::basic_string_view<char,struct std::char_traits<char> >
   const & __ptr64>::_Tuple_val<class std::basic_string_view<char,struct std::char_traits<char> >
   const & __ptr64><class std::basic_string_view<char,struct std::char_traits<char> > const &
   __ptr64>(class std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64)
   __ptr64 */

_Tuple_val<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64> * __thiscall
std::_Tuple_val<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64>::
_Tuple_val<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64><std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64>
          (_Tuple_val<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64> *this,
          basic_string_view<char,std::char_traits<char>_> *param_1)

{
  *(basic_string_view<char,std::char_traits<char>_> **)this = param_1;
  return this;
}

// tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><unsigned___int64_const&___ptr64,0> @ 14f92fc00

/* public: __cdecl std::tuple<unsigned __int64 const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64>::tuple<unsigned __int64
   const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const &
   __ptr64><unsigned __int64 const & __ptr64,0>(unsigned __int64 const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64) __ptr64 */

tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
* __thiscall
std::
tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
::
tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><unsigned___int64_const&___ptr64,0>
          (tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *this,__uint64 *param_1,NodeBase ***param_2)

{
  *(NodeBase ****)this = param_2;
  *(__uint64 **)(this + 8) = param_1;
  return this;
}

// _Tuple_val<unsigned___int64_const&___ptr64><unsigned___int64_const&___ptr64> @ 14f92fc20

/* public: __cdecl std::_Tuple_val<unsigned __int64 const & __ptr64>::_Tuple_val<unsigned __int64
   const & __ptr64><unsigned __int64 const & __ptr64>(unsigned __int64 const & __ptr64) __ptr64 */

_Tuple_val<unsigned___int64_const&___ptr64> * __thiscall
std::_Tuple_val<unsigned___int64_const&___ptr64>::
_Tuple_val<unsigned___int64_const&___ptr64><unsigned___int64_const&___ptr64>
          (_Tuple_val<unsigned___int64_const&___ptr64> *this,__uint64 *param_1)

{
  *(__uint64 **)this = param_1;
  return this;
}

// tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><bool_const&___ptr64,0> @ 14f92fc30

/* public: __cdecl std::tuple<bool const & __ptr64,struct google::protobuf::internal::NodeBase *
   __ptr64 * __ptr64 const & __ptr64>::tuple<bool const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64><bool const &
   __ptr64,0>(bool const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64
   const & __ptr64) __ptr64 */

tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> *
__thiscall
std::
tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>::
tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><bool_const&___ptr64,0>
          (tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *this,bool *param_1,NodeBase ***param_2)

{
  *(NodeBase ****)this = param_2;
  *(bool **)(this + 8) = param_1;
  return this;
}

// _Tuple_val<bool_const&___ptr64><bool_const&___ptr64> @ 14f92fc50

/* public: __cdecl std::_Tuple_val<bool const & __ptr64>::_Tuple_val<bool const & __ptr64><bool
   const & __ptr64>(bool const & __ptr64) __ptr64 */

_Tuple_val<bool_const&___ptr64> * __thiscall
std::_Tuple_val<bool_const&___ptr64>::_Tuple_val<bool_const&___ptr64><bool_const&___ptr64>
          (_Tuple_val<bool_const&___ptr64> *this,bool *param_1)

{
  *(bool **)this = param_1;
  return this;
}

// unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_><std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,0> @ 14f92fc60

/* public: __cdecl std::unique_ptr<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,struct std::default_delete<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > >::unique_ptr<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
   std::default_delete<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > > ><struct std::default_delete<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >,0>(void) __ptr64 */

unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
* __thiscall
std::
unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
::
unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_><std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,0>
          (unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
           *this)

{
  (this->_Mypair)._Myval2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  return this;
}

// tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><std::_Exact_args_t,unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64,0> @ 14f92fc80

/* public: __cdecl std::tuple<unsigned int const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64>::tuple<unsigned int
   const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const &
   __ptr64><struct std::_Exact_args_t,unsigned int const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64,0>(struct
   std::_Exact_args_t,unsigned int const & __ptr64,struct google::protobuf::internal::NodeBase *
   __ptr64 * __ptr64 const & __ptr64) __ptr64 */

tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
* __thiscall
std::
tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
::
tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><std::_Exact_args_t,unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64,0>
          (tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *this,_Exact_args_t param_1,uint *param_2,NodeBase ***param_3)

{
  *(NodeBase ****)this = param_3;
  *(uint **)(this + 8) = param_2;
  return this;
}

// tuple<google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><std::_Exact_args_t,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64,0> @ 14f92fca0

/* public: __cdecl std::tuple<struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const
   & __ptr64>::tuple<struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const &
   __ptr64><struct std::_Exact_args_t,struct google::protobuf::internal::NodeBase * __ptr64 *
   __ptr64 const & __ptr64,0>(struct std::_Exact_args_t,struct google::protobuf::internal::NodeBase
   * __ptr64 * __ptr64 const & __ptr64) __ptr64 */

tuple<google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> * __thiscall
std::tuple<google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>::
tuple<google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><std::_Exact_args_t,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64,0>
          (tuple<google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> *this,
          _Exact_args_t param_1,NodeBase ***param_2)

{
  *(NodeBase ****)this = param_2;
  return this;
}

// tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><std::_Exact_args_t,std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64,0> @ 14f92fcb0

/* public: __cdecl std::tuple<class std::basic_string_view<char,struct std::char_traits<char> >
   const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const &
   __ptr64>::tuple<class std::basic_string_view<char,struct std::char_traits<char> > const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64><struct
   std::_Exact_args_t,class std::basic_string_view<char,struct std::char_traits<char> > const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64,0>(struct
   std::_Exact_args_t,class std::basic_string_view<char,struct std::char_traits<char> > const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64) __ptr64
    */

tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
* __thiscall
std::
tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
::
tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><std::_Exact_args_t,std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64,0>
          (tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *this,_Exact_args_t param_1,basic_string_view<char,std::char_traits<char>_> *param_2,
          NodeBase ***param_3)

{
  *(NodeBase ****)this = param_3;
  *(basic_string_view<char,std::char_traits<char>_> **)(this + 8) = param_2;
  return this;
}

// tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><std::_Exact_args_t,unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64,0> @ 14f92fcd0

/* public: __cdecl std::tuple<unsigned __int64 const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64>::tuple<unsigned __int64
   const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const &
   __ptr64><struct std::_Exact_args_t,unsigned __int64 const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64,0>(struct
   std::_Exact_args_t,unsigned __int64 const & __ptr64,struct google::protobuf::internal::NodeBase *
   __ptr64 * __ptr64 const & __ptr64) __ptr64 */

tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
* __thiscall
std::
tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
::
tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><std::_Exact_args_t,unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64,0>
          (tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *this,_Exact_args_t param_1,__uint64 *param_2,NodeBase ***param_3)

{
  *(NodeBase ****)this = param_3;
  *(__uint64 **)(this + 8) = param_2;
  return this;
}

// tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><std::_Exact_args_t,bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64,0> @ 14f92fcf0

/* public: __cdecl std::tuple<bool const & __ptr64,struct google::protobuf::internal::NodeBase *
   __ptr64 * __ptr64 const & __ptr64>::tuple<bool const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64><struct
   std::_Exact_args_t,bool const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 *
   __ptr64 const & __ptr64,0>(struct std::_Exact_args_t,bool const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64) __ptr64 */

tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> *
__thiscall
std::
tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>::
tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64><std::_Exact_args_t,bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64,0>
          (tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *this,_Exact_args_t param_1,bool *param_2,NodeBase ***param_3)

{
  *(NodeBase ****)this = param_3;
  *(bool **)(this + 8) = param_2;
  return this;
}

// operator<<<21> @ 14f92fd10

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<21>(char const (& __ptr64)[21]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<21>(LogMessage *this,char *param_1)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = 0xffffffffffffffff;
  do {
    local_18._Mysize = local_18._Mysize + 1;
  } while (param_1[local_18._Mysize] != '\0');
  local_18._Mydata = param_1;
  CopyToEncodedBuffer<0>(this,&local_18);
  return this;
}

// operator<<<22> @ 14f92fd60

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<22>(char const (& __ptr64)[22]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<22>(LogMessage *this,char *param_1)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = 0xffffffffffffffff;
  do {
    local_18._Mysize = local_18._Mysize + 1;
  } while (param_1[local_18._Mysize] != '\0');
  local_18._Mydata = param_1;
  CopyToEncodedBuffer<0>(this,&local_18);
  return this;
}

// operator<<<23> @ 14f92fdb0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<23>(char const (& __ptr64)[23]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<23>(LogMessage *this,char *param_1)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = 0xffffffffffffffff;
  do {
    local_18._Mysize = local_18._Mysize + 1;
  } while (param_1[local_18._Mysize] != '\0');
  local_18._Mydata = param_1;
  CopyToEncodedBuffer<0>(this,&local_18);
  return this;
}

// operator<<<26> @ 14f92fe00

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<26>(char const (& __ptr64)[26]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<26>(LogMessage *this,char *param_1)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = 0xffffffffffffffff;
  do {
    local_18._Mysize = local_18._Mysize + 1;
  } while (param_1[local_18._Mysize] != '\0');
  local_18._Mydata = param_1;
  CopyToEncodedBuffer<0>(this,&local_18);
  return this;
}

// operator<<<27> @ 14f92fe50

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<27>(char const (& __ptr64)[27]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<27>(LogMessage *this,char *param_1)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = 0xffffffffffffffff;
  do {
    local_18._Mysize = local_18._Mysize + 1;
  } while (param_1[local_18._Mysize] != '\0');
  local_18._Mydata = param_1;
  CopyToEncodedBuffer<0>(this,&local_18);
  return this;
}

// operator<<<28> @ 14f92fea0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<28>(char const (& __ptr64)[28]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<28>(LogMessage *this,char *param_1)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = 0xffffffffffffffff;
  do {
    local_18._Mysize = local_18._Mysize + 1;
  } while (param_1[local_18._Mysize] != '\0');
  local_18._Mydata = param_1;
  CopyToEncodedBuffer<0>(this,&local_18);
  return this;
}

// operator<<<31> @ 14f92fef0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<31>(char const (& __ptr64)[31]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<31>(LogMessage *this,char *param_1)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = 0xffffffffffffffff;
  do {
    local_18._Mysize = local_18._Mysize + 1;
  } while (param_1[local_18._Mysize] != '\0');
  local_18._Mydata = param_1;
  CopyToEncodedBuffer<0>(this,&local_18);
  return this;
}

// operator<<<32> @ 14f92ff40

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<32>(char const (& __ptr64)[32]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<32>(LogMessage *this,char *param_1)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = 0xffffffffffffffff;
  do {
    local_18._Mysize = local_18._Mysize + 1;
  } while (param_1[local_18._Mysize] != '\0');
  local_18._Mydata = param_1;
  CopyToEncodedBuffer<0>(this,&local_18);
  return this;
}

// operator<<<33> @ 14f92ff90

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<33>(char const (& __ptr64)[33]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<33>(LogMessage *this,char *param_1)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = 0xffffffffffffffff;
  do {
    local_18._Mysize = local_18._Mysize + 1;
  } while (param_1[local_18._Mysize] != '\0');
  local_18._Mydata = param_1;
  CopyToEncodedBuffer<0>(this,&local_18);
  return this;
}

// operator<<<34> @ 14f92ffe0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<34>(char const (& __ptr64)[34]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<34>(LogMessage *this,char *param_1)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = 0xffffffffffffffff;
  do {
    local_18._Mysize = local_18._Mysize + 1;
  } while (param_1[local_18._Mysize] != '\0');
  local_18._Mydata = param_1;
  CopyToEncodedBuffer<0>(this,&local_18);
  return this;
}

// operator<<<60> @ 14f930030

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<60>(char const (& __ptr64)[60]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<60>(LogMessage *this,char *param_1)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = 0xffffffffffffffff;
  do {
    local_18._Mysize = local_18._Mysize + 1;
  } while (param_1[local_18._Mysize] != '\0');
  local_18._Mydata = param_1;
  CopyToEncodedBuffer<0>(this,&local_18);
  return this;
}

// operator<<<14> @ 14f930080

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<14>(char const (& __ptr64)[14]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<14>(LogMessage *this,char *param_1)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = 0xffffffffffffffff;
  do {
    local_18._Mysize = local_18._Mysize + 1;
  } while (param_1[local_18._Mysize] != '\0');
  local_18._Mydata = param_1;
  CopyToEncodedBuffer<0>(this,&local_18);
  return this;
}

// operator==<char,std::char_traits<char>_> @ 14f9300d0

/* bool __cdecl std::operator==<char,struct std::char_traits<char> >(class
   std::basic_string_view<char,struct std::char_traits<char> >,class
   std::basic_string_view<char,struct std::char_traits<char> >) */

bool __cdecl
std::operator==<char,std::char_traits<char>_>
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  int iVar1;
  
  if (param_1->_Mysize == param_2->_Mysize) {
    iVar1 = memcmp(param_1->_Mydata,param_2->_Mydata,param_1->_Mysize);
    if (iVar1 == 0) {
      return true;
    }
  }
  return false;
}

// FUN_14f930110 @ 14f930110

ulonglong FUN_14f930110(undefined8 *param_1,KeyMapBase<unsigned_int> *param_2,uint *param_3)

{
  undefined8 *puVar1;
  NodeAndBucket *pNVar2;
  longlong *plVar3;
  NodeAndBucket local_18;
  
  pNVar2 = google::protobuf::internal::KeyMapBase<unsigned_int>::FindHelper
                     (param_2,&local_18,*param_3);
  if (local_18.node == (NodeBase *)0x0) {
    return (ulonglong)pNVar2 & 0xffffffffffffff00;
  }
  plVar3 = (longlong *)*param_1;
  puVar1 = (undefined8 *)*plVar3;
  if (puVar1 != (undefined8 *)0x0) {
    plVar3 = (longlong *)((longlong)&(local_18.node)->next + (ulonglong)(byte)param_2->field_0xe);
    *puVar1 = plVar3;
  }
  return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
}

// FUN_14f930170 @ 14f930170

ulonglong FUN_14f930170(undefined8 *param_1,
                       KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                       *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  NodeAndBucket *pNVar2;
  longlong *plVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  NodeAndBucket local_18;
  
  local_28._Mydata = (char *)*param_3;
  local_28._Mysize = param_3[1];
  pNVar2 = google::protobuf::internal::
           KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
           FindHelper(param_2,&local_18,&local_28);
  if (local_18.node == (NodeBase *)0x0) {
    return (ulonglong)pNVar2 & 0xffffffffffffff00;
  }
  plVar3 = (longlong *)*param_1;
  puVar1 = (undefined8 *)*plVar3;
  if (puVar1 != (undefined8 *)0x0) {
    plVar3 = (longlong *)((longlong)&(local_18.node)->next + (ulonglong)(byte)param_2[0xe]);
    *puVar1 = plVar3;
  }
  return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
}

// FUN_14f9301e0 @ 14f9301e0

ulonglong FUN_14f9301e0(undefined8 *param_1,KeyMapBase<unsigned___int64> *param_2,__uint64 *param_3)

{
  undefined8 *puVar1;
  NodeAndBucket *pNVar2;
  longlong *plVar3;
  NodeAndBucket local_18;
  
  pNVar2 = google::protobuf::internal::KeyMapBase<unsigned___int64>::FindHelper
                     (param_2,&local_18,*param_3);
  if (local_18.node == (NodeBase *)0x0) {
    return (ulonglong)pNVar2 & 0xffffffffffffff00;
  }
  plVar3 = (longlong *)*param_1;
  puVar1 = (undefined8 *)*plVar3;
  if (puVar1 != (undefined8 *)0x0) {
    plVar3 = (longlong *)((longlong)&(local_18.node)->next + (ulonglong)(byte)param_2->field_0xe);
    *puVar1 = plVar3;
  }
  return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
}

// FUN_14f930240 @ 14f930240

ulonglong FUN_14f930240(undefined8 *param_1,KeyMapBase<bool> *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  NodeAndBucket *pNVar2;
  longlong *plVar3;
  NodeAndBucket local_18;
  
  pNVar2 = google::protobuf::internal::KeyMapBase<bool>::FindHelper
                     (param_2,&local_18,*(bool *)param_3);
  if (local_18.node == (NodeBase *)0x0) {
    return (ulonglong)pNVar2 & 0xffffffffffffff00;
  }
  plVar3 = (longlong *)*param_1;
  puVar1 = (undefined8 *)*plVar3;
  if (puVar1 != (undefined8 *)0x0) {
    plVar3 = (longlong *)((longlong)&(local_18.node)->next + (ulonglong)(byte)param_2[0xe]);
    *puVar1 = plVar3;
  }
  return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
}

// FUN_14f9302a0 @ 14f9302a0

void FUN_14f9302a0(undefined8 param_1,MapFieldBase *param_2,char param_3)

{
  ulonglong uVar1;
  
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(param_2);
  if (((param_3 != '\0') && (uVar1 = *(ulonglong *)param_2, (uVar1 & 1) != 0)) && (uVar1 != 1)) {
    *(undefined4 *)(uVar1 + 0x1f) = 0;
  }
  return;
}

// FUN_14f9303e0 @ 14f9303e0

void FUN_14f9303e0(undefined8 *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ThreadSafeArena *this;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)((ulonglong)*(byte *)(param_1[1] + 0xe) + *(longlong *)param_1[2]);
  puVar1 = *(ulonglong **)*param_1;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0xf;
  *(undefined1 *)puVar3 = 0;
  uVar2 = *puVar1;
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulonglong *)(uVar2 + 0xf);
  }
  if (uVar2 != 0) {
    this = (ThreadSafeArena *)*puVar1;
    if (((ulonglong)this & 1) != 0) {
      this = *(ThreadSafeArena **)((longlong)&(this->alloc_policy_).policy_ + 7);
    }
    google::protobuf::internal::ThreadSafeArena::AddCleanup
              (this,puVar3,
               google::protobuf::internal::cleanup::
               arena_destruct_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              );
  }
  return;
}

// FUN_14f930450 @ 14f930450

void FUN_14f930450(undefined8 *param_1)

{
  byte bVar1;
  longlong lVar2;
  ulonglong *puVar3;
  Reflection *this;
  Metadata *pMVar4;
  FieldDescriptor *pFVar5;
  Message *pMVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  Metadata local_28;
  Metadata local_18;
  
  bVar1 = *(byte *)(param_1[1] + 0xe);
  lVar2 = *(longlong *)param_1[2];
  puVar3 = *(ulonglong **)*param_1;
  pMVar6 = (Message *)puVar3[1];
  pMVar4 = google::protobuf::Message::GetMetadata(pMVar6,&local_28);
  this = pMVar4->reflection;
  pMVar4 = google::protobuf::Message::GetMetadata(pMVar6,&local_18);
  pFVar5 = google::protobuf::Descriptor::map_value(pMVar4->descriptor);
  pMVar6 = google::protobuf::Reflection::GetMessage(this,pMVar6,pFVar5,(MessageFactory *)0x0);
  puVar7 = (undefined8 *)(**(code **)(*(longlong *)pMVar6 + 0x18))(pMVar6);
  uVar8 = *puVar3;
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulonglong *)(uVar8 + 0xf);
  }
  (*(code *)puVar7[6])(*puVar7,(ulonglong)bVar1 + lVar2,uVar8);
  return;
}

// FUN_14f930590 @ 14f930590

undefined8 FUN_14f930590(longlong param_1,KeyMapBase<unsigned_int> *param_2,undefined4 *param_3)

{
  undefined7 extraout_var;
  
  *(undefined4 *)(**(longlong **)(param_1 + 8) + 8) = *param_3;
  google::protobuf::internal::KeyMapBase<unsigned_int>::InsertOrReplaceNode
            (param_2,(KeyNode<unsigned_int> *)**(undefined8 **)(param_1 + 8));
  return CONCAT71(extraout_var,1);
}

// FUN_14f9305d0 @ 14f9305d0

void FUN_14f9305d0(undefined8 param_1,
                  KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                  *param_2,undefined8 *param_3)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = (char *)*param_3;
  local_18._Mysize = param_3[1];
  google::protobuf::internal::
  KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::EraseImpl
            (param_2,&local_18);
  return;
}

// FUN_14f930600 @ 14f930600

undefined8
FUN_14f930600(undefined8 *param_1,
             KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
             *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined7 extraout_var;
  ThreadSafeArena *this;
  
  puVar1 = (ulonglong *)*param_1;
  lVar2 = *(longlong *)param_1[1];
  *(undefined8 *)(lVar2 + 8) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar2 + 8),
             (char *)*param_3,param_3[1]);
  uVar3 = *puVar1;
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulonglong *)(uVar3 + 0xf);
  }
  if (uVar3 != 0) {
    this = (ThreadSafeArena *)*puVar1;
    if (((ulonglong)this & 1) != 0) {
      this = *(ThreadSafeArena **)((longlong)&(this->alloc_policy_).policy_ + 7);
    }
    google::protobuf::internal::ThreadSafeArena::AddCleanup
              (this,(void *)(lVar2 + 8),
               google::protobuf::internal::cleanup::
               arena_destruct_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              );
  }
  google::protobuf::internal::
  KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
  InsertOrReplaceNode(param_2,*(KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                                **)param_1[1]);
  return CONCAT71(extraout_var,1);
}

// FUN_14f9306d0 @ 14f9306d0

undefined8 FUN_14f9306d0(longlong param_1,KeyMapBase<unsigned___int64> *param_2,undefined8 *param_3)

{
  undefined7 extraout_var;
  
  *(undefined8 *)(**(longlong **)(param_1 + 8) + 8) = *param_3;
  google::protobuf::internal::KeyMapBase<unsigned___int64>::InsertOrReplaceNode
            (param_2,(KeyNode<unsigned___int64> *)**(undefined8 **)(param_1 + 8));
  return CONCAT71(extraout_var,1);
}

// FUN_14f930730 @ 14f930730

undefined8 FUN_14f930730(longlong param_1,KeyMapBase<bool> *param_2,undefined1 *param_3)

{
  undefined7 extraout_var;
  
  *(undefined1 *)(**(longlong **)(param_1 + 8) + 8) = *param_3;
  google::protobuf::internal::KeyMapBase<bool>::InsertOrReplaceNode
            (param_2,(KeyNode<bool> *)**(undefined8 **)(param_1 + 8));
  return CONCAT71(extraout_var,1);
}

// FUN_14f930770 @ 14f930770

void FUN_14f930770(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ThreadSafeArena *this;
  
  puVar1 = (ulonglong *)*param_1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  uVar2 = *puVar1;
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulonglong *)(uVar2 + 0xf);
  }
  if (uVar2 != 0) {
    this = (ThreadSafeArena *)*puVar1;
    if (((ulonglong)this & 1) != 0) {
      this = *(ThreadSafeArena **)((longlong)&(this->alloc_policy_).policy_ + 7);
    }
    google::protobuf::internal::ThreadSafeArena::AddCleanup
              (this,param_2,
               google::protobuf::internal::cleanup::
               arena_destruct_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              );
  }
  return;
}

// FUN_14f9307d0 @ 14f9307d0

void FUN_14f9307d0(longlong *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  Reflection *this;
  Metadata *pMVar2;
  FieldDescriptor *pFVar3;
  Message *pMVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  Metadata local_28;
  Metadata local_18;
  
  puVar1 = (ulonglong *)*param_1;
  pMVar4 = (Message *)puVar1[1];
  pMVar2 = google::protobuf::Message::GetMetadata(pMVar4,&local_28);
  this = pMVar2->reflection;
  pMVar2 = google::protobuf::Message::GetMetadata(pMVar4,&local_18);
  pFVar3 = google::protobuf::Descriptor::map_value(pMVar2->descriptor);
  pMVar4 = google::protobuf::Reflection::GetMessage(this,pMVar4,pFVar3,(MessageFactory *)0x0);
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)pMVar4 + 0x18))(pMVar4);
  uVar6 = *puVar1;
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulonglong *)(uVar6 + 0xf);
  }
  (*(code *)puVar5[6])(*puVar5,param_2,uVar6);
  return;
}

// AbslHashValue<absl::lts_20240722::hash_internal::MixingHashState> @ 14f9308a0

/* class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::AbslHashValue<class
   absl::lts_20240722::hash_internal::MixingHashState>(class
   absl::lts_20240722::hash_internal::MixingHashState,class std::basic_string_view<char,struct
   std::char_traits<char> >) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::AbslHashValue<absl::lts_20240722::hash_internal::MixingHashState>
          (MixingHashState param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  __uint64 _Var1;
  undefined1 auVar2 [16];
  __uint64 *in_R8;
  longlong local_res8;
  
  _Var1 = in_R8[1];
  MixingHashState::combine_contiguous((MixingHashState)&local_res8,(uchar *)param_2,*in_R8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = _Var1 + local_res8;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8);
  return (MixingHashState)param_1.state_;
}

// AbslHashValue<absl::lts_20240722::hash_internal::MixingHashState,std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> @ 14f930910

/* class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::AbslHashValue<class
   absl::lts_20240722::hash_internal::MixingHashState,class std::basic_string_view<char,struct
   std::char_traits<char> > const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 *
   __ptr64 const & __ptr64>(class absl::lts_20240722::hash_internal::MixingHashState,class
   std::tuple<class std::basic_string_view<char,struct std::char_traits<char> > const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const &
   __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::
AbslHashValue<absl::lts_20240722::hash_internal::MixingHashState,std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          (MixingHashState param_1,
          tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          *param_2)

{
  longlong *plVar1;
  __uint64 _Var2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 *in_R8;
  longlong local_res8;
  
  plVar1 = (longlong *)*in_R8;
  _Var2 = ((__uint64 *)in_R8[1])[1];
  MixingHashState::combine_contiguous
            ((MixingHashState)&local_res8,(uchar *)param_2,*(__uint64 *)in_R8[1]);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = _Var2 + local_res8;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8)) + *plVar1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8)) + *plVar1;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,8) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,0);
  return (MixingHashState)param_1.state_;
}

// AbslHashValue<absl::lts_20240722::hash_internal::MixingHashState,bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> @ 14f9309c0

/* class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::AbslHashValue<class
   absl::lts_20240722::hash_internal::MixingHashState,bool const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64>(class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<bool const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::
AbslHashValue<absl::lts_20240722::hash_internal::MixingHashState,bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          (MixingHashState param_1,
          tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 *in_R8;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 + (*(char *)in_R8[1] != '\0');
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8)) + *(longlong *)*in_R8;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + *(longlong *)*in_R8;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0);
  return (MixingHashState)param_1.state_;
}

// AbslHashValue<absl::lts_20240722::hash_internal::MixingHashState,bool> @ 14f930a30

/* class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::AbslHashValue<class
   absl::lts_20240722::hash_internal::MixingHashState,bool>(class
   absl::lts_20240722::hash_internal::MixingHashState,bool) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::
AbslHashValue<absl::lts_20240722::hash_internal::MixingHashState,bool>
          (MixingHashState param_1,bool param_2)

{
  undefined1 auVar1 [16];
  undefined7 in_register_00000011;
  byte in_R8B;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (ulonglong)in_R8B + CONCAT71(in_register_00000011,param_2);
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
  return (MixingHashState)param_1.state_;
}

// AddAllocated<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_> @ 14f930a60

/* protected: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::AddAllocated<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Message> >(class
   google::protobuf::Message * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
AddAllocated<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
          (RepeatedPtrFieldBase *this,Message *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  Arena *pAVar5;
  RepeatedPtrFieldBase *pRVar6;
  byte bVar7;
  bool bVar8;
  
  pAVar5 = GenericTypeHandler<google::protobuf::Message>::GetArena(param_1);
  if (this->arena_ == pAVar5) {
    pvVar3 = this->tagged_rep_or_elem_;
    bVar7 = ~*(byte *)&this->tagged_rep_or_elem_ & 1;
    if (bVar7 == 0) {
      bVar8 = this->capacity_proxy_ + 1 <= *(int *)((longlong)pvVar3 + -1);
    }
    else {
      bVar8 = pvVar3 != (void *)0x0;
    }
    if (!bVar8) {
      if (bVar7 == 0) {
        uVar4 = *(uint *)((longlong)pvVar3 + -1);
        pRVar6 = (RepeatedPtrFieldBase *)((longlong)pvVar3 + 7);
      }
      else {
        uVar4 = (uint)(pvVar3 != (void *)0x0);
        pRVar6 = this;
      }
      if (this->current_size_ < (int)uVar4) {
        if ((~(byte)pvVar3 & 1) == 0) {
          uVar4 = *(uint *)((longlong)pvVar3 + -1);
        }
        else {
          uVar4 = (uint)(pvVar3 != (void *)0x0);
        }
        (&pRVar6->tagged_rep_or_elem_)[(int)uVar4] =
             (&pRVar6->tagged_rep_or_elem_)[this->current_size_];
      }
      iVar2 = this->current_size_;
      this->current_size_ = iVar2 + 1;
      (&pRVar6->tagged_rep_or_elem_)[iVar2] = param_1;
      if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) != 0) {
        return;
      }
      piVar1 = (int *)((longlong)this->tagged_rep_or_elem_ + -1);
      *piVar1 = *piVar1 + 1;
      return;
    }
  }
  AddAllocatedSlowWithCopy<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
            (this,param_1,pAVar5,this->arena_);
  return;
}

// AddAllocatedSlowWithCopy<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_> @ 14f930b50

/* protected: void __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedSlowWithCopy<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Message> >(class
   google::protobuf::Message * __ptr64,class google::protobuf::Arena * __ptr64,class
   google::protobuf::Arena * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
AddAllocatedSlowWithCopy<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
          (RepeatedPtrFieldBase *this,Message *param_1,Arena *param_2,Arena *param_3)

{
  if ((param_3 == (Arena *)0x0) || (param_2 != (Arena *)0x0)) {
    if (param_3 != param_2) {
      param_1 = (Message *)CloneSlow(param_3,(MessageLite *)param_1);
    }
  }
  else if (param_1 != (Message *)0x0) {
    ThreadSafeArena::AddCleanup
              (&param_3->impl_,param_1,arena_delete_object<google::protobuf::MessageLite>);
  }
  UnsafeArenaAddAllocated<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
            (this,(MessageLite *)param_1);
  return;
}

// AllocateInternal<google::protobuf::internal::MapFieldBase::ReflectionPayload,0> @ 14f930bb0

/* private: void * __ptr64 __cdecl google::protobuf::Arena::AllocateInternal<struct
   google::protobuf::internal::MapFieldBase::ReflectionPayload,0>(void) __ptr64 */

void * __thiscall
google::protobuf::Arena::
AllocateInternal<google::protobuf::internal::MapFieldBase::ReflectionPayload,0>(Arena *this)

{
  void *pvVar1;
  
  pvVar1 = AllocateAlignedWithCleanup
                     (this,0x28,8,
                      internal::cleanup::
                      arena_destruct_object<google::protobuf::internal::MapFieldBase::ReflectionPayload>
                     );
  return pvVar1;
}

// Clear<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_> @ 14f930bd0

/* public: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::Clear<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Message> >(void) __ptr64
    */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
Clear<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
          (RepeatedPtrFieldBase *this)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  longlong lVar4;
  
  if (this->current_size_ < 1) {
    return;
  }
  piVar1 = &this->current_size_;
  if (((ulonglong)this->tagged_rep_or_elem_ & 1) != 0) {
    this = (RepeatedPtrFieldBase *)((longlong)this->tagged_rep_or_elem_ + 7);
  }
  iVar3 = *piVar1;
  lVar4 = 0;
  do {
    ppvVar2 = &this->tagged_rep_or_elem_ + lVar4;
    lVar4 = lVar4 + 1;
    (**(code **)(*(longlong *)*ppvVar2 + 8))();
  } while (lVar4 < iVar3);
  *piVar1 = 0;
  return;
}

// CopyFrom<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_> @ 14f930bf0

/* protected: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::CopyFrom<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Message> >(class
   google::protobuf::internal::RepeatedPtrFieldBase const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
CopyFrom<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
          (RepeatedPtrFieldBase *this,RepeatedPtrFieldBase *param_1)

{
  if (param_1 != this) {
    if (0 < this->current_size_) {
      ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
                (this);
    }
    if (param_1->current_size_ != 0) {
      MergeFrom<google::protobuf::MessageLite>(this,param_1);
    }
  }
  return;
}

// Create<google::protobuf::internal::MapFieldBase::ReflectionPayload,google::protobuf::Arena*___ptr64&___ptr64> @ 14f930c40

/* public: static struct google::protobuf::internal::MapFieldBase::ReflectionPayload * __ptr64
   __cdecl google::protobuf::Arena::Create<struct
   google::protobuf::internal::MapFieldBase::ReflectionPayload,class google::protobuf::Arena *
   __ptr64 & __ptr64>(class google::protobuf::Arena * __ptr64,class google::protobuf::Arena *
   __ptr64 & __ptr64) */

ReflectionPayload * __cdecl
google::protobuf::Arena::
Create<google::protobuf::internal::MapFieldBase::ReflectionPayload,google::protobuf::Arena*___ptr64&___ptr64>
          (Arena *param_1,Arena **param_2)

{
  Arena *pAVar1;
  ReflectionPayload *pRVar2;
  
  if (param_1 != (Arena *)0x0) {
    pRVar2 = AllocateAlignedWithCleanup
                       (param_1,0x28,8,
                        internal::cleanup::
                        arena_destruct_object<google::protobuf::internal::MapFieldBase::ReflectionPayload>
                       );
    pAVar1 = *param_2;
    *(undefined8 *)&pRVar2->repeated_field = 0;
    *(undefined8 *)&(pRVar2->repeated_field).field_0x8 = 0;
    *(Arena **)&(pRVar2->repeated_field).field_0x10 = pAVar1;
    (pRVar2->mutex).mu_ = (atomic<__int64>)0x0;
    pRVar2->state = (atomic<google::protobuf::internal::MapFieldBase::State>)0x0;
    return pRVar2;
  }
  pRVar2 = ::operator_new(0x28);
  if (pRVar2 != (ReflectionPayload *)0x0) {
    pAVar1 = *param_2;
    *(undefined8 *)&pRVar2->repeated_field = 0;
    *(undefined8 *)&(pRVar2->repeated_field).field_0x8 = 0;
    *(Arena **)&(pRVar2->repeated_field).field_0x10 = pAVar1;
    (pRVar2->mutex).mu_ = (atomic<__int64>)0x0;
    pRVar2->state = (atomic<google::protobuf::internal::MapFieldBase::State>)0x0;
    return pRVar2;
  }
  return (ReflectionPayload *)0x0;
}

// CreateArray<google::protobuf::internal::NodeBase*___ptr64> @ 14f930ce0

/* WARNING: Removing unreachable block (ram,0x00014f930dac) */
/* public: static struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 __cdecl
   google::protobuf::Arena::CreateArray<struct google::protobuf::internal::NodeBase * __ptr64>(class
   google::protobuf::Arena * __ptr64,unsigned __int64) */

NodeBase ** __cdecl
google::protobuf::Arena::CreateArray<google::protobuf::internal::NodeBase*___ptr64>
          (Arena *param_1,__uint64 param_2)

{
  undefined1 auVar1 [16];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  LogMessage *this;
  ulong64 uVar3;
  NodeBase **ppNVar4;
  basic_string_view<char,std::char_traits<char>_> local_38;
  LogMessageFatal local_28;
  
  if ((0x1fffffffffffffff < param_2) &&
     (pbVar2 = absl::lts_20240722::log_internal::
               MakeCheckOpString<unsigned___int64,unsigned___int64>
                         (param_2,0x1fffffffffffffff,
                          "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)"),
     pbVar2 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    local_38._Mydata = (char *)pbVar2;
    if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
      local_38._Mydata = (pbVar2->_Mypair)._Myval2._Bx._Ptr;
    }
    local_38._Mysize = (pbVar2->_Mypair)._Myval2._Mysize;
    this = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_28,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/arena.h"
                      ,0x105,&local_38);
    local_38._Mydata = "Requested size is too large to fit into size_t.";
    local_38._Mysize = 0x2f;
    absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this,&local_38);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_28);
  }
  if (param_1 == (Arena *)0x0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    uVar3 = SUB168(ZEXT816(8) * auVar1,0);
    if (SUB168(ZEXT816(8) * auVar1,8) != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    ppNVar4 = operator_new__(uVar3);
  }
  else {
    ppNVar4 = AllocateForArray(param_1,param_2 * 8);
  }
  return ppNVar4;
}

// Destroy<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_> @ 14f930e10

/* protected: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::Destroy<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Message> >(void) __ptr64
    */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
Destroy<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
          (RepeatedPtrFieldBase *this)

{
  uint uVar1;
  longlong lVar2;
  RepeatedPtrFieldBase *pRVar3;
  
  lVar2 = 0;
  if (this->arena_ == (Arena *)0x0) {
    if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
      uVar1 = *(uint *)((longlong)this->tagged_rep_or_elem_ + -1);
      pRVar3 = (RepeatedPtrFieldBase *)((longlong)this->tagged_rep_or_elem_ + 7);
    }
    else {
      uVar1 = (uint)(this->tagged_rep_or_elem_ != (void *)0x0);
      pRVar3 = this;
    }
    if (0 < (int)uVar1) {
      do {
        InternalOutOfLineDeleteMessageLite((&pRVar3->tagged_rep_or_elem_)[lVar2]);
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)uVar1);
    }
    if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
      ::operator_delete((void *)((longlong)this->tagged_rep_or_elem_ + -1),
                        (longlong)(this->capacity_proxy_ + 1) * 8 + 8);
    }
  }
  return;
}

// GetKey<unsigned_int> @ 14f930eb0

/* public: unsigned int * __ptr64 __cdecl
   google::protobuf::internal::UntypedMapBase::GetKey<unsigned int>(struct
   google::protobuf::internal::NodeBase * __ptr64)const __ptr64 */

uint * __thiscall
google::protobuf::internal::UntypedMapBase::GetKey<unsigned_int>
          (UntypedMapBase *this,NodeBase *param_1)

{
  return (uint *)(param_1 + 1);
}

// GetKey<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f930ec0

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::UntypedMapBase::GetKey<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(struct
   google::protobuf::internal::NodeBase * __ptr64)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::UntypedMapBase::
GetKey<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (UntypedMapBase *this,NodeBase *param_1)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1);
}

// GetKey<unsigned___int64> @ 14f930ed0

/* public: unsigned __int64 * __ptr64 __cdecl
   google::protobuf::internal::UntypedMapBase::GetKey<unsigned __int64>(struct
   google::protobuf::internal::NodeBase * __ptr64)const __ptr64 */

__uint64 * __thiscall
google::protobuf::internal::UntypedMapBase::GetKey<unsigned___int64>
          (UntypedMapBase *this,NodeBase *param_1)

{
  return (__uint64 *)(param_1 + 1);
}

// GetKey<bool> @ 14f930ee0

/* public: bool * __ptr64 __cdecl google::protobuf::internal::UntypedMapBase::GetKey<bool>(struct
   google::protobuf::internal::NodeBase * __ptr64)const __ptr64 */

bool * __thiscall
google::protobuf::internal::UntypedMapBase::GetKey<bool>(UntypedMapBase *this,NodeBase *param_1)

{
  return (bool *)(param_1 + 1);
}

// GetValue<unsigned_int> @ 14f930ef0

/* public: unsigned int * __ptr64 __cdecl
   google::protobuf::internal::UntypedMapBase::GetValue<unsigned int>(struct
   google::protobuf::internal::NodeBase * __ptr64)const __ptr64 */

uint * __thiscall
google::protobuf::internal::UntypedMapBase::GetValue<unsigned_int>
          (UntypedMapBase *this,NodeBase *param_1)

{
  return (uint *)((longlong)&param_1->next + (ulonglong)(this->type_info_).value_offset);
}

// GetValue<float> @ 14f930f00

/* public: float * __ptr64 __cdecl
   google::protobuf::internal::UntypedMapBase::GetValue<float>(struct
   google::protobuf::internal::NodeBase * __ptr64)const __ptr64 */

float * __thiscall
google::protobuf::internal::UntypedMapBase::GetValue<float>(UntypedMapBase *this,NodeBase *param_1)

{
  return (float *)((longlong)&param_1->next + (ulonglong)(this->type_info_).value_offset);
}

// GetValue<double> @ 14f930f10

/* public: double * __ptr64 __cdecl
   google::protobuf::internal::UntypedMapBase::GetValue<double>(struct
   google::protobuf::internal::NodeBase * __ptr64)const __ptr64 */

double * __thiscall
google::protobuf::internal::UntypedMapBase::GetValue<double>(UntypedMapBase *this,NodeBase *param_1)

{
  return (double *)((longlong)&param_1->next + (ulonglong)(this->type_info_).value_offset);
}

// GetValue<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f930f20

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64 __cdecl google::protobuf::internal::UntypedMapBase::GetValue<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(struct
   google::protobuf::internal::NodeBase * __ptr64)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::UntypedMapBase::
GetValue<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (UntypedMapBase *this,NodeBase *param_1)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
         ((longlong)&param_1->next + (ulonglong)(this->type_info_).value_offset);
}

// GetValue<google::protobuf::MessageLite> @ 14f930f30

/* public: class google::protobuf::MessageLite * __ptr64 __cdecl
   google::protobuf::internal::UntypedMapBase::GetValue<class google::protobuf::MessageLite>(struct
   google::protobuf::internal::NodeBase * __ptr64)const __ptr64 */

MessageLite * __thiscall
google::protobuf::internal::UntypedMapBase::GetValue<google::protobuf::MessageLite>
          (UntypedMapBase *this,NodeBase *param_1)

{
  return (MessageLite *)((longlong)&param_1->next + (ulonglong)(this->type_info_).value_offset);
}

// GetValue<unsigned___int64> @ 14f930f40

/* public: unsigned __int64 * __ptr64 __cdecl
   google::protobuf::internal::UntypedMapBase::GetValue<unsigned __int64>(struct
   google::protobuf::internal::NodeBase * __ptr64)const __ptr64 */

__uint64 * __thiscall
google::protobuf::internal::UntypedMapBase::GetValue<unsigned___int64>
          (UntypedMapBase *this,NodeBase *param_1)

{
  return (__uint64 *)((longlong)&param_1->next + (ulonglong)(this->type_info_).value_offset);
}

// GetValue<bool> @ 14f930f50

/* public: bool * __ptr64 __cdecl google::protobuf::internal::UntypedMapBase::GetValue<bool>(struct
   google::protobuf::internal::NodeBase * __ptr64)const __ptr64 */

bool * __thiscall
google::protobuf::internal::UntypedMapBase::GetValue<bool>(UntypedMapBase *this,NodeBase *param_1)

{
  return (bool *)((longlong)&param_1->next + (ulonglong)(this->type_info_).value_offset);
}

// HashOf<std::basic_string_view<char,std::char_traits<char>_>,google::protobuf::internal::NodeBase*___ptr64*___ptr64> @ 14f930f60

/* unsigned __int64 __cdecl absl::lts_20240722::HashOf<class std::basic_string_view<char,struct
   std::char_traits<char> >,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64>(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64) */

__uint64 __cdecl
absl::lts_20240722::
HashOf<std::basic_string_view<char,std::char_traits<char>_>,google::protobuf::internal::NodeBase*___ptr64*___ptr64>
          (basic_string_view<char,std::char_traits<char>_> *param_1,NodeBase ***param_2)

{
  ulong64 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong local_res8;
  
  uVar1 = param_1->_Mysize;
  hash_internal::MixingHashState::combine_contiguous
            ((MixingHashState)&local_res8,(uchar *)&hash_internal::MixingHashState::kSeed,
             (__uint64)param_1->_Mydata);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1 + local_res8;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + (longlong)*param_2;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8)) + (longlong)*param_2;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8);
}

// HashOf<bool,google::protobuf::internal::NodeBase*___ptr64*___ptr64> @ 14f931000

/* unsigned __int64 __cdecl absl::lts_20240722::HashOf<bool,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64>(bool const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64) */

__uint64 __cdecl
absl::lts_20240722::HashOf<bool,google::protobuf::internal::NodeBase*___ptr64*___ptr64>
          (bool *param_1,NodeBase ***param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)&hash_internal::MixingHashState::kSeed + (ulonglong)(*param_1 != false);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8)) + (longlong)*param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + (longlong)*param_2;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8);
}

// ImplicitConvert<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64> @ 14f931070

/* public: static class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   google::protobuf::internal::TransparentSupport<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::ImplicitConvert<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64>(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
google::protobuf::internal::
TransparentSupport<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
ImplicitConvert<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64>
          (basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  pbVar1 = param_1;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  __return_storage_ptr__->_Mydata = (char *)pbVar1;
  __return_storage_ptr__->_Mysize = (param_1->_Mypair)._Myval2._Mysize;
  return __return_storage_ptr__;
}

// ImplicitConvert<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64> @ 14f9310a0

/* public: static class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   google::protobuf::internal::TransparentSupport<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::ImplicitConvert<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64>(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
google::protobuf::internal::
TransparentSupport<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
ImplicitConvert<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64>
          (basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,
          basic_string_view<char,struct_std::char_traits<char>_> *param_1)

{
  ulong64 uVar1;
  
  uVar1 = *(ulong64 *)(param_1 + 8);
  __return_storage_ptr__->_Mydata = *(char **)param_1;
  __return_storage_ptr__->_Mysize = uVar1;
  return __return_storage_ptr__;
}

// InitializeKeyValue<unsigned_int> @ 14f9310b0

/* private: void __cdecl google::protobuf::internal::MapFieldBase::InitializeKeyValue<unsigned
   int>(unsigned int * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::InitializeKeyValue<unsigned_int>
          (MapFieldBase *this,uint *param_1)

{
  *param_1 = 0;
  return;
}

// InitializeKeyValue<unsigned_int,unsigned_int> @ 14f9310c0

/* private: void __cdecl google::protobuf::internal::MapFieldBase::InitializeKeyValue<unsigned
   int,unsigned int>(unsigned int * __ptr64,unsigned int const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::InitializeKeyValue<unsigned_int,unsigned_int>
          (MapFieldBase *this,uint *param_1,uint *param_2)

{
  *param_1 = *param_2;
  return;
}

// InitializeKeyValue<float> @ 14f9310d0

/* private: void __cdecl google::protobuf::internal::MapFieldBase::InitializeKeyValue<float>(float *
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::InitializeKeyValue<float>
          (MapFieldBase *this,float *param_1)

{
  *param_1 = 0.0;
  return;
}

// InitializeKeyValue<double> @ 14f9310e0

/* private: void __cdecl google::protobuf::internal::MapFieldBase::InitializeKeyValue<double>(double
   * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::InitializeKeyValue<double>
          (MapFieldBase *this,double *param_1)

{
  *param_1 = 0.0;
  return;
}

// InitializeKeyValue<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f9310f0

/* private: void __cdecl google::protobuf::internal::MapFieldBase::InitializeKeyValue<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::
InitializeKeyValue<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (MapFieldBase *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  ulonglong uVar1;
  ThreadSafeArena *this_00;
  
  (param_1->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8) = 0;
  (param_1->_Mypair)._Myval2._Mysize = 0;
  (param_1->_Mypair)._Myval2._Myres = 0xf;
  (param_1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  uVar1 = *(ulonglong *)this;
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulonglong *)(uVar1 + 0xf);
  }
  if (uVar1 != 0) {
    this_00 = *(ThreadSafeArena **)this;
    if (((ulonglong)this_00 & 1) != 0) {
      this_00 = *(ThreadSafeArena **)((longlong)&(this_00->alloc_policy_).policy_ + 7);
    }
    ThreadSafeArena::AddCleanup
              (this_00,param_1,
               cleanup::
               arena_destruct_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              );
  }
  return;
}

// InitializeKeyValue<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string_view<char,std::char_traits<char>_>_> @ 14f931140

/* private: void __cdecl google::protobuf::internal::MapFieldBase::InitializeKeyValue<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
   std::basic_string_view<char,struct std::char_traits<char> > >(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::
InitializeKeyValue<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string_view<char,std::char_traits<char>_>_>
          (MapFieldBase *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  ulonglong uVar1;
  ThreadSafeArena *this_00;
  
  (param_1->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8) = 0;
  (param_1->_Mypair)._Myval2._Mysize = 0;
  (param_1->_Mypair)._Myval2._Myres = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            (param_1,param_2->_Mydata,param_2->_Mysize);
  uVar1 = *(ulonglong *)this;
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulonglong *)(uVar1 + 0xf);
  }
  if (uVar1 != 0) {
    this_00 = *(ThreadSafeArena **)this;
    if (((ulonglong)this_00 & 1) != 0) {
      this_00 = *(ThreadSafeArena **)((longlong)&(this_00->alloc_policy_).policy_ + 7);
    }
    ThreadSafeArena::AddCleanup
              (this_00,param_1,
               cleanup::
               arena_destruct_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              );
  }
  return;
}

// InitializeKeyValue<unsigned___int64> @ 14f9311b0

/* private: void __cdecl google::protobuf::internal::MapFieldBase::InitializeKeyValue<unsigned
   __int64>(unsigned __int64 * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::InitializeKeyValue<unsigned___int64>
          (MapFieldBase *this,__uint64 *param_1)

{
  *param_1 = 0;
  return;
}

// InitializeKeyValue<unsigned___int64,unsigned___int64> @ 14f9311c0

/* private: void __cdecl google::protobuf::internal::MapFieldBase::InitializeKeyValue<unsigned
   __int64,unsigned __int64>(unsigned __int64 * __ptr64,unsigned __int64 const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::InitializeKeyValue<unsigned___int64,unsigned___int64>
          (MapFieldBase *this,__uint64 *param_1,__uint64 *param_2)

{
  *param_1 = *param_2;
  return;
}

// InitializeKeyValue<bool> @ 14f9311d0

/* private: void __cdecl google::protobuf::internal::MapFieldBase::InitializeKeyValue<bool>(bool *
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::InitializeKeyValue<bool>(MapFieldBase *this,bool *param_1)

{
  *param_1 = false;
  return;
}

// InitializeKeyValue<bool,bool> @ 14f9311e0

/* private: void __cdecl
   google::protobuf::internal::MapFieldBase::InitializeKeyValue<bool,bool>(bool * __ptr64,bool const
   & __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::InitializeKeyValue<bool,bool>
          (MapFieldBase *this,bool *param_1,bool *param_2)

{
  *param_1 = *param_2;
  return;
}

// Invoke<absl::lts_20240722::hash_internal::MixingHashState,unsigned_char> @ 14f9311f0

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashSelect::UniquelyRepresentedProbe::Invoke<class
   absl::lts_20240722::hash_internal::MixingHashState,unsigned char>(class
   absl::lts_20240722::hash_internal::MixingHashState,unsigned char const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashSelect::UniquelyRepresentedProbe::
Invoke<absl::lts_20240722::hash_internal::MixingHashState,unsigned_char>
          (MixingHashState param_1,uchar *param_2)

{
  undefined1 auVar1 [16];
  byte *in_R8;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 + *in_R8;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
  return (MixingHashState)param_1.state_;
}

// Invoke<absl::lts_20240722::hash_internal::MixingHashState,unsigned_int> @ 14f931220

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashSelect::UniquelyRepresentedProbe::Invoke<class
   absl::lts_20240722::hash_internal::MixingHashState,unsigned int>(class
   absl::lts_20240722::hash_internal::MixingHashState,unsigned int const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashSelect::UniquelyRepresentedProbe::
Invoke<absl::lts_20240722::hash_internal::MixingHashState,unsigned_int>
          (MixingHashState param_1,uint *param_2)

{
  undefined1 auVar1 [16];
  uint *in_R8;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (ulonglong)*in_R8 + (longlong)param_2;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
  return (MixingHashState)param_1.state_;
}

// Invoke<absl::lts_20240722::hash_internal::MixingHashState,google::protobuf::internal::NodeBase*___ptr64*___ptr64> @ 14f931250

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashSelect::HashValueProbe::Invoke<class
   absl::lts_20240722::hash_internal::MixingHashState,struct google::protobuf::internal::NodeBase *
   __ptr64 * __ptr64>(class absl::lts_20240722::hash_internal::MixingHashState,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashSelect::HashValueProbe::
Invoke<absl::lts_20240722::hash_internal::MixingHashState,google::protobuf::internal::NodeBase*___ptr64*___ptr64>
          (MixingHashState param_1,NodeBase ***param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong *in_R8;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *in_R8 + (longlong)param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8)) + *in_R8;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8);
  return (MixingHashState)param_1.state_;
}

// Invoke<absl::lts_20240722::hash_internal::MixingHashState,std::basic_string_view<char,std::char_traits<char>_>_> @ 14f9312a0

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashSelect::HashValueProbe::Invoke<class
   absl::lts_20240722::hash_internal::MixingHashState,class std::basic_string_view<char,struct
   std::char_traits<char> > >(class absl::lts_20240722::hash_internal::MixingHashState,class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashSelect::HashValueProbe::
Invoke<absl::lts_20240722::hash_internal::MixingHashState,std::basic_string_view<char,std::char_traits<char>_>_>
          (MixingHashState param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  __uint64 _Var1;
  undefined1 auVar2 [16];
  __uint64 *in_R8;
  longlong local_res8;
  
  _Var1 = in_R8[1];
  MixingHashState::combine_contiguous((MixingHashState)&local_res8,(uchar *)param_2,*in_R8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = _Var1 + local_res8;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8);
  return (MixingHashState)param_1.state_;
}

// Invoke<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_> @ 14f931310

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashSelect::HashValueProbe::Invoke<class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<unsigned int const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> >(class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<unsigned int const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const &
   __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashSelect::HashValueProbe::
Invoke<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_>
          (MixingHashState param_1,
          tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 *in_R8;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 + *(uint *)in_R8[1];
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8)) + *(longlong *)*in_R8;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + *(longlong *)*in_R8;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0);
  return (MixingHashState)param_1.state_;
}

// Invoke<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_> @ 14f931390

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashSelect::HashValueProbe::Invoke<class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> >(class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashSelect::HashValueProbe::
Invoke<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_>
          (MixingHashState param_1,
          tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          *param_2)

{
  longlong *plVar1;
  __uint64 _Var2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 *in_R8;
  longlong local_res8;
  
  plVar1 = (longlong *)*in_R8;
  _Var2 = ((__uint64 *)in_R8[1])[1];
  MixingHashState::combine_contiguous
            ((MixingHashState)&local_res8,(uchar *)param_2,*(__uint64 *)in_R8[1]);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = _Var2 + local_res8;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8)) + *plVar1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8)) + *plVar1;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,8) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,0);
  return (MixingHashState)param_1.state_;
}

// Invoke<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_> @ 14f931440

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashSelect::HashValueProbe::Invoke<class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<unsigned __int64 const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> >(class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<unsigned __int64 const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const &
   __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashSelect::HashValueProbe::
Invoke<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_>
          (MixingHashState param_1,
          tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 *in_R8;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 + *(longlong *)in_R8[1];
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8)) + *(longlong *)*in_R8;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + *(longlong *)*in_R8;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0);
  return (MixingHashState)param_1.state_;
}

// Invoke<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_> @ 14f9314c0

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashSelect::HashValueProbe::Invoke<class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<bool const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> >(class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<bool const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashSelect::HashValueProbe::
Invoke<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_>
          (MixingHashState param_1,
          tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 *in_R8;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 + (*(char *)in_R8[1] != '\0');
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8)) + *(longlong *)*in_R8;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + *(longlong *)*in_R8;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0);
  return (MixingHashState)param_1.state_;
}

// Invoke<absl::lts_20240722::hash_internal::MixingHashState,unsigned___int64> @ 14f931530

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashSelect::UniquelyRepresentedProbe::Invoke<class
   absl::lts_20240722::hash_internal::MixingHashState,unsigned __int64>(class
   absl::lts_20240722::hash_internal::MixingHashState,unsigned __int64 const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashSelect::UniquelyRepresentedProbe::
Invoke<absl::lts_20240722::hash_internal::MixingHashState,unsigned___int64>
          (MixingHashState param_1,__uint64 *param_2)

{
  undefined1 auVar1 [16];
  longlong *in_R8;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *in_R8 + (longlong)param_2;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
  return (MixingHashState)param_1.state_;
}

// Invoke<absl::lts_20240722::hash_internal::MixingHashState,bool> @ 14f931560

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashSelect::HashValueProbe::Invoke<class
   absl::lts_20240722::hash_internal::MixingHashState,bool>(class
   absl::lts_20240722::hash_internal::MixingHashState,bool const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashSelect::HashValueProbe::
Invoke<absl::lts_20240722::hash_internal::MixingHashState,bool>
          (MixingHashState param_1,bool *param_2)

{
  undefined1 auVar1 [16];
  char *in_R8;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 + (*in_R8 != '\0');
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
  return (MixingHashState)param_1.state_;
}

// MergeFrom<google::protobuf::Message> @ 14f931590

/* public: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<class
   google::protobuf::Message>(class google::protobuf::internal::RepeatedPtrFieldBase const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::Message>
          (RepeatedPtrFieldBase *this,RepeatedPtrFieldBase *param_1)

{
  MergeFrom<google::protobuf::MessageLite>(this,param_1);
  return;
}

// Mutable<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_> @ 14f9315a0

/* protected: class google::protobuf::Message * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::Mutable<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Message> >(int) __ptr64 */

Message * __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
Mutable<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
          (RepeatedPtrFieldBase *this,int param_1)

{
  Message *pMVar1;
  
  pMVar1 = this->tagged_rep_or_elem_;
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
    pMVar1 = *(Message **)(&pMVar1->field_0x7 + (longlong)param_1 * 8);
  }
  return pMVar1;
}

// Own<google::protobuf::Message> @ 14f9315c0

/* public: void __cdecl google::protobuf::Arena::Own<class google::protobuf::Message>(class
   google::protobuf::Message * __ptr64) __ptr64 */

void __thiscall
google::protobuf::Arena::Own<google::protobuf::Message>(Arena *this,Message *param_1)

{
  if (param_1 != (Message *)0x0) {
    internal::ThreadSafeArena::AddCleanup
              (&this->impl_,param_1,internal::arena_delete_object<google::protobuf::MessageLite>);
    return;
  }
  return;
}

// ReadKey<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0> @ 14f9315e0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64 __cdecl google::protobuf::internal::ReadKey<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,0>(void const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
google::protobuf::internal::
ReadKey<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0>(void *param_1)

{
  return param_1;
}

// ReadKey<bool,0> @ 14f9315f0

/* bool __cdecl google::protobuf::internal::ReadKey<bool,0>(void const * __ptr64) */

bool __cdecl google::protobuf::internal::ReadKey<bool,0>(void *param_1)

{
  return (bool)*(undefined1 *)param_1;
}

// SpaceUsedExcludingSelfLong<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_> @ 14f931600

/* protected: unsigned __int64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::SpaceUsedExcludingSelfLong<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Message> >(void)const
   __ptr64 */

__uint64 __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
SpaceUsedExcludingSelfLong<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
          (RepeatedPtrFieldBase *this)

{
  __uint64 _Var1;
  uint uVar2;
  __uint64 _Var3;
  __uint64 _Var4;
  
  _Var3 = 0;
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
    _Var4 = (longlong)(this->capacity_proxy_ + 1) * 8 + 8;
    uVar2 = *(uint *)((longlong)this->tagged_rep_or_elem_ + -1);
    this = (RepeatedPtrFieldBase *)((longlong)this->tagged_rep_or_elem_ + 7);
  }
  else {
    uVar2 = (uint)(this->tagged_rep_or_elem_ != (void *)0x0);
    _Var4 = _Var3;
  }
  if (0 < (int)uVar2) {
    do {
      _Var1 = protobuf::Message::SpaceUsedLong((&this->tagged_rep_or_elem_)[_Var3]);
      _Var4 = _Var4 + _Var1;
      _Var3 = _Var3 + 1;
    } while ((longlong)_Var3 < (longlong)(int)uVar2);
  }
  return _Var4;
}

// Swap<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_> @ 14f931690

/* protected: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::Swap<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Message> >(class
   google::protobuf::internal::RepeatedPtrFieldBase * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
Swap<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
          (RepeatedPtrFieldBase *this,RepeatedPtrFieldBase *param_1)

{
  if (this->arena_ != param_1->arena_) {
    SwapFallback<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
              (this,param_1);
    return;
  }
  __std_swap_ranges_trivially_swappable_noalias(this,&this->arena_,param_1);
  return;
}

// SwapFallback<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_> @ 14f9316b0

/* protected: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::SwapFallback<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Message> >(class
   google::protobuf::internal::RepeatedPtrFieldBase * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
SwapFallback<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
          (RepeatedPtrFieldBase *this,RepeatedPtrFieldBase *param_1)

{
  uint uVar1;
  longlong lVar2;
  RepeatedPtrFieldBase *pRVar3;
  byte bVar4;
  RepeatedPtrFieldBase local_28;
  
  local_28.arena_ = param_1->arena_;
  lVar2 = 0;
  local_28.tagged_rep_or_elem_ = (void *)0x0;
  local_28.current_size_ = 0;
  local_28.capacity_proxy_ = 0;
  if (this->current_size_ != 0) {
    MergeFrom<google::protobuf::MessageLite>(&local_28,this);
  }
  if (param_1 != this) {
    if (0 < this->current_size_) {
      ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
                (this);
    }
    if (param_1->current_size_ != 0) {
      MergeFrom<google::protobuf::MessageLite>(this,param_1);
    }
  }
  memswap<16>((char *)param_1,(char *)&local_28);
  if ((local_28.tagged_rep_or_elem_ != (void *)0x0) && (local_28.arena_ == (Arena *)0x0)) {
    bVar4 = (byte)local_28.tagged_rep_or_elem_;
    if ((~bVar4 & 1) == 0) {
      uVar1 = *(uint *)((longlong)local_28.tagged_rep_or_elem_ + -1);
      pRVar3 = (RepeatedPtrFieldBase *)((longlong)local_28.tagged_rep_or_elem_ + 7);
    }
    else {
      pRVar3 = &local_28;
      uVar1 = (uint)(local_28.tagged_rep_or_elem_ != (void *)0x0);
    }
    if (0 < (int)uVar1) {
      do {
        InternalOutOfLineDeleteMessageLite((&pRVar3->tagged_rep_or_elem_)[lVar2]);
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)uVar1);
      bVar4 = (byte)local_28.tagged_rep_or_elem_;
    }
    if ((~bVar4 & 1) == 0) {
      ::operator_delete((void *)((longlong)local_28.tagged_rep_or_elem_ + -1),
                        (longlong)(local_28.capacity_proxy_ + 1) * 8 + 8);
    }
  }
  return;
}

// ToView<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f9317f0

/* public: static class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   google::protobuf::internal::TransparentSupport<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::ToView<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
google::protobuf::internal::
TransparentSupport<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
ToView<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  pbVar1 = param_1;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  __return_storage_ptr__->_Mydata = (char *)pbVar1;
  __return_storage_ptr__->_Mysize = (param_1->_Mypair)._Myval2._Mysize;
  return __return_storage_ptr__;
}

// ToView<std::basic_string_view<char,std::char_traits<char>_>_> @ 14f931820

/* public: static class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   google::protobuf::internal::TransparentSupport<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::ToView<class
   std::basic_string_view<char,struct std::char_traits<char> > >(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
google::protobuf::internal::
TransparentSupport<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
ToView<std::basic_string_view<char,std::char_traits<char>_>_>
          (basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,
          basic_string_view<char,struct_std::char_traits<char>_> *param_1)

{
  ulong64 uVar1;
  
  uVar1 = *(ulong64 *)(param_1 + 8);
  __return_storage_ptr__->_Mydata = *(char **)param_1;
  __return_storage_ptr__->_Mysize = uVar1;
  return __return_storage_ptr__;
}

// UnsafeArenaAddAllocated<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_> @ 14f931830

/* protected: void __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::UnsafeArenaAddAllocated<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::MessageLite> >(class
   google::protobuf::MessageLite * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
UnsafeArenaAddAllocated<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
          (RepeatedPtrFieldBase *this,MessageLite *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  byte bVar4;
  uint uVar5;
  RepeatedPtrFieldBase *pRVar6;
  int iVar7;
  bool bVar8;
  
  iVar2 = this->current_size_;
  iVar7 = this->capacity_proxy_ + 1;
  if (iVar2 < iVar7) {
    pvVar3 = this->tagged_rep_or_elem_;
    bVar4 = ~*(byte *)&this->tagged_rep_or_elem_ & 1;
    if (bVar4 == 0) {
      bVar8 = iVar7 <= *(int *)((longlong)pvVar3 + -1);
    }
    else {
      bVar8 = pvVar3 != (void *)0x0;
    }
    if (bVar8) {
      pRVar6 = this;
      if (bVar4 == 0) {
        pRVar6 = (RepeatedPtrFieldBase *)((longlong)iVar2 * 8 + 7 + (longlong)pvVar3);
      }
      if (this->arena_ == (Arena *)0x0) {
        InternalOutOfLineDeleteMessageLite(pRVar6->tagged_rep_or_elem_);
      }
    }
    else {
      if (bVar4 == 0) {
        uVar5 = *(uint *)((longlong)pvVar3 + -1);
      }
      else {
        uVar5 = (uint)(pvVar3 != (void *)0x0);
      }
      if (iVar2 < (int)uVar5) {
        if (bVar4 == 0) {
          *(undefined8 *)((longlong)*(int *)((longlong)pvVar3 + -1) * 8 + 7 + (longlong)pvVar3) =
               *(undefined8 *)((longlong)pvVar3 + (longlong)iVar2 * 8 + 7);
          piVar1 = (int *)((longlong)this->tagged_rep_or_elem_ + -1);
          *piVar1 = *piVar1 + 1;
        }
        else {
          this->tagged_rep_or_elem_ = pvVar3;
          piVar1 = (int *)((longlong)this->tagged_rep_or_elem_ + -1);
          *piVar1 = *piVar1 + 1;
        }
      }
      else if (bVar4 == 0) {
        *(int *)((longlong)pvVar3 + -1) = *(int *)((longlong)pvVar3 + -1) + 1;
      }
    }
  }
  else {
    InternalExtend(this,1);
    piVar1 = (int *)((longlong)this->tagged_rep_or_elem_ + -1);
    *piVar1 = *piVar1 + 1;
  }
  iVar2 = this->current_size_;
  this->current_size_ = iVar2 + 1;
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
    *(MessageLite **)((longlong)this->tagged_rep_or_elem_ + (longlong)iVar2 * 8 + 7) = param_1;
    return;
  }
  this->tagged_rep_or_elem_ = param_1;
  return;
}

// FUN_14f931940 @ 14f931940

void FUN_14f931940(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  switch(*(byte *)(param_1 + 0xf) & 0xf) {
  case 0:
    *(undefined1 *)param_3[1] = *(undefined1 *)(param_2 + 8);
    return;
  case 1:
    *(undefined4 *)param_3[1] = *(undefined4 *)(param_2 + 8);
    return;
  case 2:
    *(undefined8 *)param_3[1] = *(undefined8 *)(param_2 + 8);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  case 5:
    break;
  }
  plVar3 = (longlong *)(param_2 + 8);
  if (0xf < *(ulonglong *)(param_2 + 0x20)) {
    plVar3 = (longlong *)*plVar3;
  }
  plVar1 = (longlong *)*param_3;
  lVar2 = *(longlong *)(param_2 + 0x18);
  *plVar1 = (longlong)plVar3;
  plVar1[1] = lVar2;
  return;
}

// FUN_14f9319f0 @ 14f9319f0

void FUN_14f9319f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  switch(*(byte *)(param_1 + 0xf) & 0xf) {
  case 0:
    **(undefined1 **)(*param_2 + 8) = *(undefined1 *)(*(longlong *)param_2[2] + 8);
    return;
  case 1:
    **(undefined4 **)(*param_2 + 8) = *(undefined4 *)(*(longlong *)param_2[2] + 8);
    return;
  case 2:
    **(undefined8 **)(*param_2 + 8) = *(undefined8 *)(*(longlong *)param_2[2] + 8);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  case 5:
    break;
  }
  lVar1 = *(longlong *)param_2[2];
  lVar3 = lVar1 + 8;
  if (0xf < *(ulonglong *)(lVar1 + 0x20)) {
    lVar3 = *(longlong *)(lVar1 + 8);
  }
  plVar2 = *(longlong **)*param_2;
  lVar1 = *(longlong *)(lVar1 + 0x18);
  *plVar2 = lVar3;
  plVar2[1] = lVar1;
  return;
}

// FUN_14f931ac0 @ 14f931ac0

/* WARNING: Enum "CppType": Some values do not have unique names */

undefined8 FUN_14f931ac0(MapKey *param_1,KeyMapBase<unsigned_int> *param_2,longlong *param_3)

{
  bool bVar1;
  CppType CVar2;
  uint uVar3;
  __uint64 _Var4;
  basic_string_view<char,std::char_traits<char>_> *pbVar5;
  basic_string_view<char,std::char_traits<char>_> local_38;
  NodeAndBucket local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  CVar2 = google::protobuf::MapKey::type(param_1);
  switch(CVar2) {
  case CPPTYPE_INT32:
    uVar3 = google::protobuf::MapKey::GetInt32Value(param_1);
    goto LAB_14f931b07;
  case CPPTYPE_INT64:
    _Var4 = google::protobuf::MapKey::GetInt64Value(param_1);
    google::protobuf::internal::KeyMapBase<unsigned___int64>::FindHelper
              ((KeyMapBase<unsigned___int64> *)param_2,(NodeAndBucket *)&local_38,_Var4);
    local_28.node = (NodeBase *)local_38._Mydata;
    break;
  case CPPTYPE_UINT32:
    uVar3 = google::protobuf::MapKey::GetUInt32Value(param_1);
LAB_14f931b07:
    google::protobuf::internal::KeyMapBase<unsigned_int>::FindHelper
              (param_2,(NodeAndBucket *)&local_38,uVar3);
    local_28.node = (NodeBase *)local_38._Mydata;
    break;
  case CPPTYPE_UINT64:
    _Var4 = google::protobuf::MapKey::GetUInt64Value(param_1);
    google::protobuf::internal::KeyMapBase<unsigned___int64>::FindHelper
              ((KeyMapBase<unsigned___int64> *)param_2,(NodeAndBucket *)&local_38,_Var4);
    local_28.node = (NodeBase *)local_38._Mydata;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  case CPPTYPE_BOOL:
    bVar1 = google::protobuf::MapKey::GetBoolValue(param_1);
    google::protobuf::internal::KeyMapBase<bool>::FindHelper
              ((KeyMapBase<bool> *)param_2,(NodeAndBucket *)&local_38,bVar1);
    local_28.node = (NodeBase *)local_38._Mydata;
    break;
  case CPPTYPE_STRING:
    pbVar5 = google::protobuf::MapKey::GetStringValue(param_1,&local_18);
    local_38._Mydata = pbVar5->_Mydata;
    local_38._Mysize = pbVar5->_Mysize;
    google::protobuf::internal::
    KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::FindHelper
              ((KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
               param_2,&local_28,&local_38);
  }
  if (local_28.node == (NodeBase *)0x0) {
    return 0;
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
    *(longlong *)*param_3 =
         (longlong)((longlong)&(local_28.node)->next + (ulonglong)(byte)param_2->field_0xe);
  }
  return 1;
}

// FUN_14f931c20 @ 14f931c20

/* WARNING: Enum "CppType": Some values do not have unique names */

void FUN_14f931c20(MapKey *param_1,KeyMapBase<unsigned_int> *param_2)

{
  bool bVar1;
  CppType CVar2;
  uint uVar3;
  __uint64 _Var4;
  basic_string_view<char,std::char_traits<char>_> *pbVar5;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  CVar2 = google::protobuf::MapKey::type(param_1);
  switch(CVar2) {
  case CPPTYPE_INT32:
    uVar3 = google::protobuf::MapKey::GetInt32Value(param_1);
    break;
  case CPPTYPE_INT64:
    _Var4 = google::protobuf::MapKey::GetInt64Value(param_1);
    google::protobuf::internal::KeyMapBase<unsigned___int64>::EraseImpl
              ((KeyMapBase<unsigned___int64> *)param_2,_Var4);
    return;
  case CPPTYPE_UINT32:
    uVar3 = google::protobuf::MapKey::GetUInt32Value(param_1);
    break;
  case CPPTYPE_UINT64:
    _Var4 = google::protobuf::MapKey::GetUInt64Value(param_1);
    google::protobuf::internal::KeyMapBase<unsigned___int64>::EraseImpl
              ((KeyMapBase<unsigned___int64> *)param_2,_Var4);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  case CPPTYPE_BOOL:
    bVar1 = google::protobuf::MapKey::GetBoolValue(param_1);
    google::protobuf::internal::KeyMapBase<bool>::EraseImpl((KeyMapBase<bool> *)param_2,bVar1);
    return;
  case CPPTYPE_STRING:
    pbVar5 = google::protobuf::MapKey::GetStringValue(param_1,&local_18);
    local_28._Mydata = pbVar5->_Mydata;
    local_28._Mysize = pbVar5->_Mysize;
    google::protobuf::internal::
    KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::EraseImpl
              ((KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
               param_2,&local_28);
    return;
  }
  google::protobuf::internal::KeyMapBase<unsigned_int>::EraseImpl(param_2,uVar3);
  return;
}

// FUN_14f931d40 @ 14f931d40

/* WARNING: Enum "CppType": Some values do not have unique names */

undefined8 FUN_14f931d40(MapKey *param_1,KeyMapBase<unsigned_int> *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  char *pcVar4;
  ulong64 uVar5;
  bool bVar6;
  CppType CVar7;
  uint uVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  __uint64 _Var9;
  undefined7 extraout_var_01;
  basic_string_view<char,std::char_traits<char>_> *pbVar10;
  ulonglong uVar11;
  undefined7 extraout_var_02;
  ThreadSafeArena *this;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  CVar7 = google::protobuf::MapKey::type(param_1);
  switch(CVar7) {
  case CPPTYPE_INT32:
    uVar8 = google::protobuf::MapKey::GetInt32Value(param_1);
    break;
  case CPPTYPE_INT64:
    _Var9 = google::protobuf::MapKey::GetInt64Value(param_1);
    goto LAB_14f931dc0;
  case CPPTYPE_UINT32:
    uVar8 = google::protobuf::MapKey::GetUInt32Value(param_1);
    break;
  case CPPTYPE_UINT64:
    _Var9 = google::protobuf::MapKey::GetUInt64Value(param_1);
LAB_14f931dc0:
    plVar2 = (longlong *)param_3[1];
    *(__uint64 *)(*plVar2 + 8) = _Var9;
    google::protobuf::internal::KeyMapBase<unsigned___int64>::InsertOrReplaceNode
              ((KeyMapBase<unsigned___int64> *)param_2,(KeyNode<unsigned___int64> *)*plVar2);
    return CONCAT71(extraout_var_00,1);
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  case CPPTYPE_BOOL:
    bVar6 = google::protobuf::MapKey::GetBoolValue(param_1);
    plVar2 = (longlong *)param_3[1];
    *(bool *)(*plVar2 + 8) = bVar6;
    google::protobuf::internal::KeyMapBase<bool>::InsertOrReplaceNode
              ((KeyMapBase<bool> *)param_2,(KeyNode<bool> *)*plVar2);
    return CONCAT71(extraout_var_01,1);
  case CPPTYPE_STRING:
    pbVar10 = google::protobuf::MapKey::GetStringValue(param_1,&local_18);
    puVar1 = (ulonglong *)*param_3;
    plVar2 = (longlong *)param_3[1];
    pcVar4 = pbVar10->_Mydata;
    uVar5 = pbVar10->_Mysize;
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(lVar3 + 8),pcVar4
               ,uVar5);
    uVar11 = *puVar1;
    if ((uVar11 & 1) != 0) {
      uVar11 = *(ulonglong *)(uVar11 + 0xf);
    }
    if (uVar11 != 0) {
      this = (ThreadSafeArena *)*puVar1;
      if (((ulonglong)this & 1) != 0) {
        this = *(ThreadSafeArena **)((longlong)&(this->alloc_policy_).policy_ + 7);
      }
      google::protobuf::internal::ThreadSafeArena::AddCleanup
                (this,(void *)(lVar3 + 8),
                 google::protobuf::internal::cleanup::
                 arena_destruct_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                );
    }
    google::protobuf::internal::
    KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
    InsertOrReplaceNode((KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                         *)param_2,
                        (KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                         *)*plVar2);
    return CONCAT71(extraout_var_02,1);
  }
  plVar2 = (longlong *)param_3[1];
  *(uint *)(*plVar2 + 8) = uVar8;
  google::protobuf::internal::KeyMapBase<unsigned_int>::InsertOrReplaceNode
            (param_2,(KeyNode<unsigned_int> *)*plVar2);
  return CONCAT71(extraout_var,1);
}

// FUN_14f931f00 @ 14f931f00

void FUN_14f931f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 *local_18;
  
  local_28 = local_res18;
  local_18 = &local_res10;
  local_res10 = param_2;
  local_res18[0] = param_3;
  local_20 = param_1;
  FUN_14f931f40(param_1,&local_28);
  return;
}

// FUN_14f931f40 @ 14f931f40

void FUN_14f931f40(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  ulonglong *puVar3;
  Reflection *this;
  ulonglong uVar4;
  ThreadSafeArena *this_00;
  Metadata *pMVar5;
  FieldDescriptor *pFVar6;
  Message *pMVar7;
  undefined8 *puVar8;
  Metadata local_28;
  Metadata local_18;
  
  switch(*(byte *)(param_1 + 0xf) >> 4) {
  case 0:
    *(undefined1 *)((ulonglong)*(byte *)(param_2[1] + 0xe) + *(longlong *)param_2[2]) = 0;
    break;
  case 1:
  case 3:
    *(undefined4 *)((ulonglong)*(byte *)(param_2[1] + 0xe) + *(longlong *)param_2[2]) = 0;
    return;
  case 2:
  case 4:
    *(undefined8 *)((ulonglong)*(byte *)(param_2[1] + 0xe) + *(longlong *)param_2[2]) = 0;
    return;
  case 5:
    puVar8 = (undefined8 *)((ulonglong)*(byte *)(param_2[1] + 0xe) + *(longlong *)param_2[2]);
    puVar3 = *(ulonglong **)*param_2;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0xf;
    *(undefined1 *)puVar8 = 0;
    uVar4 = *puVar3;
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulonglong *)(uVar4 + 0xf);
    }
    if (uVar4 != 0) {
      this_00 = (ThreadSafeArena *)*puVar3;
      if (((ulonglong)this_00 & 1) != 0) {
        this_00 = *(ThreadSafeArena **)((longlong)&(this_00->alloc_policy_).policy_ + 7);
      }
      google::protobuf::internal::ThreadSafeArena::AddCleanup
                (this_00,puVar8,
                 google::protobuf::internal::cleanup::
                 arena_destruct_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                );
      return;
    }
    break;
  case 6:
    bVar1 = *(byte *)(param_2[1] + 0xe);
    lVar2 = *(longlong *)param_2[2];
    puVar3 = *(ulonglong **)*param_2;
    pMVar7 = (Message *)puVar3[1];
    pMVar5 = google::protobuf::Message::GetMetadata(pMVar7,&local_28);
    this = pMVar5->reflection;
    pMVar5 = google::protobuf::Message::GetMetadata(pMVar7,&local_18);
    pFVar6 = google::protobuf::Descriptor::map_value(pMVar5->descriptor);
    pMVar7 = google::protobuf::Reflection::GetMessage(this,pMVar7,pFVar6,(MessageFactory *)0x0);
    puVar8 = (undefined8 *)(**(code **)(*(longlong *)pMVar7 + 0x18))(pMVar7);
    uVar4 = *puVar3;
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulonglong *)(uVar4 + 0xf);
    }
    (*(code *)puVar8[6])(*puVar8,(ulonglong)bVar1 + lVar2,uVar4);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  }
  return;
}

// _Atomic_address_as<int,std::_Atomic_padded<google::protobuf::internal::MapFieldBase::State>_> @ 14f9320e0

/* int const volatile * __ptr64 __cdecl std::_Atomic_address_as<int,struct std::_Atomic_padded<enum
   google::protobuf::internal::MapFieldBase::State> >(struct std::_Atomic_padded<enum
   google::protobuf::internal::MapFieldBase::State> const & __ptr64) */

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<google::protobuf::internal::MapFieldBase::State>_>
          (_Atomic_padded<google::protobuf::internal::MapFieldBase::State> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<void_(__cdecl*)(google::protobuf::internal::MapFieldBaseForParse_const&___ptr64,bool)>_> @ 14f9320f0

/* __int64 volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<void (__cdecl*)(class google::protobuf::internal::MapFieldBaseForParse const
   & __ptr64,bool)> >(struct std::_Atomic_padded<void (__cdecl*)(class
   google::protobuf::internal::MapFieldBaseForParse const & __ptr64,bool)> & __ptr64) */

__int64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<void_(__cdecl*)(google::protobuf::internal::MapFieldBaseForParse_const&___ptr64,bool)>_>
          (_Atomic_padded<void_(__cdecl*)(google::protobuf::internal::MapFieldBaseForParse_const&___ptr64,bool)>
           *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<void_(__cdecl*)(google::protobuf::internal::MapFieldBaseForParse_const&___ptr64,bool)>_> @ 14f932100

/* __int64 const volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<void (__cdecl*)(class google::protobuf::internal::MapFieldBaseForParse const
   & __ptr64,bool)> >(struct std::_Atomic_padded<void (__cdecl*)(class
   google::protobuf::internal::MapFieldBaseForParse const & __ptr64,bool)> const & __ptr64) */

__int64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<void_(__cdecl*)(google::protobuf::internal::MapFieldBaseForParse_const&___ptr64,bool)>_>
          (_Atomic_padded<void_(__cdecl*)(google::protobuf::internal::MapFieldBaseForParse_const&___ptr64,bool)>
           *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<google::protobuf::internal::MapFieldBaseForParse::TaggedPtr>_> @ 14f932110

/* __int64 volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<enum google::protobuf::internal::MapFieldBaseForParse::TaggedPtr> >(struct
   std::_Atomic_padded<enum google::protobuf::internal::MapFieldBaseForParse::TaggedPtr> & __ptr64)
    */

__int64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<google::protobuf::internal::MapFieldBaseForParse::TaggedPtr>_>
          (_Atomic_padded<google::protobuf::internal::MapFieldBaseForParse::TaggedPtr> *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,void_(__cdecl*)(google::protobuf::internal::MapFieldBaseForParse_const&___ptr64,bool)> @ 14f932120

/* __int64 __cdecl std::_Atomic_reinterpret_as<__int64,void (__cdecl*)(class
   google::protobuf::internal::MapFieldBaseForParse const & __ptr64,bool)>(void (__cdecl*const &
   __ptr64)(class google::protobuf::internal::MapFieldBaseForParse const & __ptr64,bool)) */

__int64 __cdecl
std::
_Atomic_reinterpret_as<__int64,void_(__cdecl*)(google::protobuf::internal::MapFieldBaseForParse_const&___ptr64,bool)>
          (_func_void_MapFieldBaseForParse_ptr_bool **param_1)

{
  return (__int64)*param_1;
}

// _Atomic_reinterpret_as<__int64,google::protobuf::internal::MapFieldBaseForParse::TaggedPtr> @ 14f932130

/* __int64 __cdecl std::_Atomic_reinterpret_as<__int64,enum
   google::protobuf::internal::MapFieldBaseForParse::TaggedPtr>(enum
   google::protobuf::internal::MapFieldBaseForParse::TaggedPtr const & __ptr64) */

__int64 __cdecl
std::_Atomic_reinterpret_as<__int64,google::protobuf::internal::MapFieldBaseForParse::TaggedPtr>
          (TaggedPtr *param_1)

{
  return *param_1;
}

// addressof<google::protobuf::internal::MapFieldBase::State_const_> @ 14f932140

/* enum google::protobuf::internal::MapFieldBase::State const * __ptr64 __cdecl std::addressof<enum
   google::protobuf::internal::MapFieldBase::State const >(enum
   google::protobuf::internal::MapFieldBase::State const & __ptr64) */

State * __cdecl
std::addressof<google::protobuf::internal::MapFieldBase::State_const_>(State *param_1)

{
  return param_1;
}

// addressof<google::protobuf::internal::MapFieldBaseForParse::TaggedPtr_const_> @ 14f932150

/* enum google::protobuf::internal::MapFieldBaseForParse::TaggedPtr const * __ptr64 __cdecl
   std::addressof<enum google::protobuf::internal::MapFieldBaseForParse::TaggedPtr const >(enum
   google::protobuf::internal::MapFieldBaseForParse::TaggedPtr const & __ptr64) */

TaggedPtr * __cdecl
std::addressof<google::protobuf::internal::MapFieldBaseForParse::TaggedPtr_const_>
          (TaggedPtr *param_1)

{
  return param_1;
}

// addressof<google::protobuf::internal::MapFieldBaseForParse::TaggedPtr> @ 14f932160

/* enum google::protobuf::internal::MapFieldBaseForParse::TaggedPtr * __ptr64 __cdecl
   std::addressof<enum google::protobuf::internal::MapFieldBaseForParse::TaggedPtr>(enum
   google::protobuf::internal::MapFieldBaseForParse::TaggedPtr & __ptr64) */

TaggedPtr * __cdecl
std::addressof<google::protobuf::internal::MapFieldBaseForParse::TaggedPtr>(TaggedPtr *param_1)

{
  return param_1;
}

// arena_delete_object<google::protobuf::MessageLite> @ 14f932170

/* void __cdecl google::protobuf::internal::arena_delete_object<class
   google::protobuf::MessageLite>(void * __ptr64) */

void __cdecl
google::protobuf::internal::arena_delete_object<google::protobuf::MessageLite>(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f93217d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)param_1)(param_1,1);
    return;
  }
  return;
}

// arena_destruct_object<google::protobuf::internal::MapFieldBase::ReflectionPayload> @ 14f932190

/* void __cdecl google::protobuf::internal::cleanup::arena_destruct_object<struct
   google::protobuf::internal::MapFieldBase::ReflectionPayload>(void * __ptr64) */

void __cdecl
google::protobuf::internal::cleanup::
arena_destruct_object<google::protobuf::internal::MapFieldBase::ReflectionPayload>(void *param_1)

{
  if (*(longlong *)param_1 != 0) {
    RepeatedPtrFieldBase::DestroyProtos(param_1);
  }
  return;
}

// cast<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_> @ 14f9321b0

/* private: static class google::protobuf::Message * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::cast<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Message> >(void * __ptr64)
    */

Message * __cdecl
google::protobuf::internal::RepeatedPtrFieldBase::
cast<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>(void *param_1)

{
  return param_1;
}

// combine<unsigned_char> @ 14f9321c0

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashStateBase<class
   absl::lts_20240722::hash_internal::MixingHashState>::combine<unsigned char>(class
   absl::lts_20240722::hash_internal::MixingHashState,unsigned char const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashStateBase<absl::lts_20240722::hash_internal::MixingHashState>
::combine<unsigned_char>(MixingHashState param_1,uchar *param_2)

{
  undefined1 auVar1 [16];
  byte *in_R8;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 + *in_R8;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
  return (MixingHashState)param_1.state_;
}

// combine<std::basic_string_view<char,std::char_traits<char>_>,google::protobuf::internal::NodeBase*___ptr64*___ptr64> @ 14f9321f0

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashStateBase<class
   absl::lts_20240722::hash_internal::MixingHashState>::combine<class
   std::basic_string_view<char,struct std::char_traits<char> >,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64>(class
   absl::lts_20240722::hash_internal::MixingHashState,class std::basic_string_view<char,struct
   std::char_traits<char> > const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 *
   __ptr64 const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashStateBase<absl::lts_20240722::hash_internal::MixingHashState>
::
combine<std::basic_string_view<char,std::char_traits<char>_>,google::protobuf::internal::NodeBase*___ptr64*___ptr64>
          (MixingHashState param_1,basic_string_view<char,std::char_traits<char>_> *param_2,
          NodeBase ***param_3)

{
  NodeBase **ppNVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong *in_R9;
  longlong local_res8;
  
  ppNVar1 = param_3[1];
  MixingHashState::combine_contiguous
            ((MixingHashState)&local_res8,(uchar *)param_2,(__uint64)*param_3);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)ppNVar1 + local_res8;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + *in_R9;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8)) + *in_R9;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0);
  return (MixingHashState)param_1.state_;
}

// combine<std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_> @ 14f932290

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashStateBase<class
   absl::lts_20240722::hash_internal::MixingHashState>::combine<class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> >(class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashStateBase<absl::lts_20240722::hash_internal::MixingHashState>
::
combine<std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_>
          (MixingHashState param_1,
          tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          *param_2)

{
  longlong *plVar1;
  __uint64 _Var2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 *in_R8;
  longlong local_res8;
  
  plVar1 = (longlong *)*in_R8;
  _Var2 = ((__uint64 *)in_R8[1])[1];
  MixingHashState::combine_contiguous
            ((MixingHashState)&local_res8,(uchar *)param_2,*(__uint64 *)in_R8[1]);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = _Var2 + local_res8;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8)) + *plVar1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8)) + *plVar1;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,8) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,0);
  return (MixingHashState)param_1.state_;
}

// combine<std::tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_> @ 14f932340

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashStateBase<class
   absl::lts_20240722::hash_internal::MixingHashState>::combine<class std::tuple<bool const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> >(class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<bool const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashStateBase<absl::lts_20240722::hash_internal::MixingHashState>
::
combine<std::tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_>
          (MixingHashState param_1,
          tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 *in_R8;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 + (*(char *)in_R8[1] != '\0');
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8)) + *(longlong *)*in_R8;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + *(longlong *)*in_R8;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0);
  return (MixingHashState)param_1.state_;
}

// combine<bool,google::protobuf::internal::NodeBase*___ptr64*___ptr64> @ 14f9323b0

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashStateBase<class
   absl::lts_20240722::hash_internal::MixingHashState>::combine<bool,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64>(class
   absl::lts_20240722::hash_internal::MixingHashState,bool const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashStateBase<absl::lts_20240722::hash_internal::MixingHashState>
::combine<bool,google::protobuf::internal::NodeBase*___ptr64*___ptr64>
          (MixingHashState param_1,bool *param_2,NodeBase ***param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong *in_R9;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 + (*(char *)param_3 != '\0');
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8)) + *in_R9;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + *in_R9;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0);
  return (MixingHashState)param_1.state_;
}

// combine_contiguous<char> @ 14f932420

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashStateBase<class
   absl::lts_20240722::hash_internal::MixingHashState>::combine_contiguous<char>(class
   absl::lts_20240722::hash_internal::MixingHashState,char const * __ptr64,unsigned __int64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashStateBase<absl::lts_20240722::hash_internal::MixingHashState>
::combine_contiguous<char>(MixingHashState param_1,char *param_2,__uint64 param_3)

{
  MixingHashState::combine_contiguous(param_1,(uchar *)param_2,param_3);
  return (MixingHashState)param_1.state_;
}

// forward<google::protobuf::Arena*___ptr64&___ptr64> @ 14f932440

/* class google::protobuf::Arena * __ptr64 & __ptr64 __cdecl std::forward<class
   google::protobuf::Arena * __ptr64 & __ptr64>(class google::protobuf::Arena * __ptr64 & __ptr64)
    */

Arena ** __cdecl std::forward<google::protobuf::Arena*___ptr64&___ptr64>(Arena **param_1)

{
  return param_1;
}

// forward<unsigned_int_const&___ptr64> @ 14f932450

/* unsigned int const & __ptr64 __cdecl std::forward<unsigned int const & __ptr64>(unsigned int
   const & __ptr64) */

uint * __cdecl std::forward<unsigned_int_const&___ptr64>(uint *param_1)

{
  return param_1;
}

// forward<google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> @ 14f932460

/* struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64 __cdecl
   std::forward<struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const &
   __ptr64>(struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64) */

NodeBase *** __cdecl
std::forward<google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          (NodeBase ***param_1)

{
  return param_1;
}

// forward<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64> @ 14f932470

/* class std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64 __cdecl
   std::forward<class std::basic_string_view<char,struct std::char_traits<char> > const &
   __ptr64>(class std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
std::forward<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64>
          (basic_string_view<char,struct_std::char_traits<char>_> *param_1)

{
  return (basic_string_view<char,std::char_traits<char>_> *)param_1;
}

// forward<unsigned___int64_const&___ptr64> @ 14f932480

/* unsigned __int64 const & __ptr64 __cdecl std::forward<unsigned __int64 const & __ptr64>(unsigned
   __int64 const & __ptr64) */

__uint64 * __cdecl std::forward<unsigned___int64_const&___ptr64>(__uint64 *param_1)

{
  return param_1;
}

// forward<bool_const&___ptr64> @ 14f932490

/* bool const & __ptr64 __cdecl std::forward<bool const & __ptr64>(bool const & __ptr64) */

bool * __cdecl std::forward<bool_const&___ptr64>(bool *param_1)

{
  return param_1;
}

// get<1,unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> @ 14f9324a0

/* struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64 __cdecl
   std::get<1,unsigned int const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 *
   __ptr64 const & __ptr64>(class std::tuple<unsigned int const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const & __ptr64) */

NodeBase *** __cdecl
std::
get<1,unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          (tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *param_1)

{
  return *(NodeBase ****)param_1;
}

// get<1,std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> @ 14f9324b0

/* struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64 __cdecl
   std::get<1,class std::basic_string_view<char,struct std::char_traits<char> > const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64>(class
   std::tuple<class std::basic_string_view<char,struct std::char_traits<char> > const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const &
   __ptr64) */

NodeBase *** __cdecl
std::
get<1,std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          (tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *param_1)

{
  return *(NodeBase ****)param_1;
}

// get<1,unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> @ 14f9324c0

/* struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64 __cdecl
   std::get<1,unsigned __int64 const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64
   * __ptr64 const & __ptr64>(class std::tuple<unsigned __int64 const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const & __ptr64) */

NodeBase *** __cdecl
std::
get<1,unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          (tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *param_1)

{
  return *(NodeBase ****)param_1;
}

// get<1,bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> @ 14f9324d0

/* struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64 __cdecl
   std::get<1,bool const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64
   const & __ptr64>(class std::tuple<bool const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const & __ptr64) */

NodeBase *** __cdecl
std::
get<1,bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          (tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *param_1)

{
  return *(NodeBase ****)param_1;
}

// get<0,unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> @ 14f9324e0

/* unsigned int const & __ptr64 __cdecl std::get<0,unsigned int const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64>(class
   std::tuple<unsigned int const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 *
   __ptr64 const & __ptr64> const & __ptr64) */

uint * __cdecl
std::
get<0,unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          (tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *param_1)

{
  return *(uint **)(param_1 + 8);
}

// get<0,std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> @ 14f9324f0

/* class std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64 __cdecl
   std::get<0,class std::basic_string_view<char,struct std::char_traits<char> > const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64>(class
   std::tuple<class std::basic_string_view<char,struct std::char_traits<char> > const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const &
   __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
std::
get<0,std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          (tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *param_1)

{
  return *(basic_string_view<char,std::char_traits<char>_> **)(param_1 + 8);
}

// get<0,unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> @ 14f932500

/* unsigned __int64 const & __ptr64 __cdecl std::get<0,unsigned __int64 const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64>(class
   std::tuple<unsigned __int64 const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64
   * __ptr64 const & __ptr64> const & __ptr64) */

__uint64 * __cdecl
std::
get<0,unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          (tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *param_1)

{
  return *(__uint64 **)(param_1 + 8);
}

// get<0,bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> @ 14f932510

/* bool const & __ptr64 __cdecl std::get<0,bool const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64>(class std::tuple<bool
   const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64>
   const & __ptr64) */

bool * __cdecl
std::
get<0,bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          (tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *param_1)

{
  return *(bool **)(param_1 + 8);
}

// hash<std::tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>,0> @ 14f932520

/* public: static unsigned __int64 __cdecl
   absl::lts_20240722::hash_internal::MixingHashState::hash<class std::tuple<unsigned int const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64>,0>(class
   std::tuple<unsigned int const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 *
   __ptr64 const & __ptr64> const & __ptr64) */

__uint64 __cdecl
absl::lts_20240722::hash_internal::MixingHashState::
hash<std::tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>,0>
          (tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)&kSeed + (ulonglong)**(uint **)(param_1 + 8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8)) + **(longlong **)param_1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + **(longlong **)param_1;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8);
}

// hash<std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>,0> @ 14f932590

/* public: static unsigned __int64 __cdecl
   absl::lts_20240722::hash_internal::MixingHashState::hash<class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64>,0>(class
   std::tuple<class std::basic_string_view<char,struct std::char_traits<char> > const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const &
   __ptr64) */

__uint64 __cdecl
absl::lts_20240722::hash_internal::MixingHashState::
hash<std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>,0>
          (tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *param_1)

{
  longlong *plVar1;
  __uint64 _Var2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong local_res8;
  
  plVar1 = *(longlong **)param_1;
  _Var2 = (*(__uint64 **)(param_1 + 8))[1];
  combine_contiguous((MixingHashState)&local_res8,(uchar *)&kSeed,**(__uint64 **)(param_1 + 8));
  auVar3._8_8_ = 0;
  auVar3._0_8_ = _Var2 + local_res8;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8)) + *plVar1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8)) + *plVar1;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,8);
}

// hash<std::tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>,0> @ 14f932630

/* public: static unsigned __int64 __cdecl
   absl::lts_20240722::hash_internal::MixingHashState::hash<class std::tuple<unsigned __int64 const
   & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const &
   __ptr64>,0>(class std::tuple<unsigned __int64 const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const & __ptr64) */

__uint64 __cdecl
absl::lts_20240722::hash_internal::MixingHashState::
hash<std::tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>,0>
          (tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)&kSeed + **(longlong **)(param_1 + 8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8)) + **(longlong **)param_1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + **(longlong **)param_1;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8);
}

// hash<std::tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>,0> @ 14f9326a0

/* public: static unsigned __int64 __cdecl
   absl::lts_20240722::hash_internal::MixingHashState::hash<class std::tuple<bool const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64>,0>(class
   std::tuple<bool const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64
   const & __ptr64> const & __ptr64) */

__uint64 __cdecl
absl::lts_20240722::hash_internal::MixingHashState::
hash<std::tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>,0>
          (tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
           *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)&kSeed + (ulonglong)(**(char **)(param_1 + 8) != '\0');
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8)) + **(longlong **)param_1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + **(longlong **)param_1;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8);
}

// hash_bytes<absl::lts_20240722::hash_internal::MixingHashState,unsigned_char> @ 14f932710

/* class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::hash_bytes<class
   absl::lts_20240722::hash_internal::MixingHashState,unsigned char>(class
   absl::lts_20240722::hash_internal::MixingHashState,unsigned char const & __ptr64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::
hash_bytes<absl::lts_20240722::hash_internal::MixingHashState,unsigned_char>
          (MixingHashState param_1,uchar *param_2)

{
  undefined1 auVar1 [16];
  byte *in_R8;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 + *in_R8;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8);
  return (MixingHashState)param_1.state_;
}

// hash_range_or_bytes<absl::lts_20240722::hash_internal::MixingHashState,char> @ 14f932740

/* class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::hash_range_or_bytes<class
   absl::lts_20240722::hash_internal::MixingHashState,char>(class
   absl::lts_20240722::hash_internal::MixingHashState,char const * __ptr64,unsigned __int64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::
hash_range_or_bytes<absl::lts_20240722::hash_internal::MixingHashState,char>
          (MixingHashState param_1,char *param_2,__uint64 param_3)

{
  MixingHashState::combine_contiguous(param_1,(uchar *)param_2,param_3);
  return (MixingHashState)param_1.state_;
}

// hash_tuple<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>,0,1> @ 14f932760

/* class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::hash_tuple<class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64>,0,1>(class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const & __ptr64,struct
   std::integer_sequence<unsigned __int64,0,1>) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::
hash_tuple<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>,0,1>
          (MixingHashState param_1,
          tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          *param_2,integer_sequence<unsigned___int64,0,1> param_3)

{
  __uint64 *p_Var1;
  longlong *plVar2;
  __uint64 _Var3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined7 in_register_00000081;
  longlong local_res8;
  
  p_Var1 = (__uint64 *)((undefined8 *)CONCAT71(in_register_00000081,param_3))[1];
  plVar2 = *(longlong **)CONCAT71(in_register_00000081,param_3);
  _Var3 = p_Var1[1];
  MixingHashState::combine_contiguous((MixingHashState)&local_res8,(uchar *)param_2,*p_Var1);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = _Var3 + local_res8;
  lVar4 = *plVar2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,8)) + lVar4;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar6,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar6,8)) + lVar4;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar7,8) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar7,0);
  return (MixingHashState)param_1.state_;
}

// hash_tuple<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>,0,1> @ 14f932810

/* class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::hash_tuple<class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<bool const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64>,0,1>(class
   absl::lts_20240722::hash_internal::MixingHashState,class std::tuple<bool const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const & __ptr64,struct
   std::integer_sequence<unsigned __int64,0,1>) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::
hash_tuple<absl::lts_20240722::hash_internal::MixingHashState,std::tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>,0,1>
          (MixingHashState param_1,
          tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          *param_2,integer_sequence<unsigned___int64,0,1> param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined7 in_register_00000081;
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2 + (*(char *)((undefined8 *)CONCAT71(in_register_00000081,param_3))[1] !=
                           '\0');
  lVar1 = **(longlong **)CONCAT71(in_register_00000081,param_3);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + lVar1;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8)) + lVar1;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0);
  return (MixingHashState)param_1.state_;
}

// max<unsigned_int> @ 14f932880

/* unsigned int const & __ptr64 __cdecl std::max<unsigned int>(unsigned int const & __ptr64,unsigned
   int const & __ptr64) */

uint * __cdecl std::max<unsigned_int>(uint *param_1,uint *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// move<google::protobuf::internal::NodeBase*___ptr64*___ptr64&___ptr64> @ 14f9328a0

/* struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 && __ptr64 __cdecl
   std::move<struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 & __ptr64>(struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 & __ptr64) */

NodeBase *** __cdecl
std::move<google::protobuf::internal::NodeBase*___ptr64*___ptr64&___ptr64>(NodeBase ***param_1)

{
  return param_1;
}

// move<google::protobuf::Arena*___ptr64&___ptr64> @ 14f9328b0

/* class google::protobuf::Arena * __ptr64 && __ptr64 __cdecl std::move<class
   google::protobuf::Arena * __ptr64 & __ptr64>(class google::protobuf::Arena * __ptr64 & __ptr64)
    */

Arena ** __cdecl std::move<google::protobuf::Arena*___ptr64&___ptr64>(Arena **param_1)

{
  return param_1;
}

// move<google::protobuf::internal::UntypedMapBase::TypeInfo&___ptr64> @ 14f9328c0

/* struct google::protobuf::internal::UntypedMapBase::TypeInfo && __ptr64 __cdecl std::move<struct
   google::protobuf::internal::UntypedMapBase::TypeInfo & __ptr64>(struct
   google::protobuf::internal::UntypedMapBase::TypeInfo & __ptr64) */

TypeInfo * __cdecl
std::move<google::protobuf::internal::UntypedMapBase::TypeInfo&___ptr64>(TypeInfo *param_1)

{
  return param_1;
}

// move<absl::lts_20240722::hash_internal::MixingHashState&___ptr64> @ 14f9328f0

/* class absl::lts_20240722::hash_internal::MixingHashState && __ptr64 __cdecl std::move<class
   absl::lts_20240722::hash_internal::MixingHashState & __ptr64>(class
   absl::lts_20240722::hash_internal::MixingHashState & __ptr64) */

MixingHashState * __cdecl
std::move<absl::lts_20240722::hash_internal::MixingHashState&___ptr64>(MixingHashState *param_1)

{
  return param_1;
}

// swap<google::protobuf::internal::NodeBase*___ptr64*___ptr64,0> @ 14f932900

/* void __cdecl std::swap<struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64,0>(struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 & __ptr64) */

void __cdecl
std::swap<google::protobuf::internal::NodeBase*___ptr64*___ptr64,0>
          (NodeBase ***param_1,NodeBase ***param_2)

{
  NodeBase **ppNVar1;
  
  ppNVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = ppNVar1;
  return;
}

// swap<google::protobuf::Arena*___ptr64,0> @ 14f932920

/* void __cdecl std::swap<class google::protobuf::Arena * __ptr64,0>(class google::protobuf::Arena *
   __ptr64 & __ptr64,class google::protobuf::Arena * __ptr64 & __ptr64) */

void __cdecl std::swap<google::protobuf::Arena*___ptr64,0>(Arena **param_1,Arena **param_2)

{
  Arena *pAVar1;
  
  pAVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = pAVar1;
  return;
}

// swap<google::protobuf::internal::UntypedMapBase::TypeInfo,0> @ 14f932940

/* void __cdecl std::swap<struct google::protobuf::internal::UntypedMapBase::TypeInfo,0>(struct
   google::protobuf::internal::UntypedMapBase::TypeInfo & __ptr64,struct
   google::protobuf::internal::UntypedMapBase::TypeInfo & __ptr64) */

void __cdecl
std::swap<google::protobuf::internal::UntypedMapBase::TypeInfo,0>
          (TypeInfo *param_1,TypeInfo *param_2)

{
  TypeInfo TVar1;
  
  TVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = TVar1;
  return;
}

// tie<unsigned_int_const_,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const> @ 14f932960

/* class std::tuple<unsigned int const & __ptr64,struct google::protobuf::internal::NodeBase *
   __ptr64 * __ptr64 const & __ptr64> __cdecl std::tie<unsigned int const ,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const>(unsigned int const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64) */

uint * __cdecl
std::tie<unsigned_int_const_,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const>
          (uint *param_1,NodeBase ***param_2)

{
  undefined8 in_R8;
  
  *(undefined8 *)param_1 = in_R8;
  *(NodeBase ****)(param_1 + 2) = param_2;
  return param_1;
}

// tie<std::basic_string_view<char,std::char_traits<char>_>_const_,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const> @ 14f932980

/* class std::tuple<class std::basic_string_view<char,struct std::char_traits<char> > const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> __cdecl
   std::tie<class std::basic_string_view<char,struct std::char_traits<char> > const ,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const>(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
std::
tie<std::basic_string_view<char,std::char_traits<char>_>_const_,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const>
          (basic_string_view<char,std::char_traits<char>_> *param_1,NodeBase ***param_2)

{
  char *in_R8;
  
  param_1->_Mydata = in_R8;
  param_1->_Mysize = (ulong64)param_2;
  return param_1;
}

// tie<unsigned___int64_const_,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const> @ 14f9329a0

/* class std::tuple<unsigned __int64 const & __ptr64,struct google::protobuf::internal::NodeBase *
   __ptr64 * __ptr64 const & __ptr64> __cdecl std::tie<unsigned __int64 const ,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const>(unsigned __int64 const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64) */

__uint64 * __cdecl
std::tie<unsigned___int64_const_,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const>
          (__uint64 *param_1,NodeBase ***param_2)

{
  __uint64 in_R8;
  
  *param_1 = in_R8;
  param_1[1] = (__uint64)param_2;
  return param_1;
}

// tie<bool_const_,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const> @ 14f9329c0

/* class std::tuple<bool const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 *
   __ptr64 const & __ptr64> __cdecl std::tie<bool const ,struct google::protobuf::internal::NodeBase
   * __ptr64 * __ptr64 const>(bool const & __ptr64,struct google::protobuf::internal::NodeBase *
   __ptr64 * __ptr64 const & __ptr64) */

bool * __cdecl
std::tie<bool_const_,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const>
          (bool *param_1,NodeBase ***param_2)

{
  undefined8 in_R8;
  
  *(undefined8 *)param_1 = in_R8;
  *(NodeBase ****)(param_1 + 8) = param_2;
  return param_1;
}

// <lambda_1> @ 14f932a20

/* public: __cdecl `protected: unsigned __int64 __cdecl
   google::protobuf::internal::KeyMapBase<unsigned int>::EraseImpl(unsigned int,struct
   google::protobuf::internal::KeyNode<unsigned int> * __ptr64,bool)
   __ptr64'::`2'::<lambda_1>::<lambda_1>(class google::protobuf::internal::KeyMapBase<unsigned int>
   * __ptr64,unsigned int & __ptr64,struct google::protobuf::internal::KeyNode<unsigned int> *
   __ptr64 & __ptr64) __ptr64 */

<lambda_1> * __thiscall
`protected:_unsigned___int64___cdecl_google::protobuf::internal::KeyMapBase<unsigned_int>::EraseImpl(unsigned_int,google::protobuf::internal::KeyNode<unsigned_int>*___ptr64,bool)___ptr64'
::__l2::<lambda_1>::<lambda_1>
          (<lambda_1> *this,KeyMapBase<unsigned_int> *param_1,uint *param_2,
          KeyNode<unsigned_int> **param_3)

{
  *(KeyMapBase<unsigned_int> **)this = param_1;
  *(uint **)(this + 8) = param_2;
  *(KeyNode<unsigned_int> ***)(this + 0x10) = param_3;
  return this;
}

// <lambda_1> @ 14f932a40

/* public: __cdecl `protected: unsigned __int64 __cdecl google::protobuf::internal::KeyMapBase<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   >::EraseImpl(unsigned int,struct google::protobuf::internal::KeyNode<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > *
   __ptr64,bool) __ptr64'::`2'::<lambda_1>::<lambda_1>(class
   google::protobuf::internal::KeyMapBase<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > * __ptr64,unsigned int & __ptr64,struct
   google::protobuf::internal::KeyNode<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > * __ptr64 & __ptr64) __ptr64 */

<lambda_1> * __thiscall
`protected:_unsigned___int64___cdecl_google::protobuf::internal::KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::EraseImpl(unsigned_int,google::protobuf::internal::KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>*___ptr64,bool)___ptr64'
::__l2::<lambda_1>::<lambda_1>
          (<lambda_1> *this,
          KeyMapBase<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
          *param_1,uint *param_2,
          KeyNode<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
          **param_3)

{
  *(KeyMapBase<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
    **)this = param_1;
  *(uint **)(this + 8) = param_2;
  *(KeyNode<class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>
    ***)(this + 0x10) = param_3;
  return this;
}

// <lambda_1> @ 14f932a60

/* public: __cdecl `protected: unsigned __int64 __cdecl
   google::protobuf::internal::KeyMapBase<unsigned __int64>::EraseImpl(unsigned int,struct
   google::protobuf::internal::KeyNode<unsigned __int64> * __ptr64,bool)
   __ptr64'::`2'::<lambda_1>::<lambda_1>(class google::protobuf::internal::KeyMapBase<unsigned
   __int64> * __ptr64,unsigned int & __ptr64,struct google::protobuf::internal::KeyNode<unsigned
   __int64> * __ptr64 & __ptr64) __ptr64 */

<lambda_1> * __thiscall
`protected:_unsigned___int64___cdecl_google::protobuf::internal::KeyMapBase<unsigned___int64>::EraseImpl(unsigned_int,google::protobuf::internal::KeyNode<unsigned___int64>*___ptr64,bool)___ptr64'
::__l2::<lambda_1>::<lambda_1>
          (<lambda_1> *this,KeyMapBase<unsigned___int64> *param_1,uint *param_2,
          KeyNode<unsigned___int64> **param_3)

{
  *(KeyMapBase<unsigned___int64> **)this = param_1;
  *(uint **)(this + 8) = param_2;
  *(KeyNode<unsigned___int64> ***)(this + 0x10) = param_3;
  return this;
}

// <lambda_1> @ 14f932a80

/* public: __cdecl `protected: unsigned __int64 __cdecl
   google::protobuf::internal::KeyMapBase<bool>::EraseImpl(unsigned int,struct
   google::protobuf::internal::KeyNode<bool> * __ptr64,bool)
   __ptr64'::`2'::<lambda_1>::<lambda_1>(class google::protobuf::internal::KeyMapBase<bool> *
   __ptr64,unsigned int & __ptr64,struct google::protobuf::internal::KeyNode<bool> * __ptr64 &
   __ptr64) __ptr64 */

<lambda_1> * __thiscall
`protected:_unsigned___int64___cdecl_google::protobuf::internal::KeyMapBase<bool>::EraseImpl(unsigned_int,google::protobuf::internal::KeyNode<bool>*___ptr64,bool)___ptr64'
::__l2::<lambda_1>::<lambda_1>
          (<lambda_1> *this,KeyMapBase<bool> *param_1,uint *param_2,KeyNode<bool> **param_3)

{
  *(KeyMapBase<bool> **)this = param_1;
  *(uint **)(this + 8) = param_2;
  *(KeyNode<bool> ***)(this + 0x10) = param_3;
  return this;
}

// RawPtr<google::protobuf::internal::RepeatedPtrFieldBase_const_> @ 14f932b20

/* public: __cdecl google::protobuf::internal::RawPtr<class
   google::protobuf::internal::RepeatedPtrFieldBase const >::RawPtr<class
   google::protobuf::internal::RepeatedPtrFieldBase const >(void const * __ptr64) __ptr64 */

RawPtr<google::protobuf::internal::RepeatedPtrFieldBase_const_> * __thiscall
google::protobuf::internal::RawPtr<google::protobuf::internal::RepeatedPtrFieldBase_const_>::
RawPtr<google::protobuf::internal::RepeatedPtrFieldBase_const_>
          (RawPtr<google::protobuf::internal::RepeatedPtrFieldBase_const_> *this,void *param_1)

{
  *(void **)this = param_1;
  return this;
}

// RawPtr<google::protobuf::internal::RepeatedPtrFieldBase_const_> @ 14f932b30

/* public: __cdecl google::protobuf::internal::RawPtr<class
   google::protobuf::internal::RepeatedPtrFieldBase const >::RawPtr<class
   google::protobuf::internal::RepeatedPtrFieldBase const >(void) __ptr64 */

RawPtr<google::protobuf::internal::RepeatedPtrFieldBase_const_> * __thiscall
google::protobuf::internal::RawPtr<google::protobuf::internal::RepeatedPtrFieldBase_const_>::
RawPtr<google::protobuf::internal::RepeatedPtrFieldBase_const_>
          (RawPtr<google::protobuf::internal::RepeatedPtrFieldBase_const_> *this)

{
  *(char ***)this = &kZeroBuffer;
  return this;
}

// RepeatedPtrField<google::protobuf::Message> @ 14f932b50

/* public: __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Message>::RepeatedPtrField<class google::protobuf::Message>(class
   google::protobuf::Arena * __ptr64) __ptr64 */

RepeatedPtrField<google::protobuf::Message> * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Message>::
RepeatedPtrField<google::protobuf::Message>
          (RepeatedPtrField<google::protobuf::Message> *this,Arena *param_1)

{
  *(Arena **)&this->field_0x10 = param_1;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return this;
}

// RepeatedPtrIterator<google::protobuf::Message> @ 14f932b70

/* public: __cdecl google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::Message>::RepeatedPtrIterator<class google::protobuf::Message>(void * __ptr64
   const * __ptr64) __ptr64 */

RepeatedPtrIterator<google::protobuf::Message> * __thiscall
google::protobuf::internal::RepeatedPtrIterator<google::protobuf::Message>::
RepeatedPtrIterator<google::protobuf::Message>
          (RepeatedPtrIterator<google::protobuf::Message> *this,void **param_1)

{
  *(void ***)this = param_1;
  return this;
}

// _Atomic_storage<google::protobuf::internal::MapFieldBase::State,4> @ 14f932b80

/* public: __cdecl std::_Atomic_storage<enum
   google::protobuf::internal::MapFieldBase::State,4>::_Atomic_storage<enum
   google::protobuf::internal::MapFieldBase::State,4>(enum
   google::protobuf::internal::MapFieldBase::State) __ptr64 */

_Atomic_storage<google::protobuf::internal::MapFieldBase::State,4> * __thiscall
std::_Atomic_storage<google::protobuf::internal::MapFieldBase::State,4>::
_Atomic_storage<google::protobuf::internal::MapFieldBase::State,4>
          (_Atomic_storage<google::protobuf::internal::MapFieldBase::State,4> *this,State param_1)

{
  (this->_Storage)._Value = param_1;
  return this;
}

// atomic<google::protobuf::internal::MapFieldBase::State> @ 14f932b90

/* public: __cdecl std::atomic<enum google::protobuf::internal::MapFieldBase::State>::atomic<enum
   google::protobuf::internal::MapFieldBase::State>(enum
   google::protobuf::internal::MapFieldBase::State) __ptr64 */

atomic<google::protobuf::internal::MapFieldBase::State> * __thiscall
std::atomic<google::protobuf::internal::MapFieldBase::State>::
atomic<google::protobuf::internal::MapFieldBase::State>
          (atomic<google::protobuf::internal::MapFieldBase::State> *this,State param_1)

{
  *this = (atomic<google::protobuf::internal::MapFieldBase::State>)param_1;
  return this;
}

// KeyValue @ 14f932ba0

/* public: __cdecl google::protobuf::MapKey::KeyValue::KeyValue(void) __ptr64 */

KeyValue * __thiscall google::protobuf::MapKey::KeyValue::KeyValue(KeyValue *this)

{
  return this;
}

// MapIterator @ 14f932bb0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* private: __cdecl google::protobuf::MapIterator::MapIterator(class
   google::protobuf::internal::MapFieldBase * __ptr64,class google::protobuf::Descriptor const *
   __ptr64) __ptr64 */

MapIterator * __thiscall
google::protobuf::MapIterator::MapIterator
          (MapIterator *this,MapFieldBase *param_1,Descriptor *param_2)

{
  FieldDescriptor *pFVar1;
  
  this->map_ = param_1;
  (this->key_).type_ = 0;
  *(undefined8 *)&this->value_ = 0;
  *(undefined4 *)&(this->value_).field_0x8 = 0;
  pFVar1 = Descriptor::map_key(param_2);
  (this->key_).type_ =
       *(CppType *)((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar1->type_ * 4);
  pFVar1 = Descriptor::map_value(param_2);
  *(undefined4 *)&(this->value_).field_0x8 =
       *(undefined4 *)((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar1->type_ * 4)
  ;
  return this;
}

// MapKey @ 14f932c20

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: __cdecl google::protobuf::MapKey::MapKey(void) __ptr64 */

MapKey * __thiscall google::protobuf::MapKey::MapKey(MapKey *this)

{
  this->type_ = 0;
  return this;
}

// MapValueConstRef @ 14f932c40

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: __cdecl google::protobuf::MapValueConstRef::MapValueConstRef(void) __ptr64 */

MapValueConstRef * __thiscall
google::protobuf::MapValueConstRef::MapValueConstRef(MapValueConstRef *this)

{
  this->data_ = (void *)0x0;
  this->type_ = 0;
  return this;
}

// MapValueRef @ 14f932c60

/* public: __cdecl google::protobuf::MapValueRef::MapValueRef(void) __ptr64 */

MapValueRef * __thiscall google::protobuf::MapValueRef::MapValueRef(MapValueRef *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  return this;
}

// MixingHashState @ 14f932c80

/* private: __cdecl absl::lts_20240722::hash_internal::MixingHashState::MixingHashState(void)
   __ptr64 */

MixingHashState * __thiscall
absl::lts_20240722::hash_internal::MixingHashState::MixingHashState(MixingHashState *this)

{
  this->state_ = (ulong64)&kSeed;
  return this;
}

// MixingHashState @ 14f932ca0

/* private: __cdecl absl::lts_20240722::hash_internal::MixingHashState::MixingHashState(unsigned
   __int64) __ptr64 */

MixingHashState * __thiscall
absl::lts_20240722::hash_internal::MixingHashState::MixingHashState
          (MixingHashState *this,__uint64 param_1)

{
  this->state_ = param_1;
  return this;
}

// ReflectionPayload @ 14f932cb0

/* public: __cdecl
   google::protobuf::internal::MapFieldBase::ReflectionPayload::ReflectionPayload(class
   google::protobuf::Arena * __ptr64) __ptr64 */

ReflectionPayload * __thiscall
google::protobuf::internal::MapFieldBase::ReflectionPayload::ReflectionPayload
          (ReflectionPayload *this,Arena *param_1)

{
  *(Arena **)&(this->repeated_field).field_0x10 = param_1;
  *(undefined8 *)&this->repeated_field = 0;
  *(undefined8 *)&(this->repeated_field).field_0x8 = 0;
  (this->mutex).mu_ = (atomic<__int64>)0x0;
  this->state = (atomic<google::protobuf::internal::MapFieldBase::State>)0x0;
  return this;
}

// RepeatedPtrFieldBase @ 14f932cd0

/* protected: __cdecl google::protobuf::internal::RepeatedPtrFieldBase::RepeatedPtrFieldBase(class
   google::protobuf::Arena * __ptr64) __ptr64 */

RepeatedPtrFieldBase * __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::RepeatedPtrFieldBase
          (RepeatedPtrFieldBase *this,Arena *param_1)

{
  this->arena_ = param_1;
  this->tagged_rep_or_elem_ = (void *)0x0;
  this->current_size_ = 0;
  this->capacity_proxy_ = 0;
  return this;
}

// ScratchSpace @ 14f932cf0

/* public: __cdecl google::protobuf::Reflection::ScratchSpace::ScratchSpace(void) __ptr64 */

ScratchSpace * __thiscall
google::protobuf::Reflection::ScratchSpace::ScratchSpace(ScratchSpace *this)

{
  (this->buffer_)._Mypair._Myval2 =
       (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  return this;
}

// ~RepeatedPtrField<google::protobuf::Message> @ 14f932d10

/* public: __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Message>::~RepeatedPtrField<class google::protobuf::Message>(void) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Message>::
~RepeatedPtrField<google::protobuf::Message>(RepeatedPtrField<google::protobuf::Message> *this)

{
  if (*(longlong *)this != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)this);
  }
  return;
}

// ~MapFieldBase @ 14f932d30

/* protected: __cdecl google::protobuf::internal::MapFieldBase::~MapFieldBase(void) __ptr64 */

void __thiscall google::protobuf::internal::MapFieldBase::~MapFieldBase(MapFieldBase *this)

{
  RepeatedPtrFieldBase *this_00;
  
  if (((*(ulonglong *)this & 1) != 0) &&
     (this_00 = (RepeatedPtrFieldBase *)(*(ulonglong *)this - 1),
     this_00 != (RepeatedPtrFieldBase *)0x0)) {
    if (this_00->tagged_rep_or_elem_ != (void *)0x0) {
      RepeatedPtrFieldBase::DestroyProtos(this_00);
    }
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// ~ReflectionPayload @ 14f932d80

/* public: __cdecl
   google::protobuf::internal::MapFieldBase::ReflectionPayload::~ReflectionPayload(void) __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::ReflectionPayload::~ReflectionPayload
          (ReflectionPayload *this)

{
  if (*(longlong *)&this->repeated_field != 0) {
    RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)this);
  }
  return;
}

// ~RepeatedPtrFieldBase @ 14f932da0

/* protected: __cdecl google::protobuf::internal::RepeatedPtrFieldBase::~RepeatedPtrFieldBase(void)
   __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::~RepeatedPtrFieldBase(RepeatedPtrFieldBase *this)

{
  return;
}

// ~ScratchSpace @ 14f932db0

/* public: __cdecl google::protobuf::Reflection::ScratchSpace::~ScratchSpace(void) __ptr64 */

void __thiscall google::protobuf::Reflection::ScratchSpace::~ScratchSpace(ScratchSpace *this)

{
  std::
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  ::
  ~unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            (&this->buffer_);
  return;
}

// operator!= @ 14f932dc0

/* bool __cdecl google::protobuf::internal::operator!=(class
   google::protobuf::internal::RepeatedPtrIterator<class google::protobuf::Message> const &
   __ptr64,class google::protobuf::internal::RepeatedPtrIterator<class google::protobuf::Message>
   const & __ptr64) */

bool __cdecl
google::protobuf::internal::operator!=
          (RepeatedPtrIterator<google::protobuf::Message> *param_1,
          RepeatedPtrIterator<google::protobuf::Message> *param_2)

{
  return *(longlong *)param_1 != *(longlong *)param_2;
}

// operator[] @ 14f932dd0

/* public: class google::protobuf::Message & __ptr64 __cdecl
   google::protobuf::RepeatedPtrField<class google::protobuf::Message>::operator[](int) __ptr64 */

Message * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Message>::operator[]
          (RepeatedPtrField<google::protobuf::Message> *this,int param_1)

{
  Message *pMVar1;
  
  pMVar1 = *(Message **)this;
  if ((~*(byte *)this & 1) == 0) {
    pMVar1 = *(Message **)(&pMVar1->field_0x7 + (longlong)param_1 * 8);
  }
  return pMVar1;
}

// operator* @ 14f932df0

/* public: class google::protobuf::internal::RepeatedPtrFieldBase const & __ptr64 __cdecl
   google::protobuf::internal::RawPtr<class google::protobuf::internal::RepeatedPtrFieldBase const
   >::operator*(void)const __ptr64 */

RepeatedPtrFieldBase * __thiscall
google::protobuf::internal::RawPtr<google::protobuf::internal::RepeatedPtrFieldBase_const_>::
operator*(RawPtr<google::protobuf::internal::RepeatedPtrFieldBase_const_> *this)

{
  return *(RepeatedPtrFieldBase **)this;
}

// operator* @ 14f932e00

/* public: class google::protobuf::Message & __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::Message>::operator*(void)const __ptr64 */

Message * __thiscall
google::protobuf::internal::RepeatedPtrIterator<google::protobuf::Message>::operator*
          (RepeatedPtrIterator<google::protobuf::Message> *this)

{
  return (Message *)**(undefined8 **)this;
}

// operator++ @ 14f932e10

/* public: class google::protobuf::internal::RepeatedPtrIterator<class google::protobuf::Message> &
   __ptr64 __cdecl google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::Message>::operator++(void) __ptr64 */

RepeatedPtrIterator<class_google::protobuf::Message> * __thiscall
google::protobuf::internal::RepeatedPtrIterator<google::protobuf::Message>::operator++
          (RepeatedPtrIterator<google::protobuf::Message> *this)

{
  *(longlong *)this = *(longlong *)this + 8;
  return (RepeatedPtrIterator<class_google::protobuf::Message> *)this;
}

// operator() @ 14f932e20

/* public: __cdecl `protected: unsigned __int64 __cdecl
   google::protobuf::internal::KeyMapBase<unsigned int>::EraseImpl(unsigned int,struct
   google::protobuf::internal::KeyNode<unsigned int> * __ptr64,bool)
   __ptr64'::`2'::<lambda_1>::operator()(void)const __ptr64 */

longlong * __thiscall
`protected:_unsigned___int64___cdecl_google::protobuf::internal::KeyMapBase<unsigned_int>::EraseImpl(unsigned_int,google::protobuf::internal::KeyNode<unsigned_int>*___ptr64,bool)___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)
           (*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)**(uint **)(this + 8) * 8);
  plVar1 = *(longlong **)
            (*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)**(uint **)(this + 8) * 8);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = plVar3;
    do {
      plVar3 = plVar1;
      if (plVar3 == (longlong *)**(longlong **)(this + 0x10)) {
        return plVar2;
      }
      plVar1 = (longlong *)*plVar3;
      plVar2 = plVar3;
    } while ((longlong *)*plVar3 != (longlong *)0x0);
  }
  return plVar3;
}

// operator() @ 14f932e60

/* public: __cdecl `protected: unsigned __int64 __cdecl google::protobuf::internal::KeyMapBase<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   >::EraseImpl(unsigned int,struct google::protobuf::internal::KeyNode<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > *
   __ptr64,bool) __ptr64'::`2'::<lambda_1>::operator()(void)const __ptr64 */

longlong * __thiscall
`protected:_unsigned___int64___cdecl_google::protobuf::internal::KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::EraseImpl(unsigned_int,google::protobuf::internal::KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>*___ptr64,bool)___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)
           (*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)**(uint **)(this + 8) * 8);
  plVar1 = *(longlong **)
            (*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)**(uint **)(this + 8) * 8);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = plVar3;
    do {
      plVar3 = plVar1;
      if (plVar3 == (longlong *)**(longlong **)(this + 0x10)) {
        return plVar2;
      }
      plVar1 = (longlong *)*plVar3;
      plVar2 = plVar3;
    } while ((longlong *)*plVar3 != (longlong *)0x0);
  }
  return plVar3;
}

// operator() @ 14f932ea0

/* public: __cdecl `protected: unsigned __int64 __cdecl
   google::protobuf::internal::KeyMapBase<unsigned __int64>::EraseImpl(unsigned int,struct
   google::protobuf::internal::KeyNode<unsigned __int64> * __ptr64,bool)
   __ptr64'::`2'::<lambda_1>::operator()(void)const __ptr64 */

longlong * __thiscall
`protected:_unsigned___int64___cdecl_google::protobuf::internal::KeyMapBase<unsigned___int64>::EraseImpl(unsigned_int,google::protobuf::internal::KeyNode<unsigned___int64>*___ptr64,bool)___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)
           (*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)**(uint **)(this + 8) * 8);
  plVar1 = *(longlong **)
            (*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)**(uint **)(this + 8) * 8);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = plVar3;
    do {
      plVar3 = plVar1;
      if (plVar3 == (longlong *)**(longlong **)(this + 0x10)) {
        return plVar2;
      }
      plVar1 = (longlong *)*plVar3;
      plVar2 = plVar3;
    } while ((longlong *)*plVar3 != (longlong *)0x0);
  }
  return plVar3;
}

// operator() @ 14f932ee0

/* public: __cdecl `protected: unsigned __int64 __cdecl
   google::protobuf::internal::KeyMapBase<bool>::EraseImpl(unsigned int,struct
   google::protobuf::internal::KeyNode<bool> * __ptr64,bool)
   __ptr64'::`2'::<lambda_1>::operator()(void)const __ptr64 */

longlong * __thiscall
`protected:_unsigned___int64___cdecl_google::protobuf::internal::KeyMapBase<bool>::EraseImpl(unsigned_int,google::protobuf::internal::KeyNode<bool>*___ptr64,bool)___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)
           (*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)**(uint **)(this + 8) * 8);
  plVar1 = *(longlong **)
            (*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)**(uint **)(this + 8) * 8);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = plVar3;
    do {
      plVar3 = plVar1;
      if (plVar3 == (longlong *)**(longlong **)(this + 0x10)) {
        return plVar2;
      }
      plVar1 = (longlong *)*plVar3;
      plVar2 = plVar3;
    } while ((longlong *)*plVar3 != (longlong *)0x0);
  }
  return plVar3;
}

// operator() @ 14f932f50

/* public: unsigned __int64 __cdecl absl::lts_20240722::hash_internal::HashImpl<class
   std::tuple<unsigned int const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 *
   __ptr64 const & __ptr64> >::operator()(class std::tuple<unsigned int const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const & __ptr64)const
   __ptr64 */

__uint64 __thiscall
absl::lts_20240722::hash_internal::
HashImpl<std::tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_>
::operator()(HashImpl<std::tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_>
             *this,tuple<unsigned_int_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
                   *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)&MixingHashState::kSeed + (ulonglong)**(uint **)(param_1 + 8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8)) + **(longlong **)param_1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + **(longlong **)param_1;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8);
}

// operator() @ 14f932fc0

/* public: unsigned __int64 __cdecl absl::lts_20240722::hash_internal::HashImpl<class
   std::tuple<class std::basic_string_view<char,struct std::char_traits<char> > const &
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64>
   >::operator()(class std::tuple<class std::basic_string_view<char,struct std::char_traits<char> >
   const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64>
   const & __ptr64)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::hash_internal::
HashImpl<std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_>
::operator()(HashImpl<std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_>
             *this,tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
                   *param_1)

{
  longlong *plVar1;
  __uint64 _Var2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong local_res10 [3];
  
  plVar1 = *(longlong **)param_1;
  _Var2 = (*(__uint64 **)(param_1 + 8))[1];
  MixingHashState::combine_contiguous
            ((MixingHashState)local_res10,(uchar *)&MixingHashState::kSeed,
             **(__uint64 **)(param_1 + 8));
  auVar3._8_8_ = 0;
  auVar3._0_8_ = _Var2 + local_res10[0];
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8)) + *plVar1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8)) + *plVar1;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,8);
}

// operator() @ 14f933060

/* public: unsigned __int64 __cdecl absl::lts_20240722::hash_internal::HashImpl<class
   std::tuple<unsigned __int64 const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64
   * __ptr64 const & __ptr64> >::operator()(class std::tuple<unsigned __int64 const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const & __ptr64)const
   __ptr64 */

__uint64 __thiscall
absl::lts_20240722::hash_internal::
HashImpl<std::tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_>
::operator()(HashImpl<std::tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_>
             *this,tuple<unsigned___int64_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
                   *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)&MixingHashState::kSeed + **(longlong **)(param_1 + 8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8)) + **(longlong **)param_1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + **(longlong **)param_1;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8);
}

// operator() @ 14f9330d0

/* public: unsigned __int64 __cdecl absl::lts_20240722::hash_internal::HashImpl<class
   std::tuple<bool const & __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64
   const & __ptr64> >::operator()(class std::tuple<bool const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64> const & __ptr64)const
   __ptr64 */

__uint64 __thiscall
absl::lts_20240722::hash_internal::
HashImpl<std::tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_>
::operator()(HashImpl<std::tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>_>
             *this,tuple<bool_const&___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
                   *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)&MixingHashState::kSeed + (ulonglong)(**(char **)(param_1 + 8) != '\0');
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8)) + **(longlong **)param_1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + **(longlong **)param_1;
  return SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
         SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8);
}

// operator() @ 14f933140

/* public: void __cdecl std::default_delete<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::operator()(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)const
   __ptr64 */

void __thiscall
std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
operator()(default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
           *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  ulonglong uVar1;
  char *pcVar2;
  char *pcVar3;
  ulong64 uVar4;
  
  if (param_1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    uVar1 = (param_1->_Mypair)._Myval2._Myres;
    if (0xf < uVar1) {
      pcVar2 = (param_1->_Mypair)._Myval2._Bx._Ptr;
      uVar4 = uVar1 + 1;
      pcVar3 = pcVar2;
      if (0xfff < uVar4) {
        pcVar3 = *(char **)(pcVar2 + -8);
        uVar4 = uVar1 + 0x28;
        if ((char *)0x1f < pcVar2 + (-8 - (longlong)pcVar3)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete(pcVar3,uVar4);
    }
    (param_1->_Mypair)._Myval2._Mysize = 0;
    (param_1->_Mypair)._Myval2._Myres = 0xf;
    (param_1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
    ::operator_delete(param_1,0x20);
  }
  return;
}

// `scalar_deleting_destructor' @ 14f9331c0

/* public: void * __ptr64 __cdecl
   google::protobuf::internal::MapFieldBase::ReflectionPayload::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::internal::MapFieldBase::ReflectionPayload::_scalar_deleting_destructor_
          (ReflectionPayload *this,uint param_1)

{
  if (*(longlong *)&this->repeated_field != 0) {
    RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)this);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// AddAllocated @ 14f933210

/* public: void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Message>::AddAllocated(class google::protobuf::Message * __ptr64) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Message>::AddAllocated
          (RepeatedPtrField<google::protobuf::Message> *this,Message *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  Arena *pAVar4;
  RepeatedPtrField<google::protobuf::Message> *pRVar5;
  bool bVar6;
  
  pAVar4 = internal::GenericTypeHandler<google::protobuf::Message>::GetArena(param_1);
  if (*(Arena **)&this->field_0x10 == pAVar4) {
    lVar2 = *(longlong *)this;
    if ((~*(byte *)this & 1) == 0) {
      bVar6 = *(int *)&this->field_0xc + 1 <= *(int *)(lVar2 + -1);
    }
    else {
      bVar6 = lVar2 != 0;
    }
    if (!bVar6) {
      if ((~*(byte *)this & 1) == 0) {
        uVar3 = *(uint *)(lVar2 + -1);
        pRVar5 = (RepeatedPtrField<google::protobuf::Message> *)(lVar2 + 7);
      }
      else {
        uVar3 = (uint)(lVar2 != 0);
        pRVar5 = this;
      }
      if (*(int *)&this->field_0x8 < (int)uVar3) {
        if ((~(byte)lVar2 & 1) == 0) {
          uVar3 = *(uint *)(lVar2 + -1);
        }
        else {
          uVar3 = (uint)(lVar2 != 0);
        }
        *(undefined8 *)(&pRVar5->field_0x0 + (longlong)(int)uVar3 * 8) =
             *(undefined8 *)(&pRVar5->field_0x0 + (longlong)*(int *)&this->field_0x8 * 8);
      }
      iVar1 = *(int *)&this->field_0x8;
      *(int *)&this->field_0x8 = iVar1 + 1;
      *(Message **)(&pRVar5->field_0x0 + (longlong)iVar1 * 8) = param_1;
      if ((~*(byte *)this & 1) != 0) {
        return;
      }
      *(int *)(*(longlong *)this + -1) = *(int *)(*(longlong *)this + -1) + 1;
      return;
    }
  }
  internal::RepeatedPtrFieldBase::
  AddAllocatedSlowWithCopy<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
            ((RepeatedPtrFieldBase *)this,param_1,pAVar4,*(Arena **)&this->field_0x10);
  return;
}

// AllocNode @ 14f933300

/* protected: struct google::protobuf::internal::NodeBase * __ptr64 __cdecl
   google::protobuf::internal::UntypedMapBase::AllocNode(void) __ptr64 */

NodeBase * __thiscall google::protobuf::internal::UntypedMapBase::AllocNode(UntypedMapBase *this)

{
  NodeBase *pNVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)(this->type_info_).node_size;
  if (this->arena_ == (Arena *)0x0) {
    pNVar1 = ::operator_new(uVar2);
    return pNVar1;
  }
  pNVar1 = Arena::Allocate(this->arena_,uVar2 + 7 & 0xfffffffffffffff8);
  return pNVar1;
}

// AllocNode @ 14f933330

/* protected: struct google::protobuf::internal::NodeBase * __ptr64 __cdecl
   google::protobuf::internal::UntypedMapBase::AllocNode(unsigned __int64) __ptr64 */

NodeBase * __thiscall
google::protobuf::internal::UntypedMapBase::AllocNode(UntypedMapBase *this,__uint64 param_1)

{
  NodeBase *pNVar1;
  
  if (this->arena_ == (Arena *)0x0) {
    pNVar1 = ::operator_new(param_1);
    return pNVar1;
  }
  pNVar1 = Arena::Allocate(this->arena_,param_1 + 7 & 0xfffffffffffffff8);
  return pNVar1;
}

// AllocatedSizeAtCapacity @ 14f933360

/* private: bool __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::AllocatedSizeAtCapacity(void)const __ptr64 */

bool __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::AllocatedSizeAtCapacity
          (RepeatedPtrFieldBase *this)

{
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) != 0) {
    return this->tagged_rep_or_elem_ != (void *)0x0;
  }
  return this->capacity_proxy_ + 1 <= *(int *)((longlong)this->tagged_rep_or_elem_ + -1);
}

// AssertLoadFactor @ 14f933390

/* protected: void __cdecl google::protobuf::internal::KeyMapBase<unsigned
   int>::AssertLoadFactor(void)const __ptr64 */

void __thiscall
google::protobuf::internal::KeyMapBase<unsigned_int>::AssertLoadFactor
          (KeyMapBase<unsigned_int> *this)

{
  return;
}

// AssertLoadFactor @ 14f9333a0

/* protected: void __cdecl google::protobuf::internal::KeyMapBase<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   >::AssertLoadFactor(void)const __ptr64 */

void __thiscall
google::protobuf::internal::
KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::AssertLoadFactor
          (KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this)

{
  return;
}

// AssertLoadFactor @ 14f9333b0

/* protected: void __cdecl google::protobuf::internal::KeyMapBase<unsigned
   __int64>::AssertLoadFactor(void)const __ptr64 */

void __thiscall
google::protobuf::internal::KeyMapBase<unsigned___int64>::AssertLoadFactor
          (KeyMapBase<unsigned___int64> *this)

{
  return;
}

// AssertLoadFactor @ 14f9333c0

/* protected: void __cdecl google::protobuf::internal::KeyMapBase<bool>::AssertLoadFactor(void)const
   __ptr64 */

void __thiscall
google::protobuf::internal::KeyMapBase<bool>::AssertLoadFactor(KeyMapBase<bool> *this)

{
  return;
}

// BucketNumber @ 14f9333d0

/* protected: unsigned int __cdecl google::protobuf::internal::KeyMapBase<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   >::BucketNumber(class std::basic_string_view<char,struct std::char_traits<char> >)const __ptr64
    */

uint __thiscall
google::protobuf::internal::
KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::BucketNumber
          (KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this,
          basic_string_view<char,std::char_traits<char>_> *param_1)

{
  ulong64 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong local_res8;
  
  uVar1 = param_1->_Mysize;
  absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
            ((MixingHashState)&local_res8,
             (uchar *)&absl::lts_20240722::hash_internal::MixingHashState::kSeed,
             (__uint64)param_1->_Mydata);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1 + local_res8;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + *(longlong *)(this + 0x10);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8)) + *(longlong *)(this + 0x10);
  return (SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
         SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar4,8)) & *(int *)(this + 4) - 1U;
}

// BucketNumber @ 14f933470

/* protected: unsigned int __cdecl
   google::protobuf::internal::KeyMapBase<bool>::BucketNumber(bool)const __ptr64 */

uint __thiscall
google::protobuf::internal::KeyMapBase<bool>::BucketNumber(KeyMapBase<bool> *this,bool param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed +
                 (ulonglong)param_1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar1,8)) + *(longlong *)(this + 0x10);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + *(longlong *)(this + 0x10);
  return *(int *)(this + 4) - 1U &
         (SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar3,8) ^
         SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar3,0));
}

// CalculateHiCutoff @ 14f9334e0

/* protected: static unsigned __int64 __cdecl google::protobuf::internal::KeyMapBase<unsigned
   int>::CalculateHiCutoff(unsigned __int64) */

__uint64 __cdecl
google::protobuf::internal::KeyMapBase<unsigned_int>::CalculateHiCutoff(__uint64 param_1)

{
  return (param_1 + (param_1 >> 4) * -4) - (ulonglong)((uint)param_1 & 1);
}

// CalculateHiCutoff @ 14f933500

/* protected: static unsigned __int64 __cdecl google::protobuf::internal::KeyMapBase<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   >::CalculateHiCutoff(unsigned __int64) */

__uint64 __cdecl
google::protobuf::internal::
KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::CalculateHiCutoff
          (__uint64 param_1)

{
  return (param_1 + (param_1 >> 4) * -4) - (ulonglong)((uint)param_1 & 1);
}

// CalculateHiCutoff @ 14f933520

/* protected: static unsigned __int64 __cdecl google::protobuf::internal::KeyMapBase<unsigned
   __int64>::CalculateHiCutoff(unsigned __int64) */

__uint64 __cdecl
google::protobuf::internal::KeyMapBase<unsigned___int64>::CalculateHiCutoff(__uint64 param_1)

{
  return (param_1 + (param_1 >> 4) * -4) - (ulonglong)((uint)param_1 & 1);
}

// CalculateHiCutoff @ 14f933540

/* protected: static unsigned __int64 __cdecl
   google::protobuf::internal::KeyMapBase<bool>::CalculateHiCutoff(unsigned __int64) */

__uint64 __cdecl google::protobuf::internal::KeyMapBase<bool>::CalculateHiCutoff(__uint64 param_1)

{
  return (param_1 + (param_1 >> 4) * -4) - (ulonglong)((uint)param_1 & 1);
}

// CanUseInternalSwap @ 14f933560

/* bool __cdecl google::protobuf::internal::CanUseInternalSwap(class google::protobuf::Arena *
   __ptr64,class google::protobuf::Arena * __ptr64) */

bool __cdecl google::protobuf::internal::CanUseInternalSwap(Arena *param_1,Arena *param_2)

{
  return param_1 == param_2;
}

// Clear @ 14f933570

/* public: static void __cdecl google::protobuf::internal::GenericTypeHandler<class
   google::protobuf::MessageLite>::Clear(class google::protobuf::MessageLite * __ptr64) */

void __cdecl
google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>::Clear
          (MessageLite *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f933573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 8))();
  return;
}

// Clear @ 14f933580

/* public: void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Message>::Clear(void) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Message>::Clear
          (RepeatedPtrField<google::protobuf::Message> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)&this->field_0x8 < 1) {
    return;
  }
  puVar1 = &this->field_0x8;
  if ((*(ulonglong *)this & 1) != 0) {
    this = (RepeatedPtrField<google::protobuf::Message> *)(*(ulonglong *)this + 7);
  }
  iVar3 = *(int *)puVar1;
  lVar4 = 0;
  do {
    lVar2 = lVar4 * 8;
    lVar4 = lVar4 + 1;
    (**(code **)(**(longlong **)(&this->field_0x0 + lVar2) + 8))();
  } while (lVar4 < iVar3);
  *(undefined4 *)puVar1 = 0;
  return;
}

// Clear @ 14f9335a0

/* public: void __cdecl google::protobuf::internal::MapFieldBase::Clear(void) __ptr64 */

void __thiscall google::protobuf::internal::MapFieldBase::Clear(MapFieldBase *this)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)this;
  if ((((uVar1 & 1) != 0) && ((RepeatedPtrFieldBase *)(uVar1 - 1) != (RepeatedPtrFieldBase *)0x0))
     && (0 < *(int *)(uVar1 + 7))) {
    RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)(uVar1 - 1));
  }
  if (*(int *)&this[1].field_0x4 != 1) {
    UntypedMapBase::ClearTableImpl((UntypedMapBase *)(this + 1),true);
  }
  uVar1 = *(ulonglong *)this;
  if (((uVar1 & 1) != 0) && (uVar1 != 1)) {
    *(undefined4 *)(uVar1 + 0x1f) = 0;
  }
  return;
}

// ClearMapNoSync @ 14f933600

/* protected: void __cdecl google::protobuf::internal::MapFieldBase::ClearMapNoSync(void) __ptr64 */

void __thiscall google::protobuf::internal::MapFieldBase::ClearMapNoSync(MapFieldBase *this)

{
  if (*(int *)&this[1].field_0x4 != 1) {
    UntypedMapBase::ClearTableImpl((UntypedMapBase *)(this + 1),true);
    return;
  }
  return;
}

// ClearTable @ 14f933620

/* public: void __cdecl google::protobuf::internal::UntypedMapBase::ClearTable(bool) __ptr64 */

void __thiscall
google::protobuf::internal::UntypedMapBase::ClearTable(UntypedMapBase *this,bool param_1)

{
  NodeBase **_Dst;
  byte bVar1;
  ulong64 uVar2;
  UntypedMapBase *pUStackX_8;
  UntypedMapBase *pUStack_18;
  UntypedMapBase **ppUStack_10;
  
  if (this->num_buckets_ == 1) {
    return;
  }
  if (this->arena_ == (Arena *)0x0) {
    ppUStack_10 = &pUStackX_8;
    bVar1 = (this->type_info_).value_type;
    pUStackX_8 = this;
    pUStack_18 = this;
    if (bVar1 < 5) {
      FUN_14fa21d20(&pUStack_18,(ulonglong)this & 0xff);
    }
    else if (bVar1 == 5) {
      FUN_14fa21f80(&pUStack_18,this);
    }
    else {
      if (bVar1 != 6) {
                    /* WARNING: Subroutine does not return */
        Unreachable();
      }
      FUN_14fa22260(&pUStack_18,this);
    }
  }
  _Dst = this->table_;
  if (param_1) {
    memset(_Dst,0,(ulonglong)this->num_buckets_ << 3);
    this->index_of_first_non_null_ = this->num_buckets_;
    this->num_elements_ = 0;
    return;
  }
  uVar2 = (ulonglong)this->num_buckets_ << 3;
  if (this->arena_ != (Arena *)0x0) {
    Arena::ReturnArrayMemory(this->arena_,_Dst,uVar2);
    return;
  }
  ::operator_delete(_Dst,uVar2);
  return;
}

// ConstAccess @ 14f933640

/* protected: void __cdecl google::protobuf::internal::MapFieldBase::ConstAccess(void)const __ptr64
    */

void __thiscall google::protobuf::internal::MapFieldBase::ConstAccess(MapFieldBase *this)

{
  return;
}

// CopyIterator @ 14f933650

/* WARNING: Enum "CppType": Some values do not have unique names */
/* private: void __cdecl google::protobuf::internal::MapFieldBase::CopyIterator(class
   google::protobuf::MapIterator * __ptr64,class google::protobuf::MapIterator const & __ptr64)const
   __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::CopyIterator
          (MapFieldBase *this,MapIterator *param_1,MapIterator *param_2)

{
  UntypedMapBase *pUVar1;
  undefined4 uVar2;
  CppType CVar3;
  
  pUVar1 = (param_2->iter_).m_;
  (param_1->iter_).node_ = (param_2->iter_).node_;
  (param_1->iter_).m_ = pUVar1;
  uVar2 = *(undefined4 *)&(param_2->iter_).field_0x14;
  (param_1->iter_).bucket_index_ = (param_2->iter_).bucket_index_;
  *(undefined4 *)&(param_1->iter_).field_0x14 = uVar2;
  CVar3 = MapKey::type(&param_2->key_);
  (param_1->key_).type_ = CVar3;
  *(undefined4 *)&(param_1->value_).field_0x8 = *(undefined4 *)&(param_2->value_).field_0x8;
  SetMapIteratorValue(this,param_1);
  return;
}

// CppTypeName @ 14f9336b0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: static class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   google::protobuf::FieldDescriptor::CppTypeName(enum
   google::protobuf::internal::FieldDescriptorLite::CppType) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
google::protobuf::FieldDescriptor::CppTypeName
          (basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,CppType param_1)

{
  char *pcVar1;
  ulong64 uVar2;
  
  pcVar1 = (&kCppTypeToName)[(int)param_1];
  uVar2 = 0xffffffffffffffff;
  __return_storage_ptr__->_Mydata = pcVar1;
  do {
    uVar2 = uVar2 + 1;
  } while (pcVar1[uVar2] != '\0');
  __return_storage_ptr__->_Mysize = uVar2;
  return __return_storage_ptr__;
}

// CreateEmptyTable @ 14f9336f0

/* protected: struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 __cdecl
   google::protobuf::internal::UntypedMapBase::CreateEmptyTable(unsigned int) __ptr64 */

NodeBase ** __thiscall
google::protobuf::internal::UntypedMapBase::CreateEmptyTable(UntypedMapBase *this,uint param_1)

{
  ulong64 _Size;
  NodeBase **_Dst;
  
  _Size = (ulonglong)param_1 * 8;
  if (this->arena_ == (Arena *)0x0) {
    _Dst = ::operator_new(_Size);
  }
  else {
    _Dst = Arena::AllocateForArray(this->arena_,_Size);
  }
  memset(_Dst,0,_Size);
  return _Dst;
}

// DebugHardenForceCopyInSwap @ 14f933750

/* bool __cdecl google::protobuf::internal::DebugHardenForceCopyInSwap(void) */

bool __cdecl google::protobuf::internal::DebugHardenForceCopyInSwap(void)

{
  return false;
}

// DeleteMapValue @ 14f933760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: bool __cdecl google::protobuf::internal::MapFieldBase::DeleteMapValue(class
   google::protobuf::MapKey const & __ptr64) __ptr64 */

bool __thiscall
google::protobuf::internal::MapFieldBase::DeleteMapValue(MapFieldBase *this,MapKey *param_1)

{
  bool bVar1;
  CppType CVar2;
  uint uVar3;
  basic_string_view<char,std::char_traits<char>_> *pbVar4;
  __uint64 _Var5;
  KeyMapBase<unsigned_int> *this_00;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if ((*(ulonglong *)this & 1) != 0) {
    (*_sync_map_with_repeated)(this,1);
  }
  this_00 = (KeyMapBase<unsigned_int> *)(this + 1);
  CVar2 = MapKey::type(param_1);
  switch(CVar2) {
  case CPPTYPE_INT32:
    uVar3 = MapKey::GetInt32Value(param_1);
    _Var5 = KeyMapBase<unsigned_int>::EraseImpl(this_00,uVar3);
    return _Var5 != 0;
  case CPPTYPE_INT64:
    _Var5 = MapKey::GetInt64Value(param_1);
    _Var5 = KeyMapBase<unsigned___int64>::EraseImpl((KeyMapBase<unsigned___int64> *)this_00,_Var5);
    return _Var5 != 0;
  case CPPTYPE_UINT32:
    uVar3 = MapKey::GetUInt32Value(param_1);
    _Var5 = KeyMapBase<unsigned_int>::EraseImpl(this_00,uVar3);
    return _Var5 != 0;
  case CPPTYPE_UINT64:
    _Var5 = MapKey::GetUInt64Value(param_1);
    _Var5 = KeyMapBase<unsigned___int64>::EraseImpl((KeyMapBase<unsigned___int64> *)this_00,_Var5);
    return _Var5 != 0;
  default:
                    /* WARNING: Subroutine does not return */
    Unreachable();
  case CPPTYPE_BOOL:
    bVar1 = MapKey::GetBoolValue(param_1);
    _Var5 = KeyMapBase<bool>::EraseImpl((KeyMapBase<bool> *)this_00,bVar1);
    return _Var5 != 0;
  case CPPTYPE_STRING:
    pbVar4 = MapKey::GetStringValue(param_1,&local_18);
    local_28._Mydata = pbVar4->_Mydata;
    local_28._Mysize = pbVar4->_Mysize;
    _Var5 = KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
            EraseImpl((KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                       *)this_00,&local_28);
    return _Var5 != 0;
  }
}

// DeleteTable @ 14f9338d0

/* protected: void __cdecl google::protobuf::internal::UntypedMapBase::DeleteTable(struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64,unsigned int) __ptr64 */

void __thiscall
google::protobuf::internal::UntypedMapBase::DeleteTable
          (UntypedMapBase *this,NodeBase **param_1,uint param_2)

{
  if (this->arena_ != (Arena *)0x0) {
    Arena::ReturnArrayMemory(this->arena_,param_1,(ulonglong)param_2 << 3);
    return;
  }
  ::operator_delete(param_1,(ulonglong)param_2 << 3);
  return;
}

// EndIterator @ 14f933900

/* public: static class google::protobuf::internal::UntypedMapIterator __cdecl
   google::protobuf::internal::UntypedMapBase::EndIterator(void) */

UntypedMapIterator * __cdecl
google::protobuf::internal::UntypedMapBase::EndIterator(UntypedMapIterator *__return_storage_ptr__)

{
  __return_storage_ptr__->node_ = (NodeBase *)0x0;
  __return_storage_ptr__->m_ = (UntypedMapBase *)0x0;
  __return_storage_ptr__->bucket_index_ = 0;
  return __return_storage_ptr__;
}

// EqualIterator @ 14f933920

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: bool __cdecl google::protobuf::internal::MapFieldBase::EqualIterator(class
   google::protobuf::MapIterator const & __ptr64,class google::protobuf::MapIterator const &
   __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::internal::MapFieldBase::EqualIterator
          (MapFieldBase *this,MapIterator *param_1,MapIterator *param_2)

{
  return (param_1->iter_).node_ == (param_2->iter_).node_;
}

// Equals @ 14f933930

/* public: bool __cdecl google::protobuf::internal::UntypedMapIterator::Equals(class
   google::protobuf::internal::UntypedMapIterator const & __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::internal::UntypedMapIterator::Equals
          (UntypedMapIterator *this,UntypedMapIterator *param_1)

{
  return this->node_ == param_1->node_;
}

// EraseImpl @ 14f933940

/* protected: unsigned __int64 __cdecl google::protobuf::internal::KeyMapBase<unsigned
   int>::EraseImpl(unsigned int) __ptr64 */

__uint64 __thiscall
google::protobuf::internal::KeyMapBase<unsigned_int>::EraseImpl
          (KeyMapBase<unsigned_int> *this,uint param_1)

{
  __uint64 _Var1;
  NodeAndBucket local_18;
  
  FindHelper(this,&local_18,param_1);
  if ((KeyNode<unsigned_int> *)local_18.node != (KeyNode<unsigned_int> *)0x0) {
    _Var1 = EraseImpl(this,local_18.bucket,(KeyNode<unsigned_int> *)local_18.node,true);
    return _Var1;
  }
  return 0;
}

// EraseImpl @ 14f933990

/* protected: unsigned __int64 __cdecl google::protobuf::internal::KeyMapBase<unsigned
   int>::EraseImpl(unsigned int,struct google::protobuf::internal::KeyNode<unsigned int> *
   __ptr64,bool) __ptr64 */

__uint64 __thiscall
google::protobuf::internal::KeyMapBase<unsigned_int>::EraseImpl
          (KeyMapBase<unsigned_int> *this,uint param_1,KeyNode<unsigned_int> *param_2,bool param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  KeyNode<unsigned_int> KVar5;
  KeyNode<unsigned_int> KVar6;
  KeyNode<unsigned_int> KVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = *(int *)&this->field_0x4 - 1;
  lVar1 = *(longlong *)&this->field_0x10;
  uVar9 = param_1 & uVar8;
  KVar6 = *(KeyNode<unsigned_int> *)(lVar1 + (ulonglong)uVar9 * 8);
  KVar7 = (KeyNode<unsigned_int>)(lVar1 + (ulonglong)uVar9 * 8);
  while ((KVar5 = KVar6, KVar5 != (KeyNode<unsigned_int>)0x0 &&
         (KVar5 != (KeyNode<unsigned_int>)param_2))) {
    KVar7 = KVar5;
    KVar6 = *(KeyNode<unsigned_int> *)KVar5;
  }
  KVar6 = *(KeyNode<unsigned_int> *)KVar7;
  if (KVar6 == (KeyNode<unsigned_int>)0x0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed +
                   (ulonglong)*(uint *)(param_2 + 1);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                   SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + lVar1;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8) ^
                   SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0)) + lVar1;
    uVar9 = (SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar4,8) ^
            SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar4,0)) & uVar8;
    KVar6 = *(KeyNode<unsigned_int> *)(lVar1 + (ulonglong)uVar9 * 8);
    KVar7 = (KeyNode<unsigned_int>)(lVar1 + (ulonglong)uVar9 * 8);
    while ((KVar5 = KVar6, KVar5 != (KeyNode<unsigned_int>)0x0 &&
           (KVar5 != (KeyNode<unsigned_int>)param_2))) {
      KVar7 = KVar5;
      KVar6 = *(KeyNode<unsigned_int> *)KVar5;
    }
    KVar6 = *(KeyNode<unsigned_int> *)KVar7;
  }
  *(KeyNode<unsigned_int> *)KVar7 = *(KeyNode<unsigned_int> *)KVar6;
  *(int *)this = *(int *)this + -1;
  uVar8 = *(uint *)&this->field_0x8;
  if ((uVar9 == uVar8) && (uVar8 < *(uint *)&this->field_0x4)) {
    do {
      if (*(longlong *)(*(longlong *)&this->field_0x10 + (ulonglong)uVar8 * 8) != 0) break;
      uVar8 = uVar8 + 1;
      *(uint *)&this->field_0x8 = uVar8;
    } while (uVar8 < *(uint *)&this->field_0x4);
  }
  if ((*(longlong *)&this->field_0x18 == 0) && (param_3)) {
    UntypedMapBase::DeleteNode((UntypedMapBase *)this,(NodeBase *)param_2);
  }
  return 1;
}

// EraseImpl @ 14f933ad0

/* protected: unsigned __int64 __cdecl google::protobuf::internal::KeyMapBase<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   >::EraseImpl(unsigned int,struct google::protobuf::internal::KeyNode<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > *
   __ptr64,bool) __ptr64 */

__uint64 __thiscall
google::protobuf::internal::
KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::EraseImpl
          (KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this,
          uint param_1,
          KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *param_2,
          bool param_3)

{
  KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *pKVar1;
  KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *pKVar2;
  uint uVar3;
  NodeAndBucket *pNVar4;
  longlong *plVar5;
  uint uVar6;
  KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *pKVar7;
  basic_string_view<char,std::char_traits<char>_> local_28;
  NodeAndBucket local_18;
  
  uVar6 = param_1 & *(int *)(this + 4) - 1U;
  pKVar2 = *(KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> **)
            (*(longlong *)(this + 0x10) + (ulonglong)uVar6 * 8);
  pKVar7 = (KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
           (*(longlong *)(this + 0x10) + (ulonglong)uVar6 * 8);
  while ((pKVar1 = pKVar2,
         pKVar1 != (KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *
                   )0x0 && (pKVar1 != param_2))) {
    pKVar7 = pKVar1;
    pKVar2 = *(KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> **)
              pKVar1;
  }
  plVar5 = *(longlong **)pKVar7;
  if (plVar5 == (longlong *)0x0) {
    local_28._Mydata = (char *)(param_2 + 8);
    if (0xf < *(ulonglong *)(param_2 + 0x20)) {
      local_28._Mydata = *(char **)(param_2 + 8);
    }
    local_28._Mysize = *(ulong64 *)(param_2 + 0x18);
    pNVar4 = FindHelper(this,&local_18,&local_28);
    uVar6 = pNVar4->bucket;
    pKVar2 = *(KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> **)
              (*(longlong *)(this + 0x10) + (ulonglong)uVar6 * 8);
    pKVar7 = (KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
             (*(longlong *)(this + 0x10) + (ulonglong)uVar6 * 8);
    while ((pKVar1 = pKVar2,
           pKVar1 != (KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                      *)0x0 && (pKVar1 != param_2))) {
      pKVar7 = pKVar1;
      pKVar2 = *(KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> **)
                pKVar1;
    }
    plVar5 = *(longlong **)pKVar7;
  }
  *(longlong *)pKVar7 = *plVar5;
  *(int *)this = *(int *)this + -1;
  uVar3 = *(uint *)(this + 8);
  if ((uVar6 == uVar3) && (uVar3 < *(uint *)(this + 4))) {
    do {
      if (*(longlong *)(*(longlong *)(this + 0x10) + (ulonglong)uVar3 * 8) != 0) break;
      uVar3 = uVar3 + 1;
      *(uint *)(this + 8) = uVar3;
    } while (uVar3 < *(uint *)(this + 4));
  }
  if ((*(longlong *)(this + 0x18) == 0) && (param_3)) {
    UntypedMapBase::DeleteNode((UntypedMapBase *)this,(NodeBase *)param_2);
  }
  return 1;
}

// EraseImpl @ 14f933be0

/* protected: unsigned __int64 __cdecl google::protobuf::internal::KeyMapBase<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   >::EraseImpl(class std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

__uint64 __thiscall
google::protobuf::internal::
KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::EraseImpl
          (KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this,
          basic_string_view<char,std::char_traits<char>_> *param_1)

{
  __uint64 _Var1;
  NodeAndBucket local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  FindHelper(this,&local_28,&local_18);
  if ((KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
      local_28.node !=
      (KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)0x0) {
    _Var1 = EraseImpl(this,local_28.bucket,
                      (KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                       *)local_28.node,true);
    return _Var1;
  }
  return 0;
}

// EraseImpl @ 14f933c30

/* protected: unsigned __int64 __cdecl google::protobuf::internal::KeyMapBase<unsigned
   __int64>::EraseImpl(unsigned int,struct google::protobuf::internal::KeyNode<unsigned __int64> *
   __ptr64,bool) __ptr64 */

__uint64 __thiscall
google::protobuf::internal::KeyMapBase<unsigned___int64>::EraseImpl
          (KeyMapBase<unsigned___int64> *this,uint param_1,KeyNode<unsigned___int64> *param_2,
          bool param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  KeyNode<unsigned___int64> KVar5;
  KeyNode<unsigned___int64> KVar6;
  KeyNode<unsigned___int64> KVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = *(int *)&this->field_0x4 - 1;
  lVar1 = *(longlong *)&this->field_0x10;
  uVar9 = param_1 & uVar8;
  KVar6 = *(KeyNode<unsigned___int64> *)(lVar1 + (ulonglong)uVar9 * 8);
  KVar7 = (KeyNode<unsigned___int64>)(lVar1 + (ulonglong)uVar9 * 8);
  while ((KVar5 = KVar6, KVar5 != (KeyNode<unsigned___int64>)0x0 &&
         (KVar5 != (KeyNode<unsigned___int64>)param_2))) {
    KVar7 = KVar5;
    KVar6 = *(KeyNode<unsigned___int64> *)KVar5;
  }
  KVar6 = *(KeyNode<unsigned___int64> *)KVar7;
  if (KVar6 == (KeyNode<unsigned___int64>)0x0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed +
                   (longlong)param_2[1];
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                   SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + lVar1;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8) ^
                   SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0)) + lVar1;
    uVar9 = (SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
            SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar4,8)) & uVar8;
    KVar6 = *(KeyNode<unsigned___int64> *)(lVar1 + (ulonglong)uVar9 * 8);
    KVar7 = (KeyNode<unsigned___int64>)(lVar1 + (ulonglong)uVar9 * 8);
    while ((KVar5 = KVar6, KVar5 != (KeyNode<unsigned___int64>)0x0 &&
           (KVar5 != (KeyNode<unsigned___int64>)param_2))) {
      KVar7 = KVar5;
      KVar6 = *(KeyNode<unsigned___int64> *)KVar5;
    }
    KVar6 = *(KeyNode<unsigned___int64> *)KVar7;
  }
  *(KeyNode<unsigned___int64> *)KVar7 = *(KeyNode<unsigned___int64> *)KVar6;
  *(int *)this = *(int *)this + -1;
  uVar8 = *(uint *)&this->field_0x8;
  if ((uVar9 == uVar8) && (uVar8 < *(uint *)&this->field_0x4)) {
    do {
      if (*(longlong *)(*(longlong *)&this->field_0x10 + (ulonglong)uVar8 * 8) != 0) break;
      uVar8 = uVar8 + 1;
      *(uint *)&this->field_0x8 = uVar8;
    } while (uVar8 < *(uint *)&this->field_0x4);
  }
  if ((*(longlong *)&this->field_0x18 == 0) && (param_3)) {
    UntypedMapBase::DeleteNode((UntypedMapBase *)this,(NodeBase *)param_2);
  }
  return 1;
}

// EraseImpl @ 14f933d80

/* protected: unsigned __int64 __cdecl google::protobuf::internal::KeyMapBase<unsigned
   __int64>::EraseImpl(unsigned __int64) __ptr64 */

__uint64 __thiscall
google::protobuf::internal::KeyMapBase<unsigned___int64>::EraseImpl
          (KeyMapBase<unsigned___int64> *this,__uint64 param_1)

{
  __uint64 _Var1;
  NodeAndBucket local_18;
  
  FindHelper(this,&local_18,param_1);
  if ((KeyNode<unsigned___int64> *)local_18.node != (KeyNode<unsigned___int64> *)0x0) {
    _Var1 = EraseImpl(this,local_18.bucket,(KeyNode<unsigned___int64> *)local_18.node,true);
    return _Var1;
  }
  return 0;
}

// EraseImpl @ 14f933dd0

/* protected: unsigned __int64 __cdecl
   google::protobuf::internal::KeyMapBase<bool>::EraseImpl(unsigned int,struct
   google::protobuf::internal::KeyNode<bool> * __ptr64,bool) __ptr64 */

__uint64 __thiscall
google::protobuf::internal::KeyMapBase<bool>::EraseImpl
          (KeyMapBase<bool> *this,uint param_1,KeyNode<bool> *param_2,bool param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  KeyNode<bool> *pKVar5;
  KeyNode<bool> *pKVar6;
  uint uVar7;
  longlong *plVar8;
  KeyNode<bool> *pKVar9;
  uint uVar10;
  
  lVar1 = *(longlong *)(this + 0x10);
  uVar10 = param_1 & *(int *)(this + 4) - 1U;
  pKVar6 = *(KeyNode<bool> **)(lVar1 + (ulonglong)uVar10 * 8);
  pKVar9 = (KeyNode<bool> *)(lVar1 + (ulonglong)uVar10 * 8);
  while ((pKVar5 = pKVar6, pKVar5 != (KeyNode<bool> *)0x0 && (pKVar5 != param_2))) {
    pKVar9 = pKVar5;
    pKVar6 = *(KeyNode<bool> **)pKVar5;
  }
  plVar8 = *(longlong **)pKVar9;
  if (plVar8 == (longlong *)0x0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed +
                   (ulonglong)(param_2[8] != (KeyNode<bool>)0x0);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,0) ^
                   SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar2,8)) + lVar1;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8) ^
                   SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0)) + lVar1;
    uVar10 = (SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
             SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar4,8)) & *(int *)(this + 4) - 1U;
    pKVar6 = *(KeyNode<bool> **)(lVar1 + (ulonglong)uVar10 * 8);
    pKVar9 = (KeyNode<bool> *)(lVar1 + (ulonglong)uVar10 * 8);
    while ((pKVar5 = pKVar6, pKVar5 != (KeyNode<bool> *)0x0 && (pKVar5 != param_2))) {
      pKVar9 = pKVar5;
      pKVar6 = *(KeyNode<bool> **)pKVar5;
    }
    plVar8 = *(longlong **)pKVar9;
  }
  *(longlong *)pKVar9 = *plVar8;
  *(int *)this = *(int *)this + -1;
  uVar7 = *(uint *)(this + 8);
  if ((uVar10 == uVar7) && (uVar7 < *(uint *)(this + 4))) {
    do {
      if (*(longlong *)(*(longlong *)(this + 0x10) + (ulonglong)uVar7 * 8) != 0) break;
      uVar7 = uVar7 + 1;
      *(uint *)(this + 8) = uVar7;
    } while (uVar7 < *(uint *)(this + 4));
  }
  if ((*(longlong *)(this + 0x18) == 0) && (param_3)) {
    UntypedMapBase::DeleteNode((UntypedMapBase *)this,(NodeBase *)param_2);
  }
  return 1;
}

// EraseImpl @ 14f933f20

/* protected: unsigned __int64 __cdecl google::protobuf::internal::KeyMapBase<bool>::EraseImpl(bool)
   __ptr64 */

__uint64 __thiscall
google::protobuf::internal::KeyMapBase<bool>::EraseImpl(KeyMapBase<bool> *this,bool param_1)

{
  __uint64 _Var1;
  NodeAndBucket local_18;
  
  FindHelper(this,&local_18,param_1);
  if ((KeyNode<bool> *)local_18.node != (KeyNode<bool> *)0x0) {
    _Var1 = EraseImpl(this,local_18.bucket,(KeyNode<bool> *)local_18.node,true);
    return _Var1;
  }
  return 0;
}

// FindHelper @ 14f933f70

/* protected: struct google::protobuf::internal::UntypedMapBase::NodeAndBucket __cdecl
   google::protobuf::internal::KeyMapBase<unsigned int>::FindHelper(unsigned int)const __ptr64 */

NodeAndBucket * __thiscall
google::protobuf::internal::KeyMapBase<unsigned_int>::FindHelper
          (KeyMapBase<unsigned_int> *this,NodeAndBucket *__return_storage_ptr__,uint param_1)

{
  longlong lVar1;
  NodeBase *pNVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  
  lVar1 = *(longlong *)&this->field_0x10;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed +
                 (ulonglong)param_1;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8)) + lVar1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8)) + lVar1;
  uVar6 = (SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar5,8) ^
          SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar5,0)) & *(int *)&this->field_0x4 - 1U;
  pNVar2 = *(NodeBase **)(lVar1 + (ulonglong)uVar6 * 8);
  do {
    if (pNVar2 == (NodeBase *)0x0) {
      __return_storage_ptr__->node = (NodeBase *)0x0;
LAB_14f934004:
      __return_storage_ptr__->bucket = uVar6;
      return __return_storage_ptr__;
    }
    if (*(uint *)&pNVar2[1].next == param_1) {
      __return_storage_ptr__->node = pNVar2;
      goto LAB_14f934004;
    }
    pNVar2 = pNVar2->next;
  } while( true );
}

// FindHelper @ 14f934030

/* protected: struct google::protobuf::internal::UntypedMapBase::NodeAndBucket __cdecl
   google::protobuf::internal::KeyMapBase<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::FindHelper(class
   std::basic_string_view<char,struct std::char_traits<char> >)const __ptr64 */

NodeAndBucket * __thiscall
google::protobuf::internal::
KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::FindHelper
          (KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this,
          NodeAndBucket *__return_storage_ptr__,
          basic_string_view<char,std::char_traits<char>_> *param_1)

{
  ulong64 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char *_Buf2;
  NodeBase *pNVar6;
  int iVar7;
  NodeBase *_Buf1;
  NodeBase *pNVar8;
  uint uVar9;
  longlong local_res8;
  
  uVar1 = param_1->_Mysize;
  absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
            ((MixingHashState)&local_res8,
             (uchar *)&absl::lts_20240722::hash_internal::MixingHashState::kSeed,
             (__uint64)param_1->_Mydata);
  lVar2 = *(longlong *)(this + 0x10);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1 + local_res8;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8)) + lVar2;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0)) + lVar2;
  uVar9 = (SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar5,8) ^
          SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar5,0)) & *(int *)(this + 4) - 1U;
  pNVar8 = *(NodeBase **)(lVar2 + (ulonglong)uVar9 * 8);
  if (pNVar8 != (NodeBase *)0x0) {
    _Buf2 = param_1->_Mydata;
    pNVar6 = (NodeBase *)param_1->_Mysize;
    do {
      _Buf1 = pNVar8 + 1;
      if ((NodeBase *)0xf < pNVar8[4].next) {
        _Buf1 = pNVar8[1].next;
      }
      if (pNVar8[3].next == pNVar6) {
        iVar7 = memcmp(_Buf1,_Buf2,(size_t)pNVar8[3].next);
        if (iVar7 == 0) {
          __return_storage_ptr__->node = pNVar8;
          goto LAB_14f934118;
        }
      }
      pNVar8 = pNVar8->next;
    } while (pNVar8 != (NodeBase *)0x0);
  }
  __return_storage_ptr__->node = (NodeBase *)0x0;
LAB_14f934118:
  __return_storage_ptr__->bucket = uVar9;
  return __return_storage_ptr__;
}

// FindHelper @ 14f934140

/* protected: struct google::protobuf::internal::UntypedMapBase::NodeAndBucket __cdecl
   google::protobuf::internal::KeyMapBase<unsigned __int64>::FindHelper(unsigned __int64)const
   __ptr64 */

NodeAndBucket * __thiscall
google::protobuf::internal::KeyMapBase<unsigned___int64>::FindHelper
          (KeyMapBase<unsigned___int64> *this,NodeAndBucket *__return_storage_ptr__,__uint64 param_1
          )

{
  longlong lVar1;
  NodeBase *pNVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed + param_1;
  lVar1 = *(longlong *)&this->field_0x10;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8)) + lVar1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8)) + lVar1;
  uVar6 = (SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar5,8) ^
          SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar5,0)) & *(int *)&this->field_0x4 - 1U;
  pNVar2 = *(NodeBase **)(lVar1 + (ulonglong)uVar6 * 8);
  do {
    if (pNVar2 == (NodeBase *)0x0) {
      __return_storage_ptr__->node = (NodeBase *)0x0;
LAB_14f9341e5:
      __return_storage_ptr__->bucket = uVar6;
      return __return_storage_ptr__;
    }
    if (pNVar2[1].next == (NodeBase *)param_1) {
      __return_storage_ptr__->node = pNVar2;
      goto LAB_14f9341e5;
    }
    pNVar2 = pNVar2->next;
  } while( true );
}

// FindHelper @ 14f934210

/* protected: struct google::protobuf::internal::UntypedMapBase::NodeAndBucket __cdecl
   google::protobuf::internal::KeyMapBase<bool>::FindHelper(bool)const __ptr64 */

NodeAndBucket * __thiscall
google::protobuf::internal::KeyMapBase<bool>::FindHelper
          (KeyMapBase<bool> *this,NodeAndBucket *__return_storage_ptr__,bool param_1)

{
  longlong lVar1;
  NodeBase *pNVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  
  lVar1 = *(longlong *)(this + 0x10);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed +
                 (ulonglong)param_1;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8)) + lVar1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8)) + lVar1;
  uVar6 = (SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar5,8) ^
          SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar5,0)) & *(int *)(this + 4) - 1U;
  pNVar2 = *(NodeBase **)(lVar1 + (ulonglong)uVar6 * 8);
  do {
    if (pNVar2 == (NodeBase *)0x0) {
      __return_storage_ptr__->node = (NodeBase *)0x0;
LAB_14f9342a5:
      __return_storage_ptr__->bucket = uVar6;
      return __return_storage_ptr__;
    }
    if ((bool)*(char *)&pNVar2[1].next == param_1) {
      __return_storage_ptr__->node = pNVar2;
      goto LAB_14f9342a5;
    }
    pNVar2 = pNVar2->next;
  } while( true );
}

// Get @ 14f9342d0

/* public: class google::protobuf::internal::RepeatedPtrFieldBase const * __ptr64 __cdecl
   google::protobuf::internal::RawPtr<class google::protobuf::internal::RepeatedPtrFieldBase const
   >::Get(void)const __ptr64 */

RepeatedPtrFieldBase * __thiscall
google::protobuf::internal::RawPtr<google::protobuf::internal::RepeatedPtrFieldBase_const_>::Get
          (RawPtr<google::protobuf::internal::RepeatedPtrFieldBase_const_> *this)

{
  return *(RepeatedPtrFieldBase **)this;
}

// GetArena @ 14f9342e0

/* public: class google::protobuf::Arena * __ptr64 __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Message>::GetArena(void) __ptr64 */

Arena * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Message>::GetArena
          (RepeatedPtrField<google::protobuf::Message> *this)

{
  return *(Arena **)&this->field_0x10;
}

// GetBoolValue @ 14f9342f0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: bool __cdecl google::protobuf::MapKey::GetBoolValue(void)const __ptr64 */

bool __thiscall google::protobuf::MapKey::GetBoolValue(MapKey *this)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = type(this);
  if (CVar1 == CPPTYPE_BOOL) {
    return (this->val_).bool_value;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x83);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapKey::GetBoolValue";
  local_28._Mysize = 0x14;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_bool_1535d0158;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_bool_1535d0158[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = type(this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// GetBoolValue @ 14f9344d0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: bool __cdecl google::protobuf::MapValueConstRef::GetBoolValue(void)const __ptr64 */

bool __thiscall google::protobuf::MapValueConstRef::GetBoolValue(MapValueConstRef *this)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = type(this);
  if (CVar1 == CPPTYPE_BOOL) {
    return (bool)*(undefined1 *)this->data_;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x293);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapValueConstRef::GetBoolValue";
  local_28._Mysize = 0x1e;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_bool_1535d0158;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_bool_1535d0158[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = type(this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// GetDescriptor @ 14f9346b0

/* public: class google::protobuf::Descriptor const * __ptr64 __cdecl
   google::protobuf::Message::GetDescriptor(void)const __ptr64 */

Descriptor * __thiscall google::protobuf::Message::GetDescriptor(Message *this)

{
  Metadata *pMVar1;
  Metadata local_18;
  
  pMVar1 = GetMetadata(this,&local_18);
  return pMVar1->descriptor;
}

// GetDoubleValue @ 14f9346d0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: double __cdecl google::protobuf::MapValueConstRef::GetDoubleValue(void)const __ptr64 */

double __thiscall google::protobuf::MapValueConstRef::GetDoubleValue(MapValueConstRef *this)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = type(this);
  if (CVar1 == CPPTYPE_DOUBLE) {
    return *(double *)this->data_;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x2a6);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapValueConstRef::GetDoubleValue";
  local_28._Mysize = 0x20;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_double_1535d0148;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_double_1535d0148[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = type(this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// GetEnumValue @ 14f9348b0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: int __cdecl google::protobuf::MapValueConstRef::GetEnumValue(void)const __ptr64 */

int __thiscall google::protobuf::MapValueConstRef::GetEnumValue(MapValueConstRef *this)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = type(this);
  if (CVar1 == CPPTYPE_ENUM) {
    return *(int *)this->data_;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x297);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapValueConstRef::GetEnumValue";
  local_28._Mysize = 0x1e;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_enum_1535d0160;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_enum_1535d0160[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = type(this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// GetFloatValue @ 14f934a90

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: float __cdecl google::protobuf::MapValueConstRef::GetFloatValue(void)const __ptr64 */

float __thiscall google::protobuf::MapValueConstRef::GetFloatValue(MapValueConstRef *this)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = type(this);
  if (CVar1 == CPPTYPE_FLOAT) {
    return *(float *)this->data_;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x2a1);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapValueConstRef::GetFloatValue";
  local_28._Mysize = 0x1f;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_float_1535d0150;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_float_1535d0150[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = type(this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// GetInt32Value @ 14f934c70

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: int __cdecl google::protobuf::MapKey::GetInt32Value(void)const __ptr64 */

int __thiscall google::protobuf::MapKey::GetInt32Value(MapKey *this)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = type(this);
  if (CVar1 == CPPTYPE_INT32) {
    return (this->val_).int32_value;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x7b);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapKey::GetInt32Value";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_int32_1535d0128;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_int32_1535d0128[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = type(this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// GetInt32Value @ 14f934e50

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: int __cdecl google::protobuf::MapValueConstRef::GetInt32Value(void)const __ptr64 */

int __thiscall google::protobuf::MapValueConstRef::GetInt32Value(MapValueConstRef *this)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = type(this);
  if (CVar1 == CPPTYPE_INT32) {
    return *(int *)this->data_;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x28a);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapValueConstRef::GetInt32Value";
  local_28._Mysize = 0x1f;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_int32_1535d0128;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_int32_1535d0128[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = type(this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// GetInt64Value @ 14f935030

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: __int64 __cdecl google::protobuf::MapKey::GetInt64Value(void)const __ptr64 */

__int64 __thiscall google::protobuf::MapKey::GetInt64Value(MapKey *this)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = type(this);
  if (CVar1 == CPPTYPE_INT64) {
    return (__int64)(this->val_).string_value._Mydata;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x73);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapKey::GetInt64Value";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_int64_1535d0130;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_int64_1535d0130[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = type(this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// GetInt64Value @ 14f935210

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: __int64 __cdecl google::protobuf::MapValueConstRef::GetInt64Value(void)const __ptr64 */

__int64 __thiscall google::protobuf::MapValueConstRef::GetInt64Value(MapValueConstRef *this)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = type(this);
  if (CVar1 == CPPTYPE_INT64) {
    return *(__int64 *)this->data_;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x280);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapValueConstRef::GetInt64Value";
  local_28._Mysize = 0x1f;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_int64_1535d0130;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_int64_1535d0130[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = type(this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// GetKey @ 14f9353f0

/* protected: unsigned int * __ptr64 __cdecl google::protobuf::internal::KeyMapBase<unsigned
   int>::GetKey(struct google::protobuf::internal::NodeBase * __ptr64)const __ptr64 */

uint * __thiscall
google::protobuf::internal::KeyMapBase<unsigned_int>::GetKey
          (KeyMapBase<unsigned_int> *this,NodeBase *param_1)

{
  return (uint *)(param_1 + 1);
}

// GetKey @ 14f935400

/* protected: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   > * __ptr64 __cdecl google::protobuf::internal::KeyMapBase<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::GetKey(struct
   google::protobuf::internal::NodeBase * __ptr64)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::internal::
KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::GetKey
          (KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this,
          NodeBase *param_1)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1);
}

// GetKey @ 14f935410

/* protected: unsigned __int64 * __ptr64 __cdecl google::protobuf::internal::KeyMapBase<unsigned
   __int64>::GetKey(struct google::protobuf::internal::NodeBase * __ptr64)const __ptr64 */

__uint64 * __thiscall
google::protobuf::internal::KeyMapBase<unsigned___int64>::GetKey
          (KeyMapBase<unsigned___int64> *this,NodeBase *param_1)

{
  return (__uint64 *)(param_1 + 1);
}

// GetKey @ 14f935420

/* protected: bool * __ptr64 __cdecl google::protobuf::internal::KeyMapBase<bool>::GetKey(struct
   google::protobuf::internal::NodeBase * __ptr64)const __ptr64 */

bool * __thiscall
google::protobuf::internal::KeyMapBase<bool>::GetKey(KeyMapBase<bool> *this,NodeBase *param_1)

{
  return (bool *)(param_1 + 1);
}

// GetKey @ 14f935430

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: class google::protobuf::MapKey const & __ptr64 __cdecl
   google::protobuf::MapIterator::GetKey(void) __ptr64 */

MapKey * __thiscall google::protobuf::MapIterator::GetKey(MapIterator *this)

{
  return &this->key_;
}

// GetMap @ 14f935440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class google::protobuf::internal::UntypedMapBase const & __ptr64 __cdecl
   google::protobuf::internal::MapFieldBaseForParse::GetMap(void)const __ptr64 */

UntypedMapBase * __thiscall
google::protobuf::internal::MapFieldBaseForParse::GetMap(MapFieldBaseForParse *this)

{
  if (((ulonglong)this->payload_ & 1) != 0) {
    (*_sync_map_with_repeated)(this,0);
    return (UntypedMapBase *)(this + 1);
  }
  return (UntypedMapBase *)(this + 1);
}

// GetMapEntryValuePrototype @ 14f935480

/* class google::protobuf::Message const & __ptr64 __cdecl
   google::protobuf::internal::GetMapEntryValuePrototype(class google::protobuf::Message const &
   __ptr64) */

Message * __cdecl google::protobuf::internal::GetMapEntryValuePrototype(Message *param_1)

{
  Reflection *this;
  Metadata *pMVar1;
  FieldDescriptor *pFVar2;
  Message *pMVar3;
  Metadata local_28;
  Metadata local_18;
  
  pMVar1 = protobuf::Message::GetMetadata(param_1,&local_28);
  this = pMVar1->reflection;
  pMVar1 = protobuf::Message::GetMetadata(param_1,&local_18);
  pFVar2 = Descriptor::map_value(pMVar1->descriptor);
  pMVar3 = Reflection::GetMessage(this,param_1,pFVar2,(MessageFactory *)0x0);
  return pMVar3;
}

// GetMapRaw @ 14f9354e0

/* protected: class google::protobuf::internal::UntypedMapBase & __ptr64 __cdecl
   google::protobuf::internal::MapFieldBaseForParse::GetMapRaw(void) __ptr64 */

UntypedMapBase * __thiscall
google::protobuf::internal::MapFieldBaseForParse::GetMapRaw(MapFieldBaseForParse *this)

{
  return (UntypedMapBase *)(this + 1);
}

// GetMapRaw @ 14f9354f0

/* protected: class google::protobuf::internal::UntypedMapBase const & __ptr64 __cdecl
   google::protobuf::internal::MapFieldBaseForParse::GetMapRaw(void)const __ptr64 */

UntypedMapBase * __thiscall
google::protobuf::internal::MapFieldBaseForParse::GetMapRaw(MapFieldBaseForParse *this)

{
  return (UntypedMapBase *)(this + 1);
}

// GetMessageValue @ 14f935500

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: class google::protobuf::Message const & __ptr64 __cdecl
   google::protobuf::MapValueConstRef::GetMessageValue(void)const __ptr64 */

Message * __thiscall google::protobuf::MapValueConstRef::GetMessageValue(MapValueConstRef *this)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = type(this);
  if (CVar1 == CPPTYPE_MESSAGE) {
    return this->data_;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x2ac);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapValueConstRef::GetMessageValue";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_message_1535d0170;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_message_1535d0170[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = type(this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// GetPrototype @ 14f9356e0

/* protected: class google::protobuf::Message const * __ptr64 __cdecl
   google::protobuf::internal::MapFieldBase::GetPrototype(void)const __ptr64 */

Message * __thiscall google::protobuf::internal::MapFieldBase::GetPrototype(MapFieldBase *this)

{
  return *(Message **)&this->field_0x8;
}

// GetReflection @ 14f9356f0

/* public: class google::protobuf::Reflection const * __ptr64 __cdecl
   google::protobuf::Message::GetReflection(void)const __ptr64 */

Reflection * __thiscall google::protobuf::Message::GetReflection(Message *this)

{
  Metadata *pMVar1;
  Metadata local_18;
  
  pMVar1 = GetMetadata(this,&local_18);
  return pMVar1->reflection;
}

// GetRepeatedField @ 14f935710

/* public: class google::protobuf::internal::RepeatedPtrFieldBase const & __ptr64 __cdecl
   google::protobuf::internal::MapFieldBase::GetRepeatedField(void)const __ptr64 */

RepeatedPtrFieldBase * __thiscall
google::protobuf::internal::MapFieldBase::GetRepeatedField(MapFieldBase *this)

{
  ulonglong uVar1;
  ReflectionPayload *pRVar2;
  
  uVar1 = *(ulonglong *)this;
  if ((((uVar1 & 1) != 0) && (uVar1 != 1)) && (*(int *)(uVar1 + 0x1f) != 0)) {
    pRVar2 = payload(this);
    return (RepeatedPtrFieldBase *)pRVar2;
  }
  if (((*(ulonglong *)this & 1) == 0) ||
     (pRVar2 = (ReflectionPayload *)(*(ulonglong *)this - 1), pRVar2 == (ReflectionPayload *)0x0)) {
    if (*(int *)(this + 1) == 0) {
      return (RepeatedPtrFieldBase *)&kZeroBuffer;
    }
    pRVar2 = payload(this);
  }
  absl::lts_20240722::Mutex::Lock(&pRVar2->mutex);
  if (pRVar2->state == (atomic<google::protobuf::internal::MapFieldBase::State>)0x0) {
    SyncRepeatedFieldWithMapNoLock(this);
    pRVar2->state = (atomic<google::protobuf::internal::MapFieldBase::State>)0x2;
  }
  absl::lts_20240722::Mutex::Unlock(&pRVar2->mutex);
  return (RepeatedPtrFieldBase *)pRVar2;
}

// GetStringValue @ 14f9357c0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   google::protobuf::MapKey::GetStringValue(void)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
google::protobuf::MapKey::GetStringValue
          (MapKey *this,basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = type(this);
  if (CVar1 == CPPTYPE_STRING) {
    uVar3 = (this->val_).string_value._Mysize;
    __return_storage_ptr__->_Mydata = (this->val_).string_value._Mydata;
    __return_storage_ptr__->_Mysize = uVar3;
    return __return_storage_ptr__;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x87);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapKey::GetStringValue";
  local_28._Mysize = 0x16;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_string_1535d0168;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_string_1535d0168[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = type(this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// GetStringValue @ 14f9359a0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   google::protobuf::MapValueConstRef::GetStringValue(void)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
google::protobuf::MapValueConstRef::GetStringValue
          (MapValueConstRef *this,
          basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__)

{
  longlong *plVar1;
  CppType CVar2;
  LogMessage *pLVar3;
  longlong *plVar4;
  ulong64 uVar5;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar2 = type(this);
  if (CVar2 == CPPTYPE_STRING) {
    plVar1 = this->data_;
    plVar4 = plVar1;
    if (0xf < (ulonglong)plVar1[3]) {
      plVar4 = (longlong *)*plVar1;
    }
    __return_storage_ptr__->_Mydata = (char *)plVar4;
    __return_storage_ptr__->_Mysize = plVar1[2];
    return __return_storage_ptr__;
  }
  pLVar3 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x29c);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar3,&local_28);
  local_28._Mydata = "MapValueConstRef::GetStringValue";
  local_28._Mysize = 0x20;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar3,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar3,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar3,&local_28);
  local_28._Mydata = PTR_s_string_1535d0168;
  uVar5 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_string_1535d0168[local_28._Mysize] != '\0');
  pLVar3 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar3,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar3,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar3,&local_28);
  CVar2 = type(this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar2];
  do {
    uVar5 = uVar5 + 1;
  } while (local_28._Mydata[uVar5] != '\0');
  local_28._Mysize = uVar5;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar3,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// GetUInt32Value @ 14f935b90

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: unsigned int __cdecl google::protobuf::MapKey::GetUInt32Value(void)const __ptr64 */

uint __thiscall google::protobuf::MapKey::GetUInt32Value(MapKey *this)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = type(this);
  if (CVar1 == CPPTYPE_UINT32) {
    return (this->val_).uint32_value;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x7f);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapKey::GetUInt32Value";
  local_28._Mysize = 0x16;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_uint32_1535d0138;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_uint32_1535d0138[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = type(this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// GetUInt32Value @ 14f935d70

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: unsigned int __cdecl google::protobuf::MapValueConstRef::GetUInt32Value(void)const
   __ptr64 */

uint __thiscall google::protobuf::MapValueConstRef::GetUInt32Value(MapValueConstRef *this)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = type(this);
  if (CVar1 == CPPTYPE_UINT32) {
    return *(uint *)this->data_;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x28f);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapValueConstRef::GetUInt32Value";
  local_28._Mysize = 0x20;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_uint32_1535d0138;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_uint32_1535d0138[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = type(this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// GetUInt64Value @ 14f935f50

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: unsigned __int64 __cdecl google::protobuf::MapKey::GetUInt64Value(void)const __ptr64 */

__uint64 __thiscall google::protobuf::MapKey::GetUInt64Value(MapKey *this)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = type(this);
  if (CVar1 == CPPTYPE_UINT64) {
    return (__uint64)(this->val_).string_value._Mydata;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x77);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapKey::GetUInt64Value";
  local_28._Mysize = 0x16;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_uint64_1535d0140;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_uint64_1535d0140[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = type(this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// GetUInt64Value @ 14f936130

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: unsigned __int64 __cdecl google::protobuf::MapValueConstRef::GetUInt64Value(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::MapValueConstRef::GetUInt64Value(MapValueConstRef *this)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = type(this);
  if (CVar1 == CPPTYPE_UINT64) {
    return *(__uint64 *)this->data_;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x285);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapValueConstRef::GetUInt64Value";
  local_28._Mysize = 0x20;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_uint64_1535d0140;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_uint64_1535d0140[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = type(this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// GetValueRef @ 14f936310

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: class google::protobuf::MapValueRef const & __ptr64 __cdecl
   google::protobuf::MapIterator::GetValueRef(void) __ptr64 */

MapValueRef * __thiscall google::protobuf::MapIterator::GetValueRef(MapIterator *this)

{
  return &this->value_;
}

// GetVoidKey @ 14f936320

/* public: void * __ptr64 __cdecl google::protobuf::internal::NodeBase::GetVoidKey(void) __ptr64 */

void * __thiscall google::protobuf::internal::NodeBase::GetVoidKey(NodeBase *this)

{
  return this + 1;
}

// GetVoidKey @ 14f936330

/* public: void const * __ptr64 __cdecl google::protobuf::internal::NodeBase::GetVoidKey(void)const
   __ptr64 */

void * __thiscall google::protobuf::internal::NodeBase::GetVoidKey(NodeBase *this)

{
  return this + 1;
}

// GetVoidValue @ 14f936340

/* public: void * __ptr64 __cdecl google::protobuf::internal::UntypedMapBase::GetVoidValue(struct
   google::protobuf::internal::NodeBase * __ptr64)const __ptr64 */

void * __thiscall
google::protobuf::internal::UntypedMapBase::GetVoidValue(UntypedMapBase *this,NodeBase *param_1)

{
  return (void *)((longlong)&param_1->next + (ulonglong)(this->type_info_).value_offset);
}

// IncreaseIterator @ 14f936350

/* WARNING: Enum "CppType": Some values do not have unique names */
/* private: void __cdecl google::protobuf::internal::MapFieldBase::IncreaseIterator(class
   google::protobuf::MapIterator * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::IncreaseIterator(MapFieldBase *this,MapIterator *param_1)

{
  uint uVar1;
  UntypedMapBase *pUVar2;
  NodeBase *pNVar3;
  uint uVar4;
  NodeBase *pNVar5;
  NodeBase *pNVar6;
  
  pNVar6 = ((param_1->iter_).node_)->next;
  if (pNVar6 != (NodeBase *)0x0) {
LAB_14f936395:
    (param_1->iter_).node_ = pNVar6;
    pUVar2 = (param_1->iter_).m_;
    switch((pUVar2->type_info_).key_type) {
    case 0:
      (param_1->key_).val_.bool_value = *(bool *)&pNVar6[1].next;
      *(ulonglong *)&param_1->value_ =
           (longlong)&pNVar6->next + (ulonglong)(pUVar2->type_info_).value_offset;
      return;
    case 1:
      (param_1->key_).val_.int32_value = *(int *)&pNVar6[1].next;
      *(ulonglong *)&param_1->value_ =
           (longlong)&pNVar6->next + (ulonglong)(pUVar2->type_info_).value_offset;
      return;
    case 2:
      (param_1->key_).val_.string_value._Mydata = (char *)pNVar6[1].next;
      *(ulonglong *)&param_1->value_ =
           (longlong)&pNVar6->next + (ulonglong)(pUVar2->type_info_).value_offset;
      return;
    default:
                    /* WARNING: Subroutine does not return */
      Unreachable();
    case 5:
      goto switchD_14f9363c7_caseD_5;
    }
  }
  pUVar2 = (param_1->iter_).m_;
  uVar4 = (param_1->iter_).bucket_index_ + 1;
  uVar1 = pUVar2->num_buckets_;
  if (uVar4 < uVar1) {
    do {
      pNVar6 = pUVar2->table_[uVar4];
      if (pNVar6 != (NodeBase *)0x0) {
        (param_1->iter_).bucket_index_ = uVar4;
        goto LAB_14f936395;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  (param_1->iter_).bucket_index_ = 0;
  (param_1->iter_).node_ = (NodeBase *)0x0;
  return;
switchD_14f9363c7_caseD_5:
  pNVar5 = pNVar6 + 1;
  if ((NodeBase *)&DAT_0000000f < pNVar6[4].next) {
    pNVar5 = pNVar6[1].next;
  }
  pNVar3 = pNVar6[3].next;
  (param_1->key_).val_.string_value._Mydata = (char *)pNVar5;
  (param_1->key_).val_.string_value._Mysize = (ulong64)pNVar3;
  *(ulonglong *)&param_1->value_ =
       (longlong)&pNVar6->next + (ulonglong)(pUVar2->type_info_).value_offset;
  return;
}

// InitializeKeyValue @ 14f936470

/* private: void __cdecl google::protobuf::internal::MapFieldBase::InitializeKeyValue(class
   google::protobuf::MessageLite * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::InitializeKeyValue
          (MapFieldBase *this,MessageLite *param_1)

{
  Reflection *this_00;
  Metadata *pMVar1;
  FieldDescriptor *pFVar2;
  Message *pMVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  Metadata local_28;
  Metadata local_18;
  
  pMVar3 = *(Message **)&this->field_0x8;
  pMVar1 = protobuf::Message::GetMetadata(pMVar3,&local_28);
  this_00 = pMVar1->reflection;
  pMVar1 = protobuf::Message::GetMetadata(pMVar3,&local_18);
  pFVar2 = Descriptor::map_value(pMVar1->descriptor);
  pMVar3 = Reflection::GetMessage(this_00,pMVar3,pFVar2,(MessageFactory *)0x0);
  puVar4 = (undefined8 *)(**(code **)(*(longlong *)pMVar3 + 0x18))(pMVar3);
  uVar5 = *(ulonglong *)this;
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulonglong *)(uVar5 + 0xf);
  }
  (*(code *)puVar4[6])(*puVar4,param_1,uVar5);
  return;
}

// InsertOrLookupMapValue @ 14f936500

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: bool __cdecl google::protobuf::internal::MapFieldBase::InsertOrLookupMapValue(class
   google::protobuf::MapKey const & __ptr64,class google::protobuf::MapValueRef * __ptr64) __ptr64
    */

bool __thiscall
google::protobuf::internal::MapFieldBase::InsertOrLookupMapValue
          (MapFieldBase *this,MapKey *param_1,MapValueRef *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  
  SyncMapWithRepeatedField(this);
  uVar1 = *(ulonglong *)this;
  if (((uVar1 & 1) != 0) && (uVar1 != 1)) {
    *(undefined4 *)(uVar1 + 0x1f) = 0;
  }
  bVar2 = InsertOrLookupMapValueNoSync(this,param_1,param_2);
  return bVar2;
}

// InsertOrLookupMapValueNoSync @ 14f936560

/* WARNING: Enum "CppType": Some values do not have unique names */
/* protected: bool __cdecl
   google::protobuf::internal::MapFieldBase::InsertOrLookupMapValueNoSync(class
   google::protobuf::MapKey const & __ptr64,class google::protobuf::MapValueRef * __ptr64) __ptr64
    */

bool __thiscall
google::protobuf::internal::MapFieldBase::InsertOrLookupMapValueNoSync
          (MapFieldBase *this,MapKey *param_1,MapValueRef *param_2)

{
  MapFieldBase *pMVar1;
  char cVar2;
  undefined1 uVar3;
  void *local_res8;
  undefined1 local_res18 [8];
  void *local_res20;
  MapFieldBase *local_38;
  MapFieldBase *local_30;
  void **local_28;
  
  pMVar1 = this + 1;
  local_res18 = (undefined1  [8])param_2;
  if (*(int *)(this + 1) != 0) {
    cVar2 = FUN_14f931ac0(param_1,pMVar1,local_res18);
    if (cVar2 != '\0') {
      return false;
    }
  }
  if (*(Arena **)&this[2].field_0x8 == (Arena *)0x0) {
    local_res8 = ::operator_new((ulonglong)*(ushort *)&this[1].field_0xc);
  }
  else {
    local_res8 = Arena::Allocate(*(Arena **)&this[2].field_0x8,
                                 (ulonglong)*(ushort *)&this[1].field_0xc + 7 & 0xfffffffffffffff8);
  }
  local_38 = (MapFieldBase *)local_res18;
  local_28 = &local_res20;
  local_res18 = (undefined1  [8])this;
  local_res20 = local_res8;
  local_30 = pMVar1;
  FUN_14f931f40(pMVar1,&local_38);
  *(ulonglong *)param_2 = (ulonglong)(byte)this[1].field_0xe + (longlong)local_res8;
  local_30 = (MapFieldBase *)&local_res8;
  local_38 = this;
  uVar3 = FUN_14f931d40(param_1,pMVar1,&local_38);
  return (bool)uVar3;
}

// InsertOrReplaceNode @ 14f936640

/* protected: bool __cdecl google::protobuf::internal::KeyMapBase<unsigned
   int>::InsertOrReplaceNode(struct google::protobuf::internal::KeyNode<unsigned int> * __ptr64)
   __ptr64 */

bool __thiscall
google::protobuf::internal::KeyMapBase<unsigned_int>::InsertOrReplaceNode
          (KeyMapBase<unsigned_int> *this,KeyNode<unsigned_int> *param_1)

{
  uint uVar1;
  longlong lVar2;
  KeyNode<unsigned_int> KVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  byte bVar11;
  ulonglong uVar12;
  uint uVar13;
  bool bVar14;
  
  bVar14 = true;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed +
                 (ulonglong)*(uint *)(param_1 + 1);
  lVar2 = *(longlong *)&this->field_0x10;
  uVar1 = *(uint *)&this->field_0x4;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8)) + lVar2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,8) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,0)) + lVar2;
  uVar10 = (SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar6,8) ^
           SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar6,0)) & uVar1 - 1;
  for (KVar3 = *(KeyNode<unsigned_int> *)(lVar2 + (ulonglong)uVar10 * 8);
      KVar3 != (KeyNode<unsigned_int>)0x0; KVar3 = *(KeyNode<unsigned_int> *)KVar3) {
    if (*(uint *)((longlong)KVar3 + 8) == *(uint *)(param_1 + 1)) {
      if (KVar3 != (KeyNode<unsigned_int>)0x0) {
        EraseImpl(this,uVar10,(KeyNode<unsigned_int> *)KVar3,true);
        bVar14 = false;
        goto LAB_14f93679f;
      }
      break;
    }
  }
  uVar7 = (ulonglong)(*(int *)this + 1);
  uVar9 = ((ulonglong)uVar1 + (ulonglong)(uVar1 >> 4) * -4) - (ulonglong)(uVar1 & 1);
  if (uVar9 < uVar7) {
    if (0x7fffffff < uVar1) goto LAB_14f93679f;
    uVar13 = uVar1 * 2;
  }
  else {
    if ((uVar9 >> 2 < uVar7) || (uVar1 < 3)) goto LAB_14f93679f;
    bVar11 = 1;
    uVar12 = uVar7 * 5 >> 2;
    uVar7 = uVar12 * 4 + 4;
    uVar8 = 2;
    while (uVar7 < uVar9) {
      uVar8 = uVar8 + 1;
      bVar11 = bVar11 + 1;
      uVar7 = uVar12 + 1 << ((byte)uVar8 & 0x3f);
    }
    uVar9 = (ulonglong)(uVar1 >> (bVar11 & 0x3f));
    uVar7 = 2;
    if (2 < uVar9) {
      uVar7 = uVar9;
    }
    uVar13 = (uint)uVar7;
    if (uVar7 == uVar1) goto LAB_14f93679f;
  }
  Resize(this,uVar13);
  uVar10 = BucketNumber(this,*(uint *)(param_1 + 1));
LAB_14f93679f:
  InsertUnique(this,uVar10,param_1);
  *(int *)this = *(int *)this + 1;
  return bVar14;
}

// InsertOrReplaceNode @ 14f9367e0

/* protected: bool __cdecl google::protobuf::internal::KeyMapBase<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   >::InsertOrReplaceNode(struct google::protobuf::internal::KeyNode<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > * __ptr64)
   __ptr64 */

bool __thiscall
google::protobuf::internal::
KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
InsertOrReplaceNode(KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                    *this,KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                          *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  NodeAndBucket local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  local_38.node = (NodeBase *)(param_1 + 8);
  bVar10 = true;
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    local_38.node = *(NodeBase **)(param_1 + 8);
  }
  local_38._8_8_ = *(undefined8 *)(param_1 + 0x18);
  local_28._Mydata = (char *)local_38.node;
  local_28._Mysize = local_38._8_8_;
  FindHelper(this,&local_38,&local_28);
  uVar2 = local_38.bucket;
  if ((KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
      local_38.node !=
      (KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)0x0) {
    EraseImpl(this,local_38.bucket,
              (KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
              local_38.node,true);
    bVar10 = false;
    goto LAB_14f936939;
  }
  uVar5 = *(uint *)(this + 4);
  uVar3 = (ulonglong)(*(int *)this + 1);
  uVar7 = ((ulonglong)uVar5 + (ulonglong)(uVar5 >> 4) * -4) - (ulonglong)(uVar5 & 1);
  if (uVar7 < uVar3) {
    if (0x7fffffff < uVar5) goto LAB_14f936939;
    uVar9 = uVar5 * 2;
  }
  else {
    if ((uVar7 >> 2 < uVar3) || (uVar5 < 3)) goto LAB_14f936939;
    bVar6 = 1;
    uVar8 = uVar3 * 5 >> 2;
    uVar3 = uVar8 * 4 + 4;
    uVar4 = 2;
    while (uVar3 < uVar7) {
      uVar4 = uVar4 + 1;
      bVar6 = bVar6 + 1;
      uVar3 = uVar8 + 1 << ((byte)uVar4 & 0x3f);
    }
    uVar4 = uVar5 >> (bVar6 & 0x3f);
    uVar9 = 2;
    if (2 < uVar4) {
      uVar9 = uVar4;
    }
    if (uVar9 == uVar5) goto LAB_14f936939;
  }
  Resize(this,uVar9);
  local_38.node = (NodeBase *)(param_1 + 8);
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    local_38.node = *(NodeBase **)(param_1 + 8);
  }
  local_38._8_8_ = *(undefined8 *)(param_1 + 0x18);
  local_28._Mydata = (char *)local_38.node;
  local_28._Mysize = local_38._8_8_;
  uVar2 = BucketNumber(this,&local_28);
LAB_14f936939:
  plVar1 = (longlong *)(*(longlong *)(this + 0x10) + (ulonglong)uVar2 * 8);
  if (*plVar1 == 0) {
    *plVar1 = (longlong)param_1;
    *(undefined8 *)param_1 = 0;
    uVar5 = *(uint *)(this + 8);
    if (uVar2 < *(uint *)(this + 8)) {
      uVar5 = uVar2;
    }
    *(uint *)(this + 8) = uVar5;
  }
  else {
    *(longlong *)param_1 = *plVar1;
    *plVar1 = (longlong)param_1;
  }
  *(int *)this = *(int *)this + 1;
  return bVar10;
}

// InsertOrReplaceNode @ 14f936990

/* protected: bool __cdecl google::protobuf::internal::KeyMapBase<unsigned
   __int64>::InsertOrReplaceNode(struct google::protobuf::internal::KeyNode<unsigned __int64> *
   __ptr64) __ptr64 */

bool __thiscall
google::protobuf::internal::KeyMapBase<unsigned___int64>::InsertOrReplaceNode
          (KeyMapBase<unsigned___int64> *this,KeyNode<unsigned___int64> *param_1)

{
  uint uVar1;
  longlong lVar2;
  KeyNode<unsigned___int64> KVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  byte bVar11;
  ulonglong uVar12;
  uint uVar13;
  bool bVar14;
  
  bVar14 = true;
  lVar2 = *(longlong *)&this->field_0x10;
  uVar1 = *(uint *)&this->field_0x4;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed +
                 (longlong)param_1[1];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8)) + lVar2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,8) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,0)) + lVar2;
  uVar10 = (SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar6,8) ^
           SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar6,0)) & uVar1 - 1;
  for (KVar3 = *(KeyNode<unsigned___int64> *)(lVar2 + (ulonglong)uVar10 * 8);
      KVar3 != (KeyNode<unsigned___int64>)0x0; KVar3 = *(KeyNode<unsigned___int64> *)KVar3) {
    if (*(KeyNode<unsigned___int64> *)((longlong)KVar3 + 8) == param_1[1]) {
      if (KVar3 != (KeyNode<unsigned___int64>)0x0) {
        EraseImpl(this,uVar10,(KeyNode<unsigned___int64> *)KVar3,true);
        bVar14 = false;
        goto LAB_14f936b00;
      }
      break;
    }
  }
  uVar7 = (ulonglong)(*(int *)this + 1);
  uVar9 = ((ulonglong)uVar1 + (ulonglong)(uVar1 >> 4) * -4) - (ulonglong)(uVar1 & 1);
  if (uVar9 < uVar7) {
    if (0x7fffffff < uVar1) goto LAB_14f936b00;
    uVar13 = uVar1 * 2;
  }
  else {
    if ((uVar9 >> 2 < uVar7) || (uVar1 < 3)) goto LAB_14f936b00;
    bVar11 = 1;
    uVar12 = uVar7 * 5 >> 2;
    uVar7 = uVar12 * 4 + 4;
    uVar8 = 2;
    while (uVar7 < uVar9) {
      uVar8 = uVar8 + 1;
      bVar11 = bVar11 + 1;
      uVar7 = uVar12 + 1 << ((byte)uVar8 & 0x3f);
    }
    uVar9 = (ulonglong)(uVar1 >> (bVar11 & 0x3f));
    uVar7 = 2;
    if (2 < uVar9) {
      uVar7 = uVar9;
    }
    uVar13 = (uint)uVar7;
    if (uVar7 == uVar1) goto LAB_14f936b00;
  }
  Resize(this,uVar13);
  uVar10 = BucketNumber(this,(ulong64)param_1[1]);
LAB_14f936b00:
  InsertUnique(this,uVar10,param_1);
  *(int *)this = *(int *)this + 1;
  return bVar14;
}

// InsertOrReplaceNode @ 14f936b40

/* protected: bool __cdecl google::protobuf::internal::KeyMapBase<bool>::InsertOrReplaceNode(struct
   google::protobuf::internal::KeyNode<bool> * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::internal::KeyMapBase<bool>::InsertOrReplaceNode
          (KeyMapBase<bool> *this,KeyNode<bool> *param_1)

{
  uint uVar1;
  longlong lVar2;
  KeyNode<bool> *pKVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  byte bVar11;
  ulonglong uVar12;
  uint uVar13;
  bool bVar14;
  
  bVar14 = true;
  lVar2 = *(longlong *)(this + 0x10);
  uVar1 = *(uint *)(this + 4);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed +
                 (ulonglong)(param_1[8] != (KeyNode<bool>)0x0);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,0) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar4,8)) + lVar2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,8) ^
                 SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,0)) + lVar2;
  uVar10 = (SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar6,8) ^
           SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar6,0)) & uVar1 - 1;
  for (pKVar3 = *(KeyNode<bool> **)(lVar2 + (ulonglong)uVar10 * 8); pKVar3 != (KeyNode<bool> *)0x0;
      pKVar3 = *(KeyNode<bool> **)pKVar3) {
    if (pKVar3[8] == param_1[8]) {
      if (pKVar3 != (KeyNode<bool> *)0x0) {
        EraseImpl(this,uVar10,pKVar3,true);
        bVar14 = false;
        goto LAB_14f936cb0;
      }
      break;
    }
  }
  uVar7 = (ulonglong)(*(int *)this + 1);
  uVar9 = ((ulonglong)uVar1 + (ulonglong)(uVar1 >> 4) * -4) - (ulonglong)(uVar1 & 1);
  if (uVar9 < uVar7) {
    if (0x7fffffff < uVar1) goto LAB_14f936cb0;
    uVar13 = uVar1 * 2;
  }
  else {
    if ((uVar9 >> 2 < uVar7) || (uVar1 < 3)) goto LAB_14f936cb0;
    bVar11 = 1;
    uVar12 = uVar7 * 5 >> 2;
    uVar7 = uVar12 * 4 + 4;
    uVar8 = 2;
    while (uVar7 < uVar9) {
      uVar8 = uVar8 + 1;
      bVar11 = bVar11 + 1;
      uVar7 = uVar12 + 1 << ((byte)uVar8 & 0x3f);
    }
    uVar9 = (ulonglong)(uVar1 >> (bVar11 & 0x3f));
    uVar7 = 2;
    if (2 < uVar9) {
      uVar7 = uVar9;
    }
    uVar13 = (uint)uVar7;
    if (uVar7 == uVar1) goto LAB_14f936cb0;
  }
  Resize(this,uVar13);
  uVar10 = BucketNumber(this,(bool)param_1[8]);
LAB_14f936cb0:
  InsertUnique(this,uVar10,param_1);
  *(int *)this = *(int *)this + 1;
  return bVar14;
}

// InsertUnique @ 14f936cf0

/* protected: void __cdecl google::protobuf::internal::KeyMapBase<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   >::InsertUnique(unsigned int,struct google::protobuf::internal::KeyNode<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > * __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::internal::
KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::InsertUnique
          (KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this,
          uint param_1,
          KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *pKVar3;
  KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *pKVar4;
  uint local_res10 [6];
  
  local_res10[0] = param_1;
  puVar1 = (undefined8 *)(*(longlong *)(this + 0x10) + (ulonglong)param_1 * 8);
  lVar2 = *(longlong *)(*(longlong *)(this + 0x10) + (ulonglong)param_1 * 8);
  if (lVar2 == 0) {
    *puVar1 = param_2;
    pKVar4 = this + 8;
    *(undefined8 *)param_2 = 0;
    pKVar3 = (KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
             local_res10;
    if (*(uint *)pKVar4 <= param_1) {
      pKVar3 = pKVar4;
    }
    *(uint *)pKVar4 = *(uint *)pKVar3;
    return;
  }
  *(longlong *)param_2 = lVar2;
  *puVar1 = param_2;
  return;
}

// InsertUnique @ 14f936d40

/* protected: void __cdecl google::protobuf::internal::KeyMapBase<bool>::InsertUnique(unsigned
   int,struct google::protobuf::internal::KeyNode<bool> * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::KeyMapBase<bool>::InsertUnique
          (KeyMapBase<bool> *this,uint param_1,KeyNode<bool> *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  KeyMapBase<bool> *pKVar3;
  KeyMapBase<bool> *pKVar4;
  uint local_res10 [6];
  
  local_res10[0] = param_1;
  puVar1 = (undefined8 *)(*(longlong *)(this + 0x10) + (ulonglong)param_1 * 8);
  lVar2 = *(longlong *)(*(longlong *)(this + 0x10) + (ulonglong)param_1 * 8);
  if (lVar2 == 0) {
    *puVar1 = param_2;
    pKVar4 = this + 8;
    *(undefined8 *)param_2 = 0;
    pKVar3 = (KeyMapBase<bool> *)local_res10;
    if (*(uint *)pKVar4 <= param_1) {
      pKVar3 = pKVar4;
    }
    *(uint *)pKVar4 = *(uint *)pKVar3;
    return;
  }
  *(longlong *)param_2 = lVar2;
  *puVar1 = param_2;
  return;
}

// InternalSwap @ 14f936d90

/* public: void __cdecl google::protobuf::internal::MapFieldBase::InternalSwap(class
   google::protobuf::internal::MapFieldBase * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::InternalSwap(MapFieldBase *this,MapFieldBase *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined4 *)(this + 1);
  *(undefined4 *)(this + 1) = *(undefined4 *)(param_1 + 1);
  uVar2 = *(undefined4 *)&param_1[1].field_0x4;
  *(undefined4 *)(param_1 + 1) = uVar1;
  uVar1 = *(undefined4 *)&this[1].field_0x4;
  *(undefined4 *)&this[1].field_0x4 = uVar2;
  *(undefined4 *)&param_1[1].field_0x4 = uVar1;
  uVar1 = *(undefined4 *)&this[1].field_0x8;
  *(undefined4 *)&this[1].field_0x8 = *(undefined4 *)&param_1[1].field_0x8;
  *(undefined4 *)&param_1[1].field_0x8 = uVar1;
  uVar1 = *(undefined4 *)&this[1].field_0xc;
  *(undefined4 *)&this[1].field_0xc = *(undefined4 *)&param_1[1].field_0xc;
  *(undefined4 *)&param_1[1].field_0xc = uVar1;
  uVar3 = *(undefined8 *)(this + 2);
  *(undefined8 *)(this + 2) = *(undefined8 *)(param_1 + 2);
  uVar4 = *(undefined8 *)&param_1[2].field_0x8;
  *(undefined8 *)(param_1 + 2) = uVar3;
  uVar3 = *(undefined8 *)&this[2].field_0x8;
  *(undefined8 *)&this[2].field_0x8 = uVar4;
  *(undefined8 *)&param_1[2].field_0x8 = uVar3;
  SwapPayload(this,param_1);
  return;
}

// InternalSwap @ 14f936e00

/* public: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::InternalSwap(class
   google::protobuf::internal::RepeatedPtrFieldBase * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::InternalSwap
          (RepeatedPtrFieldBase *this,RepeatedPtrFieldBase *param_1)

{
  memswap<16>((char *)this,(char *)param_1);
  return;
}

// InternalSwap @ 14f936e10

/* public: void __cdecl google::protobuf::internal::UntypedMapBase::InternalSwap(class
   google::protobuf::internal::UntypedMapBase * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::UntypedMapBase::InternalSwap
          (UntypedMapBase *this,UntypedMapBase *param_1)

{
  uint uVar1;
  TypeInfo TVar2;
  NodeBase **ppNVar3;
  Arena *pAVar4;
  
  uVar1 = this->num_elements_;
  this->num_elements_ = param_1->num_elements_;
  param_1->num_elements_ = uVar1;
  uVar1 = this->num_buckets_;
  this->num_buckets_ = param_1->num_buckets_;
  param_1->num_buckets_ = uVar1;
  uVar1 = this->index_of_first_non_null_;
  this->index_of_first_non_null_ = param_1->index_of_first_non_null_;
  param_1->index_of_first_non_null_ = uVar1;
  TVar2 = this->type_info_;
  this->type_info_ = param_1->type_info_;
  param_1->type_info_ = TVar2;
  ppNVar3 = this->table_;
  this->table_ = param_1->table_;
  param_1->table_ = ppNVar3;
  pAVar4 = this->arena_;
  this->arena_ = param_1->arena_;
  param_1->arena_ = pAVar4;
  return;
}

// IsMapValid @ 14f936e80

/* public: bool __cdecl google::protobuf::internal::MapFieldBase::IsMapValid(void)const __ptr64 */

bool __thiscall google::protobuf::internal::MapFieldBase::IsMapValid(MapFieldBase *this)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)this;
  if (((uVar1 & 1) != 0) && (uVar1 != 1)) {
    return *(int *)(uVar1 + 0x1f) != 1;
  }
  return true;
}

// IsPayload @ 14f936eb0

/* protected: static bool __cdecl google::protobuf::internal::MapFieldBaseForParse::IsPayload(enum
   google::protobuf::internal::MapFieldBaseForParse::TaggedPtr) */

bool __cdecl google::protobuf::internal::MapFieldBaseForParse::IsPayload(TaggedPtr param_1)

{
  return (bool)((byte)param_1 & 1);
}

// IsRepeatedFieldValid @ 14f936ec0

/* public: bool __cdecl google::protobuf::internal::MapFieldBase::IsRepeatedFieldValid(void)const
   __ptr64 */

bool __thiscall google::protobuf::internal::MapFieldBase::IsRepeatedFieldValid(MapFieldBase *this)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)this;
  if (((uVar1 & 1) != 0) && (uVar1 != 1)) {
    return *(int *)(uVar1 + 0x1f) != 0;
  }
  return false;
}

// LookupMapValueNoSync @ 14f936ef0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* private: bool __cdecl google::protobuf::internal::MapFieldBase::LookupMapValueNoSync(class
   google::protobuf::MapKey const & __ptr64,class google::protobuf::MapValueConstRef * __ptr64)const
   __ptr64 */

bool __thiscall
google::protobuf::internal::MapFieldBase::LookupMapValueNoSync
          (MapFieldBase *this,MapKey *param_1,MapValueConstRef *param_2)

{
  undefined1 uVar1;
  MapValueConstRef *local_res18 [2];
  
  if (*(int *)(this + 1) == 0) {
    return false;
  }
  local_res18[0] = param_2;
  uVar1 = FUN_14f931ac0(param_1,this + 1,local_res18);
  return (bool)uVar1;
}

// MapBegin @ 14f936f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::internal::MapFieldBase::MapBegin(class
   google::protobuf::MapIterator * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::MapBegin(MapFieldBase *this,MapIterator *param_1)

{
  NodeBase *pNVar1;
  uint uVar2;
  undefined4 uStack_14;
  
  if ((*(ulonglong *)this & 1) != 0) {
    (*_sync_map_with_repeated)(this,0);
  }
  uVar2 = *(uint *)&this[1].field_0x8;
  if (uVar2 == *(uint *)&this[1].field_0x4) {
    pNVar1 = (NodeBase *)0x0;
    uVar2 = 0;
  }
  else {
    pNVar1 = *(NodeBase **)(*(longlong *)(this + 2) + (ulonglong)uVar2 * 8);
  }
  (param_1->iter_).node_ = pNVar1;
  (param_1->iter_).m_ = (UntypedMapBase *)(this + 1);
  *(ulonglong *)&(param_1->iter_).bucket_index_ = CONCAT44(uStack_14,uVar2);
  SetMapIteratorValue(this,param_1);
  return;
}

// MapEnd @ 14f936fb0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::internal::MapFieldBase::MapEnd(class
   google::protobuf::MapIterator * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::MapEnd(MapFieldBase *this,MapIterator *param_1)

{
  uint uStack_14;
  
  (param_1->iter_).node_ = (NodeBase *)0x0;
  (param_1->iter_).m_ = (UntypedMapBase *)0x0;
  *(ulonglong *)&(param_1->iter_).bucket_index_ = (ulonglong)uStack_14 << 0x20;
  return;
}

// MapOffset @ 14f936fe0

/* protected: static unsigned __int64 __cdecl
   google::protobuf::internal::MapFieldBaseForParse::MapOffset(void) */

__uint64 __cdecl google::protobuf::internal::MapFieldBaseForParse::MapOffset(void)

{
  return 0x10;
}

// MergeFrom @ 14f936ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __cdecl google::protobuf::internal::MapFieldBase::MergeFrom(class
   google::protobuf::internal::MapFieldBase const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::MergeFrom(MapFieldBase *this,MapFieldBase *param_1)

{
  if ((*(ulonglong *)this & 1) != 0) {
    (*_sync_map_with_repeated)(this,1);
  }
  if ((*(ulonglong *)param_1 & 1) != 0) {
    (*_sync_map_with_repeated)(param_1,0);
  }
  UntypedMapBase::UntypedMergeFrom((UntypedMapBase *)(this + 1),(UntypedMapBase *)(param_1 + 1));
  return;
}

// Mutable @ 14f937050

/* public: class google::protobuf::Message * __ptr64 __cdecl
   google::protobuf::RepeatedPtrField<class google::protobuf::Message>::Mutable(int) __ptr64 */

Message * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Message>::Mutable
          (RepeatedPtrField<google::protobuf::Message> *this,int param_1)

{
  Message *pMVar1;
  
  pMVar1 = *(Message **)this;
  if ((~*(byte *)this & 1) == 0) {
    pMVar1 = *(Message **)(&pMVar1->field_0x7 + (longlong)param_1 * 8);
  }
  return pMVar1;
}

// MutableAccess @ 14f937070

/* protected: void __cdecl google::protobuf::internal::MapFieldBase::MutableAccess(void) __ptr64 */

void __thiscall google::protobuf::internal::MapFieldBase::MutableAccess(MapFieldBase *this)

{
  return;
}

// MutableMap @ 14f937080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class google::protobuf::internal::UntypedMapBase * __ptr64 __cdecl
   google::protobuf::internal::MapFieldBaseForParse::MutableMap(void) __ptr64 */

UntypedMapBase * __thiscall
google::protobuf::internal::MapFieldBaseForParse::MutableMap(MapFieldBaseForParse *this)

{
  if (((ulonglong)this->payload_ & 1) != 0) {
    (*_sync_map_with_repeated)(this,1);
    return (UntypedMapBase *)(this + 1);
  }
  return (UntypedMapBase *)(this + 1);
}

// MutableMessageValue @ 14f9370c0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: class google::protobuf::Message * __ptr64 __cdecl
   google::protobuf::MapValueRef::MutableMessageValue(void) __ptr64 */

Message * __thiscall google::protobuf::MapValueRef::MutableMessageValue(MapValueRef *this)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  if (CVar1 == CPPTYPE_MESSAGE) {
    return *(Message **)this;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x305);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapValueRef::MutableMessageValue";
  local_28._Mysize = 0x20;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_message_1535d0170;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_message_1535d0170[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// MutableRepeatedField @ 14f9372a0

/* public: class google::protobuf::internal::RepeatedPtrFieldBase * __ptr64 __cdecl
   google::protobuf::internal::MapFieldBase::MutableRepeatedField(void) __ptr64 */

RepeatedPtrFieldBase * __thiscall
google::protobuf::internal::MapFieldBase::MutableRepeatedField(MapFieldBase *this)

{
  ulonglong uVar1;
  ReflectionPayload *pRVar2;
  ReflectionPayload *pRVar3;
  
  uVar1 = *(ulonglong *)this;
  if ((((uVar1 & 1) == 0) || (uVar1 == 1)) || (*(int *)(uVar1 + 0x1f) == 0)) {
    if (((*(ulonglong *)this & 1) == 0) ||
       (pRVar2 = (ReflectionPayload *)(*(ulonglong *)this - 1), pRVar2 == (ReflectionPayload *)0x0))
    {
      pRVar2 = payload(this);
    }
    absl::lts_20240722::Mutex::Lock(&pRVar2->mutex);
    if (pRVar2->state == (atomic<google::protobuf::internal::MapFieldBase::State>)0x0) {
      SyncRepeatedFieldWithMapNoLock(this);
      pRVar2->state = (atomic<google::protobuf::internal::MapFieldBase::State>)0x2;
    }
    absl::lts_20240722::Mutex::Unlock(&pRVar2->mutex);
  }
  else {
    pRVar2 = payload(this);
  }
  pRVar3 = payload(this);
  pRVar3->state = (atomic<google::protobuf::internal::MapFieldBase::State>)0x1;
  return (RepeatedPtrFieldBase *)pRVar2;
}

// NeedsDestroy @ 14f937340

/* protected: bool __cdecl google::protobuf::internal::RepeatedPtrFieldBase::NeedsDestroy(void)const
   __ptr64 */

bool __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::NeedsDestroy(RepeatedPtrFieldBase *this)

{
  return this->tagged_rep_or_elem_ != (void *)0x0;
}

// New @ 14f937350

/* public: class google::protobuf::Message * __ptr64 __cdecl google::protobuf::Message::New(class
   google::protobuf::Arena * __ptr64)const __ptr64 */

Message * __thiscall google::protobuf::Message::New(Message *this,Arena *param_1)

{
  MessageLite *pMVar1;
  
  pMVar1 = MessageLite::New((MessageLite *)this,param_1);
  return (Message *)pMVar1;
}

// PayloadSlow @ 14f937360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: struct google::protobuf::internal::MapFieldBase::ReflectionPayload & __ptr64 __cdecl
   google::protobuf::internal::MapFieldBase::PayloadSlow(void)const __ptr64 */

ReflectionPayload * __thiscall
google::protobuf::internal::MapFieldBase::PayloadSlow(MapFieldBase *this)

{
  Arena *this_00;
  RepeatedPtrFieldBase *pRVar1;
  Arena *pAVar2;
  RepeatedPtrFieldBase *this_01;
  Arena *pAVar3;
  bool bVar4;
  
  this_01 = (RepeatedPtrFieldBase *)0x0;
  this_00 = *(Arena **)this;
  pAVar3 = this_00;
  if (((ulonglong)this_00 & 1) != 0) goto LAB_14f93741c;
  _sync_map_with_repeated = FUN_14f92fb20;
  if (this_00 == (Arena *)0x0) {
    pRVar1 = ::operator_new(0x28);
    if (pRVar1 != (RepeatedPtrFieldBase *)0x0) goto LAB_14f9373cf;
  }
  else {
    pRVar1 = Arena::AllocateAlignedWithCleanup
                       (this_00,0x28,8,
                        cleanup::
                        arena_destruct_object<google::protobuf::internal::MapFieldBase::ReflectionPayload>
                       );
LAB_14f9373cf:
    pRVar1->arena_ = this_00;
    pRVar1->current_size_ = 0;
    pRVar1->capacity_proxy_ = 0;
    pRVar1->tagged_rep_or_elem_ = (void *)0x0;
    pRVar1[1].tagged_rep_or_elem_ = (void *)0x0;
    pRVar1[1].current_size_ = 0;
    this_01 = pRVar1;
  }
  pAVar3 = (Arena *)((longlong)&this_01->tagged_rep_or_elem_ + 1);
  LOCK();
  pAVar2 = *(Arena **)this;
  bVar4 = this_00 == pAVar2;
  if (bVar4) {
    *(Arena **)this = pAVar3;
    pAVar2 = this_00;
  }
  UNLOCK();
  if (((!bVar4) && (pAVar3 = pAVar2, this_00 == (Arena *)0x0)) &&
     (this_01 != (RepeatedPtrFieldBase *)0x0)) {
    if (this_01->tagged_rep_or_elem_ != (void *)0x0) {
      RepeatedPtrFieldBase::DestroyProtos(this_01);
    }
    ::operator_delete(this_01,0x28);
  }
LAB_14f93741c:
  return (ReflectionPayload *)((longlong)&pAVar3[-1].impl_.first_arena_.cached_blocks_ + 7);
}

// PlacementNew @ 14f937440

/* public: class google::protobuf::MessageLite * __ptr64 __cdecl
   google::protobuf::internal::ClassData::PlacementNew(void * __ptr64,class google::protobuf::Arena
   * __ptr64)const __ptr64 */

MessageLite * __thiscall
google::protobuf::internal::ClassData::PlacementNew(ClassData *this,void *param_1,Arena *param_2)

{
  MessageLite *pMVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014f937447. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pMVar1 = (*(this->message_creator).field3_0x8.func_)(this->prototype,param_1,param_2);
  return pMVar1;
}

// PlusPlus @ 14f937450

/* public: void __cdecl google::protobuf::internal::UntypedMapIterator::PlusPlus(void) __ptr64 */

void __thiscall google::protobuf::internal::UntypedMapIterator::PlusPlus(UntypedMapIterator *this)

{
  uint uVar1;
  NodeBase *pNVar2;
  uint uVar3;
  
  pNVar2 = this->node_->next;
  if (pNVar2 != (NodeBase *)0x0) {
    this->node_ = pNVar2;
    return;
  }
  uVar3 = this->bucket_index_ + 1;
  uVar1 = this->m_->num_buckets_;
  if (uVar3 < uVar1) {
    do {
      pNVar2 = this->m_->table_[uVar3];
      if (pNVar2 != (NodeBase *)0x0) {
        this->bucket_index_ = uVar3;
        this->node_ = pNVar2;
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  this->bucket_index_ = 0;
  this->node_ = (NodeBase *)0x0;
  return;
}

// Resize @ 14f9374b0

/* protected: void __cdecl google::protobuf::internal::KeyMapBase<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   >::Resize(unsigned int) __ptr64 */

void __thiscall
google::protobuf::internal::
KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::Resize
          (KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this,
          uint param_1)

{
  ulong64 _Size;
  uint uVar1;
  Arena *this_00;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  void *pvVar11;
  void *_Dst;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong local_res8;
  
  uVar1 = *(uint *)(this + 4);
  this_00 = *(Arena **)(this + 0x18);
  *(uint *)(this + 4) = param_1;
  _Size = (ulonglong)param_1 * 8;
  if (uVar1 == 1) {
    *(uint *)(this + 8) = param_1;
    if (this_00 == (Arena *)0x0) {
      pvVar11 = ::operator_new(_Size);
    }
    else {
      pvVar11 = Arena::AllocateForArray(this_00,_Size);
    }
    memset(pvVar11,0,_Size);
    *(void **)(this + 0x10) = pvVar11;
    return;
  }
  pvVar11 = *(void **)(this + 0x10);
  if (this_00 == (Arena *)0x0) {
    _Dst = ::operator_new(_Size);
  }
  else {
    _Dst = Arena::AllocateForArray(this_00,_Size);
  }
  memset(_Dst,0,_Size);
  uVar9 = *(uint *)(this + 8);
  uVar13 = (ulonglong)uVar9;
  *(void **)(this + 0x10) = _Dst;
  *(undefined4 *)(this + 8) = *(undefined4 *)(this + 4);
  if (uVar9 < uVar1) {
    puVar14 = (undefined8 *)(uVar13 * 8 + (longlong)pvVar11);
    do {
      plVar8 = (longlong *)*puVar14;
      while (plVar8 != (longlong *)0x0) {
        plVar12 = plVar8 + 1;
        plVar2 = (longlong *)*plVar8;
        if (0xf < (ulonglong)plVar8[4]) {
          plVar12 = (longlong *)plVar8[1];
        }
        lVar3 = plVar8[3];
        absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
                  ((MixingHashState)&local_res8,
                   (uchar *)&absl::lts_20240722::hash_internal::MixingHashState::kSeed,
                   (__uint64)plVar12);
        lVar4 = *(longlong *)(this + 0x10);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = lVar3 + local_res8;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,0) ^
                       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,8)) + lVar4;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar6,0) ^
                       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar6,8)) + lVar4;
        uVar9 = (SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar7,0) ^
                SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar7,8)) & *(int *)(this + 4) - 1U;
        lVar3 = *(longlong *)(lVar4 + (ulonglong)uVar9 * 8);
        if (lVar3 == 0) {
          *(longlong **)(lVar4 + (ulonglong)uVar9 * 8) = plVar8;
          *plVar8 = 0;
          uVar10 = *(uint *)(this + 8);
          if (uVar9 < *(uint *)(this + 8)) {
            uVar10 = uVar9;
          }
          *(uint *)(this + 8) = uVar10;
          plVar8 = plVar2;
        }
        else {
          *plVar8 = lVar3;
          *(longlong **)(lVar4 + (ulonglong)uVar9 * 8) = plVar8;
          plVar8 = plVar2;
        }
      }
      uVar9 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar9;
      puVar14 = puVar14 + 1;
    } while (uVar9 < uVar1);
  }
  if (*(Arena **)(this + 0x18) != (Arena *)0x0) {
    Arena::ReturnArrayMemory(*(Arena **)(this + 0x18),pvVar11,(ulonglong)uVar1 << 3);
    return;
  }
  ::operator_delete(pvVar11,(ulonglong)uVar1 << 3);
  return;
}

// Resize @ 14f9376b0

/* protected: void __cdecl google::protobuf::internal::KeyMapBase<bool>::Resize(unsigned int)
   __ptr64 */

void __thiscall
google::protobuf::internal::KeyMapBase<bool>::Resize(KeyMapBase<bool> *this,uint param_1)

{
  ulong64 _Size;
  uint uVar1;
  Arena *this_00;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  void *pvVar11;
  void *_Dst;
  undefined8 *puVar12;
  ulonglong uVar13;
  
  uVar1 = *(uint *)(this + 4);
  this_00 = *(Arena **)(this + 0x18);
  *(uint *)(this + 4) = param_1;
  _Size = (ulonglong)param_1 * 8;
  if (uVar1 == 1) {
    *(uint *)(this + 8) = param_1;
    if (this_00 == (Arena *)0x0) {
      pvVar11 = ::operator_new(_Size);
    }
    else {
      pvVar11 = Arena::AllocateForArray(this_00,_Size);
    }
    memset(pvVar11,0,_Size);
    *(void **)(this + 0x10) = pvVar11;
    return;
  }
  pvVar11 = *(void **)(this + 0x10);
  if (this_00 == (Arena *)0x0) {
    _Dst = ::operator_new(_Size);
  }
  else {
    _Dst = Arena::AllocateForArray(this_00,_Size);
  }
  memset(_Dst,0,_Size);
  uVar9 = *(uint *)(this + 8);
  uVar13 = (ulonglong)uVar9;
  *(void **)(this + 0x10) = _Dst;
  *(undefined4 *)(this + 8) = *(undefined4 *)(this + 4);
  if (uVar9 < uVar1) {
    puVar12 = (undefined8 *)((longlong)pvVar11 + uVar13 * 8);
    do {
      plVar8 = (longlong *)*puVar12;
      while (plVar8 != (longlong *)0x0) {
        lVar2 = *(longlong *)(this + 0x10);
        plVar3 = (longlong *)*plVar8;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed +
                       (ulonglong)((char)plVar8[1] != '\0');
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,0) ^
                       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar5,8)) + lVar2;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar6,0) ^
                       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar6,8)) + lVar2;
        uVar9 = (SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar7,0) ^
                SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar7,8)) & *(int *)(this + 4) - 1U;
        lVar4 = *(longlong *)(lVar2 + (ulonglong)uVar9 * 8);
        if (lVar4 == 0) {
          *(longlong **)(lVar2 + (ulonglong)uVar9 * 8) = plVar8;
          *plVar8 = 0;
          uVar10 = *(uint *)(this + 8);
          if (uVar9 < *(uint *)(this + 8)) {
            uVar10 = uVar9;
          }
          *(uint *)(this + 8) = uVar10;
          plVar8 = plVar3;
        }
        else {
          *plVar8 = lVar4;
          *(longlong **)(lVar2 + (ulonglong)uVar9 * 8) = plVar8;
          plVar8 = plVar3;
        }
      }
      uVar9 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar9;
      puVar12 = puVar12 + 1;
    } while (uVar9 < uVar1);
  }
  if (*(Arena **)(this + 0x18) != (Arena *)0x0) {
    Arena::ReturnArrayMemory(*(Arena **)(this + 0x18),pvVar11,(ulonglong)uVar1 << 3);
    return;
  }
  ::operator_delete(pvVar11,(ulonglong)uVar1 << 3);
  return;
}

// ResizeIfLoadIsOutOfRange @ 14f937880

/* protected: bool __cdecl google::protobuf::internal::KeyMapBase<unsigned
   int>::ResizeIfLoadIsOutOfRange(unsigned __int64) __ptr64 */

bool __thiscall
google::protobuf::internal::KeyMapBase<unsigned_int>::ResizeIfLoadIsOutOfRange
          (KeyMapBase<unsigned_int> *this,__uint64 param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar1 = *(uint *)&this->field_0x4;
  uVar6 = ((ulonglong)uVar1 + (ulonglong)(uVar1 >> 4) * -4) - (ulonglong)(uVar1 & 1);
  if (uVar6 < param_1) {
    if (uVar1 < 0x80000000) {
      Resize(this,uVar1 * 2);
      return true;
    }
  }
  else if ((param_1 <= uVar6 >> 2) && (2 < uVar1)) {
    bVar5 = 1;
    uVar4 = param_1 * 5 >> 2;
    uVar2 = uVar4 * 4 + 4;
    uVar3 = 2;
    while (uVar2 < uVar6) {
      uVar3 = uVar3 + 1;
      bVar5 = bVar5 + 1;
      uVar2 = uVar4 + 1 << ((byte)uVar3 & 0x3f);
    }
    uVar3 = uVar1 >> (bVar5 & 0x3f);
    uVar7 = 2;
    if (2 < uVar3) {
      uVar7 = uVar3;
    }
    if (uVar7 != uVar1) {
      Resize(this,uVar7);
      return true;
    }
  }
  return false;
}

// ResizeIfLoadIsOutOfRange @ 14f937950

/* protected: bool __cdecl google::protobuf::internal::KeyMapBase<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   >::ResizeIfLoadIsOutOfRange(unsigned __int64) __ptr64 */

bool __thiscall
google::protobuf::internal::
KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
ResizeIfLoadIsOutOfRange
          (KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this,
          __uint64 param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(this + 4);
  uVar6 = ((ulonglong)uVar1 + (ulonglong)(uVar1 >> 4) * -4) - (ulonglong)(uVar1 & 1);
  if (uVar6 < param_1) {
    if (uVar1 < 0x80000000) {
      Resize(this,uVar1 * 2);
      return true;
    }
  }
  else if ((param_1 <= uVar6 >> 2) && (2 < uVar1)) {
    bVar5 = 1;
    uVar4 = param_1 * 5 >> 2;
    uVar2 = uVar4 * 4 + 4;
    uVar3 = 2;
    while (uVar2 < uVar6) {
      uVar3 = uVar3 + 1;
      bVar5 = bVar5 + 1;
      uVar2 = uVar4 + 1 << ((byte)uVar3 & 0x3f);
    }
    uVar3 = uVar1 >> (bVar5 & 0x3f);
    uVar7 = 2;
    if (2 < uVar3) {
      uVar7 = uVar3;
    }
    if (uVar7 != uVar1) {
      Resize(this,uVar7);
      return true;
    }
  }
  return false;
}

// ResizeIfLoadIsOutOfRange @ 14f937a20

/* protected: bool __cdecl google::protobuf::internal::KeyMapBase<unsigned
   __int64>::ResizeIfLoadIsOutOfRange(unsigned __int64) __ptr64 */

bool __thiscall
google::protobuf::internal::KeyMapBase<unsigned___int64>::ResizeIfLoadIsOutOfRange
          (KeyMapBase<unsigned___int64> *this,__uint64 param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar1 = *(uint *)&this->field_0x4;
  uVar6 = ((ulonglong)uVar1 + (ulonglong)(uVar1 >> 4) * -4) - (ulonglong)(uVar1 & 1);
  if (uVar6 < param_1) {
    if (uVar1 < 0x80000000) {
      Resize(this,uVar1 * 2);
      return true;
    }
  }
  else if ((param_1 <= uVar6 >> 2) && (2 < uVar1)) {
    bVar5 = 1;
    uVar4 = param_1 * 5 >> 2;
    uVar2 = uVar4 * 4 + 4;
    uVar3 = 2;
    while (uVar2 < uVar6) {
      uVar3 = uVar3 + 1;
      bVar5 = bVar5 + 1;
      uVar2 = uVar4 + 1 << ((byte)uVar3 & 0x3f);
    }
    uVar3 = uVar1 >> (bVar5 & 0x3f);
    uVar7 = 2;
    if (2 < uVar3) {
      uVar7 = uVar3;
    }
    if (uVar7 != uVar1) {
      Resize(this,uVar7);
      return true;
    }
  }
  return false;
}

// ResizeIfLoadIsOutOfRange @ 14f937af0

/* protected: bool __cdecl
   google::protobuf::internal::KeyMapBase<bool>::ResizeIfLoadIsOutOfRange(unsigned __int64) __ptr64
    */

bool __thiscall
google::protobuf::internal::KeyMapBase<bool>::ResizeIfLoadIsOutOfRange
          (KeyMapBase<bool> *this,__uint64 param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(this + 4);
  uVar6 = ((ulonglong)uVar1 + (ulonglong)(uVar1 >> 4) * -4) - (ulonglong)(uVar1 & 1);
  if (uVar6 < param_1) {
    if (uVar1 < 0x80000000) {
      Resize(this,uVar1 * 2);
      return true;
    }
  }
  else if ((param_1 <= uVar6 >> 2) && (2 < uVar1)) {
    bVar5 = 1;
    uVar4 = param_1 * 5 >> 2;
    uVar2 = uVar4 * 4 + 4;
    uVar3 = 2;
    while (uVar2 < uVar6) {
      uVar3 = uVar3 + 1;
      bVar5 = bVar5 + 1;
      uVar2 = uVar4 + 1 << ((byte)uVar3 & 0x3f);
    }
    uVar3 = uVar1 >> (bVar5 & 0x3f);
    uVar7 = 2;
    if (2 < uVar3) {
      uVar7 = uVar3;
    }
    if (uVar7 != uVar1) {
      Resize(this,uVar7);
      return true;
    }
  }
  return false;
}

// SetBoolValue @ 14f937bc0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::MapKey::SetBoolValue(bool) __ptr64 */

void __thiscall google::protobuf::MapKey::SetBoolValue(MapKey *this,bool param_1)

{
  this->type_ = CPPTYPE_BOOL;
  (this->val_).bool_value = param_1;
  return;
}

// SetBoolValue @ 14f937bd0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::MapValueRef::SetBoolValue(bool) __ptr64 */

void __thiscall google::protobuf::MapValueRef::SetBoolValue(MapValueRef *this,bool param_1)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  if (CVar1 == CPPTYPE_BOOL) {
    *(bool *)*(undefined8 *)this = param_1;
    return;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x2ee);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapValueRef::SetBoolValue";
  local_28._Mysize = 0x19;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_bool_1535d0158;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_bool_1535d0158[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// SetDoubleValue @ 14f937db0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::MapValueRef::SetDoubleValue(double) __ptr64 */

void __thiscall google::protobuf::MapValueRef::SetDoubleValue(MapValueRef *this,double param_1)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_38;
  LogMessageFatal local_28 [2];
  
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  if (CVar1 == CPPTYPE_DOUBLE) {
    **(double **)this = param_1;
    return;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (local_28,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x2ff);
  local_38._Mydata = "Protocol Buffer map usage error:\n";
  local_38._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_38);
  local_38._Mydata = "MapValueRef::SetDoubleValue";
  local_38._Mysize = 0x1b;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_38);
  local_38._Mydata = " type does not match\n";
  local_38._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_38);
  local_38._Mydata = "  Expected : ";
  local_38._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_38);
  local_38._Mydata = PTR_s_double_1535d0148;
  uVar3 = 0xffffffffffffffff;
  local_38._Mysize = 0xffffffffffffffff;
  do {
    local_38._Mysize = local_38._Mysize + 1;
  } while (PTR_s_double_1535d0148[local_38._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_38);
  local_38._Mydata = "\n";
  local_38._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_38);
  local_38._Mydata = "  Actual   : ";
  local_38._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_38);
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  local_38._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_38._Mydata[uVar3] != '\0');
  local_38._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_38);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(local_28);
}

// SetEnumValue @ 14f937fa0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::MapValueRef::SetEnumValue(int) __ptr64 */

void __thiscall google::protobuf::MapValueRef::SetEnumValue(MapValueRef *this,int param_1)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  if (CVar1 == CPPTYPE_ENUM) {
    **(int **)this = param_1;
    return;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x2f3);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapValueRef::SetEnumValue";
  local_28._Mysize = 0x19;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_enum_1535d0160;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_enum_1535d0160[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// SetFloatValue @ 14f938180

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::MapValueRef::SetFloatValue(float) __ptr64 */

void __thiscall google::protobuf::MapValueRef::SetFloatValue(MapValueRef *this,float param_1)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_38;
  LogMessageFatal local_28 [2];
  
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  if (CVar1 == CPPTYPE_FLOAT) {
    **(float **)this = param_1;
    return;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (local_28,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x2fb);
  local_38._Mydata = "Protocol Buffer map usage error:\n";
  local_38._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_38);
  local_38._Mydata = "MapValueRef::SetFloatValue";
  local_38._Mysize = 0x1a;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_38);
  local_38._Mydata = " type does not match\n";
  local_38._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_38);
  local_38._Mydata = "  Expected : ";
  local_38._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_38);
  local_38._Mydata = PTR_s_float_1535d0150;
  uVar3 = 0xffffffffffffffff;
  local_38._Mysize = 0xffffffffffffffff;
  do {
    local_38._Mysize = local_38._Mysize + 1;
  } while (PTR_s_float_1535d0150[local_38._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_38);
  local_38._Mydata = "\n";
  local_38._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_38);
  local_38._Mydata = "  Actual   : ";
  local_38._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_38);
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  local_38._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_38._Mydata[uVar3] != '\0');
  local_38._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_38);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(local_28);
}

// SetInt32Value @ 14f938370

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::MapKey::SetInt32Value(int) __ptr64 */

void __thiscall google::protobuf::MapKey::SetInt32Value(MapKey *this,int param_1)

{
  this->type_ = CPPTYPE_INT32;
  (this->val_).int32_value = param_1;
  return;
}

// SetInt32Value @ 14f938380

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::MapValueRef::SetInt32Value(int) __ptr64 */

void __thiscall google::protobuf::MapValueRef::SetInt32Value(MapValueRef *this,int param_1)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  if (CVar1 == CPPTYPE_INT32) {
    **(int **)this = param_1;
    return;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x2e6);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapValueRef::SetInt32Value";
  local_28._Mysize = 0x1a;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_int32_1535d0128;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_int32_1535d0128[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// SetInt64Value @ 14f938560

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::MapKey::SetInt64Value(__int64) __ptr64 */

void __thiscall google::protobuf::MapKey::SetInt64Value(MapKey *this,__int64 param_1)

{
  this->type_ = CPPTYPE_INT64;
  (this->val_).int64_value = param_1;
  return;
}

// SetInt64Value @ 14f938580

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::MapValueRef::SetInt64Value(__int64) __ptr64 */

void __thiscall google::protobuf::MapValueRef::SetInt64Value(MapValueRef *this,__int64 param_1)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  if (CVar1 == CPPTYPE_INT64) {
    **(__int64 **)this = param_1;
    return;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x2de);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapValueRef::SetInt64Value";
  local_28._Mysize = 0x1a;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_int64_1535d0130;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_int64_1535d0130[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// SetMapDirty @ 14f938760

/* protected: void __cdecl google::protobuf::internal::MapFieldBase::SetMapDirty(void) __ptr64 */

void __thiscall google::protobuf::internal::MapFieldBase::SetMapDirty(MapFieldBase *this)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)this;
  if (((uVar1 & 1) != 0) && (uVar1 != 1)) {
    *(undefined4 *)(uVar1 + 0x1f) = 0;
  }
  return;
}

// SetMapIteratorValue @ 14f938780

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::internal::MapFieldBase::SetMapIteratorValue(class
   google::protobuf::MapIterator * __ptr64)const __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::SetMapIteratorValue
          (MapFieldBase *this,MapIterator *param_1)

{
  NodeBase *pNVar1;
  UntypedMapBase *pUVar2;
  NodeBase *pNVar3;
  NodeBase *pNVar4;
  
  pNVar1 = (param_1->iter_).node_;
  if (pNVar1 == (NodeBase *)0x0) {
    return;
  }
  pUVar2 = (param_1->iter_).m_;
  switch((pUVar2->type_info_).key_type) {
  case 0:
    (param_1->key_).val_.bool_value = *(bool *)&pNVar1[1].next;
    *(ulonglong *)&param_1->value_ =
         (longlong)&pNVar1->next + (ulonglong)(pUVar2->type_info_).value_offset;
    return;
  case 1:
    (param_1->key_).val_.int32_value = *(int *)&pNVar1[1].next;
    *(ulonglong *)&param_1->value_ =
         (longlong)&pNVar1->next + (ulonglong)(pUVar2->type_info_).value_offset;
    return;
  case 2:
    (param_1->key_).val_.string_value._Mydata = (char *)pNVar1[1].next;
    *(ulonglong *)&param_1->value_ =
         (longlong)&pNVar1->next + (ulonglong)(pUVar2->type_info_).value_offset;
    return;
  default:
                    /* WARNING: Subroutine does not return */
    Unreachable();
  case 5:
    break;
  }
  pNVar4 = pNVar1 + 1;
  if ((NodeBase *)0xf < pNVar1[4].next) {
    pNVar4 = pNVar1[1].next;
  }
  pNVar3 = pNVar1[3].next;
  (param_1->key_).val_.string_value._Mydata = (char *)pNVar4;
  (param_1->key_).val_.string_value._Mysize = (ulong64)pNVar3;
  *(ulonglong *)&param_1->value_ =
       (longlong)&pNVar1->next + (ulonglong)(pUVar2->type_info_).value_offset;
  return;
}

// SetRepeatedDirty @ 14f938860

/* protected: void __cdecl google::protobuf::internal::MapFieldBase::SetRepeatedDirty(void) __ptr64
    */

void __thiscall google::protobuf::internal::MapFieldBase::SetRepeatedDirty(MapFieldBase *this)

{
  ReflectionPayload *pRVar1;
  
  pRVar1 = payload(this);
  pRVar1->state = (atomic<google::protobuf::internal::MapFieldBase::State>)0x1;
  return;
}

// SetStringValue @ 14f938880

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::MapKey::SetStringValue(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

void __thiscall
google::protobuf::MapKey::SetStringValue
          (MapKey *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  ulong64 uVar2;
  
  pcVar1 = param_1->_Mydata;
  uVar2 = param_1->_Mysize;
  this->type_ = CPPTYPE_STRING;
  (this->val_).string_value._Mydata = pcVar1;
  (this->val_).string_value._Mysize = uVar2;
  return;
}

// SetStringValue @ 14f9388a0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::MapValueRef::SetStringValue(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

void __thiscall
google::protobuf::MapValueRef::SetStringValue
          (MapValueRef *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  if (CVar1 == CPPTYPE_STRING) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)this,
               param_1->_Mydata,param_1->_Mysize);
    return;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x2f7);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapValueRef::SetStringValue";
  local_28._Mysize = 0x1b;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_string_1535d0168;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_string_1535d0168[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// SetType @ 14f938a80

/* WARNING: Enum "CppType": Some values do not have unique names */
/* private: void __cdecl google::protobuf::MapKey::SetType(enum
   google::protobuf::internal::FieldDescriptorLite::CppType) __ptr64 */

void __thiscall google::protobuf::MapKey::SetType(MapKey *this,CppType param_1)

{
  this->type_ = param_1;
  return;
}

// SetType @ 14f938a90

/* WARNING: Enum "CppType": Some values do not have unique names */
/* private: void __cdecl google::protobuf::MapValueConstRef::SetType(enum
   google::protobuf::internal::FieldDescriptorLite::CppType) __ptr64 */

void __thiscall google::protobuf::MapValueConstRef::SetType(MapValueConstRef *this,CppType param_1)

{
  this->type_ = param_1;
  return;
}

// SetUInt32Value @ 14f938aa0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::MapKey::SetUInt32Value(unsigned int) __ptr64 */

void __thiscall google::protobuf::MapKey::SetUInt32Value(MapKey *this,uint param_1)

{
  this->type_ = CPPTYPE_UINT32;
  (this->val_).uint32_value = param_1;
  return;
}

// SetUInt32Value @ 14f938ab0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::MapValueRef::SetUInt32Value(unsigned int) __ptr64 */

void __thiscall google::protobuf::MapValueRef::SetUInt32Value(MapValueRef *this,uint param_1)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  if (CVar1 == CPPTYPE_UINT32) {
    **(uint **)this = param_1;
    return;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x2ea);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapValueRef::SetUInt32Value";
  local_28._Mysize = 0x1b;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_uint32_1535d0138;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_uint32_1535d0138[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// SetUInt64Value @ 14f938c90

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::MapKey::SetUInt64Value(unsigned __int64) __ptr64 */

void __thiscall google::protobuf::MapKey::SetUInt64Value(MapKey *this,__uint64 param_1)

{
  this->type_ = CPPTYPE_UINT64;
  (this->val_).uint64_value = param_1;
  return;
}

// SetUInt64Value @ 14f938cb0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: void __cdecl google::protobuf::MapValueRef::SetUInt64Value(unsigned __int64) __ptr64 */

void __thiscall google::protobuf::MapValueRef::SetUInt64Value(MapValueRef *this,__uint64 param_1)

{
  CppType CVar1;
  LogMessage *pLVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  if (CVar1 == CPPTYPE_UINT64) {
    **(__uint64 **)this = param_1;
    return;
  }
  pLVar2 = (LogMessage *)
           absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                     (&local_18,
                      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                      ,0x2e2);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "MapValueRef::SetUInt64Value";
  local_28._Mysize = 0x1b;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = " type does not match\n";
  local_28._Mysize = 0x15;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Expected : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = PTR_s_uint64_1535d0140;
  uVar3 = 0xffffffffffffffff;
  local_28._Mysize = 0xffffffffffffffff;
  do {
    local_28._Mysize = local_28._Mysize + 1;
  } while (PTR_s_uint64_1535d0140[local_28._Mysize] != '\0');
  pLVar2 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
  local_28._Mydata = "\n";
  local_28._Mysize = 1;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  local_28._Mydata = "  Actual   : ";
  local_28._Mysize = 0xd;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar2,&local_28);
  CVar1 = MapValueConstRef::type((MapValueConstRef *)this);
  local_28._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar1];
  do {
    uVar3 = uVar3 + 1;
  } while (local_28._Mydata[uVar3] != '\0');
  local_28._Mysize = uVar3;
  absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar2,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// SetValue @ 14f938e90

/* WARNING: Enum "CppType": Some values do not have unique names */
/* private: void __cdecl google::protobuf::MapValueConstRef::SetValue(void const * __ptr64) __ptr64
    */

void __thiscall google::protobuf::MapValueConstRef::SetValue(MapValueConstRef *this,void *param_1)

{
  this->data_ = param_1;
  return;
}

// ShouldInsertAfterHead @ 14f938ea0

/* protected: bool __cdecl google::protobuf::internal::UntypedMapBase::ShouldInsertAfterHead(void *
   __ptr64) __ptr64 */

bool __thiscall
google::protobuf::internal::UntypedMapBase::ShouldInsertAfterHead
          (UntypedMapBase *this,void *param_1)

{
  return false;
}

// SpaceUsedExcludingSelfLong @ 14f938eb0

/* public: unsigned __int64 __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Message>::SpaceUsedExcludingSelfLong(void)const __ptr64 */

__uint64 __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Message>::SpaceUsedExcludingSelfLong
          (RepeatedPtrField<google::protobuf::Message> *this)

{
  __uint64 _Var1;
  
  _Var1 = internal::RepeatedPtrFieldBase::
          SpaceUsedExcludingSelfLong<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
                    ((RepeatedPtrFieldBase *)this);
  return _Var1;
}

// SpaceUsedExcludingSelfLong @ 14f938ec0

/* public: unsigned __int64 __cdecl
   google::protobuf::internal::MapFieldBase::SpaceUsedExcludingSelfLong(void)const __ptr64 */

__uint64 __thiscall
google::protobuf::internal::MapFieldBase::SpaceUsedExcludingSelfLong(MapFieldBase *this)

{
  ulonglong uVar1;
  __uint64 _Var2;
  __uint64 _Var3;
  
  uVar1 = *(ulonglong *)this;
  if (((uVar1 & 1) != 0) && ((RepeatedPtrFieldBase *)(uVar1 - 1) != (RepeatedPtrFieldBase *)0x0)) {
    absl::lts_20240722::Mutex::Lock((Mutex *)(uVar1 + 0x17));
    _Var2 = UntypedMapBase::SpaceUsedExcludingSelfLong((UntypedMapBase *)(this + 1));
    _Var3 = RepeatedPtrFieldBase::
            SpaceUsedExcludingSelfLong<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
                      ((RepeatedPtrFieldBase *)(uVar1 - 1));
    absl::lts_20240722::Mutex::Unlock((Mutex *)(uVar1 + 0x17));
    return _Var2 + _Var3;
  }
  _Var2 = UntypedMapBase::SpaceUsedExcludingSelfLong((UntypedMapBase *)(this + 1));
  return _Var2;
}

// SpaceUsedLong @ 14f938f50

/* public: static unsigned __int64 __cdecl google::protobuf::internal::GenericTypeHandler<class
   google::protobuf::Message>::SpaceUsedLong(class google::protobuf::Message const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::SpaceUsedLong
          (Message *param_1)

{
  __uint64 _Var1;
  
  _Var1 = protobuf::Message::SpaceUsedLong(param_1);
  return _Var1;
}

// StaticValidityCheck @ 14f938f60

/* private: static void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Message>::StaticValidityCheck(void) */

void __cdecl
google::protobuf::RepeatedPtrField<google::protobuf::Message>::StaticValidityCheck(void)

{
  return;
}

// Swap @ 14f938f70

/* public: void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Message>::Swap(class google::protobuf::RepeatedPtrField<class
   google::protobuf::Message> * __ptr64) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Message>::Swap
          (RepeatedPtrField<google::protobuf::Message> *this,
          RepeatedPtrField<class_google::protobuf::Message> *param_1)

{
  if (this == (RepeatedPtrField<google::protobuf::Message> *)param_1) {
    return;
  }
  if (*(longlong *)&this->field_0x10 != *(longlong *)(param_1 + 0x10)) {
    internal::RepeatedPtrFieldBase::
    SwapFallback<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
              ((RepeatedPtrFieldBase *)this,(RepeatedPtrFieldBase *)param_1);
    return;
  }
  __std_swap_ranges_trivially_swappable_noalias(this,&this->field_0x10,param_1);
  return;
}

// Swap @ 14f938f90

/* public: void __cdecl google::protobuf::internal::MapFieldBase::Swap(class
   google::protobuf::internal::MapFieldBase * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::Swap(MapFieldBase *this,MapFieldBase *param_1)

{
  UntypedMapBase *pUVar1;
  UntypedMapBase *this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = *(ulonglong *)this;
  if ((uVar7 & 1) != 0) {
    uVar7 = *(ulonglong *)(uVar7 + 0xf);
  }
  uVar6 = *(ulonglong *)param_1;
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulonglong *)(uVar6 + 0xf);
  }
  pUVar1 = (UntypedMapBase *)(param_1 + 1);
  this_00 = (UntypedMapBase *)(this + 1);
  if (uVar7 == uVar6) {
    uVar2 = this_00->num_elements_;
    this_00->num_elements_ = pUVar1->num_elements_;
    pUVar1->num_elements_ = uVar2;
    uVar3 = *(undefined4 *)&this[1].field_0x4;
    *(undefined4 *)&this[1].field_0x4 = *(undefined4 *)&param_1[1].field_0x4;
    *(undefined4 *)&param_1[1].field_0x4 = uVar3;
    uVar3 = *(undefined4 *)&this[1].field_0x8;
    *(undefined4 *)&this[1].field_0x8 = *(undefined4 *)&param_1[1].field_0x8;
    *(undefined4 *)&param_1[1].field_0x8 = uVar3;
    uVar3 = *(undefined4 *)&this[1].field_0xc;
    *(undefined4 *)&this[1].field_0xc = *(undefined4 *)&param_1[1].field_0xc;
    *(undefined4 *)&param_1[1].field_0xc = uVar3;
    uVar4 = *(undefined8 *)(this + 2);
    *(undefined8 *)(this + 2) = *(undefined8 *)(param_1 + 2);
    uVar5 = *(undefined8 *)&param_1[2].field_0x8;
    *(undefined8 *)(param_1 + 2) = uVar4;
    uVar4 = *(undefined8 *)&this[2].field_0x8;
    *(undefined8 *)&this[2].field_0x8 = uVar5;
    *(undefined8 *)&param_1[2].field_0x8 = uVar4;
    SwapPayload(this,param_1);
    return;
  }
  SwapPayload(this,param_1);
  UntypedMapBase::UntypedSwap(this_00,pUVar1);
  return;
}

// SwapPayload @ 14f939050

/* protected: static void __cdecl google::protobuf::internal::MapFieldBase::SwapPayload(class
   google::protobuf::internal::MapFieldBase & __ptr64,class google::protobuf::internal::MapFieldBase
   & __ptr64) */

void __cdecl
google::protobuf::internal::MapFieldBase::SwapPayload(MapFieldBase *param_1,MapFieldBase *param_2)

{
  atomic<google::protobuf::internal::MapFieldBase::State> aVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ReflectionPayload *this;
  ReflectionPayload *pRVar4;
  ulonglong uVar5;
  
  uVar5 = *(ulonglong *)param_1;
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulonglong *)(uVar5 + 0xf);
  }
  uVar3 = *(ulonglong *)param_2;
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulonglong *)(uVar3 + 0xf);
  }
  if (uVar5 != uVar3) {
    this = (ReflectionPayload *)(*(ulonglong *)param_1 - 1);
    if ((*(ulonglong *)param_1 & 1) == 0) {
      this = (ReflectionPayload *)0x0;
    }
    pRVar4 = (ReflectionPayload *)(*(ulonglong *)param_2 - 1);
    if ((*(ulonglong *)param_2 & 1) == 0) {
      pRVar4 = (ReflectionPayload *)0x0;
    }
    if (this == (ReflectionPayload *)0x0) {
      if (pRVar4 == (ReflectionPayload *)0x0) {
        return;
      }
      this = payload(param_1);
    }
    else if (pRVar4 == (ReflectionPayload *)0x0) {
      pRVar4 = payload(param_2);
    }
    if (this != pRVar4) {
      if (*(longlong *)&(this->repeated_field).field_0x10 ==
          *(longlong *)&(pRVar4->repeated_field).field_0x10) {
        memswap<16>((char *)this,(char *)pRVar4);
      }
      else {
        RepeatedPtrFieldBase::
        SwapFallback<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
                  ((RepeatedPtrFieldBase *)this,(RepeatedPtrFieldBase *)pRVar4);
      }
    }
    aVar1 = pRVar4->state;
    pRVar4->state = this->state;
    this->state = aVar1;
    return;
  }
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = uVar2;
  return;
}

// SyncMapWithRepeatedField @ 14f939120

/* protected: void __cdecl
   google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(void)const __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(MapFieldBase *this)

{
  ulonglong uVar1;
  ReflectionPayload *pRVar2;
  
  uVar1 = *(ulonglong *)this;
  if ((((uVar1 & 1) != 0) && (uVar1 != 1)) && (*(int *)(uVar1 + 0x1f) == 1)) {
    pRVar2 = payload(this);
    absl::lts_20240722::Mutex::Lock(&pRVar2->mutex);
    if (pRVar2->state == (atomic<google::protobuf::internal::MapFieldBase::State>)0x1) {
      SyncMapWithRepeatedFieldNoLock(this);
      pRVar2->state = (atomic<google::protobuf::internal::MapFieldBase::State>)0x2;
    }
    absl::lts_20240722::Mutex::Unlock(&pRVar2->mutex);
  }
  return;
}

// SyncMapWithRepeatedFieldNoLock @ 14f939190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f939566) */
/* WARNING: Removing unreachable block (ram,0x00014f939865) */
/* WARNING: Removing unreachable block (ram,0x00014f939f2c) */
/* WARNING: Removing unreachable block (ram,0x00014f93a5fd) */
/* WARNING: Removing unreachable block (ram,0x00014f93ace2) */
/* WARNING: Removing unreachable block (ram,0x00014f93b109) */
/* WARNING: Removing unreachable block (ram,0x00014f93a967) */
/* WARNING: Removing unreachable block (ram,0x00014f93a295) */
/* WARNING: Removing unreachable block (ram,0x00014f939bca) */
/* WARNING: Removing unreachable block (ram,0x00014f93975c) */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* protected: void __cdecl
   google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedFieldNoLock(void) __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedFieldNoLock(MapFieldBase *this)

{
  undefined1 *puVar1;
  int iVar2;
  Descriptor *this_00;
  void *pvVar3;
  RepeatedPtrField<google::protobuf::Message> *pRVar4;
  FieldDescriptor *pFVar5;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  CppType CVar11;
  ReflectionPayload *pRVar12;
  Metadata *pMVar13;
  basic_string_view<char,std::char_traits<char>_> *pbVar14;
  double dVar15;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar16;
  LogMessage *pLVar17;
  LogMessage *pLVar18;
  Message *pMVar19;
  undefined8 uVar20;
  void *pvVar21;
  ulonglong uVar22;
  ulong64 uVar23;
  ReflectionPayload *pRVar24;
  UntypedMapBase *this_01;
  uint uVar25;
  uint uVar26;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar27;
  Reflection *this_02;
  float fVar28;
  undefined1 auStackY_a18 [32];
  basic_string_view<char,std::char_traits<char>_> local_9e8;
  MapValueConstRef local_9d8;
  undefined8 local_9c8;
  Reflection *local_9c0;
  char *local_9b8;
  ulong64 uStack_9b0;
  undefined4 local_9a8;
  MapValueConstRef *local_9a0;
  char *local_998;
  FieldDescriptor *local_990;
  UntypedMapBase *local_988;
  unique_ptr<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
  local_980;
  FieldDescriptor *local_978;
  char *local_968;
  undefined8 uStack_960;
  char *local_958;
  undefined8 uStack_950;
  char *local_948;
  undefined8 uStack_940;
  char *local_938;
  undefined8 uStack_930;
  char *local_928;
  undefined8 uStack_920;
  char *local_918;
  undefined8 uStack_910;
  basic_string_view<char,std::char_traits<char>_> local_908;
  char *local_8f8;
  undefined8 uStack_8f0;
  char *local_8e8;
  undefined8 uStack_8e0;
  char *local_8d8;
  undefined8 uStack_8d0;
  char *local_8c8;
  undefined8 uStack_8c0;
  basic_string_view<char,std::char_traits<char>_> local_8b8;
  char *local_8a8;
  undefined8 uStack_8a0;
  char *local_898;
  undefined8 uStack_890;
  char *local_888;
  undefined8 uStack_880;
  char *local_878;
  undefined8 uStack_870;
  char *local_868;
  undefined8 uStack_860;
  char *local_858;
  undefined8 uStack_850;
  basic_string_view<char,std::char_traits<char>_> local_848;
  char *local_838;
  undefined8 uStack_830;
  char *local_828;
  undefined8 uStack_820;
  char *local_818;
  undefined8 uStack_810;
  char *local_808;
  undefined8 uStack_800;
  basic_string_view<char,std::char_traits<char>_> local_7f8;
  char *local_7e8;
  undefined8 uStack_7e0;
  char *local_7d8;
  undefined8 uStack_7d0;
  char *local_7c8;
  undefined8 uStack_7c0;
  char *local_7b8;
  undefined8 uStack_7b0;
  char *local_7a8;
  undefined8 uStack_7a0;
  char *local_798;
  undefined8 uStack_790;
  basic_string_view<char,std::char_traits<char>_> local_788;
  char *local_778;
  undefined8 uStack_770;
  char *local_768;
  undefined8 uStack_760;
  char *local_758;
  undefined8 uStack_750;
  char *local_748;
  undefined8 uStack_740;
  basic_string_view<char,std::char_traits<char>_> local_738;
  char *local_728;
  undefined8 uStack_720;
  char *local_718;
  undefined8 uStack_710;
  char *local_708;
  undefined8 uStack_700;
  char *local_6f8;
  undefined8 uStack_6f0;
  char *local_6e8;
  undefined8 uStack_6e0;
  char *local_6d8;
  undefined8 uStack_6d0;
  basic_string_view<char,std::char_traits<char>_> local_6c8;
  char *local_6b8;
  undefined8 uStack_6b0;
  char *local_6a8;
  undefined8 uStack_6a0;
  char *local_698;
  undefined8 uStack_690;
  char *local_688;
  undefined8 uStack_680;
  basic_string_view<char,std::char_traits<char>_> local_678;
  char *local_668;
  undefined8 uStack_660;
  char *local_658;
  undefined8 uStack_650;
  char *local_648;
  undefined8 uStack_640;
  char *local_638;
  undefined8 uStack_630;
  char *local_628;
  undefined8 uStack_620;
  char *local_618;
  undefined8 uStack_610;
  basic_string_view<char,std::char_traits<char>_> local_608;
  char *local_5f8;
  undefined8 uStack_5f0;
  char *local_5e8;
  undefined8 uStack_5e0;
  char *local_5d8;
  undefined8 uStack_5d0;
  char *local_5c8;
  undefined8 uStack_5c0;
  basic_string_view<char,std::char_traits<char>_> local_5b8;
  char *local_5a8;
  undefined8 uStack_5a0;
  char *local_598;
  undefined8 uStack_590;
  char *local_588;
  undefined8 uStack_580;
  char *local_578;
  undefined8 uStack_570;
  char *local_568;
  undefined8 uStack_560;
  char *local_558;
  undefined8 uStack_550;
  basic_string_view<char,std::char_traits<char>_> local_548;
  char *local_538;
  undefined8 uStack_530;
  char *local_528;
  undefined8 uStack_520;
  char *local_518;
  undefined8 uStack_510;
  char *local_508;
  undefined8 uStack_500;
  basic_string_view<char,std::char_traits<char>_> local_4f8;
  char *local_4e8;
  undefined8 uStack_4e0;
  char *local_4d8;
  undefined8 uStack_4d0;
  char *local_4c8;
  undefined8 uStack_4c0;
  char *local_4b8;
  undefined8 uStack_4b0;
  char *local_4a8;
  undefined8 uStack_4a0;
  char *local_498;
  undefined8 uStack_490;
  basic_string_view<char,std::char_traits<char>_> local_488;
  char *local_478;
  undefined8 uStack_470;
  char *local_468;
  undefined8 uStack_460;
  char *local_458;
  undefined8 uStack_450;
  char *local_448;
  undefined8 uStack_440;
  basic_string_view<char,std::char_traits<char>_> local_438;
  char *local_428;
  undefined8 uStack_420;
  char *local_418;
  undefined8 uStack_410;
  char *local_408;
  undefined8 uStack_400;
  char *local_3f8;
  undefined8 uStack_3f0;
  char *local_3e8;
  undefined8 uStack_3e0;
  char *local_3d8;
  undefined8 uStack_3d0;
  basic_string_view<char,std::char_traits<char>_> local_3c8;
  char *local_3b8;
  undefined8 uStack_3b0;
  char *local_3a8;
  undefined8 uStack_3a0;
  char *local_398;
  undefined8 uStack_390;
  char *local_388;
  undefined8 uStack_380;
  basic_string_view<char,std::char_traits<char>_> local_378;
  char *local_368;
  undefined8 uStack_360;
  char *local_358;
  undefined8 uStack_350;
  char *local_348;
  undefined8 uStack_340;
  char *local_338;
  undefined8 uStack_330;
  char *local_328;
  undefined8 uStack_320;
  char *local_318;
  undefined8 uStack_310;
  basic_string_view<char,std::char_traits<char>_> local_308;
  char *local_2f8;
  undefined8 uStack_2f0;
  char *local_2e8;
  undefined8 uStack_2e0;
  basic_string_view<char,std::char_traits<char>_> local_2d8;
  char *local_2c8;
  undefined8 uStack_2c0;
  char *local_2b8;
  undefined8 uStack_2b0;
  char *local_2a8;
  undefined8 uStack_2a0;
  char *local_298;
  undefined8 uStack_290;
  basic_string_view<char,std::char_traits<char>_> local_288;
  char *local_278;
  undefined8 uStack_270;
  char *local_268;
  undefined8 uStack_260;
  basic_string_view<char,std::char_traits<char>_> local_258;
  Metadata local_248;
  MapValueConstRef *local_238;
  char **local_230;
  LogMessageFatal local_228;
  LogMessageFatal local_218;
  LogMessageFatal local_208;
  LogMessageFatal local_1f8;
  LogMessageFatal local_1e8;
  LogMessageFatal local_1d8;
  LogMessageFatal local_1c8;
  LogMessageFatal local_1b8;
  LogMessageFatal local_1a8;
  LogMessageFatal local_198;
  LogMessageFatal local_188;
  LogMessageFatal local_178;
  LogMessageFatal local_168;
  LogMessageFatal local_158;
  LogMessageFatal local_148;
  LogMessageFatal local_138;
  LogMessageFatal local_128;
  LogMessageFatal local_118;
  LogMessageFatal local_108;
  LogMessageFatal local_f8;
  LogMessageFatal local_e8;
  LogMessageFatal local_d8;
  LogMessageFatal local_c8;
  LogMessageFatal local_b8;
  LogMessageFatal local_a8;
  LogMessageFatal local_98;
  Metadata local_88;
  basic_string_view<char,std::char_traits<char>_> local_78;
  _Bxty local_68;
  basic_string_view<char,std::char_traits<char>_> *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a18;
  uVar25 = 0;
  local_9c8 = (MapValueConstRef *)((ulonglong)local_9c8 & 0xffffffff00000000);
  this_01 = (UntypedMapBase *)(this + 1);
  local_9a0 = (MapValueConstRef *)this;
  local_988 = this_01;
  if (*(int *)&this[1].field_0x4 != 1) {
    UntypedMapBase::ClearTableImpl(this_01,true);
  }
  pRVar12 = maybe_payload(this);
  if (pRVar12 == (ReflectionPayload *)0x0) {
    pRVar12 = PayloadSlow(this);
  }
  puVar1 = &(pRVar12->repeated_field).field_0x8;
  if (*(int *)puVar1 != 0) {
    pRVar24 = pRVar12;
    if ((~*(byte *)&pRVar12->repeated_field & 1) == 0) {
      pRVar24 = (ReflectionPayload *)(*(longlong *)&pRVar12->repeated_field + 7);
    }
    pMVar19 = *(Message **)&pRVar24->repeated_field;
    pMVar13 = protobuf::Message::GetMetadata(pMVar19,&local_88);
    this_02 = pMVar13->reflection;
    local_9c0 = this_02;
    pMVar13 = protobuf::Message::GetMetadata(pMVar19,&local_248);
    this_00 = pMVar13->descriptor;
    local_978 = Descriptor::map_key(this_00);
    local_990 = Descriptor::map_value(this_00);
    pRVar24 = pRVar12;
    if ((~*(byte *)&pRVar12->repeated_field & 1) == 0) {
      pRVar4 = &pRVar12->repeated_field;
      pRVar12 = (ReflectionPayload *)(*(longlong *)&pRVar12->repeated_field + 7);
      pRVar24 = (ReflectionPayload *)(*(longlong *)pRVar4 + 7);
    }
    iVar2 = *(int *)puVar1;
    for (; pRVar12 !=
           (ReflectionPayload *)(&(pRVar24->repeated_field).field_0x0 + (longlong)iVar2 * 8);
        pRVar12 = (ReflectionPayload *)&(pRVar12->repeated_field).field_0x8) {
      pMVar19 = *(Message **)&pRVar12->repeated_field;
      local_980._Mypair._Myval2 =
           (_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_*,1>
            )(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
      local_9a8 = 0;
      switch(*(undefined4 *)
              ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)local_978->type_ * 4)) {
      case 1:
        iVar9 = Reflection::GetInt32(this_02,pMVar19,local_978);
        local_9a8 = 1;
        local_9b8 = (char *)CONCAT44(local_9b8._4_4_,iVar9);
        break;
      case 2:
        local_9b8 = (char *)Reflection::GetInt64(this_02,pMVar19,local_978);
        local_9a8 = 2;
        break;
      case 3:
        uVar10 = Reflection::GetUInt32(this_02,pMVar19,local_978);
        local_9a8 = 3;
        local_9b8 = (char *)CONCAT44(local_9b8._4_4_,uVar10);
        break;
      case 4:
        local_9b8 = (char *)Reflection::GetUInt64(this_02,pMVar19,local_978);
        local_9a8 = 4;
        break;
      default:
                    /* WARNING: Subroutine does not return */
        Unreachable();
      case 7:
        bVar7 = Reflection::GetBool(this_02,pMVar19,local_978);
        local_9a8 = 7;
        local_9b8 = (char *)CONCAT71(local_9b8._1_7_,bVar7);
        break;
      case 9:
        pbVar14 = Reflection::GetStringView
                            (this_02,&local_78,pMVar19,local_978,(ScratchSpace *)&local_980);
        local_9a8 = 9;
        local_9b8 = pbVar14->_Mydata;
        uStack_9b0 = pbVar14->_Mysize;
      }
      pFVar5 = local_990;
      local_9d8.data_ = (Message *)0x0;
      local_9d8.type_ =
           *(CppType *)
            ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)local_990->type_ * 4);
      local_9c8 = &local_9d8;
      if ((this_01->num_elements_ == 0) ||
         (cVar8 = FUN_14f931ac0(&local_9b8,this_01,&local_9c8), cVar8 == '\0')) {
        uVar22 = (ulonglong)(this_01->type_info_).node_size;
        if (this_01->arena_ == (Arena *)0x0) {
          local_9e8._Mydata = ::operator_new(uVar22);
        }
        else {
          local_9e8._Mydata = Arena::Allocate(this_01->arena_,uVar22 + 7 & 0xfffffffffffffff8);
        }
        local_9c8 = local_9a0;
        local_68._Ptr = (char *)&local_9c8;
        local_58 = &local_9e8;
        local_998 = local_9e8._Mydata;
        local_68._8_8_ = this_01;
        FUN_14f931f40(this_01,&local_68);
        local_9d8.data_ = local_998 + (this_01->type_info_).value_offset;
        local_238 = local_9a0;
        local_230 = &local_998;
        FUN_14f931d40(&local_9b8,this_01,&local_238);
      }
      switch(*(undefined4 *)
              ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar5->type_ * 4)) {
      case 1:
        uVar10 = Reflection::GetInt32(this_02,pMVar19,pFVar5);
        if ((local_9d8.type_ == 0) || (local_9d8.data_ == (Message *)0x0)) {
          pLVar18 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_228,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2b2);
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x20);
          local_968 = "Protocol Buffer map usage error:\n";
          uStack_960 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_958 = "MapValueConstRef::type MapValueConstRef is not initialized.";
          uStack_950 = 0x3b;
          local_9e8._Mydata = "MapValueConstRef::type MapValueConstRef is not initialized.";
          local_9e8._Mysize = 0x3b;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_228);
        }
        if (local_9d8.type_ != CPPTYPE_INT32) {
          pLVar18 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_a8,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2e6);
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x10);
          local_948 = "Protocol Buffer map usage error:\n";
          uStack_940 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_938 = "MapValueRef::SetInt32Value";
          uStack_930 = 0x1a;
          local_9e8._Mydata = "MapValueRef::SetInt32Value";
          local_9e8._Mysize = 0x1a;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_928 = " type does not match\n";
          uStack_920 = 0x15;
          local_9e8._Mydata = " type does not match\n";
          local_9e8._Mysize = 0x15;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_918 = "  Expected : ";
          uStack_910 = 0xd;
          local_9e8._Mydata = "  Expected : ";
          local_9e8._Mysize = 0xd;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_908._Mydata = PTR_s_int32_1535d0128;
          local_908._Mysize = 0xffffffffffffffff;
          do {
            local_908._Mysize = local_908._Mysize + 1;
          } while (PTR_s_int32_1535d0128[local_908._Mysize] != '\0');
          pLVar18 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_908);
          local_8f8 = "\n";
          uStack_8f0 = 1;
          local_9e8._Mydata = "\n";
          local_9e8._Mysize = 1;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_8e8 = "  Actual   : ";
          uStack_8e0 = 0xd;
          local_9e8._Mydata = "  Actual   : ";
          local_9e8._Mysize = 0xd;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          if ((local_9d8.type_ != 0) && (local_9d8.data_ != (Message *)0x0)) {
            local_8b8._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)local_9d8.type_];
            local_8b8._Mysize = 0xffffffffffffffff;
            do {
              local_8b8._Mysize = local_8b8._Mysize + 1;
            } while (local_8b8._Mydata[local_8b8._Mysize] != '\0');
            absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_8b8);
                    /* WARNING: Subroutine does not return */
            absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_a8);
          }
          pLVar18 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_98,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2b2);
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x50);
          local_8d8 = "Protocol Buffer map usage error:\n";
          uStack_8d0 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_8c8 = "MapValueConstRef::type MapValueConstRef is not initialized.";
          uStack_8c0 = 0x3b;
          local_9e8._Mydata = "MapValueConstRef::type MapValueConstRef is not initialized.";
          local_9e8._Mysize = 0x3b;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_98);
        }
LAB_14f9397a4:
        *(uint *)local_9d8.data_ = uVar10;
        this_02 = local_9c0;
        break;
      case 2:
        dVar15 = (double)Reflection::GetInt64(this_02,pMVar19,pFVar5);
        if ((local_9d8.type_ == 0) || (local_9d8.data_ == (Message *)0x0)) {
          pLVar18 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_1f8,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2b2);
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x100);
          local_8a8 = "Protocol Buffer map usage error:\n";
          uStack_8a0 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_898 = "MapValueConstRef::type MapValueConstRef is not initialized.";
          uStack_890 = 0x3b;
          local_9e8._Mydata = "MapValueConstRef::type MapValueConstRef is not initialized.";
          local_9e8._Mysize = 0x3b;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_1f8);
        }
        if (local_9d8.type_ != CPPTYPE_INT64) {
          pLVar18 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_218,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2de);
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x80);
          local_888 = "Protocol Buffer map usage error:\n";
          uStack_880 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_878 = "MapValueRef::SetInt64Value";
          uStack_870 = 0x1a;
          local_9e8._Mydata = "MapValueRef::SetInt64Value";
          local_9e8._Mysize = 0x1a;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_868 = " type does not match\n";
          uStack_860 = 0x15;
          local_9e8._Mydata = " type does not match\n";
          local_9e8._Mysize = 0x15;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_858 = "  Expected : ";
          uStack_850 = 0xd;
          local_9e8._Mydata = "  Expected : ";
          local_9e8._Mysize = 0xd;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_848._Mydata = PTR_s_int64_1535d0130;
          local_848._Mysize = 0xffffffffffffffff;
          do {
            local_848._Mysize = local_848._Mysize + 1;
          } while (PTR_s_int64_1535d0130[local_848._Mysize] != '\0');
          pLVar18 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_848);
          local_838 = "\n";
          uStack_830 = 1;
          local_9e8._Mydata = "\n";
          local_9e8._Mysize = 1;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_828 = "  Actual   : ";
          uStack_820 = 0xd;
          local_9e8._Mydata = "  Actual   : ";
          local_9e8._Mysize = 0xd;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          if ((local_9d8.type_ == 0) || (uVar10 = uVar25 | 0x80, local_9d8.data_ == (Message *)0x0))
          {
            pLVar17 = (LogMessage *)
                      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                                (&local_208,
                                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                                 ,0x2b2);
            local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x280);
            local_818 = "Protocol Buffer map usage error:\n";
            uStack_810 = 0x21;
            local_9e8._Mydata = "Protocol Buffer map usage error:\n";
            local_9e8._Mysize = 0x21;
            absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar17,&local_9e8)
            ;
            local_808 = "MapValueConstRef::type MapValueConstRef is not initialized.";
            uStack_800 = 0x3b;
            local_9e8._Mydata = "MapValueConstRef::type MapValueConstRef is not initialized.";
            local_9e8._Mysize = 0x3b;
            absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar17,&local_9e8)
            ;
            uVar10 = uVar25 | 0x280;
            if (((uVar25 | 0x280) & 0x200) != 0) {
                    /* WARNING: Subroutine does not return */
              absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_208);
            }
          }
          uVar25 = uVar10;
          local_7f8._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)local_9d8.type_];
          local_7f8._Mysize = 0xffffffffffffffff;
          do {
            local_7f8._Mysize = local_7f8._Mysize + 1;
          } while (local_7f8._Mydata[local_7f8._Mysize] != '\0');
          absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_7f8);
          if ((char)uVar25 < '\0') {
                    /* WARNING: Subroutine does not return */
            absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_218);
          }
        }
LAB_14f939b00:
        *(double *)local_9d8.data_ = dVar15;
        this_02 = local_9c0;
        break;
      case 3:
        uVar10 = Reflection::GetUInt32(this_02,pMVar19,pFVar5);
        if ((local_9d8.type_ == 0) || (local_9d8.data_ == (Message *)0x0)) {
          pLVar18 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_1c8,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2b2);
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x800);
          local_7e8 = "Protocol Buffer map usage error:\n";
          uStack_7e0 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_7d8 = "MapValueConstRef::type MapValueConstRef is not initialized.";
          uStack_7d0 = 0x3b;
          local_9e8._Mydata = "MapValueConstRef::type MapValueConstRef is not initialized.";
          local_9e8._Mysize = 0x3b;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_1c8);
        }
        if (local_9d8.type_ == CPPTYPE_UINT32) goto LAB_14f9397a4;
        pLVar18 = (LogMessage *)
                  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                            (&local_1e8,
                             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                             ,0x2ea);
        uVar26 = uVar25 | 0x400;
        local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x400);
        local_7c8 = "Protocol Buffer map usage error:\n";
        uStack_7c0 = 0x21;
        local_9e8._Mydata = "Protocol Buffer map usage error:\n";
        local_9e8._Mysize = 0x21;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
        local_7b8 = "MapValueRef::SetUInt32Value";
        uStack_7b0 = 0x1b;
        local_9e8._Mydata = "MapValueRef::SetUInt32Value";
        local_9e8._Mysize = 0x1b;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
        local_7a8 = " type does not match\n";
        uStack_7a0 = 0x15;
        local_9e8._Mydata = " type does not match\n";
        local_9e8._Mysize = 0x15;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
        local_798 = "  Expected : ";
        uStack_790 = 0xd;
        local_9e8._Mydata = "  Expected : ";
        local_9e8._Mysize = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
        local_788._Mydata = PTR_s_uint32_1535d0138;
        local_788._Mysize = 0xffffffffffffffff;
        do {
          local_788._Mysize = local_788._Mysize + 1;
        } while (PTR_s_uint32_1535d0138[local_788._Mysize] != '\0');
        pLVar18 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_788);
        local_778 = "\n";
        uStack_770 = 1;
        local_9e8._Mydata = "\n";
        local_9e8._Mysize = 1;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
        local_768 = "  Actual   : ";
        uStack_760 = 0xd;
        local_9e8._Mydata = "  Actual   : ";
        local_9e8._Mysize = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
        if ((local_9d8.type_ == 0) || (local_9d8.data_ == (Message *)0x0)) {
          pLVar17 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_1d8,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2b2);
          uVar26 = uVar25 | 0x1400;
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x1400);
          local_758 = "Protocol Buffer map usage error:\n";
          uStack_750 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar17,&local_9e8);
          local_748 = "MapValueConstRef::type MapValueConstRef is not initialized.";
          uStack_740 = 0x3b;
          local_9e8._Mydata = "MapValueConstRef::type MapValueConstRef is not initialized.";
          local_9e8._Mysize = 0x3b;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar17,&local_9e8);
          if ((uVar26 & 0x1000) != 0) {
                    /* WARNING: Subroutine does not return */
            absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_1d8);
          }
        }
        local_738._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)local_9d8.type_];
        local_738._Mysize = 0xffffffffffffffff;
        do {
          local_738._Mysize = local_738._Mysize + 1;
        } while (local_738._Mydata[local_738._Mysize] != '\0');
        absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_738);
        if ((uVar26 >> 10 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_1e8);
        }
        *(uint *)local_9d8.data_ = uVar10;
        this_02 = local_9c0;
        uVar25 = uVar26;
        break;
      case 4:
        dVar15 = (double)Reflection::GetUInt64(this_02,pMVar19,pFVar5);
        if ((local_9d8.type_ == 0) || (local_9d8.data_ == (Message *)0x0)) {
          pLVar18 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_198,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2b2);
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x4000);
          local_728 = "Protocol Buffer map usage error:\n";
          uStack_720 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_718 = "MapValueConstRef::type MapValueConstRef is not initialized.";
          uStack_710 = 0x3b;
          local_9e8._Mydata = "MapValueConstRef::type MapValueConstRef is not initialized.";
          local_9e8._Mysize = 0x3b;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_198);
        }
        if (local_9d8.type_ == CPPTYPE_UINT64) goto LAB_14f939b00;
        pLVar18 = (LogMessage *)
                  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                            (&local_1b8,
                             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                             ,0x2e2);
        uVar10 = uVar25 | 0x2000;
        local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x2000);
        local_708 = "Protocol Buffer map usage error:\n";
        uStack_700 = 0x21;
        local_9e8._Mydata = "Protocol Buffer map usage error:\n";
        local_9e8._Mysize = 0x21;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
        local_6f8 = "MapValueRef::SetUInt64Value";
        uStack_6f0 = 0x1b;
        local_9e8._Mydata = "MapValueRef::SetUInt64Value";
        local_9e8._Mysize = 0x1b;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
        local_6e8 = " type does not match\n";
        uStack_6e0 = 0x15;
        local_9e8._Mydata = " type does not match\n";
        local_9e8._Mysize = 0x15;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
        local_6d8 = "  Expected : ";
        uStack_6d0 = 0xd;
        local_9e8._Mydata = "  Expected : ";
        local_9e8._Mysize = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
        local_6c8._Mydata = PTR_s_uint64_1535d0140;
        local_6c8._Mysize = 0xffffffffffffffff;
        do {
          local_6c8._Mysize = local_6c8._Mysize + 1;
        } while (PTR_s_uint64_1535d0140[local_6c8._Mysize] != '\0');
        pLVar18 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_6c8);
        local_6b8 = "\n";
        uStack_6b0 = 1;
        local_9e8._Mydata = "\n";
        local_9e8._Mysize = 1;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
        local_6a8 = "  Actual   : ";
        uStack_6a0 = 0xd;
        local_9e8._Mydata = "  Actual   : ";
        local_9e8._Mysize = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
        if ((local_9d8.type_ == 0) || (local_9d8.data_ == (Message *)0x0)) {
          pLVar17 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_1a8,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2b2);
          uVar10 = uVar25 | 0xa000;
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0xa000);
          local_698 = "Protocol Buffer map usage error:\n";
          uStack_690 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar17,&local_9e8);
          local_688 = "MapValueConstRef::type MapValueConstRef is not initialized.";
          uStack_680 = 0x3b;
          local_9e8._Mydata = "MapValueConstRef::type MapValueConstRef is not initialized.";
          local_9e8._Mysize = 0x3b;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar17,&local_9e8);
          if ((uVar10 & 0x8000) != 0) {
                    /* WARNING: Subroutine does not return */
            absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_1a8);
          }
        }
        local_678._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)local_9d8.type_];
        local_678._Mysize = 0xffffffffffffffff;
        do {
          local_678._Mysize = local_678._Mysize + 1;
        } while (local_678._Mydata[local_678._Mysize] != '\0');
        absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_678);
        if ((uVar10 >> 0xd & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_1b8);
        }
        *(double *)local_9d8.data_ = dVar15;
        this_02 = local_9c0;
        uVar25 = uVar10;
        break;
      case 5:
        dVar15 = Reflection::GetDouble(this_02,pMVar19,pFVar5);
        if ((local_9d8.type_ == 0) || (local_9d8.data_ == (Message *)0x0)) {
          pLVar18 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_168,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2b2);
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x20000);
          local_668 = "Protocol Buffer map usage error:\n";
          uStack_660 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_658 = "MapValueConstRef::type MapValueConstRef is not initialized.";
          uStack_650 = 0x3b;
          local_9e8._Mydata = "MapValueConstRef::type MapValueConstRef is not initialized.";
          local_9e8._Mysize = 0x3b;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_168);
        }
        if (local_9d8.type_ != CPPTYPE_DOUBLE) {
          pLVar18 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_188,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2ff);
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x10000);
          local_648 = "Protocol Buffer map usage error:\n";
          uStack_640 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_638 = "MapValueRef::SetDoubleValue";
          uStack_630 = 0x1b;
          local_9e8._Mydata = "MapValueRef::SetDoubleValue";
          local_9e8._Mysize = 0x1b;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_628 = " type does not match\n";
          uStack_620 = 0x15;
          local_9e8._Mydata = " type does not match\n";
          local_9e8._Mysize = 0x15;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_618 = "  Expected : ";
          uStack_610 = 0xd;
          local_9e8._Mydata = "  Expected : ";
          local_9e8._Mysize = 0xd;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_608._Mydata = PTR_s_double_1535d0148;
          local_608._Mysize = 0xffffffffffffffff;
          do {
            local_608._Mysize = local_608._Mysize + 1;
          } while (PTR_s_double_1535d0148[local_608._Mysize] != '\0');
          pLVar18 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_608);
          local_5f8 = "\n";
          uStack_5f0 = 1;
          local_9e8._Mydata = "\n";
          local_9e8._Mysize = 1;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_5e8 = "  Actual   : ";
          uStack_5e0 = 0xd;
          local_9e8._Mydata = "  Actual   : ";
          local_9e8._Mysize = 0xd;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          if ((local_9d8.type_ == 0) ||
             (uVar10 = uVar25 | 0x10000, local_9d8.data_ == (Message *)0x0)) {
            pLVar17 = (LogMessage *)
                      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                                (&local_178,
                                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                                 ,0x2b2);
            local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x50000);
            local_5d8 = "Protocol Buffer map usage error:\n";
            uStack_5d0 = 0x21;
            local_9e8._Mydata = "Protocol Buffer map usage error:\n";
            local_9e8._Mysize = 0x21;
            absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar17,&local_9e8)
            ;
            local_5c8 = "MapValueConstRef::type MapValueConstRef is not initialized.";
            uStack_5c0 = 0x3b;
            local_9e8._Mydata = "MapValueConstRef::type MapValueConstRef is not initialized.";
            local_9e8._Mysize = 0x3b;
            absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar17,&local_9e8)
            ;
            uVar10 = uVar25 | 0x50000;
            if (((uVar25 | 0x50000) & 0x40000) != 0) {
                    /* WARNING: Subroutine does not return */
              absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_178);
            }
          }
          uVar25 = uVar10;
          local_5b8._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)local_9d8.type_];
          local_5b8._Mysize = 0xffffffffffffffff;
          do {
            local_5b8._Mysize = local_5b8._Mysize + 1;
          } while (local_5b8._Mydata[local_5b8._Mysize] != '\0');
          absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_5b8);
          if ((uVar25 >> 0x10 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_188);
          }
        }
        *(double *)local_9d8.data_ = dVar15;
        break;
      case 6:
        fVar28 = Reflection::GetFloat(this_02,pMVar19,pFVar5);
        if ((local_9d8.type_ == 0) || (local_9d8.data_ == (Message *)0x0)) {
          pLVar18 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_138,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2b2);
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x100000);
          local_5a8 = "Protocol Buffer map usage error:\n";
          uStack_5a0 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_598 = "MapValueConstRef::type MapValueConstRef is not initialized.";
          uStack_590 = 0x3b;
          local_9e8._Mydata = "MapValueConstRef::type MapValueConstRef is not initialized.";
          local_9e8._Mysize = 0x3b;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_138);
        }
        if (local_9d8.type_ != CPPTYPE_FLOAT) {
          pLVar18 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_158,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2fb);
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x80000);
          local_588 = "Protocol Buffer map usage error:\n";
          uStack_580 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_578 = "MapValueRef::SetFloatValue";
          uStack_570 = 0x1a;
          local_9e8._Mydata = "MapValueRef::SetFloatValue";
          local_9e8._Mysize = 0x1a;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_568 = " type does not match\n";
          uStack_560 = 0x15;
          local_9e8._Mydata = " type does not match\n";
          local_9e8._Mysize = 0x15;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_558 = "  Expected : ";
          uStack_550 = 0xd;
          local_9e8._Mydata = "  Expected : ";
          local_9e8._Mysize = 0xd;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_548._Mydata = PTR_s_float_1535d0150;
          local_548._Mysize = 0xffffffffffffffff;
          do {
            local_548._Mysize = local_548._Mysize + 1;
          } while (PTR_s_float_1535d0150[local_548._Mysize] != '\0');
          pLVar18 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_548);
          local_538 = "\n";
          uStack_530 = 1;
          local_9e8._Mydata = "\n";
          local_9e8._Mysize = 1;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_528 = "  Actual   : ";
          uStack_520 = 0xd;
          local_9e8._Mydata = "  Actual   : ";
          local_9e8._Mysize = 0xd;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          if ((local_9d8.type_ == 0) ||
             (uVar10 = uVar25 | 0x80000, local_9d8.data_ == (Message *)0x0)) {
            pLVar17 = (LogMessage *)
                      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                                (&local_148,
                                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                                 ,0x2b2);
            local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x280000);
            local_518 = "Protocol Buffer map usage error:\n";
            uStack_510 = 0x21;
            local_9e8._Mydata = "Protocol Buffer map usage error:\n";
            local_9e8._Mysize = 0x21;
            absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar17,&local_9e8)
            ;
            local_508 = "MapValueConstRef::type MapValueConstRef is not initialized.";
            uStack_500 = 0x3b;
            local_9e8._Mydata = "MapValueConstRef::type MapValueConstRef is not initialized.";
            local_9e8._Mysize = 0x3b;
            absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar17,&local_9e8)
            ;
            uVar10 = uVar25 | 0x280000;
            if (((uVar25 | 0x280000) & 0x200000) != 0) {
                    /* WARNING: Subroutine does not return */
              absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_148);
            }
          }
          uVar25 = uVar10;
          local_4f8._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)local_9d8.type_];
          local_4f8._Mysize = 0xffffffffffffffff;
          do {
            local_4f8._Mysize = local_4f8._Mysize + 1;
          } while (local_4f8._Mydata[local_4f8._Mysize] != '\0');
          absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_4f8);
          if ((uVar25 >> 0x13 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_158);
          }
        }
        *(float *)local_9d8.data_ = fVar28;
        break;
      case 7:
        bVar7 = Reflection::GetBool(this_02,pMVar19,pFVar5);
        if ((local_9d8.type_ == 0) || (local_9d8.data_ == (Message *)0x0)) {
          pLVar18 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_108,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2b2);
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x800000);
          local_4e8 = "Protocol Buffer map usage error:\n";
          uStack_4e0 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_4d8 = "MapValueConstRef::type MapValueConstRef is not initialized.";
          uStack_4d0 = 0x3b;
          local_9e8._Mydata = "MapValueConstRef::type MapValueConstRef is not initialized.";
          local_9e8._Mysize = 0x3b;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_108);
        }
        if (local_9d8.type_ != CPPTYPE_BOOL) {
          pLVar18 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_128,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2ee);
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x400000);
          local_4c8 = "Protocol Buffer map usage error:\n";
          uStack_4c0 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_4b8 = "MapValueRef::SetBoolValue";
          uStack_4b0 = 0x19;
          local_9e8._Mydata = "MapValueRef::SetBoolValue";
          local_9e8._Mysize = 0x19;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_4a8 = " type does not match\n";
          uStack_4a0 = 0x15;
          local_9e8._Mydata = " type does not match\n";
          local_9e8._Mysize = 0x15;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_498 = "  Expected : ";
          uStack_490 = 0xd;
          local_9e8._Mydata = "  Expected : ";
          local_9e8._Mysize = 0xd;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_488._Mydata = PTR_s_bool_1535d0158;
          local_488._Mysize = 0xffffffffffffffff;
          do {
            local_488._Mysize = local_488._Mysize + 1;
          } while (PTR_s_bool_1535d0158[local_488._Mysize] != '\0');
          pLVar18 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_488);
          local_478 = "\n";
          uStack_470 = 1;
          local_9e8._Mydata = "\n";
          local_9e8._Mysize = 1;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_468 = "  Actual   : ";
          uStack_460 = 0xd;
          local_9e8._Mydata = "  Actual   : ";
          local_9e8._Mysize = 0xd;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          if ((local_9d8.type_ == 0) ||
             (uVar10 = uVar25 | 0x400000, local_9d8.data_ == (Message *)0x0)) {
            pLVar17 = (LogMessage *)
                      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                                (&local_118,
                                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                                 ,0x2b2);
            local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x1400000);
            local_458 = "Protocol Buffer map usage error:\n";
            uStack_450 = 0x21;
            local_9e8._Mydata = "Protocol Buffer map usage error:\n";
            local_9e8._Mysize = 0x21;
            absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar17,&local_9e8)
            ;
            local_448 = "MapValueConstRef::type MapValueConstRef is not initialized.";
            uStack_440 = 0x3b;
            local_9e8._Mydata = "MapValueConstRef::type MapValueConstRef is not initialized.";
            local_9e8._Mysize = 0x3b;
            absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar17,&local_9e8)
            ;
            uVar10 = uVar25 | 0x1400000;
            if (((uVar25 | 0x1400000) & 0x1000000) != 0) {
                    /* WARNING: Subroutine does not return */
              absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_118);
            }
          }
          uVar25 = uVar10;
          local_438._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)local_9d8.type_];
          local_438._Mysize = 0xffffffffffffffff;
          do {
            local_438._Mysize = local_438._Mysize + 1;
          } while (local_438._Mydata[local_438._Mysize] != '\0');
          absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_438);
          if ((uVar25 >> 0x16 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_128);
          }
        }
        *(bool *)local_9d8.data_ = bVar7;
        this_02 = local_9c0;
        break;
      case 8:
        iVar9 = Reflection::GetEnumValue(this_02,pMVar19,pFVar5);
        if ((local_9d8.type_ == 0) || (local_9d8.data_ == (Message *)0x0)) {
          pLVar18 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_b8,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2b2);
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x20000000);
          local_368 = "Protocol Buffer map usage error:\n";
          uStack_360 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_358 = "MapValueConstRef::type MapValueConstRef is not initialized.";
          uStack_350 = 0x3b;
          local_9e8._Mydata = "MapValueConstRef::type MapValueConstRef is not initialized.";
          local_9e8._Mysize = 0x3b;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_b8);
        }
        if (local_9d8.type_ != CPPTYPE_ENUM) {
          pLVar18 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_c8,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2f3);
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x10000000);
          local_348 = "Protocol Buffer map usage error:\n";
          uStack_340 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_338 = "MapValueRef::SetEnumValue";
          uStack_330 = 0x19;
          local_9e8._Mydata = "MapValueRef::SetEnumValue";
          local_9e8._Mysize = 0x19;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_328 = " type does not match\n";
          uStack_320 = 0x15;
          local_9e8._Mydata = " type does not match\n";
          local_9e8._Mysize = 0x15;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_318 = "  Expected : ";
          uStack_310 = 0xd;
          local_9e8._Mydata = "  Expected : ";
          local_9e8._Mysize = 0xd;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_308._Mydata = PTR_s_enum_1535d0160;
          local_308._Mysize = 0xffffffffffffffff;
          do {
            local_308._Mysize = local_308._Mysize + 1;
          } while (PTR_s_enum_1535d0160[local_308._Mysize] != '\0');
          pLVar18 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_308);
          local_2f8 = "\n";
          uStack_2f0 = 1;
          local_9e8._Mydata = "\n";
          local_9e8._Mysize = 1;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_2e8 = "  Actual   : ";
          uStack_2e0 = 0xd;
          local_9e8._Mydata = "  Actual   : ";
          local_9e8._Mysize = 0xd;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          CVar11 = MapValueConstRef::type(&local_9d8);
          local_2d8._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar11];
          local_2d8._Mysize = 0xffffffffffffffff;
          do {
            local_2d8._Mysize = local_2d8._Mysize + 1;
          } while (local_2d8._Mydata[local_2d8._Mysize] != '\0');
          absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_2d8);
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_c8);
        }
        *(int *)local_9d8.data_ = iVar9;
        break;
      case 9:
        pbVar16 = Reflection::GetString
                            (this_02,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)&local_68,pMVar19,pFVar5);
        pbVar27 = pbVar16;
        if (0xf < (pbVar16->_Mypair)._Myval2._Myres) {
          pbVar27 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                    (pbVar16->_Mypair)._Myval2._Bx._Ptr;
        }
        uVar23 = (pbVar16->_Mypair)._Myval2._Mysize;
        if ((local_9d8.type_ == 0) || (local_9d8.data_ == (Message *)0x0)) {
          pLVar18 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_d8,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2b2);
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x4000000);
          local_428 = "Protocol Buffer map usage error:\n";
          uStack_420 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_418 = "MapValueConstRef::type MapValueConstRef is not initialized.";
          uStack_410 = 0x3b;
          local_9e8._Mydata = "MapValueConstRef::type MapValueConstRef is not initialized.";
          local_9e8._Mysize = 0x3b;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_d8);
        }
        if (local_9d8.type_ != CPPTYPE_STRING) {
          pLVar18 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              (&local_f8,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x2f7);
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x2000000);
          local_408 = "Protocol Buffer map usage error:\n";
          uStack_400 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_3f8 = "MapValueRef::SetStringValue";
          uStack_3f0 = 0x1b;
          local_9e8._Mydata = "MapValueRef::SetStringValue";
          local_9e8._Mysize = 0x1b;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_3e8 = " type does not match\n";
          uStack_3e0 = 0x15;
          local_9e8._Mydata = " type does not match\n";
          local_9e8._Mysize = 0x15;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_3d8 = "  Expected : ";
          uStack_3d0 = 0xd;
          local_9e8._Mydata = "  Expected : ";
          local_9e8._Mysize = 0xd;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_3c8._Mydata = PTR_s_string_1535d0168;
          local_3c8._Mysize = 0xffffffffffffffff;
          do {
            local_3c8._Mysize = local_3c8._Mysize + 1;
          } while (PTR_s_string_1535d0168[local_3c8._Mysize] != '\0');
          pLVar18 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_3c8);
          local_3b8 = "\n";
          uStack_3b0 = 1;
          local_9e8._Mydata = "\n";
          local_9e8._Mysize = 1;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_3a8 = "  Actual   : ";
          uStack_3a0 = 0xd;
          local_9e8._Mydata = "  Actual   : ";
          local_9e8._Mysize = 0xd;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          if ((local_9d8.type_ == 0) ||
             (uVar10 = uVar25 | 0x2000000, local_9d8.data_ == (Message *)0x0)) {
            pLVar17 = (LogMessage *)
                      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                                (&local_e8,
                                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                                 ,0x2b2);
            local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0xa000000);
            local_398 = "Protocol Buffer map usage error:\n";
            uStack_390 = 0x21;
            local_9e8._Mydata = "Protocol Buffer map usage error:\n";
            local_9e8._Mysize = 0x21;
            absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar17,&local_9e8)
            ;
            local_388 = "MapValueConstRef::type MapValueConstRef is not initialized.";
            uStack_380 = 0x3b;
            local_9e8._Mydata = "MapValueConstRef::type MapValueConstRef is not initialized.";
            local_9e8._Mysize = 0x3b;
            absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar17,&local_9e8)
            ;
            uVar10 = uVar25 | 0xa000000;
            if (((uVar25 | 0xa000000) & 0x8000000) != 0) {
                    /* WARNING: Subroutine does not return */
              absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_e8);
            }
          }
          uVar25 = uVar10;
          local_378._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)local_9d8.type_];
          local_378._Mysize = 0xffffffffffffffff;
          do {
            local_378._Mysize = local_378._Mysize + 1;
          } while (local_378._Mydata[local_378._Mysize] != '\0');
          absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_378);
          if ((uVar25 >> 0x19 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_f8);
          }
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (local_9d8.data_,(char *)pbVar27,uVar23);
        this_01 = local_988;
        this_02 = local_9c0;
        if (0xf < local_50) {
          uVar23 = local_50 + 1;
          uVar20 = local_68._Ptr;
          if (0xfff < uVar23) {
            uVar23 = local_50 + 0x28;
            uVar20 = *(undefined8 *)(local_68._Ptr + -8);
            if ((char *)0x1f < local_68._Ptr + (-8 - uVar20)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete((void *)uVar20,uVar23);
          this_01 = local_988;
          this_02 = local_9c0;
        }
        break;
      case 10:
        CVar11 = MapValueConstRef::type(&local_9d8);
        pvVar3 = local_9d8.data_;
        if (CVar11 != CPPTYPE_MESSAGE) {
          pLVar18 = (LogMessage *)
                    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                              ((LogMessageFatal *)&local_248,
                               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                               ,0x305);
          local_9c8 = (MapValueConstRef *)(CONCAT44(local_9c8._4_4_,uVar25) | 0x40000000);
          local_2c8 = "Protocol Buffer map usage error:\n";
          uStack_2c0 = 0x21;
          local_9e8._Mydata = "Protocol Buffer map usage error:\n";
          local_9e8._Mysize = 0x21;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_2b8 = "MapValueRef::MutableMessageValue";
          uStack_2b0 = 0x20;
          local_9e8._Mydata = "MapValueRef::MutableMessageValue";
          local_9e8._Mysize = 0x20;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_2a8 = " type does not match\n";
          uStack_2a0 = 0x15;
          local_9e8._Mydata = " type does not match\n";
          local_9e8._Mysize = 0x15;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_298 = "  Expected : ";
          uStack_290 = 0xd;
          local_9e8._Mydata = "  Expected : ";
          local_9e8._Mysize = 0xd;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_288._Mydata = PTR_s_message_1535d0170;
          local_288._Mysize = 0xffffffffffffffff;
          do {
            local_288._Mysize = local_288._Mysize + 1;
          } while (PTR_s_message_1535d0170[local_288._Mysize] != '\0');
          pLVar18 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_288);
          local_278 = "\n";
          uStack_270 = 1;
          local_9e8._Mydata = "\n";
          local_9e8._Mysize = 1;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          local_268 = "  Actual   : ";
          uStack_260 = 0xd;
          local_9e8._Mydata = "  Actual   : ";
          local_9e8._Mysize = 0xd;
          absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(pLVar18,&local_9e8);
          CVar11 = MapValueConstRef::type(&local_9d8);
          local_258._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar11];
          local_258._Mysize = 0xffffffffffffffff;
          do {
            local_258._Mysize = local_258._Mysize + 1;
          } while (local_258._Mydata[local_258._Mysize] != '\0');
          absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar18,&local_258);
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                    ((LogMessageFatal *)&local_248);
        }
        pMVar19 = Reflection::GetMessage(this_02,pMVar19,local_990,(MessageFactory *)0x0);
        protobuf::Message::CopyFrom(pvVar3,pMVar19);
      }
      uVar6._Mypair._Myval2 = local_980._Mypair._Myval2;
      if (local_980._Mypair._Myval2 !=
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        uVar22 = *(ulong64 *)((longlong)local_980._Mypair._Myval2 + 0x18);
        if (0xf < uVar22) {
          uVar23 = uVar22 + 1;
          pvVar3 = *(void **)local_980._Mypair._Myval2;
          pvVar21 = pvVar3;
          if (0xfff < uVar23) {
            uVar23 = uVar22 + 0x28;
            pvVar21 = *(void **)((longlong)pvVar3 + -8);
            if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar21))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete(pvVar21,uVar23);
        }
        *(ulong64 *)((longlong)uVar6._Mypair._Myval2 + 0x10) = 0;
        *(ulong64 *)((longlong)uVar6._Mypair._Myval2 + 0x18) = 0xf;
        *(undefined1 *)uVar6._Mypair._Myval2 = 0;
        ::operator_delete((void *)uVar6._Mypair._Myval2,0x20);
      }
    }
  }
  return;
}

// SyncRepeatedFieldWithMap @ 14f93b720

/* protected: class google::protobuf::internal::RepeatedPtrFieldBase const & __ptr64 __cdecl
   google::protobuf::internal::MapFieldBase::SyncRepeatedFieldWithMap(bool)const __ptr64 */

RepeatedPtrFieldBase * __thiscall
google::protobuf::internal::MapFieldBase::SyncRepeatedFieldWithMap(MapFieldBase *this,bool param_1)

{
  ulonglong uVar1;
  ReflectionPayload *pRVar2;
  
  uVar1 = *(ulonglong *)this;
  if ((((uVar1 & 1) != 0) && (uVar1 != 1)) && (*(int *)(uVar1 + 0x1f) != 0)) {
    pRVar2 = payload(this);
    return (RepeatedPtrFieldBase *)pRVar2;
  }
  if (((*(ulonglong *)this & 1) == 0) ||
     (pRVar2 = (ReflectionPayload *)(*(ulonglong *)this - 1), pRVar2 == (ReflectionPayload *)0x0)) {
    if ((!param_1) && (*(int *)(this + 1) == 0)) {
      return (RepeatedPtrFieldBase *)&kZeroBuffer;
    }
    pRVar2 = payload(this);
  }
  absl::lts_20240722::Mutex::Lock(&pRVar2->mutex);
  if (pRVar2->state == (atomic<google::protobuf::internal::MapFieldBase::State>)0x0) {
    SyncRepeatedFieldWithMapNoLock(this);
    pRVar2->state = (atomic<google::protobuf::internal::MapFieldBase::State>)0x2;
  }
  absl::lts_20240722::Mutex::Unlock(&pRVar2->mutex);
  return (RepeatedPtrFieldBase *)pRVar2;
}

// SyncRepeatedFieldWithMapNoLock @ 14f93b7d0

/* WARNING: Removing unreachable block (ram,0x00014f93d1bf) */
/* WARNING: Removing unreachable block (ram,0x00014f93d1cb) */
/* WARNING: Removing unreachable block (ram,0x00014f93d1e3) */
/* WARNING: Removing unreachable block (ram,0x00014f93d1a7) */
/* WARNING: Removing unreachable block (ram,0x00014f93d1d7) */
/* WARNING: Removing unreachable block (ram,0x00014f93d1b3) */
/* WARNING: Removing unreachable block (ram,0x00014f93d198) */
/* WARNING: Enum "CppType": Some values do not have unique names */
/* protected: void __cdecl
   google::protobuf::internal::MapFieldBase::SyncRepeatedFieldWithMapNoLock(void) __ptr64 */

void __thiscall
google::protobuf::internal::MapFieldBase::SyncRepeatedFieldWithMapNoLock(MapFieldBase *this)

{
  int *piVar1;
  MessageLite *this_00;
  Reflection *this_01;
  Descriptor *this_02;
  void *pvVar2;
  int iVar3;
  CppType CVar4;
  Metadata *pMVar5;
  FieldDescriptor *pFVar6;
  FieldDescriptor *pFVar7;
  ReflectionPayload *this_03;
  FieldDescriptor *pFVar8;
  MessageLite *pMVar9;
  Arena *pAVar10;
  basic_string_view<char,std::char_traits<char>_> *pbVar11;
  __int64 _Var12;
  __uint64 _Var13;
  LogMessage *pLVar14;
  Message *pMVar15;
  uint uVar16;
  longlong lVar17;
  Arena *pAVar18;
  ReflectionPayload *pRVar19;
  byte bVar20;
  bool bVar21;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_708;
  longlong *local_6e8;
  MapFieldBase *pMStack_6e0;
  undefined8 local_6d8;
  MapFieldBase *local_6d0;
  KeyValue local_6c8;
  undefined4 local_6b8;
  MapValueConstRef local_6b0;
  longlong *local_698;
  MapFieldBase *pMStack_690;
  uint local_688;
  uint uStack_684;
  basic_string_view<char,std::char_traits<char>_> local_678;
  basic_string_view<char,std::char_traits<char>_> local_668;
  char *local_658;
  undefined8 uStack_650;
  char *local_648;
  undefined8 uStack_640;
  basic_string_view<char,std::char_traits<char>_> local_638;
  char *local_628;
  undefined8 uStack_620;
  char *local_618;
  undefined8 uStack_610;
  char *local_608;
  undefined8 uStack_600;
  char *local_5f8;
  undefined8 uStack_5f0;
  basic_string_view<char,std::char_traits<char>_> local_5e8;
  char *local_5d8;
  undefined8 uStack_5d0;
  char *local_5c8;
  undefined8 uStack_5c0;
  basic_string_view<char,std::char_traits<char>_> local_5b8;
  char *local_5a8;
  undefined8 uStack_5a0;
  char *local_598;
  undefined8 uStack_590;
  char *local_588;
  undefined8 uStack_580;
  char *local_578;
  undefined8 uStack_570;
  basic_string_view<char,std::char_traits<char>_> local_568;
  char *local_558;
  undefined8 uStack_550;
  char *local_548;
  undefined8 uStack_540;
  basic_string_view<char,std::char_traits<char>_> local_538;
  char *local_528;
  undefined8 uStack_520;
  char *local_518;
  undefined8 uStack_510;
  char *local_508;
  undefined8 uStack_500;
  char *local_4f8;
  undefined8 uStack_4f0;
  basic_string_view<char,std::char_traits<char>_> local_4e8;
  char *local_4d8;
  undefined8 uStack_4d0;
  char *local_4c8;
  undefined8 uStack_4c0;
  basic_string_view<char,std::char_traits<char>_> local_4b8;
  char *local_4a8;
  undefined8 uStack_4a0;
  char *local_498;
  undefined8 uStack_490;
  char *local_488;
  undefined8 uStack_480;
  char *local_478;
  undefined8 uStack_470;
  basic_string_view<char,std::char_traits<char>_> local_468;
  char *local_458;
  undefined8 uStack_450;
  char *local_448;
  undefined8 uStack_440;
  basic_string_view<char,std::char_traits<char>_> local_438;
  char *local_428;
  undefined8 uStack_420;
  char *local_418;
  undefined8 uStack_410;
  char *local_408;
  undefined8 uStack_400;
  char *local_3f8;
  undefined8 uStack_3f0;
  basic_string_view<char,std::char_traits<char>_> local_3e8;
  char *local_3d8;
  undefined8 uStack_3d0;
  char *local_3c8;
  undefined8 uStack_3c0;
  basic_string_view<char,std::char_traits<char>_> local_3b8;
  char *local_3a8;
  undefined8 uStack_3a0;
  char *local_398;
  undefined8 uStack_390;
  char *local_388;
  undefined8 uStack_380;
  char *local_378;
  undefined8 uStack_370;
  basic_string_view<char,std::char_traits<char>_> local_368;
  char *local_358;
  undefined8 uStack_350;
  char *local_348;
  undefined8 uStack_340;
  basic_string_view<char,std::char_traits<char>_> local_338;
  char *local_328;
  undefined8 uStack_320;
  char *local_318;
  undefined8 uStack_310;
  char *local_308;
  undefined8 uStack_300;
  char *local_2f8;
  undefined8 uStack_2f0;
  basic_string_view<char,std::char_traits<char>_> local_2e8;
  char *local_2d8;
  undefined8 uStack_2d0;
  char *local_2c8;
  undefined8 uStack_2c0;
  basic_string_view<char,std::char_traits<char>_> local_2b8;
  char *local_2a8;
  undefined8 uStack_2a0;
  char *local_298;
  undefined8 uStack_290;
  char *local_288;
  undefined8 uStack_280;
  char *local_278;
  undefined8 uStack_270;
  basic_string_view<char,std::char_traits<char>_> local_268;
  char *local_258;
  undefined8 uStack_250;
  char *local_248;
  undefined8 uStack_240;
  basic_string_view<char,std::char_traits<char>_> local_238;
  char *local_228;
  undefined8 uStack_220;
  char *local_218;
  undefined8 uStack_210;
  char *local_208;
  undefined8 uStack_200;
  char *local_1f8;
  undefined8 uStack_1f0;
  char *local_1e8;
  undefined8 uStack_1e0;
  char *local_1d8;
  undefined8 uStack_1d0;
  char *local_1c8;
  undefined8 uStack_1c0;
  char *local_1b8;
  undefined8 uStack_1b0;
  char *local_1a8;
  undefined8 uStack_1a0;
  basic_string_view<char,std::char_traits<char>_> local_198;
  Metadata local_188 [2];
  char *local_168;
  undefined8 uStack_160;
  _Bxty local_158;
  undefined8 local_148;
  undefined8 local_140;
  LogMessageFatal local_138;
  LogMessageFatal local_128 [2];
  LogMessageFatal local_108;
  LogMessageFatal local_f8;
  LogMessageFatal local_e8;
  LogMessageFatal local_d8;
  LogMessageFatal local_c8;
  LogMessageFatal local_b8;
  LogMessageFatal local_a8;
  Metadata local_98;
  basic_string_view<char,std::char_traits<char>_> local_88 [4];
  
  this_00 = *(MessageLite **)&this->field_0x8;
  pMVar5 = protobuf::Message::GetMetadata((Message *)this_00,&local_98);
  this_01 = pMVar5->reflection;
  pMVar5 = protobuf::Message::GetMetadata((Message *)this_00,local_188);
  this_02 = pMVar5->descriptor;
  pFVar6 = Descriptor::map_key(this_02);
  pFVar7 = Descriptor::map_value(this_02);
  this_03 = payload(this);
  if (0 < *(int *)&(this_03->repeated_field).field_0x8) {
    RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)this_03);
  }
  local_6b0.data_ = (Message *)0x0;
  local_6d0 = this;
  pFVar8 = Descriptor::map_key(this_02);
  local_6b8 = *(undefined4 *)
               ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar8->type_ * 4);
  pFVar8 = Descriptor::map_value(this_02);
  local_6b0.type_ =
       *(CppType *)((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar8->type_ * 4);
  Descriptor::map_key(this_02);
  Descriptor::map_value(this_02);
  pMStack_6e0 = this + 1;
  local_688 = *(uint *)&this[1].field_0x8;
  pMStack_690 = pMStack_6e0;
  if (local_688 == *(uint *)&this[1].field_0x4) {
    local_698 = (longlong *)0x0;
    local_688 = 0;
    local_6d8 = (ulonglong)uStack_684 << 0x20;
    local_6e8 = local_698;
  }
  else {
    local_6e8 = *(longlong **)(*(longlong *)(this + 2) + (ulonglong)local_688 * 8);
    local_6d8 = CONCAT44(uStack_684,local_688);
    if (local_6e8 == (longlong *)0x0) {
      return;
    }
    local_678._Mydata = (char *)&local_6c8;
    local_678._Mysize = (ulong64)&local_6c8;
    local_698 = local_6e8;
    switch(this[1].field_0xf & 0xf) {
    case 0:
      local_6c8.bool_value = (bool)(char)local_6e8[1];
      local_6b0.data_ = (void *)((ulonglong)(byte)this[1].field_0xe + (longlong)local_6e8);
      break;
    case 1:
      local_6c8.int32_value = (int)local_6e8[1];
      local_6b0.data_ = (void *)((ulonglong)(byte)this[1].field_0xe + (longlong)local_6e8);
      break;
    case 2:
      local_6c8.string_value._Mydata = (char *)local_6e8[1];
      local_6b0.data_ = (void *)((ulonglong)(byte)this[1].field_0xe + (longlong)local_6e8);
      break;
    default:
                    /* WARNING: Subroutine does not return */
      Unreachable();
    case 5:
      local_6c8.string_value._Mydata = (char *)(local_6e8 + 1);
      if (0xf < (ulonglong)local_6e8[4]) {
        local_6c8.string_value._Mydata = (char *)local_6e8[1];
      }
      local_6c8.string_value._Mysize = local_6e8[3];
      local_6b0.data_ = (void *)((ulonglong)(byte)this[1].field_0xe + (longlong)local_6e8);
    }
  }
  do {
    if (local_6e8 == (longlong *)0x0) {
      return;
    }
    pAVar18 = *(Arena **)this;
    if (((ulonglong)pAVar18 & 1) != 0) {
      pAVar18 = *(Arena **)((longlong)&(pAVar18->impl_).alloc_policy_.policy_ + 7);
    }
    pMVar9 = MessageLite::New(this_00,pAVar18);
    pAVar10 = GenericTypeHandler<google::protobuf::Message>::GetArena((Message *)pMVar9);
    pAVar18 = *(Arena **)&(this_03->repeated_field).field_0x10;
    if (pAVar18 == pAVar10) {
      bVar20 = ~*(byte *)&this_03->repeated_field & 1;
      if (bVar20 == 0) {
        lVar17 = *(longlong *)&this_03->repeated_field;
        bVar21 = *(int *)&(this_03->repeated_field).field_0xc + 1 <= *(int *)(lVar17 + -1);
      }
      else {
        lVar17 = *(longlong *)&this_03->repeated_field;
        bVar21 = lVar17 != 0;
      }
      if (bVar21) goto LAB_14f93bad3;
      if (bVar20 == 0) {
        pRVar19 = (ReflectionPayload *)(lVar17 + 7);
        uVar16 = *(uint *)(lVar17 + -1);
      }
      else {
        uVar16 = (uint)(lVar17 != 0);
        pRVar19 = this_03;
      }
      iVar3 = *(int *)&(this_03->repeated_field).field_0x8;
      if (iVar3 < (int)uVar16) {
        if (bVar20 == 0) {
          uVar16 = *(uint *)(lVar17 + -1);
        }
        else {
          uVar16 = (uint)(lVar17 != 0);
        }
        *(undefined8 *)(&(pRVar19->repeated_field).field_0x0 + (longlong)(int)uVar16 * 8) =
             *(undefined8 *)(&(pRVar19->repeated_field).field_0x0 + (longlong)iVar3 * 8);
      }
      iVar3 = *(int *)&(this_03->repeated_field).field_0x8;
      *(int *)&(this_03->repeated_field).field_0x8 = iVar3 + 1;
      *(MessageLite **)(&(pRVar19->repeated_field).field_0x0 + (longlong)iVar3 * 8) = pMVar9;
      if ((~*(byte *)&this_03->repeated_field & 1) == 0) {
        piVar1 = (int *)(*(longlong *)&this_03->repeated_field + -1);
        *piVar1 = *piVar1 + 1;
      }
    }
    else {
LAB_14f93bad3:
      RepeatedPtrFieldBase::
      AddAllocatedSlowWithCopy<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
                ((RepeatedPtrFieldBase *)this_03,(Message *)pMVar9,pAVar10,pAVar18);
    }
    switch(*(undefined4 *)
            ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar6->type_ * 4)) {
    case 1:
      iVar3 = MapKey::GetInt32Value((MapKey *)&local_6c8.string_value);
      Reflection::SetInt32(this_01,(Message *)pMVar9,pFVar6,iVar3);
      break;
    case 2:
      _Var12 = MapKey::GetInt64Value((MapKey *)&local_6c8.string_value);
      Reflection::SetInt64(this_01,(Message *)pMVar9,pFVar6,_Var12);
      break;
    case 3:
      uVar16 = MapKey::GetUInt32Value((MapKey *)&local_6c8.string_value);
      Reflection::SetUInt32(this_01,(Message *)pMVar9,pFVar6,uVar16);
      break;
    case 4:
      _Var13 = MapKey::GetUInt64Value((MapKey *)&local_6c8.string_value);
      Reflection::SetUInt64(this_01,(Message *)pMVar9,pFVar6,_Var13);
      break;
    default:
                    /* WARNING: Subroutine does not return */
      Unreachable();
    case 7:
      bVar21 = MapKey::GetBoolValue((MapKey *)&local_6c8.string_value);
      Reflection::SetBool(this_01,(Message *)pMVar9,pFVar6,bVar21);
      break;
    case 9:
      pbVar11 = MapKey::GetStringValue((MapKey *)&local_6c8.string_value,local_88);
      local_708._Mypair._Myval2._Bx._Ptr = (char *)0x0;
      local_708._Mypair._Myval2._Bx._8_8_ = 0;
      local_708._Mypair._Myval2._Mysize = 0;
      local_708._Mypair._Myval2._Myres = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>(&local_708,pbVar11->_Mydata,pbVar11->_Mysize);
      Reflection::SetString(this_01,(Message *)pMVar9,pFVar6,&local_708);
    }
    switch(*(undefined4 *)
            ((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)pFVar7->type_ * 4)) {
    case 1:
      CVar4 = MapValueConstRef::type(&local_6b0);
      if (CVar4 != CPPTYPE_INT32) {
        pLVar14 = (LogMessage *)
                  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                            (&local_c8,
                             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                             ,0x28a);
        local_5a8 = "Protocol Buffer map usage error:\n";
        uStack_5a0 = 0x21;
        local_708._Mypair._Myval2._Bx._Ptr = "Protocol Buffer map usage error:\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x21;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_598 = "MapValueConstRef::GetInt32Value";
        uStack_590 = 0x1f;
        local_708._Mypair._Myval2._Bx._Ptr = "MapValueConstRef::GetInt32Value";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x1f;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_588 = " type does not match\n";
        uStack_580 = 0x15;
        local_708._Mypair._Myval2._Bx._Ptr = " type does not match\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x15;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_578 = "  Expected : ";
        uStack_570 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Expected : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_568._Mydata = PTR_s_int32_1535d0128;
        local_568._Mysize = 0xffffffffffffffff;
        do {
          local_568._Mysize = local_568._Mysize + 1;
        } while (PTR_s_int32_1535d0128[local_568._Mysize] != '\0');
        pLVar14 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_568);
        local_558 = "\n";
        uStack_550 = 1;
        local_708._Mypair._Myval2._Bx._Ptr = "\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 1;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_548 = "  Actual   : ";
        uStack_540 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Actual   : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        CVar4 = MapValueConstRef::type(&local_6b0);
        local_538._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar4];
        local_538._Mysize = 0xffffffffffffffff;
        do {
          local_538._Mysize = local_538._Mysize + 1;
        } while (local_538._Mydata[local_538._Mysize] != '\0');
        absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_538);
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_c8);
      }
      Reflection::SetInt32(this_01,(Message *)pMVar9,pFVar7,(int)*(float *)local_6b0.data_);
      break;
    case 2:
      CVar4 = MapValueConstRef::type(&local_6b0);
      if (CVar4 != CPPTYPE_INT64) {
        pLVar14 = (LogMessage *)
                  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                            (&local_d8,
                             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                             ,0x280);
        local_628 = "Protocol Buffer map usage error:\n";
        uStack_620 = 0x21;
        local_708._Mypair._Myval2._Bx._Ptr = "Protocol Buffer map usage error:\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x21;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_618 = "MapValueConstRef::GetInt64Value";
        uStack_610 = 0x1f;
        local_708._Mypair._Myval2._Bx._Ptr = "MapValueConstRef::GetInt64Value";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x1f;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_608 = " type does not match\n";
        uStack_600 = 0x15;
        local_708._Mypair._Myval2._Bx._Ptr = " type does not match\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x15;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_5f8 = "  Expected : ";
        uStack_5f0 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Expected : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_5e8._Mydata = PTR_s_int64_1535d0130;
        local_5e8._Mysize = 0xffffffffffffffff;
        do {
          local_5e8._Mysize = local_5e8._Mysize + 1;
        } while (PTR_s_int64_1535d0130[local_5e8._Mysize] != '\0');
        pLVar14 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_5e8);
        local_5d8 = "\n";
        uStack_5d0 = 1;
        local_708._Mypair._Myval2._Bx._Ptr = "\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 1;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_5c8 = "  Actual   : ";
        uStack_5c0 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Actual   : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        CVar4 = MapValueConstRef::type(&local_6b0);
        local_5b8._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar4];
        local_5b8._Mysize = 0xffffffffffffffff;
        do {
          local_5b8._Mysize = local_5b8._Mysize + 1;
        } while (local_5b8._Mydata[local_5b8._Mysize] != '\0');
        absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_5b8);
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_d8);
      }
      Reflection::SetInt64(this_01,(Message *)pMVar9,pFVar7,(__int64)*(double *)local_6b0.data_);
      break;
    case 3:
      CVar4 = MapValueConstRef::type(&local_6b0);
      if (CVar4 != CPPTYPE_UINT32) {
        pLVar14 = (LogMessage *)
                  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                            (&local_138,
                             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                             ,0x28f);
        local_4a8 = "Protocol Buffer map usage error:\n";
        uStack_4a0 = 0x21;
        local_708._Mypair._Myval2._Bx._Ptr = "Protocol Buffer map usage error:\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x21;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_498 = "MapValueConstRef::GetUInt32Value";
        uStack_490 = 0x20;
        local_708._Mypair._Myval2._Bx._Ptr = "MapValueConstRef::GetUInt32Value";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x20;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_488 = " type does not match\n";
        uStack_480 = 0x15;
        local_708._Mypair._Myval2._Bx._Ptr = " type does not match\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x15;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_478 = "  Expected : ";
        uStack_470 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Expected : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_468._Mydata = PTR_s_uint32_1535d0138;
        local_468._Mysize = 0xffffffffffffffff;
        do {
          local_468._Mysize = local_468._Mysize + 1;
        } while (PTR_s_uint32_1535d0138[local_468._Mysize] != '\0');
        pLVar14 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_468);
        local_458 = "\n";
        uStack_450 = 1;
        local_708._Mypair._Myval2._Bx._Ptr = "\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 1;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_448 = "  Actual   : ";
        uStack_440 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Actual   : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        CVar4 = MapValueConstRef::type(&local_6b0);
        local_438._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar4];
        local_438._Mysize = 0xffffffffffffffff;
        do {
          local_438._Mysize = local_438._Mysize + 1;
        } while (local_438._Mydata[local_438._Mysize] != '\0');
        absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_438);
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_138);
      }
      Reflection::SetUInt32(this_01,(Message *)pMVar9,pFVar7,(uint)*(float *)local_6b0.data_);
      break;
    case 4:
      CVar4 = MapValueConstRef::type(&local_6b0);
      if (CVar4 != CPPTYPE_UINT64) {
        pLVar14 = (LogMessage *)
                  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                            (&local_b8,
                             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                             ,0x285);
        local_528 = "Protocol Buffer map usage error:\n";
        uStack_520 = 0x21;
        local_708._Mypair._Myval2._Bx._Ptr = "Protocol Buffer map usage error:\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x21;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_518 = "MapValueConstRef::GetUInt64Value";
        uStack_510 = 0x20;
        local_708._Mypair._Myval2._Bx._Ptr = "MapValueConstRef::GetUInt64Value";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x20;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_508 = " type does not match\n";
        uStack_500 = 0x15;
        local_708._Mypair._Myval2._Bx._Ptr = " type does not match\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x15;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_4f8 = "  Expected : ";
        uStack_4f0 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Expected : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_4e8._Mydata = PTR_s_uint64_1535d0140;
        local_4e8._Mysize = 0xffffffffffffffff;
        do {
          local_4e8._Mysize = local_4e8._Mysize + 1;
        } while (PTR_s_uint64_1535d0140[local_4e8._Mysize] != '\0');
        pLVar14 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_4e8);
        local_4d8 = "\n";
        uStack_4d0 = 1;
        local_708._Mypair._Myval2._Bx._Ptr = "\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 1;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_4c8 = "  Actual   : ";
        uStack_4c0 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Actual   : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        CVar4 = MapValueConstRef::type(&local_6b0);
        local_4b8._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar4];
        local_4b8._Mysize = 0xffffffffffffffff;
        do {
          local_4b8._Mysize = local_4b8._Mysize + 1;
        } while (local_4b8._Mydata[local_4b8._Mysize] != '\0');
        absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_4b8);
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_b8);
      }
      Reflection::SetUInt64(this_01,(Message *)pMVar9,pFVar7,(__uint64)*(double *)local_6b0.data_);
      break;
    case 5:
      CVar4 = MapValueConstRef::type(&local_6b0);
      if (CVar4 != CPPTYPE_DOUBLE) {
        pLVar14 = (LogMessage *)
                  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                            (&local_a8,
                             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                             ,0x2a6);
        local_3a8 = "Protocol Buffer map usage error:\n";
        uStack_3a0 = 0x21;
        local_708._Mypair._Myval2._Bx._Ptr = "Protocol Buffer map usage error:\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x21;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_398 = "MapValueConstRef::GetDoubleValue";
        uStack_390 = 0x20;
        local_708._Mypair._Myval2._Bx._Ptr = "MapValueConstRef::GetDoubleValue";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x20;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_388 = " type does not match\n";
        uStack_380 = 0x15;
        local_708._Mypair._Myval2._Bx._Ptr = " type does not match\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x15;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_378 = "  Expected : ";
        uStack_370 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Expected : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_368._Mydata = PTR_s_double_1535d0148;
        local_368._Mysize = 0xffffffffffffffff;
        do {
          local_368._Mysize = local_368._Mysize + 1;
        } while (PTR_s_double_1535d0148[local_368._Mysize] != '\0');
        pLVar14 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_368);
        local_358 = "\n";
        uStack_350 = 1;
        local_708._Mypair._Myval2._Bx._Ptr = "\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 1;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_348 = "  Actual   : ";
        uStack_340 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Actual   : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        CVar4 = MapValueConstRef::type(&local_6b0);
        local_338._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar4];
        local_338._Mysize = 0xffffffffffffffff;
        do {
          local_338._Mysize = local_338._Mysize + 1;
        } while (local_338._Mydata[local_338._Mysize] != '\0');
        absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_338);
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_a8);
      }
      Reflection::SetDouble(this_01,(Message *)pMVar9,pFVar7,*(double *)local_6b0.data_);
      break;
    case 6:
      CVar4 = MapValueConstRef::type(&local_6b0);
      if (CVar4 != CPPTYPE_FLOAT) {
        pLVar14 = (LogMessage *)
                  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                            (&local_108,
                             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                             ,0x2a1);
        local_328 = "Protocol Buffer map usage error:\n";
        uStack_320 = 0x21;
        local_708._Mypair._Myval2._Bx._Ptr = "Protocol Buffer map usage error:\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x21;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_318 = "MapValueConstRef::GetFloatValue";
        uStack_310 = 0x1f;
        local_708._Mypair._Myval2._Bx._Ptr = "MapValueConstRef::GetFloatValue";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x1f;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_308 = " type does not match\n";
        uStack_300 = 0x15;
        local_708._Mypair._Myval2._Bx._Ptr = " type does not match\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x15;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_2f8 = "  Expected : ";
        uStack_2f0 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Expected : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_2e8._Mydata = PTR_s_float_1535d0150;
        local_2e8._Mysize = 0xffffffffffffffff;
        do {
          local_2e8._Mysize = local_2e8._Mysize + 1;
        } while (PTR_s_float_1535d0150[local_2e8._Mysize] != '\0');
        pLVar14 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_2e8);
        local_2d8 = "\n";
        uStack_2d0 = 1;
        local_708._Mypair._Myval2._Bx._Ptr = "\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 1;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_2c8 = "  Actual   : ";
        uStack_2c0 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Actual   : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        CVar4 = MapValueConstRef::type(&local_6b0);
        local_2b8._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar4];
        local_2b8._Mysize = 0xffffffffffffffff;
        do {
          local_2b8._Mysize = local_2b8._Mysize + 1;
        } while (local_2b8._Mydata[local_2b8._Mysize] != '\0');
        absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_2b8);
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_108);
      }
      Reflection::SetFloat(this_01,(Message *)pMVar9,pFVar7,*(float *)local_6b0.data_);
      break;
    case 7:
      CVar4 = MapValueConstRef::type(&local_6b0);
      if (CVar4 != CPPTYPE_BOOL) {
        pLVar14 = (LogMessage *)
                  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                            (local_128,
                             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                             ,0x293);
        local_428 = "Protocol Buffer map usage error:\n";
        uStack_420 = 0x21;
        local_708._Mypair._Myval2._Bx._Ptr = "Protocol Buffer map usage error:\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x21;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_418 = "MapValueConstRef::GetBoolValue";
        uStack_410 = 0x1e;
        local_708._Mypair._Myval2._Bx._Ptr = "MapValueConstRef::GetBoolValue";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x1e;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_408 = " type does not match\n";
        uStack_400 = 0x15;
        local_708._Mypair._Myval2._Bx._Ptr = " type does not match\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x15;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_3f8 = "  Expected : ";
        uStack_3f0 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Expected : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_3e8._Mydata = PTR_s_bool_1535d0158;
        local_3e8._Mysize = 0xffffffffffffffff;
        do {
          local_3e8._Mysize = local_3e8._Mysize + 1;
        } while (PTR_s_bool_1535d0158[local_3e8._Mysize] != '\0');
        pLVar14 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_3e8);
        local_3d8 = "\n";
        uStack_3d0 = 1;
        local_708._Mypair._Myval2._Bx._Ptr = "\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 1;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_3c8 = "  Actual   : ";
        uStack_3c0 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Actual   : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        CVar4 = MapValueConstRef::type(&local_6b0);
        local_3b8._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar4];
        local_3b8._Mysize = 0xffffffffffffffff;
        do {
          local_3b8._Mysize = local_3b8._Mysize + 1;
        } while (local_3b8._Mydata[local_3b8._Mysize] != '\0');
        absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_3b8);
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(local_128);
      }
      Reflection::SetBool(this_01,(Message *)pMVar9,pFVar7,*(bool *)local_6b0.data_);
      break;
    case 8:
      CVar4 = MapValueConstRef::type(&local_6b0);
      if (CVar4 != CPPTYPE_ENUM) {
        pLVar14 = (LogMessage *)
                  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                            (&local_f8,
                             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                             ,0x297);
        local_2a8 = "Protocol Buffer map usage error:\n";
        uStack_2a0 = 0x21;
        local_708._Mypair._Myval2._Bx._Ptr = "Protocol Buffer map usage error:\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x21;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_298 = "MapValueConstRef::GetEnumValue";
        uStack_290 = 0x1e;
        local_708._Mypair._Myval2._Bx._Ptr = "MapValueConstRef::GetEnumValue";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x1e;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_288 = " type does not match\n";
        uStack_280 = 0x15;
        local_708._Mypair._Myval2._Bx._Ptr = " type does not match\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x15;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_278 = "  Expected : ";
        uStack_270 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Expected : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_268._Mydata = PTR_s_enum_1535d0160;
        local_268._Mysize = 0xffffffffffffffff;
        do {
          local_268._Mysize = local_268._Mysize + 1;
        } while (PTR_s_enum_1535d0160[local_268._Mysize] != '\0');
        pLVar14 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_268);
        local_258 = "\n";
        uStack_250 = 1;
        local_708._Mypair._Myval2._Bx._Ptr = "\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 1;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_248 = "  Actual   : ";
        uStack_240 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Actual   : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        CVar4 = MapValueConstRef::type(&local_6b0);
        local_238._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar4];
        local_238._Mysize = 0xffffffffffffffff;
        do {
          local_238._Mysize = local_238._Mysize + 1;
        } while (local_238._Mydata[local_238._Mysize] != '\0');
        absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_238);
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_f8);
      }
      Reflection::SetEnumValue(this_01,(Message *)pMVar9,pFVar7,(int)*(float *)local_6b0.data_);
      break;
    case 9:
      CVar4 = MapValueConstRef::type(&local_6b0);
      if (CVar4 != CPPTYPE_STRING) {
        pLVar14 = (LogMessage *)
                  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                            (&local_e8,
                             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                             ,0x29c);
        local_1e8 = "Protocol Buffer map usage error:\n";
        uStack_1e0 = 0x21;
        local_708._Mypair._Myval2._Bx._Ptr = "Protocol Buffer map usage error:\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x21;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_1b8 = "MapValueConstRef::GetStringValue";
        uStack_1b0 = 0x20;
        local_708._Mypair._Myval2._Bx._Ptr = "MapValueConstRef::GetStringValue";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x20;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_1a8 = " type does not match\n";
        uStack_1a0 = 0x15;
        local_708._Mypair._Myval2._Bx._Ptr = " type does not match\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x15;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_168 = "  Expected : ";
        uStack_160 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Expected : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_668._Mydata = PTR_s_string_1535d0168;
        local_668._Mysize = 0xffffffffffffffff;
        do {
          local_668._Mysize = local_668._Mysize + 1;
        } while (PTR_s_string_1535d0168[local_668._Mysize] != '\0');
        pLVar14 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_668);
        local_658 = "\n";
        uStack_650 = 1;
        local_708._Mypair._Myval2._Bx._Ptr = "\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 1;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_648 = "  Actual   : ";
        uStack_640 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Actual   : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        CVar4 = MapValueConstRef::type(&local_6b0);
        local_638._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar4];
        local_638._Mysize = 0xffffffffffffffff;
        do {
          local_638._Mysize = local_638._Mysize + 1;
        } while (local_638._Mydata[local_638._Mysize] != '\0');
        absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_638);
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_e8);
      }
      pMVar15 = local_6b0.data_;
      if (0xf < *(ulonglong *)&((Message *)((longlong)local_6b0.data_ + 0x10))->field_0x8) {
        pMVar15 = *(Message **)local_6b0.data_;
      }
      local_158._Ptr = (char *)0x0;
      local_158._8_8_ = 0;
      local_148 = 0;
      local_140 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_158,
                 (char *)pMVar15,(ulong64)*(double *)((longlong)local_6b0.data_ + 0x10));
      Reflection::SetString
                (this_01,(Message *)pMVar9,pFVar7,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_158);
      break;
    case 10:
      CVar4 = MapValueConstRef::type(&local_6b0);
      pvVar2 = local_6b0.data_;
      if (CVar4 != CPPTYPE_MESSAGE) {
        pLVar14 = (LogMessage *)
                  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                            ((LogMessageFatal *)local_188,
                             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                             ,0x2ac);
        local_228 = "Protocol Buffer map usage error:\n";
        uStack_220 = 0x21;
        local_708._Mypair._Myval2._Bx._Ptr = "Protocol Buffer map usage error:\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x21;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_218 = "MapValueConstRef::GetMessageValue";
        uStack_210 = 0x21;
        local_708._Mypair._Myval2._Bx._Ptr = "MapValueConstRef::GetMessageValue";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x21;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_208 = " type does not match\n";
        uStack_200 = 0x15;
        local_708._Mypair._Myval2._Bx._Ptr = " type does not match\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 0x15;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_1f8 = "  Expected : ";
        uStack_1f0 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Expected : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_198._Mydata = PTR_s_message_1535d0170;
        local_198._Mysize = 0xffffffffffffffff;
        do {
          local_198._Mysize = local_198._Mysize + 1;
        } while (PTR_s_message_1535d0170[local_198._Mysize] != '\0');
        pLVar14 = absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_198);
        local_1d8 = "\n";
        uStack_1d0 = 1;
        local_708._Mypair._Myval2._Bx._Ptr = "\n";
        local_708._Mypair._Myval2._Bx._8_8_ = 1;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        local_1c8 = "  Actual   : ";
        uStack_1c0 = 0xd;
        local_708._Mypair._Myval2._Bx._Ptr = "  Actual   : ";
        local_708._Mypair._Myval2._Bx._8_8_ = 0xd;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
                  (pLVar14,(basic_string_view<char,std::char_traits<char>_> *)&local_708);
        CVar4 = MapValueConstRef::type(&local_6b0);
        local_678._Mydata = (&FieldDescriptor::kCppTypeToName)[(int)CVar4];
        local_678._Mysize = 0xffffffffffffffff;
        do {
          local_678._Mysize = local_678._Mysize + 1;
        } while (local_678._Mydata[local_678._Mysize] != '\0');
        absl::lts_20240722::log_internal::LogMessage::operator<<(pLVar14,&local_678);
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                  ((LogMessageFatal *)local_188);
      }
      pMVar15 = Reflection::MutableMessage(this_01,(Message *)pMVar9,pFVar7,(MessageFactory *)0x0);
      protobuf::Message::CopyFrom(pMVar15,pvVar2);
    }
    local_6e8 = (longlong *)*local_6e8;
    if (local_6e8 == (longlong *)0x0) {
      uVar16 = (int)local_6d8 + 1;
      if (uVar16 < *(uint *)&pMStack_6e0->field_0x4) {
        do {
          local_6e8 = *(longlong **)(*(longlong *)(pMStack_6e0 + 1) + (ulonglong)uVar16 * 8);
          if (local_6e8 != (longlong *)0x0) {
            local_6d8 = CONCAT44(local_6d8._4_4_,uVar16);
            goto LAB_14f93d0f7;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < *(uint *)&pMStack_6e0->field_0x4);
      }
      local_6e8 = (longlong *)0x0;
      local_6d8 = (ulonglong)local_6d8._4_4_ << 0x20;
    }
LAB_14f93d0f7:
    if (local_6e8 == (longlong *)0x0) {
      return;
    }
    switch(pMStack_6e0->field_0xf & 0xf) {
    case 0:
      local_6c8.bool_value = (bool)(char)local_6e8[1];
      break;
    case 1:
      local_6c8.int32_value = (int)local_6e8[1];
      break;
    case 2:
      local_6c8.string_value._Mydata = (char *)local_6e8[1];
      break;
    default:
                    /* WARNING: Subroutine does not return */
      Unreachable();
    case 5:
      local_6c8.string_value._Mydata = (char *)(local_6e8 + 1);
      if (0xf < (ulonglong)local_6e8[4]) {
        local_6c8.string_value._Mydata = (char *)local_6e8[1];
      }
      local_6c8.string_value._Mysize = local_6e8[3];
    }
    local_6b0.data_ = (void *)((ulonglong)(byte)pMStack_6e0->field_0xe + (longlong)local_6e8);
  } while( true );
}

// ToArena @ 14f93d300

/* private: static class google::protobuf::Arena * __ptr64 __cdecl
   google::protobuf::internal::MapFieldBase::ToArena(enum
   google::protobuf::internal::MapFieldBaseForParse::TaggedPtr) */

Arena * __cdecl google::protobuf::internal::MapFieldBase::ToArena(TaggedPtr param_1)

{
  return (Arena *)param_1;
}

// ToPayload @ 14f93d310

/* private: static struct google::protobuf::internal::MapFieldBase::ReflectionPayload * __ptr64
   __cdecl google::protobuf::internal::MapFieldBase::ToPayload(enum
   google::protobuf::internal::MapFieldBaseForParse::TaggedPtr) */

ReflectionPayload * __cdecl google::protobuf::internal::MapFieldBase::ToPayload(TaggedPtr param_1)

{
  return (ReflectionPayload *)(param_1 - 1);
}

// ToTaggedPtr @ 14f93d320

/* private: static enum google::protobuf::internal::MapFieldBaseForParse::TaggedPtr __cdecl
   google::protobuf::internal::MapFieldBase::ToTaggedPtr(struct
   google::protobuf::internal::MapFieldBase::ReflectionPayload * __ptr64) */

TaggedPtr __cdecl google::protobuf::internal::MapFieldBase::ToTaggedPtr(ReflectionPayload *param_1)

{
  return (TaggedPtr)&(param_1->repeated_field).field_0x1;
}

// ToView @ 14f93d330

/* public: static unsigned int __cdecl google::protobuf::internal::TransparentSupport<unsigned
   int>::ToView(unsigned int) */

uint __cdecl google::protobuf::internal::TransparentSupport<unsigned_int>::ToView(uint param_1)

{
  return param_1;
}

// ToView @ 14f93d340

/* public: static unsigned __int64 __cdecl google::protobuf::internal::TransparentSupport<unsigned
   __int64>::ToView(unsigned __int64) */

__uint64 __cdecl
google::protobuf::internal::TransparentSupport<unsigned___int64>::ToView(__uint64 param_1)

{
  return param_1;
}

// ToView @ 14f93d350

/* public: static bool __cdecl google::protobuf::internal::TransparentSupport<bool>::ToView(bool) */

bool __cdecl google::protobuf::internal::TransparentSupport<bool>::ToView(bool param_1)

{
  return param_1;
}

// Unreachable @ 14f93d360

/* void __cdecl google::protobuf::internal::Unreachable(void) */

void __cdecl google::protobuf::internal::Unreachable(void)

{
  code *pcVar1;
  
  protobuf_assumption_failed("Unreachable","",0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// _Get_first @ 14f93d390

/* public: struct std::default_delete<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > & __ptr64 __cdecl
   std::_Compressed_pair<struct std::default_delete<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64,1>::_Get_first(void) __ptr64 */

default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> * __thiscall
std::
_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*___ptr64,1>
::_Get_first(_Compressed_pair<std::default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>*___ptr64,1>
             *this)

{
  return (default_delete<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
         this;
}

// arena @ 14f93d3a0

/* protected: class google::protobuf::Arena * __ptr64 __cdecl
   google::protobuf::internal::MapFieldBase::arena(void)const __ptr64 */

Arena * __thiscall google::protobuf::internal::MapFieldBase::arena(MapFieldBase *this)

{
  Arena *pAVar1;
  
  pAVar1 = *(Arena **)this;
  if (((ulonglong)pAVar1 & 1) != 0) {
    pAVar1 = *(Arena **)((longlong)&(pAVar1->impl_).alloc_policy_.policy_ + 7);
  }
  return pAVar1;
}

// arena @ 14f93d3c0

/* public: class google::protobuf::Arena * __ptr64 __cdecl
   google::protobuf::internal::UntypedMapBase::arena(void)const __ptr64 */

Arena * __thiscall google::protobuf::internal::UntypedMapBase::arena(UntypedMapBase *this)

{
  return this->arena_;
}

// begin @ 14f93d3d0

/* public: class google::protobuf::internal::RepeatedPtrIterator<class google::protobuf::Message>
   __cdecl google::protobuf::RepeatedPtrField<class google::protobuf::Message>::begin(void) __ptr64
    */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Message>::begin
          (RepeatedPtrField<google::protobuf::Message> *this)

{
  longlong *in_RDX;
  
  if ((~*(byte *)this & 1) != 0) {
    *in_RDX = (longlong)this;
    return;
  }
  *in_RDX = *(longlong *)this + 7;
  return;
}

// begin @ 14f93d400

/* public: class google::protobuf::internal::UntypedMapIterator __cdecl
   google::protobuf::internal::UntypedMapBase::begin(void)const __ptr64 */

UntypedMapIterator * __thiscall
google::protobuf::internal::UntypedMapBase::begin
          (UntypedMapBase *this,UntypedMapIterator *__return_storage_ptr__)

{
  uint uVar1;
  NodeBase **ppNVar2;
  
  uVar1 = this->index_of_first_non_null_;
  if (uVar1 == this->num_buckets_) {
    __return_storage_ptr__->m_ = this;
    __return_storage_ptr__->bucket_index_ = 0;
    __return_storage_ptr__->node_ = (NodeBase *)0x0;
    return __return_storage_ptr__;
  }
  ppNVar2 = this->table_;
  __return_storage_ptr__->m_ = this;
  __return_storage_ptr__->bucket_index_ = uVar1;
  __return_storage_ptr__->node_ = ppNVar2[uVar1];
  return __return_storage_ptr__;
}

// combine @ 14f93d440

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::HashStateBase<class
   absl::lts_20240722::hash_internal::MixingHashState>::combine(class
   absl::lts_20240722::hash_internal::MixingHashState) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::HashStateBase<absl::lts_20240722::hash_internal::MixingHashState>
::combine(MixingHashState param_1)

{
  undefined8 in_RDX;
  
  *(undefined8 *)param_1.state_ = in_RDX;
  return (MixingHashState)param_1.state_;
}

// combine_contiguous @ 14f93d450

/* public: static class absl::lts_20240722::hash_internal::MixingHashState __cdecl
   absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous(class
   absl::lts_20240722::hash_internal::MixingHashState,unsigned char const * __ptr64,unsigned
   __int64) */

MixingHashState __cdecl
absl::lts_20240722::hash_internal::MixingHashState::combine_contiguous
          (MixingHashState param_1,uchar *param_2,__uint64 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  __uint64 _Var4;
  ulonglong uVar5;
  ulonglong uVar6;
  char in_R9B;
  undefined7 in_register_00000089;
  
  if (CONCAT71(in_register_00000089,in_R9B) < 0x11) {
    if (8 < CONCAT71(in_register_00000089,in_R9B)) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_2 + -0x622015f714c7d297 +
                     (*(ulonglong *)param_3 >> 0x35 | *(ulonglong *)param_3 << 0xb);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulonglong)(param_2 + -0x622015f714c7d297) ^
                     *(ulonglong *)((param_3 - 8) + CONCAT71(in_register_00000089,in_R9B));
      *(ulonglong *)param_1.state_ = SUB168(auVar1 * auVar2,0) ^ SUB168(auVar1 * auVar2,8);
      return (MixingHashState)param_1.state_;
    }
    if (CONCAT71(in_register_00000089,in_R9B) < 4) {
      if (CONCAT71(in_register_00000089,in_R9B) == 0) {
        *(uchar **)param_1.state_ = param_2;
        return (MixingHashState)param_1.state_;
      }
      uVar6 = CONCAT71(in_register_00000089,in_R9B) >> 1;
      uVar5 = (ulonglong)*(byte *)param_3;
      uVar6 = (ulonglong)
              ((uint)*(byte *)((param_3 - 1) + CONCAT71(in_register_00000089,in_R9B)) <<
               (in_R9B * '\b' - 8U & 0x1f) |
              (uint)*(byte *)(uVar6 + param_3) << (((byte)uVar6 & 3) << 3));
    }
    else {
      uVar5 = (ulonglong)*(uint *)param_3;
      uVar6 = (ulonglong)*(uint *)((param_3 - 4) + CONCAT71(in_register_00000089,in_R9B)) <<
              (in_R9B * '\b' - 0x20U & 0x3f);
    }
    _Var4 = uVar6 | uVar5;
  }
  else {
    if (0x400 < CONCAT71(in_register_00000089,in_R9B)) {
      _Var4 = CombineLargeContiguousImpl64
                        ((__uint64)param_2,(uchar *)param_3,CONCAT71(in_register_00000089,in_R9B));
      *(__uint64 *)param_1.state_ = _Var4;
      return (MixingHashState)param_1.state_;
    }
    _Var4 = CityHash64((char *)param_3,CONCAT71(in_register_00000089,in_R9B));
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2 + _Var4;
  *(ulonglong *)param_1.state_ =
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,0) ^
       SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar3,8);
  return (MixingHashState)param_1.state_;
}

// compare_exchange_strong @ 14f93d570

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: bool __cdecl std::_Atomic_storage<enum
   google::protobuf::internal::MapFieldBaseForParse::TaggedPtr,8>::compare_exchange_strong(enum
   google::protobuf::internal::MapFieldBaseForParse::TaggedPtr & __ptr64,enum
   google::protobuf::internal::MapFieldBaseForParse::TaggedPtr,enum std::memory_order) __ptr64 */

bool __thiscall
std::_Atomic_storage<google::protobuf::internal::MapFieldBaseForParse::TaggedPtr,8>::
compare_exchange_strong
          (_Atomic_storage<google::protobuf::internal::MapFieldBaseForParse::TaggedPtr,8> *this,
          TaggedPtr *param_1,TaggedPtr param_2,memory_order param_3)

{
  TaggedPtr TVar1;
  TaggedPtr TVar2;
  bool bVar3;
  
  TVar1 = *param_1;
  LOCK();
  TVar2 = (this->_Storage)._Value;
  bVar3 = TVar1 == TVar2;
  if (bVar3) {
    (this->_Storage)._Value = param_2;
    TVar2 = TVar1;
  }
  UNLOCK();
  if (!bVar3) {
    *param_1 = TVar2;
    return false;
  }
  return true;
}

// cpp_type @ 14f93d590

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: enum google::protobuf::internal::FieldDescriptorLite::CppType __cdecl
   google::protobuf::FieldDescriptor::cpp_type(void)const __ptr64 */

CppType __thiscall google::protobuf::FieldDescriptor::cpp_type(FieldDescriptor *this)

{
  return *(CppType *)((longlong)&kTypeToCppTypeMap + (ulonglong)this->type_ * 4);
}

// element_at @ 14f93d5b0

/* private: void * __ptr64 & __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::element_at(int) __ptr64 */

void ** __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::element_at(RepeatedPtrFieldBase *this,int param_1)

{
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) != 0) {
    return &this->tagged_rep_or_elem_;
  }
  return (void **)((longlong)this->tagged_rep_or_elem_ + (longlong)param_1 * 8 + 7);
}

// empty @ 14f93d5e0

/* public: bool __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Message>::empty(void)const __ptr64 */

bool __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Message>::empty
          (RepeatedPtrField<google::protobuf::Message> *this)

{
  return *(int *)&this->field_0x8 == 0;
}

// empty @ 14f93d5f0

/* protected: bool __cdecl google::protobuf::internal::RepeatedPtrFieldBase::empty(void)const
   __ptr64 */

bool __thiscall google::protobuf::internal::RepeatedPtrFieldBase::empty(RepeatedPtrFieldBase *this)

{
  return this->current_size_ == 0;
}

// empty @ 14f93d600

/* public: bool __cdecl google::protobuf::internal::UntypedMapBase::empty(void)const __ptr64 */

bool __thiscall google::protobuf::internal::UntypedMapBase::empty(UntypedMapBase *this)

{
  return this->num_elements_ == 0;
}

// end @ 14f93d610

/* public: class google::protobuf::internal::RepeatedPtrIterator<class google::protobuf::Message>
   __cdecl google::protobuf::RepeatedPtrField<class google::protobuf::Message>::end(void) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Message>::end
          (RepeatedPtrField<google::protobuf::Message> *this)

{
  longlong *in_RDX;
  
  if ((~*(byte *)this & 1) != 0) {
    *in_RDX = (longlong)(&this->field_0x0 + (longlong)*(int *)&this->field_0x8 * 8);
    return;
  }
  *in_RDX = *(longlong *)this + 7 + (longlong)*(int *)&this->field_0x8 * 8;
  return;
}

// key @ 14f93d650

/* public: __cdecl google::protobuf::internal::KeyNode<unsigned int>::key(void)const __ptr64 */

undefined4 __thiscall
google::protobuf::internal::KeyNode<unsigned_int>::key(KeyNode<unsigned_int> *this)

{
  return *(undefined4 *)(this + 1);
}

// key @ 14f93d660

/* public: __cdecl google::protobuf::internal::KeyNode<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::key(void)const __ptr64 */

KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> * __thiscall
google::protobuf::internal::
KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::key
          (KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this)

{
  return this + 8;
}

// key @ 14f93d670

/* public: __cdecl google::protobuf::internal::KeyNode<unsigned __int64>::key(void)const __ptr64 */

KeyNode<unsigned___int64> __thiscall
google::protobuf::internal::KeyNode<unsigned___int64>::key(KeyNode<unsigned___int64> *this)

{
  return this[1];
}

// key @ 14f93d680

/* public: __cdecl google::protobuf::internal::KeyNode<bool>::key(void)const __ptr64 */

KeyNode<bool> __thiscall google::protobuf::internal::KeyNode<bool>::key(KeyNode<bool> *this)

{
  return this[8];
}

// key_type_kind @ 14f93d690

/* public: enum google::protobuf::internal::UntypedMapBase::TypeKind __cdecl
   google::protobuf::internal::UntypedMapBase::TypeInfo::key_type_kind(void)const __ptr64 */

TypeKind __thiscall
google::protobuf::internal::UntypedMapBase::TypeInfo::key_type_kind(TypeInfo *this)

{
  return this->key_type;
}

// load @ 14f93d6a0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void (__cdecl*__cdecl std::_Atomic_storage<void (__cdecl*)(class
   google::protobuf::internal::MapFieldBaseForParse const & __ptr64,bool),8>::load(enum
   std::memory_order)const __ptr64)(class google::protobuf::internal::MapFieldBaseForParse const &
   __ptr64,bool) */

_func_void_MapFieldBaseForParse_ptr_bool * __thiscall
std::
_Atomic_storage<void_(__cdecl*)(google::protobuf::internal::MapFieldBaseForParse_const&___ptr64,bool),8>
::load(_Atomic_storage<void_(__cdecl*)(google::protobuf::internal::MapFieldBaseForParse_const&___ptr64,bool),8>
       *this,memory_order param_1)

{
  return *(_func_void_MapFieldBaseForParse_ptr_bool **)this;
}

// load @ 14f93d6c0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: enum google::protobuf::internal::MapFieldBase::State __cdecl std::_Atomic_storage<enum
   google::protobuf::internal::MapFieldBase::State,4>::load(enum std::memory_order)const __ptr64 */

State __thiscall
std::_Atomic_storage<google::protobuf::internal::MapFieldBase::State,4>::load
          (_Atomic_storage<google::protobuf::internal::MapFieldBase::State,4> *this,
          memory_order param_1)

{
  return (this->_Storage)._Value;
}

// load @ 14f93d6e0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: enum google::protobuf::internal::MapFieldBaseForParse::TaggedPtr __cdecl
   std::_Atomic_storage<enum
   google::protobuf::internal::MapFieldBaseForParse::TaggedPtr,8>::load(enum std::memory_order)const
   __ptr64 */

TaggedPtr __thiscall
std::_Atomic_storage<google::protobuf::internal::MapFieldBaseForParse::TaggedPtr,8>::load
          (_Atomic_storage<google::protobuf::internal::MapFieldBaseForParse::TaggedPtr,8> *this,
          memory_order param_1)

{
  return (this->_Storage)._Value;
}

// max_size @ 14f93d700

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::UntypedMapBase::max_size(void) */

__uint64 __cdecl google::protobuf::internal::UntypedMapBase::max_size(void)

{
  return 0xffffffff;
}

// maybe_payload @ 14f93d710

/* protected: struct google::protobuf::internal::MapFieldBase::ReflectionPayload * __ptr64 __cdecl
   google::protobuf::internal::MapFieldBase::maybe_payload(void)const __ptr64 */

ReflectionPayload * __thiscall
google::protobuf::internal::MapFieldBase::maybe_payload(MapFieldBase *this)

{
  ReflectionPayload *pRVar1;
  
  pRVar1 = (ReflectionPayload *)(*(ulonglong *)this - 1);
  if ((*(ulonglong *)this & 1) == 0) {
    pRVar1 = (ReflectionPayload *)0x0;
  }
  return pRVar1;
}

// payload @ 14f93d730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: struct google::protobuf::internal::MapFieldBase::ReflectionPayload & __ptr64 __cdecl
   google::protobuf::internal::MapFieldBase::payload(void)const __ptr64 */

ReflectionPayload * __thiscall google::protobuf::internal::MapFieldBase::payload(MapFieldBase *this)

{
  Arena *this_00;
  ReflectionPayload *pRVar1;
  RepeatedPtrFieldBase *pRVar2;
  Arena *pAVar3;
  RepeatedPtrFieldBase *this_01;
  Arena *pAVar4;
  bool bVar5;
  
  this_01 = (RepeatedPtrFieldBase *)0x0;
  if (((*(ulonglong *)this & 1) != 0) &&
     (pRVar1 = (ReflectionPayload *)(*(ulonglong *)this - 1), pRVar1 != (ReflectionPayload *)0x0)) {
    return pRVar1;
  }
  this_00 = *(Arena **)this;
  pAVar4 = this_00;
  if (((ulonglong)this_00 & 1) != 0) goto LAB_14f93d7ff;
  _sync_map_with_repeated = FUN_14f92fb20;
  if (this_00 == (Arena *)0x0) {
    pRVar2 = ::operator_new(0x28);
    if (pRVar2 != (RepeatedPtrFieldBase *)0x0) goto LAB_14f93d7b2;
  }
  else {
    pRVar2 = Arena::AllocateAlignedWithCleanup
                       (this_00,0x28,8,
                        cleanup::
                        arena_destruct_object<google::protobuf::internal::MapFieldBase::ReflectionPayload>
                       );
LAB_14f93d7b2:
    pRVar2->arena_ = this_00;
    pRVar2->current_size_ = 0;
    pRVar2->capacity_proxy_ = 0;
    pRVar2->tagged_rep_or_elem_ = (void *)0x0;
    pRVar2[1].tagged_rep_or_elem_ = (void *)0x0;
    pRVar2[1].current_size_ = 0;
    this_01 = pRVar2;
  }
  pAVar4 = (Arena *)((longlong)&this_01->tagged_rep_or_elem_ + 1);
  LOCK();
  pAVar3 = *(Arena **)this;
  bVar5 = this_00 == pAVar3;
  if (bVar5) {
    *(Arena **)this = pAVar4;
    pAVar3 = this_00;
  }
  UNLOCK();
  if (((!bVar5) && (pAVar4 = pAVar3, this_00 == (Arena *)0x0)) &&
     (this_01 != (RepeatedPtrFieldBase *)0x0)) {
    if (this_01->tagged_rep_or_elem_ != (void *)0x0) {
      RepeatedPtrFieldBase::DestroyProtos(this_01);
    }
    ::operator_delete(this_01,0x28);
  }
LAB_14f93d7ff:
  return (ReflectionPayload *)((longlong)&pAVar4[-1].impl_.first_arena_.cached_blocks_ + 7);
}

// raw_data @ 14f93d820

/* protected: void * __ptr64 const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::raw_data(void)const __ptr64 */

void ** __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::raw_data(RepeatedPtrFieldBase *this)

{
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) != 0) {
    return &this->tagged_rep_or_elem_;
  }
  return (void **)((longlong)this->tagged_rep_or_elem_ + 7);
}

// size @ 14f93d840

/* public: int __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Message>::size(void)const __ptr64 */

int __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Message>::size
          (RepeatedPtrField<google::protobuf::Message> *this)

{
  return *(int *)&this->field_0x8;
}

// size @ 14f93d850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __cdecl google::protobuf::internal::MapFieldBase::size(void)const __ptr64 */

int __thiscall google::protobuf::internal::MapFieldBase::size(MapFieldBase *this)

{
  if ((*(ulonglong *)this & 1) != 0) {
    (*_sync_map_with_repeated)(this,0);
    return *(int *)(this + 1);
  }
  return *(int *)(this + 1);
}

// size @ 14f93d890

/* protected: int __cdecl google::protobuf::internal::RepeatedPtrFieldBase::size(void)const __ptr64
    */

int __thiscall google::protobuf::internal::RepeatedPtrFieldBase::size(RepeatedPtrFieldBase *this)

{
  return this->current_size_;
}

// size @ 14f93d8a0

/* public: unsigned __int64 __cdecl google::protobuf::internal::UntypedMapBase::size(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::internal::UntypedMapBase::size(UntypedMapBase *this)

{
  return (ulonglong)this->num_elements_;
}

// state @ 14f93d8b0

/* protected: enum google::protobuf::internal::MapFieldBase::State __cdecl
   google::protobuf::internal::MapFieldBase::state(void)const __ptr64 */

State __thiscall google::protobuf::internal::MapFieldBase::state(MapFieldBase *this)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)this;
  if (((uVar1 & 1) != 0) && (uVar1 != 1)) {
    return *(State *)(uVar1 + 0x1f);
  }
  return STATE_MODIFIED_MAP;
}

// store @ 14f93d8d0

/* public: void __cdecl std::_Atomic_storage<void (__cdecl*)(class
   google::protobuf::internal::MapFieldBaseForParse const & __ptr64,bool),8>::store(void
   (__cdecl*const)(class google::protobuf::internal::MapFieldBaseForParse const & __ptr64,bool))
   __ptr64 */

void __thiscall
std::
_Atomic_storage<void_(__cdecl*)(google::protobuf::internal::MapFieldBaseForParse_const&___ptr64,bool),8>
::store(_Atomic_storage<void_(__cdecl*)(google::protobuf::internal::MapFieldBaseForParse_const&___ptr64,bool),8>
        *this,_func_void_MapFieldBaseForParse_ptr_bool *param_1)

{
  LOCK();
  *(_func_void_MapFieldBaseForParse_ptr_bool **)this = param_1;
  UNLOCK();
  return;
}

// store @ 14f93d8e0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<void (__cdecl*)(class
   google::protobuf::internal::MapFieldBaseForParse const & __ptr64,bool),8>::store(void
   (__cdecl*const)(class google::protobuf::internal::MapFieldBaseForParse const & __ptr64,bool),enum
   std::memory_order) __ptr64 */

void __thiscall
std::
_Atomic_storage<void_(__cdecl*)(google::protobuf::internal::MapFieldBaseForParse_const&___ptr64,bool),8>
::store(_Atomic_storage<void_(__cdecl*)(google::protobuf::internal::MapFieldBaseForParse_const&___ptr64,bool),8>
        *this,_func_void_MapFieldBaseForParse_ptr_bool *param_1,memory_order param_2)

{
  switch(param_2) {
  case memory_order_relaxed:
    *(_func_void_MapFieldBaseForParse_ptr_bool **)this = param_1;
    return;
  default:
    LOCK();
    *(_func_void_MapFieldBaseForParse_ptr_bool **)this = param_1;
    UNLOCK();
    return;
  case memory_order_release:
    *(_func_void_MapFieldBaseForParse_ptr_bool **)this = param_1;
    return;
  }
}

// store @ 14f93d930

/* public: void __cdecl std::_Atomic_storage<enum
   google::protobuf::internal::MapFieldBase::State,4>::store(enum
   google::protobuf::internal::MapFieldBase::State) __ptr64 */

void __thiscall
std::_Atomic_storage<google::protobuf::internal::MapFieldBase::State,4>::store
          (_Atomic_storage<google::protobuf::internal::MapFieldBase::State,4> *this,State param_1)

{
  LOCK();
  (this->_Storage)._Value = param_1;
  UNLOCK();
  return;
}

// store @ 14f93d940

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<enum
   google::protobuf::internal::MapFieldBase::State,4>::store(enum
   google::protobuf::internal::MapFieldBase::State,enum std::memory_order) __ptr64 */

void __thiscall
std::_Atomic_storage<google::protobuf::internal::MapFieldBase::State,4>::store
          (_Atomic_storage<google::protobuf::internal::MapFieldBase::State,4> *this,State param_1,
          memory_order param_2)

{
  switch(param_2) {
  case memory_order_relaxed:
    (this->_Storage)._Value = param_1;
    return;
  default:
    LOCK();
    (this->_Storage)._Value = param_1;
    UNLOCK();
    return;
  case memory_order_release:
    (this->_Storage)._Value = param_1;
    return;
  }
}

// store @ 14f93d990

/* public: void __cdecl std::_Atomic_storage<enum
   google::protobuf::internal::MapFieldBaseForParse::TaggedPtr,8>::store(enum
   google::protobuf::internal::MapFieldBaseForParse::TaggedPtr) __ptr64 */

void __thiscall
std::_Atomic_storage<google::protobuf::internal::MapFieldBaseForParse::TaggedPtr,8>::store
          (_Atomic_storage<google::protobuf::internal::MapFieldBaseForParse::TaggedPtr,8> *this,
          TaggedPtr param_1)

{
  LOCK();
  (this->_Storage)._Value = param_1;
  UNLOCK();
  return;
}

// store @ 14f93d9a0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<enum
   google::protobuf::internal::MapFieldBaseForParse::TaggedPtr,8>::store(enum
   google::protobuf::internal::MapFieldBaseForParse::TaggedPtr,enum std::memory_order) __ptr64 */

void __thiscall
std::_Atomic_storage<google::protobuf::internal::MapFieldBaseForParse::TaggedPtr,8>::store
          (_Atomic_storage<google::protobuf::internal::MapFieldBaseForParse::TaggedPtr,8> *this,
          TaggedPtr param_1,memory_order param_2)

{
  switch(param_2) {
  case memory_order_relaxed:
    (this->_Storage)._Value = param_1;
    return;
  default:
    LOCK();
    (this->_Storage)._Value = param_1;
    UNLOCK();
    return;
  case memory_order_release:
    (this->_Storage)._Value = param_1;
    return;
  }
}

// type @ 14f93d9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* public: enum google::protobuf::internal::FieldDescriptorLite::Type __cdecl
   google::protobuf::FieldDescriptor::type(void)const __ptr64 */

Type __thiscall google::protobuf::FieldDescriptor::type(FieldDescriptor *this)

{
  return (Type)this->type_;
}

// type @ 14f93da00

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: enum google::protobuf::internal::FieldDescriptorLite::CppType __cdecl
   google::protobuf::MapKey::type(void)const __ptr64 */

CppType __thiscall google::protobuf::MapKey::type(MapKey *this)

{
  LogMessage *this_00;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if (this->type_ != 0) {
    return this->type_;
  }
  this_00 = (LogMessage *)
            absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                      (&local_18,
                       "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                       ,0x52);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_28);
  local_28._Mydata = "MapKey::type MapKey is not initialized. ";
  local_28._Mysize = 0x28;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_28);
  local_28._Mydata = "Call set methods to initialize MapKey.";
  local_28._Mysize = 0x26;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// type @ 14f93dae0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: enum google::protobuf::internal::FieldDescriptorLite::CppType __cdecl
   google::protobuf::MapValueConstRef::type(void)const __ptr64 */

CppType __thiscall google::protobuf::MapValueConstRef::type(MapValueConstRef *this)

{
  LogMessage *this_00;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  if ((this->type_ != 0) && (this->data_ != (void *)0x0)) {
    return this->type_;
  }
  this_00 = (LogMessage *)
            absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                      (&local_18,
                       "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/map_field.h"
                       ,0x2b2);
  local_28._Mydata = "Protocol Buffer map usage error:\n";
  local_28._Mysize = 0x21;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_28);
  local_28._Mydata = "MapValueConstRef::type MapValueConstRef is not initialized.";
  local_28._Mysize = 0x3b;
  absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_28);
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
}

// value_type_kind @ 14f93db90

/* public: enum google::protobuf::internal::UntypedMapBase::TypeKind __cdecl
   google::protobuf::internal::UntypedMapBase::TypeInfo::value_type_kind(void)const __ptr64 */

TypeKind __thiscall
google::protobuf::internal::UntypedMapBase::TypeInfo::value_type_kind(TypeInfo *this)

{
  return this->value_type;
}

// FUN_150295c10 @ 150295c10

void FUN_150295c10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x80) & 1) != 0) {
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x50));
  }
  return;
}

// FUN_150295c50 @ 150295c50

void FUN_150295c50(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150295c80 @ 150295c80

void FUN_150295c80(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150295cb0 @ 150295cb0

void FUN_150295cb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150295ce0 @ 150295ce0

void FUN_150295ce0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150295d10 @ 150295d10

void FUN_150295d10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150295d40 @ 150295d40

void FUN_150295d40(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150295d70 @ 150295d70

void FUN_150295d70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150295da0 @ 150295da0

void FUN_150295da0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150295dd0 @ 150295dd0

void FUN_150295dd0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150295e00 @ 150295e00

void FUN_150295e00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150295e50 @ 150295e50

void FUN_150295e50(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150295e80 @ 150295e80

void FUN_150295e80(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150295eb0 @ 150295eb0

void FUN_150295eb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150295ee0 @ 150295ee0

void FUN_150295ee0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150295f10 @ 150295f10

void FUN_150295f10(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150295f40 @ 150295f40

void FUN_150295f40(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150295f70 @ 150295f70

void FUN_150295f70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150295fc0 @ 150295fc0

void FUN_150295fc0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 1) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150295ff0 @ 150295ff0

void FUN_150295ff0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150296020 @ 150296020

void FUN_150296020(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 1) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150296050 @ 150296050

void FUN_150296050(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x68) & 1) != 0) {
    *(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150296080 @ 150296080

void FUN_150296080(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 1) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_1502960b0 @ 1502960b0

void FUN_1502960b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_1502960e0 @ 1502960e0

void FUN_1502960e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150296110 @ 150296110

void FUN_150296110(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 1) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150296140 @ 150296140

void FUN_150296140(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_1502961f0 @ 1502961f0

void FUN_1502961f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x10) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffef;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x970));
  }
  return;
}

// FUN_150296220 @ 150296220

void FUN_150296220(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x20) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffdf;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x7f0));
  }
  return;
}

// FUN_150296250 @ 150296250

void FUN_150296250(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x40) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffbf;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x980));
  }
  return;
}

// FUN_150296280 @ 150296280

void FUN_150296280(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x80) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffff7f;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x800));
  }
  return;
}

// FUN_1502962c0 @ 1502962c0

void FUN_1502962c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x100) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffeff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x820));
  }
  return;
}

// FUN_150296300 @ 150296300

void FUN_150296300(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x200) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffdff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x810));
  }
  return;
}

// FUN_150296340 @ 150296340

void FUN_150296340(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x400) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffbff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x830));
  }
  return;
}

// FUN_150296380 @ 150296380

void FUN_150296380(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x800) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffff7ff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x850));
  }
  return;
}

// FUN_1502963c0 @ 1502963c0

void FUN_1502963c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffefff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x840));
  }
  return;
}

// FUN_150296400 @ 150296400

void FUN_150296400(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffdfff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x860));
  }
  return;
}

// FUN_150296440 @ 150296440

void FUN_150296440(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffbfff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x880));
  }
  return;
}

// FUN_150296480 @ 150296480

void FUN_150296480(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffff7fff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x870));
  }
  return;
}

// FUN_1502964c0 @ 1502964c0

void FUN_1502964c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffeffff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x890));
  }
  return;
}

// FUN_150296500 @ 150296500

void FUN_150296500(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffdffff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x8b0));
  }
  return;
}

// FUN_150296540 @ 150296540

void FUN_150296540(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffbffff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x8a0));
  }
  return;
}

// FUN_150296580 @ 150296580

void FUN_150296580(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfff7ffff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x8c0));
  }
  return;
}

// FUN_1502965c0 @ 1502965c0

void FUN_1502965c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffefffff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x8e0));
  }
  return;
}

// FUN_150296600 @ 150296600

void FUN_150296600(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x200000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffdfffff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x8d0));
  }
  return;
}

// FUN_150296640 @ 150296640

void FUN_150296640(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x400000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffbfffff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x8f0));
  }
  return;
}

// FUN_150296680 @ 150296680

void FUN_150296680(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x800000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xff7fffff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x910));
  }
  return;
}

// FUN_1502966c0 @ 1502966c0

void FUN_1502966c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x1000000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfeffffff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x900));
  }
  return;
}

// FUN_150296700 @ 150296700

void FUN_150296700(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x2000000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfdffffff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x920));
  }
  return;
}

// FUN_150296740 @ 150296740

void FUN_150296740(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x4000000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfbffffff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x940));
  }
  return;
}

// FUN_150296780 @ 150296780

void FUN_150296780(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x8000000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xf7ffffff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x930));
  }
  return;
}

// FUN_1502967c0 @ 1502967c0

void FUN_1502967c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x10000000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xefffffff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x950));
  }
  return;
}

// FUN_150296800 @ 150296800

void FUN_150296800(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x20000000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xdfffffff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x960));
  }
  return;
}

// FUN_150296840 @ 150296840

void FUN_150296840(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x40000000) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xbfffffff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 2000));
  }
  return;
}

// FUN_1502968a0 @ 1502968a0

void FUN_1502968a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x730) & 0x80) != 0) {
    *(uint *)(param_2 + 0x730) = *(uint *)(param_2 + 0x730) & 0xffffff7f;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x640));
  }
  return;
}

// FUN_1502968e0 @ 1502968e0

void FUN_1502968e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x730) & 0x100) != 0) {
    *(uint *)(param_2 + 0x730) = *(uint *)(param_2 + 0x730) & 0xfffffeff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x650));
  }
  return;
}

// FUN_150296920 @ 150296920

void FUN_150296920(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x730) & 0x200) != 0) {
    *(uint *)(param_2 + 0x730) = *(uint *)(param_2 + 0x730) & 0xfffffdff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x660));
  }
  return;
}

// FUN_150296960 @ 150296960

void FUN_150296960(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x730) & 0x400) != 0) {
    *(uint *)(param_2 + 0x730) = *(uint *)(param_2 + 0x730) & 0xfffffbff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x670));
  }
  return;
}

// FUN_1502969a0 @ 1502969a0

void FUN_1502969a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x730) & 0x800) != 0) {
    *(uint *)(param_2 + 0x730) = *(uint *)(param_2 + 0x730) & 0xfffff7ff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x5f0));
  }
  return;
}

// FUN_1502969e0 @ 1502969e0

void FUN_1502969e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x730) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x730) = *(uint *)(param_2 + 0x730) & 0xffffefff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x600));
  }
  return;
}

// FUN_150296a20 @ 150296a20

void FUN_150296a20(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x730) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x730) = *(uint *)(param_2 + 0x730) & 0xffffdfff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x680));
  }
  return;
}

// FUN_150296a60 @ 150296a60

void FUN_150296a60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x730) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x730) = *(uint *)(param_2 + 0x730) & 0xffffbfff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x620));
  }
  return;
}

// FUN_150296aa0 @ 150296aa0

void FUN_150296aa0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x730) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x730) = *(uint *)(param_2 + 0x730) & 0xffff7fff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x630));
  }
  return;
}

// FUN_150296ae0 @ 150296ae0

void FUN_150296ae0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x730) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x730) = *(uint *)(param_2 + 0x730) & 0xfffeffff;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x5a0));
  }
  return;
}

// FUN_150296b20 @ 150296b20

void FUN_150296b20(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

// FUN_150296b50 @ 150296b50

void FUN_150296b50(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}


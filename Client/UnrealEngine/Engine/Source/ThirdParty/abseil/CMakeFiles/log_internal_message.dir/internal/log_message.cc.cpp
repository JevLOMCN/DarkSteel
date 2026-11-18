// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 285

// Storage<absl::lts_20240722::LogSink*___ptr64*___ptr64,1,0><std::nullptr_t> @ 14f8e2ed0

/* public: __cdecl absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64,1,0>::Storage<class absl::lts_20240722::LogSink *
   __ptr64 * __ptr64,1,0><std::nullptr_t>(struct std::in_place_t,std::nullptr_t && __ptr64) __ptr64
    */

Storage<absl::lts_20240722::LogSink*___ptr64*___ptr64,1,0> * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<absl::lts_20240722::LogSink*___ptr64*___ptr64,1,0>::
Storage<absl::lts_20240722::LogSink*___ptr64*___ptr64,1,0><std::nullptr_t>
          (Storage<absl::lts_20240722::LogSink*___ptr64*___ptr64,1,0> *this,in_place_t param_1,
          std__nullptr_t *param_2)

{
  *(undefined8 *)this = *(undefined8 *)param_2;
  return this;
}

// _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1><> @ 14f8e2ee0

/* public: __cdecl std::_Compressed_pair<class std::allocator<char>,class std::_String_val<struct
   std::_Simple_types<char> >,1>::_Compressed_pair<class std::allocator<char>,class
   std::_String_val<struct std::_Simple_types<char> >,1><>(struct std::_Zero_then_variadic_args_t)
   __ptr64 */

_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> * __thiscall
std::_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>::
_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1><>
          (_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
           *this,_Zero_then_variadic_args_t param_1)

{
  (this->_Myval2)._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(this->_Myval2)._Bx + 8) = 0;
  (this->_Myval2)._Mysize = 0;
  (this->_Myval2)._Myres = 0;
  return this;
}

// _Compressed_pair<std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>,absl::lts_20240722::log_internal::LogMessage::LogMessageData*___ptr64,1><absl::lts_20240722::log_internal::LogMessage::LogMessageData*___ptr64&___ptr64> @ 14f8e2f00

/* public: __cdecl std::_Compressed_pair<struct std::default_delete<struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData>,struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData *
   __ptr64,1>::_Compressed_pair<struct std::default_delete<struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData>,struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData * __ptr64,1><struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData * __ptr64 & __ptr64>(struct
   std::_Zero_then_variadic_args_t,struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData * __ptr64 & __ptr64) __ptr64 */

_Compressed_pair<std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>,absl::lts_20240722::log_internal::LogMessage::LogMessageData*___ptr64,1>
* __thiscall
std::
_Compressed_pair<std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>,absl::lts_20240722::log_internal::LogMessage::LogMessageData*___ptr64,1>
::
_Compressed_pair<std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>,absl::lts_20240722::log_internal::LogMessage::LogMessageData*___ptr64,1><absl::lts_20240722::log_internal::LogMessage::LogMessageData*___ptr64&___ptr64>
          (_Compressed_pair<std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>,absl::lts_20240722::log_internal::LogMessage::LogMessageData*___ptr64,1>
           *this,_Zero_then_variadic_args_t param_1,LogMessageData **param_2)

{
  *(LogMessageData **)this = *param_2;
  return this;
}

// CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,absl::lts_20240722::LogSink*___ptr64*___ptr64><std::allocator<absl::lts_20240722::LogSink*___ptr64>&___ptr64,std::nullptr_t,1> @ 14f8e2f10

/* public: __cdecl absl::lts_20240722::container_internal::CompressedTuple<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64>,class absl::lts_20240722::LogSink *
   __ptr64 * __ptr64>::CompressedTuple<class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64>,class absl::lts_20240722::LogSink * __ptr64 * __ptr64><class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> & __ptr64,std::nullptr_t,1>(class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> & __ptr64,std::nullptr_t && __ptr64) __ptr64 */

CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,absl::lts_20240722::LogSink*___ptr64*___ptr64>
* __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,absl::lts_20240722::LogSink*___ptr64*___ptr64>
::
CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,absl::lts_20240722::LogSink*___ptr64*___ptr64><std::allocator<absl::lts_20240722::LogSink*___ptr64>&___ptr64,std::nullptr_t,1>
          (CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,absl::lts_20240722::LogSink*___ptr64*___ptr64>
           *this,allocator<absl::lts_20240722::LogSink*___ptr64> *param_1,std__nullptr_t *param_2)

{
  *(undefined8 *)this = *(undefined8 *)param_2;
  return this;
}

// CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,absl::lts_20240722::LogSink*___ptr64*___ptr64>,std::integer_sequence<unsigned___int64,0,1>,1><std::allocator<absl::lts_20240722::LogSink*___ptr64>&___ptr64,std::nullptr_t> @ 14f8e2f20

/* public: __cdecl
   absl::lts_20240722::container_internal::internal_compressed_tuple::CompressedTupleImpl<class
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64>,class absl::lts_20240722::LogSink * __ptr64 *
   __ptr64>,struct std::integer_sequence<unsigned __int64,0,1>,1>::CompressedTupleImpl<class
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64>,class absl::lts_20240722::LogSink * __ptr64 *
   __ptr64>,struct std::integer_sequence<unsigned __int64,0,1>,1><class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> & __ptr64,std::nullptr_t>(struct std::in_place_t,class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64,std::nullptr_t && __ptr64)
   __ptr64 */

CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,absl::lts_20240722::LogSink*___ptr64*___ptr64>,std::integer_sequence<unsigned___int64,0,1>,1>
* __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,absl::lts_20240722::LogSink*___ptr64*___ptr64>,std::integer_sequence<unsigned___int64,0,1>,1>
::
CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,absl::lts_20240722::LogSink*___ptr64*___ptr64>,std::integer_sequence<unsigned___int64,0,1>,1><std::allocator<absl::lts_20240722::LogSink*___ptr64>&___ptr64,std::nullptr_t>
          (CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,absl::lts_20240722::LogSink*___ptr64*___ptr64>,std::integer_sequence<unsigned___int64,0,1>,1>
           *this,in_place_t param_1,allocator<absl::lts_20240722::LogSink*___ptr64> *param_2,
          std__nullptr_t *param_3)

{
  *(undefined8 *)this = *(undefined8 *)param_3;
  return this;
}

// Storage<std::allocator<absl::lts_20240722::LogSink*___ptr64>,0,1><std::allocator<absl::lts_20240722::LogSink*___ptr64>&___ptr64> @ 14f8e2f30

/* public: __cdecl absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64>,0,1>::Storage<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64>,0,1><class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> & __ptr64>(struct std::in_place_t,class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64) __ptr64 */

Storage<std::allocator<absl::lts_20240722::LogSink*___ptr64>,0,1> * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<std::allocator<absl::lts_20240722::LogSink*___ptr64>,0,1>::
Storage<std::allocator<absl::lts_20240722::LogSink*___ptr64>,0,1><std::allocator<absl::lts_20240722::LogSink*___ptr64>&___ptr64>
          (Storage<std::allocator<absl::lts_20240722::LogSink*___ptr64>,0,1> *this,
          in_place_t param_1,allocator<absl::lts_20240722::LogSink*___ptr64> *param_2)

{
  return this;
}

// Storage<unsigned___int64,1,0><unsigned_int> @ 14f8e2f40

/* public: __cdecl
   absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<unsigned
   __int64,1,0>::Storage<unsigned __int64,1,0><unsigned int>(struct std::in_place_t,unsigned int &&
   __ptr64) __ptr64 */

Storage<unsigned___int64,1,0> * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<unsigned___int64,1,0>::
Storage<unsigned___int64,1,0><unsigned_int>
          (Storage<unsigned___int64,1,0> *this,in_place_t param_1,uint *param_2)

{
  this->value = (ulonglong)*param_2;
  return this;
}

// unique_ptr<absl::lts_20240722::log_internal::LogMessage::LogMessageData,std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>_><std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>,0> @ 14f8e2f50

/* public: __cdecl std::unique_ptr<struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData,struct std::default_delete<struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData> >::unique_ptr<struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData,struct std::default_delete<struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData> ><struct std::default_delete<struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData>,0>(struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData * __ptr64) __ptr64 */

unique_ptr<absl::lts_20240722::log_internal::LogMessage::LogMessageData,std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>_>
* __thiscall
std::
unique_ptr<absl::lts_20240722::log_internal::LogMessage::LogMessageData,std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>_>
::
unique_ptr<absl::lts_20240722::log_internal::LogMessage::LogMessageData,std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>_><std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>,0>
          (unique_ptr<absl::lts_20240722::log_internal::LogMessage::LogMessageData,std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>_>
           *this,LogMessageData *param_1)

{
  (this->_Mypair)._Myval2 = param_1;
  return this;
}

// Span<char_const_><absl::lts_20240722::Span<char>,void,absl::lts_20240722::Span<char>,0> @ 14f8e2f60

/* public: __cdecl absl::lts_20240722::Span<char const >::Span<char const ><class
   absl::lts_20240722::Span<char>,void,class absl::lts_20240722::Span<char>,0>(class
   absl::lts_20240722::Span<char> const & __ptr64) __ptr64 */

Span<char_const_> * __thiscall
absl::lts_20240722::Span<char_const_>::
Span<char_const_><absl::lts_20240722::Span<char>,void,absl::lts_20240722::Span<char>,0>
          (Span<char_const_> *this,Span<char> *param_1)

{
  ulong64 uVar1;
  
  uVar1 = param_1->len_;
  this->ptr_ = param_1->ptr_;
  this->len_ = uVar1;
  return this;
}

// Span<char><absl::lts_20240722::Span<char>,void,absl::lts_20240722::Span<char>,0> @ 14f8e2f80

/* public: __cdecl absl::lts_20240722::Span<char>::Span<char><class
   absl::lts_20240722::Span<char>,void,class absl::lts_20240722::Span<char>,0>(class
   absl::lts_20240722::Span<char> & __ptr64) __ptr64 */

Span<char> * __thiscall
absl::lts_20240722::Span<char>::
Span<char><absl::lts_20240722::Span<char>,void,absl::lts_20240722::Span<char>,0>
          (Span<char> *this,Span<char> *param_1)

{
  ulong64 uVar1;
  
  uVar1 = param_1->len_;
  this->ptr_ = param_1->ptr_;
  this->len_ = uVar1;
  return this;
}

// Storage<std::allocator<absl::lts_20240722::LogSink*___ptr64>,0,1><std::allocator<absl::lts_20240722::LogSink*___ptr64>_> @ 14f8e2fa0

/* public: __cdecl absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64>,0,1>::Storage<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64>,0,1><class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >(struct std::in_place_t,class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> && __ptr64) __ptr64 */

Storage<std::allocator<absl::lts_20240722::LogSink*___ptr64>,0,1> * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<std::allocator<absl::lts_20240722::LogSink*___ptr64>,0,1>::
Storage<std::allocator<absl::lts_20240722::LogSink*___ptr64>,0,1><std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
          (Storage<std::allocator<absl::lts_20240722::LogSink*___ptr64>,0,1> *this,
          in_place_t param_1,allocator<absl::lts_20240722::LogSink*___ptr64> *param_2)

{
  return this;
}

// CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned___int64><std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned_int,1> @ 14f8e2fb0

/* public: __cdecl absl::lts_20240722::container_internal::CompressedTuple<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64>,unsigned
   __int64>::CompressedTuple<class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64>,unsigned __int64><class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64>,unsigned int,1>(class std::allocator<class absl::lts_20240722::LogSink * __ptr64> &&
   __ptr64,unsigned int && __ptr64) __ptr64 */

CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned___int64> * __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned___int64>::
CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned___int64><std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned_int,1>
          (CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned___int64>
           *this,allocator<absl::lts_20240722::LogSink*___ptr64> *param_1,uint *param_2)

{
  *(ulonglong *)this = (ulonglong)*param_2;
  return this;
}

// CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned___int64>,std::integer_sequence<unsigned___int64,0,1>,1><std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned_int> @ 14f8e2fc0

/* public: __cdecl
   absl::lts_20240722::container_internal::internal_compressed_tuple::CompressedTupleImpl<class
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64>,unsigned __int64>,struct std::integer_sequence<unsigned
   __int64,0,1>,1>::CompressedTupleImpl<class
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64>,unsigned __int64>,struct std::integer_sequence<unsigned
   __int64,0,1>,1><class std::allocator<class absl::lts_20240722::LogSink * __ptr64>,unsigned
   int>(struct std::in_place_t,class std::allocator<class absl::lts_20240722::LogSink * __ptr64> &&
   __ptr64,unsigned int && __ptr64) __ptr64 */

CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned___int64>,std::integer_sequence<unsigned___int64,0,1>,1>
* __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned___int64>,std::integer_sequence<unsigned___int64,0,1>,1>
::
CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned___int64>,std::integer_sequence<unsigned___int64,0,1>,1><std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned_int>
          (CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned___int64>,std::integer_sequence<unsigned___int64,0,1>,1>
           *this,in_place_t param_1,allocator<absl::lts_20240722::LogSink*___ptr64> *param_2,
          uint *param_3)

{
  *(ulonglong *)this = (ulonglong)*param_3;
  return this;
}

// Span<char><std::array<char,15000>,void,std::array<char,15000>,int> @ 14f8e2fd0

/* public: __cdecl absl::lts_20240722::Span<char>::Span<char><class
   std::array<char,15000>,void,class std::array<char,15000>,int>(class std::array<char,15000> &
   __ptr64) __ptr64 */

Span<char> * __thiscall
absl::lts_20240722::Span<char>::Span<char><std::array<char,15000>,void,std::array<char,15000>,int>
          (Span<char> *this,array<char,15000> *param_1)

{
  this->ptr_ = (char *)param_1;
  this->len_ = 15000;
  return this;
}

// Span<char_const_><std::basic_string_view<char,std::char_traits<char>_>,void,std::basic_string_view<char,struct_std::char_traits<char>_>,0> @ 14f8e2ff0

/* public: __cdecl absl::lts_20240722::Span<char const >::Span<char const ><class
   std::basic_string_view<char,struct std::char_traits<char> >,void,class
   std::basic_string_view<char,struct std::char_traits<char> >,0>(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64) __ptr64 */

Span<char_const_> * __thiscall
absl::lts_20240722::Span<char_const_>::
Span<char_const_><std::basic_string_view<char,std::char_traits<char>_>,void,std::basic_string_view<char,struct_std::char_traits<char>_>,0>
          (Span<char_const_> *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  ulong64 uVar1;
  
  uVar1 = param_1->_Mysize;
  this->ptr_ = param_1->_Mydata;
  this->len_ = uVar1;
  return this;
}

// operator<<<3> @ 14f8e3010

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<3>(char const (& __ptr64)[3]) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<3>(LogMessage *this,char *param_1)

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

// operator<<<15> @ 14f8e3060

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<15>(char const (& __ptr64)[15]) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<15>(LogMessage *this,char *param_1)

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

// operator<<<signed_char,0> @ 14f8e30b0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<signed char,0>(signed char const &
   __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<signed_char,0>
          (LogMessage *this,char *param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<<<char,0> @ 14f8e3110

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<char,0>(char const & __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<char,0>(LogMessage *this,char *param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<<<unsigned_char,0> @ 14f8e3170

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<unsigned char,0>(unsigned char const &
   __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<unsigned_char,0>
          (LogMessage *this,uchar *param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::operator<<<std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<<<short,0> @ 14f8e31d0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<short,0>(short const & __ptr64) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<short,0>(LogMessage *this,short *param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<<<unsigned_short,0> @ 14f8e3230

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<unsigned short,0>(unsigned short const &
   __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<unsigned_short,0>
          (LogMessage *this,ushort *param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<<<int,0> @ 14f8e3290

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<int,0>(int const & __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<int,0>(LogMessage *this,int *param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<<<unsigned_int,0> @ 14f8e32f0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<unsigned int,0>(unsigned int const &
   __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<unsigned_int,0>
          (LogMessage *this,uint *param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<<<long,0> @ 14f8e3350

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<long,0>(long const & __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<long,0>(LogMessage *this,long *param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<<<unsigned_long,0> @ 14f8e33b0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<unsigned long,0>(unsigned long const &
   __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<unsigned_long,0>
          (LogMessage *this,ulong *param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<<<float,0> @ 14f8e3410

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<float,0>(float const & __ptr64) __ptr64
    */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<float,0>(LogMessage *this,float *param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<<<double,0> @ 14f8e3470

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<double,0>(double const & __ptr64)
   __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<double,0>(LogMessage *this,double *param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<<<void*___ptr64,0> @ 14f8e34d0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<void * __ptr64,0>(void * __ptr64 const &
   __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<void*___ptr64,0>
          (LogMessage *this,void **param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<<<void_const*___ptr64,0> @ 14f8e3530

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<void const * __ptr64,0>(void const *
   __ptr64 const & __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<void_const*___ptr64,0>
          (LogMessage *this,void **param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<<<__int64,0> @ 14f8e3590

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<__int64,0>(__int64 const & __ptr64)
   __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<__int64,0>
          (LogMessage *this,__int64 *param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<<<unsigned___int64,0> @ 14f8e35f0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<unsigned __int64,0>(unsigned __int64
   const & __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<unsigned___int64,0>
          (LogMessage *this,__uint64 *param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<<<bool,0> @ 14f8e3650

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<<bool,0>(bool const & __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<<bool,0>(LogMessage *this,bool *param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),*param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator()<absl::lts_20240722::LogSink*___ptr64*___ptr64_const&___ptr64> @ 14f8e36b0

/* public: UNKNOWN __cdecl std::ranges::_Iter_move::_Cpo::operator()<class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64 const & __ptr64>(class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64 const & __ptr64)const __ptr64 */

LogSink ** __thiscall
std::ranges::_Iter_move::_Cpo::
operator()<absl::lts_20240722::LogSink*___ptr64*___ptr64_const&___ptr64>
          (_Cpo *this,LogSink ***param_1)

{
  return *param_1;
}

// operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64> @ 14f8e36c0

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(enum
   absl::lts_20240722::LogSeverity,char const * __ptr64,int,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64)>::operator()<enum
   absl::lts_20240722::LogSeverity,char const * __ptr64 const & __ptr64,int,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __ptr64>(enum
   absl::lts_20240722::LogSeverity && __ptr64,char const * __ptr64 const & __ptr64,int &&
   __ptr64,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
   __ptr64)const __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
::
operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
          (AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
           *this,LogSeverity *param_1,char **param_2,int *param_3,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)this;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014f8e36e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_1,*param_2,*param_3,param_4);
  return;
}

// BufferSizeFor<> @ 14f8e36f0

/* unsigned __int64 __cdecl absl::lts_20240722::log_internal::BufferSizeFor<>(enum
   absl::lts_20240722::log_internal::WireType) */

__uint64 __cdecl absl::lts_20240722::log_internal::BufferSizeFor<>(WireType param_1)

{
  __uint64 _Var1;
  undefined4 in_register_0000000c;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = CONCAT44(in_register_0000000c,param_1);
  if (lVar2 != 0) {
    if (lVar2 == 1) {
      uVar3 = (ulonglong)(param_1 + 8);
      goto LAB_14f8e372b;
    }
    if (lVar2 == 5) {
      uVar3 = 5;
      goto LAB_14f8e372b;
    }
  }
  _Var1 = VarintSize(0x1ffffffffffffff);
  uVar3 = _Var1 + 2;
LAB_14f8e372b:
  _Var1 = VarintSize(0x1ffffffffffffff);
  return _Var1 + uVar3;
}

// ConstructElements<std::allocator<absl::lts_20240722::LogSink*___ptr64>,absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64>_>_> @ 14f8e3750

/* void __cdecl absl::lts_20240722::inlined_vector_internal::ConstructElements<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64>,class
   absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64>,class std::move_iterator<class absl::lts_20240722::LogSink
   * __ptr64 * __ptr64> > >(class std::allocator<class absl::lts_20240722::LogSink * __ptr64> &
   __ptr64,class absl::lts_20240722::LogSink * __ptr64 * __ptr64,class
   absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64>,class std::move_iterator<class absl::lts_20240722::LogSink
   * __ptr64 * __ptr64> > & __ptr64,unsigned __int64) */

void __cdecl
absl::lts_20240722::inlined_vector_internal::
ConstructElements<std::allocator<absl::lts_20240722::LogSink*___ptr64>,absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64>_>_>
          (allocator<absl::lts_20240722::LogSink*___ptr64> *param_1,LogSink **param_2,
          IteratorValueAdapter<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64>_>
          *param_3,__uint64 param_4)

{
  ulonglong uVar1;
  
  for (uVar1 = 0; uVar1 < param_4; uVar1 = uVar1 + 1) {
    param_2[uVar1] = (LogSink *)**(undefined8 **)param_3;
    *(longlong *)param_3 = *(longlong *)param_3 + 8;
  }
  return;
}

// CopyToEncodedBuffer<1> @ 14f8e3780

/* private: void __cdecl
   absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<1>(char,unsigned __int64)
   __ptr64 */

void __thiscall
absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<1>
          (LogMessage *this,char param_1,__uint64 param_2)

{
  char *pcVar1;
  ulong64 uVar2;
  Span<char> *pSVar3;
  __uint64 _Var4;
  Span<char> *pSVar5;
  Span<char> local_58;
  Span<char> local_48;
  Span<char> local_38;
  Span<char> local_28 [2];
  
  pSVar3 = LogMessageData::encoded_remaining((this->data_)._Mypair._Myval2);
  local_58.ptr_ = pSVar3->ptr_;
  local_58.len_ = pSVar3->len_;
  _Var4 = VarintSize(0x1ffffffffffffff);
  EncodeMessageStart(local_28,7,param_2 + (_Var4 + 1) * 2,&local_58);
  EncodeMessageStart(&local_48,1,param_2,&local_58);
  if (local_48.ptr_ != (char *)0x0) {
    if (local_58.len_ < param_2) {
      param_2 = local_58.len_;
    }
    memset(local_58.ptr_,(int)param_1,param_2);
    local_58.ptr_ = local_58.ptr_ + param_2;
    local_58.len_ = local_58.len_ - param_2;
    local_38.ptr_ = local_48.ptr_;
    local_38.len_ = local_48.len_;
    EncodeMessageLength(&local_38,&local_58);
    local_38.ptr_ = local_28[0].ptr_;
    local_38.len_ = local_28[0].len_;
    EncodeMessageLength(&local_38,&local_58);
    uVar2 = local_58.len_;
    pcVar1 = local_58.ptr_;
    pSVar3 = LogMessageData::encoded_remaining((this->data_)._Mypair._Myval2);
    pSVar3->ptr_ = pcVar1;
    pSVar3->len_ = uVar2;
    return;
  }
  pSVar3 = LogMessageData::encoded_remaining((this->data_)._Mypair._Myval2);
  pSVar5 = LogMessageData::encoded_remaining((this->data_)._Mypair._Myval2);
  pSVar3->len_ = pSVar3->len_ - pSVar5->len_;
  return;
}

// CopyToEncodedBuffer<1> @ 14f8e38b0

/* private: void __cdecl absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<1>(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

void __thiscall
absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<1>
          (LogMessage *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  ulong64 uVar2;
  bool bVar3;
  Span<char> *pSVar4;
  __uint64 _Var5;
  Span<char> *pSVar6;
  Span<char> local_48;
  Span<char_const_> local_38;
  Span<char> local_28 [2];
  
  pSVar4 = LogMessageData::encoded_remaining((this->data_)._Mypair._Myval2);
  local_48.ptr_ = pSVar4->ptr_;
  local_48.len_ = pSVar4->len_;
  _Var5 = VarintSize(0x1ffffffffffffff);
  EncodeMessageStart(local_28,7,param_1->_Mysize + _Var5 * 2 + 2,&local_48);
  local_38.ptr_ = param_1->_Mydata;
  local_38.len_ = param_1->_Mysize;
  bVar3 = EncodeBytesTruncate(1,&local_38,&local_48);
  if (bVar3) {
    local_38.ptr_ = local_28[0].ptr_;
    local_38.len_ = local_28[0].len_;
    EncodeMessageLength((Span<char> *)&local_38,&local_48);
    uVar2 = local_48.len_;
    pcVar1 = local_48.ptr_;
    pSVar4 = LogMessageData::encoded_remaining((this->data_)._Mypair._Myval2);
    pSVar4->ptr_ = pcVar1;
    pSVar4->len_ = uVar2;
    return;
  }
  pSVar4 = LogMessageData::encoded_remaining((this->data_)._Mypair._Myval2);
  pSVar6 = LogMessageData::encoded_remaining((this->data_)._Mypair._Myval2);
  pSVar4->len_ = pSVar4->len_ - pSVar6->len_;
  return;
}

// CopyToEncodedBuffer<0> @ 14f8e3990

/* private: void __cdecl
   absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(char,unsigned __int64)
   __ptr64 */

void __thiscall
absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
          (LogMessage *this,char param_1,__uint64 param_2)

{
  char *pcVar1;
  ulong64 uVar2;
  Span<char> *pSVar3;
  __uint64 _Var4;
  Span<char> *pSVar5;
  Span<char> local_58;
  Span<char> local_48;
  Span<char> local_38;
  Span<char> local_28 [2];
  
  pSVar3 = LogMessageData::encoded_remaining((this->data_)._Mypair._Myval2);
  local_58.ptr_ = pSVar3->ptr_;
  local_58.len_ = pSVar3->len_;
  _Var4 = VarintSize(0x1ffffffffffffff);
  EncodeMessageStart(local_28,7,param_2 + (_Var4 + 1) * 2,&local_58);
  EncodeMessageStart(&local_48,6,param_2,&local_58);
  if (local_48.ptr_ != (char *)0x0) {
    if (local_58.len_ < param_2) {
      param_2 = local_58.len_;
    }
    memset(local_58.ptr_,(int)param_1,param_2);
    local_58.ptr_ = local_58.ptr_ + param_2;
    local_58.len_ = local_58.len_ - param_2;
    local_38.ptr_ = local_48.ptr_;
    local_38.len_ = local_48.len_;
    EncodeMessageLength(&local_38,&local_58);
    local_38.ptr_ = local_28[0].ptr_;
    local_38.len_ = local_28[0].len_;
    EncodeMessageLength(&local_38,&local_58);
    uVar2 = local_58.len_;
    pcVar1 = local_58.ptr_;
    pSVar3 = LogMessageData::encoded_remaining((this->data_)._Mypair._Myval2);
    pSVar3->ptr_ = pcVar1;
    pSVar3->len_ = uVar2;
    return;
  }
  pSVar3 = LogMessageData::encoded_remaining((this->data_)._Mypair._Myval2);
  pSVar5 = LogMessageData::encoded_remaining((this->data_)._Mypair._Myval2);
  pSVar3->len_ = pSVar3->len_ - pSVar5->len_;
  return;
}

// CopyToEncodedBuffer<0> @ 14f8e3ac0

/* private: void __cdecl absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

void __thiscall
absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>
          (LogMessage *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  ulong64 uVar2;
  bool bVar3;
  Span<char> *pSVar4;
  __uint64 _Var5;
  Span<char> *pSVar6;
  Span<char> local_48;
  Span<char_const_> local_38;
  Span<char> local_28 [2];
  
  pSVar4 = LogMessageData::encoded_remaining((this->data_)._Mypair._Myval2);
  local_48.ptr_ = pSVar4->ptr_;
  local_48.len_ = pSVar4->len_;
  _Var5 = VarintSize(0x1ffffffffffffff);
  EncodeMessageStart(local_28,7,param_1->_Mysize + _Var5 * 2 + 2,&local_48);
  local_38.ptr_ = param_1->_Mydata;
  local_38.len_ = param_1->_Mysize;
  bVar3 = EncodeBytesTruncate(6,&local_38,&local_48);
  if (bVar3) {
    local_38.ptr_ = local_28[0].ptr_;
    local_38.len_ = local_28[0].len_;
    EncodeMessageLength((Span<char> *)&local_38,&local_48);
    uVar2 = local_48.len_;
    pcVar1 = local_48.ptr_;
    pSVar4 = LogMessageData::encoded_remaining((this->data_)._Mypair._Myval2);
    pSVar4->ptr_ = pcVar1;
    pSVar4->len_ = uVar2;
    return;
  }
  pSVar4 = LogMessageData::encoded_remaining((this->data_)._Mypair._Myval2);
  pSVar6 = LogMessageData::encoded_remaining((this->data_)._Mypair._Myval2);
  pSVar4->len_ = pSVar4->len_ - pSVar6->len_;
  return;
}

// EmplaceBack<absl::lts_20240722::LogSink*___ptr64_const&___ptr64> @ 14f8e3ba0

/* public: class absl::lts_20240722::LogSink * __ptr64 & __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<class absl::lts_20240722::LogSink *
   __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::EmplaceBack<class
   absl::lts_20240722::LogSink * __ptr64 const & __ptr64>(class absl::lts_20240722::LogSink *
   __ptr64 const & __ptr64) __ptr64 */

LogSink ** __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::EmplaceBack<absl::lts_20240722::LogSink*___ptr64_const&___ptr64>
          (Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *this,LogSink **param_1)

{
  ulonglong uVar1;
  LogSink **ppLVar2;
  Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
  *local_28;
  ulonglong local_18;
  
  local_28 = this + 8;
  uVar1 = *(ulonglong *)this;
  if (((byte)*this & 1) == 0) {
    local_18 = 0x10;
  }
  else {
    local_28 = *(Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                 **)local_28;
    local_18 = *(ulonglong *)(this + 0x10);
  }
  if (uVar1 >> 1 != local_18) {
    *(LogSink **)(local_28 + (uVar1 >> 1) * 8) = *param_1;
    *(longlong *)this = *(longlong *)this + 2;
    return (LogSink **)(local_28 + (uVar1 >> 1) * 8);
  }
  ppLVar2 = EmplaceBackSlow<absl::lts_20240722::LogSink*___ptr64_const&___ptr64>(this,param_1);
  return ppLVar2;
}

// EmplaceBackSlow<absl::lts_20240722::LogSink*___ptr64_const&___ptr64> @ 14f8e3c30

/* private: class absl::lts_20240722::LogSink * __ptr64 & __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<class absl::lts_20240722::LogSink *
   __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink * __ptr64>
   >::EmplaceBackSlow<class absl::lts_20240722::LogSink * __ptr64 const & __ptr64>(class
   absl::lts_20240722::LogSink * __ptr64 const & __ptr64) __ptr64 */

LogSink ** __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::EmplaceBackSlow<absl::lts_20240722::LogSink*___ptr64_const&___ptr64>
          (Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *this,LogSink **param_1)

{
  Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
  *pSVar1;
  ulonglong uVar2;
  void *pvVar3;
  LogSink **ppLVar4;
  void *pvVar5;
  ulonglong uVar6;
  Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
  *local_res8;
  Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
  *local_48;
  longlong local_38;
  
  pSVar1 = this + 8;
  uVar2 = *(ulonglong *)this;
  if (((byte)*this & 1) == 0) {
    local_38 = 0x10;
    local_48 = pSVar1;
  }
  else {
    local_38 = *(longlong *)(this + 0x10);
    local_48 = *(Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                 **)pSVar1;
  }
  local_res8 = local_48;
  if (0x1fffffffffffffff < (ulonglong)(local_38 * 2)) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_bad_array_new_length();
  }
  ppLVar4 = std::_Allocate<16,std::_Default_allocate_traits,0>(local_38 << 4);
  ppLVar4[uVar2 >> 1] = *param_1;
  ConstructElements<std::allocator<absl::lts_20240722::LogSink*___ptr64>,absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64>_>_>
            ((allocator<absl::lts_20240722::LogSink*___ptr64> *)this,ppLVar4,
             (IteratorValueAdapter<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64>_>
              *)&local_res8,uVar2 >> 1);
  if (((byte)*this & 1) != 0) {
    pvVar3 = *(void **)pSVar1;
    uVar6 = *(longlong *)(this + 0x10) * 8;
    pvVar5 = pvVar3;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      pvVar5 = *(void **)((longlong)pvVar3 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar5))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar5,uVar6);
  }
  *(LogSink ***)pSVar1 = ppLVar4;
  *(longlong *)(this + 0x10) = local_38 * 2;
  *(ulonglong *)this = (*(ulonglong *)this | 1) + 2;
  return ppLVar4 + (uVar2 >> 1);
}

// GetData<absl::lts_20240722::Span<char>_const_> @ 14f8e3d90

/* char * __ptr64 __cdecl absl::lts_20240722::span_internal::GetData<class
   absl::lts_20240722::Span<char> const >(class absl::lts_20240722::Span<char> const & __ptr64) */

char * __cdecl
absl::lts_20240722::span_internal::GetData<absl::lts_20240722::Span<char>_const_>
          (Span<char> *param_1)

{
  return param_1->ptr_;
}

// GetData<std::basic_string_view<char,std::char_traits<char>_>_const_> @ 14f8e3da0

/* char const * __ptr64 __cdecl absl::lts_20240722::span_internal::GetData<class
   std::basic_string_view<char,struct std::char_traits<char> > const >(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64) */

char * __cdecl
absl::lts_20240722::span_internal::
GetData<std::basic_string_view<char,std::char_traits<char>_>_const_>
          (basic_string_view<char,std::char_traits<char>_> *param_1)

{
  return param_1->_Mydata;
}

// GetData<absl::lts_20240722::InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>_> @ 14f8e3db0

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::span_internal::GetData<class absl::lts_20240722::InlinedVector<class
   absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> > >(class absl::lts_20240722::InlinedVector<class absl::lts_20240722::LogSink *
   __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink * __ptr64> > & __ptr64) */

LogSink ** __cdecl
absl::lts_20240722::span_internal::
GetData<absl::lts_20240722::InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>_>
          (InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *param_1)

{
  LogSink *pLVar1;
  
  pLVar1 = (LogSink *)(param_1 + 8);
  if (((byte)*param_1 & 1) != 0) {
    pLVar1 = *(LogSink **)pLVar1;
  }
  return (LogSink **)pLVar1;
}

// GetData<absl::lts_20240722::Span<char>_> @ 14f8e3dd0

/* char * __ptr64 __cdecl absl::lts_20240722::span_internal::GetData<class
   absl::lts_20240722::Span<char> >(class absl::lts_20240722::Span<char> & __ptr64) */

char * __cdecl
absl::lts_20240722::span_internal::GetData<absl::lts_20240722::Span<char>_>(Span<char> *param_1)

{
  return param_1->ptr_;
}

// GetData<std::array<char,15000>_> @ 14f8e3de0

/* char * __ptr64 __cdecl absl::lts_20240722::span_internal::GetData<class std::array<char,15000>
   >(class std::array<char,15000> & __ptr64) */

char * __cdecl
absl::lts_20240722::span_internal::GetData<std::array<char,15000>_>(array<char,15000> *param_1)

{
  return (char *)param_1;
}

// GetDataImpl<absl::lts_20240722::Span<char>_const_> @ 14f8e3df0

/* char * __ptr64 __cdecl absl::lts_20240722::span_internal::GetDataImpl<class
   absl::lts_20240722::Span<char> const >(class absl::lts_20240722::Span<char> const & __ptr64,char)
    */

char * __cdecl
absl::lts_20240722::span_internal::GetDataImpl<absl::lts_20240722::Span<char>_const_>
          (Span<char> *param_1,char param_2)

{
  return param_1->ptr_;
}

// GetDataImpl<std::basic_string_view<char,std::char_traits<char>_>_const_> @ 14f8e3e00

/* char const * __ptr64 __cdecl absl::lts_20240722::span_internal::GetDataImpl<class
   std::basic_string_view<char,struct std::char_traits<char> > const >(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,char) */

char * __cdecl
absl::lts_20240722::span_internal::
GetDataImpl<std::basic_string_view<char,std::char_traits<char>_>_const_>
          (basic_string_view<char,std::char_traits<char>_> *param_1,char param_2)

{
  return param_1->_Mydata;
}

// GetDataImpl<absl::lts_20240722::InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>_> @ 14f8e3e10

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::span_internal::GetDataImpl<class absl::lts_20240722::InlinedVector<class
   absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> > >(class absl::lts_20240722::InlinedVector<class absl::lts_20240722::LogSink *
   __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink * __ptr64> > & __ptr64,char) */

LogSink ** __cdecl
absl::lts_20240722::span_internal::
GetDataImpl<absl::lts_20240722::InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>_>
          (InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *param_1,char param_2)

{
  LogSink *pLVar1;
  
  pLVar1 = (LogSink *)(param_1 + 8);
  if (((byte)*param_1 & 1) != 0) {
    pLVar1 = *(LogSink **)pLVar1;
  }
  return (LogSink **)pLVar1;
}

// GetDataImpl<absl::lts_20240722::Span<char>_> @ 14f8e3e30

/* char * __ptr64 __cdecl absl::lts_20240722::span_internal::GetDataImpl<class
   absl::lts_20240722::Span<char> >(class absl::lts_20240722::Span<char> & __ptr64,char) */

char * __cdecl
absl::lts_20240722::span_internal::GetDataImpl<absl::lts_20240722::Span<char>_>
          (Span<char> *param_1,char param_2)

{
  return param_1->ptr_;
}

// GetDataImpl<std::array<char,15000>_> @ 14f8e3e40

/* char * __ptr64 __cdecl absl::lts_20240722::span_internal::GetDataImpl<class
   std::array<char,15000> >(class std::array<char,15000> & __ptr64,char) */

char * __cdecl
absl::lts_20240722::span_internal::GetDataImpl<std::array<char,15000>_>
          (array<char,15000> *param_1,char param_2)

{
  return (char *)param_1;
}

// MakeSpan<char> @ 14f8e3e50

/* class absl::lts_20240722::Span<char> __cdecl absl::lts_20240722::MakeSpan<char>(char *
   __ptr64,unsigned __int64) */

Span<char> * __cdecl
absl::lts_20240722::MakeSpan<char>
          (Span<char> *__return_storage_ptr__,char *param_1,__uint64 param_2)

{
  __return_storage_ptr__->ptr_ = param_1;
  __return_storage_ptr__->len_ = param_2;
  return __return_storage_ptr__;
}

// MakeSpan<absl::lts_20240722::LogSink*___ptr64> @ 14f8e3e70

/* class absl::lts_20240722::Span<class absl::lts_20240722::LogSink * __ptr64> __cdecl
   absl::lts_20240722::MakeSpan<class absl::lts_20240722::LogSink * __ptr64>(class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64,unsigned __int64) */

LogSink ** __cdecl
absl::lts_20240722::MakeSpan<absl::lts_20240722::LogSink*___ptr64>
          (LogSink **param_1,__uint64 param_2)

{
  LogSink *in_R8;
  
  *param_1 = (LogSink *)param_2;
  param_1[1] = in_R8;
  return param_1;
}

// MakeSpan<absl::lts_20240722::InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>_> @ 14f8e3e90

/* class absl::lts_20240722::Span<class absl::lts_20240722::LogSink * __ptr64> __cdecl
   absl::lts_20240722::MakeSpan<class absl::lts_20240722::InlinedVector<class
   absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> > >(class absl::lts_20240722::InlinedVector<class absl::lts_20240722::LogSink *
   __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink * __ptr64> > & __ptr64) */

InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
* __cdecl absl::lts_20240722::
          MakeSpan<absl::lts_20240722::InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>_>
                    (InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                     *param_1)

{
  ulonglong uVar1;
  ulonglong *in_RDX;
  ulonglong *puVar2;
  
  uVar1 = *in_RDX;
  puVar2 = in_RDX + 1;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulonglong *)*puVar2;
  }
  *(ulonglong **)param_1 = puVar2;
  *(ulonglong *)(param_1 + 8) = uVar1 >> 1;
  return param_1;
}

// MakeSpan<std::array<char,15000>_> @ 14f8e3ec0

/* class absl::lts_20240722::Span<char> __cdecl absl::lts_20240722::MakeSpan<class
   std::array<char,15000> >(class std::array<char,15000> & __ptr64) */

Span<char> * __cdecl
absl::lts_20240722::MakeSpan<std::array<char,15000>_>
          (Span<char> *__return_storage_ptr__,array<char,15000> *param_1)

{
  __return_storage_ptr__->ptr_ = (char *)param_1;
  __return_storage_ptr__->len_ = 15000;
  return __return_storage_ptr__;
}

// _Convert_size<unsigned___int64,unsigned___int64> @ 14f8e3ee0

/* unsigned __int64 __cdecl std::_Convert_size<unsigned __int64,unsigned __int64>(unsigned __int64)
    */

__uint64 __cdecl std::_Convert_size<unsigned___int64,unsigned___int64>(__uint64 param_1)

{
  return param_1;
}

// _Get_size_of_n<8> @ 14f8e3ef0

/* unsigned __int64 __cdecl std::_Get_size_of_n<8>(unsigned __int64) */

__uint64 __cdecl std::_Get_size_of_n<8>(__uint64 param_1)

{
  if (param_1 < 0x2000000000000000) {
    return param_1 * 8;
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Traits_find_last_of<std::char_traits<char>,1> @ 14f8e3f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* unsigned __int64 __cdecl std::_Traits_find_last_of<struct std::char_traits<char>,1>(char const *
   __ptr64 const,unsigned __int64,unsigned __int64,char const * __ptr64 const,unsigned __int64) */

__uint64 __cdecl
std::_Traits_find_last_of<std::char_traits<char>,1>
          (char *param_1,__uint64 param_2,__uint64 param_3,char *param_4,__uint64 param_5)

{
  byte *pbVar1;
  char cVar2;
  byte *pbVar3;
  __uint64 _Var4;
  undefined1 auStack_148 [32];
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  if ((param_5 == 0) || (param_2 == 0)) {
LAB_14f8e3fc3:
    _Var4 = 0xffffffffffffffff;
  }
  else {
    memset(local_128,0,0x100);
    pbVar3 = (byte *)(param_4 + param_5);
    for (; (byte *)param_4 != pbVar3; param_4 = param_4 + 1) {
      local_128[(byte)*param_4] = '\x01';
    }
    if (param_2 - 1 < param_3) {
      param_3 = param_2 - 1;
    }
    pbVar3 = (byte *)(param_1 + param_3);
    cVar2 = local_128[*pbVar3];
    while (cVar2 == '\0') {
      if (pbVar3 == (byte *)param_1) goto LAB_14f8e3fc3;
      pbVar1 = pbVar3 + -1;
      pbVar3 = pbVar3 + -1;
      cVar2 = local_128[*pbVar1];
    }
    _Var4 = (longlong)pbVar3 - (longlong)param_1;
  }
  return _Var4;
}

// _Traits_find_last_of<std::char_traits<char>,0> @ 14f8e4000

/* unsigned __int64 __cdecl std::_Traits_find_last_of<struct std::char_traits<char>,0>(char const *
   __ptr64 const,unsigned __int64,unsigned __int64,char const * __ptr64 const,unsigned __int64) */

__uint64 __cdecl
std::_Traits_find_last_of<std::char_traits<char>,0>
          (char *param_1,__uint64 param_2,__uint64 param_3,char *param_4,__uint64 param_5)

{
  char *pcVar1;
  void *pvVar2;
  char *pcVar3;
  __uint64 _Var4;
  
  if ((param_5 == 0) || (param_2 == 0)) {
LAB_14f8e4074:
    _Var4 = 0xffffffffffffffff;
  }
  else {
    if (param_2 - 1 < param_3) {
      param_3 = param_2 - 1;
    }
    pcVar3 = param_1 + param_3;
    pvVar2 = memchr(param_4,(int)*pcVar3,param_5);
    while (pvVar2 == (void *)0x0) {
      if (pcVar3 == param_1) goto LAB_14f8e4074;
      pcVar1 = pcVar3 + -1;
      pcVar3 = pcVar3 + -1;
      pvVar2 = memchr(param_4,(int)*pcVar1,param_5);
    }
    _Var4 = (longlong)pcVar3 - (longlong)param_1;
  }
  return _Var4;
}

// construct<absl::lts_20240722::LogSink*___ptr64,absl::lts_20240722::LogSink*___ptr64_const&___ptr64> @ 14f8e40a0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >::construct<class absl::lts_20240722::LogSink *
   __ptr64,class absl::lts_20240722::LogSink * __ptr64 const & __ptr64>(class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> & __ptr64,class absl::lts_20240722::LogSink * __ptr64 *
   __ptr64 const,class absl::lts_20240722::LogSink * __ptr64 const & __ptr64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
construct<absl::lts_20240722::LogSink*___ptr64,absl::lts_20240722::LogSink*___ptr64_const&___ptr64>
          (allocator<absl::lts_20240722::LogSink*___ptr64> *param_1,LogSink **param_2,
          LogSink **param_3)

{
  *param_2 = *param_3;
  return;
}

// construct<absl::lts_20240722::LogSink*___ptr64,absl::lts_20240722::LogSink*___ptr64> @ 14f8e40b0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >::construct<class absl::lts_20240722::LogSink *
   __ptr64,class absl::lts_20240722::LogSink * __ptr64>(class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> & __ptr64,class absl::lts_20240722::LogSink * __ptr64 *
   __ptr64 const,class absl::lts_20240722::LogSink * __ptr64 && __ptr64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
construct<absl::lts_20240722::LogSink*___ptr64,absl::lts_20240722::LogSink*___ptr64>
          (allocator<absl::lts_20240722::LogSink*___ptr64> *param_1,LogSink **param_2,
          LogSink **param_3)

{
  *param_2 = *param_3;
  return;
}

// construct_at<absl::lts_20240722::LogSink*___ptr64,absl::lts_20240722::LogSink*___ptr64_const&___ptr64,0> @ 14f8e40c0

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl std::construct_at<class
   absl::lts_20240722::LogSink * __ptr64,class absl::lts_20240722::LogSink * __ptr64 const &
   __ptr64,0>(class absl::lts_20240722::LogSink * __ptr64 * __ptr64 const,class
   absl::lts_20240722::LogSink * __ptr64 const & __ptr64) */

LogSink ** __cdecl
std::
construct_at<absl::lts_20240722::LogSink*___ptr64,absl::lts_20240722::LogSink*___ptr64_const&___ptr64,0>
          (LogSink **param_1,LogSink **param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// construct_at<absl::lts_20240722::LogSink*___ptr64,absl::lts_20240722::LogSink*___ptr64,0> @ 14f8e40d0

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl std::construct_at<class
   absl::lts_20240722::LogSink * __ptr64,class absl::lts_20240722::LogSink * __ptr64,0>(class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64 const,class absl::lts_20240722::LogSink * __ptr64
   && __ptr64) */

LogSink ** __cdecl
std::construct_at<absl::lts_20240722::LogSink*___ptr64,absl::lts_20240722::LogSink*___ptr64,0>
          (LogSink **param_1,LogSink **param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// destroy<absl::lts_20240722::LogSink*___ptr64> @ 14f8e40e0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >::destroy<class absl::lts_20240722::LogSink *
   __ptr64>(class std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64,class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64 const) */

void __cdecl
std::_Default_allocator_traits<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
destroy<absl::lts_20240722::LogSink*___ptr64>
          (allocator<absl::lts_20240722::LogSink*___ptr64> *param_1,LogSink **param_2)

{
  return;
}

// destroy_at<absl::lts_20240722::LogSink*___ptr64> @ 14f8e40f0

/* void __cdecl std::destroy_at<class absl::lts_20240722::LogSink * __ptr64>(class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64 const) */

void __cdecl std::destroy_at<absl::lts_20240722::LogSink*___ptr64>(LogSink **param_1)

{
  return;
}

// emplace_back<absl::lts_20240722::LogSink*___ptr64_const&___ptr64> @ 14f8e4100

/* public: class absl::lts_20240722::LogSink * __ptr64 & __ptr64 __cdecl
   absl::lts_20240722::InlinedVector<class absl::lts_20240722::LogSink * __ptr64,16,class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::emplace_back<class
   absl::lts_20240722::LogSink * __ptr64 const & __ptr64>(class absl::lts_20240722::LogSink *
   __ptr64 const & __ptr64) __ptr64 */

LogSink ** __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::emplace_back<absl::lts_20240722::LogSink*___ptr64_const&___ptr64>
          (InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *this,LogSink **param_1)

{
  InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
  *pIVar1;
  InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
  *pIVar2;
  InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
  **ppIVar3;
  LogSink **ppLVar4;
  InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
  *local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
  *local_20;
  ulonglong local_18;
  InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
  *local_10;
  
  if (((byte)*this & 1) == 0) {
    local_20 = this + 8;
    ppIVar3 = &local_20;
    local_18 = *(ulonglong *)this >> 1;
    local_10 = (InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                *)0x10;
  }
  else {
    local_38 = *(InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                 **)(this + 8);
    local_28 = *(undefined8 *)(this + 0x10);
    ppIVar3 = &local_38;
    uStack_30 = *(ulonglong *)this >> 1;
  }
  pIVar1 = *ppIVar3;
  pIVar2 = ppIVar3[1];
  local_10 = ppIVar3[2];
  if (pIVar2 != local_10) {
    *(LogSink **)(pIVar1 + (longlong)pIVar2 * 8) = *param_1;
    *(longlong *)this = *(longlong *)this + 2;
    return (LogSink **)(pIVar1 + (longlong)pIVar2 * 8);
  }
  ppLVar4 = inlined_vector_internal::
            Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
            ::EmplaceBackSlow<absl::lts_20240722::LogSink*___ptr64_const&___ptr64>
                      ((Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                        *)this,param_1);
  return ppLVar4;
}

// forward<std::nullptr_t> @ 14f8e41a0

/* std::nullptr_t && __ptr64 __cdecl std::forward<std::nullptr_t>(std::nullptr_t & __ptr64) */

std__nullptr_t * __cdecl std::forward<std::nullptr_t>(std__nullptr_t *param_1)

{
  return param_1;
}

// forward<int&___ptr64> @ 14f8e41b0

/* int & __ptr64 __cdecl std::forward<int & __ptr64>(int & __ptr64) */

int * __cdecl std::forward<int&___ptr64>(int *param_1)

{
  return param_1;
}

// forward<absl::lts_20240722::log_internal::LogMessage::LogMessageData*___ptr64&___ptr64> @ 14f8e41c0

/* struct absl::lts_20240722::log_internal::LogMessage::LogMessageData * __ptr64 & __ptr64 __cdecl
   std::forward<struct absl::lts_20240722::log_internal::LogMessage::LogMessageData * __ptr64 &
   __ptr64>(struct absl::lts_20240722::log_internal::LogMessage::LogMessageData * __ptr64 & __ptr64)
    */

LogMessageData ** __cdecl
std::forward<absl::lts_20240722::log_internal::LogMessage::LogMessageData*___ptr64&___ptr64>
          (LogMessageData **param_1)

{
  return param_1;
}

// forward<char_const*___ptr64&___ptr64> @ 14f8e41d0

/* char const * __ptr64 & __ptr64 __cdecl std::forward<char const * __ptr64 & __ptr64>(char const *
   __ptr64 & __ptr64) */

char ** __cdecl std::forward<char_const*___ptr64&___ptr64>(char **param_1)

{
  return param_1;
}

// forward<std::allocator<absl::lts_20240722::LogSink*___ptr64>&___ptr64> @ 14f8e41e0

/* class std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64 __cdecl
   std::forward<class std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64>(class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64) */

allocator<absl::lts_20240722::LogSink*___ptr64> * __cdecl
std::forward<std::allocator<absl::lts_20240722::LogSink*___ptr64>&___ptr64>
          (allocator<class_absl::lts_20240722::LogSink*___ptr64> *param_1)

{
  return (allocator<absl::lts_20240722::LogSink*___ptr64> *)param_1;
}

// forward<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64> @ 14f8e41f0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __ptr64
   __cdecl std::forward<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > & __ptr64>(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
std::forward<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1;
}

// forward<absl::lts_20240722::LogSeverity&___ptr64> @ 14f8e4200

/* enum absl::lts_20240722::LogSeverity & __ptr64 __cdecl std::forward<enum
   absl::lts_20240722::LogSeverity & __ptr64>(enum absl::lts_20240722::LogSeverity & __ptr64) */

LogSeverity * __cdecl std::forward<absl::lts_20240722::LogSeverity&___ptr64>(LogSeverity *param_1)

{
  return param_1;
}

// forward<absl::lts_20240722::LogSink*___ptr64_const&___ptr64> @ 14f8e4210

/* class absl::lts_20240722::LogSink * __ptr64 const & __ptr64 __cdecl std::forward<class
   absl::lts_20240722::LogSink * __ptr64 const & __ptr64>(class absl::lts_20240722::LogSink *
   __ptr64 const & __ptr64) */

LogSink ** __cdecl
std::forward<absl::lts_20240722::LogSink*___ptr64_const&___ptr64>(LogSink **param_1)

{
  return param_1;
}

// forward<char_const*___ptr64_const&___ptr64> @ 14f8e4220

/* char const * __ptr64 const & __ptr64 __cdecl std::forward<char const * __ptr64 const &
   __ptr64>(char const * __ptr64 const & __ptr64) */

char ** __cdecl std::forward<char_const*___ptr64_const&___ptr64>(char **param_1)

{
  return param_1;
}

// forward<int> @ 14f8e4230

/* int && __ptr64 __cdecl std::forward<int>(int & __ptr64) */

int * __cdecl std::forward<int>(int *param_1)

{
  return param_1;
}

// forward<unsigned_int> @ 14f8e4240

/* unsigned int && __ptr64 __cdecl std::forward<unsigned int>(unsigned int & __ptr64) */

uint * __cdecl std::forward<unsigned_int>(uint *param_1)

{
  return param_1;
}

// forward<absl::lts_20240722::LogSink*___ptr64> @ 14f8e4250

/* class absl::lts_20240722::LogSink * __ptr64 && __ptr64 __cdecl std::forward<class
   absl::lts_20240722::LogSink * __ptr64>(class absl::lts_20240722::LogSink * __ptr64 & __ptr64) */

LogSink ** __cdecl std::forward<absl::lts_20240722::LogSink*___ptr64>(LogSink **param_1)

{
  return param_1;
}

// forward<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> @ 14f8e4260

/* class std::allocator<class absl::lts_20240722::LogSink * __ptr64> && __ptr64 __cdecl
   std::forward<class std::allocator<class absl::lts_20240722::LogSink * __ptr64> >(class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64) */

allocator<absl::lts_20240722::LogSink*___ptr64> * __cdecl
std::forward<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
          (allocator<class_absl::lts_20240722::LogSink*___ptr64> *param_1)

{
  return (allocator<absl::lts_20240722::LogSink*___ptr64> *)param_1;
}

// forward<absl::lts_20240722::Time> @ 14f8e4270

/* class absl::lts_20240722::Time && __ptr64 __cdecl std::forward<class
   absl::lts_20240722::Time>(class absl::lts_20240722::Time & __ptr64) */

Time * __cdecl std::forward<absl::lts_20240722::Time>(Time *param_1)

{
  return param_1;
}

// forward<absl::lts_20240722::LogSeverity> @ 14f8e4280

/* enum absl::lts_20240722::LogSeverity && __ptr64 __cdecl std::forward<enum
   absl::lts_20240722::LogSeverity>(enum absl::lts_20240722::LogSeverity & __ptr64) */

LogSeverity * __cdecl std::forward<absl::lts_20240722::LogSeverity>(LogSeverity *param_1)

{
  return param_1;
}

// get<1> @ 14f8e4290

/* public: class absl::lts_20240722::LogSink * __ptr64 * __ptr64 & __ptr64 __cdecl
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64>,class absl::lts_20240722::LogSink * __ptr64 *
   __ptr64>::get<1>(void) __ptr64&  */

LogSink *** __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,absl::lts_20240722::LogSink*___ptr64*___ptr64>
::get<1>(CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,absl::lts_20240722::LogSink*___ptr64*___ptr64>
         *this)

{
  return (LogSink ***)this;
}

// get<1> @ 14f8e42a0

/* public: unsigned __int64 & __ptr64 __cdecl
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64>,unsigned __int64>::get<1>(void) __ptr64&  */

__uint64 * __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned___int64>::get<1>
          (CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned___int64>
           *this)

{
  return (__uint64 *)this;
}

// get<1> @ 14f8e42b0

/* public: unsigned __int64 const & __ptr64 __cdecl
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64>,unsigned __int64>::get<1>(void)const __ptr64&  */

__uint64 * __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned___int64>::get<1>
          (CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned___int64>
           *this)

{
  return (__uint64 *)this;
}

// get<0> @ 14f8e42c0

/* public: class std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64 __cdecl
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64>,class absl::lts_20240722::LogSink * __ptr64 *
   __ptr64>::get<0>(void) __ptr64&  */

allocator<absl::lts_20240722::LogSink*___ptr64> * __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,absl::lts_20240722::LogSink*___ptr64*___ptr64>
::get<0>(CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,absl::lts_20240722::LogSink*___ptr64*___ptr64>
         *this)

{
  return (allocator<absl::lts_20240722::LogSink*___ptr64> *)this;
}

// get<0> @ 14f8e42d0

/* public: class std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64 __cdecl
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64>,unsigned __int64>::get<0>(void) __ptr64&  */

allocator<absl::lts_20240722::LogSink*___ptr64> * __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned___int64>::get<0>
          (CompressedTuple<std::allocator<absl::lts_20240722::LogSink*___ptr64>,unsigned___int64>
           *this)

{
  return (allocator<absl::lts_20240722::LogSink*___ptr64> *)this;
}

// make_unique<absl::lts_20240722::log_internal::LogMessage::LogMessageData,char_const*___ptr64&___ptr64,int&___ptr64,absl::lts_20240722::LogSeverity&___ptr64,absl::lts_20240722::Time,0> @ 14f8e42e0

/* class std::unique_ptr<struct absl::lts_20240722::log_internal::LogMessage::LogMessageData,struct
   std::default_delete<struct absl::lts_20240722::log_internal::LogMessage::LogMessageData> >
   __cdecl std::make_unique<struct absl::lts_20240722::log_internal::LogMessage::LogMessageData,char
   const * __ptr64 & __ptr64,int & __ptr64,enum absl::lts_20240722::LogSeverity & __ptr64,class
   absl::lts_20240722::Time,0>(char const * __ptr64 & __ptr64,int & __ptr64,enum
   absl::lts_20240722::LogSeverity & __ptr64,class absl::lts_20240722::Time && __ptr64) */

unique_ptr<absl::lts_20240722::log_internal::LogMessage::LogMessageData,std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>_>
 __cdecl std::
         make_unique<absl::lts_20240722::log_internal::LogMessage::LogMessageData,char_const*___ptr64&___ptr64,int&___ptr64,absl::lts_20240722::LogSeverity&___ptr64,absl::lts_20240722::Time,0>
                   (char **param_1,int *param_2,LogSeverity *param_3,Time *param_4)

{
  longlong lVar1;
  LogSeverity LVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *in_stack_00000028;
  longlong local_58;
  longlong lStack_50;
  undefined1 local_48 [32];
  
  plVar9 = (longlong *)0x0;
  plVar7 = ::operator_new(0x76d0);
  if (plVar7 != (longlong *)0x0) {
    lVar1 = *in_stack_00000028;
    lVar4 = in_stack_00000028[1];
    uVar6 = (param_4->rep_).rep_hi_.lo_;
    LVar2 = *param_3;
    lVar3 = *(longlong *)param_2;
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[6] = 0;
    *(undefined4 *)(plVar7 + 7) = 0;
    plVar7[8] = 0;
    plVar7[9] = 0;
    plVar7[0xb] = 0;
    plVar7[0xc] = 0;
    plVar7[0xd] = 0;
    plVar7[0xe] = 0;
    plVar7[0xf] = 0;
    plVar7[0x10] = 0xf;
    *(undefined1 *)(plVar7 + 0xd) = 0;
    plVar7[0x12] = 0;
    *(undefined1 *)(plVar7 + 0x23) = 0;
    std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)(plVar7 + 0x24),
               (basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
    plVar7[0x785] = 0;
    plVar7[0x786] = 0;
    std::ios_base::setf((ios_base *)
                        ((longlong)*(int *)(plVar7[0x24] + 4) + 0x120 + (longlong)plVar7),0x4008);
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (*(char *)(lVar3 + lVar8) != '\0');
    *plVar7 = lVar3;
    plVar7[1] = lVar8;
    lStack_50 = -1;
    do {
      lStack_50 = lStack_50 + 1;
    } while (*(char *)(lVar3 + lStack_50) != '\0');
    local_58 = lVar3;
    plVar9 = (longlong *)FUN_14f8e5680(local_48,&local_58);
    lVar3 = plVar9[1];
    plVar7[2] = *plVar9;
    plVar7[3] = lVar3;
    *(LogSeverity *)(plVar7 + 4) = LVar2;
    bVar5 = absl::lts_20240722::ShouldPrependLogPrefix();
    *(bool *)((longlong)plVar7 + 0x24) = bVar5;
    uVar10 = 0;
    if (-1 < (int)uVar6) {
      uVar10 = uVar6;
    }
    if (3 < (int)uVar10) {
      uVar10 = 2;
    }
    *(uint *)(plVar7 + 5) = uVar10;
    *(undefined4 *)((longlong)plVar7 + 0x2c) = 0xffffffff;
    plVar7[6] = lVar1;
    *(int *)(plVar7 + 7) = (int)lVar4;
    uVar6 = absl::lts_20240722::base_internal::GetCachedTID();
    *(uint *)((longlong)plVar7 + 0x3c) = uVar6;
    plVar9 = plVar7;
  }
  *param_1 = (char *)plVar9;
  return (unique_ptr<absl::lts_20240722::log_internal::LogMessage::LogMessageData,std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>_>
          )(_Compressed_pair<std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>,absl::lts_20240722::log_internal::LogMessage::LogMessageData_*,1>
            )param_1;
}

// max<int> @ 14f8e44c0

/* int const & __ptr64 __cdecl std::max<int>(int const & __ptr64,int const & __ptr64) */

int * __cdecl std::max<int>(int *param_1,int *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// move<absl::lts_20240722::LogSink*___ptr64*___ptr64&___ptr64> @ 14f8e44e0

/* class absl::lts_20240722::LogSink * __ptr64 * __ptr64 && __ptr64 __cdecl std::move<class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64 & __ptr64>(class absl::lts_20240722::LogSink *
   __ptr64 * __ptr64 & __ptr64) */

LogSink *** __cdecl
std::move<absl::lts_20240722::LogSink*___ptr64*___ptr64&___ptr64>(LogSink ***param_1)

{
  return param_1;
}

// move<absl::lts_20240722::LogSink*___ptr64&___ptr64> @ 14f8e44f0

/* class absl::lts_20240722::LogSink * __ptr64 && __ptr64 __cdecl std::move<class
   absl::lts_20240722::LogSink * __ptr64 & __ptr64>(class absl::lts_20240722::LogSink * __ptr64 &
   __ptr64) */

LogSink ** __cdecl std::move<absl::lts_20240722::LogSink*___ptr64&___ptr64>(LogSink **param_1)

{
  return param_1;
}

// move<absl::lts_20240722::inlined_vector_internal::AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>&___ptr64> @ 14f8e4500

/* class absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> > && __ptr64 __cdecl std::move<class
   absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> > & __ptr64>(class
   absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> > & __ptr64) */

AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> * __cdecl
std::
move<absl::lts_20240722::inlined_vector_internal::AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>&___ptr64>
          (AllocationTransaction<class_std::allocator<class_absl::lts_20240722::LogSink*___ptr64>_>
           *param_1)

{
  return (AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> *)param_1;
}

// AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> @ 14f8e4510

/* public: __cdecl absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::AllocationTransaction<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >(class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> & __ptr64) __ptr64 */

AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> * __thiscall
absl::lts_20240722::inlined_vector_internal::
AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
          (AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> *this,
          allocator<absl::lts_20240722::LogSink*___ptr64> *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_> @ 14f8e4530

/* public: __cdecl absl::lts_20240722::InlinedVector<class absl::lts_20240722::LogSink *
   __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink * __ptr64>
   >::InlinedVector<class absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >(void) __ptr64 */

InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
* __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::
InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
          (InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *this)

{
  *(undefined8 *)this = 0;
  return this;
}

// IteratorValueAdapter<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64>_> @ 14f8e4550

/* public: __cdecl absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64>,class std::move_iterator<class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64> >::IteratorValueAdapter<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64>,class std::move_iterator<class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64> >(class std::move_iterator<class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64> const & __ptr64) __ptr64 */

IteratorValueAdapter<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64>_>
* __thiscall
absl::lts_20240722::inlined_vector_internal::
IteratorValueAdapter<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64>_>
::
IteratorValueAdapter<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64>_>
          (IteratorValueAdapter<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64>_>
           *this,move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64> *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  return this;
}

// Span<char_const_> @ 14f8e4560

/* public: __cdecl absl::lts_20240722::Span<char const >::Span<char const >(char const *
   __ptr64,unsigned __int64) __ptr64 */

Span<char_const_> * __thiscall
absl::lts_20240722::Span<char_const_>::Span<char_const_>
          (Span<char_const_> *this,char *param_1,__uint64 param_2)

{
  this->ptr_ = param_1;
  this->len_ = param_2;
  return this;
}

// Span<char_const_> @ 14f8e4580

/* public: __cdecl absl::lts_20240722::Span<char const >::Span<char const >(void) __ptr64 */

Span<char_const_> * __thiscall
absl::lts_20240722::Span<char_const_>::Span<char_const_>(Span<char_const_> *this)

{
  this->ptr_ = (char *)0x0;
  this->len_ = 0;
  return this;
}

// Span<char> @ 14f8e45a0

/* public: __cdecl absl::lts_20240722::Span<char>::Span<char>(char * __ptr64,unsigned __int64)
   __ptr64 */

Span<char> * __thiscall
absl::lts_20240722::Span<char>::Span<char>(Span<char> *this,char *param_1,__uint64 param_2)

{
  this->ptr_ = param_1;
  this->len_ = param_2;
  return this;
}

// Span<char> @ 14f8e45c0

/* public: __cdecl absl::lts_20240722::Span<char>::Span<char>(void) __ptr64 */

Span<char> * __thiscall absl::lts_20240722::Span<char>::Span<char>(Span<char> *this)

{
  this->ptr_ = (char *)0x0;
  this->len_ = 0;
  return this;
}

// Span<absl::lts_20240722::LogSink*___ptr64> @ 14f8e45e0

/* public: __cdecl absl::lts_20240722::Span<class absl::lts_20240722::LogSink * __ptr64>::Span<class
   absl::lts_20240722::LogSink * __ptr64>(class absl::lts_20240722::LogSink * __ptr64 *
   __ptr64,unsigned __int64) __ptr64 */

Span<absl::lts_20240722::LogSink*___ptr64> * __thiscall
absl::lts_20240722::Span<absl::lts_20240722::LogSink*___ptr64>::
Span<absl::lts_20240722::LogSink*___ptr64>
          (Span<absl::lts_20240722::LogSink*___ptr64> *this,LogSink **param_1,__uint64 param_2)

{
  *(LogSink ***)this = param_1;
  *(__uint64 *)(this + 8) = param_2;
  return this;
}

// Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_> @ 14f8e4600

/* public: __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::Storage<class absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >(void) __ptr64 */

Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
* __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
          (Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *this)

{
  *(undefined8 *)this = 0;
  return this;
}

// _String_bitmap<char,1> @ 14f8e4620

/* public: __cdecl std::_String_bitmap<char,1>::_String_bitmap<char,1>(void) __ptr64 */

_String_bitmap<char,1> * __thiscall
std::_String_bitmap<char,1>::_String_bitmap<char,1>(_String_bitmap<char,1> *this)

{
  memset(this,0,0x100);
  return this;
}

// allocator<absl::lts_20240722::LogSink*___ptr64> @ 14f8e4650

/* public: __cdecl std::allocator<class absl::lts_20240722::LogSink * __ptr64>::allocator<class
   absl::lts_20240722::LogSink * __ptr64>(void) __ptr64 */

allocator<absl::lts_20240722::LogSink*___ptr64> * __thiscall
std::allocator<absl::lts_20240722::LogSink*___ptr64>::
allocator<absl::lts_20240722::LogSink*___ptr64>
          (allocator<absl::lts_20240722::LogSink*___ptr64> *this)

{
  return this;
}

// basic_string_view<char,std::char_traits<char>_> @ 14f8e4660

/* public: __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::basic_string_view<char,struct std::char_traits<char> >(char const * __ptr64 const,unsigned
   __int64) __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
std::basic_string_view<char,std::char_traits<char>_>::
basic_string_view<char,std::char_traits<char>_>
          (basic_string_view<char,std::char_traits<char>_> *this,char *param_1,__uint64 param_2)

{
  this->_Mydata = param_1;
  this->_Mysize = param_2;
  return this;
}

// move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64> @ 14f8e4680

/* public: __cdecl std::move_iterator<class absl::lts_20240722::LogSink * __ptr64 *
   __ptr64>::move_iterator<class absl::lts_20240722::LogSink * __ptr64 * __ptr64>(class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64) __ptr64 */

move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64> * __thiscall
std::move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64>::
move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64>
          (move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64> *this,LogSink **param_1)

{
  *(LogSink ***)this = param_1;
  return this;
}

// Duration @ 14f8e4690

/* public: __cdecl absl::lts_20240722::Duration::Duration(void) __ptr64 */

Duration * __thiscall absl::lts_20240722::Duration::Duration(Duration *this)

{
  (this->rep_hi_).lo_ = 0;
  (this->rep_hi_).hi_ = 0;
  this->rep_lo_ = 0;
  return this;
}

// ErrnoSaver @ 14f8e46b0

/* public: __cdecl absl::lts_20240722::base_internal::ErrnoSaver::ErrnoSaver(void) __ptr64 */

ErrnoSaver * __thiscall absl::lts_20240722::base_internal::ErrnoSaver::ErrnoSaver(ErrnoSaver *this)

{
  int *piVar1;
  
  piVar1 = _errno();
  this->saved_errno_ = *piVar1;
  return this;
}

// HiRep @ 14f8e46e0

/* public: __cdecl absl::lts_20240722::Duration::HiRep::HiRep(__int64) __ptr64 */

HiRep * __thiscall absl::lts_20240722::Duration::HiRep::HiRep(HiRep *this,__int64 param_1)

{
  this->lo_ = (int)param_1;
  this->hi_ = (int)((ulonglong)param_1 >> 0x20);
  return this;
}

// LogEntry @ 14f8e4700

/* private: __cdecl absl::lts_20240722::LogEntry::LogEntry(void) __ptr64 */

LogEntry * __thiscall absl::lts_20240722::LogEntry::LogEntry(LogEntry *this)

{
  (this->full_filename_)._Mydata = (char *)0x0;
  (this->full_filename_)._Mysize = 0;
  (this->base_filename_)._Mydata = (char *)0x0;
  (this->base_filename_)._Mysize = 0;
  (this->timestamp_).rep_.rep_hi_.lo_ = 0;
  (this->timestamp_).rep_.rep_hi_.hi_ = 0;
  (this->timestamp_).rep_.rep_lo_ = 0;
  (this->text_message_with_prefix_and_newline_and_nul_).ptr_ = (char *)0x0;
  (this->text_message_with_prefix_and_newline_and_nul_).len_ = 0;
  (this->encoding_)._Mydata = (char *)0x0;
  (this->encoding_)._Mysize = 0;
  (this->stacktrace_)._Mypair._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(this->stacktrace_)._Mypair._Myval2._Bx + 8) = 0;
  (this->stacktrace_)._Mypair._Myval2._Mysize = 0;
  (this->stacktrace_)._Mypair._Myval2._Myres = 0xf;
  (this->stacktrace_)._Mypair._Myval2._Bx._Buf[0] = '\0';
  return this;
}

// LogMessage @ 14f8e4750

/* public: __cdecl absl::lts_20240722::log_internal::LogMessage::LogMessage(char const *
   __ptr64,int,struct absl::lts_20240722::log_internal::LogMessage::ErrorTag) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::LogMessage
          (LogMessage *this,char *param_1,int param_2,ErrorTag param_3)

{
  LogMessage(this,param_1,param_2,kError);
  return this;
}

// LogMessage @ 14f8e4780

/* public: __cdecl absl::lts_20240722::log_internal::LogMessage::LogMessage(char const *
   __ptr64,int,struct absl::lts_20240722::log_internal::LogMessage::InfoTag) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::LogMessage
          (LogMessage *this,char *param_1,int param_2,InfoTag param_3)

{
  LogMessage(this,param_1,param_2,kInfo);
  return this;
}

// LogMessage @ 14f8e47a0

/* public: __cdecl absl::lts_20240722::log_internal::LogMessage::LogMessage(char const *
   __ptr64,int,struct absl::lts_20240722::log_internal::LogMessage::WarningTag) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::LogMessage
          (LogMessage *this,char *param_1,int param_2,WarningTag param_3)

{
  LogMessage(this,param_1,param_2,kWarning);
  return this;
}

// LogMessage @ 14f8e47d0

/* public: __cdecl absl::lts_20240722::log_internal::LogMessage::LogMessage(char const *
   __ptr64,int,enum absl::lts_20240722::LogSeverity) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::LogMessage
          (LogMessage *this,char *param_1,int param_2,LogSeverity param_3)

{
  int *piVar1;
  char *local_res10;
  LogSeverity local_res18 [2];
  LogSeverity local_res20;
  Time local_28 [2];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  local_res20 = param_3;
  piVar1 = _errno();
  (this->errno_saver_).saved_errno_ = *piVar1;
  Now(local_28);
  std::
  make_unique<absl::lts_20240722::log_internal::LogMessage::LogMessageData,char_const*___ptr64&___ptr64,int&___ptr64,absl::lts_20240722::LogSeverity&___ptr64,absl::lts_20240722::Time,0>
            ((char **)&this->data_,(int *)&local_res10,local_res18,(Time *)&local_res20);
  (this->data_)._Mypair._Myval2[0x88] = (LogMessageData)0x0;
  (this->data_)._Mypair._Myval2[0x8a] = (LogMessageData)0x0;
  (this->data_)._Mypair._Myval2[0x89] = (LogMessageData)0x0;
  LogBacktraceIfNeeded(this);
  return this;
}

// LogMessageData @ 14f8e4860

/* public: __cdecl absl::lts_20240722::log_internal::LogMessage::LogMessageData::LogMessageData(char
   const * __ptr64,int,enum absl::lts_20240722::LogSeverity,class absl::lts_20240722::Time) __ptr64
    */

LogMessageData * __thiscall
absl::lts_20240722::log_internal::LogMessage::LogMessageData::LogMessageData
          (LogMessageData *this,char *param_1,int param_2,LogSeverity param_3,Time *param_4)

{
  undefined8 uVar1;
  LogMessageData LVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  LogSeverity LVar6;
  char *local_38;
  longlong lStack_30;
  undefined1 local_28 [16];
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0xf;
  this[0x68] = (LogMessageData)0x0;
  *(undefined8 *)(this + 0x90) = 0;
  this[0x118] = (LogMessageData)0x0;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(this + 0x120),
             (basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
  *(undefined8 *)(this + 0x3c28) = 0;
  *(undefined8 *)(this + 0x3c30) = 0;
  std::ios_base::setf((ios_base *)
                      (this + (longlong)*(int *)(*(longlong *)(this + 0x120) + 4) + 0x120),0x4008);
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (param_1[lVar4] != '\0');
  *(char **)this = param_1;
  *(longlong *)(this + 8) = lVar4;
  lStack_30 = -1;
  do {
    lStack_30 = lStack_30 + 1;
  } while (param_1[lStack_30] != '\0');
  local_38 = param_1;
  puVar5 = (undefined8 *)FUN_14f8e5680(local_28,&local_38);
  uVar1 = puVar5[1];
  *(undefined8 *)(this + 0x10) = *puVar5;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(int *)(this + 0x20) = param_2;
  LVar2 = (LogMessageData)ShouldPrependLogPrefix();
  this[0x24] = LVar2;
  LVar6 = kInfo;
  if (-1 < (int)param_3) {
    LVar6 = param_3;
  }
  if (3 < (int)LVar6) {
    LVar6 = kError;
  }
  *(LogSeverity *)(this + 0x28) = LVar6;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  *(HiRep *)(this + 0x30) = (param_4->rep_).rep_hi_;
  *(uint *)(this + 0x38) = (param_4->rep_).rep_lo_;
  uVar3 = base_internal::GetCachedTID();
  *(uint *)(this + 0x3c) = uVar3;
  return this;
}

// LogMessageDebugFatal @ 14f8e49e0

/* public: __cdecl absl::lts_20240722::log_internal::LogMessageDebugFatal::LogMessageDebugFatal(char
   const * __ptr64,int) __ptr64 */

LogMessageDebugFatal * __thiscall
absl::lts_20240722::log_internal::LogMessageDebugFatal::LogMessageDebugFatal
          (LogMessageDebugFatal *this,char *param_1,int param_2)

{
  LogMessage::LogMessage((LogMessage *)this,param_1,param_2,kFatal);
  return this;
}

// LogMessageFatal @ 14f8e4a10

/* public: __cdecl absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal(char const *
   __ptr64,int) __ptr64 */

LogMessageFatal * __thiscall
absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
          (LogMessageFatal *this,char *param_1,int param_2)

{
  LogMessage::LogMessage((LogMessage *)this,param_1,param_2,kFatal);
  return this;
}

// LogMessageFatal @ 14f8e4a40

/* public: __cdecl absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal(char const *
   __ptr64,int,class std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

LogMessageFatal * __thiscall
absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
          (LogMessageFatal *this,char *param_1,int param_2,
          basic_string_view<char,std::char_traits<char>_> *param_3)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  LogMessage::LogMessage((LogMessage *)this,param_1,param_2,kFatal);
  local_18._Mydata = "Check failed: ";
  local_18._Mysize = 0xe;
  LogMessage::CopyToEncodedBuffer<0>((LogMessage *)this,&local_18);
  local_18._Mydata = param_3->_Mydata;
  local_18._Mysize = param_3->_Mysize;
  LogMessage::CopyToEncodedBuffer<1>((LogMessage *)this,&local_18);
  local_18._Mydata = " ";
  local_18._Mysize = 1;
  LogMessage::CopyToEncodedBuffer<0>((LogMessage *)this,&local_18);
  return this;
}

// LogMessageQuietlyDebugFatal @ 14f8e4af0

/* public: __cdecl
   absl::lts_20240722::log_internal::LogMessageQuietlyDebugFatal::LogMessageQuietlyDebugFatal(char
   const * __ptr64,int) __ptr64 */

LogMessageQuietlyDebugFatal * __thiscall
absl::lts_20240722::log_internal::LogMessageQuietlyDebugFatal::LogMessageQuietlyDebugFatal
          (LogMessageQuietlyDebugFatal *this,char *param_1,int param_2)

{
  LogMessage::LogMessage((LogMessage *)this,param_1,param_2,kFatal);
  *(undefined1 *)(*(longlong *)(this + 8) + 0x89) = 1;
  return this;
}

// LogMessageQuietlyFatal @ 14f8e4b20

/* public: __cdecl
   absl::lts_20240722::log_internal::LogMessageQuietlyFatal::LogMessageQuietlyFatal(char const *
   __ptr64,int) __ptr64 */

LogMessageQuietlyFatal * __thiscall
absl::lts_20240722::log_internal::LogMessageQuietlyFatal::LogMessageQuietlyFatal
          (LogMessageQuietlyFatal *this,char *param_1,int param_2)

{
  LogMessage::LogMessage((LogMessage *)this,param_1,param_2,kFatal);
  *(undefined1 *)(*(longlong *)(this + 8) + 0x89) = 1;
  return this;
}

// LogMessageQuietlyFatal @ 14f8e4b50

/* public: __cdecl
   absl::lts_20240722::log_internal::LogMessageQuietlyFatal::LogMessageQuietlyFatal(char const *
   __ptr64,int,class std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

LogMessageQuietlyFatal * __thiscall
absl::lts_20240722::log_internal::LogMessageQuietlyFatal::LogMessageQuietlyFatal
          (LogMessageQuietlyFatal *this,char *param_1,int param_2,
          basic_string_view<char,std::char_traits<char>_> *param_3)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  LogMessage::LogMessage((LogMessage *)this,param_1,param_2,kFatal);
  *(undefined1 *)(*(longlong *)(this + 8) + 0x89) = 1;
  local_18._Mydata = "Check failed: ";
  local_18._Mysize = 0xe;
  LogMessage::CopyToEncodedBuffer<0>((LogMessage *)this,&local_18);
  local_18._Mydata = param_3->_Mydata;
  local_18._Mysize = param_3->_Mysize;
  LogMessage::CopyToEncodedBuffer<1>((LogMessage *)this,&local_18);
  local_18._Mydata = " ";
  local_18._Mysize = 1;
  LogMessage::CopyToEncodedBuffer<0>((LogMessage *)this,&local_18);
  return this;
}

// OstreamView @ 14f8e4c00

/* public: __cdecl absl::lts_20240722::log_internal::LogMessage::OstreamView::OstreamView(struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData & __ptr64) __ptr64 */

OstreamView * __thiscall
absl::lts_20240722::log_internal::LogMessage::OstreamView::OstreamView
          (OstreamView *this,LogMessageData *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  Span<char> *pSVar3;
  Span<char> local_18;
  
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)this);
  this->_padding_ = (longlong)vftable;
  this->data_ = param_1;
  pSVar3 = LogMessageData::encoded_remaining(param_1);
  uVar1 = pSVar3->len_;
  (this->encoded_remaining_copy_).ptr_ = pSVar3->ptr_;
  (this->encoded_remaining_copy_).len_ = uVar1;
  (this->message_start_).ptr_ = (char *)0x0;
  (this->message_start_).len_ = 0;
  (this->string_start_).ptr_ = (char *)0x0;
  (this->string_start_).len_ = 0;
  pSVar3 = EncodeMessageStart(&local_18,7,(this->encoded_remaining_copy_).len_,
                              &this->encoded_remaining_copy_);
  uVar1 = pSVar3->len_;
  (this->message_start_).ptr_ = pSVar3->ptr_;
  (this->message_start_).len_ = uVar1;
  pSVar3 = EncodeMessageStart(&local_18,1,(this->encoded_remaining_copy_).len_,
                              &this->encoded_remaining_copy_);
  uVar1 = pSVar3->len_;
  (this->string_start_).ptr_ = pSVar3->ptr_;
  (this->string_start_).len_ = uVar1;
  pcVar2 = (this->encoded_remaining_copy_).ptr_;
  std::basic_streambuf<char,std::char_traits<char>_>::setp
            ((basic_streambuf<char,std::char_traits<char>_> *)this,pcVar2,
             pcVar2 + (this->encoded_remaining_copy_).len_);
  std::basic_ios<char,std::char_traits<char>_>::rdbuf
            ((basic_ios<char,std::char_traits<char>_> *)
             (this->data_ + (longlong)*(int *)(*(longlong *)(this->data_ + 0x120) + 4) + 0x120),
             (basic_streambuf<char,struct_std::char_traits<char>_> *)this);
  return this;
}

// ProtoField @ 14f8e4d00

/* public: __cdecl absl::lts_20240722::log_internal::ProtoField::ProtoField(void) __ptr64 */

ProtoField * __thiscall absl::lts_20240722::log_internal::ProtoField::ProtoField(ProtoField *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  return this;
}

// Time @ 14f8e4d20

/* public: __cdecl absl::lts_20240722::Time::Time(void) __ptr64 */

Time * __thiscall absl::lts_20240722::Time::Time(Time *this)

{
  (this->rep_).rep_hi_.lo_ = 0;
  (this->rep_).rep_hi_.hi_ = 0;
  (this->rep_).rep_lo_ = 0;
  return this;
}

// _Fake_proxy_ptr_impl @ 14f8e4d40

/* public: __cdecl std::_Fake_proxy_ptr_impl::_Fake_proxy_ptr_impl(struct std::_Fake_allocator const
   & __ptr64,struct std::_Container_base0 const & __ptr64) __ptr64 */

_Fake_proxy_ptr_impl * __thiscall
std::_Fake_proxy_ptr_impl::_Fake_proxy_ptr_impl
          (_Fake_proxy_ptr_impl *this,_Fake_allocator *param_1,_Container_base0 *param_2)

{
  return this;
}

// ~AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> @ 14f8e4d50

/* public: __cdecl absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::~AllocationTransaction<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >(void) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::
~AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
          (AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> *this)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  uVar3 = *(longlong *)(this + 8) * 8;
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
  return;
}

// ~InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_> @ 14f8e4db0

/* public: __cdecl absl::lts_20240722::InlinedVector<class absl::lts_20240722::LogSink *
   __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink * __ptr64>
   >::~InlinedVector<class absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >(void) __ptr64 */

void __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::
~InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
          (InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *this)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  if (*(longlong *)this == 0) {
    return;
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  pvVar1 = *(void **)(this + 8);
  uVar3 = *(longlong *)(this + 0x10) * 8;
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
  return;
}

// ~Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_> @ 14f8e4dd0

/* public: __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::~Storage<class absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >(void) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::
~Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
          (Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *this)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  if (*(longlong *)this == 0) {
    return;
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  pvVar1 = *(void **)(this + 8);
  uVar3 = *(longlong *)(this + 0x10) * 8;
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
  return;
}

// ~unique_ptr<absl::lts_20240722::log_internal::LogMessage::LogMessageData,std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>_> @ 14f8e4df0

/* public: __cdecl std::unique_ptr<struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData,struct std::default_delete<struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData> >::~unique_ptr<struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData,struct std::default_delete<struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData> >(void) __ptr64 */

void __thiscall
std::
unique_ptr<absl::lts_20240722::log_internal::LogMessage::LogMessageData,std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>_>
::
~unique_ptr<absl::lts_20240722::log_internal::LogMessage::LogMessageData,std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>_>
          (unique_ptr<absl::lts_20240722::log_internal::LogMessage::LogMessageData,std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>_>
           *this)

{
  ulong64 *this_00;
  LogEntry *this_01;
  
  this_01 = (LogEntry *)(this->_Mypair)._Myval2;
  if (this_01 != (LogEntry *)0x0) {
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_
              ((basic_ostream<char,std::char_traits<char>_> *)&this_01[2].base_filename_);
    this_00 = &this_01[1].full_filename_._Mysize;
    if (*this_00 != 0) {
      absl::lts_20240722::inlined_vector_internal::
      Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
      ::DeallocateIfAllocated
                ((Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                  *)this_00);
    }
    absl::lts_20240722::LogEntry::~LogEntry(this_01);
    ::operator_delete(this_01,0x76d0);
    return;
  }
  return;
}

// ~ErrnoSaver @ 14f8e4e50

/* public: __cdecl absl::lts_20240722::base_internal::ErrnoSaver::~ErrnoSaver(void) __ptr64 */

void __thiscall absl::lts_20240722::base_internal::ErrnoSaver::~ErrnoSaver(ErrnoSaver *this)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = this->saved_errno_;
  piVar2 = _errno();
  *piVar2 = iVar1;
  return;
}

// ~LogEntry @ 14f8e4e70

/* public: __cdecl absl::lts_20240722::LogEntry::~LogEntry(void) __ptr64 */

void __thiscall absl::lts_20240722::LogEntry::~LogEntry(LogEntry *this)

{
  ulonglong uVar1;
  char *pcVar2;
  char *pcVar3;
  ulong64 uVar4;
  
  uVar1 = (this->stacktrace_)._Mypair._Myval2._Myres;
  if (0xf < uVar1) {
    pcVar2 = (this->stacktrace_)._Mypair._Myval2._Bx._Ptr;
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
  (this->stacktrace_)._Mypair._Myval2._Mysize = 0;
  (this->stacktrace_)._Mypair._Myval2._Myres = 0xf;
  (this->stacktrace_)._Mypair._Myval2._Bx._Buf[0] = '\0';
  return;
}

// ~LogMessage @ 14f8e4ee0

/* public: __cdecl absl::lts_20240722::log_internal::LogMessage::~LogMessage(void) __ptr64 */

void __thiscall absl::lts_20240722::log_internal::LogMessage::~LogMessage(LogMessage *this)

{
  ulong64 *this_00;
  int iVar1;
  LogEntry *this_01;
  int *piVar2;
  
  Flush(this);
  this_01 = (LogEntry *)(this->data_)._Mypair._Myval2;
  if (this_01 != (LogEntry *)0x0) {
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_
              ((basic_ostream<char,std::char_traits<char>_> *)&this_01[2].base_filename_);
    this_00 = &this_01[1].full_filename_._Mysize;
    if (*this_00 != 0) {
      inlined_vector_internal::
      Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
      ::DeallocateIfAllocated
                ((Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                  *)this_00);
    }
    LogEntry::~LogEntry(this_01);
    ::operator_delete(this_01,0x76d0);
  }
  iVar1 = (this->errno_saver_).saved_errno_;
  piVar2 = _errno();
  *piVar2 = iVar1;
  return;
}

// ~LogMessageData @ 14f8e4f50

/* public: __cdecl
   absl::lts_20240722::log_internal::LogMessage::LogMessageData::~LogMessageData(void) __ptr64 */

void __thiscall
absl::lts_20240722::log_internal::LogMessage::LogMessageData::~LogMessageData(LogMessageData *this)

{
  std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_
            ((basic_ostream<char,std::char_traits<char>_> *)(this + 0x120));
  if (*(longlong *)(this + 0x90) != 0) {
    inlined_vector_internal::
    Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
    ::DeallocateIfAllocated
              ((Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                *)(this + 0x90));
  }
  LogEntry::~LogEntry((LogEntry *)this);
  return;
}

// ~LogMessageDebugFatal @ 14f8e4f90

/* public: __cdecl
   absl::lts_20240722::log_internal::LogMessageDebugFatal::~LogMessageDebugFatal(void) __ptr64 */

void __thiscall
absl::lts_20240722::log_internal::LogMessageDebugFatal::~LogMessageDebugFatal
          (LogMessageDebugFatal *this)

{
  LogMessage::Flush((LogMessage *)this);
                    /* WARNING: Subroutine does not return */
  LogMessage::FailWithoutStackTrace();
}

// ~LogMessageFatal @ 14f8e4fb0

/* public: __cdecl absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(void) __ptr64
    */

void __thiscall
absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(LogMessageFatal *this)

{
  LogMessage::Flush((LogMessage *)this);
                    /* WARNING: Subroutine does not return */
  LogMessage::FailWithoutStackTrace();
}

// ~LogMessageQuietlyDebugFatal @ 14f8e4fd0

/* public: __cdecl
   absl::lts_20240722::log_internal::LogMessageQuietlyDebugFatal::~LogMessageQuietlyDebugFatal(void)
   __ptr64 */

void __thiscall
absl::lts_20240722::log_internal::LogMessageQuietlyDebugFatal::~LogMessageQuietlyDebugFatal
          (LogMessageQuietlyDebugFatal *this)

{
  LogMessage::Flush((LogMessage *)this);
                    /* WARNING: Subroutine does not return */
  LogMessage::FailQuietly();
}

// ~LogMessageQuietlyFatal @ 14f8e4ff0

/* public: __cdecl
   absl::lts_20240722::log_internal::LogMessageQuietlyFatal::~LogMessageQuietlyFatal(void) __ptr64
    */

void __thiscall
absl::lts_20240722::log_internal::LogMessageQuietlyFatal::~LogMessageQuietlyFatal
          (LogMessageQuietlyFatal *this)

{
  LogMessage::Flush((LogMessage *)this);
                    /* WARNING: Subroutine does not return */
  LogMessage::FailQuietly();
}

// ~OstreamView @ 14f8e5010

/* public: virtual __cdecl
   absl::lts_20240722::log_internal::LogMessage::OstreamView::~OstreamView(void) __ptr64 */

void __thiscall
absl::lts_20240722::log_internal::LogMessage::OstreamView::~OstreamView(OstreamView *this)

{
  ulong64 *puVar1;
  Span<char> *pSVar2;
  Span<char> *pSVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  Span<char> local_18;
  
  this->_padding_ = (longlong)vftable;
  std::basic_ios<char,std::char_traits<char>_>::rdbuf
            ((basic_ios<char,std::char_traits<char>_> *)
             (this->data_ + (longlong)*(int *)(*(longlong *)(this->data_ + 0x120) + 4) + 0x120),
             (basic_streambuf<char,struct_std::char_traits<char>_> *)0x0);
  if ((this->string_start_).ptr_ == (char *)0x0) {
    pSVar2 = LogMessageData::encoded_remaining(this->data_);
    pSVar3 = LogMessageData::encoded_remaining(this->data_);
    pSVar2->len_ = pSVar2->len_ - pSVar3->len_;
  }
  else {
    pcVar4 = std::basic_streambuf<char,std::char_traits<char>_>::pbase
                       ((basic_streambuf<char,std::char_traits<char>_> *)this);
    pcVar5 = std::basic_streambuf<char,std::char_traits<char>_>::pptr
                       ((basic_streambuf<char,std::char_traits<char>_> *)this);
    std::basic_streambuf<char,std::char_traits<char>_>::pbase
              ((basic_streambuf<char,std::char_traits<char>_> *)this);
    lVar6 = (longlong)pcVar5 - (longlong)pcVar4;
    if (lVar6 != 0) {
      (this->encoded_remaining_copy_).ptr_ = (this->encoded_remaining_copy_).ptr_ + lVar6;
      puVar1 = &(this->encoded_remaining_copy_).len_;
      *puVar1 = *puVar1 - lVar6;
      local_18.ptr_ = (this->string_start_).ptr_;
      local_18.len_ = (this->string_start_).len_;
      EncodeMessageLength(&local_18,&this->encoded_remaining_copy_);
      local_18.ptr_ = (this->message_start_).ptr_;
      local_18.len_ = (this->message_start_).len_;
      EncodeMessageLength(&local_18,&this->encoded_remaining_copy_);
      local_18.ptr_ = (this->encoded_remaining_copy_).ptr_;
      local_18.len_ = (this->encoded_remaining_copy_).len_;
      pSVar2 = LogMessageData::encoded_remaining(this->data_);
      pSVar2->ptr_ = local_18.ptr_;
      pSVar2->len_ = local_18.len_;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014f8e5104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)this);
  return;
}

// operator= @ 14f8e5120

/* public: class absl::lts_20240722::Duration::HiRep & __ptr64 __cdecl
   absl::lts_20240722::Duration::HiRep::operator=(__int64) __ptr64 */

HiRep * __thiscall absl::lts_20240722::Duration::HiRep::operator=(HiRep *this,__int64 param_1)

{
  this->lo_ = (int)param_1;
  this->hi_ = (int)((ulonglong)param_1 >> 0x20);
  return this;
}

// operator<< @ 14f8e5140

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<
          (LogMessage *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1
          )

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = (char *)param_1;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    local_18._Mydata = (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  local_18._Mysize = (param_1->_Mypair)._Myval2._Mysize;
  CopyToEncodedBuffer<1>(this,&local_18);
  return this;
}

// operator<< @ 14f8e5190

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<(int) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<(LogMessage *this,int param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<< @ 14f8e51f0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<(class std::basic_ostream<char,struct
   std::char_traits<char> > & __ptr64 (__cdecl*)(class std::basic_ostream<char,struct
   std::char_traits<char> > & __ptr64)) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<
          (LogMessage *this,
          _func_basic_ostream<char,std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
          *param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)((this->data_)._Mypair._Myval2 + 0x120),
             (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
              *)param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<< @ 14f8e5250

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<(class std::ios_base & __ptr64
   (__cdecl*)(class std::ios_base & __ptr64)) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<
          (LogMessage *this,_func_ios_base_ptr_ios_base_ptr *param_1)

{
  OstreamView local_a8;
  
  OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)((this->data_)._Mypair._Myval2 + 0x120),
             param_1);
  OstreamView::~OstreamView(&local_a8);
  return this;
}

// operator<< @ 14f8e52b0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::operator<<(class std::basic_string_view<char,struct
   std::char_traits<char> >) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::operator<<
          (LogMessage *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  CopyToEncodedBuffer<1>(this,&local_18);
  return this;
}

// operator[] @ 14f8e52e0

/* public: char & __ptr64 __cdecl std::array<char,15000>::operator[](unsigned __int64) __ptr64 */

char * __thiscall std::array<char,15000>::operator[](array<char,15000> *this,__uint64 param_1)

{
  return (char *)(this + param_1);
}

// operator_class_std::basic_string_view<char,struct_std::char_traits<char>_> @ 14f8e52f0

/* public: __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::operator class std::basic_string_view<char,struct std::char_traits<char> >(void)const __ptr64
    */

basic_string_view<char,std::char_traits<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
operator_class_std__basic_string_view<char,struct_std::char_traits<char>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,
          basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  pbVar1 = this;
  if (0xf < (this->_Mypair)._Myval2._Myres) {
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (this->_Mypair)._Myval2._Bx._Ptr;
  }
  __return_storage_ptr__->_Mydata = (char *)pbVar1;
  __return_storage_ptr__->_Mysize = (this->_Mypair)._Myval2._Mysize;
  return __return_storage_ptr__;
}

// operator-> @ 14f8e5320

/* public: struct absl::lts_20240722::log_internal::LogMessage::LogMessageData * __ptr64 __cdecl
   std::unique_ptr<struct absl::lts_20240722::log_internal::LogMessage::LogMessageData,struct
   std::default_delete<struct absl::lts_20240722::log_internal::LogMessage::LogMessageData>
   >::operator->(void)const __ptr64 */

LogMessageData * __thiscall
std::
unique_ptr<absl::lts_20240722::log_internal::LogMessage::LogMessageData,std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>_>
::operator->(unique_ptr<absl::lts_20240722::log_internal::LogMessage::LogMessageData,std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>_>
             *this)

{
  return (this->_Mypair)._Myval2;
}

// operator* @ 14f8e5330

/* public: class absl::lts_20240722::LogSink * __ptr64 && __ptr64 __cdecl std::move_iterator<class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64>::operator*(void)const __ptr64 */

LogSink ** __thiscall
std::move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64>::operator*
          (move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64> *this)

{
  return *(LogSink ***)this;
}

// operator* @ 14f8e5340

/* public: struct absl::lts_20240722::log_internal::LogMessage::LogMessageData & __ptr64 __cdecl
   std::unique_ptr<struct absl::lts_20240722::log_internal::LogMessage::LogMessageData,struct
   std::default_delete<struct absl::lts_20240722::log_internal::LogMessage::LogMessageData>
   >::operator*(void)const __ptr64 */

LogMessageData * __thiscall
std::
unique_ptr<absl::lts_20240722::log_internal::LogMessage::LogMessageData,std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>_>
::operator*(unique_ptr<absl::lts_20240722::log_internal::LogMessage::LogMessageData,std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>_>
            *this)

{
  return (this->_Mypair)._Myval2;
}

// operator++ @ 14f8e5350

/* public: class std::move_iterator<class absl::lts_20240722::LogSink * __ptr64 * __ptr64> & __ptr64
   __cdecl std::move_iterator<class absl::lts_20240722::LogSink * __ptr64 *
   __ptr64>::operator++(void) __ptr64 */

move_iterator<class_absl::lts_20240722::LogSink*___ptr64*___ptr64> * __thiscall
std::move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64>::operator++
          (move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64> *this)

{
  *(longlong *)this = *(longlong *)this + 8;
  return (move_iterator<class_absl::lts_20240722::LogSink*___ptr64*___ptr64> *)this;
}

// operator< @ 14f8e5360

/* bool __cdecl absl::lts_20240722::operator<(enum absl::lts_20240722::LogSeverity,enum
   absl::lts_20240722::LogSeverityAtLeast) */

bool __cdecl absl::lts_20240722::operator<(LogSeverity param_1,LogSeverityAtLeast param_2)

{
  return (int)param_1 < (int)param_2;
}

// operator() @ 14f8e5370

/* public: __cdecl `public: class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > & __ptr64 __cdecl std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >::append(char const * __ptr64 const,unsigned
   __int64) __ptr64'::`2'::<lambda_1>::operator()(char * __ptr64 const,char const * __ptr64
   const,unsigned __int64,char const * __ptr64 const,unsigned __int64)const __ptr64 */

void __thiscall
`public:_class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>&___ptr64___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append(char_const*___ptr64_const,unsigned___int64)___ptr64'
::__l2::<lambda_1>::operator()
          (<lambda_1> *this,char *param_1,char *param_2,__uint64 param_3,char *param_4,
          __uint64 param_5)

{
  memcpy(param_1,param_2,param_3);
  memcpy(param_1 + param_3,param_4,param_5);
  (param_1 + param_3)[param_5] = '\0';
  return;
}

// operator() @ 14f8e53c0

/* public: void __cdecl std::default_delete<struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData>::operator()(struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData * __ptr64)const __ptr64 */

void __thiscall
std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>::operator()
          (default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData> *this,
          LogMessageData *param_1)

{
  if (param_1 != (LogMessageData *)0x0) {
    std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_
              ((basic_ostream<char,std::char_traits<char>_> *)(param_1 + 0x120));
    if (*(longlong *)(param_1 + 0x90) != 0) {
      absl::lts_20240722::inlined_vector_internal::
      Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
      ::DeallocateIfAllocated
                ((Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                  *)(param_1 + 0x90));
    }
    absl::lts_20240722::LogEntry::~LogEntry((LogEntry *)param_1);
    ::operator_delete(param_1,0x76d0);
  }
  return;
}

// operator() @ 14f8e5410

/* public: int __cdecl absl::lts_20240722::base_internal::ErrnoSaver::operator()(void)const __ptr64
    */

int __thiscall absl::lts_20240722::base_internal::ErrnoSaver::operator()(ErrnoSaver *this)

{
  return this->saved_errno_;
}

// `scalar_deleting_destructor' @ 14f8e5420

/* public: void * __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::LogMessageData::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
absl::lts_20240722::log_internal::LogMessage::LogMessageData::_scalar_deleting_destructor_
          (LogMessageData *this,uint param_1)

{
  std::basic_ostream<char,std::char_traits<char>_>::_vbase_destructor_
            ((basic_ostream<char,std::char_traits<char>_> *)(this + 0x120));
  if (*(longlong *)(this + 0x90) != 0) {
    inlined_vector_internal::
    Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
    ::DeallocateIfAllocated
              ((Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                *)(this + 0x90));
  }
  LogEntry::~LogEntry((LogEntry *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x76d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f8e5480

/* public: virtual void * __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::OstreamView::`scalar deleting destructor'(unsigned
   int) __ptr64 */

void * __thiscall
absl::lts_20240722::log_internal::LogMessage::OstreamView::_scalar_deleting_destructor_
          (OstreamView *this,uint param_1)

{
  ~OstreamView(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// AddSize @ 14f8e54c0

/* public: void __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::AddSize(unsigned __int64) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::AddSize(Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
          *this,__uint64 param_1)

{
  *(__uint64 *)this = *(longlong *)this + param_1 * 2;
  return;
}

// Allocate @ 14f8e54d0

/* public: class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >::Allocate(unsigned __int64) __ptr64 */

LogSink ** __thiscall
absl::lts_20240722::inlined_vector_internal::
AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::Allocate
          (AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> *this,
          __uint64 param_1)

{
  LogSink **ppLVar1;
  
  if (param_1 < 0x2000000000000000) {
    ppLVar1 = std::_Allocate<16,std::_Default_allocate_traits,0>(param_1 * 8);
    *(__uint64 *)(this + 8) = param_1;
    *(LogSink ***)this = ppLVar1;
    return ppLVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_bad_array_new_length();
}

// Allocate @ 14f8e5520

/* public: static struct absl::lts_20240722::inlined_vector_internal::Allocation<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> > __cdecl
   absl::lts_20240722::inlined_vector_internal::MallocAdapter<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64>,0>::Allocate(class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> & __ptr64,unsigned __int64) */

allocator<absl::lts_20240722::LogSink*___ptr64> * __cdecl
absl::lts_20240722::inlined_vector_internal::
MallocAdapter<std::allocator<absl::lts_20240722::LogSink*___ptr64>,0>::Allocate
          (allocator<absl::lts_20240722::LogSink*___ptr64> *param_1,__uint64 param_2)

{
  void *pvVar1;
  ulonglong in_R8;
  
  if (in_R8 < 0x2000000000000000) {
    pvVar1 = std::_Allocate<16,std::_Default_allocate_traits,0>(in_R8 * 8);
    *(void **)param_1 = pvVar1;
    *(ulonglong *)(param_1 + 8) = in_R8;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_bad_array_new_length();
}

// AppendTruncated @ 14f8e5570

/* unsigned __int64 __cdecl absl::lts_20240722::log_internal::AppendTruncated(char,unsigned
   __int64,class absl::lts_20240722::Span<char> & __ptr64) */

__uint64 __cdecl
absl::lts_20240722::log_internal::AppendTruncated(char param_1,__uint64 param_2,Span<char> *param_3)

{
  if (param_3->len_ < param_2) {
    param_2 = param_3->len_;
  }
  memset(param_3->ptr_,(int)param_1,param_2);
  param_3->ptr_ = param_3->ptr_ + param_2;
  param_3->len_ = param_3->len_ - param_2;
  return param_2;
}

// AppendTruncated @ 14f8e55c0

/* unsigned __int64 __cdecl absl::lts_20240722::log_internal::AppendTruncated(class
   std::basic_string_view<char,struct std::char_traits<char> >,class absl::lts_20240722::Span<char>
   & __ptr64) */

__uint64 __cdecl
absl::lts_20240722::log_internal::AppendTruncated
          (basic_string_view<char,std::char_traits<char>_> *param_1,Span<char> *param_2)

{
  ulonglong uVar1;
  size_t _Size;
  
  uVar1 = param_2->len_;
  if (uVar1 < param_1->_Mysize) {
    param_1->_Mydata = param_1->_Mydata;
    param_1->_Mysize = uVar1;
  }
  _Size = param_1->_Mysize;
  memcpy(param_2->ptr_,param_1->_Mydata,_Size);
  param_2->ptr_ = param_2->ptr_ + _Size;
  param_2->len_ = param_2->len_ - _Size;
  return _Size;
}

// AtLocation @ 14f8e5620

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::AtLocation(class std::basic_string_view<char,struct
   std::char_traits<char> >,int) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::AtLocation
          (LogMessage *this,basic_string_view<char,std::char_traits<char>_> *param_1,int param_2)

{
  LogMessageData *pLVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  local_28 = *(undefined4 *)&param_1->_Mydata;
  uStack_24 = *(undefined4 *)((longlong)&param_1->_Mydata + 4);
  uStack_20 = (undefined4)param_1->_Mysize;
  uStack_1c = *(undefined4 *)((longlong)&param_1->_Mysize + 4);
  pLVar1 = (this->data_)._Mypair._Myval2;
  *(undefined4 *)pLVar1 = local_28;
  *(undefined4 *)(pLVar1 + 4) = uStack_24;
  *(undefined4 *)(pLVar1 + 8) = uStack_20;
  *(undefined4 *)(pLVar1 + 0xc) = uStack_1c;
  puVar3 = (undefined8 *)FUN_14f8e5680(local_18,&local_28);
  uVar2 = puVar3[1];
  pLVar1 = (this->data_)._Mypair._Myval2;
  *(undefined8 *)(pLVar1 + 0x10) = *puVar3;
  *(undefined8 *)(pLVar1 + 0x18) = uVar2;
  *(int *)((this->data_)._Mypair._Myval2 + 0x20) = param_2;
  LogBacktraceIfNeeded(this);
  return this;
}

// FUN_14f8e5680 @ 14f8e5680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14f8e5680(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined1 auStack_148 [32];
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  lVar4 = param_2[1];
  pbVar5 = (byte *)*param_2;
  if (lVar4 != 0) {
    memset(local_128,0,0x100);
    pbVar6 = &s___;
    do {
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      local_128[bVar2] = '\x01';
    } while (pbVar6 != &DAT_15353207a);
    lVar7 = -1;
    if (lVar4 + -1 != -1) {
      lVar7 = lVar4 + -1;
    }
    pbVar6 = pbVar5 + lVar7;
    cVar3 = local_128[*pbVar6];
    while (cVar3 == '\0') {
      if (pbVar6 == pbVar5) goto LAB_14f8e573e;
      pbVar1 = pbVar6 + -1;
      pbVar6 = pbVar6 + -1;
      cVar3 = local_128[*pbVar1];
    }
    if ((longlong)pbVar6 - (longlong)pbVar5 != -1) {
      lVar7 = ((longlong)pbVar6 - (longlong)pbVar5) + 1;
      *param_2 = (longlong)(pbVar5 + lVar7);
      param_2[1] = lVar4 - lVar7;
    }
  }
LAB_14f8e573e:
  lVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar4;
  return param_1;
}

// BufferSizeFor @ 14f8e5780

/* unsigned __int64 __cdecl absl::lts_20240722::log_internal::BufferSizeFor(void) */

__uint64 __cdecl absl::lts_20240722::log_internal::BufferSizeFor(void)

{
  return 0;
}

// ConstructNext @ 14f8e5790

/* public: void __cdecl absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64>,class std::move_iterator<class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64> >::ConstructNext(class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> & __ptr64,class absl::lts_20240722::LogSink * __ptr64 *
   __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
IteratorValueAdapter<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64>_>
::ConstructNext(IteratorValueAdapter<std::allocator<absl::lts_20240722::LogSink*___ptr64>,std::move_iterator<absl::lts_20240722::LogSink*___ptr64*___ptr64>_>
                *this,allocator<absl::lts_20240722::LogSink*___ptr64> *param_1,LogSink **param_2)

{
  *param_2 = (LogSink *)**(undefined8 **)this;
  *(longlong *)this = *(longlong *)this + 8;
  return;
}

// Deallocate @ 14f8e57b0

/* public: static void __cdecl absl::lts_20240722::inlined_vector_internal::MallocAdapter<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64>,0>::Deallocate(class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64,class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64,unsigned __int64) */

void __cdecl
absl::lts_20240722::inlined_vector_internal::
MallocAdapter<std::allocator<absl::lts_20240722::LogSink*___ptr64>,0>::Deallocate
          (allocator<absl::lts_20240722::LogSink*___ptr64> *param_1,LogSink **param_2,
          __uint64 param_3)

{
  LogSink *pLVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 8;
  pLVar1 = (LogSink *)param_2;
  if (0xfff < uVar2) {
    pLVar1 = param_2[-1];
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)pLVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pLVar1,uVar2);
  return;
}

// DeallocateIfAllocated @ 14f8e5800

/* public: void __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::DeallocateIfAllocated(void) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::DeallocateIfAllocated
          (Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *this)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  if (((byte)*this & 1) == 0) {
    return;
  }
  pvVar1 = *(void **)(this + 8);
  uVar3 = *(longlong *)(this + 0x10) * 8;
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
  return;
}

// DestroyContents @ 14f8e5860

/* private: void __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::DestroyContents(void) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::DestroyContents(Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                  *this)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  if (((byte)*this & 1) == 0) {
    return;
  }
  pvVar1 = *(void **)(this + 8);
  uVar3 = *(longlong *)(this + 0x10) * 8;
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
  return;
}

// DestroyElements @ 14f8e58c0

/* public: static void __cdecl absl::lts_20240722::inlined_vector_internal::DestroyAdapter<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64>,1>::DestroyElements(class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64,class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64,unsigned __int64) */

void __cdecl
absl::lts_20240722::inlined_vector_internal::
DestroyAdapter<std::allocator<absl::lts_20240722::LogSink*___ptr64>,1>::DestroyElements
          (allocator<absl::lts_20240722::LogSink*___ptr64> *param_1,LogSink **param_2,
          __uint64 param_3)

{
  return;
}

// DidAllocate @ 14f8e58d0

/* public: bool __cdecl absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::DidAllocate(void) __ptr64 */

bool __thiscall
absl::lts_20240722::inlined_vector_internal::
AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::DidAllocate
          (AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> *this)

{
  return *(longlong *)this != 0;
}

// Die @ 14f8e58e0

/* private: void __cdecl absl::lts_20240722::log_internal::LogMessage::Die(void) __ptr64 */

void __thiscall absl::lts_20240722::log_internal::LogMessage::Die(LogMessage *this)

{
  FlushLogSinks();
  if ((this->data_)._Mypair._Myval2[0x89] != (LogMessageData)0x0) {
                    /* WARNING: Subroutine does not return */
    FailQuietly();
  }
                    /* WARNING: Subroutine does not return */
  FailWithoutStackTrace();
}

// DoLoad @ 14f8e5910

/* private: void (__cdecl*__cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(enum
   absl::lts_20240722::LogSeverity,char const * __ptr64,int,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64)>::DoLoad(void)const
   __ptr64)(enum absl::lts_20240722::LogSeverity,char const * __ptr64,int,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

_func_void_LogSeverity_char_ptr_int_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
* __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
::DoLoad(AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
         *this)

{
  _func_void_LogSeverity_char_ptr_int_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
  *p_Var1;
  
  p_Var1 = *(_func_void_LogSeverity_char_ptr_int_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
             **)this;
  if (p_Var1 == (_func_void_LogSeverity_char_ptr_int_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
                 *)0x0) {
    p_Var1 = *(_func_void_LogSeverity_char_ptr_int_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
               **)(this + 8);
  }
  return p_Var1;
}

// EncodeStringTruncate @ 14f8e5930

/* bool __cdecl absl::lts_20240722::log_internal::EncodeStringTruncate(unsigned __int64,class
   std::basic_string_view<char,struct std::char_traits<char> >,class absl::lts_20240722::Span<char>
   * __ptr64) */

bool __cdecl
absl::lts_20240722::log_internal::EncodeStringTruncate
          (__uint64 param_1,basic_string_view<char,std::char_traits<char>_> *param_2,
          Span<char> *param_3)

{
  bool bVar1;
  Span<char_const_> local_18;
  
  local_18.ptr_ = param_2->_Mydata;
  local_18.len_ = param_2->_Mysize;
  bVar1 = EncodeBytesTruncate(param_1,&local_18,param_3);
  return bVar1;
}

// EncodeVarint @ 14f8e5970

/* bool __cdecl absl::lts_20240722::log_internal::EncodeVarint(unsigned __int64,int,class
   absl::lts_20240722::Span<char> * __ptr64) */

bool __cdecl
absl::lts_20240722::log_internal::EncodeVarint(__uint64 param_1,int param_2,Span<char> *param_3)

{
  bool bVar1;
  
  bVar1 = EncodeVarint(param_1,(longlong)param_2,param_3);
  return bVar1;
}

// EncodeVarint @ 14f8e5980

/* bool __cdecl absl::lts_20240722::log_internal::EncodeVarint(unsigned __int64,unsigned int,class
   absl::lts_20240722::Span<char> * __ptr64) */

bool __cdecl
absl::lts_20240722::log_internal::EncodeVarint(__uint64 param_1,uint param_2,Span<char> *param_3)

{
  bool bVar1;
  
  bVar1 = EncodeVarint(param_1,(ulonglong)param_2,param_3);
  return bVar1;
}

// EncodeVarint @ 14f8e5990

/* bool __cdecl absl::lts_20240722::log_internal::EncodeVarint(unsigned __int64,__int64,class
   absl::lts_20240722::Span<char> * __ptr64) */

bool __cdecl
absl::lts_20240722::log_internal::EncodeVarint(__uint64 param_1,__int64 param_2,Span<char> *param_3)

{
  bool bVar1;
  
  bVar1 = EncodeVarint(param_1,param_2,param_3);
  return bVar1;
}

// FailQuietly @ 14f8e59a0

/* protected: static void __cdecl absl::lts_20240722::log_internal::LogMessage::FailQuietly(void) */

void __cdecl absl::lts_20240722::log_internal::LogMessage::FailQuietly(void)

{
                    /* WARNING: Subroutine does not return */
  _exit(1);
}

// FailWithoutStackTrace @ 14f8e59c0

/* protected: static void __cdecl
   absl::lts_20240722::log_internal::LogMessage::FailWithoutStackTrace(void) */

void __cdecl absl::lts_20240722::log_internal::LogMessage::FailWithoutStackTrace(void)

{
  SetSuppressSigabortTrace(true);
                    /* WARNING: Subroutine does not return */
  abort();
}

// FinalizeEncodingAndFormat @ 14f8e59e0

/* public: void __cdecl
   absl::lts_20240722::log_internal::LogMessage::LogMessageData::FinalizeEncodingAndFormat(void)
   __ptr64 */

void __thiscall
absl::lts_20240722::log_internal::LogMessage::LogMessageData::FinalizeEncodingAndFormat
          (LogMessageData *this)

{
  LogMessageData *pLVar1;
  bool bVar2;
  Span<char> *pSVar3;
  __uint64 _Var4;
  ulonglong uVar5;
  ulonglong uVar6;
  Span<char> local_b8;
  Span<char_const_> local_a8;
  Span<char_const_> local_98;
  longlong local_88;
  longlong local_80;
  void *local_70;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  char *local_48;
  ulong64 uStack_40;
  basic_string_view<char,std::char_traits<char>_> local_38;
  
  pSVar3 = encoded_remaining(this);
  _Var4 = 0;
  pLVar1 = this + 0x3c38;
  local_98.ptr_ = (char *)(this + 400);
  local_98.len_ = (ulong64)(pSVar3->ptr_ + (-400 - (longlong)this));
  local_b8.len_ = 0x3a96;
  local_b8.ptr_ = (char *)pLVar1;
  if (this[0x24] != (LogMessageData)0x0) {
    bVar2 = ThreadIsLoggingToLogSink();
    local_38._Mydata = *(char **)(this + 0x10);
    local_38._Mysize = *(ulong64 *)(this + 0x18);
    local_a8.ptr_ = *(char **)(this + 0x30);
    local_a8.len_ = CONCAT44(local_a8.len_._4_4_,*(undefined4 *)(this + 0x38));
    _Var4 = FormatLogPrefix(*(LogSeverity *)(this + 0x28),(Time *)&local_a8,*(uint *)(this + 0x3c),
                            &local_38,*(int *)(this + 0x20),(uint)bVar2,&local_b8);
  }
  *(__uint64 *)(this + 0x50) = _Var4;
  local_48 = (char *)0x0;
  uStack_40 = 0;
  bVar2 = ProtoField::DecodeFrom((ProtoField *)&local_60,&local_98);
  if (bVar2) {
    do {
      if ((local_60 == 7) && (local_58 == 2)) {
        local_a8.ptr_ = local_48;
        local_a8.len_ = uStack_40;
        if (1 < local_b8.len_) {
          local_70 = (void *)0x0;
          local_68 = 0;
          bVar2 = ProtoField::DecodeFrom((ProtoField *)&local_88,&local_a8);
          if (bVar2) {
            do {
              uVar5 = local_68;
              if (((local_88 == 1) || (local_88 == 6)) && (local_80 == 2)) {
                uVar6 = local_68;
                if ((local_b8.len_ < local_68) && (uVar6 = local_b8.len_, local_68 < local_b8.len_))
                {
                  uVar6 = local_68;
                }
                memcpy(local_b8.ptr_,local_70,uVar6);
                local_b8.ptr_ = local_b8.ptr_ + uVar6;
                local_b8.len_ = local_b8.len_ - uVar6;
                if (uVar6 < uVar5) break;
              }
              bVar2 = ProtoField::DecodeFrom((ProtoField *)&local_88,&local_a8);
            } while (bVar2);
          }
        }
      }
      bVar2 = ProtoField::DecodeFrom((ProtoField *)&local_60,&local_98);
    } while (bVar2);
  }
  *(undefined2 *)(this + ((longlong)local_b8.ptr_ - (longlong)this)) = 10;
  uVar6 = ((longlong)local_b8.ptr_ - (longlong)this) - 0x3c36;
  *(LogMessageData **)(this + 0x40) = pLVar1;
  uVar5 = 15000;
  if (uVar6 < 15000) {
    uVar5 = uVar6;
  }
  *(ulonglong *)(this + 0x48) = uVar5;
  return;
}

// Flush @ 14f8e5bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* protected: void __cdecl absl::lts_20240722::log_internal::LogMessage::Flush(void) __ptr64 */

void __thiscall absl::lts_20240722::log_internal::LogMessage::Flush(LogMessage *this)

{
  LogMessageData *pLVar1;
  char *pcVar2;
  LogMessageData *pLVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  LogSeverityAtLeast LVar7;
  int iVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  Span<char> *pSVar10;
  undefined8 uVar11;
  ulong64 uVar12;
  undefined1 auStackY_198 [32];
  uint uStack_14c;
  uint uStack_13c;
  basic_string_view<char,std::char_traits<char>_> local_138;
  undefined *local_128;
  undefined8 uStack_120;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_118;
  ulong64 uStack_110;
  basic_string_view<char,std::char_traits<char>_> local_108;
  basic_string_view<char,std::char_traits<char>_> local_f8;
  basic_string_view<char,std::char_traits<char>_> local_e8;
  OstreamView local_d8;
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  LVar7 = MinLogLevel();
  pLVar1 = (this->data_)._Mypair._Myval2;
  if ((int)LVar7 <= *(int *)(pLVar1 + 0x28)) {
    if (pLVar1[0x8a] != (LogMessageData)0x0) {
      local_128 = &s___;
      uStack_120 = 2;
      local_108._Mydata = ": ";
      local_108._Mysize = 2;
      CopyToEncodedBuffer<0>(this,&local_108);
      pbVar9 = base_internal::StrError
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_38,(this->errno_saver_).saved_errno_);
      local_118 = pbVar9;
      if (0xf < (pbVar9->_Mypair)._Myval2._Myres) {
        local_118 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                    (pbVar9->_Mypair)._Myval2._Bx._Ptr;
      }
      uStack_110 = (pbVar9->_Mypair)._Myval2._Mysize;
      local_f8._Mydata = (char *)local_118;
      local_f8._Mysize = uStack_110;
      CopyToEncodedBuffer<1>(this,&local_f8);
      local_e8._Mydata = " [";
      local_e8._Mysize = 2;
      CopyToEncodedBuffer<0>(this,&local_e8);
      iVar8 = (this->errno_saver_).saved_errno_;
      OstreamView::OstreamView(&local_d8,(this->data_)._Mypair._Myval2);
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                ((basic_ostream<char,std::char_traits<char>_> *)(local_d8.data_ + 0x120),iVar8);
      OstreamView::~OstreamView(&local_d8);
      local_138._Mydata = "]";
      local_138._Mysize = 1;
      CopyToEncodedBuffer<0>(this,&local_138);
      if (0xf < local_20) {
        uVar12 = local_20 + 1;
        uVar11 = local_38._Ptr;
        if (0xfff < uVar12) {
          uVar12 = local_20 + 0x28;
          uVar11 = *(undefined8 *)(local_38._Ptr + -8);
          if ((char *)0x1f < local_38._Ptr + (-8 - uVar11)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete((void *)uVar11,uVar12);
      }
    }
    if ((*(int *)((this->data_)._Mypair._Myval2 + 0x28) == 3) && (bVar6 = ExitOnDFatal(), bVar6)) {
      LOCK();
      bVar6 = DAT_1553e4934 == '\0';
      if (bVar6) {
        DAT_1553e4934 = '\x01';
      }
      UNLOCK();
      if (bVar6) {
        (this->data_)._Mypair._Myval2[0x88] = (LogMessageData)0x1;
      }
    }
    LogMessageData::FinalizeEncodingAndFormat((this->data_)._Mypair._Myval2);
    pLVar1 = (this->data_)._Mypair._Myval2;
    pSVar10 = LogMessageData::encoded_remaining(pLVar1);
    pcVar2 = pSVar10->ptr_;
    pLVar3 = (this->data_)._Mypair._Myval2;
    *(LogMessageData **)(pLVar3 + 0x58) = pLVar3 + 400;
    *(char **)(pLVar3 + 0x60) = pcVar2 + (-400 - (longlong)pLVar1);
    if (((*(int *)((this->data_)._Mypair._Myval2 + 0x28) == 3) && (bVar6 = ExitOnDFatal(), bVar6))
       && (pLVar1 = (this->data_)._Mypair._Myval2, pLVar1[0x89] == (LogMessageData)0x0)) {
      uVar4 = *(ulonglong *)(pLVar1 + 0x90);
      local_138._Mydata = (char *)(pLVar1 + 0x98);
      if ((uVar4 & 1) != 0) {
        local_138._Mydata = *(char **)local_138._Mydata;
      }
      uStack_13c = (uint)(uVar4 >> 0x21);
      local_138._Mysize = CONCAT44(uStack_13c,(int)(uVar4 >> 1));
      LogToSinks(pLVar1,&local_138,pLVar1[0x118]);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((this->data_)._Mypair._Myval2 + 0x68),"*** Check failure stack trace: ***\n",0x23)
      ;
      pLVar1 = (this->data_)._Mypair._Myval2;
      bVar6 = ShouldSymbolizeLogStackTrace();
      iVar8 = MaxFramesInLogStackTrace();
      debugging_internal::DumpStackTrace
                (0,iVar8,bVar6,(_func_void_char_ptr_void_ptr *)&LAB_14f8e6b50,pLVar1 + 0x68);
    }
    pLVar1 = (this->data_)._Mypair._Myval2;
    uVar4 = *(ulonglong *)(pLVar1 + 0x90);
    local_138._Mydata = (char *)(pLVar1 + 0x98);
    if ((uVar4 & 1) != 0) {
      local_138._Mydata = *(char **)local_138._Mydata;
    }
    uStack_14c = (uint)(uVar4 >> 0x21);
    local_138._Mysize = CONCAT44(uStack_14c,(int)(uVar4 >> 1));
    LogToSinks(pLVar1,&local_138,pLVar1[0x118]);
    if ((*(int *)((this->data_)._Mypair._Myval2 + 0x28) == 3) && (bVar6 = ExitOnDFatal(), bVar6)) {
      Die(this);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// FlushLogSinks @ 14f8e5f40

/* void __cdecl absl::lts_20240722::FlushLogSinks(void) */

void __cdecl absl::lts_20240722::FlushLogSinks(void)

{
  log_internal::FlushLogSinks();
  return;
}

// GetAllocatedCapacity @ 14f8e5f50

/* public: unsigned __int64 __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::GetAllocatedCapacity(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::GetAllocatedCapacity
          (Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *this)

{
  return *(__uint64 *)(this + 0x10);
}

// GetAllocatedData @ 14f8e5f60

/* public: class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<class absl::lts_20240722::LogSink *
   __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink * __ptr64>
   >::GetAllocatedData(void) __ptr64 */

LogSink ** __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::GetAllocatedData(Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                   *this)

{
  return *(LogSink ***)(this + 8);
}

// GetAllocator @ 14f8e5f70

/* public: class std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >::GetAllocator(void) __ptr64 */

allocator<absl::lts_20240722::LogSink*___ptr64> * __thiscall
absl::lts_20240722::inlined_vector_internal::
AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::GetAllocator
          (AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> *this)

{
  return (allocator<absl::lts_20240722::LogSink*___ptr64> *)this;
}

// GetAllocator @ 14f8e5f80

/* public: class std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<class absl::lts_20240722::LogSink *
   __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink * __ptr64>
   >::GetAllocator(void) __ptr64 */

allocator<absl::lts_20240722::LogSink*___ptr64> * __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::GetAllocator(Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
               *this)

{
  return (allocator<absl::lts_20240722::LogSink*___ptr64> *)this;
}

// GetCapacity @ 14f8e5f90

/* public: unsigned __int64 & __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >::GetCapacity(void) __ptr64 */

__uint64 * __thiscall
absl::lts_20240722::inlined_vector_internal::
AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::GetCapacity
          (AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> *this)

{
  return (__uint64 *)(this + 8);
}

// GetData @ 14f8e5fa0

/* public: class absl::lts_20240722::LogSink * __ptr64 * __ptr64 & __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >::GetData(void) __ptr64 */

LogSink *** __thiscall
absl::lts_20240722::inlined_vector_internal::
AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::GetData
          (AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> *this)

{
  return (LogSink ***)this;
}

// GetInlinedCapacity @ 14f8e5fb0

/* public: unsigned __int64 __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::GetInlinedCapacity(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::GetInlinedCapacity
          (Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *this)

{
  return 0x10;
}

// GetInlinedData @ 14f8e5fc0

/* public: class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<class absl::lts_20240722::LogSink *
   __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink * __ptr64>
   >::GetInlinedData(void) __ptr64 */

LogSink ** __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::GetInlinedData(Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                 *this)

{
  return (LogSink **)(this + 8);
}

// GetIsAllocated @ 14f8e5fd0

/* public: bool __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::GetIsAllocated(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::GetIsAllocated(Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                 *this)

{
  return (bool)((byte)*this & 1);
}

// GetSize @ 14f8e5fe0

/* public: unsigned __int64 __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::GetSize(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::GetSize(Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
          *this)

{
  return *(ulonglong *)this >> 1;
}

// GetSizeAndIsAllocated @ 14f8e5ff0

/* public: unsigned __int64 & __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<class absl::lts_20240722::LogSink *
   __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink * __ptr64>
   >::GetSizeAndIsAllocated(void) __ptr64 */

__uint64 * __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::GetSizeAndIsAllocated
          (Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *this)

{
  return (__uint64 *)this;
}

// GetSizeAndIsAllocated @ 14f8e6000

/* public: unsigned __int64 const & __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<class absl::lts_20240722::LogSink *
   __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink * __ptr64>
   >::GetSizeAndIsAllocated(void)const __ptr64 */

__uint64 * __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::GetSizeAndIsAllocated
          (Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
           *this)

{
  return (__uint64 *)this;
}

// Guard @ 14f8e6010

/* public: static signed char const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<signed char>::Guard(signed char const & __ptr64) */

char * __cdecl absl::lts_20240722::log_internal::NullGuard<signed_char>::Guard(char *param_1)

{
  return param_1;
}

// Guard @ 14f8e6020

/* public: static char const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<char>::Guard(char const & __ptr64) */

char * __cdecl absl::lts_20240722::log_internal::NullGuard<char>::Guard(char *param_1)

{
  return param_1;
}

// Guard @ 14f8e6030

/* public: static unsigned char const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<unsigned char>::Guard(unsigned char const & __ptr64)
    */

uchar * __cdecl absl::lts_20240722::log_internal::NullGuard<unsigned_char>::Guard(uchar *param_1)

{
  return param_1;
}

// Guard @ 14f8e6040

/* public: static short const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<short>::Guard(short const & __ptr64) */

short * __cdecl absl::lts_20240722::log_internal::NullGuard<short>::Guard(short *param_1)

{
  return param_1;
}

// Guard @ 14f8e6050

/* public: static unsigned short const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<unsigned short>::Guard(unsigned short const &
   __ptr64) */

ushort * __cdecl absl::lts_20240722::log_internal::NullGuard<unsigned_short>::Guard(ushort *param_1)

{
  return param_1;
}

// Guard @ 14f8e6060

/* public: static int const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<int>::Guard(int const & __ptr64) */

int * __cdecl absl::lts_20240722::log_internal::NullGuard<int>::Guard(int *param_1)

{
  return param_1;
}

// Guard @ 14f8e6070

/* public: static unsigned int const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<unsigned int>::Guard(unsigned int const & __ptr64) */

uint * __cdecl absl::lts_20240722::log_internal::NullGuard<unsigned_int>::Guard(uint *param_1)

{
  return param_1;
}

// Guard @ 14f8e6080

/* public: static long const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<long>::Guard(long const & __ptr64) */

long * __cdecl absl::lts_20240722::log_internal::NullGuard<long>::Guard(long *param_1)

{
  return param_1;
}

// Guard @ 14f8e6090

/* public: static unsigned long const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<unsigned long>::Guard(unsigned long const & __ptr64)
    */

ulong * __cdecl absl::lts_20240722::log_internal::NullGuard<unsigned_long>::Guard(ulong *param_1)

{
  return param_1;
}

// Guard @ 14f8e60a0

/* public: static void * __ptr64 const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<void * __ptr64>::Guard(void * __ptr64 const &
   __ptr64) */

void ** __cdecl absl::lts_20240722::log_internal::NullGuard<void*___ptr64>::Guard(void **param_1)

{
  return param_1;
}

// Guard @ 14f8e60b0

/* public: static void const * __ptr64 const & __ptr64 __cdecl
   absl::lts_20240722::log_internal::NullGuard<void const * __ptr64>::Guard(void const * __ptr64
   const & __ptr64) */

void ** __cdecl
absl::lts_20240722::log_internal::NullGuard<void_const*___ptr64>::Guard(void **param_1)

{
  return param_1;
}

// InitializeEncodingAndFormat @ 14f8e60c0

/* public: void __cdecl
   absl::lts_20240722::log_internal::LogMessage::LogMessageData::InitializeEncodingAndFormat(void)
   __ptr64 */

void __thiscall
absl::lts_20240722::log_internal::LogMessage::LogMessageData::InitializeEncodingAndFormat
          (LogMessageData *this)

{
  Span<char> *pSVar1;
  __uint64 _Var2;
  int iVar3;
  Span<char_const_> local_18;
  
  pSVar1 = encoded_remaining(this);
  local_18.ptr_ = *(char **)this;
  local_18.len_ = *(ulong64 *)(this + 8);
  EncodeBytesTruncate(2,&local_18,pSVar1);
  pSVar1 = encoded_remaining(this);
  EncodeVarint(3,(longlong)*(int *)(this + 0x20),pSVar1);
  pSVar1 = encoded_remaining(this);
  local_18.ptr_ = *(char **)(this + 0x30);
  local_18.len_ = CONCAT44(local_18.len_._4_4_,*(undefined4 *)(this + 0x38));
  _Var2 = ToUnixNanos((Time *)&local_18);
  EncodeVarint(4,_Var2,pSVar1);
  pSVar1 = encoded_remaining(this);
  iVar3 = *(int *)(this + 0x28);
  if (iVar3 == 0) {
    iVar3 = 600 - *(int *)(this + 0x2c);
    if (*(int *)(this + 0x2c) == -1) {
      iVar3 = 800;
    }
  }
  else if (iVar3 == 1) {
    iVar3 = 900;
  }
  else if (iVar3 == 2) {
    iVar3 = 0x3b6;
  }
  else if (iVar3 == 3) {
    iVar3 = 0x44c;
  }
  else {
    iVar3 = 800;
  }
  EncodeVarint(5,(longlong)iVar3,pSVar1);
  pSVar1 = encoded_remaining(this);
  EncodeVarint(6,(ulonglong)*(uint *)(this + 0x3c),pSVar1);
  return;
}

// InternalStream @ 14f8e61d0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::InternalStream(void) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::InternalStream(LogMessage *this)

{
  return this;
}

// IsFatal @ 14f8e61e0

/* private: bool __cdecl absl::lts_20240722::log_internal::LogMessage::IsFatal(void)const __ptr64 */

bool __thiscall absl::lts_20240722::log_internal::LogMessage::IsFatal(LogMessage *this)

{
  bool bVar1;
  
  if (*(int *)((this->data_)._Mypair._Myval2 + 0x28) == 3) {
    bVar1 = ExitOnDFatal();
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// LogBacktraceIfNeeded @ 14f8e6210

/* private: void __cdecl absl::lts_20240722::log_internal::LogMessage::LogBacktraceIfNeeded(void)
   __ptr64 */

void __thiscall absl::lts_20240722::log_internal::LogMessage::LogBacktraceIfNeeded(LogMessage *this)

{
  bool bVar1;
  int iVar2;
  LogMessageData *pLVar3;
  basic_string_view<char,std::char_traits<char>_> local_b8;
  OstreamView local_a8;
  
  bVar1 = log_internal::IsInitialized();
  if (bVar1) {
    pLVar3 = (this->data_)._Mypair._Myval2;
    local_b8._Mydata = *(char **)(pLVar3 + 0x10);
    local_b8._Mysize = *(ulong64 *)(pLVar3 + 0x18);
    bVar1 = ShouldLogBacktraceAt(&local_b8,*(int *)(pLVar3 + 0x20));
    if (bVar1) {
      OstreamView::OstreamView(&local_a8,(this->data_)._Mypair._Myval2);
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),
                 " (stacktrace:\n");
      pLVar3 = local_a8.data_ + 0x120;
      bVar1 = ShouldSymbolizeLogStackTrace();
      iVar2 = MaxFramesInLogStackTrace();
      debugging_internal::DumpStackTrace
                (1,iVar2,bVar1,(_func_void_char_ptr_void_ptr *)&LAB_14f8e6b30,pLVar3);
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)(local_a8.data_ + 0x120),") ");
      OstreamView::~OstreamView(&local_a8);
    }
  }
  return;
}

// MakeStorageView @ 14f8e62f0

/* public: struct absl::lts_20240722::inlined_vector_internal::StorageView<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> > __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<class absl::lts_20240722::LogSink *
   __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink * __ptr64>
   >::MakeStorageView(void) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::MakeStorageView(Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                  *this)

{
  longlong *in_RDX;
  Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
  *local_28;
  ulonglong uStack_20;
  longlong local_18;
  
  local_28 = this + 8;
  if (((byte)*this & 1) == 0) {
    uStack_20 = *(ulonglong *)this;
    local_18 = 0x10;
  }
  else {
    local_28 = *(Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                 **)local_28;
    uStack_20 = *(ulonglong *)this;
    local_18 = *(longlong *)(this + 0x10);
  }
  uStack_20 = uStack_20 >> 1;
  *in_RDX = (longlong)local_28;
  in_RDX[1] = uStack_20;
  in_RDX[2] = local_18;
  return;
}

// MaxVarintSize @ 14f8e6360

/* unsigned __int64 __cdecl absl::lts_20240722::log_internal::MaxVarintSize(void) */

__uint64 __cdecl absl::lts_20240722::log_internal::MaxVarintSize(void)

{
  __uint64 _Var1;
  
  _Var1 = VarintSize(0x1ffffffffffffff);
  return _Var1 + 1;
}

// NextCapacity @ 14f8e6390

/* public: static unsigned __int64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<class absl::lts_20240722::LogSink *
   __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink * __ptr64>
   >::NextCapacity(unsigned __int64) */

__uint64 __cdecl
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::NextCapacity(__uint64 param_1)

{
  return param_1 * 2;
}

// NoPrefix @ 14f8e63a0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::NoPrefix(void) __ptr64 */

LogMessage * __thiscall absl::lts_20240722::log_internal::LogMessage::NoPrefix(LogMessage *this)

{
  (this->data_)._Mypair._Myval2[0x24] = (LogMessageData)0x0;
  return this;
}

// NormalizeLogSeverity @ 14f8e63c0

/* enum absl::lts_20240722::LogSeverity __cdecl absl::lts_20240722::NormalizeLogSeverity(enum
   absl::lts_20240722::LogSeverity) */

LogSeverity __cdecl absl::lts_20240722::NormalizeLogSeverity(LogSeverity param_1)

{
  LogSeverity LVar1;
  
  LVar1 = kInfo;
  if (-1 < (int)param_1) {
    LVar1 = param_1;
  }
  if (3 < (int)LVar1) {
    LVar1 = kError;
  }
  return LVar1;
}

// PrepareToDie @ 14f8e63e0

/* private: void __cdecl absl::lts_20240722::log_internal::LogMessage::PrepareToDie(void) __ptr64 */

void __thiscall absl::lts_20240722::log_internal::LogMessage::PrepareToDie(LogMessage *this)

{
  LogMessageData *pLVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  LogMessageData *local_18;
  undefined8 uStack_10;
  
  pLVar1 = (this->data_)._Mypair._Myval2;
  if (pLVar1[0x89] == (LogMessageData)0x0) {
    uVar2 = *(ulonglong *)(pLVar1 + 0x90);
    local_18 = pLVar1 + 0x98;
    if ((uVar2 & 1) != 0) {
      local_18 = *(LogMessageData **)local_18;
    }
    uStack_10._4_4_ = (uint)(uVar2 >> 0x21);
    uStack_10 = CONCAT44(uStack_10._4_4_,(int)(uVar2 >> 1));
    LogToSinks(pLVar1,&local_18,pLVar1[0x118]);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               ((this->data_)._Mypair._Myval2 + 0x68),"*** Check failure stack trace: ***\n",0x23);
    pLVar1 = (this->data_)._Mypair._Myval2;
    bVar3 = ShouldSymbolizeLogStackTrace();
    iVar4 = MaxFramesInLogStackTrace();
    debugging_internal::DumpStackTrace
              (0,iVar4,bVar3,(_func_void_char_ptr_void_ptr *)&LAB_14f8e6b50,pLVar1 + 0x68);
  }
  return;
}

// FUN_14f8e64a0 @ 14f8e64a0

ulonglong FUN_14f8e64a0(longlong *param_1,Span<char_const_> *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  void *in_RAX;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulonglong uVar3;
  ulonglong _Size;
  longlong local_48;
  longlong local_40;
  void *local_30;
  ulonglong uStack_28;
  undefined7 uVar4;
  
  if ((ulonglong)param_1[1] < 2) {
LAB_14f8e6551:
    uVar3 = (ulonglong)in_RAX & 0xffffffffffffff00;
  }
  else {
    local_30 = (void *)0x0;
    uStack_28 = 0;
    bVar2 = absl::lts_20240722::log_internal::ProtoField::DecodeFrom
                      ((ProtoField *)&local_48,param_2);
    uVar4 = extraout_var;
    if (bVar2) {
      do {
        uVar3 = uStack_28;
        if (((local_48 == 1) || (local_48 == 6)) && (local_40 == 2)) {
          uVar1 = param_1[1];
          _Size = uStack_28;
          if ((uVar1 < uStack_28) && (_Size = uVar1, uStack_28 < uVar1)) {
            _Size = uStack_28;
          }
          in_RAX = memcpy((void *)*param_1,local_30,_Size);
          *param_1 = *param_1 + _Size;
          param_1[1] = param_1[1] - _Size;
          if (_Size < uVar3) goto LAB_14f8e6551;
        }
        bVar2 = absl::lts_20240722::log_internal::ProtoField::DecodeFrom
                          ((ProtoField *)&local_48,param_2);
        uVar4 = extraout_var_00;
      } while (bVar2);
    }
    uVar3 = CONCAT71(uVar4,1);
  }
  return uVar3;
}

// Release @ 14f8e65d0

/* public: struct absl::lts_20240722::inlined_vector_internal::Allocation<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> > __cdecl
   absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >::Release(void) __ptr64&&  */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::Release
          (AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)this;
  in_RDX[1] = *(undefined8 *)(this + 8);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}

// Reset @ 14f8e6600

/* private: void __cdecl absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::Reset(void) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::Reset
          (AllocationTransaction<std::allocator<absl::lts_20240722::LogSink*___ptr64>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}

// SendToLog @ 14f8e6610

/* private: void __cdecl absl::lts_20240722::log_internal::LogMessage::SendToLog(void) __ptr64 */

void __thiscall absl::lts_20240722::log_internal::LogMessage::SendToLog(LogMessage *this)

{
  LogMessageData *pLVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  LogMessageData *local_18;
  undefined8 uStack_10;
  
  if (*(int *)((this->data_)._Mypair._Myval2 + 0x28) == 3) {
    bVar4 = ExitOnDFatal();
    if ((bVar4) && (pLVar1 = (this->data_)._Mypair._Myval2, pLVar1[0x89] == (LogMessageData)0x0)) {
      uVar2 = *(ulonglong *)(pLVar1 + 0x90);
      local_18 = pLVar1 + 0x98;
      if ((uVar2 & 1) != 0) {
        local_18 = *(LogMessageData **)local_18;
      }
      uStack_10._4_4_ = (uint)(uVar2 >> 0x21);
      uStack_10 = CONCAT44(uStack_10._4_4_,(int)(uVar2 >> 1));
      LogToSinks(pLVar1,&local_18,pLVar1[0x118]);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((this->data_)._Mypair._Myval2 + 0x68),"*** Check failure stack trace: ***\n",0x23)
      ;
      pLVar1 = (this->data_)._Mypair._Myval2;
      bVar4 = ShouldSymbolizeLogStackTrace();
      iVar5 = MaxFramesInLogStackTrace();
      debugging_internal::DumpStackTrace
                (0,iVar5,bVar4,(_func_void_char_ptr_void_ptr *)&LAB_14f8e6b50,pLVar1 + 0x68);
    }
  }
  pLVar1 = (this->data_)._Mypair._Myval2;
  uVar2 = *(ulonglong *)(pLVar1 + 0x90);
  local_18 = pLVar1 + 0x98;
  if ((uVar2 & 1) != 0) {
    local_18 = *(LogMessageData **)local_18;
  }
  uStack_10._4_4_ = (uint)(uVar2 >> 0x21);
  uStack_10 = CONCAT44(uStack_10._4_4_,(int)(uVar2 >> 1));
  LogToSinks(pLVar1,&local_18,pLVar1[0x118]);
  if (*(int *)((this->data_)._Mypair._Myval2 + 0x28) == 3) {
    bVar4 = ExitOnDFatal();
    if (bVar4) {
      Die(this);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// SetAllocation @ 14f8e6760

/* public: void __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::SetAllocation(struct absl::lts_20240722::inlined_vector_internal::Allocation<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::SetAllocation(Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                *this,undefined8 *param_2)

{
  *(undefined8 *)(this + 8) = *param_2;
  *(undefined8 *)(this + 0x10) = param_2[1];
  return;
}

// SetFailQuietly @ 14f8e6780

/* protected: void __cdecl absl::lts_20240722::log_internal::LogMessage::SetFailQuietly(void)
   __ptr64 */

void __thiscall absl::lts_20240722::log_internal::LogMessage::SetFailQuietly(LogMessage *this)

{
  (this->data_)._Mypair._Myval2[0x89] = (LogMessageData)0x1;
  return;
}

// SetInlinedSize @ 14f8e67a0

/* public: void __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::SetInlinedSize(unsigned __int64) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::SetInlinedSize(Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                 *this,__uint64 param_1)

{
  *(__uint64 *)this = param_1 * 2;
  return;
}

// SetIsAllocated @ 14f8e67b0

/* public: void __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::SetIsAllocated(void) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::SetIsAllocated(Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                 *this)

{
  *(ulonglong *)this = *(ulonglong *)this | 1;
  return;
}

// ToSinkAlso @ 14f8e67c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::ToSinkAlso(class absl::lts_20240722::LogSink *
   __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::ToSinkAlso(LogMessage *this,LogSink *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
  *pAVar2;
  LogSink *local_res10 [3];
  undefined1 auStackY_98 [32];
  int local_68 [2];
  char *local_60;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_58;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pAVar2 = (AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
            *)this;
  local_res10[0] = param_1;
  if (param_1 == (LogSink *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_58,"Check sink failed: ")
    ;
    pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
             basic_string<char,std::char_traits<char>,std::allocator<char>_>
                       (&local_38,"null LogSink*");
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
              (&local_58,pbVar1);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_38);
    local_60 = 
    "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\log\\internal\\log_message.cc"
    ;
    local_68[0] = 0x160;
    local_68[1] = 3;
    pAVar2 = &raw_log_internal::internal_log_function;
    base_internal::
    AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
    ::
    operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
              (&raw_log_internal::internal_log_function,(LogSeverity *)(local_68 + 1),&local_60,
               local_68,&local_58);
  }
  InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
  ::push_back((InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
               *)((((LogMessage *)pAVar2)->data_)._Mypair._Myval2 + 0x90),local_res10);
  return this;
}

// ToSinkOnly @ 14f8e68a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::ToSinkOnly(class absl::lts_20240722::LogSink *
   __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::ToSinkOnly(LogMessage *this,LogSink *param_1)

{
  LogMessageData *pLVar1;
  void *pvVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
  *pAVar4;
  void *pvVar5;
  ulonglong uVar6;
  LogSink *local_res10;
  undefined1 auStackY_98 [32];
  int local_68 [2];
  char *local_60;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_58;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pAVar4 = (AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
            *)this;
  local_res10 = param_1;
  if (param_1 == (LogSink *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_58,"Check sink failed: ")
    ;
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
             basic_string<char,std::char_traits<char>,std::allocator<char>_>
                       (&local_38,"null LogSink*");
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
              (&local_58,pbVar3);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_38);
    local_60 = 
    "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\log\\internal\\log_message.cc"
    ;
    local_68[0] = 0x166;
    local_68[1] = 3;
    pAVar4 = &raw_log_internal::internal_log_function;
    base_internal::
    AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
    ::
    operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
              (&raw_log_internal::internal_log_function,(LogSeverity *)(local_68 + 1),&local_60,
               local_68,&local_58);
  }
  pLVar1 = (((LogMessage *)pAVar4)->data_)._Mypair._Myval2;
  if (((byte)pLVar1[0x90] & 1) != 0) {
    pvVar2 = *(void **)(pLVar1 + 0x98);
    uVar6 = *(longlong *)(pLVar1 + 0xa0) * 8;
    pvVar5 = pvVar2;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      pvVar5 = *(void **)((longlong)pvVar2 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar5))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar5,uVar6);
  }
  *(undefined8 *)(pLVar1 + 0x90) = 0;
  InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
  ::push_back((InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
               *)((this->data_)._Mypair._Myval2 + 0x90),&local_res10);
  (this->data_)._Mypair._Myval2[0x118] = (LogMessageData)0x1;
  return this;
}

// VarintSize @ 14f8e6a00

/* unsigned __int64 __cdecl absl::lts_20240722::log_internal::VarintSize(unsigned __int64) */

__uint64 __cdecl absl::lts_20240722::log_internal::VarintSize(__uint64 param_1)

{
  __uint64 _Var1;
  
  if (param_1 < 0x80) {
    return 1;
  }
  _Var1 = VarintSize(param_1 >> 7);
  return _Var1 + 1;
}

// WithMetadataFrom @ 14f8e6a30

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::WithMetadataFrom(class absl::lts_20240722::LogEntry
   const & __ptr64) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::WithMetadataFrom(LogMessage *this,LogEntry *param_1)

{
  uint uVar1;
  LogMessageData *pLVar2;
  ulong64 uVar3;
  
  pLVar2 = (this->data_)._Mypair._Myval2;
  uVar3 = (param_1->full_filename_)._Mysize;
  *(char **)pLVar2 = (param_1->full_filename_)._Mydata;
  *(ulong64 *)(pLVar2 + 8) = uVar3;
  pLVar2 = (this->data_)._Mypair._Myval2;
  uVar3 = (param_1->base_filename_)._Mysize;
  *(char **)(pLVar2 + 0x10) = (param_1->base_filename_)._Mydata;
  *(ulong64 *)(pLVar2 + 0x18) = uVar3;
  *(int *)((this->data_)._Mypair._Myval2 + 0x20) = param_1->line_;
  (this->data_)._Mypair._Myval2[0x24] = (LogMessageData)param_1->prefix_;
  *(LogSeverity *)((this->data_)._Mypair._Myval2 + 0x28) = param_1->severity_;
  *(int *)((this->data_)._Mypair._Myval2 + 0x2c) = param_1->verbose_level_;
  pLVar2 = (this->data_)._Mypair._Myval2;
  uVar1 = (param_1->timestamp_).rep_.rep_lo_;
  *(HiRep *)(pLVar2 + 0x30) = (param_1->timestamp_).rep_.rep_hi_;
  *(uint *)(pLVar2 + 0x38) = uVar1;
  *(uint *)((this->data_)._Mypair._Myval2 + 0x3c) = param_1->tid_;
  return this;
}

// WithPerror @ 14f8e6aa0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::WithPerror(void) __ptr64 */

LogMessage * __thiscall absl::lts_20240722::log_internal::LogMessage::WithPerror(LogMessage *this)

{
  (this->data_)._Mypair._Myval2[0x8a] = (LogMessageData)0x1;
  return this;
}

// WithThreadID @ 14f8e6ac0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::WithThreadID(unsigned int) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::WithThreadID(LogMessage *this,uint param_1)

{
  *(uint *)((this->data_)._Mypair._Myval2 + 0x3c) = param_1;
  return this;
}

// WithTimestamp @ 14f8e6ae0

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::WithTimestamp(class absl::lts_20240722::Time)
   __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::WithTimestamp(LogMessage *this,Time *param_1)

{
  uint uVar1;
  LogMessageData *pLVar2;
  
  pLVar2 = (this->data_)._Mypair._Myval2;
  uVar1 = (param_1->rep_).rep_lo_;
  *(HiRep *)(pLVar2 + 0x30) = (param_1->rep_).rep_hi_;
  *(uint *)(pLVar2 + 0x38) = uVar1;
  return this;
}

// WithVerbosity @ 14f8e6b00

/* public: class absl::lts_20240722::log_internal::LogMessage & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::WithVerbosity(int) __ptr64 */

LogMessage * __thiscall
absl::lts_20240722::log_internal::LogMessage::WithVerbosity(LogMessage *this,int param_1)

{
  LogMessageData *pLVar1;
  int iVar2;
  
  pLVar1 = (this->data_)._Mypair._Myval2;
  if (param_1 == -1) {
    *(undefined4 *)(pLVar1 + 0x2c) = 0xffffffff;
    return this;
  }
  iVar2 = 0;
  if (0 < param_1) {
    iVar2 = param_1;
  }
  *(int *)(pLVar1 + 0x2c) = iVar2;
  return this;
}

// _Check_offset @ 14f8e6b80

/* private: void __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::_Check_offset(unsigned __int64)const __ptr64 */

void __thiscall
std::basic_string_view<char,std::char_traits<char>_>::_Check_offset
          (basic_string_view<char,std::char_traits<char>_> *this,__uint64 param_1)

{
  if (param_1 <= this->_Mysize) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _Xran();
}

// _Clamp_suffix_size @ 14f8e6ba0

/* private: unsigned __int64 __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::_Clamp_suffix_size(unsigned __int64,unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::basic_string_view<char,std::char_traits<char>_>::_Clamp_suffix_size
          (basic_string_view<char,std::char_traits<char>_> *this,__uint64 param_1,__uint64 param_2)

{
  ulonglong uVar1;
  
  uVar1 = this->_Mysize - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  return param_2;
}

// _Get_first @ 14f8e6bc0

/* public: struct std::default_delete<struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData> & __ptr64 __cdecl
   std::_Compressed_pair<struct std::default_delete<struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData>,struct
   absl::lts_20240722::log_internal::LogMessage::LogMessageData * __ptr64,1>::_Get_first(void)
   __ptr64 */

default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData> * __thiscall
std::
_Compressed_pair<std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>,absl::lts_20240722::log_internal::LogMessage::LogMessageData*___ptr64,1>
::_Get_first(_Compressed_pair<std::default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData>,absl::lts_20240722::log_internal::LogMessage::LogMessageData*___ptr64,1>
             *this)

{
  return (default_delete<absl::lts_20240722::log_internal::LogMessage::LogMessageData> *)this;
}

// _Mark @ 14f8e6bd0

/* public: bool __cdecl std::_String_bitmap<char,1>::_Mark(char const * __ptr64,char const * __ptr64
   const) __ptr64 */

bool __thiscall
std::_String_bitmap<char,1>::_Mark(_String_bitmap<char,1> *this,char *param_1,char *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    this->_Matches[(byte)*param_1] = true;
  }
  return true;
}

// _Match @ 14f8e6c00

/* public: bool __cdecl std::_String_bitmap<char,1>::_Match(char)const __ptr64 */

bool __thiscall std::_String_bitmap<char,1>::_Match(_String_bitmap<char,1> *this,char param_1)

{
  return this->_Matches[(byte)param_1];
}

// _Release @ 14f8e6c10

/* public: void __cdecl std::_Fake_proxy_ptr_impl::_Release(void) __ptr64 */

void __thiscall std::_Fake_proxy_ptr_impl::_Release(_Fake_proxy_ptr_impl *this)

{
  return;
}

// _Xran @ 14f8e6c20

/* private: static void __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::_Xran(void) */

void __cdecl std::basic_string_view<char,std::char_traits<char>_>::_Xran(void)

{
  _Xout_of_range("invalid string_view position");
  return;
}

// allocate @ 14f8e6c40

/* public: static class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl
   std::_Default_allocator_traits<class std::allocator<class absl::lts_20240722::LogSink * __ptr64>
   >::allocate(class std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64,unsigned
   __int64) */

LogSink ** __cdecl
std::_Default_allocator_traits<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::allocate
          (allocator<absl::lts_20240722::LogSink*___ptr64> *param_1,__uint64 param_2)

{
  LogSink **ppLVar1;
  
  if (param_2 < 0x2000000000000000) {
    ppLVar1 = _Allocate<16,std::_Default_allocate_traits,0>(param_2 * 8);
    return ppLVar1;
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// allocate @ 14f8e6c70

/* public: class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl std::allocator<class
   absl::lts_20240722::LogSink * __ptr64>::allocate(unsigned __int64) __ptr64 */

LogSink ** __thiscall
std::allocator<absl::lts_20240722::LogSink*___ptr64>::allocate
          (allocator<absl::lts_20240722::LogSink*___ptr64> *this,__uint64 param_1)

{
  ulonglong uVar1;
  LogSink *pLVar2;
  LogSink **ppLVar3;
  
  if (param_1 < 0x2000000000000000) {
    uVar1 = param_1 * 8;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        ppLVar3 = ::operator_new(uVar1);
        return ppLVar3;
      }
      return (LogSink **)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pLVar2 = ::operator_new(uVar1 + 0x27);
      if (pLVar2 != (LogSink *)0x0) {
        ppLVar3 = (LogSink **)((ulonglong)&pLVar2[4].field_0x7 & 0xffffffffffffffe0);
        ppLVar3[-1] = pLVar2;
        return ppLVar3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// append @ 14f8e6cf0

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
   __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::append(char const * __ptr64 const) __ptr64 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  ulong64 uVar2;
  
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (param_1[uVar2] != '\0');
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           append(this,param_1,uVar2);
  return pbVar1;
}

// assign @ 14f8e6d20

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
   __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::assign(char const * __ptr64 const) __ptr64 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  ulong64 uVar2;
  
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (param_1[uVar2] != '\0');
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           assign(this,param_1,uVar2);
  return pbVar1;
}

// bytes_value @ 14f8e6d50

/* public: class absl::lts_20240722::Span<char const > __cdecl
   absl::lts_20240722::log_internal::ProtoField::bytes_value(void)const __ptr64 */

Span<char_const_> * __thiscall
absl::lts_20240722::log_internal::ProtoField::bytes_value
          (ProtoField *this,Span<char_const_> *__return_storage_ptr__)

{
  ulong64 uVar1;
  
  uVar1 = *(ulong64 *)(this + 0x20);
  __return_storage_ptr__->ptr_ = *(char **)(this + 0x18);
  __return_storage_ptr__->len_ = uVar1;
  return __return_storage_ptr__;
}

// clear @ 14f8e6d70

/* public: void __cdecl absl::lts_20240722::InlinedVector<class absl::lts_20240722::LogSink *
   __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::clear(void)
   __ptr64 */

void __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::clear(InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
        *this)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  if (((byte)*this & 1) != 0) {
    pvVar1 = *(void **)(this + 8);
    uVar3 = *(longlong *)(this + 0x10) * 8;
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
  *(undefined8 *)this = 0;
  return;
}

// compare_exchange_strong @ 14f8e6dd0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: bool __cdecl std::_Atomic_storage<bool,1>::compare_exchange_strong(bool &
   __ptr64,bool,enum std::memory_order) __ptr64 */

bool __thiscall
std::_Atomic_storage<bool,1>::compare_exchange_strong
          (_Atomic_storage<bool,1> *this,bool *param_1,bool param_2,memory_order param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  bVar1 = *param_1;
  LOCK();
  bVar2 = (this->_Storage)._Value;
  bVar3 = bVar1 == bVar2;
  if (bVar3) {
    (this->_Storage)._Value = param_2;
    bVar2 = bVar1;
  }
  UNLOCK();
  if (!bVar3) {
    *param_1 = bVar2;
    return false;
  }
  return true;
}

// data @ 14f8e6df0

/* public: class absl::lts_20240722::LogSink * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::InlinedVector<class absl::lts_20240722::LogSink * __ptr64,16,class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::data(void) __ptr64 */

LogSink ** __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::data(InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
       *this)

{
  LogSink *pLVar1;
  
  pLVar1 = (LogSink *)(this + 8);
  if (((byte)*this & 1) != 0) {
    pLVar1 = *(LogSink **)pLVar1;
  }
  return (LogSink **)pLVar1;
}

// data @ 14f8e6e10

/* public: char const * __ptr64 __cdecl absl::lts_20240722::Span<char const >::data(void)const
   __ptr64 */

char * __thiscall absl::lts_20240722::Span<char_const_>::data(Span<char_const_> *this)

{
  return this->ptr_;
}

// data @ 14f8e6e20

/* public: char * __ptr64 __cdecl absl::lts_20240722::Span<char>::data(void)const __ptr64 */

char * __thiscall absl::lts_20240722::Span<char>::data(Span<char> *this)

{
  return this->ptr_;
}

// data @ 14f8e6e30

/* public: char * __ptr64 __cdecl std::array<char,15000>::data(void) __ptr64 */

char * __thiscall std::array<char,15000>::data(array<char,15000> *this)

{
  return (char *)this;
}

// deallocate @ 14f8e6e40

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> >::deallocate(class std::allocator<class
   absl::lts_20240722::LogSink * __ptr64> & __ptr64,class absl::lts_20240722::LogSink * __ptr64 *
   __ptr64 const,unsigned __int64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<absl::lts_20240722::LogSink*___ptr64>_>::deallocate
          (allocator<absl::lts_20240722::LogSink*___ptr64> *param_1,LogSink **param_2,
          __uint64 param_3)

{
  LogSink *pLVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 8;
  pLVar1 = (LogSink *)param_2;
  if (0xfff < uVar2) {
    pLVar1 = param_2[-1];
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)pLVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pLVar1,uVar2);
  return;
}

// deallocate @ 14f8e6e90

/* public: void __cdecl std::allocator<class absl::lts_20240722::LogSink *
   __ptr64>::deallocate(class absl::lts_20240722::LogSink * __ptr64 * __ptr64 const,unsigned
   __int64) __ptr64 */

void __thiscall
std::allocator<absl::lts_20240722::LogSink*___ptr64>::deallocate
          (allocator<absl::lts_20240722::LogSink*___ptr64> *this,LogSink **param_1,__uint64 param_2)

{
  LogSink *pLVar1;
  ulonglong uVar2;
  
  uVar2 = param_2 * 8;
  pLVar1 = (LogSink *)param_1;
  if (0xfff < uVar2) {
    pLVar1 = param_1[-1];
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)pLVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pLVar1,uVar2);
  return;
}

// empty @ 14f8e6ee0

/* public: bool __cdecl absl::lts_20240722::Span<char const >::empty(void)const __ptr64 */

bool __thiscall absl::lts_20240722::Span<char_const_>::empty(Span<char_const_> *this)

{
  return this->len_ == 0;
}

// encoded_remaining @ 14f8e6ef0

/* public: class absl::lts_20240722::Span<char> & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::LogMessageData::encoded_remaining(void) __ptr64 */

Span<char> * __thiscall
absl::lts_20240722::log_internal::LogMessage::LogMessageData::encoded_remaining
          (LogMessageData *this)

{
  Span<char> *pSVar1;
  __uint64 _Var2;
  int iVar3;
  Span<char_const_> local_18;
  
  if (*(longlong *)(this + 0x3c28) == 0) {
    local_18.ptr_ = (char *)(this + 400);
    local_18.len_ = 15000;
    *(char **)(this + 0x3c28) = local_18.ptr_;
    *(undefined8 *)(this + 0x3c30) = 15000;
    pSVar1 = encoded_remaining(this);
    local_18.ptr_ = *(char **)this;
    local_18.len_ = *(ulong64 *)(this + 8);
    EncodeBytesTruncate(2,&local_18,pSVar1);
    pSVar1 = encoded_remaining(this);
    EncodeVarint(3,(longlong)*(int *)(this + 0x20),pSVar1);
    pSVar1 = encoded_remaining(this);
    local_18.ptr_ = *(char **)(this + 0x30);
    local_18.len_ = CONCAT44(local_18.len_._4_4_,*(undefined4 *)(this + 0x38));
    _Var2 = ToUnixNanos((Time *)&local_18);
    EncodeVarint(4,_Var2,pSVar1);
    pSVar1 = encoded_remaining(this);
    iVar3 = *(int *)(this + 0x28);
    if (iVar3 == 0) {
      iVar3 = 600 - *(int *)(this + 0x2c);
      if (*(int *)(this + 0x2c) == -1) {
        iVar3 = 800;
      }
    }
    else if (iVar3 == 1) {
      iVar3 = 900;
    }
    else if (iVar3 == 2) {
      iVar3 = 0x3b6;
    }
    else if (iVar3 == 3) {
      iVar3 = 0x44c;
    }
    else {
      iVar3 = 800;
    }
    EncodeVarint(5,(longlong)iVar3,pSVar1);
    pSVar1 = encoded_remaining(this);
    EncodeVarint(6,(ulonglong)*(uint *)(this + 0x3c),pSVar1);
    return (Span<char> *)(this + 0x3c28);
  }
  return (Span<char> *)(this + 0x3c28);
}

// find @ 14f8e7050

/* public: static char const * __ptr64 __cdecl std::_Narrow_char_traits<char,int>::find(char const *
   __ptr64 const,unsigned __int64,char const & __ptr64) */

char * __cdecl
std::_Narrow_char_traits<char,int>::find(char *param_1,__uint64 param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = memchr(param_1,(int)*param_3,param_2);
  return pcVar1;
}

// find_last_of @ 14f8e7070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: unsigned __int64 __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::find_last_of(char const * __ptr64 const,unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::basic_string_view<char,std::char_traits<char>_>::find_last_of
          (basic_string_view<char,std::char_traits<char>_> *this,char *param_1,__uint64 param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  char cVar3;
  ulong64 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  __uint64 _Var7;
  longlong lVar8;
  undefined1 auStack_148 [32];
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (param_1[lVar8] != '\0');
  uVar4 = this->_Mysize;
  pbVar5 = (byte *)this->_Mydata;
  if ((lVar8 == 0) || (uVar4 == 0)) {
LAB_14f8e7123:
    _Var7 = 0xffffffffffffffff;
  }
  else {
    memset(local_128,0,0x100);
    pbVar6 = (byte *)(param_1 + lVar8);
    for (; (byte *)param_1 != pbVar6; param_1 = param_1 + 1) {
      local_128[(byte)*param_1] = '\x01';
    }
    uVar1 = uVar4 - 1;
    if (uVar1 < param_2) {
      param_2 = uVar1;
    }
    pbVar6 = pbVar5 + param_2;
    cVar3 = local_128[*pbVar6];
    while (cVar3 == '\0') {
      if (pbVar6 == pbVar5) goto LAB_14f8e7123;
      pbVar2 = pbVar6 + -1;
      pbVar6 = pbVar6 + -1;
      cVar3 = local_128[*pbVar2];
    }
    _Var7 = (longlong)pbVar6 - (longlong)pbVar5;
  }
  return _Var7;
}

// get @ 14f8e7160

/* public: class absl::lts_20240722::LogSink * __ptr64 * __ptr64 & __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<class
   absl::lts_20240722::LogSink * __ptr64 * __ptr64,1,0>::get(void) __ptr64&  */

LogSink *** __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<absl::lts_20240722::LogSink*___ptr64*___ptr64,1,0>::get
          (Storage<absl::lts_20240722::LogSink*___ptr64*___ptr64,1,0> *this)

{
  return (LogSink ***)this;
}

// get @ 14f8e7170

/* public: class std::allocator<class absl::lts_20240722::LogSink * __ptr64> & __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<class
   std::allocator<class absl::lts_20240722::LogSink * __ptr64>,0,1>::get(void) __ptr64&  */

allocator<absl::lts_20240722::LogSink*___ptr64> * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<std::allocator<absl::lts_20240722::LogSink*___ptr64>,0,1>::get
          (Storage<std::allocator<absl::lts_20240722::LogSink*___ptr64>,0,1> *this)

{
  return (allocator<absl::lts_20240722::LogSink*___ptr64> *)this;
}

// get @ 14f8e7180

/* public: unsigned __int64 & __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<unsigned
   __int64,1,0>::get(void) __ptr64&  */

__uint64 * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<unsigned___int64,1,0>::
get(Storage<unsigned___int64,1,0> *this)

{
  return &this->value;
}

// get @ 14f8e7190

/* public: unsigned __int64 const & __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<unsigned
   __int64,1,0>::get(void)const __ptr64&  */

__uint64 * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<unsigned___int64,1,0>::
get(Storage<unsigned___int64,1,0> *this)

{
  return &this->value;
}

// load @ 14f8e71a0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: __int64 __cdecl std::_Atomic_storage<__int64,8>::load(enum std::memory_order)const
   __ptr64 */

__int64 __thiscall
std::_Atomic_storage<__int64,8>::load(_Atomic_storage<__int64,8> *this,memory_order param_1)

{
  return (this->_Storage)._Value;
}

// log_severity @ 14f8e71c0

/* public: enum absl::lts_20240722::LogSeverity __cdecl
   absl::lts_20240722::LogEntry::log_severity(void)const __ptr64 */

LogSeverity __thiscall absl::lts_20240722::LogEntry::log_severity(LogEntry *this)

{
  return this->severity_;
}

// max @ 14f8e71d0

/* public: static unsigned __int64 __cdecl std::numeric_limits<unsigned __int64>::max(void) */

__uint64 __cdecl std::numeric_limits<unsigned___int64>::max(void)

{
  return 0xffffffffffffffff;
}

// prefix @ 14f8e71e0

/* public: bool __cdecl absl::lts_20240722::LogEntry::prefix(void)const __ptr64 */

bool __thiscall absl::lts_20240722::LogEntry::prefix(LogEntry *this)

{
  return this->prefix_;
}

// push_back @ 14f8e71f0

/* public: void __cdecl absl::lts_20240722::InlinedVector<class absl::lts_20240722::LogSink *
   __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink * __ptr64> >::push_back(class
   absl::lts_20240722::LogSink * __ptr64 const & __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::push_back(InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
            *this,LogSink **param_1)

{
  InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
  **ppIVar1;
  InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
  *local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
  *local_20;
  ulonglong local_18;
  InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
  *local_10;
  
  if (((byte)*this & 1) == 0) {
    local_20 = this + 8;
    ppIVar1 = &local_20;
    local_18 = *(ulonglong *)this >> 1;
    local_10 = (InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                *)0x10;
  }
  else {
    local_38 = *(InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
                 **)(this + 8);
    local_28 = *(undefined8 *)(this + 0x10);
    ppIVar1 = &local_38;
    uStack_30 = *(ulonglong *)this >> 1;
  }
  local_10 = ppIVar1[2];
  if (ppIVar1[1] != local_10) {
    *(LogSink **)(*ppIVar1 + (longlong)ppIVar1[1] * 8) = *param_1;
    *(longlong *)this = *(longlong *)this + 2;
    return;
  }
  inlined_vector_internal::
  Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
  ::EmplaceBackSlow<absl::lts_20240722::LogSink*___ptr64_const&___ptr64>
            ((Storage<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
              *)this,param_1);
  return;
}

// remove_prefix @ 14f8e7290

/* public: void __cdecl absl::lts_20240722::Span<char>::remove_prefix(unsigned __int64) __ptr64 */

void __thiscall absl::lts_20240722::Span<char>::remove_prefix(Span<char> *this,__uint64 param_1)

{
  this->ptr_ = this->ptr_ + param_1;
  this->len_ = this->len_ - param_1;
  return;
}

// remove_prefix @ 14f8e72a0

/* public: void __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::remove_prefix(unsigned __int64) __ptr64 */

void __thiscall
std::basic_string_view<char,std::char_traits<char>_>::remove_prefix
          (basic_string_view<char,std::char_traits<char>_> *this,__uint64 param_1)

{
  this->_Mydata = this->_Mydata + param_1;
  this->_Mysize = this->_Mysize - param_1;
  return;
}

// remove_suffix @ 14f8e72b0

/* public: void __cdecl absl::lts_20240722::Span<char>::remove_suffix(unsigned __int64) __ptr64 */

void __thiscall absl::lts_20240722::Span<char>::remove_suffix(Span<char> *this,__uint64 param_1)

{
  this->len_ = this->len_ - param_1;
  return;
}

// size @ 14f8e72c0

/* public: unsigned __int64 __cdecl absl::lts_20240722::InlinedVector<class
   absl::lts_20240722::LogSink * __ptr64,16,class std::allocator<class absl::lts_20240722::LogSink *
   __ptr64> >::size(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
::size(InlinedVector<absl::lts_20240722::LogSink*___ptr64,16,std::allocator<absl::lts_20240722::LogSink*___ptr64>_>
       *this)

{
  return *(ulonglong *)this >> 1;
}

// size @ 14f8e72d0

/* public: unsigned __int64 __cdecl absl::lts_20240722::Span<char const >::size(void)const __ptr64
    */

__uint64 __thiscall absl::lts_20240722::Span<char_const_>::size(Span<char_const_> *this)

{
  return this->len_;
}

// size @ 14f8e72e0

/* public: unsigned __int64 __cdecl absl::lts_20240722::Span<char>::size(void)const __ptr64 */

__uint64 __thiscall absl::lts_20240722::Span<char>::size(Span<char> *this)

{
  return this->len_;
}

// size @ 14f8e72f0

/* public: unsigned __int64 __cdecl std::array<char,15000>::size(void)const __ptr64 */

__uint64 __thiscall std::array<char,15000>::size(array<char,15000> *this)

{
  return 15000;
}

// source_basename @ 14f8e7300

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::LogEntry::source_basename(void)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::LogEntry::source_basename
          (LogEntry *this,basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__)

{
  ulong64 uVar1;
  
  uVar1 = (this->base_filename_)._Mysize;
  __return_storage_ptr__->_Mydata = (this->base_filename_)._Mydata;
  __return_storage_ptr__->_Mysize = uVar1;
  return __return_storage_ptr__;
}

// source_filename @ 14f8e7320

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::LogEntry::source_filename(void)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::LogEntry::source_filename
          (LogEntry *this,basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__)

{
  ulong64 uVar1;
  
  uVar1 = (this->full_filename_)._Mysize;
  __return_storage_ptr__->_Mydata = (this->full_filename_)._Mydata;
  __return_storage_ptr__->_Mysize = uVar1;
  return __return_storage_ptr__;
}

// source_line @ 14f8e7330

/* public: int __cdecl absl::lts_20240722::LogEntry::source_line(void)const __ptr64 */

int __thiscall absl::lts_20240722::LogEntry::source_line(LogEntry *this)

{
  return this->line_;
}

// stream @ 14f8e7340

/* public: class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   absl::lts_20240722::log_internal::LogMessage::OstreamView::stream(void) __ptr64 */

basic_ostream<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::log_internal::LogMessage::OstreamView::stream(OstreamView *this)

{
  return (basic_ostream<char,std::char_traits<char>_> *)(this->data_ + 0x120);
}

// string_value @ 14f8e7360

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::log_internal::ProtoField::string_value(void)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::log_internal::ProtoField::string_value
          (ProtoField *this,basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(this + 0x18);
  __return_storage_ptr__->_Mysize = *(ulong64 *)(this + 0x20);
  __return_storage_ptr__->_Mydata = pcVar1;
  return __return_storage_ptr__;
}

// subspan @ 14f8e7380

/* public: class absl::lts_20240722::Span<char> __cdecl
   absl::lts_20240722::Span<char>::subspan(unsigned __int64,unsigned __int64)const __ptr64 */

Span<char> * __thiscall
absl::lts_20240722::Span<char>::subspan
          (Span<char> *this,Span<char> *__return_storage_ptr__,__uint64 param_1,__uint64 param_2)

{
  ulonglong uVar1;
  
  if (param_1 <= this->len_) {
    uVar1 = this->len_ - param_1;
    if (param_2 < uVar1) {
      uVar1 = param_2;
    }
    __return_storage_ptr__->ptr_ = this->ptr_ + param_1;
    __return_storage_ptr__->len_ = uVar1;
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  base_internal::ThrowStdOutOfRange("pos > size()");
}

// substr @ 14f8e73d0

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   std::basic_string_view<char,struct std::char_traits<char> >::substr(unsigned __int64,unsigned
   __int64)const __ptr64 */

__uint64 __thiscall
std::basic_string_view<char,std::char_traits<char>_>::substr
          (basic_string_view<char,std::char_traits<char>_> *this,__uint64 param_1,__uint64 param_2)

{
  ulonglong in_R9;
  ulonglong uVar1;
  
  if (param_2 <= this->_Mysize) {
    uVar1 = this->_Mysize - param_2;
    *(char **)param_1 = this->_Mydata + param_2;
    if (uVar1 < in_R9) {
      in_R9 = uVar1;
    }
    *(ulonglong *)(param_1 + 8) = in_R9;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _Xran();
}

// tag @ 14f8e7410

/* public: unsigned __int64 __cdecl absl::lts_20240722::log_internal::ProtoField::tag(void)const
   __ptr64 */

__uint64 __thiscall absl::lts_20240722::log_internal::ProtoField::tag(ProtoField *this)

{
  return *(__uint64 *)this;
}

// tid @ 14f8e7420

/* public: unsigned int __cdecl absl::lts_20240722::LogEntry::tid(void)const __ptr64 */

uint __thiscall absl::lts_20240722::LogEntry::tid(LogEntry *this)

{
  return this->tid_;
}

// timestamp @ 14f8e7430

/* public: class absl::lts_20240722::Time __cdecl absl::lts_20240722::LogEntry::timestamp(void)const
   __ptr64 */

Time * __thiscall
absl::lts_20240722::LogEntry::timestamp(LogEntry *this,Time *__return_storage_ptr__)

{
  uint uVar1;
  
  uVar1 = (this->timestamp_).rep_.rep_lo_;
  (__return_storage_ptr__->rep_).rep_hi_ = (this->timestamp_).rep_.rep_hi_;
  (__return_storage_ptr__->rep_).rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// type @ 14f8e7450

/* public: enum absl::lts_20240722::log_internal::WireType __cdecl
   absl::lts_20240722::log_internal::ProtoField::type(void)const __ptr64 */

WireType __thiscall absl::lts_20240722::log_internal::ProtoField::type(ProtoField *this)

{
  return (WireType)*(undefined8 *)(this + 8);
}

// verbosity @ 14f8e7460

/* public: int __cdecl absl::lts_20240722::LogEntry::verbosity(void)const __ptr64 */

int __thiscall absl::lts_20240722::LogEntry::verbosity(LogEntry *this)

{
  return this->verbose_level_;
}

// FUN_150293120 @ 150293120

void FUN_150293120(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

// FUN_150293160 @ 150293160

void FUN_150293160(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

// FUN_150293180 @ 150293180

void FUN_150293180(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x28),0x76d0);
  return;
}


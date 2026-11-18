// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 239

// FormatArgImpl<char_[6]> @ 14fa78db0

/* public: __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::FormatArgImpl<char
   [6]>(char const (& __ptr64)[6]) __ptr64 */

FormatArgImpl * __thiscall
absl::lts_20240722::str_format_internal::FormatArgImpl::FormatArgImpl<char_[6]>
          (FormatArgImpl *this,char *param_1)

{
  (this->data_).ptr = param_1;
  this->dispatcher_ = Dispatch<char_const*___ptr64>;
  return this;
}

// pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64><std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64> @ 14fa78dd0

/* public: __cdecl std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64>::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64><class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > && __ptr64>(struct std::piecewise_construct_t,class std::tuple<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > &&
   __ptr64>,class std::tuple<>) __ptr64 */

pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
* __thiscall
std::
pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
::
pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64><std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>
          (pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
           *this,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_3;
  uVar2 = puVar1[1];
  *(undefined8 *)this = *puVar1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = puVar1[2];
  *(undefined8 *)(this + 0x18) = 0;
  return this;
}

// _Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,1><> @ 14fa78e00

/* public: __cdecl std::_Compressed_pair<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64>
   >,class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >
   >,1>::_Compressed_pair<class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> >,class
   std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >,1><>(struct
   std::_Zero_then_variadic_args_t) __ptr64 */

_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,1>
::
_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,1><>
          (_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,1>
           *this,_Zero_then_variadic_args_t param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// _Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,1><> @ 14fa78e20

/* public: __cdecl std::_Compressed_pair<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64>,void * __ptr64> >,class std::_Tree_val<struct std::_Tree_simple_types<struct
   std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64> > >,1>::_Compressed_pair<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64>,void * __ptr64> >,class std::_Tree_val<struct std::_Tree_simple_types<struct
   std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64> > >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64 */

_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,1>
::
_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,1><>
          (_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,1>
           *this,_Zero_then_variadic_args_t param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// _Variant_base<__int64,std::basic_string_view<char,std::char_traits<char>_>_><1,std::basic_string_view<char,std::char_traits<char>_>&___ptr64,0> @ 14fa78e40

/* public: __cdecl std::_Variant_base<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >::_Variant_base<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > ><1,class std::basic_string_view<char,struct std::char_traits<char> > &
   __ptr64,0>(struct std::in_place_index_t<1>,class std::basic_string_view<char,struct
   std::char_traits<char> > & __ptr64) __ptr64 */

_Variant_base<__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __thiscall
std::_Variant_base<__int64,std::basic_string_view<char,std::char_traits<char>_>_>::
_Variant_base<__int64,std::basic_string_view<char,std::char_traits<char>_>_><1,std::basic_string_view<char,std::char_traits<char>_>&___ptr64,0>
          (_Variant_base<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *this,
          undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3[1];
  *(undefined8 *)this = *param_3;
  *(undefined8 *)(this + 8) = uVar1;
  this[0x10] = (_Variant_base<__int64,std::basic_string_view<char,std::char_traits<char>_>_>)0x1;
  return this;
}

// _Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_><1,std::basic_string_view<char,std::char_traits<char>_>&___ptr64,0> @ 14fa78e60

/* public: __cdecl std::_Variant_storage_<1,__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >::_Variant_storage_<1,__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > ><1,class std::basic_string_view<char,struct std::char_traits<char> > &
   __ptr64,0>(struct std::integral_constant<unsigned __int64,1>,class
   std::basic_string_view<char,struct std::char_traits<char> > & __ptr64) __ptr64 */

_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __thiscall
std::_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_>::
_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_><1,std::basic_string_view<char,std::char_traits<char>_>&___ptr64,0>
          (_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_> *this,
          undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3[1];
  *(undefined8 *)this = *param_3;
  *(undefined8 *)(this + 8) = uVar1;
  return this;
}

// _Variant_base<__int64,std::basic_string_view<char,std::char_traits<char>_>_><0,__int64&___ptr64,0> @ 14fa78e80

/* public: __cdecl std::_Variant_base<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >::_Variant_base<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > ><0,__int64 & __ptr64,0>(struct std::in_place_index_t<0>,__int64 &
   __ptr64) __ptr64 */

_Variant_base<__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __thiscall
std::_Variant_base<__int64,std::basic_string_view<char,std::char_traits<char>_>_>::
_Variant_base<__int64,std::basic_string_view<char,std::char_traits<char>_>_><0,__int64&___ptr64,0>
          (_Variant_base<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *this,
          undefined8 param_2,undefined8 *param_3)

{
  *(undefined8 *)this = *param_3;
  this[0x10] = (_Variant_base<__int64,std::basic_string_view<char,std::char_traits<char>_>_>)0x0;
  return this;
}

// variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_><std::basic_string_view<char,std::char_traits<char>_>&___ptr64,0> @ 14fa78ea0

/* public: __cdecl std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > ><class std::basic_string_view<char,struct std::char_traits<char> > &
   __ptr64,0>(class std::basic_string_view<char,struct std::char_traits<char> > & __ptr64) __ptr64
    */

variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __thiscall
std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>::
variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_><std::basic_string_view<char,std::char_traits<char>_>&___ptr64,0>
          (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *this,
          basic_string_view<char,std::char_traits<char>_> *param_1)

{
  ulong64 uVar1;
  
  uVar1 = param_1->_Mysize;
  *(char **)this = param_1->_Mydata;
  *(ulong64 *)(this + 8) = uVar1;
  this[0x10] = (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>)0x1;
  return this;
}

// _Variant_storage_<1,std::basic_string_view<char,std::char_traits<char>_>_><std::basic_string_view<char,std::char_traits<char>_>&___ptr64> @ 14fa78ec0

/* public: __cdecl std::_Variant_storage_<1,class std::basic_string_view<char,struct
   std::char_traits<char> > >::_Variant_storage_<1,class std::basic_string_view<char,struct
   std::char_traits<char> > ><class std::basic_string_view<char,struct std::char_traits<char> > &
   __ptr64>(struct std::integral_constant<unsigned __int64,0>,class
   std::basic_string_view<char,struct std::char_traits<char> > & __ptr64) __ptr64 */

_Variant_storage_<1,std::basic_string_view<char,std::char_traits<char>_>_> * __thiscall
std::_Variant_storage_<1,std::basic_string_view<char,std::char_traits<char>_>_>::
_Variant_storage_<1,std::basic_string_view<char,std::char_traits<char>_>_><std::basic_string_view<char,std::char_traits<char>_>&___ptr64>
          (_Variant_storage_<1,std::basic_string_view<char,std::char_traits<char>_>_> *this,
          integral_constant<unsigned___int64,0> param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  ulong64 uVar1;
  
  uVar1 = param_2->_Mysize;
  *(char **)this = param_2->_Mydata;
  *(ulong64 *)(this + 8) = uVar1;
  return this;
}

// variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_><__int64&___ptr64,0> @ 14fa78ee0

/* public: __cdecl std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > ><__int64 & __ptr64,0>(__int64 & __ptr64) __ptr64 */

variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __thiscall
std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>::
variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_><__int64&___ptr64,0>
          (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *this,
          __int64 *param_1)

{
  *(__int64 *)this = *param_1;
  this[0x10] = (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>)0x0;
  return this;
}

// _Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_><__int64&___ptr64> @ 14fa78f00

/* public: __cdecl std::_Variant_storage_<1,__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >::_Variant_storage_<1,__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > ><__int64 & __ptr64>(struct std::integral_constant<unsigned
   __int64,0>,__int64 & __ptr64) __ptr64 */

_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __thiscall
std::_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_>::
_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_><__int64&___ptr64>
          (_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_> *this,
          integral_constant<unsigned___int64,0> param_1,__int64 *param_2)

{
  *(__int64 *)this = *param_2;
  return this;
}

// pair<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,bool><std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64_const&___ptr64,bool,0> @ 14fa78f10

/* public: __cdecl std::pair<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64,bool>::pair<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64,bool><struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   const & __ptr64,bool,0>(struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   const & __ptr64,bool && __ptr64) __ptr64 */

pair<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,bool>
* __thiscall
std::
pair<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,bool>
::
pair<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,bool><std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64_const&___ptr64,bool,0>
          (pair<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,bool>
           *this,_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                 **param_1,bool *param_2)

{
  *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
    **)this = *param_1;
  this[8] = (pair<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,bool>
             )*param_2;
  return this;
}

// pair<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,bool><std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64_const&___ptr64,bool,0> @ 14fa78f30

/* public: __cdecl std::pair<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> *
   __ptr64,bool>::pair<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> *
   __ptr64,bool><struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 const &
   __ptr64,bool,0>(struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 const &
   __ptr64,bool && __ptr64) __ptr64 */

pair<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,bool>
* __thiscall
std::
pair<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,bool>
::
pair<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,bool><std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64_const&___ptr64,bool,0>
          (pair<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,bool>
           *this,_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                 **param_1,bool *param_2)

{
  *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
    **)this = *param_1;
  this[8] = (pair<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,bool>
             )*param_2;
  return this;
}

// _Compressed_pair<std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,1>,1><std::less<std::basic_string_view<char,std::char_traits<char>_>_>_const&___ptr64,std::_Zero_then_variadic_args_t> @ 14fa78f50

/* public: __cdecl std::_Compressed_pair<struct std::less<class std::basic_string_view<char,struct
   std::char_traits<char> > >,class std::_Compressed_pair<class std::allocator<struct
   std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct std::char_traits<char>
   > const ,class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64>
   >,class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >
   >,1>,1>::_Compressed_pair<struct std::less<class std::basic_string_view<char,struct
   std::char_traits<char> > >,class std::_Compressed_pair<class std::allocator<struct
   std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct std::char_traits<char>
   > const ,class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64>
   >,class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >,1>,1><struct
   std::less<class std::basic_string_view<char,struct std::char_traits<char> > > const &
   __ptr64,struct std::_Zero_then_variadic_args_t>(struct std::_One_then_variadic_args_t,struct
   std::less<class std::basic_string_view<char,struct std::char_traits<char> > > const &
   __ptr64,struct std::_Zero_then_variadic_args_t && __ptr64) __ptr64 */

_Compressed_pair<std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,1>,1>
* __thiscall
std::
_Compressed_pair<std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,1>,1>
::
_Compressed_pair<std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,1>,1><std::less<std::basic_string_view<char,std::char_traits<char>_>_>_const&___ptr64,std::_Zero_then_variadic_args_t>
          (_Compressed_pair<std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,1>,1>
           *this,_One_then_variadic_args_t param_1,
          less<std::basic_string_view<char,std::char_traits<char>_>_> *param_2,
          _Zero_then_variadic_args_t *param_3)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// _Compressed_pair<std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,1>,1><std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>_const&___ptr64,std::_Zero_then_variadic_args_t> @ 14fa78f70

/* public: __cdecl std::_Compressed_pair<struct std::less<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > >,class std::_Compressed_pair<class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> >,class
   std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,1>,1>::_Compressed_pair<struct
   std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::_Compressed_pair<class std::allocator<struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> >,class
   std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,1>,1><struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > > const
   & __ptr64,struct std::_Zero_then_variadic_args_t>(struct std::_One_then_variadic_args_t,struct
   std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > > const & __ptr64,struct std::_Zero_then_variadic_args_t && __ptr64)
   __ptr64 */

_Compressed_pair<std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,1>,1>
* __thiscall
std::
_Compressed_pair<std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,1>,1>
::
_Compressed_pair<std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,1>,1><std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>_const&___ptr64,std::_Zero_then_variadic_args_t>
          (_Compressed_pair<std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,1>,1>
           *this,_One_then_variadic_args_t param_1,
          less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>
          *param_2,_Zero_then_variadic_args_t *param_3)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// _Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_><std::piecewise_construct_t_const&___ptr64,std::tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>,std::tuple<>_> @ 14fa78f90

/* public: __cdecl std::_Tree_temp_node<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64>,void * __ptr64> > >::_Tree_temp_node<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64>,void * __ptr64> > ><struct std::piecewise_construct_t const & __ptr64,class
   std::tuple<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > && __ptr64>,class std::tuple<> >(class std::allocator<struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > & __ptr64,struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64,struct
   std::piecewise_construct_t const & __ptr64,class std::tuple<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > && __ptr64> && __ptr64,class
   std::tuple<> && __ptr64) __ptr64 */

_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
* __thiscall
std::
_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
::
_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_><std::piecewise_construct_t_const&___ptr64,std::tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>,std::tuple<>_>
          (_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
           *this,allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
                 *param_1,
          _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
          *param_2,piecewise_construct_t *param_3,
          tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>
          *param_4,tuple<> *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  *(allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
    **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 8) = 0;
  pvVar3 = ::operator_new(0x40);
  *(void **)(this + 8) = pvVar3;
  puVar1 = *(undefined8 **)param_4;
  uVar2 = puVar1[1];
  *(undefined8 *)((longlong)pvVar3 + 0x20) = *puVar1;
  *(undefined8 *)((longlong)pvVar3 + 0x28) = uVar2;
  *(undefined8 *)((longlong)pvVar3 + 0x30) = puVar1[2];
  *(undefined8 *)((longlong)pvVar3 + 0x38) = 0;
  **(undefined8 **)(this + 8) = param_2;
  *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
    **)(*(longlong *)(this + 8) + 8) = param_2;
  *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
    **)(*(longlong *)(this + 8) + 0x10) = param_2;
  *(undefined1 *)(*(longlong *)(this + 8) + 0x18) = 0;
  *(undefined1 *)(*(longlong *)(this + 8) + 0x19) = 0;
  return this;
}

// _Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_><std::piecewise_construct_t_const&___ptr64,std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64>,std::tuple<>_> @ 14fa79030

/* public: __cdecl std::_Tree_temp_node<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> >
   >::_Tree_temp_node<class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > ><struct
   std::piecewise_construct_t const & __ptr64,class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64>,class std::tuple<>
   >(class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > &
   __ptr64,struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64,struct std::piecewise_construct_t const & __ptr64,class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64> && __ptr64,class
   std::tuple<> && __ptr64) __ptr64 */

_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
* __thiscall
std::
_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
::
_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_><std::piecewise_construct_t_const&___ptr64,std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64>,std::tuple<>_>
          (_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
           *this,allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
                 *param_1,
          _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
          *param_2,piecewise_construct_t *param_3,
          tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64> *param_4,
          tuple<> *param_5)

{
  undefined8 uVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
    **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  pvVar2 = ::operator_new(0x40);
  *(void **)(this + 8) = pvVar2;
  uVar1 = (*(undefined8 **)param_4)[1];
  *(undefined8 *)((longlong)pvVar2 + 0x20) = **(undefined8 **)param_4;
  *(undefined8 *)((longlong)pvVar2 + 0x28) = uVar1;
  *(undefined8 *)((longlong)pvVar2 + 0x30) = 0;
  *(undefined8 *)((longlong)pvVar2 + 0x38) = 0;
  pvVar3 = ::operator_new(0x40);
  *(void **)pvVar3 = pvVar3;
  *(void **)((longlong)pvVar3 + 8) = pvVar3;
  *(void **)((longlong)pvVar3 + 0x10) = pvVar3;
  *(undefined2 *)((longlong)pvVar3 + 0x18) = 0x101;
  *(undefined8 *)((longlong)pvVar2 + 0x30) = pvVar3;
  **(undefined8 **)(this + 8) = param_2;
  *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
    **)(*(longlong *)(this + 8) + 8) = param_2;
  *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
    **)(*(longlong *)(this + 8) + 0x10) = param_2;
  *(undefined1 *)(*(longlong *)(this + 8) + 0x18) = 0;
  *(undefined1 *)(*(longlong *)(this + 8) + 0x19) = 0;
  return this;
}

// pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_><std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64> @ 14fa790e0

/* public: __cdecl std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const
   ,class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > ><class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64>(struct
   std::piecewise_construct_t,class std::tuple<class std::basic_string_view<char,struct
   std::char_traits<char> > const & __ptr64>,class std::tuple<>) __ptr64 */

pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
* __thiscall
std::
pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
::
pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_><std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64>
          (pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
           *this,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  uVar1 = ((undefined8 *)*param_3)[1];
  *(undefined8 *)this = *(undefined8 *)*param_3;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  pvVar2 = ::operator_new(0x40);
  *(void **)pvVar2 = pvVar2;
  *(void **)((longlong)pvVar2 + 8) = pvVar2;
  *(void **)((longlong)pvVar2 + 0x10) = pvVar2;
  *(undefined2 *)((longlong)pvVar2 + 0x18) = 0x101;
  *(void **)(this + 0x10) = pvVar2;
  return this;
}

// FormatArgImpl<double> @ 14fa79140

/* public: __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::FormatArgImpl<double>(double const &
   __ptr64) __ptr64 */

FormatArgImpl * __thiscall
absl::lts_20240722::str_format_internal::FormatArgImpl::FormatArgImpl<double>
          (FormatArgImpl *this,double *param_1)

{
  this->data_ = (Data)*param_1;
  this->dispatcher_ = Dispatch<double>;
  return this;
}

// pair<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,bool><std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,bool,0> @ 14fa79160

/* public: __cdecl std::pair<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64,bool>::pair<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64,bool><struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64,bool,0>(struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 &&
   __ptr64,bool && __ptr64) __ptr64 */

pair<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,bool>
* __thiscall
std::
pair<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,bool>
::
pair<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,bool><std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,bool,0>
          (pair<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,bool>
           *this,_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                 **param_1,bool *param_2)

{
  *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
    **)this = *param_1;
  this[8] = (pair<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,bool>
             )*param_2;
  return this;
}

// pair<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,bool><std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,bool,0> @ 14fa79180

/* public: __cdecl std::pair<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> *
   __ptr64,bool>::pair<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> *
   __ptr64,bool><struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> *
   __ptr64,bool,0>(struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 &&
   __ptr64,bool && __ptr64) __ptr64 */

pair<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,bool>
* __thiscall
std::
pair<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,bool>
::
pair<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,bool><std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,bool,0>
          (pair<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,bool>
           *this,_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                 **param_1,bool *param_2)

{
  *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
    **)this = *param_1;
  this[8] = (pair<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,bool>
             )*param_2;
  return this;
}

// tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64><std::_Exact_args_t,std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,0> @ 14fa791a0

/* public: __cdecl std::tuple<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > && __ptr64>::tuple<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > && __ptr64><struct
   std::_Exact_args_t,class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,0>(struct std::_Exact_args_t,class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > && __ptr64) __ptr64 */

tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64> *
__thiscall
std::tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>::
tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64><std::_Exact_args_t,std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,0>
          (tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>
           *this,_Exact_args_t param_1,
          variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *param_2)

{
  *(variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> **)this = param_2;
  return this;
}

// pair<std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,struct_std::char_traits<char>_>_><std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,struct_std::char_traits<char>_>,0> @ 14fa791b0

/* public: __cdecl std::pair<class std::basic_string_view<char,struct std::char_traits<char> >,class
   std::basic_string_view<char,struct std::char_traits<char> > >::pair<class
   std::basic_string_view<char,struct std::char_traits<char> >,class
   std::basic_string_view<char,struct std::char_traits<char> > ><class
   std::basic_string_view<char,struct std::char_traits<char> >,class
   std::basic_string_view<char,struct std::char_traits<char> >,0>(class
   std::basic_string_view<char,struct std::char_traits<char> > && __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> > && __ptr64) __ptr64 */

pair<std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,struct_std::char_traits<char>_>_>
* __thiscall
std::
pair<std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,struct_std::char_traits<char>_>_>
::
pair<std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,struct_std::char_traits<char>_>_><std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,struct_std::char_traits<char>_>,0>
          (pair<std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,struct_std::char_traits<char>_>_>
           *this,basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  ulong64 uVar1;
  
  uVar1 = param_1->_Mysize;
  *(char **)this = param_1->_Mydata;
  *(ulong64 *)(this + 8) = uVar1;
  uVar1 = param_2->_Mysize;
  *(char **)(this + 0x10) = param_2->_Mydata;
  *(ulong64 *)(this + 0x18) = uVar1;
  return this;
}

// pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64><std::tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>,std::tuple<>,0> @ 14fa791d0

/* public: __cdecl std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64>::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64><class std::tuple<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > && __ptr64>,class std::tuple<>,0>(class std::tuple<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > &&
   __ptr64> & __ptr64,class std::tuple<> & __ptr64,struct std::integer_sequence<unsigned
   __int64,0>,struct std::integer_sequence<unsigned __int64>) __ptr64 */

pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
* __thiscall
std::
pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
::
pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64><std::tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>,std::tuple<>,0>
          (pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
           *this,tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>
                 *param_1,tuple<> *param_2,integer_sequence<unsigned___int64,0> param_3,
          integer_sequence<unsigned___int64> param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)param_1;
  uVar2 = puVar1[1];
  *(undefined8 *)this = *puVar1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = puVar1[2];
  *(undefined8 *)(this + 0x18) = 0;
  return this;
}

// pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_><std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64>,std::tuple<>,0> @ 14fa79200

/* public: __cdecl std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const
   ,class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > ><class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64>,class
   std::tuple<>,0>(class std::tuple<class std::basic_string_view<char,struct std::char_traits<char>
   > const & __ptr64> & __ptr64,class std::tuple<> & __ptr64,struct std::integer_sequence<unsigned
   __int64,0>,struct std::integer_sequence<unsigned __int64>) __ptr64 */

pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
* __thiscall
std::
pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
::
pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_><std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64>,std::tuple<>,0>
          (pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
           *this,tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64> *param_1
          ,tuple<> *param_2,integer_sequence<unsigned___int64,0> param_3,
          integer_sequence<unsigned___int64> param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  
  uVar1 = (*(undefined8 **)param_1)[1];
  *(undefined8 *)this = **(undefined8 **)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  pvVar2 = ::operator_new(0x40);
  *(void **)pvVar2 = pvVar2;
  *(void **)((longlong)pvVar2 + 8) = pvVar2;
  *(void **)((longlong)pvVar2 + 0x10) = pvVar2;
  *(undefined2 *)((longlong)pvVar2 + 0x18) = 0x101;
  *(void **)(this + 0x10) = pvVar2;
  return this;
}

// tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64><std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,0> @ 14fa79260

/* public: __cdecl std::tuple<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > && __ptr64>::tuple<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > && __ptr64><class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,0>(class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > &&
   __ptr64) __ptr64 */

tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64> *
__thiscall
std::tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>::
tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64><std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,0>
          (tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>
           *this,variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *param_1)

{
  *(variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> **)this = param_1;
  return this;
}

// _Tuple_val<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64><std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_> @ 14fa79270

/* public: __cdecl std::_Tuple_val<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > && __ptr64>::_Tuple_val<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > &&
   __ptr64><class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >(class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > && __ptr64) __ptr64 */

_Tuple_val<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64> *
__thiscall
std::
_Tuple_val<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>::
_Tuple_val<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64><std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>
          (_Tuple_val<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>
           *this,variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *param_1)

{
  *(variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> **)this = param_1;
  return this;
}

// operator<std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,struct_std::char_traits<char>_>,0>_struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>,class_std::basic_string_view<char,struct_std::char_traits<char>_>_> @ 14fa79280

/* public: __cdecl absl::lts_20240722::strings_internal::Splitter<class
   absl::lts_20240722::ByChar,struct absl::lts_20240722::AllowEmpty,class
   std::basic_string_view<char,struct std::char_traits<char> > >::operator<class
   std::basic_string_view<char,struct std::char_traits<char> >,class
   std::basic_string_view<char,struct std::char_traits<char> >,0> struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> >,class
   std::basic_string_view<char,struct std::char_traits<char> > >(void)const __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::
Splitter<absl::lts_20240722::ByChar,absl::lts_20240722::AllowEmpty,std::basic_string_view<char,std::char_traits<char>_>_>
::
operator<std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,struct_std::char_traits<char>_>,0>_struct_std__pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>
          (Splitter<absl::lts_20240722::ByChar,absl::lts_20240722::AllowEmpty,std::basic_string_view<char,std::char_traits<char>_>_>
           *this)

{
  ConvertToPair<std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,struct_std::char_traits<char>_>_>
            (this);
  return;
}

// operator()<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,std::basic_string_view<char,struct_std::char_traits<char>_>_const&___ptr64> @ 14fa792a0

/* public: UNKNOWN __cdecl std::compare_three_way::operator()<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64>(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
std::compare_three_way::
operator()<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64,std::basic_string_view<char,struct_std::char_traits<char>_>_const&___ptr64>
          (compare_three_way *this,basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong _Size;
  undefined8 *in_R9;
  
  uVar1 = param_2->_Mysize;
  uVar2 = in_R9[1];
  _Size = uVar1;
  if (uVar2 < uVar1) {
    _Size = uVar2;
  }
  iVar4 = memcmp(param_2->_Mydata,(void *)*in_R9,_Size);
  if (iVar4 == 0) {
    if (uVar2 <= uVar1) {
      if (uVar1 == uVar2) {
        *(undefined1 *)&param_1->_Mydata = 0;
        return param_1;
      }
      goto LAB_14fa7930f;
    }
  }
  else if (-1 < iVar4) {
LAB_14fa7930f:
    uVar3 = 1;
    goto LAB_14fa792dd;
  }
  uVar3 = 0xff;
LAB_14fa792dd:
  *(undefined1 *)&param_1->_Mydata = uVar3;
  return param_1;
}

// operator()<__int64_const&___ptr64,__int64_const&___ptr64> @ 14fa79320

/* public: UNKNOWN __cdecl std::compare_three_way::operator()<__int64 const & __ptr64,__int64 const
   & __ptr64>(__int64 const & __ptr64,__int64 const & __ptr64)const __ptr64 */

__int64 * __thiscall
std::compare_three_way::operator()<__int64_const&___ptr64,__int64_const&___ptr64>
          (compare_three_way *this,__int64 *param_1,__int64 *param_2)

{
  undefined1 uVar1;
  longlong *in_R9;
  
  if (*param_2 == *in_R9) {
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  uVar1 = 0xff;
  if (*in_R9 <= *param_2) {
    uVar1 = 1;
  }
  *(undefined1 *)param_1 = uVar1;
  return param_1;
}

// operator()<int,int> @ 14fa79350

/* public: UNKNOWN __cdecl std::compare_three_way::operator()<int,int>(int && __ptr64,int &&
   __ptr64)const __ptr64 */

int * __thiscall
std::compare_three_way::operator()<int,int>(compare_three_way *this,int *param_1,int *param_2)

{
  undefined1 uVar1;
  int *in_R9;
  
  if (*param_2 == *in_R9) {
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  uVar1 = 0xff;
  if (*in_R9 <= *param_2) {
    uVar1 = 1;
  }
  *(undefined1 *)param_1 = uVar1;
  return param_1;
}

// operator()<std::_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_>,-1> @ 14fa79380

/* public: struct std::strong_ordering __cdecl std::_Variant_relop_visitor2<struct
   std::compare_three_way,struct std::strong_ordering,__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >::operator()<class
   std::_Variant_storage_<1,__int64,class std::basic_string_view<char,struct std::char_traits<char>
   > >,-1>(struct std::_Tagged<class std::_Variant_storage_<1,__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const & __ptr64,-1>)const __ptr64
    */

strong_ordering __thiscall
std::
_Variant_relop_visitor2<std::compare_three_way,std::strong_ordering,__int64,std::basic_string_view<char,std::char_traits<char>_>_>
::
operator()<std::_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_>,_1>
          (undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  return (strong_ordering)(schar)param_2;
}

// operator()<std::basic_string_view<char,std::char_traits<char>_>,1> @ 14fa79390

/* public: struct std::strong_ordering __cdecl std::_Variant_relop_visitor2<struct
   std::compare_three_way,struct std::strong_ordering,__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >::operator()<class
   std::basic_string_view<char,struct std::char_traits<char> >,1>(struct std::_Tagged<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,1>)const __ptr64 */

strong_ordering __thiscall
std::
_Variant_relop_visitor2<std::compare_three_way,std::strong_ordering,__int64,std::basic_string_view<char,std::char_traits<char>_>_>
::operator()<std::basic_string_view<char,std::char_traits<char>_>,1>
          (_Variant_relop_visitor2<std::compare_three_way,std::strong_ordering,__int64,std::basic_string_view<char,std::char_traits<char>_>_>
           *this,undefined1 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong _Size;
  
  uVar1 = param_3[1];
  uVar2 = (*(undefined8 **)this)[1];
  _Size = uVar2;
  if (uVar1 < uVar2) {
    _Size = uVar1;
  }
  iVar4 = memcmp((void *)**(undefined8 **)this,(void *)*param_3,_Size);
  if (iVar4 == 0) {
    if (uVar1 <= uVar2) {
      if (uVar2 == uVar1) {
        *param_2 = 0;
        return (strong_ordering)(schar)param_2;
      }
      goto LAB_14fa793fc;
    }
  }
  else if (-1 < iVar4) {
LAB_14fa793fc:
    uVar3 = 1;
    goto LAB_14fa793ca;
  }
  uVar3 = 0xff;
LAB_14fa793ca:
  *param_2 = uVar3;
  return (strong_ordering)(schar)param_2;
}

// operator()<__int64,0> @ 14fa79410

/* public: struct std::strong_ordering __cdecl std::_Variant_relop_visitor2<struct
   std::compare_three_way,struct std::strong_ordering,__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >::operator()<__int64,0>(struct
   std::_Tagged<__int64 const & __ptr64,0>)const __ptr64 */

strong_ordering __thiscall
std::
_Variant_relop_visitor2<std::compare_three_way,std::strong_ordering,__int64,std::basic_string_view<char,std::char_traits<char>_>_>
::operator()<__int64,0>
          (_Variant_relop_visitor2<std::compare_three_way,std::strong_ordering,__int64,std::basic_string_view<char,std::char_traits<char>_>_>
           *this,undefined1 *param_2,longlong *param_3)

{
  undefined1 uVar1;
  
  if (**(longlong **)this == *param_3) {
    *param_2 = 0;
    return (strong_ordering)(schar)param_2;
  }
  uVar1 = 0xff;
  if (*param_3 <= **(longlong **)this) {
    uVar1 = 1;
  }
  *param_2 = uVar1;
  return (strong_ordering)(schar)param_2;
}

// ERROR_UNKNOWN_OPERATOR_TYPE<__int64,std::basic_string_view<char,std::char_traits<char>_>_> @ 14fa79440

/* struct std::strong_ordering __cdecl std::ERROR UNKNOWN OPERATOR TYPE<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >(class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const & __ptr64,class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const &
   __ptr64) */

strong_ordering __cdecl
std::ERROR_UNKNOWN_OPERATOR_TYPE<__int64,std::basic_string_view<char,std::char_traits<char>_>_>
          (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *param_1,
          variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *param_2)

{
  ulonglong uVar1;
  schar sVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong _Size;
  char cVar5;
  
  uVar4 = (longlong)(char)param_2[0x10] + 1;
  if ((longlong)(char)param_1[0x10] + 1U != uVar4) {
    cVar5 = '\x01';
    if ((longlong)(char)param_1[0x10] + 1U < uVar4) {
      cVar5 = -1;
    }
    if (cVar5 != '\0') {
      return (strong_ordering)cVar5;
    }
  }
  if ((longlong)(char)param_2[0x10] != -1) {
    if (uVar4 != 1) {
      uVar4 = *(ulonglong *)(param_2 + 8);
      uVar1 = *(ulonglong *)(param_1 + 8);
      _Size = uVar1;
      if (uVar4 < uVar1) {
        _Size = uVar4;
      }
      iVar3 = memcmp(*(void **)param_1,*(void **)param_2,_Size);
      if (iVar3 == 0) {
        if (uVar4 <= uVar1) {
          if (uVar1 != uVar4) {
            return (strong_ordering)'\x01';
          }
          return (strong_ordering)'\0';
        }
      }
      else if (-1 < iVar3) {
        return (strong_ordering)'\x01';
      }
      return (strong_ordering)-1;
    }
    if (*(longlong *)param_1 != *(longlong *)param_2) {
      sVar2 = '\x01';
      if (*(longlong *)param_1 < *(longlong *)param_2) {
        sVar2 = -1;
      }
      return (strong_ordering)sVar2;
    }
  }
  return (strong_ordering)'\0';
}

// ConvertToPair<std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,struct_std::char_traits<char>_>_> @ 14fa79510

/* private: struct std::pair<class std::basic_string_view<char,struct std::char_traits<char> >,class
   std::basic_string_view<char,struct std::char_traits<char> > > __cdecl
   absl::lts_20240722::strings_internal::Splitter<class absl::lts_20240722::ByChar,struct
   absl::lts_20240722::AllowEmpty,class std::basic_string_view<char,struct std::char_traits<char> >
   >::ConvertToPair<class std::basic_string_view<char,struct std::char_traits<char> >,class
   std::basic_string_view<char,struct std::char_traits<char> > >(void)const __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::
Splitter<absl::lts_20240722::ByChar,absl::lts_20240722::AllowEmpty,std::basic_string_view<char,std::char_traits<char>_>_>
::
ConvertToPair<std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,struct_std::char_traits<char>_>_>
          (Splitter<absl::lts_20240722::ByChar,absl::lts_20240722::AllowEmpty,std::basic_string_view<char,std::char_traits<char>_>_>
           *this)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *in_RDX;
  int iVar3;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  int local_40;
  longlong local_38;
  undefined8 uStack_30;
  Splitter<absl::lts_20240722::ByChar,absl::lts_20240722::AllowEmpty,std::basic_string_view<char,std::char_traits<char>_>_>
  *local_28;
  Splitter<absl::lts_20240722::ByChar,absl::lts_20240722::AllowEmpty,std::basic_string_view<char,std::char_traits<char>_>_>
  local_20 [8];
  
  local_20[0] = this[0x10];
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  iVar3 = 2;
  local_68 = 0;
  uStack_60 = 0;
  local_28 = this;
  if (*(longlong *)this == 0) {
    uStack_30._0_4_ = 0;
    uStack_30._4_4_ = 0;
    local_40 = 2;
    local_48 = *(ulonglong *)(this + 8);
    uStack_80._4_4_ = uStack_30._4_4_;
  }
  else {
    local_88 = *(longlong *)this;
    uStack_80 = *(ulonglong *)(this + 8);
    local_58 = local_88;
    uStack_50 = uStack_80;
    ByChar::Find((ByChar *)local_20,&local_78,&local_88);
    if (local_78 == uStack_50 + local_58) {
      local_40 = 1;
    }
    if (uStack_50 < local_48) {
                    /* WARNING: Subroutine does not return */
      std::basic_string_view<char,std::char_traits<char>_>::_Xran();
    }
    local_38 = local_48 + local_58;
    uStack_30 = (local_78 - local_48) - local_58;
    if (uStack_50 - local_48 < uStack_30) {
      uStack_30 = uStack_50 - local_48;
    }
    uStack_80._0_4_ = (undefined4)uStack_30;
    uStack_80._4_4_ = (undefined4)(uStack_30 >> 0x20);
    local_48 = local_48 + uStack_30 + local_70;
    uStack_30._0_4_ = (undefined4)uStack_80;
  }
  if ((local_40 == 2) && (local_48 == *(ulonglong *)(this + 8))) {
    local_38 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_80 = uStack_60;
  }
  else {
    uVar1 = *(ulonglong *)(this + 8);
    uStack_80 = CONCAT44(uStack_80._4_4_,(undefined4)uStack_30);
    uStack_60._0_4_ = (undefined4)uStack_30;
    uStack_60._4_4_ = uStack_80._4_4_;
    local_88 = local_38;
    if (local_40 != 1) {
      local_68 = *(longlong *)local_28;
      uStack_60 = *(ulonglong *)(local_28 + 8);
      local_58 = local_68;
      uStack_50 = uStack_60;
      ByChar::Find((ByChar *)local_20,&local_78,&local_58,local_48);
      iVar3 = local_40;
      if (local_78 == uStack_60 + local_68) {
        iVar3 = 1;
      }
      if (uStack_60 < local_48) {
        local_40 = iVar3;
                    /* WARNING: Subroutine does not return */
        std::basic_string_view<char,std::char_traits<char>_>::_Xran();
      }
      local_38 = local_48 + local_68;
      uVar2 = (local_78 - local_48) - local_68;
      if (uStack_60 - local_48 < uVar2) {
        uVar2 = uStack_60 - local_48;
      }
      uStack_60._0_4_ = (undefined4)uVar2;
      uStack_60._4_4_ = (undefined4)(uVar2 >> 0x20);
      local_48 = local_70 + local_48 + uVar2;
    }
    uStack_90 = (undefined4)uStack_60;
    uStack_8c = uStack_60._4_4_;
    local_68 = local_88;
    if ((iVar3 == 2) && (local_48 == uVar1)) {
      local_38 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
    }
  }
  *in_RDX = local_68;
  in_RDX[1] = uStack_80;
  in_RDX[2] = local_38;
  *(undefined4 *)(in_RDX + 3) = uStack_90;
  *(undefined4 *)((longlong)in_RDX + 0x1c) = uStack_8c;
  return;
}

// Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<262148,655355>_> @ 14fa79710

/* public: static class absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl const &
   __ptr64 __cdecl absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::Extract<class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<262148,655355> >(class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<262148,655355> const & __ptr64) */

UntypedFormatSpecImpl * __cdecl
absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::
Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<262148,655355>_>
          (FormatSpecTemplate<262148,655355> *param_1)

{
  return (UntypedFormatSpecImpl *)param_1;
}

// Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<654848>_> @ 14fa79720

/* public: static class absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl const &
   __ptr64 __cdecl absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::Extract<class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<654848> >(class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<654848> const & __ptr64) */

UntypedFormatSpecImpl * __cdecl
absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::
Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<654848>_>
          (FormatSpecTemplate<654848> *param_1)

{
  return (UntypedFormatSpecImpl *)param_1;
}

// Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355>_> @ 14fa79730

/* public: static class absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl const &
   __ptr64 __cdecl absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::Extract<class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355> >(class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355> const & __ptr64) */

UntypedFormatSpecImpl * __cdecl
absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::
Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355>_>
          (FormatSpecTemplate<655355,655355> *param_1)

{
  return (UntypedFormatSpecImpl *)param_1;
}

// Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<>_> @ 14fa79740

/* public: static class absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl const &
   __ptr64 __cdecl absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::Extract<class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<> >(class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<> const & __ptr64) */

UntypedFormatSpecImpl * __cdecl
absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::
Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<>_>
          (FormatSpecTemplate<> *param_1)

{
  return (UntypedFormatSpecImpl *)param_1;
}

// FPrintF<char_[6],unsigned___int64> @ 14fa79750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* int __cdecl absl::lts_20240722::FPrintF<char [6],unsigned __int64>(struct _iobuf * __ptr64,class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<262148,655355> const & __ptr64,char
   const (& __ptr64)[6],unsigned __int64 const & __ptr64) */

int __cdecl
absl::lts_20240722::FPrintF<char_[6],unsigned___int64>
          (_iobuf *param_1,FormatSpecTemplate<262148,655355> *param_2,char *param_3,
          __uint64 *param_4)

{
  int iVar1;
  undefined1 auStack_78 [32];
  char **local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *local_38;
  code *local_30;
  __uint64 local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_48 = *(undefined4 *)param_2;
  uStack_44 = *(undefined4 *)(param_2 + 4);
  uStack_40 = *(undefined4 *)(param_2 + 8);
  uStack_3c = *(undefined4 *)(param_2 + 0xc);
  local_30 = str_format_internal::FormatArgImpl::Dispatch<char_const*___ptr64>;
  local_28 = *param_4;
  local_20 = str_format_internal::FormatArgImpl::Dispatch<unsigned___int64>;
  local_58 = &local_38;
  uStack_50 = 2;
  local_38 = param_3;
  iVar1 = str_format_internal::FprintF(local_58._0_4_,&local_48,&local_58);
  return iVar1;
}

// FPrintF<> @ 14fa797e0

/* int __cdecl absl::lts_20240722::FPrintF<>(struct _iobuf * __ptr64,class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<> const & __ptr64) */

int __cdecl absl::lts_20240722::FPrintF<>(_iobuf *param_1,FormatSpecTemplate<> *param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = *(undefined4 *)param_2;
  uStack_14 = *(undefined4 *)(param_2 + 4);
  uStack_10 = *(undefined4 *)(param_2 + 8);
  uStack_c = *(undefined4 *)(param_2 + 0xc);
  iVar1 = str_format_internal::FprintF(local_18,&local_18,&local_28);
  return iVar1;
}

// FPrintF<double> @ 14fa79810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* int __cdecl absl::lts_20240722::FPrintF<double>(struct _iobuf * __ptr64,class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<654848> const & __ptr64,double const
   & __ptr64) */

int __cdecl
absl::lts_20240722::FPrintF<double>
          (_iobuf *param_1,FormatSpecTemplate<654848> *param_2,double *param_3)

{
  int iVar1;
  undefined1 auStack_68 [32];
  double *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_28 = *param_3;
  local_38 = *(undefined4 *)param_2;
  uStack_34 = *(undefined4 *)(param_2 + 4);
  uStack_30 = *(undefined4 *)(param_2 + 8);
  uStack_2c = *(undefined4 *)(param_2 + 0xc);
  local_20 = str_format_internal::FormatArgImpl::Dispatch<double>;
  local_48 = &local_28;
  uStack_40 = 1;
  iVar1 = str_format_internal::FprintF(local_48._0_4_,&local_38,&local_48);
  return iVar1;
}

// FPrintF<std::basic_string_view<char,std::char_traits<char>_>_> @ 14fa79890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* int __cdecl absl::lts_20240722::FPrintF<class std::basic_string_view<char,struct
   std::char_traits<char> > >(struct _iobuf * __ptr64,class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<524292> const & __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64) */

int __cdecl
absl::lts_20240722::FPrintF<std::basic_string_view<char,std::char_traits<char>_>_>
          (_iobuf *param_1,FormatSpecTemplate<524292> *param_2,
          basic_string_view<char,std::char_traits<char>_> *param_3)

{
  int iVar1;
  undefined1 auStack_68 [32];
  basic_string_view<char,std::char_traits<char>_> **local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  basic_string_view<char,std::char_traits<char>_> *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)param_2;
  uStack_34 = *(undefined4 *)(param_2 + 4);
  uStack_30 = *(undefined4 *)(param_2 + 8);
  uStack_2c = *(undefined4 *)(param_2 + 0xc);
  local_20 = str_format_internal::FormatArgImpl::
             Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
  local_48 = &local_28;
  uStack_40 = 1;
  local_28 = param_3;
  iVar1 = str_format_internal::FprintF(local_48._0_4_,&local_38,&local_48);
  return iVar1;
}

// FPrintF<std::basic_string_view<char,std::char_traits<char>_>,unsigned___int64> @ 14fa79910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* int __cdecl absl::lts_20240722::FPrintF<class std::basic_string_view<char,struct
   std::char_traits<char> >,unsigned __int64>(struct _iobuf * __ptr64,class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<524292,655355> const & __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,unsigned __int64
   const & __ptr64) */

int __cdecl
absl::lts_20240722::FPrintF<std::basic_string_view<char,std::char_traits<char>_>,unsigned___int64>
          (_iobuf *param_1,FormatSpecTemplate<524292,655355> *param_2,
          basic_string_view<char,std::char_traits<char>_> *param_3,__uint64 *param_4)

{
  int iVar1;
  undefined1 auStack_78 [32];
  basic_string_view<char,std::char_traits<char>_> **local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  basic_string_view<char,std::char_traits<char>_> *local_38;
  code *local_30;
  __uint64 local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_48 = *(undefined4 *)param_2;
  uStack_44 = *(undefined4 *)(param_2 + 4);
  uStack_40 = *(undefined4 *)(param_2 + 8);
  uStack_3c = *(undefined4 *)(param_2 + 0xc);
  local_30 = str_format_internal::FormatArgImpl::
             Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
  local_28 = *param_4;
  local_20 = str_format_internal::FormatArgImpl::Dispatch<unsigned___int64>;
  local_58 = &local_38;
  uStack_50 = 2;
  local_38 = param_3;
  iVar1 = str_format_internal::FprintF(local_58._0_4_,&local_48,&local_58);
  return iVar1;
}

// FPrintF<__int64,unsigned___int64> @ 14fa799a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* int __cdecl absl::lts_20240722::FPrintF<__int64,unsigned __int64>(struct _iobuf * __ptr64,class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355> const &
   __ptr64,__int64 const & __ptr64,unsigned __int64 const & __ptr64) */

int __cdecl
absl::lts_20240722::FPrintF<__int64,unsigned___int64>
          (_iobuf *param_1,FormatSpecTemplate<655355,655355> *param_2,__int64 *param_3,
          __uint64 *param_4)

{
  int iVar1;
  undefined1 auStack_78 [32];
  __int64 *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  __int64 local_38;
  code *local_30;
  __uint64 local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_38 = *param_3;
  local_48 = *(undefined4 *)param_2;
  uStack_44 = *(undefined4 *)(param_2 + 4);
  uStack_40 = *(undefined4 *)(param_2 + 8);
  uStack_3c = *(undefined4 *)(param_2 + 0xc);
  local_30 = str_format_internal::FormatArgImpl::Dispatch<__int64>;
  local_28 = *param_4;
  local_20 = str_format_internal::FormatArgImpl::Dispatch<unsigned___int64>;
  local_58 = &local_38;
  uStack_50 = 2;
  iVar1 = str_format_internal::FprintF(local_58._0_4_,&local_48,&local_58);
  return iVar1;
}

// Init<double> @ 14fa79a30

/* private: void __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::Init<double>(double
   const & __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::str_format_internal::FormatArgImpl::Init<double>
          (FormatArgImpl *this,double *param_1)

{
  this->data_ = (Data)*param_1;
  this->dispatcher_ = Dispatch<double>;
  return;
}

// Init<char_const*___ptr64> @ 14fa79a50

/* private: void __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::Init<char const *
   __ptr64>(char const * __ptr64 const & __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::str_format_internal::FormatArgImpl::Init<char_const*___ptr64>
          (FormatArgImpl *this,char **param_1)

{
  (this->data_).ptr = *param_1;
  this->dispatcher_ = Dispatch<char_const*___ptr64>;
  return;
}

// SimpleAtoi<__int64> @ 14fa79a70

/* bool __cdecl absl::lts_20240722::SimpleAtoi<__int64>(class std::basic_string_view<char,struct
   std::char_traits<char> >,__int64 * __ptr64) */

bool __cdecl
absl::lts_20240722::SimpleAtoi<__int64>
          (basic_string_view<char,std::char_traits<char>_> *param_1,__int64 *param_2)

{
  bool bVar1;
  __int64 local_res8 [4];
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  bVar1 = numbers_internal::safe_strto64_base(&local_18,local_res8,10);
  *param_2 = local_res8[0];
  return bVar1;
}

// _Buyheadnode<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_> @ 14fa79ab0

/* public: static struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   __cdecl std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void *
   __ptr64>::_Buyheadnode<class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > >(class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > & __ptr64)
    */

_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
* __cdecl std::
          _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
          ::
          _Buyheadnode<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
                    (allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
                     *param_1)

{
  _Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
  *p_Var1;
  
  p_Var1 = ::operator_new(0x40);
  *(_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
    **)p_Var1 = p_Var1;
  *(_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
    **)(p_Var1 + 8) = p_Var1;
  *(_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
    **)(p_Var1 + 0x10) = p_Var1;
  *(undefined2 *)(p_Var1 + 0x18) = 0x101;
  return p_Var1;
}

// _Buyheadnode<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_> @ 14fa79ae0

/* public: static struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 __cdecl
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64>::_Buyheadnode<class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > >(class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > & __ptr64) */

_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
* __cdecl std::
          _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
          ::
          _Buyheadnode<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
                    (allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
                     *param_1)

{
  _Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
  *p_Var1;
  
  p_Var1 = ::operator_new(0x40);
  *(_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
    **)p_Var1 = p_Var1;
  *(_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
    **)(p_Var1 + 8) = p_Var1;
  *(_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
    **)(p_Var1 + 0x10) = p_Var1;
  *(undefined2 *)(p_Var1 + 0x18) = 0x101;
  return p_Var1;
}

// _Construct_in_place<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64&___ptr64> @ 14fa79b10

/* void __cdecl std::_Construct_in_place<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64,struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 &
   __ptr64>(struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 &
   __ptr64,struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 &
   __ptr64) */

void __cdecl
std::
_Construct_in_place<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64&___ptr64>
          (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
           **param_1,
          _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
          **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Construct_in_place<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64_const&___ptr64> @ 14fa79b20

/* void __cdecl std::_Construct_in_place<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64,struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   const & __ptr64>(struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 &
   __ptr64,struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   const & __ptr64) */

void __cdecl
std::
_Construct_in_place<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64_const&___ptr64>
          (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
           **param_1,
          _Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
          **param_2)

{
  *param_1 = (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
              *)*param_2;
  return;
}

// _Construct_in_place<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64&___ptr64> @ 14fa79b30

/* void __cdecl std::_Construct_in_place<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> *
   __ptr64,struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 &
   __ptr64>(struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 &
   __ptr64,struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 &
   __ptr64) */

void __cdecl
std::
_Construct_in_place<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64&___ptr64>
          (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
           **param_1,
          _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
          **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Construct_in_place<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64_const&___ptr64> @ 14fa79b40

/* void __cdecl std::_Construct_in_place<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> *
   __ptr64,struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 const &
   __ptr64>(struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 &
   __ptr64,struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 const &
   __ptr64) */

void __cdecl
std::
_Construct_in_place<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64_const&___ptr64>
          (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
           **param_1,
          _Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
          **param_2)

{
  *param_1 = (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
              *)*param_2;
  return;
}

// _Destroy_in_place<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64> @ 14fa79b50

/* void __cdecl std::_Destroy_in_place<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64>(struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 &
   __ptr64) */

void __cdecl
std::
_Destroy_in_place<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64>
          (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
           **param_1)

{
  return;
}

// _Destroy_in_place<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64> @ 14fa79b60

/* void __cdecl std::_Destroy_in_place<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> *
   __ptr64>(struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 &
   __ptr64) */

void __cdecl
std::
_Destroy_in_place<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64>
          (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
           **param_1)

{
  return;
}

// _Erase_head<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_> @ 14fa79b70

/* public: void __cdecl std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >::_Erase_head<class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > >(class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > & __ptr64)
   __ptr64 */

void __thiscall
std::
_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
::
_Erase_head<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
          (_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
           *this,allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
                 *param_1)

{
  _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
            (this,param_1,
             *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
               **)(*(longlong *)this + 8));
  ::operator_delete(*(void **)this,0x40);
  return;
}

// _Erase_head<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_> @ 14fa79ba0

/* public: void __cdecl std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > >::_Erase_head<class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > >(class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > & __ptr64)
   __ptr64 */

void __thiscall
std::
_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
::
_Erase_head<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
          (_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
           *this,allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
                 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*(longlong *)this + 8) + 0x19);
  plVar3 = *(longlong **)(*(longlong *)this + 8);
  while (cVar1 == '\0') {
    _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
              (this,param_1,
               (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    ::operator_delete(plVar3,0x40);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  ::operator_delete(*(void **)this,0x40);
  return;
}

// _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_> @ 14fa79c20

/* public: void __cdecl std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >::_Erase_tree<class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > >(class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > &
   __ptr64,struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64)
   __ptr64 */

void __thiscall
std::
_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
::
_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
          (_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
           *this,allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
                 *param_1,
          _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
          *param_2)

{
  _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
  _Var1;
  char cVar2;
  _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
  *p_Var3;
  longlong *plVar4;
  longlong *plVar5;
  
  _Var1 = param_2[0x19];
  while (_Var1 == (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                   )0x0) {
    _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
              (this,param_1,
               *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                 **)(param_2 + 0x10));
    p_Var3 = *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
               **)param_2;
    cVar2 = *(char *)((longlong)*(longlong **)(*(longlong *)(param_2 + 0x30) + 8) + 0x19);
    plVar5 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 8);
    while (cVar2 == '\0') {
      _Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
      ::
      _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
                ((_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
                  *)(param_2 + 0x30),
                 (allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
                  *)(param_2 + 0x30),
                 (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                  *)plVar5[2]);
      plVar4 = (longlong *)*plVar5;
      ::operator_delete(plVar5,0x40);
      plVar5 = plVar4;
      cVar2 = *(char *)((longlong)plVar4 + 0x19);
    }
    ::operator_delete(*(void **)(param_2 + 0x30),0x40);
    ::operator_delete(param_2,0x40);
    param_2 = p_Var3;
    _Var1 = p_Var3[0x19];
  }
  return;
}

// _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_> @ 14fa79ce0

/* public: void __cdecl std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > >::_Erase_tree<class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > >(class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > & __ptr64,struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64) __ptr64
    */

void __thiscall
std::
_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
::
_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
          (_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
           *this,allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
                 *param_1,
          _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
          *param_2)

{
  _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
  _Var1;
  _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
  *p_Var2;
  
  _Var1 = param_2[0x19];
  while (_Var1 == (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                   )0x0) {
    _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
              (this,param_1,
               *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                 **)(param_2 + 0x10));
    p_Var2 = *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
               **)param_2;
    ::operator_delete(param_2,0x40);
    param_2 = p_Var2;
    _Var1 = p_Var2[0x19];
  }
  return;
}

// _Find_lower_bound<std::basic_string_view<char,std::char_traits<char>_>_> @ 14fa79d40

/* protected: struct std::_Tree_find_result<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64>
   __cdecl std::_Tree<class std::_Tmap_traits<class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >,0>
   >::_Find_lower_bound<class std::basic_string_view<char,struct std::char_traits<char> > >(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
std::
_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
::_Find_lower_bound<std::basic_string_view<char,std::char_traits<char>_>_>
          (_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
           *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *_Buf2;
  void *_Buf1;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined8 *in_R8;
  ulonglong _Size;
  
  pcVar6 = *(char **)this;
  *(undefined4 *)&param_1->_Mysize = 0;
  param_1[1]._Mydata = pcVar6;
  pcVar6 = *(char **)(pcVar6 + 8);
  param_1->_Mydata = pcVar6;
  cVar1 = pcVar6[0x19];
  do {
    if (cVar1 != '\0') {
      return param_1;
    }
    uVar2 = *(ulonglong *)(pcVar6 + 0x28);
    uVar3 = in_R8[1];
    _Buf2 = (void *)*in_R8;
    _Buf1 = *(void **)(pcVar6 + 0x20);
    _Size = uVar2;
    if (uVar3 < uVar2) {
      _Size = uVar3;
    }
    param_1->_Mydata = pcVar6;
    iVar4 = memcmp(_Buf1,_Buf2,_Size);
    if (iVar4 == 0) {
      if (uVar2 < uVar3) goto LAB_14fa79ddf;
LAB_14fa79da7:
      param_1[1]._Mydata = pcVar6;
      uVar5 = 1;
      pcVar6 = *(char **)pcVar6;
    }
    else {
      if (-1 < iVar4) goto LAB_14fa79da7;
LAB_14fa79ddf:
      pcVar6 = *(char **)(pcVar6 + 0x10);
      uVar5 = 0;
    }
    *(undefined4 *)&param_1->_Mysize = uVar5;
    cVar1 = pcVar6[0x19];
  } while( true );
}

// _Find_lower_bound<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_> @ 14fa79df0

/* protected: struct std::_Tree_find_result<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64>
   __cdecl std::_Tree<class std::_Tmap_traits<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> >,0> >::_Find_lower_bound<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >(class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const &
   __ptr64)const __ptr64 */

variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __thiscall
std::
_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
::_Find_lower_bound<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>
          (_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
           *this,variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *param_1)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  void *_Buf1;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *in_R8;
  ulonglong _Size;
  ulonglong uVar9;
  
  lVar3 = *(longlong *)this;
  *(undefined4 *)(param_1 + 8) = 0;
  *(longlong *)(param_1 + 0x10) = lVar3;
  puVar8 = *(undefined8 **)(lVar3 + 8);
  *(undefined8 **)param_1 = puVar8;
  if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
    cVar1 = *(char *)(in_R8 + 2);
    uVar9 = (longlong)cVar1 + 1;
    do {
      cVar2 = *(char *)(puVar8 + 6);
      *(undefined8 **)param_1 = puVar8;
      if ((longlong)cVar2 + 1U != uVar9) {
        cVar6 = -1;
        if (uVar9 <= (longlong)cVar2 + 1U) {
          cVar6 = '\x01';
        }
        goto LAB_14fa79eb3;
      }
      if ((longlong)cVar1 == -1) {
LAB_14fa79e9b:
        cVar6 = '\0';
      }
      else {
        _Buf1 = (void *)puVar8[4];
        if (uVar9 == 1) {
          if (_Buf1 != (void *)*in_R8) {
            cVar6 = -1;
            if ((longlong)*in_R8 <= (longlong)_Buf1) {
              cVar6 = '\x01';
            }
            goto LAB_14fa79eb3;
          }
          goto LAB_14fa79e9b;
        }
        uVar4 = puVar8[5];
        uVar5 = in_R8[1];
        _Size = uVar4;
        if (uVar5 < uVar4) {
          _Size = uVar5;
        }
        iVar7 = memcmp(_Buf1,(void *)*in_R8,_Size);
        if (iVar7 == 0) {
          if (uVar5 <= uVar4) {
            if (uVar4 <= uVar5) goto LAB_14fa79e9b;
            goto LAB_14fa79e90;
          }
          cVar6 = -1;
        }
        else if (iVar7 < 0) {
          cVar6 = -1;
        }
        else {
LAB_14fa79e90:
          cVar6 = '\x01';
        }
      }
LAB_14fa79eb3:
      if (-1 < cVar6) {
        *(undefined8 **)(param_1 + 0x10) = puVar8;
        puVar8 = (undefined8 *)*puVar8;
      }
      else {
        puVar8 = (undefined8 *)puVar8[2];
      }
      *(uint *)(param_1 + 8) = (uint)(-1 < cVar6);
    } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
  }
  return param_1;
}

// _Freenode0<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_> @ 14fa79f00

/* public: static void __cdecl std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void *
   __ptr64>::_Freenode0<class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > >(class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > &
   __ptr64,struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64) */

void __cdecl
std::
_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
::
_Freenode0<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
          (allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
           *param_1,
          _Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
          *param_2)

{
  ::operator_delete(param_2,0x40);
  return;
}

// _Freenode0<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_> @ 14fa79f20

/* public: static void __cdecl std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64>::_Freenode0<class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > >(class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > & __ptr64,struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64) */

void __cdecl
std::
_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
::
_Freenode0<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
          (allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
           *param_1,
          _Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
          *param_2)

{
  ::operator_delete(param_2,0x40);
  return;
}

// _Freenode<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_> @ 14fa79f40

/* public: static void __cdecl std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void *
   __ptr64>::_Freenode<class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > >(class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > &
   __ptr64,struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64) */

void __cdecl
std::
_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
::
_Freenode<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
          (allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
           *param_1,
          _Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
          *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*(longlong *)(param_2 + 0x30) + 8) + 0x19);
  plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 8);
  while (cVar1 == '\0') {
    _Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
    ::
    _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
              ((_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
                *)(param_2 + 0x30),
               (allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
                *)(param_2 + 0x30),
               (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    ::operator_delete(plVar3,0x40);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  ::operator_delete(*(void **)(param_2 + 0x30),0x40);
  ::operator_delete(param_2,0x40);
  return;
}

// _Freenode<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_> @ 14fa79fc0

/* public: static void __cdecl std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64>::_Freenode<class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > >(class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > & __ptr64,struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64) */

void __cdecl
std::
_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
::
_Freenode<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
          (allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
           *param_1,
          _Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
          *param_2)

{
  ::operator_delete(param_2,0x40);
  return;
}

// _Get_size_of_n<64> @ 14fa79fe0

/* unsigned __int64 __cdecl std::_Get_size_of_n<64>(unsigned __int64) */

__uint64 __cdecl std::_Get_size_of_n<64>(__uint64 param_1)

{
  if (param_1 < 0x400000000000000) {
    return param_1 << 6;
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Kfn<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_> @ 14fa7a010

/* public: static class std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64
   __cdecl std::_Tmap_traits<class std::basic_string_view<char,struct std::char_traits<char> >,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >,0>::_Kfn<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >(struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > const & __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
std::
_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>
::
_Kfn<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
          (pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
           *param_1)

{
  return (basic_string_view<char,std::char_traits<char>_> *)param_1;
}

// _Kfn<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64> @ 14fa7a020

/* public: static class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const & __ptr64 __cdecl std::_Tmap_traits<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> >,0>::_Kfn<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>(struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> const & __ptr64) */

variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __cdecl
std::
_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>
::
_Kfn<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
          (pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
           *param_1)

{
  return (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *)param_1;
}

// _Lower_bound_duplicate<std::basic_string_view<char,std::char_traits<char>_>_> @ 14fa7a030

/* protected: bool __cdecl std::_Tree<class std::_Tmap_traits<class
   std::basic_string_view<char,struct std::char_traits<char> >,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >,0>
   >::_Lower_bound_duplicate<class std::basic_string_view<char,struct std::char_traits<char> >
   >(struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   const,class std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64)const
   __ptr64 */

bool __thiscall
std::
_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
::_Lower_bound_duplicate<std::basic_string_view<char,std::char_traits<char>_>_>
          (_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
           *this,_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                 *param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  bool bVar1;
  
  if (param_1[0x19] ==
      (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
       )0x0) {
    bVar1 = less<std::basic_string_view<char,std::char_traits<char>_>_>::operator()
                      ((less<std::basic_string_view<char,std::char_traits<char>_>_> *)this,param_2,
                       (basic_string_view<char,std::char_traits<char>_> *)(param_1 + 0x20));
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// _Lower_bound_duplicate<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_> @ 14fa7a070

/* protected: bool __cdecl std::_Tree<class std::_Tmap_traits<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> >,0>
   >::_Lower_bound_duplicate<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >(struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64
   const,class std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char>
   > > const & __ptr64)const __ptr64 */

bool __thiscall
std::
_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
::
_Lower_bound_duplicate<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>
          (_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
           *this,_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                 *param_1,
          variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *param_2)

{
  bool bVar1;
  
  if (param_1[0x19] ==
      (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
       )0x0) {
    bVar1 = less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>::
            operator()((less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>
                        *)this,param_2,
                       (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *)
                       (param_1 + 0x20));
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// _Try_emplace<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64> @ 14fa7a0b0

/* private: struct std::pair<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64,bool> __cdecl std::map<class std::basic_string_view<char,struct std::char_traits<char>
   >,class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >
   >::_Try_emplace<class std::basic_string_view<char,struct std::char_traits<char> > const &
   __ptr64>(class std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64)
   __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
std::
map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
::_Try_emplace<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64>
          (map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
           *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
  *pmVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  void *pvVar9;
  _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
  *p_Var10;
  map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
  *pmVar11;
  map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
  *pmVar12;
  map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
  *pmVar13;
  basic_string_view<char,std::char_traits<char>_> *in_R8;
  ulonglong _Size;
  map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
  *local_58;
  undefined8 uStack_50;
  map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
  *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pmVar1 = *(map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
             **)this;
  local_48 = *(map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
               **)(pmVar1 + 8);
  uStack_40 = 0;
  pmVar13 = pmVar1;
  if (local_48[0x19] ==
      (map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
       )0x0) {
    local_58 = (map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
                *)in_R8->_Mydata;
    uVar3 = in_R8->_Mysize;
    pmVar11 = local_48;
    uStack_50 = (longlong *)uVar3;
    do {
      uVar2 = *(ulonglong *)(pmVar11 + 0x28);
      _Size = uVar2;
      if (uVar3 < uVar2) {
        _Size = uVar3;
      }
      local_48 = pmVar11;
      iVar7 = memcmp(*(void **)(pmVar11 + 0x20),local_58,_Size);
      if (iVar7 == 0) {
        if (uVar2 < uVar3) {
          cVar5 = -1;
          goto LAB_14fa7a138;
        }
        if (uVar3 < uVar2) goto LAB_14fa7a136;
LAB_14fa7a14a:
        uStack_40 = 1;
        pmVar12 = *(map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
                    **)pmVar11;
        pmVar13 = pmVar11;
      }
      else {
        if (iVar7 < 0) {
          cVar5 = -1;
        }
        else {
LAB_14fa7a136:
          cVar5 = '\x01';
        }
LAB_14fa7a138:
        if (-1 < cVar5) goto LAB_14fa7a14a;
        uStack_40 = 0;
        pmVar12 = *(map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
                    **)(pmVar11 + 0x10);
      }
      pmVar11 = pmVar12;
    } while (pmVar12[0x19] ==
             (map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
              )0x0);
  }
  if ((pmVar13[0x19] !=
       (map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
        )0x0) ||
     (bVar6 = less<std::basic_string_view<char,std::char_traits<char>_>_>::operator()
                        ((less<std::basic_string_view<char,std::char_traits<char>_>_> *)this,in_R8,
                         (basic_string_view<char,std::char_traits<char>_> *)(pmVar13 + 0x20)), bVar6
     )) {
    if (*(longlong *)(this + 8) == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      _Throw_tree_length_error();
    }
    uStack_50 = (longlong *)0x0;
    local_58 = this;
    plVar8 = ::operator_new(0x40);
    uVar4 = in_R8->_Mysize;
    plVar8[4] = (longlong)in_R8->_Mydata;
    plVar8[5] = uVar4;
    plVar8[6] = 0;
    plVar8[7] = 0;
    uStack_50 = plVar8;
    pvVar9 = ::operator_new(0x40);
    *(void **)pvVar9 = pvVar9;
    *(void **)((longlong)pvVar9 + 8) = pvVar9;
    *(void **)((longlong)pvVar9 + 0x10) = pvVar9;
    *(undefined2 *)((longlong)pvVar9 + 0x18) = 0x101;
    plVar8[6] = (longlong)pvVar9;
    *plVar8 = (longlong)pmVar1;
    plVar8[1] = (longlong)pmVar1;
    plVar8[2] = (longlong)pmVar1;
    *(undefined2 *)(plVar8 + 3) = 0;
    local_58 = local_48;
    uStack_50 = (longlong *)CONCAT44(uStack_3c,uStack_40);
    p_Var10 = _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
              ::_Insert_node((_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
                              *)this,&local_58,plVar8);
    param_1->_Mydata = (char *)p_Var10;
    *(undefined1 *)&param_1->_Mysize = 1;
  }
  else {
    param_1->_Mydata = (char *)pmVar13;
    *(undefined1 *)&param_1->_Mysize = 0;
  }
  return param_1;
}

// _Try_emplace<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_> @ 14fa7a250

/* private: struct std::pair<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> *
   __ptr64,bool> __cdecl std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >::_Try_emplace<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >(class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > &&
   __ptr64) __ptr64 */

variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __thiscall
std::
map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
::_Try_emplace<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>
          (map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
           *this,variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *param_1)

{
  variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> vVar1;
  map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
  *pmVar2;
  void *_Buf1;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
  *p_Var10;
  map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
  *pmVar11;
  map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
  *pmVar12;
  ulonglong uVar13;
  variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *in_R8;
  ulonglong _Size;
  map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
  *pmVar14;
  map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
  *local_58;
  undefined8 uStack_50;
  map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
  *local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  
  pmVar2 = *(map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
             **)this;
  local_48 = *(map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
               **)(pmVar2 + 8);
  uStack_40 = 0;
  pmVar14 = pmVar2;
  if (local_48[0x19] ==
      (map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
       )0x0) {
    vVar1 = in_R8[0x10];
    uVar13 = (longlong)(char)vVar1 + 1;
    pmVar11 = local_48;
    do {
      local_48 = pmVar11;
      if ((longlong)(char)pmVar11[0x30] + 1U == uVar13) {
        if ((longlong)(char)vVar1 == -1) {
LAB_14fa7a328:
          cVar6 = '\0';
        }
        else {
          _Buf1 = *(void **)(pmVar11 + 0x20);
          if (uVar13 == 1) {
            if (_Buf1 == *(void **)in_R8) goto LAB_14fa7a328;
            cVar6 = -1;
            if ((longlong)*(void **)in_R8 <= (longlong)_Buf1) {
              cVar6 = '\x01';
            }
          }
          else {
            uVar3 = *(ulonglong *)(pmVar11 + 0x28);
            uVar4 = *(ulonglong *)(in_R8 + 8);
            _Size = uVar3;
            if (uVar4 < uVar3) {
              _Size = uVar4;
            }
            iVar8 = memcmp(_Buf1,*(void **)in_R8,_Size);
            if (iVar8 == 0) {
              if (uVar3 < uVar4) {
                cVar6 = -1;
              }
              else {
                if (uVar4 < uVar3) goto LAB_14fa7a30f;
                cVar6 = '\0';
              }
            }
            else if (iVar8 < 0) {
              cVar6 = -1;
            }
            else {
LAB_14fa7a30f:
              cVar6 = '\x01';
            }
          }
        }
      }
      else {
        cVar6 = -1;
        if (uVar13 <= (longlong)(char)pmVar11[0x30] + 1U) {
          cVar6 = '\x01';
        }
      }
      if (-1 < cVar6) {
        pmVar12 = *(map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
                    **)pmVar11;
        pmVar14 = pmVar11;
      }
      else {
        pmVar12 = *(map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
                    **)(pmVar11 + 0x10);
      }
      uStack_40 = (uint)(-1 < cVar6);
      pmVar11 = pmVar12;
    } while (pmVar12[0x19] ==
             (map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
              )0x0);
  }
  if ((pmVar14[0x19] !=
       (map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
        )0x0) ||
     (bVar7 = less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>::
              operator()((less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>
                          *)this,in_R8,
                         (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *)
                         (pmVar14 + 0x20)), bVar7)) {
    if (*(longlong *)(this + 8) == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      _Throw_tree_length_error();
    }
    uStack_50 = 0;
    local_58 = this;
    plVar9 = ::operator_new(0x40);
    lVar5 = *(longlong *)(in_R8 + 8);
    plVar9[4] = *(longlong *)in_R8;
    plVar9[5] = lVar5;
    plVar9[6] = *(longlong *)(in_R8 + 0x10);
    plVar9[7] = 0;
    *plVar9 = (longlong)pmVar2;
    plVar9[1] = (longlong)pmVar2;
    plVar9[2] = (longlong)pmVar2;
    *(undefined2 *)(plVar9 + 3) = 0;
    local_58 = local_48;
    uStack_50 = CONCAT44(uStack_3c,uStack_40);
    p_Var10 = _Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
              ::_Insert_node((_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
                              *)this,&local_58,plVar9);
    *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
      **)param_1 = p_Var10;
    param_1[8] = (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>)0x1;
  }
  else {
    *(map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
      **)param_1 = pmVar14;
    param_1[8] = (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>)0x0;
  }
  return param_1;
}

// _Tuple_get<0,std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64> @ 14fa7a440

/* UNKNOWN && __ptr64 __cdecl std::_Tuple_get<0,class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > && __ptr64>(class std::tuple<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > &&
   __ptr64> && __ptr64) */

UNKNOWN * __cdecl
std::
_Tuple_get<0,std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>
          (tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>
           *param_1)

{
  return *(UNKNOWN **)param_1;
}

// _Variant_raw_get<1,std::_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const&___ptr64> @ 14fa7a450

/* UNKNOWN __cdecl std::_Variant_raw_get<1,class std::_Variant_storage_<1,__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const & __ptr64>(class
   std::_Variant_storage_<1,__int64,class std::basic_string_view<char,struct std::char_traits<char>
   > > const & __ptr64) */

_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __cdecl
std::
_Variant_raw_get<1,std::_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const&___ptr64>
          (_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_>
           *param_1)

{
  return param_1;
}

// _Variant_raw_get<0,std::_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const&___ptr64> @ 14fa7a460

/* UNKNOWN __cdecl std::_Variant_raw_get<0,class std::_Variant_storage_<1,__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const & __ptr64>(class
   std::_Variant_storage_<1,__int64,class std::basic_string_view<char,struct std::char_traits<char>
   > > const & __ptr64) */

_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __cdecl
std::
_Variant_raw_get<0,std::_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const&___ptr64>
          (_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_>
           *param_1)

{
  return param_1;
}

// _Variant_raw_visit<std::_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const&___ptr64,std::_Variant_relop_visitor2<std::compare_three_way,std::strong_ordering,__int64,std::basic_string_view<char,std::char_traits<char>_>_>_> @ 14fa7a470

/* struct std::strong_ordering __cdecl std::_Variant_raw_visit<class
   std::_Variant_storage_<1,__int64,class std::basic_string_view<char,struct std::char_traits<char>
   > > const & __ptr64,struct std::_Variant_relop_visitor2<struct std::compare_three_way,struct
   std::strong_ordering,__int64,class std::basic_string_view<char,struct std::char_traits<char> > >
   >(unsigned __int64,class std::_Variant_storage_<1,__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const & __ptr64,struct
   std::_Variant_relop_visitor2<struct std::compare_three_way,struct
   std::strong_ordering,__int64,class std::basic_string_view<char,struct std::char_traits<char> > >
   && __ptr64) */

strong_ordering __cdecl
std::
_Variant_raw_visit<std::_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const&___ptr64,std::_Variant_relop_visitor2<std::compare_three_way,std::strong_ordering,__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>
          (__uint64 param_1,
          _Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_>
          *param_2,_Variant_relop_visitor2<std::compare_three_way,std::strong_ordering,__int64,std::basic_string_view<char,std::char_traits<char>_>_>
                   *param_3)

{
  void *_Buf1;
  ulonglong uVar1;
  ulonglong uVar2;
  schar sVar3;
  int iVar4;
  ulonglong _Size;
  
  if (param_1 != 0xffffffffffffffff) {
    _Buf1 = (void *)**(undefined8 **)param_3;
    if (param_1 != 0) {
      uVar1 = *(ulonglong *)(param_2 + 8);
      uVar2 = (*(undefined8 **)param_3)[1];
      _Size = uVar2;
      if (uVar1 < uVar2) {
        _Size = uVar1;
      }
      iVar4 = memcmp(_Buf1,*(void **)param_2,_Size);
      if (iVar4 == 0) {
        if (uVar1 <= uVar2) {
          if (uVar2 != uVar1) {
            return (strong_ordering)'\x01';
          }
          return (strong_ordering)'\0';
        }
      }
      else if (-1 < iVar4) {
        return (strong_ordering)'\x01';
      }
      return (strong_ordering)-1;
    }
    if (_Buf1 != *(void **)param_2) {
      sVar3 = '\x01';
      if ((longlong)_Buf1 < (longlong)*(void **)param_2) {
        sVar3 = -1;
      }
      return (strong_ordering)sVar3;
    }
  }
  return (strong_ordering)'\0';
}

// _Visit<std::_Variant_relop_visitor2<std::compare_three_way,std::strong_ordering,__int64,std::basic_string_view<char,std::char_traits<char>_>_>,std::_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const&___ptr64> @ 14fa7a520

/* public: static struct std::strong_ordering __cdecl std::_Variant_raw_visit1<1>::_Visit<struct
   std::_Variant_relop_visitor2<struct std::compare_three_way,struct
   std::strong_ordering,__int64,class std::basic_string_view<char,struct std::char_traits<char> >
   >,class std::_Variant_storage_<1,__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const & __ptr64>(unsigned __int64,struct
   std::_Variant_relop_visitor2<struct std::compare_three_way,struct
   std::strong_ordering,__int64,class std::basic_string_view<char,struct std::char_traits<char> > >
   && __ptr64,class std::_Variant_storage_<1,__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const & __ptr64) */

strong_ordering __cdecl
std::_Variant_raw_visit1<1>::
_Visit<std::_Variant_relop_visitor2<std::compare_three_way,std::strong_ordering,__int64,std::basic_string_view<char,std::char_traits<char>_>_>,std::_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const&___ptr64>
          (__uint64 param_1,
          _Variant_relop_visitor2<std::compare_three_way,std::strong_ordering,__int64,std::basic_string_view<char,std::char_traits<char>_>_>
          *param_2,_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_>
                   *param_3)

{
  void *_Buf1;
  ulonglong uVar1;
  ulonglong uVar2;
  schar sVar3;
  int iVar4;
  ulonglong _Size;
  
  if (param_1 != 0) {
    _Buf1 = (void *)**(undefined8 **)param_2;
    if (param_1 != 1) {
      uVar1 = *(ulonglong *)(param_3 + 8);
      uVar2 = (*(undefined8 **)param_2)[1];
      _Size = uVar2;
      if (uVar1 < uVar2) {
        _Size = uVar1;
      }
      iVar4 = memcmp(_Buf1,*(void **)param_3,_Size);
      if (iVar4 == 0) {
        if (uVar1 <= uVar2) {
          if (uVar2 != uVar1) {
            return (strong_ordering)'\x01';
          }
          return (strong_ordering)'\0';
        }
      }
      else if (-1 < iVar4) {
        return (strong_ordering)'\x01';
      }
      return (strong_ordering)-1;
    }
    if (_Buf1 != *(void **)param_3) {
      sVar3 = '\x01';
      if ((longlong)_Buf1 < (longlong)*(void **)param_3) {
        sVar3 = -1;
      }
      return (strong_ordering)sVar3;
    }
  }
  return (strong_ordering)'\0';
}

// addressof<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>_const_> @ 14fa7a5d0

/* class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > > const * __ptr64 __cdecl
   std::addressof<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > > const >(class
   std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > > const & __ptr64) */

_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
* __cdecl std::
          addressof<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>_const_>
                    (_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
                     *param_1)

{
  return (_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
          *)param_1;
}

// addressof<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_const_> @ 14fa7a5e0

/* class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > const * __ptr64 __cdecl
   std::addressof<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > const >(class
   std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > const & __ptr64) */

_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
* __cdecl std::
          addressof<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_const_>
                    (_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
                     *param_1)

{
  return (_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
          *)param_1;
}

// addressof<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64> @ 14fa7a5f0

/* struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 *
   __ptr64 __cdecl std::addressof<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64>(struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 &
   __ptr64) */

_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
** __cdecl
std::
addressof<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64>
          (_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
           **param_1)

{
  return (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
          **)param_1;
}

// addressof<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64> @ 14fa7a600

/* struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 * __ptr64
   __cdecl std::addressof<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64>(struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 &
   __ptr64) */

_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
** __cdecl
std::
addressof<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64>
          (_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
           **param_1)

{
  return (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
          **)param_1;
}

// addressof<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_> @ 14fa7a610

/* struct std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > * __ptr64 __cdecl
   std::addressof<struct std::pair<class std::basic_string_view<char,struct std::char_traits<char> >
   const ,class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >(struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > & __ptr64) */

pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
* __cdecl std::
          addressof<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>
                    (pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
                     *param_1)

{
  return (pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
          *)param_1;
}

// addressof<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_> @ 14fa7a620

/* struct std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64> * __ptr64 __cdecl std::addressof<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> >(struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> & __ptr64) */

pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
* __cdecl std::
          addressof<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>
                    (pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>
                     *param_1)

{
  return (pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
          *)param_1;
}

// addressof<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>_> @ 14fa7a630

/* class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > > * __ptr64 __cdecl
   std::addressof<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > > >(class
   std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > > & __ptr64) */

_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
* __cdecl std::
          addressof<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>_>
                    (_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
                     *param_1)

{
  return (_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
          *)param_1;
}

// addressof<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_> @ 14fa7a640

/* class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > * __ptr64 __cdecl
   std::addressof<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >(class
   std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > & __ptr64) */

_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
* __cdecl std::
          addressof<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
                    (_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
                     *param_1)

{
  return (_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
          *)param_1;
}

// FUN_14fa7a650 @ 14fa7a650

void FUN_14fa7a650(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  
  uVar1 = ((undefined8 *)*param_4)[1];
  *param_2 = *(undefined8 *)*param_4;
  param_2[1] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  pvVar2 = operator_new(0x40);
  *(void **)pvVar2 = pvVar2;
  *(void **)((longlong)pvVar2 + 8) = pvVar2;
  *(void **)((longlong)pvVar2 + 0x10) = pvVar2;
  *(undefined2 *)((longlong)pvVar2 + 0x18) = 0x101;
  param_2[2] = pvVar2;
  return;
}

// construct<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,std::piecewise_construct_t_const&___ptr64,std::tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>,std::tuple<>_> @ 14fa7a6a0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> >
   >::construct<struct std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64>,struct std::piecewise_construct_t const & __ptr64,class std::tuple<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > &&
   __ptr64>,class std::tuple<> >(class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > &
   __ptr64,struct std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64> * __ptr64 const,struct std::piecewise_construct_t const & __ptr64,class std::tuple<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > &&
   __ptr64> && __ptr64,class std::tuple<> && __ptr64) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
::
construct<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,std::piecewise_construct_t_const&___ptr64,std::tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>,std::tuple<>_>
          (allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
           *param_1,
          pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
          *param_2,piecewise_construct_t *param_3,
          tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>
          *param_4,tuple<> *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)param_4;
  uVar2 = puVar1[1];
  *(undefined8 *)param_2 = *puVar1;
  *(undefined8 *)(param_2 + 8) = uVar2;
  *(undefined8 *)(param_2 + 0x10) = puVar1[2];
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}

// construct_at<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64&___ptr64,0> @ 14fa7a6d0

/* struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 *
   __ptr64 __cdecl std::construct_at<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64,struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 &
   __ptr64,0>(struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 *
   __ptr64 const,struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 &
   __ptr64) */

_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
** __cdecl
std::
construct_at<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64&___ptr64,0>
          (_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
           **param_1,
          _Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
          **param_2)

{
  *param_1 = *param_2;
  return (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
          **)param_1;
}

// construct_at<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64_const&___ptr64,0> @ 14fa7a6e0

/* struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 *
   __ptr64 __cdecl std::construct_at<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64,struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   const & __ptr64,0>(struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 *
   __ptr64 const,struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   const & __ptr64) */

_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
** __cdecl
std::
construct_at<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64_const&___ptr64,0>
          (_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
           **param_1,
          _Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
          **param_2)

{
  *param_1 = *param_2;
  return (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
          **)param_1;
}

// construct_at<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64&___ptr64,0> @ 14fa7a6f0

/* struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 * __ptr64
   __cdecl std::construct_at<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> *
   __ptr64,struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 &
   __ptr64,0>(struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 * __ptr64
   const,struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 &
   __ptr64) */

_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
** __cdecl
std::
construct_at<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64&___ptr64,0>
          (_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
           **param_1,
          _Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
          **param_2)

{
  *param_1 = *param_2;
  return (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
          **)param_1;
}

// construct_at<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64_const&___ptr64,0> @ 14fa7a700

/* struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 * __ptr64
   __cdecl std::construct_at<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> *
   __ptr64,struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 const &
   __ptr64,0>(struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 * __ptr64
   const,struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 const &
   __ptr64) */

_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
** __cdecl
std::
construct_at<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64_const&___ptr64,0>
          (_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
           **param_1,
          _Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
          **param_2)

{
  *param_1 = *param_2;
  return (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
          **)param_1;
}

// construct_at<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,std::piecewise_construct_t_const&___ptr64,std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64>,std::tuple<>,0> @ 14fa7a710

/* struct std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > * __ptr64 __cdecl
   std::construct_at<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,struct
   std::piecewise_construct_t const & __ptr64,class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64>,class
   std::tuple<>,0>(struct std::pair<class std::basic_string_view<char,struct std::char_traits<char>
   > const ,class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > * __ptr64 const,struct
   std::piecewise_construct_t const & __ptr64,class std::tuple<class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64> && __ptr64,class
   std::tuple<> && __ptr64) */

pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
* __cdecl std::
          construct_at<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,std::piecewise_construct_t_const&___ptr64,std::tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64>,std::tuple<>,0>
                    (pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
                     *param_1,piecewise_construct_t *param_2,
                    tuple<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64>
                    *param_3,tuple<> *param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  
  uVar1 = (*(undefined8 **)param_3)[1];
  *(undefined8 *)param_1 = **(undefined8 **)param_3;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  pvVar2 = ::operator_new(0x40);
  *(void **)pvVar2 = pvVar2;
  *(void **)((longlong)pvVar2 + 8) = pvVar2;
  *(void **)((longlong)pvVar2 + 0x10) = pvVar2;
  *(undefined2 *)((longlong)pvVar2 + 0x18) = 0x101;
  *(void **)(param_1 + 0x10) = pvVar2;
  return (pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
          *)param_1;
}

// construct_at<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,std::piecewise_construct_t_const&___ptr64,std::tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>,std::tuple<>,0> @ 14fa7a770

/* struct std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64> * __ptr64 __cdecl std::construct_at<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,struct std::piecewise_construct_t
   const & __ptr64,class std::tuple<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > && __ptr64>,class
   std::tuple<>,0>(struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> * __ptr64 const,struct
   std::piecewise_construct_t const & __ptr64,class std::tuple<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > && __ptr64> && __ptr64,class
   std::tuple<> && __ptr64) */

pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
* __cdecl std::
          construct_at<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,std::piecewise_construct_t_const&___ptr64,std::tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>,std::tuple<>,0>
                    (pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>
                     *param_1,piecewise_construct_t *param_2,
                    tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>
                    *param_3,tuple<> *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)param_3;
  uVar2 = puVar1[1];
  *(undefined8 *)param_1 = *puVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = puVar1[2];
  *(undefined8 *)(param_1 + 0x18) = 0;
  return (pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
          *)param_1;
}

// destroy<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_> @ 14fa7a7a0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct std::char_traits<char>
   > const ,class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> >
   >::destroy<struct std::pair<class std::basic_string_view<char,struct std::char_traits<char> >
   const ,class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >(class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > &
   __ptr64,struct std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const
   ,class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > * __ptr64 const) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
::
destroy<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>
          (allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
           *param_1,
          pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
          *param_2)

{
  _Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
  *this;
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this = (_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
          *)(param_2 + 0x10);
  cVar1 = *(char *)((longlong)*(longlong **)(*(longlong *)(param_2 + 0x10) + 8) + 0x19);
  plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x10) + 8);
  while (cVar1 == '\0') {
    _Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
    ::
    _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
              (this,(allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
                     *)this,
               (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    ::operator_delete(plVar3,0x40);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  ::operator_delete(*(void **)this,0x40);
  return;
}

// destroy<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_> @ 14fa7a810

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > >::destroy<struct
   std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64> >(class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > &
   __ptr64,struct std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64> * __ptr64 const) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
::
destroy<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>
          (allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
           *param_1,
          pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
          *param_2)

{
  return;
}

// destroy_at<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_> @ 14fa7a820

/* void __cdecl std::destroy_at<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >(struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > * __ptr64 const) */

void __cdecl
std::
destroy_at<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>
          (pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
           *param_1)

{
  _Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
  *this;
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this = (_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
          *)(param_1 + 0x10);
  cVar1 = *(char *)((longlong)*(longlong **)(*(longlong *)(param_1 + 0x10) + 8) + 0x19);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
  while (cVar1 == '\0') {
    _Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
    ::
    _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
              (this,(allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
                     *)this,
               (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    ::operator_delete(plVar3,0x40);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  ::operator_delete(*(void **)this,0x40);
  return;
}

// destroy_at<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_> @ 14fa7a890

/* void __cdecl std::destroy_at<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> >(struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> * __ptr64 const) */

void __cdecl
std::
destroy_at<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>
          (pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
           *param_1)

{
  return;
}

// exchange<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,std::nullptr_t> @ 14fa7a8a0

/* struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   __cdecl std::exchange<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64,std::nullptr_t>(struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 &
   __ptr64,std::nullptr_t && __ptr64) */

_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
* __cdecl std::
          exchange<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,std::nullptr_t>
                    (_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                     **param_1,std__nullptr_t *param_2)

{
  _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
  *p_Var1;
  
  p_Var1 = (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
            *)*param_1;
  *param_1 = *(_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
               **)param_2;
  return p_Var1;
}

// exchange<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64&___ptr64> @ 14fa7a8b0

/* struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   __cdecl std::exchange<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64,struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 &
   __ptr64>(struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 &
   __ptr64,struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 &
   __ptr64) */

_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
* __cdecl std::
          exchange<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64&___ptr64>
                    (_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                     **param_1,
                    _Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                    **param_2)

{
  _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
  *p_Var1;
  
  p_Var1 = (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
            *)*param_1;
  *param_1 = *param_2;
  return p_Var1;
}

// exchange<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,std::nullptr_t> @ 14fa7a8c0

/* struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 __cdecl
   std::exchange<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> *
   __ptr64,std::nullptr_t>(struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 &
   __ptr64,std::nullptr_t && __ptr64) */

_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
* __cdecl std::
          exchange<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,std::nullptr_t>
                    (_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                     **param_1,std__nullptr_t *param_2)

{
  _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
  *p_Var1;
  
  p_Var1 = (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
            *)*param_1;
  *param_1 = *(_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
               **)param_2;
  return p_Var1;
}

// exchange<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64&___ptr64> @ 14fa7a8d0

/* struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 __cdecl
   std::exchange<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64,struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 &
   __ptr64>(struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 &
   __ptr64,struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 &
   __ptr64) */

_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
* __cdecl std::
          exchange<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64,std::_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64&___ptr64>
                    (_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                     **param_1,
                    _Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                    **param_2)

{
  _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
  *p_Var1;
  
  p_Var1 = (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
            *)*param_1;
  *param_1 = *param_2;
  return p_Var1;
}

// forward<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64&___ptr64> @ 14fa7a8e0

/* struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 &
   __ptr64 __cdecl std::forward<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 &
   __ptr64>(struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 &
   __ptr64) */

_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
** __cdecl
std::
forward<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64&___ptr64>
          (_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
           **param_1)

{
  return (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
          **)param_1;
}

// forward<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64&___ptr64> @ 14fa7a8f0

/* struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 & __ptr64
   __cdecl std::forward<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 &
   __ptr64>(struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 &
   __ptr64) */

_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
** __cdecl
std::
forward<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64&___ptr64>
          (_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
           **param_1)

{
  return (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
          **)param_1;
}

// forward<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64_const&___ptr64> @ 14fa7a900

/* struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   const & __ptr64 __cdecl std::forward<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   const & __ptr64>(struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   const & __ptr64) */

_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
** __cdecl
std::
forward<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64_const&___ptr64>
          (_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
           **param_1)

{
  return (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
          **)param_1;
}

// forward<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64_const&___ptr64> @ 14fa7a910

/* struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 const &
   __ptr64 __cdecl std::forward<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64
   const & __ptr64>(struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 const &
   __ptr64) */

_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
** __cdecl
std::
forward<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64_const&___ptr64>
          (_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
           **param_1)

{
  return (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
          **)param_1;
}

// forward<std::less<std::basic_string_view<char,std::char_traits<char>_>_>_const&___ptr64> @ 14fa7a920

/* struct std::less<class std::basic_string_view<char,struct std::char_traits<char> > > const &
   __ptr64 __cdecl std::forward<struct std::less<class std::basic_string_view<char,struct
   std::char_traits<char> > > const & __ptr64>(struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > > const & __ptr64) */

less<std::basic_string_view<char,std::char_traits<char>_>_> * __cdecl
std::forward<std::less<std::basic_string_view<char,std::char_traits<char>_>_>_const&___ptr64>
          (less<class_std::basic_string_view<char,struct_std::char_traits<char>_>_> *param_1)

{
  return (less<std::basic_string_view<char,std::char_traits<char>_>_> *)param_1;
}

// forward<std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>_const&___ptr64> @ 14fa7a930

/* struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > > const & __ptr64 __cdecl std::forward<struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > > const
   & __ptr64>(struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > > const & __ptr64) */

less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_> * __cdecl
std::
forward<std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>_const&___ptr64>
          (less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>
           *param_1)

{
  return (less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_> *)
         param_1;
}

// forward<__int64_const&___ptr64> @ 14fa7a940

/* __int64 const & __ptr64 __cdecl std::forward<__int64 const & __ptr64>(__int64 const & __ptr64) */

__int64 * __cdecl std::forward<__int64_const&___ptr64>(__int64 *param_1)

{
  return param_1;
}

// forward<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64> @ 14fa7a950

/* struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 &&
   __ptr64 __cdecl std::forward<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64>(struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64 &
   __ptr64) */

_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
** __cdecl
std::
forward<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>*___ptr64>
          (_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
           **param_1)

{
  return (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
          **)param_1;
}

// forward<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64> @ 14fa7a960

/* struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 &&
   __ptr64 __cdecl std::forward<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> *
   __ptr64>(struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 &
   __ptr64) */

_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
** __cdecl
std::
forward<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>*___ptr64>
          (_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
           **param_1)

{
  return (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
          **)param_1;
}

// forward<std::tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>_> @ 14fa7a970

/* class std::tuple<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > && __ptr64> && __ptr64 __cdecl std::forward<class std::tuple<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > &&
   __ptr64> >(class std::tuple<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > && __ptr64> & __ptr64) */

tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64> *
__cdecl std::
        forward<std::tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>_>
                  (tuple<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>&&___ptr64>
                   *param_1)

{
  return (tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>
          *)param_1;
}

// forward<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_> @ 14fa7a980

/* class std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > &&
   __ptr64 __cdecl std::forward<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >(class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > & __ptr64) */

variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __cdecl
std::forward<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>
          (variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>
           *param_1)

{
  return (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *)param_1;
}

// forward_as_tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_> @ 14fa7a990

/* class std::tuple<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > && __ptr64> __cdecl std::forward_as_tuple<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >(class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > &&
   __ptr64) */

variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __cdecl
std::forward_as_tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>
          (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *param_1)

{
  undefined8 in_RDX;
  
  *(undefined8 *)param_1 = in_RDX;
  return param_1;
}

// get<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_> @ 14fa7a9a0

/* UNKNOWN __cdecl std::get<1,__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >(class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const & __ptr64) */

variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __cdecl
std::get<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_>
          (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *param_1)

{
  if (param_1[0x10] == (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>)0x1)
  {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_variant_access();
}

// get<0,__int64,std::basic_string_view<char,std::char_traits<char>_>_> @ 14fa7a9c0

/* UNKNOWN __cdecl std::get<0,__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >(class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const & __ptr64) */

variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __cdecl
std::get<0,__int64,std::basic_string_view<char,std::char_traits<char>_>_>
          (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *param_1)

{
  if (param_1[0x10] == (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>)0x0)
  {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_variant_access();
}

// get<std::basic_string_view<char,std::char_traits<char>_>,__int64,std::basic_string_view<char,struct_std::char_traits<char>_>_> @ 14fa7a9e0

/* UNKNOWN __cdecl std::get<class std::basic_string_view<char,struct std::char_traits<char>
   >,__int64,class std::basic_string_view<char,struct std::char_traits<char> > >(class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const &
   __ptr64) */

variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __cdecl
std::
get<std::basic_string_view<char,std::char_traits<char>_>,__int64,std::basic_string_view<char,struct_std::char_traits<char>_>_>
          (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *param_1)

{
  if (param_1[0x10] == (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>)0x1)
  {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_variant_access();
}

// get<__int64,__int64,std::basic_string_view<char,std::char_traits<char>_>_> @ 14fa7aa00

/* UNKNOWN __cdecl std::get<__int64,__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >(class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const & __ptr64) */

variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __cdecl
std::get<__int64,__int64,std::basic_string_view<char,std::char_traits<char>_>_>
          (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *param_1)

{
  if (param_1[0x10] == (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>)0x0)
  {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_variant_access();
}

// holds_alternative<__int64,__int64,std::basic_string_view<char,std::char_traits<char>_>_> @ 14fa7aa20

/* bool __cdecl std::holds_alternative<__int64,__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >(class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const & __ptr64) */

bool __cdecl
std::holds_alternative<__int64,__int64,std::basic_string_view<char,std::char_traits<char>_>_>
          (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *param_1)

{
  return param_1[0x10] ==
         (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>)0x0;
}

// move<std::tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>&___ptr64> @ 14fa7aa30

/* class std::tuple<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > && __ptr64> && __ptr64 __cdecl std::move<class std::tuple<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > &&
   __ptr64> & __ptr64>(class std::tuple<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > && __ptr64> & __ptr64) */

tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64> *
__cdecl std::
        move<std::tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>&___ptr64>
                  (tuple<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>&&___ptr64>
                   *param_1)

{
  return (tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>
          *)param_1;
}

// move<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&___ptr64> @ 14fa7aa40

/* class std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > &&
   __ptr64 __cdecl std::move<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > & __ptr64>(class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > & __ptr64) */

variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __cdecl
std::move<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&___ptr64>
          (variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>
           *param_1)

{
  return (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *)param_1;
}

// safe_strtoi_base<__int64> @ 14fa7aa50

/* bool __cdecl absl::lts_20240722::numbers_internal::safe_strtoi_base<__int64>(class
   std::basic_string_view<char,struct std::char_traits<char> >,__int64 * __ptr64,int) */

bool __cdecl
absl::lts_20240722::numbers_internal::safe_strtoi_base<__int64>
          (basic_string_view<char,std::char_traits<char>_> *param_1,__int64 *param_2,int param_3)

{
  bool bVar1;
  __int64 local_res8 [4];
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  bVar1 = safe_strto64_base(&local_18,local_res8,param_3);
  *param_2 = local_res8[0];
  return bVar1;
}

// FormatSpecTemplate<262148,655355> @ 14fa7aa90

/* public: __cdecl
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<262148,655355>::FormatSpecTemplate<262148,655355>(char
   const * __ptr64) __ptr64 */

FormatSpecTemplate<262148,655355> * __thiscall
absl::lts_20240722::str_format_internal::FormatSpecTemplate<262148,655355>::
FormatSpecTemplate<262148,655355>(FormatSpecTemplate<262148,655355> *this,char *param_1)

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

// FormatSpecTemplate<654848> @ 14fa7aac0

/* public: __cdecl
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<654848>::FormatSpecTemplate<654848>(char
   const * __ptr64) __ptr64 */

FormatSpecTemplate<654848> * __thiscall
absl::lts_20240722::str_format_internal::FormatSpecTemplate<654848>::FormatSpecTemplate<654848>
          (FormatSpecTemplate<654848> *this,char *param_1)

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

// FormatSpecTemplate<655355,655355> @ 14fa7aaf0

/* public: __cdecl
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355>::FormatSpecTemplate<655355,655355>(char
   const * __ptr64) __ptr64 */

FormatSpecTemplate<655355,655355> * __thiscall
absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355>::
FormatSpecTemplate<655355,655355>(FormatSpecTemplate<655355,655355> *this,char *param_1)

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

// FormatSpecTemplate<> @ 14fa7ab20

/* public: __cdecl
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<>::FormatSpecTemplate<>(char const *
   __ptr64) __ptr64 */

FormatSpecTemplate<> * __thiscall
absl::lts_20240722::str_format_internal::FormatSpecTemplate<>::FormatSpecTemplate<>
          (FormatSpecTemplate<> *this,char *param_1)

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

// Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_> @ 14fa7ab50

/* public: __cdecl absl::lts_20240722::Span<class
   absl::lts_20240722::str_format_internal::FormatArgImpl const >::Span<class
   absl::lts_20240722::str_format_internal::FormatArgImpl const >(void) __ptr64 */

Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_> * __thiscall
absl::lts_20240722::Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_>::
Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_>
          (Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_> *this)

{
  this->ptr_ = (FormatArgImpl *)0x0;
  this->len_ = 0;
  return this;
}

// _Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_> @ 14fa7ab70

/* public: __cdecl std::_Alloc_construct_ptr<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> >
   >::_Alloc_construct_ptr<class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > >(class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > & __ptr64)
   __ptr64 */

_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
* __thiscall
std::
_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
::
_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
          (_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
           *this,allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
                 *param_1)

{
  *(allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
    **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// _Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_> @ 14fa7ab90

/* public: __cdecl std::_Alloc_construct_ptr<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64>,void * __ptr64> > >::_Alloc_construct_ptr<class std::allocator<struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > >(class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > & __ptr64)
   __ptr64 */

_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
* __thiscall
std::
_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
::
_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
          (_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
           *this,allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
                 *param_1)

{
  *(allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
    **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// _Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_> @ 14fa7abb0

/* public: __cdecl std::_Tree<class std::_Tmap_traits<class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >,0> >::_Tree<class
   std::_Tmap_traits<class std::basic_string_view<char,struct std::char_traits<char> >,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >,0> >(struct
   std::less<class std::basic_string_view<char,struct std::char_traits<char> > > const & __ptr64)
   __ptr64 */

_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
* __thiscall
std::
_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
::
_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
          (_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
           *this,less<std::basic_string_view<char,std::char_traits<char>_>_> *param_1)

{
  void *pvVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  pvVar1 = ::operator_new(0x40);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  *(void **)this = pvVar1;
  return this;
}

// _Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_> @ 14fa7abf0

/* public: __cdecl std::_Tree<class std::_Tmap_traits<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> >,0> >::_Tree<class
   std::_Tmap_traits<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> >,0> >(struct
   std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > > const & __ptr64) __ptr64 */

_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
* __thiscall
std::
_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
::
_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
          (_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
           *this,less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>
                 *param_1)

{
  void *pvVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  pvVar1 = ::operator_new(0x40);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  *(void **)this = pvVar1;
  return this;
}

// _Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_> @ 14fa7ac30

/* public: __cdecl std::_Tree_temp_node_alloc<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> >
   >::_Tree_temp_node_alloc<class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > >(class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > & __ptr64)
   __ptr64 */

_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
* __thiscall
std::
_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
::
_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
          (_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
           *this,allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
                 *param_1)

{
  void *pvVar1;
  
  *(allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
    **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  pvVar1 = ::operator_new(0x40);
  *(void **)(this + 8) = pvVar1;
  return this;
}

// _Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_> @ 14fa7ac70

/* public: __cdecl std::_Tree_temp_node_alloc<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64>,void * __ptr64> > >::_Tree_temp_node_alloc<class std::allocator<struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > >(class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > & __ptr64)
   __ptr64 */

_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
* __thiscall
std::
_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
::
_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
          (_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
           *this,allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
                 *param_1)

{
  void *pvVar1;
  
  *(allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
    **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  pvVar1 = ::operator_new(0x40);
  *(void **)(this + 8) = pvVar1;
  return this;
}

// _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,std::_Iterator_base0> @ 14fa7acb0

/* public: __cdecl std::_Tree_unchecked_const_iterator<class std::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >,struct
   std::_Iterator_base0>::_Tree_unchecked_const_iterator<class std::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >,struct
   std::_Iterator_base0>(struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64,class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > > const * __ptr64) __ptr64
    */

_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,std::_Iterator_base0>
* __thiscall
std::
_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,std::_Iterator_base0>
::
_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,std::_Iterator_base0>
          (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,std::_Iterator_base0>
           *this,_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                 *param_1,
          _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
          *param_2)

{
  *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
    **)this = param_1;
  return this;
}

// _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::_Iterator_base0> @ 14fa7acc0

/* public: __cdecl std::_Tree_unchecked_const_iterator<class std::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct
   std::_Iterator_base0>::_Tree_unchecked_const_iterator<class std::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct
   std::_Iterator_base0>(struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64,class
   std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > const * __ptr64) __ptr64 */

_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::_Iterator_base0>
* __thiscall
std::
_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::_Iterator_base0>
::
_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::_Iterator_base0>
          (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::_Iterator_base0>
           *this,_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                 *param_1,
          _Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
          *param_2)

{
  *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
    **)this = param_1;
  return this;
}

// _Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>_> @ 14fa7acd0

/* public: __cdecl std::_Tree_unchecked_iterator<class std::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >
   >::_Tree_unchecked_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > > >(struct
   std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct std::char_traits<char>
   > const ,class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64,class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > > const * __ptr64) __ptr64
    */

_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>_>
* __thiscall
std::
_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>_>
::
_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>_>
          (_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>_>
           *this,_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                 *param_1,
          _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
          *param_2)

{
  *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
    **)this = param_1;
  return this;
}

// _Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_> @ 14fa7ace0

/* public: __cdecl std::_Tree_unchecked_iterator<class std::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >
   >::_Tree_unchecked_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
   std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64> > > >(struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64,class
   std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > const * __ptr64) __ptr64 */

_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
* __thiscall
std::
_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
::
_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
          (_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
           *this,_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                 *param_1,
          _Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
          *param_2)

{
  *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
    **)this = param_1;
  return this;
}

// _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_> @ 14fa7acf0

/* public: __cdecl std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >(void) __ptr64 */

_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
* __thiscall
std::
_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
::
_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
          (_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// _Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_> @ 14fa7ad10

/* public: __cdecl std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > >::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >(void) __ptr64 */

_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
* __thiscall
std::
_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
::
_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
          (_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_> @ 14fa7ad30

/* public: __cdecl std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64>
   >::allocator<struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> >(void)
   __ptr64 */

allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
* __thiscall
std::
allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
::
allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
          (allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
           *this)

{
  return this;
}

// allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_> @ 14fa7ad40

/* public: __cdecl std::allocator<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64>
   >::allocator<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> >(void) __ptr64 */

allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
* __thiscall
std::
allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
::
allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
          (allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
           *this)

{
  return this;
}

// map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_> @ 14fa7ad50

/* public: __cdecl std::map<class std::basic_string_view<char,struct std::char_traits<char> >,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >::map<class
   std::basic_string_view<char,struct std::char_traits<char> >,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >(void) __ptr64 */

map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
* __thiscall
std::
map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
::
map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
          (map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
           *this)

{
  void *pvVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  pvVar1 = ::operator_new(0x40);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  *(void **)this = pvVar1;
  return this;
}

// map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_> @ 14fa7ad90

/* public: __cdecl std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > >::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >(void) __ptr64 */

map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
* __thiscall
std::
map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
::
map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
          (map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
           *this)

{
  void *pvVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  pvVar1 = ::operator_new(0x40);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  *(void **)this = pvVar1;
  return this;
}

// tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64> @ 14fa7add0

/* public: __cdecl std::tuple<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > && __ptr64>::tuple<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > && __ptr64>(class std::tuple<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > &&
   __ptr64> && __ptr64) __ptr64 */

tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64> *
__thiscall
std::tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>::
tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>
          (tuple<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>&&___ptr64>
           *this,tuple<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>&&___ptr64>
                 *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  return this;
}

// ConvertibleToStringView @ 14fa7ade0

/* public: __cdecl
   absl::lts_20240722::strings_internal::ConvertibleToStringView::ConvertibleToStringView(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

ConvertibleToStringView * __thiscall
absl::lts_20240722::strings_internal::ConvertibleToStringView::ConvertibleToStringView
          (ConvertibleToStringView *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  ulong64 uVar1;
  
  uVar1 = param_1->_Mysize;
  *(char **)this = param_1->_Mydata;
  *(ulong64 *)(this + 8) = uVar1;
  return this;
}

// bad_variant_access @ 14fa7adf0

/* public: __cdecl std::bad_variant_access::bad_variant_access(class std::bad_variant_access const &
   __ptr64) __ptr64 */

bad_variant_access * __thiscall
std::bad_variant_access::bad_variant_access(bad_variant_access *this,bad_variant_access *param_1)

{
  *(undefined ***)this = exception::vftable;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  __std_exception_copy(&param_1->field_0x8);
  *(undefined ***)this = vftable;
  return this;
}

// bad_variant_access @ 14fa7ae40

/* public: __cdecl std::bad_variant_access::bad_variant_access(void) __ptr64 */

bad_variant_access * __thiscall
std::bad_variant_access::bad_variant_access(bad_variant_access *this)

{
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)(this + 1) = 0;
  *(undefined ***)this = vftable;
  return this;
}

// ~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_> @ 14fa7ae60

/* public: __cdecl std::_Alloc_construct_ptr<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> >
   >::~_Alloc_construct_ptr<class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > >(void)
   __ptr64 */

void __thiscall
std::
_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
::
~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
          (_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
           *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    ::operator_delete(*(void **)(this + 8),0x40);
    return;
  }
  return;
}

// ~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_> @ 14fa7ae80

/* public: __cdecl std::_Alloc_construct_ptr<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64>,void * __ptr64> > >::~_Alloc_construct_ptr<class std::allocator<struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > >(void) __ptr64
    */

void __thiscall
std::
_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
::
~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
          (_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
           *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    ::operator_delete(*(void **)(this + 8),0x40);
    return;
  }
  return;
}

// ~_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_> @ 14fa7aea0

/* public: __cdecl std::_Tree<class std::_Tmap_traits<class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >,0> >::~_Tree<class
   std::_Tmap_traits<class std::basic_string_view<char,struct std::char_traits<char> >,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >,0> >(void) __ptr64
    */

void __thiscall
std::
_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
::
~_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
          (_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
           *this)

{
  _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
  ::
  _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
            ((_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
              *)this,(allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
                      *)this,
             *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
               **)(*(longlong *)this + 8));
  ::operator_delete(*(void **)this,0x40);
  return;
}

// ~_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_> @ 14fa7aed0

/* public: __cdecl std::_Tree<class std::_Tmap_traits<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> >,0> >::~_Tree<class
   std::_Tmap_traits<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> >,0> >(void) __ptr64 */

void __thiscall
std::
_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
::
~_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
          (_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
           *this)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*(longlong *)this + 8) + 0x19);
  plVar3 = *(longlong **)(*(longlong *)this + 8);
  while (cVar1 == '\0') {
    _Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
    ::
    _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
              ((_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
                *)this,(allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
                        *)this,
               (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    ::operator_delete(plVar3,0x40);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  ::operator_delete(*(void **)this,0x40);
  return;
}

// ~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_> @ 14fa7af40

/* public: __cdecl std::_Tree_temp_node<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> >
   >::~_Tree_temp_node<class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > >(void)
   __ptr64 */

void __thiscall
std::
_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
::
~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
          (_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
           *this)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(this + 8);
  if (lVar2 != 0) {
    plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x30) + 8);
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
    while (cVar1 == '\0') {
      _Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
      ::
      _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
                ((_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
                  *)(lVar2 + 0x30),
                 (allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
                  *)(lVar2 + 0x30),
                 (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                  *)plVar3[2]);
      plVar4 = (longlong *)*plVar3;
      ::operator_delete(plVar3,0x40);
      plVar3 = plVar4;
      cVar1 = *(char *)((longlong)plVar4 + 0x19);
    }
    ::operator_delete(*(void **)(lVar2 + 0x30),0x40);
  }
  if (*(void **)(this + 8) == (void *)0x0) {
    return;
  }
  ::operator_delete(*(void **)(this + 8),0x40);
  return;
}

// ~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_> @ 14fa7afe0

/* public: __cdecl std::_Tree_temp_node<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64>,void * __ptr64> > >::~_Tree_temp_node<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64>,void * __ptr64> > >(void) __ptr64 */

void __thiscall
std::
_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
::
~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
          (_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
           *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    ::operator_delete(*(void **)(this + 8),0x40);
    return;
  }
  return;
}

// ~_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_> @ 14fa7b000

/* public: __cdecl std::_Tree_temp_node_alloc<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> >
   >::~_Tree_temp_node_alloc<class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > >(void)
   __ptr64 */

void __thiscall
std::
_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
::
~_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
          (_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
           *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    ::operator_delete(*(void **)(this + 8),0x40);
    return;
  }
  return;
}

// ~_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_> @ 14fa7b020

/* public: __cdecl std::_Tree_temp_node_alloc<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64>,void * __ptr64> > >::~_Tree_temp_node_alloc<class std::allocator<struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > >(void) __ptr64
    */

void __thiscall
std::
_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
::
~_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
          (_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
           *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    ::operator_delete(*(void **)(this + 8),0x40);
    return;
  }
  return;
}

// ~map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_> @ 14fa7b040

/* public: __cdecl std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > >::~map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >(void) __ptr64 */

void __thiscall
std::
map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
::
~map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
          (map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
           *this)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*(longlong *)this + 8) + 0x19);
  plVar3 = *(longlong **)(*(longlong *)this + 8);
  while (cVar1 == '\0') {
    _Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
    ::
    _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
              ((_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
                *)this,(allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
                        *)this,
               (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    ::operator_delete(plVar3,0x40);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  ::operator_delete(*(void **)this,0x40);
  return;
}

// ~pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_> @ 14fa7b0b0

/* public: __cdecl std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const
   ,class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >::~pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >(void) __ptr64 */

void __thiscall
std::
pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
::
~pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
          (pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
           *this)

{
  _Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
  *this_00;
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this_00 = (_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
             *)(this + 0x10);
  cVar1 = *(char *)((longlong)*(longlong **)(*(longlong *)(this + 0x10) + 8) + 0x19);
  plVar3 = *(longlong **)(*(longlong *)(this + 0x10) + 8);
  while (cVar1 == '\0') {
    _Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
    ::
    _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
              (this_00,(allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
                        *)this_00,
               (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    ::operator_delete(plVar3,0x40);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  ::operator_delete(*(void **)this_00,0x40);
  return;
}

// ~GlobalEmptyString @ 14fa7b120

/* public: __cdecl google::protobuf::internal::GlobalEmptyString::~GlobalEmptyString(void) __ptr64
    */

void __thiscall
google::protobuf::internal::GlobalEmptyString::~GlobalEmptyString(GlobalEmptyString *this)

{
  ulonglong uVar1;
  char *pcVar2;
  char *pcVar3;
  ulong64 uVar4;
  
  uVar1 = (this->value_)._Mypair._Myval2._Myres;
  if (0xf < uVar1) {
    pcVar2 = (this->value_)._Mypair._Myval2._Bx._Ptr;
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
  (this->value_)._Mypair._Myval2._Mysize = 0;
  (this->value_)._Mypair._Myval2._Myres = 0xf;
  (this->value_)._Mypair._Myval2._Bx._Buf[0] = '\0';
  return;
}

// ~bad_variant_access @ 14fa7b190

/* public: virtual __cdecl std::bad_variant_access::~bad_variant_access(void) __ptr64 */

void __thiscall std::bad_variant_access::~bad_variant_access(bad_variant_access *this)

{
  *(undefined ***)this = exception::vftable;
  __std_exception_destroy(&this->field_0x8);
  return;
}

// operator== @ 14fa7b1b0

/* public: bool __cdecl std::_Tree_unchecked_const_iterator<class std::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >,struct
   std::_Iterator_base0>::operator==(struct std::_Default_sentinel)const __ptr64 */

bool __thiscall
std::
_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,std::_Iterator_base0>
::operator==(_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,std::_Iterator_base0>
             *this,_Default_sentinel param_1)

{
  return *(char *)(*(longlong *)this + 0x19) != '\0';
}

// operator== @ 14fa7b1d0

/* public: bool __cdecl std::_Tree_unchecked_const_iterator<class std::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct
   std::_Iterator_base0>::operator==(struct std::_Default_sentinel)const __ptr64 */

bool __thiscall
std::
_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::_Iterator_base0>
::operator==(_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::_Iterator_base0>
             *this,_Default_sentinel param_1)

{
  return *(char *)(*(longlong *)this + 0x19) != '\0';
}

// operator[] @ 14fa7b1f0

/* public: class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > & __ptr64 __cdecl
   std::map<class std::basic_string_view<char,struct std::char_traits<char> >,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >::operator[](class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64) __ptr64 */

map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
* __thiscall
std::
map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
::operator[](map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
             *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  longlong *plVar1;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  plVar1 = (longlong *)
           _Try_emplace<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64>
                     (this,&local_18);
  return (map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
          *)(*plVar1 + 0x30);
}

// operator[] @ 14fa7b220

/* public: class google::protobuf::internal::RealDebugCounter const * __ptr64 & __ptr64 __cdecl
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > >::operator[](class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > &&
   __ptr64) __ptr64 */

RealDebugCounter ** __thiscall
std::
map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
::operator[](map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
             *this,variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *param_1)

{
  longlong *plVar1;
  variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> local_18 [24];
  
  plVar1 = (longlong *)
           _Try_emplace<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>
                     (this,local_18);
  return (RealDebugCounter **)(*plVar1 + 0x38);
}

// operator* @ 14fa7b250

/* public: struct std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const
   ,class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > const & __ptr64
   __cdecl std::_Tree_unchecked_const_iterator<class std::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >,struct
   std::_Iterator_base0>::operator*(void)const __ptr64 */

pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
* __thiscall
std::
_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,std::_Iterator_base0>
::operator*(_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,std::_Iterator_base0>
            *this)

{
  return (pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
          *)(*(longlong *)this + 0x20);
}

// operator* @ 14fa7b260

/* public: struct std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64> const & __ptr64 __cdecl std::_Tree_unchecked_const_iterator<class std::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct
   std::_Iterator_base0>::operator*(void)const __ptr64 */

pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
* __thiscall
std::
_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::_Iterator_base0>
::operator*(_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::_Iterator_base0>
            *this)

{
  return (pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
          *)(*(longlong *)this + 0x20);
}

// operator* @ 14fa7b270

/* public: struct std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const
   ,class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > & __ptr64 __cdecl
   std::_Tree_unchecked_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >
   >::operator*(void)const __ptr64 */

pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
* __thiscall
std::
_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>_>
::operator*(_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>_>
            *this)

{
  return (pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
          *)(*(longlong *)this + 0x20);
}

// operator* @ 14fa7b280

/* public: struct std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64> & __ptr64 __cdecl std::_Tree_unchecked_iterator<class std::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >::operator*(void)const __ptr64
    */

pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
* __thiscall
std::
_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
::operator*(_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
            *this)

{
  return (pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>
          *)(*(longlong *)this + 0x20);
}

// operator++ @ 14fa7b290

/* public: class std::_Tree_unchecked_const_iterator<class std::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >,struct
   std::_Iterator_base0> & __ptr64 __cdecl std::_Tree_unchecked_const_iterator<class
   std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >,struct
   std::_Iterator_base0>::operator++(void) __ptr64 */

_Tree_unchecked_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,struct_std::_Iterator_base0>
* __thiscall
std::
_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,std::_Iterator_base0>
::operator++(_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,std::_Iterator_base0>
             *this)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)this;
  plVar3 = *(longlong **)(lVar2 + 0x10);
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar2 + 8) + 0x19);
    lVar5 = *(longlong *)(lVar2 + 8);
    while ((cVar1 == '\0' && (lVar2 == *(longlong *)(lVar5 + 0x10)))) {
      *(longlong *)this = lVar5;
      cVar1 = *(char *)(*(longlong *)(lVar5 + 8) + 0x19);
      lVar2 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 8);
    }
    *(longlong *)this = lVar5;
    return (_Tree_unchecked_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,struct_std::_Iterator_base0>
            *)this;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar4 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar3 = plVar4;
    plVar4 = (longlong *)*plVar4;
  }
  *(longlong **)this = plVar3;
  return (_Tree_unchecked_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,struct_std::_Iterator_base0>
          *)this;
}

// operator++ @ 14fa7b300

/* public: class std::_Tree_unchecked_const_iterator<class std::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::_Iterator_base0> &
   __ptr64 __cdecl std::_Tree_unchecked_const_iterator<class std::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct
   std::_Iterator_base0>::operator++(void) __ptr64 */

_Tree_unchecked_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,struct_std::_Iterator_base0>
* __thiscall
std::
_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::_Iterator_base0>
::operator++(_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::_Iterator_base0>
             *this)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)this;
  plVar3 = *(longlong **)(lVar2 + 0x10);
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar2 + 8) + 0x19);
    lVar5 = *(longlong *)(lVar2 + 8);
    while ((cVar1 == '\0' && (lVar2 == *(longlong *)(lVar5 + 0x10)))) {
      *(longlong *)this = lVar5;
      cVar1 = *(char *)(*(longlong *)(lVar5 + 8) + 0x19);
      lVar2 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 8);
    }
    *(longlong *)this = lVar5;
    return (_Tree_unchecked_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,struct_std::_Iterator_base0>
            *)this;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar4 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar3 = plVar4;
    plVar4 = (longlong *)*plVar4;
  }
  *(longlong **)this = plVar3;
  return (_Tree_unchecked_const_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,struct_std::_Iterator_base0>
          *)this;
}

// operator++ @ 14fa7b370

/* public: class std::_Tree_unchecked_iterator<class std::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > > > & __ptr64 __cdecl
   std::_Tree_unchecked_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >
   >::operator++(void) __ptr64 */

_Tree_unchecked_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>_>
* __thiscall
std::
_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>_>
::operator++(_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>_>
             *this)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)this;
  plVar3 = *(longlong **)(lVar2 + 0x10);
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar2 + 8) + 0x19);
    lVar5 = *(longlong *)(lVar2 + 8);
    while ((cVar1 == '\0' && (lVar2 == *(longlong *)(lVar5 + 0x10)))) {
      *(longlong *)this = lVar5;
      cVar1 = *(char *)(*(longlong *)(lVar5 + 8) + 0x19);
      lVar2 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 8);
    }
    *(longlong *)this = lVar5;
    return (_Tree_unchecked_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>_>
            *)this;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar4 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar3 = plVar4;
    plVar4 = (longlong *)*plVar4;
  }
  *(longlong **)this = plVar3;
  return (_Tree_unchecked_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>_>
          *)this;
}

// operator++ @ 14fa7b3e0

/* public: class std::_Tree_unchecked_iterator<class std::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > & __ptr64 __cdecl
   std::_Tree_unchecked_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct
   std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64> > > >::operator++(void) __ptr64 */

_Tree_unchecked_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
* __thiscall
std::
_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
::operator++(_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
             *this)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)this;
  plVar3 = *(longlong **)(lVar2 + 0x10);
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar2 + 8) + 0x19);
    lVar5 = *(longlong *)(lVar2 + 8);
    while ((cVar1 == '\0' && (lVar2 == *(longlong *)(lVar5 + 0x10)))) {
      *(longlong *)this = lVar5;
      cVar1 = *(char *)(*(longlong *)(lVar5 + 8) + 0x19);
      lVar2 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 8);
    }
    *(longlong *)this = lVar5;
    return (_Tree_unchecked_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
            *)this;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar4 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar3 = plVar4;
    plVar4 = (longlong *)*plVar4;
  }
  *(longlong **)this = plVar3;
  return (_Tree_unchecked_iterator<class_std::_Tree_val<struct_std::_Tree_simple_types<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
          *)this;
}

// operator() @ 14fa7b450

/* public: bool __cdecl std::less<class std::basic_string_view<char,struct std::char_traits<char> >
   >::operator()(class std::basic_string_view<char,struct std::char_traits<char> > const &
   __ptr64,class std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64)const
   __ptr64 */

bool __thiscall
std::less<std::basic_string_view<char,std::char_traits<char>_>_>::operator()
          (less<std::basic_string_view<char,std::char_traits<char>_>_> *this,
          basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong _Size;
  
  uVar2 = param_1->_Mysize;
  uVar1 = param_2->_Mysize;
  _Size = uVar2;
  if (uVar1 < uVar2) {
    _Size = uVar1;
  }
  iVar3 = memcmp(param_1->_Mydata,param_2->_Mydata,_Size);
  if (iVar3 == 0) {
    if (uVar1 <= uVar2) {
      if (uVar1 < uVar2) {
        return false;
      }
      return false;
    }
  }
  else if (-1 < iVar3) {
    return false;
  }
  return true;
}

// operator() @ 14fa7b4c0

/* public: bool __cdecl std::less<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > >::operator()(class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const &
   __ptr64,class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const & __ptr64)const __ptr64 */

bool __thiscall
std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>::operator()
          (less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_> *this,
          variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *param_1,
          variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *param_2)

{
  ulonglong uVar1;
  int iVar2;
  byte bVar3;
  ulonglong _Size;
  ulonglong uVar4;
  
  uVar4 = (longlong)(char)param_2[0x10] + 1;
  if ((longlong)(char)param_1[0x10] + 1U != uVar4) {
    bVar3 = 1;
    if ((longlong)(char)param_1[0x10] + 1U < uVar4) {
      bVar3 = 0xff;
    }
    if (bVar3 != 0) goto LAB_14fa7b579;
  }
  if ((longlong)(char)param_2[0x10] != -1) {
    if (uVar4 != 1) {
      uVar4 = *(ulonglong *)(param_2 + 8);
      uVar1 = *(ulonglong *)(param_1 + 8);
      _Size = uVar1;
      if (uVar4 < uVar1) {
        _Size = uVar4;
      }
      iVar2 = memcmp(*(void **)param_1,*(void **)param_2,_Size);
      if (iVar2 == 0) {
        if (uVar4 <= uVar1) {
          if (uVar1 == uVar4) {
            bVar3 = 0;
            goto LAB_14fa7b533;
          }
          goto LAB_14fa7b556;
        }
      }
      else if (-1 < iVar2) {
LAB_14fa7b556:
        bVar3 = 0;
        goto LAB_14fa7b533;
      }
      bVar3 = 0xff;
LAB_14fa7b533:
      return (bool)(bVar3 >> 7);
    }
    if (*(longlong *)param_1 != *(longlong *)param_2) {
      bVar3 = 0;
      if (*(longlong *)param_1 < *(longlong *)param_2) {
        bVar3 = 0xff;
      }
      return (bool)(bVar3 >> 7);
    }
  }
  bVar3 = 0;
LAB_14fa7b579:
  return (bool)(bVar3 >> 7);
}

// `scalar_deleting_destructor' @ 14fa7b590

/* public: void * __ptr64 __cdecl std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
std::
pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
::_scalar_deleting_destructor_
          (pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>
           *this,uint param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*(longlong *)(this + 0x10) + 8) + 0x19);
  plVar3 = *(longlong **)(*(longlong *)(this + 0x10) + 8);
  while (cVar1 == '\0') {
    _Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
    ::
    _Erase_tree<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
              ((_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
                *)(this + 0x10),
               (allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
                *)(this + 0x10),
               (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    ::operator_delete(plVar3,0x40);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  ::operator_delete(*(void **)(this + 0x10),0x40);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `vector_deleting_destructor' @ 14fa7b630

/* public: virtual void * __ptr64 __cdecl std::bad_variant_access::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
std::bad_variant_access::_vector_deleting_destructor_(bad_variant_access *this,uint param_1)

{
  *(undefined ***)this = exception::vftable;
  __std_exception_destroy(&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// FUN_14fa7b680 @ 14fa7b680

undefined8 * FUN_14fa7b680(void)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  int *piVar4;
  
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar4 < DAT_1553e4af8) {
    _Init_thread_header(&DAT_1553e4af8);
    if (DAT_1553e4af8 == -1) {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0;
        pvVar3 = operator_new(0x40);
        *(void **)pvVar3 = pvVar3;
        *(void **)((longlong)pvVar3 + 8) = pvVar3;
        *(void **)((longlong)pvVar3 + 0x10) = pvVar3;
        *(undefined2 *)((longlong)pvVar3 + 0x18) = 0x101;
        *puVar2 = pvVar3;
      }
      DAT_1553e4af0 = puVar2;
      _Init_thread_footer(&DAT_1553e4af8);
    }
  }
  if (*piVar4 < DAT_1553e4b00) {
    _Init_thread_header(&DAT_1553e4b00);
    if (DAT_1553e4b00 == -1) {
      iVar1 = atexit(FUN_14fa7b790);
      DAT_1553e4afc = iVar1 != 0;
      _Init_thread_footer(&DAT_1553e4b00);
      return DAT_1553e4af0;
    }
  }
  return DAT_1553e4af0;
}

// FUN_14fa7b790 @ 14fa7b790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14fa7b790(void)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  double dVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  char **ppcVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 auStack_178 [32];
  longlong **local_158;
  undefined8 uStack_150;
  char *local_148;
  undefined8 uStack_140;
  char *local_138;
  undefined8 local_130;
  longlong **local_128;
  undefined8 uStack_120;
  char *local_118;
  undefined8 local_110;
  longlong **local_108;
  undefined8 uStack_100;
  char *local_f8;
  undefined8 local_f0;
  longlong **local_e8;
  undefined8 uStack_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  char *local_b8;
  undefined8 local_b0;
  longlong **local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  code *local_90;
  ulonglong local_88;
  code *local_80;
  longlong *local_78;
  code *local_70;
  longlong **local_68;
  code *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_178;
  puVar6 = (undefined8 *)FUN_14fa7b680();
  if (puVar6[1] != 0) {
    uVar7 = __acrt_iob_func(2);
    local_158 = (longlong **)0x1535d6d80;
    local_148 = (char *)0x0;
    uStack_140 = 0;
    uStack_150 = 0x19;
    absl::lts_20240722::str_format_internal::FprintF(uVar7,&local_158,&local_148);
    dVar4 = __real_4059000000000000;
    plVar10 = *(longlong **)*puVar6;
    if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
      uStack_150 = 1;
      local_158 = &local_78;
      do {
        uVar11 = 0;
        uVar7 = __acrt_iob_func(2);
        local_70 = absl::lts_20240722::str_format_internal::FormatArgImpl::
                   Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
        uStack_150 = 1;
        local_138 = "  %-12s:\n";
        local_130 = 9;
        local_158 = &local_78;
        local_78 = plVar10 + 4;
        absl::lts_20240722::str_format_internal::FprintF(uVar7,&local_138,&local_158);
        plVar8 = *(longlong **)plVar10[6];
        cVar1 = *(char *)((longlong)plVar8 + 0x19);
        while (cVar1 == '\0') {
          plVar2 = (longlong *)plVar8[2];
          uVar11 = uVar11 + *(longlong *)plVar8[7];
          if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar2 + 0x19);
            plVar8 = plVar2;
            plVar2 = (longlong *)*plVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar2 + 0x19);
              plVar8 = plVar2;
              plVar2 = (longlong *)*plVar2;
            }
          }
          else {
            cVar1 = *(char *)(plVar8[1] + 0x19);
            plVar5 = (longlong *)plVar8[1];
            plVar2 = plVar8;
            while ((plVar8 = plVar5, cVar1 == '\0' && (plVar2 == (longlong *)plVar8[2]))) {
              cVar1 = *(char *)(plVar8[1] + 0x19);
              plVar5 = (longlong *)plVar8[1];
              plVar2 = plVar8;
            }
          }
          cVar1 = *(char *)((longlong)plVar8 + 0x19);
        }
        plVar8 = *(longlong **)plVar10[6];
        cVar1 = *(char *)((longlong)plVar8 + 0x19);
        while (cVar1 == '\0') {
          uVar3 = *(ulonglong *)plVar8[7];
          if ((char)plVar8[6] == '\0') {
            uVar7 = __acrt_iob_func(2);
            ppcVar9 = &local_118;
            local_90 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<__int64>;
            local_128 = &local_98;
            uStack_120 = 2;
            local_118 = "    %9d : %10zu";
            local_110 = 0xf;
            local_98 = (longlong *)plVar8[4];
          }
          else {
            if ((char)plVar8[6] != '\x01') {
                    /* WARNING: Subroutine does not return */
              std::_Throw_bad_variant_access();
            }
            uVar7 = __acrt_iob_func(2);
            uStack_100 = 2;
            local_90 = absl::lts_20240722::str_format_internal::FormatArgImpl::
                       Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
            ppcVar9 = &local_f8;
            local_108 = &local_98;
            local_f8 = "    %-10s: %10zu";
            local_f0 = 0x10;
            local_98 = plVar8 + 4;
          }
          local_158 = &local_98;
          local_80 = absl::lts_20240722::str_format_internal::FormatArgImpl::
                     Dispatch<unsigned___int64>;
          uStack_150 = 2;
          local_88 = uVar3;
          absl::lts_20240722::str_format_internal::FprintF(uVar7,ppcVar9,&local_158);
          if ((uVar11 != 0) && (1 < (ulonglong)plVar10[7])) {
            local_158 = (longlong **)(((double)uVar3 * dVar4) / (double)uVar11);
            uVar7 = __acrt_iob_func(2);
            local_68 = local_158;
            uStack_e0 = 1;
            local_60 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<double>;
            local_158 = (longlong **)&local_68;
            local_d8 = " (%5.2f%%)";
            uStack_150 = 1;
            local_d0 = 10;
            local_e8 = local_158;
            absl::lts_20240722::str_format_internal::FprintF(uVar7,&local_d8,&local_158);
          }
          uVar7 = __acrt_iob_func(2);
          local_b0 = 1;
          local_c8 = 0;
          local_b8 = "\n";
          uStack_c0 = 0;
          local_158 = (longlong **)0x0;
          uStack_150 = 0;
          absl::lts_20240722::str_format_internal::FprintF(uVar7,&local_b8,&local_158);
          plVar2 = (longlong *)plVar8[2];
          if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar2 + 0x19);
            plVar8 = plVar2;
            plVar2 = (longlong *)*plVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar2 + 0x19);
              plVar8 = plVar2;
              plVar2 = (longlong *)*plVar2;
            }
          }
          else {
            cVar1 = *(char *)(plVar8[1] + 0x19);
            plVar5 = (longlong *)plVar8[1];
            plVar2 = plVar8;
            while ((plVar8 = plVar5, cVar1 == '\0' && (plVar2 == (longlong *)plVar8[2]))) {
              cVar1 = *(char *)(plVar8[1] + 0x19);
              plVar5 = (longlong *)plVar8[1];
              plVar2 = plVar8;
            }
          }
          cVar1 = *(char *)((longlong)plVar8 + 0x19);
        }
        if ((uVar11 != 0) && (1 < (ulonglong)plVar10[7])) {
          uVar7 = __acrt_iob_func(2);
          uStack_a0 = 2;
          local_90 = absl::lts_20240722::str_format_internal::FormatArgImpl::
                     Dispatch<char_const*___ptr64>;
          local_158 = &local_98;
          local_98 = (longlong *)0x150657e64;
          local_148 = "    %-10s: %10zu\n";
          local_80 = absl::lts_20240722::str_format_internal::FormatArgImpl::
                     Dispatch<unsigned___int64>;
          uStack_150 = 2;
          uStack_140 = 0x11;
          local_a8 = local_158;
          local_88 = uVar11;
          absl::lts_20240722::str_format_internal::FprintF(uVar7,&local_148,&local_158);
        }
        plVar8 = (longlong *)plVar10[2];
        if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar8 + 0x19);
          plVar10 = plVar8;
          plVar8 = (longlong *)*plVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar8 + 0x19);
            plVar10 = plVar8;
            plVar8 = (longlong *)*plVar8;
          }
        }
        else {
          cVar1 = *(char *)(plVar10[1] + 0x19);
          plVar2 = (longlong *)plVar10[1];
          plVar8 = plVar10;
          while ((plVar10 = plVar2, cVar1 == '\0' && (plVar8 == (longlong *)plVar10[2]))) {
            cVar1 = *(char *)(plVar10[1] + 0x19);
            plVar2 = (longlong *)plVar10[1];
            plVar8 = plVar10;
          }
        }
      } while (*(char *)((longlong)plVar10 + 0x19) == '\0');
    }
  }
  return;
}

// Register @ 14fa7bcd0

/* private: void __cdecl google::protobuf::internal::RealDebugCounter::Register(class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

void __thiscall
google::protobuf::internal::RealDebugCounter::Register
          (RealDebugCounter *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  bool bVar1;
  map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
  *pmVar2;
  longlong *plVar3;
  longlong lVar4;
  basic_string_view<char,std::char_traits<char>_> *pbVar5;
  char *local_res10 [3];
  basic_string_view<char,std::char_traits<char>_> local_68;
  basic_string_view<char,std::char_traits<char>_> local_58;
  undefined1 local_48;
  char *local_40;
  ulong64 uStack_38;
  undefined1 local_30;
  char *local_18;
  ulong64 uStack_10;
  
  local_58._Mydata = param_1->_Mydata;
  local_58._Mysize = param_1->_Mysize;
  local_48 = 0x2e;
  absl::lts_20240722::strings_internal::
  Splitter<absl::lts_20240722::ByChar,absl::lts_20240722::AllowEmpty,std::basic_string_view<char,std::char_traits<char>_>_>
  ::
  ConvertToPair<std::basic_string_view<char,std::char_traits<char>_>,std::basic_string_view<char,struct_std::char_traits<char>_>_>
            ((Splitter<absl::lts_20240722::ByChar,absl::lts_20240722::AllowEmpty,std::basic_string_view<char,std::char_traits<char>_>_>
              *)&local_58);
  local_68._Mydata = local_18;
  local_68._Mysize = uStack_10;
  bVar1 = absl::lts_20240722::numbers_internal::safe_strto64_base
                    (&local_68,(__int64 *)local_res10,10);
  if (!bVar1) {
    pmVar2 = (map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
              *)FUN_14fa7b680();
    plVar3 = (longlong *)
             std::
             map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
             ::_Try_emplace<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64>
                       (pmVar2,&local_58);
    pbVar5 = &local_68;
    lVar4 = *plVar3;
    local_40 = local_18;
    uStack_38 = uStack_10;
  }
  else {
    pmVar2 = (map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
              *)FUN_14fa7b680();
    plVar3 = (longlong *)
             std::
             map<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
             ::_Try_emplace<std::basic_string_view<char,std::char_traits<char>_>_const&___ptr64>
                       (pmVar2,&local_68);
    pbVar5 = &local_58;
    lVar4 = *plVar3;
    local_40 = local_res10[0];
  }
  local_30 = !bVar1;
  plVar3 = (longlong *)
           std::
           map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
           ::
           _Try_emplace<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>
                     ((map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
                       *)(lVar4 + 0x30),
                      (variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *)
                      pbVar5);
  *(RealDebugCounter **)(*plVar3 + 0x38) = this;
  return;
}

// SetValue @ 14fa7bdb0

/* public: static union absl::lts_20240722::str_format_internal::FormatArgImpl::Data __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<double,2>::SetValue(double const
   & __ptr64) */

Data __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<double,2>::SetValue(double *param_1)

{
  return (Data)((Data)*param_1).ptr;
}

// SetValue @ 14fa7bdc0

/* public: static union absl::lts_20240722::str_format_internal::FormatArgImpl::Data __cdecl
   absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<char const *
   __ptr64,2>::SetValue(char const * __ptr64 const & __ptr64) */

Data __cdecl
absl::lts_20240722::str_format_internal::FormatArgImpl::Manager<char_const*___ptr64,2>::SetValue
          (char **param_1)

{
  return (Data)*param_1;
}

// _Alloc_sentinel_and_proxy @ 14fa7bdd0

/* protected: void __cdecl std::_Tree<class std::_Tmap_traits<class
   std::basic_string_view<char,struct std::char_traits<char> >,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >,0>
   >::_Alloc_sentinel_and_proxy(void) __ptr64 */

void __thiscall
std::
_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
::_Alloc_sentinel_and_proxy
          (_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
           *this)

{
  void *pvVar1;
  
  pvVar1 = ::operator_new(0x40);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  *(void **)this = pvVar1;
  return;
}

// _Alloc_sentinel_and_proxy @ 14fa7be10

/* protected: void __cdecl std::_Tree<class std::_Tmap_traits<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> >,0>
   >::_Alloc_sentinel_and_proxy(void) __ptr64 */

void __thiscall
std::
_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
::_Alloc_sentinel_and_proxy
          (_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
           *this)

{
  void *pvVar1;
  
  pvVar1 = ::operator_new(0x40);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)((longlong)pvVar1 + 0x10) = pvVar1;
  *(undefined2 *)((longlong)pvVar1 + 0x18) = 0x101;
  *(void **)this = pvVar1;
  return;
}

// _Allocate @ 14fa7be50

/* public: void __cdecl std::_Alloc_construct_ptr<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> >
   >::_Allocate(void) __ptr64 */

void __thiscall
std::
_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
::_Allocate(_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
            *this)

{
  void *pvVar1;
  
  *(undefined8 *)(this + 8) = 0;
  pvVar1 = ::operator_new(0x40);
  *(void **)(this + 8) = pvVar1;
  return;
}

// _Allocate @ 14fa7be80

/* public: void __cdecl std::_Alloc_construct_ptr<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64>,void * __ptr64> > >::_Allocate(void) __ptr64 */

void __thiscall
std::
_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
::_Allocate(_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
            *this)

{
  void *pvVar1;
  
  *(undefined8 *)(this + 8) = 0;
  pvVar1 = ::operator_new(0x40);
  *(void **)(this + 8) = pvVar1;
  return;
}

// _Check_grow_by_1 @ 14fa7beb0

/* protected: void __cdecl std::_Tree<class std::_Tmap_traits<class
   std::basic_string_view<char,struct std::char_traits<char> >,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >,0>
   >::_Check_grow_by_1(void) __ptr64 */

void __thiscall
std::
_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
::_Check_grow_by_1(_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
                   *this)

{
  if (*(longlong *)(this + 8) != 0x3ffffffffffffff) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _Throw_tree_length_error();
}

// _Check_grow_by_1 @ 14fa7bee0

/* protected: void __cdecl std::_Tree<class std::_Tmap_traits<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> >,0> >::_Check_grow_by_1(void)
   __ptr64 */

void __thiscall
std::
_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
::_Check_grow_by_1(_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
                   *this)

{
  if (*(longlong *)(this + 8) != 0x3ffffffffffffff) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _Throw_tree_length_error();
}

// _Get @ 14fa7bf10

/* public: class std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64 __cdecl
   std::_Variant_storage_<1,class std::basic_string_view<char,struct std::char_traits<char> >
   >::_Get(void)const __ptr64&  */

basic_string_view<char,std::char_traits<char>_> * __thiscall
std::_Variant_storage_<1,std::basic_string_view<char,std::char_traits<char>_>_>::_Get
          (_Variant_storage_<1,std::basic_string_view<char,std::char_traits<char>_>_> *this)

{
  return (basic_string_view<char,std::char_traits<char>_> *)this;
}

// _Get @ 14fa7bf20

/* public: __int64 const & __ptr64 __cdecl std::_Variant_storage_<1,__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >::_Get(void)const __ptr64&  */

__int64 * __thiscall
std::_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_>::_Get
          (_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_> *this)

{
  return (__int64 *)this;
}

// _Get_first @ 14fa7bf30

/* public: struct std::less<class std::basic_string_view<char,struct std::char_traits<char> > >
   const & __ptr64 __cdecl std::_Compressed_pair<struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::_Compressed_pair<class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> >,class
   std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >
   >,1>,1>::_Get_first(void)const __ptr64 */

less<std::basic_string_view<char,std::char_traits<char>_>_> * __thiscall
std::
_Compressed_pair<std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,1>,1>
::_Get_first(_Compressed_pair<std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,1>,1>
             *this)

{
  return (less<std::basic_string_view<char,std::char_traits<char>_>_> *)this;
}

// _Get_first @ 14fa7bf40

/* public: struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > > const & __ptr64 __cdecl std::_Compressed_pair<struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::_Compressed_pair<class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> >,class
   std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,1>,1>::_Get_first(void)const
   __ptr64 */

less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_> * __thiscall
std::
_Compressed_pair<std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,1>,1>
::_Get_first(_Compressed_pair<std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,1>,1>
             *this)

{
  return (less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_> *)this;
}

// _Get_first @ 14fa7bf50

/* public: class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > & __ptr64
   __cdecl std::_Compressed_pair<class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> >,class
   std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >,1>::_Get_first(void)
   __ptr64 */

allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
* __thiscall
std::
_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,1>
::_Get_first(_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,1>
             *this)

{
  return (allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
          *)this;
}

// _Get_first @ 14fa7bf60

/* public: class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > const &
   __ptr64 __cdecl std::_Compressed_pair<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64>
   >,class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >,1>::_Get_first(void)const
   __ptr64 */

allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
* __thiscall
std::
_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,1>
::_Get_first(_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>,1>
             *this)

{
  return (allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
          *)this;
}

// _Get_first @ 14fa7bf70

/* public: class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > & __ptr64
   __cdecl std::_Compressed_pair<class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> >,class
   std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,1>::_Get_first(void) __ptr64 */

allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
* __thiscall
std::
_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,1>
::_Get_first(_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,1>
             *this)

{
  return (allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
          *)this;
}

// _Get_first @ 14fa7bf80

/* public: class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > const &
   __ptr64 __cdecl std::_Compressed_pair<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64>,void * __ptr64> >,class std::_Tree_val<struct std::_Tree_simple_types<struct
   std::pair<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const ,class google::protobuf::internal::RealDebugCounter const *
   __ptr64> > >,1>::_Get_first(void)const __ptr64 */

allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
* __thiscall
std::
_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,1>
::_Get_first(_Compressed_pair<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>,std::_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,1>
             *this)

{
  return (allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
          *)this;
}

// _Get_scary @ 14fa7bf90

/* protected: class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > > * __ptr64 __cdecl
   std::_Tree<class std::_Tmap_traits<class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >,0>
   >::_Get_scary(void) __ptr64 */

_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
* __thiscall
std::
_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
::_Get_scary(_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
             *this)

{
  return (_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
          *)this;
}

// _Get_scary @ 14fa7bfa0

/* protected: class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > > const * __ptr64 __cdecl
   std::_Tree<class std::_Tmap_traits<class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >,0>
   >::_Get_scary(void)const __ptr64 */

_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
* __thiscall
std::
_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
::_Get_scary(_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
             *this)

{
  return (_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
          *)this;
}

// _Get_scary @ 14fa7bfb0

/* protected: class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > * __ptr64 __cdecl
   std::_Tree<class std::_Tmap_traits<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> >,0> >::_Get_scary(void) __ptr64 */

_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
* __thiscall
std::
_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
::_Get_scary(_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
             *this)

{
  return (_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
          *)this;
}

// _Get_scary @ 14fa7bfc0

/* protected: class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > const * __ptr64 __cdecl
   std::_Tree<class std::_Tmap_traits<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> >,0> >::_Get_scary(void)const
   __ptr64 */

_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
* __thiscall
std::
_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
::_Get_scary(_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
             *this)

{
  return (_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
          *)this;
}

// _Getal @ 14fa7bfd0

/* protected: class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > & __ptr64
   __cdecl std::_Tree<class std::_Tmap_traits<class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >,0> >::_Getal(void)
   __ptr64 */

allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
* __thiscall
std::
_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
::_Getal(_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
         *this)

{
  return (allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
          *)this;
}

// _Getal @ 14fa7bfe0

/* protected: class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > const &
   __ptr64 __cdecl std::_Tree<class std::_Tmap_traits<class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >,0>
   >::_Getal(void)const __ptr64 */

allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
* __thiscall
std::
_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
::_Getal(_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
         *this)

{
  return (allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
          *)this;
}

// _Getal @ 14fa7bff0

/* protected: class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > & __ptr64
   __cdecl std::_Tree<class std::_Tmap_traits<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> >,0> >::_Getal(void) __ptr64 */

allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
* __thiscall
std::
_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
::_Getal(_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
         *this)

{
  return (allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
          *)this;
}

// _Getal @ 14fa7c000

/* protected: class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > const &
   __ptr64 __cdecl std::_Tree<class std::_Tmap_traits<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> >,0> >::_Getal(void)const __ptr64
    */

allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
* __thiscall
std::
_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
::_Getal(_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
         *this)

{
  return (allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
          *)this;
}

// _Getcomp @ 14fa7c010

/* protected: struct std::less<class std::basic_string_view<char,struct std::char_traits<char> > >
   const & __ptr64 __cdecl std::_Tree<class std::_Tmap_traits<class
   std::basic_string_view<char,struct std::char_traits<char> >,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >,0>
   >::_Getcomp(void)const __ptr64 */

less<std::basic_string_view<char,std::char_traits<char>_>_> * __thiscall
std::
_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
::_Getcomp(_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
           *this)

{
  return (less<std::basic_string_view<char,std::char_traits<char>_>_> *)this;
}

// _Getcomp @ 14fa7c020

/* protected: struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > > const & __ptr64 __cdecl std::_Tree<class std::_Tmap_traits<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> >,0> >::_Getcomp(void)const __ptr64
    */

less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_> * __thiscall
std::
_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
::_Getcomp(_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
           *this)

{
  return (less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_> *)this;
}

// _Insert_node @ 14fa7c030

/* public: struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   __cdecl std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >::_Insert_node(struct
   std::_Tree_id<struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64>,struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   const) __ptr64 */

_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
* __thiscall
std::
_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
::_Insert_node(_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
               *this,longlong *param_2,
              _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
              *param_3)

{
  char cVar1;
  longlong *plVar2;
  _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
  *p_Var3;
  _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
  *p_Var4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
  *p_Var8;
  longlong *plVar9;
  longlong *plVar10;
  
  *(longlong *)(this + 8) = *(longlong *)(this + 8) + 1;
  plVar2 = *(longlong **)this;
  plVar9 = (longlong *)*param_2;
  *(longlong **)(param_3 + 8) = plVar9;
  if (plVar9 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    param_3[0x18] =
         (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
          )0x1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar9[2] = (longlong)param_3;
    if (plVar9 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar9 = (longlong)param_3;
    if (plVar9 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(*(longlong *)(param_3 + 8) + 0x18);
  p_Var8 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    p_Var3 = *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
               **)(p_Var8 + 8);
    p_Var4 = (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
              *)**(longlong **)(p_Var3 + 8);
    if (p_Var3 == p_Var4) {
      lVar5 = (*(longlong **)(p_Var3 + 8))[2];
      if (*(char *)(lVar5 + 0x18) == '\0') {
        p_Var3[0x18] = (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                        )0x1;
        *(undefined1 *)(lVar5 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(*(longlong *)(p_Var8 + 8) + 8) + 0x18) = 0;
        p_Var8 = *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                   **)(*(longlong *)(p_Var8 + 8) + 8);
      }
      else {
        p_Var4 = *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                   **)(p_Var3 + 0x10);
        if (p_Var8 == p_Var4) {
          *(longlong *)(p_Var3 + 0x10) = *(longlong *)p_Var4;
          if (*(char *)(*(longlong *)p_Var4 + 0x19) == '\0') {
            *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
              **)(*(longlong *)p_Var4 + 8) = p_Var3;
          }
          *(longlong *)(p_Var4 + 8) = *(longlong *)(p_Var3 + 8);
          if (p_Var3 == *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                          **)(*(longlong *)this + 8)) {
            *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
              **)(*(longlong *)this + 8) = p_Var4;
          }
          else {
            plVar9 = *(longlong **)(p_Var3 + 8);
            if (p_Var3 == (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                           *)*plVar9) {
              *plVar9 = (longlong)p_Var4;
            }
            else {
              plVar9[2] = (longlong)p_Var4;
            }
          }
          *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
            **)p_Var4 = p_Var3;
          *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
            **)(p_Var3 + 8) = p_Var4;
          p_Var8 = p_Var3;
        }
        *(undefined1 *)(*(longlong *)(p_Var8 + 8) + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(*(longlong *)(p_Var8 + 8) + 8) + 0x18) = 0;
        plVar9 = *(longlong **)(*(longlong *)(p_Var8 + 8) + 8);
        plVar10 = (longlong *)*plVar9;
        *plVar9 = plVar10[2];
        if (*(char *)(plVar10[2] + 0x19) == '\0') {
          *(longlong **)(plVar10[2] + 8) = plVar9;
        }
        plVar10[1] = plVar9[1];
        if (plVar9 == *(longlong **)(*(longlong *)this + 8)) {
          *(longlong **)(*(longlong *)this + 8) = plVar10;
          plVar10[2] = (longlong)plVar9;
        }
        else {
          plVar6 = (longlong *)plVar9[1];
          if (plVar9 == (longlong *)plVar6[2]) {
            plVar6[2] = (longlong)plVar10;
            plVar10[2] = (longlong)plVar9;
          }
          else {
            *plVar6 = (longlong)plVar10;
            plVar10[2] = (longlong)plVar9;
          }
        }
LAB_14fa7c26d:
        plVar9[1] = (longlong)plVar10;
      }
    }
    else {
      if (p_Var4[0x18] !=
          (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
           )0x0) {
        p_Var4 = *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                   **)p_Var3;
        if (p_Var8 == p_Var4) {
          *(longlong *)p_Var3 = *(longlong *)(p_Var4 + 0x10);
          if (*(char *)(*(longlong *)(p_Var4 + 0x10) + 0x19) == '\0') {
            *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
              **)(*(longlong *)(p_Var4 + 0x10) + 8) = p_Var3;
          }
          *(longlong *)(p_Var4 + 8) = *(longlong *)(p_Var3 + 8);
          if (p_Var3 == *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                          **)(*(longlong *)this + 8)) {
            *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
              **)(*(longlong *)this + 8) = p_Var4;
          }
          else {
            puVar7 = *(undefined8 **)(p_Var3 + 8);
            if (p_Var3 == (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                           *)puVar7[2]) {
              puVar7[2] = p_Var4;
            }
            else {
              *puVar7 = p_Var4;
            }
          }
          *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
            **)(p_Var4 + 0x10) = p_Var3;
          *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
            **)(p_Var3 + 8) = p_Var4;
          p_Var8 = p_Var3;
        }
        *(undefined1 *)(*(longlong *)(p_Var8 + 8) + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(*(longlong *)(p_Var8 + 8) + 8) + 0x18) = 0;
        plVar9 = *(longlong **)(*(longlong *)(p_Var8 + 8) + 8);
        plVar10 = (longlong *)plVar9[2];
        plVar9[2] = *plVar10;
        if (*(char *)(*plVar10 + 0x19) == '\0') {
          *(longlong **)(*plVar10 + 8) = plVar9;
        }
        plVar10[1] = plVar9[1];
        if (plVar9 == *(longlong **)(*(longlong *)this + 8)) {
          *(longlong **)(*(longlong *)this + 8) = plVar10;
        }
        else {
          puVar7 = (undefined8 *)plVar9[1];
          if (plVar9 == (longlong *)*puVar7) {
            *puVar7 = plVar10;
          }
          else {
            puVar7[2] = plVar10;
          }
        }
        *plVar10 = (longlong)plVar9;
        goto LAB_14fa7c26d;
      }
      p_Var3[0x18] = (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                      )0x1;
      p_Var4[0x18] = (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                      )0x1;
      *(undefined1 *)(*(longlong *)(*(longlong *)(p_Var8 + 8) + 8) + 0x18) = 0;
      p_Var8 = *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                 **)(*(longlong *)(p_Var8 + 8) + 8);
    }
    cVar1 = *(char *)(*(longlong *)(p_Var8 + 8) + 0x18);
  } while( true );
}

// _Insert_node @ 14fa7c2a0

/* public: struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 __cdecl
   std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >::_Insert_node(struct
   std::_Tree_id<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64>,struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 const)
   __ptr64 */

_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
* __thiscall
std::
_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
::_Insert_node(_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
               *this,longlong *param_2,
              _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
              *param_3)

{
  char cVar1;
  longlong *plVar2;
  _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
  *p_Var3;
  _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
  *p_Var4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
  *p_Var8;
  longlong *plVar9;
  longlong *plVar10;
  
  *(longlong *)(this + 8) = *(longlong *)(this + 8) + 1;
  plVar2 = *(longlong **)this;
  plVar9 = (longlong *)*param_2;
  *(longlong **)(param_3 + 8) = plVar9;
  if (plVar9 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    param_3[0x18] =
         (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
          )0x1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar9[2] = (longlong)param_3;
    if (plVar9 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar9 = (longlong)param_3;
    if (plVar9 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(*(longlong *)(param_3 + 8) + 0x18);
  p_Var8 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    p_Var3 = *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
               **)(p_Var8 + 8);
    p_Var4 = (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
              *)**(longlong **)(p_Var3 + 8);
    if (p_Var3 == p_Var4) {
      lVar5 = (*(longlong **)(p_Var3 + 8))[2];
      if (*(char *)(lVar5 + 0x18) == '\0') {
        p_Var3[0x18] = (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                        )0x1;
        *(undefined1 *)(lVar5 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(*(longlong *)(p_Var8 + 8) + 8) + 0x18) = 0;
        p_Var8 = *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                   **)(*(longlong *)(p_Var8 + 8) + 8);
      }
      else {
        p_Var4 = *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                   **)(p_Var3 + 0x10);
        if (p_Var8 == p_Var4) {
          *(longlong *)(p_Var3 + 0x10) = *(longlong *)p_Var4;
          if (*(char *)(*(longlong *)p_Var4 + 0x19) == '\0') {
            *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
              **)(*(longlong *)p_Var4 + 8) = p_Var3;
          }
          *(longlong *)(p_Var4 + 8) = *(longlong *)(p_Var3 + 8);
          if (p_Var3 == *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                          **)(*(longlong *)this + 8)) {
            *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
              **)(*(longlong *)this + 8) = p_Var4;
          }
          else {
            plVar9 = *(longlong **)(p_Var3 + 8);
            if (p_Var3 == (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                           *)*plVar9) {
              *plVar9 = (longlong)p_Var4;
            }
            else {
              plVar9[2] = (longlong)p_Var4;
            }
          }
          *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
            **)p_Var4 = p_Var3;
          *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
            **)(p_Var3 + 8) = p_Var4;
          p_Var8 = p_Var3;
        }
        *(undefined1 *)(*(longlong *)(p_Var8 + 8) + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(*(longlong *)(p_Var8 + 8) + 8) + 0x18) = 0;
        plVar9 = *(longlong **)(*(longlong *)(p_Var8 + 8) + 8);
        plVar10 = (longlong *)*plVar9;
        *plVar9 = plVar10[2];
        if (*(char *)(plVar10[2] + 0x19) == '\0') {
          *(longlong **)(plVar10[2] + 8) = plVar9;
        }
        plVar10[1] = plVar9[1];
        if (plVar9 == *(longlong **)(*(longlong *)this + 8)) {
          *(longlong **)(*(longlong *)this + 8) = plVar10;
          plVar10[2] = (longlong)plVar9;
        }
        else {
          plVar6 = (longlong *)plVar9[1];
          if (plVar9 == (longlong *)plVar6[2]) {
            plVar6[2] = (longlong)plVar10;
            plVar10[2] = (longlong)plVar9;
          }
          else {
            *plVar6 = (longlong)plVar10;
            plVar10[2] = (longlong)plVar9;
          }
        }
LAB_14fa7c4dd:
        plVar9[1] = (longlong)plVar10;
      }
    }
    else {
      if (p_Var4[0x18] !=
          (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
           )0x0) {
        p_Var4 = *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                   **)p_Var3;
        if (p_Var8 == p_Var4) {
          *(longlong *)p_Var3 = *(longlong *)(p_Var4 + 0x10);
          if (*(char *)(*(longlong *)(p_Var4 + 0x10) + 0x19) == '\0') {
            *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
              **)(*(longlong *)(p_Var4 + 0x10) + 8) = p_Var3;
          }
          *(longlong *)(p_Var4 + 8) = *(longlong *)(p_Var3 + 8);
          if (p_Var3 == *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                          **)(*(longlong *)this + 8)) {
            *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
              **)(*(longlong *)this + 8) = p_Var4;
          }
          else {
            puVar7 = *(undefined8 **)(p_Var3 + 8);
            if (p_Var3 == (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                           *)puVar7[2]) {
              puVar7[2] = p_Var4;
            }
            else {
              *puVar7 = p_Var4;
            }
          }
          *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
            **)(p_Var4 + 0x10) = p_Var3;
          *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
            **)(p_Var3 + 8) = p_Var4;
          p_Var8 = p_Var3;
        }
        *(undefined1 *)(*(longlong *)(p_Var8 + 8) + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(*(longlong *)(p_Var8 + 8) + 8) + 0x18) = 0;
        plVar9 = *(longlong **)(*(longlong *)(p_Var8 + 8) + 8);
        plVar10 = (longlong *)plVar9[2];
        plVar9[2] = *plVar10;
        if (*(char *)(*plVar10 + 0x19) == '\0') {
          *(longlong **)(*plVar10 + 8) = plVar9;
        }
        plVar10[1] = plVar9[1];
        if (plVar9 == *(longlong **)(*(longlong *)this + 8)) {
          *(longlong **)(*(longlong *)this + 8) = plVar10;
        }
        else {
          puVar7 = (undefined8 *)plVar9[1];
          if (plVar9 == (longlong *)*puVar7) {
            *puVar7 = plVar10;
          }
          else {
            puVar7[2] = plVar10;
          }
        }
        *plVar10 = (longlong)plVar9;
        goto LAB_14fa7c4dd;
      }
      p_Var3[0x18] = (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                      )0x1;
      p_Var4[0x18] = (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                      )0x1;
      *(undefined1 *)(*(longlong *)(*(longlong *)(p_Var8 + 8) + 8) + 0x18) = 0;
      p_Var8 = *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                 **)(*(longlong *)(p_Var8 + 8) + 8);
    }
    cVar1 = *(char *)(*(longlong *)(p_Var8 + 8) + 0x18);
  } while( true );
}

// _Lrotate @ 14fa7c510

/* public: void __cdecl std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >::_Lrotate(struct
   std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct std::char_traits<char>
   > const ,class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64) __ptr64 */

void __thiscall
std::
_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
::_Lrotate(_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
           *this,_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  *(longlong *)(param_1 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x19) == '\0') {
    *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
      **)(*plVar1 + 8) = param_1;
  }
  plVar1[1] = *(longlong *)(param_1 + 8);
  if (param_1 ==
      *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
        **)(*(longlong *)this + 8)) {
    *(longlong **)(*(longlong *)this + 8) = plVar1;
    *plVar1 = (longlong)param_1;
    *(longlong **)(param_1 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (param_1 ==
      (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
       *)*plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = (longlong)param_1;
    *(longlong **)(param_1 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = (longlong)param_1;
  *(longlong **)(param_1 + 8) = plVar1;
  return;
}

// _Lrotate @ 14fa7c570

/* public: void __cdecl std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > >::_Lrotate(struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64) __ptr64
    */

void __thiscall
std::
_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
::_Lrotate(_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
           *this,_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  *(longlong *)(param_1 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x19) == '\0') {
    *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
      **)(*plVar1 + 8) = param_1;
  }
  plVar1[1] = *(longlong *)(param_1 + 8);
  if (param_1 ==
      *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
        **)(*(longlong *)this + 8)) {
    *(longlong **)(*(longlong *)this + 8) = plVar1;
    *plVar1 = (longlong)param_1;
    *(longlong **)(param_1 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (param_1 ==
      (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
       *)*plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = (longlong)param_1;
    *(longlong **)(param_1 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = (longlong)param_1;
  *(longlong **)(param_1 + 8) = plVar1;
  return;
}

// _Min @ 14fa7c5d0

/* public: static struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   __cdecl std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >::_Min(struct
   std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct std::char_traits<char>
   > const ,class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64) */

_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
* __cdecl std::
          _Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
          ::_Min(_Tree_node<struct_std::pair<class_std::basic_string_view<char,struct_std::char_traits<char>_>_const_,class_std::map<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>,class_google::protobuf::internal::RealDebugCounter_const*___ptr64,struct_std::less<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_>,class_std::allocator<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                 *param_1)

{
  _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
  *p_Var1;
  _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
  *p_Var2;
  _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
  *p_Var3;
  
  p_Var3 = *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
             **)param_1;
  if ((*(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
         **)param_1)[0x19] ==
      (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
       )0x0) {
    do {
      p_Var1 = *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                 **)p_Var3;
      p_Var2 = p_Var3;
      p_Var3 = p_Var1;
    } while (p_Var1[0x19] ==
             (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
              )0x0);
    return p_Var2;
  }
  return (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
          *)param_1;
}

// _Min @ 14fa7c600

/* public: static struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 __cdecl
   std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >::_Min(struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64) */

_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
* __cdecl std::
          _Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
          ::_Min(_Tree_node<struct_std::pair<class_std::variant<__int64,class_std::basic_string_view<char,struct_std::char_traits<char>_>_>_const_,class_google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                 *param_1)

{
  _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
  *p_Var1;
  _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
  *p_Var2;
  _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
  *p_Var3;
  
  p_Var3 = *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
             **)param_1;
  if ((*(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
         **)param_1)[0x19] ==
      (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
       )0x0) {
    do {
      p_Var1 = *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                 **)p_Var3;
      p_Var2 = p_Var3;
      p_Var3 = p_Var1;
    } while (p_Var1[0x19] ==
             (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
              )0x0);
    return p_Var2;
  }
  return (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
          *)param_1;
}

// _Release @ 14fa7c630

/* public: struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   __cdecl std::_Alloc_construct_ptr<class std::allocator<struct std::_Tree_node<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> >
   >::_Release(void) __ptr64 */

_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
* __thiscall
std::
_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
::_Release(_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
           *this)

{
  _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
  *p_Var1;
  
  p_Var1 = *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
             **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  return p_Var1;
}

// _Release @ 14fa7c650

/* public: struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 __cdecl
   std::_Alloc_construct_ptr<class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> >
   >::_Release(void) __ptr64 */

_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
* __thiscall
std::
_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
::_Release(_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
           *this)

{
  _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
  *p_Var1;
  
  p_Var1 = *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
             **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  return p_Var1;
}

// _Rrotate @ 14fa7c670

/* public: void __cdecl std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > >::_Rrotate(struct
   std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct std::char_traits<char>
   > const ,class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> *
   __ptr64) __ptr64 */

void __thiscall
std::
_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
::_Rrotate(_Tree_val<std::_Tree_simple_types<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>_>
           *this,_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)param_1;
  *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x19) == '\0') {
    *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
      **)(*(longlong *)(lVar1 + 0x10) + 8) = param_1;
  }
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 8);
  if (param_1 ==
      *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
        **)(*(longlong *)this + 8)) {
    *(longlong *)(*(longlong *)this + 8) = lVar1;
    *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
      **)(lVar1 + 0x10) = param_1;
    *(longlong *)(param_1 + 8) = lVar1;
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (param_1 ==
      (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
       *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
      **)(lVar1 + 0x10) = param_1;
    *(longlong *)(param_1 + 8) = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
    **)(lVar1 + 0x10) = param_1;
  *(longlong *)(param_1 + 8) = lVar1;
  return;
}

// _Rrotate @ 14fa7c6d0

/* public: void __cdecl std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > >::_Rrotate(struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64) __ptr64
    */

void __thiscall
std::
_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
::_Rrotate(_Tree_val<std::_Tree_simple_types<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>
           *this,_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)param_1;
  *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x19) == '\0') {
    *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
      **)(*(longlong *)(lVar1 + 0x10) + 8) = param_1;
  }
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 8);
  if (param_1 ==
      *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
        **)(*(longlong *)this + 8)) {
    *(longlong *)(*(longlong *)this + 8) = lVar1;
    *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
      **)(lVar1 + 0x10) = param_1;
    *(longlong *)(param_1 + 8) = lVar1;
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (param_1 ==
      (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
       *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
      **)(lVar1 + 0x10) = param_1;
    *(longlong *)(param_1 + 8) = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
    **)(lVar1 + 0x10) = param_1;
  *(longlong *)(param_1 + 8) = lVar1;
  return;
}

// _Storage @ 14fa7c730

/* public: class std::_Variant_storage_<1,__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > const & __ptr64 __cdecl std::_Variant_base<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >::_Storage(void)const __ptr64&  */

_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_> * __thiscall
std::_Variant_base<__int64,std::basic_string_view<char,std::char_traits<char>_>_>::_Storage
          (_Variant_base<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *this)

{
  return (_Variant_storage_<1,__int64,std::basic_string_view<char,std::char_traits<char>_>_> *)this;
}

// _Throw_bad_variant_access @ 14fa7c740

/* void __cdecl std::_Throw_bad_variant_access(void) */

void __cdecl std::_Throw_bad_variant_access(void)

{
  bad_variant_access local_28;
  undefined8 local_18;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_18 = 0;
  bad_variant_access::bad_variant_access(&local_28);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_28,(ThrowInfo *)&_TI2_AVbad_variant_access_std__);
}

// _Unchecked_begin @ 14fa7c780

/* public: class std::_Tree_unchecked_iterator<class std::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > > > > __cdecl
   std::_Tree<class std::_Tmap_traits<class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >,0>
   >::_Unchecked_begin(void) __ptr64 */

void __thiscall
std::
_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
::_Unchecked_begin(_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
                   *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = **(undefined8 **)this;
  return;
}

// _Unchecked_begin @ 14fa7c7a0

/* public: class std::_Tree_unchecked_iterator<class std::_Tree_val<struct
   std::_Tree_simple_types<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > > __cdecl std::_Tree<class
   std::_Tmap_traits<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> >,0>
   >::_Unchecked_begin(void) __ptr64 */

void __thiscall
std::
_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
::_Unchecked_begin(_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
                   *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = **(undefined8 **)this;
  return;
}

// _Unchecked_end @ 14fa7c7c0

/* public: struct std::_Default_sentinel __cdecl std::_Tree<class std::_Tmap_traits<class
   std::basic_string_view<char,struct std::char_traits<char> >,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >,0>
   >::_Unchecked_end(void)const __ptr64 */

_Default_sentinel __thiscall
std::
_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
::_Unchecked_end(_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
                 *this)

{
  undefined1 *in_RDX;
  
  *in_RDX = 0;
  return SUB81(in_RDX,0);
}

// _Unchecked_end @ 14fa7c7d0

/* public: struct std::_Default_sentinel __cdecl std::_Tree<class std::_Tmap_traits<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> >,0> >::_Unchecked_end(void)const
   __ptr64 */

_Default_sentinel __thiscall
std::
_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
::_Unchecked_end(_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
                 *this)

{
  undefined1 *in_RDX;
  
  *in_RDX = 0;
  return SUB81(in_RDX,0);
}

// allocate @ 14fa7c7e0

/* public: struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   __cdecl std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64>
   >::allocate(unsigned __int64) __ptr64 */

_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
* __thiscall
std::
allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
::allocate(allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
           *this,__uint64 param_1)

{
  void *pvVar1;
  _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
  *p_Var2;
  ulonglong uVar3;
  
  if (param_1 < 0x400000000000000) {
    uVar3 = param_1 * 0x40;
    if (uVar3 < 0x1000) {
      if (uVar3 != 0) {
        p_Var2 = ::operator_new(uVar3);
        return p_Var2;
      }
      return (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
              *)0x0;
    }
    if (uVar3 < uVar3 + 0x27) {
      pvVar1 = ::operator_new(uVar3 + 0x27);
      if (pvVar1 != (void *)0x0) {
        p_Var2 = (_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                  *)((longlong)pvVar1 + 0x27U & 0xffffffffffffffe0);
        *(void **)(p_Var2 + -8) = pvVar1;
        return p_Var2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// allocate @ 14fa7c860

/* public: struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64 __cdecl
   std::allocator<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64>
   >::allocate(unsigned __int64) __ptr64 */

_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
* __thiscall
std::
allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
::allocate(allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
           *this,__uint64 param_1)

{
  void *pvVar1;
  _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
  *p_Var2;
  ulonglong uVar3;
  
  if (param_1 < 0x400000000000000) {
    uVar3 = param_1 * 0x40;
    if (uVar3 < 0x1000) {
      if (uVar3 != 0) {
        p_Var2 = ::operator_new(uVar3);
        return p_Var2;
      }
      return (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
              *)0x0;
    }
    if (uVar3 < uVar3 + 0x27) {
      pvVar1 = ::operator_new(uVar3 + 0x27);
      if (pvVar1 != (void *)0x0) {
        p_Var2 = (_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                  *)((longlong)pvVar1 + 0x27U & 0xffffffffffffffe0);
        *(void **)(p_Var2 + -8) = pvVar1;
        return p_Var2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// deallocate @ 14fa7c8e0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct std::char_traits<char>
   > const ,class std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> >
   >::deallocate(class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > &
   __ptr64,struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   const,unsigned __int64) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
::deallocate(allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
             *param_1,
            _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
            *param_2,__uint64 param_3)

{
  _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
  *p_Var1;
  ulong64 uVar2;
  
  uVar2 = param_3 * 0x40;
  p_Var1 = param_2;
  if (0xfff < uVar2) {
    p_Var1 = *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
               **)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if ((_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
         *)0x1f < param_2 + (-8 - (longlong)p_Var1)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(p_Var1,uVar2);
  return;
}

// deallocate @ 14fa7c930

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> >
   >::deallocate(class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > &
   __ptr64,struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64
   const,unsigned __int64) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
::deallocate(allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
             *param_1,
            _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
            *param_2,__uint64 param_3)

{
  _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
  *p_Var1;
  ulong64 uVar2;
  
  uVar2 = param_3 * 0x40;
  p_Var1 = param_2;
  if (0xfff < uVar2) {
    p_Var1 = *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
               **)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if ((_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
         *)0x1f < param_2 + (-8 - (longlong)p_Var1)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(p_Var1,uVar2);
  return;
}

// deallocate @ 14fa7c980

/* public: void __cdecl std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64>
   >::deallocate(struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> * __ptr64
   const,unsigned __int64) __ptr64 */

void __thiscall
std::
allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
::deallocate(allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
             *this,_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
                   *param_1,__uint64 param_2)

{
  _Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
  *p_Var1;
  ulong64 uVar2;
  
  uVar2 = param_2 * 0x40;
  p_Var1 = param_1;
  if (0xfff < uVar2) {
    p_Var1 = *(_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
               **)(param_1 + -8);
    uVar2 = uVar2 + 0x27;
    if ((_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>
         *)0x1f < param_1 + (-8 - (longlong)p_Var1)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(p_Var1,uVar2);
  return;
}

// deallocate @ 14fa7c9d0

/* public: void __cdecl std::allocator<struct std::_Tree_node<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64>
   >::deallocate(struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> * __ptr64
   const,unsigned __int64) __ptr64 */

void __thiscall
std::
allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
::deallocate(allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
             *this,_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
                   *param_1,__uint64 param_2)

{
  _Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
  *p_Var1;
  ulong64 uVar2;
  
  uVar2 = param_2 * 0x40;
  p_Var1 = param_1;
  if (0xfff < uVar2) {
    p_Var1 = *(_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
               **)(param_1 + -8);
    uVar2 = uVar2 + 0x27;
    if ((_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>
         *)0x1f < param_1 + (-8 - (longlong)p_Var1)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(p_Var1,uVar2);
  return;
}

// empty @ 14fa7ca20

/* public: bool __cdecl std::_Tree<class std::_Tmap_traits<class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >,0>
   >::empty(void)const __ptr64 */

bool __thiscall
std::
_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
::empty(_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
        *this)

{
  return *(longlong *)(this + 8) == 0;
}

// index @ 14fa7ca30

/* public: unsigned __int64 __cdecl std::_Variant_base<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >::index(void)const __ptr64 */

__uint64 __thiscall
std::_Variant_base<__int64,std::basic_string_view<char,std::char_traits<char>_>_>::index
          (_Variant_base<__int64,std::basic_string_view<char,std::char_traits<char>_>_> *this)

{
  return (longlong)(char)this[0x10];
}

// max_size @ 14fa7ca40

/* public: static unsigned __int64 __cdecl std::_Default_allocator_traits<class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::basic_string_view<char,struct
   std::char_traits<char> > const ,class std::map<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> >
   >::max_size(class std::allocator<struct std::_Tree_node<struct std::pair<class
   std::basic_string_view<char,struct std::char_traits<char> > const ,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > > >,void * __ptr64> > const &
   __ptr64) */

__uint64 __cdecl
std::
_Default_allocator_traits<std::allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>_>
::max_size(allocator<std::_Tree_node<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>,void*___ptr64>_>
           *param_1)

{
  return 0x3ffffffffffffff;
}

// max_size @ 14fa7ca60

/* public: static unsigned __int64 __cdecl std::_Default_allocator_traits<class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > >::max_size(class
   std::allocator<struct std::_Tree_node<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64>,void * __ptr64> > const & __ptr64)
    */

__uint64 __cdecl
std::
_Default_allocator_traits<std::allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>_>
::max_size(allocator<std::_Tree_node<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>,void*___ptr64>_>
           *param_1)

{
  return 0x3ffffffffffffff;
}

// max_size @ 14fa7ca80

/* public: unsigned __int64 __cdecl std::_Tree<class std::_Tmap_traits<class
   std::basic_string_view<char,struct std::char_traits<char> >,class std::map<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> > >,struct std::less<class
   std::basic_string_view<char,struct std::char_traits<char> > >,class std::allocator<struct
   std::pair<class std::basic_string_view<char,struct std::char_traits<char> > const ,class
   std::map<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > >,class google::protobuf::internal::RealDebugCounter const *
   __ptr64,struct std::less<class std::variant<__int64,class std::basic_string_view<char,struct
   std::char_traits<char> > > >,class std::allocator<struct std::pair<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > const
   ,class google::protobuf::internal::RealDebugCounter const * __ptr64> > > > >,0>
   >::max_size(void)const __ptr64 */

__uint64 __thiscall
std::
_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
::max_size(_Tree<std::_Tmap_traits<std::basic_string_view<char,std::char_traits<char>_>,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>,std::less<std::basic_string_view<char,std::char_traits<char>_>_>,std::allocator<std::pair<std::basic_string_view<char,std::char_traits<char>_>_const_,std::map<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>_>_>_>,0>_>
           *this)

{
  return 0x3ffffffffffffff;
}

// max_size @ 14fa7caa0

/* public: unsigned __int64 __cdecl std::_Tree<class std::_Tmap_traits<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> >,0> >::max_size(void)const __ptr64
    */

__uint64 __thiscall
std::
_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
::max_size(_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
           *this)

{
  return 0x3ffffffffffffff;
}

// protobuf_assumption_failed @ 14fa7cac0

/* void __cdecl google::protobuf::internal::protobuf_assumption_failed(char const * __ptr64,char
   const * __ptr64,int) */

void __cdecl
google::protobuf::internal::protobuf_assumption_failed(char *param_1,char *param_2,int param_3)

{
  _iobuf *p_Var1;
  undefined4 in_register_00000084;
  
  p_Var1 = (_iobuf *)__acrt_iob_func(2,param_2,CONCAT44(in_register_00000084,param_3));
  fprintf(p_Var1,"%s: %d: Assumption failed: \'%s\'\n");
                    /* WARNING: Subroutine does not return */
  abort();
}

// size @ 14fa7cb10

/* public: unsigned __int64 __cdecl std::_Tree<class std::_Tmap_traits<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > >,class
   google::protobuf::internal::RealDebugCounter const * __ptr64,struct std::less<class
   std::variant<__int64,class std::basic_string_view<char,struct std::char_traits<char> > > >,class
   std::allocator<struct std::pair<class std::variant<__int64,class
   std::basic_string_view<char,struct std::char_traits<char> > > const ,class
   google::protobuf::internal::RealDebugCounter const * __ptr64> >,0> >::size(void)const __ptr64 */

__uint64 __thiscall
std::
_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
::size(_Tree<std::_Tmap_traits<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>,google::protobuf::internal::RealDebugCounter_const*___ptr64,std::less<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_>,std::allocator<std::pair<std::variant<__int64,std::basic_string_view<char,std::char_traits<char>_>_>_const_,google::protobuf::internal::RealDebugCounter_const*___ptr64>_>,0>_>
       *this)

{
  return *(__uint64 *)(this + 8);
}

// value @ 14fa7cb20

/* public: unsigned __int64 __cdecl google::protobuf::internal::RealDebugCounter::value(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::internal::RealDebugCounter::value(RealDebugCounter *this)

{
  return *(__uint64 *)this;
}

// what @ 14fa7cb30

/* public: virtual char const * __ptr64 __cdecl std::bad_variant_access::what(void)const __ptr64 */

char * __thiscall std::bad_variant_access::what(bad_variant_access *this)

{
  return "bad variant access";
}

// FUN_15029f910 @ 15029f910

void FUN_15029f910(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x30),0x10);
  return;
}

// FUN_1504743e0 @ 1504743e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1504743e0(void)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  if (0xf < google::protobuf::internal::fixed_address_empty_string.value_._Mypair._Myval2._Myres) {
    pvVar1 = (void *)CONCAT71(google::protobuf::internal::fixed_address_empty_string.value_._Mypair.
                              _Myval2._Bx._1_7_,
                              google::protobuf::internal::fixed_address_empty_string.value_._Mypair.
                              _Myval2._Bx._Buf[0]);
    uVar3 = google::protobuf::internal::fixed_address_empty_string.value_._Mypair._Myval2._Myres + 1
    ;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      uVar3 = google::protobuf::internal::fixed_address_empty_string.value_._Mypair._Myval2._Myres +
              0x28;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,uVar3);
  }
  google::protobuf::internal::fixed_address_empty_string.value_._Mypair._Myval2._Mysize =
       ___xmm_000000000000000f0000000000000000;
  google::protobuf::internal::fixed_address_empty_string.value_._Mypair._Myval2._Myres =
       _UNK_15076add8;
  google::protobuf::internal::fixed_address_empty_string.value_._Mypair._Myval2._Bx._Buf[0] = '\0';
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 443

// Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64,1,0><std::nullptr_t> @ 1501b9160

/* public: __cdecl absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64,1,0>::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64,1,0><std::nullptr_t>(struct
   std::in_place_t,std::nullptr_t && __ptr64) __ptr64 */

Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64,1,0> * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64,1,0>::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64,1,0><std::nullptr_t>
          (Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64,1,0> *this,
          in_place_t param_1,std__nullptr_t *param_2)

{
  *(undefined8 *)this = *(undefined8 *)param_2;
  return this;
}

// _Compressed_pair<std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>,std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>,1><> @ 1501b9170

/* public: __cdecl std::_Compressed_pair<class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>,class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
   >,1>::_Compressed_pair<class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>,class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
   >,1><>(struct std::_Zero_then_variadic_args_t) __ptr64 */

_Compressed_pair<std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>,std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>,std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>,1>
::
_Compressed_pair<std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>,std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>,1><>
          (_Compressed_pair<std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>,std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>,1>
           *this,_Zero_then_variadic_args_t param_1)

{
  (this->_Myval2)._padding_ = 0;
  (this->_Myval2)._Map = (PrefixCrc **)0x0;
  (this->_Myval2)._Mapsize = 0;
  (this->_Myval2)._Myoff = 0;
  (this->_Myval2)._Mysize = 0;
  return this;
}

// CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64><std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>&___ptr64,std::nullptr_t,1> @ 1501b9190

/* public: __cdecl absl::lts_20240722::container_internal::CompressedTuple<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64>::CompressedTuple<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64><class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> & __ptr64,std::nullptr_t,1>(class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> &
   __ptr64,std::nullptr_t && __ptr64) __ptr64 */

CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>
* __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>
::
CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64><std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>&___ptr64,std::nullptr_t,1>
          (CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>
           *this,allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_1,
          std__nullptr_t *param_2)

{
  *(undefined8 *)this = *(undefined8 *)param_2;
  return this;
}

// CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>,std::integer_sequence<unsigned___int64,0,1>,1><std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>&___ptr64,std::nullptr_t> @ 1501b91a0

/* public: __cdecl
   absl::lts_20240722::container_internal::internal_compressed_tuple::CompressedTupleImpl<class
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64>,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64>,struct
   std::integer_sequence<unsigned __int64,0,1>,1>::CompressedTupleImpl<class
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64>,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64>,struct
   std::integer_sequence<unsigned __int64,0,1>,1><class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> & __ptr64,std::nullptr_t>(struct
   std::in_place_t,class std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>
   & __ptr64,std::nullptr_t && __ptr64) __ptr64 */

CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>,std::integer_sequence<unsigned___int64,0,1>,1>
* __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>,std::integer_sequence<unsigned___int64,0,1>,1>
::
CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>,std::integer_sequence<unsigned___int64,0,1>,1><std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>&___ptr64,std::nullptr_t>
          (CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>,std::integer_sequence<unsigned___int64,0,1>,1>
           *this,in_place_t param_1,
          allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_2,
          std__nullptr_t *param_3)

{
  *(undefined8 *)this = *(undefined8 *)param_3;
  return this;
}

// Storage<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,0,1><std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>&___ptr64> @ 1501b91b0

/* public: __cdecl absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>,0,1>::Storage<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>,0,1><class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> & __ptr64>(struct
   std::in_place_t,class std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>
   & __ptr64) __ptr64 */

Storage<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,0,1> * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,0,1>::
Storage<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,0,1><std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>&___ptr64>
          (Storage<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,0,1> *this,
          in_place_t param_1,allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_2
          )

{
  return this;
}

// Storage<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,0,1><std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_const&___ptr64> @ 1501b91c0

/* public: __cdecl absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<class
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl>,0,1>::Storage<class
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl>,0,1><class
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl> const &
   __ptr64>(struct std::in_place_t,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> const & __ptr64) __ptr64 */

Storage<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,0,1> * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,0,1>::
Storage<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,0,1><std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_const&___ptr64>
          (Storage<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,0,1> *this
          ,in_place_t param_1,
          allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *param_2)

{
  return this;
}

// CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64><std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_const&___ptr64,unsigned_int,1> @ 1501b91d0

/* public: __cdecl absl::lts_20240722::container_internal::CompressedTuple<class
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned
   __int64>::CompressedTuple<class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned __int64><class
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl> const &
   __ptr64,unsigned int,1>(class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> const & __ptr64,unsigned int && __ptr64)
   __ptr64 */

CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>
* __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>
::
CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64><std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_const&___ptr64,unsigned_int,1>
          (CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>
           *this,allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *param_1,
          uint *param_2)

{
  CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>
  CVar1;
  
  CVar1._4_4_ = 0;
  CVar1._0_4_ = *param_2;
  *this = CVar1;
  return this;
}

// CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>,std::integer_sequence<unsigned___int64,0,1>,1><std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_const&___ptr64,unsigned_int> @ 1501b91e0

/* public: __cdecl
   absl::lts_20240722::container_internal::internal_compressed_tuple::CompressedTupleImpl<class
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1>,1>::CompressedTupleImpl<class
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1>,1><class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> const & __ptr64,unsigned int>(struct
   std::in_place_t,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> const & __ptr64,unsigned int && __ptr64)
   __ptr64 */

CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>,std::integer_sequence<unsigned___int64,0,1>,1>
* __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>,std::integer_sequence<unsigned___int64,0,1>,1>
::
CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>,std::integer_sequence<unsigned___int64,0,1>,1><std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_const&___ptr64,unsigned_int>
          (CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>,std::integer_sequence<unsigned___int64,0,1>,1>
           *this,in_place_t param_1,
          allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *param_2,uint *param_3)

{
  CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>,std::integer_sequence<unsigned___int64,0,1>,1>
  CVar1;
  
  CVar1._4_4_ = 0;
  CVar1._0_4_ = *param_3;
  *this = CVar1;
  return this;
}

// InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_><absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64,0> @ 1501b91f0

/* public: __cdecl absl::lts_20240722::InlinedVector<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::InlinedVector<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> ><class
   absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64,0>(class
   absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64,class
   absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> const & __ptr64) __ptr64 */

InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
* __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::
InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_><absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64,0>
          (InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
           *this,FormatArgImpl *param_1,FormatArgImpl *param_2,
          allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *param_3)

{
  FormatArgImpl *pFVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  FormatArgImpl *local_res10;
  
  *(undefined8 *)this = 0;
  uVar3 = (longlong)param_2 - (longlong)param_1 >> 4;
  local_res10 = param_1;
  if (uVar3 < 5) {
    pFVar1 = (FormatArgImpl *)(this + 8);
  }
  else {
    uVar2 = 8;
    if (8 < uVar3) {
      uVar2 = uVar3;
    }
    if (0xfffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_bad_array_new_length();
    }
    pFVar1 = std::_Allocate<16,std::_Default_allocate_traits,0>(uVar2 << 4);
    *(FormatArgImpl **)(this + 8) = pFVar1;
    *(ulonglong *)(this + 0x10) = uVar2;
    *(ulonglong *)this = *(ulonglong *)this | 1;
  }
  inlined_vector_internal::
  ConstructElements<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>_>
            ((allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *)this,pFVar1,
             (IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>
              *)&local_res10,uVar3);
  *(ulonglong *)this = *(longlong *)this + uVar3 * 2;
  return this;
}

// allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64><absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> @ 1501b92a0

/* public: __cdecl std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc *
   __ptr64>::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc *
   __ptr64><struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>(class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> const & __ptr64)
   __ptr64 */

allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64> * __thiscall
std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64>::
allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64><absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
          (allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64> *this,
          allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> *param_1)

{
  return this;
}

// allocator<std::_Container_proxy><absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> @ 1501b92b0

/* public: __cdecl std::allocator<struct std::_Container_proxy>::allocator<struct
   std::_Container_proxy><struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>(class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> const & __ptr64)
   __ptr64 */

allocator<std::_Container_proxy> * __thiscall
std::allocator<std::_Container_proxy>::
allocator<std::_Container_proxy><absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
          (allocator<std::_Container_proxy> *this,
          allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> *param_1)

{
  return this;
}

// Storage<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,0,1><std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_> @ 1501b9420

/* public: __cdecl absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>,0,1>::Storage<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>,0,1><class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> >(struct
   std::in_place_t,class std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>
   && __ptr64) __ptr64 */

Storage<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,0,1> * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,0,1>::
Storage<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,0,1><std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
          (Storage<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,0,1> *this,
          in_place_t param_1,allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_2
          )

{
  return this;
}

// CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned___int64><std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned_int,1> @ 1501b9430

/* public: __cdecl absl::lts_20240722::container_internal::CompressedTuple<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>,unsigned
   __int64>::CompressedTuple<class std::allocator<struct absl::lts_20240722::cord_internal::CordRep
   * __ptr64>,unsigned __int64><class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64>,unsigned int,1>(class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> && __ptr64,unsigned int && __ptr64) __ptr64
    */

CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned___int64>
* __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned___int64>
::
CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned___int64><std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned_int,1>
          (CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned___int64>
           *this,allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_1,
          uint *param_2)

{
  *(ulonglong *)this = (ulonglong)*param_2;
  return this;
}

// CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned___int64>,std::integer_sequence<unsigned___int64,0,1>,1><std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned_int> @ 1501b9440

/* public: __cdecl
   absl::lts_20240722::container_internal::internal_compressed_tuple::CompressedTupleImpl<class
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64>,unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1>,1>::CompressedTupleImpl<class
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64>,unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1>,1><class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64>,unsigned int>(struct std::in_place_t,class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> && __ptr64,unsigned
   int && __ptr64) __ptr64 */

CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned___int64>,std::integer_sequence<unsigned___int64,0,1>,1>
* __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned___int64>,std::integer_sequence<unsigned___int64,0,1>,1>
::
CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned___int64>,std::integer_sequence<unsigned___int64,0,1>,1><std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned_int>
          (CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned___int64>,std::integer_sequence<unsigned___int64,0,1>,1>
           *this,in_place_t param_1,
          allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_2,uint *param_3)

{
  *(ulonglong *)this = (ulonglong)*param_3;
  return this;
}

// Cord<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0> @ 1501b9450

/* public: __cdecl absl::lts_20240722::Cord::Cord<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,0>(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > && __ptr64) __ptr64 */

Cord * __thiscall
absl::lts_20240722::Cord::
Cord<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0>
          (Cord *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  ulonglong uVar1;
  CordRep *pCVar2;
  
  uVar1 = (param_1->_Mypair)._Myval2._Mysize;
  if (uVar1 < 0x10) {
    if (0xf < (param_1->_Mypair)._Myval2._Myres) {
      param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    InlineRep::set_data(&this->contents_,(char *)param_1,uVar1);
    return this;
  }
  pCVar2 = (CordRep *)FUN_1501be6e0(param_1);
  (this->contents_).data_.rep_.field0_0x0.as_tree.rep = pCVar2;
  (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 1;
  return this;
}

// operator<<<char,std::char_traits<char>_> @ 1501b94a0

/* class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   std::operator<<<char,struct std::char_traits<char> >(class std::basic_ostream<char,struct
   std::char_traits<char> > & __ptr64,struct std::_Smanip<__int64> const & __ptr64) */

basic_ostream<char,std::char_traits<char>_> * __cdecl
std::operator<<<char,std::char_traits<char>_>
          (basic_ostream<char,struct_std::char_traits<char>_> *param_1,_Smanip<__int64> *param_2)

{
  (**(code **)param_2)(param_1 + *(int *)(*(longlong *)param_1 + 4),*(undefined8 *)(param_2 + 8));
  return (basic_ostream<char,std::char_traits<char>_> *)param_1;
}

// operator()<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64_const&___ptr64> @ 1501b94d0

/* public: UNKNOWN __cdecl std::ranges::_Iter_move::_Cpo::operator()<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 const & __ptr64>(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 const & __ptr64)const __ptr64 */

CordRep ** __thiscall
std::ranges::_Iter_move::_Cpo::
operator()<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64_const&___ptr64>
          (_Cpo *this,CordRep ***param_1)

{
  return *param_1;
}

// Append<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0> @ 1501b94e0

/* public: void __cdecl absl::lts_20240722::Cord::Append<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,0>(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > && __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::
Append<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0>
          (Cord *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  CordRep *pCVar1;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = (param_1->_Mypair)._Myval2._Mysize;
  if (local_18._Mysize < 0x200) {
    if (0xf < (param_1->_Mypair)._Myval2._Myres) {
      param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    local_18._Mydata = (char *)param_1;
    InlineRep::AppendArray(&this->contents_,&local_18,kAppendString);
    return;
  }
  pCVar1 = (CordRep *)FUN_1501be6e0(param_1);
  InlineRep::AppendTree(&this->contents_,pCVar1,kAppendString);
  return;
}

// AppendImpl<absl::lts_20240722::Cord_const&___ptr64> @ 1501b9550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* private: void __cdecl absl::lts_20240722::Cord::AppendImpl<class absl::lts_20240722::Cord const &
   __ptr64>(class absl::lts_20240722::Cord const & __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::AppendImpl<absl::lts_20240722::Cord_const&___ptr64>
          (Cord *this,Cord *param_1)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulong64 uVar5;
  ulonglong uVar6;
  CordRep *pCVar7;
  basic_string_view<char,std::char_traits<char>_> *pbVar8;
  CordzInfo *this_00;
  byte bVar9;
  int iVar10;
  CordRep **ppCVar11;
  ulong64 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_158 [32];
  basic_string_view<char,std::char_traits<char>_> local_138;
  Rep_u_0 local_128;
  basic_string_view<char,std::char_traits<char>_> local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  basic_string_view<char,std::char_traits<char>_> local_f8;
  ChunkIterator local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (((((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) &&
      (pCVar7 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar7 != (CordRep *)0x0)) &&
     (pCVar7->length == 0)) {
    this_00 = (CordzInfo *)((this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + -1);
    if (this_00 != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Untrack(this_00);
    }
    LOCK();
    pRVar1 = &pCVar7->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      cord_internal::CordRep::Destroy(pCVar7);
    }
    local_108 = 0;
    uStack_100 = 0;
    (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
    (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  }
  uVar14 = local_138._Mysize._4_4_;
  uVar13 = (undefined4)local_138._Mysize;
  ppCVar11 = &(this->contents_).data_.rep_.field0_0x0.as_tree.rep;
  bVar3 = (param_1->contents_).data_.rep_.field0_0x0.data[0];
  bVar9 = bVar3 & 1;
  if (bVar9 == 0) {
    uVar6 = (ulonglong)(longlong)(char)bVar3 >> 1;
  }
  else {
    uVar6 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar6 != 0) {
    uVar6 = (ulonglong)(this->contents_).data_.rep_.field0_0x0.data[0];
    if ((uVar6 & 1) == 0) {
      uVar12 = uVar6 >> 1;
    }
    else {
      uVar12 = (*ppCVar11)->length;
    }
    if (uVar12 == 0) {
      if (bVar9 == 0) {
        pCVar7 = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
        (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info =
             (param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
        (this->contents_).data_.rep_.field0_0x0.as_tree.rep = pCVar7;
      }
      else {
        pCVar7 = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
        LOCK();
        pRVar1 = &pCVar7->refcount;
        pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + 2);
        UNLOCK();
        pCVar7 = cord_internal::RemoveCrcNode(pCVar7);
        *ppCVar11 = pCVar7;
        (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 1;
      }
    }
    else {
      if (bVar9 == 0) {
        local_118._Mysize = (ulonglong)(longlong)(char)bVar3 >> 1;
      }
      else {
        local_118._Mysize = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
      }
      if (local_118._Mysize < 0x200) {
        local_138._Mysize._0_4_ = (undefined4)local_118._Mysize;
        local_138._Mysize._4_4_ = (undefined4)(local_118._Mysize >> 0x20);
        if (bVar9 == 0) {
          local_118._Mydata = (char *)((longlong)&(param_1->contents_).data_.rep_.field0_0x0 + 1);
        }
        else {
          local_128.as_tree.rep = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
          if (local_128.as_tree.rep != (CordRep *)0x0) {
            if (5 < (local_128.as_tree.rep)->tag) {
              local_138._Mydata = (char *)(local_128.as_tree.rep)->storage;
              InlineRep::AppendArray(&this->contents_,&local_138,kAppendCord);
              return;
            }
            if (param_1 != this) {
              local_e8.current_chunk_._Mydata = (char *)0x0;
              local_e8.current_chunk_._Mysize = 0;
              local_e8.current_leaf_ = (CordRep *)0x0;
              local_e8.btree_reader_.remaining_ = 0;
              local_e8.btree_reader_.navigator_.height_ = -1;
              local_e8.bytes_remaining_ = (local_128.as_tree.rep)->length;
              if (local_e8.bytes_remaining_ == 0) {
                local_138._Mydata._0_4_ = 0;
                local_138._Mydata._4_4_ = 0;
                local_138._Mysize._0_4_ = 0;
                local_138._Mysize._4_4_ = 0;
                uVar13 = 0;
                uVar14 = 0;
                uVar15 = 0;
                uVar16 = 0;
                local_e8.current_chunk_._Mydata = (char *)0x0;
                local_e8.current_chunk_._Mysize = 0;
              }
              else {
                local_138._Mysize._0_4_ = uVar13;
                local_138._Mysize._4_4_ = uVar14;
                ChunkIterator::InitTree(&local_e8,local_128.as_tree.rep);
                uVar13 = local_e8.current_chunk_._Mydata._0_4_;
                uVar14 = local_e8.current_chunk_._Mydata._4_4_;
                uVar15 = (undefined4)local_e8.current_chunk_._Mysize;
                uVar16 = local_e8.current_chunk_._Mysize._4_4_;
              }
              if (local_e8.bytes_remaining_ == 0) {
                return;
              }
              auVar4._4_4_ = uVar14;
              auVar4._0_4_ = uVar13;
              auVar4._8_4_ = uVar15;
              auVar4._12_4_ = uVar16;
              uVar12 = auVar4._8_8_;
              iVar10 = local_e8.btree_reader_.navigator_.height_;
              do {
                uVar5 = local_e8.bytes_remaining_;
                local_118._Mydata = (char *)CONCAT44(uVar14,uVar13);
                local_118._Mysize = CONCAT44(uVar16,uVar15);
                InlineRep::AppendArray(&this->contents_,&local_118,kAppendString);
                local_e8.bytes_remaining_ = uVar5 - uVar12;
                if (local_e8.bytes_remaining_ != 0) {
                  if ((iVar10 < 0) ||
                     (local_e8.btree_reader_.navigator_.node_[iVar10] == (CordRepBtree *)0x0)) {
                    local_138._Mydata._0_4_ = 0;
                    local_138._Mydata._4_4_ = 0;
                    local_138._Mysize._0_4_ = 0;
                    local_138._Mysize._4_4_ = 0;
                    uVar13 = 0;
                    uVar14 = 0;
                    uVar15 = 0;
                    uVar12 = 0;
                    uVar16 = local_138._Mysize._4_4_;
                  }
                  else {
                    pbVar8 = cord_internal::CordRepBtreeReader::Next
                                       (&local_e8.btree_reader_,&local_f8);
                    uVar13 = *(undefined4 *)&pbVar8->_Mydata;
                    uVar14 = *(undefined4 *)((longlong)&pbVar8->_Mydata + 4);
                    uVar15 = (undefined4)pbVar8->_Mysize;
                    uVar12 = pbVar8->_Mysize;
                    uVar16 = *(undefined4 *)((longlong)&pbVar8->_Mysize + 4);
                    iVar10 = local_e8.btree_reader_.navigator_.height_;
                  }
                  local_e8.current_chunk_._Mydata = (char *)CONCAT44(uVar14,uVar13);
                  local_e8.current_chunk_._Mysize = CONCAT44(uVar16,uVar15);
                }
              } while (local_e8.bytes_remaining_ != 0);
              return;
            }
            LOCK();
            ((local_128.as_tree.rep)->refcount).count_ =
                 (atomic<int>)((int)((local_128.as_tree.rep)->refcount).count_ + 2);
            UNLOCK();
            local_128.as_tree.cordz_info = 1;
            if (((param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info | 1U) != 1) {
              cord_internal::CordzInfo::MaybeTrackCordImpl
                        ((InlineData *)&local_128.as_tree,(InlineData *)param_1,kConstructorCord);
            }
            AppendImpl<absl::lts_20240722::Cord>(this,(Cord *)&local_128.as_tree);
            if ((local_128.as_tree.cordz_info & 1U) == 0) {
              return;
            }
            if ((CordzInfo *)(local_128.as_tree.cordz_info - 1U) != (CordzInfo *)0x0) {
              cord_internal::CordzInfo::Untrack((CordzInfo *)(local_128.as_tree.cordz_info - 1U));
            }
            LOCK();
            pRVar1 = &(local_128.as_tree.rep)->refcount;
            aVar2 = pRVar1->count_;
            pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
            UNLOCK();
            if (aVar2 != (atomic<int>)0x2) {
              return;
            }
            cord_internal::CordRep::Destroy(local_128.as_tree.rep);
            return;
          }
          local_118._Mydata = (char *)0x0;
        }
        local_138._Mydata._0_4_ = SUB84(local_118._Mydata,0);
        local_138._Mydata._4_4_ = (undefined4)((ulonglong)local_118._Mydata >> 0x20);
        InlineRep::AppendArray(&this->contents_,&local_118,kAppendCord);
      }
      else {
        if (bVar9 == 0) {
          pCVar7 = (CordRep *)0x0;
        }
        else {
          pCVar7 = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
        }
        LOCK();
        (pCVar7->refcount).count_ = (atomic<int>)((int)(pCVar7->refcount).count_ + 2);
        UNLOCK();
        pCVar7 = cord_internal::RemoveCrcNode(pCVar7);
        InlineRep::AppendTree(&this->contents_,pCVar7,kAppendCord);
      }
    }
  }
  return;
}

// AppendImpl<absl::lts_20240722::Cord> @ 1501b98a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* private: void __cdecl absl::lts_20240722::Cord::AppendImpl<class absl::lts_20240722::Cord>(class
   absl::lts_20240722::Cord && __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::AppendImpl<absl::lts_20240722::Cord>(Cord *this,Cord *param_1)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulong64 uVar5;
  ulonglong uVar6;
  CordRep *pCVar7;
  basic_string_view<char,std::char_traits<char>_> *pbVar8;
  CordzInfo *pCVar9;
  byte bVar10;
  int iVar11;
  CordRep **ppCVar12;
  ulong64 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_158 [32];
  basic_string_view<char,std::char_traits<char>_> local_138;
  Rep_u_0 local_128;
  basic_string_view<char,std::char_traits<char>_> local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  basic_string_view<char,std::char_traits<char>_> local_f8;
  ChunkIterator local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (((((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) &&
      (pCVar7 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar7 != (CordRep *)0x0)) &&
     (pCVar7->length == 0)) {
    pCVar9 = (CordzInfo *)((this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + -1);
    if (pCVar9 != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Untrack(pCVar9);
    }
    LOCK();
    pRVar1 = &pCVar7->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      cord_internal::CordRep::Destroy(pCVar7);
    }
    local_108 = 0;
    uStack_100 = 0;
    (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
    (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  }
  uVar15 = local_138._Mysize._4_4_;
  uVar14 = (undefined4)local_138._Mysize;
  ppCVar12 = &(this->contents_).data_.rep_.field0_0x0.as_tree.rep;
  bVar3 = (param_1->contents_).data_.rep_.field0_0x0.data[0];
  bVar10 = bVar3 & 1;
  if (bVar10 == 0) {
    uVar6 = (ulonglong)(longlong)(char)bVar3 >> 1;
  }
  else {
    uVar6 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar6 != 0) {
    uVar6 = (ulonglong)(this->contents_).data_.rep_.field0_0x0.data[0];
    if ((uVar6 & 1) == 0) {
      uVar13 = uVar6 >> 1;
    }
    else {
      uVar13 = (*ppCVar12)->length;
    }
    if (uVar13 == 0) {
      if (bVar10 == 0) {
        pCVar7 = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
        (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info =
             (param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
        (this->contents_).data_.rep_.field0_0x0.as_tree.rep = pCVar7;
      }
      else {
        pCVar7 = TakeRep(param_1);
        pCVar7 = cord_internal::RemoveCrcNode(pCVar7);
        *ppCVar12 = pCVar7;
        (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 1;
      }
    }
    else {
      if (bVar10 == 0) {
        local_118._Mysize = (ulonglong)(longlong)(char)bVar3 >> 1;
      }
      else {
        local_118._Mysize = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
      }
      if (local_118._Mysize < 0x200) {
        local_138._Mysize._0_4_ = (undefined4)local_118._Mysize;
        local_138._Mysize._4_4_ = (undefined4)(local_118._Mysize >> 0x20);
        if (bVar10 == 0) {
          local_118._Mydata = (char *)((longlong)&(param_1->contents_).data_.rep_.field0_0x0 + 1);
        }
        else {
          local_128.as_tree.rep = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
          if (local_128.as_tree.rep != (CordRep *)0x0) {
            if (5 < (local_128.as_tree.rep)->tag) {
              local_138._Mydata = (char *)(local_128.as_tree.rep)->storage;
              InlineRep::AppendArray(&this->contents_,&local_138,kAppendCord);
              return;
            }
            if (param_1 != this) {
              local_e8.current_chunk_._Mydata = (char *)0x0;
              local_e8.current_chunk_._Mysize = 0;
              local_e8.current_leaf_ = (CordRep *)0x0;
              local_e8.btree_reader_.remaining_ = 0;
              local_e8.btree_reader_.navigator_.height_ = -1;
              local_e8.bytes_remaining_ = (local_128.as_tree.rep)->length;
              if (local_e8.bytes_remaining_ == 0) {
                local_138._Mydata._0_4_ = 0;
                local_138._Mydata._4_4_ = 0;
                local_138._Mysize._0_4_ = 0;
                local_138._Mysize._4_4_ = 0;
                uVar14 = 0;
                uVar15 = 0;
                uVar16 = 0;
                uVar17 = 0;
                local_e8.current_chunk_._Mydata = (char *)0x0;
                local_e8.current_chunk_._Mysize = 0;
              }
              else {
                local_138._Mysize._0_4_ = uVar14;
                local_138._Mysize._4_4_ = uVar15;
                ChunkIterator::InitTree(&local_e8,local_128.as_tree.rep);
                uVar14 = local_e8.current_chunk_._Mydata._0_4_;
                uVar15 = local_e8.current_chunk_._Mydata._4_4_;
                uVar16 = (undefined4)local_e8.current_chunk_._Mysize;
                uVar17 = local_e8.current_chunk_._Mysize._4_4_;
              }
              if (local_e8.bytes_remaining_ == 0) {
                return;
              }
              auVar4._4_4_ = uVar15;
              auVar4._0_4_ = uVar14;
              auVar4._8_4_ = uVar16;
              auVar4._12_4_ = uVar17;
              uVar13 = auVar4._8_8_;
              iVar11 = local_e8.btree_reader_.navigator_.height_;
              do {
                uVar5 = local_e8.bytes_remaining_;
                local_118._Mydata = (char *)CONCAT44(uVar15,uVar14);
                local_118._Mysize = CONCAT44(uVar17,uVar16);
                InlineRep::AppendArray(&this->contents_,&local_118,kAppendString);
                local_e8.bytes_remaining_ = uVar5 - uVar13;
                if (local_e8.bytes_remaining_ != 0) {
                  if ((iVar11 < 0) ||
                     (local_e8.btree_reader_.navigator_.node_[iVar11] == (CordRepBtree *)0x0)) {
                    local_138._Mydata._0_4_ = 0;
                    local_138._Mydata._4_4_ = 0;
                    local_138._Mysize._0_4_ = 0;
                    local_138._Mysize._4_4_ = 0;
                    uVar14 = 0;
                    uVar15 = 0;
                    uVar16 = 0;
                    uVar13 = 0;
                    uVar17 = local_138._Mysize._4_4_;
                  }
                  else {
                    pbVar8 = cord_internal::CordRepBtreeReader::Next
                                       (&local_e8.btree_reader_,&local_f8);
                    uVar14 = *(undefined4 *)&pbVar8->_Mydata;
                    uVar15 = *(undefined4 *)((longlong)&pbVar8->_Mydata + 4);
                    uVar16 = (undefined4)pbVar8->_Mysize;
                    uVar13 = pbVar8->_Mysize;
                    uVar17 = *(undefined4 *)((longlong)&pbVar8->_Mysize + 4);
                    iVar11 = local_e8.btree_reader_.navigator_.height_;
                  }
                  local_e8.current_chunk_._Mydata = (char *)CONCAT44(uVar15,uVar14);
                  local_e8.current_chunk_._Mysize = CONCAT44(uVar17,uVar16);
                }
              } while (local_e8.bytes_remaining_ != 0);
              return;
            }
            LOCK();
            ((local_128.as_tree.rep)->refcount).count_ =
                 (atomic<int>)((int)((local_128.as_tree.rep)->refcount).count_ + 2);
            UNLOCK();
            local_128.as_tree.cordz_info = 1;
            if (((param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info | 1U) != 1) {
              cord_internal::CordzInfo::MaybeTrackCordImpl
                        ((InlineData *)&local_128.as_tree,(InlineData *)param_1,kConstructorCord);
            }
            AppendImpl<absl::lts_20240722::Cord>(this,(Cord *)&local_128.as_tree);
            if ((local_128.as_tree.cordz_info & 1U) == 0) {
              return;
            }
            if ((CordzInfo *)(local_128.as_tree.cordz_info - 1U) != (CordzInfo *)0x0) {
              cord_internal::CordzInfo::Untrack((CordzInfo *)(local_128.as_tree.cordz_info - 1U));
            }
            LOCK();
            pRVar1 = &(local_128.as_tree.rep)->refcount;
            aVar2 = pRVar1->count_;
            pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
            UNLOCK();
            if (aVar2 != (atomic<int>)0x2) {
              return;
            }
            cord_internal::CordRep::Destroy(local_128.as_tree.rep);
            return;
          }
          local_118._Mydata = (char *)0x0;
        }
        local_138._Mydata._0_4_ = SUB84(local_118._Mydata,0);
        local_138._Mydata._4_4_ = (undefined4)((ulonglong)local_118._Mydata >> 0x20);
        InlineRep::AppendArray(&this->contents_,&local_118,kAppendCord);
      }
      else {
        if (bVar10 == 0) {
          pCVar7 = (CordRep *)0x0;
        }
        else {
          pCVar7 = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
          pCVar9 = (CordzInfo *)((param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + -1)
          ;
          if (pCVar9 != (CordzInfo *)0x0) {
            cord_internal::CordzInfo::Untrack(pCVar9);
          }
        }
        (param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
        (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
        pCVar7 = cord_internal::RemoveCrcNode(pCVar7);
        InlineRep::AppendTree(&this->contents_,pCVar7,kAppendCord);
      }
    }
  }
  return;
}

// ConstructElements<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,std::move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>_>_> @ 1501b9c30

/* void __cdecl absl::lts_20240722::inlined_vector_internal::ConstructElements<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>,class
   absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64>,class std::move_iterator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64> > >(class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> & __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64,class
   absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64>,class std::move_iterator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64> > & __ptr64,unsigned __int64) */

void __cdecl
absl::lts_20240722::inlined_vector_internal::
ConstructElements<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,std::move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>_>_>
          (allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_1,CordRep **param_2
          ,IteratorValueAdapter<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,std::move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>_>
           *param_3,__uint64 param_4)

{
  ulonglong uVar1;
  
  for (uVar1 = 0; uVar1 < param_4; uVar1 = uVar1 + 1) {
    param_2[uVar1] = (CordRep *)**(undefined8 **)param_3;
    *(longlong *)param_3 = *(longlong *)param_3 + 8;
  }
  return;
}

// ConstructElements<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>_> @ 1501b9c60

/* void __cdecl absl::lts_20240722::inlined_vector_internal::ConstructElements<class
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl>,class
   absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl>,class
   absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64> >(class
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl> & __ptr64,class
   absl::lts_20240722::str_format_internal::FormatArgImpl * __ptr64,class
   absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl>,class
   absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64> & __ptr64,unsigned
   __int64) */

void __cdecl
absl::lts_20240722::inlined_vector_internal::
ConstructElements<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>_>
          (allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *param_1,
          FormatArgImpl *param_2,
          IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>
          *param_3,__uint64 param_4)

{
  Data DVar1;
  ulonglong uVar2;
  
  for (uVar2 = 0; uVar2 < param_4; uVar2 = uVar2 + 1) {
    DVar1 = (*(Data **)param_3)[1];
    param_2[uVar2].data_ = **(Data **)param_3;
    param_2[uVar2].dispatcher_ = (_func___cdecl_bool_Data_FormatConversionSpecImpl_void_ptr *)DVar1;
    *(longlong *)param_3 = *(longlong *)param_3 + 0x10;
  }
  return;
}

// CreateWithCustomLimitImpl<> @ 1501b9c90

/* private: static class absl::lts_20240722::CordBuffer __cdecl
   absl::lts_20240722::CordBuffer::CreateWithCustomLimitImpl<>(unsigned __int64,unsigned __int64) */

CordBuffer * __cdecl
absl::lts_20240722::CordBuffer::CreateWithCustomLimitImpl<>
          (CordBuffer *__return_storage_ptr__,__uint64 param_1,__uint64 param_2)

{
  longlong lVar1;
  CordRepFlat *pCVar2;
  char cVar3;
  ulonglong uVar4;
  
  if (0x10000 < param_2) {
    param_2 = 0x10000;
  }
  if (0x10000 < param_1) {
    param_1 = 0x10000;
  }
  if (((param_2 + 0xd < param_1) && (param_1 = param_2 + 0xd, 0xff3 < param_2)) &&
     (uVar4 = param_2 - 1, param_1 = param_2, (param_2 & uVar4) != 0)) {
    if (__isa_available < 5) {
      lVar1 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      if (uVar4 != 0) {
        cVar3 = '?' - (char)lVar1;
      }
      else {
        cVar3 = '\0';
      }
    }
    else {
      cVar3 = (char)LZCOUNT(uVar4);
    }
    param_1 = 1L << (-cVar3 & 0x3fU);
    if (0x80 < (param_1 - param_2) - 0xd) {
      if (__isa_available < 5) {
        lVar1 = 0x3f;
        if (param_2 != 0) {
          for (; param_2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        if (param_2 != 0) {
          cVar3 = '?' - (char)lVar1;
        }
        else {
          cVar3 = '\0';
        }
      }
      else {
        cVar3 = (char)LZCOUNT(param_2);
      }
      param_1 = 1L << (0x3fU - cVar3 & 0x3f);
    }
  }
  if (param_1 - 0xd < 0x14) {
    param_1 = 0x20;
    lVar1 = 8;
  }
  else {
    if (param_1 - 0xd < 0x3fff4) {
      if (param_1 < 0x201) {
        lVar1 = 8;
        goto LAB_1501b9d8c;
      }
    }
    else {
      param_1 = 0x40000;
    }
    lVar1 = 0x1000;
    if (param_1 < 0x2001) {
      lVar1 = 0x40;
    }
  }
LAB_1501b9d8c:
  uVar4 = (param_1 - 1) + lVar1 & -lVar1;
  pCVar2 = ::operator_new(uVar4);
  *(undefined8 *)pCVar2 = 0;
  *(undefined8 *)&pCVar2->field_0x8 = 0;
  *(undefined4 *)&pCVar2->field_0x8 = 2;
  if (uVar4 < 0x201) {
    cVar3 = (char)(uVar4 >> 3) + '\x02';
  }
  else if (uVar4 < 0x2001) {
    cVar3 = (char)(uVar4 >> 6) + ':';
  }
  else {
    cVar3 = (char)(uVar4 >> 0xc) + -0x48;
  }
  pCVar2->field_0xc = cVar3;
  *(undefined8 *)pCVar2 = 0;
  (__return_storage_ptr__->rep_).field0_0x0.long_rep.rep = pCVar2;
  return __return_storage_ptr__;
}

// EmplaceBack<absl::lts_20240722::cord_internal::CordRep*___ptr64_const&___ptr64> @ 1501b9e10

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 & __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::EmplaceBack<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 const & __ptr64>(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 const & __ptr64) __ptr64 */

CordRep ** __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::EmplaceBack<absl::lts_20240722::cord_internal::CordRep*___ptr64_const&___ptr64>
          (Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
           *this,CordRep **param_1)

{
  ulonglong uVar1;
  CordRep **ppCVar2;
  Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
  *local_28;
  ulonglong local_18;
  
  local_28 = this + 8;
  uVar1 = *(ulonglong *)this;
  if (((byte)*this & 1) == 0) {
    local_18 = 2;
  }
  else {
    local_28 = *(Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
                 **)local_28;
    local_18 = *(ulonglong *)(this + 0x10);
  }
  if (uVar1 >> 1 != local_18) {
    *(CordRep **)(local_28 + (uVar1 >> 1) * 8) = *param_1;
    *(longlong *)this = *(longlong *)this + 2;
    return (CordRep **)(local_28 + (uVar1 >> 1) * 8);
  }
  ppCVar2 = EmplaceBackSlow<absl::lts_20240722::cord_internal::CordRep*___ptr64_const&___ptr64>
                      (this,param_1);
  return ppCVar2;
}

// EmplaceBackSlow<absl::lts_20240722::cord_internal::CordRep*___ptr64_const&___ptr64> @ 1501b9ea0

/* private: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 & __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::EmplaceBackSlow<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 const & __ptr64>(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 const & __ptr64) __ptr64 */

CordRep ** __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::EmplaceBackSlow<absl::lts_20240722::cord_internal::CordRep*___ptr64_const&___ptr64>
          (Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
           *this,CordRep **param_1)

{
  Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
  *pSVar1;
  ulonglong uVar2;
  void *pvVar3;
  CordRep **ppCVar4;
  void *pvVar5;
  ulonglong uVar6;
  Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
  *local_res8;
  Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
  *local_48;
  longlong local_38;
  
  pSVar1 = this + 8;
  uVar2 = *(ulonglong *)this;
  if (((byte)*this & 1) == 0) {
    local_38 = 2;
    local_48 = pSVar1;
  }
  else {
    local_38 = *(longlong *)(this + 0x10);
    local_48 = *(Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
                 **)pSVar1;
  }
  local_res8 = local_48;
  if (0x1fffffffffffffff < (ulonglong)(local_38 * 2)) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_bad_array_new_length();
  }
  ppCVar4 = std::_Allocate<16,std::_Default_allocate_traits,0>(local_38 << 4);
  ppCVar4[uVar2 >> 1] = *param_1;
  ConstructElements<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,std::move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>_>_>
            ((allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *)this,ppCVar4,
             (IteratorValueAdapter<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,std::move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>_>
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
  *(CordRep ***)pSVar1 = ppCVar4;
  *(longlong *)(this + 0x10) = local_38 * 2;
  *(ulonglong *)this = (*(ulonglong *)this | 1) + 2;
  return ppCVar4 + (uVar2 >> 1);
}

// GenericCompare<int,std::basic_string_view<char,std::char_traits<char>_>_> @ 1501ba000

/* int __cdecl absl::lts_20240722::GenericCompare<int,class std::basic_string_view<char,struct
   std::char_traits<char> > >(class absl::lts_20240722::Cord const & __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,unsigned __int64) */

int __cdecl
absl::lts_20240722::GenericCompare<int,std::basic_string_view<char,std::char_traits<char>_>_>
          (Cord *param_1,basic_string_view<char,std::char_traits<char>_> *param_2,__uint64 param_3)

{
  int iVar1;
  ulong64 _Size;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  Cord::GetFirstChunk(&local_18,param_1);
  _Size = local_18._Mysize;
  if (param_2->_Mysize < local_18._Mysize) {
    _Size = param_2->_Mysize;
  }
  iVar1 = memcmp(local_18._Mydata,param_2->_Mydata,_Size);
  if ((_Size == param_3) || (iVar1 != 0)) {
    iVar1 = (uint)(0 < iVar1) - (uint)(iVar1 < 0);
  }
  else {
    local_18._Mydata = param_2->_Mydata;
    local_18._Mysize = param_2->_Mysize;
    iVar1 = Cord::CompareSlowPath(param_1,&local_18,_Size,param_3);
    iVar1 = (uint)(0 < iVar1) + (iVar1 >> 0x1f);
  }
  return iVar1;
}

// GenericCompare<int,absl::lts_20240722::Cord> @ 1501ba0b0

/* int __cdecl absl::lts_20240722::GenericCompare<int,class absl::lts_20240722::Cord>(class
   absl::lts_20240722::Cord const & __ptr64,class absl::lts_20240722::Cord const & __ptr64,unsigned
   __int64) */

int __cdecl
absl::lts_20240722::GenericCompare<int,absl::lts_20240722::Cord>
          (Cord *param_1,Cord *param_2,__uint64 param_3)

{
  int iVar1;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  Cord::GetFirstChunk(&local_18,param_1);
  Cord::GetFirstChunk(&local_28,param_2);
  if (local_28._Mysize < local_18._Mysize) {
    local_18._Mysize = local_28._Mysize;
  }
  iVar1 = memcmp(local_18._Mydata,local_28._Mydata,local_18._Mysize);
  if ((local_18._Mysize == param_3) || (iVar1 != 0)) {
    iVar1 = (uint)(0 < iVar1) - (uint)(iVar1 < 0);
  }
  else {
    iVar1 = Cord::CompareSlowPath(param_1,param_2,local_18._Mysize,param_3);
    iVar1 = (uint)(0 < iVar1) + (iVar1 >> 0x1f);
  }
  return iVar1;
}

// GenericCompare<bool,std::basic_string_view<char,std::char_traits<char>_>_> @ 1501ba160

/* bool __cdecl absl::lts_20240722::GenericCompare<bool,class std::basic_string_view<char,struct
   std::char_traits<char> > >(class absl::lts_20240722::Cord const & __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,unsigned __int64) */

bool __cdecl
absl::lts_20240722::GenericCompare<bool,std::basic_string_view<char,std::char_traits<char>_>_>
          (Cord *param_1,basic_string_view<char,std::char_traits<char>_> *param_2,__uint64 param_3)

{
  int iVar1;
  ulong64 _Size;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  Cord::GetFirstChunk(&local_18,param_1);
  _Size = local_18._Mysize;
  if (param_2->_Mysize < local_18._Mysize) {
    _Size = param_2->_Mysize;
  }
  iVar1 = memcmp(local_18._Mydata,param_2->_Mydata,_Size);
  if (_Size != param_3) {
    if (iVar1 != 0) {
      return iVar1 == 0;
    }
    local_18._Mydata = param_2->_Mydata;
    local_18._Mysize = param_2->_Mysize;
    iVar1 = Cord::CompareSlowPath(param_1,&local_18,_Size,param_3);
  }
  return iVar1 == 0;
}

// GenericCompare<bool,absl::lts_20240722::Cord> @ 1501ba1f0

/* bool __cdecl absl::lts_20240722::GenericCompare<bool,class absl::lts_20240722::Cord>(class
   absl::lts_20240722::Cord const & __ptr64,class absl::lts_20240722::Cord const & __ptr64,unsigned
   __int64) */

bool __cdecl
absl::lts_20240722::GenericCompare<bool,absl::lts_20240722::Cord>
          (Cord *param_1,Cord *param_2,__uint64 param_3)

{
  int iVar1;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  Cord::GetFirstChunk(&local_18,param_1);
  Cord::GetFirstChunk(&local_28,param_2);
  if (local_28._Mysize < local_18._Mysize) {
    local_18._Mysize = local_28._Mysize;
  }
  iVar1 = memcmp(local_18._Mydata,local_28._Mydata,local_18._Mysize);
  if (local_18._Mysize != param_3) {
    if (iVar1 != 0) {
      return iVar1 == 0;
    }
    iVar1 = Cord::CompareSlowPath(param_1,param_2,local_18._Mysize,param_3);
  }
  return iVar1 == 0;
}

// Initialize<absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>_> @ 1501ba290

/* public: void __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::Initialize<class
   absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl>,class
   absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64> >(class
   absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl>,class
   absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64>,unsigned __int64) __ptr64
    */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::
Initialize<absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>_>
          (Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
           *this,undefined8 param_2,ulonglong param_3)

{
  FormatArgImpl *pFVar1;
  ulonglong uVar2;
  undefined8 local_res10;
  
  local_res10 = param_2;
  if (param_3 < 5) {
    pFVar1 = (FormatArgImpl *)&this->data_;
  }
  else {
    uVar2 = 8;
    if (8 < param_3) {
      uVar2 = param_3;
    }
    if (0xfffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_bad_array_new_length();
    }
    pFVar1 = std::_Allocate<16,std::_Default_allocate_traits,0>(uVar2 << 4);
    this->metadata_ =
         (CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>
          )((ulonglong)this->metadata_ | 1);
    (this->data_).allocated.allocated_data = pFVar1;
    (this->data_).allocated.allocated_capacity = uVar2;
  }
  ConstructElements<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>_>
            ((allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *)this,pFVar1,
             (IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>
              *)&local_res10,param_3);
  this->metadata_ =
       (CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>
        )((longlong)this->metadata_ + param_3 * 2);
  return;
}

// FUN_1501ba330 @ 1501ba330

void FUN_1501ba330(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  uVar3 = param_3[1];
  pvVar1 = (void *)*param_3;
  pvVar2 = pvVar1;
  if (0xfff < uVar3) {
    pvVar2 = *(void **)((longlong)pvVar1 + -8);
    uVar3 = uVar3 + 0x27;
    if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar2,uVar3);
  return;
}

// FUN_1501ba380 @ 1501ba380

void FUN_1501ba380(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = operator_new(0x40);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 2;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    uVar1 = param_2[1];
    puVar2[4] = *param_2;
    puVar2[5] = uVar1;
    uVar1 = param_2[3];
    puVar2[6] = param_2[2];
    puVar2[7] = uVar1;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    puVar2[3] = FUN_1501c26d0;
    puVar3 = puVar2;
  }
  uVar1 = *param_1;
  *puVar3 = param_1[1];
  puVar3[2] = uVar1;
  *(undefined1 *)((longlong)puVar3 + 0xc) = 5;
  return;
}

// FUN_1501ba410 @ 1501ba410

void FUN_1501ba410(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 2;
    puVar2[3] = FUN_1501c2750;
  }
  uVar1 = *param_1;
  *puVar2 = param_1[1];
  puVar2[2] = uVar1;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
  return;
}

// NewImpl<262144> @ 1501ba460

/* public: static struct absl::lts_20240722::cord_internal::CordRepFlat * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepFlat::NewImpl<262144>(unsigned __int64) */

CordRepFlat * __cdecl
absl::lts_20240722::cord_internal::CordRepFlat::NewImpl<262144>(__uint64 param_1)

{
  ulonglong uVar1;
  CordRepFlat *pCVar2;
  longlong lVar3;
  
  if (param_1 < 0x14) {
    uVar1 = 0x20;
    lVar3 = 8;
  }
  else {
    if (param_1 < 0x3fff4) {
      uVar1 = param_1 + 0xd;
      if (uVar1 < 0x201) {
        lVar3 = 8;
        goto LAB_1501ba497;
      }
    }
    else {
      uVar1 = 0x40000;
    }
    lVar3 = 0x1000;
    if (uVar1 < 0x2001) {
      lVar3 = 0x40;
    }
  }
LAB_1501ba497:
  uVar1 = (uVar1 - 1) + lVar3 & -lVar3;
  pCVar2 = ::operator_new(uVar1);
  *(undefined8 *)pCVar2 = 0;
  *(undefined8 *)&pCVar2->field_0x8 = 0;
  *(undefined4 *)&pCVar2->field_0x8 = 2;
  if (uVar1 < 0x201) {
    pCVar2->field_0xc = (char)(uVar1 >> 3) + '\x02';
    return pCVar2;
  }
  if (uVar1 < 0x2001) {
    pCVar2->field_0xc = (char)(uVar1 >> 6) + ':';
    return pCVar2;
  }
  pCVar2->field_0xc = (char)(uVar1 >> 0xc) + -0x48;
  return pCVar2;
}

// Prepend<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0> @ 1501ba520

/* public: void __cdecl absl::lts_20240722::Cord::Prepend<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,0>(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > && __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::
Prepend<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0>
          (Cord *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  CordRep *pCVar1;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = (param_1->_Mypair)._Myval2._Mysize;
  if (local_18._Mysize < 0x200) {
    if (0xf < (param_1->_Mypair)._Myval2._Myres) {
      param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    local_18._Mydata = (char *)param_1;
    Prepend(this,&local_18);
    return;
  }
  pCVar1 = (CordRep *)FUN_1501be6e0(param_1);
  InlineRep::PrependTree(&this->contents_,pCVar1,kPrependString);
  return;
}

// SharedCompareImpl<std::basic_string_view<char,std::char_traits<char>_>_> @ 1501ba590

/* int __cdecl absl::lts_20240722::SharedCompareImpl<class std::basic_string_view<char,struct
   std::char_traits<char> > >(class absl::lts_20240722::Cord const & __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64) */

int __cdecl
absl::lts_20240722::SharedCompareImpl<std::basic_string_view<char,std::char_traits<char>_>_>
          (Cord *param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  
  uVar2 = (ulonglong)(param_1->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2 >> 1;
  }
  else {
    uVar3 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  uVar2 = param_2->_Mysize;
  if (uVar3 == uVar2) {
    iVar1 = GenericCompare<int,std::basic_string_view<char,std::char_traits<char>_>_>
                      (param_1,param_2,uVar3);
    return iVar1;
  }
  if (uVar3 < uVar2) {
    iVar1 = GenericCompare<int,std::basic_string_view<char,std::char_traits<char>_>_>
                      (param_1,param_2,uVar3);
    if (iVar1 == 0) {
      iVar1 = -1;
    }
    return iVar1;
  }
  iVar1 = GenericCompare<int,std::basic_string_view<char,std::char_traits<char>_>_>
                    (param_1,param_2,uVar2);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}

// SharedCompareImpl<absl::lts_20240722::Cord> @ 1501ba5f0

/* int __cdecl absl::lts_20240722::SharedCompareImpl<class absl::lts_20240722::Cord>(class
   absl::lts_20240722::Cord const & __ptr64,class absl::lts_20240722::Cord const & __ptr64) */

int __cdecl
absl::lts_20240722::SharedCompareImpl<absl::lts_20240722::Cord>(Cord *param_1,Cord *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  
  uVar2 = (ulonglong)(param_1->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2 >> 1;
  }
  else {
    uVar3 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  uVar2 = (ulonglong)(param_2->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar2 >> 1;
  }
  else {
    uVar2 = ((param_2->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar3 == uVar2) {
    iVar1 = GenericCompare<int,absl::lts_20240722::Cord>(param_1,param_2,uVar3);
    return iVar1;
  }
  if (uVar3 < uVar2) {
    iVar1 = GenericCompare<int,absl::lts_20240722::Cord>(param_1,param_2,uVar3);
    if (iVar1 == 0) {
      iVar1 = -1;
    }
    return iVar1;
  }
  iVar1 = GenericCompare<int,absl::lts_20240722::Cord>(param_1,param_2,uVar2);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}

// SmallMemmove<1> @ 1501ba670

/* void __cdecl absl::lts_20240722::cord_internal::SmallMemmove<1>(char * __ptr64,char const *
   __ptr64,unsigned __int64) */

void __cdecl
absl::lts_20240722::cord_internal::SmallMemmove<1>(char *param_1,char *param_2,__uint64 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if (7 < param_3) {
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + (param_3 - 8));
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    *(undefined8 *)param_1 = uVar3;
    *(undefined8 *)(param_1 + (param_3 - 8)) = uVar4;
    return;
  }
  if (3 < param_3) {
    uVar1 = *(undefined4 *)param_2;
    uVar2 = *(undefined4 *)(param_2 + (param_3 - 4));
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    *(undefined4 *)param_1 = uVar1;
    *(undefined4 *)(param_1 + (param_3 - 4)) = uVar2;
    return;
  }
  pcVar5 = param_1;
  if (param_3 != 0) {
    *param_1 = *param_2;
    param_1[param_3 >> 1] = param_2[param_3 >> 1];
    pcVar5 = param_1 + param_3;
    pcVar5[-1] = param_2[param_3 - 1];
  }
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  pcVar5[0] = '\0';
  pcVar5[1] = '\0';
  pcVar5[2] = '\0';
  pcVar5[3] = '\0';
  pcVar5[4] = '\0';
  pcVar5[5] = '\0';
  pcVar5[6] = '\0';
  pcVar5[7] = '\0';
  return;
}

// SmallMemmove<0> @ 1501ba6f0

/* void __cdecl absl::lts_20240722::cord_internal::SmallMemmove<0>(char * __ptr64,char const *
   __ptr64,unsigned __int64) */

void __cdecl
absl::lts_20240722::cord_internal::SmallMemmove<0>(char *param_1,char *param_2,__uint64 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (7 < param_3) {
    uVar2 = *(undefined8 *)(param_2 + (param_3 - 8));
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + (param_3 - 8)) = uVar2;
    return;
  }
  if (3 < param_3) {
    uVar1 = *(undefined4 *)(param_2 + (param_3 - 4));
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + (param_3 - 4)) = uVar1;
    return;
  }
  if (param_3 != 0) {
    *param_1 = *param_2;
    param_1[param_3 >> 1] = param_2[param_3 >> 1];
    param_1[param_3 - 1] = param_2[param_3 - 1];
  }
  return;
}

// StreamFormat<unsigned_int> @ 1501ba750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class absl::lts_20240722::str_format_internal::Streamable __cdecl
   absl::lts_20240722::StreamFormat<unsigned int>(class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355> const & __ptr64,unsigned int
   const & __ptr64) */

FormatSpecTemplate<655355> * __cdecl
absl::lts_20240722::StreamFormat<unsigned_int>(FormatSpecTemplate<655355> *param_1,uint *param_2)

{
  allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *paVar1;
  undefined4 *in_R8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *local_28;
  undefined8 local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)CONCAT44((int)((ulonglong)param_1 >> 0x20),*in_R8);
  local_20 = local_38;
  local_18 = str_format_internal::FormatArgImpl::Dispatch<unsigned_int>;
  local_38 = &local_20;
  *(uint **)param_1 = param_2;
  paVar1 = (allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *)(param_1 + 8);
  *(undefined8 *)paVar1 = 0;
  local_28 = paVar1;
  inlined_vector_internal::
  ConstructElements<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>_>
            (paVar1,(FormatArgImpl *)(param_1 + 0x10),
             (IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>
              *)&local_38,1);
  *(longlong *)paVar1 = *(longlong *)paVar1 + 2;
  return param_1;
}

// _Adl_verify_range<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64> @ 1501ba7e0

/* void __cdecl std::_Adl_verify_range<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64>(struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 const &
   __ptr64,struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64
   const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
          (PrefixCrc ***param_1,PrefixCrc ***param_2)

{
  return;
}

// _Adl_verify_range<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>,std::_Deque_unchecked_const_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>_> @ 1501ba7f0

/* void __cdecl std::_Adl_verify_range<class std::_Deque_unchecked_const_iterator<class
   std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >,class
   std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > > >(class
   std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > > const & __ptr64,class
   std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > > const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>,std::_Deque_unchecked_const_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>_>
          (_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
           *param_1,
          _Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
          *param_2)

{
  return;
}

// _Allocate_at_least_helper<std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64>_> @ 1501ba800

/* struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 __cdecl
   std::_Allocate_at_least_helper<class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64> >(class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64> &
   __ptr64,unsigned __int64 & __ptr64) */

PrefixCrc ** __cdecl
std::
_Allocate_at_least_helper<std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64>_>
          (allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64> *param_1,
          __uint64 *param_2)

{
  ulonglong uVar1;
  PrefixCrc *pPVar2;
  PrefixCrc **ppPVar3;
  
  if (*param_2 < 0x2000000000000000) {
    uVar1 = *param_2 * 8;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        ppPVar3 = ::operator_new(uVar1);
        return ppPVar3;
      }
      return (PrefixCrc **)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pPVar2 = ::operator_new(uVar1 + 0x27);
      if (pPVar2 != (PrefixCrc *)0x0) {
        ppPVar3 = (PrefixCrc **)((ulonglong)((longlong)&pPVar2[2].length + 7U) & 0xffffffffffffffe0)
        ;
        ppPVar3[-1] = pPVar2;
        return ppPVar3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Assign_range<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>,std::_Deque_unchecked_const_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>_> @ 1501ba880

/* private: void __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Assign_range<class
   std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >,class
   std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > > >(class
   std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >,class
   std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >) __ptr64 */

void __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::
_Assign_range<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>,std::_Deque_unchecked_const_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>_>
          (deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
           *this,longlong *param_1,longlong param_3)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  ulong64 *puVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  PrefixCrc *pPVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  longlong lVar10;
  ulong64 uVar11;
  
  uVar11 = (this->_Mypair)._Myval2._Myoff;
  uVar9 = (this->_Mypair)._Myval2._Mysize + uVar11;
  if (uVar11 != uVar9) {
    uVar2 = *(ulonglong *)(param_3 + 8);
    do {
      uVar8 = param_1[1];
      if (uVar8 == uVar2) {
        lVar10 = uVar9 - uVar11;
        if (lVar10 == 0) {
          return;
        }
        do {
          puVar3 = &(this->_Mypair)._Myval2._Mysize;
          *puVar3 = *puVar3 - 1;
          if (*puVar3 == 0) {
            (this->_Mypair)._Myval2._Myoff = 0;
          }
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        return;
      }
      puVar3 = *(ulong64 **)
                (*(longlong *)(*param_1 + 8) + (*(longlong *)(*param_1 + 0x10) - 1U & uVar8) * 8);
      uVar4 = *puVar3;
      uVar5 = puVar3[1];
      uVar7 = (this->_Mypair)._Myval2._Mapsize - 1 & uVar11;
      uVar11 = uVar11 + 1;
      pPVar6 = (this->_Mypair)._Myval2._Map[uVar7];
      param_1[1] = uVar8 + 1;
      pPVar6->length = uVar4;
      *(ulong64 *)&pPVar6->crc = uVar5;
    } while (uVar11 != uVar9);
  }
  uVar2 = *(ulonglong *)(param_3 + 8);
  uVar8 = param_1[1];
  if (uVar8 != uVar2) {
    uVar11 = (this->_Mypair)._Myval2._Mysize;
    lVar10 = *param_1;
    do {
      puVar3 = *(ulong64 **)
                (*(longlong *)(lVar10 + 8) + (*(longlong *)(lVar10 + 0x10) - 1U & uVar8) * 8);
      if ((this->_Mypair)._Myval2._Mapsize <= uVar11 + 1) {
        _Growmap(this,1);
      }
      uVar7 = (this->_Mypair)._Myval2._Mapsize - 1;
      puVar1 = &(this->_Mypair)._Myval2._Myoff;
      *puVar1 = *puVar1 & uVar7;
      uVar7 = (this->_Mypair)._Myval2._Myoff + (this->_Mypair)._Myval2._Mysize & uVar7;
      if ((this->_Mypair)._Myval2._Map[uVar7] == (PrefixCrc *)0x0) {
        pPVar6 = ::operator_new(0x10);
        (this->_Mypair)._Myval2._Map[uVar7] = pPVar6;
      }
      uVar8 = uVar8 + 1;
      uVar11 = puVar3[1];
      pPVar6 = (this->_Mypair)._Myval2._Map[uVar7];
      pPVar6->length = *puVar3;
      *(ulong64 *)&pPVar6->crc = uVar11;
      puVar3 = &(this->_Mypair)._Myval2._Mysize;
      *puVar3 = *puVar3 + 1;
      uVar11 = (this->_Mypair)._Myval2._Mysize;
    } while (uVar8 != uVar2);
  }
  return;
}

// _Construct_in_place<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64&___ptr64> @ 1501baa00

/* void __cdecl std::_Construct_in_place<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 & __ptr64>(struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 & __ptr64,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 & __ptr64) */

void __cdecl
std::
_Construct_in_place<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64&___ptr64>
          (PrefixCrc **param_1,PrefixCrc **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Copy_memmove<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64> @ 1501baa10

/* struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 __cdecl
   std::_Copy_memmove<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 *
   __ptr64,struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 *
   __ptr64>(struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 *
   __ptr64,struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 *
   __ptr64,struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64) */

PrefixCrc ** __cdecl
std::
_Copy_memmove<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
          (PrefixCrc **param_1,PrefixCrc **param_2,PrefixCrc **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (PrefixCrc **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Destroy_in_place<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64> @ 1501baa50

/* void __cdecl std::_Destroy_in_place<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64>(struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 & __ptr64) */

void __cdecl
std::_Destroy_in_place<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64>
          (PrefixCrc **param_1)

{
  return;
}

// _Destroy_range<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64> @ 1501baa60

/* void __cdecl std::_Destroy_range<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc
   * __ptr64 * __ptr64,struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 *
   __ptr64>(struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 *
   __ptr64,struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64
   const) */

void __cdecl
std::
_Destroy_range<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
          (PrefixCrc **param_1,PrefixCrc **param_2)

{
  return;
}

// _Emplace_back<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64&___ptr64> @ 1501baa70

/* public: void __cdecl std::_Uninitialized_backout<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 *
   __ptr64>::_Emplace_back<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc *
   __ptr64 & __ptr64>(struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 &
   __ptr64) __ptr64 */

void __thiscall
std::
_Uninitialized_backout<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
::_Emplace_back<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64&___ptr64>
          (_Uninitialized_backout<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
           *this,PrefixCrc **param_1)

{
  **(undefined8 **)(this + 8) = *param_1;
  *(longlong *)(this + 8) = *(longlong *)(this + 8) + 8;
  return;
}

// _Emplace_back_internal<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc_const&___ptr64> @ 1501baa90

/* private: void __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Emplace_back_internal<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc const & __ptr64>(struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc const & __ptr64) __ptr64 */

void __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Emplace_back_internal<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc_const&___ptr64>
          (deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
           *this,PrefixCrc *param_1)

{
  ulong64 *puVar1;
  crc32c_t cVar2;
  undefined4 uVar3;
  PrefixCrc *pPVar4;
  ulonglong uVar5;
  
  if ((this->_Mypair)._Myval2._Mapsize <= (this->_Mypair)._Myval2._Mysize + 1) {
    _Growmap(this,1);
  }
  uVar5 = (this->_Mypair)._Myval2._Mapsize - 1;
  puVar1 = &(this->_Mypair)._Myval2._Myoff;
  *puVar1 = *puVar1 & uVar5;
  uVar5 = (this->_Mypair)._Myval2._Myoff + (this->_Mypair)._Myval2._Mysize & uVar5;
  if ((this->_Mypair)._Myval2._Map[uVar5] == (PrefixCrc *)0x0) {
    pPVar4 = ::operator_new(0x10);
    (this->_Mypair)._Myval2._Map[uVar5] = pPVar4;
  }
  cVar2.crc_ = (param_1->crc).crc_;
  uVar3 = *(undefined4 *)&param_1->field_0xc;
  pPVar4 = (this->_Mypair)._Myval2._Map[uVar5];
  pPVar4->length = param_1->length;
  pPVar4->crc = (crc32c_t)cVar2.crc_;
  *(undefined4 *)&pPVar4->field_0xc = uVar3;
  puVar1 = &(this->_Mypair)._Myval2._Mysize;
  *puVar1 = *puVar1 + 1;
  return;
}

// _Emplace_back_internal<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> @ 1501bab20

/* private: void __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Emplace_back_internal<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>(struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc && __ptr64) __ptr64 */

void __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Emplace_back_internal<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
          (deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
           *this,PrefixCrc *param_1)

{
  ulong64 *puVar1;
  crc32c_t cVar2;
  undefined4 uVar3;
  PrefixCrc *pPVar4;
  ulonglong uVar5;
  
  if ((this->_Mypair)._Myval2._Mapsize <= (this->_Mypair)._Myval2._Mysize + 1) {
    _Growmap(this,1);
  }
  uVar5 = (this->_Mypair)._Myval2._Mapsize - 1;
  puVar1 = &(this->_Mypair)._Myval2._Myoff;
  *puVar1 = *puVar1 & uVar5;
  uVar5 = (this->_Mypair)._Myval2._Myoff + (this->_Mypair)._Myval2._Mysize & uVar5;
  if ((this->_Mypair)._Myval2._Map[uVar5] == (PrefixCrc *)0x0) {
    pPVar4 = ::operator_new(0x10);
    (this->_Mypair)._Myval2._Map[uVar5] = pPVar4;
  }
  cVar2.crc_ = (param_1->crc).crc_;
  uVar3 = *(undefined4 *)&param_1->field_0xc;
  pPVar4 = (this->_Mypair)._Myval2._Map[uVar5];
  pPVar4->length = param_1->length;
  pPVar4->crc = (crc32c_t)cVar2.crc_;
  *(undefined4 *)&pPVar4->field_0xc = uVar3;
  puVar1 = &(this->_Mypair)._Myval2._Mysize;
  *puVar1 = *puVar1 + 1;
  return;
}

// _Get_unwrapped<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>&___ptr64> @ 1501babb0

/* UNKNOWN __cdecl std::_Get_unwrapped<class std::_Deque_unchecked_const_iterator<class
   std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > > & __ptr64>(class
   std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > > & __ptr64) */

_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
* __cdecl std::
          _Get_unwrapped<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>&___ptr64>
                    (_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
                     *param_1)

{
  return param_1;
}

// _Get_unwrapped<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64_const&___ptr64> @ 1501babc0

/* UNKNOWN __cdecl std::_Get_unwrapped<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 const &
   __ptr64>(struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64
   const & __ptr64) */

PrefixCrc ** __cdecl
std::
_Get_unwrapped<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64_const&___ptr64>
          (PrefixCrc ***param_1)

{
  return *param_1;
}

// _Get_unwrapped_n<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64&___ptr64,__int64> @ 1501babd0

/* UNKNOWN __cdecl std::_Get_unwrapped_n<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 &
   __ptr64,__int64>(struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 *
   __ptr64 & __ptr64,__int64) */

PrefixCrc ** __cdecl
std::
_Get_unwrapped_n<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64&___ptr64,__int64>
          (PrefixCrc ***param_1,__int64 param_2)

{
  return *param_1;
}

// _Idl_distance<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64> @ 1501babe0

/* UNKNOWN __cdecl std::_Idl_distance<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64>(struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 const &
   __ptr64,struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64
   const & __ptr64) */

longlong __cdecl
std::
_Idl_distance<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
          (PrefixCrc ***param_1,PrefixCrc ***param_2)

{
  return (longlong)*param_2 - (longlong)*param_1 >> 3;
}

// _Pocca<std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_> @ 1501bac00

/* void __cdecl std::_Pocca<class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >(class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> & __ptr64,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> const & __ptr64) */

void __cdecl
std::_Pocca<std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
          (allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> *param_1,
          allocator<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> *param_2)

{
  return;
}

// _Seek_wrapped<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64> @ 1501bac10

/* void __cdecl std::_Seek_wrapped<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc
   * __ptr64 * __ptr64,struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 *
   __ptr64>(struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 &
   __ptr64,struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 &&
   __ptr64) */

void __cdecl
std::
_Seek_wrapped<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
          (PrefixCrc ***param_1,PrefixCrc ***param_2)

{
  *param_1 = *param_2;
  return;
}

// _To_address<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64> @ 1501bac20

/* UNKNOWN __cdecl std::_To_address<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc
   * __ptr64 * __ptr64>(struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 *
   __ptr64 const & __ptr64) */

PrefixCrc ** __cdecl
std::_To_address<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
          (PrefixCrc ***param_1)

{
  return *param_1;
}

// _Unfancy<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> @ 1501bac30

/* struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 __cdecl
   std::_Unfancy<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>(struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64) */

PrefixCrc * __cdecl
std::_Unfancy<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>(PrefixCrc *param_1)

{
  return param_1;
}

// _Uninitialized_copy_unchecked<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64> @ 1501bac40

/* struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 __cdecl
   std::_Uninitialized_copy_unchecked<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64>(struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 const,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64) */

PrefixCrc ** __cdecl
std::
_Uninitialized_copy_unchecked<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
          (PrefixCrc **param_1,PrefixCrc **param_2,PrefixCrc **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (PrefixCrc **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Uninitialized_value_construct_n_unchecked1<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64,unsigned___int64> @ 1501bac80

/* struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 __cdecl
   std::_Uninitialized_value_construct_n_unchecked1<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64,unsigned
   __int64>(struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 *
   __ptr64,unsigned __int64) */

PrefixCrc ** __cdecl
std::
_Uninitialized_value_construct_n_unchecked1<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64,unsigned___int64>
          (PrefixCrc **param_1,__uint64 param_2)

{
  memset(param_1,0,param_2 * 8);
  return param_1 + param_2;
}

// _Zero_range<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64> @ 1501bacc0

/* struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 __cdecl
   std::_Zero_range<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 *
   __ptr64>(struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64
   const,struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 const)
    */

PrefixCrc ** __cdecl
std::_Zero_range<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
          (PrefixCrc **param_1,PrefixCrc **param_2)

{
  memset(param_1,0,(longlong)param_2 - (longlong)param_1);
  return param_2;
}

// addressof<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_const_> @ 1501bacf0

/* class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > const * __ptr64 __cdecl
   std::addressof<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > const >(class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >
   const & __ptr64) */

_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_> *
__cdecl std::
        addressof<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_const_>
                  (_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
                   *param_1)

{
  return (_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
          *)param_1;
}

// addressof<std::deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_const_> @ 1501bad00

/* class std::deque<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > const *
   __ptr64 __cdecl std::addressof<class std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > const >(class std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > const & __ptr64) */

deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
* __cdecl std::
          addressof<std::deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_const_>
                    (deque<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class_std::allocator<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
                     *param_1)

{
  return (deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
          *)param_1;
}

// addressof<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64> @ 1501bad10

/* struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 __cdecl
   std::addressof<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64>(struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 & __ptr64) */

PrefixCrc ** __cdecl
std::addressof<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64>
          (PrefixCrc **param_1)

{
  return param_1;
}

// addressof<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_> @ 1501bad20

/* class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > * __ptr64 __cdecl
   std::addressof<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >(class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > &
   __ptr64) */

_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_> *
__cdecl std::
        addressof<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
                  (_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
                   *param_1)

{
  return (_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
          *)param_1;
}

// assign<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>,0> @ 1501bad30

/* public: void __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::assign<class
   std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >,0>(class
   std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >,class
   std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >) __ptr64 */

void __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::
assign<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>,0>
          (deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
           *this,_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
                 *param_1,
          _Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
          *param_2)

{
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* WARNING: Load size is inaccurate */
  local_28._0_4_ = param_2->_Mycont;
  local_28._4_4_ = *(undefined4 *)((longlong)&param_2->_Mycont + 4);
  uStack_20 = (undefined4)param_2->_Myoff;
  uStack_1c = *(undefined4 *)((longlong)&param_2->_Myoff + 4);
  local_18 = *(undefined4 *)&param_1->_Mycont;
  uStack_14 = *(undefined4 *)((longlong)&param_1->_Mycont + 4);
  uStack_10 = (undefined4)param_1->_Myoff;
  uStack_c = *(undefined4 *)((longlong)&param_1->_Myoff + 4);
  _Assign_range<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>,std::_Deque_unchecked_const_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>_>
            ((deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
              *)local_28,&local_18,&local_28);
  return;
}

// construct<absl::lts_20240722::cord_internal::CordRep*___ptr64,absl::lts_20240722::cord_internal::CordRep*___ptr64_const&___ptr64> @ 1501bad60

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::construct<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 const & __ptr64>(class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> & __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 const,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 const & __ptr64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::
construct<absl::lts_20240722::cord_internal::CordRep*___ptr64,absl::lts_20240722::cord_internal::CordRep*___ptr64_const&___ptr64>
          (allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_1,CordRep **param_2
          ,CordRep **param_3)

{
  *param_2 = *param_3;
  return;
}

// construct<absl::lts_20240722::cord_internal::CordRep*___ptr64,absl::lts_20240722::cord_internal::CordRep*___ptr64> @ 1501bad70

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::construct<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64>(class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> & __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 const,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 && __ptr64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::
construct<absl::lts_20240722::cord_internal::CordRep*___ptr64,absl::lts_20240722::cord_internal::CordRep*___ptr64>
          (allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_1,CordRep **param_2
          ,CordRep **param_3)

{
  *param_2 = *param_3;
  return;
}

// construct<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc_const&___ptr64> @ 1501bad80

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::construct<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc const & __ptr64>(class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> & __ptr64,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 const,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc const & __ptr64) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::
construct<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc_const&___ptr64>
          (allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> *param_1,
          PrefixCrc *param_2,PrefixCrc *param_3)

{
  crc32c_t cVar1;
  undefined4 uVar2;
  
  cVar1.crc_ = (param_3->crc).crc_;
  uVar2 = *(undefined4 *)&param_3->field_0xc;
  param_2->length = param_3->length;
  param_2->crc = (crc32c_t)cVar1.crc_;
  *(undefined4 *)&param_2->field_0xc = uVar2;
  return;
}

// construct<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> @ 1501bad90

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::construct<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>(class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> & __ptr64,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 const,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc && __ptr64) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::
construct<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
          (allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> *param_1,
          PrefixCrc *param_2,PrefixCrc *param_3)

{
  crc32c_t cVar1;
  undefined4 uVar2;
  
  cVar1.crc_ = (param_3->crc).crc_;
  uVar2 = *(undefined4 *)&param_3->field_0xc;
  param_2->length = param_3->length;
  param_2->crc = (crc32c_t)cVar1.crc_;
  *(undefined4 *)&param_2->field_0xc = uVar2;
  return;
}

// construct<absl::lts_20240722::str_format_internal::FormatArgImpl,absl::lts_20240722::str_format_internal::FormatArgImpl_const&___ptr64> @ 1501bada0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::construct<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,class
   absl::lts_20240722::str_format_internal::FormatArgImpl const & __ptr64>(class
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl> & __ptr64,class
   absl::lts_20240722::str_format_internal::FormatArgImpl * __ptr64 const,class
   absl::lts_20240722::str_format_internal::FormatArgImpl const & __ptr64) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>::
construct<absl::lts_20240722::str_format_internal::FormatArgImpl,absl::lts_20240722::str_format_internal::FormatArgImpl_const&___ptr64>
          (allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *param_1,
          FormatArgImpl *param_2,FormatArgImpl *param_3)

{
  _func___cdecl_bool_Data_FormatConversionSpecImpl_void_ptr *p_Var1;
  
  p_Var1 = param_3->dispatcher_;
  param_2->data_ = param_3->data_;
  param_2->dispatcher_ = p_Var1;
  return;
}

// construct_at<absl::lts_20240722::cord_internal::CordRep*___ptr64,absl::lts_20240722::cord_internal::CordRep*___ptr64_const&___ptr64,0> @ 1501badb0

/* struct absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 __cdecl
   std::construct_at<struct absl::lts_20240722::cord_internal::CordRep * __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 const & __ptr64,0>(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 const,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 const & __ptr64) */

CordRep ** __cdecl
std::
construct_at<absl::lts_20240722::cord_internal::CordRep*___ptr64,absl::lts_20240722::cord_internal::CordRep*___ptr64_const&___ptr64,0>
          (CordRep **param_1,CordRep **param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// construct_at<absl::lts_20240722::cord_internal::CordRep*___ptr64,absl::lts_20240722::cord_internal::CordRep*___ptr64,0> @ 1501badc0

/* struct absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 __cdecl
   std::construct_at<struct absl::lts_20240722::cord_internal::CordRep * __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,0>(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 const,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 && __ptr64) */

CordRep ** __cdecl
std::
construct_at<absl::lts_20240722::cord_internal::CordRep*___ptr64,absl::lts_20240722::cord_internal::CordRep*___ptr64,0>
          (CordRep **param_1,CordRep **param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// construct_at<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64&___ptr64,0> @ 1501badd0

/* struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 __cdecl
   std::construct_at<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc *
   __ptr64,struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 &
   __ptr64,0>(struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64
   const,struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 & __ptr64) */

PrefixCrc ** __cdecl
std::
construct_at<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64&___ptr64,0>
          (PrefixCrc **param_1,PrefixCrc **param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// construct_at<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc_const&___ptr64,0> @ 1501bade0

/* struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 __cdecl
   std::construct_at<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc const & __ptr64,0>(struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 const,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc const & __ptr64) */

PrefixCrc * __cdecl
std::
construct_at<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc_const&___ptr64,0>
          (PrefixCrc *param_1,PrefixCrc *param_2)

{
  crc32c_t cVar1;
  undefined4 uVar2;
  
  cVar1.crc_ = (param_2->crc).crc_;
  uVar2 = *(undefined4 *)&param_2->field_0xc;
  param_1->length = param_2->length;
  param_1->crc = (crc32c_t)cVar1.crc_;
  *(undefined4 *)&param_1->field_0xc = uVar2;
  return param_1;
}

// construct_at<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,0> @ 1501badf0

/* struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 __cdecl
   std::construct_at<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,0>(struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 const,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc && __ptr64) */

PrefixCrc * __cdecl
std::
construct_at<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,0>
          (PrefixCrc *param_1,PrefixCrc *param_2)

{
  crc32c_t cVar1;
  undefined4 uVar2;
  
  cVar1.crc_ = (param_2->crc).crc_;
  uVar2 = *(undefined4 *)&param_2->field_0xc;
  param_1->length = param_2->length;
  param_1->crc = (crc32c_t)cVar1.crc_;
  *(undefined4 *)&param_1->field_0xc = uVar2;
  return param_1;
}

// construct_at<absl::lts_20240722::str_format_internal::FormatArgImpl,absl::lts_20240722::str_format_internal::FormatArgImpl_const&___ptr64,0> @ 1501bae00

/* class absl::lts_20240722::str_format_internal::FormatArgImpl * __ptr64 __cdecl
   std::construct_at<class absl::lts_20240722::str_format_internal::FormatArgImpl,class
   absl::lts_20240722::str_format_internal::FormatArgImpl const & __ptr64,0>(class
   absl::lts_20240722::str_format_internal::FormatArgImpl * __ptr64 const,class
   absl::lts_20240722::str_format_internal::FormatArgImpl const & __ptr64) */

FormatArgImpl * __cdecl
std::
construct_at<absl::lts_20240722::str_format_internal::FormatArgImpl,absl::lts_20240722::str_format_internal::FormatArgImpl_const&___ptr64,0>
          (FormatArgImpl *param_1,FormatArgImpl *param_2)

{
  _func___cdecl_bool_Data_FormatConversionSpecImpl_void_ptr *p_Var1;
  
  p_Var1 = param_2->dispatcher_;
  param_1->data_ = param_2->data_;
  param_1->dispatcher_ = p_Var1;
  return param_1;
}

// destroy<absl::lts_20240722::cord_internal::CordRep*___ptr64> @ 1501bae10

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::destroy<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64>(class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> & __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 const) */

void __cdecl
std::_Default_allocator_traits<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::destroy<absl::lts_20240722::cord_internal::CordRep*___ptr64>
          (allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_1,CordRep **param_2
          )

{
  return;
}

// destroy<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> @ 1501bae20

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::destroy<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>(class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> & __ptr64,struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 const) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::destroy<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
          (allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> *param_1,
          PrefixCrc *param_2)

{
  return;
}

// destroy_at<absl::lts_20240722::cord_internal::CordRep*___ptr64> @ 1501bae30

/* void __cdecl std::destroy_at<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 const) */

void __cdecl std::destroy_at<absl::lts_20240722::cord_internal::CordRep*___ptr64>(CordRep **param_1)

{
  return;
}

// destroy_at<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> @ 1501bae40

/* void __cdecl std::destroy_at<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>(struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 const) */

void __cdecl
std::destroy_at<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>(PrefixCrc *param_1)

{
  return;
}

// distance<absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64> @ 1501bae50

/* __int64 __cdecl std::distance<class absl::lts_20240722::str_format_internal::FormatArgImpl const
   * __ptr64>(class absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64,class
   absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64) */

__int64 __cdecl
std::distance<absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>
          (FormatArgImpl *param_1,FormatArgImpl *param_2)

{
  return (longlong)param_2 - (longlong)param_1 >> 4;
}

// emplace_back<absl::lts_20240722::cord_internal::CordRep*___ptr64_const&___ptr64> @ 1501bae70

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 & __ptr64 __cdecl
   absl::lts_20240722::InlinedVector<struct absl::lts_20240722::cord_internal::CordRep *
   __ptr64,2,class std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>
   >::emplace_back<struct absl::lts_20240722::cord_internal::CordRep * __ptr64 const &
   __ptr64>(struct absl::lts_20240722::cord_internal::CordRep * __ptr64 const & __ptr64) __ptr64 */

CordRep ** __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::emplace_back<absl::lts_20240722::cord_internal::CordRep*___ptr64_const&___ptr64>
          (InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
           *this,CordRep **param_1)

{
  InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
  *pIVar1;
  InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
  *pIVar2;
  InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
  **ppIVar3;
  CordRep **ppCVar4;
  InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
  *local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
  *local_20;
  ulonglong local_18;
  InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
  *local_10;
  
  if (((byte)*this & 1) == 0) {
    local_20 = this + 8;
    ppIVar3 = &local_20;
    local_18 = *(ulonglong *)this >> 1;
    local_10 = (InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
                *)0x2;
  }
  else {
    local_38 = *(InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
                 **)(this + 8);
    local_28 = *(undefined8 *)(this + 0x10);
    ppIVar3 = &local_38;
    uStack_30 = *(ulonglong *)this >> 1;
  }
  pIVar1 = *ppIVar3;
  pIVar2 = ppIVar3[1];
  local_10 = ppIVar3[2];
  if (pIVar2 != local_10) {
    *(CordRep **)(pIVar1 + (longlong)pIVar2 * 8) = *param_1;
    *(longlong *)this = *(longlong *)this + 2;
    return (CordRep **)(pIVar1 + (longlong)pIVar2 * 8);
  }
  ppCVar4 = inlined_vector_internal::
            Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
            ::EmplaceBackSlow<absl::lts_20240722::cord_internal::CordRep*___ptr64_const&___ptr64>
                      ((Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
                        *)this,param_1);
  return ppCVar4;
}

// forward<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64&___ptr64> @ 1501baf10

/* struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 & __ptr64 __cdecl
   std::forward<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 &
   __ptr64>(struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 & __ptr64) */

PrefixCrc ** __cdecl
std::forward<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64&___ptr64>
          (PrefixCrc **param_1)

{
  return param_1;
}

// forward<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>&___ptr64> @ 1501baf20

/* class std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> & __ptr64
   __cdecl std::forward<class std::allocator<struct absl::lts_20240722::cord_internal::CordRep *
   __ptr64> & __ptr64>(class std::allocator<struct absl::lts_20240722::cord_internal::CordRep *
   __ptr64> & __ptr64) */

allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> * __cdecl
std::forward<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>&___ptr64>
          (allocator<struct_absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_1)

{
  return (allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *)param_1;
}

// forward<absl::lts_20240722::cord_internal::CordRep*___ptr64_const&___ptr64> @ 1501baf30

/* struct absl::lts_20240722::cord_internal::CordRep * __ptr64 const & __ptr64 __cdecl
   std::forward<struct absl::lts_20240722::cord_internal::CordRep * __ptr64 const & __ptr64>(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 const & __ptr64) */

CordRep ** __cdecl
std::forward<absl::lts_20240722::cord_internal::CordRep*___ptr64_const&___ptr64>(CordRep **param_1)

{
  return param_1;
}

// forward<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc_const&___ptr64> @ 1501baf40

/* struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc const & __ptr64 __cdecl
   std::forward<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc const &
   __ptr64>(struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc const & __ptr64) */

PrefixCrc * __cdecl
std::forward<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc_const&___ptr64>
          (PrefixCrc *param_1)

{
  return param_1;
}

// forward<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_const&___ptr64> @ 1501baf50

/* class std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl> const &
   __ptr64 __cdecl std::forward<class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> const & __ptr64>(class
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl> const & __ptr64) */

allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> * __cdecl
std::forward<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_const&___ptr64>
          (allocator<class_absl::lts_20240722::str_format_internal::FormatArgImpl> *param_1)

{
  return (allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *)param_1;
}

// forward<absl::lts_20240722::str_format_internal::FormatArgImpl_const&___ptr64> @ 1501baf60

/* class absl::lts_20240722::str_format_internal::FormatArgImpl const & __ptr64 __cdecl
   std::forward<class absl::lts_20240722::str_format_internal::FormatArgImpl const & __ptr64>(class
   absl::lts_20240722::str_format_internal::FormatArgImpl const & __ptr64) */

FormatArgImpl * __cdecl
std::forward<absl::lts_20240722::str_format_internal::FormatArgImpl_const&___ptr64>
          (FormatArgImpl *param_1)

{
  return param_1;
}

// forward<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64> @ 1501baf70

/* struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 && __ptr64
   __cdecl std::forward<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 *
   __ptr64>(struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 &
   __ptr64) */

PrefixCrc *** __cdecl
std::forward<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
          (PrefixCrc ***param_1)

{
  return param_1;
}

// forward<absl::lts_20240722::cord_internal::CordRep*___ptr64> @ 1501baf80

/* struct absl::lts_20240722::cord_internal::CordRep * __ptr64 && __ptr64 __cdecl
   std::forward<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 & __ptr64) */

CordRep ** __cdecl
std::forward<absl::lts_20240722::cord_internal::CordRep*___ptr64>(CordRep **param_1)

{
  return param_1;
}

// forward<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> @ 1501baf90

/* struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc && __ptr64 __cdecl
   std::forward<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>(struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc & __ptr64) */

PrefixCrc * __cdecl
std::forward<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>(PrefixCrc *param_1)

{
  return param_1;
}

// forward<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_> @ 1501bafc0

/* class std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> && __ptr64
   __cdecl std::forward<class std::allocator<struct absl::lts_20240722::cord_internal::CordRep *
   __ptr64> >(class std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> &
   __ptr64) */

allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> * __cdecl
std::forward<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
          (allocator<struct_absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_1)

{
  return (allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *)param_1;
}

// forward<absl::lts_20240722::Cord> @ 1501bafd0

/* class absl::lts_20240722::Cord && __ptr64 __cdecl std::forward<class
   absl::lts_20240722::Cord>(class absl::lts_20240722::Cord & __ptr64) */

Cord * __cdecl std::forward<absl::lts_20240722::Cord>(Cord *param_1)

{
  return param_1;
}

// get<1> @ 1501bafe0

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 & __ptr64 __cdecl
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64>,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64>::get<1>(void) __ptr64&  */

CordRep *** __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>
::get<1>(CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>
         *this)

{
  return (CordRep ***)this;
}

// get<1> @ 1501baff0

/* public: unsigned __int64 & __ptr64 __cdecl
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64>,unsigned __int64>::get<1>(void) __ptr64&
    */

__uint64 * __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned___int64>
::get<1>(CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned___int64>
         *this)

{
  return (__uint64 *)this;
}

// get<1> @ 1501bb000

/* public: unsigned __int64 const & __ptr64 __cdecl
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64>,unsigned __int64>::get<1>(void)const
   __ptr64&  */

__uint64 * __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned___int64>
::get<1>(CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned___int64>
         *this)

{
  return (__uint64 *)this;
}

// get<1> @ 1501bb010

/* public: unsigned __int64 & __ptr64 __cdecl
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned __int64>::get<1>(void) __ptr64&
    */

__uint64 * __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>
::get<1>(CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>
         *this)

{
  return (__uint64 *)this;
}

// get<1> @ 1501bb020

/* public: unsigned __int64 const & __ptr64 __cdecl
   absl::lts_20240722::container_internal::CompressedTuple<class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned __int64>::get<1>(void)const
   __ptr64&  */

__uint64 * __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>
::get<1>(CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>
         *this)

{
  return (__uint64 *)this;
}

// get<0> @ 1501bb050

/* public: class std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> &
   __ptr64 __cdecl absl::lts_20240722::container_internal::CompressedTuple<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64>::get<0>(void) __ptr64&  */

allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> * __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>
::get<0>(CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>
         *this)

{
  return (allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *)this;
}

// get<0> @ 1501bb060

/* public: class std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> &
   __ptr64 __cdecl absl::lts_20240722::container_internal::CompressedTuple<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>,unsigned
   __int64>::get<0>(void) __ptr64&  */

allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> * __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned___int64>
::get<0>(CompressedTuple<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,unsigned___int64>
         *this)

{
  return (allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *)this;
}

// get<0> @ 1501bb070

/* public: class std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl> &
   __ptr64 __cdecl absl::lts_20240722::container_internal::CompressedTuple<class
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned
   __int64>::get<0>(void) __ptr64&  */

allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> * __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>
::get<0>(CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>
         *this)

{
  return (allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *)this;
}

// has_single_bit<unsigned___int64,0> @ 1501bb080

/* bool __cdecl std::has_single_bit<unsigned __int64,0>(unsigned __int64) */

bool __cdecl std::has_single_bit<unsigned___int64,0>(__uint64 param_1)

{
  if ((param_1 != 0) && ((param_1 & param_1 - 1) == 0)) {
    return true;
  }
  return false;
}

// FUN_1501bb0b0 @ 1501bb0b0

void FUN_1501bb0b0(undefined8 param_1,longlong *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  pvVar1 = (void *)*param_2;
  uVar3 = param_2[1];
  pvVar2 = pvVar1;
  if (0xfff < uVar3) {
    pvVar2 = *(void **)((longlong)pvVar1 + -8);
    uVar3 = uVar3 + 0x27;
    if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar2,uVar3);
  return;
}

// move<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64&___ptr64> @ 1501bb100

/* struct absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 && __ptr64 __cdecl
   std::move<struct absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 & __ptr64>(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 & __ptr64) */

CordRep *** __cdecl
std::move<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64&___ptr64>(CordRep ***param_1)

{
  return param_1;
}

// move<absl::lts_20240722::cord_internal::CordRep*___ptr64&___ptr64> @ 1501bb110

/* struct absl::lts_20240722::cord_internal::CordRep * __ptr64 && __ptr64 __cdecl std::move<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 & __ptr64>(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 & __ptr64) */

CordRep ** __cdecl
std::move<absl::lts_20240722::cord_internal::CordRep*___ptr64&___ptr64>(CordRep **param_1)

{
  return param_1;
}

// move<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc&___ptr64> @ 1501bb120

/* struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc && __ptr64 __cdecl
   std::move<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc & __ptr64>(struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc & __ptr64) */

PrefixCrc * __cdecl
std::move<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc&___ptr64>(PrefixCrc *param_1)

{
  return param_1;
}

// move<absl::lts_20240722::inlined_vector_internal::AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>&___ptr64> @ 1501bb150

/* class absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> > && __ptr64 __cdecl
   std::move<class absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> > & __ptr64>(class
   absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> > & __ptr64) */

AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_> *
__cdecl std::
        move<absl::lts_20240722::inlined_vector_internal::AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>&___ptr64>
                  (AllocationTransaction<class_std::allocator<struct_absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
                   *param_1)

{
  return (AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
          *)param_1;
}

// move<absl::lts_20240722::crc_internal::CrcCordState&___ptr64> @ 1501bb160

/* class absl::lts_20240722::crc_internal::CrcCordState && __ptr64 __cdecl std::move<class
   absl::lts_20240722::crc_internal::CrcCordState & __ptr64>(class
   absl::lts_20240722::crc_internal::CrcCordState & __ptr64) */

CrcCordState * __cdecl
std::move<absl::lts_20240722::crc_internal::CrcCordState&___ptr64>(CrcCordState *param_1)

{
  return param_1;
}

// to_address<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64> @ 1501bb170

/* struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 __cdecl
   std::to_address<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc *
   __ptr64>(struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64
   const) */

PrefixCrc ** __cdecl
std::to_address<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64>
          (PrefixCrc **param_1)

{
  return param_1;
}

// uninitialized_copy<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64> @ 1501bb180

/* struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 __cdecl
   std::uninitialized_copy<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc *
   __ptr64 * __ptr64,struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 *
   __ptr64>(struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64
   const,struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64
   const,struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64) */

PrefixCrc ** __cdecl
std::
uninitialized_copy<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64,absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
          (PrefixCrc **param_1,PrefixCrc **param_2,PrefixCrc **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (PrefixCrc **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_> @ 1501bb1c0

/* public: __cdecl absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>
   >::AllocationTransaction<class std::allocator<struct absl::lts_20240722::cord_internal::CordRep *
   __ptr64> >(class std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> &
   __ptr64) __ptr64 */

AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_> *
__thiscall
absl::lts_20240722::inlined_vector_internal::
AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>::
AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
          (AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
           *this,allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_> @ 1501bb1e0

/* public: __cdecl absl::lts_20240722::InlinedVector<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::InlinedVector<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >(void) __ptr64 */

InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
* __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::
InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
          (InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
           *this)

{
  *(undefined8 *)this = 0;
  return this;
}

// IteratorValueAdapter<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,std::move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>_> @ 1501bb200

/* public: __cdecl absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>,class
   std::move_iterator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64>
   >::IteratorValueAdapter<class std::allocator<struct absl::lts_20240722::cord_internal::CordRep *
   __ptr64>,class std::move_iterator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64 *
   __ptr64> >(class std::move_iterator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64 *
   __ptr64> const & __ptr64) __ptr64 */

IteratorValueAdapter<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,std::move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>_>
* __thiscall
absl::lts_20240722::inlined_vector_internal::
IteratorValueAdapter<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,std::move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>_>
::
IteratorValueAdapter<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,std::move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>_>
          (IteratorValueAdapter<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,std::move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>_>
           *this,move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>
                 *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  return this;
}

// IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64> @ 1501bb210

/* public: __cdecl absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<class
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl>,class
   absl::lts_20240722::str_format_internal::FormatArgImpl const *
   __ptr64>::IteratorValueAdapter<class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl>,class
   absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64>(class
   absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64 const & __ptr64) __ptr64
    */

IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>
* __thiscall
absl::lts_20240722::inlined_vector_internal::
IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>
::
IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>
          (IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>
           *this,FormatArgImpl **param_1)

{
  *(FormatArgImpl **)this = *param_1;
  return this;
}

// Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_> @ 1501bb220

/* public: __cdecl absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >(void) __ptr64 */

Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
* __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
          (Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
           *this)

{
  *(undefined8 *)this = 0;
  return this;
}

// Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_> @ 1501bb240

/* public: __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >(class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> const & __ptr64) __ptr64 */

Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
* __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
          (Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
           *this,allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *param_1)

{
  this->metadata_ =
       (CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>
        )0x0;
  return this;
}

// _Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_> @ 1501bb260

/* public: __cdecl std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >
   >::_Deque_unchecked_const_iterator<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >(unsigned __int64,struct
   std::_Container_base12 const * __ptr64) __ptr64 */

_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
* __thiscall
std::
_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
::
_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
          (_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
           *this,__uint64 param_1,_Container_base12 *param_2)

{
  this->_Mycont =
       (_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
        *)param_2;
  this->_Myoff = param_1;
  return this;
}

// _Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_> @ 1501bb280

/* public: __cdecl std::_Deque_unchecked_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >
   >::_Deque_unchecked_iterator<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >(unsigned __int64,struct
   std::_Container_base12 const * __ptr64) __ptr64 */

_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
* __thiscall
std::
_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
::
_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
          (_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
           *this,__uint64 param_1,_Container_base12 *param_2)

{
  *(_Container_base12 **)this = param_2;
  *(__uint64 *)&this->field_0x8 = param_1;
  return this;
}

// _Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_> @ 1501bb2a0

/* public: __cdecl std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
   >(void) __ptr64 */

_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_> *
__thiscall
std::
_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>::
_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
          (_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
           *this)

{
  this->_padding_ = 0;
  this->_Map = (PrefixCrc **)0x0;
  this->_Mapsize = 0;
  this->_Myoff = 0;
  this->_Mysize = 0;
  return this;
}

// _Uninitialized_backout<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64> @ 1501bb2c0

/* public: __cdecl std::_Uninitialized_backout<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 *
   __ptr64>::_Uninitialized_backout<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc
   * __ptr64 * __ptr64>(struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 *
   __ptr64) __ptr64 */

_Uninitialized_backout<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
* __thiscall
std::
_Uninitialized_backout<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
::
_Uninitialized_backout<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
          (_Uninitialized_backout<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
           *this,PrefixCrc **param_1)

{
  *(PrefixCrc ***)this = param_1;
  *(PrefixCrc ***)(this + 8) = param_1;
  return this;
}

// allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> @ 1501bb2e0

/* public: __cdecl std::allocator<struct absl::lts_20240722::cord_internal::CordRep *
   __ptr64>::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>(void) __ptr64 */

allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> * __thiscall
std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>::
allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>
          (allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *this)

{
  return this;
}

// allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> @ 1501bb2f0

/* public: __cdecl std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>(void) __ptr64 */

allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> * __thiscall
std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>::
allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
          (allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> *this)

{
  return this;
}

// allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> @ 1501bb300

/* public: __cdecl std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl>::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl>(void) __ptr64 */

allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> * __thiscall
std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>::
allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>
          (allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *this)

{
  return this;
}

// deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_> @ 1501bb310

/* public: __cdecl std::deque<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >(void) __ptr64 */

deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
* __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
          (deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
           *this)

{
  undefined8 *puVar1;
  
  (this->_Mypair)._Myval2._padding_ = 0;
  (this->_Mypair)._Myval2._Map = (PrefixCrc **)0x0;
  (this->_Mypair)._Myval2._Mapsize = 0;
  (this->_Mypair)._Myval2._Myoff = 0;
  (this->_Mypair)._Myval2._Mysize = 0;
  puVar1 = ::operator_new(0x10);
  puVar1[1] = 0;
  (this->_Mypair)._Myval2._padding_ = (longlong)puVar1;
  *puVar1 = this;
  return this;
}

// move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64> @ 1501bb360

/* public: __cdecl std::move_iterator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64 *
   __ptr64>::move_iterator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64 *
   __ptr64>(struct absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64) __ptr64 */

move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64> * __thiscall
std::move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>::
move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>
          (move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64> *this,
          CordRep **param_1)

{
  *(CordRep ***)this = param_1;
  return this;
}

// CharIterator @ 1501bb370

/* public: __cdecl absl::lts_20240722::Cord::CharIterator::CharIterator(void) __ptr64 */

CharIterator * __thiscall absl::lts_20240722::Cord::CharIterator::CharIterator(CharIterator *this)

{
  (this->chunk_iterator_).btree_reader_.navigator_.height_ = -1;
  (this->chunk_iterator_).current_chunk_._Mydata = (char *)0x0;
  (this->chunk_iterator_).current_chunk_._Mysize = 0;
  (this->chunk_iterator_).current_leaf_ = (CordRep *)0x0;
  (this->chunk_iterator_).bytes_remaining_ = 0;
  (this->chunk_iterator_).btree_reader_.remaining_ = 0;
  return this;
}

// ChunkIterator @ 1501bb3a0

/* private: __cdecl absl::lts_20240722::Cord::ChunkIterator::ChunkIterator(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) __ptr64 */

ChunkIterator * __thiscall
absl::lts_20240722::Cord::ChunkIterator::ChunkIterator(ChunkIterator *this,CordRep *param_1)

{
  (this->btree_reader_).navigator_.height_ = -1;
  this->bytes_remaining_ = 0;
  (this->current_chunk_)._Mydata = (char *)0x0;
  (this->current_chunk_)._Mysize = 0;
  this->current_leaf_ = (CordRep *)0x0;
  (this->btree_reader_).remaining_ = 0;
  this->bytes_remaining_ = param_1->length;
  InitTree(this,param_1);
  return this;
}

// Cord @ 1501bb3e0

/* private: __cdecl absl::lts_20240722::Cord::Cord(class std::basic_string_view<char,struct
   std::char_traits<char> >,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier) __ptr64 */

Cord * __thiscall
absl::lts_20240722::Cord::Cord
          (Cord *this,basic_string_view<char,std::char_traits<char>_> *param_1,
          MethodIdentifier param_2)

{
  ulonglong uVar1;
  CordRep *pCVar2;
  
  uVar1 = param_1->_Mysize;
  if (uVar1 < 0x10) {
    InlineRep::set_data(&this->contents_,param_1->_Mydata,uVar1);
    return this;
  }
  pCVar2 = (CordRep *)FUN_1501c1c80(param_1->_Mydata,uVar1,0);
  (this->contents_).data_.rep_.field0_0x0.as_tree.rep = pCVar2;
  (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 1;
  return this;
}

// CordRepBtree @ 1501bb440

/* private: __cdecl absl::lts_20240722::cord_internal::CordRepBtree::CordRepBtree(void) __ptr64 */

CordRepBtree * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::CordRepBtree(CordRepBtree *this)

{
  *(undefined4 *)&this->_padding_ = 2;
  return this;
}

// CordRepExternal @ 1501bb460

/* public: __cdecl absl::lts_20240722::cord_internal::CordRepExternal::CordRepExternal(void) __ptr64
    */

CordRepExternal * __thiscall
absl::lts_20240722::cord_internal::CordRepExternal::CordRepExternal(CordRepExternal *this)

{
  *(undefined4 *)&this->_padding_ = 2;
  return this;
}

// CordRepSubstring @ 1501bb480

/* public: __cdecl absl::lts_20240722::cord_internal::CordRepSubstring::CordRepSubstring(void)
   __ptr64 */

CordRepSubstring * __thiscall
absl::lts_20240722::cord_internal::CordRepSubstring::CordRepSubstring(CordRepSubstring *this)

{
  *(undefined4 *)&this->_padding_ = 2;
  return this;
}

// CordzUpdateScope @ 1501bb4a0

/* public: __cdecl absl::lts_20240722::cord_internal::CordzUpdateScope::CordzUpdateScope(class
   absl::lts_20240722::cord_internal::CordzInfo * __ptr64,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier) __ptr64 */

CordzUpdateScope * __thiscall
absl::lts_20240722::cord_internal::CordzUpdateScope::CordzUpdateScope
          (CordzUpdateScope *this,CordzInfo *param_1,MethodIdentifier param_2)

{
  this->info_ = param_1;
  if (param_1 != (CordzInfo *)0x0) {
    CordzInfo::Lock(param_1,param_2);
  }
  return this;
}

// InlineRep @ 1501bb4d0

/* public: __cdecl absl::lts_20240722::Cord::InlineRep::InlineRep(enum
   absl::lts_20240722::cord_internal::InlineData::DefaultInitType) __ptr64 */

InlineRep * __thiscall
absl::lts_20240722::Cord::InlineRep::InlineRep(InlineRep *this,DefaultInitType param_1)

{
  return this;
}

// PrefixCrc @ 1501bb4e0

/* public: __cdecl absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc::PrefixCrc(void)
   __ptr64 */

PrefixCrc * __thiscall
absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc::PrefixCrc(PrefixCrc *this)

{
  this->length = 0;
  (this->crc).crc_ = 0;
  return this;
}

// PrefixCrc @ 1501bb500

/* public: __cdecl absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc::PrefixCrc(unsigned
   __int64,class absl::lts_20240722::crc32c_t) __ptr64 */

PrefixCrc * __thiscall
absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc::PrefixCrc
          (PrefixCrc *this,__uint64 param_1,crc32c_t param_2)

{
  this->length = param_1;
  (this->crc).crc_ = param_2.crc_;
  return this;
}

// RefcountedRep @ 1501bb520

/* public: __cdecl
   absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep::RefcountedRep(void) __ptr64 */

RefcountedRep * __thiscall
absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep::RefcountedRep(RefcountedRep *this)

{
  deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
  *pdVar1;
  longlong *plVar2;
  
  this->count = (atomic<int>)0x1;
  pdVar1 = &(this->rep).prefix_crc;
  (this->rep).removed_prefix.length = 0;
  (this->rep).removed_prefix.crc.crc_ = 0;
  (pdVar1->_Mypair)._Myval2._padding_ = 0;
  (this->rep).prefix_crc._Mypair._Myval2._Map = (PrefixCrc **)0x0;
  (this->rep).prefix_crc._Mypair._Myval2._Mapsize = 0;
  (this->rep).prefix_crc._Mypair._Myval2._Myoff = 0;
  (this->rep).prefix_crc._Mypair._Myval2._Mysize = 0;
  plVar2 = ::operator_new(0x10);
  plVar2[1] = 0;
  (pdVar1->_Mypair)._Myval2._padding_ = (longlong)plVar2;
  *plVar2 = (longlong)pdVar1;
  return this;
}

// Rep @ 1501bb590

/* public: __cdecl absl::lts_20240722::crc_internal::CrcCordState::Rep::Rep(void) __ptr64 */

Rep * __thiscall absl::lts_20240722::crc_internal::CrcCordState::Rep::Rep(Rep *this)

{
  deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
  *pdVar1;
  longlong *plVar2;
  
  pdVar1 = &this->prefix_crc;
  (this->removed_prefix).length = 0;
  (this->removed_prefix).crc.crc_ = 0;
  (pdVar1->_Mypair)._Myval2._padding_ = 0;
  (this->prefix_crc)._Mypair._Myval2._Map = (PrefixCrc **)0x0;
  (this->prefix_crc)._Mypair._Myval2._Mapsize = 0;
  (this->prefix_crc)._Mypair._Myval2._Myoff = 0;
  (this->prefix_crc)._Mypair._Myval2._Mysize = 0;
  plVar2 = ::operator_new(0x10);
  plVar2[1] = 0;
  (pdVar1->_Mypair)._Myval2._padding_ = (longlong)plVar2;
  *plVar2 = (longlong)pdVar1;
  return this;
}

// Streamable @ 1501bb5f0

/* public: __cdecl absl::lts_20240722::str_format_internal::Streamable::Streamable(class
   absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl const & __ptr64,class
   absl::lts_20240722::Span<class absl::lts_20240722::str_format_internal::FormatArgImpl const >)
   __ptr64 */

Streamable * __thiscall
absl::lts_20240722::str_format_internal::Streamable::Streamable
          (Streamable *this,UntypedFormatSpecImpl *param_1,
          Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_> *param_2)

{
  allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *paVar1;
  ulong64 uVar2;
  FormatArgImpl *pFVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  FormatArgImpl *local_res8;
  allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *local_res10;
  
  *(UntypedFormatSpecImpl **)this = param_1;
  paVar1 = (allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *)(this + 8);
  uVar2 = param_2->len_;
  local_res8 = param_2->ptr_;
  *(undefined8 *)paVar1 = 0;
  uVar5 = (longlong)(uVar2 << 4) >> 4;
  local_res10 = paVar1;
  if (uVar5 < 5) {
    pFVar3 = (FormatArgImpl *)(this + 0x10);
  }
  else {
    uVar4 = 8;
    if (8 < uVar5) {
      uVar4 = uVar5;
    }
    if (0xfffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_bad_array_new_length();
    }
    pFVar3 = std::_Allocate<16,std::_Default_allocate_traits,0>(uVar4 << 4);
    *(FormatArgImpl **)(this + 0x10) = pFVar3;
    *(ulonglong *)(this + 0x18) = uVar4;
    *(ulonglong *)paVar1 = *(ulonglong *)paVar1 | 1;
  }
  inlined_vector_internal::
  ConstructElements<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>_>
            (paVar1,pFVar3,
             (IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>
              *)&local_res8,uVar5);
  *(ulonglong *)paVar1 = *(longlong *)paVar1 + uVar5 * 2;
  return this;
}

// crc32c_t @ 1501bb6f0

/* public: __cdecl absl::lts_20240722::crc32c_t::crc32c_t(unsigned int) __ptr64 */

crc32c_t * __thiscall absl::lts_20240722::crc32c_t::crc32c_t(crc32c_t *this,uint param_1)

{
  this->crc_ = param_1;
  return this;
}

// ~AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_> @ 1501bb700

/* public: __cdecl absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>
   >::~AllocationTransaction<class std::allocator<struct absl::lts_20240722::cord_internal::CordRep
   * __ptr64> >(void) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>::
~AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
          (AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
           *this)

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

// FUN_1501bb760 @ 1501bb760

void FUN_1501bb760(longlong *param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = param_1[3];
  if (0xf < uVar1) {
    pvVar2 = (void *)*param_1;
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar4);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}

// FUN_1501bb7d0 @ 1501bb7d0

void FUN_1501bb7d0(longlong *param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = param_1[3];
  if (0xf < uVar1) {
    pvVar2 = (void *)*param_1;
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar4);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}

// FUN_1501bb840 @ 1501bb840

void FUN_1501bb840(longlong param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(param_1 + 0x20);
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar4);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0xf;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}

// FUN_1501bb8b0 @ 1501bb8b0

void FUN_1501bb8b0(ulonglong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  uVar3 = *param_1;
  pvVar1 = (void *)param_1[2];
  pvVar2 = pvVar1;
  if (0xfff < uVar3) {
    pvVar2 = *(void **)((longlong)pvVar1 - 8);
    uVar3 = uVar3 + 0x27;
    if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar2,uVar3);
  return;
}

// ~InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_> @ 1501bb900

/* public: __cdecl absl::lts_20240722::InlinedVector<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::~InlinedVector<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >(void) __ptr64 */

void __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::
~InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
          (InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
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

// ~InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_> @ 1501bb920

/* public: __cdecl absl::lts_20240722::InlinedVector<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::~InlinedVector<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >(void) __ptr64 */

void __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::
~InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
          (InlinedVector<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
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
  uVar3 = *(longlong *)(this + 0x10) * 0x10;
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

// ~Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_> @ 1501bb940

/* public: __cdecl absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::~Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >(void) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::
~Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
          (Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
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

// FUN_1501bb960 @ 1501bb960

void FUN_1501bb960(longlong *param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = param_1[3];
  if (0xf < uVar1) {
    pvVar2 = (void *)*param_1;
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar4);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}

// ~Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_> @ 1501bb9d0

/* public: __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::~Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >(void) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::
~Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
          (Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
           *this)

{
  FormatArgImpl *pFVar1;
  FormatArgImpl *pFVar2;
  ulong64 uVar3;
  
  if (this->metadata_ ==
      (CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>
       )0x0) {
    return;
  }
  if ((*(byte *)&this->metadata_ & 1) == 0) {
    return;
  }
  pFVar1 = (this->data_).allocated.allocated_data;
  uVar3 = (this->data_).allocated.allocated_capacity * 0x10;
  pFVar2 = pFVar1;
  if (0xfff < uVar3) {
    pFVar2 = (FormatArgImpl *)pFVar1[-1].dispatcher_;
    uVar3 = uVar3 + 0x27;
    if (0x1f < (ulonglong)((longlong)pFVar1 + (-8 - (longlong)pFVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pFVar2,uVar3);
  return;
}

// ~_Uninitialized_backout<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64> @ 1501bb9f0

/* public: __cdecl std::_Uninitialized_backout<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 *
   __ptr64>::~_Uninitialized_backout<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64>(void) __ptr64 */

void __thiscall
std::
_Uninitialized_backout<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
::
~_Uninitialized_backout<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
          (_Uninitialized_backout<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
           *this)

{
  return;
}

// ~deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_> @ 1501bba00

/* WARNING: Type propagation algorithm not settling */
/* public: __cdecl std::deque<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::~deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >(void) __ptr64 */

void __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::
~deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
          (deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
           *this)

{
  PrefixCrc *pPVar1;
  void *pvVar2;
  ulong64 uVar3;
  PrefixCrc *pPVar4;
  
  uVar3 = (this->_Mypair)._Myval2._Mysize;
  if (uVar3 != 0) {
    do {
      uVar3 = uVar3 - 1;
      (this->_Mypair)._Myval2._Mysize = uVar3;
    } while (uVar3 != 0);
    (this->_Mypair)._Myval2._Myoff = 0;
  }
  if ((this->_Mypair)._Myval2._Map != (PrefixCrc **)0x0) {
    uVar3 = (this->_Mypair)._Myval2._Mapsize;
    while (uVar3 != 0) {
      uVar3 = uVar3 - 1;
      pPVar1 = (this->_Mypair)._Myval2._Map[uVar3];
      if (pPVar1 != (PrefixCrc *)0x0) {
        ::operator_delete(pPVar1,0x10);
      }
    }
    pPVar1 = (PrefixCrc *)(this->_Mypair)._Myval2._Map;
    uVar3 = (this->_Mypair)._Myval2._Mapsize * 8;
    pPVar4 = pPVar1;
    if (0xfff < uVar3) {
      pPVar4 = *(PrefixCrc **)&pPVar1[0xffffffffffffffff].crc;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pPVar1 + (-8 - (longlong)pPVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pPVar4,uVar3);
  }
  pvVar2 = (void *)(this->_Mypair)._Myval2._padding_;
  (this->_Mypair)._Myval2._padding_ = 0;
  (this->_Mypair)._Myval2._Mapsize = 0;
  (this->_Mypair)._Myval2._Map = (PrefixCrc **)0x0;
  ::operator_delete(pvVar2,0x10);
  return;
}

// ~CordRepCrc @ 1501bbaf0

/* public: __cdecl absl::lts_20240722::cord_internal::CordRepCrc::~CordRepCrc(void) __ptr64 */

void __thiscall absl::lts_20240722::cord_internal::CordRepCrc::~CordRepCrc(CordRepCrc *this)

{
  crc_internal::CrcCordState::~CrcCordState(&this->crc_cord_state);
  return;
}

// ~CordzUpdateScope @ 1501bbb00

/* public: __cdecl absl::lts_20240722::cord_internal::CordzUpdateScope::~CordzUpdateScope(void)
   __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::CordzUpdateScope::~CordzUpdateScope(CordzUpdateScope *this)

{
  if (this->info_ != (CordzInfo *)0x0) {
    CordzInfo::Unlock(this->info_);
  }
  return;
}

// ~RefcountedRep @ 1501bbb20

/* public: __cdecl
   absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep::~RefcountedRep(void) __ptr64 */

void __thiscall
absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep::~RefcountedRep(RefcountedRep *this)

{
  std::
  deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
  ::
  ~deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
            (&(this->rep).prefix_crc);
  return;
}

// ~Rep @ 1501bbb30

/* public: __cdecl absl::lts_20240722::crc_internal::CrcCordState::Rep::~Rep(void) __ptr64 */

void __thiscall absl::lts_20240722::crc_internal::CrcCordState::Rep::~Rep(Rep *this)

{
  std::
  deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
  ::
  ~deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
            (&this->prefix_crc);
  return;
}

// ~Streamable @ 1501bbb40

/* public: __cdecl absl::lts_20240722::str_format_internal::Streamable::~Streamable(void) __ptr64 */

void __thiscall absl::lts_20240722::str_format_internal::Streamable::~Streamable(Streamable *this)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  if (*(longlong *)(this + 8) == 0) {
    return;
  }
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  pvVar1 = *(void **)(this + 0x10);
  uVar3 = *(longlong *)(this + 0x18) * 0x10;
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

// FUN_1501bbb60 @ 1501bbb60

void FUN_1501bbb60(longlong *param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = param_1[3];
  if (0xf < uVar1) {
    pvVar2 = (void *)*param_1;
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar4);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}

// operator= @ 1501bbbd0

/* public: class std::deque<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > & __ptr64
   __cdecl std::deque<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
   >::operator=(class std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > const & __ptr64) __ptr64 */

deque<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class_std::allocator<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
* __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::operator=(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
            *this,deque<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class_std::allocator<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
                  *param_1)

{
  deque<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class_std::allocator<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
  *local_28;
  longlong lStack_20;
  deque<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class_std::allocator<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
  *local_18;
  longlong lStack_10;
  
  if ((deque<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class_std::allocator<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
       *)this != param_1) {
    lStack_10 = *(longlong *)(param_1 + 0x18);
    lStack_20 = *(longlong *)(param_1 + 0x20) + lStack_10;
    local_28 = param_1;
    local_18 = param_1;
    _Assign_range<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>,std::_Deque_unchecked_const_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>_>
              (this,&local_18,&local_28);
  }
  return (deque<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class_std::allocator<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
          *)this;
}

// operator= @ 1501bbc40

/* public: class absl::lts_20240722::Cord & __ptr64 __cdecl
   absl::lts_20240722::Cord::operator=(class std::basic_string_view<char,struct
   std::char_traits<char> >) __ptr64 */

Cord * __thiscall
absl::lts_20240722::Cord::operator=
          (Cord *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  char *_Src;
  ulonglong _Size;
  longlong lVar3;
  __uint64 _Var4;
  CordRep *pCVar5;
  CordRep *pCVar6;
  CordzInfo *pCVar7;
  
  _Src = param_1->_Mydata;
  _Size = param_1->_Mysize;
  if (((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) == 0) {
    pCVar6 = (CordRep *)0x0;
  }
  else {
    pCVar6 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep;
  }
  if (_Size < 0x10) {
    if ((pCVar6 == (CordRep *)0x0) ||
       (pCVar7 = (CordzInfo *)((this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + -1),
       pCVar7 == (CordzInfo *)0x0)) {
      InlineRep::set_data(&this->contents_,_Src,_Size);
      if (pCVar6 == (CordRep *)0x0) {
        return this;
      }
    }
    else {
      cord_internal::CordzInfo::Untrack(pCVar7);
      InlineRep::set_data(&this->contents_,_Src,_Size);
    }
    LOCK();
    pRVar1 = &pCVar6->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      cord_internal::CordRep::Destroy(pCVar6);
    }
  }
  else if (pCVar6 == (CordRep *)0x0) {
    pCVar6 = (CordRep *)FUN_1501c1c80(_Src,_Size,0);
    (this->contents_).data_.rep_.field0_0x0.as_tree.rep = pCVar6;
    (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 1;
  }
  else {
    lVar3 = (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
    pCVar7 = (CordzInfo *)(lVar3 + -1);
    if (pCVar7 != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Lock(pCVar7,kAssignString);
    }
    if (((pCVar6->tag < 6) ||
        (_Var4 = cord_internal::CordRepFlat::Capacity((CordRepFlat *)pCVar6), _Var4 < _Size)) ||
       ((pCVar6->refcount).count_ != (atomic<int>)0x2)) {
      pCVar5 = (CordRep *)FUN_1501c1c80(_Src,_Size,0);
      (this->contents_).data_.rep_.field0_0x0.as_tree.rep = pCVar5;
      if (pCVar7 != (CordzInfo *)0x0) {
        *(CordRep **)(lVar3 + 0x3f) = pCVar5;
      }
      LOCK();
      pRVar1 = &pCVar6->refcount;
      aVar2 = pRVar1->count_;
      pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x2) {
        cord_internal::CordRep::Destroy(pCVar6);
      }
      if (pCVar7 != (CordzInfo *)0x0) {
        cord_internal::CordzInfo::Unlock(pCVar7);
      }
    }
    else {
      memmove(pCVar6->storage,_Src,_Size);
      pCVar6->length = _Size;
      if (pCVar7 != (CordzInfo *)0x0) {
        cord_internal::CordzInfo::Unlock(pCVar7);
      }
    }
  }
  return this;
}

// operator= @ 1501bbdb0

/* public: struct absl::lts_20240722::crc_internal::CrcCordState::Rep & __ptr64 __cdecl
   absl::lts_20240722::crc_internal::CrcCordState::Rep::operator=(struct
   absl::lts_20240722::crc_internal::CrcCordState::Rep const & __ptr64) __ptr64 */

Rep * __thiscall
absl::lts_20240722::crc_internal::CrcCordState::Rep::operator=(Rep *this,Rep *param_1)

{
  crc32c_t cVar1;
  undefined4 uVar2;
  deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
  *local_28;
  longlong lStack_20;
  deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
  *local_18;
  ulong64 uStack_10;
  
  cVar1.crc_ = (param_1->removed_prefix).crc.crc_;
  uVar2 = *(undefined4 *)&(param_1->removed_prefix).field_0xc;
  local_28 = &param_1->prefix_crc;
  (this->removed_prefix).length = (param_1->removed_prefix).length;
  (this->removed_prefix).crc = (crc32c_t)cVar1.crc_;
  *(undefined4 *)&(this->removed_prefix).field_0xc = uVar2;
  if (&this->prefix_crc != local_28) {
    uStack_10 = (param_1->prefix_crc)._Mypair._Myval2._Myoff;
    lStack_20 = (param_1->prefix_crc)._Mypair._Myval2._Mysize + uStack_10;
    local_18 = local_28;
    std::
    deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
    ::
    _Assign_range<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>,std::_Deque_unchecked_const_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>_>
              (&this->prefix_crc,&local_18,&local_28);
  }
  return this;
}

// operator<< @ 1501bbe20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   absl::lts_20240722::operator<<(class std::basic_ostream<char,struct std::char_traits<char> > &
   __ptr64,class absl::lts_20240722::Cord const & __ptr64) */

basic_ostream<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::operator<<
          (basic_ostream<char,struct_std::char_traits<char>_> *param_1,Cord *param_2)

{
  ulong64 uVar1;
  undefined1 auVar2 [16];
  uchar *puVar3;
  longlong lVar4;
  longlong lVar5;
  CordRep *pCVar6;
  uchar **ppuVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  uchar *puVar10;
  uchar *puVar11;
  uchar *puVar12;
  byte bVar13;
  CordRepBtree *pCVar14;
  int iVar15;
  CordRepBtree *pCVar16;
  byte bVar17;
  ulong64 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_138 [32];
  basic_ostream<char,std::char_traits<char>_> *local_118;
  undefined8 local_110;
  uchar *puStack_108;
  uchar *local_100;
  ulong64 uStack_f8;
  uchar *local_f0;
  ulong64 local_e8;
  ChunkIterator local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_d8.current_chunk_._Mysize = 0;
  local_d8.current_chunk_._Mydata = (char *)0x0;
  local_d8.current_leaf_ = (CordRep *)0x0;
  bVar17 = (param_2->contents_).data_.rep_.field0_0x0.data[0];
  local_d8.btree_reader_.remaining_ = 0;
  local_d8.btree_reader_.navigator_.height_ = -1;
  bVar13 = bVar17 & 1;
  local_118 = (basic_ostream<char,std::char_traits<char>_> *)param_1;
  if ((bVar13 == 0) ||
     (pCVar6 = (param_2->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar6 == (CordRep *)0x0)) {
    local_110 = (uchar *)0x0;
    puVar11 = (uchar *)((ulonglong)(longlong)(char)bVar17 >> 1);
    puVar3 = (uchar *)((param_2->contents_).data_.rep_.field0_0x0.data + 1);
    puStack_108 = puVar11;
    puVar12 = local_110;
    local_d8.current_chunk_._Mydata = (char *)local_110;
    puVar10 = puVar11;
    local_d8.current_chunk_._Mysize = (ulong64)puVar11;
    uVar18 = local_d8.btree_reader_.remaining_;
    iVar15 = local_d8.btree_reader_.navigator_.height_;
    bVar17 = local_d8.btree_reader_.navigator_.index_[0];
    pCVar16 = local_d8.btree_reader_.navigator_.node_[0];
    if (bVar13 == 0) {
      local_110 = puVar3;
      puVar12 = puVar3;
      local_d8.current_chunk_._Mydata = (char *)puVar3;
    }
  }
  else {
    local_d8.bytes_remaining_ = pCVar6->length;
    if ((uchar *)local_d8.bytes_remaining_ == (uchar *)0x0) {
      return (basic_ostream<char,std::char_traits<char>_> *)param_1;
    }
    Cord::ChunkIterator::InitTree(&local_d8,pCVar6);
    puVar11 = (uchar *)local_d8.bytes_remaining_;
    puVar12 = (uchar *)local_d8.current_chunk_._Mydata;
    puVar10 = (uchar *)local_d8.current_chunk_._Mysize;
    uVar18 = local_d8.btree_reader_.remaining_;
    iVar15 = local_d8.btree_reader_.navigator_.height_;
    bVar17 = local_d8.btree_reader_.navigator_.index_[0];
    pCVar16 = local_d8.btree_reader_.navigator_.node_[0];
  }
  do {
    while( true ) {
      do {
        if (puVar11 == (uchar *)0x0) {
          return local_118;
        }
        std::basic_ostream<char,std::char_traits<char>_>::write
                  (local_118,(char *)puVar12,(__int64)puVar10);
        puVar11 = puVar11 + -(longlong)puVar10;
        local_d8.bytes_remaining_ = (ulong64)puVar11;
      } while (puVar11 == (uchar *)0x0);
      if ((-1 < iVar15) && (local_d8.btree_reader_.navigator_.node_[iVar15] != (CordRepBtree *)0x0))
      break;
      puVar12 = (uchar *)0x0;
      puVar10 = (uchar *)0x0;
      local_d8.current_chunk_._Mydata = (char *)0x0;
      local_d8.current_chunk_._Mysize = 0;
    }
    if (uVar18 == 0) {
      local_110._0_4_ = 0;
      local_110._4_4_ = 0;
      local_110 = (uchar *)0x0;
      puStack_108 = (uchar *)0x0;
      uVar19 = (undefined4)local_110;
      uVar20 = local_110._4_4_;
      uVar21 = (undefined4)local_110;
      uVar22 = local_110._4_4_;
    }
    else {
      if ((ulonglong)bVar17 == (ulonglong)*(byte *)((longlong)&pCVar16->_padding_ + 7) - 1) {
        lVar4 = 0;
        do {
          lVar5 = lVar4;
          lVar4 = lVar5 + 1;
          if (iVar15 < lVar4) {
            pCVar6 = (CordRep *)0x0;
            goto LAB_1501bbffc;
          }
          pCVar14 = local_d8.btree_reader_.navigator_.node_[lVar5 + 1];
          uVar9 = (ulonglong)local_d8.btree_reader_.navigator_.index_[lVar5 + 1] + 1;
        } while (uVar9 == *(byte *)((longlong)&pCVar14->_padding_ + 7));
        local_d8.btree_reader_.navigator_.index_[lVar5 + 1] = (uchar)uVar9;
        do {
          pCVar14 = (CordRepBtree *)pCVar14->edges_[uVar9];
          lVar5 = lVar4 + -1;
          bVar17 = *(uchar *)((longlong)((RefcountAndFlags *)&pCVar14->_padding_ + 1) + 2);
          uVar9 = (ulonglong)bVar17;
          local_d8.btree_reader_.navigator_.node_[lVar4 + -1] = pCVar14;
          local_d8.btree_reader_.navigator_.index_[lVar4 + -1] = bVar17;
          lVar4 = lVar5;
        } while (0 < lVar5);
        pCVar6 = pCVar14->edges_[uVar9];
        pCVar16 = local_d8.btree_reader_.navigator_.node_[0];
        uVar18 = local_d8.btree_reader_.remaining_;
        iVar15 = local_d8.btree_reader_.navigator_.height_;
        bVar17 = local_d8.btree_reader_.navigator_.index_[0];
      }
      else {
        bVar17 = bVar17 + 1;
        pCVar6 = pCVar16->edges_[bVar17];
        local_d8.btree_reader_.navigator_.index_[0] = bVar17;
      }
LAB_1501bbffc:
      uVar1 = pCVar6->length;
      uVar8 = 0;
      uVar18 = uVar18 - uVar1;
      if (pCVar6->tag == '\x01') {
        uVar8 = pCVar6[1].length;
        pCVar6 = *(CordRep **)&pCVar6[1].refcount;
      }
      if (pCVar6->tag < 6) {
        ppuVar7 = &local_f0;
        local_f0 = (uchar *)(uVar8 + pCVar6[1].length);
        local_e8 = uVar1;
      }
      else {
        uStack_f8 = uVar1;
        local_100 = pCVar6->storage + uVar8;
        ppuVar7 = &local_100;
      }
      uVar19 = *(undefined4 *)ppuVar7;
      uVar20 = *(undefined4 *)((longlong)ppuVar7 + 4);
      local_110 = *ppuVar7;
      uVar21 = *(undefined4 *)(ppuVar7 + 1);
      uVar22 = *(undefined4 *)((longlong)ppuVar7 + 0xc);
      puStack_108 = ppuVar7[1];
      local_d8.btree_reader_.remaining_ = uVar18;
    }
    auVar2._4_4_ = uVar20;
    auVar2._0_4_ = uVar19;
    auVar2._8_4_ = uVar21;
    auVar2._12_4_ = uVar22;
    local_d8.current_chunk_._Mydata = (char *)CONCAT44(uVar20,uVar19);
    local_d8.current_chunk_._Mysize = CONCAT44(uVar22,uVar21);
    puVar12 = (uchar *)CONCAT44(uVar20,uVar19);
    puVar10 = auVar2._8_8_;
  } while( true );
}

// operator<< @ 1501bc0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   absl::lts_20240722::operator<<(class std::basic_ostream<char,struct std::char_traits<char> > &
   __ptr64,class absl::lts_20240722::crc32c_t) */

basic_ostream<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::operator<<
          (basic_ostream<char,struct_std::char_traits<char>_> *param_1,crc32c_t param_2)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  Data DVar2;
  ulong64 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  char *local_90;
  undefined8 local_88;
  ulonglong *local_80;
  undefined8 local_78;
  code *local_70;
  char **local_68;
  ulonglong local_60;
  Data local_58;
  longlong local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90 = "%08x";
  local_88 = 4;
  local_98 = (undefined8 *)CONCAT44(local_98._4_4_,param_2.crc_);
  local_78 = local_98;
  local_70 = str_format_internal::FormatArgImpl::Dispatch<unsigned_int>;
  local_98 = &local_78;
  local_68 = &local_90;
  local_80 = &local_60;
  local_60 = 0;
  inlined_vector_internal::
  ConstructElements<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>_>
            ((allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *)&local_60,
             (FormatArgImpl *)&local_58,
             (IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>
              *)&local_98,1);
  local_60 = local_60 + 2;
  pbVar1 = str_format_internal::Streamable::Print((Streamable *)&local_68,param_1);
  if ((local_60 != 0) && ((local_60 & 1) != 0)) {
    uVar3 = local_50 * 0x10;
    DVar2 = local_58;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      DVar2 = (Data)((Data *)((longlong)local_58.ptr + -8))->ptr;
      if (0x1f < (ulonglong)((longlong)local_58.ptr + (-8 - (longlong)DVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(DVar2.ptr,uVar3);
  }
  return pbVar1;
}

// operator<< @ 1501bc1e0

/* class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   absl::lts_20240722::str_format_internal::operator<<(class std::basic_ostream<char,struct
   std::char_traits<char> > & __ptr64,class absl::lts_20240722::str_format_internal::Streamable
   const & __ptr64) */

basic_ostream<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::str_format_internal::operator<<
          (basic_ostream<char,struct_std::char_traits<char>_> *param_1,Streamable *param_2)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  
  pbVar1 = Streamable::Print(param_2,param_1);
  return pbVar1;
}

// operator== @ 1501bc200

/* public: bool __cdecl std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >
   >::operator==(class std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >
   const & __ptr64)const __ptr64 */

bool __thiscall
std::
_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
::operator==(_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
             *this,_Deque_unchecked_const_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
                   *param_1)

{
  return this->_Myoff == *(ulong64 *)(param_1 + 8);
}

// operator== @ 1501bc220

/* public: bool __cdecl absl::lts_20240722::Cord::CharIterator::operator==(class
   absl::lts_20240722::Cord::CharIterator const & __ptr64)const __ptr64 */

bool __thiscall
absl::lts_20240722::Cord::CharIterator::operator==(CharIterator *this,CharIterator *param_1)

{
  return (this->chunk_iterator_).bytes_remaining_ == (param_1->chunk_iterator_).bytes_remaining_;
}

// operator== @ 1501bc240

/* bool __cdecl absl::lts_20240722::operator==(class absl::lts_20240722::Cord const & __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >) */

bool __cdecl
absl::lts_20240722::operator==
          (Cord *param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  uVar2 = (ulonglong)(param_1->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2 >> 1;
  }
  else {
    uVar3 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar3 == param_2->_Mysize) {
    Cord::GetFirstChunk(&local_18,param_1);
    uVar3 = local_18._Mysize;
    if (param_2->_Mysize < local_18._Mysize) {
      uVar3 = param_2->_Mysize;
    }
    iVar1 = memcmp(local_18._Mydata,param_2->_Mydata,uVar3);
    if (uVar3 != param_2->_Mysize) {
      if (iVar1 != 0) {
        return iVar1 == 0;
      }
      local_18._Mydata = param_2->_Mydata;
      local_18._Mysize = param_2->_Mysize;
      iVar1 = Cord::CompareSlowPath(param_1,&local_18,uVar3,param_2->_Mysize);
    }
    return iVar1 == 0;
  }
  return false;
}

// operator!= @ 1501bc2f0

/* public: bool __cdecl absl::lts_20240722::Cord::CharIterator::operator!=(class
   absl::lts_20240722::Cord::CharIterator const & __ptr64)const __ptr64 */

bool __thiscall
absl::lts_20240722::Cord::CharIterator::operator!=(CharIterator *this,CharIterator *param_1)

{
  return (this->chunk_iterator_).bytes_remaining_ != (param_1->chunk_iterator_).bytes_remaining_;
}

// operator[] @ 1501bc310

/* public: char __cdecl absl::lts_20240722::Cord::operator[](unsigned __int64)const __ptr64 */

char __thiscall absl::lts_20240722::Cord::operator[](Cord *this,__uint64 param_1)

{
  char cVar1;
  CordRepBtree *this_00;
  byte bVar2;
  
  bVar2 = (this->contents_).data_.rep_.field0_0x0.data[0] & 1;
  if ((bVar2 != 0) &&
     (this_00 = (CordRepBtree *)(this->contents_).data_.rep_.field0_0x0.as_tree.rep,
     this_00 != (CordRepBtree *)0x0)) {
    if (*(char *)((longlong)&this_00->_padding_ + 4) == '\x02') {
      this_00 = (CordRepBtree *)this_00->edges_[0];
    }
    bVar2 = *(byte *)((longlong)&this_00->_padding_ + 4);
    while( true ) {
      if (5 < bVar2) {
        return *(char *)((longlong)this_00->edges_ + (longlong)(param_1 + -3));
      }
      if (bVar2 == 3) break;
      if (bVar2 == 5) {
        return this_00->edges_[0]->storage[(longlong)(param_1 + -0xd)];
      }
      param_1 = (__uint64)(this_00->edges_[0]->storage + (longlong)(param_1 + -0xd));
      this_00 = (CordRepBtree *)this_00->edges_[1];
      bVar2 = *(byte *)((RefcountAndFlags *)&this_00->_padding_ + 1);
    }
    cVar1 = cord_internal::CordRepBtree::GetCharacter(this_00,param_1);
    return cVar1;
  }
  if (bVar2 == 0) {
    param_1 = (__uint64)((this->contents_).data_.rep_.field0_0x0.data + param_1 + 1);
  }
  return *(char *)param_1;
}

// operator_class_std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> @ 1501bc380

/* public: __cdecl absl::lts_20240722::Cord::operator class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
absl::lts_20240722::Cord::
operator_class_std__basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
          (Cord *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  ulonglong uVar2;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  if (((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
              (__return_storage_ptr__,((this->contents_).data_.rep_.field0_0x0.as_tree.rep)->length,
               '\0');
    pbVar1 = __return_storage_ptr__;
    if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
      pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    CopyToArraySlowPath(this,(char *)pbVar1);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0xf;
  pbVar1 = __return_storage_ptr__;
  if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
  }
  (pbVar1->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(pbVar1->_Mypair)._Myval2._Bx + 8) = 0;
  pbVar1 = __return_storage_ptr__;
  if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
  }
  (pbVar1->_Mypair)._Myval2._Bx._Ptr =
       *(char **)((longlong)&(this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + 1);
  *(undefined4 *)((longlong)&(pbVar1->_Mypair)._Myval2._Bx + 8) =
       *(undefined4 *)((longlong)&(this->contents_).data_.rep_.field0_0x0 + 9);
  *(undefined2 *)((longlong)&(pbVar1->_Mypair)._Myval2._Bx + 0xc) =
       *(undefined2 *)((longlong)&(this->contents_).data_.rep_.field0_0x0 + 0xd);
  (pbVar1->_Mypair)._Myval2._Bx._Buf[0xe] = (this->contents_).data_.rep_.field0_0x0.data[0xf];
  uVar2 = (ulonglong)(longlong)(this->contents_).data_.rep_.field0_0x0.data[0] >> 1;
  if (uVar2 <= (__return_storage_ptr__->_Mypair)._Myval2._Mysize) {
    pbVar1 = __return_storage_ptr__;
    if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
      pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar2;
    (pbVar1->_Mypair)._Myval2._Bx._Buf[uVar2] = '\0';
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  std::_String_val<std::_Simple_types<char>_>::_Xran();
}

// operator_unsigned_int @ 1501bc480

/* public: __cdecl absl::lts_20240722::crc32c_t::operator unsigned int(void)const __ptr64 */

uint __thiscall absl::lts_20240722::crc32c_t::operator_unsigned_int(crc32c_t *this)

{
  return this->crc_;
}

// operator-> @ 1501bc490

/* public: class std::basic_string_view<char,struct std::char_traits<char> > const * __ptr64 __cdecl
   absl::lts_20240722::Cord::ChunkIterator::operator->(void)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::Cord::ChunkIterator::operator->(ChunkIterator *this)

{
  return &this->current_chunk_;
}

// operator* @ 1501bc4a0

/* public: struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc const & __ptr64 __cdecl
   std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >::operator*(void)const __ptr64 */

PrefixCrc * __thiscall
std::
_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
::operator*(_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
            *this)

{
  return this->_Mycont->_Map[this->_Mycont->_Mapsize - 1 & this->_Myoff];
}

// operator* @ 1501bc4c0

/* public: struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc & __ptr64 __cdecl
   std::_Deque_unchecked_iterator<class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >::operator*(void)const __ptr64 */

PrefixCrc * __thiscall
std::
_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
::operator*(_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
            *this)

{
  return *(PrefixCrc **)
          (*(longlong *)(*(longlong *)this + 8) +
          (*(longlong *)(*(longlong *)this + 0x10) - 1U & *(ulonglong *)&this->field_0x8) * 8);
}

// operator* @ 1501bc4e0

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 && __ptr64 __cdecl
   std::move_iterator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64 *
   __ptr64>::operator*(void)const __ptr64 */

CordRep ** __thiscall
std::move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>::operator*
          (move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64> *this)

{
  return *(CordRep ***)this;
}

// operator++ @ 1501bc4f0

/* public: class std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > > &
   __ptr64 __cdecl std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >
   >::operator++(void) __ptr64 */

_Deque_unchecked_const_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
* __thiscall
std::
_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
::operator++(_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
             *this)

{
  this->_Myoff = this->_Myoff + 1;
  return (_Deque_unchecked_const_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
          *)this;
}

// operator++ @ 1501bc500

/* public: class std::_Deque_unchecked_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > > &
   __ptr64 __cdecl std::_Deque_unchecked_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >
   >::operator++(void) __ptr64 */

_Deque_unchecked_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
* __thiscall
std::
_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
::operator++(_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
             *this)

{
  *(longlong *)&this->field_0x8 = *(longlong *)&this->field_0x8 + 1;
  return (_Deque_unchecked_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
          *)this;
}

// operator++ @ 1501bc510

/* public: class std::move_iterator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64 *
   __ptr64> & __ptr64 __cdecl std::move_iterator<struct absl::lts_20240722::cord_internal::CordRep *
   __ptr64 * __ptr64>::operator++(void) __ptr64 */

move_iterator<struct_absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64> * __thiscall
std::move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>::operator++
          (move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64> *this)

{
  *(longlong *)this = *(longlong *)this + 8;
  return (move_iterator<struct_absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64> *)this;
}

// operator- @ 1501bc520

/* public: __int64 __cdecl std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >
   >::operator-(class std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >
   const & __ptr64)const __ptr64 */

__int64 __thiscall
std::
_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
::operator-(_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
            *this,_Deque_unchecked_const_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
                  *param_1)

{
  return this->_Myoff - *(longlong *)(param_1 + 8);
}

// operator- @ 1501bc530

/* public: __int64 __cdecl std::_Deque_unchecked_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >
   >::operator-(class std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >
   const & __ptr64)const __ptr64 */

__int64 __thiscall
std::
_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
::operator-(_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
            *this,_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
                  *param_1)

{
  return *(longlong *)&this->field_0x8 - param_1->_Myoff;
}

// operator() @ 1501bc540

/* public: __cdecl `private: int __cdecl absl::lts_20240722::Cord::CompareSlowPath(class
   absl::lts_20240722::Cord const & __ptr64,unsigned __int64,unsigned __int64)const
   __ptr64'::`2'::<lambda_1>::operator()(class absl::lts_20240722::Cord::ChunkIterator *
   __ptr64,class std::basic_string_view<char,struct std::char_traits<char> > * __ptr64)const __ptr64
    */

undefined8 __thiscall
`private:_int___cdecl_absl::lts_20240722::Cord::CompareSlowPath(absl::lts_20240722::Cord_const&___ptr64,unsigned___int64,unsigned___int64)const___ptr64'
::__l2::<lambda_1>::operator()
          (<lambda_1> *this,ChunkIterator *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  int iVar1;
  ulong64 uVar2;
  basic_string_view<char,std::char_traits<char>_> *pbVar3;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if (param_2->_Mysize == 0) {
    uVar2 = param_1->bytes_remaining_ - (param_1->current_chunk_)._Mysize;
    param_1->bytes_remaining_ = uVar2;
    if (uVar2 != 0) {
      iVar1 = (param_1->btree_reader_).navigator_.height_;
      if ((iVar1 < 0) || ((param_1->btree_reader_).navigator_.node_[iVar1] == (CordRepBtree *)0x0))
      {
        (param_1->current_chunk_)._Mydata = (char *)0x0;
        (param_1->current_chunk_)._Mysize = 0;
      }
      else {
        pbVar3 = absl::lts_20240722::cord_internal::CordRepBtreeReader::Next
                           (&param_1->btree_reader_,&local_18);
        uVar2 = pbVar3->_Mysize;
        (param_1->current_chunk_)._Mydata = pbVar3->_Mydata;
        (param_1->current_chunk_)._Mysize = uVar2;
      }
    }
    if (param_1->bytes_remaining_ == 0) {
      return 0;
    }
    uVar2 = (param_1->current_chunk_)._Mysize;
    param_2->_Mydata = (param_1->current_chunk_)._Mydata;
    param_2->_Mysize = uVar2;
  }
  return 1;
}

// operator() @ 1501bc5d0

/* public: __cdecl `private: int __cdecl absl::lts_20240722::Cord::CompareSlowPath(class
   std::basic_string_view<char,struct std::char_traits<char> >,unsigned __int64,unsigned
   __int64)const __ptr64'::`2'::<lambda_1>::operator()(class absl::lts_20240722::Cord::ChunkIterator
   * __ptr64,class std::basic_string_view<char,struct std::char_traits<char> > * __ptr64)const
   __ptr64 */

undefined8 __thiscall
`private:_int___cdecl_absl::lts_20240722::Cord::CompareSlowPath(std::basic_string_view<char,std::char_traits<char>_>,unsigned___int64,unsigned___int64)const___ptr64'
::__l2::<lambda_1>::operator()
          (<lambda_1> *this,ChunkIterator *param_1,
          basic_string_view<char,struct_std::char_traits<char>_> *param_2)

{
  int iVar1;
  ulong64 uVar2;
  basic_string_view<char,std::char_traits<char>_> *pbVar3;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if (*(longlong *)(param_2 + 8) == 0) {
    uVar2 = param_1->bytes_remaining_ - (param_1->current_chunk_)._Mysize;
    param_1->bytes_remaining_ = uVar2;
    if (uVar2 != 0) {
      iVar1 = (param_1->btree_reader_).navigator_.height_;
      if ((iVar1 < 0) || ((param_1->btree_reader_).navigator_.node_[iVar1] == (CordRepBtree *)0x0))
      {
        (param_1->current_chunk_)._Mydata = (char *)0x0;
        (param_1->current_chunk_)._Mysize = 0;
      }
      else {
        pbVar3 = absl::lts_20240722::cord_internal::CordRepBtreeReader::Next
                           (&param_1->btree_reader_,&local_18);
        uVar2 = pbVar3->_Mysize;
        (param_1->current_chunk_)._Mydata = pbVar3->_Mydata;
        (param_1->current_chunk_)._Mysize = uVar2;
      }
    }
    if (param_1->bytes_remaining_ == 0) {
      return 0;
    }
    uVar2 = (param_1->current_chunk_)._Mysize;
    *(char **)param_2 = (param_1->current_chunk_)._Mydata;
    *(ulong64 *)(param_2 + 8) = uVar2;
  }
  return 1;
}

// FUN_1501bc660 @ 1501bc660

void FUN_1501bc660(undefined8 param_1,longlong *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  uVar3 = param_2[1];
  pvVar1 = (void *)*param_2;
  pvVar2 = pvVar1;
  if (0xfff < uVar3) {
    pvVar2 = *(void **)((longlong)pvVar1 + -8);
    uVar3 = uVar3 + 0x27;
    if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar2,uVar3);
  return;
}

// operator() @ 1501bc6b0

/* public: void __cdecl absl::lts_20240722::FunctionRef<void __cdecl(class
   std::basic_string_view<char,struct std::char_traits<char> >)>::operator()(class
   std::basic_string_view<char,struct std::char_traits<char> >)const __ptr64 */

void __thiscall
absl::lts_20240722::FunctionRef<void___cdecl(std::basic_string_view<char,std::char_traits<char>_>)>
::operator()(FunctionRef<void___cdecl(std::basic_string_view<char,std::char_traits<char>_>)> *this,
            basic_string_view<char,std::char_traits<char>_> *param_1)

{
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata._0_4_ = *(undefined4 *)&param_1->_Mydata;
  local_18._Mydata._4_4_ = *(undefined4 *)((longlong)&param_1->_Mydata + 4);
  local_18._Mysize._0_4_ = (undefined4)param_1->_Mysize;
  local_18._Mysize._4_4_ = *(undefined4 *)((longlong)&param_1->_Mysize + 4);
  (*this->invoker_)(this->ptr_,&local_18);
  return;
}

// FUN_1501bc6f0 @ 1501bc6f0

void * FUN_1501bc6f0(void *param_1,uint param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = *(ulonglong *)((longlong)param_1 + 0x38);
  if (0xf < uVar1) {
    pvVar2 = *(void **)((longlong)param_1 + 0x20);
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar4);
  }
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0xf;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  if ((param_2 & 1) != 0) {
    operator_delete(param_1,0x40);
  }
  return param_1;
}

// FUN_1501bc780 @ 1501bc780

ulonglong * FUN_1501bc780(ulonglong *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  pvVar1 = (void *)param_1[2];
  uVar3 = *param_1;
  pvVar2 = pvVar1;
  if (0xfff < uVar3) {
    pvVar2 = *(void **)((longlong)pvVar1 - 8);
    uVar3 = uVar3 + 0x27;
    if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  operator_delete(pvVar2,uVar3);
  if ((param_2 & 1) != 0) {
    operator_delete(param_1,0x20);
  }
  return param_1;
}

// `scalar_deleting_destructor' @ 1501bc7f0

/* public: void * __ptr64 __cdecl absl::lts_20240722::cord_internal::CordRepCrc::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
absl::lts_20240722::cord_internal::CordRepCrc::_scalar_deleting_destructor_
          (CordRepCrc *this,uint param_1)

{
  crc_internal::CrcCordState::~CrcCordState(&this->crc_cord_state);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1501bc830

/* public: void * __ptr64 __cdecl
   absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep::_scalar_deleting_destructor_
          (RefcountedRep *this,uint param_1)

{
  std::
  deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
  ::
  ~deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
            (&(this->rep).prefix_crc);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// AddSize @ 1501bc870

/* public: void __cdecl absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::AddSize(unsigned __int64) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::AddSize(Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
          *this,__uint64 param_1)

{
  *(__uint64 *)this = *(longlong *)this + param_1 * 2;
  return;
}

// AddSize @ 1501bc880

/* public: void __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::AddSize(unsigned __int64) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::AddSize(Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
          *this,__uint64 param_1)

{
  this->metadata_ =
       (CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>
        )((longlong)this->metadata_ + param_1 * 2);
  return;
}

// AdvanceAndReadBytes @ 1501bc890

/* private: class absl::lts_20240722::Cord __cdecl
   absl::lts_20240722::Cord::ChunkIterator::AdvanceAndReadBytes(unsigned __int64) __ptr64 */

Cord * __thiscall
absl::lts_20240722::Cord::ChunkIterator::AdvanceAndReadBytes
          (ChunkIterator *this,Cord *__return_storage_ptr__,__uint64 param_1)

{
  ulong64 *puVar1;
  RefcountAndFlags *pRVar2;
  atomic<int> aVar3;
  int iVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  basic_string_view<char,std::char_traits<char>_> *pbVar7;
  uchar *puVar8;
  CordRep *pCVar9;
  CordzInfo *this_00;
  void *_Dst;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  CordRep *local_res20;
  basic_string_view<char,std::char_traits<char>_> local_48;
  basic_string_view<char,std::char_traits<char>_> local_38;
  
  (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
  (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  if (param_1 < 0x10) {
    (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
    (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
    (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.data[0] = (char)param_1 * '\x02';
    _Dst = (void *)((longlong)&(__return_storage_ptr__->contents_).data_.rep_.field0_0x0 + 1);
    uVar6 = (this->current_chunk_)._Mysize;
    if (uVar6 < param_1) {
      do {
        memcpy(_Dst,(this->current_chunk_)._Mydata,uVar6);
        uVar5 = (this->current_chunk_)._Mysize;
        _Dst = (void *)((longlong)_Dst + uVar5);
        param_1 = param_1 - uVar5;
        puVar1 = &this->bytes_remaining_;
        *puVar1 = *puVar1 - uVar5;
        if (*puVar1 != 0) {
          iVar4 = (this->btree_reader_).navigator_.height_;
          if ((iVar4 < 0) || ((this->btree_reader_).navigator_.node_[iVar4] == (CordRepBtree *)0x0))
          {
            local_48._Mydata = (char *)0x0;
            local_48._Mysize = 0;
            local_48._Mydata._0_4_ = 0;
            local_48._Mydata._4_4_ = 0;
            local_48._Mysize._0_4_ = 0;
            local_48._Mysize._4_4_ = 0;
            uVar10 = local_48._Mydata._0_4_;
            uVar11 = local_48._Mydata._4_4_;
            uVar12 = (undefined4)local_48._Mysize;
            uVar13 = local_48._Mysize._4_4_;
          }
          else {
            pbVar7 = cord_internal::CordRepBtreeReader::Next(&this->btree_reader_,&local_38);
            uVar10 = *(undefined4 *)&pbVar7->_Mydata;
            uVar11 = *(undefined4 *)((longlong)&pbVar7->_Mydata + 4);
            uVar12 = (int)pbVar7->_Mysize;
            uVar13 = *(undefined4 *)((longlong)&pbVar7->_Mysize + 4);
          }
          *(undefined4 *)&(this->current_chunk_)._Mydata = uVar10;
          *(undefined4 *)((longlong)&(this->current_chunk_)._Mydata + 4) = uVar11;
          *(undefined4 *)&(this->current_chunk_)._Mysize = uVar12;
          *(undefined4 *)((longlong)&(this->current_chunk_)._Mysize + 4) = uVar13;
        }
        uVar6 = (this->current_chunk_)._Mysize;
      } while (uVar6 < param_1);
    }
    memcpy(_Dst,(this->current_chunk_)._Mydata,param_1);
    uVar6 = (this->current_chunk_)._Mysize;
    if (param_1 < uVar6) {
      (this->current_chunk_)._Mydata = (this->current_chunk_)._Mydata + param_1;
      (this->current_chunk_)._Mysize = uVar6 - param_1;
      this->bytes_remaining_ = this->bytes_remaining_ - param_1;
    }
    else if (param_1 != 0) {
      operator++(this);
    }
  }
  else {
    iVar4 = (this->btree_reader_).navigator_.height_;
    if ((iVar4 < 0) || ((this->btree_reader_).navigator_.node_[iVar4] == (CordRepBtree *)0x0)) {
      pCVar9 = this->current_leaf_;
      if (param_1 == pCVar9->length) {
        this->bytes_remaining_ = 0;
        (this->current_chunk_)._Mydata = (char *)0x0;
        (this->current_chunk_)._Mysize = 0;
        LOCK();
        (pCVar9->refcount).count_ = (atomic<int>)((int)(pCVar9->refcount).count_ + 2);
        UNLOCK();
        (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.rep = pCVar9;
        (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 1;
      }
      else {
        if (pCVar9->tag == '\x01') {
          pCVar9 = *(CordRep **)&pCVar9[1].refcount;
        }
        if (pCVar9->tag == '\x05') {
          puVar8 = (uchar *)pCVar9[1].length;
        }
        else {
          puVar8 = pCVar9->storage;
        }
        pCVar9 = cord_internal::CordRepSubstring::Substring
                           (pCVar9,(longlong)(this->current_chunk_)._Mydata - (longlong)puVar8,
                            param_1);
        (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.rep = pCVar9;
        (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 1;
        this->bytes_remaining_ = this->bytes_remaining_ - param_1;
        (this->current_chunk_)._Mydata = (this->current_chunk_)._Mydata + param_1;
        puVar1 = &(this->current_chunk_)._Mysize;
        *puVar1 = *puVar1 - param_1;
      }
    }
    else {
      uVar6 = (this->current_chunk_)._Mysize;
      if ((uVar6 < param_1) || (0x1ff < param_1)) {
        pbVar7 = cord_internal::CordRepBtreeReader::Read
                           (&this->btree_reader_,&local_38,param_1,uVar6,&local_res20);
        uVar5 = pbVar7->_Mysize;
        (this->current_chunk_)._Mydata = pbVar7->_Mydata;
        (this->current_chunk_)._Mysize = uVar5;
        (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.rep = local_res20;
        (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 1;
        this->bytes_remaining_ = this->bytes_remaining_ - param_1;
      }
      else {
        local_48._Mysize = FUN_1501c1c80((this->current_chunk_)._Mydata,param_1,0);
        local_48._Mydata = &DAT_00000001;
        if (((__return_storage_ptr__->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) {
          this_00 = (CordzInfo *)
                    ((__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.cordz_info +
                    -1);
          if (this_00 != (CordzInfo *)0x0) {
            cord_internal::CordzInfo::Untrack(this_00);
          }
          if (((__return_storage_ptr__->contents_).data_.rep_.field0_0x0.data[0] & 1U) == 0) {
            pCVar9 = (CordRep *)0x0;
          }
          else {
            pCVar9 = (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.rep;
          }
          LOCK();
          pRVar2 = &pCVar9->refcount;
          aVar3 = pRVar2->count_;
          pRVar2->count_ = (atomic<int>)((int)pRVar2->count_ + -2);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x2) {
            cord_internal::CordRep::Destroy(pCVar9);
          }
        }
        (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.cordz_info =
             (long64)local_48._Mydata;
        (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.rep =
             (CordRep *)local_48._Mysize;
        if (param_1 < uVar6) {
          (this->current_chunk_)._Mydata = (this->current_chunk_)._Mydata + param_1;
          puVar1 = &(this->current_chunk_)._Mysize;
          *puVar1 = *puVar1 - param_1;
          this->bytes_remaining_ = this->bytes_remaining_ - param_1;
        }
        else {
          pbVar7 = cord_internal::CordRepBtreeReader::Next(&this->btree_reader_,&local_48);
          uVar5 = pbVar7->_Mysize;
          (this->current_chunk_)._Mydata = pbVar7->_Mydata;
          (this->current_chunk_)._Mysize = uVar5;
          this->bytes_remaining_ = this->bytes_remaining_ - param_1;
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// Allocate @ 1501bcb20

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::Allocate(unsigned __int64) __ptr64 */

CordRep ** __thiscall
absl::lts_20240722::inlined_vector_internal::
AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>::
Allocate(AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
         *this,__uint64 param_1)

{
  CordRep **ppCVar1;
  
  if (param_1 < 0x2000000000000000) {
    ppCVar1 = std::_Allocate<16,std::_Default_allocate_traits,0>(param_1 * 8);
    *(__uint64 *)(this + 8) = param_1;
    *(CordRep ***)this = ppCVar1;
    return ppCVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_bad_array_new_length();
}

// Allocate @ 1501bcb70

/* public: static struct absl::lts_20240722::inlined_vector_internal::Allocation<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> > __cdecl
   absl::lts_20240722::inlined_vector_internal::MallocAdapter<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64>,0>::Allocate(class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> & __ptr64,unsigned __int64) */

allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> * __cdecl
absl::lts_20240722::inlined_vector_internal::
MallocAdapter<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,0>::Allocate
          (allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_1,__uint64 param_2)

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

// Allocate @ 1501bcbc0

/* public: static struct absl::lts_20240722::inlined_vector_internal::Allocation<class
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl> > __cdecl
   absl::lts_20240722::inlined_vector_internal::MallocAdapter<class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl>,0>::Allocate(class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> & __ptr64,unsigned __int64) */

Allocation<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_> * __cdecl
absl::lts_20240722::inlined_vector_internal::
MallocAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,0>::Allocate
          (Allocation<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
           *__return_storage_ptr__,
          allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *param_1,
          __uint64 param_2)

{
  FormatArgImpl *pFVar1;
  
  if (param_2 < 0x1000000000000000) {
    pFVar1 = std::_Allocate<16,std::_Default_allocate_traits,0>(param_2 << 4);
    __return_storage_ptr__->data = pFVar1;
    __return_storage_ptr__->capacity = param_2;
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  std::_Throw_bad_array_new_length();
}

// Append @ 1501bcc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* public: void __cdecl absl::lts_20240722::Cord::Append(class absl::lts_20240722::Cord && __ptr64)
   __ptr64 */

void __thiscall absl::lts_20240722::Cord::Append(Cord *this,Cord *param_1)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulong64 uVar5;
  ulonglong uVar6;
  CordRep *pCVar7;
  basic_string_view<char,std::char_traits<char>_> *pbVar8;
  CordzInfo *pCVar9;
  byte bVar10;
  int iVar11;
  CordRep **ppCVar12;
  ulong64 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_158 [32];
  basic_string_view<char,std::char_traits<char>_> bStack_138;
  Rep_u_0 RStack_128;
  basic_string_view<char,std::char_traits<char>_> bStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  basic_string_view<char,std::char_traits<char>_> bStack_f8;
  ChunkIterator CStack_e8;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (((((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) &&
      (pCVar7 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar7 != (CordRep *)0x0)) &&
     (pCVar7->length == 0)) {
    pCVar9 = (CordzInfo *)((this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + -1);
    if (pCVar9 != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Untrack(pCVar9);
    }
    LOCK();
    pRVar1 = &pCVar7->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      cord_internal::CordRep::Destroy(pCVar7);
    }
    uStack_108 = 0;
    uStack_100 = 0;
    (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
    (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  }
  uVar15 = bStack_138._Mysize._4_4_;
  uVar14 = (undefined4)bStack_138._Mysize;
  ppCVar12 = &(this->contents_).data_.rep_.field0_0x0.as_tree.rep;
  bVar3 = (param_1->contents_).data_.rep_.field0_0x0.data[0];
  bVar10 = bVar3 & 1;
  if (bVar10 == 0) {
    uVar6 = (ulonglong)(longlong)(char)bVar3 >> 1;
  }
  else {
    uVar6 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar6 != 0) {
    uVar6 = (ulonglong)(this->contents_).data_.rep_.field0_0x0.data[0];
    if ((uVar6 & 1) == 0) {
      uVar13 = uVar6 >> 1;
    }
    else {
      uVar13 = (*ppCVar12)->length;
    }
    if (uVar13 == 0) {
      if (bVar10 == 0) {
        pCVar7 = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
        (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info =
             (param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
        (this->contents_).data_.rep_.field0_0x0.as_tree.rep = pCVar7;
      }
      else {
        pCVar7 = TakeRep(param_1);
        pCVar7 = cord_internal::RemoveCrcNode(pCVar7);
        *ppCVar12 = pCVar7;
        (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 1;
      }
    }
    else {
      if (bVar10 == 0) {
        bStack_118._Mysize = (ulonglong)(longlong)(char)bVar3 >> 1;
      }
      else {
        bStack_118._Mysize = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
      }
      if (bStack_118._Mysize < 0x200) {
        bStack_138._Mysize._0_4_ = (undefined4)bStack_118._Mysize;
        bStack_138._Mysize._4_4_ = (undefined4)(bStack_118._Mysize >> 0x20);
        if (bVar10 == 0) {
          bStack_118._Mydata = (char *)((longlong)&(param_1->contents_).data_.rep_.field0_0x0 + 1);
        }
        else {
          RStack_128.as_tree.rep = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
          if (RStack_128.as_tree.rep != (CordRep *)0x0) {
            if (5 < (RStack_128.as_tree.rep)->tag) {
              bStack_138._Mydata = (char *)(RStack_128.as_tree.rep)->storage;
              InlineRep::AppendArray(&this->contents_,&bStack_138,kAppendCord);
              return;
            }
            if (param_1 != this) {
              CStack_e8.current_chunk_._Mydata = (char *)0x0;
              CStack_e8.current_chunk_._Mysize = 0;
              CStack_e8.current_leaf_ = (CordRep *)0x0;
              CStack_e8.btree_reader_.remaining_ = 0;
              CStack_e8.btree_reader_.navigator_.height_ = -1;
              CStack_e8.bytes_remaining_ = (RStack_128.as_tree.rep)->length;
              if (CStack_e8.bytes_remaining_ == 0) {
                bStack_138._Mydata._0_4_ = 0;
                bStack_138._Mydata._4_4_ = 0;
                bStack_138._Mysize._0_4_ = 0;
                bStack_138._Mysize._4_4_ = 0;
                uVar14 = 0;
                uVar15 = 0;
                uVar16 = 0;
                uVar17 = 0;
                CStack_e8.current_chunk_._Mydata = (char *)0x0;
                CStack_e8.current_chunk_._Mysize = 0;
              }
              else {
                bStack_138._Mysize._0_4_ = uVar14;
                bStack_138._Mysize._4_4_ = uVar15;
                ChunkIterator::InitTree(&CStack_e8,RStack_128.as_tree.rep);
                uVar14 = CStack_e8.current_chunk_._Mydata._0_4_;
                uVar15 = CStack_e8.current_chunk_._Mydata._4_4_;
                uVar16 = (undefined4)CStack_e8.current_chunk_._Mysize;
                uVar17 = CStack_e8.current_chunk_._Mysize._4_4_;
              }
              if (CStack_e8.bytes_remaining_ == 0) {
                return;
              }
              auVar4._4_4_ = uVar15;
              auVar4._0_4_ = uVar14;
              auVar4._8_4_ = uVar16;
              auVar4._12_4_ = uVar17;
              uVar13 = auVar4._8_8_;
              iVar11 = CStack_e8.btree_reader_.navigator_.height_;
              do {
                uVar5 = CStack_e8.bytes_remaining_;
                bStack_118._Mydata = (char *)CONCAT44(uVar15,uVar14);
                bStack_118._Mysize = CONCAT44(uVar17,uVar16);
                InlineRep::AppendArray(&this->contents_,&bStack_118,kAppendString);
                CStack_e8.bytes_remaining_ = uVar5 - uVar13;
                if (CStack_e8.bytes_remaining_ != 0) {
                  if ((iVar11 < 0) ||
                     (CStack_e8.btree_reader_.navigator_.node_[iVar11] == (CordRepBtree *)0x0)) {
                    bStack_138._Mydata._0_4_ = 0;
                    bStack_138._Mydata._4_4_ = 0;
                    bStack_138._Mysize._0_4_ = 0;
                    bStack_138._Mysize._4_4_ = 0;
                    uVar14 = 0;
                    uVar15 = 0;
                    uVar16 = 0;
                    uVar13 = 0;
                    uVar17 = bStack_138._Mysize._4_4_;
                  }
                  else {
                    pbVar8 = cord_internal::CordRepBtreeReader::Next
                                       (&CStack_e8.btree_reader_,&bStack_f8);
                    uVar14 = *(undefined4 *)&pbVar8->_Mydata;
                    uVar15 = *(undefined4 *)((longlong)&pbVar8->_Mydata + 4);
                    uVar16 = (undefined4)pbVar8->_Mysize;
                    uVar13 = pbVar8->_Mysize;
                    uVar17 = *(undefined4 *)((longlong)&pbVar8->_Mysize + 4);
                    iVar11 = CStack_e8.btree_reader_.navigator_.height_;
                  }
                  CStack_e8.current_chunk_._Mydata = (char *)CONCAT44(uVar15,uVar14);
                  CStack_e8.current_chunk_._Mysize = CONCAT44(uVar17,uVar16);
                }
              } while (CStack_e8.bytes_remaining_ != 0);
              return;
            }
            LOCK();
            ((RStack_128.as_tree.rep)->refcount).count_ =
                 (atomic<int>)((int)((RStack_128.as_tree.rep)->refcount).count_ + 2);
            UNLOCK();
            RStack_128.as_tree.cordz_info = 1;
            if (((param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info | 1U) != 1) {
              cord_internal::CordzInfo::MaybeTrackCordImpl
                        ((InlineData *)&RStack_128.as_tree,(InlineData *)param_1,kConstructorCord);
            }
            AppendImpl<absl::lts_20240722::Cord>(this,(Cord *)&RStack_128.as_tree);
            if ((RStack_128.as_tree.cordz_info & 1U) == 0) {
              return;
            }
            if ((CordzInfo *)(RStack_128.as_tree.cordz_info - 1U) != (CordzInfo *)0x0) {
              cord_internal::CordzInfo::Untrack((CordzInfo *)(RStack_128.as_tree.cordz_info - 1U));
            }
            LOCK();
            pRVar1 = &(RStack_128.as_tree.rep)->refcount;
            aVar2 = pRVar1->count_;
            pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
            UNLOCK();
            if (aVar2 != (atomic<int>)0x2) {
              return;
            }
            cord_internal::CordRep::Destroy(RStack_128.as_tree.rep);
            return;
          }
          bStack_118._Mydata = (char *)0x0;
        }
        bStack_138._Mydata._0_4_ = SUB84(bStack_118._Mydata,0);
        bStack_138._Mydata._4_4_ = (undefined4)((ulonglong)bStack_118._Mydata >> 0x20);
        InlineRep::AppendArray(&this->contents_,&bStack_118,kAppendCord);
      }
      else {
        if (bVar10 == 0) {
          pCVar7 = (CordRep *)0x0;
        }
        else {
          pCVar7 = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
          pCVar9 = (CordzInfo *)((param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + -1)
          ;
          if (pCVar9 != (CordzInfo *)0x0) {
            cord_internal::CordzInfo::Untrack(pCVar9);
          }
        }
        (param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
        (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
        pCVar7 = cord_internal::RemoveCrcNode(pCVar7);
        InlineRep::AppendTree(&this->contents_,pCVar7,kAppendCord);
      }
    }
  }
  return;
}

// Append @ 1501bcc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* public: void __cdecl absl::lts_20240722::Cord::Append(class absl::lts_20240722::Cord const &
   __ptr64) __ptr64 */

void __thiscall absl::lts_20240722::Cord::Append(Cord *this,Cord *param_1)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulong64 uVar5;
  ulonglong uVar6;
  CordRep *pCVar7;
  basic_string_view<char,std::char_traits<char>_> *pbVar8;
  CordzInfo *this_00;
  byte bVar9;
  int iVar10;
  CordRep **ppCVar11;
  ulong64 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_158 [32];
  basic_string_view<char,std::char_traits<char>_> bStack_138;
  Rep_u_0 RStack_128;
  basic_string_view<char,std::char_traits<char>_> bStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  basic_string_view<char,std::char_traits<char>_> bStack_f8;
  ChunkIterator CStack_e8;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (((((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) &&
      (pCVar7 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar7 != (CordRep *)0x0)) &&
     (pCVar7->length == 0)) {
    this_00 = (CordzInfo *)((this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + -1);
    if (this_00 != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Untrack(this_00);
    }
    LOCK();
    pRVar1 = &pCVar7->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      cord_internal::CordRep::Destroy(pCVar7);
    }
    uStack_108 = 0;
    uStack_100 = 0;
    (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
    (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  }
  uVar14 = bStack_138._Mysize._4_4_;
  uVar13 = (undefined4)bStack_138._Mysize;
  ppCVar11 = &(this->contents_).data_.rep_.field0_0x0.as_tree.rep;
  bVar3 = (param_1->contents_).data_.rep_.field0_0x0.data[0];
  bVar9 = bVar3 & 1;
  if (bVar9 == 0) {
    uVar6 = (ulonglong)(longlong)(char)bVar3 >> 1;
  }
  else {
    uVar6 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar6 != 0) {
    uVar6 = (ulonglong)(this->contents_).data_.rep_.field0_0x0.data[0];
    if ((uVar6 & 1) == 0) {
      uVar12 = uVar6 >> 1;
    }
    else {
      uVar12 = (*ppCVar11)->length;
    }
    if (uVar12 == 0) {
      if (bVar9 == 0) {
        pCVar7 = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
        (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info =
             (param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
        (this->contents_).data_.rep_.field0_0x0.as_tree.rep = pCVar7;
      }
      else {
        pCVar7 = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
        LOCK();
        pRVar1 = &pCVar7->refcount;
        pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + 2);
        UNLOCK();
        pCVar7 = cord_internal::RemoveCrcNode(pCVar7);
        *ppCVar11 = pCVar7;
        (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 1;
      }
    }
    else {
      if (bVar9 == 0) {
        bStack_118._Mysize = (ulonglong)(longlong)(char)bVar3 >> 1;
      }
      else {
        bStack_118._Mysize = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
      }
      if (bStack_118._Mysize < 0x200) {
        bStack_138._Mysize._0_4_ = (undefined4)bStack_118._Mysize;
        bStack_138._Mysize._4_4_ = (undefined4)(bStack_118._Mysize >> 0x20);
        if (bVar9 == 0) {
          bStack_118._Mydata = (char *)((longlong)&(param_1->contents_).data_.rep_.field0_0x0 + 1);
        }
        else {
          RStack_128.as_tree.rep = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
          if (RStack_128.as_tree.rep != (CordRep *)0x0) {
            if (5 < (RStack_128.as_tree.rep)->tag) {
              bStack_138._Mydata = (char *)(RStack_128.as_tree.rep)->storage;
              InlineRep::AppendArray(&this->contents_,&bStack_138,kAppendCord);
              return;
            }
            if (param_1 != this) {
              CStack_e8.current_chunk_._Mydata = (char *)0x0;
              CStack_e8.current_chunk_._Mysize = 0;
              CStack_e8.current_leaf_ = (CordRep *)0x0;
              CStack_e8.btree_reader_.remaining_ = 0;
              CStack_e8.btree_reader_.navigator_.height_ = -1;
              CStack_e8.bytes_remaining_ = (RStack_128.as_tree.rep)->length;
              if (CStack_e8.bytes_remaining_ == 0) {
                bStack_138._Mydata._0_4_ = 0;
                bStack_138._Mydata._4_4_ = 0;
                bStack_138._Mysize._0_4_ = 0;
                bStack_138._Mysize._4_4_ = 0;
                uVar13 = 0;
                uVar14 = 0;
                uVar15 = 0;
                uVar16 = 0;
                CStack_e8.current_chunk_._Mydata = (char *)0x0;
                CStack_e8.current_chunk_._Mysize = 0;
              }
              else {
                bStack_138._Mysize._0_4_ = uVar13;
                bStack_138._Mysize._4_4_ = uVar14;
                ChunkIterator::InitTree(&CStack_e8,RStack_128.as_tree.rep);
                uVar13 = CStack_e8.current_chunk_._Mydata._0_4_;
                uVar14 = CStack_e8.current_chunk_._Mydata._4_4_;
                uVar15 = (undefined4)CStack_e8.current_chunk_._Mysize;
                uVar16 = CStack_e8.current_chunk_._Mysize._4_4_;
              }
              if (CStack_e8.bytes_remaining_ == 0) {
                return;
              }
              auVar4._4_4_ = uVar14;
              auVar4._0_4_ = uVar13;
              auVar4._8_4_ = uVar15;
              auVar4._12_4_ = uVar16;
              uVar12 = auVar4._8_8_;
              iVar10 = CStack_e8.btree_reader_.navigator_.height_;
              do {
                uVar5 = CStack_e8.bytes_remaining_;
                bStack_118._Mydata = (char *)CONCAT44(uVar14,uVar13);
                bStack_118._Mysize = CONCAT44(uVar16,uVar15);
                InlineRep::AppendArray(&this->contents_,&bStack_118,kAppendString);
                CStack_e8.bytes_remaining_ = uVar5 - uVar12;
                if (CStack_e8.bytes_remaining_ != 0) {
                  if ((iVar10 < 0) ||
                     (CStack_e8.btree_reader_.navigator_.node_[iVar10] == (CordRepBtree *)0x0)) {
                    bStack_138._Mydata._0_4_ = 0;
                    bStack_138._Mydata._4_4_ = 0;
                    bStack_138._Mysize._0_4_ = 0;
                    bStack_138._Mysize._4_4_ = 0;
                    uVar13 = 0;
                    uVar14 = 0;
                    uVar15 = 0;
                    uVar12 = 0;
                    uVar16 = bStack_138._Mysize._4_4_;
                  }
                  else {
                    pbVar8 = cord_internal::CordRepBtreeReader::Next
                                       (&CStack_e8.btree_reader_,&bStack_f8);
                    uVar13 = *(undefined4 *)&pbVar8->_Mydata;
                    uVar14 = *(undefined4 *)((longlong)&pbVar8->_Mydata + 4);
                    uVar15 = (undefined4)pbVar8->_Mysize;
                    uVar12 = pbVar8->_Mysize;
                    uVar16 = *(undefined4 *)((longlong)&pbVar8->_Mysize + 4);
                    iVar10 = CStack_e8.btree_reader_.navigator_.height_;
                  }
                  CStack_e8.current_chunk_._Mydata = (char *)CONCAT44(uVar14,uVar13);
                  CStack_e8.current_chunk_._Mysize = CONCAT44(uVar16,uVar15);
                }
              } while (CStack_e8.bytes_remaining_ != 0);
              return;
            }
            LOCK();
            ((RStack_128.as_tree.rep)->refcount).count_ =
                 (atomic<int>)((int)((RStack_128.as_tree.rep)->refcount).count_ + 2);
            UNLOCK();
            RStack_128.as_tree.cordz_info = 1;
            if (((param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info | 1U) != 1) {
              cord_internal::CordzInfo::MaybeTrackCordImpl
                        ((InlineData *)&RStack_128.as_tree,(InlineData *)param_1,kConstructorCord);
            }
            AppendImpl<absl::lts_20240722::Cord>(this,(Cord *)&RStack_128.as_tree);
            if ((RStack_128.as_tree.cordz_info & 1U) == 0) {
              return;
            }
            if ((CordzInfo *)(RStack_128.as_tree.cordz_info - 1U) != (CordzInfo *)0x0) {
              cord_internal::CordzInfo::Untrack((CordzInfo *)(RStack_128.as_tree.cordz_info - 1U));
            }
            LOCK();
            pRVar1 = &(RStack_128.as_tree.rep)->refcount;
            aVar2 = pRVar1->count_;
            pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
            UNLOCK();
            if (aVar2 != (atomic<int>)0x2) {
              return;
            }
            cord_internal::CordRep::Destroy(RStack_128.as_tree.rep);
            return;
          }
          bStack_118._Mydata = (char *)0x0;
        }
        bStack_138._Mydata._0_4_ = SUB84(bStack_118._Mydata,0);
        bStack_138._Mydata._4_4_ = (undefined4)((ulonglong)bStack_118._Mydata >> 0x20);
        InlineRep::AppendArray(&this->contents_,&bStack_118,kAppendCord);
      }
      else {
        if (bVar9 == 0) {
          pCVar7 = (CordRep *)0x0;
        }
        else {
          pCVar7 = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
        }
        LOCK();
        (pCVar7->refcount).count_ = (atomic<int>)((int)(pCVar7->refcount).count_ + 2);
        UNLOCK();
        pCVar7 = cord_internal::RemoveCrcNode(pCVar7);
        InlineRep::AppendTree(&this->contents_,pCVar7,kAppendCord);
      }
    }
  }
  return;
}

// Append @ 1501bcc30

/* public: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::Append(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::Append(CordRepBtree *param_1,CordRep *param_2)

{
  CordRep *pCVar1;
  CordRepBtree *pCVar2;
  CordRepBtree *pCStackX_8;
  CordRepBtree **appCStackX_10 [3];
  undefined8 **ppuStack_18;
  code *pcStack_10;
  
  if (param_2->tag < 5) {
    pCVar1 = param_2;
    if (param_2->tag == 1) {
      pCVar1 = *(CordRep **)&param_2[1].refcount;
    }
    if (pCVar1->tag < 5) {
      pCStackX_8 = param_1;
      if (param_2->tag != '\x03') {
        appCStackX_10[0] = &pCStackX_8;
        ppuStack_18 = appCStackX_10;
        pcStack_10 = FUN_1501cafa0;
        Consume(param_2,&ppuStack_18);
        return pCStackX_8;
      }
      if (param_2->storage[0] <= *(byte *)((longlong)&param_1->_padding_ + 5)) {
        pCVar2 = Merge<1>(param_1,(CordRepBtree *)param_2);
        return pCVar2;
      }
      pCVar2 = Merge<0>((CordRepBtree *)param_2,param_1);
      return pCVar2;
    }
  }
  pCVar2 = AddCordRep<1>(param_1,param_2);
  return pCVar2;
}

// AppendArray @ 1501bcc60

/* public: void __cdecl absl::lts_20240722::Cord::InlineRep::AppendArray(class
   std::basic_string_view<char,struct std::char_traits<char> >,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::InlineRep::AppendArray
          (InlineRep *this,basic_string_view<char,std::char_traits<char>_> *param_1,
          MethodIdentifier param_2)

{
  char cVar1;
  CordRepBtree *pCVar2;
  __uint64 _Var3;
  CordRep *pCVar4;
  ulonglong uVar5;
  CordzInfo *this_00;
  CordzInfo *pCVar6;
  ulonglong uVar7;
  char *_Src;
  size_t local_res10 [2];
  CordzInfo *local_res20;
  basic_string_view<char,std::char_traits<char>_> local_48;
  
  uVar7 = param_1->_Mysize;
  if (uVar7 == 0) {
    return;
  }
  MaybeRemoveEmptyCrcNode(this);
  this_00 = (CordzInfo *)0x0;
  local_res10[0] = 0;
  pCVar6 = this_00;
  if ((((this->data_).rep_.field0_0x0.data[0] & 1U) == 0) ||
     (pCVar6 = (CordzInfo *)(this->data_).rep_.field0_0x0.as_tree.rep, pCVar6 == (CordzInfo *)0x0))
  {
    local_res20 = (CordzInfo *)0x0;
  }
  else {
    this_00 = (CordzInfo *)((this->data_).rep_.field0_0x0.as_tree.cordz_info + -1);
    local_res20 = this_00;
    if (this_00 != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Lock(this_00,param_2);
    }
  }
  if (pCVar6 == (CordzInfo *)0x0) {
    uVar5 = (ulonglong)(longlong)(this->data_).rep_.field0_0x0.data[0] >> 1;
    _Src = param_1->_Mydata;
    if (uVar7 <= 0xf - uVar5) {
      (this->data_).rep_.field0_0x0.data[0] = (char)(uVar7 + uVar5) * '\x02';
      memcpy((void *)((longlong)&(this->data_).rep_.field0_0x0 + uVar5 + 1),_Src,uVar7);
      goto LAB_1501bce3c;
    }
    pCVar2 = (CordRepBtree *)cord_internal::CordRepFlat::New(uVar7 + uVar5);
    _Var3 = cord_internal::CordRepFlat::Capacity((CordRepFlat *)pCVar2);
    local_res10[0] = uVar7;
    if (_Var3 - uVar5 < uVar7) {
      local_res10[0] = _Var3 - uVar5;
    }
    memcpy((uchar *)((longlong)((RefcountAndFlags *)&pCVar2->_padding_ + 1) + 1),
           (void *)((longlong)&(this->data_).rep_.field0_0x0 + 1),uVar5);
    memcpy((void *)((longlong)pCVar2->edges_ + (uVar5 - 3)),_Src,local_res10[0]);
    pCVar2->_padding_ = local_res10[0] + uVar5;
  }
  else {
    pCVar2 = (CordRepBtree *)cord_internal::RemoveCrcNode((CordRep *)pCVar6);
    _Src = param_1->_Mydata;
    cVar1 = FUN_1501c1d90(pCVar2,&local_48,local_res10,uVar7);
    if (cVar1 != '\0') {
      memcpy(local_48._Mydata,_Src,local_res10[0]);
    }
  }
  param_1->_Mydata = _Src + local_res10[0];
  uVar7 = uVar7 - local_res10[0];
  param_1->_Mysize = uVar7;
  if (uVar7 == 0) {
    (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)pCVar2;
    if (pCVar6 != (CordzInfo *)0x0) {
      if (this_00 != (CordzInfo *)0x0) {
        this_00->rep_ = (CordRep *)pCVar2;
      }
      goto LAB_1501bce3c;
    }
  }
  else {
    if (*(uchar *)((RefcountAndFlags *)&pCVar2->_padding_ + 1) != '\x03') {
      pCVar4 = cord_internal::RemoveCrcNode((CordRep *)pCVar2);
      pCVar2 = cord_internal::CordRepBtree::Create(pCVar4);
    }
    uVar5 = (ulonglong)pCVar2->_padding_ / 10;
    if (uVar5 < uVar7) {
      uVar5 = uVar7;
    }
    local_48._Mydata = param_1->_Mydata;
    local_48._Mysize = param_1->_Mysize;
    pCVar2 = cord_internal::CordRepBtree::Append(pCVar2,&local_48,uVar5 - uVar7);
    (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)pCVar2;
    if (pCVar6 != (CordzInfo *)0x0) {
      if (this_00 != (CordzInfo *)0x0) {
        this_00->rep_ = (CordRep *)pCVar2;
      }
      goto LAB_1501bce3c;
    }
  }
  (this->data_).rep_.field0_0x0.as_tree.cordz_info = 1;
LAB_1501bce3c:
  if (this_00 != (CordzInfo *)0x0) {
    cord_internal::CordzInfo::Unlock(this_00);
  }
  return;
}

// AppendCordToString @ 1501bce70

/* void __cdecl absl::lts_20240722::AppendCordToString(class absl::lts_20240722::Cord const &
   __ptr64,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64) */

void __cdecl
absl::lts_20240722::AppendCordToString
          (Cord *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)(param_1->contents_).data_.rep_.field0_0x0.data[0];
  uVar7 = (param_2->_Mypair)._Myval2._Mysize;
  if ((uVar4 & 1) == 0) {
    uVar6 = uVar4 >> 1;
  }
  else {
    uVar6 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  uVar4 = uVar6 + uVar7;
  if (uVar7 < uVar4) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append(param_2,uVar6,'\0')
    ;
  }
  else {
    pbVar5 = param_2;
    if (0xf < (param_2->_Mypair)._Myval2._Myres) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    (param_2->_Mypair)._Myval2._Mysize = uVar4;
    (pbVar5->_Mypair)._Myval2._Bx._Buf[uVar4] = '\0';
  }
  if (0xf < (param_2->_Mypair)._Myval2._Myres) {
    param_2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_2->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar4 = (ulonglong)(param_1->contents_).data_.rep_.field0_0x0.data[0];
  pcVar1 = (param_2->_Mypair)._Myval2._Bx._Buf + uVar7;
  if ((uVar4 & 1) == 0) {
    if (uVar4 >> 1 != 0) {
      uVar7 = uVar4 >> 1;
      if (7 < uVar7) {
        uVar3 = *(undefined8 *)((longlong)param_1 + (uVar7 - 7));
        *(undefined8 *)pcVar1 =
             *(undefined8 *)
              ((longlong)&(param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + 1);
        *(undefined8 *)(pcVar1 + (uVar7 - 8)) = uVar3;
        return;
      }
      if (3 < uVar7) {
        uVar2 = *(undefined4 *)((longlong)param_1 + (uVar7 - 3));
        *(undefined4 *)pcVar1 =
             *(undefined4 *)((longlong)&(param_1->contents_).data_.rep_.field0_0x0 + 1);
        *(undefined4 *)(pcVar1 + (uVar7 - 4)) = uVar2;
        return;
      }
      *pcVar1 = (param_1->contents_).data_.rep_.field0_0x0.data[1];
      pcVar1[uVar4 >> 2] = (param_1->contents_).data_.rep_.field0_0x0.data[(uVar4 >> 2) + 1];
      pcVar1[uVar7 - 1] = (param_1->contents_).data_.rep_.field0_0x0.data[uVar7];
      return;
    }
  }
  else {
    Cord::CopyToArraySlowPath(param_1,pcVar1);
  }
  return;
}

// AppendPrecise @ 1501bcfa0

/* private: void __cdecl absl::lts_20240722::Cord::AppendPrecise(class
   std::basic_string_view<char,struct std::char_traits<char> >,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::AppendPrecise
          (Cord *this,basic_string_view<char,std::char_traits<char>_> *param_1,
          MethodIdentifier param_2)

{
  ulonglong _Size;
  char *_Src;
  ulonglong uVar1;
  CordRep *pCVar2;
  ulonglong uVar3;
  
  uVar1 = (ulonglong)(this->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar1 & 1) == 0) {
    uVar3 = 0xf - (uVar1 >> 1);
  }
  else {
    uVar3 = 0;
  }
  _Size = param_1->_Mysize;
  if (_Size <= uVar3) {
    _Src = param_1->_Mydata;
    (this->contents_).data_.rep_.field0_0x0.data[0] =
         (char)_Size * '\x02' + (char)(uVar1 >> 1) * '\x02';
    memcpy((void *)((longlong)&(this->contents_).data_.rep_.field0_0x0 + (uVar1 >> 1) + 1),_Src,
           _Size);
    return;
  }
  pCVar2 = (CordRep *)cord_internal::CordRepFlat::New(_Size);
  memcpy(pCVar2->storage,param_1->_Mydata,_Size);
  pCVar2->length = _Size;
  InlineRep::AppendTree(&this->contents_,pCVar2,param_2);
  return;
}

// AppendTree @ 1501bd070

/* public: void __cdecl absl::lts_20240722::Cord::InlineRep::AppendTree(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::InlineRep::AppendTree
          (InlineRep *this,CordRep *param_1,MethodIdentifier param_2)

{
  char cVar1;
  longlong lVar2;
  CordRep *pCVar3;
  CordRepBtree *pCVar4;
  CordzInfo *this_00;
  ulonglong uVar5;
  
  cVar1 = (this->data_).rep_.field0_0x0.data[0];
  if (((longlong)cVar1 & 1U) == 0) {
    if (cVar1 != '\0') {
      uVar5 = (ulonglong)(longlong)cVar1 >> 1;
      pCVar3 = (CordRep *)cord_internal::CordRepFlat::New(uVar5);
      pCVar3->length = uVar5;
      *(undefined8 *)pCVar3->storage =
           *(undefined8 *)((longlong)&(this->data_).rep_.field0_0x0.as_tree.cordz_info + 1);
      *(undefined4 *)((longlong)&pCVar3[1].length + 5) =
           *(undefined4 *)((longlong)&(this->data_).rep_.field0_0x0 + 9);
      *(undefined2 *)&pCVar3[1].refcount.count_.field_0x1 =
           *(undefined2 *)((longlong)&(this->data_).rep_.field0_0x0 + 0xd);
      pCVar3[1].refcount.count_.field_0x3 = (this->data_).rep_.field0_0x0.data[0xf];
      pCVar4 = cord_internal::CordRepBtree::Create(pCVar3);
      if (param_1->tag < 5) {
        pCVar3 = param_1;
        if (param_1->tag == 1) {
          pCVar3 = *(CordRep **)&param_1[1].refcount;
        }
        if (pCVar3->tag < 5) {
          param_1 = (CordRep *)cord_internal::CordRepBtree::AppendSlow(pCVar4,param_1);
          goto LAB_1501bd195;
        }
      }
      param_1 = (CordRep *)cord_internal::CordRepBtree::AddCordRep<1>(pCVar4,param_1);
    }
LAB_1501bd195:
    (this->data_).rep_.field0_0x0.as_tree.rep = param_1;
    (this->data_).rep_.field0_0x0.as_tree.cordz_info = 1;
    return;
  }
  lVar2 = (this->data_).rep_.field0_0x0.as_tree.cordz_info;
  this_00 = (CordzInfo *)(lVar2 + -1);
  if (this_00 != (CordzInfo *)0x0) {
    cord_internal::CordzInfo::Lock(this_00,param_2);
  }
  pCVar4 = (CordRepBtree *)(this->data_).rep_.field0_0x0.as_tree.rep;
  if (*(uchar *)((RefcountAndFlags *)&pCVar4->_padding_ + 1) != '\x03') {
    pCVar3 = cord_internal::RemoveCrcNode((CordRep *)pCVar4);
    pCVar4 = cord_internal::CordRepBtree::Create(pCVar3);
  }
  if (param_1->tag < 5) {
    pCVar3 = param_1;
    if (param_1->tag == 1) {
      pCVar3 = *(CordRep **)&param_1[1].refcount;
    }
    if (pCVar3->tag < 5) {
      pCVar4 = cord_internal::CordRepBtree::AppendSlow(pCVar4,param_1);
      goto LAB_1501bd0f8;
    }
  }
  pCVar4 = cord_internal::CordRepBtree::AddCordRep<1>(pCVar4,param_1);
LAB_1501bd0f8:
  (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)pCVar4;
  if (this_00 != (CordzInfo *)0x0) {
    *(CordRepBtree **)(lVar2 + 0x3f) = pCVar4;
    cord_internal::CordzInfo::Unlock(this_00);
  }
  return;
}

// AppendTreeToInlined @ 1501bd1c0

/* public: void __cdecl absl::lts_20240722::Cord::InlineRep::AppendTreeToInlined(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::InlineRep::AppendTreeToInlined
          (InlineRep *this,CordRep *param_1,MethodIdentifier param_2)

{
  char cVar1;
  CordRep *pCVar2;
  CordRepBtree *pCVar3;
  ulonglong uVar4;
  
  cVar1 = (this->data_).rep_.field0_0x0.data[0];
  if (cVar1 == '\0') {
    (this->data_).rep_.field0_0x0.as_tree.rep = param_1;
    (this->data_).rep_.field0_0x0.as_tree.cordz_info = 1;
    return;
  }
  uVar4 = (ulonglong)(longlong)cVar1 >> 1;
  pCVar2 = (CordRep *)cord_internal::CordRepFlat::New(uVar4);
  pCVar2->length = uVar4;
  *(undefined8 *)pCVar2->storage =
       *(undefined8 *)((longlong)&(this->data_).rep_.field0_0x0.as_tree.cordz_info + 1);
  *(undefined4 *)((longlong)&pCVar2[1].length + 5) =
       *(undefined4 *)((longlong)&(this->data_).rep_.field0_0x0 + 9);
  *(undefined2 *)&pCVar2[1].refcount.count_.field_0x1 =
       *(undefined2 *)((longlong)&(this->data_).rep_.field0_0x0 + 0xd);
  pCVar2[1].refcount.count_.field_0x3 = (this->data_).rep_.field0_0x0.data[0xf];
  pCVar3 = cord_internal::CordRepBtree::Create(pCVar2);
  if (param_1->tag < 5) {
    pCVar2 = param_1;
    if (param_1->tag == 1) {
      pCVar2 = *(CordRep **)&param_1[1].refcount;
    }
    if (pCVar2->tag < 5) {
      pCVar3 = cord_internal::CordRepBtree::AppendSlow(pCVar3,param_1);
      (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)pCVar3;
      (this->data_).rep_.field0_0x0.as_tree.cordz_info = 1;
      return;
    }
  }
  pCVar3 = cord_internal::CordRepBtree::AddCordRep<1>(pCVar3,param_1);
  (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)pCVar3;
  (this->data_).rep_.field0_0x0.as_tree.cordz_info = 1;
  return;
}

// AppendTreeToTree @ 1501bd2a0

/* public: void __cdecl absl::lts_20240722::Cord::InlineRep::AppendTreeToTree(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::InlineRep::AppendTreeToTree
          (InlineRep *this,CordRep *param_1,MethodIdentifier param_2)

{
  longlong lVar1;
  CordRep *pCVar2;
  CordRepBtree *pCVar3;
  CordzInfo *this_00;
  
  lVar1 = (this->data_).rep_.field0_0x0.as_tree.cordz_info;
  this_00 = (CordzInfo *)(lVar1 + -1);
  if (this_00 != (CordzInfo *)0x0) {
    cord_internal::CordzInfo::Lock(this_00,param_2);
  }
  pCVar3 = (CordRepBtree *)(this->data_).rep_.field0_0x0.as_tree.rep;
  if (*(uchar *)((RefcountAndFlags *)&pCVar3->_padding_ + 1) != '\x03') {
    pCVar2 = cord_internal::RemoveCrcNode((CordRep *)pCVar3);
    pCVar3 = cord_internal::CordRepBtree::Create(pCVar2);
  }
  if (param_1->tag < 5) {
    pCVar2 = param_1;
    if (param_1->tag == 1) {
      pCVar2 = *(CordRep **)&param_1[1].refcount;
    }
    if (pCVar2->tag < 5) {
      pCVar3 = cord_internal::CordRepBtree::AppendSlow(pCVar3,param_1);
      goto LAB_1501bd31c;
    }
  }
  pCVar3 = cord_internal::CordRepBtree::AddCordRep<1>(pCVar3,param_1);
LAB_1501bd31c:
  (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)pCVar3;
  if (this_00 != (CordzInfo *)0x0) {
    *(CordRepBtree **)(lVar1 + 0x3f) = pCVar3;
    cord_internal::CordzInfo::Unlock(this_00);
  }
  return;
}

// AssertHeld @ 1501bd350

/* public: void __cdecl absl::lts_20240722::cord_internal::CordzInfo::AssertHeld(void) __ptr64 */

void __thiscall absl::lts_20240722::cord_internal::CordzInfo::AssertHeld(CordzInfo *this)

{
  return;
}

// AssignLargeString @ 1501bd360

/* private: class absl::lts_20240722::Cord & __ptr64 __cdecl
   absl::lts_20240722::Cord::AssignLargeString(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > && __ptr64) __ptr64 */

Cord * __thiscall
absl::lts_20240722::Cord::AssignLargeString
          (Cord *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  CordRep *pCVar3;
  longlong lVar4;
  CordRep *pCVar5;
  CordzInfo *this_00;
  
  pCVar5 = (CordRep *)FUN_1501be6e0(param_1);
  if ((((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) == 0) ||
     (pCVar3 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar3 == (CordRep *)0x0)) {
    (this->contents_).data_.rep_.field0_0x0.as_tree.rep = pCVar5;
    (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 1;
  }
  else {
    lVar4 = (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
    this_00 = (CordzInfo *)(lVar4 + -1);
    if (this_00 != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Lock(this_00,kAssignString);
    }
    (this->contents_).data_.rep_.field0_0x0.as_tree.rep = pCVar5;
    if (this_00 != (CordzInfo *)0x0) {
      *(CordRep **)(lVar4 + 0x3f) = pCVar5;
    }
    LOCK();
    pRVar1 = &pCVar3->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      cord_internal::CordRep::Destroy(pCVar3);
    }
    if (this_00 != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Unlock(this_00);
    }
  }
  return this;
}

// AssignSlow @ 1501bd410

/* private: void __cdecl absl::lts_20240722::Cord::InlineRep::AssignSlow(class
   absl::lts_20240722::Cord::InlineRep const & __ptr64) __ptr64 */

void __thiscall absl::lts_20240722::Cord::InlineRep::AssignSlow(InlineRep *this,InlineRep *param_1)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  CordRep *pCVar3;
  CordRep *pCVar4;
  CordzInfo *this_00;
  
  if (((this->data_).rep_.field0_0x0.data[0] & 1U) == 0) {
    pCVar3 = (param_1->data_).rep_.field0_0x0.as_tree.rep;
    LOCK();
    pRVar1 = &pCVar3->refcount;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + 2);
    UNLOCK();
    (this->data_).rep_.field0_0x0.as_tree.rep = pCVar3;
    (this->data_).rep_.field0_0x0.as_tree.cordz_info = 1;
    if (((param_1->data_).rep_.field0_0x0.as_tree.cordz_info | 1U) != 1) {
      cord_internal::CordzInfo::MaybeTrackCordImpl(&this->data_,&param_1->data_,kAssignCord);
      return;
    }
  }
  else {
    pCVar3 = (this->data_).rep_.field0_0x0.as_tree.rep;
    if ((((param_1->data_).rep_.field0_0x0.data[0] & 1U) == 0) ||
       (pCVar4 = (param_1->data_).rep_.field0_0x0.as_tree.rep, pCVar4 == (CordRep *)0x0)) {
      this_00 = (CordzInfo *)((this->data_).rep_.field0_0x0.as_tree.cordz_info + -1);
      if (this_00 != (CordzInfo *)0x0) {
        cord_internal::CordzInfo::Untrack(this_00);
      }
      pCVar4 = (param_1->data_).rep_.field0_0x0.as_tree.rep;
      (this->data_).rep_.field0_0x0.as_tree.cordz_info =
           (param_1->data_).rep_.field0_0x0.as_tree.cordz_info;
      (this->data_).rep_.field0_0x0.as_tree.rep = pCVar4;
    }
    else {
      LOCK();
      (pCVar4->refcount).count_ = (atomic<int>)((int)(pCVar4->refcount).count_ + 2);
      UNLOCK();
      (this->data_).rep_.field0_0x0.as_tree.rep = pCVar4;
      if (((param_1->data_).rep_.field0_0x0.as_tree.cordz_info |
          (this->data_).rep_.field0_0x0.as_tree.cordz_info) != 1) {
        cord_internal::CordzInfo::MaybeTrackCordImpl(&this->data_,&param_1->data_,kAssignCord);
      }
    }
    LOCK();
    pRVar1 = &pCVar3->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      cord_internal::CordRep::Destroy(pCVar3);
    }
  }
  return;
}

// Clear @ 1501bd500

/* public: void __cdecl absl::lts_20240722::Cord::Clear(void) __ptr64 */

void __thiscall absl::lts_20240722::Cord::Clear(Cord *this)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  CordzInfo *this_00;
  CordRep *pCVar3;
  
  if ((((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) &&
     (this_00 = (CordzInfo *)((this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + -1),
     this_00 != (CordzInfo *)0x0)) {
    cord_internal::CordzInfo::Untrack(this_00);
  }
  if (((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) == 0) {
    pCVar3 = (CordRep *)0x0;
  }
  else {
    pCVar3 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep;
  }
  (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
  (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  if (pCVar3 != (CordRep *)0x0) {
    LOCK();
    pRVar1 = &pCVar3->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      cord_internal::CordRep::Destroy(pCVar3);
      return;
    }
  }
  return;
}

// CommitTree @ 1501bd560

/* public: void __cdecl absl::lts_20240722::Cord::InlineRep::CommitTree(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,class
   absl::lts_20240722::cord_internal::CordzUpdateScope const & __ptr64,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::InlineRep::CommitTree
          (InlineRep *this,CordRep *param_1,CordRep *param_2,CordzUpdateScope *param_3,
          MethodIdentifier param_4)

{
  (this->data_).rep_.field0_0x0.as_tree.rep = param_2;
  if (param_1 == (CordRep *)0x0) {
    (this->data_).rep_.field0_0x0.as_tree.cordz_info = 1;
  }
  else if (param_3->info_ != (CordzInfo *)0x0) {
    param_3->info_->rep_ = param_2;
    return;
  }
  return;
}

// Compare @ 1501bd590

/* public: int __cdecl absl::lts_20240722::Cord::Compare(class std::basic_string_view<char,struct
   std::char_traits<char> >)const __ptr64 */

int __thiscall
absl::lts_20240722::Cord::Compare
          (Cord *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  
  uVar2 = (ulonglong)(this->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2 >> 1;
  }
  else {
    uVar3 = ((this->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  uVar2 = param_1->_Mysize;
  if (uVar3 == uVar2) {
    iVar1 = GenericCompare<int,std::basic_string_view<char,std::char_traits<char>_>_>
                      (this,param_1,uVar3);
    return iVar1;
  }
  if (uVar3 < uVar2) {
    iVar1 = GenericCompare<int,std::basic_string_view<char,std::char_traits<char>_>_>
                      (this,param_1,uVar3);
    if (iVar1 == 0) {
      iVar1 = -1;
    }
    return iVar1;
  }
  iVar1 = GenericCompare<int,std::basic_string_view<char,std::char_traits<char>_>_>
                    (this,param_1,uVar2);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}

// FUN_1501bd600 @ 1501bd600

int FUN_1501bd600(longlong *param_1,longlong *param_2,longlong *param_3)

{
  void *_Buf1;
  int iVar1;
  ulonglong _Size;
  
  _Size = param_1[1];
  if ((ulonglong)param_2[1] < (ulonglong)param_1[1]) {
    _Size = param_2[1];
  }
  *param_3 = *param_3 - _Size;
  _Buf1 = (void *)*param_1;
  iVar1 = memcmp(_Buf1,(void *)*param_2,_Size);
  if (iVar1 == 0) {
    param_1[1] = param_1[1] - _Size;
    *param_1 = (longlong)_Buf1 + _Size;
    *param_2 = *param_2 + _Size;
    param_2[1] = param_2[1] - _Size;
    iVar1 = 0;
  }
  return iVar1;
}

// CompareImpl @ 1501bd670

/* private: int __cdecl absl::lts_20240722::Cord::CompareImpl(class absl::lts_20240722::Cord const &
   __ptr64)const __ptr64 */

int __thiscall absl::lts_20240722::Cord::CompareImpl(Cord *this,Cord *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  
  uVar2 = (ulonglong)(this->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2 >> 1;
  }
  else {
    uVar3 = ((this->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  uVar2 = (ulonglong)(param_1->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar2 >> 1;
  }
  else {
    uVar2 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar3 == uVar2) {
    iVar1 = GenericCompare<int,absl::lts_20240722::Cord>(this,param_1,uVar3);
    return iVar1;
  }
  if (uVar3 < uVar2) {
    iVar1 = GenericCompare<int,absl::lts_20240722::Cord>(this,param_1,uVar3);
    if (iVar1 == 0) {
      iVar1 = -1;
    }
    return iVar1;
  }
  iVar1 = GenericCompare<int,absl::lts_20240722::Cord>(this,param_1,uVar2);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}

// CompareSlowPath @ 1501bd6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* private: int __cdecl absl::lts_20240722::Cord::CompareSlowPath(class absl::lts_20240722::Cord
   const & __ptr64,unsigned __int64,unsigned __int64)const __ptr64 */

int __thiscall
absl::lts_20240722::Cord::CompareSlowPath
          (Cord *this,Cord *param_1,__uint64 param_2,__uint64 param_3)

{
  ulong64 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char *pcVar6;
  basic_string_view<char,std::char_traits<char>_> bVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  char *pcVar11;
  CordRep *pCVar12;
  uchar **ppuVar13;
  CordRep *pCVar14;
  ulonglong uVar15;
  CordRep *pCVar16;
  byte bVar17;
  byte bVar18;
  ulong64 uVar19;
  CordRepBtree *pCVar20;
  uchar *_Buf1;
  uchar *_Buf2;
  CordRep *pCVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_258 [32];
  int local_238;
  ulong64 local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  ulonglong local_218;
  __uint64 local_210;
  ulong64 local_208;
  ulonglong local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  uchar *local_1b8;
  ulong64 uStack_1b0;
  uchar *local_1a8;
  ulong64 local_1a0;
  uchar *local_198;
  ulong64 uStack_190;
  ChunkIterator local_188;
  ChunkIterator local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_258;
  bVar17 = (this->contents_).data_.rep_.field0_0x0.data[0];
  pCVar16 = (CordRep *)0x0;
  local_210 = param_3;
  local_e8.current_chunk_._Mydata = (char *)0x0;
  local_e8.current_chunk_._Mysize = 0;
  local_e8.current_leaf_ = (CordRep *)0x0;
  local_e8.btree_reader_.remaining_ = 0;
  local_238 = -1;
  local_e8.btree_reader_.navigator_.height_ = -1;
  bVar18 = bVar17 & 1;
  if ((bVar18 == 0) ||
     (pCVar14 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar14 == (CordRep *)0x0)) {
    local_230 = (ulonglong)(longlong)(char)bVar17 >> 1;
    uStack_220 = (undefined4)local_230;
    uStack_21c = 0;
    uStack_21c = 0;
    local_1f8 = pCVar16;
    if (bVar18 == 0) {
      local_1f8 = (CordRep *)((longlong)&(this->contents_).data_.rep_.field0_0x0 + 1);
    }
    local_228 = SUB84(local_1f8,0);
    uStack_224 = (undefined4)((ulonglong)local_1f8 >> 0x20);
    uStack_1f0 = (CordRep *)(local_230 & 0xffffffff);
    local_e8.current_chunk_._Mydata = (char *)local_1f8;
    local_e8.current_chunk_._Mysize = local_230 & 0xffffffff;
  }
  else {
    local_230 = pCVar14->length;
    local_e8.bytes_remaining_ = local_230;
    if (local_230 == 0) {
      local_1f8 = (CordRep *)0x0;
      uStack_1f0 = (CordRep *)0x0;
    }
    else {
      ChunkIterator::InitTree(&local_e8,pCVar14);
      local_1f8 = (CordRep *)local_e8.current_chunk_._Mydata;
      uStack_1f0 = (CordRep *)local_e8.current_chunk_._Mysize;
      local_230 = local_e8.bytes_remaining_;
    }
  }
  pCVar14 = (CordRep *)local_e8.current_chunk_._Mysize;
  bVar17 = (param_1->contents_).data_.rep_.field0_0x0.data[0];
  local_188.current_chunk_ = (basic_string_view<char,std::char_traits<char>_>)ZEXT816(0);
  bVar7 = local_188.current_chunk_;
  local_188.current_leaf_ = (CordRep *)0x0;
  local_188.btree_reader_.remaining_ = 0;
  local_188.btree_reader_.navigator_.height_ = -1;
  bVar18 = bVar17 & 1;
  local_1f8 = (CordRep *)local_e8.current_chunk_._Mydata;
  uStack_1f0 = (CordRep *)local_e8.current_chunk_._Mysize;
  if ((bVar18 == 0) ||
     (pCVar21 = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar21 == (CordRep *)0x0))
  {
    local_208 = (ulonglong)(longlong)(char)bVar17 >> 1;
    uStack_220 = (undefined4)local_208;
    uStack_21c = 0;
    uStack_1cc = 0;
    pCVar21 = pCVar16;
    if (bVar18 == 0) {
      pCVar21 = (CordRep *)((longlong)&(param_1->contents_).data_.rep_.field0_0x0 + 1);
    }
    local_228 = SUB84(pCVar21,0);
    uStack_224 = (undefined4)((ulonglong)pCVar21 >> 0x20);
    local_188.current_chunk_._Mysize._0_4_ = uStack_220;
    local_188.current_chunk_._Mydata = (char *)pCVar21;
    local_188.current_chunk_._Mysize._4_4_ = 0;
    pCVar21 = (CordRep *)(local_208 & 0xffffffff);
    local_1d8 = local_228;
    uStack_1d4 = uStack_224;
    uStack_1d0 = uStack_220;
    uStack_21c = uStack_1cc;
  }
  else {
    local_208 = pCVar21->length;
    local_188.bytes_remaining_ = local_208;
    if (local_208 == 0) {
      local_188.current_chunk_._Mydata._0_4_ = 0;
      local_188.current_chunk_._Mydata._4_4_ = 0;
      local_188.current_chunk_._Mysize._0_4_ = 0;
      local_188.current_chunk_._Mysize._4_4_ = 0;
      pCVar21 = pCVar16;
      local_1d8 = local_188.current_chunk_._Mydata._0_4_;
      uStack_1d4 = local_188.current_chunk_._Mydata._4_4_;
      uStack_1d0 = (undefined4)local_188.current_chunk_._Mysize;
      uStack_1cc = local_188.current_chunk_._Mysize._4_4_;
      local_188.current_chunk_ = bVar7;
      goto LAB_1501bd88e;
    }
    ChunkIterator::InitTree(&local_188,pCVar21);
    uStack_1d0 = (undefined4)local_188.current_chunk_._Mysize;
    uStack_1cc = local_188.current_chunk_._Mysize._4_4_;
    local_238 = local_188.btree_reader_.navigator_.height_;
    local_208 = local_188.bytes_remaining_;
    pCVar21 = (CordRep *)local_188.current_chunk_._Mysize;
    local_1d8 = local_188.current_chunk_._Mydata._0_4_;
    uStack_1d4 = local_188.current_chunk_._Mydata._4_4_;
  }
LAB_1501bd88e:
  if (local_230 == 0) {
    local_228 = 0;
    uStack_224 = 0;
    plVar9 = (longlong *)&local_228;
    uStack_220 = 0;
    uStack_21c = 0;
  }
  else {
    local_1e8 = local_1f8;
    uStack_1e0 = uStack_1f0;
    plVar9 = &local_1e8;
  }
  local_1c8 = (uchar *)*plVar9;
  uStack_1c0 = (uchar *)plVar9[1];
  if (local_208 == 0) {
    local_228 = 0;
    uStack_224 = 0;
    plVar10 = (longlong *)&local_228;
    uStack_220 = 0;
    uStack_21c = 0;
  }
  else {
    local_1e8 = (CordRep *)CONCAT44(uStack_1d4,local_1d8);
    uStack_1e0 = (CordRep *)CONCAT44(uStack_1cc,uStack_1d0);
    plVar10 = &local_1e8;
  }
  _Buf1 = (uchar *)*plVar9 + param_2;
  _Buf2 = (uchar *)*plVar10 + param_2;
  local_200 = plVar9[1] - param_2;
  local_1e8 = (CordRep *)*plVar10;
  uStack_1e0 = (CordRep *)plVar10[1];
  local_218 = plVar10[1] - param_2;
  local_210 = local_210 - param_2;
  bVar17 = local_e8.btree_reader_.navigator_.index_[0];
  do {
    if (local_200 == 0) {
      local_230 = local_230 - (longlong)pCVar14;
      local_e8.bytes_remaining_ = local_230;
      uVar19 = local_230;
      uVar22 = (undefined4)local_1f8;
      uVar23 = local_1f8._4_4_;
      uVar24 = (undefined4)uStack_1f0;
      uVar25 = uStack_1f0._4_4_;
      if (local_230 != 0) {
        if ((local_e8.btree_reader_.navigator_.height_ < 0) ||
           (local_e8.btree_reader_.navigator_.node_[local_e8.btree_reader_.navigator_.height_] ==
            (CordRepBtree *)0x0)) {
          local_e8.current_chunk_._Mydata = (char *)0x0;
          local_e8.current_chunk_._Mysize = 0;
          local_e8.current_chunk_._Mydata._0_4_ = 0;
          local_e8.current_chunk_._Mydata._4_4_ = 0;
          local_e8.current_chunk_._Mysize._0_4_ = 0;
          local_e8.current_chunk_._Mysize._4_4_ = 0;
          pCVar14 = pCVar16;
          uVar22 = local_e8.current_chunk_._Mydata._0_4_;
          uVar23 = local_e8.current_chunk_._Mydata._4_4_;
          uVar24 = (undefined4)local_e8.current_chunk_._Mysize;
          uVar25 = local_e8.current_chunk_._Mysize._4_4_;
        }
        else {
          if (local_e8.btree_reader_.remaining_ == 0) {
            local_1c8 = (uchar *)0x0;
            uStack_1c0 = (uchar *)0x0;
            local_1c8._0_4_ = 0;
            local_1c8._4_4_ = 0;
            uStack_1c0._0_4_ = 0;
            uStack_1c0._4_4_ = 0;
            uVar22 = (undefined4)local_1c8;
            uVar23 = local_1c8._4_4_;
            uVar24 = (undefined4)uStack_1c0;
            uVar25 = uStack_1c0._4_4_;
          }
          else {
            pCVar14 = pCVar16;
            if ((ulonglong)bVar17 ==
                (ulonglong)
                *(byte *)((longlong)&local_e8.btree_reader_.navigator_.node_[0]->_padding_ + 7) - 1)
            {
              do {
                pcVar11 = (char *)((longlong)&pCVar14->length + 1);
                pCVar12 = pCVar16;
                if ((longlong)local_e8.btree_reader_.navigator_.height_ < (longlong)pcVar11)
                goto LAB_1501bda18;
                pCVar20 = local_e8.btree_reader_.navigator_.node_
                          [(longlong)((longlong)&pCVar14->length + 1)];
                uVar15 = (ulonglong)local_e8.btree_reader_.navigator_.index_[(longlong)pcVar11] + 1;
                pCVar14 = (CordRep *)pcVar11;
              } while (uVar15 == *(byte *)((longlong)&pCVar20->_padding_ + 7));
              local_e8.btree_reader_.navigator_.index_[(longlong)pcVar11] = (uchar)uVar15;
              do {
                pCVar20 = *(CordRepBtree **)((longlong)pCVar20->edges_ + uVar15 * 8);
                pcVar6 = pcVar11 + -1;
                bVar17 = *(uchar *)((longlong)&pCVar20->_padding_ + 6);
                uVar15 = (ulonglong)bVar17;
                local_e8.btree_reader_.navigator_.node_[(longlong)(pcVar11 + -1)] = pCVar20;
                pcVar11[(longlong)((longlong)&local_e8.btree_reader_.navigator_.height_ + 3)] =
                     bVar17;
                pcVar11 = pcVar6;
              } while (0 < (longlong)pcVar6);
              pCVar12 = *(CordRep **)((longlong)pCVar20->edges_ + uVar15 * 8);
              uVar19 = local_e8.bytes_remaining_;
              bVar17 = local_e8.btree_reader_.navigator_.index_[0];
            }
            else {
              bVar17 = bVar17 + 1;
              local_e8.btree_reader_.navigator_.index_[0] = bVar17;
              pCVar12 = local_e8.btree_reader_.navigator_.node_[0]->edges_[bVar17];
            }
LAB_1501bda18:
            uVar1 = pCVar12->length;
            local_e8.btree_reader_.remaining_ = local_e8.btree_reader_.remaining_ - uVar1;
            pCVar14 = pCVar16;
            if (pCVar12->tag == '\x01') {
              pCVar14 = (CordRep *)pCVar12[1].length;
              pCVar12 = *(CordRep **)&pCVar12[1].refcount;
            }
            if (pCVar12->tag < 6) {
              ppuVar13 = &local_1a8;
              local_1a8 = pCVar14->storage + (pCVar12[1].length - 0xd);
              local_1a0 = uVar1;
            }
            else {
              uStack_1b0 = uVar1;
              local_1b8 = pCVar12->storage + (longlong)pCVar14;
              ppuVar13 = &local_1b8;
            }
            uVar22 = *(undefined4 *)ppuVar13;
            uVar23 = *(undefined4 *)((longlong)ppuVar13 + 4);
            uVar24 = *(undefined4 *)(ppuVar13 + 1);
            uVar25 = *(undefined4 *)((longlong)ppuVar13 + 0xc);
            local_1c8 = *ppuVar13;
            uStack_1c0 = ppuVar13[1];
          }
          auVar2._4_4_ = uVar23;
          auVar2._0_4_ = uVar22;
          auVar2._8_4_ = uVar24;
          auVar2._12_4_ = uVar25;
          local_e8.current_chunk_._Mydata = (char *)CONCAT44(uVar23,uVar22);
          local_e8.current_chunk_._Mysize = CONCAT44(uVar25,uVar24);
          pCVar14 = auVar2._8_8_;
        }
        local_1f8 = (CordRep *)CONCAT44(uVar23,uVar22);
        uStack_1f0 = (CordRep *)CONCAT44(uVar25,uVar24);
      }
      if (uVar19 == 0) goto LAB_1501bdc8d;
      auVar3._4_4_ = uVar23;
      auVar3._0_4_ = uVar22;
      auVar3._8_4_ = uVar24;
      auVar3._12_4_ = uVar25;
      _Buf1 = (uchar *)CONCAT44(uVar23,uVar22);
      local_200 = auVar3._8_8_;
    }
    if (local_218 == 0) {
      local_208 = local_208 - (longlong)pCVar21;
      if (local_208 != 0) {
        if ((local_238 < 0) ||
           (local_188.btree_reader_.navigator_.node_[local_238] == (CordRepBtree *)0x0)) {
          local_188.current_chunk_ = (basic_string_view<char,std::char_traits<char>_>)ZEXT816(0);
          local_1d8 = 0;
          uStack_1d4 = 0;
          uStack_1d0 = 0;
          uStack_1cc = 0;
          pCVar21 = pCVar16;
        }
        else {
          if (local_188.btree_reader_.remaining_ == 0) {
            local_228 = 0;
            uStack_224 = 0;
            uStack_220 = 0;
            uStack_21c = 0;
          }
          else {
            pCVar21 = pCVar16;
            if ((ulonglong)local_188.btree_reader_.navigator_.index_[0] ==
                (ulonglong)
                *(byte *)((longlong)&local_188.btree_reader_.navigator_.node_[0]->_padding_ + 7) - 1
               ) {
              do {
                pcVar11 = (char *)((longlong)&pCVar21->length + 1);
                pCVar12 = pCVar16;
                if ((longlong)local_238 < (longlong)pcVar11) goto LAB_1501bdb8d;
                pCVar20 = local_188.btree_reader_.navigator_.node_
                          [(longlong)((longlong)&pCVar21->length + 1)];
                uVar15 = (ulonglong)local_188.btree_reader_.navigator_.index_[(longlong)pcVar11] + 1
                ;
                pCVar21 = (CordRep *)pcVar11;
              } while (uVar15 == *(byte *)((longlong)&pCVar20->_padding_ + 7));
              local_188.btree_reader_.navigator_.index_[(longlong)pcVar11] = (uchar)uVar15;
              do {
                pCVar20 = *(CordRepBtree **)((longlong)pCVar20->edges_ + uVar15 * 8);
                pcVar6 = pcVar11 + -1;
                bVar18 = *(uchar *)((longlong)&pCVar20->_padding_ + 6);
                uVar15 = (ulonglong)bVar18;
                local_188.btree_reader_.navigator_.node_[(longlong)(pcVar11 + -1)] = pCVar20;
                pcVar11[(longlong)((longlong)&local_188.btree_reader_.navigator_.height_ + 3)] =
                     bVar18;
                pcVar11 = pcVar6;
              } while (0 < (longlong)pcVar6);
              local_238 = local_188.btree_reader_.navigator_.height_;
              pCVar12 = *(CordRep **)((longlong)pCVar20->edges_ + uVar15 * 8);
            }
            else {
              local_188.btree_reader_.navigator_.index_[0] =
                   local_188.btree_reader_.navigator_.index_[0] + 1;
              pCVar12 = local_188.btree_reader_.navigator_.node_[0]->edges_
                        [local_188.btree_reader_.navigator_.index_[0]];
            }
LAB_1501bdb8d:
            uVar19 = pCVar12->length;
            local_188.btree_reader_.remaining_ = local_188.btree_reader_.remaining_ - uVar19;
            pCVar21 = pCVar16;
            if (pCVar12->tag == '\x01') {
              pCVar21 = (CordRep *)pCVar12[1].length;
              pCVar12 = *(CordRep **)&pCVar12[1].refcount;
            }
            if (pCVar12->tag < 6) {
              ppuVar13 = (uchar **)&local_1e8;
              local_1e8 = (CordRep *)(pCVar21->storage + (pCVar12[1].length - 0xd));
              uStack_1e0 = (CordRep *)uVar19;
            }
            else {
              uStack_190 = uVar19;
              local_198 = pCVar12->storage + (longlong)pCVar21;
              ppuVar13 = &local_198;
            }
            local_228 = *(undefined4 *)ppuVar13;
            uStack_224 = *(undefined4 *)((longlong)ppuVar13 + 4);
            uStack_220 = *(undefined4 *)(ppuVar13 + 1);
            uStack_21c = *(undefined4 *)((longlong)ppuVar13 + 0xc);
          }
          auVar4._4_4_ = uStack_224;
          auVar4._0_4_ = local_228;
          auVar4._8_4_ = uStack_220;
          auVar4._12_4_ = uStack_21c;
          local_188.current_chunk_._Mydata._4_4_ = uStack_224;
          local_188.current_chunk_._Mydata._0_4_ = local_228;
          local_188.current_chunk_._Mysize._0_4_ = uStack_220;
          local_188.current_chunk_._Mysize._4_4_ = uStack_21c;
          pCVar21 = auVar4._8_8_;
          local_1d8 = local_228;
          uStack_1d4 = uStack_224;
          uStack_1d0 = uStack_220;
          uStack_1cc = uStack_21c;
        }
      }
      if (local_208 == 0) {
LAB_1501bdc8d:
        return (uint)(local_218 == 0) - (uint)(local_200 == 0);
      }
      auVar5._4_4_ = uStack_1d4;
      auVar5._0_4_ = local_1d8;
      auVar5._8_4_ = uStack_1d0;
      auVar5._12_4_ = uStack_1cc;
      _Buf2 = (uchar *)CONCAT44(uStack_1d4,local_1d8);
      local_218 = auVar5._8_8_;
      local_188.bytes_remaining_ = local_208;
    }
    uVar15 = local_200;
    if (local_218 < local_200) {
      uVar15 = local_218;
    }
    local_210 = local_210 - uVar15;
    iVar8 = memcmp(_Buf1,_Buf2,uVar15);
    if (iVar8 != 0) {
      return iVar8;
    }
    _Buf1 = _Buf1 + uVar15;
    local_200 = local_200 - uVar15;
    local_218 = local_218 - uVar15;
    _Buf2 = _Buf2 + uVar15;
    if (local_210 == 0) {
      return 0;
    }
  } while( true );
}

// CompareSlowPath @ 1501bdce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* private: int __cdecl absl::lts_20240722::Cord::CompareSlowPath(class
   std::basic_string_view<char,struct std::char_traits<char> >,unsigned __int64,unsigned
   __int64)const __ptr64 */

int __thiscall
absl::lts_20240722::Cord::CompareSlowPath
          (Cord *this,basic_string_view<char,std::char_traits<char>_> *param_1,__uint64 param_2,
          __uint64 param_3)

{
  ulong64 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  basic_string_view<char,std::char_traits<char>_> bVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  CordRep *pCVar9;
  uchar **ppuVar10;
  ulonglong uVar11;
  CordRep *pCVar12;
  ulonglong _Size;
  byte bVar13;
  CordRepBtree *pCVar14;
  uchar *_Buf1;
  byte bVar15;
  CordRep *pCVar16;
  ulong64 uVar17;
  undefined1 auStack_168 [32];
  __uint64 local_148;
  ulonglong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  basic_string_view<char,std::char_traits<char>_> *local_108;
  uchar *local_100;
  ulong64 uStack_f8;
  ChunkIterator local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar15 = (this->contents_).data_.rep_.field0_0x0.data[0];
  pCVar12 = (CordRep *)0x0;
  local_108 = param_1;
  local_e8.current_chunk_ = (basic_string_view<char,std::char_traits<char>_>)ZEXT816(0);
  bVar5 = local_e8.current_chunk_;
  local_e8.current_leaf_ = (CordRep *)0x0;
  local_e8.btree_reader_.remaining_ = 0;
  local_e8.btree_reader_.navigator_.height_ = -1;
  bVar13 = bVar15 & 1;
  local_148 = param_3;
  if ((bVar13 == 0) ||
     (pCVar16 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar16 == (CordRep *)0x0)) {
    uVar17 = (ulonglong)(longlong)(char)bVar15 >> 1;
    uStack_130 = (undefined4)uVar17;
    uStack_12c = 0;
    uStack_11c = 0;
    pCVar16 = pCVar12;
    if (bVar13 == 0) {
      pCVar16 = (CordRep *)((longlong)&(this->contents_).data_.rep_.field0_0x0 + 1);
    }
    local_138 = SUB84(pCVar16,0);
    uStack_134 = (undefined4)((ulonglong)pCVar16 >> 0x20);
    local_e8.current_chunk_._Mysize._0_4_ = uStack_130;
    local_e8.current_chunk_._Mydata = (char *)pCVar16;
    local_e8.current_chunk_._Mysize._4_4_ = 0;
    pCVar16 = (CordRep *)(uVar17 & 0xffffffff);
    local_128 = local_138;
    uStack_124 = uStack_134;
    uStack_120 = uStack_130;
    uStack_12c = uStack_11c;
  }
  else {
    uVar17 = pCVar16->length;
    local_e8.bytes_remaining_ = uVar17;
    if (uVar17 == 0) {
      local_e8.current_chunk_._Mydata._0_4_ = 0;
      local_e8.current_chunk_._Mydata._4_4_ = 0;
      uStack_11c = 0;
      pCVar16 = pCVar12;
      local_128 = local_e8.current_chunk_._Mydata._0_4_;
      uStack_124 = local_e8.current_chunk_._Mydata._4_4_;
      uStack_120 = 0;
      local_e8.current_chunk_ = bVar5;
    }
    else {
      ChunkIterator::InitTree(&local_e8,pCVar16);
      uStack_120 = (undefined4)local_e8.current_chunk_._Mysize;
      uStack_11c = local_e8.current_chunk_._Mysize._4_4_;
      pCVar16 = (CordRep *)local_e8.current_chunk_._Mysize;
      uVar17 = local_e8.bytes_remaining_;
      local_128 = local_e8.current_chunk_._Mydata._0_4_;
      uStack_124 = local_e8.current_chunk_._Mydata._4_4_;
    }
  }
  if (uVar17 == 0) {
    local_138 = 0;
    uStack_134 = 0;
    plVar7 = (longlong *)&local_138;
    uStack_130 = 0;
    uStack_12c = 0;
  }
  else {
    local_118 = (uchar *)CONCAT44(uStack_124,local_128);
    uStack_110 = CONCAT44(uStack_11c,uStack_120);
    plVar7 = &local_118;
  }
  local_118 = (uchar *)*plVar7;
  uStack_110 = plVar7[1];
  local_108->_Mydata = local_108->_Mydata + param_2;
  local_108->_Mysize = local_108->_Mysize - param_2;
  _Buf1 = local_118 + param_2;
  local_140 = uStack_110 - param_2;
  local_148 = local_148 - param_2;
  bVar15 = local_e8.btree_reader_.navigator_.index_[0];
  do {
    if (local_140 == 0) {
      uVar17 = uVar17 - (longlong)pCVar16;
      if (uVar17 != 0) {
        if ((local_e8.btree_reader_.navigator_.height_ < 0) ||
           (local_e8.btree_reader_.navigator_.node_[local_e8.btree_reader_.navigator_.height_] ==
            (CordRepBtree *)0x0)) {
          local_e8.current_chunk_ = (basic_string_view<char,std::char_traits<char>_>)ZEXT816(0);
          bVar5 = local_e8.current_chunk_;
          local_e8.current_chunk_._Mydata._0_4_ = 0;
          local_e8.current_chunk_._Mydata._4_4_ = 0;
          local_e8.current_chunk_._Mysize._0_4_ = 0;
          local_e8.current_chunk_._Mysize._4_4_ = 0;
          pCVar16 = pCVar12;
          local_128 = local_e8.current_chunk_._Mydata._0_4_;
          uStack_124 = local_e8.current_chunk_._Mydata._4_4_;
          uStack_120 = (undefined4)local_e8.current_chunk_._Mysize;
          uStack_11c = local_e8.current_chunk_._Mysize._4_4_;
          local_e8.current_chunk_ = bVar5;
        }
        else {
          if (local_e8.btree_reader_.remaining_ == 0) {
            local_138 = 0;
            uStack_134 = 0;
            uStack_130 = 0;
            uStack_12c = 0;
          }
          else {
            pCVar16 = pCVar12;
            if ((ulonglong)bVar15 ==
                (ulonglong)
                *(byte *)((longlong)&local_e8.btree_reader_.navigator_.node_[0]->_padding_ + 7) - 1)
            {
              do {
                puVar8 = (undefined1 *)((longlong)&pCVar16->length + 1);
                pCVar9 = pCVar12;
                if ((longlong)local_e8.btree_reader_.navigator_.height_ < (longlong)puVar8)
                goto LAB_1501bdee7;
                pCVar14 = local_e8.btree_reader_.navigator_.node_
                          [(longlong)((longlong)&pCVar16->length + 1)];
                uVar11 = (ulonglong)local_e8.btree_reader_.navigator_.index_[(longlong)puVar8] + 1;
                pCVar16 = (CordRep *)puVar8;
              } while (uVar11 == *(byte *)((longlong)&pCVar14->_padding_ + 7));
              local_e8.btree_reader_.navigator_.index_[(longlong)puVar8] = (uchar)uVar11;
              do {
                pCVar14 = *(CordRepBtree **)((longlong)pCVar14->edges_ + uVar11 * 8);
                puVar4 = puVar8 + -1;
                bVar15 = *(uchar *)((longlong)&pCVar14->_padding_ + 6);
                uVar11 = (ulonglong)bVar15;
                local_e8.btree_reader_.navigator_.node_[(longlong)(puVar8 + -1)] = pCVar14;
                puVar8[(longlong)((longlong)&local_e8.btree_reader_.navigator_.height_ + 3)] =
                     bVar15;
                puVar8 = puVar4;
              } while (0 < (longlong)puVar4);
              pCVar9 = *(CordRep **)((longlong)pCVar14->edges_ + uVar11 * 8);
              bVar15 = local_e8.btree_reader_.navigator_.index_[0];
            }
            else {
              bVar15 = bVar15 + 1;
              pCVar9 = local_e8.btree_reader_.navigator_.node_[0]->edges_[bVar15];
              local_e8.btree_reader_.navigator_.index_[0] = bVar15;
            }
LAB_1501bdee7:
            uVar1 = pCVar9->length;
            local_e8.btree_reader_.remaining_ = local_e8.btree_reader_.remaining_ - uVar1;
            pCVar16 = pCVar12;
            if (pCVar9->tag == '\x01') {
              pCVar16 = (CordRep *)pCVar9[1].length;
              pCVar9 = *(CordRep **)&pCVar9[1].refcount;
            }
            if (pCVar9->tag < 6) {
              ppuVar10 = (uchar **)&local_118;
              local_118 = pCVar16->storage + (pCVar9[1].length - 0xd);
              uStack_110 = uVar1;
            }
            else {
              uStack_f8 = uVar1;
              local_100 = pCVar9->storage + (longlong)pCVar16;
              ppuVar10 = &local_100;
            }
            local_138 = *(undefined4 *)ppuVar10;
            uStack_134 = *(undefined4 *)((longlong)ppuVar10 + 4);
            uStack_130 = *(undefined4 *)(ppuVar10 + 1);
            uStack_12c = *(undefined4 *)((longlong)ppuVar10 + 0xc);
          }
          auVar2._4_4_ = uStack_134;
          auVar2._0_4_ = local_138;
          auVar2._8_4_ = uStack_130;
          auVar2._12_4_ = uStack_12c;
          local_e8.current_chunk_._Mydata._4_4_ = uStack_134;
          local_e8.current_chunk_._Mydata._0_4_ = local_138;
          local_e8.current_chunk_._Mysize._0_4_ = uStack_130;
          local_e8.current_chunk_._Mysize._4_4_ = uStack_12c;
          pCVar16 = auVar2._8_8_;
          local_128 = local_138;
          uStack_124 = uStack_134;
          uStack_120 = uStack_130;
          uStack_11c = uStack_12c;
        }
      }
      if (uVar17 == 0) goto LAB_1501bdff9;
      auVar3._4_4_ = uStack_124;
      auVar3._0_4_ = local_128;
      auVar3._8_4_ = uStack_120;
      auVar3._12_4_ = uStack_11c;
      _Buf1 = (uchar *)CONCAT44(uStack_124,local_128);
      local_140 = auVar3._8_8_;
      local_e8.bytes_remaining_ = uVar17;
    }
    uVar11 = local_108->_Mysize;
    if (uVar11 == 0) {
LAB_1501bdff9:
      return (uint)(local_108->_Mysize == 0) - (uint)(local_140 == 0);
    }
    _Size = local_140;
    if (uVar11 < local_140) {
      _Size = uVar11;
    }
    local_148 = local_148 - _Size;
    iVar6 = memcmp(_Buf1,local_108->_Mydata,_Size);
    if (iVar6 != 0) {
      return iVar6;
    }
    _Buf1 = _Buf1 + _Size;
    local_140 = local_140 - _Size;
    local_108->_Mydata = local_108->_Mydata + _Size;
    local_108->_Mysize = uVar11 - _Size;
    if (local_148 == 0) {
      return 0;
    }
  } while( true );
}

// ComputeCapacity @ 1501be040

/* public: static unsigned __int64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::ComputeCapacity(unsigned
   __int64,unsigned __int64) */

__uint64 __cdecl
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::ComputeCapacity(__uint64 param_1,__uint64 param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_1 * 2;
  if (param_1 * 2 < param_2) {
    uVar1 = param_2;
  }
  return uVar1;
}

// ConstructNext @ 1501be060

/* public: void __cdecl absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>,class
   std::move_iterator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64>
   >::ConstructNext(class std::allocator<struct absl::lts_20240722::cord_internal::CordRep *
   __ptr64> & __ptr64,struct absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64) __ptr64
    */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
IteratorValueAdapter<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,std::move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>_>
::ConstructNext(IteratorValueAdapter<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,std::move_iterator<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64>_>
                *this,allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_1,
               CordRep **param_2)

{
  *param_2 = (CordRep *)**(undefined8 **)this;
  *(longlong *)this = *(longlong *)this + 8;
  return;
}

// ConstructNext @ 1501be080

/* public: void __cdecl absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<class
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl>,class
   absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64>::ConstructNext(class
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl> & __ptr64,class
   absl::lts_20240722::str_format_internal::FormatArgImpl * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>
::ConstructNext(IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>
                *this,allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *param_1,
               FormatArgImpl *param_2)

{
  Data DVar1;
  
  DVar1 = (*(Data **)this)[1];
  param_2->data_ = **(Data **)this;
  param_2->dispatcher_ = (_func___cdecl_bool_Data_FormatConversionSpecImpl_void_ptr *)DVar1;
  *(longlong *)this = *(longlong *)this + 0x10;
  return;
}

// Contains @ 1501be0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __cdecl absl::lts_20240722::Cord::Contains(class absl::lts_20240722::Cord const &
   __ptr64)const __ptr64 */

bool __thiscall absl::lts_20240722::Cord::Contains(Cord *this,Cord *param_1)

{
  ulonglong uVar1;
  CharIterator *pCVar2;
  undefined1 auStack_d8 [32];
  CharIterator local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  uVar1 = (ulonglong)(param_1->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 1;
  }
  else {
    uVar1 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar1 != 0) {
    pCVar2 = Find(this,&local_b8,param_1);
    if ((pCVar2->chunk_iterator_).bytes_remaining_ == 0) {
      return false;
    }
  }
  return true;
}

// Contains @ 1501be130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __cdecl absl::lts_20240722::Cord::Contains(class std::basic_string_view<char,struct
   std::char_traits<char> >)const __ptr64 */

bool __thiscall
absl::lts_20240722::Cord::Contains
          (Cord *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  CharIterator *pCVar1;
  undefined1 auStack_e8 [32];
  basic_string_view<char,std::char_traits<char>_> local_c8;
  CharIterator local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_1->_Mysize != 0) {
    local_c8._Mydata = param_1->_Mydata;
    local_c8._Mysize = param_1->_Mysize;
    pCVar1 = Find(this,&local_b8,&local_c8);
    if ((pCVar1->chunk_iterator_).bytes_remaining_ == 0) {
      return false;
    }
  }
  return true;
}

// CopyCordToString @ 1501be1b0

/* void __cdecl absl::lts_20240722::CopyCordToString(class absl::lts_20240722::Cord const &
   __ptr64,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *
   __ptr64) */

void __cdecl
absl::lts_20240722::CopyCordToString
          (Cord *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  
  if (((param_1->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
              (param_2,((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length,'\0');
    if (0xf < (param_2->_Mypair)._Myval2._Myres) {
      param_2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    Cord::CopyToArraySlowPath(param_1,(char *)param_2);
    return;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize(param_2,0xf,'\0');
  pbVar3 = param_2;
  if (0xf < (param_2->_Mypair)._Myval2._Myres) {
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_2->_Mypair)._Myval2._Bx._Ptr;
  }
  (pbVar3->_Mypair)._Myval2._Bx._Ptr =
       *(char **)((longlong)&(param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + 1);
  *(undefined4 *)((longlong)&(pbVar3->_Mypair)._Myval2._Bx + 8) =
       *(undefined4 *)((longlong)&(param_1->contents_).data_.rep_.field0_0x0 + 9);
  *(undefined2 *)((longlong)&(pbVar3->_Mypair)._Myval2._Bx + 0xc) =
       *(undefined2 *)((longlong)&(param_1->contents_).data_.rep_.field0_0x0 + 0xd);
  (pbVar3->_Mypair)._Myval2._Bx._Buf[0xe] = (param_1->contents_).data_.rep_.field0_0x0.data[0xf];
  puVar1 = &(param_2->_Mypair)._Myval2._Mysize;
  uVar2 = (ulonglong)(longlong)(param_1->contents_).data_.rep_.field0_0x0.data[0] >> 1;
  if (uVar2 <= *puVar1) {
    if (0xf < (param_2->_Mypair)._Myval2._Myres) {
      param_2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_2->_Mypair)._Myval2._Bx._Ptr;
    }
    *puVar1 = uVar2;
    (param_2->_Mypair)._Myval2._Bx._Buf[uVar2] = '\0';
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_String_val<std::_Simple_types<char>_>::_Xran();
}

// CopyTo @ 1501be270

/* public: void __cdecl absl::lts_20240722::Cord::InlineRep::CopyTo(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64)const
   __ptr64 */

void __thiscall
absl::lts_20240722::Cord::InlineRep::CopyTo
          (InlineRep *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize(param_1,0xf,'\0');
  pbVar3 = param_1;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  puVar1 = &(param_1->_Mypair)._Myval2._Mysize;
  (pbVar3->_Mypair)._Myval2._Bx._Ptr =
       *(char **)((longlong)&(this->data_).rep_.field0_0x0.as_tree.cordz_info + 1);
  *(undefined4 *)((longlong)&(pbVar3->_Mypair)._Myval2._Bx + 8) =
       *(undefined4 *)((longlong)&(this->data_).rep_.field0_0x0 + 9);
  *(undefined2 *)((longlong)&(pbVar3->_Mypair)._Myval2._Bx + 0xc) =
       *(undefined2 *)((longlong)&(this->data_).rep_.field0_0x0 + 0xd);
  (pbVar3->_Mypair)._Myval2._Bx._Buf[0xe] = (this->data_).rep_.field0_0x0.data[0xf];
  uVar2 = (ulonglong)(longlong)(this->data_).rep_.field0_0x0.data[0] >> 1;
  if (uVar2 <= *puVar1) {
    if (0xf < (param_1->_Mypair)._Myval2._Myres) {
      param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    *puVar1 = uVar2;
    (param_1->_Mypair)._Myval2._Bx._Buf[uVar2] = '\0';
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_String_val<std::_Simple_types<char>_>::_Xran();
}

// CopyToArray @ 1501be300

/* public: void __cdecl absl::lts_20240722::Cord::InlineRep::CopyToArray(char * __ptr64)const
   __ptr64 */

void __thiscall absl::lts_20240722::Cord::InlineRep::CopyToArray(InlineRep *this,char *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = (ulonglong)(this->data_).rep_.field0_0x0.data[0];
  pcVar1 = (this->data_).rep_.field0_0x0.data + 1;
  uVar5 = uVar4 >> 1;
  if (7 < uVar5) {
    uVar3 = *(undefined8 *)((longlong)this + (uVar5 - 7));
    *(undefined8 *)param_1 = *(undefined8 *)pcVar1;
    *(undefined8 *)(param_1 + (uVar5 - 8)) = uVar3;
    return;
  }
  if (3 < uVar5) {
    uVar2 = *(undefined4 *)((longlong)this + (uVar5 - 3));
    *(undefined4 *)param_1 = *(undefined4 *)pcVar1;
    *(undefined4 *)(param_1 + (uVar5 - 4)) = uVar2;
    return;
  }
  if (uVar5 != 0) {
    *param_1 = *pcVar1;
    uVar4 = uVar4 >> 2;
    param_1[uVar4] = pcVar1[uVar4];
    param_1[uVar5 - 1] = (this->data_).rep_.field0_0x0.data[uVar5];
  }
  return;
}

// CopyToArrayImpl @ 1501be370

/* private: void __cdecl absl::lts_20240722::Cord::CopyToArrayImpl(char * __ptr64)const __ptr64 */

void __thiscall absl::lts_20240722::Cord::CopyToArrayImpl(Cord *this,char *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)(this->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar3 & 1) != 0) {
    CopyToArraySlowPath(this,param_1);
    return;
  }
  uVar4 = uVar3 >> 1;
  if (uVar4 == 0) {
    return;
  }
  if (7 < uVar4) {
    uVar2 = *(undefined8 *)((longlong)this + (uVar4 - 7));
    *(undefined8 *)param_1 =
         *(undefined8 *)((longlong)&(this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + 1);
    *(undefined8 *)(param_1 + (uVar4 - 8)) = uVar2;
    return;
  }
  if (3 < uVar4) {
    uVar1 = *(undefined4 *)((longlong)this + (uVar4 - 3));
    *(undefined4 *)param_1 = *(undefined4 *)((longlong)&(this->contents_).data_.rep_.field0_0x0 + 1)
    ;
    *(undefined4 *)(param_1 + (uVar4 - 4)) = uVar1;
    return;
  }
  *param_1 = (this->contents_).data_.rep_.field0_0x0.data[1];
  param_1[uVar3 >> 2] = (this->contents_).data_.rep_.field0_0x0.data[(uVar3 >> 2) + 1];
  param_1[uVar4 - 1] = (this->contents_).data_.rep_.field0_0x0.data[uVar4];
  return;
}

// CopyToArraySlowPath @ 1501be3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* private: void __cdecl absl::lts_20240722::Cord::CopyToArraySlowPath(char * __ptr64)const __ptr64
    */

void __thiscall absl::lts_20240722::Cord::CopyToArraySlowPath(Cord *this,char *param_1)

{
  ulong64 uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  CordRep *pCVar6;
  uchar **ppuVar7;
  CordRep *pCVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  uchar *_Size;
  uchar *puVar11;
  byte bVar12;
  CordRepBtree *pCVar13;
  int iVar14;
  CordRepBtree *pCVar15;
  byte bVar16;
  ulong64 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_158 [32];
  char *local_138;
  undefined8 local_130;
  uchar *puStack_128;
  basic_string_view<char,std::char_traits<char>_> local_120;
  uchar *local_110;
  ulong64 uStack_108;
  uchar *local_100;
  ulong64 local_f8;
  ChunkIterator local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  pCVar6 = (CordRep *)0x0;
  local_120._Mydata = (char *)0x0;
  local_120._Mysize = 0;
  pCVar8 = pCVar6;
  if (((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) {
    pCVar8 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep;
  }
  local_138 = param_1;
  bVar3 = GetFlatAux(pCVar8,&local_120);
  if (bVar3) {
    memcpy(param_1,local_120._Mydata,local_120._Mysize);
  }
  else {
    bVar16 = (this->contents_).data_.rep_.field0_0x0.data[0];
    local_e8.btree_reader_.navigator_.height_ = -1;
    local_e8.current_chunk_._Mydata = (char *)0x0;
    local_e8.current_chunk_._Mysize = 0;
    local_e8.current_leaf_ = (CordRep *)0x0;
    local_e8.btree_reader_.remaining_ = 0;
    bVar12 = bVar16 & 1;
    if ((bVar12 == 0) ||
       (pCVar8 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar8 == (CordRep *)0x0)) {
      puVar11 = (uchar *)((ulonglong)(longlong)(char)bVar16 >> 1);
      pCVar8 = (CordRep *)((longlong)&(this->contents_).data_.rep_.field0_0x0 + 1);
      local_130 = pCVar6;
      puStack_128 = puVar11;
      local_e8.current_chunk_._Mydata = (char *)pCVar6;
      _Size = puVar11;
      local_e8.current_chunk_._Mysize = (ulong64)puVar11;
      uVar17 = local_e8.btree_reader_.remaining_;
      iVar14 = local_e8.btree_reader_.navigator_.height_;
      bVar16 = local_e8.btree_reader_.navigator_.index_[0];
      pCVar15 = local_e8.btree_reader_.navigator_.node_[0];
      if (bVar12 == 0) {
        local_130 = pCVar8;
        pCVar6 = pCVar8;
        local_e8.current_chunk_._Mydata = (char *)pCVar8;
      }
    }
    else {
      local_e8.bytes_remaining_ = pCVar8->length;
      if ((uchar *)local_e8.bytes_remaining_ == (uchar *)0x0) {
        return;
      }
      ChunkIterator::InitTree(&local_e8,pCVar8);
      puVar11 = (uchar *)local_e8.bytes_remaining_;
      pCVar6 = (CordRep *)local_e8.current_chunk_._Mydata;
      _Size = (uchar *)local_e8.current_chunk_._Mysize;
      uVar17 = local_e8.btree_reader_.remaining_;
      iVar14 = local_e8.btree_reader_.navigator_.height_;
      bVar16 = local_e8.btree_reader_.navigator_.index_[0];
      pCVar15 = local_e8.btree_reader_.navigator_.node_[0];
    }
    while (puVar11 != (uchar *)0x0) {
      memcpy(local_138,pCVar6,(size_t)_Size);
      local_138 = local_138 + (longlong)_Size;
      puVar11 = puVar11 + -(longlong)_Size;
      local_e8.bytes_remaining_ = (ulong64)puVar11;
      if (puVar11 != (uchar *)0x0) {
        if ((iVar14 < 0) || (local_e8.btree_reader_.navigator_.node_[iVar14] == (CordRepBtree *)0x0)
           ) {
          pCVar6 = (CordRep *)0x0;
          _Size = (uchar *)0x0;
          local_e8.current_chunk_._Mydata = (char *)0x0;
          local_e8.current_chunk_._Mysize = 0;
        }
        else {
          if (uVar17 == 0) {
            local_130._0_4_ = 0;
            local_130._4_4_ = 0;
            local_130 = (CordRep *)0x0;
            puStack_128 = (uchar *)0x0;
            uVar18 = (undefined4)local_130;
            uVar19 = local_130._4_4_;
            uVar20 = (undefined4)local_130;
            uVar21 = local_130._4_4_;
          }
          else {
            if ((ulonglong)bVar16 == (ulonglong)*(byte *)((longlong)&pCVar15->_padding_ + 7) - 1) {
              lVar4 = 0;
              do {
                lVar5 = lVar4;
                lVar4 = lVar5 + 1;
                if (iVar14 < lVar4) {
                  pCVar6 = (CordRep *)0x0;
                  goto LAB_1501be60e;
                }
                pCVar13 = local_e8.btree_reader_.navigator_.node_[lVar5 + 1];
                uVar10 = (ulonglong)local_e8.btree_reader_.navigator_.index_[lVar5 + 1] + 1;
              } while (uVar10 == *(byte *)((longlong)&pCVar13->_padding_ + 7));
              local_e8.btree_reader_.navigator_.index_[lVar5 + 1] = (uchar)uVar10;
              do {
                pCVar13 = *(CordRepBtree **)((longlong)pCVar13->edges_ + uVar10 * 8);
                lVar5 = lVar4 + -1;
                bVar16 = *(uchar *)((longlong)&pCVar13->_padding_ + 6);
                uVar10 = (ulonglong)bVar16;
                local_e8.btree_reader_.navigator_.node_[lVar4 + -1] = pCVar13;
                local_e8.btree_reader_.navigator_.index_[lVar4 + -1] = bVar16;
                lVar4 = lVar5;
              } while (0 < lVar5);
              pCVar6 = *(CordRep **)((longlong)pCVar13->edges_ + uVar10 * 8);
              pCVar15 = local_e8.btree_reader_.navigator_.node_[0];
              uVar17 = local_e8.btree_reader_.remaining_;
              iVar14 = local_e8.btree_reader_.navigator_.height_;
              bVar16 = local_e8.btree_reader_.navigator_.index_[0];
            }
            else {
              bVar16 = bVar16 + 1;
              pCVar6 = pCVar15->edges_[bVar16];
              local_e8.btree_reader_.navigator_.index_[0] = bVar16;
            }
LAB_1501be60e:
            uVar1 = pCVar6->length;
            uVar9 = 0;
            uVar17 = uVar17 - uVar1;
            if (pCVar6->tag == '\x01') {
              uVar9 = pCVar6[1].length;
              pCVar6 = *(CordRep **)&pCVar6[1].refcount;
            }
            if (pCVar6->tag < 6) {
              ppuVar7 = &local_100;
              local_100 = (uchar *)(uVar9 + pCVar6[1].length);
              local_f8 = uVar1;
            }
            else {
              uStack_108 = uVar1;
              local_110 = pCVar6->storage + uVar9;
              ppuVar7 = &local_110;
            }
            uVar18 = *(undefined4 *)ppuVar7;
            uVar19 = *(undefined4 *)((longlong)ppuVar7 + 4);
            local_130 = (CordRep *)*ppuVar7;
            uVar20 = *(undefined4 *)(ppuVar7 + 1);
            uVar21 = *(undefined4 *)((longlong)ppuVar7 + 0xc);
            puStack_128 = ppuVar7[1];
            local_e8.btree_reader_.remaining_ = uVar17;
          }
          auVar2._4_4_ = uVar19;
          auVar2._0_4_ = uVar18;
          auVar2._8_4_ = uVar20;
          auVar2._12_4_ = uVar21;
          local_e8.current_chunk_._Mydata = (char *)CONCAT44(uVar19,uVar18);
          local_e8.current_chunk_._Mysize = CONCAT44(uVar21,uVar20);
          pCVar6 = (CordRep *)CONCAT44(uVar19,uVar18);
          _Size = auVar2._8_8_;
        }
      }
    }
  }
  return;
}

// FUN_1501be6e0 @ 1501be6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong * FUN_1501be6e0(ulonglong *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  void *pvVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  void *local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  ulonglong uStack_38;
  void *local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar4 = param_1[2];
  if ((uVar4 < 0x200) || (uVar4 < param_1[3] >> 1)) {
    if (0xf < param_1[3]) {
      param_1 = (ulonglong *)*param_1;
    }
    puVar2 = (ulonglong *)FUN_1501c1c80(param_1,uVar4,0);
  }
  else {
    puVar1 = param_1;
    if (0xf < param_1[3]) {
      puVar1 = (ulonglong *)*param_1;
    }
    local_50 = (void *)*param_1;
    uStack_48 = param_1[1];
    local_40 = param_1[2];
    uStack_38 = param_1[3];
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    local_30 = local_50;
    uStack_28 = uStack_48;
    local_20 = local_40;
    uStack_18 = uStack_38;
    local_58 = operator_new(0x40);
    if (local_58 == (ulonglong *)0x0) {
      puVar2 = (ulonglong *)0x0;
      uVar5 = uStack_18;
    }
    else {
      *(undefined4 *)(local_58 + 1) = 2;
      local_58[6] = 0;
      local_58[7] = 0;
      local_58[4] = (ulonglong)local_50;
      local_58[5] = uStack_48;
      local_58[6] = local_40;
      local_58[7] = uStack_38;
      local_30 = (void *)((ulonglong)local_30 & 0xffffffffffffff00);
      local_58[3] = (ulonglong)FUN_1501c26d0;
      puVar2 = local_58;
      uVar5 = 0xf;
    }
    *puVar2 = uVar4;
    *(undefined1 *)((longlong)puVar2 + 0xc) = 5;
    puVar2[2] = (ulonglong)puVar1;
    if (0xf < uVar5) {
      uVar4 = uVar5 + 1;
      pvVar3 = local_30;
      if (0xfff < uVar4) {
        uVar4 = uVar5 + 0x28;
        pvVar3 = *(void **)((longlong)local_30 + -8);
        if (0x1f < (ulonglong)((longlong)local_30 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar3,uVar4);
    }
    puVar1 = puVar2 + 4;
    if (0xf < puVar2[7]) {
      puVar1 = (ulonglong *)*puVar1;
    }
    puVar2[2] = (ulonglong)puVar1;
  }
  return puVar2;
}

// Create @ 1501be860

/* public: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::Create(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) */

CordRepBtree * __cdecl absl::lts_20240722::cord_internal::CordRepBtree::Create(CordRep *param_1)

{
  CordRep *pCVar1;
  CordRepBtree *pCVar2;
  char cVar3;
  
  if (param_1->tag < 5) {
    pCVar1 = param_1;
    if (param_1->tag == 1) {
      pCVar1 = *(CordRep **)&param_1[1].refcount;
    }
    if (pCVar1->tag < 5) {
      pCVar2 = CreateSlow(param_1);
      return pCVar2;
    }
  }
  pCVar2 = ::operator_new(0x40);
  if (pCVar2 != (CordRepBtree *)0x0) {
    *(undefined4 *)&pCVar2->_padding_ = 2;
  }
  if (param_1->tag == '\x03') {
    cVar3 = param_1->storage[0] + '\x01';
  }
  else {
    cVar3 = '\0';
  }
  pCVar2->_padding_ = param_1->length;
  *(char *)((longlong)&pCVar2->_padding_ + 5) = cVar3;
  *(undefined2 *)((longlong)&pCVar2->_padding_ + 6) = 0x100;
  pCVar2->edges_[0] = param_1;
  *(undefined1 *)((longlong)&pCVar2->_padding_ + 4) = 3;
  return pCVar2;
}

// Create @ 1501be8e0

/* public: static struct absl::lts_20240722::cord_internal::CordRepFlat * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepFlat::Create(class std::basic_string_view<char,struct
   std::char_traits<char> >,unsigned __int64) */

CordRepFlat * __cdecl
absl::lts_20240722::cord_internal::CordRepFlat::Create
          (basic_string_view<char,std::char_traits<char>_> *param_1,__uint64 param_2)

{
  size_t _Size;
  CordRepFlat *pCVar1;
  
  _Size = param_1->_Mysize;
  if (0xff3 < param_2) {
    param_2 = 0xff3;
  }
  pCVar1 = New(_Size + param_2);
  memcpy(&pCVar1->field_0xd,param_1->_Mydata,_Size);
  *(size_t *)pCVar1 = _Size;
  return pCVar1;
}

// FUN_1501be940 @ 1501be940

byte * FUN_1501be940(byte *param_1,char *param_2,__uint64 param_3,ulonglong param_4)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  CordRepFlat *pCVar8;
  Rep_u_0 *pRVar9;
  __uint64 _Var10;
  ulonglong uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  Rep_u_0 local_30;
  Rep_u_0 local_20;
  
  cVar1 = *param_2;
  uVar13 = (ulonglong)(longlong)cVar1 >> 1;
  uVar11 = ~uVar13;
  if (param_4 < ~uVar13) {
    uVar11 = param_4;
  }
  _Var10 = uVar11 + uVar13;
  if (param_3 == 0) {
    if (_Var10 < 0x10) {
      local_30.short_rep.raw_size = 1;
      local_30._1_7_ = 0;
      local_30.short_rep.data[7] = '\0';
      local_30._9_4_ = 0;
      local_30._13_2_ = 0;
      local_30.short_rep.data[0xe] = '\0';
    }
    else {
      pCVar8 = absl::lts_20240722::cord_internal::CordRepFlat::New(_Var10);
      *(undefined8 *)pCVar8 = 0;
      local_30.short_rep.raw_size = (char)pCVar8;
      local_30._1_7_ = (undefined7)((ulonglong)pCVar8 >> 8);
    }
    pRVar9 = &local_30;
    bVar6 = false;
    bVar5 = true;
  }
  else {
    absl::lts_20240722::CordBuffer::CreateWithCustomLimitImpl<>
              ((CordBuffer *)&local_20.long_rep,param_3,_Var10);
    pRVar9 = &local_20;
    bVar6 = true;
    bVar5 = false;
  }
  uVar4 = *(undefined8 *)((longlong)pRVar9 + 8);
  *(CordRepFlat **)param_1 = (pRVar9->long_rep).rep;
  *(undefined8 *)(param_1 + 8) = uVar4;
  (pRVar9->short_rep).raw_size = '\x01';
  if ((bVar5) && ((local_30.short_rep.raw_size & 1U) == 0)) {
    bVar2 = *(byte *)((longlong)CONCAT71(local_30._1_7_,local_30.short_rep.raw_size) + 0xc);
    if (bVar2 < 0x43) {
      iVar7 = (uint)bVar2 * 8 + -0x10;
    }
    else if (bVar2 < 0xbb) {
      iVar7 = (bVar2 - 0x3a) * 0x40;
    }
    else {
      iVar7 = (bVar2 - 0xb8) * 0x1000;
    }
    operator_delete((void *)CONCAT71(local_30._1_7_,local_30.short_rep.raw_size),(longlong)iVar7);
  }
  if ((bVar6) && (((ulonglong)local_20.long_rep.rep & 1) == 0)) {
    bVar2 = (local_20.long_rep.rep)->field_0xc;
    if (bVar2 < 0x43) {
      iVar7 = (uint)bVar2 * 8 + -0x10;
    }
    else if (bVar2 < 0xbb) {
      iVar7 = (bVar2 - 0x3a) * 0x40;
    }
    else {
      iVar7 = (bVar2 - 0xb8) * 0x1000;
    }
    operator_delete(local_20.long_rep.rep,(longlong)iVar7);
  }
  if ((*param_1 & 1) == 0) {
    pbVar12 = (byte *)(*(longlong *)param_1 + 0xd);
  }
  else {
    pbVar12 = param_1 + 1;
  }
  if (uVar13 < 8) {
    if (uVar13 < 4) {
      if (uVar13 != 0) {
        *pbVar12 = param_2[1];
        uVar11 = (ulonglong)(longlong)cVar1 >> 2;
        pbVar12[uVar11] = param_2[uVar11 + 1];
        pbVar12[uVar13 - 1] = param_2[uVar13];
      }
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + (uVar13 - 3));
      *(undefined4 *)pbVar12 = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)(pbVar12 + (uVar13 - 4)) = uVar3;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + (uVar13 - 7));
    *(undefined8 *)pbVar12 = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(pbVar12 + (uVar13 - 8)) = uVar4;
  }
  if ((*param_1 & 1) == 0) {
    **(ulonglong **)param_1 = uVar13;
  }
  else {
    *param_1 = (char)uVar13 * '\x02' + 1;
  }
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  return param_1;
}

// FUN_1501beb10 @ 1501beb10

CordRepFlat * FUN_1501beb10(void *param_1,size_t param_2,longlong param_3)

{
  CordRepFlat *pCVar1;
  
  pCVar1 = absl::lts_20240722::cord_internal::CordRepFlat::New(param_2 + param_3);
  *(size_t *)pCVar1 = param_2;
  memcpy(&pCVar1->field_0xd,param_1,param_2);
  return pCVar1;
}

// CreateWithCustomLimit @ 1501beb60

/* public: static class absl::lts_20240722::CordBuffer __cdecl
   absl::lts_20240722::CordBuffer::CreateWithCustomLimit(unsigned __int64,unsigned __int64) */

CordBuffer * __cdecl
absl::lts_20240722::CordBuffer::CreateWithCustomLimit
          (CordBuffer *__return_storage_ptr__,__uint64 param_1,__uint64 param_2)

{
  CreateWithCustomLimitImpl<>(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Data @ 1501beb80

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::Data(unsigned __int64)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::Data
          (CordRepBtree *this,
          basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,__uint64 param_1)

{
  ulong64 uVar1;
  CordRep *pCVar2;
  ulong64 uVar3;
  
  pCVar2 = this->edges_[param_1];
  uVar3 = 0;
  uVar1 = pCVar2->length;
  if (pCVar2->tag == '\x01') {
    uVar3 = pCVar2[1].length;
    pCVar2 = *(CordRep **)&pCVar2[1].refcount;
  }
  if (5 < pCVar2->tag) {
    __return_storage_ptr__->_Mydata = (char *)(pCVar2->storage + uVar3);
    __return_storage_ptr__->_Mysize = uVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->_Mydata = (char *)(uVar3 + pCVar2[1].length);
  __return_storage_ptr__->_Mysize = uVar1;
  return __return_storage_ptr__;
}

// Deallocate @ 1501bebf0

/* public: static void __cdecl absl::lts_20240722::inlined_vector_internal::MallocAdapter<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>,0>::Deallocate(class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> & __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64,unsigned __int64) */

void __cdecl
absl::lts_20240722::inlined_vector_internal::
MallocAdapter<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,0>::Deallocate
          (allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_1,CordRep **param_2
          ,__uint64 param_3)

{
  CordRep *pCVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 8;
  pCVar1 = (CordRep *)param_2;
  if (0xfff < uVar2) {
    pCVar1 = param_2[-1];
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)pCVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pCVar1,uVar2);
  return;
}

// Deallocate @ 1501bec40

/* public: static void __cdecl absl::lts_20240722::inlined_vector_internal::MallocAdapter<class
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl>,0>::Deallocate(class
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl> & __ptr64,class
   absl::lts_20240722::str_format_internal::FormatArgImpl * __ptr64,unsigned __int64) */

void __cdecl
absl::lts_20240722::inlined_vector_internal::
MallocAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,0>::Deallocate
          (allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *param_1,
          FormatArgImpl *param_2,__uint64 param_3)

{
  FormatArgImpl *pFVar1;
  ulong64 uVar2;
  
  uVar2 = param_3 * 0x10;
  pFVar1 = param_2;
  if (0xfff < uVar2) {
    pFVar1 = (FormatArgImpl *)param_2[-1].dispatcher_;
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)pFVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pFVar1,uVar2);
  return;
}

// DeallocateIfAllocated @ 1501bec90

/* public: void __cdecl absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::DeallocateIfAllocated(void) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::DeallocateIfAllocated
          (Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
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

// DeallocateIfAllocated @ 1501becf0

/* public: void __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::DeallocateIfAllocated(void) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::DeallocateIfAllocated
          (Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
           *this)

{
  FormatArgImpl *pFVar1;
  FormatArgImpl *pFVar2;
  ulong64 uVar3;
  
  if ((*(byte *)&this->metadata_ & 1) == 0) {
    return;
  }
  pFVar1 = (this->data_).allocated.allocated_data;
  uVar3 = (this->data_).allocated.allocated_capacity * 0x10;
  pFVar2 = pFVar1;
  if (0xfff < uVar3) {
    pFVar2 = (FormatArgImpl *)pFVar1[-1].dispatcher_;
    uVar3 = uVar3 + 0x27;
    if (0x1f < (ulonglong)((longlong)pFVar1 + (-8 - (longlong)pFVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pFVar2,uVar3);
  return;
}

// DestroyContents @ 1501bed50

/* private: void __cdecl absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::DestroyContents(void) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::DestroyContents(Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
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

// DestroyContents @ 1501bedb0

/* private: void __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::DestroyContents(void) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::DestroyContents(Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
                  *this)

{
  FormatArgImpl *pFVar1;
  FormatArgImpl *pFVar2;
  ulong64 uVar3;
  
  if ((*(byte *)&this->metadata_ & 1) == 0) {
    return;
  }
  pFVar1 = (this->data_).allocated.allocated_data;
  uVar3 = (this->data_).allocated.allocated_capacity * 0x10;
  pFVar2 = pFVar1;
  if (0xfff < uVar3) {
    pFVar2 = (FormatArgImpl *)pFVar1[-1].dispatcher_;
    uVar3 = uVar3 + 0x27;
    if (0x1f < (ulonglong)((longlong)pFVar1 + (-8 - (longlong)pFVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pFVar2,uVar3);
  return;
}

// DestroyCordSlow @ 1501bee10

/* private: void __cdecl absl::lts_20240722::Cord::DestroyCordSlow(void) __ptr64 */

void __thiscall absl::lts_20240722::Cord::DestroyCordSlow(Cord *this)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  CordRep *pCVar3;
  CordzInfo *this_00;
  
  this_00 = (CordzInfo *)((this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + -1);
  if (this_00 != (CordzInfo *)0x0) {
    cord_internal::CordzInfo::Untrack(this_00);
  }
  pCVar3 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep;
  LOCK();
  pRVar1 = &pCVar3->refcount;
  aVar2 = pRVar1->count_;
  pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x2) {
    cord_internal::CordRep::Destroy(pCVar3);
    return;
  }
  return;
}

// DestroyElements @ 1501bee50

/* public: static void __cdecl absl::lts_20240722::inlined_vector_internal::DestroyAdapter<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep *
   __ptr64>,1>::DestroyElements(class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> & __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64,unsigned __int64) */

void __cdecl
absl::lts_20240722::inlined_vector_internal::
DestroyAdapter<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,1>::
DestroyElements(allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_1,
               CordRep **param_2,__uint64 param_3)

{
  return;
}

// DestroyElements @ 1501bee60

/* public: static void __cdecl absl::lts_20240722::inlined_vector_internal::DestroyAdapter<class
   std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl>,1>::DestroyElements(class
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl> & __ptr64,class
   absl::lts_20240722::str_format_internal::FormatArgImpl * __ptr64,unsigned __int64) */

void __cdecl
absl::lts_20240722::inlined_vector_internal::
DestroyAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,1>::
DestroyElements(allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *param_1,
               FormatArgImpl *param_2,__uint64 param_3)

{
  return;
}

// DidAllocate @ 1501bee70

/* public: bool __cdecl absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> >::DidAllocate(void)
   __ptr64 */

bool __thiscall
absl::lts_20240722::inlined_vector_internal::
AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>::
DidAllocate(AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
            *this)

{
  return *(longlong *)this != 0;
}

// FUN_1501bee80 @ 1501bee80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501bee80(CordRep *param_1,bool param_2,
                  basic_ostream<char,std::char_traits<char>_> *param_3)

{
  byte bVar1;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var2;
  crc32c_t cVar3;
  undefined8 *puVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  undefined4 extraout_var;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  int iVar7;
  Data DVar8;
  undefined8 uVar9;
  __uint64 _Var10;
  ulong64 uVar11;
  char *pcVar12;
  undefined1 auStack_158 [32];
  basic_string_view<char,std::char_traits<char>_> local_138;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined8 *local_118;
  char *local_110;
  undefined8 local_108;
  ulonglong *local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  _Bxty local_d8;
  ulonglong local_c0;
  undefined8 local_b8;
  code *local_b0;
  char **local_a8;
  ulonglong local_a0;
  Data local_98;
  longlong local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  while( true ) {
    while( true ) {
      puVar4 = (undefined8 *)std::setw((__int64)local_f8);
      (*(code *)*puVar4)(&param_3->field_0x0 + *(int *)(*(longlong *)param_3 + 4),puVar4[1]);
      _Var10 = 0;
      if (param_1 != (CordRep *)0x0) {
        _Var10 = (longlong)((int)(param_1->refcount).count_ >> 1);
      }
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_3,_Var10);
      pbVar5 = std::operator<<<std::char_traits<char>_>(param_3," ");
      puVar4 = (undefined8 *)std::setw((__int64)local_e8);
      (*(code *)*puVar4)(&pbVar5->field_0x0 + *(int *)(*(longlong *)pbVar5 + 4),puVar4[1]);
      _Var10 = 0;
      if (param_1 != (CordRep *)0x0) {
        _Var10 = param_1->length;
      }
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,_Var10);
      std::operator<<<std::char_traits<char>_>(param_3," [");
      if (param_2 != false) {
        std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_3,param_1);
      }
      std::operator<<<std::char_traits<char>_>(param_3,"]");
      pbVar5 = std::operator<<<std::char_traits<char>_>(param_3," ");
      puVar4 = (undefined8 *)std::setw((__int64)&local_d8);
      (*(code *)*puVar4)(&pbVar5->field_0x0 + *(int *)(*(longlong *)pbVar5 + 4),puVar4[1]);
      std::operator<<<std::char_traits<char>_>(pbVar5,"");
      if (param_1 == (CordRep *)0x0) {
        pcVar12 = "NULL\n";
        goto LAB_1501bf2c1;
      }
      bVar1 = param_1->tag;
      if (bVar1 != 2) break;
      pbVar5 = std::operator<<<std::char_traits<char>_>(param_3,"CRC crc=");
      cVar3 = absl::lts_20240722::crc_internal::CrcCordState::Checksum
                        ((CrcCordState *)&param_1[1].refcount);
      local_120 = *(undefined4 *)CONCAT44(extraout_var,cVar3.crc_);
      local_110 = "%08x";
      local_108 = 4;
      local_b8 = CONCAT44(uStack_11c,local_120);
      local_b0 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<unsigned_int>;
      local_a8 = &local_110;
      local_100 = &local_a0;
      local_a0 = 0;
      local_118 = &local_b8;
      absl::lts_20240722::inlined_vector_internal::
      ConstructElements<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::inlined_vector_internal::IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>_>
                ((allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *)&local_a0,
                 (FormatArgImpl *)&local_98,
                 (IteratorValueAdapter<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,absl::lts_20240722::str_format_internal::FormatArgImpl_const*___ptr64>
                  *)&local_118,1);
      local_a0 = local_a0 + 2;
      pbVar5 = absl::lts_20240722::str_format_internal::Streamable::Print
                         ((Streamable *)&local_a8,
                          (basic_ostream<char,struct_std::char_traits<char>_> *)pbVar5);
      if ((local_a0 != 0) && ((local_a0 & 1) != 0)) {
        uVar11 = local_90 * 0x10;
        DVar8 = local_98;
        if (0xfff < uVar11) {
          uVar11 = uVar11 + 0x27;
          DVar8 = (Data)((Data *)((longlong)local_98.ptr + -8))->ptr;
          if (0x1f < (ulonglong)((longlong)local_98.ptr + (-8 - (longlong)DVar8))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(DVar8.ptr,uVar11);
      }
      std::operator<<<std::char_traits<char>_>(pbVar5,"\n");
      param_1 = (CordRep *)param_1[1].length;
    }
    if (bVar1 != 1) break;
    pbVar5 = std::operator<<<std::char_traits<char>_>(param_3,"SUBSTRING @ ");
    pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
             std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,param_1[1].length);
    std::operator<<<std::char_traits<char>_>(pbVar5,"\n");
    param_1 = *(CordRep **)&param_1[1].refcount;
  }
  if (bVar1 == 5) {
    std::operator<<<std::char_traits<char>_>(param_3,"EXTERNAL [");
    if (param_2 == false) goto LAB_1501bf286;
    local_138._Mysize = param_1->length;
    local_138._Mydata = (char *)param_1[1].length;
    pbVar6 = absl::lts_20240722::CEscape
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_d8
                        ,&local_138);
    p_Var2 = &pbVar6->_Mypair;
    if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar6->_Mypair)._Myval2._Bx._Ptr;
    }
    std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
              (param_3,(char *)pbVar6,(p_Var2->_Myval2)._Mysize);
    if (local_c0 < 0x10) goto LAB_1501bf286;
    uVar11 = local_c0 + 1;
    uVar9 = local_d8._Ptr;
    if (0xfff < uVar11) {
      uVar11 = local_c0 + 0x28;
      uVar9 = *(char **)(local_d8._Ptr + -8);
      if ((char *)0x1f < local_d8._Ptr + (-8 - (longlong)*(char **)(local_d8._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else {
    if (bVar1 < 6) {
      local_138._Mydata = "";
      local_138._Mysize = 0;
      absl::lts_20240722::cord_internal::CordRepBtree::Dump(param_1,&local_138,param_2,param_3);
      return;
    }
    pbVar5 = std::operator<<<std::char_traits<char>_>(param_3,"FLAT cap=");
    bVar1 = param_1->tag;
    if (bVar1 < 0x43) {
      iVar7 = (uint)bVar1 * 8 + -0x10;
    }
    else if (bVar1 < 0xbb) {
      iVar7 = (bVar1 - 0x3a) * 0x40;
    }
    else {
      iVar7 = (bVar1 - 0xb8) * 0x1000;
    }
    pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
             std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       (pbVar5,(longlong)iVar7 - 0xd);
    std::operator<<<std::char_traits<char>_>(pbVar5," [");
    if (param_2 == false) goto LAB_1501bf286;
    local_138._Mysize = param_1->length;
    local_138._Mydata = (char *)param_1->storage;
    pbVar6 = absl::lts_20240722::CEscape
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_d8
                        ,&local_138);
    p_Var2 = &pbVar6->_Mypair;
    if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar6->_Mypair)._Myval2._Bx._Ptr;
    }
    std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
              (param_3,(char *)pbVar6,(p_Var2->_Myval2)._Mysize);
    if (local_c0 < 0x10) goto LAB_1501bf286;
    uVar11 = local_c0 + 1;
    uVar9 = local_d8._Ptr;
    if (0xfff < uVar11) {
      uVar11 = local_c0 + 0x28;
      uVar9 = *(undefined8 *)(local_d8._Ptr + -8);
      if ((char *)0x1f < local_d8._Ptr + (-8 - uVar9)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  operator_delete((void *)uVar9,uVar11);
LAB_1501bf286:
  pcVar12 = "]\n";
LAB_1501bf2c1:
  std::operator<<<std::char_traits<char>_>(param_3,pcVar12);
  return;
}

// Edge @ 1501bf2f0

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::Edge(enum
   absl::lts_20240722::cord_internal::CordRepBtree::EdgeType)const __ptr64 */

CordRep * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::Edge(CordRepBtree *this,EdgeType param_1)

{
  if (param_1 == kFront) {
    return this->edges_[*(byte *)((longlong)&this->_padding_ + 6)];
  }
  return this->edges_[(ulonglong)*(byte *)((longlong)&this->_padding_ + 7) - 1];
}

// EmplaceTree @ 1501bf310

/* public: void __cdecl absl::lts_20240722::Cord::InlineRep::EmplaceTree(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::InlineRep::EmplaceTree
          (InlineRep *this,CordRep *param_1,MethodIdentifier param_2)

{
  (this->data_).rep_.field0_0x0.as_tree.rep = param_1;
  (this->data_).rep_.field0_0x0.as_tree.cordz_info = 1;
  return;
}

// EndsWith @ 1501bf330

/* public: bool __cdecl absl::lts_20240722::Cord::EndsWith(class absl::lts_20240722::Cord const &
   __ptr64)const __ptr64 */

bool __thiscall absl::lts_20240722::Cord::EndsWith(Cord *this,Cord *param_1)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  byte bVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  bool bVar9;
  Rep_u_0 local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  bVar3 = (this->contents_).data_.rep_.field0_0x0.data[0];
  bVar6 = bVar3 & 1;
  if (bVar6 == 0) {
    uVar8 = (ulonglong)(longlong)(char)bVar3 >> 1;
  }
  else {
    uVar8 = ((this->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  uVar5 = (ulonglong)(param_1->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar5 & 1) == 0) {
    uVar7 = uVar5 >> 1;
  }
  else {
    uVar7 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar8 < uVar7) {
    return false;
  }
  if ((bVar6 == 0) ||
     (local_38.as_tree.rep = (this->contents_).data_.rep_.field0_0x0.as_tree.rep,
     local_38.as_tree.rep == (CordRep *)0x0)) {
    local_38.as_tree.cordz_info = (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
    local_38.as_tree.rep = (this->contents_).data_.rep_.field0_0x0.as_tree.rep;
  }
  else {
    LOCK();
    ((local_38.as_tree.rep)->refcount).count_ =
         (atomic<int>)((int)((local_38.as_tree.rep)->refcount).count_ + 2);
    UNLOCK();
    local_38.as_tree.cordz_info = 1;
    if (((this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info | 1U) != 1) {
      cord_internal::CordzInfo::MaybeTrackCordImpl
                ((InlineData *)&local_38.as_tree,(InlineData *)this,kConstructorCord);
    }
  }
  RemovePrefix((Cord *)&local_38.as_tree,uVar8 - uVar7);
  GetFirstChunk(&local_18,(Cord *)&local_38.as_tree);
  GetFirstChunk(&local_28,param_1);
  if (local_28._Mysize < local_18._Mysize) {
    local_18._Mysize = local_28._Mysize;
  }
  iVar4 = memcmp(local_18._Mydata,local_28._Mydata,local_18._Mysize);
  if (local_18._Mysize != uVar7) {
    bVar9 = iVar4 == 0;
    if (!bVar9) goto LAB_1501bf441;
    iVar4 = CompareSlowPath((Cord *)&local_38.as_tree,param_1,local_18._Mysize,uVar7);
  }
  bVar9 = iVar4 == 0;
LAB_1501bf441:
  if ((local_38.as_tree.cordz_info & 1U) != 0) {
    if ((CordzInfo *)(local_38.as_tree.cordz_info - 1U) != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Untrack((CordzInfo *)(local_38.as_tree.cordz_info - 1U));
    }
    LOCK();
    pRVar1 = &(local_38.as_tree.rep)->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      cord_internal::CordRep::Destroy(local_38.as_tree.rep);
    }
  }
  return bVar9;
}

// EndsWith @ 1501bf490

/* public: bool __cdecl absl::lts_20240722::Cord::EndsWith(class std::basic_string_view<char,struct
   std::char_traits<char> >)const __ptr64 */

bool __thiscall
absl::lts_20240722::Cord::EndsWith
          (Cord *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulong64 uVar6;
  byte bVar7;
  bool bVar8;
  Rep_u_0 local_48;
  basic_string_view<char,std::char_traits<char>_> local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  char *local_18;
  ulong64 uStack_10;
  
  bVar3 = (this->contents_).data_.rep_.field0_0x0.data[0];
  bVar7 = bVar3 & 1;
  if (bVar7 == 0) {
    uVar6 = (ulonglong)(longlong)(char)bVar3 >> 1;
  }
  else {
    uVar6 = ((this->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  uVar4 = param_1->_Mysize;
  if (uVar6 < uVar4) {
    return false;
  }
  if ((bVar7 == 0) ||
     (local_48.as_tree.rep = (this->contents_).data_.rep_.field0_0x0.as_tree.rep,
     local_48.as_tree.rep == (CordRep *)0x0)) {
    local_48.as_tree.cordz_info = (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
    local_48.as_tree.rep = (this->contents_).data_.rep_.field0_0x0.as_tree.rep;
  }
  else {
    LOCK();
    ((local_48.as_tree.rep)->refcount).count_ =
         (atomic<int>)((int)((local_48.as_tree.rep)->refcount).count_ + 2);
    UNLOCK();
    local_48.as_tree.cordz_info = 1;
    if (((this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info | 1U) != 1) {
      cord_internal::CordzInfo::MaybeTrackCordImpl
                ((InlineData *)&local_48.as_tree,(InlineData *)this,kConstructorCord);
    }
  }
  RemovePrefix((Cord *)&local_48.as_tree,uVar6 - uVar4);
  GetFirstChunk(&local_38,(Cord *)&local_48.as_tree);
  local_18 = param_1->_Mydata;
  uStack_10 = param_1->_Mysize;
  if (uVar4 < local_38._Mysize) {
    local_38._Mysize = uVar4;
  }
  iVar5 = memcmp(local_38._Mydata,local_18,local_38._Mysize);
  if (local_38._Mysize != uVar4) {
    bVar8 = iVar5 == 0;
    if (!bVar8) goto LAB_1501bf592;
    local_28._Mydata = param_1->_Mydata;
    local_28._Mysize = param_1->_Mysize;
    iVar5 = CompareSlowPath((Cord *)&local_48.as_tree,&local_28,local_38._Mysize,uVar4);
  }
  bVar8 = iVar5 == 0;
LAB_1501bf592:
  if ((local_48.as_tree.cordz_info & 1U) != 0) {
    if ((CordzInfo *)(local_48.as_tree.cordz_info - 1U) != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Untrack((CordzInfo *)(local_48.as_tree.cordz_info - 1U));
    }
    LOCK();
    pRVar1 = &(local_48.as_tree.rep)->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      cord_internal::CordRep::Destroy(local_48.as_tree.rep);
    }
  }
  return bVar8;
}

// EqualsImpl @ 1501bf5e0

/* private: bool __cdecl absl::lts_20240722::Cord::EqualsImpl(class absl::lts_20240722::Cord const &
   __ptr64,unsigned __int64)const __ptr64 */

bool __thiscall absl::lts_20240722::Cord::EqualsImpl(Cord *this,Cord *param_1,__uint64 param_2)

{
  int iVar1;
  basic_string_view<char,std::char_traits<char>_> local_28;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  GetFirstChunk(&local_18,this);
  GetFirstChunk(&local_28,param_1);
  if (local_28._Mysize < local_18._Mysize) {
    local_18._Mysize = local_28._Mysize;
  }
  iVar1 = memcmp(local_18._Mydata,local_28._Mydata,local_18._Mysize);
  if (local_18._Mysize != param_2) {
    if (iVar1 != 0) {
      return iVar1 == 0;
    }
    iVar1 = CompareSlowPath(this,param_1,local_18._Mysize,param_2);
  }
  return iVar1 == 0;
}

// EqualsImpl @ 1501bf680

/* private: bool __cdecl absl::lts_20240722::Cord::EqualsImpl(class
   std::basic_string_view<char,struct std::char_traits<char> >,unsigned __int64)const __ptr64 */

bool __thiscall
absl::lts_20240722::Cord::EqualsImpl
          (Cord *this,basic_string_view<char,std::char_traits<char>_> *param_1,__uint64 param_2)

{
  int iVar1;
  ulong64 _Size;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  GetFirstChunk(&local_18,this);
  _Size = local_18._Mysize;
  if (param_1->_Mysize < local_18._Mysize) {
    _Size = param_1->_Mysize;
  }
  iVar1 = memcmp(local_18._Mydata,param_1->_Mydata,_Size);
  if (_Size != param_2) {
    if (iVar1 != 0) {
      return iVar1 == 0;
    }
    local_18._Mydata = param_1->_Mydata;
    local_18._Mysize = param_1->_Mysize;
    iVar1 = CompareSlowPath(this,&local_18,_Size,param_2);
  }
  return iVar1 == 0;
}

// ExpectedChecksum @ 1501bf710

/* public: class std::optional<unsigned int> __cdecl
   absl::lts_20240722::Cord::ExpectedChecksum(void)const __ptr64 */

void __thiscall absl::lts_20240722::Cord::ExpectedChecksum(Cord *this)

{
  CordRep *pCVar1;
  crc32c_t cVar2;
  undefined4 extraout_var;
  undefined4 *in_RDX;
  
  if ((((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) &&
     (pCVar1 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar1->tag == '\x02')) {
    cVar2 = crc_internal::CrcCordState::Checksum((CrcCordState *)&pCVar1[1].refcount);
    *(undefined1 *)(in_RDX + 1) = 1;
    *in_RDX = *(undefined4 *)CONCAT44(extraout_var,cVar2.crc_);
    return;
  }
  *(undefined1 *)(in_RDX + 1) = 0;
  return;
}

// FUN_1501bf760 @ 1501bf760

ExtractResult * FUN_1501bf760(ExtractResult *param_1,CordRepBtree *param_2,__uint64 param_3)

{
  byte bVar1;
  __uint64 _Var2;
  
  bVar1 = *(byte *)((longlong)&param_2->_padding_ + 4);
  if (bVar1 == 3) {
    absl::lts_20240722::cord_internal::CordRepBtree::ExtractAppendBuffer(param_1,param_2,param_3);
    return param_1;
  }
  if ((5 < bVar1) && ((int)param_2->_padding_ == 2)) {
    _Var2 = absl::lts_20240722::cord_internal::CordRepFlat::Capacity((CordRepFlat *)param_2);
    if (param_3 <= _Var2 - param_2->_padding_) {
      param_1->tree = (CordRep *)0x0;
      param_1->extracted = (CordRep *)param_2;
      return param_1;
    }
  }
  param_1->tree = (CordRep *)param_2;
  param_1->extracted = (CordRep *)0x0;
  return param_1;
}

// Find @ 1501bf800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* public: class absl::lts_20240722::Cord::CharIterator __cdecl absl::lts_20240722::Cord::Find(class
   absl::lts_20240722::Cord const & __ptr64)const __ptr64 */

CharIterator * __thiscall
absl::lts_20240722::Cord::Find(Cord *this,CharIterator *__return_storage_ptr__,Cord *param_1)

{
  CordRepBtree *pCVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  CordRep *pCVar36;
  undefined8 uVar37;
  CordRepBtree *pCVar38;
  CordRepBtree *pCVar39;
  CordRepBtree *pCVar40;
  char *pcVar41;
  undefined8 uVar42;
  CordRepBtree *pCVar43;
  CordRepBtree *pCVar44;
  CordRepBtree *pCVar45;
  CordRepBtree *pCVar46;
  CordRepBtree *pCVar47;
  CordRepBtree *pCVar48;
  CordRepBtree *pCVar49;
  undefined8 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  CordRepBtreeReader *pCVar54;
  uchar uVar55;
  uchar uVar56;
  uchar uVar57;
  uchar uVar58;
  CordRepBtree *pCVar59;
  bool bVar60;
  int iVar61;
  ChunkIterator *pCVar62;
  CharIterator *pCVar63;
  ulonglong uVar64;
  ulonglong uVar65;
  ulong64 uVar66;
  ulonglong uVar67;
  ulong64 uVar68;
  ulonglong uVar69;
  ulong64 uVar70;
  byte bVar71;
  byte bVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined1 auStack_4d8 [32];
  basic_string_view<char,std::char_traits<char>_> local_4b8;
  CharIterator local_4a8;
  ChunkIterator local_408;
  ChunkIterator local_368;
  ChunkIterator local_2c8;
  ChunkIterator local_228;
  ChunkIterator local_188;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_4d8;
  bVar2 = (param_1->contents_).data_.rep_.field0_0x0.data[0];
  bVar72 = bVar2 & 1;
  if (bVar72 == 0) {
    uVar65 = (ulonglong)(longlong)(char)bVar2 >> 1;
  }
  else {
    uVar65 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  uVar68 = (ulonglong)(longlong)(char)bVar2 >> 1;
  if (uVar65 == 0) {
    ChunkIterator::ChunkIterator(&__return_storage_ptr__->chunk_iterator_,this);
    return __return_storage_ptr__;
  }
  uVar65 = uVar68;
  if (bVar72 != 0) {
    uVar65 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  bVar2 = (this->contents_).data_.rep_.field0_0x0.data[0];
  bVar71 = bVar2 & 1;
  if (bVar71 == 0) {
    uVar70 = (ulonglong)(longlong)(char)bVar2 >> 1;
  }
  else {
    uVar70 = ((this->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  uVar66 = (ulonglong)(longlong)(char)bVar2 >> 1;
  if (uVar70 < uVar65) {
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.height_ = 0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[0] = '\0';
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[1] = '\0';
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[2] = '\0';
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[3] = '\0';
    pCVar54 = &(__return_storage_ptr__->chunk_iterator_).btree_reader_;
    (pCVar54->navigator_).index_[4] = '\0';
    (pCVar54->navigator_).index_[5] = '\0';
    (pCVar54->navigator_).index_[6] = '\0';
    (pCVar54->navigator_).index_[7] = '\0';
    (pCVar54->navigator_).index_[8] = '\0';
    (pCVar54->navigator_).index_[9] = '\0';
    (pCVar54->navigator_).index_[10] = '\0';
    (pCVar54->navigator_).index_[0xb] = '\0';
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[1] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[2] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[3] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[4] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[5] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[6] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[7] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[8] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[9] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[10] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0xb] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).current_chunk_._Mydata = (char *)0x0;
    (__return_storage_ptr__->chunk_iterator_).current_chunk_._Mysize = 0;
    (__return_storage_ptr__->chunk_iterator_).current_leaf_ = (CordRep *)0x0;
    (__return_storage_ptr__->chunk_iterator_).bytes_remaining_ = 0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.remaining_ = 0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.height_ = -1;
    return __return_storage_ptr__;
  }
  uVar70 = uVar66;
  if (bVar71 != 0) {
    uVar70 = ((this->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar65 != uVar70) {
    ChunkIterator::ChunkIterator(&local_188,param_1);
    ChunkIterator::ChunkIterator(&local_408,this);
    local_2c8.current_leaf_ =
         (CordRep *)CONCAT44(local_408.current_leaf_._4_4_,local_408.current_leaf_._0_4_);
    local_2c8.bytes_remaining_ =
         CONCAT44(local_408.bytes_remaining_._4_4_,(undefined4)local_408.bytes_remaining_);
    local_4b8._Mydata = local_188.current_chunk_._Mydata;
    local_4b8._Mysize = local_188.current_chunk_._Mysize;
    local_2c8.current_chunk_._Mydata =
         (char *)CONCAT44(local_408.current_chunk_._Mydata._4_4_,
                          local_408.current_chunk_._Mydata._0_4_);
    local_2c8.current_chunk_._Mysize =
         CONCAT44(local_408.current_chunk_._Mysize._4_4_,
                  (undefined4)local_408.current_chunk_._Mysize);
    local_2c8.btree_reader_.remaining_ =
         CONCAT44(local_408.btree_reader_.remaining_._4_4_,
                  (undefined4)local_408.btree_reader_.remaining_);
    local_2c8.btree_reader_.navigator_.index_[0] = local_408.btree_reader_.navigator_.index_[0];
    local_2c8.btree_reader_.navigator_.index_[1] = local_408.btree_reader_.navigator_.index_[1];
    local_2c8.btree_reader_.navigator_.index_[2] = local_408.btree_reader_.navigator_.index_[2];
    local_2c8.btree_reader_.navigator_.index_[3] = local_408.btree_reader_.navigator_.index_[3];
    local_2c8.btree_reader_.navigator_.height_ = local_408.btree_reader_.navigator_.height_;
    local_2c8.btree_reader_.navigator_.index_[8] = local_408.btree_reader_.navigator_.index_[8];
    local_2c8.btree_reader_.navigator_.index_[9] = local_408.btree_reader_.navigator_.index_[9];
    local_2c8.btree_reader_.navigator_.index_[10] = local_408.btree_reader_.navigator_.index_[10];
    local_2c8.btree_reader_.navigator_.index_[0xb] = local_408.btree_reader_.navigator_.index_[0xb];
    local_2c8.btree_reader_.navigator_.index_[4] = local_408.btree_reader_.navigator_.index_[4];
    local_2c8.btree_reader_.navigator_.index_[5] = local_408.btree_reader_.navigator_.index_[5];
    local_2c8.btree_reader_.navigator_.index_[6] = local_408.btree_reader_.navigator_.index_[6];
    local_2c8.btree_reader_.navigator_.index_[7] = local_408.btree_reader_.navigator_.index_[7];
    local_2c8.btree_reader_.navigator_.node_[0] =
         (CordRepBtree *)
         CONCAT44(local_408.btree_reader_.navigator_.node_[0]._4_4_,
                  local_408.btree_reader_.navigator_.node_[0]._0_4_);
    local_2c8.btree_reader_.navigator_.node_[1] =
         (CordRepBtree *)
         CONCAT44(local_408.btree_reader_.navigator_.node_[1]._4_4_,
                  local_408.btree_reader_.navigator_.node_[1]._0_4_);
    local_2c8.btree_reader_.navigator_.node_[2] =
         (CordRepBtree *)
         CONCAT44(local_408.btree_reader_.navigator_.node_[2]._4_4_,
                  local_408.btree_reader_.navigator_.node_[2]._0_4_);
    local_2c8.btree_reader_.navigator_.node_[3] =
         (CordRepBtree *)
         CONCAT44(local_408.btree_reader_.navigator_.node_[3]._4_4_,
                  local_408.btree_reader_.navigator_.node_[3]._0_4_);
    local_2c8.btree_reader_.navigator_.node_[4] =
         (CordRepBtree *)
         CONCAT44(local_408.btree_reader_.navigator_.node_[4]._4_4_,
                  local_408.btree_reader_.navigator_.node_[4]._0_4_);
    local_2c8.btree_reader_.navigator_.node_[5] =
         (CordRepBtree *)
         CONCAT44(local_408.btree_reader_.navigator_.node_[5]._4_4_,
                  local_408.btree_reader_.navigator_.node_[5]._0_4_);
    local_2c8.btree_reader_.navigator_.node_[6] =
         (CordRepBtree *)
         CONCAT44(local_408.btree_reader_.navigator_.node_[6]._4_4_,
                  local_408.btree_reader_.navigator_.node_[6]._0_4_);
    local_2c8.btree_reader_.navigator_.node_[7] =
         (CordRepBtree *)
         CONCAT44(local_408.btree_reader_.navigator_.node_[7]._4_4_,
                  local_408.btree_reader_.navigator_.node_[7]._0_4_);
    local_2c8.btree_reader_.navigator_.node_[8] =
         (CordRepBtree *)
         CONCAT44(local_408.btree_reader_.navigator_.node_[8]._4_4_,
                  local_408.btree_reader_.navigator_.node_[8]._0_4_);
    local_2c8.btree_reader_.navigator_.node_[9] =
         (CordRepBtree *)
         CONCAT44(local_408.btree_reader_.navigator_.node_[9]._4_4_,
                  local_408.btree_reader_.navigator_.node_[9]._0_4_);
    local_2c8.btree_reader_.navigator_.node_[10] =
         (CordRepBtree *)
         CONCAT44(local_408.btree_reader_.navigator_.node_[10]._4_4_,
                  local_408.btree_reader_.navigator_.node_[10]._0_4_);
    local_2c8.btree_reader_.navigator_.node_[0xb] = local_408.btree_reader_.navigator_.node_[0xb];
    pCVar63 = FindImpl(this,&local_4a8,(CharIterator *)&local_2c8,&local_4b8);
    uVar68 = local_188.current_chunk_._Mysize;
    uVar3 = *(undefined4 *)&(pCVar63->chunk_iterator_).current_chunk_._Mydata;
    uVar4 = *(undefined4 *)((longlong)&(pCVar63->chunk_iterator_).current_chunk_._Mydata + 4);
    uVar51 = (undefined4)(pCVar63->chunk_iterator_).current_chunk_._Mysize;
    uVar5 = *(undefined4 *)((longlong)&(pCVar63->chunk_iterator_).current_chunk_._Mysize + 4);
    uVar6 = *(undefined4 *)&(pCVar63->chunk_iterator_).current_leaf_;
    uVar7 = *(undefined4 *)((longlong)&(pCVar63->chunk_iterator_).current_leaf_ + 4);
    uVar52 = (undefined4)(pCVar63->chunk_iterator_).bytes_remaining_;
    uVar8 = *(undefined4 *)((longlong)&(pCVar63->chunk_iterator_).bytes_remaining_ + 4);
    uVar53 = (undefined4)(pCVar63->chunk_iterator_).btree_reader_.remaining_;
    uVar9 = *(undefined4 *)((longlong)&(pCVar63->chunk_iterator_).btree_reader_.remaining_ + 4);
    iVar10 = (pCVar63->chunk_iterator_).btree_reader_.navigator_.height_;
    uVar11 = *(undefined4 *)(pCVar63->chunk_iterator_).btree_reader_.navigator_.index_;
    uVar12 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.index_ + 4);
    uVar13 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.index_ + 8);
    uVar14 = *(undefined4 *)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_;
    uVar15 = *(undefined4 *)
              ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 4);
    uVar16 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 1);
    uVar17 = *(undefined4 *)
              ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0xc);
    uVar18 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 2);
    uVar19 = *(undefined4 *)
              ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0x14);
    uVar20 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 3);
    uVar21 = *(undefined4 *)
              ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0x1c);
    uVar22 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 4);
    uVar23 = *(undefined4 *)
              ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0x24);
    uVar24 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 5);
    uVar25 = *(undefined4 *)
              ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0x2c);
    uVar26 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 6);
    uVar27 = *(undefined4 *)
              ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0x34);
    uVar28 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 7);
    uVar29 = *(undefined4 *)
              ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0x3c);
    uVar30 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 8);
    uVar31 = *(undefined4 *)
              ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0x44);
    uVar32 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 9);
    uVar33 = *(undefined4 *)
              ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0x4c);
    uVar34 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 10);
    uVar35 = *(undefined4 *)
              ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0x54);
    local_408.btree_reader_.navigator_.node_[0xb] =
         (pCVar63->chunk_iterator_).btree_reader_.navigator_.node_[0xb];
    uVar73 = SUB84(local_408.btree_reader_.navigator_.node_[0xb],0);
    uVar74 = (undefined4)((ulonglong)local_408.btree_reader_.navigator_.node_[0xb] >> 0x20);
    uVar67 = (pCVar63->chunk_iterator_).bytes_remaining_;
    while( true ) {
      if ((uVar67 == 0) || (uVar67 < uVar65)) goto LAB_1501bff42;
      local_368.current_chunk_._Mydata = (char *)CONCAT44(uVar4,uVar3);
      local_368.current_chunk_._Mysize = CONCAT44(uVar5,uVar51);
      local_368.current_leaf_ = (CordRep *)CONCAT44(uVar7,uVar6);
      local_368.bytes_remaining_ = CONCAT44(uVar8,uVar52);
      local_368.btree_reader_.remaining_ = CONCAT44(uVar9,uVar53);
      local_408.current_chunk_._Mydata._0_4_ = uVar3;
      local_408.current_chunk_._Mydata._4_4_ = uVar4;
      local_408.current_chunk_._Mysize._0_4_ = uVar51;
      local_408.current_chunk_._Mysize._4_4_ = uVar5;
      local_408.current_leaf_._0_4_ = uVar6;
      local_408.current_leaf_._4_4_ = uVar7;
      local_408.bytes_remaining_._0_4_ = uVar52;
      local_408.bytes_remaining_._4_4_ = uVar8;
      local_408.btree_reader_.remaining_._0_4_ = uVar53;
      local_408.btree_reader_.remaining_._4_4_ = uVar9;
      local_408.btree_reader_.navigator_.height_ = iVar10;
      local_408.btree_reader_.navigator_.index_._0_4_ = uVar11;
      local_408.btree_reader_.navigator_.index_._4_4_ = uVar12;
      local_408.btree_reader_.navigator_.index_._8_4_ = uVar13;
      local_408.btree_reader_.navigator_.node_[0]._0_4_ = uVar14;
      local_408.btree_reader_.navigator_.node_[0]._4_4_ = uVar15;
      local_408.btree_reader_.navigator_.node_[1]._0_4_ = uVar16;
      local_408.btree_reader_.navigator_.node_[1]._4_4_ = uVar17;
      local_408.btree_reader_.navigator_.node_[2]._0_4_ = uVar18;
      local_408.btree_reader_.navigator_.node_[2]._4_4_ = uVar19;
      local_408.btree_reader_.navigator_.node_[3]._0_4_ = uVar20;
      local_408.btree_reader_.navigator_.node_[3]._4_4_ = uVar21;
      local_408.btree_reader_.navigator_.node_[4]._0_4_ = uVar22;
      local_408.btree_reader_.navigator_.node_[4]._4_4_ = uVar23;
      local_408.btree_reader_.navigator_.node_[5]._0_4_ = uVar24;
      local_408.btree_reader_.navigator_.node_[5]._4_4_ = uVar25;
      local_408.btree_reader_.navigator_.node_[6]._0_4_ = uVar26;
      local_408.btree_reader_.navigator_.node_[6]._4_4_ = uVar27;
      local_408.btree_reader_.navigator_.node_[7]._0_4_ = uVar28;
      local_408.btree_reader_.navigator_.node_[7]._4_4_ = uVar29;
      local_408.btree_reader_.navigator_.node_[8]._0_4_ = uVar30;
      local_408.btree_reader_.navigator_.node_[8]._4_4_ = uVar31;
      local_408.btree_reader_.navigator_.node_[9]._0_4_ = uVar32;
      local_408.btree_reader_.navigator_.node_[9]._4_4_ = uVar33;
      local_408.btree_reader_.navigator_.node_[10]._0_4_ = uVar34;
      local_408.btree_reader_.navigator_.node_[10]._4_4_ = uVar35;
      local_368.btree_reader_.navigator_.height_ = iVar10;
      local_368.btree_reader_.navigator_.index_._0_4_ = uVar11;
      local_368.btree_reader_.navigator_.index_._4_4_ = uVar12;
      local_368.btree_reader_.navigator_.index_._8_4_ = uVar13;
      local_368.btree_reader_.navigator_.node_[0]._0_4_ = uVar14;
      local_368.btree_reader_.navigator_.node_[0]._4_4_ = uVar15;
      local_368.btree_reader_.navigator_.node_[1]._0_4_ = uVar16;
      local_368.btree_reader_.navigator_.node_[1]._4_4_ = uVar17;
      local_368.btree_reader_.navigator_.node_[2]._0_4_ = uVar18;
      local_368.btree_reader_.navigator_.node_[2]._4_4_ = uVar19;
      local_368.btree_reader_.navigator_.node_[3]._0_4_ = uVar20;
      local_368.btree_reader_.navigator_.node_[3]._4_4_ = uVar21;
      local_368.btree_reader_.navigator_.node_[4]._0_4_ = uVar22;
      local_368.btree_reader_.navigator_.node_[4]._4_4_ = uVar23;
      local_368.btree_reader_.navigator_.node_[5]._0_4_ = uVar24;
      local_368.btree_reader_.navigator_.node_[5]._4_4_ = uVar25;
      local_368.btree_reader_.navigator_.node_[6]._0_4_ = uVar26;
      local_368.btree_reader_.navigator_.node_[6]._4_4_ = uVar27;
      local_368.btree_reader_.navigator_.node_[7]._0_4_ = uVar28;
      local_368.btree_reader_.navigator_.node_[7]._4_4_ = uVar29;
      local_368.btree_reader_.navigator_.node_[8]._0_4_ = uVar30;
      local_368.btree_reader_.navigator_.node_[8]._4_4_ = uVar31;
      local_368.btree_reader_.navigator_.node_[9]._0_4_ = uVar32;
      local_368.btree_reader_.navigator_.node_[9]._4_4_ = uVar33;
      local_368.btree_reader_.navigator_.node_[10]._0_4_ = uVar34;
      local_368.btree_reader_.navigator_.node_[10]._4_4_ = uVar35;
      local_368.btree_reader_.navigator_.node_[0xb]._0_4_ = uVar73;
      local_368.btree_reader_.navigator_.node_[0xb]._4_4_ = uVar74;
      ChunkIterator::ChunkIterator(&local_228,param_1);
      ChunkIterator::AdvanceBytes(&local_368,uVar68);
      ChunkIterator::AdvanceBytes(&local_228,uVar68);
      uVar37._4_1_ = local_368.btree_reader_.navigator_.index_[0];
      uVar37._5_1_ = local_368.btree_reader_.navigator_.index_[1];
      uVar37._6_1_ = local_368.btree_reader_.navigator_.index_[2];
      uVar37._7_1_ = local_368.btree_reader_.navigator_.index_[3];
      uVar37._0_4_ = local_368.btree_reader_.navigator_.height_;
      uVar50._4_1_ = local_368.btree_reader_.navigator_.index_[8];
      uVar50._5_1_ = local_368.btree_reader_.navigator_.index_[9];
      uVar50._6_1_ = local_368.btree_reader_.navigator_.index_[10];
      uVar50._7_1_ = local_368.btree_reader_.navigator_.index_[0xb];
      uVar50._0_1_ = local_368.btree_reader_.navigator_.index_[4];
      uVar50._1_1_ = local_368.btree_reader_.navigator_.index_[5];
      uVar50._2_1_ = local_368.btree_reader_.navigator_.index_[6];
      uVar50._3_1_ = local_368.btree_reader_.navigator_.index_[7];
      local_2c8.current_chunk_._Mydata = local_228.current_chunk_._Mydata;
      local_2c8.current_chunk_._Mysize = local_228.current_chunk_._Mysize;
      local_2c8.btree_reader_.remaining_ = local_228.btree_reader_.remaining_;
      local_2c8.btree_reader_.navigator_._0_8_ = local_228.btree_reader_.navigator_._0_8_;
      local_2c8.btree_reader_.navigator_.index_._4_8_ =
           local_228.btree_reader_.navigator_.index_._4_8_;
      local_2c8.btree_reader_.navigator_.node_[0] = local_228.btree_reader_.navigator_.node_[0];
      local_2c8.btree_reader_.navigator_.node_[1] = local_228.btree_reader_.navigator_.node_[1];
      local_2c8.btree_reader_.navigator_.node_[2] = local_228.btree_reader_.navigator_.node_[2];
      local_2c8.btree_reader_.navigator_.node_[3] = local_228.btree_reader_.navigator_.node_[3];
      local_2c8.btree_reader_.navigator_.node_[4] = local_228.btree_reader_.navigator_.node_[4];
      local_2c8.btree_reader_.navigator_.node_[5] = local_228.btree_reader_.navigator_.node_[5];
      local_2c8.btree_reader_.navigator_.node_[6] = local_228.btree_reader_.navigator_.node_[6];
      local_2c8.btree_reader_.navigator_.node_[7] = local_228.btree_reader_.navigator_.node_[7];
      local_2c8.btree_reader_.navigator_.node_[8] = local_228.btree_reader_.navigator_.node_[8];
      local_2c8.btree_reader_.navigator_.node_[9] = local_228.btree_reader_.navigator_.node_[9];
      local_2c8.btree_reader_.navigator_.node_[10] = local_228.btree_reader_.navigator_.node_[10];
      local_2c8.btree_reader_.navigator_.node_[0xb] = local_228.btree_reader_.navigator_.node_[0xb];
      local_228.current_chunk_._Mydata = local_368.current_chunk_._Mydata;
      local_228.current_chunk_._Mysize = local_368.current_chunk_._Mysize;
      pCVar36 = local_368.current_leaf_;
      uVar70 = local_368.bytes_remaining_;
      local_228.btree_reader_.remaining_ = local_368.btree_reader_.remaining_;
      local_2c8.current_leaf_ = local_228.current_leaf_;
      local_228.btree_reader_.navigator_._0_8_ = uVar37;
      local_228.btree_reader_.navigator_.index_._4_8_ = uVar50;
      local_228.btree_reader_.navigator_.node_[0] =
           (CordRepBtree *)
           CONCAT44(local_368.btree_reader_.navigator_.node_[0]._4_4_,
                    local_368.btree_reader_.navigator_.node_[0]._0_4_);
      local_228.btree_reader_.navigator_.node_[1] =
           (CordRepBtree *)
           CONCAT44(local_368.btree_reader_.navigator_.node_[1]._4_4_,
                    local_368.btree_reader_.navigator_.node_[1]._0_4_);
      local_228.btree_reader_.navigator_.node_[2] =
           (CordRepBtree *)
           CONCAT44(local_368.btree_reader_.navigator_.node_[2]._4_4_,
                    local_368.btree_reader_.navigator_.node_[2]._0_4_);
      local_228.btree_reader_.navigator_.node_[3] =
           (CordRepBtree *)
           CONCAT44(local_368.btree_reader_.navigator_.node_[3]._4_4_,
                    local_368.btree_reader_.navigator_.node_[3]._0_4_);
      local_228.btree_reader_.navigator_.node_[4] =
           (CordRepBtree *)
           CONCAT44(local_368.btree_reader_.navigator_.node_[4]._4_4_,
                    local_368.btree_reader_.navigator_.node_[4]._0_4_);
      local_228.btree_reader_.navigator_.node_[5] =
           (CordRepBtree *)
           CONCAT44(local_368.btree_reader_.navigator_.node_[5]._4_4_,
                    local_368.btree_reader_.navigator_.node_[5]._0_4_);
      local_228.btree_reader_.navigator_.node_[6] =
           (CordRepBtree *)
           CONCAT44(local_368.btree_reader_.navigator_.node_[6]._4_4_,
                    local_368.btree_reader_.navigator_.node_[6]._0_4_);
      local_228.btree_reader_.navigator_.node_[7] =
           (CordRepBtree *)
           CONCAT44(local_368.btree_reader_.navigator_.node_[7]._4_4_,
                    local_368.btree_reader_.navigator_.node_[7]._0_4_);
      local_228.btree_reader_.navigator_.node_[8] =
           (CordRepBtree *)
           CONCAT44(local_368.btree_reader_.navigator_.node_[8]._4_4_,
                    local_368.btree_reader_.navigator_.node_[8]._0_4_);
      local_228.btree_reader_.navigator_.node_[9] =
           (CordRepBtree *)
           CONCAT44(local_368.btree_reader_.navigator_.node_[9]._4_4_,
                    local_368.btree_reader_.navigator_.node_[9]._0_4_);
      local_228.btree_reader_.navigator_.node_[10] =
           (CordRepBtree *)
           CONCAT44(local_368.btree_reader_.navigator_.node_[10]._4_4_,
                    local_368.btree_reader_.navigator_.node_[10]._0_4_);
      local_228.btree_reader_.navigator_.node_[0xb] =
           (CordRepBtree *)
           CONCAT44(local_368.btree_reader_.navigator_.node_[0xb]._4_4_,
                    local_368.btree_reader_.navigator_.node_[0xb]._0_4_);
      local_2c8.bytes_remaining_ = local_228.bytes_remaining_;
      while( true ) {
        local_228.bytes_remaining_ = uVar70;
        local_228.current_leaf_ = pCVar36;
        if (local_2c8.bytes_remaining_ == 0) {
          *(undefined4 *)&(__return_storage_ptr__->chunk_iterator_).current_chunk_._Mydata = uVar3;
          *(undefined4 *)
           ((longlong)&(__return_storage_ptr__->chunk_iterator_).current_chunk_._Mydata + 4) = uVar4
          ;
          *(undefined4 *)&(__return_storage_ptr__->chunk_iterator_).current_chunk_._Mysize = uVar51;
          *(undefined4 *)
           ((longlong)&(__return_storage_ptr__->chunk_iterator_).current_chunk_._Mysize + 4) = uVar5
          ;
          *(undefined4 *)&(__return_storage_ptr__->chunk_iterator_).current_leaf_ = uVar6;
          *(undefined4 *)((longlong)&(__return_storage_ptr__->chunk_iterator_).current_leaf_ + 4) =
               uVar7;
          *(undefined4 *)&(__return_storage_ptr__->chunk_iterator_).bytes_remaining_ = uVar52;
          *(undefined4 *)((longlong)&(__return_storage_ptr__->chunk_iterator_).bytes_remaining_ + 4)
               = uVar8;
          *(undefined4 *)&(__return_storage_ptr__->chunk_iterator_).btree_reader_.remaining_ =
               uVar53;
          *(undefined4 *)
           ((longlong)&(__return_storage_ptr__->chunk_iterator_).btree_reader_.remaining_ + 4) =
               uVar9;
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.height_ = iVar10;
          *(undefined4 *)(__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_ =
               uVar11;
          *(undefined4 *)
           ((__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_ + 4) = uVar12;
          *(undefined4 *)
           ((__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_ + 8) = uVar13;
          *(undefined4 *)(__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ =
               uVar14;
          *(undefined4 *)
           ((longlong)(__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ + 4)
               = uVar15;
          *(undefined4 *)
           ((__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ + 1) = uVar16;
          *(undefined4 *)
           ((longlong)(__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ + 0xc
           ) = uVar17;
          *(undefined4 *)
           ((__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ + 2) = uVar18;
          *(undefined4 *)
           ((longlong)(__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ +
           0x14) = uVar19;
          *(undefined4 *)
           ((__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ + 3) = uVar20;
          *(undefined4 *)
           ((longlong)(__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ +
           0x1c) = uVar21;
          *(undefined4 *)
           ((__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ + 4) = uVar22;
          *(undefined4 *)
           ((longlong)(__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ +
           0x24) = uVar23;
          *(undefined4 *)
           ((__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ + 5) = uVar24;
          *(undefined4 *)
           ((longlong)(__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ +
           0x2c) = uVar25;
          *(undefined4 *)
           ((__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ + 6) = uVar26;
          *(undefined4 *)
           ((longlong)(__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ +
           0x34) = uVar27;
          *(undefined4 *)
           ((__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ + 7) = uVar28;
          *(undefined4 *)
           ((longlong)(__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ +
           0x3c) = uVar29;
          *(undefined4 *)
           ((__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ + 8) = uVar30;
          *(undefined4 *)
           ((longlong)(__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ +
           0x44) = uVar31;
          *(undefined4 *)
           ((__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ + 9) = uVar32;
          *(undefined4 *)
           ((longlong)(__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ +
           0x4c) = uVar33;
          *(undefined4 *)
           ((__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ + 10) = uVar34;
          *(undefined4 *)
           ((longlong)(__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_ +
           0x54) = uVar35;
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0xb] =
               (CordRepBtree *)CONCAT44(uVar74,uVar73);
          return __return_storage_ptr__;
        }
        uVar67 = local_228.current_chunk_._Mysize;
        if (local_2c8.current_chunk_._Mysize < local_228.current_chunk_._Mysize) {
          uVar67 = local_2c8.current_chunk_._Mysize;
        }
        uVar69 = uVar67;
        if (local_228.current_chunk_._Mysize < uVar67) {
          uVar69 = local_228.current_chunk_._Mysize;
        }
        uVar64 = uVar67;
        if (local_2c8.current_chunk_._Mysize < uVar67) {
          uVar64 = local_2c8.current_chunk_._Mysize;
        }
        if ((uVar69 != uVar64) ||
           (iVar61 = memcmp(local_228.current_chunk_._Mydata,local_2c8.current_chunk_._Mydata,uVar69
                           ), iVar61 != 0)) break;
        ChunkIterator::AdvanceBytes(&local_228,uVar67);
        ChunkIterator::AdvanceBytes(&local_2c8,uVar67);
        pCVar36 = local_228.current_leaf_;
        uVar70 = local_228.bytes_remaining_;
      }
      ChunkIterator::AdvanceBytes(&local_408,1);
      if (CONCAT44(local_408.bytes_remaining_._4_4_,(undefined4)local_408.bytes_remaining_) < uVar65
         ) goto LAB_1501bff42;
      if (CONCAT44(local_408.bytes_remaining_._4_4_,(undefined4)local_408.bytes_remaining_) ==
          uVar65) break;
      local_2c8.current_leaf_ =
           (CordRep *)CONCAT44(local_408.current_leaf_._4_4_,local_408.current_leaf_._0_4_);
      local_2c8.bytes_remaining_ =
           CONCAT44(local_408.bytes_remaining_._4_4_,(undefined4)local_408.bytes_remaining_);
      local_4b8._Mydata = local_188.current_chunk_._Mydata;
      local_4b8._Mysize = local_188.current_chunk_._Mysize;
      local_2c8.current_chunk_._Mydata =
           (char *)CONCAT44(local_408.current_chunk_._Mydata._4_4_,
                            local_408.current_chunk_._Mydata._0_4_);
      local_2c8.current_chunk_._Mysize =
           CONCAT44(local_408.current_chunk_._Mysize._4_4_,
                    (undefined4)local_408.current_chunk_._Mysize);
      local_2c8.btree_reader_.remaining_ =
           CONCAT44(local_408.btree_reader_.remaining_._4_4_,
                    (undefined4)local_408.btree_reader_.remaining_);
      local_2c8.btree_reader_.navigator_.index_[0] = local_408.btree_reader_.navigator_.index_[0];
      local_2c8.btree_reader_.navigator_.index_[1] = local_408.btree_reader_.navigator_.index_[1];
      local_2c8.btree_reader_.navigator_.index_[2] = local_408.btree_reader_.navigator_.index_[2];
      local_2c8.btree_reader_.navigator_.index_[3] = local_408.btree_reader_.navigator_.index_[3];
      local_2c8.btree_reader_.navigator_.height_ = local_408.btree_reader_.navigator_.height_;
      local_2c8.btree_reader_.navigator_.index_[8] = local_408.btree_reader_.navigator_.index_[8];
      local_2c8.btree_reader_.navigator_.index_[9] = local_408.btree_reader_.navigator_.index_[9];
      local_2c8.btree_reader_.navigator_.index_[10] = local_408.btree_reader_.navigator_.index_[10];
      local_2c8.btree_reader_.navigator_.index_[0xb] =
           local_408.btree_reader_.navigator_.index_[0xb];
      local_2c8.btree_reader_.navigator_.index_[4] = local_408.btree_reader_.navigator_.index_[4];
      local_2c8.btree_reader_.navigator_.index_[5] = local_408.btree_reader_.navigator_.index_[5];
      local_2c8.btree_reader_.navigator_.index_[6] = local_408.btree_reader_.navigator_.index_[6];
      local_2c8.btree_reader_.navigator_.index_[7] = local_408.btree_reader_.navigator_.index_[7];
      local_2c8.btree_reader_.navigator_.node_[0] =
           (CordRepBtree *)
           CONCAT44(local_408.btree_reader_.navigator_.node_[0]._4_4_,
                    local_408.btree_reader_.navigator_.node_[0]._0_4_);
      local_2c8.btree_reader_.navigator_.node_[1] =
           (CordRepBtree *)
           CONCAT44(local_408.btree_reader_.navigator_.node_[1]._4_4_,
                    local_408.btree_reader_.navigator_.node_[1]._0_4_);
      local_2c8.btree_reader_.navigator_.node_[2] =
           (CordRepBtree *)
           CONCAT44(local_408.btree_reader_.navigator_.node_[2]._4_4_,
                    local_408.btree_reader_.navigator_.node_[2]._0_4_);
      local_2c8.btree_reader_.navigator_.node_[3] =
           (CordRepBtree *)
           CONCAT44(local_408.btree_reader_.navigator_.node_[3]._4_4_,
                    local_408.btree_reader_.navigator_.node_[3]._0_4_);
      local_2c8.btree_reader_.navigator_.node_[4] =
           (CordRepBtree *)
           CONCAT44(local_408.btree_reader_.navigator_.node_[4]._4_4_,
                    local_408.btree_reader_.navigator_.node_[4]._0_4_);
      local_2c8.btree_reader_.navigator_.node_[5] =
           (CordRepBtree *)
           CONCAT44(local_408.btree_reader_.navigator_.node_[5]._4_4_,
                    local_408.btree_reader_.navigator_.node_[5]._0_4_);
      local_2c8.btree_reader_.navigator_.node_[6] =
           (CordRepBtree *)
           CONCAT44(local_408.btree_reader_.navigator_.node_[6]._4_4_,
                    local_408.btree_reader_.navigator_.node_[6]._0_4_);
      local_2c8.btree_reader_.navigator_.node_[7] =
           (CordRepBtree *)
           CONCAT44(local_408.btree_reader_.navigator_.node_[7]._4_4_,
                    local_408.btree_reader_.navigator_.node_[7]._0_4_);
      local_2c8.btree_reader_.navigator_.node_[8] =
           (CordRepBtree *)
           CONCAT44(local_408.btree_reader_.navigator_.node_[8]._4_4_,
                    local_408.btree_reader_.navigator_.node_[8]._0_4_);
      local_2c8.btree_reader_.navigator_.node_[9] =
           (CordRepBtree *)
           CONCAT44(local_408.btree_reader_.navigator_.node_[9]._4_4_,
                    local_408.btree_reader_.navigator_.node_[9]._0_4_);
      local_2c8.btree_reader_.navigator_.node_[10] =
           (CordRepBtree *)
           CONCAT44(local_408.btree_reader_.navigator_.node_[10]._4_4_,
                    local_408.btree_reader_.navigator_.node_[10]._0_4_);
      local_2c8.btree_reader_.navigator_.node_[0xb] = local_408.btree_reader_.navigator_.node_[0xb];
      pCVar63 = FindImpl(this,&local_4a8,(CharIterator *)&local_2c8,&local_4b8);
      uVar3 = *(undefined4 *)&(pCVar63->chunk_iterator_).current_chunk_._Mydata;
      uVar4 = *(undefined4 *)((longlong)&(pCVar63->chunk_iterator_).current_chunk_._Mydata + 4);
      uVar51 = (undefined4)(pCVar63->chunk_iterator_).current_chunk_._Mysize;
      uVar5 = *(undefined4 *)((longlong)&(pCVar63->chunk_iterator_).current_chunk_._Mysize + 4);
      uVar6 = *(undefined4 *)&(pCVar63->chunk_iterator_).current_leaf_;
      uVar7 = *(undefined4 *)((longlong)&(pCVar63->chunk_iterator_).current_leaf_ + 4);
      uVar52 = (undefined4)(pCVar63->chunk_iterator_).bytes_remaining_;
      uVar8 = *(undefined4 *)((longlong)&(pCVar63->chunk_iterator_).bytes_remaining_ + 4);
      uVar53 = (undefined4)(pCVar63->chunk_iterator_).btree_reader_.remaining_;
      uVar9 = *(undefined4 *)((longlong)&(pCVar63->chunk_iterator_).btree_reader_.remaining_ + 4);
      iVar10 = (pCVar63->chunk_iterator_).btree_reader_.navigator_.height_;
      uVar11 = *(undefined4 *)(pCVar63->chunk_iterator_).btree_reader_.navigator_.index_;
      uVar12 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.index_ + 4);
      uVar13 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.index_ + 8);
      uVar14 = *(undefined4 *)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_;
      uVar15 = *(undefined4 *)
                ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 4);
      uVar16 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 1);
      uVar17 = *(undefined4 *)
                ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0xc);
      uVar18 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 2);
      uVar19 = *(undefined4 *)
                ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0x14);
      uVar20 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 3);
      uVar21 = *(undefined4 *)
                ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0x1c);
      uVar22 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 4);
      uVar23 = *(undefined4 *)
                ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0x24);
      uVar24 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 5);
      uVar25 = *(undefined4 *)
                ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0x2c);
      uVar26 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 6);
      uVar27 = *(undefined4 *)
                ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0x34);
      uVar28 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 7);
      uVar29 = *(undefined4 *)
                ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0x3c);
      uVar30 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 8);
      uVar31 = *(undefined4 *)
                ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0x44);
      uVar32 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 9);
      uVar33 = *(undefined4 *)
                ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0x4c);
      uVar34 = *(undefined4 *)((pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 10);
      uVar35 = *(undefined4 *)
                ((longlong)(pCVar63->chunk_iterator_).btree_reader_.navigator_.node_ + 0x54);
      local_408.btree_reader_.navigator_.node_[0xb] =
           (pCVar63->chunk_iterator_).btree_reader_.navigator_.node_[0xb];
      uVar73 = SUB84(local_408.btree_reader_.navigator_.node_[0xb],0);
      uVar74 = (undefined4)((ulonglong)local_408.btree_reader_.navigator_.node_[0xb] >> 0x20);
      uVar67 = (pCVar63->chunk_iterator_).bytes_remaining_;
    }
    ChunkIterator::ChunkIterator(&local_2c8,param_1);
    pCVar59 = local_408.btree_reader_.navigator_.node_[0xb];
    iVar10 = local_408.btree_reader_.navigator_.height_;
    pcVar41 = (char *)CONCAT44(local_408.current_chunk_._Mydata._4_4_,
                               local_408.current_chunk_._Mydata._0_4_);
    uVar65 = CONCAT44(local_408.current_chunk_._Mysize._4_4_,
                      (undefined4)local_408.current_chunk_._Mysize);
    pCVar36 = (CordRep *)CONCAT44(local_408.current_leaf_._4_4_,local_408.current_leaf_._0_4_);
    uVar68 = CONCAT44(local_408.bytes_remaining_._4_4_,(undefined4)local_408.bytes_remaining_);
    uVar70 = CONCAT44(local_408.btree_reader_.remaining_._4_4_,
                      (undefined4)local_408.btree_reader_.remaining_);
    uVar55 = local_408.btree_reader_.navigator_.index_[0];
    uVar56 = local_408.btree_reader_.navigator_.index_[1];
    uVar57 = local_408.btree_reader_.navigator_.index_[2];
    uVar58 = local_408.btree_reader_.navigator_.index_[3];
    local_228.btree_reader_.navigator_.index_[0] = local_408.btree_reader_.navigator_.index_[0];
    local_228.btree_reader_.navigator_.index_[1] = local_408.btree_reader_.navigator_.index_[1];
    local_228.btree_reader_.navigator_.index_[2] = local_408.btree_reader_.navigator_.index_[2];
    local_228.btree_reader_.navigator_.index_[3] = local_408.btree_reader_.navigator_.index_[3];
    local_228.btree_reader_.navigator_.height_ = local_408.btree_reader_.navigator_.height_;
    uVar42._4_1_ = local_408.btree_reader_.navigator_.index_[8];
    uVar42._5_1_ = local_408.btree_reader_.navigator_.index_[9];
    uVar42._6_1_ = local_408.btree_reader_.navigator_.index_[10];
    uVar42._7_1_ = local_408.btree_reader_.navigator_.index_[0xb];
    uVar42._0_1_ = local_408.btree_reader_.navigator_.index_[4];
    uVar42._1_1_ = local_408.btree_reader_.navigator_.index_[5];
    uVar42._2_1_ = local_408.btree_reader_.navigator_.index_[6];
    uVar42._3_1_ = local_408.btree_reader_.navigator_.index_[7];
    pCVar1 = (CordRepBtree *)
             CONCAT44(local_408.btree_reader_.navigator_.node_[0]._4_4_,
                      local_408.btree_reader_.navigator_.node_[0]._0_4_);
    pCVar38 = (CordRepBtree *)
              CONCAT44(local_408.btree_reader_.navigator_.node_[1]._4_4_,
                       local_408.btree_reader_.navigator_.node_[1]._0_4_);
    pCVar39 = (CordRepBtree *)
              CONCAT44(local_408.btree_reader_.navigator_.node_[2]._4_4_,
                       local_408.btree_reader_.navigator_.node_[2]._0_4_);
    pCVar40 = (CordRepBtree *)
              CONCAT44(local_408.btree_reader_.navigator_.node_[3]._4_4_,
                       local_408.btree_reader_.navigator_.node_[3]._0_4_);
    pCVar43 = (CordRepBtree *)
              CONCAT44(local_408.btree_reader_.navigator_.node_[4]._4_4_,
                       local_408.btree_reader_.navigator_.node_[4]._0_4_);
    pCVar44 = (CordRepBtree *)
              CONCAT44(local_408.btree_reader_.navigator_.node_[5]._4_4_,
                       local_408.btree_reader_.navigator_.node_[5]._0_4_);
    pCVar45 = (CordRepBtree *)
              CONCAT44(local_408.btree_reader_.navigator_.node_[6]._4_4_,
                       local_408.btree_reader_.navigator_.node_[6]._0_4_);
    pCVar46 = (CordRepBtree *)
              CONCAT44(local_408.btree_reader_.navigator_.node_[7]._4_4_,
                       local_408.btree_reader_.navigator_.node_[7]._0_4_);
    pCVar47 = (CordRepBtree *)
              CONCAT44(local_408.btree_reader_.navigator_.node_[8]._4_4_,
                       local_408.btree_reader_.navigator_.node_[8]._0_4_);
    pCVar48 = (CordRepBtree *)
              CONCAT44(local_408.btree_reader_.navigator_.node_[9]._4_4_,
                       local_408.btree_reader_.navigator_.node_[9]._0_4_);
    pCVar49 = (CordRepBtree *)
              CONCAT44(local_408.btree_reader_.navigator_.node_[10]._4_4_,
                       local_408.btree_reader_.navigator_.node_[10]._0_4_);
    local_368.btree_reader_.navigator_.height_ = local_2c8.btree_reader_.navigator_.height_;
    local_368.btree_reader_.navigator_.index_._0_4_ =
         local_2c8.btree_reader_.navigator_.index_._0_4_;
    local_368.btree_reader_.navigator_.index_._4_4_ =
         local_2c8.btree_reader_.navigator_.index_._4_4_;
    local_368.btree_reader_.navigator_.index_._8_4_ =
         local_2c8.btree_reader_.navigator_.index_._8_4_;
    local_368.btree_reader_.navigator_.node_[0]._0_4_ =
         SUB84(local_2c8.btree_reader_.navigator_.node_[0],0);
    local_368.btree_reader_.navigator_.node_[0]._4_4_ =
         (undefined4)((ulonglong)local_2c8.btree_reader_.navigator_.node_[0] >> 0x20);
    local_368.btree_reader_.navigator_.node_[1]._0_4_ =
         SUB84(local_2c8.btree_reader_.navigator_.node_[1],0);
    local_368.btree_reader_.navigator_.node_[1]._4_4_ =
         (undefined4)((ulonglong)local_2c8.btree_reader_.navigator_.node_[1] >> 0x20);
    local_368.btree_reader_.navigator_.node_[2]._0_4_ =
         SUB84(local_2c8.btree_reader_.navigator_.node_[2],0);
    local_368.btree_reader_.navigator_.node_[2]._4_4_ =
         (undefined4)((ulonglong)local_2c8.btree_reader_.navigator_.node_[2] >> 0x20);
    local_368.btree_reader_.navigator_.node_[3]._0_4_ =
         SUB84(local_2c8.btree_reader_.navigator_.node_[3],0);
    local_368.btree_reader_.navigator_.node_[3]._4_4_ =
         (undefined4)((ulonglong)local_2c8.btree_reader_.navigator_.node_[3] >> 0x20);
    local_368.btree_reader_.navigator_.node_[4]._0_4_ =
         SUB84(local_2c8.btree_reader_.navigator_.node_[4],0);
    local_368.btree_reader_.navigator_.node_[4]._4_4_ =
         (undefined4)((ulonglong)local_2c8.btree_reader_.navigator_.node_[4] >> 0x20);
    local_368.btree_reader_.navigator_.node_[5]._0_4_ =
         SUB84(local_2c8.btree_reader_.navigator_.node_[5],0);
    local_368.btree_reader_.navigator_.node_[5]._4_4_ =
         (undefined4)((ulonglong)local_2c8.btree_reader_.navigator_.node_[5] >> 0x20);
    local_368.btree_reader_.navigator_.node_[6]._0_4_ =
         SUB84(local_2c8.btree_reader_.navigator_.node_[6],0);
    local_368.btree_reader_.navigator_.node_[6]._4_4_ =
         (undefined4)((ulonglong)local_2c8.btree_reader_.navigator_.node_[6] >> 0x20);
    local_368.btree_reader_.navigator_.node_[7]._0_4_ =
         SUB84(local_2c8.btree_reader_.navigator_.node_[7],0);
    local_368.btree_reader_.navigator_.node_[7]._4_4_ =
         (undefined4)((ulonglong)local_2c8.btree_reader_.navigator_.node_[7] >> 0x20);
    local_368.btree_reader_.navigator_.node_[8]._0_4_ =
         SUB84(local_2c8.btree_reader_.navigator_.node_[8],0);
    local_368.btree_reader_.navigator_.node_[8]._4_4_ =
         (undefined4)((ulonglong)local_2c8.btree_reader_.navigator_.node_[8] >> 0x20);
    local_368.btree_reader_.navigator_.node_[9]._0_4_ =
         SUB84(local_2c8.btree_reader_.navigator_.node_[9],0);
    local_368.btree_reader_.navigator_.node_[9]._4_4_ =
         (undefined4)((ulonglong)local_2c8.btree_reader_.navigator_.node_[9] >> 0x20);
    local_368.btree_reader_.navigator_.node_[10]._0_4_ =
         SUB84(local_2c8.btree_reader_.navigator_.node_[10],0);
    local_368.btree_reader_.navigator_.node_[10]._4_4_ =
         (undefined4)((ulonglong)local_2c8.btree_reader_.navigator_.node_[10] >> 0x20);
    local_368.btree_reader_.navigator_.node_[0xb]._0_4_ =
         SUB84(local_2c8.btree_reader_.navigator_.node_[0xb],0);
    local_368.btree_reader_.navigator_.node_[0xb]._4_4_ =
         (undefined4)((ulonglong)local_2c8.btree_reader_.navigator_.node_[0xb] >> 0x20);
    local_368.current_chunk_._Mydata = local_2c8.current_chunk_._Mydata;
    local_368.current_chunk_._Mysize = local_2c8.current_chunk_._Mysize;
    local_368.btree_reader_.remaining_ = local_2c8.btree_reader_.remaining_;
    local_368.current_leaf_ = local_2c8.current_leaf_;
    local_228.btree_reader_.navigator_.node_[0xb] = local_408.btree_reader_.navigator_.node_[0xb];
    local_228.current_chunk_._Mydata = pcVar41;
    local_228.current_chunk_._Mysize = uVar65;
    local_228.current_leaf_ = pCVar36;
    local_228.bytes_remaining_ = uVar68;
    local_228.btree_reader_.remaining_ = uVar70;
    local_228.btree_reader_.navigator_.index_._4_8_ = uVar42;
    local_228.btree_reader_.navigator_.node_[0] = pCVar1;
    local_228.btree_reader_.navigator_.node_[1] = pCVar38;
    local_228.btree_reader_.navigator_.node_[2] = pCVar39;
    local_228.btree_reader_.navigator_.node_[3] = pCVar40;
    local_228.btree_reader_.navigator_.node_[4] = pCVar43;
    local_228.btree_reader_.navigator_.node_[5] = pCVar44;
    local_228.btree_reader_.navigator_.node_[6] = pCVar45;
    local_228.btree_reader_.navigator_.node_[7] = pCVar46;
    local_228.btree_reader_.navigator_.node_[8] = pCVar47;
    local_228.btree_reader_.navigator_.node_[9] = pCVar48;
    local_228.btree_reader_.navigator_.node_[10] = pCVar49;
    local_368.bytes_remaining_ = local_2c8.bytes_remaining_;
    while( true ) {
      if (local_368.bytes_remaining_ == 0) {
        (__return_storage_ptr__->chunk_iterator_).current_chunk_._Mydata = pcVar41;
        (__return_storage_ptr__->chunk_iterator_).current_chunk_._Mysize = uVar65;
        (__return_storage_ptr__->chunk_iterator_).current_leaf_ = pCVar36;
        (__return_storage_ptr__->chunk_iterator_).bytes_remaining_ = uVar68;
        (__return_storage_ptr__->chunk_iterator_).btree_reader_.remaining_ = uVar70;
        (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.height_ = iVar10;
        (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[0] = uVar55;
        (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[1] = uVar56;
        (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[2] = uVar57;
        (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[3] = uVar58;
        *(undefined8 *)
         ((__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_ + 4) = uVar42;
        (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0] = pCVar1;
        (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[1] = pCVar38;
        (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[2] = pCVar39;
        (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[3] = pCVar40;
        (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[4] = pCVar43;
        (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[5] = pCVar44;
        (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[6] = pCVar45;
        (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[7] = pCVar46;
        (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[8] = pCVar47;
        (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[9] = pCVar48;
        (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[10] = pCVar49;
        (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0xb] = pCVar59;
        return __return_storage_ptr__;
      }
      uVar67 = local_228.current_chunk_._Mysize;
      if (local_368.current_chunk_._Mysize < local_228.current_chunk_._Mysize) {
        uVar67 = local_368.current_chunk_._Mysize;
      }
      uVar69 = uVar67;
      if (local_228.current_chunk_._Mysize < uVar67) {
        uVar69 = local_228.current_chunk_._Mysize;
      }
      uVar64 = uVar67;
      if (local_368.current_chunk_._Mysize < uVar67) {
        uVar64 = local_368.current_chunk_._Mysize;
      }
      if ((uVar69 != uVar64) ||
         (iVar61 = memcmp(local_228.current_chunk_._Mydata,local_368.current_chunk_._Mydata,uVar69),
         iVar61 != 0)) break;
      ChunkIterator::AdvanceBytes(&local_228,uVar67);
      ChunkIterator::AdvanceBytes(&local_368,uVar67);
    }
LAB_1501bff42:
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.height_ = 0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[0] = '\0';
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[1] = '\0';
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[2] = '\0';
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[3] = '\0';
    pCVar54 = &(__return_storage_ptr__->chunk_iterator_).btree_reader_;
    (pCVar54->navigator_).index_[4] = '\0';
    (pCVar54->navigator_).index_[5] = '\0';
    (pCVar54->navigator_).index_[6] = '\0';
    (pCVar54->navigator_).index_[7] = '\0';
    (pCVar54->navigator_).index_[8] = '\0';
    (pCVar54->navigator_).index_[9] = '\0';
    (pCVar54->navigator_).index_[10] = '\0';
    (pCVar54->navigator_).index_[0xb] = '\0';
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[1] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[2] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[3] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[4] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[5] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[6] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[7] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[8] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[9] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[10] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0xb] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).current_chunk_._Mydata = (char *)0x0;
    (__return_storage_ptr__->chunk_iterator_).current_chunk_._Mysize = 0;
    (__return_storage_ptr__->chunk_iterator_).current_leaf_ = (CordRep *)0x0;
    (__return_storage_ptr__->chunk_iterator_).bytes_remaining_ = 0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.remaining_ = 0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.height_ = -1;
    return __return_storage_ptr__;
  }
  if (((this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info !=
       (param_1->contents_).data_.rep_.field0_0x0.as_tree.cordz_info) ||
     ((this->contents_).data_.rep_.field0_0x0.as_tree.rep !=
      (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)) {
    if (bVar72 != 0) {
      uVar68 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
    }
    if (bVar71 != 0) {
      uVar66 = ((this->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
    }
    if ((uVar66 != uVar68) || (bVar60 = EqualsImpl(this,param_1,uVar68), !bVar60)) {
      local_368.btree_reader_.navigator_.height_ = -1;
      local_368.current_chunk_._Mydata = (char *)0x0;
      local_368.current_chunk_._Mysize = 0;
      local_368.btree_reader_.navigator_.node_[10]._4_4_ = 0;
      local_368.btree_reader_.navigator_.node_[0xb]._0_4_ = 0;
      local_368.btree_reader_.navigator_.node_[0xb]._4_4_ = 0;
      local_368.btree_reader_.remaining_ = 0;
      pCVar62 = &local_368;
      local_368.btree_reader_.navigator_.index_[0] = '\0';
      local_368.btree_reader_.navigator_.index_[1] = '\0';
      local_368.btree_reader_.navigator_.index_[2] = '\0';
      local_368.btree_reader_.navigator_.index_[3] = '\0';
      local_368.btree_reader_.navigator_.index_[4] = '\0';
      local_368.btree_reader_.navigator_.index_[5] = '\0';
      local_368.btree_reader_.navigator_.index_[6] = '\0';
      local_368.btree_reader_.navigator_.index_[7] = '\0';
      local_368.btree_reader_.navigator_.index_[8] = '\0';
      local_368.btree_reader_.navigator_.index_[9] = '\0';
      local_368.btree_reader_.navigator_.index_[10] = '\0';
      local_368.btree_reader_.navigator_.index_[0xb] = '\0';
      local_368.btree_reader_.navigator_.node_[0]._0_4_ = 0;
      local_368.btree_reader_.navigator_.node_[0]._4_4_ = 0;
      local_368.btree_reader_.navigator_.node_[1]._0_4_ = 0;
      local_368.btree_reader_.navigator_.node_[1]._4_4_ = 0;
      local_368.btree_reader_.navigator_.node_[2]._0_4_ = 0;
      local_368.btree_reader_.navigator_.node_[2]._4_4_ = 0;
      local_368.btree_reader_.navigator_.node_[3]._0_4_ = 0;
      local_368.btree_reader_.navigator_.node_[3]._4_4_ = 0;
      local_368.btree_reader_.navigator_.node_[4]._0_4_ = 0;
      local_368.btree_reader_.navigator_.node_[4]._4_4_ = 0;
      local_368.btree_reader_.navigator_.node_[5]._0_4_ = 0;
      local_368.btree_reader_.navigator_.node_[5]._4_4_ = 0;
      local_368.btree_reader_.navigator_.node_[6]._0_4_ = 0;
      local_368.btree_reader_.navigator_.node_[6]._4_4_ = 0;
      local_368.btree_reader_.navigator_.node_[7]._0_4_ = 0;
      local_368.btree_reader_.navigator_.node_[7]._4_4_ = 0;
      local_368.btree_reader_.navigator_.node_[8]._0_4_ = 0;
      local_368.btree_reader_.navigator_.node_[8]._4_4_ = 0;
      local_368.btree_reader_.navigator_.node_[9]._0_4_ = 0;
      local_368.btree_reader_.navigator_.node_[9]._4_4_ = 0;
      local_368.btree_reader_.navigator_.node_[10]._0_4_ = 0;
      local_368.current_leaf_ = (CordRep *)0x0;
      local_368.bytes_remaining_ = 0;
      goto LAB_1501bf9c3;
    }
  }
  ChunkIterator::ChunkIterator(&local_188,this);
  pCVar62 = &local_188;
LAB_1501bf9c3:
  uVar68 = (pCVar62->current_chunk_)._Mysize;
  pCVar36 = pCVar62->current_leaf_;
  uVar70 = pCVar62->bytes_remaining_;
  (__return_storage_ptr__->chunk_iterator_).current_chunk_._Mydata =
       (pCVar62->current_chunk_)._Mydata;
  (__return_storage_ptr__->chunk_iterator_).current_chunk_._Mysize = uVar68;
  uVar68 = (pCVar62->btree_reader_).remaining_;
  iVar10 = (pCVar62->btree_reader_).navigator_.height_;
  uVar55 = (pCVar62->btree_reader_).navigator_.index_[0];
  uVar56 = (pCVar62->btree_reader_).navigator_.index_[1];
  uVar57 = (pCVar62->btree_reader_).navigator_.index_[2];
  uVar58 = (pCVar62->btree_reader_).navigator_.index_[3];
  (__return_storage_ptr__->chunk_iterator_).current_leaf_ = pCVar36;
  (__return_storage_ptr__->chunk_iterator_).bytes_remaining_ = uVar70;
  uVar37 = *(undefined8 *)((pCVar62->btree_reader_).navigator_.index_ + 4);
  pCVar1 = (pCVar62->btree_reader_).navigator_.node_[0];
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.remaining_ = uVar68;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.height_ = iVar10;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[0] = uVar55;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[1] = uVar56;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[2] = uVar57;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[3] = uVar58;
  pCVar38 = (pCVar62->btree_reader_).navigator_.node_[1];
  pCVar39 = (pCVar62->btree_reader_).navigator_.node_[2];
  *(undefined8 *)((__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_ + 4) =
       uVar37;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0] = pCVar1;
  pCVar1 = (pCVar62->btree_reader_).navigator_.node_[3];
  pCVar40 = (pCVar62->btree_reader_).navigator_.node_[4];
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[1] = pCVar38;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[2] = pCVar39;
  pCVar38 = (pCVar62->btree_reader_).navigator_.node_[5];
  pCVar39 = (pCVar62->btree_reader_).navigator_.node_[6];
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[3] = pCVar1;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[4] = pCVar40;
  pCVar1 = (pCVar62->btree_reader_).navigator_.node_[7];
  pCVar40 = (pCVar62->btree_reader_).navigator_.node_[8];
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[5] = pCVar38;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[6] = pCVar39;
  pCVar38 = (pCVar62->btree_reader_).navigator_.node_[9];
  pCVar39 = (pCVar62->btree_reader_).navigator_.node_[10];
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[7] = pCVar1;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[8] = pCVar40;
  pCVar1 = (pCVar62->btree_reader_).navigator_.node_[0xb];
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[9] = pCVar38;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[10] = pCVar39;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0xb] = pCVar1;
  return __return_storage_ptr__;
}

// Find @ 1501c01f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* public: class absl::lts_20240722::Cord::CharIterator __cdecl absl::lts_20240722::Cord::Find(class
   std::basic_string_view<char,struct std::char_traits<char> >)const __ptr64 */

CharIterator * __thiscall
absl::lts_20240722::Cord::Find
          (Cord *this,CharIterator *__return_storage_ptr__,
          basic_string_view<char,std::char_traits<char>_> *param_1)

{
  CordRepBtree *pCVar1;
  byte bVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  CordRep *pCVar5;
  ulong64 uVar6;
  undefined8 uVar7;
  CordRepBtree *pCVar8;
  CordRepBtree *pCVar9;
  CordRepBtree *pCVar10;
  CordRepBtreeReader *pCVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  int iVar16;
  ChunkIterator *pCVar17;
  __uint64 _Var18;
  byte bVar19;
  ulong64 uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_1b8 [32];
  basic_string_view<char,std::char_traits<char>_> local_198;
  ChunkIterator local_188;
  ChunkIterator local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  uVar3 = param_1->_Mysize;
  if (uVar3 == 0) {
    ChunkIterator::ChunkIterator(&__return_storage_ptr__->chunk_iterator_,this);
    return __return_storage_ptr__;
  }
  bVar2 = (this->contents_).data_.rep_.field0_0x0.data[0];
  bVar19 = bVar2 & 1;
  if (bVar19 == 0) {
    uVar20 = (ulonglong)(longlong)(char)bVar2 >> 1;
  }
  else {
    uVar20 = ((this->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar20 < uVar3) {
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.height_ = 0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[0] = '\0';
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[1] = '\0';
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[2] = '\0';
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[3] = '\0';
    pCVar11 = &(__return_storage_ptr__->chunk_iterator_).btree_reader_;
    (pCVar11->navigator_).index_[4] = '\0';
    (pCVar11->navigator_).index_[5] = '\0';
    (pCVar11->navigator_).index_[6] = '\0';
    (pCVar11->navigator_).index_[7] = '\0';
    (pCVar11->navigator_).index_[8] = '\0';
    (pCVar11->navigator_).index_[9] = '\0';
    (pCVar11->navigator_).index_[10] = '\0';
    (pCVar11->navigator_).index_[0xb] = '\0';
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[1] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[2] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[3] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[4] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[5] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[6] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[7] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[8] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[9] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[10] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0xb] =
         (CordRepBtree *)0x0;
    (__return_storage_ptr__->chunk_iterator_).current_chunk_._Mydata = (char *)0x0;
    (__return_storage_ptr__->chunk_iterator_).current_chunk_._Mysize = 0;
    (__return_storage_ptr__->chunk_iterator_).current_leaf_ = (CordRep *)0x0;
    (__return_storage_ptr__->chunk_iterator_).bytes_remaining_ = 0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.remaining_ = 0;
    (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.height_ = -1;
    return __return_storage_ptr__;
  }
  _Var18 = (ulonglong)(longlong)(char)bVar2 >> 1;
  uVar21 = _Var18;
  if (bVar19 != 0) {
    uVar21 = ((this->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar3 != uVar21) {
    ChunkIterator::ChunkIterator(&local_188,this);
    local_198._Mydata = param_1->_Mydata;
    local_198._Mysize = param_1->_Mysize;
    local_e8.current_leaf_ = local_188.current_leaf_;
    local_e8.bytes_remaining_ = local_188.bytes_remaining_;
    local_e8.current_chunk_._Mydata = local_188.current_chunk_._Mydata;
    local_e8.current_chunk_._Mysize = local_188.current_chunk_._Mysize;
    local_e8.btree_reader_.remaining_ = local_188.btree_reader_.remaining_;
    FindImpl(this,__return_storage_ptr__,(CharIterator *)&local_e8,&local_198);
    return __return_storage_ptr__;
  }
  _Var4 = param_1->_Mysize;
  if (bVar19 != 0) {
    _Var18 = ((this->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (_Var18 == _Var4) {
    GetFirstChunk(&local_198,this);
    uVar20 = local_198._Mysize;
    if (param_1->_Mysize < local_198._Mysize) {
      uVar20 = param_1->_Mysize;
    }
    iVar16 = memcmp(local_198._Mydata,param_1->_Mydata,uVar20);
    if (uVar20 == _Var4) {
LAB_1501c0346:
      bVar22 = iVar16 == 0;
    }
    else {
      bVar22 = false;
      if (iVar16 == 0) {
        local_198._Mydata = param_1->_Mydata;
        local_198._Mysize = param_1->_Mysize;
        iVar16 = CompareSlowPath(this,&local_198,uVar20,_Var4);
        goto LAB_1501c0346;
      }
    }
    if (bVar22) {
      ChunkIterator::ChunkIterator(&local_e8,this);
      pCVar17 = &local_e8;
      goto LAB_1501c03b1;
    }
  }
  local_188.btree_reader_.navigator_.height_ = -1;
  local_188.current_chunk_._Mydata = (char *)0x0;
  local_188.current_chunk_._Mysize = 0;
  local_188.btree_reader_.navigator_.node_[10]._4_4_ = 0;
  local_188.btree_reader_.navigator_.node_[0xb]._0_4_ = 0;
  local_188.btree_reader_.navigator_.node_[0xb]._4_4_ = 0;
  local_188.btree_reader_.remaining_ = 0;
  pCVar17 = &local_188;
  local_188.btree_reader_.navigator_.index_[0] = '\0';
  local_188.btree_reader_.navigator_.index_[1] = '\0';
  local_188.btree_reader_.navigator_.index_[2] = '\0';
  local_188.btree_reader_.navigator_.index_[3] = '\0';
  local_188.btree_reader_.navigator_.index_[4] = '\0';
  local_188.btree_reader_.navigator_.index_[5] = '\0';
  local_188.btree_reader_.navigator_.index_[6] = '\0';
  local_188.btree_reader_.navigator_.index_[7] = '\0';
  local_188.btree_reader_.navigator_.index_[8] = '\0';
  local_188.btree_reader_.navigator_.index_[9] = '\0';
  local_188.btree_reader_.navigator_.index_[10] = '\0';
  local_188.btree_reader_.navigator_.index_[0xb] = '\0';
  local_188.btree_reader_.navigator_.node_[0]._0_4_ = 0;
  local_188.btree_reader_.navigator_.node_[0]._4_4_ = 0;
  local_188.btree_reader_.navigator_.node_[1]._0_4_ = 0;
  local_188.btree_reader_.navigator_.node_[1]._4_4_ = 0;
  local_188.btree_reader_.navigator_.node_[2]._0_4_ = 0;
  local_188.btree_reader_.navigator_.node_[2]._4_4_ = 0;
  local_188.btree_reader_.navigator_.node_[3]._0_4_ = 0;
  local_188.btree_reader_.navigator_.node_[3]._4_4_ = 0;
  local_188.btree_reader_.navigator_.node_[4]._0_4_ = 0;
  local_188.btree_reader_.navigator_.node_[4]._4_4_ = 0;
  local_188.btree_reader_.navigator_.node_[5]._0_4_ = 0;
  local_188.btree_reader_.navigator_.node_[5]._4_4_ = 0;
  local_188.btree_reader_.navigator_.node_[6]._0_4_ = 0;
  local_188.btree_reader_.navigator_.node_[6]._4_4_ = 0;
  local_188.btree_reader_.navigator_.node_[7]._0_4_ = 0;
  local_188.btree_reader_.navigator_.node_[7]._4_4_ = 0;
  local_188.btree_reader_.navigator_.node_[8]._0_4_ = 0;
  local_188.btree_reader_.navigator_.node_[8]._4_4_ = 0;
  local_188.btree_reader_.navigator_.node_[9]._0_4_ = 0;
  local_188.btree_reader_.navigator_.node_[9]._4_4_ = 0;
  local_188.btree_reader_.navigator_.node_[10]._0_4_ = 0;
  local_188.current_leaf_ = (CordRep *)0x0;
  local_188.bytes_remaining_ = 0;
LAB_1501c03b1:
  uVar20 = (pCVar17->current_chunk_)._Mysize;
  pCVar5 = pCVar17->current_leaf_;
  uVar6 = pCVar17->bytes_remaining_;
  (__return_storage_ptr__->chunk_iterator_).current_chunk_._Mydata =
       (pCVar17->current_chunk_)._Mydata;
  (__return_storage_ptr__->chunk_iterator_).current_chunk_._Mysize = uVar20;
  uVar20 = (pCVar17->btree_reader_).remaining_;
  iVar16 = (pCVar17->btree_reader_).navigator_.height_;
  uVar12 = (pCVar17->btree_reader_).navigator_.index_[0];
  uVar13 = (pCVar17->btree_reader_).navigator_.index_[1];
  uVar14 = (pCVar17->btree_reader_).navigator_.index_[2];
  uVar15 = (pCVar17->btree_reader_).navigator_.index_[3];
  (__return_storage_ptr__->chunk_iterator_).current_leaf_ = pCVar5;
  (__return_storage_ptr__->chunk_iterator_).bytes_remaining_ = uVar6;
  uVar7 = *(undefined8 *)((pCVar17->btree_reader_).navigator_.index_ + 4);
  pCVar1 = (pCVar17->btree_reader_).navigator_.node_[0];
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.remaining_ = uVar20;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.height_ = iVar16;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[0] = uVar12;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[1] = uVar13;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[2] = uVar14;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[3] = uVar15;
  pCVar8 = (pCVar17->btree_reader_).navigator_.node_[1];
  pCVar9 = (pCVar17->btree_reader_).navigator_.node_[2];
  *(undefined8 *)((__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_ + 4) =
       uVar7;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0] = pCVar1;
  pCVar1 = (pCVar17->btree_reader_).navigator_.node_[3];
  pCVar10 = (pCVar17->btree_reader_).navigator_.node_[4];
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[1] = pCVar8;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[2] = pCVar9;
  pCVar8 = (pCVar17->btree_reader_).navigator_.node_[5];
  pCVar9 = (pCVar17->btree_reader_).navigator_.node_[6];
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[3] = pCVar1;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[4] = pCVar10;
  pCVar1 = (pCVar17->btree_reader_).navigator_.node_[7];
  pCVar10 = (pCVar17->btree_reader_).navigator_.node_[8];
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[5] = pCVar8;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[6] = pCVar9;
  pCVar8 = (pCVar17->btree_reader_).navigator_.node_[9];
  pCVar9 = (pCVar17->btree_reader_).navigator_.node_[10];
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[7] = pCVar1;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[8] = pCVar10;
  pCVar1 = (pCVar17->btree_reader_).navigator_.node_[0xb];
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[9] = pCVar8;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[10] = pCVar9;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0xb] = pCVar1;
  return __return_storage_ptr__;
}

// FindFlatStartPiece @ 1501c04c0

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::Cord::InlineRep::FindFlatStartPiece(void)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::Cord::InlineRep::FindFlatStartPiece
          (InlineRep *this,basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__)

{
  byte bVar1;
  ulong64 *puVar2;
  CordRep *pCVar3;
  uint uVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  
  uVar5 = (ulonglong)(this->data_).rep_.field0_0x0.data[0];
  if ((uVar5 & 1) == 0) {
    __return_storage_ptr__->_Mydata = (char *)((longlong)&(this->data_).rep_.field0_0x0 + 1);
    __return_storage_ptr__->_Mysize = uVar5 >> 1;
    return __return_storage_ptr__;
  }
  pCVar3 = (this->data_).rep_.field0_0x0.as_tree.rep;
  if (pCVar3->tag == '\x02') {
    pCVar3 = (CordRep *)pCVar3[1].length;
  }
  bVar1 = pCVar3->tag;
  if (5 < bVar1) {
    __return_storage_ptr__->_Mydata = (char *)pCVar3->storage;
    __return_storage_ptr__->_Mysize = pCVar3->length;
    return __return_storage_ptr__;
  }
  if (bVar1 == 5) {
    __return_storage_ptr__->_Mydata = (char *)pCVar3[1].length;
    __return_storage_ptr__->_Mysize = pCVar3->length;
    return __return_storage_ptr__;
  }
  if (bVar1 != 3) {
    puVar2 = &pCVar3->length;
    uVar7 = 0;
    if (bVar1 == 1) {
      uVar7 = pCVar3[1].length;
      pCVar3 = *(CordRep **)&pCVar3[1].refcount;
    }
    bVar1 = pCVar3->tag;
    __return_storage_ptr__->_Mysize = *puVar2;
    if (bVar1 < 6) {
      __return_storage_ptr__->_Mydata = (char *)(pCVar3[1].length + uVar7);
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->_Mydata = (char *)(pCVar3->storage + uVar7);
    return __return_storage_ptr__;
  }
  uVar4 = (uint)pCVar3->storage[0];
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    pCVar3 = *(CordRep **)(pCVar3[1].storage + (ulonglong)pCVar3->storage[1] * 8 + -0xd);
  }
  uVar6 = 0;
  puVar2 = *(ulong64 **)(pCVar3[1].storage + (ulonglong)pCVar3->storage[1] * 8 + -0xd);
  uVar7 = *puVar2;
  if (*(char *)((longlong)puVar2 + 0xc) == '\x01') {
    uVar6 = puVar2[2];
    puVar2 = (ulong64 *)puVar2[3];
  }
  if (*(byte *)((longlong)puVar2 + 0xc) < 6) {
    __return_storage_ptr__->_Mydata = (char *)(puVar2[2] + uVar6);
    __return_storage_ptr__->_Mysize = uVar7;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->_Mydata = (char *)((longlong)puVar2 + uVar6 + 0xd);
  __return_storage_ptr__->_Mysize = uVar7;
  return __return_storage_ptr__;
}

// FindImpl @ 1501c0600

/* WARNING: Type propagation algorithm not settling */
/* private: class absl::lts_20240722::Cord::CharIterator __cdecl
   absl::lts_20240722::Cord::FindImpl(class absl::lts_20240722::Cord::CharIterator,class
   std::basic_string_view<char,struct std::char_traits<char> >)const __ptr64 */

CharIterator * __thiscall
absl::lts_20240722::Cord::FindImpl
          (Cord *this,CharIterator *__return_storage_ptr__,CharIterator *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  CordRepBtree *pCVar1;
  ulonglong uVar2;
  CordRep *pCVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  CordRepBtree *pCVar6;
  CordRepBtree *pCVar7;
  CordRepBtree *pCVar8;
  CordRepBtreeReader *pCVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  int iVar14;
  void *pvVar15;
  __uint64 _Var16;
  size_t _MaxCount;
  ulonglong _Size;
  char *pcVar17;
  ulong64 uVar18;
  ulonglong uVar19;
  ChunkIterator local_d8;
  
  uVar2 = param_2->_Mysize;
  uVar19 = (param_1->chunk_iterator_).bytes_remaining_;
  while (uVar2 <= uVar19) {
    _MaxCount = (param_1->chunk_iterator_).current_chunk_._Mysize;
    pcVar17 = (param_1->chunk_iterator_).current_chunk_._Mydata;
    if (((_MaxCount != 0) &&
        (pvVar15 = memchr(pcVar17,(int)*param_2->_Mydata,_MaxCount), pvVar15 != (void *)0x0)) &&
       (_Var16 = (longlong)pvVar15 - (longlong)pcVar17, _Var16 != 0xffffffffffffffff)) {
      ChunkIterator::AdvanceBytes(&param_1->chunk_iterator_,_Var16);
      if ((param_1->chunk_iterator_).bytes_remaining_ < uVar2) break;
      pcVar17 = param_2->_Mydata;
      uVar19 = param_2->_Mysize;
      local_d8.current_chunk_._Mydata = (param_1->chunk_iterator_).current_chunk_._Mydata;
      local_d8.current_chunk_._Mysize = (param_1->chunk_iterator_).current_chunk_._Mysize;
      local_d8.current_leaf_ = (param_1->chunk_iterator_).current_leaf_;
      local_d8.bytes_remaining_ = (param_1->chunk_iterator_).bytes_remaining_;
      local_d8.btree_reader_.remaining_ = (param_1->chunk_iterator_).btree_reader_.remaining_;
      local_d8.btree_reader_.navigator_.height_ =
           (param_1->chunk_iterator_).btree_reader_.navigator_.height_;
      local_d8.btree_reader_.navigator_.index_[0] =
           (param_1->chunk_iterator_).btree_reader_.navigator_.index_[0];
      local_d8.btree_reader_.navigator_.index_[1] =
           (param_1->chunk_iterator_).btree_reader_.navigator_.index_[1];
      local_d8.btree_reader_.navigator_.index_[2] =
           (param_1->chunk_iterator_).btree_reader_.navigator_.index_[2];
      local_d8.btree_reader_.navigator_.index_[3] =
           (param_1->chunk_iterator_).btree_reader_.navigator_.index_[3];
      local_d8.btree_reader_.navigator_.index_._4_8_ =
           *(undefined8 *)((param_1->chunk_iterator_).btree_reader_.navigator_.index_ + 4);
      local_d8.btree_reader_.navigator_.node_[0] =
           (param_1->chunk_iterator_).btree_reader_.navigator_.node_[0];
      local_d8.btree_reader_.navigator_.node_[1] =
           (param_1->chunk_iterator_).btree_reader_.navigator_.node_[1];
      local_d8.btree_reader_.navigator_.node_[2] =
           (param_1->chunk_iterator_).btree_reader_.navigator_.node_[2];
      local_d8.btree_reader_.navigator_.node_[3] =
           (param_1->chunk_iterator_).btree_reader_.navigator_.node_[3];
      local_d8.btree_reader_.navigator_.node_[4] =
           (param_1->chunk_iterator_).btree_reader_.navigator_.node_[4];
      local_d8.btree_reader_.navigator_.node_[5] =
           (param_1->chunk_iterator_).btree_reader_.navigator_.node_[5];
      local_d8.btree_reader_.navigator_.node_[6] =
           (param_1->chunk_iterator_).btree_reader_.navigator_.node_[6];
      local_d8.btree_reader_.navigator_.node_[7] =
           (param_1->chunk_iterator_).btree_reader_.navigator_.node_[7];
      local_d8.btree_reader_.navigator_.node_[8] =
           (param_1->chunk_iterator_).btree_reader_.navigator_.node_[8];
      local_d8.btree_reader_.navigator_.node_[9] =
           (param_1->chunk_iterator_).btree_reader_.navigator_.node_[9];
      local_d8.btree_reader_.navigator_.node_[10] =
           (param_1->chunk_iterator_).btree_reader_.navigator_.node_[10];
      local_d8.btree_reader_.navigator_.node_[0xb] =
           (param_1->chunk_iterator_).btree_reader_.navigator_.node_[0xb];
      while( true ) {
        uVar18 = local_d8.current_chunk_._Mysize;
        if (uVar19 < local_d8.current_chunk_._Mysize) {
          uVar18 = uVar19;
        }
        _Size = uVar18;
        if (local_d8.current_chunk_._Mysize < uVar18) {
          _Size = local_d8.current_chunk_._Mysize;
        }
        if ((_Size != 0) &&
           ((uVar19 < _Size ||
            (iVar14 = memcmp(pcVar17,local_d8.current_chunk_._Mydata,_Size), iVar14 != 0)))) break;
        pcVar17 = pcVar17 + _Size;
        uVar19 = uVar19 - _Size;
        if (uVar19 == 0) {
          uVar18 = (param_1->chunk_iterator_).current_chunk_._Mysize;
          pCVar3 = (param_1->chunk_iterator_).current_leaf_;
          uVar4 = (param_1->chunk_iterator_).bytes_remaining_;
          (__return_storage_ptr__->chunk_iterator_).current_chunk_._Mydata =
               (param_1->chunk_iterator_).current_chunk_._Mydata;
          (__return_storage_ptr__->chunk_iterator_).current_chunk_._Mysize = uVar18;
          uVar18 = (param_1->chunk_iterator_).btree_reader_.remaining_;
          iVar14 = (param_1->chunk_iterator_).btree_reader_.navigator_.height_;
          uVar10 = (param_1->chunk_iterator_).btree_reader_.navigator_.index_[0];
          uVar11 = (param_1->chunk_iterator_).btree_reader_.navigator_.index_[1];
          uVar12 = (param_1->chunk_iterator_).btree_reader_.navigator_.index_[2];
          uVar13 = (param_1->chunk_iterator_).btree_reader_.navigator_.index_[3];
          (__return_storage_ptr__->chunk_iterator_).current_leaf_ = pCVar3;
          (__return_storage_ptr__->chunk_iterator_).bytes_remaining_ = uVar4;
          uVar5 = *(undefined8 *)((param_1->chunk_iterator_).btree_reader_.navigator_.index_ + 4);
          pCVar1 = (param_1->chunk_iterator_).btree_reader_.navigator_.node_[0];
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.remaining_ = uVar18;
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.height_ = iVar14;
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[0] = uVar10;
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[1] = uVar11;
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[2] = uVar12;
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[3] = uVar13;
          pCVar6 = (param_1->chunk_iterator_).btree_reader_.navigator_.node_[1];
          pCVar7 = (param_1->chunk_iterator_).btree_reader_.navigator_.node_[2];
          *(undefined8 *)
           ((__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_ + 4) = uVar5;
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0] = pCVar1;
          pCVar1 = (param_1->chunk_iterator_).btree_reader_.navigator_.node_[3];
          pCVar8 = (param_1->chunk_iterator_).btree_reader_.navigator_.node_[4];
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[1] = pCVar6;
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[2] = pCVar7;
          pCVar6 = (param_1->chunk_iterator_).btree_reader_.navigator_.node_[5];
          pCVar7 = (param_1->chunk_iterator_).btree_reader_.navigator_.node_[6];
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[3] = pCVar1;
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[4] = pCVar8;
          pCVar1 = (param_1->chunk_iterator_).btree_reader_.navigator_.node_[7];
          pCVar8 = (param_1->chunk_iterator_).btree_reader_.navigator_.node_[8];
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[5] = pCVar6;
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[6] = pCVar7;
          pCVar6 = (param_1->chunk_iterator_).btree_reader_.navigator_.node_[9];
          pCVar7 = (param_1->chunk_iterator_).btree_reader_.navigator_.node_[10];
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[7] = pCVar1;
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[8] = pCVar8;
          pCVar1 = (param_1->chunk_iterator_).btree_reader_.navigator_.node_[0xb];
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[9] = pCVar6;
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[10] = pCVar7;
          (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0xb] = pCVar1;
          return __return_storage_ptr__;
        }
        ChunkIterator::AdvanceBytes(&local_d8,uVar18);
      }
      _MaxCount = 1;
    }
    ChunkIterator::AdvanceBytes(&param_1->chunk_iterator_,_MaxCount);
    uVar19 = (param_1->chunk_iterator_).bytes_remaining_;
  }
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.height_ = 0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[0] = '\0';
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[1] = '\0';
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[2] = '\0';
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[3] = '\0';
  pCVar9 = &(__return_storage_ptr__->chunk_iterator_).btree_reader_;
  (pCVar9->navigator_).index_[4] = '\0';
  (pCVar9->navigator_).index_[5] = '\0';
  (pCVar9->navigator_).index_[6] = '\0';
  (pCVar9->navigator_).index_[7] = '\0';
  (pCVar9->navigator_).index_[8] = '\0';
  (pCVar9->navigator_).index_[9] = '\0';
  (pCVar9->navigator_).index_[10] = '\0';
  (pCVar9->navigator_).index_[0xb] = '\0';
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[1] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[2] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[3] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[4] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[5] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[6] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[7] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[8] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[9] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[10] = (CordRepBtree *)0x0
  ;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0xb] =
       (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).current_chunk_._Mydata = (char *)0x0;
  (__return_storage_ptr__->chunk_iterator_).current_chunk_._Mysize = 0;
  (__return_storage_ptr__->chunk_iterator_).current_leaf_ = (CordRep *)0x0;
  (__return_storage_ptr__->chunk_iterator_).bytes_remaining_ = 0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.remaining_ = 0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.height_ = -1;
  return __return_storage_ptr__;
}

// FlatOverhead @ 1501c0860

/* public: static unsigned __int64 __cdecl
   absl::lts_20240722::strings_internal::CordTestAccess::FlatOverhead(void) */

__uint64 __cdecl absl::lts_20240722::strings_internal::CordTestAccess::FlatOverhead(void)

{
  return 0xd;
}

// FlatTagToLength @ 1501c0870

/* public: static unsigned __int64 __cdecl
   absl::lts_20240722::strings_internal::CordTestAccess::FlatTagToLength(unsigned char) */

__uint64 __cdecl
absl::lts_20240722::strings_internal::CordTestAccess::FlatTagToLength(uchar param_1)

{
  if (param_1 < 0x43) {
    return (longlong)(int)((uint)param_1 * 8 + -0x10) - 0xd;
  }
  if (param_1 < 0xbb) {
    return (longlong)(int)((param_1 - 0x3a) * 0x40) - 0xd;
  }
  return (longlong)(int)((param_1 - 0xb8) * 0x1000) - 0xd;
}

// FlattenSlowPath @ 1501c08b0

/* private: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::Cord::FlattenSlowPath(void) __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::Cord::FlattenSlowPath
          (Cord *this,basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__)

{
  CordRep **ppCVar1;
  RefcountAndFlags *pRVar2;
  atomic<int> aVar3;
  longlong lVar4;
  CordRep *pCVar5;
  ulonglong uVar6;
  CordRep *pCVar7;
  void *pvVar8;
  ulong64 uVar9;
  uchar *puVar10;
  CordzInfo *this_00;
  
  uVar6 = (ulonglong)(this->contents_).data_.rep_.field0_0x0.data[0];
  ppCVar1 = &(this->contents_).data_.rep_.field0_0x0.as_tree.rep;
  if ((uVar6 & 1) == 0) {
    uVar9 = uVar6 >> 1;
  }
  else {
    uVar9 = (*ppCVar1)->length;
  }
  if (uVar9 < 0xff4) {
    pCVar7 = (CordRep *)cord_internal::CordRepFlat::New(uVar9);
    pCVar7->length = uVar9;
    puVar10 = pCVar7->storage;
    CopyToArraySlowPath(this,(char *)puVar10);
  }
  else {
    if (uVar9 < 0x1000) {
      puVar10 = ::operator_new(uVar9);
    }
    else {
      if (uVar9 + 0x27 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_bad_array_new_length();
      }
      pvVar8 = ::operator_new(uVar9 + 0x27);
      if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      puVar10 = (uchar *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
      *(void **)(puVar10 + -8) = pvVar8;
    }
    CopyToArraySlowPath(this,(char *)puVar10);
    pCVar7 = ::operator_new(0x20);
    if (pCVar7 == (CordRep *)0x0) {
      pCVar7 = (CordRep *)0x0;
    }
    else {
      (pCVar7->refcount).count_ = (atomic<int>)0x2;
      *(code **)&pCVar7[1].refcount = FUN_1501c2750;
    }
    pCVar7->length = uVar9;
    pCVar7->tag = '\x05';
    pCVar7[1].length = (ulong64)puVar10;
  }
  lVar4 = (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
  this_00 = (CordzInfo *)(lVar4 + -1);
  if (this_00 != (CordzInfo *)0x0) {
    cord_internal::CordzInfo::Lock(this_00,kFlatten);
  }
  pCVar5 = *ppCVar1;
  LOCK();
  pRVar2 = &pCVar5->refcount;
  aVar3 = pRVar2->count_;
  pRVar2->count_ = (atomic<int>)((int)pRVar2->count_ + -2);
  UNLOCK();
  if (aVar3 == (atomic<int>)0x2) {
    cord_internal::CordRep::Destroy(pCVar5);
  }
  *ppCVar1 = pCVar7;
  if (this_00 != (CordzInfo *)0x0) {
    *(CordRep **)(lVar4 + 0x3f) = pCVar7;
  }
  __return_storage_ptr__->_Mydata = (char *)puVar10;
  __return_storage_ptr__->_Mysize = uVar9;
  if (this_00 != (CordzInfo *)0x0) {
    cord_internal::CordzInfo::Unlock(this_00);
  }
  return __return_storage_ptr__;
}

// ForEachChunkAux @ 1501c0a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* private: static void __cdecl absl::lts_20240722::Cord::ForEachChunkAux(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,class absl::lts_20240722::FunctionRef<void
   __cdecl(class std::basic_string_view<char,struct std::char_traits<char> >)>) */

void __cdecl
absl::lts_20240722::Cord::ForEachChunkAux
          (CordRep *param_1,
          FunctionRef<void___cdecl(std::basic_string_view<char,std::char_traits<char>_>)> *param_2)

{
  ulong64 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  bool bVar4;
  CordRep *pCVar5;
  CordRep *pCVar6;
  CordRep *pCVar7;
  uchar **ppuVar8;
  CordRepBtree *pCVar9;
  CordRep *pCVar10;
  byte bVar11;
  ulonglong uVar12;
  int iVar13;
  CordRepBtree *pCVar14;
  ulong64 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_178 [32];
  FunctionRef<void___cdecl(std::basic_string_view<char,std::char_traits<char>_>)> *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  basic_string_view<char,std::char_traits<char>_> local_138;
  basic_string_view<char,std::char_traits<char>_> local_128;
  uchar *local_118;
  ulong64 uStack_110;
  uchar *local_108;
  ulong64 local_100;
  ChunkIterator local_f8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (param_1->length != 0) {
    if (param_1->tag == '\x02') {
      param_1 = (CordRep *)param_1[1].length;
    }
    local_158 = param_2;
    if (param_1->tag == '\x03') {
      local_f8.bytes_remaining_ = param_1->length;
      pCVar10 = (CordRep *)0x0;
      local_f8.current_chunk_._Mydata = (char *)0x0;
      local_f8.current_chunk_._Mysize = 0;
      local_f8.current_leaf_ = (CordRep *)0x0;
      local_f8.btree_reader_.remaining_ = 0;
      local_f8.btree_reader_.navigator_.height_ = -1;
      ChunkIterator::InitTree(&local_f8,param_1);
      if (local_f8.bytes_remaining_ != 0) {
        pCVar6 = (CordRep *)local_f8.current_chunk_._Mysize;
        pCVar14 = local_f8.btree_reader_.navigator_.node_[0];
        uVar15 = local_f8.btree_reader_.remaining_;
        uVar16 = local_f8.current_chunk_._Mydata._0_4_;
        uVar17 = local_f8.current_chunk_._Mydata._4_4_;
        uVar18 = (undefined4)local_f8.current_chunk_._Mysize;
        uVar19 = local_f8.current_chunk_._Mysize._4_4_;
        bVar11 = local_f8.btree_reader_.navigator_.index_[0];
        iVar13 = local_f8.btree_reader_.navigator_.height_;
        do {
          uVar1 = local_f8.bytes_remaining_;
          local_128._Mydata = (char *)CONCAT44(uVar17,uVar16);
          local_128._Mysize = CONCAT44(uVar19,uVar18);
          (*param_2->invoker_)(param_2->ptr_,&local_128);
          local_f8.bytes_remaining_ = uVar1 - (longlong)pCVar6;
          if (local_f8.bytes_remaining_ != 0) {
            if ((iVar13 < 0) ||
               (local_f8.btree_reader_.navigator_.node_[iVar13] == (CordRepBtree *)0x0)) {
              local_f8.current_chunk_._Mydata = (char *)0x0;
              local_f8.current_chunk_._Mysize = 0;
              local_f8.current_chunk_._Mydata._0_4_ = 0;
              local_f8.current_chunk_._Mydata._4_4_ = 0;
              local_f8.current_chunk_._Mysize._0_4_ = 0;
              local_f8.current_chunk_._Mysize._4_4_ = 0;
              pCVar6 = pCVar10;
              uVar16 = local_f8.current_chunk_._Mydata._0_4_;
              uVar17 = local_f8.current_chunk_._Mydata._4_4_;
              uVar18 = (undefined4)local_f8.current_chunk_._Mysize;
              uVar19 = local_f8.current_chunk_._Mysize._4_4_;
            }
            else {
              if (uVar15 == 0) {
                local_150 = (uchar *)0x0;
                uStack_148 = (uchar *)0x0;
                local_150._0_4_ = 0;
                local_150._4_4_ = 0;
                uStack_148._0_4_ = 0;
                uStack_148._4_4_ = 0;
                uVar16 = (undefined4)local_150;
                uVar17 = local_150._4_4_;
                uVar18 = (undefined4)uStack_148;
                uVar19 = uStack_148._4_4_;
              }
              else {
                pCVar6 = pCVar10;
                if ((ulonglong)bVar11 == (ulonglong)*(byte *)((longlong)&pCVar14->_padding_ + 7) - 1
                   ) {
                  do {
                    pCVar5 = pCVar6;
                    pCVar6 = (CordRep *)((longlong)&pCVar5->length + 1);
                    pCVar7 = pCVar10;
                    if ((longlong)iVar13 < (longlong)pCVar6) goto LAB_1501c0bdc;
                    pCVar9 = local_f8.btree_reader_.navigator_.node_
                             [(longlong)((longlong)&pCVar5->length + 1)];
                    uVar12 = (ulonglong)
                             pCVar5[2].storage
                             [(longlong)(&local_f8.btree_reader_.navigator_ + -1) + 0x48] + 1;
                  } while (uVar12 == *(byte *)((longlong)&pCVar9->_padding_ + 7));
                  pCVar5[2].storage[(longlong)(&local_f8.btree_reader_.navigator_ + -1) + 0x48] =
                       (uchar)uVar12;
                  do {
                    pCVar9 = *(CordRepBtree **)((longlong)pCVar9->edges_ + uVar12 * 8);
                    uVar3 = pCVar6 + 0xffffffffffffffff;
                    bVar11 = *(uchar *)((longlong)&pCVar9->_padding_ + 6);
                    uVar12 = (ulonglong)bVar11;
                    local_f8.btree_reader_.navigator_.node_
                    [(longlong)(pCVar6 + 0xffffffffffffffff) + 0xf] = pCVar9;
                    local_f8.btree_reader_.navigator_.index_
                    [(longlong)(pCVar6 + 0xffffffffffffffff) + 0xf] = bVar11;
                    pCVar6 = (CordRep *)(uVar3 + 0xf);
                  } while (0 < (longlong)(uVar3 + 0xf));
                  pCVar7 = *(CordRep **)((longlong)pCVar9->edges_ + uVar12 * 8);
                  pCVar14 = local_f8.btree_reader_.navigator_.node_[0];
                  uVar15 = local_f8.btree_reader_.remaining_;
                  bVar11 = local_f8.btree_reader_.navigator_.index_[0];
                  iVar13 = local_f8.btree_reader_.navigator_.height_;
                }
                else {
                  bVar11 = bVar11 + 1;
                  pCVar7 = pCVar14->edges_[bVar11];
                  local_f8.btree_reader_.navigator_.index_[0] = bVar11;
                }
LAB_1501c0bdc:
                uVar1 = pCVar7->length;
                uVar15 = uVar15 - uVar1;
                pCVar6 = pCVar10;
                if (pCVar7->tag == '\x01') {
                  pCVar6 = (CordRep *)pCVar7[1].length;
                  pCVar7 = *(CordRep **)&pCVar7[1].refcount;
                }
                if (pCVar7->tag < 6) {
                  ppuVar8 = &local_108;
                  local_108 = pCVar6->storage + (pCVar7[1].length - 0xd);
                  local_100 = uVar1;
                }
                else {
                  uStack_110 = uVar1;
                  local_118 = pCVar7->storage + (longlong)pCVar6;
                  ppuVar8 = &local_118;
                }
                uVar16 = *(undefined4 *)ppuVar8;
                uVar17 = *(undefined4 *)((longlong)ppuVar8 + 4);
                local_150 = *ppuVar8;
                uVar18 = *(undefined4 *)(ppuVar8 + 1);
                uVar19 = *(undefined4 *)((longlong)ppuVar8 + 0xc);
                uStack_148 = ppuVar8[1];
                local_f8.btree_reader_.remaining_ = uVar15;
              }
              auVar2._4_4_ = uVar17;
              auVar2._0_4_ = uVar16;
              auVar2._8_4_ = uVar18;
              auVar2._12_4_ = uVar19;
              local_f8.current_chunk_._Mydata = (char *)CONCAT44(uVar17,uVar16);
              local_f8.current_chunk_._Mysize = CONCAT44(uVar19,uVar18);
              pCVar6 = auVar2._8_8_;
            }
          }
          param_2 = local_158;
        } while (local_f8.bytes_remaining_ != 0);
      }
    }
    else {
      if (param_1->tag == '\x02') {
        param_1 = (CordRep *)param_1[1].length;
      }
      local_138._Mydata = (char *)0x0;
      local_138._Mysize = 0;
      bVar4 = GetFlatAux(param_1,&local_138);
      if (bVar4) {
        local_128._Mydata = local_138._Mydata;
        local_128._Mysize = local_138._Mysize;
        (*param_2->invoker_)(param_2->ptr_,&local_128);
      }
    }
  }
  return;
}

// FUN_1501c0cf0 @ 1501c0cf0

CordRepBtree * FUN_1501c0cf0(CordRepBtree *param_1)

{
  CordRep *pCVar1;
  CordRepBtree *pCVar2;
  
  if (*(uchar *)((RefcountAndFlags *)&param_1->_padding_ + 1) == '\x03') {
    return param_1;
  }
  pCVar1 = absl::lts_20240722::cord_internal::RemoveCrcNode((CordRep *)param_1);
  pCVar2 = absl::lts_20240722::cord_internal::CordRepBtree::Create(pCVar1);
  return pCVar2;
}

// Get @ 1501c0d20

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::cord_internal::RefcountAndFlags::Get(void)const __ptr64 */

__uint64 __thiscall absl::lts_20240722::cord_internal::RefcountAndFlags::Get(RefcountAndFlags *this)

{
  return (longlong)((int)this->count_ >> 1);
}

// GetAllocatedCapacity @ 1501c0d30

/* public: unsigned __int64 __cdecl absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::GetAllocatedCapacity(void)const __ptr64
    */

__uint64 __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::GetAllocatedCapacity
          (Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
           *this)

{
  return *(__uint64 *)(this + 0x10);
}

// GetAllocatedCapacity @ 1501c0d40

/* public: unsigned __int64 __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::GetAllocatedCapacity(void)const
   __ptr64 */

__uint64 __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::GetAllocatedCapacity
          (Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
           *this)

{
  return (this->data_).allocated.allocated_capacity;
}

// GetAllocatedData @ 1501c0d50

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::GetAllocatedData(void) __ptr64 */

CordRep ** __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::GetAllocatedData(Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
                   *this)

{
  return *(CordRep ***)(this + 8);
}

// GetAllocatedData @ 1501c0d60

/* public: class absl::lts_20240722::str_format_internal::FormatArgImpl * __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::GetAllocatedData(void) __ptr64 */

FormatArgImpl * __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::GetAllocatedData(Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
                   *this)

{
  return (this->data_).allocated.allocated_data;
}

// GetAllocator @ 1501c0d70

/* public: class std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> &
   __ptr64 __cdecl absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> >::GetAllocator(void)
   __ptr64 */

allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> * __thiscall
absl::lts_20240722::inlined_vector_internal::
AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>::
GetAllocator(AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
             *this)

{
  return (allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *)this;
}

// GetAllocator @ 1501c0d80

/* public: class std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> &
   __ptr64 __cdecl absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::GetAllocator(void) __ptr64 */

allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> * __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::GetAllocator(Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
               *this)

{
  return (allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *)this;
}

// GetAllocator @ 1501c0d90

/* public: class std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl> &
   __ptr64 __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::GetAllocator(void) __ptr64 */

allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> * __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::GetAllocator(Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
               *this)

{
  return (allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *)this;
}

// GetAppendBuffer @ 1501c0da0

/* public: class absl::lts_20240722::Span<char> __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::GetAppendBuffer(unsigned __int64) __ptr64 */

Span<char> * __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::GetAppendBuffer
          (CordRepBtree *this,Span<char> *__return_storage_ptr__,__uint64 param_1)

{
  char cVar1;
  CordRep *this_00;
  ulong64 uVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  CordRepBtree *pCVar5;
  CordRepBtree *pCVar6;
  CordRepBtree *pCVar7;
  
  cVar1 = *(char *)((longlong)&this->_padding_ + 5);
  pCVar7 = this;
  pCVar5 = this;
  pCVar6 = this;
  if (cVar1 != '\0') {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        if (cVar1 != '\x03') goto LAB_1501c0e8b;
        pCVar5 = (CordRepBtree *)
                 this->edges_[(ulonglong)*(byte *)((longlong)&this->_padding_ + 7) - 1];
        if ((int)pCVar5->_padding_ != 2) goto LAB_1501c0eae;
      }
      pCVar6 = (CordRepBtree *)
               pCVar5->edges_[(ulonglong)*(byte *)((longlong)&pCVar5->_padding_ + 7) - 1];
      if (((RefcountAndFlags *)&pCVar6->_padding_)->count_ != (atomic<int>)0x2) goto LAB_1501c0eae;
    }
    pCVar7 = (CordRepBtree *)
             pCVar6->edges_
             [(ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&pCVar6->_padding_ + 1) + 3) - 1]
    ;
    if (((RefcountAndFlags *)&pCVar7->_padding_)->count_ != (atomic<int>)0x2) goto LAB_1501c0eae;
  }
  this_00 = pCVar7->edges_
            [(ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&pCVar7->_padding_ + 1) + 3) - 1];
  if (((this_00->refcount).count_ == (atomic<int>)0x2) && (5 < this_00->tag)) {
    uVar2 = this_00->length;
    _Var3 = CordRepFlat::Capacity((CordRepFlat *)this_00);
    uVar4 = _Var3 - uVar2;
    if (uVar4 != 0) {
      _Var3 = param_1;
      if (uVar4 < param_1) {
        _Var3 = uVar4;
      }
      this_00->length = _Var3 + uVar2;
      if (cVar1 != '\0') {
        if (cVar1 != '\x01') {
          if (cVar1 != '\x02') {
            if (cVar1 != '\x03') {
LAB_1501c0e8b:
              GetAppendBufferSlow(this,__return_storage_ptr__,param_1);
              return __return_storage_ptr__;
            }
            this->_padding_ = this->_padding_ + _Var3;
          }
          pCVar5->_padding_ = pCVar5->_padding_ + _Var3;
        }
        pCVar6->_padding_ = pCVar6->_padding_ + _Var3;
      }
      pCVar7->_padding_ = pCVar7->_padding_ + _Var3;
      __return_storage_ptr__->ptr_ = (char *)(this_00->storage + uVar2);
      __return_storage_ptr__->len_ = _Var3;
      return __return_storage_ptr__;
    }
  }
LAB_1501c0eae:
  __return_storage_ptr__->ptr_ = (char *)0x0;
  __return_storage_ptr__->len_ = 0;
  return __return_storage_ptr__;
}

// GetAppendBufferSlowPath @ 1501c0ee0

/* private: class absl::lts_20240722::CordBuffer __cdecl
   absl::lts_20240722::Cord::GetAppendBufferSlowPath(unsigned __int64,unsigned __int64,unsigned
   __int64) __ptr64 */

CordBuffer * __thiscall
absl::lts_20240722::Cord::GetAppendBufferSlowPath
          (Cord *this,CordBuffer *__return_storage_ptr__,__uint64 param_1,__uint64 param_2,
          __uint64 param_3)

{
  byte bVar1;
  CordRepBtree *this_00;
  longlong lVar2;
  void *pvVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  __uint64 _Var7;
  CordRepFlat *pCVar8;
  Rep_u_0 *pRVar9;
  CordRepBtree *pCVar10;
  CordzInfo *this_01;
  Rep_u_0 local_60;
  ExtractResult local_50;
  Rep_u_0 local_40;
  
  pCVar10 = (CordRepBtree *)0x0;
  if ((((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) == 0) ||
     (this_00 = (CordRepBtree *)(this->contents_).data_.rep_.field0_0x0.as_tree.rep,
     this_00 == (CordRepBtree *)0x0)) {
    FUN_1501be940(__return_storage_ptr__,this,param_1,param_2,0);
  }
  else {
    lVar2 = (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
    this_01 = (CordzInfo *)(lVar2 + -1);
    if (this_01 != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Lock(this_01,kGetAppendBuffer);
    }
    bVar1 = *(byte *)((longlong)&this_00->_padding_ + 4);
    if (bVar1 == 3) {
      cord_internal::CordRepBtree::ExtractAppendBuffer(&local_50,this_00,param_3);
      pCVar10 = (CordRepBtree *)local_50.extracted;
    }
    else {
      local_50.tree = (CordRep *)this_00;
      if (((5 < bVar1) && ((int)this_00->_padding_ == 2)) &&
         (_Var7 = cord_internal::CordRepFlat::Capacity((CordRepFlat *)this_00),
         param_3 <= _Var7 - this_00->_padding_)) {
        local_50.tree = (CordRep *)pCVar10;
        pCVar10 = this_00;
      }
    }
    if (pCVar10 == (CordRepBtree *)0x0) {
      if (param_1 == 0) {
        if (param_2 < 0x10) {
          local_60.short_rep.raw_size = 1;
          local_60._1_7_ = 0;
          local_60.short_rep.data[7] = '\0';
          local_60._9_4_ = 0;
          local_60._13_2_ = 0;
          local_60.short_rep.data[0xe] = '\0';
        }
        else {
          pCVar8 = cord_internal::CordRepFlat::New(param_2);
          *(undefined8 *)pCVar8 = 0;
          local_60.short_rep.raw_size = (char)pCVar8;
          local_60._1_7_ = (undefined7)((ulonglong)pCVar8 >> 8);
        }
        pRVar9 = &local_60;
        bVar5 = false;
        bVar4 = true;
      }
      else {
        CordBuffer::CreateWithCustomLimitImpl<>((CordBuffer *)&local_40.long_rep,param_1,param_2);
        pRVar9 = &local_40;
        bVar5 = true;
        bVar4 = false;
      }
      pvVar3 = *(void **)((longlong)pRVar9 + 8);
      (__return_storage_ptr__->rep_).field0_0x0.long_rep.rep = (pRVar9->long_rep).rep;
      (__return_storage_ptr__->rep_).field0_0x0.long_rep.padding = pvVar3;
      (pRVar9->short_rep).raw_size = '\x01';
      if ((bVar4) && ((local_60.short_rep.raw_size & 1U) == 0)) {
        bVar1 = *(byte *)((longlong)CONCAT71(local_60._1_7_,local_60.short_rep.raw_size) + 0xc);
        if (bVar1 < 0x43) {
          iVar6 = (uint)bVar1 * 8 + -0x10;
        }
        else if (bVar1 < 0xbb) {
          iVar6 = (bVar1 - 0x3a) * 0x40;
        }
        else {
          iVar6 = (bVar1 - 0xb8) * 0x1000;
        }
        ::operator_delete((void *)CONCAT71(local_60._1_7_,local_60.short_rep.raw_size),
                          (longlong)iVar6);
      }
      if ((bVar5) && (((ulonglong)local_40.long_rep.rep & 1) == 0)) {
        bVar1 = (local_40.long_rep.rep)->field_0xc;
        if (bVar1 < 0x43) {
          iVar6 = (uint)bVar1 * 8 + -0x10;
        }
        else if (bVar1 < 0xbb) {
          iVar6 = (bVar1 - 0x3a) * 0x40;
        }
        else {
          iVar6 = (bVar1 - 0xb8) * 0x1000;
        }
        ::operator_delete(local_40.long_rep.rep,(longlong)iVar6);
      }
    }
    else {
      if ((CordRepBtree *)local_50.tree == (CordRepBtree *)0x0) {
        (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
        (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
      }
      else {
        (this->contents_).data_.rep_.field0_0x0.as_tree.rep = local_50.tree;
      }
      if (this_01 != (CordzInfo *)0x0) {
        *(CordRep **)(lVar2 + 0x3f) = local_50.tree;
      }
      (__return_storage_ptr__->rep_).field0_0x0.long_rep.rep = (CordRepFlat *)pCVar10;
    }
    if (this_01 != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Unlock(this_01);
    }
  }
  return __return_storage_ptr__;
}

// GetCapacity @ 1501c10f0

/* public: unsigned __int64 & __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::GetCapacity(void) __ptr64 */

__uint64 * __thiscall
absl::lts_20240722::inlined_vector_internal::
AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>::
GetCapacity(AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
            *this)

{
  return (__uint64 *)(this + 8);
}

// GetData @ 1501c1100

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 & __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::GetData(void) __ptr64 */

CordRep *** __thiscall
absl::lts_20240722::inlined_vector_internal::
AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>::GetData
          (AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
           *this)

{
  return (CordRep ***)this;
}

// GetFirstChunk @ 1501c1110

/* WARNING: Type propagation algorithm not settling */
/* private: static class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::Cord::GetFirstChunk(class absl::lts_20240722::Cord const & __ptr64) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::Cord::GetFirstChunk
          (basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,Cord *param_1)

{
  byte bVar1;
  ulong64 *puVar2;
  CordRep *pCVar3;
  uint uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  
  bVar1 = (param_1->contents_).data_.rep_.field0_0x0.data[0];
  if ((bVar1 & 1) == 0) {
    uVar6 = (ulonglong)(longlong)(char)bVar1 >> 1;
  }
  else {
    uVar6 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar6 == 0) {
    __return_storage_ptr__->_Mydata = (char *)0x0;
    __return_storage_ptr__->_Mysize = 0;
    return __return_storage_ptr__;
  }
  if ((bVar1 & 1) == 0) {
    __return_storage_ptr__->_Mysize = (ulonglong)(longlong)(char)bVar1 >> 1;
    __return_storage_ptr__->_Mydata =
         (char *)((longlong)&(param_1->contents_).data_.rep_.field0_0x0 + 1);
    return __return_storage_ptr__;
  }
  pCVar3 = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
  if (pCVar3->tag == '\x02') {
    pCVar3 = (CordRep *)pCVar3[1].length;
  }
  bVar1 = pCVar3->tag;
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      __return_storage_ptr__->_Mydata = (char *)pCVar3[1].length;
      __return_storage_ptr__->_Mysize = pCVar3->length;
      return __return_storage_ptr__;
    }
    if (bVar1 != 3) {
      puVar2 = &pCVar3->length;
      uVar6 = 0;
      if (bVar1 == 1) {
        uVar6 = pCVar3[1].length;
        pCVar3 = *(CordRep **)&pCVar3[1].refcount;
      }
      bVar1 = pCVar3->tag;
      __return_storage_ptr__->_Mysize = *puVar2;
      if (bVar1 < 6) {
        __return_storage_ptr__->_Mydata = (char *)(pCVar3[1].length + uVar6);
        return __return_storage_ptr__;
      }
      __return_storage_ptr__->_Mydata = (char *)(pCVar3->storage + uVar6);
      return __return_storage_ptr__;
    }
    uVar4 = (uint)pCVar3->storage[0];
    while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
      pCVar3 = *(CordRep **)(pCVar3[1].storage + (ulonglong)pCVar3->storage[1] * 8 + -0xd);
    }
    uVar5 = 0;
    puVar2 = *(ulong64 **)(pCVar3[1].storage + (ulonglong)pCVar3->storage[1] * 8 + -0xd);
    uVar6 = *puVar2;
    if (*(char *)((longlong)puVar2 + 0xc) == '\x01') {
      uVar5 = puVar2[2];
      puVar2 = (ulong64 *)puVar2[3];
    }
    if (*(byte *)((longlong)puVar2 + 0xc) < 6) {
      __return_storage_ptr__->_Mydata = (char *)(puVar2[2] + uVar5);
      __return_storage_ptr__->_Mysize = uVar6;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->_Mydata = (char *)((longlong)puVar2 + uVar5 + 0xd);
    __return_storage_ptr__->_Mysize = uVar6;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->_Mydata = (char *)pCVar3->storage;
  __return_storage_ptr__->_Mysize = pCVar3->length;
  return __return_storage_ptr__;
}

// GetFirstChunk @ 1501c1280

/* private: static class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::Cord::GetFirstChunk(class std::basic_string_view<char,struct
   std::char_traits<char> >) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::Cord::GetFirstChunk
          (basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,
          undefined8 *param_2)

{
  ulong64 uVar1;
  
  uVar1 = param_2[1];
  __return_storage_ptr__->_Mydata = (char *)*param_2;
  __return_storage_ptr__->_Mysize = uVar1;
  return __return_storage_ptr__;
}

// GetFlatAux @ 1501c1290

/* private: static bool __cdecl absl::lts_20240722::Cord::GetFlatAux(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,class std::basic_string_view<char,struct
   std::char_traits<char> > * __ptr64) */

bool __cdecl
absl::lts_20240722::Cord::GetFlatAux
          (CordRep *param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  byte bVar1;
  ulong64 uVar2;
  CordRepBtree *this;
  bool bVar3;
  
  if (param_1->length == 0) {
    param_2->_Mydata = (char *)0x0;
    param_2->_Mysize = 0;
    return true;
  }
  if (param_1->tag == '\x02') {
    param_1 = (CordRep *)param_1[1].length;
  }
  bVar1 = *(byte *)((longlong)&((CordRepBtree *)param_1)->_padding_ + 4);
  if (5 < bVar1) {
    uVar2 = ((CordRepBtree *)param_1)->_padding_;
    param_2->_Mydata = (char *)((longlong)&((CordRepBtree *)param_1)->_padding_ + 5);
    param_2->_Mysize = uVar2;
    return true;
  }
  if (bVar1 == 5) {
    uVar2 = ((CordRepBtree *)param_1)->_padding_;
    param_2->_Mydata = (char *)((CordRepBtree *)param_1)->edges_[0];
    param_2->_Mysize = uVar2;
    return true;
  }
  if (bVar1 == 3) {
    bVar3 = cord_internal::CordRepBtree::IsFlat((CordRepBtree *)param_1,param_2);
    return bVar3;
  }
  if (bVar1 == 1) {
    this = (CordRepBtree *)((CordRepBtree *)param_1)->edges_[1];
    bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
    if (5 < bVar1) {
      uVar2 = ((CordRepBtree *)param_1)->_padding_;
      param_2->_Mydata = (char *)(((CordRepBtree *)param_1)->edges_[0]->storage + (longlong)this);
      param_2->_Mysize = uVar2;
      return true;
    }
    if (bVar1 == 5) {
      uVar2 = ((CordRepBtree *)param_1)->_padding_;
      param_2->_Mydata =
           (char *)(((CordRepBtree *)param_1)->edges_[0]->storage +
                   (longlong)(this->edges_[0]->storage + -0x1a));
      param_2->_Mysize = uVar2;
      return true;
    }
    if (bVar1 == 3) {
      bVar3 = cord_internal::CordRepBtree::IsFlat
                        (this,(__uint64)((CordRepBtree *)param_1)->edges_[0],
                         ((CordRepBtree *)param_1)->_padding_,param_2);
      return bVar3;
    }
  }
  return false;
}

// GetInlinedCapacity @ 1501c1350

/* public: unsigned __int64 __cdecl absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::GetInlinedCapacity(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::GetInlinedCapacity
          (Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
           *this)

{
  return 2;
}

// GetInlinedCapacity @ 1501c1360

/* public: unsigned __int64 __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::GetInlinedCapacity(void)const __ptr64
    */

__uint64 __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::GetInlinedCapacity
          (Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
           *this)

{
  return 4;
}

// GetInlinedData @ 1501c1370

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::GetInlinedData(void) __ptr64 */

CordRep ** __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::GetInlinedData(Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
                 *this)

{
  return (CordRep **)(this + 8);
}

// GetInlinedData @ 1501c1380

/* public: class absl::lts_20240722::str_format_internal::FormatArgImpl * __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::GetInlinedData(void) __ptr64 */

FormatArgImpl * __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::GetInlinedData(Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
                 *this)

{
  return (FormatArgImpl *)&this->data_;
}

// GetIsAllocated @ 1501c1390

/* public: bool __cdecl absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::GetIsAllocated(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::GetIsAllocated(Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
                 *this)

{
  return (bool)((byte)*this & 1);
}

// GetIsAllocated @ 1501c13a0

/* public: bool __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::GetIsAllocated(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::GetIsAllocated(Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
                 *this)

{
  return (bool)(*(byte *)&this->metadata_ & 1);
}

// GetSize @ 1501c13b0

/* public: unsigned __int64 __cdecl absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::GetSize(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::GetSize(Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
          *this)

{
  return *(ulonglong *)this >> 1;
}

// GetSize @ 1501c13c0

/* public: unsigned __int64 __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::GetSize(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::GetSize(Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
          *this)

{
  return (ulonglong)this->metadata_ >> 1;
}

// GetSizeAndIsAllocated @ 1501c13d0

/* public: unsigned __int64 & __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::GetSizeAndIsAllocated(void) __ptr64 */

__uint64 * __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::GetSizeAndIsAllocated
          (Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
           *this)

{
  return (__uint64 *)this;
}

// GetSizeAndIsAllocated @ 1501c13e0

/* public: unsigned __int64 const & __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::GetSizeAndIsAllocated(void)const __ptr64
    */

__uint64 * __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::GetSizeAndIsAllocated
          (Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
           *this)

{
  return (__uint64 *)this;
}

// GetSizeAndIsAllocated @ 1501c13f0

/* public: unsigned __int64 & __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::GetSizeAndIsAllocated(void) __ptr64 */

__uint64 * __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::GetSizeAndIsAllocated
          (Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
           *this)

{
  return (__uint64 *)this;
}

// GetSizeAndIsAllocated @ 1501c1400

/* public: unsigned __int64 const & __ptr64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::GetSizeAndIsAllocated(void)const
   __ptr64 */

__uint64 * __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::GetSizeAndIsAllocated
          (Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
           *this)

{
  return (__uint64 *)this;
}

// InitInstance @ 1501c1410

/* private: void __cdecl absl::lts_20240722::cord_internal::CordRepBtree::InitInstance(int,unsigned
   __int64,unsigned __int64) __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::CordRepBtree::InitInstance
          (CordRepBtree *this,int param_1,__uint64 param_2,__uint64 param_3)

{
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 3;
  *(char *)((longlong)&this->_padding_ + 5) = (char)param_1;
  *(char *)((longlong)&this->_padding_ + 6) = (char)param_2;
  *(char *)((longlong)&this->_padding_ + 7) = (char)param_3;
  return;
}

// InitializeCordRepExternal @ 1501c1430

/* void __cdecl absl::lts_20240722::cord_internal::InitializeCordRepExternal(class
   std::basic_string_view<char,struct std::char_traits<char> >,struct
   absl::lts_20240722::cord_internal::CordRepExternal * __ptr64) */

void __cdecl
absl::lts_20240722::cord_internal::InitializeCordRepExternal
          (basic_string_view<char,std::char_traits<char>_> *param_1,CordRepExternal *param_2)

{
  param_2->_padding_ = param_1->_Mysize;
  param_2->base = param_1->_Mydata;
  *(undefined1 *)((longlong)&param_2->_padding_ + 4) = 5;
  return;
}

// IsBtree @ 1501c1450

/* public: bool __cdecl absl::lts_20240722::cord_internal::CordRep::IsBtree(void)const __ptr64 */

bool __thiscall absl::lts_20240722::cord_internal::CordRep::IsBtree(CordRep *this)

{
  return this->tag == '\x03';
}

// IsDataEdge @ 1501c1460

/* bool __cdecl absl::lts_20240722::cord_internal::IsDataEdge(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64) */

bool __cdecl absl::lts_20240722::cord_internal::IsDataEdge(CordRep *param_1)

{
  if (param_1->tag < 5) {
    if (param_1->tag == 1) {
      param_1 = *(CordRep **)&param_1[1].refcount;
    }
    return 4 < param_1->tag;
  }
  return true;
}

// IsExternal @ 1501c1490

/* public: bool __cdecl absl::lts_20240722::cord_internal::CordRep::IsExternal(void)const __ptr64 */

bool __thiscall absl::lts_20240722::cord_internal::CordRep::IsExternal(CordRep *this)

{
  return this->tag == '\x05';
}

// IsFlat @ 1501c14a0

/* public: bool __cdecl absl::lts_20240722::cord_internal::CordRep::IsFlat(void)const __ptr64 */

bool __thiscall absl::lts_20240722::cord_internal::CordRep::IsFlat(CordRep *this)

{
  return 5 < this->tag;
}

// IsOne @ 1501c14b0

/* public: bool __cdecl absl::lts_20240722::cord_internal::RefcountAndFlags::IsOne(void) __ptr64 */

bool __thiscall absl::lts_20240722::cord_internal::RefcountAndFlags::IsOne(RefcountAndFlags *this)

{
  return this->count_ == (atomic<int>)0x2;
}

// IsPow2 @ 1501c14c0

/* private: static bool __cdecl absl::lts_20240722::CordBuffer::IsPow2(unsigned __int64) */

bool __cdecl absl::lts_20240722::CordBuffer::IsPow2(__uint64 param_1)

{
  if ((param_1 != 0) && ((param_1 & param_1 - 1) == 0)) {
    return true;
  }
  return false;
}

// FUN_1501c14e0 @ 1501c14e0

undefined8 FUN_1501c14e0(ChunkIterator *param_1,ChunkIterator *param_2,longlong param_3)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong _Size;
  
  uVar1 = *(ulong64 *)(param_3 + 0x18);
  uVar2 = param_2->bytes_remaining_;
  while( true ) {
    if (uVar2 == uVar1) {
      return 1;
    }
    uVar5 = (param_1->current_chunk_)._Mysize;
    uVar3 = (param_2->current_chunk_)._Mysize;
    uVar6 = uVar5;
    if (uVar3 < uVar5) {
      uVar6 = uVar3;
    }
    _Size = uVar6;
    if (uVar5 < uVar6) {
      _Size = uVar5;
    }
    uVar5 = uVar6;
    if (uVar3 < uVar6) {
      uVar5 = uVar3;
    }
    if ((_Size != uVar5) ||
       (iVar4 = memcmp((param_1->current_chunk_)._Mydata,(param_2->current_chunk_)._Mydata,_Size),
       iVar4 != 0)) break;
    absl::lts_20240722::Cord::ChunkIterator::AdvanceBytes(param_1,uVar6);
    absl::lts_20240722::Cord::ChunkIterator::AdvanceBytes(param_2,uVar6);
    uVar2 = param_2->bytes_remaining_;
  }
  return 0;
}

// FUN_1501c1590 @ 1501c1590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1501c1590(undefined8 *param_1,Cord *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong _Size;
  undefined1 auStack_218 [32];
  ChunkIterator local_1f8;
  ChunkIterator local_158;
  ChunkIterator local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_218;
  absl::lts_20240722::Cord::ChunkIterator::ChunkIterator(&local_b8,param_2);
  local_158.current_chunk_._Mydata = (char *)*param_1;
  local_158.current_chunk_._Mysize = param_1[1];
  local_158.current_leaf_ = (CordRep *)param_1[2];
  local_158.bytes_remaining_ = param_1[3];
  local_158.btree_reader_.remaining_ = param_1[4];
  local_158.btree_reader_.navigator_._0_8_ = param_1[5];
  local_158.btree_reader_.navigator_.index_._4_8_ = param_1[6];
  local_158.btree_reader_.navigator_.node_[0] = (CordRepBtree *)param_1[7];
  local_158.btree_reader_.navigator_.node_[1] = (CordRepBtree *)param_1[8];
  local_158.btree_reader_.navigator_.node_[2] = (CordRepBtree *)param_1[9];
  local_158.btree_reader_.navigator_.node_[3] = (CordRepBtree *)param_1[10];
  local_158.btree_reader_.navigator_.node_[4] = (CordRepBtree *)param_1[0xb];
  local_158.btree_reader_.navigator_.node_[5] = (CordRepBtree *)param_1[0xc];
  local_158.btree_reader_.navigator_.node_[6] = (CordRepBtree *)param_1[0xd];
  local_158.btree_reader_.navigator_.node_[7] = (CordRepBtree *)param_1[0xe];
  local_158.btree_reader_.navigator_.node_[8] = (CordRepBtree *)param_1[0xf];
  local_158.btree_reader_.navigator_.node_[9] = (CordRepBtree *)param_1[0x10];
  local_158.btree_reader_.navigator_.node_[10] = (CordRepBtree *)param_1[0x11];
  local_158.btree_reader_.navigator_.node_[0xb] = (CordRepBtree *)param_1[0x12];
  local_1f8.current_chunk_._Mydata = local_b8.current_chunk_._Mydata;
  local_1f8.current_chunk_._Mysize = local_b8.current_chunk_._Mysize;
  local_1f8.bytes_remaining_ = local_b8.bytes_remaining_;
  while( true ) {
    if (local_1f8.bytes_remaining_ == 0) {
      return 1;
    }
    uVar3 = local_158.current_chunk_._Mysize;
    if (local_1f8.current_chunk_._Mysize < local_158.current_chunk_._Mysize) {
      uVar3 = local_1f8.current_chunk_._Mysize;
    }
    _Size = uVar3;
    if (local_158.current_chunk_._Mysize < uVar3) {
      _Size = local_158.current_chunk_._Mysize;
    }
    uVar2 = uVar3;
    if (local_1f8.current_chunk_._Mysize < uVar3) {
      uVar2 = local_1f8.current_chunk_._Mysize;
    }
    if ((_Size != uVar2) ||
       (iVar1 = memcmp(local_158.current_chunk_._Mydata,local_1f8.current_chunk_._Mydata,_Size),
       iVar1 != 0)) break;
    absl::lts_20240722::Cord::ChunkIterator::AdvanceBytes(&local_158,uVar3);
    absl::lts_20240722::Cord::ChunkIterator::AdvanceBytes(&local_1f8,uVar3);
  }
  return 0;
}

// FUN_1501c1730 @ 1501c1730

ulonglong FUN_1501c1730(ChunkIterator *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  char *_Buf2;
  ulonglong _Size;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar2;
  
  _Buf2 = (param_1->current_chunk_)._Mydata;
  uVar4 = param_2[1];
  uVar2 = (param_1->current_chunk_)._Mysize;
  do {
    uVar3 = uVar2;
    if (uVar4 < uVar2) {
      uVar3 = uVar4;
    }
    _Size = uVar3;
    if (uVar2 < uVar3) {
      _Size = uVar2;
    }
    if (_Size != 0) {
      uVar2 = param_2[1];
      if ((ulonglong)param_2[1] < _Size) {
LAB_1501c17bf:
        return uVar2 & 0xffffffffffffff00;
      }
      iVar1 = memcmp((void *)*param_2,_Buf2,_Size);
      uVar2 = CONCAT44(extraout_var,iVar1);
      if (iVar1 != 0) goto LAB_1501c17bf;
    }
    *param_2 = *param_2 + _Size;
    uVar4 = uVar4 - _Size;
    param_2[1] = uVar4;
    if (uVar4 == 0) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
    absl::lts_20240722::Cord::ChunkIterator::AdvanceBytes(param_1,uVar3);
    _Buf2 = (param_1->current_chunk_)._Mydata;
    uVar2 = (param_1->current_chunk_)._Mysize;
  } while( true );
}

// LengthToTag @ 1501c17e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static unsigned char __cdecl
   absl::lts_20240722::strings_internal::CordTestAccess::LengthToTag(unsigned __int64) */

uchar __cdecl absl::lts_20240722::strings_internal::CordTestAccess::LengthToTag(__uint64 param_1)

{
  uchar uVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
  *pAVar3;
  undefined1 auStackY_f8 [32];
  int local_c8 [2];
  char *local_c0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_b8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_98;
  AlphaNum local_78;
  AlphaNum local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (0xff3 < param_1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (&local_b8,"Check s <= kMaxFlatLength failed: ");
    AlphaNum::AlphaNum(&local_78,param_1);
    AlphaNum::AlphaNum(&local_48,"Invalid length ");
    pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             StrCat(&local_98,&local_48,&local_78);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
              (&local_b8,pbVar2);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_98);
    local_c0 = 
    "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\strings\\cord.cc";
    local_c8[0] = 0x622;
    local_c8[1] = 3;
    pAVar3 = &raw_log_internal::internal_log_function;
    base_internal::
    AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
    ::
    operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
              (&raw_log_internal::internal_log_function,(LogSeverity *)(local_c8 + 1),&local_c0,
               local_c8,&local_b8);
    param_1 = (__uint64)pAVar3;
  }
  pAVar3 = (AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
            *)(param_1 + 0xd);
  if (pAVar3 < (AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
                *)0x201) {
    uVar1 = (char)((ulonglong)pAVar3 >> 3) + '\x02';
  }
  else if (pAVar3 < (AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
                     *)0x2001) {
    uVar1 = (char)((ulonglong)pAVar3 >> 6) + ':';
  }
  else {
    uVar1 = (char)((ulonglong)pAVar3 >> 0xc) + 0xb8;
  }
  return uVar1;
}

// Log2Ceil @ 1501c1900

/* private: static unsigned __int64 __cdecl absl::lts_20240722::CordBuffer::Log2Ceil(unsigned
   __int64) */

__uint64 __cdecl absl::lts_20240722::CordBuffer::Log2Ceil(__uint64 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = param_1 - 1;
  if (4 < __isa_available) {
    return (longlong)(0x40 - (int)LZCOUNT(uVar1));
  }
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  if (uVar1 == 0) {
    return 0;
  }
  return (longlong)(0x40 - (0x3f - (int)lVar2));
}

// Log2Floor @ 1501c1940

/* private: static unsigned __int64 __cdecl absl::lts_20240722::CordBuffer::Log2Floor(unsigned
   __int64) */

__uint64 __cdecl absl::lts_20240722::CordBuffer::Log2Floor(__uint64 param_1)

{
  longlong lVar1;
  
  if (4 < __isa_available) {
    return (longlong)(0x3f - (int)LZCOUNT(param_1));
  }
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  if (param_1 == 0) {
    return 0xffffffffffffffff;
  }
  return (longlong)(0x3f - (0x3f - (int)lVar1));
}

// MakeFlatWithExtraCapacity @ 1501c1980

/* public: struct absl::lts_20240722::cord_internal::CordRepFlat * __ptr64 __cdecl
   absl::lts_20240722::Cord::InlineRep::MakeFlatWithExtraCapacity(unsigned __int64) __ptr64 */

CordRepFlat * __thiscall
absl::lts_20240722::Cord::InlineRep::MakeFlatWithExtraCapacity(InlineRep *this,__uint64 param_1)

{
  CordRepFlat *pCVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)(longlong)(this->data_).rep_.field0_0x0.data[0] >> 1;
  pCVar1 = cord_internal::CordRepFlat::New(uVar2 + param_1);
  *(ulonglong *)pCVar1 = uVar2;
  *(undefined8 *)&pCVar1->field_0xd =
       *(undefined8 *)((longlong)&(this->data_).rep_.field0_0x0.as_tree.cordz_info + 1);
  *(undefined4 *)&pCVar1[1].field_0x5 =
       *(undefined4 *)((longlong)&(this->data_).rep_.field0_0x0 + 9);
  *(undefined2 *)&pCVar1[1].field_0x9 =
       *(undefined2 *)((longlong)&(this->data_).rep_.field0_0x0 + 0xd);
  pCVar1[1].field_0xb = (this->data_).rep_.field0_0x0.data[0xf];
  return pCVar1;
}

// MakeStorageView @ 1501c19d0

/* public: struct absl::lts_20240722::inlined_vector_internal::StorageView<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> > __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::MakeStorageView(void) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::MakeStorageView(Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
                  *this)

{
  longlong *in_RDX;
  Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
  *local_28;
  ulonglong uStack_20;
  longlong local_18;
  
  local_28 = this + 8;
  if (((byte)*this & 1) == 0) {
    uStack_20 = *(ulonglong *)this;
    local_18 = 2;
  }
  else {
    local_28 = *(Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
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

// MaxFlatLength @ 1501c1a40

/* public: static unsigned __int64 __cdecl
   absl::lts_20240722::strings_internal::CordTestAccess::MaxFlatLength(void) */

__uint64 __cdecl absl::lts_20240722::strings_internal::CordTestAccess::MaxFlatLength(void)

{
  return 0xff3;
}

// MaybeGetCrcCordState @ 1501c1a50

/* private: class absl::lts_20240722::crc_internal::CrcCordState const * __ptr64 __cdecl
   absl::lts_20240722::Cord::MaybeGetCrcCordState(void)const __ptr64 */

CrcCordState * __thiscall absl::lts_20240722::Cord::MaybeGetCrcCordState(Cord *this)

{
  CordRep *pCVar1;
  
  if ((((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) &&
     (pCVar1 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar1->tag == '\x02')) {
    return (CrcCordState *)&pCVar1[1].refcount;
  }
  return (CrcCordState *)0x0;
}

// MaybeTrackCord @ 1501c1a70

/* public: static void __cdecl absl::lts_20240722::cord_internal::CordzInfo::MaybeTrackCord(class
   absl::lts_20240722::cord_internal::InlineData & __ptr64,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier) */

void __cdecl
absl::lts_20240722::cord_internal::CordzInfo::MaybeTrackCord
          (InlineData *param_1,MethodIdentifier param_2)

{
  return;
}

// New @ 1501c1a80

/* public: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::New(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) */

CordRepBtree * __cdecl absl::lts_20240722::cord_internal::CordRepBtree::New(CordRep *param_1)

{
  CordRepBtree *pCVar1;
  char cVar2;
  
  pCVar1 = ::operator_new(0x40);
  if (pCVar1 != (CordRepBtree *)0x0) {
    *(undefined4 *)&pCVar1->_padding_ = 2;
  }
  if (param_1->tag == '\x03') {
    cVar2 = param_1->storage[0] + '\x01';
  }
  else {
    cVar2 = '\0';
  }
  pCVar1->_padding_ = param_1->length;
  *(char *)((longlong)&pCVar1->_padding_ + 5) = cVar2;
  *(undefined2 *)((longlong)&pCVar1->_padding_ + 6) = 0x100;
  pCVar1->edges_[0] = param_1;
  *(undefined1 *)((longlong)&pCVar1->_padding_ + 4) = 3;
  return pCVar1;
}

// New @ 1501c1ae0

/* public: static struct absl::lts_20240722::cord_internal::CordRepFlat * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepFlat::New(struct
   absl::lts_20240722::cord_internal::CordRepFlat::Large,unsigned __int64) */

CordRepFlat * __cdecl
absl::lts_20240722::cord_internal::CordRepFlat::New(Large param_1,__uint64 param_2)

{
  ulonglong uVar1;
  CordRepFlat *pCVar2;
  longlong lVar3;
  
  if (param_2 < 0x14) {
    uVar1 = 0x20;
    lVar3 = 8;
  }
  else {
    if (param_2 < 0x3fff4) {
      uVar1 = param_2 + 0xd;
      if (uVar1 < 0x201) {
        lVar3 = 8;
        goto LAB_1501c1b17;
      }
    }
    else {
      uVar1 = 0x40000;
    }
    lVar3 = 0x1000;
    if (uVar1 < 0x2001) {
      lVar3 = 0x40;
    }
  }
LAB_1501c1b17:
  uVar1 = (uVar1 - 1) + lVar3 & -lVar3;
  pCVar2 = ::operator_new(uVar1);
  *(undefined8 *)pCVar2 = 0;
  *(undefined8 *)&pCVar2->field_0x8 = 0;
  *(undefined4 *)&pCVar2->field_0x8 = 2;
  if (uVar1 < 0x201) {
    pCVar2->field_0xc = (char)(uVar1 >> 3) + '\x02';
    return pCVar2;
  }
  if (uVar1 < 0x2001) {
    pCVar2->field_0xc = (char)(uVar1 >> 6) + ':';
    return pCVar2;
  }
  pCVar2->field_0xc = (char)(uVar1 >> 0xc) + -0x48;
  return pCVar2;
}

// FUN_1501c1ba0 @ 1501c1ba0

CordRepBtree * FUN_1501c1ba0(void *param_1,ulonglong param_2,__uint64 param_3)

{
  CordRepBtree *pCVar1;
  CordRep *pCVar2;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if (param_2 < 0xff4) {
    pCVar1 = (CordRepBtree *)absl::lts_20240722::cord_internal::CordRepFlat::New(param_2 + param_3);
    pCVar1->_padding_ = param_2;
    memcpy((void *)((longlong)&pCVar1->_padding_ + 5),param_1,param_2);
  }
  else {
    pCVar2 = operator_new(0x1000);
    pCVar2->length = 0;
    pCVar2->refcount = (atomic<int>)0x0;
    pCVar2->tag = '\0';
    pCVar2->storage[0] = '\0';
    pCVar2->storage[1] = '\0';
    pCVar2->storage[2] = '\0';
    (pCVar2->refcount).count_ = (atomic<int>)0x2;
    pCVar2->tag = 'z';
    pCVar2->length = 0xff3;
    memcpy(pCVar2->storage,param_1,0xff3);
    pCVar1 = absl::lts_20240722::cord_internal::CordRepBtree::Create(pCVar2);
    local_18._Mydata = (char *)((longlong)param_1 + 0xff3);
    local_18._Mysize = param_2 - 0xff3;
    pCVar1 = absl::lts_20240722::cord_internal::CordRepBtree::Append(pCVar1,&local_18,param_3);
  }
  return pCVar1;
}

// FUN_1501c1c80 @ 1501c1c80

CordRepBtree * FUN_1501c1c80(void *param_1,ulonglong param_2,__uint64 param_3)

{
  CordRepBtree *pCVar1;
  CordRep *pCVar2;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if (param_2 == 0) {
    return (CordRepBtree *)0x0;
  }
  if (param_2 < 0xff4) {
    pCVar1 = (CordRepBtree *)absl::lts_20240722::cord_internal::CordRepFlat::New(param_2 + param_3);
    pCVar1->_padding_ = param_2;
    memcpy((void *)((longlong)&pCVar1->_padding_ + 5),param_1,param_2);
  }
  else {
    pCVar2 = operator_new(0x1000);
    pCVar2->length = 0;
    pCVar2->refcount = (atomic<int>)0x0;
    pCVar2->tag = '\0';
    pCVar2->storage[0] = '\0';
    pCVar2->storage[1] = '\0';
    pCVar2->storage[2] = '\0';
    (pCVar2->refcount).count_ = (atomic<int>)0x2;
    pCVar2->tag = 'z';
    pCVar2->length = 0xff3;
    memcpy(pCVar2->storage,param_1,0xff3);
    pCVar1 = absl::lts_20240722::cord_internal::CordRepBtree::Create(pCVar2);
    local_18._Mydata = (char *)((longlong)param_1 + 0xff3);
    local_18._Mysize = param_2 - 0xff3;
    pCVar1 = absl::lts_20240722::cord_internal::CordRepBtree::Append(pCVar1,&local_18,param_3);
  }
  return pCVar1;
}

// NextCapacity @ 1501c1d70

/* public: static unsigned __int64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::NextCapacity(unsigned __int64) */

__uint64 __cdecl
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::NextCapacity(__uint64 param_1)

{
  return param_1 * 2;
}

// NextCapacity @ 1501c1d80

/* public: static unsigned __int64 __cdecl
   absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::NextCapacity(unsigned __int64) */

__uint64 __cdecl
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::NextCapacity(__uint64 param_1)

{
  return param_1 * 2;
}

// FUN_1501c1d90 @ 1501c1d90

undefined8
FUN_1501c1d90(CordRepBtree *param_1,longlong *param_2,ulonglong *param_3,ulonglong param_4)

{
  char cVar1;
  byte bVar2;
  CordRep *this;
  ulong64 uVar3;
  longlong lVar4;
  int iVar5;
  __uint64 _Var6;
  ulonglong uVar7;
  ulonglong uVar8;
  uchar *puVar9;
  CordRepBtree *pCVar10;
  CordRepBtree *pCVar11;
  CordRepBtree *pCVar12;
  Span<char> local_38;
  
  if ((*(char *)((longlong)&param_1->_padding_ + 4) != '\x03') || ((int)param_1->_padding_ != 2))
  goto LAB_1501c1edc;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 5);
  pCVar10 = param_1;
  pCVar12 = param_1;
  pCVar11 = param_1;
  if (cVar1 == '\0') {
LAB_1501c1e3f:
    this = pCVar12->edges_
           [(ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&pCVar12->_padding_ + 1) + 3) - 1];
    if (((this->refcount).count_ != (atomic<int>)0x2) || (this->tag < 6)) goto LAB_1501c1edc;
    _Var6 = absl::lts_20240722::cord_internal::CordRepFlat::Capacity((CordRepFlat *)this);
    uVar3 = this->length;
    uVar7 = _Var6 - uVar3;
    if (uVar7 == 0) goto LAB_1501c1edc;
    uVar8 = param_4;
    if (uVar7 < param_4) {
      uVar8 = uVar7;
    }
    puVar9 = this->storage + uVar3;
    this->length = uVar3 + uVar8;
    if (cVar1 != '\0') {
      if (cVar1 != '\x01') {
        if (cVar1 != '\x02') {
          if (cVar1 != '\x03') goto LAB_1501c1e9d;
          param_1->_padding_ = param_1->_padding_ + uVar8;
        }
        pCVar11->_padding_ = pCVar11->_padding_ + uVar8;
      }
      pCVar10->_padding_ = pCVar10->_padding_ + uVar8;
    }
    pCVar12->_padding_ = pCVar12->_padding_ + uVar8;
  }
  else {
    if (cVar1 == '\x01') {
LAB_1501c1e26:
      pCVar12 = (CordRepBtree *)
                pCVar10->edges_
                [(ulonglong)*(uchar *)((longlong)((RefcountAndFlags *)&pCVar10->_padding_ + 1) + 3)
                 - 1];
      if (((RefcountAndFlags *)&pCVar12->_padding_)->count_ != (atomic<int>)0x2) goto LAB_1501c1edc;
      goto LAB_1501c1e3f;
    }
    if (cVar1 == '\x02') {
LAB_1501c1e0d:
      pCVar10 = (CordRepBtree *)
                pCVar11->edges_[(ulonglong)*(byte *)((longlong)&pCVar11->_padding_ + 7) - 1];
      if (((RefcountAndFlags *)&pCVar10->_padding_)->count_ != (atomic<int>)0x2) goto LAB_1501c1edc;
      goto LAB_1501c1e26;
    }
    if (cVar1 == '\x03') {
      pCVar11 = (CordRepBtree *)
                param_1->edges_[(ulonglong)*(byte *)((longlong)&param_1->_padding_ + 7) - 1];
      if ((int)pCVar11->_padding_ != 2) goto LAB_1501c1edc;
      goto LAB_1501c1e0d;
    }
LAB_1501c1e9d:
    absl::lts_20240722::cord_internal::CordRepBtree::GetAppendBufferSlow(param_1,&local_38,param_4);
    uVar8 = local_38.len_;
    puVar9 = (uchar *)local_38.ptr_;
  }
  if (uVar8 != 0) {
    *param_2 = (longlong)puVar9;
    *param_3 = uVar8;
    return 1;
  }
LAB_1501c1edc:
  if ((5 < *(byte *)((longlong)&param_1->_padding_ + 4)) && ((int)param_1->_padding_ == 2)) {
    bVar2 = *(byte *)((longlong)&param_1->_padding_ + 4);
    lVar4 = param_1->_padding_;
    if (bVar2 < 0x43) {
      iVar5 = (uint)bVar2 * 8 + -0x10;
    }
    else if (bVar2 < 0xbb) {
      iVar5 = (bVar2 - 0x3a) * 0x40;
    }
    else {
      iVar5 = (bVar2 - 0xb8) * 0x1000;
    }
    if (lVar4 != (longlong)iVar5 + -0xd) {
      uVar7 = ((longlong)iVar5 + -0xd) - lVar4;
      if (param_4 < uVar7) {
        uVar7 = param_4;
      }
      param_1->_padding_ = lVar4 + uVar7;
      *param_2 = (longlong)param_1->edges_ + lVar4 + -3;
      *param_3 = uVar7;
      return 1;
    }
  }
  *param_2 = 0;
  *param_3 = 0;
  return 0;
}

// Prepend @ 1501c1f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __cdecl absl::lts_20240722::Cord::Prepend(class absl::lts_20240722::Cord const &
   __ptr64) __ptr64 */

void __thiscall absl::lts_20240722::Cord::Prepend(Cord *this,Cord *param_1)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  byte bVar3;
  CordRep *pCVar4;
  CordzInfo *this_00;
  ulonglong uVar5;
  basic_string_view<char,std::char_traits<char>_> local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (((((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) &&
      (pCVar4 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar4 != (CordRep *)0x0)) &&
     (pCVar4->length == 0)) {
    this_00 = (CordzInfo *)((this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + -1);
    if (this_00 != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Untrack(this_00);
    }
    LOCK();
    pRVar1 = &pCVar4->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      cord_internal::CordRep::Destroy(pCVar4);
    }
    local_18 = 0;
    uStack_10 = 0;
    (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
    (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  }
  bVar3 = (param_1->contents_).data_.rep_.field0_0x0.data[0];
  if ((bVar3 & 1) == 0) {
    uVar5 = (ulonglong)(longlong)(char)bVar3 >> 1;
  }
  else {
    uVar5 = ((param_1->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar5 != 0) {
    if ((bVar3 & 1) == 0) {
      local_28._Mysize = (ulonglong)(longlong)(char)bVar3 >> 1;
      local_28._Mydata = (char *)((longlong)&(param_1->contents_).data_.rep_.field0_0x0 + 1);
    }
    else {
      pCVar4 = (param_1->contents_).data_.rep_.field0_0x0.as_tree.rep;
      if (pCVar4 != (CordRep *)0x0) {
        LOCK();
        (pCVar4->refcount).count_ = (atomic<int>)((int)(pCVar4->refcount).count_ + 2);
        UNLOCK();
        pCVar4 = cord_internal::RemoveCrcNode(pCVar4);
        InlineRep::PrependTree(&this->contents_,pCVar4,kPrependCord);
        return;
      }
      local_28._Mydata = (char *)0x0;
      local_28._Mysize = _DAT_00000000;
    }
    Prepend(this,&local_28);
  }
  return;
}

// Prepend @ 1501c2070

/* public: void __cdecl absl::lts_20240722::Cord::Prepend(class std::basic_string_view<char,struct
   std::char_traits<char> >) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::Prepend
          (Cord *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  size_t _Size;
  ulonglong uVar3;
  CordRep *pCVar4;
  CordzInfo *this_00;
  undefined8 local_28;
  CordRep *pCStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->_Mydata;
  uStack_14 = *(undefined4 *)((longlong)&param_1->_Mydata + 4);
  uStack_10 = (undefined4)param_1->_Mysize;
  uStack_c = *(undefined4 *)((longlong)&param_1->_Mysize + 4);
  if (((((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) &&
      (pCVar4 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar4 != (CordRep *)0x0)) &&
     (pCVar4->length == 0)) {
    this_00 = (CordzInfo *)((this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + -1);
    if (this_00 != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Untrack(this_00);
    }
    LOCK();
    pRVar1 = &pCVar4->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      cord_internal::CordRep::Destroy(pCVar4);
    }
    (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
    (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  }
  _Size = CONCAT44(uStack_c,uStack_10);
  if (_Size != 0) {
    uVar3 = (ulonglong)(this->contents_).data_.rep_.field0_0x0.data[0];
    if (((uVar3 & 1) == 0) && (uVar3 = uVar3 >> 1, uVar3 + _Size < 0x10)) {
      pCStack_20 = (CordRep *)0x0;
      local_28 = (ulonglong)(byte)((char)uVar3 * '\x02' + (char)uStack_10 * '\x02');
      memcpy((void *)((longlong)&local_28 + 1),(void *)CONCAT44(uStack_14,local_18),_Size);
      memcpy((void *)((longlong)&local_28 + _Size + 1),
             (void *)((longlong)&(this->contents_).data_.rep_.field0_0x0 + 1),uVar3);
      *(ulonglong *)&(this->contents_).data_.rep_.field0_0x0 = local_28;
      (this->contents_).data_.rep_.field0_0x0.as_tree.rep = pCStack_20;
      return;
    }
    pCVar4 = (CordRep *)FUN_1501c1c80(CONCAT44(uStack_14,local_18),_Size,0);
    InlineRep::PrependTree(&this->contents_,pCVar4,kPrependString);
  }
  return;
}

// Prepend @ 1501c2180

/* public: static class absl::lts_20240722::cord_internal::CordRepBtree * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepBtree::Prepend(class
   absl::lts_20240722::cord_internal::CordRepBtree * __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) */

CordRepBtree * __cdecl
absl::lts_20240722::cord_internal::CordRepBtree::Prepend(CordRepBtree *param_1,CordRep *param_2)

{
  CordRep *pCVar1;
  CordRepBtree *pCVar2;
  CordRepBtree *pCStackX_8;
  CordRepBtree **appCStackX_10 [3];
  undefined8 **ppuStack_18;
  code *pcStack_10;
  
  if (param_2->tag < 5) {
    pCVar1 = param_2;
    if (param_2->tag == 1) {
      pCVar1 = *(CordRep **)&param_2[1].refcount;
    }
    if (pCVar1->tag < 5) {
      pCStackX_8 = param_1;
      if (param_2->tag != '\x03') {
        appCStackX_10[0] = &pCStackX_8;
        ppuStack_18 = appCStackX_10;
        pcStack_10 = FUN_1501cb0e0;
        ReverseConsume(param_2,&ppuStack_18);
        return pCStackX_8;
      }
      if (*(byte *)((longlong)&param_1->_padding_ + 5) <= param_2->storage[0]) {
        pCVar2 = Merge<1>((CordRepBtree *)param_2,param_1);
        return pCVar2;
      }
      pCVar2 = Merge<0>(param_1,(CordRepBtree *)param_2);
      return pCVar2;
    }
  }
  pCVar2 = AddCordRep<0>(param_1,param_2);
  return pCVar2;
}

// PrependArray @ 1501c21b0

/* private: void __cdecl absl::lts_20240722::Cord::PrependArray(class
   std::basic_string_view<char,struct std::char_traits<char> >,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::PrependArray
          (Cord *this,basic_string_view<char,std::char_traits<char>_> *param_1,
          MethodIdentifier param_2)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  size_t _Size;
  ulonglong uVar3;
  CordRep *pCVar4;
  CordzInfo *this_00;
  undefined8 local_18;
  CordRep *pCStack_10;
  
  if (((((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) &&
      (pCVar4 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar4 != (CordRep *)0x0)) &&
     (pCVar4->length == 0)) {
    this_00 = (CordzInfo *)((this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + -1);
    if (this_00 != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Untrack(this_00);
    }
    LOCK();
    pRVar1 = &pCVar4->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      cord_internal::CordRep::Destroy(pCVar4);
    }
    (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
    (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  }
  _Size = param_1->_Mysize;
  if (_Size != 0) {
    uVar3 = (ulonglong)(this->contents_).data_.rep_.field0_0x0.data[0];
    if (((uVar3 & 1) == 0) && (uVar3 = uVar3 >> 1, _Size + uVar3 < 0x10)) {
      pCStack_10 = (CordRep *)0x0;
      local_18 = (ulonglong)(byte)((char)_Size * '\x02' + (char)uVar3 * '\x02');
      memcpy((void *)((longlong)&local_18 + 1),param_1->_Mydata,_Size);
      memcpy((void *)((longlong)&local_18 + _Size + 1),
             (void *)((longlong)&(this->contents_).data_.rep_.field0_0x0 + 1),uVar3);
      *(ulonglong *)&(this->contents_).data_.rep_.field0_0x0 = local_18;
      (this->contents_).data_.rep_.field0_0x0.as_tree.rep = pCStack_10;
    }
    else {
      pCVar4 = (CordRep *)FUN_1501c1c80(param_1->_Mydata,_Size,0);
      InlineRep::PrependTree(&this->contents_,pCVar4,param_2);
    }
  }
  return;
}

// PrependPrecise @ 1501c22c0

/* private: void __cdecl absl::lts_20240722::Cord::PrependPrecise(class
   std::basic_string_view<char,struct std::char_traits<char> >,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::PrependPrecise
          (Cord *this,basic_string_view<char,std::char_traits<char>_> *param_1,
          MethodIdentifier param_2)

{
  byte bVar1;
  void *_Size;
  CordRep *pCVar2;
  ulonglong _Size_00;
  void *pvVar3;
  undefined8 local_28;
  CordRep *pCStack_20;
  
  bVar1 = (this->contents_).data_.rep_.field0_0x0.data[0];
  pvVar3 = (void *)0x0;
  if ((bVar1 & 1) == 0) {
    pvVar3 = (void *)(0xf - ((ulonglong)(longlong)(char)bVar1 >> 1));
  }
  _Size = (void *)param_1->_Mysize;
  if (pvVar3 < _Size) {
    pCVar2 = (CordRep *)cord_internal::CordRepFlat::New((__uint64)_Size);
    memcpy(pCVar2->storage,param_1->_Mydata,(size_t)_Size);
    pCVar2->length = (ulong64)_Size;
    InlineRep::PrependTree(&this->contents_,pCVar2,param_2);
  }
  else {
    _Size_00 = (ulonglong)(longlong)(char)bVar1 >> 1;
    pCStack_20 = (CordRep *)0x0;
    local_28 = (ulonglong)(byte)((char)_Size * '\x02' + (char)_Size_00 * '\x02');
    memcpy((void *)((longlong)&local_28 + 1),param_1->_Mydata,(size_t)_Size);
    pvVar3 = (void *)0x0;
    if ((bVar1 & 1) == 0) {
      pvVar3 = (void *)((longlong)&(this->contents_).data_.rep_.field0_0x0 + 1);
    }
    memcpy((void *)((longlong)&local_28 + 1 + (longlong)_Size),pvVar3,_Size_00);
    *(ulonglong *)&(this->contents_).data_.rep_.field0_0x0 = local_28;
    (this->contents_).data_.rep_.field0_0x0.as_tree.rep = pCStack_20;
  }
  return;
}

// PrependTree @ 1501c23c0

/* public: void __cdecl absl::lts_20240722::Cord::InlineRep::PrependTree(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::InlineRep::PrependTree
          (InlineRep *this,CordRep *param_1,MethodIdentifier param_2)

{
  char cVar1;
  longlong lVar2;
  CordRep *pCVar3;
  CordRepBtree *pCVar4;
  CordzInfo *this_00;
  ulonglong uVar5;
  
  cVar1 = (this->data_).rep_.field0_0x0.data[0];
  if (((longlong)cVar1 & 1U) == 0) {
    if (cVar1 != '\0') {
      uVar5 = (ulonglong)(longlong)cVar1 >> 1;
      pCVar3 = (CordRep *)cord_internal::CordRepFlat::New(uVar5);
      pCVar3->length = uVar5;
      *(undefined8 *)pCVar3->storage =
           *(undefined8 *)((longlong)&(this->data_).rep_.field0_0x0.as_tree.cordz_info + 1);
      *(undefined4 *)((longlong)&pCVar3[1].length + 5) =
           *(undefined4 *)((longlong)&(this->data_).rep_.field0_0x0 + 9);
      *(undefined2 *)&pCVar3[1].refcount.count_.field_0x1 =
           *(undefined2 *)((longlong)&(this->data_).rep_.field0_0x0 + 0xd);
      pCVar3[1].refcount.count_.field_0x3 = (this->data_).rep_.field0_0x0.data[0xf];
      pCVar4 = cord_internal::CordRepBtree::Create(pCVar3);
      if (param_1->tag < 5) {
        pCVar3 = param_1;
        if (param_1->tag == 1) {
          pCVar3 = *(CordRep **)&param_1[1].refcount;
        }
        if (pCVar3->tag < 5) {
          param_1 = (CordRep *)cord_internal::CordRepBtree::PrependSlow(pCVar4,param_1);
          goto LAB_1501c24e5;
        }
      }
      param_1 = (CordRep *)cord_internal::CordRepBtree::AddCordRep<0>(pCVar4,param_1);
    }
LAB_1501c24e5:
    (this->data_).rep_.field0_0x0.as_tree.rep = param_1;
    (this->data_).rep_.field0_0x0.as_tree.cordz_info = 1;
    return;
  }
  lVar2 = (this->data_).rep_.field0_0x0.as_tree.cordz_info;
  this_00 = (CordzInfo *)(lVar2 + -1);
  if (this_00 != (CordzInfo *)0x0) {
    cord_internal::CordzInfo::Lock(this_00,param_2);
  }
  pCVar4 = (CordRepBtree *)(this->data_).rep_.field0_0x0.as_tree.rep;
  if (*(uchar *)((RefcountAndFlags *)&pCVar4->_padding_ + 1) != '\x03') {
    pCVar3 = cord_internal::RemoveCrcNode((CordRep *)pCVar4);
    pCVar4 = cord_internal::CordRepBtree::Create(pCVar3);
  }
  if (param_1->tag < 5) {
    pCVar3 = param_1;
    if (param_1->tag == 1) {
      pCVar3 = *(CordRep **)&param_1[1].refcount;
    }
    if (pCVar3->tag < 5) {
      pCVar4 = cord_internal::CordRepBtree::PrependSlow(pCVar4,param_1);
      goto LAB_1501c2448;
    }
  }
  pCVar4 = cord_internal::CordRepBtree::AddCordRep<0>(pCVar4,param_1);
LAB_1501c2448:
  (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)pCVar4;
  if (this_00 != (CordzInfo *)0x0) {
    *(CordRepBtree **)(lVar2 + 0x3f) = pCVar4;
    cord_internal::CordzInfo::Unlock(this_00);
  }
  return;
}

// PrependTreeToInlined @ 1501c2510

/* public: void __cdecl absl::lts_20240722::Cord::InlineRep::PrependTreeToInlined(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::InlineRep::PrependTreeToInlined
          (InlineRep *this,CordRep *param_1,MethodIdentifier param_2)

{
  char cVar1;
  CordRep *pCVar2;
  CordRepBtree *pCVar3;
  ulonglong uVar4;
  
  cVar1 = (this->data_).rep_.field0_0x0.data[0];
  if (cVar1 == '\0') {
    (this->data_).rep_.field0_0x0.as_tree.rep = param_1;
    (this->data_).rep_.field0_0x0.as_tree.cordz_info = 1;
    return;
  }
  uVar4 = (ulonglong)(longlong)cVar1 >> 1;
  pCVar2 = (CordRep *)cord_internal::CordRepFlat::New(uVar4);
  pCVar2->length = uVar4;
  *(undefined8 *)pCVar2->storage =
       *(undefined8 *)((longlong)&(this->data_).rep_.field0_0x0.as_tree.cordz_info + 1);
  *(undefined4 *)((longlong)&pCVar2[1].length + 5) =
       *(undefined4 *)((longlong)&(this->data_).rep_.field0_0x0 + 9);
  *(undefined2 *)&pCVar2[1].refcount.count_.field_0x1 =
       *(undefined2 *)((longlong)&(this->data_).rep_.field0_0x0 + 0xd);
  pCVar2[1].refcount.count_.field_0x3 = (this->data_).rep_.field0_0x0.data[0xf];
  pCVar3 = cord_internal::CordRepBtree::Create(pCVar2);
  if (param_1->tag < 5) {
    pCVar2 = param_1;
    if (param_1->tag == 1) {
      pCVar2 = *(CordRep **)&param_1[1].refcount;
    }
    if (pCVar2->tag < 5) {
      pCVar3 = cord_internal::CordRepBtree::PrependSlow(pCVar3,param_1);
      (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)pCVar3;
      (this->data_).rep_.field0_0x0.as_tree.cordz_info = 1;
      return;
    }
  }
  pCVar3 = cord_internal::CordRepBtree::AddCordRep<0>(pCVar3,param_1);
  (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)pCVar3;
  (this->data_).rep_.field0_0x0.as_tree.cordz_info = 1;
  return;
}

// PrependTreeToTree @ 1501c25f0

/* public: void __cdecl absl::lts_20240722::Cord::InlineRep::PrependTreeToTree(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,enum
   absl::lts_20240722::cord_internal::CordzUpdateTracker::MethodIdentifier) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::InlineRep::PrependTreeToTree
          (InlineRep *this,CordRep *param_1,MethodIdentifier param_2)

{
  longlong lVar1;
  CordRep *pCVar2;
  CordRepBtree *pCVar3;
  CordzInfo *this_00;
  
  lVar1 = (this->data_).rep_.field0_0x0.as_tree.cordz_info;
  this_00 = (CordzInfo *)(lVar1 + -1);
  if (this_00 != (CordzInfo *)0x0) {
    cord_internal::CordzInfo::Lock(this_00,param_2);
  }
  pCVar3 = (CordRepBtree *)(this->data_).rep_.field0_0x0.as_tree.rep;
  if (*(uchar *)((RefcountAndFlags *)&pCVar3->_padding_ + 1) != '\x03') {
    pCVar2 = cord_internal::RemoveCrcNode((CordRep *)pCVar3);
    pCVar3 = cord_internal::CordRepBtree::Create(pCVar2);
  }
  if (param_1->tag < 5) {
    pCVar2 = param_1;
    if (param_1->tag == 1) {
      pCVar2 = *(CordRep **)&param_1[1].refcount;
    }
    if (pCVar2->tag < 5) {
      pCVar3 = cord_internal::CordRepBtree::PrependSlow(pCVar3,param_1);
      goto LAB_1501c266c;
    }
  }
  pCVar3 = cord_internal::CordRepBtree::AddCordRep<0>(pCVar3,param_1);
LAB_1501c266c:
  (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)pCVar3;
  if (this_00 != (CordzInfo *)0x0) {
    *(CordRepBtree **)(lVar1 + 0x3f) = pCVar3;
    cord_internal::CordzInfo::Unlock(this_00);
  }
  return;
}

// Release @ 1501c26a0

/* public: struct absl::lts_20240722::inlined_vector_internal::Allocation<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> > __cdecl
   absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::Release(void) __ptr64&&  */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>::Release
          (AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
           *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)this;
  in_RDX[1] = *(undefined8 *)(this + 8);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}

// FUN_1501c26d0 @ 1501c26d0

void FUN_1501c26d0(void *param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  if (param_1 != (void *)0x0) {
    uVar1 = *(ulonglong *)((longlong)param_1 + 0x38);
    if (0xf < uVar1) {
      pvVar2 = *(void **)((longlong)param_1 + 0x20);
      uVar4 = uVar1 + 1;
      pvVar3 = pvVar2;
      if (0xfff < uVar4) {
        pvVar3 = *(void **)((longlong)pvVar2 + -8);
        uVar4 = uVar1 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar3,uVar4);
    }
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
    *(undefined8 *)((longlong)param_1 + 0x38) = 0xf;
    *(undefined1 *)((longlong)param_1 + 0x20) = 0;
    operator_delete(param_1,0x40);
  }
  return;
}

// FUN_1501c2750 @ 1501c2750

void FUN_1501c2750(ulonglong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  if (param_1 != (ulonglong *)0x0) {
    pvVar1 = (void *)param_1[2];
    uVar3 = *param_1;
    pvVar2 = pvVar1;
    if (0xfff < uVar3) {
      pvVar2 = *(void **)((longlong)pvVar1 - 8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,uVar3);
    operator_delete(param_1,0x20);
  }
  return;
}

// RemoveCrcNode @ 1501c27b0

/* struct absl::lts_20240722::cord_internal::CordRep * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::RemoveCrcNode(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) */

CordRep * __cdecl absl::lts_20240722::cord_internal::RemoveCrcNode(CordRep *param_1)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  CordRep *pCVar3;
  
  if (param_1->tag != '\x02') {
    return param_1;
  }
  pCVar3 = (CordRep *)param_1[1].length;
  if ((param_1->refcount).count_ == (atomic<int>)0x2) {
    crc_internal::CrcCordState::~CrcCordState((CrcCordState *)&param_1[1].refcount);
    ::operator_delete(param_1,0x20);
    return pCVar3;
  }
  LOCK();
  (pCVar3->refcount).count_ = (atomic<int>)((int)(pCVar3->refcount).count_ + 2);
  UNLOCK();
  LOCK();
  pRVar1 = &param_1->refcount;
  aVar2 = pRVar1->count_;
  pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x2) {
    CordRep::Destroy(param_1);
  }
  return pCVar3;
}

// RemovePrefix @ 1501c2830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __cdecl absl::lts_20240722::Cord::RemovePrefix(unsigned __int64) __ptr64 */

void __thiscall absl::lts_20240722::Cord::RemovePrefix(Cord *this,__uint64 param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  CordRep *pCVar4;
  undefined8 uVar5;
  longlong lVar6;
  __uint64 _Var7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar8;
  ulonglong uVar9;
  CordRepBtree *this_00;
  CordRepBtree *pCVar10;
  longlong lVar11;
  CordzInfo *this_01;
  undefined1 auStackY_168 [32];
  int local_138 [2];
  CordzInfo *local_130;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_128;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_108;
  AlphaNum local_e8;
  AlphaNum local_b8;
  AlphaNum local_88;
  AlphaNum local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  _Var7 = size(this);
  if (_Var7 < param_1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (&local_128,"Check n <= size() failed: ");
    _Var7 = size(this);
    AlphaNum::AlphaNum(&local_e8,_Var7);
    AlphaNum::AlphaNum(&local_b8," exceeds Cord\'s size ");
    AlphaNum::AlphaNum(&local_88,param_1);
    AlphaNum::AlphaNum(&local_58,"Requested prefix size ");
    pbVar8 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             StrCat(&local_108,&local_58,&local_88,&local_b8,&local_e8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
              (&local_128,pbVar8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_108);
    local_130 = (CordzInfo *)0x1536f4090;
    local_138[0] = 0x2a6;
    local_138[1] = 3;
    base_internal::
    AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
    ::
    operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
              (&raw_log_internal::internal_log_function,(LogSeverity *)(local_138 + 1),
               (char **)&local_130,local_138,&local_128);
  }
  InlineRep::MaybeRemoveEmptyCrcNode(&this->contents_);
  uVar9 = (ulonglong)(this->contents_).data_.rep_.field0_0x0.data[0];
  if (((uVar9 & 1) == 0) ||
     (pCVar4 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar4 == (CordRep *)0x0)) {
    uVar9 = (uVar9 >> 1) - param_1;
    if (uVar9 < 8) {
      if (uVar9 < 4) {
        if (uVar9 != 0) {
          (this->contents_).data_.rep_.field0_0x0.data[1] =
               (this->contents_).data_.rep_.field0_0x0.data[param_1 + 1];
          (this->contents_).data_.rep_.field0_0x0.data[(uVar9 >> 1) + 1] =
               (this->contents_).data_.rep_.field0_0x0.data[(uVar9 >> 1) + param_1 + 1];
          *(undefined1 *)((longlong)this + uVar9) =
               *(undefined1 *)((longlong)this + uVar9 + param_1);
        }
      }
      else {
        uVar3 = *(undefined4 *)((longlong)this + uVar9 + (param_1 - 3));
        *(undefined4 *)((longlong)&(this->contents_).data_.rep_.field0_0x0 + 1) =
             *(undefined4 *)((longlong)&(this->contents_).data_.rep_.field0_0x0 + param_1 + 1);
        *(undefined4 *)((longlong)this + (uVar9 - 3)) = uVar3;
      }
    }
    else {
      uVar5 = *(undefined8 *)((longlong)this + uVar9 + (param_1 - 7));
      *(undefined8 *)((longlong)&(this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + 1) =
           *(undefined8 *)((longlong)&(this->contents_).data_.rep_.field0_0x0 + param_1 + 1);
      *(undefined8 *)((longlong)this + (uVar9 - 7)) = uVar5;
    }
    lVar11 = ((ulonglong)(longlong)(this->contents_).data_.rep_.field0_0x0.data[0] >> 1) - param_1;
    memset((void *)((longlong)this + lVar11 + 1),0,param_1);
    (this->contents_).data_.rep_.field0_0x0.data[0] = (char)lVar11 * '\x02';
    return;
  }
  lVar11 = (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
  this_01 = (CordzInfo *)(lVar11 + -1);
  local_130 = this_01;
  if (this_01 != (CordzInfo *)0x0) {
    cord_internal::CordzInfo::Lock(this_01,kRemovePrefix);
  }
  this_00 = (CordRepBtree *)cord_internal::RemoveCrcNode(pCVar4);
  if (param_1 < (ulonglong)this_00->_padding_) {
    cVar2 = *(char *)((longlong)&this_00->_padding_ + 4);
    if (cVar2 == '\x03') {
      pCVar10 = (CordRepBtree *)
                cord_internal::CordRepBtree::SubTree(this_00,param_1,this_00->_padding_ - param_1);
      LOCK();
      plVar1 = &this_00->_padding_;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -2;
      UNLOCK();
      if ((int)lVar6 == 2) {
        cord_internal::CordRep::Destroy((CordRep *)this_00);
      }
    }
    else if ((cVar2 == '\x01') && ((int)this_00->_padding_ == 2)) {
      this_00->edges_[0] = (CordRep *)(this_00->edges_[0]->storage + (param_1 - 0xd));
      this_00->_padding_ = this_00->_padding_ - param_1;
      pCVar10 = this_00;
    }
    else {
      pCVar10 = (CordRepBtree *)
                cord_internal::CordRepSubstring::Substring
                          ((CordRep *)this_00,param_1,this_00->_padding_ - param_1);
      LOCK();
      plVar1 = &this_00->_padding_;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -2;
      UNLOCK();
      if ((int)lVar6 == 2) {
        cord_internal::CordRep::Destroy((CordRep *)this_00);
      }
    }
    if (pCVar10 != (CordRepBtree *)0x0) {
      (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)pCVar10;
      goto LAB_1501c29c6;
    }
  }
  else {
    LOCK();
    plVar1 = &this_00->_padding_;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -2;
    UNLOCK();
    if ((int)lVar6 == 2) {
      cord_internal::CordRep::Destroy((CordRep *)this_00);
    }
    pCVar10 = (CordRepBtree *)0x0;
  }
  (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
  (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
LAB_1501c29c6:
  if (this_01 != (CordzInfo *)0x0) {
    *(CordRepBtree **)(lVar11 + 0x3f) = pCVar10;
    cord_internal::CordzInfo::Unlock(this_01);
  }
  return;
}

// RemoveSuffix @ 1501c2b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __cdecl absl::lts_20240722::Cord::RemoveSuffix(unsigned __int64) __ptr64 */

void __thiscall absl::lts_20240722::Cord::RemoveSuffix(Cord *this,__uint64 param_1)

{
  longlong *plVar1;
  char cVar2;
  CordRep *pCVar3;
  longlong lVar4;
  __uint64 _Var5;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar6;
  ulonglong uVar7;
  CordRepBtree *pCVar8;
  CordRepBtree *pCVar9;
  longlong lVar10;
  CordzInfo *this_00;
  undefined1 auStackY_168 [32];
  int local_138 [2];
  CordzInfo *local_130;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_128;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_108;
  AlphaNum local_e8;
  AlphaNum local_b8;
  AlphaNum local_88;
  AlphaNum local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_168;
  _Var5 = size(this);
  if (_Var5 < param_1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (&local_128,"Check n <= size() failed: ");
    _Var5 = size(this);
    AlphaNum::AlphaNum(&local_e8,_Var5);
    AlphaNum::AlphaNum(&local_b8," exceeds Cord\'s size ");
    AlphaNum::AlphaNum(&local_88,param_1);
    AlphaNum::AlphaNum(&local_58,"Requested suffix size ");
    pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             StrCat(&local_108,&local_58,&local_88,&local_b8,&local_e8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
              (&local_128,pbVar6);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_108);
    local_130 = (CordzInfo *)0x1536f4090;
    local_138[0] = 0x2c5;
    local_138[1] = 3;
    base_internal::
    AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
    ::
    operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
              (&raw_log_internal::internal_log_function,(LogSeverity *)(local_138 + 1),
               (char **)&local_130,local_138,&local_128);
  }
  InlineRep::MaybeRemoveEmptyCrcNode(&this->contents_);
  uVar7 = (ulonglong)(this->contents_).data_.rep_.field0_0x0.data[0];
  if (((uVar7 & 1) == 0) ||
     (pCVar3 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar3 == (CordRep *)0x0)) {
    lVar10 = (uVar7 >> 1) - param_1;
    memset((void *)((longlong)this + lVar10 + 1),0,param_1);
    (this->contents_).data_.rep_.field0_0x0.data[0] = (char)lVar10 * '\x02';
    return;
  }
  lVar10 = (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
  this_00 = (CordzInfo *)(lVar10 + -1);
  local_130 = this_00;
  if (this_00 != (CordzInfo *)0x0) {
    cord_internal::CordzInfo::Lock(this_00,kRemoveSuffix);
  }
  pCVar8 = (CordRepBtree *)cord_internal::RemoveCrcNode(pCVar3);
  if (param_1 < (ulonglong)pCVar8->_padding_) {
    cVar2 = *(char *)((longlong)&pCVar8->_padding_ + 4);
    if (cVar2 == '\x03') {
      pCVar9 = (CordRepBtree *)cord_internal::CordRepBtree::RemoveSuffix(pCVar8,param_1);
    }
    else if ((cVar2 == '\x05') || ((int)pCVar8->_padding_ != 2)) {
      pCVar9 = (CordRepBtree *)
               cord_internal::CordRepSubstring::Substring
                         ((CordRep *)pCVar8,0,pCVar8->_padding_ - param_1);
      LOCK();
      plVar1 = &pCVar8->_padding_;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -2;
      UNLOCK();
      if ((int)lVar4 == 2) {
        cord_internal::CordRep::Destroy((CordRep *)pCVar8);
      }
    }
    else {
      pCVar8->_padding_ = pCVar8->_padding_ - param_1;
      pCVar9 = pCVar8;
    }
    if (pCVar9 != (CordRepBtree *)0x0) {
      (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)pCVar9;
      goto LAB_1501c2cad;
    }
  }
  else {
    LOCK();
    plVar1 = &pCVar8->_padding_;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -2;
    UNLOCK();
    if ((int)lVar4 == 2) {
      cord_internal::CordRep::Destroy((CordRep *)pCVar8);
    }
    pCVar9 = (CordRepBtree *)0x0;
  }
  (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
  (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
LAB_1501c2cad:
  if (this_00 != (CordzInfo *)0x0) {
    *(CordRepBtree **)(lVar10 + 0x3f) = pCVar9;
    cord_internal::CordzInfo::Unlock(this_00);
  }
  return;
}

// FUN_1501c2d80 @ 1501c2d80

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_1501c2d80(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
             undefined8 param_2,void *param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  char *pcVar2;
  char *pcVar3;
  ulong64 uStack_138;
  int iStack_12c;
  undefined1 local_128 [8];
  undefined1 local_120 [104];
  char *local_b8;
  uint local_b0;
  basic_ios<char,std::char_traits<char>_> local_a0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_38;
  
  local_128 = (undefined1  [8])
              &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::
               _vbtable_;
  local_38 = param_1;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_a0);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)local_128,
             (basic_streambuf<char,std::char_traits<char>_> *)local_120,false);
  *(undefined ***)(local_128 + *(int *)((longlong)local_128 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)((longlong)local_128 + 4)) =
       *(int *)((longlong)local_128 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)local_120);
  local_120._0_8_ = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
  ;
  local_b8 = (char *)0x0;
  local_b0 = 4;
  pbVar1 = std::operator<<<std::char_traits<char>_>
                     ((basic_ostream<char,std::char_traits<char>_> *)local_128,"Error at node ");
  pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
           std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,param_3);
  std::operator<<<std::char_traits<char>_>(pbVar1," in:");
  FUN_1501bee80(param_2,1,local_128,0);
  (param_1->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8) = 0;
  (param_1->_Mypair)._Myval2._Mysize = 0;
  (param_1->_Mypair)._Myval2._Myres = 0xf;
  (param_1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  uStack_138 = 0;
  if ((((byte)local_b0 & 0x22) == 2) ||
     (pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::pptr
                         ((basic_streambuf<char,std::char_traits<char>_> *)local_120),
     pcVar2 == (char *)0x0)) {
    if (((local_b0 & 4) == 0) &&
       (pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::gptr
                           ((basic_streambuf<char,std::char_traits<char>_> *)local_120),
       pcVar2 != (char *)0x0)) {
      pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::eback
                         ((basic_streambuf<char,std::char_traits<char>_> *)local_120);
      pcVar3 = std::basic_streambuf<char,std::char_traits<char>_>::egptr
                         ((basic_streambuf<char,std::char_traits<char>_> *)local_120);
      uStack_138 = (longlong)pcVar3 - (longlong)pcVar2;
    }
    else {
      pcVar2 = (char *)0x0;
    }
  }
  else {
    pcVar2 = std::basic_streambuf<char,std::char_traits<char>_>::pbase
                       ((basic_streambuf<char,std::char_traits<char>_> *)local_120);
    pcVar3 = std::basic_streambuf<char,std::char_traits<char>_>::pptr
                       ((basic_streambuf<char,std::char_traits<char>_> *)local_120);
    if (pcVar3 < local_b8) {
      pcVar3 = local_b8;
    }
    uStack_138 = (longlong)pcVar3 - (longlong)pcVar2;
    std::basic_streambuf<char,std::char_traits<char>_>::epptr
              ((basic_streambuf<char,std::char_traits<char>_> *)local_120);
  }
  if (pcVar2 != (char *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_1,pcVar2,uStack_138);
  }
  *(undefined ***)(local_128 + *(int *)((longlong)local_128 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)((longlong)local_128 + 4)) =
       *(int *)((longlong)local_128 + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)local_120);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_120 + 8));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_a0);
  return param_1;
}

// Reset @ 1501c2fa0

/* private: void __cdecl absl::lts_20240722::inlined_vector_internal::AllocationTransaction<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> >::Reset(void)
   __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>::Reset
          (AllocationTransaction<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}

// SanitizerSafeCopy @ 1501c2fb0

/* public: struct absl::lts_20240722::cord_internal::InlineData::Rep const & __ptr64 __cdecl
   absl::lts_20240722::cord_internal::InlineData::Rep::SanitizerSafeCopy(void)const __ptr64 */

Rep * __thiscall absl::lts_20240722::cord_internal::InlineData::Rep::SanitizerSafeCopy(Rep *this)

{
  return this;
}

// SetAllocation @ 1501c2fc0

/* public: void __cdecl absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::SetAllocation(struct
   absl::lts_20240722::inlined_vector_internal::Allocation<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::SetAllocation(Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
                *this,undefined8 *param_2)

{
  *(undefined8 *)(this + 8) = *param_2;
  *(undefined8 *)(this + 0x10) = param_2[1];
  return;
}

// SetAllocation @ 1501c2fe0

/* public: void __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::SetAllocation(struct
   absl::lts_20240722::inlined_vector_internal::Allocation<class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::SetAllocation(Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
                *this,Allocation<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
                      *param_1)

{
  (this->data_).allocated.allocated_data = param_1->data;
  (this->data_).allocated.allocated_capacity = param_1->capacity;
  return;
}

// SetCordRep @ 1501c3000

/* public: void __cdecl absl::lts_20240722::cord_internal::CordzInfo::SetCordRep(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::CordzInfo::SetCordRep(CordzInfo *this,CordRep *param_1)

{
  this->rep_ = param_1;
  return;
}

// SetCordRep @ 1501c3010

/* public: void __cdecl absl::lts_20240722::cord_internal::CordzUpdateScope::SetCordRep(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64)const __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::CordzUpdateScope::SetCordRep
          (CordzUpdateScope *this,CordRep *param_1)

{
  if (this->info_ != (CordzInfo *)0x0) {
    this->info_->rep_ = param_1;
  }
  return;
}

// SetCrcCordState @ 1501c3030

/* private: void __cdecl absl::lts_20240722::Cord::SetCrcCordState(class
   absl::lts_20240722::crc_internal::CrcCordState) __ptr64 */

void __thiscall absl::lts_20240722::Cord::SetCrcCordState(Cord *this,CrcCordState param_1)

{
  byte bVar1;
  longlong lVar2;
  CrcCordState CVar3;
  CordRep *pCVar4;
  CordRepCrc *pCVar5;
  ulong64 uVar6;
  CordzInfo *this_00;
  ulonglong uVar7;
  CrcCordState local_res8;
  RefcountedRep *local_res10;
  CordzInfo *local_res18;
  
  bVar1 = (this->contents_).data_.rep_.field0_0x0.data[0];
  if ((bVar1 & 1) == 0) {
    uVar6 = (ulonglong)(longlong)(char)bVar1 >> 1;
  }
  else {
    uVar6 = ((this->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  uVar7 = (ulonglong)(longlong)(char)bVar1 >> 1;
  local_res10 = param_1.refcounted_rep_;
  if (uVar6 == 0) {
    InlineRep::MaybeRemoveEmptyCrcNode(&this->contents_);
    CVar3.refcounted_rep_ =
         (RefcountedRep *)
         crc_internal::CrcCordState::CrcCordState(&local_res8,param_1.refcounted_rep_);
    pCVar4 = (CordRep *)0x0;
  }
  else {
    if ((bVar1 & 1) != 0) {
      lVar2 = (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
      this_00 = (CordzInfo *)(lVar2 + -1);
      local_res18 = this_00;
      if (this_00 != (CordzInfo *)0x0) {
        cord_internal::CordzInfo::Lock(this_00,kSetExpectedChecksum);
      }
      CVar3.refcounted_rep_ =
           (RefcountedRep *)
           crc_internal::CrcCordState::CrcCordState(&local_res8,param_1.refcounted_rep_);
      pCVar5 = cord_internal::CordRepCrc::New
                         ((this->contents_).data_.rep_.field0_0x0.as_tree.rep,CVar3);
      (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)pCVar5;
      if (this_00 != (CordzInfo *)0x0) {
        *(CordRepCrc **)(lVar2 + 0x3f) = pCVar5;
        cord_internal::CordzInfo::Unlock(this_00);
      }
      goto LAB_1501c312f;
    }
    pCVar4 = (CordRep *)cord_internal::CordRepFlat::New(uVar7);
    pCVar4->length = uVar7;
    *(undefined8 *)pCVar4->storage =
         *(undefined8 *)((longlong)&(this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + 1);
    *(undefined4 *)((longlong)&pCVar4[1].length + 5) =
         *(undefined4 *)((longlong)&(this->contents_).data_.rep_.field0_0x0 + 9);
    *(undefined2 *)&pCVar4[1].refcount.count_.field_0x1 =
         *(undefined2 *)((longlong)&(this->contents_).data_.rep_.field0_0x0 + 0xd);
    pCVar4[1].refcount.count_.field_0x3 = (this->contents_).data_.rep_.field0_0x0.data[0xf];
    CVar3.refcounted_rep_ =
         (RefcountedRep *)
         crc_internal::CrcCordState::CrcCordState(&local_res8,param_1.refcounted_rep_);
  }
  pCVar5 = cord_internal::CordRepCrc::New(pCVar4,CVar3);
  (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)pCVar5;
  (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 1;
LAB_1501c312f:
  crc_internal::CrcCordState::~CrcCordState((CrcCordState *)param_1.refcounted_rep_);
  return;
}

// SetExpectedChecksum @ 1501c3150

/* public: void __cdecl absl::lts_20240722::Cord::SetExpectedChecksum(unsigned int) __ptr64 */

void __thiscall absl::lts_20240722::Cord::SetExpectedChecksum(Cord *this,uint param_1)

{
  deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
  *pdVar1;
  ulong64 *puVar2;
  atomic<int> aVar3;
  byte bVar4;
  longlong lVar5;
  deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
  *pdVar6;
  crc32c_t cVar7;
  undefined4 uVar8;
  RefcountedRep *pRVar9;
  longlong *plVar10;
  ulonglong uVar11;
  PrefixCrc *pPVar12;
  CrcCordState *this_00;
  CrcCordState CVar13;
  CordRep *pCVar14;
  CordRepCrc *pCVar15;
  ulong64 uVar16;
  CordzInfo *this_01;
  ulonglong uVar17;
  CrcCordState local_res18;
  CrcCordState local_res20;
  CrcCordState local_98;
  RefcountedRep *local_90;
  Rep *local_88;
  CordzInfo *local_80;
  uint uStack_78;
  undefined4 uStack_74;
  deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
  *local_68;
  longlong lStack_60;
  deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
  *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  crc_internal::CrcCordState::CrcCordState(&local_res18);
  CVar13.refcounted_rep_ = local_res18.refcounted_rep_;
  local_48 = (deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
              *)CONCAT44(local_48._4_4_,(undefined4)local_48);
  if ((local_res18.refcounted_rep_)->count != (atomic<int>)0x1) {
    pRVar9 = ::operator_new(0x40);
    CVar13.refcounted_rep_ = (RefcountedRep *)0x0;
    local_90 = pRVar9;
    if (pRVar9 != (RefcountedRep *)0x0) {
      pRVar9->count = (atomic<int>)0x1;
      local_88 = &pRVar9->rep;
      (local_88->removed_prefix).length = 0;
      (pRVar9->rep).removed_prefix.crc.crc_ = 0;
      pdVar1 = &(pRVar9->rep).prefix_crc;
      (pdVar1->_Mypair)._Myval2._padding_ = 0;
      (pRVar9->rep).prefix_crc._Mypair._Myval2._Map = (PrefixCrc **)0x0;
      (pRVar9->rep).prefix_crc._Mypair._Myval2._Mapsize = 0;
      (pRVar9->rep).prefix_crc._Mypair._Myval2._Myoff = 0;
      (pRVar9->rep).prefix_crc._Mypair._Myval2._Mysize = 0;
      plVar10 = ::operator_new(0x10);
      plVar10[1] = 0;
      (pdVar1->_Mypair)._Myval2._padding_ = (longlong)plVar10;
      *plVar10 = (longlong)pdVar1;
      CVar13.refcounted_rep_ = pRVar9;
    }
    pdVar6 = (deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
              *)CONCAT44(local_48._4_4_,(undefined4)local_48);
    cVar7.crc_ = ((local_res18.refcounted_rep_)->rep).removed_prefix.crc.crc_;
    uVar8 = *(undefined4 *)&((local_res18.refcounted_rep_)->rep).removed_prefix.field_0xc;
    ((CVar13.refcounted_rep_)->rep).removed_prefix.length =
         ((local_res18.refcounted_rep_)->rep).removed_prefix.length;
    ((CVar13.refcounted_rep_)->rep).removed_prefix.crc = (crc32c_t)cVar7.crc_;
    *(undefined4 *)&((CVar13.refcounted_rep_)->rep).removed_prefix.field_0xc = uVar8;
    local_48 = &((local_res18.refcounted_rep_)->rep).prefix_crc;
    pdVar1 = &((CVar13.refcounted_rep_)->rep).prefix_crc;
    if (pdVar1 != local_48) {
      uVar16 = ((local_res18.refcounted_rep_)->rep).prefix_crc._Mypair._Myval2._Myoff;
      lStack_60 = ((local_res18.refcounted_rep_)->rep).prefix_crc._Mypair._Myval2._Mysize + uVar16;
      uStack_50._0_4_ = (undefined4)uVar16;
      uStack_50._4_4_ = (undefined4)(uVar16 >> 0x20);
      uStack_30 = (undefined4)uStack_50;
      uStack_2c = uStack_50._4_4_;
      local_68 = local_48;
      local_58 = local_48;
      uStack_50 = uVar16;
      uStack_40 = lStack_60;
      local_38 = local_48;
      std::
      deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
      ::
      _Assign_range<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>,std::_Deque_unchecked_const_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>_>
                (pdVar1,&local_38,&local_48);
      pdVar6 = local_48;
    }
    LOCK();
    aVar3 = (local_res18.refcounted_rep_)->count;
    (local_res18.refcounted_rep_)->count =
         (atomic<int>)((int)(local_res18.refcounted_rep_)->count + -1);
    UNLOCK();
    local_48 = pdVar6;
    if ((aVar3 == (atomic<int>)0x1) && (local_res18.refcounted_rep_ != (RefcountedRep *)0x0)) {
      std::
      deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
      ::
      ~deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
                (&((local_res18.refcounted_rep_)->rep).prefix_crc);
      ::operator_delete(local_res18.refcounted_rep_,0x40);
    }
  }
  local_res18.refcounted_rep_ = CVar13.refcounted_rep_;
  CVar13.refcounted_rep_ = local_res18.refcounted_rep_;
  uVar11 = (ulonglong)(this->contents_).data_.rep_.field0_0x0.data[0];
  if ((uVar11 & 1) == 0) {
    local_80 = (CordzInfo *)(uVar11 >> 1);
  }
  else {
    local_80 = (CordzInfo *)((this->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  uStack_78 = param_1;
  if (((local_res18.refcounted_rep_)->rep).prefix_crc._Mypair._Myval2._Mapsize <=
      ((local_res18.refcounted_rep_)->rep).prefix_crc._Mypair._Myval2._Mysize + 1) {
    std::
    deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
    ::_Growmap(&((local_res18.refcounted_rep_)->rep).prefix_crc,1);
  }
  uVar17 = ((CVar13.refcounted_rep_)->rep).prefix_crc._Mypair._Myval2._Mapsize - 1;
  uVar11 = uVar17 & ((CVar13.refcounted_rep_)->rep).prefix_crc._Mypair._Myval2._Myoff;
  ((CVar13.refcounted_rep_)->rep).prefix_crc._Mypair._Myval2._Myoff = uVar11;
  uVar17 = uVar17 & uVar11 + ((CVar13.refcounted_rep_)->rep).prefix_crc._Mypair._Myval2._Mysize;
  if (((CVar13.refcounted_rep_)->rep).prefix_crc._Mypair._Myval2._Map[uVar17] == (PrefixCrc *)0x0) {
    pPVar12 = ::operator_new(0x10);
    ((CVar13.refcounted_rep_)->rep).prefix_crc._Mypair._Myval2._Map[uVar17] = pPVar12;
  }
  pPVar12 = ((CVar13.refcounted_rep_)->rep).prefix_crc._Mypair._Myval2._Map[uVar17];
  pPVar12->length = (ulong64)local_80;
  *(ulonglong *)&pPVar12->crc = CONCAT44(uStack_74,uStack_78);
  puVar2 = &((CVar13.refcounted_rep_)->rep).prefix_crc._Mypair._Myval2._Mysize;
  *puVar2 = *puVar2 + 1;
  this_00 = (CrcCordState *)crc_internal::CrcCordState::CrcCordState(&local_res20,&local_res18);
  bVar4 = (this->contents_).data_.rep_.field0_0x0.data[0];
  if ((bVar4 & 1) == 0) {
    uVar16 = (ulonglong)(longlong)(char)bVar4 >> 1;
  }
  else {
    uVar16 = ((this->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  uVar11 = (ulonglong)(longlong)(char)bVar4 >> 1;
  local_88 = (Rep *)this_00;
  if (uVar16 == 0) {
    InlineRep::MaybeRemoveEmptyCrcNode(&this->contents_);
    CVar13.refcounted_rep_ =
         (RefcountedRep *)crc_internal::CrcCordState::CrcCordState(&local_98,this_00);
    pCVar14 = (CordRep *)0x0;
  }
  else {
    if ((bVar4 & 1) != 0) {
      lVar5 = (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info;
      this_01 = (CordzInfo *)(lVar5 + -1);
      local_80 = this_01;
      if (this_01 != (CordzInfo *)0x0) {
        cord_internal::CordzInfo::Lock(this_01,kSetExpectedChecksum);
      }
      CVar13.refcounted_rep_ =
           (RefcountedRep *)crc_internal::CrcCordState::CrcCordState(&local_98,this_00);
      pCVar15 = cord_internal::CordRepCrc::New
                          ((this->contents_).data_.rep_.field0_0x0.as_tree.rep,CVar13);
      (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)pCVar15;
      if (this_01 != (CordzInfo *)0x0) {
        *(CordRepCrc **)(lVar5 + 0x3f) = pCVar15;
        cord_internal::CordzInfo::Unlock(this_01);
      }
      goto LAB_1501c33f3;
    }
    pCVar14 = (CordRep *)cord_internal::CordRepFlat::New(uVar11);
    pCVar14->length = uVar11;
    *(undefined8 *)pCVar14->storage =
         *(undefined8 *)((longlong)&(this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + 1);
    *(undefined4 *)((longlong)&pCVar14[1].length + 5) =
         *(undefined4 *)((longlong)&(this->contents_).data_.rep_.field0_0x0 + 9);
    *(undefined2 *)&pCVar14[1].refcount.count_.field_0x1 =
         *(undefined2 *)((longlong)&(this->contents_).data_.rep_.field0_0x0 + 0xd);
    pCVar14[1].refcount.count_.field_0x3 = (this->contents_).data_.rep_.field0_0x0.data[0xf];
    CVar13.refcounted_rep_ =
         (RefcountedRep *)crc_internal::CrcCordState::CrcCordState(&local_98,this_00);
  }
  pCVar15 = cord_internal::CordRepCrc::New(pCVar14,CVar13);
  (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)pCVar15;
  (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 1;
LAB_1501c33f3:
  crc_internal::CrcCordState::~CrcCordState(this_00);
  crc_internal::CrcCordState::~CrcCordState(&local_res18);
  return;
}

// SetIsAllocated @ 1501c3430

/* public: void __cdecl absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::SetIsAllocated(void) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::SetIsAllocated(Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
                 *this)

{
  *(ulonglong *)this = *(ulonglong *)this | 1;
  return;
}

// SetIsAllocated @ 1501c3440

/* public: void __cdecl absl::lts_20240722::inlined_vector_internal::Storage<class
   absl::lts_20240722::str_format_internal::FormatArgImpl,4,class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::SetIsAllocated(void) __ptr64 */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
::SetIsAllocated(Storage<absl::lts_20240722::str_format_internal::FormatArgImpl,4,std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>
                 *this)

{
  this->metadata_ =
       (CompressedTuple<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,unsigned___int64>
        )((ulonglong)this->metadata_ | 1);
  return;
}

// SetTree @ 1501c3450

/* public: void __cdecl absl::lts_20240722::Cord::InlineRep::SetTree(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,class
   absl::lts_20240722::cord_internal::CordzUpdateScope const & __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::InlineRep::SetTree
          (InlineRep *this,CordRep *param_1,CordzUpdateScope *param_2)

{
  (this->data_).rep_.field0_0x0.as_tree.rep = param_1;
  if (param_2->info_ != (CordzInfo *)0x0) {
    param_2->info_->rep_ = param_1;
  }
  return;
}

// SetTreeOrEmpty @ 1501c3470

/* public: void __cdecl absl::lts_20240722::Cord::InlineRep::SetTreeOrEmpty(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,class
   absl::lts_20240722::cord_internal::CordzUpdateScope const & __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::InlineRep::SetTreeOrEmpty
          (InlineRep *this,CordRep *param_1,CordzUpdateScope *param_2)

{
  if (param_1 == (CordRep *)0x0) {
    (this->data_).rep_.field0_0x0.as_tree.cordz_info = 0;
    (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  }
  else {
    (this->data_).rep_.field0_0x0.as_tree.rep = param_1;
  }
  if (param_2->info_ != (CordzInfo *)0x0) {
    param_2->info_->rep_ = param_1;
  }
  return;
}

// SizeofCordRepExternal @ 1501c34a0

/* public: static unsigned __int64 __cdecl
   absl::lts_20240722::strings_internal::CordTestAccess::SizeofCordRepExternal(void) */

__uint64 __cdecl absl::lts_20240722::strings_internal::CordTestAccess::SizeofCordRepExternal(void)

{
  return 0x20;
}

// SizeofCordRepSubstring @ 1501c34b0

/* public: static unsigned __int64 __cdecl
   absl::lts_20240722::strings_internal::CordTestAccess::SizeofCordRepSubstring(void) */

__uint64 __cdecl absl::lts_20240722::strings_internal::CordTestAccess::SizeofCordRepSubstring(void)

{
  return 0x20;
}

// SkipCrcNode @ 1501c34c0

/* struct absl::lts_20240722::cord_internal::CordRep const * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::SkipCrcNode(struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64) */

CordRep * __cdecl absl::lts_20240722::cord_internal::SkipCrcNode(CordRep *param_1)

{
  if (param_1->tag == '\x02') {
    return (CordRep *)param_1[1].length;
  }
  return param_1;
}

// Subcord @ 1501c34e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* public: class absl::lts_20240722::Cord __cdecl absl::lts_20240722::Cord::Subcord(unsigned
   __int64,unsigned __int64)const __ptr64 */

Cord * __thiscall
absl::lts_20240722::Cord::Subcord
          (Cord *this,Cord *__return_storage_ptr__,__uint64 param_1,__uint64 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  basic_string_view<char,std::char_traits<char>_> *pbVar4;
  CordRep *pCVar5;
  ulong64 uVar6;
  CordRepBtree *this_00;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  int iVar11;
  char *pcVar12;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  basic_string_view<char,std::char_traits<char>_> local_100;
  Cord *local_f0;
  ChunkIterator local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
  (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  local_108 = 1;
  bVar1 = (this->contents_).data_.rep_.field0_0x0.data[0];
  bVar10 = bVar1 & 1;
  if (bVar10 == 0) {
    uVar6 = (ulonglong)(longlong)(char)bVar1 >> 1;
  }
  else {
    uVar6 = ((this->contents_).data_.rep_.field0_0x0.as_tree.rep)->length;
  }
  if (uVar6 < param_1) {
    param_1 = uVar6;
  }
  if ((char *)(uVar6 - param_1) < param_2) {
    param_2 = (__uint64)(uVar6 - param_1);
  }
  if ((char *)param_2 != (char *)0x0) {
    local_f0 = __return_storage_ptr__;
    if ((bVar10 == 0) ||
       (this_00 = (CordRepBtree *)(this->contents_).data_.rep_.field0_0x0.as_tree.rep,
       this_00 == (CordRepBtree *)0x0)) {
      pcVar8 = (char *)0x0;
      if (bVar10 == 0) {
        pcVar8 = (this->contents_).data_.rep_.field0_0x0.data + 1;
      }
      InlineRep::set_data(&__return_storage_ptr__->contents_,pcVar8 + param_1,param_2);
    }
    else if (&DAT_0000000f < param_2) {
      if (*(uchar *)((RefcountAndFlags *)&this_00->_padding_ + 1) == '\x02') {
        this_00 = (CordRepBtree *)this_00->edges_[0];
      }
      if (*(char *)((longlong)&this_00->_padding_ + 4) == '\x03') {
        pCVar5 = cord_internal::CordRepBtree::SubTree(this_00,param_1,param_2);
      }
      else {
        pCVar5 = cord_internal::CordRepSubstring::Substring((CordRep *)this_00,param_1,param_2);
      }
      (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.rep = pCVar5;
      (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 1;
      if (((this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info | 1U) != 1) {
        cord_internal::CordzInfo::MaybeTrackCordImpl
                  ((InlineData *)__return_storage_ptr__,(InlineData *)this,kSubCord);
      }
    }
    else {
      (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.data[0] = (char)param_2 * '\x02';
      pcVar8 = (__return_storage_ptr__->contents_).data_.rep_.field0_0x0.data + 1;
      pcVar9 = (char *)0x0;
      local_e8.current_chunk_._Mydata = (char *)0x0;
      local_e8.current_chunk_._Mysize = 0;
      local_e8.current_leaf_ = (CordRep *)0x0;
      local_e8.btree_reader_.remaining_ = 0;
      local_e8.btree_reader_.navigator_.height_ = -1;
      bVar1 = (this->contents_).data_.rep_.field0_0x0.data[0];
      bVar10 = bVar1 & 1;
      if ((bVar10 == 0) ||
         (pCVar5 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep, pCVar5 == (CordRep *)0x0)) {
        local_100._Mysize = (ulonglong)(longlong)(char)bVar1 >> 1;
        pcVar7 = (this->contents_).data_.rep_.field0_0x0.data + 1;
        local_100._Mydata = pcVar9;
        local_e8.current_chunk_._Mydata = pcVar9;
        local_e8.current_chunk_._Mysize = local_100._Mysize;
        local_e8.bytes_remaining_ = local_100._Mysize;
        if (bVar10 == 0) {
          local_100._Mydata = pcVar7;
          local_e8.current_chunk_._Mydata = pcVar7;
        }
      }
      else {
        local_e8.bytes_remaining_ = pCVar5->length;
        if ((char *)local_e8.bytes_remaining_ != (char *)0x0) {
          ChunkIterator::InitTree(&local_e8,pCVar5);
        }
      }
      ChunkIterator::AdvanceBytes(&local_e8,param_1);
      pcVar7 = (char *)local_e8.current_chunk_._Mysize;
      pcVar12 = local_e8.current_chunk_._Mydata;
      iVar11 = local_e8.btree_reader_.navigator_.height_;
      if (local_e8.current_chunk_._Mysize < param_2) {
        do {
          if (pcVar7 < &DAT_00000008) {
            if (pcVar7 < &DAT_00000004) {
              if (pcVar7 != (char *)0x0) {
                *pcVar8 = *pcVar12;
                pcVar8[(ulonglong)pcVar7 >> 1] = pcVar12[(ulonglong)pcVar7 >> 1];
                (pcVar7 + -1)[(longlong)pcVar8] = (pcVar7 + -1)[(longlong)pcVar12];
              }
            }
            else {
              uVar2 = *(undefined4 *)(pcVar7 + -4 + (longlong)pcVar12);
              *(undefined4 *)pcVar8 = *(undefined4 *)pcVar12;
              *(undefined4 *)(pcVar7 + -4 + (longlong)pcVar8) = uVar2;
            }
          }
          else {
            uVar3 = *(undefined8 *)(pcVar7 + -8 + (longlong)pcVar12);
            *(undefined8 *)pcVar8 = *(undefined8 *)pcVar12;
            *(undefined8 *)(pcVar7 + -8 + (longlong)pcVar8) = uVar3;
          }
          param_2 = param_2 + -(longlong)pcVar7;
          pcVar8 = pcVar8 + (longlong)pcVar7;
          local_e8.bytes_remaining_ = local_e8.bytes_remaining_ + -(longlong)pcVar7;
          if ((char *)local_e8.bytes_remaining_ != (char *)0x0) {
            if ((iVar11 < 0) ||
               (local_e8.btree_reader_.navigator_.node_[iVar11] == (CordRepBtree *)0x0)) {
              local_e8.current_chunk_._Mydata = (char *)0x0;
              local_e8.current_chunk_._Mysize = 0;
              pcVar7 = pcVar9;
              pcVar12 = pcVar9;
            }
            else {
              pbVar4 = cord_internal::CordRepBtreeReader::Next(&local_e8.btree_reader_,&local_100);
              local_e8.current_chunk_._Mydata = pbVar4->_Mydata;
              local_e8.current_chunk_._Mysize = pbVar4->_Mysize;
              pcVar7 = (char *)pbVar4->_Mysize;
              pcVar12 = local_e8.current_chunk_._Mydata;
              iVar11 = local_e8.btree_reader_.navigator_.height_;
            }
          }
        } while (pcVar7 < param_2);
      }
      cord_internal::SmallMemmove<0>(pcVar8,pcVar12,param_2);
    }
  }
  return __return_storage_ptr__;
}

// Substring @ 1501c3780

/* public: static struct absl::lts_20240722::cord_internal::CordRep * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRepSubstring::Substring(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,unsigned __int64,unsigned __int64) */

CordRep * __cdecl
absl::lts_20240722::cord_internal::CordRepSubstring::Substring
          (CordRep *param_1,__uint64 param_2,__uint64 param_3)

{
  CordRep *pCVar1;
  
  if (param_3 == param_1->length) {
    LOCK();
    (param_1->refcount).count_ = (atomic<int>)((int)(param_1->refcount).count_ + 2);
    UNLOCK();
    return param_1;
  }
  if (param_1->tag == '\x01') {
    param_2 = param_2 + param_1[1].length;
    param_1 = *(CordRep **)&param_1[1].refcount;
  }
  pCVar1 = ::operator_new(0x20);
  if (pCVar1 != (CordRep *)0x0) {
    pCVar1->length = 0;
    pCVar1->refcount = (atomic<int>)0x0;
    pCVar1->tag = '\0';
    pCVar1->storage[0] = '\0';
    pCVar1->storage[1] = '\0';
    pCVar1->storage[2] = '\0';
    pCVar1[1].length = 0;
    pCVar1[1].refcount = (atomic<int>)0x0;
    pCVar1[1].tag = '\0';
    pCVar1[1].storage[0] = '\0';
    pCVar1[1].storage[1] = '\0';
    pCVar1[1].storage[2] = '\0';
    (pCVar1->refcount).count_ = (atomic<int>)0x2;
  }
  pCVar1->length = param_3;
  pCVar1->tag = '\x01';
  pCVar1[1].length = param_2;
  LOCK();
  (param_1->refcount).count_ = (atomic<int>)((int)(param_1->refcount).count_ + 2);
  UNLOCK();
  *(CordRep **)&pCVar1[1].refcount = param_1;
  return pCVar1;
}

// SubtractSize @ 1501c3820

/* public: void __cdecl absl::lts_20240722::inlined_vector_internal::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::SubtractSize(unsigned __int64) __ptr64
    */

void __thiscall
absl::lts_20240722::inlined_vector_internal::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::SubtractSize(Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
               *this,__uint64 param_1)

{
  *(__uint64 *)this = *(longlong *)this + param_1 * -2;
  return;
}

// TakeRep @ 1501c3830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 __cdecl
   absl::lts_20240722::Cord::TakeRep(void)const __ptr64&  */

CordRep * __thiscall absl::lts_20240722::Cord::TakeRep(Cord *this)

{
  RefcountAndFlags *pRVar1;
  CordRep *pCVar2;
  
  if (((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) != 0) {
    pCVar2 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep;
    LOCK();
    pRVar1 = &pCVar2->refcount;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + 2);
    UNLOCK();
    return pCVar2;
  }
  LOCK();
  _DAT_00000008 = _DAT_00000008 + 2;
  UNLOCK();
  return (CordRep *)0x0;
}

// TakeRep @ 1501c3850

/* private: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 __cdecl
   absl::lts_20240722::Cord::TakeRep(void) __ptr64&&  */

CordRep * __thiscall absl::lts_20240722::Cord::TakeRep(Cord *this)

{
  CordzInfo *this_00;
  CordRep *pCVar1;
  
  if (((this->contents_).data_.rep_.field0_0x0.data[0] & 1U) == 0) {
    pCVar1 = (CordRep *)0x0;
  }
  else {
    pCVar1 = (this->contents_).data_.rep_.field0_0x0.as_tree.rep;
    this_00 = (CordzInfo *)((this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info + -1);
    if (this_00 != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Untrack(this_00);
    }
  }
  (this->contents_).data_.rep_.field0_0x0.as_tree.cordz_info = 0;
  (this->contents_).data_.rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  return pCVar1;
}

// Unref @ 1501c38a0

/* private: static void __cdecl absl::lts_20240722::crc_internal::CrcCordState::Unref(struct
   absl::lts_20240722::crc_internal::CrcCordState::RefcountedRep * __ptr64) */

void __cdecl absl::lts_20240722::crc_internal::CrcCordState::Unref(RefcountedRep *param_1)

{
  atomic<int> aVar1;
  
  LOCK();
  aVar1 = param_1->count;
  param_1->count = (atomic<int>)((int)param_1->count + -1);
  UNLOCK();
  if ((aVar1 == (atomic<int>)0x1) && (param_1 != (RefcountedRep *)0x0)) {
    std::
    deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
    ::
    ~deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
              (&(param_1->rep).prefix_crc);
    ::operator_delete(param_1,0x40);
    return;
  }
  return;
}

// UnrefTree @ 1501c38f0

/* private: void __cdecl absl::lts_20240722::Cord::InlineRep::UnrefTree(void) __ptr64 */

void __thiscall absl::lts_20240722::Cord::InlineRep::UnrefTree(InlineRep *this)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  CordzInfo *this_00;
  CordRep *pCVar3;
  
  if (((this->data_).rep_.field0_0x0.data[0] & 1U) != 0) {
    this_00 = (CordzInfo *)((this->data_).rep_.field0_0x0.as_tree.cordz_info + -1);
    if (this_00 != (CordzInfo *)0x0) {
      cord_internal::CordzInfo::Untrack(this_00);
    }
    if (((this->data_).rep_.field0_0x0.data[0] & 1U) == 0) {
      pCVar3 = (CordRep *)0x0;
    }
    else {
      pCVar3 = (this->data_).rep_.field0_0x0.as_tree.rep;
    }
    LOCK();
    pRVar1 = &pCVar3->refcount;
    aVar2 = pRVar1->count_;
    pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x2) {
      cord_internal::CordRep::Destroy(pCVar3);
      return;
    }
  }
  return;
}

// FUN_1501c3940 @ 1501c3940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1501c3940(CordRepFlat *param_1,undefined8 *****param_2)

{
  CordRepFlat *this;
  code *pcVar1;
  byte extraout_AL;
  byte extraout_AL_00;
  byte extraout_AL_01;
  byte bVar2;
  __uint64 _Var3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  _Bxty *p_Var5;
  undefined8 uVar6;
  undefined8 *****pppppuVar7;
  AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
  *pAVar8;
  CordRepFlat *pCVar9;
  LogSeverity *pLVar10;
  ulonglong uVar11;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [8];
  char *local_a0;
  _Bxty local_98;
  longlong local_88;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_80;
  _Bxty local_60;
  undefined8 local_50;
  ulonglong local_40;
  undefined8 ****local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_38 = param_2;
  uVar11 = 2;
  local_40 = 2;
  do {
    pppppuVar7 = &local_38;
    if ((uVar11 & 1) != 0) {
      pppppuVar7 = param_2;
    }
    this = (CordRepFlat *)pppppuVar7[(uVar11 >> 1) - 1];
    uVar11 = uVar11 - 2;
    local_40 = uVar11;
    if (this == (CordRepFlat *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (&local_80,"Check node != nullptr failed: ");
      pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_1501c2d80(&local_60,param_1,0);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
                (&local_80,pbVar4);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
      local_a0 = 
      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\strings\\cord.cc";
      local_a8._4_4_ = 0x5f3;
      local_a8._0_4_ = kFatal;
      absl::lts_20240722::base_internal::
      AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
      ::
      operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
                (&absl::lts_20240722::raw_log_internal::internal_log_function,
                 (LogSeverity *)local_a8,&local_a0,(int *)(local_a8 + 4),&local_80);
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    if (this != param_1) {
      if (*(longlong *)this != 0) {
        if (this->field_0xc != '\x02') goto LAB_1501c39d0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (&local_80,"Check !node->IsCrc() failed: ");
        pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 FUN_1501c2d80(&local_60,param_1,this);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
                  (&local_80,pbVar4);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
        local_a0 = 
        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\strings\\cord.cc";
        local_a8._0_4_ = 0x5f6;
        local_a8._4_4_ = 3;
        absl::lts_20240722::base_internal::
        AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
        ::
        operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
                  (&absl::lts_20240722::raw_log_internal::internal_log_function,
                   (LogSeverity *)(local_a8 + 4),&local_a0,(int *)local_a8,&local_80);
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (&local_80,"Check node->length != 0 failed: ");
      pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_1501c2d80(&local_60,param_1,this);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
                (&local_80,pbVar4);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
      local_a0 = 
      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\strings\\cord.cc";
      local_a8._4_4_ = 0x5f5;
      local_a8._0_4_ = kFatal;
      absl::lts_20240722::base_internal::
      AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
      ::
      operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
                (&absl::lts_20240722::raw_log_internal::internal_log_function,
                 (LogSeverity *)local_a8,&local_a0,(int *)(local_a8 + 4),&local_80);
LAB_1501c3dcc:
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (&local_80,
                 "Check node->substring()->start < node->substring()->child->length failed: ");
      pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_1501c2d80(&local_60,param_1,this);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
                (&local_80,pbVar4);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
      local_a0 = 
      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\strings\\cord.cc";
      local_a8._4_4_ = 0x602;
      local_a8._0_4_ = kFatal;
      absl::lts_20240722::base_internal::
      AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
      ::
      operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
                (&absl::lts_20240722::raw_log_internal::internal_log_function,
                 (LogSeverity *)local_a8,&local_a0,(int *)(local_a8 + 4),&local_80);
LAB_1501c3e3e:
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (&local_80,"Check node->crc()->length == node->crc()->child->length failed: ");
      pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               FUN_1501c2d80(&local_60,param_1,this);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
                (&local_80,pbVar4);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
      local_a0 = 
      "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\strings\\cord.cc";
      local_a8._4_4_ = 0x60c;
      local_a8._0_4_ = kFatal;
      pLVar10 = (LogSeverity *)local_a8;
      absl::lts_20240722::base_internal::
      AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
      ::
      operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
                (&absl::lts_20240722::raw_log_internal::internal_log_function,pLVar10,&local_a0,
                 (int *)(local_a8 + 4),&local_80);
      goto LAB_1501c3eb0;
    }
LAB_1501c39d0:
    bVar2 = this->field_0xc;
    pppppuVar7 = param_2;
    if (bVar2 < 6) {
LAB_1501c3a5f:
      if (bVar2 == 5) {
        if (*(longlong *)(this + 1) != 0) goto LAB_1501c3c8d;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (&local_80,"Check node->external()->base != nullptr failed: ");
        pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 FUN_1501c2d80(&local_60,param_1,this);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
                  (&local_80,pbVar4);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
        local_a0 = 
        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\strings\\cord.cc";
        local_a8._4_4_ = 0x5fe;
        local_a8._0_4_ = kFatal;
        absl::lts_20240722::base_internal::
        AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
        ::
        operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
                  (&absl::lts_20240722::raw_log_internal::internal_log_function,
                   (LogSeverity *)local_a8,&local_a0,(int *)(local_a8 + 4),&local_80);
        bVar2 = extraout_AL_00;
      }
      if (bVar2 == 1) {
        if (**(ulonglong **)&this[1].field_0x8 <= *(ulonglong *)(this + 1)) goto LAB_1501c3dcc;
        if (*(ulonglong *)(this + 1) + *(longlong *)this <= **(ulonglong **)&this[1].field_0x8)
        goto LAB_1501c3c8d;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (&local_80,
                   "Check node->substring()->start + node->length <= node->substring()->child->length failed: "
                  );
        pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 FUN_1501c2d80(&local_60,param_1,this);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
                  (&local_80,pbVar4);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
        local_a0 = 
        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\strings\\cord.cc";
        local_a8._4_4_ = 0x605;
        local_a8._0_4_ = kFatal;
        absl::lts_20240722::base_internal::
        AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
        ::
        operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
                  (&absl::lts_20240722::raw_log_internal::internal_log_function,
                   (LogSeverity *)local_a8,&local_a0,(int *)(local_a8 + 4),&local_80);
        bVar2 = extraout_AL_01;
      }
      if (bVar2 == 2) {
        pCVar9 = this + 1;
        pAVar8 = *(AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
                   **)pCVar9;
        if (pAVar8 == (AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
                       *)0x0) {
          if (*(longlong *)this == 0) goto LAB_1501c3c8d;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>
                    (&local_80,
                     "Check node->crc()->child != nullptr || node->crc()->length == 0 failed: ");
          pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   FUN_1501c2d80(&local_60,param_1,this);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
                    (&local_80,pbVar4);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
          local_a0 = 
          "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\strings\\cord.cc"
          ;
          local_a8._4_4_ = 0x609;
          local_a8._0_4_ = kFatal;
          pCVar9 = (CordRepFlat *)local_a8;
          pAVar8 = &absl::lts_20240722::raw_log_internal::internal_log_function;
          absl::lts_20240722::base_internal::
          AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
          ::
          operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
                    (&absl::lts_20240722::raw_log_internal::internal_log_function,
                     (LogSeverity *)pCVar9,&local_a0,(int *)(local_a8 + 4),&local_80);
        }
        if (*(longlong *)this != *(longlong *)pAVar8) goto LAB_1501c3e3e;
        if ((uVar11 & 1) == 0) {
          local_60._Ptr = (char *)&local_38;
          local_60._8_8_ = uVar11 >> 1;
          local_50 = 2;
          p_Var5 = &local_60;
        }
        else {
          local_98._Ptr = (char *)param_2;
          local_98._8_8_ = uVar11 >> 1;
          local_88 = local_30;
          p_Var5 = &local_98;
        }
        local_80._Mypair._Myval2._Mysize = (ulong64)(&p_Var5->_Ptr)[2];
        if ((&p_Var5->_Ptr)[1] == (&p_Var5->_Ptr)[2]) {
          absl::lts_20240722::inlined_vector_internal::
          Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
          ::EmplaceBackSlow<absl::lts_20240722::cord_internal::CordRep*___ptr64_const&___ptr64>
                    ((Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
                      *)&local_40,(CordRep **)pCVar9);
          uVar11 = local_40;
          pppppuVar7 = (undefined8 *****)local_38;
        }
        else {
          *(AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
            **)(p_Var5->_Ptr + (longlong)(&p_Var5->_Ptr)[1] * 8) = pAVar8;
          local_40 = local_40 + 2;
          uVar11 = local_40;
          pppppuVar7 = (undefined8 *****)local_38;
        }
      }
    }
    else {
      _Var3 = absl::lts_20240722::cord_internal::CordRepFlat::Capacity(this);
      if (_Var3 < *(ulonglong *)this) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (&local_80,"Check node->length <= node->flat()->Capacity() failed: ");
        pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 FUN_1501c2d80(&local_60,param_1,this);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
                  (&local_80,pbVar4);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_60);
        local_a0 = 
        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\strings\\cord.cc";
        local_a8._4_4_ = 0x5fb;
        local_a8._0_4_ = kFatal;
        absl::lts_20240722::base_internal::
        AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
        ::
        operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
                  (&absl::lts_20240722::raw_log_internal::internal_log_function,
                   (LogSeverity *)local_a8,&local_a0,(int *)(local_a8 + 4),&local_80);
        bVar2 = extraout_AL;
        goto LAB_1501c3a5f;
      }
    }
LAB_1501c3c8d:
    param_2 = pppppuVar7;
  } while ((uVar11 & 0xfffffffffffffffe) != 0);
  if ((uVar11 != 0) && ((uVar11 & 1) != 0)) {
    pLVar10 = (LogSeverity *)(local_30 * 8);
    if ((LogSeverity *)0xfff < pLVar10) {
      pLVar10 = (LogSeverity *)((longlong)pLVar10 + 0x27);
      param_2 = (undefined8 *****)pppppuVar7[-1];
      if (0x1f < (ulonglong)((longlong)pppppuVar7 + (-8 - (longlong)param_2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
LAB_1501c3eb0:
    operator_delete(param_2,(ulong64)pLVar10);
  }
  return 1;
}

// _Erase_last_n @ 1501c3f70

/* private: void __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Erase_last_n(unsigned __int64)
   __ptr64 */

void __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Erase_last_n(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
                *this,__uint64 param_1)

{
  ulong64 *puVar1;
  
  for (; param_1 != 0; param_1 = param_1 - 1) {
    puVar1 = &(this->_Mypair)._Myval2._Mysize;
    *puVar1 = *puVar1 - 1;
    if (*puVar1 == 0) {
      (this->_Mypair)._Myval2._Myoff = 0;
    }
  }
  return;
}

// _Get_data @ 1501c3f90

/* private: class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > & __ptr64 __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Get_data(void) __ptr64 */

_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_> *
__thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Get_data(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
            *this)

{
  return (_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
          *)this;
}

// _Get_data @ 1501c3fa0

/* private: class std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > const & __ptr64 __cdecl
   std::deque<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
   >::_Get_data(void)const __ptr64 */

_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_> *
__thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Get_data(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
            *this)

{
  return (_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
          *)this;
}

// _Get_first @ 1501c3fb0

/* public: class std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> &
   __ptr64 __cdecl std::_Compressed_pair<class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>,class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
   >,1>::_Get_first(void) __ptr64 */

allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> * __thiscall
std::
_Compressed_pair<std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>,std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>,1>
::_Get_first(_Compressed_pair<std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>,std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>,1>
             *this)

{
  return (allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> *)this;
}

// _Get_first @ 1501c3fc0

/* public: class std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
   const & __ptr64 __cdecl std::_Compressed_pair<class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>,class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
   >,1>::_Get_first(void)const __ptr64 */

allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> * __thiscall
std::
_Compressed_pair<std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>,std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>,1>
::_Get_first(_Compressed_pair<std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>,std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>,1>
             *this)

{
  return (allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> *)this;
}

// _Getal @ 1501c3fd0

/* private: class std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> &
   __ptr64 __cdecl std::deque<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Getal(void)
   __ptr64 */

allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> * __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Getal(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
         *this)

{
  return (allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> *)this;
}

// _Getal @ 1501c3fe0

/* private: class std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
   const & __ptr64 __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Getal(void)const __ptr64 */

allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> * __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Getal(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
         *this)

{
  return (allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> *)this;
}

// _Getblock @ 1501c3ff0

/* public: unsigned __int64 __cdecl std::_Deque_val<struct std::_Deque_simple_types<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Getblock(unsigned __int64)const
   __ptr64 */

__uint64 __thiscall
std::
_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>::
_Getblock(_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
          *this,__uint64 param_1)

{
  return this->_Mapsize - 1 & param_1;
}

// _Getblock @ 1501c4010

/* private: unsigned __int64 __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Getblock(unsigned __int64)const
   __ptr64 */

__uint64 __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Getblock(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
            *this,__uint64 param_1)

{
  return (this->_Mypair)._Myval2._Mapsize - 1 & param_1;
}

// _Growmap @ 1501c4030

/* WARNING: Type propagation algorithm not settling */
/* private: void __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Growmap(unsigned __int64) __ptr64
    */

void __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Growmap(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
           *this,__uint64 param_1)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  PrefixCrc **ppPVar4;
  code *pcVar5;
  PrefixCrc *pPVar6;
  PrefixCrc **ppPVar7;
  PrefixCrc *pPVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  size_t sVar11;
  void *_Dst;
  size_t sVar12;
  PrefixCrc **_Dst_00;
  
  uVar9 = (this->_Mypair)._Myval2._Mapsize;
  uVar10 = 1;
  if (uVar9 != 0) {
    uVar10 = uVar9;
  }
  for (; (uVar10 - uVar9 < param_1 || (uVar10 < 8)); uVar10 = uVar10 * 2) {
    if (0xfffffffffffffff - uVar10 < uVar10) {
      _Xlen();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar3 = (this->_Mypair)._Myval2._Myoff;
  if (0x1fffffffffffffff < uVar10) {
LAB_1501c41f7:
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  uVar2 = uVar10 * 8;
  if (uVar2 < 0x1000) {
    if (uVar2 == 0) {
      _Dst_00 = (PrefixCrc **)0x0;
    }
    else {
      _Dst_00 = ::operator_new(uVar2);
    }
  }
  else {
    if (uVar2 + 0x27 <= uVar2) goto LAB_1501c41f7;
    pPVar6 = ::operator_new(uVar2 + 0x27);
    if (pPVar6 == (PrefixCrc *)0x0) goto LAB_1501c41f0;
    _Dst_00 = (PrefixCrc **)((ulonglong)((longlong)&pPVar6[2].length + 7U) & 0xffffffffffffffe0);
    _Dst_00[-1] = pPVar6;
  }
  uVar9 = (this->_Mypair)._Myval2._Mapsize;
  ppPVar4 = (this->_Mypair)._Myval2._Map;
  uVar10 = uVar10 - uVar9;
  sVar12 = uVar3 * 8;
  ppPVar7 = ppPVar4 + uVar3;
  sVar11 = (longlong)ppPVar4 + (uVar9 * 8 - (longlong)ppPVar7);
  memmove(_Dst_00 + uVar3,ppPVar7,sVar11);
  ppPVar7 = (this->_Mypair)._Myval2._Map;
  _Dst = (void *)(sVar11 + (longlong)(_Dst_00 + uVar3));
  if (uVar10 < uVar3) {
    sVar11 = uVar10 * 8;
    memmove(_Dst,ppPVar7,sVar11);
    ppPVar4 = (this->_Mypair)._Myval2._Map;
    ppPVar7 = ppPVar4 + uVar10;
    sVar12 = (longlong)ppPVar4 + (sVar12 - (longlong)ppPVar7);
    memmove(_Dst_00,ppPVar7,sVar12);
    ppPVar7 = (PrefixCrc **)(sVar12 + (longlong)_Dst_00);
  }
  else {
    memmove(_Dst,ppPVar7,sVar12);
    memset((void *)(sVar12 + (longlong)_Dst),0,(uVar10 - uVar3) * 8);
    ppPVar7 = _Dst_00;
    sVar11 = sVar12;
  }
  memset(ppPVar7,0,sVar11);
  pPVar6 = (PrefixCrc *)(this->_Mypair)._Myval2._Map;
  if (pPVar6 != (PrefixCrc *)0x0) {
    uVar9 = (this->_Mypair)._Myval2._Mapsize * 8;
    pPVar8 = pPVar6;
    if (0xfff < uVar9) {
      pPVar8 = *(PrefixCrc **)&pPVar6[0xffffffffffffffff].crc;
      uVar9 = uVar9 + 0x27;
      if (0x1f < (ulonglong)((longlong)pPVar6 + (-8 - (longlong)pPVar8))) {
LAB_1501c41f0:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pPVar8,uVar9);
  }
  puVar1 = &(this->_Mypair)._Myval2._Mapsize;
  *puVar1 = *puVar1 + uVar10;
  (this->_Mypair)._Myval2._Map = _Dst_00;
  return;
}

// _Map @ 1501c4210

/* private: struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 &
   __ptr64 __cdecl std::deque<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Map(void)
   __ptr64 */

PrefixCrc *** __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Map(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
       *this)

{
  return &(this->_Mypair)._Myval2._Map;
}

// _Mapsize @ 1501c4220

/* private: unsigned __int64 & __ptr64 __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Mapsize(void) __ptr64 */

__uint64 * __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Mapsize(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
           *this)

{
  return &(this->_Mypair)._Myval2._Mapsize;
}

// _Myoff @ 1501c4230

/* private: unsigned __int64 & __ptr64 __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Myoff(void) __ptr64 */

__uint64 * __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Myoff(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
         *this)

{
  return &(this->_Mypair)._Myval2._Myoff;
}

// _Myoff @ 1501c4240

/* private: unsigned __int64 const & __ptr64 __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Myoff(void)const __ptr64 */

__uint64 * __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Myoff(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
         *this)

{
  return &(this->_Mypair)._Myval2._Myoff;
}

// _Mysize @ 1501c4250

/* private: unsigned __int64 & __ptr64 __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Mysize(void) __ptr64 */

__uint64 * __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Mysize(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
          *this)

{
  return &(this->_Mypair)._Myval2._Mysize;
}

// _Mysize @ 1501c4260

/* private: unsigned __int64 const & __ptr64 __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Mysize(void)const __ptr64 */

__uint64 * __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Mysize(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
          *this)

{
  return &(this->_Mypair)._Myval2._Mysize;
}

// _Orphan_all @ 1501c4270

/* private: void __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Orphan_all(void) __ptr64 */

void __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Orphan_all(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
              *this)

{
  return;
}

// _Release @ 1501c4280

/* public: struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64
   __cdecl std::_Uninitialized_backout<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64>::_Release(void)
   __ptr64 */

PrefixCrc ** __thiscall
std::
_Uninitialized_backout<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
::_Release(_Uninitialized_backout<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64*___ptr64>
           *this)

{
  *(PrefixCrc ***)this = *(PrefixCrc ***)(this + 8);
  return *(PrefixCrc ***)(this + 8);
}

// _Tidy @ 1501c4290

/* WARNING: Type propagation algorithm not settling */
/* private: void __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Tidy(void) __ptr64 */

void __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Tidy(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
        *this)

{
  PrefixCrc *pPVar1;
  ulong64 uVar2;
  PrefixCrc *pPVar3;
  
  uVar2 = (this->_Mypair)._Myval2._Mysize;
  if (uVar2 != 0) {
    do {
      uVar2 = uVar2 - 1;
      (this->_Mypair)._Myval2._Mysize = uVar2;
    } while (uVar2 != 0);
    (this->_Mypair)._Myval2._Myoff = 0;
  }
  if ((this->_Mypair)._Myval2._Map != (PrefixCrc **)0x0) {
    uVar2 = (this->_Mypair)._Myval2._Mapsize;
    while (uVar2 != 0) {
      uVar2 = uVar2 - 1;
      pPVar1 = (this->_Mypair)._Myval2._Map[uVar2];
      if (pPVar1 != (PrefixCrc *)0x0) {
        ::operator_delete(pPVar1,0x10);
      }
    }
    pPVar1 = (PrefixCrc *)(this->_Mypair)._Myval2._Map;
    uVar2 = (this->_Mypair)._Myval2._Mapsize * 8;
    pPVar3 = pPVar1;
    if (0xfff < uVar2) {
      pPVar3 = *(PrefixCrc **)&pPVar1[0xffffffffffffffff].crc;
      uVar2 = uVar2 + 0x27;
      if (0x1f < (ulonglong)((longlong)pPVar1 + (-8 - (longlong)pPVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pPVar3,uVar2);
  }
  (this->_Mypair)._Myval2._Map = (PrefixCrc **)0x0;
  (this->_Mypair)._Myval2._Mapsize = 0;
  return;
}

// _Unchecked_begin @ 1501c4370

/* public: class std::_Deque_unchecked_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >
   __cdecl std::deque<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
   >::_Unchecked_begin(void) __ptr64 */

_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
* __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Unchecked_begin(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
                   *this,_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
                         *__return_storage_ptr__)

{
  *(ulong64 *)&__return_storage_ptr__->field_0x8 = (this->_Mypair)._Myval2._Myoff;
  *(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
    **)__return_storage_ptr__ = this;
  return __return_storage_ptr__;
}

// _Unchecked_begin @ 1501c4390

/* public: class std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >
   __cdecl std::deque<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
   >::_Unchecked_begin(void)const __ptr64 */

_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
* __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Unchecked_begin(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
                   *this,_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
                         *__return_storage_ptr__)

{
  __return_storage_ptr__->_Myoff = (this->_Mypair)._Myval2._Myoff;
  __return_storage_ptr__->_Mycont =
       (_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
        *)this;
  return __return_storage_ptr__;
}

// _Unchecked_end @ 1501c43b0

/* public: class std::_Deque_unchecked_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >
   __cdecl std::deque<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
   >::_Unchecked_end(void) __ptr64 */

_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
* __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Unchecked_end(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
                 *this,_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
                       *__return_storage_ptr__)

{
  *(ulong64 *)&__return_storage_ptr__->field_0x8 =
       (this->_Mypair)._Myval2._Mysize + (this->_Mypair)._Myval2._Myoff;
  *(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
    **)__return_storage_ptr__ = this;
  return __return_storage_ptr__;
}

// _Unchecked_end @ 1501c43d0

/* public: class std::_Deque_unchecked_const_iterator<class std::_Deque_val<struct
   std::_Deque_simple_types<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> > >
   __cdecl std::deque<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
   >::_Unchecked_end(void)const __ptr64 */

_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
* __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Unchecked_end(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
                 *this,_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>
                       *__return_storage_ptr__)

{
  __return_storage_ptr__->_Myoff = (this->_Mypair)._Myval2._Mysize + (this->_Mypair)._Myval2._Myoff;
  __return_storage_ptr__->_Mycont =
       (_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
        *)this;
  return __return_storage_ptr__;
}

// _Xlen @ 1501c43f0

/* private: static void __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::_Xlen(void) */

void __cdecl
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::_Xlen(void)

{
  _Xlength_error("deque<T> too long");
  return;
}

// allocate @ 1501c4410

/* public: static struct absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 __cdecl
   std::_Default_allocator_traits<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::allocate(class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> & __ptr64,unsigned __int64) */

CordRep ** __cdecl
std::_Default_allocator_traits<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::allocate(allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_1,__uint64 param_2)

{
  CordRep **ppCVar1;
  
  if (param_2 < 0x2000000000000000) {
    ppCVar1 = _Allocate<16,std::_Default_allocate_traits,0>(param_2 * 8);
    return ppCVar1;
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// allocate @ 1501c4440

/* public: static class absl::lts_20240722::str_format_internal::FormatArgImpl * __ptr64 __cdecl
   std::_Default_allocator_traits<class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::allocate(class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> & __ptr64,unsigned __int64) */

FormatArgImpl * __cdecl
std::
_Default_allocator_traits<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>::
allocate(allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *param_1,__uint64 param_2
        )

{
  FormatArgImpl *pFVar1;
  
  if (param_2 < 0x1000000000000000) {
    pFVar1 = _Allocate<16,std::_Default_allocate_traits,0>(param_2 << 4);
    return pFVar1;
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// allocate @ 1501c4470

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 __cdecl
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>::allocate(unsigned
   __int64) __ptr64 */

CordRep ** __thiscall
std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>::allocate
          (allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *this,__uint64 param_1)

{
  ulonglong uVar1;
  CordRep *pCVar2;
  CordRep **ppCVar3;
  
  if (param_1 < 0x2000000000000000) {
    uVar1 = param_1 * 8;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        ppCVar3 = ::operator_new(uVar1);
        return ppCVar3;
      }
      return (CordRep **)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pCVar2 = ::operator_new(uVar1 + 0x27);
      if (pCVar2 != (CordRep *)0x0) {
        ppCVar3 = (CordRep **)((ulonglong)((longlong)&pCVar2[2].length + 7U) & 0xffffffffffffffe0);
        ppCVar3[-1] = pCVar2;
        return ppCVar3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// allocate @ 1501c44f0

/* public: struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64
   __cdecl std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc *
   __ptr64>::allocate(unsigned __int64) __ptr64 */

PrefixCrc ** __thiscall
std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64>::allocate
          (allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64> *this,
          __uint64 param_1)

{
  ulonglong uVar1;
  PrefixCrc *pPVar2;
  PrefixCrc **ppPVar3;
  
  if (param_1 < 0x2000000000000000) {
    uVar1 = param_1 * 8;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        ppPVar3 = ::operator_new(uVar1);
        return ppPVar3;
      }
      return (PrefixCrc **)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pPVar2 = ::operator_new(uVar1 + 0x27);
      if (pPVar2 != (PrefixCrc *)0x0) {
        ppPVar3 = (PrefixCrc **)((ulonglong)((longlong)&pPVar2[2].length + 7U) & 0xffffffffffffffe0)
        ;
        ppPVar3[-1] = pPVar2;
        return ppPVar3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// allocate @ 1501c4570

/* public: struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 __cdecl
   std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>::allocate(unsigned __int64) __ptr64 */

PrefixCrc * __thiscall
std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>::allocate
          (allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> *this,
          __uint64 param_1)

{
  void *pvVar1;
  PrefixCrc *pPVar2;
  ulonglong uVar3;
  
  if (param_1 < 0x1000000000000000) {
    uVar3 = param_1 * 0x10;
    if (uVar3 < 0x1000) {
      if (uVar3 != 0) {
        pPVar2 = ::operator_new(uVar3);
        return pPVar2;
      }
      return (PrefixCrc *)0x0;
    }
    if (uVar3 < uVar3 + 0x27) {
      pvVar1 = ::operator_new(uVar3 + 0x27);
      if (pvVar1 != (void *)0x0) {
        pPVar2 = (PrefixCrc *)((longlong)pvVar1 + 0x27U & 0xffffffffffffffe0);
        *(void **)&pPVar2[-1].crc = pvVar1;
        return pPVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// allocate @ 1501c45f0

/* public: class absl::lts_20240722::str_format_internal::FormatArgImpl * __ptr64 __cdecl
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl>::allocate(unsigned
   __int64) __ptr64 */

FormatArgImpl * __thiscall
std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>::allocate
          (allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *this,__uint64 param_1)

{
  _func___cdecl_bool_Data_FormatConversionSpecImpl_void_ptr *p_Var1;
  FormatArgImpl *pFVar2;
  ulonglong uVar3;
  
  if (param_1 < 0x1000000000000000) {
    uVar3 = param_1 * 0x10;
    if (uVar3 < 0x1000) {
      if (uVar3 != 0) {
        pFVar2 = ::operator_new(uVar3);
        return pFVar2;
      }
      return (FormatArgImpl *)0x0;
    }
    if (uVar3 < uVar3 + 0x27) {
      p_Var1 = ::operator_new(uVar3 + 0x27);
      if (p_Var1 != (_func___cdecl_bool_Data_FormatConversionSpecImpl_void_ptr *)0x0) {
        ((FormatArgImpl *)((ulonglong)(p_Var1 + 0x27) & 0xffffffffffffffe0))[-1].dispatcher_ =
             p_Var1;
        return (FormatArgImpl *)((ulonglong)(p_Var1 + 0x27) & 0xffffffffffffffe0);
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// as_chars @ 1501c4670

/* public: char * __ptr64 __cdecl absl::lts_20240722::cord_internal::InlineData::as_chars(void)
   __ptr64 */

char * __thiscall absl::lts_20240722::cord_internal::InlineData::as_chars(InlineData *this)

{
  return (char *)((longlong)&(this->rep_).field0_0x0 + 1);
}

// as_chars @ 1501c4680

/* public: char * __ptr64 __cdecl absl::lts_20240722::cord_internal::InlineData::Rep::as_chars(void)
   __ptr64 */

char * __thiscall absl::lts_20240722::cord_internal::InlineData::Rep::as_chars(Rep *this)

{
  return (char *)((longlong)&this->field0_0x0 + 1);
}

// back @ 1501c4690

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 & __ptr64 __cdecl
   absl::lts_20240722::InlinedVector<struct absl::lts_20240722::cord_internal::CordRep *
   __ptr64,2,class std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>
   >::back(void) __ptr64 */

CordRep ** __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::back(InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
       *this)

{
  InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
  *pIVar1;
  
  pIVar1 = this + 8;
  if (((byte)*this & 1) != 0) {
    pIVar1 = *(InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
               **)pIVar1;
  }
  return (CordRep **)(pIVar1 + ((*(ulonglong *)this >> 1) - 1) * 8);
}

// begin @ 1501c46b0

/* public: class absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64 __cdecl
   absl::lts_20240722::Span<class absl::lts_20240722::str_format_internal::FormatArgImpl const
   >::begin(void)const __ptr64 */

FormatArgImpl * __thiscall
absl::lts_20240722::Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_>::begin
          (Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_> *this)

{
  return this->ptr_;
}

// btree @ 1501c46c0

/* public: class absl::lts_20240722::cord_internal::CordRepBtree const * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRep::btree(void)const __ptr64 */

CordRepBtree * __thiscall absl::lts_20240722::cord_internal::CordRep::btree(CordRep *this)

{
  return (CordRepBtree *)this;
}

// char_end @ 1501c46d0

/* public: class absl::lts_20240722::Cord::CharIterator __cdecl
   absl::lts_20240722::Cord::char_end(void)const __ptr64 */

CharIterator * __thiscall
absl::lts_20240722::Cord::char_end(Cord *this,CharIterator *__return_storage_ptr__)

{
  CordRepBtreeReader *pCVar1;
  
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.height_ = 0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[0] = '\0';
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[1] = '\0';
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[2] = '\0';
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.index_[3] = '\0';
  pCVar1 = &(__return_storage_ptr__->chunk_iterator_).btree_reader_;
  (pCVar1->navigator_).index_[4] = '\0';
  (pCVar1->navigator_).index_[5] = '\0';
  (pCVar1->navigator_).index_[6] = '\0';
  (pCVar1->navigator_).index_[7] = '\0';
  (pCVar1->navigator_).index_[8] = '\0';
  (pCVar1->navigator_).index_[9] = '\0';
  (pCVar1->navigator_).index_[10] = '\0';
  (pCVar1->navigator_).index_[0xb] = '\0';
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[1] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[2] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[3] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[4] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[5] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[6] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[7] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[8] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[9] = (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[10] = (CordRepBtree *)0x0
  ;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.node_[0xb] =
       (CordRepBtree *)0x0;
  (__return_storage_ptr__->chunk_iterator_).current_chunk_._Mydata = (char *)0x0;
  (__return_storage_ptr__->chunk_iterator_).current_chunk_._Mysize = 0;
  (__return_storage_ptr__->chunk_iterator_).current_leaf_ = (CordRep *)0x0;
  (__return_storage_ptr__->chunk_iterator_).bytes_remaining_ = 0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.remaining_ = 0;
  (__return_storage_ptr__->chunk_iterator_).btree_reader_.navigator_.height_ = -1;
  return __return_storage_ptr__;
}

// clear @ 1501c4720

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 __cdecl
   absl::lts_20240722::Cord::InlineRep::clear(void) __ptr64 */

CordRep * __thiscall absl::lts_20240722::Cord::InlineRep::clear(InlineRep *this)

{
  CordRep *pCVar1;
  CordzInfo *this_00;
  
  if ((((this->data_).rep_.field0_0x0.data[0] & 1U) != 0) &&
     (this_00 = (CordzInfo *)((this->data_).rep_.field0_0x0.as_tree.cordz_info + -1),
     this_00 != (CordzInfo *)0x0)) {
    cord_internal::CordzInfo::Untrack(this_00);
  }
  if (((this->data_).rep_.field0_0x0.data[0] & 1U) != 0) {
    pCVar1 = (this->data_).rep_.field0_0x0.as_tree.rep;
    (this->data_).rep_.field0_0x0.as_tree.cordz_info = 0;
    (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
    return pCVar1;
  }
  (this->data_).rep_.field0_0x0.as_tree.cordz_info = 0;
  (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  return (CordRep *)0x0;
}

// copy_max_inline_to @ 1501c4770

/* public: void __cdecl absl::lts_20240722::cord_internal::InlineData::copy_max_inline_to(char *
   __ptr64)const __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::InlineData::copy_max_inline_to(InlineData *this,char *param_1)

{
  *(undefined8 *)param_1 =
       *(undefined8 *)((longlong)&(this->rep_).field0_0x0.as_tree.cordz_info + 1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((longlong)&(this->rep_).field0_0x0 + 9);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)((longlong)&(this->rep_).field0_0x0 + 0xd);
  param_1[0xe] = (this->rep_).field0_0x0.data[0xf];
  return;
}

// cordz_should_profile @ 1501c47a0

/* __int64 __cdecl absl::lts_20240722::cord_internal::cordz_should_profile(void) */

__int64 __cdecl absl::lts_20240722::cord_internal::cordz_should_profile(void)

{
  return 0;
}

// crc @ 1501c47b0

/* public: struct absl::lts_20240722::cord_internal::CordRepCrc const * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRep::crc(void)const __ptr64 */

CordRepCrc * __thiscall absl::lts_20240722::cord_internal::CordRep::crc(CordRep *this)

{
  return (CordRepCrc *)this;
}

// data @ 1501c47c0

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::InlinedVector<struct absl::lts_20240722::cord_internal::CordRep *
   __ptr64,2,class std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>
   >::data(void) __ptr64 */

CordRep ** __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::data(InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
       *this)

{
  CordRep *pCVar1;
  
  pCVar1 = (CordRep *)(this + 8);
  if (((byte)*this & 1) != 0) {
    pCVar1 = *(CordRep **)pCVar1;
  }
  return (CordRep **)pCVar1;
}

// data @ 1501c47e0

/* public: class absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64 __cdecl
   absl::lts_20240722::Span<class absl::lts_20240722::str_format_internal::FormatArgImpl const
   >::data(void)const __ptr64 */

FormatArgImpl * __thiscall
absl::lts_20240722::Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_>::data
          (Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_> *this)

{
  return this->ptr_;
}

// data @ 1501c47f0

/* public: char * __ptr64 __cdecl absl::lts_20240722::CordBuffer::data(void) __ptr64 */

char * __thiscall absl::lts_20240722::CordBuffer::data(CordBuffer *this)

{
  if (((this->rep_).field0_0x0.short_rep.raw_size & 1U) != 0) {
    return (char *)((longlong)&(this->rep_).field0_0x0 + 1);
  }
  return &((this->rep_).field0_0x0.long_rep.rep)->field_0xd;
}

// deallocate @ 1501c4810

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::deallocate(class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> & __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 const,unsigned __int64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::deallocate(allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *param_1,
            CordRep **param_2,__uint64 param_3)

{
  CordRep *pCVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 8;
  pCVar1 = (CordRep *)param_2;
  if (0xfff < uVar2) {
    pCVar1 = param_2[-1];
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)pCVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pCVar1,uVar2);
  return;
}

// deallocate @ 1501c4860

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> >::deallocate(class std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl> & __ptr64,class
   absl::lts_20240722::str_format_internal::FormatArgImpl * __ptr64 const,unsigned __int64) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>_>::
deallocate(allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *param_1,
          FormatArgImpl *param_2,__uint64 param_3)

{
  FormatArgImpl *pFVar1;
  ulong64 uVar2;
  
  uVar2 = param_3 * 0x10;
  pFVar1 = param_2;
  if (0xfff < uVar2) {
    pFVar1 = (FormatArgImpl *)param_2[-1].dispatcher_;
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)pFVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pFVar1,uVar2);
  return;
}

// deallocate @ 1501c48b0

/* public: void __cdecl std::allocator<struct absl::lts_20240722::cord_internal::CordRep *
   __ptr64>::deallocate(struct absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64
   const,unsigned __int64) __ptr64 */

void __thiscall
std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>::deallocate
          (allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *this,CordRep **param_1,
          __uint64 param_2)

{
  CordRep *pCVar1;
  ulonglong uVar2;
  
  uVar2 = param_2 * 8;
  pCVar1 = (CordRep *)param_1;
  if (0xfff < uVar2) {
    pCVar1 = param_1[-1];
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)pCVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pCVar1,uVar2);
  return;
}

// deallocate @ 1501c4900

/* public: void __cdecl std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64>::deallocate(struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 * __ptr64 const,unsigned
   __int64) __ptr64 */

void __thiscall
std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64>::deallocate
          (allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc*___ptr64> *this,
          PrefixCrc **param_1,__uint64 param_2)

{
  PrefixCrc *pPVar1;
  ulonglong uVar2;
  
  uVar2 = param_2 * 8;
  pPVar1 = (PrefixCrc *)param_1;
  if (0xfff < uVar2) {
    pPVar1 = param_1[-1];
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)pPVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pPVar1,uVar2);
  return;
}

// deallocate @ 1501c4950

/* public: void __cdecl std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>::deallocate(struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc * __ptr64 const,unsigned __int64)
   __ptr64 */

void __thiscall
std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>::deallocate
          (allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> *this,
          PrefixCrc *param_1,__uint64 param_2)

{
  PrefixCrc *pPVar1;
  ulong64 uVar2;
  
  uVar2 = param_2 * 0x10;
  pPVar1 = param_1;
  if (0xfff < uVar2) {
    pPVar1 = *(PrefixCrc **)&param_1[-1].crc;
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)pPVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pPVar1,uVar2);
  return;
}

// deallocate @ 1501c49a0

/* public: void __cdecl std::allocator<class
   absl::lts_20240722::str_format_internal::FormatArgImpl>::deallocate(class
   absl::lts_20240722::str_format_internal::FormatArgImpl * __ptr64 const,unsigned __int64) __ptr64
    */

void __thiscall
std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>::deallocate
          (allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *this,
          FormatArgImpl *param_1,__uint64 param_2)

{
  FormatArgImpl *pFVar1;
  ulong64 uVar2;
  
  uVar2 = param_2 * 0x10;
  pFVar1 = param_1;
  if (0xfff < uVar2) {
    pFVar1 = (FormatArgImpl *)param_1[-1].dispatcher_;
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)pFVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pFVar1,uVar2);
  return;
}

// empty @ 1501c49f0

/* public: bool __cdecl absl::lts_20240722::InlinedVector<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::empty(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::empty(InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
        *this)

{
  return *(ulonglong *)this < 2;
}

// empty @ 1501c4a00

/* public: bool __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::empty(void)const __ptr64 */

bool __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::empty(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
        *this)

{
  return (this->_Mypair)._Myval2._Mysize == 0;
}

// end @ 1501c4a10

/* public: class absl::lts_20240722::str_format_internal::FormatArgImpl const * __ptr64 __cdecl
   absl::lts_20240722::Span<class absl::lts_20240722::str_format_internal::FormatArgImpl const
   >::end(void)const __ptr64 */

FormatArgImpl * __thiscall
absl::lts_20240722::Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_>::end
          (Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_> *this)

{
  return this->ptr_ + this->len_;
}

// external @ 1501c4a30

/* public: struct absl::lts_20240722::cord_internal::CordRepExternal * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRep::external(void) __ptr64 */

CordRepExternal * __thiscall absl::lts_20240722::cord_internal::CordRep::external(CordRep *this)

{
  return (CordRepExternal *)this;
}

// flat @ 1501c4a40

/* public: struct absl::lts_20240722::cord_internal::CordRepFlat * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRep::flat(void) __ptr64 */

CordRepFlat * __thiscall absl::lts_20240722::cord_internal::CordRep::flat(CordRep *this)

{
  return (CordRepFlat *)this;
}

// front @ 1501c4a50

/* public: char const & __ptr64 __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::front(void)const __ptr64 */

char * __thiscall
std::basic_string_view<char,std::char_traits<char>_>::front
          (basic_string_view<char,std::char_traits<char>_> *this)

{
  return this->_Mydata;
}

// get @ 1501c4a60

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64 & __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 * __ptr64,1,0>::get(void) __ptr64&  */

CordRep *** __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64,1,0>::get
          (Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64*___ptr64,1,0> *this)

{
  return (CordRep ***)this;
}

// get @ 1501c4a90

/* public: class std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64> &
   __ptr64 __cdecl absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep * __ptr64>,0,1>::get(void)
   __ptr64&  */

allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,0,1>::get
          (Storage<std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>,0,1> *this)

{
  return (allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64> *)this;
}

// get @ 1501c4aa0

/* public: class std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl> &
   __ptr64 __cdecl absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<class
   std::allocator<class absl::lts_20240722::str_format_internal::FormatArgImpl>,0,1>::get(void)
   __ptr64&  */

allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,0,1>::get
          (Storage<std::allocator<absl::lts_20240722::str_format_internal::FormatArgImpl>,0,1> *this
          )

{
  return (allocator<absl::lts_20240722::str_format_internal::FormatArgImpl> *)this;
}

// is_empty @ 1501c4ab0

/* public: bool __cdecl absl::lts_20240722::cord_internal::InlineData::is_empty(void)const __ptr64
    */

bool __thiscall absl::lts_20240722::cord_internal::InlineData::is_empty(InlineData *this)

{
  return (this->rep_).field0_0x0.data[0] == '\0';
}

// max_size @ 1501c4ac0

/* public: static unsigned __int64 __cdecl std::_Default_allocator_traits<class
   std::allocator<struct absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>
   >::max_size(class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> const & __ptr64) */

__uint64 __cdecl
std::
_Default_allocator_traits<std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::max_size(allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> *param_1)

{
  return 0xfffffffffffffff;
}

// max_size @ 1501c4ae0

/* public: unsigned __int64 __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::max_size(void)const __ptr64 */

__uint64 __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::max_size(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
           *this)

{
  return 0xfffffffffffffff;
}

// mutable_rep @ 1501c4b00

/* public: struct absl::lts_20240722::crc_internal::CrcCordState::Rep * __ptr64 __cdecl
   absl::lts_20240722::crc_internal::CrcCordState::mutable_rep(void) __ptr64 */

Rep * __thiscall absl::lts_20240722::crc_internal::CrcCordState::mutable_rep(CrcCordState *this)

{
  deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
  *pdVar1;
  atomic<int> aVar2;
  ulong64 uVar3;
  deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
  *pdVar4;
  crc32c_t cVar5;
  undefined4 uVar6;
  RefcountedRep *pRVar7;
  longlong *plVar8;
  RefcountedRep *pRVar9;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (this->refcounted_rep_->count != (atomic<int>)0x1) {
    pRVar7 = ::operator_new(0x40);
    pRVar9 = (RefcountedRep *)0x0;
    if (pRVar7 != (RefcountedRep *)0x0) {
      pRVar7->count = (atomic<int>)0x1;
      (pRVar7->rep).removed_prefix.length = 0;
      (pRVar7->rep).removed_prefix.crc.crc_ = 0;
      pdVar1 = &(pRVar7->rep).prefix_crc;
      (pdVar1->_Mypair)._Myval2._padding_ = 0;
      (pRVar7->rep).prefix_crc._Mypair._Myval2._Map = (PrefixCrc **)0x0;
      (pRVar7->rep).prefix_crc._Mypair._Myval2._Mapsize = 0;
      (pRVar7->rep).prefix_crc._Mypair._Myval2._Myoff = 0;
      (pRVar7->rep).prefix_crc._Mypair._Myval2._Mysize = 0;
      plVar8 = ::operator_new(0x10);
      plVar8[1] = 0;
      (pdVar1->_Mypair)._Myval2._padding_ = (longlong)plVar8;
      *plVar8 = (longlong)pdVar1;
      pRVar9 = pRVar7;
    }
    pdVar4 = (deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
              *)CONCAT44(local_38._4_4_,(undefined4)local_38);
    pRVar7 = this->refcounted_rep_;
    cVar5.crc_ = (pRVar7->rep).removed_prefix.crc.crc_;
    uVar6 = *(undefined4 *)&(pRVar7->rep).removed_prefix.field_0xc;
    (pRVar9->rep).removed_prefix.length = (pRVar7->rep).removed_prefix.length;
    (pRVar9->rep).removed_prefix.crc = (crc32c_t)cVar5.crc_;
    *(undefined4 *)&(pRVar9->rep).removed_prefix.field_0xc = uVar6;
    local_38 = &(pRVar7->rep).prefix_crc;
    pdVar1 = &(pRVar9->rep).prefix_crc;
    if (pdVar1 != local_38) {
      uVar3 = (pRVar7->rep).prefix_crc._Mypair._Myval2._Myoff;
      uStack_30 = (pRVar7->rep).prefix_crc._Mypair._Myval2._Mysize + uVar3;
      uStack_40 = (undefined4)uVar3;
      uStack_3c = (undefined4)(uVar3 >> 0x20);
      uStack_20 = uStack_40;
      uStack_1c = uStack_3c;
      local_28 = local_38;
      std::
      deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
      ::
      _Assign_range<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>,std::_Deque_unchecked_const_iterator<class_std::_Deque_val<struct_std::_Deque_simple_types<struct_absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>_>_>
                (pdVar1,&local_28,&local_38);
      pdVar4 = local_38;
    }
    pRVar7 = this->refcounted_rep_;
    LOCK();
    aVar2 = pRVar7->count;
    pRVar7->count = (atomic<int>)((int)pRVar7->count + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pRVar7 != (RefcountedRep *)0x0)) {
      local_38 = pdVar4;
      std::
      deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
      ::
      ~deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
                (&(pRVar7->rep).prefix_crc);
      ::operator_delete(pRVar7,0x40);
    }
    this->refcounted_rep_ = pRVar9;
  }
  return &this->refcounted_rep_->rep;
}

// pop_back @ 1501c4c30

/* public: void __cdecl absl::lts_20240722::InlinedVector<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::pop_back(void) __ptr64 */

void __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::pop_back(InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
           *this)

{
  *(longlong *)this = *(longlong *)this + -2;
  return;
}

// pop_back @ 1501c4c40

/* public: void __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::pop_back(void) __ptr64 */

void __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::pop_back(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
           *this)

{
  ulong64 *puVar1;
  
  puVar1 = &(this->_Mypair)._Myval2._Mysize;
  *puVar1 = *puVar1 - 1;
  if (*puVar1 == 0) {
    (this->_Mypair)._Myval2._Myoff = 0;
  }
  return;
}

// push_back @ 1501c4c60

/* public: void __cdecl absl::lts_20240722::InlinedVector<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::push_back(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 const & __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::push_back(InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
            *this,CordRep **param_1)

{
  InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
  **ppIVar1;
  InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
  *local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
  *local_20;
  ulonglong local_18;
  InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
  *local_10;
  
  if (((byte)*this & 1) == 0) {
    local_20 = this + 8;
    ppIVar1 = &local_20;
    local_18 = *(ulonglong *)this >> 1;
    local_10 = (InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
                *)0x2;
  }
  else {
    local_38 = *(InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
                 **)(this + 8);
    local_28 = *(undefined8 *)(this + 0x10);
    ppIVar1 = &local_38;
    uStack_30 = *(ulonglong *)this >> 1;
  }
  local_10 = ppIVar1[2];
  if (ppIVar1[1] != local_10) {
    *(CordRep **)(*ppIVar1 + (longlong)ppIVar1[1] * 8) = *param_1;
    *(longlong *)this = *(longlong *)this + 2;
    return;
  }
  inlined_vector_internal::
  Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
  ::EmplaceBackSlow<absl::lts_20240722::cord_internal::CordRep*___ptr64_const&___ptr64>
            ((Storage<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
              *)this,param_1);
  return;
}

// push_back @ 1501c4d00

/* public: void __cdecl std::deque<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,class std::allocator<struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc> >::push_back(struct
   absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc && __ptr64) __ptr64 */

void __thiscall
std::
deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
::push_back(deque<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc,std::allocator<absl::lts_20240722::crc_internal::CrcCordState::PrefixCrc>_>
            *this,PrefixCrc *param_1)

{
  ulong64 *puVar1;
  crc32c_t cVar2;
  undefined4 uVar3;
  PrefixCrc *pPVar4;
  ulonglong uVar5;
  
  if ((this->_Mypair)._Myval2._Mapsize <= (this->_Mypair)._Myval2._Mysize + 1) {
    _Growmap(this,1);
  }
  uVar5 = (this->_Mypair)._Myval2._Mapsize - 1;
  puVar1 = &(this->_Mypair)._Myval2._Myoff;
  *puVar1 = *puVar1 & uVar5;
  uVar5 = (this->_Mypair)._Myval2._Mysize + (this->_Mypair)._Myval2._Myoff & uVar5;
  if ((this->_Mypair)._Myval2._Map[uVar5] == (PrefixCrc *)0x0) {
    pPVar4 = ::operator_new(0x10);
    (this->_Mypair)._Myval2._Map[uVar5] = pPVar4;
  }
  cVar2.crc_ = (param_1->crc).crc_;
  uVar3 = *(undefined4 *)&param_1->field_0xc;
  pPVar4 = (this->_Mypair)._Myval2._Map[uVar5];
  pPVar4->length = param_1->length;
  pPVar4->crc = (crc32c_t)cVar2.crc_;
  *(undefined4 *)&pPVar4->field_0xc = uVar3;
  puVar1 = &(this->_Mypair)._Myval2._Mysize;
  *puVar1 = *puVar1 + 1;
  return;
}

// reduce_size @ 1501c4d90

/* public: void __cdecl absl::lts_20240722::Cord::InlineRep::reduce_size(unsigned __int64) __ptr64
    */

void __thiscall absl::lts_20240722::Cord::InlineRep::reduce_size(InlineRep *this,__uint64 param_1)

{
  longlong lVar1;
  
  lVar1 = ((ulonglong)(longlong)(this->data_).rep_.field0_0x0.data[0] >> 1) - param_1;
  memset((void *)((longlong)this + lVar1 + 1),0,param_1);
  (this->data_).rep_.field0_0x0.data[0] = (char)lVar1 * '\x02';
  return;
}

// remaining_inline_capacity @ 1501c4dd0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::Cord::InlineRep::remaining_inline_capacity(void)const __ptr64 */

__uint64 __thiscall absl::lts_20240722::Cord::InlineRep::remaining_inline_capacity(InlineRep *this)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)(this->data_).rep_.field0_0x0.data[0];
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  return 0xf - (uVar1 >> 1);
}

// remove_prefix @ 1501c4df0

/* public: void __cdecl absl::lts_20240722::Cord::InlineRep::remove_prefix(unsigned __int64) __ptr64
    */

void __thiscall absl::lts_20240722::Cord::InlineRep::remove_prefix(InlineRep *this,__uint64 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = ((ulonglong)(longlong)(this->data_).rep_.field0_0x0.data[0] >> 1) - param_1;
  if (uVar4 < 8) {
    if (uVar4 < 4) {
      if (uVar4 != 0) {
        (this->data_).rep_.field0_0x0.data[1] = (this->data_).rep_.field0_0x0.data[param_1 + 1];
        (this->data_).rep_.field0_0x0.data[(uVar4 >> 1) + 1] =
             (this->data_).rep_.field0_0x0.data[(uVar4 >> 1) + 1 + param_1];
        *(undefined1 *)((longlong)this + uVar4) = *(undefined1 *)((longlong)this + uVar4 + param_1);
      }
    }
    else {
      uVar1 = *(undefined4 *)((longlong)this + uVar4 + (param_1 - 3));
      *(undefined4 *)((longlong)&(this->data_).rep_.field0_0x0 + 1) =
           *(undefined4 *)((longlong)&(this->data_).rep_.field0_0x0 + param_1 + 1);
      *(undefined4 *)((longlong)this + (uVar4 - 3)) = uVar1;
    }
  }
  else {
    uVar2 = *(undefined8 *)((longlong)this + uVar4 + (param_1 - 7));
    *(undefined8 *)((longlong)&(this->data_).rep_.field0_0x0.as_tree.cordz_info + 1) =
         *(undefined8 *)((longlong)&(this->data_).rep_.field0_0x0 + param_1 + 1);
    *(undefined8 *)((longlong)this + (uVar4 - 7)) = uVar2;
  }
  lVar3 = ((ulonglong)(longlong)(this->data_).rep_.field0_0x0.data[0] >> 1) - param_1;
  memset((void *)((longlong)this + lVar3 + 1),0,param_1);
  (this->data_).rep_.field0_0x0.data[0] = (char)lVar3 * '\x02';
  return;
}

// set_data @ 1501c4ea0

/* public: char * __ptr64 __cdecl absl::lts_20240722::Cord::InlineRep::set_data(unsigned __int64)
   __ptr64 */

char * __thiscall absl::lts_20240722::Cord::InlineRep::set_data(InlineRep *this,__uint64 param_1)

{
  (this->data_).rep_.field0_0x0.as_tree.cordz_info = 0;
  (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  (this->data_).rep_.field0_0x0.data[0] = (char)param_1 * '\x02';
  return (char *)((longlong)&(this->data_).rep_.field0_0x0 + 1);
}

// set_data @ 1501c4ec0

/* public: void __cdecl absl::lts_20240722::Cord::InlineRep::set_data(char const * __ptr64,unsigned
   __int64) __ptr64 */

void __thiscall
absl::lts_20240722::Cord::InlineRep::set_data(InlineRep *this,char *param_1,__uint64 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = (this->data_).rep_.field0_0x0.data + 1;
  (this->data_).rep_.field0_0x0.data[0] = (char)param_2 * '\x02';
  if (7 < param_2) {
    uVar4 = *(undefined8 *)param_1;
    uVar5 = *(undefined8 *)(param_1 + (param_2 - 8));
    (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
    *(undefined8 *)pcVar1 = uVar4;
    *(undefined8 *)((longlong)this + (param_2 - 7)) = uVar5;
    return;
  }
  if (3 < param_2) {
    uVar2 = *(undefined4 *)param_1;
    uVar3 = *(undefined4 *)(param_1 + (param_2 - 4));
    *(undefined4 *)((longlong)&(this->data_).rep_.field0_0x0 + 5) = 0;
    (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
    *(undefined4 *)pcVar1 = uVar2;
    *(undefined4 *)((longlong)this + (param_2 - 3)) = uVar3;
    return;
  }
  if (param_2 != 0) {
    *pcVar1 = *param_1;
    pcVar1[param_2 >> 1] = param_1[param_2 >> 1];
    (this->data_).rep_.field0_0x0.data[param_2] = param_1[param_2 - 1];
  }
  (this->data_).rep_.field0_0x0.as_tree.rep = (CordRep *)0x0;
  pcVar1 = pcVar1 + param_2;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  return;
}

// set_inline_data @ 1501c4f40

/* public: void __cdecl absl::lts_20240722::cord_internal::InlineData::set_inline_data(char const *
   __ptr64,unsigned __int64) __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::InlineData::set_inline_data
          (InlineData *this,char *param_1,__uint64 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = (this->rep_).field0_0x0.data + 1;
  (this->rep_).field0_0x0.data[0] = (char)param_2 * '\x02';
  if (7 < param_2) {
    uVar4 = *(undefined8 *)param_1;
    uVar5 = *(undefined8 *)(param_1 + (param_2 - 8));
    (this->rep_).field0_0x0.as_tree.rep = (CordRep *)0x0;
    *(undefined8 *)pcVar1 = uVar4;
    *(undefined8 *)((longlong)this + (param_2 - 7)) = uVar5;
    return;
  }
  if (3 < param_2) {
    uVar2 = *(undefined4 *)param_1;
    uVar3 = *(undefined4 *)(param_1 + (param_2 - 4));
    *(undefined4 *)((longlong)&(this->rep_).field0_0x0 + 5) = 0;
    (this->rep_).field0_0x0.as_tree.rep = (CordRep *)0x0;
    *(undefined4 *)pcVar1 = uVar2;
    *(undefined4 *)((longlong)this + (param_2 - 3)) = uVar3;
    return;
  }
  if (param_2 != 0) {
    *pcVar1 = *param_1;
    pcVar1[param_2 >> 1] = param_1[param_2 >> 1];
    (this->rep_).field0_0x0.data[param_2] = param_1[param_2 - 1];
  }
  (this->rep_).field0_0x0.as_tree.rep = (CordRep *)0x0;
  pcVar1 = pcVar1 + param_2;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar1[4] = '\0';
  pcVar1[5] = '\0';
  pcVar1[6] = '\0';
  pcVar1[7] = '\0';
  return;
}

// set_inline_size @ 1501c4fc0

/* public: void __cdecl absl::lts_20240722::cord_internal::InlineData::set_inline_size(unsigned
   __int64) __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::InlineData::set_inline_size(InlineData *this,__uint64 param_1)

{
  (this->rep_).field0_0x0.data[0] = (char)param_1 * '\x02';
  return;
}

// set_inline_size @ 1501c4fd0

/* private: void __cdecl absl::lts_20240722::Cord::InlineRep::set_inline_size(unsigned __int64)
   __ptr64 */

void __thiscall
absl::lts_20240722::Cord::InlineRep::set_inline_size(InlineRep *this,__uint64 param_1)

{
  (this->data_).rep_.field0_0x0.data[0] = (char)param_1 * '\x02';
  return;
}

// set_inline_size @ 1501c4fe0

/* public: void __cdecl absl::lts_20240722::cord_internal::InlineData::Rep::set_inline_size(unsigned
   __int64) __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::InlineData::Rep::set_inline_size(Rep *this,__uint64 param_1)

{
  (this->field0_0x0).data[0] = (char)param_1 * '\x02';
  return;
}

// set_tag @ 1501c4ff0

/* public: void __cdecl absl::lts_20240722::cord_internal::InlineData::Rep::set_tag(signed char)
   __ptr64 */

void __thiscall absl::lts_20240722::cord_internal::InlineData::Rep::set_tag(Rep *this,char param_1)

{
  (this->field0_0x0).data[0] = param_1;
  return;
}

// set_tree @ 1501c5000

/* public: void __cdecl absl::lts_20240722::cord_internal::InlineData::set_tree(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::InlineData::set_tree(InlineData *this,CordRep *param_1)

{
  (this->rep_).field0_0x0.as_tree.rep = param_1;
  return;
}

// set_tree @ 1501c5010

/* public: void __cdecl absl::lts_20240722::cord_internal::InlineData::Rep::set_tree(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::cord_internal::InlineData::Rep::set_tree(Rep *this,CordRep *param_1)

{
  (this->field0_0x0).as_tree.rep = param_1;
  return;
}

// size @ 1501c5020

/* public: unsigned __int64 __cdecl absl::lts_20240722::InlinedVector<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64,2,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64> >::size(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::
InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
::size(InlinedVector<absl::lts_20240722::cord_internal::CordRep*___ptr64,2,std::allocator<absl::lts_20240722::cord_internal::CordRep*___ptr64>_>
       *this)

{
  return *(ulonglong *)this >> 1;
}

// size @ 1501c5030

/* public: unsigned __int64 __cdecl absl::lts_20240722::Span<class
   absl::lts_20240722::str_format_internal::FormatArgImpl const >::size(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_>::size
          (Span<absl::lts_20240722::str_format_internal::FormatArgImpl_const_> *this)

{
  return this->len_;
}

// substring @ 1501c5040

/* public: struct absl::lts_20240722::cord_internal::CordRepSubstring * __ptr64 __cdecl
   absl::lts_20240722::cord_internal::CordRep::substring(void) __ptr64 */

CordRepSubstring * __thiscall absl::lts_20240722::cord_internal::CordRep::substring(CordRep *this)

{
  return (CordRepSubstring *)this;
}

// FUN_15032f360 @ 15032f360

void FUN_15032f360(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

// FUN_15032f380 @ 15032f380

void FUN_15032f380(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

// FUN_15032f3c0 @ 15032f3c0

void FUN_15032f3c0(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}

// FUN_15032f480 @ 15032f480

void FUN_15032f480(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x48)
              );
  }
  return;
}

// FUN_15032f4b0 @ 15032f4b0

void FUN_15032f4b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x90) & 1) != 0) {
    *(uint *)(param_2 + 0x90) = *(uint *)(param_2 + 0x90) & 0xfffffffe;
    absl::lts_20240722::Cord::~Cord(*(Cord **)(param_2 + 0x88));
  }
  return;
}

// FUN_15032f590 @ 15032f590

void FUN_15032f590(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    absl::lts_20240722::CordBuffer::~CordBuffer((CordBuffer *)(param_2 + 0x38));
  }
  return;
}

// FUN_15032f6c0 @ 15032f6c0

void FUN_15032f6c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    absl::lts_20240722::CordBuffer::~CordBuffer((CordBuffer *)(param_2 + 0x48));
  }
  return;
}

// FUN_15032f850 @ 15032f850

void FUN_15032f850(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(param_2 + 200));
  }
  return;
}

// FUN_15032f8b0 @ 15032f8b0

void FUN_15032f8b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                (param_2 + 0x130));
  }
  return;
}

// FUN_15032f940 @ 15032f940

void FUN_15032f940(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x28),0x40);
  return;
}

// FUN_15032f9b0 @ 15032f9b0

void FUN_15032f9b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    absl::lts_20240722::Cord::~Cord(*(Cord **)(param_2 + 0x38));
  }
  return;
}

// FUN_15032fc40 @ 15032fc40

void FUN_15032fc40(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x80),0x40);
  return;
}


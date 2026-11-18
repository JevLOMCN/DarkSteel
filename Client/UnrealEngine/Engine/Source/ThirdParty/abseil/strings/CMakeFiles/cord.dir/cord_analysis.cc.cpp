// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 153

// _List_node_emplace_op2<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_><absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64> @ 1501c5050

/* public: __cdecl std::_List_node_emplace_op2<class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> >
   >::_List_node_emplace_op2<class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> > ><struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64>(class
   std::allocator<struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,void * __ptr64> > & __ptr64,struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64 const & __ptr64) __ptr64 */

_List_node_emplace_op2<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
* __thiscall
std::
_List_node_emplace_op2<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
::
_List_node_emplace_op2<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_><absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64>
          (_List_node_emplace_op2<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
           *this,allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
                 *param_1,CordRep **param_2)

{
  void *pvVar1;
  
  *(allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
    **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  pvVar1 = ::operator_new(0x18);
  *(void **)(this + 8) = pvVar1;
  *(CordRep **)((longlong)pvVar1 + 0x10) = *param_2;
  return this;
}

// _Compressed_pair<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>,std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,1><std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_const&___ptr64> @ 1501c50a0

/* public: __cdecl std::_Compressed_pair<class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> >,class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,1>::_Compressed_pair<class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> >,class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,1><class std::allocator<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> const & __ptr64>(struct std::_One_then_variadic_args_t,class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> const &
   __ptr64) __ptr64 */

_Compressed_pair<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>,std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>,std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,1>
::
_Compressed_pair<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>,std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,1><std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_const&___ptr64>
          (_Compressed_pair<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>,std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,1>
           *this,_One_then_variadic_args_t param_1,
          allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> *param_2)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// _Compressed_pair<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>,std::_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>,1><std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_const&___ptr64> @ 1501c50c0

/* public: __cdecl std::_Compressed_pair<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0>
   >,class std::_Vector_val<struct std::_Simple_types<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> >
   >,1>::_Compressed_pair<class std::allocator<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> >,class std::_Vector_val<struct
   std::_Simple_types<class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> > >,1><class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> const & __ptr64>(struct
   std::_One_then_variadic_args_t,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> const & __ptr64) __ptr64 */

_Compressed_pair<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>,std::_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>,std::_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>,1>
::
_Compressed_pair<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>,std::_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>,1><std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_const&___ptr64>
          (_Compressed_pair<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>,std::_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>,1>
           *this,_One_then_variadic_args_t param_1,
          allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> *param_2)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// _Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_><std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_const&___ptr64,0> @ 1501c50e0

/* public: __cdecl std::_Hash_vec<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> >
   >::_Hash_vec<class std::allocator<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> > ><class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> const & __ptr64,0>(class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> const &
   __ptr64) __ptr64 */

_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
* __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
::
_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_><std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_const&___ptr64,0>
          (_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
           *this,allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// _Compressed_pair<std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,float,1><float> @ 1501c5100

/* public: __cdecl std::_Compressed_pair<struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,float,1>::_Compressed_pair<struct
   std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64>,float,1><float>(struct std::_Zero_then_variadic_args_t,float && __ptr64) __ptr64 */

_Compressed_pair<std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,float,1> *
__thiscall
std::
_Compressed_pair<std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,float,1>::
_Compressed_pair<std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,float,1><float>
          (_Compressed_pair<std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,float,1>
           *this,_Zero_then_variadic_args_t param_1,float *param_2)

{
  *(float *)this = *param_2;
  return this;
}

// allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_><absl::lts_20240722::cord_internal::CordRep_const*___ptr64> @ 1501c5110

/* public: __cdecl std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> >::allocator<struct
   std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64>
   ><struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>(class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> const & __ptr64) __ptr64 */

allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
* __thiscall
std::
allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
::
allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_><absl::lts_20240722::cord_internal::CordRep_const*___ptr64>
          (allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
           *this,allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> *param_1)

{
  return this;
}

// allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_><absl::lts_20240722::cord_internal::CordRep_const*___ptr64> @ 1501c5120

/* public: __cdecl std::allocator<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> >::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0>
   ><struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>(class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> const & __ptr64) __ptr64 */

allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>
* __thiscall
std::
allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>
::
allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_><absl::lts_20240722::cord_internal::CordRep_const*___ptr64>
          (allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>
           *this,allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> *param_1)

{
  return this;
}

// _Compressed_pair<std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::_Compressed_pair<std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,float,1>,1><std::_Zero_then_variadic_args_t,float> @ 1501c5130

/* public: __cdecl std::_Compressed_pair<struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,class std::_Compressed_pair<struct
   std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64>,float,1>,1>::_Compressed_pair<struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,class std::_Compressed_pair<struct
   std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64>,float,1>,1><struct std::_Zero_then_variadic_args_t,float>(struct
   std::_Zero_then_variadic_args_t,struct std::_Zero_then_variadic_args_t && __ptr64,float &&
   __ptr64) __ptr64 */

_Compressed_pair<std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::_Compressed_pair<std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,float,1>,1>
* __thiscall
std::
_Compressed_pair<std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::_Compressed_pair<std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,float,1>,1>
::
_Compressed_pair<std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::_Compressed_pair<std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,float,1>,1><std::_Zero_then_variadic_args_t,float>
          (_Compressed_pair<std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::_Compressed_pair<std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,float,1>,1>
           *this,_Zero_then_variadic_args_t param_1,_Zero_then_variadic_args_t *param_2,
          float *param_3)

{
  *(float *)this = *param_3;
  return this;
}

// pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>,bool><std::_List_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>,bool,0> @ 1501c5140

/* public: __cdecl std::pair<class std::_List_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> >
   >,bool>::pair<class std::_List_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> >
   >,bool><class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> > >,bool,0>(class
   std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> > > && __ptr64,bool && __ptr64)
   __ptr64 */

pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>,bool>
* __thiscall
std::
pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>,bool>
::
pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>,bool><std::_List_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>,bool,0>
          (pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>,bool>
           *this,_List_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>
                 *param_1,bool *param_2)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  this[8] = (pair<std::_List_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>,bool>
             )*param_2;
  return this;
}

// operator()<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> @ 1501c5160

/* public: unsigned __int64 __cdecl std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >::operator()<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64)const __ptr64 */

__uint64 __thiscall
std::
_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::operator()<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>
          (_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
           *this,CordRep **param_1)

{
  return ((((ulonglong)*(byte *)((longlong)param_1 + 5) ^
           ((((((ulonglong)*(byte *)param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_1 + 1)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_1 + 4)) * 0x100000001b3) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_1 + 6)) * 0x100000001b3 ^
         (ulonglong)*(byte *)((longlong)param_1 + 7)) * 0x100000001b3;
}

// operator()<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,absl::lts_20240722::cord_internal::CordRep_const*___ptr64> @ 1501c51e0

/* public: bool __cdecl std::_Uhash_compare<struct absl::lts_20240722::cord_internal::CordRep const
   * __ptr64,struct std::hash<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64>,struct std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >::operator()<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64)const __ptr64 */

bool __thiscall
std::
_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::
operator()<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,absl::lts_20240722::cord_internal::CordRep_const*___ptr64>
          (_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
           *this,CordRep **param_1,CordRep **param_2)

{
  return *param_1 != *param_2;
}

// FUN_1501c51f0 @ 1501c51f0

void FUN_1501c51f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = *param_2 + 0x40;
  *param_2 = lVar6;
  plVar5 = (longlong *)(param_1 + 0x10 + (ulonglong)*(byte *)(param_1 + 0xe) * 8);
  plVar1 = plVar5 + ((ulonglong)*(byte *)(param_1 + 0xf) - (ulonglong)*(byte *)(param_1 + 0xe));
  if (*(char *)(param_1 + 0xd) == '\0') {
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      plVar3 = (longlong *)*plVar5;
      if (*(char *)((longlong)plVar3 + 0xc) == '\x01') {
        lVar6 = lVar6 + 0x20;
        *param_2 = lVar6;
        plVar3 = (longlong *)plVar3[3];
      }
      bVar2 = *(byte *)((longlong)plVar3 + 0xc);
      if (bVar2 < 6) {
        lVar4 = *plVar3 + 0x28;
      }
      else if (bVar2 < 0x43) {
        lVar4 = (longlong)(int)((uint)bVar2 * 8 + -0x10);
      }
      else if (bVar2 < 0xbb) {
        lVar4 = (longlong)(int)((bVar2 - 0x3a) * 0x40);
      }
      else {
        lVar4 = (longlong)(int)((bVar2 - 0xb8) * 0x1000);
      }
      lVar6 = lVar6 + lVar4;
      *param_2 = lVar6;
    }
  }
  else if (plVar5 != plVar1) {
    do {
      FUN_1501c51f0(*plVar5,param_2);
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
    return;
  }
  return;
}

// FUN_1501c52e0 @ 1501c52e0

void FUN_1501c52e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  CordRep *local_18;
  char local_10;
  
  std::
  _Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
  ::emplace<absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64>
            ((_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
              *)(param_2 + 1),&local_18);
  if (local_10 != '\0') {
    *param_2 = *param_2 + 0x40;
  }
  puVar2 = (undefined8 *)(param_1 + 0x10 + (ulonglong)*(byte *)(param_1 + 0xe) * 8);
  puVar1 = puVar2 + ((ulonglong)*(byte *)(param_1 + 0xf) - (ulonglong)*(byte *)(param_1 + 0xe));
  if (*(char *)(param_1 + 0xd) == '\0') {
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      FUN_1501c5560(*puVar2,param_2);
    }
  }
  else {
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      FUN_1501c52e0(*puVar2,param_2);
    }
  }
  return;
}

// FUN_1501c5390 @ 1501c5390

void FUN_1501c5390(longlong *param_1,double *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  longlong local_28;
  double local_20;
  
  *param_2 = (double)param_1[1] * __real_4050000000000000 + *param_2;
  lVar2 = *param_1;
  plVar5 = (longlong *)(lVar2 + 0x10 + (ulonglong)*(byte *)(lVar2 + 0xe) * 8);
  plVar1 = plVar5 + ((ulonglong)*(byte *)(lVar2 + 0xf) - (ulonglong)*(byte *)(lVar2 + 0xe));
  if (*(char *)(lVar2 + 0xd) == '\0') {
    if (plVar5 != plVar1) {
      dVar7 = (double)param_1[1];
      do {
        local_28 = *plVar5;
        uVar3 = *(int *)(local_28 + 8) >> 1;
        uVar4 = (ulonglong)(int)uVar3;
        local_20 = dVar7;
        if (uVar4 != 1) {
          if ((int)uVar3 < 0) {
            dVar6 = (double)(uVar4 >> 1 | (ulonglong)(uVar3 & 1));
            dVar6 = dVar6 + dVar6;
          }
          else {
            dVar6 = (double)(longlong)uVar4;
          }
          local_20 = dVar7 / dVar6;
        }
        FUN_1501c5620(&local_28,param_2);
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar1);
    }
  }
  else if (plVar5 != plVar1) {
    dVar7 = (double)param_1[1];
    do {
      local_28 = *plVar5;
      uVar3 = *(int *)(local_28 + 8) >> 1;
      uVar4 = (ulonglong)(int)uVar3;
      local_20 = dVar7;
      if (uVar4 != 1) {
        if ((int)uVar3 < 0) {
          dVar6 = (double)(uVar4 >> 1 | (ulonglong)(uVar3 & 1));
          dVar6 = dVar6 + dVar6;
        }
        else {
          dVar6 = (double)(longlong)uVar4;
        }
        local_20 = dVar7 / dVar6;
      }
      FUN_1501c5390(&local_28,param_2);
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
    return;
  }
  return;
}

// FUN_1501c5560 @ 1501c5560

void FUN_1501c5560(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  CordRep *local_18;
  char local_10;
  
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    std::
    _Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
    ::emplace<absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64>
              ((_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
                *)(param_2 + 1),&local_18);
    if (local_10 != '\0') {
      *param_2 = *param_2 + 0x20;
    }
    param_1 = (longlong *)param_1[3];
  }
  bVar1 = *(byte *)((longlong)param_1 + 0xc);
  if (bVar1 < 6) {
    lVar2 = *param_1 + 0x28;
  }
  else if (bVar1 < 0x43) {
    lVar2 = (longlong)(int)((uint)bVar1 * 8 + -0x10);
  }
  else if (bVar1 < 0xbb) {
    lVar2 = (longlong)(int)((bVar1 - 0x3a) * 0x40);
  }
  else {
    lVar2 = (longlong)(int)((bVar1 - 0xb8) * 0x1000);
  }
  std::
  _Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
  ::emplace<absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64>
            ((_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
              *)(param_2 + 1),&local_18);
  if (local_10 != '\0') {
    *param_2 = *param_2 + lVar2;
  }
  return;
}

// FUN_1501c5620 @ 1501c5620

void FUN_1501c5620(longlong *param_1,double *param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  
  plVar4 = (longlong *)*param_1;
  if (*(char *)((longlong)plVar4 + 0xc) == '\x01') {
    dVar6 = (double)param_1[1];
    *param_2 = (double)param_1[1] * __real_4040000000000000 + *param_2;
    plVar4 = (longlong *)plVar4[3];
    uVar2 = (int)plVar4[1] >> 1;
    uVar3 = (ulonglong)(int)uVar2;
    if (uVar3 != 1) {
      if ((int)uVar2 < 0) {
        dVar5 = (double)(uVar3 >> 1 | (ulonglong)(uVar2 & 1));
        dVar5 = dVar5 + dVar5;
      }
      else {
        dVar5 = (double)(longlong)uVar3;
      }
      dVar6 = dVar6 / dVar5;
    }
    param_1[1] = (longlong)dVar6;
    *param_1 = (longlong)plVar4;
  }
  bVar1 = *(byte *)((longlong)plVar4 + 0xc);
  if (bVar1 < 6) {
    uVar3 = *plVar4 + 0x28;
  }
  else if (bVar1 < 0x43) {
    uVar3 = (ulonglong)(int)((uint)bVar1 * 8 + -0x10);
  }
  else if (bVar1 < 0xbb) {
    uVar3 = (ulonglong)(int)((bVar1 - 0x3a) * 0x40);
  }
  else {
    uVar3 = (ulonglong)(int)((bVar1 - 0xb8) * 0x1000);
  }
  if (-1 < (longlong)uVar3) {
    *param_2 = (double)(longlong)uVar3 * (double)param_1[1] + *param_2;
    return;
  }
  *param_2 = (double)uVar3 * (double)param_1[1] + *param_2;
  return;
}

// FUN_1501c5710 @ 1501c5710

longlong FUN_1501c5710(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8 [4];
  
  lVar2 = 0;
  local_res8[0] = 0;
  if (*(char *)((longlong)param_1 + 0xc) == '\x02') {
    param_1 = (longlong *)param_1[2];
    lVar2 = 0x20;
    local_res8[0] = 0x20;
    if (param_1 == (longlong *)0x0) {
      return 0x20;
    }
  }
  bVar1 = *(byte *)((longlong)param_1 + 0xc);
  if (bVar1 < 5) {
    plVar3 = param_1;
    if (bVar1 == 1) {
      plVar3 = (longlong *)param_1[3];
    }
    if (*(byte *)((longlong)plVar3 + 0xc) < 5) {
      if (bVar1 != 3) {
        return lVar2;
      }
      FUN_1501c51f0(param_1,local_res8);
      return local_res8[0];
    }
  }
  if (bVar1 == 1) {
    lVar2 = lVar2 + 0x20;
    param_1 = (longlong *)param_1[3];
  }
  bVar1 = *(byte *)((longlong)param_1 + 0xc);
  if (bVar1 < 6) {
    return lVar2 + *param_1 + 0x28;
  }
  if (bVar1 < 0x43) {
    return lVar2 + (int)((uint)bVar1 * 8 + -0x10);
  }
  if (0xba < bVar1) {
    return lVar2 + (int)((bVar1 - 0xb8) * 0x1000);
  }
  return lVar2 + (int)((bVar1 - 0x3a) * 0x40);
}

// FUN_1501c57e0 @ 1501c57e0

longlong FUN_1501c57e0(longlong *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  void *pvVar5;
  ulong64 uVar6;
  longlong lVar7;
  CordRep *local_68;
  char local_60;
  longlong local_58;
  undefined4 local_50 [2];
  undefined8 *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_58 = 0;
  local_50[0] = 0;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  local_48 = operator_new(0x18);
  *local_48 = local_48;
  local_48[1] = local_48;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 7;
  local_18 = 8;
  local_50[0] = 0x3f800000;
  std::
  _Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
  ::_Assign_grow((_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
                  *)&local_38,0x10,local_48);
  if (*(char *)((longlong)param_1 + 0xc) == '\x02') {
    std::
    _Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
    ::emplace<absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64>
              ((_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
                *)local_50,&local_68);
    if (local_60 != '\0') {
      local_58 = local_58 + 0x20;
    }
    param_1 = (longlong *)param_1[2];
    if (param_1 == (longlong *)0x0) goto LAB_1501c5943;
  }
  bVar1 = *(byte *)((longlong)param_1 + 0xc);
  if (bVar1 < 5) {
    plVar4 = param_1;
    if (bVar1 == 1) {
      plVar4 = (longlong *)param_1[3];
    }
    if (*(byte *)((longlong)plVar4 + 0xc) < 5) {
      if (bVar1 == 3) {
        FUN_1501c52e0(param_1,&local_58);
      }
      goto LAB_1501c5943;
    }
  }
  if (bVar1 == 1) {
    std::
    _Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
    ::emplace<absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64>
              ((_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
                *)local_50,&local_68);
    if (local_60 != '\0') {
      local_58 = local_58 + 0x20;
    }
    param_1 = (longlong *)param_1[3];
  }
  bVar1 = *(byte *)((longlong)param_1 + 0xc);
  if (bVar1 < 6) {
    lVar7 = *param_1 + 0x28;
  }
  else if (bVar1 < 0x43) {
    lVar7 = (longlong)(int)((uint)bVar1 * 8 + -0x10);
  }
  else if (bVar1 < 0xbb) {
    lVar7 = (longlong)(int)((bVar1 - 0x3a) * 0x40);
  }
  else {
    lVar7 = (longlong)(int)((bVar1 - 0xb8) * 0x1000);
  }
  std::
  _Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
  ::emplace<absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64>
            ((_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
              *)local_50,&local_68);
  if (local_60 != '\0') {
    local_58 = local_58 + lVar7;
  }
LAB_1501c5943:
  lVar7 = local_58;
  if (local_38 != (void *)0x0) {
    uVar6 = local_28 - (longlong)local_38 & 0xfffffffffffffff8;
    pvVar5 = local_38;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      pvVar5 = *(void **)((longlong)local_38 + -8);
      if (0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)pvVar5))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar5,uVar6);
    local_38 = (void *)0x0;
    uStack_30 = 0;
    local_28 = 0;
  }
  *(undefined8 *)local_48[1] = 0;
  puVar3 = (undefined8 *)*local_48;
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    operator_delete(puVar3,0x18);
    puVar3 = puVar2;
  }
  operator_delete(local_48,0x18);
  return lVar7;
}

// FUN_1501c5a00 @ 1501c5a00

longlong FUN_1501c5a00(longlong *param_1)

{
  byte bVar1;
  double dVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  double local_res8 [4];
  longlong *local_18;
  double dStack_10;
  
  uVar3 = (int)param_1[1] >> 1;
  uVar6 = (ulonglong)(int)uVar3;
  local_res8[0] = 0.0;
  dStack_10 = __real_3ff0000000000000;
  if (uVar6 != 1) {
    if ((int)uVar3 < 0) {
      dVar2 = (double)(uVar6 >> 1 | (ulonglong)(uVar3 & 1));
      dVar2 = dVar2 + dVar2;
    }
    else {
      dVar2 = (double)(longlong)uVar6;
    }
    dStack_10 = __real_3ff0000000000000 / dVar2;
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x02') {
    param_1 = (longlong *)param_1[2];
    local_res8[0] = dStack_10 * __real_4040000000000000 + 0.0;
    if (param_1 == (longlong *)0x0) {
      lVar5 = 0;
      if ((__real_43e0000000000000 <= local_res8[0]) &&
         (local_res8[0] = local_res8[0] - __real_43e0000000000000,
         local_res8[0] < __real_43e0000000000000)) {
        lVar5 = -0x8000000000000000;
      }
      return (longlong)local_res8[0] + lVar5;
    }
    uVar3 = (int)param_1[1] >> 1;
    uVar6 = (ulonglong)(int)uVar3;
    if (uVar6 != 1) {
      if ((int)uVar3 < 0) {
        dVar2 = (double)(uVar6 >> 1 | (ulonglong)(uVar3 & 1));
        dVar2 = dVar2 + dVar2;
      }
      else {
        dVar2 = (double)(longlong)uVar6;
      }
      dStack_10 = dStack_10 / dVar2;
    }
  }
  if (*(byte *)((longlong)param_1 + 0xc) < 5) {
    plVar4 = param_1;
    if (*(byte *)((longlong)param_1 + 0xc) == 1) {
      plVar4 = (longlong *)param_1[3];
    }
    if (*(byte *)((longlong)plVar4 + 0xc) < 5) {
      if (*(char *)((longlong)param_1 + 0xc) == '\x03') {
        local_18 = param_1;
        FUN_1501c5390(&local_18,local_res8);
      }
      goto LAB_1501c5c0e;
    }
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    local_res8[0] = local_res8[0] + dStack_10 * __real_4040000000000000;
    param_1 = (longlong *)param_1[3];
    uVar3 = (int)param_1[1] >> 1;
    uVar6 = (ulonglong)(int)uVar3;
    if (uVar6 != 1) {
      if ((int)uVar3 < 0) {
        dVar2 = (double)(uVar6 >> 1 | (ulonglong)(uVar3 & 1));
        dVar2 = dVar2 + dVar2;
      }
      else {
        dVar2 = (double)(longlong)uVar6;
      }
      dStack_10 = dStack_10 / dVar2;
    }
  }
  bVar1 = *(byte *)((longlong)param_1 + 0xc);
  if (bVar1 < 6) {
    uVar6 = *param_1 + 0x28;
  }
  else if (bVar1 < 0x43) {
    uVar6 = (ulonglong)(int)((uint)bVar1 * 8 + -0x10);
  }
  else if (bVar1 < 0xbb) {
    uVar6 = (ulonglong)(int)((bVar1 - 0x3a) * 0x40);
  }
  else {
    uVar6 = (ulonglong)(int)((bVar1 - 0xb8) * 0x1000);
  }
  local_res8[0] = local_res8[0] + (double)uVar6 * dStack_10;
LAB_1501c5c0e:
  lVar5 = 0;
  if ((__real_43e0000000000000 <= local_res8[0]) &&
     (local_res8[0] = local_res8[0] - __real_43e0000000000000,
     local_res8[0] < __real_43e0000000000000)) {
    lVar5 = -0x8000000000000000;
  }
  return (longlong)local_res8[0] + lVar5;
}

// _Adl_verify_range<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>*___ptr64> @ 1501c5c90

/* void __cdecl std::_Adl_verify_range<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> * __ptr64,class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> *
   __ptr64>(class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> * __ptr64 const & __ptr64,class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> *
   __ptr64 const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>*___ptr64>
          (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
           **param_1,
          _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
          **param_2)

{
  return;
}

// _Construct_in_place<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64,std::_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64&___ptr64> @ 1501c5ca0

/* void __cdecl std::_Construct_in_place<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64,struct
   std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64>
   * __ptr64 & __ptr64>(struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64,void * __ptr64> * __ptr64 & __ptr64,struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64 & __ptr64)
    */

void __cdecl
std::
_Construct_in_place<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64,std::_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64&___ptr64>
          (_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
           **param_1,
          _List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
          **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Construct_in_place<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64,std::_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64_const&___ptr64> @ 1501c5cb0

/* void __cdecl std::_Construct_in_place<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64,struct
   std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64>
   * __ptr64 const & __ptr64>(struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64 &
   __ptr64,struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,void * __ptr64> * __ptr64 const & __ptr64) */

void __cdecl
std::
_Construct_in_place<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64,std::_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64_const&___ptr64>
          (_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
           **param_1,
          _List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
          **param_2)

{
  *param_1 = (_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *)
             *param_2;
  return;
}

// _Construct_in_place<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>_const&___ptr64> @ 1501c5cc0

/* void __cdecl std::_Construct_in_place<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0>,class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> const & __ptr64>(class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> &
   __ptr64,class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> const & __ptr64) */

void __cdecl
std::
_Construct_in_place<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>_const&___ptr64>
          (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
           *param_1,
          _List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>
          *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// _Destroy_in_place<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64> @ 1501c5cd0

/* void __cdecl std::_Destroy_in_place<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64>(struct
   std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64>
   * __ptr64 & __ptr64) */

void __cdecl
std::
_Destroy_in_place<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64>
          (_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
           **param_1)

{
  return;
}

// _Destroy_range<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>*___ptr64> @ 1501c5ce0

/* void __cdecl std::_Destroy_range<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> * __ptr64,class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> *
   __ptr64>(class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> * __ptr64,class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> * __ptr64 const) */

void __cdecl
std::
_Destroy_range<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>*___ptr64>
          (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
           *param_1,
          _List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>
          *param_2)

{
  return;
}

// _Emplace_back<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_const&___ptr64> @ 1501c5cf0

/* public: void __cdecl std::_Uninitialized_backout<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> * __ptr64>::_Emplace_back<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> const
   & __ptr64>(class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> const & __ptr64) __ptr64 */

void __thiscall
std::
_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64>
::
_Emplace_back<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_const&___ptr64>
          (_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64>
           *this,_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
                 *param_1)

{
  **(undefined8 **)(this + 8) = *(undefined8 *)param_1;
  *(longlong *)(this + 8) = *(longlong *)(this + 8) + 8;
  return;
}

// _Find_last<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> @ 1501c5d10

/* protected: struct std::_Hash_find_last_result<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64> __cdecl
   std::_Hash<class std::_Uset_traits<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,class std::_Uhash_compare<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,struct std::hash<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64>,struct std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,class std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0>
   >::_Find_last<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64,unsigned __int64)const
   __ptr64 */

CordRep ** __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::_Find_last<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>
          (_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
           *this,CordRep **param_1,__uint64 param_2)

{
  CordRep *pCVar1;
  ulong64 uVar2;
  CordRep *pCVar3;
  longlong *plVar4;
  ulonglong in_R9;
  
  plVar4 = (longlong *)((*(ulonglong *)(this + 0x30) & in_R9) * 0x10 + *(longlong *)(this + 0x18));
  pCVar1 = (CordRep *)plVar4[1];
  if (pCVar1 == *(CordRep **)(this + 8)) {
    *param_1 = *(CordRep **)(this + 8);
    param_1[1] = (CordRep *)0x0;
    return param_1;
  }
  uVar2 = pCVar1[1].length;
  while( true ) {
    if (*(ulong64 *)param_2 == uVar2) {
      pCVar3 = (CordRep *)pCVar1->length;
      param_1[1] = pCVar1;
      *param_1 = pCVar3;
      return param_1;
    }
    if (pCVar1 == (CordRep *)*plVar4) break;
    pCVar1 = *(CordRep **)&pCVar1->refcount;
    uVar2 = pCVar1[1].length;
  }
  *param_1 = pCVar1;
  param_1[1] = (CordRep *)0x0;
  return param_1;
}

// _Fnv1a_append_value<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> @ 1501c5d90

/* unsigned __int64 __cdecl std::_Fnv1a_append_value<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>(unsigned __int64,struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64) */

__uint64 __cdecl
std::_Fnv1a_append_value<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>
          (__uint64 param_1,CordRep **param_2)

{
  return ((((ulonglong)*(byte *)((longlong)param_2 + 5) ^
           (((((*(byte *)param_2 ^ param_1) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_2 + 1)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_2 + 2)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 3)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 4)) * 0x100000001b3) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 6)) * 0x100000001b3 ^
         (ulonglong)*(byte *)((longlong)param_2 + 7)) * 0x100000001b3;
}

// _Free_non_head<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_> @ 1501c5e00

/* public: static void __cdecl std::_List_node<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64,void * __ptr64>::_Free_non_head<class std::allocator<struct
   std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64>
   > >(class std::allocator<struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64,void * __ptr64> > & __ptr64,struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64) */

void __cdecl
std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>::
_Free_non_head<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
          (allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
           *param_1,
          _List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
          *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  **(undefined8 **)(param_2 + 8) = 0;
  puVar2 = *(undefined8 **)param_2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    ::operator_delete(puVar2,0x18);
    puVar2 = puVar1;
  }
  return;
}

// _Freenode0<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_> @ 1501c5e50

/* public: static void __cdecl std::_List_node<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64,void * __ptr64>::_Freenode0<class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> > >(class
   std::allocator<struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,void * __ptr64> > & __ptr64,struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64) */

void __cdecl
std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>::
_Freenode0<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
          (allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
           *param_1,
          _List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
          *param_2)

{
  ::operator_delete(param_2,0x18);
  return;
}

// _Freenode<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_> @ 1501c5e70

/* public: static void __cdecl std::_List_node<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64,void * __ptr64>::_Freenode<class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> > >(class
   std::allocator<struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,void * __ptr64> > & __ptr64,struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64) */

void __cdecl
std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>::
_Freenode<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
          (allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
           *param_1,
          _List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
          *param_2)

{
  ::operator_delete(param_2,0x18);
  return;
}

// _Get_unwrapped<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64_const&___ptr64> @ 1501c5e90

/* UNKNOWN __cdecl std::_Get_unwrapped<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> * __ptr64 const & __ptr64>(class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> *
   __ptr64 const & __ptr64) */

_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
* __cdecl std::
          _Get_unwrapped<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64_const&___ptr64>
                    (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
                     **param_1)

{
  return *param_1;
}

// _Hash_representation<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> @ 1501c5ea0

/* unsigned __int64 __cdecl std::_Hash_representation<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64) */

__uint64 __cdecl
std::_Hash_representation<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>
          (CordRep **param_1)

{
  return ((((ulonglong)*(byte *)((longlong)param_1 + 5) ^
           ((((((ulonglong)*(byte *)param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_1 + 1)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_1 + 4)) * 0x100000001b3) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_1 + 6)) * 0x100000001b3 ^
         (ulonglong)*(byte *)((longlong)param_1 + 7)) * 0x100000001b3;
}

// addressof<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_const_> @ 1501c5f20

/* class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> > const * __ptr64 __cdecl
   std::addressof<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> > const >(class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> >
   const & __ptr64) */

_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_> *
__cdecl std::
        addressof<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_const_>
                  (_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
                   *param_1)

{
  return (_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
          *)param_1;
}

// addressof<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64> @ 1501c5f30

/* struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void *
   __ptr64> * __ptr64 * __ptr64 __cdecl std::addressof<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64>(struct
   std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64>
   * __ptr64 & __ptr64) */

_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> ** __cdecl
std::
addressof<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64>
          (_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
           **param_1)

{
  return (_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> **)
         param_1;
}

// addressof<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> @ 1501c5f40

/* struct absl::lts_20240722::cord_internal::CordRep const * __ptr64 * __ptr64 __cdecl
   std::addressof<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 & __ptr64) */

CordRep ** __cdecl
std::addressof<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>(CordRep **param_1)

{
  return param_1;
}

// addressof<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_> @ 1501c5f50

/* class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> * __ptr64 __cdecl std::addressof<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0>
   >(class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> & __ptr64) */

_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
* __cdecl std::
          addressof<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>
                    (_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>
                     *param_1)

{
  return (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
          *)param_1;
}

// construct<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64> @ 1501c5f60

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64>
   > >::construct<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64>(class
   std::allocator<struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,void * __ptr64> > & __ptr64,struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64 * __ptr64 const,struct absl::lts_20240722::cord_internal::CordRep const * __ptr64 const &
   __ptr64) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
::
construct<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64>
          (allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
           *param_1,CordRep **param_2,CordRep **param_3)

{
  *param_2 = *param_3;
  return;
}

// construct_at<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64,std::_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64&___ptr64,0> @ 1501c5f70

/* struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void *
   __ptr64> * __ptr64 * __ptr64 __cdecl std::construct_at<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64,struct
   std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64>
   * __ptr64 & __ptr64,0>(struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64,void * __ptr64> * __ptr64 * __ptr64 const,struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64 & __ptr64)
    */

_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> ** __cdecl
std::
construct_at<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64,std::_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64&___ptr64,0>
          (_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
           **param_1,
          _List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
          **param_2)

{
  *param_1 = *param_2;
  return (_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> **)
         param_1;
}

// construct_at<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64,std::_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64_const&___ptr64,0> @ 1501c5f80

/* struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void *
   __ptr64> * __ptr64 * __ptr64 __cdecl std::construct_at<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64,struct
   std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64>
   * __ptr64 const & __ptr64,0>(struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64 * __ptr64
   const,struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,void * __ptr64> * __ptr64 const & __ptr64) */

_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> ** __cdecl
std::
construct_at<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64,std::_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64_const&___ptr64,0>
          (_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
           **param_1,
          _List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
          **param_2)

{
  *param_1 = *param_2;
  return (_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> **)
         param_1;
}

// construct_at<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64,0> @ 1501c5f90

/* struct absl::lts_20240722::cord_internal::CordRep const * __ptr64 * __ptr64 __cdecl
   std::construct_at<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64,0>(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 * __ptr64 const,struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64) */

CordRep ** __cdecl
std::
construct_at<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64,0>
          (CordRep **param_1,CordRep **param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// construct_at<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>_const&___ptr64,0> @ 1501c5fa0

/* class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> * __ptr64 __cdecl std::construct_at<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0>,class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> const
   & __ptr64,0>(class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> * __ptr64 const,class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> const & __ptr64) */

_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
* __cdecl std::
          construct_at<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>_const&___ptr64,0>
                    (_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>
                     *param_1,
                    _List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>
                    *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
          *)param_1;
}

// destroy<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> @ 1501c5fb0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64>
   > >::destroy<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>(class
   std::allocator<struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,void * __ptr64> > & __ptr64,struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64 * __ptr64 const) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
::destroy<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>
          (allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
           *param_1,CordRep **param_2)

{
  return;
}

// destroy_at<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> @ 1501c5fc0

/* void __cdecl std::destroy_at<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64>(struct absl::lts_20240722::cord_internal::CordRep const * __ptr64 * __ptr64 const) */

void __cdecl
std::destroy_at<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>(CordRep **param_1)

{
  return;
}

// emplace<absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64> @ 1501c5fd0

/* public: struct std::pair<class std::_List_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> >
   >,bool> __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> >::emplace<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64>(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64) __ptr64 */

CordRep ** __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::emplace<absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64>
          (_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
           *this,CordRep **param_1)

{
  ulonglong uVar1;
  CordRep *pCVar2;
  ulong64 uVar3;
  undefined8 *puVar4;
  CordRep *pCVar5;
  CordRep **extraout_RAX;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  CordRep *pCVar9;
  ulonglong uVar10;
  ulong64 *in_R8;
  float fVar11;
  
  uVar6 = (((((((((ulonglong)(byte)*in_R8 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)in_R8 + 1)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)in_R8 + 2)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)in_R8 + 3)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)in_R8 + 4)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)in_R8 + 5)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)in_R8 + 6)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)in_R8 + 7)) * 0x100000001b3;
  pCVar5 = *(CordRep **)
            (*(longlong *)(this + 0x18) + 8 + (*(ulonglong *)(this + 0x30) & uVar6) * 0x10);
  pCVar9 = *(CordRep **)(this + 8);
  if (pCVar5 != pCVar9) {
    uVar3 = pCVar5[1].length;
    pCVar9 = pCVar5;
    while( true ) {
      if (*in_R8 == uVar3) {
        *param_1 = pCVar9;
        *(undefined1 *)(param_1 + 1) = 0;
        return param_1;
      }
      if (pCVar9 == *(CordRep **)
                     (*(longlong *)(this + 0x18) + (*(ulonglong *)(this + 0x30) & uVar6) * 0x10))
      break;
      pCVar9 = *(CordRep **)&pCVar9->refcount;
      uVar3 = pCVar9[1].length;
    }
  }
  if (*(longlong *)(this + 0x10) == 0xaaaaaaaaaaaaaaa) {
    _Xlength_error("unordered_map/set too long");
    return extraout_RAX;
  }
  pCVar5 = ::operator_new(0x18);
  pCVar5[1].length = *in_R8;
  uVar1 = *(ulonglong *)(this + 0x38);
  if (*(float *)this < (float)(*(longlong *)(this + 0x10) + 1) / (float)uVar1) {
    fVar11 = ceilf((float)(*(longlong *)(this + 0x10) + 1) / *(float *)this);
    lVar7 = 0;
    if ((__real_5f000000 <= fVar11) && (fVar11 = fVar11 - __real_5f000000, fVar11 < __real_5f000000)
       ) {
      lVar7 = -0x8000000000000000;
    }
    uVar8 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar7)) {
      uVar8 = (longlong)fVar11 + lVar7;
    }
    uVar10 = uVar1;
    if ((uVar1 < uVar8) && ((0x1ff < uVar1 || (uVar10 = uVar1 * 8, uVar1 * 8 < uVar8)))) {
      uVar10 = uVar8;
    }
    _Forced_rehash(this,uVar10);
    pCVar2 = *(CordRep **)
              (*(longlong *)(this + 0x18) + 8 + (uVar6 & *(ulonglong *)(this + 0x30)) * 0x10);
    pCVar9 = *(CordRep **)(this + 8);
    if (pCVar2 != pCVar9) {
      uVar3 = pCVar2[1].length;
      pCVar9 = pCVar2;
      while (pCVar5[1].length != uVar3) {
        if (pCVar9 == *(CordRep **)
                       (*(longlong *)(this + 0x18) + (uVar6 & *(ulonglong *)(this + 0x30)) * 0x10))
        goto LAB_1501c628e;
        pCVar9 = *(CordRep **)&pCVar9->refcount;
        uVar3 = pCVar9[1].length;
      }
      pCVar9 = (CordRep *)pCVar9->length;
    }
  }
LAB_1501c628e:
  puVar4 = *(undefined8 **)&pCVar9->refcount;
  *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + 1;
  pCVar5->length = (ulong64)pCVar9;
  *(undefined8 **)&pCVar5->refcount = puVar4;
  *puVar4 = pCVar5;
  *(CordRep **)&pCVar9->refcount = pCVar5;
  lVar7 = *(longlong *)(this + 0x18);
  uVar6 = *(ulonglong *)(this + 0x30) & uVar6;
  pCVar2 = *(CordRep **)(lVar7 + uVar6 * 0x10);
  if (pCVar2 == *(CordRep **)(this + 8)) {
    *(CordRep **)(lVar7 + uVar6 * 0x10) = pCVar5;
  }
  else {
    if (pCVar2 == pCVar9) {
      *(CordRep **)(lVar7 + uVar6 * 0x10) = pCVar5;
      goto LAB_1501c62d8;
    }
    if (*(undefined8 **)(lVar7 + 8 + uVar6 * 0x10) != puVar4) goto LAB_1501c62d8;
  }
  *(CordRep **)(lVar7 + 8 + uVar6 * 0x10) = pCVar5;
LAB_1501c62d8:
  *param_1 = pCVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}

// exchange<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64,std::nullptr_t> @ 1501c6300

/* struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void *
   __ptr64> * __ptr64 __cdecl std::exchange<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> *
   __ptr64,std::nullptr_t>(struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64,void * __ptr64> * __ptr64 & __ptr64,std::nullptr_t && __ptr64) */

_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> * __cdecl
std::
exchange<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64,std::nullptr_t>
          (_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
           **param_1,std__nullptr_t *param_2)

{
  _List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *p_Var1;
  
  p_Var1 = (_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *)
           *param_1;
  *param_1 = *(_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
               **)param_2;
  return p_Var1;
}

// fill<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>_> @ 1501c6310

/* void __cdecl std::fill<class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> * __ptr64,class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> >(class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> * __ptr64 const,class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> *
   __ptr64 const,class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> const & __ptr64) */

void __cdecl
std::
fill<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>_>
          (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
           *param_1,
          _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
          *param_2,_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>
                   *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
  *p_Var4;
  
  uVar3 = (ulonglong)(param_2 + (7 - (longlong)param_1)) >> 3;
  if (param_2 < param_1) {
    uVar3 = 0;
  }
  if ((uVar3 != 0) && (1 < uVar3)) {
    uVar1 = *(undefined8 *)param_3;
    if ((param_3 < param_1) || (param_1 + uVar3 * 8 + -8 < param_3)) {
      p_Var4 = param_1;
      for (uVar2 = uVar3 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined8 *)p_Var4 = uVar1;
        p_Var4 = p_Var4 + 8;
      }
      param_1 = param_1 + (uVar3 & 0xfffffffffffffffe) * 8;
    }
  }
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
  }
  return;
}

// forward<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64&___ptr64> @ 1501c63a0

/* struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void *
   __ptr64> * __ptr64 & __ptr64 __cdecl std::forward<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64 &
   __ptr64>(struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,void * __ptr64> * __ptr64 & __ptr64) */

_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> ** __cdecl
std::
forward<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64&___ptr64>
          (_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
           **param_1)

{
  return (_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> **)
         param_1;
}

// forward<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64_const&___ptr64> @ 1501c63b0

/* struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void *
   __ptr64> * __ptr64 const & __ptr64 __cdecl std::forward<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64 const &
   __ptr64>(struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,void * __ptr64> * __ptr64 const & __ptr64) */

_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> ** __cdecl
std::
forward<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>*___ptr64_const&___ptr64>
          (_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
           **param_1)

{
  return (_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> **)
         param_1;
}

// forward<absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64> @ 1501c63c0

/* struct absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64 __cdecl
   std::forward<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64 const &
   __ptr64>(struct absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64) */

CordRep ** __cdecl
std::forward<absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64>
          (CordRep **param_1)

{
  return param_1;
}

// forward<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_const&___ptr64> @ 1501c63d0

/* class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> const & __ptr64 __cdecl std::forward<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> const
   & __ptr64>(class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> const & __ptr64) */

_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
* __cdecl std::
          forward<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_const&___ptr64>
                    (_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>
                     *param_1)

{
  return (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
          *)param_1;
}

// forward<std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_const&___ptr64> @ 1501c63e0

/* class std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> const &
   __ptr64 __cdecl std::forward<class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> const & __ptr64>(class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> const &
   __ptr64) */

allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> * __cdecl
std::
forward<std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_const&___ptr64>
          (allocator<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64> *param_1)

{
  return (allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> *)param_1;
}

// forward<std::_List_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>_> @ 1501c63f0

/* class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> > > && __ptr64 __cdecl
   std::forward<class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> > > >(class std::_List_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> > > & __ptr64) */

_List_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>
* __cdecl std::
          forward<std::_List_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>_>
                    (_List_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>
                     *param_1)

{
  return (_List_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>
          *)param_1;
}

// uninitialized_fill<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>_> @ 1501c6400

/* void __cdecl std::uninitialized_fill<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> * __ptr64,class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0>
   >(class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> * __ptr64 const,class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> * __ptr64 const,class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> const
   & __ptr64) */

void __cdecl
std::
uninitialized_fill<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>_>
          (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
           *param_1,
          _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
          *param_2,_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>
                   *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
  }
  return;
}

// FUN_1501c64d0 @ 1501c64d0

undefined8 * FUN_1501c64d0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  pvVar1 = operator_new(0x18);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  param_1[2] = pvVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 7;
  param_1[8] = 8;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  std::
  _Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
  ::_Assign_grow((_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
                  *)(param_1 + 4),0x10,param_1[2]);
  return param_1;
}

// Span<absl::lts_20240722::cord_internal::CordRep*___ptr64_const> @ 1501c6580

/* public: __cdecl absl::lts_20240722::Span<struct absl::lts_20240722::cord_internal::CordRep *
   __ptr64 const>::Span<struct absl::lts_20240722::cord_internal::CordRep * __ptr64 const>(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 const * __ptr64,unsigned __int64) __ptr64 */

Span<absl::lts_20240722::cord_internal::CordRep*___ptr64_const> * __thiscall
absl::lts_20240722::Span<absl::lts_20240722::cord_internal::CordRep*___ptr64_const>::
Span<absl::lts_20240722::cord_internal::CordRep*___ptr64_const>
          (Span<absl::lts_20240722::cord_internal::CordRep*___ptr64_const> *this,CordRep **param_1,
          __uint64 param_2)

{
  *(CordRep ***)this = param_1;
  *(__uint64 *)(this + 8) = param_2;
  return this;
}

// _Alloc_construct_ptr<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_> @ 1501c65a0

/* public: __cdecl std::_Alloc_construct_ptr<class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> >
   >::_Alloc_construct_ptr<class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> > >(class
   std::allocator<struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,void * __ptr64> > & __ptr64) __ptr64 */

_Alloc_construct_ptr<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
* __thiscall
std::
_Alloc_construct_ptr<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
::
_Alloc_construct_ptr<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
          (_Alloc_construct_ptr<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
           *this,allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
                 *param_1)

{
  *(allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
    **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// _Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_> @ 1501c65c0

/* protected: __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> >::_Hash<class
   std::_Uset_traits<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,class
   std::_Uhash_compare<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct
   std::hash<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct
   std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> >(class
   std::_Uhash_compare<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct
   std::hash<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct
   std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> > const &
   __ptr64,class std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   const & __ptr64) __ptr64 */

_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
* __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
          (_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
           *this,_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
                 *param_1,
          allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> *param_2)

{
  void *pvVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  pvVar1 = ::operator_new(0x18);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)(this + 8) = pvVar1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 7;
  *(undefined8 *)(this + 0x38) = 8;
  *(undefined4 *)this = 0x3f800000;
  _Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
  ::_Assign_grow((_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
                  *)(this + 0x18),0x10,*(undefined8 *)(this + 8));
  return this;
}

// _List_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_> @ 1501c6640

/* public: __cdecl std::_List_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> >
   >::_List_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> > >(struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64,class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> > const * __ptr64) __ptr64 */

_List_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>
* __thiscall
std::
_List_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>
::
_List_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>
          (_List_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>
           *this,_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                 *param_1,
          _List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
          *param_2)

{
  *(_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> **)this =
       param_1;
  return this;
}

// _List_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_> @ 1501c6650

/* public: __cdecl std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> > >::_List_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> > >(struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64,void * __ptr64> * __ptr64,class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> >
   const * __ptr64) __ptr64 */

_List_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>
* __thiscall
std::
_List_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>
::
_List_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>
          (_List_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>
           *this,_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                 *param_1,
          _List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
          *param_2)

{
  *(_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> **)this =
       param_1;
  return this;
}

// _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0> @ 1501c6660

/* public: __cdecl std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0>::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0>(struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64,class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> > const * __ptr64) __ptr64 */

_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
* __thiscall
std::
_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
::
_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
          (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
           *this,_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                 *param_1,
          _List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
          *param_2)

{
  *(_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> **)this =
       param_1;
  return this;
}

// _List_unchecked_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_> @ 1501c6670

/* public: __cdecl std::_List_unchecked_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> >
   >::_List_unchecked_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> > >(struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64,class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> > const * __ptr64) __ptr64 */

_List_unchecked_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>
* __thiscall
std::
_List_unchecked_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>
::
_List_unchecked_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>
          (_List_unchecked_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>_>
           *this,_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                 *param_1,
          _List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
          *param_2)

{
  *(_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> **)this =
       param_1;
  return this;
}

// _List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_> @ 1501c6680

/* public: __cdecl std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >(void) __ptr64 */

_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_> *
__thiscall
std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
          (_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return this;
}

// _Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_> @ 1501c66a0

/* public: __cdecl std::_Uhash_compare<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,struct std::hash<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64>,struct std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >::_Uhash_compare<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct
   std::hash<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct
   std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> >(void) __ptr64
    */

_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
* __thiscall
std::
_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::
_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
          (_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
           *this)

{
  *(undefined4 *)this = 0;
  return this;
}

// _Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64> @ 1501c66b0

/* public: __cdecl std::_Uninitialized_backout<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> * __ptr64>::_Uninitialized_backout<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> *
   __ptr64>(class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> * __ptr64) __ptr64 */

_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64>
* __thiscall
std::
_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64>
::
_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64>
          (_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64>
           *this,_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
                 *param_1)

{
  *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
    **)this = param_1;
  *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
    **)(this + 8) = param_1;
  return this;
}

// _Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0> @ 1501c66d0

/* public: __cdecl std::_Uset_traits<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,class std::_Uhash_compare<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,struct std::hash<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64>,struct std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,class std::allocator<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64>,0>::_Uset_traits<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,class
   std::_Uhash_compare<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct
   std::hash<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct
   std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0>(class
   std::_Uhash_compare<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct
   std::hash<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct
   std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> > const &
   __ptr64) __ptr64 */

_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>
* __thiscall
std::
_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>
::
_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>
          (_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>
           *this,_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
                 *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  return this;
}

// _Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_> @ 1501c66e0

/* public: __cdecl std::_Vector_val<struct std::_Simple_types<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> >
   >::_Vector_val<struct std::_Simple_types<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> > >(void) __ptr64 */

_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
* __thiscall
std::
_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
::
_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
          (_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> @ 1501c6700

/* public: __cdecl std::allocator<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64>::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>(void)
   __ptr64 */

allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> * __thiscall
std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>::
allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>
          (allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> *this)

{
  return this;
}

// list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_> @ 1501c6710

/* public: __cdecl std::list<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> >::list<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >(class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> const & __ptr64) __ptr64 */

list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
* __thiscall
std::
list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::
list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
          (list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
           *this,allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> *param_1)

{
  void *pvVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  pvVar1 = ::operator_new(0x18);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)this = pvVar1;
  return this;
}

// unordered_set<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_> @ 1501c6750

/* public: __cdecl std::unordered_set<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,struct std::hash<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64>,struct std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64>,class std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >::unordered_set<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct
   std::hash<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct
   std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>,class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> >(void) __ptr64
    */

unordered_set<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
* __thiscall
std::
unordered_set<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::
unordered_set<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
          (unordered_set<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  pvVar1 = ::operator_new(0x18);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)(this + 8) = pvVar1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 7;
  *(undefined8 *)(this + 0x38) = 8;
  *(undefined4 *)this = 0x3f800000;
  _Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
  ::_Assign_grow((_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
                  *)(this + 0x18),0x10,*(undefined8 *)(this + 8));
  return this;
}

// _Clear_guard @ 1501c67d0

/* public: __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0>
   >::_Clear_guard::_Clear_guard(class std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> > * __ptr64 const) __ptr64 */

_Clear_guard * __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::_Clear_guard::_Clear_guard
          (_Clear_guard *this,
          _Hash<class_std::_Uset_traits<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,class_std::_Uhash_compare<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,struct_std::hash<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,struct_std::equal_to<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,class_std::allocator<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
          *param_1)

{
  *(_Hash<class_std::_Uset_traits<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,class_std::_Uhash_compare<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,struct_std::hash<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,struct_std::equal_to<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,class_std::allocator<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
    **)this = param_1;
  return this;
}

// _Range_eraser @ 1501c67e0

/* public: __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0>
   >::_Range_eraser::_Range_eraser(class std::list<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64,class std::allocator<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64> > & __ptr64,struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64,void * __ptr64> * __ptr64 const) __ptr64 */

_Range_eraser * __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::_Range_eraser::_Range_eraser
          (_Range_eraser *this,
          list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
          *param_1,_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                   *param_2)

{
  *(list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
    **)this = param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_2 + 8);
  *(_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> **)
   (this + 0x10) = param_2;
  return this;
}

// ~_Alloc_construct_ptr<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_> @ 1501c6810

/* public: __cdecl std::_Alloc_construct_ptr<class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> >
   >::~_Alloc_construct_ptr<class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> > >(void) __ptr64 */

void __thiscall
std::
_Alloc_construct_ptr<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
::
~_Alloc_construct_ptr<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
          (_Alloc_construct_ptr<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
           *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    ::operator_delete(*(void **)(this + 8),0x18);
    return;
  }
  return;
}

// ~_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_> @ 1501c6830

/* public: __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> >::~_Hash<class
   std::_Uset_traits<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,class
   std::_Uhash_compare<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct
   std::hash<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct
   std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> >(void)
   __ptr64 */

void __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::
~_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
          (_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
           *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong64 uVar5;
  
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    uVar5 = *(longlong *)(this + 0x28) - (longlong)pvVar1 & 0xfffffffffffffff8;
    pvVar4 = pvVar1;
    if (0xfff < uVar5) {
      pvVar4 = *(void **)((longlong)pvVar1 + -8);
      uVar5 = uVar5 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar4,uVar5);
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
  }
  puVar2 = *(undefined8 **)(this + 8);
  *(undefined8 *)puVar2[1] = 0;
  puVar2 = (undefined8 *)*puVar2;
  while (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    ::operator_delete(puVar2,0x18);
    puVar2 = puVar3;
  }
  ::operator_delete(*(void **)(this + 8),0x18);
  return;
}

// ~_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_> @ 1501c68e0

/* public: __cdecl std::_Hash_vec<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> >
   >::~_Hash_vec<class std::allocator<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> > >(void) __ptr64 */

void __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
::
~_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
          (_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
           *this)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    uVar3 = *(longlong *)(this + 0x10) - (longlong)pvVar1 & 0xfffffffffffffff8;
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

// ~_List_node_emplace_op2<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_> @ 1501c6950

/* public: __cdecl std::_List_node_emplace_op2<class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> >
   >::~_List_node_emplace_op2<class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> > >(void) __ptr64 */

void __thiscall
std::
_List_node_emplace_op2<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
::
~_List_node_emplace_op2<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
          (_List_node_emplace_op2<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
           *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    ::operator_delete(*(void **)(this + 8),0x18);
    return;
  }
  return;
}

// ~_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64> @ 1501c6970

/* public: __cdecl std::_Uninitialized_backout<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> * __ptr64>::~_Uninitialized_backout<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> *
   __ptr64>(void) __ptr64 */

void __thiscall
std::
_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64>
::
~_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64>
          (_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64>
           *this)

{
  return;
}

// ~list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_> @ 1501c6980

/* public: __cdecl std::list<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> >::~list<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >(void) __ptr64 */

void __thiscall
std::
list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::
~list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
          (list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
           *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)this;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    ::operator_delete(puVar1,0x18);
    puVar1 = puVar2;
  }
  ::operator_delete(*(void **)this,0x18);
  return;
}

// ~unordered_set<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_> @ 1501c69f0

/* public: __cdecl std::unordered_set<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,struct std::hash<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64>,struct std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64>,class std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >::~unordered_set<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct
   std::hash<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct
   std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>,class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> >(void) __ptr64
    */

void __thiscall
std::
unordered_set<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::
~unordered_set<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
          (unordered_set<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
           *this)

{
  _Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
  ::
  ~_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
            ((_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
              *)this);
  return;
}

// ~_Clear_guard @ 1501c6a00

/* public: __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0>
   >::_Clear_guard::~_Clear_guard(void) __ptr64 */

void __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::_Clear_guard::~_Clear_guard(_Clear_guard *this)

{
  _Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
  *this_00;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  this_00 = *(_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
              **)this;
  if ((this_00 !=
       (_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
        *)0x0) && (*(ulonglong *)(this_00 + 0x10) != 0)) {
    if (*(ulonglong *)(this_00 + 0x10) < *(ulonglong *)(this_00 + 0x38) >> 3) {
      _Unchecked_erase(this_00,*(_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                                 **)*(_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                                      **)(this_00 + 8),
                       *(_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                         **)(this_00 + 8));
      return;
    }
    puVar1 = *(undefined8 **)(this_00 + 8);
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      ::operator_delete(puVar1,0x18);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(this_00 + 8) = *(undefined8 *)(this_00 + 8);
    *(longlong *)(*(longlong *)(this_00 + 8) + 8) = *(longlong *)(this_00 + 8);
    *(undefined8 *)(this_00 + 0x10) = 0;
    local_res8 = *(undefined8 *)(this_00 + 8);
    fill<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>_>
              (*(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
                 **)(this_00 + 0x18),
               *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
                 **)(this_00 + 0x20),
               (_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>
                *)&local_res8);
  }
  return;
}

// ~_Range_eraser @ 1501c6ac0

/* public: __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0>
   >::_Range_eraser::~_Range_eraser(void) __ptr64 */

void __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::_Range_eraser::~_Range_eraser(_Range_eraser *this)

{
  **(undefined8 **)(this + 8) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(*(longlong *)(this + 0x10) + 8) = *(undefined8 *)(this + 8);
  return;
}

// operator== @ 1501c6ae0

/* public: bool __cdecl std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0>::operator==(class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> const & __ptr64)const __ptr64 */

bool __thiscall
std::
_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
::operator==(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
             *this,_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>
                   *param_1)

{
  return *(longlong *)this == *(longlong *)param_1;
}

// operator* @ 1501c6af0

/* public: struct absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64 __cdecl
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct
   std::_Iterator_base0>::operator*(void)const __ptr64 */

CordRep ** __thiscall
std::
_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
::operator*(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
            *this)

{
  return (CordRep **)(*(longlong *)this + 0x10);
}

// operator++ @ 1501c6b00

/* public: class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> & __ptr64 __cdecl std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0>::operator++(void) __ptr64 */

_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>
* __thiscall
std::
_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
::operator++(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
             *this)

{
  *(undefined8 *)this = **(undefined8 **)this;
  return (_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>
          *)this;
}

// operator-- @ 1501c6b20

/* public: class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> & __ptr64 __cdecl std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0>::operator--(void) __ptr64 */

_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>
* __thiscall
std::
_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
::operator--(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
             *this)

{
  *(undefined8 *)this = *(undefined8 *)(*(longlong *)this + 8);
  return (_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>
          *)this;
}

// operator() @ 1501c6b40

/* public: unsigned __int64 __cdecl std::_Conditionally_enabled_hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,1>::operator()(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64)const __ptr64 */

__uint64 __thiscall
std::_Conditionally_enabled_hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,1>::
operator()(_Conditionally_enabled_hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,1>
           *this,CordRep **param_1)

{
  return ((((ulonglong)*(byte *)((longlong)param_1 + 5) ^
           ((((((ulonglong)*(byte *)param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_1 + 1)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_1 + 4)) * 0x100000001b3) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_1 + 6)) * 0x100000001b3 ^
         (ulonglong)*(byte *)((longlong)param_1 + 7)) * 0x100000001b3;
}

// operator() @ 1501c6bc0

/* public: bool __cdecl std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64>::operator()(struct absl::lts_20240722::cord_internal::CordRep const * __ptr64 const &
   __ptr64,struct absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64)const
   __ptr64 */

bool __thiscall
std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>::operator()
          (equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> *this,
          CordRep **param_1,CordRep **param_2)

{
  return *param_1 == *param_2;
}

// FUN_1501c6be0 @ 1501c6be0

void FUN_1501c6be0(longlong *param_1,longlong param_2)

{
  CordRep *local_18;
  char local_10;
  
  std::
  _Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
  ::emplace<absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64>
            ((_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
              *)(param_1 + 1),&local_18);
  if (local_10 != '\0') {
    *param_1 = *param_1 + param_2;
  }
  return;
}

// AllocatedSize @ 1501c6c80

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::cord_internal::CordRepFlat::AllocatedSize(void)const __ptr64 */

__uint64 __thiscall absl::lts_20240722::cord_internal::CordRepFlat::AllocatedSize(CordRepFlat *this)

{
  byte bVar1;
  
  bVar1 = this->field_0xc;
  if (bVar1 < 0x43) {
    return (longlong)(int)((uint)bVar1 * 8 + -0x10);
  }
  if (bVar1 < 0xbb) {
    return (longlong)(int)((bVar1 - 0x3a) * 0x40);
  }
  return (longlong)(int)((bVar1 - 0xb8) * 0x1000);
}

// Edges @ 1501c6d30

/* public: class absl::lts_20240722::Span<struct absl::lts_20240722::cord_internal::CordRep *
   __ptr64 const> __cdecl absl::lts_20240722::cord_internal::CordRepBtree::Edges(void)const __ptr64
    */

void __thiscall absl::lts_20240722::cord_internal::CordRepBtree::Edges(CordRepBtree *this)

{
  longlong *in_RDX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)*(byte *)((longlong)&this->_padding_ + 6);
  *in_RDX = (longlong)(this->edges_ + uVar1);
  in_RDX[1] = *(byte *)((longlong)&this->_padding_ + 7) - uVar1;
  return;
}

// GetEstimatedFairShareMemoryUsage @ 1501c6d60

/* unsigned __int64 __cdecl
   absl::lts_20240722::cord_internal::GetEstimatedFairShareMemoryUsage(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64) */

__uint64 __cdecl
absl::lts_20240722::cord_internal::GetEstimatedFairShareMemoryUsage(CordRep *param_1)

{
  byte bVar1;
  double dVar2;
  uint uVar3;
  CordRep *pCVar4;
  longlong lVar5;
  ulonglong uVar6;
  double adStackX_8 [4];
  CordRep *pCStack_18;
  double dStack_10;
  
  uVar3 = (int)(param_1->refcount).count_ >> 1;
  uVar6 = (ulonglong)(int)uVar3;
  adStackX_8[0] = 0.0;
  dStack_10 = __real_3ff0000000000000;
  if (uVar6 != 1) {
    if ((int)uVar3 < 0) {
      dVar2 = (double)(uVar6 >> 1 | (ulonglong)(uVar3 & 1));
      dVar2 = dVar2 + dVar2;
    }
    else {
      dVar2 = (double)(longlong)uVar6;
    }
    dStack_10 = __real_3ff0000000000000 / dVar2;
  }
  if (param_1->tag == '\x02') {
    param_1 = (CordRep *)param_1[1].length;
    adStackX_8[0] = dStack_10 * __real_4040000000000000 + 0.0;
    if (param_1 == (CordRep *)0x0) {
      lVar5 = 0;
      if ((__real_43e0000000000000 <= adStackX_8[0]) &&
         (adStackX_8[0] = adStackX_8[0] - __real_43e0000000000000,
         adStackX_8[0] < __real_43e0000000000000)) {
        lVar5 = -0x8000000000000000;
      }
      return (longlong)adStackX_8[0] + lVar5;
    }
    uVar3 = (int)(param_1->refcount).count_ >> 1;
    uVar6 = (ulonglong)(int)uVar3;
    if (uVar6 != 1) {
      if ((int)uVar3 < 0) {
        dVar2 = (double)(uVar6 >> 1 | (ulonglong)(uVar3 & 1));
        dVar2 = dVar2 + dVar2;
      }
      else {
        dVar2 = (double)(longlong)uVar6;
      }
      dStack_10 = dStack_10 / dVar2;
    }
  }
  if (param_1->tag < 5) {
    pCVar4 = param_1;
    if (param_1->tag == 1) {
      pCVar4 = *(CordRep **)&param_1[1].refcount;
    }
    if (pCVar4->tag < 5) {
      if (param_1->tag == '\x03') {
        pCStack_18 = param_1;
        FUN_1501c5390(&pCStack_18,adStackX_8);
      }
      goto LAB_1501c5c0e;
    }
  }
  if (param_1->tag == '\x01') {
    adStackX_8[0] = adStackX_8[0] + dStack_10 * __real_4040000000000000;
    param_1 = *(CordRep **)&param_1[1].refcount;
    uVar3 = (int)(param_1->refcount).count_ >> 1;
    uVar6 = (ulonglong)(int)uVar3;
    if (uVar6 != 1) {
      if ((int)uVar3 < 0) {
        dVar2 = (double)(uVar6 >> 1 | (ulonglong)(uVar3 & 1));
        dVar2 = dVar2 + dVar2;
      }
      else {
        dVar2 = (double)(longlong)uVar6;
      }
      dStack_10 = dStack_10 / dVar2;
    }
  }
  bVar1 = param_1->tag;
  if (bVar1 < 6) {
    uVar6 = param_1->length + 0x28;
  }
  else if (bVar1 < 0x43) {
    uVar6 = (ulonglong)(int)((uint)bVar1 * 8 + -0x10);
  }
  else if (bVar1 < 0xbb) {
    uVar6 = (ulonglong)(int)((bVar1 - 0x3a) * 0x40);
  }
  else {
    uVar6 = (ulonglong)(int)((bVar1 - 0xb8) * 0x1000);
  }
  adStackX_8[0] = adStackX_8[0] + (double)uVar6 * dStack_10;
LAB_1501c5c0e:
  lVar5 = 0;
  if ((__real_43e0000000000000 <= adStackX_8[0]) &&
     (adStackX_8[0] = adStackX_8[0] - __real_43e0000000000000,
     adStackX_8[0] < __real_43e0000000000000)) {
    lVar5 = -0x8000000000000000;
  }
  return (longlong)adStackX_8[0] + lVar5;
}

// GetEstimatedMemoryUsage @ 1501c6d70

/* unsigned __int64 __cdecl absl::lts_20240722::cord_internal::GetEstimatedMemoryUsage(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64) */

__uint64 __cdecl absl::lts_20240722::cord_internal::GetEstimatedMemoryUsage(CordRep *param_1)

{
  byte bVar1;
  __uint64 _Var2;
  CordRep *pCVar3;
  __uint64 local_res8 [4];
  
  _Var2 = 0;
  local_res8[0] = 0;
  if (param_1->tag == '\x02') {
    param_1 = (CordRep *)param_1[1].length;
    _Var2 = 0x20;
    local_res8[0] = 0x20;
    if (param_1 == (CordRep *)0x0) {
      return 0x20;
    }
  }
  bVar1 = param_1->tag;
  if (bVar1 < 5) {
    pCVar3 = param_1;
    if (bVar1 == 1) {
      pCVar3 = *(CordRep **)&param_1[1].refcount;
    }
    if (pCVar3->tag < 5) {
      if (bVar1 != 3) {
        return _Var2;
      }
      FUN_1501c51f0(param_1,local_res8);
      return local_res8[0];
    }
  }
  if (bVar1 == 1) {
    _Var2 = _Var2 + 0x20;
    param_1 = *(CordRep **)&param_1[1].refcount;
  }
  bVar1 = param_1->tag;
  if (bVar1 < 6) {
    return _Var2 + param_1->length + 0x28;
  }
  if (bVar1 < 0x43) {
    return _Var2 + (longlong)(int)((uint)bVar1 * 8 + -0x10);
  }
  if (0xba < bVar1) {
    return _Var2 + (longlong)(int)((bVar1 - 0xb8) * 0x1000);
  }
  return _Var2 + (longlong)(int)((bVar1 - 0x3a) * 0x40);
}

// GetMorePreciseMemoryUsage @ 1501c6e40

/* unsigned __int64 __cdecl absl::lts_20240722::cord_internal::GetMorePreciseMemoryUsage(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64) */

__uint64 __cdecl absl::lts_20240722::cord_internal::GetMorePreciseMemoryUsage(CordRep *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  __uint64 _Var4;
  CordRep *pCVar5;
  void *pvVar6;
  ulong64 uVar7;
  longlong lVar8;
  CordRep *pCStack_68;
  char cStack_60;
  __uint64 _Stack_58;
  undefined4 auStack_50 [2];
  undefined8 *puStack_48;
  undefined8 uStack_40;
  void *pvStack_38;
  undefined8 uStack_30;
  longlong lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  _Stack_58 = 0;
  auStack_50[0] = 0;
  puStack_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  puStack_48 = ::operator_new(0x18);
  *puStack_48 = puStack_48;
  puStack_48[1] = puStack_48;
  pvStack_38 = (void *)0x0;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_20 = 7;
  uStack_18 = 8;
  auStack_50[0] = 0x3f800000;
  std::
  _Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
  ::_Assign_grow((_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
                  *)&pvStack_38,0x10,puStack_48);
  if (param_1->tag == '\x02') {
    std::
    _Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
    ::emplace<absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64>
              ((_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
                *)auStack_50,&pCStack_68);
    if (cStack_60 != '\0') {
      _Stack_58 = _Stack_58 + 0x20;
    }
    param_1 = (CordRep *)param_1[1].length;
    if (param_1 == (CordRep *)0x0) goto LAB_1501c5943;
  }
  bVar1 = param_1->tag;
  if (bVar1 < 5) {
    pCVar5 = param_1;
    if (bVar1 == 1) {
      pCVar5 = *(CordRep **)&param_1[1].refcount;
    }
    if (pCVar5->tag < 5) {
      if (bVar1 == 3) {
        FUN_1501c52e0(param_1,&_Stack_58);
      }
      goto LAB_1501c5943;
    }
  }
  if (bVar1 == 1) {
    std::
    _Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
    ::emplace<absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64>
              ((_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
                *)auStack_50,&pCStack_68);
    if (cStack_60 != '\0') {
      _Stack_58 = _Stack_58 + 0x20;
    }
    param_1 = *(CordRep **)&param_1[1].refcount;
  }
  bVar1 = param_1->tag;
  if (bVar1 < 6) {
    lVar8 = param_1->length + 0x28;
  }
  else if (bVar1 < 0x43) {
    lVar8 = (longlong)(int)((uint)bVar1 * 8 + -0x10);
  }
  else if (bVar1 < 0xbb) {
    lVar8 = (longlong)(int)((bVar1 - 0x3a) * 0x40);
  }
  else {
    lVar8 = (longlong)(int)((bVar1 - 0xb8) * 0x1000);
  }
  std::
  _Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
  ::emplace<absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64>
            ((_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
              *)auStack_50,&pCStack_68);
  if (cStack_60 != '\0') {
    _Stack_58 = _Stack_58 + lVar8;
  }
LAB_1501c5943:
  _Var4 = _Stack_58;
  if (pvStack_38 != (void *)0x0) {
    uVar7 = lStack_28 - (longlong)pvStack_38 & 0xfffffffffffffff8;
    pvVar6 = pvStack_38;
    if (0xfff < uVar7) {
      uVar7 = uVar7 + 0x27;
      pvVar6 = *(void **)((longlong)pvStack_38 + -8);
      if (0x1f < (ulonglong)((longlong)pvStack_38 + (-8 - (longlong)pvVar6))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar6,uVar7);
    pvStack_38 = (void *)0x0;
    uStack_30 = 0;
    lStack_28 = 0;
  }
  *(undefined8 *)puStack_48[1] = 0;
  puVar3 = (undefined8 *)*puStack_48;
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    ::operator_delete(puVar3,0x18);
    puVar3 = puVar2;
  }
  ::operator_delete(puStack_48,0x18);
  return _Var4;
}

// _Alloc_sentinel_and_proxy @ 1501c6e50

/* private: void __cdecl std::list<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,class std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >::_Alloc_sentinel_and_proxy(void) __ptr64 */

void __thiscall
std::
list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::_Alloc_sentinel_and_proxy
          (list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
           *this)

{
  void *pvVar1;
  
  pvVar1 = ::operator_new(0x18);
  *(void **)pvVar1 = pvVar1;
  *(void **)((longlong)pvVar1 + 8) = pvVar1;
  *(void **)this = pvVar1;
  return;
}

// _Allocate @ 1501c6e80

/* public: void __cdecl std::_Alloc_construct_ptr<class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> > >::_Allocate(void)
   __ptr64 */

void __thiscall
std::
_Alloc_construct_ptr<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
::_Allocate(_Alloc_construct_ptr<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
            *this)

{
  void *pvVar1;
  
  *(undefined8 *)(this + 8) = 0;
  pvVar1 = ::operator_new(0x18);
  *(void **)(this + 8) = pvVar1;
  return;
}

// _Assign_grow @ 1501c6eb0

/* public: void __cdecl std::_Hash_vec<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> >
   >::_Assign_grow(unsigned __int64,class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0>) __ptr64 */

void __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
::_Assign_grow(_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
               *this,ulonglong param_1,undefined8 param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 local_res18;
  
  local_res18 = param_3;
  if (param_1 <=
      (ulonglong)
      ((longlong)
       *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
         **)(this + 8) -
       (longlong)
       *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
         **)this >> 3)) {
    fill<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>_>
              (*(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
                 **)this,
               *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
                 **)(this + 8),
               (_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>
                *)&local_res18);
    return;
  }
  if (0x1fffffffffffffff < param_1) {
LAB_1501c6fe5:
                    /* WARNING: Subroutine does not return */
    _Throw_bad_array_new_length();
  }
  uVar5 = param_1 * 8;
  if (uVar5 < 0x1000) {
    if (uVar5 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = ::operator_new(uVar5);
    }
  }
  else {
    if (uVar5 + 0x27 <= uVar5) goto LAB_1501c6fe5;
    pvVar2 = ::operator_new(uVar5 + 0x27);
    if (pvVar2 == (void *)0x0) goto LAB_1501c6fc2;
    puVar6 = (undefined8 *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
    puVar6[-1] = pvVar2;
  }
  pvVar2 = *(void **)this;
  lVar3 = *(longlong *)(this + 0x10) - (longlong)pvVar2 >> 3;
  if (lVar3 != 0) {
    uVar5 = lVar3 * 8;
    pvVar4 = pvVar2;
    if (0xfff < uVar5) {
      pvVar4 = *(void **)((longlong)pvVar2 + -8);
      uVar5 = uVar5 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4))) {
LAB_1501c6fc2:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar4,uVar5);
  }
  puVar1 = puVar6 + param_1;
  *(undefined8 **)this = puVar6;
  *(undefined8 **)(this + 8) = puVar1;
  *(undefined8 **)(this + 0x10) = puVar1;
  for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    *puVar6 = param_3;
  }
  return;
}

// _Bump_erased @ 1501c7000

/* public: void __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0>
   >::_Range_eraser::_Bump_erased(void) __ptr64 */

void __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::_Range_eraser::_Bump_erased(_Range_eraser *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = *puVar1;
  ::operator_delete(puVar1,0x18);
  *(longlong *)(*(longlong *)this + 8) = *(longlong *)(*(longlong *)this + 8) + -1;
  return;
}

// _Check_max_size @ 1501c7040

/* protected: void __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> >::_Check_max_size(void)const
   __ptr64 */

void __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::_Check_max_size(_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
                  *this)

{
  if (*(longlong *)(this + 0x10) != 0xaaaaaaaaaaaaaaa) {
    return;
  }
  _Xlength_error("unordered_map/set too long");
  return;
}

// _Check_rehash_required_1 @ 1501c7070

/* protected: bool __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0>
   >::_Check_rehash_required_1(void)const __ptr64 */

bool __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::_Check_rehash_required_1
          (_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
           *this)

{
  ulonglong uVar1;
  float fVar2;
  
  uVar1 = *(ulonglong *)(this + 0x38);
  if (-1 < (longlong)uVar1) {
    fVar2 = (float)(*(longlong *)(this + 0x10) + 1) / (float)(longlong)uVar1;
    return *(float *)this <= fVar2 && fVar2 != *(float *)this;
  }
  fVar2 = (float)(*(longlong *)(this + 0x10) + 1) / (float)uVar1;
  return *(float *)this <= fVar2 && fVar2 != *(float *)this;
}

// _Desired_grow_bucket_count @ 1501c70e0

/* protected: unsigned __int64 __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0>
   >::_Desired_grow_bucket_count(unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::_Desired_grow_bucket_count
          (_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
           *this,__uint64 param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  
  uVar1 = *(ulonglong *)(this + 0x38);
  fVar4 = ceilf((float)param_1 / *(float *)this);
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

// _Do_hash @ 1501c7190

/* public: static unsigned __int64 __cdecl std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>::_Do_hash(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64) */

__uint64 __cdecl
std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>::_Do_hash(CordRep **param_1)

{
  return ((((ulonglong)*(byte *)((longlong)param_1 + 5) ^
           ((((((ulonglong)*(byte *)param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_1 + 1)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_1 + 4)) * 0x100000001b3) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_1 + 6)) * 0x100000001b3 ^
         (ulonglong)*(byte *)((longlong)param_1 + 7)) * 0x100000001b3;
}

// _Extract @ 1501c7210

/* public: static struct absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64
   __cdecl std::_In_place_key_extract_set<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>::_Extract(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64) */

CordRep ** __cdecl
std::
_In_place_key_extract_set<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,absl::lts_20240722::cord_internal::CordRep_const*___ptr64>
::_Extract(CordRep **param_1)

{
  return param_1;
}

// _Forced_rehash @ 1501c7220

/* protected: void __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> >::_Forced_rehash(unsigned
   __int64) __ptr64 */

void __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::_Forced_rehash(_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
                 *this,__uint64 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  for (lVar9 = 0x3f; 0xfffffffffffffffU >> lVar9 == 0; lVar9 = lVar9 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar9 & 0x3f)) < param_1) {
    _Xlength_error("invalid hash bucket count");
    return;
  }
  plVar1 = *(longlong **)(this + 8);
  uVar8 = param_1 - 1 | 1;
  lVar9 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  lVar9 = 1L << ((char)lVar9 + 1U & 0x3f);
  _Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
  ::_Assign_grow((_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
                  *)(this + 0x18),lVar9 * 2,plVar1);
  *(longlong *)(this + 0x38) = lVar9;
  *(longlong *)(this + 0x30) = lVar9 + -1;
  plVar7 = (longlong *)**(undefined8 **)(this + 8);
joined_r0x0001501c7292:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar1) {
          return;
        }
        plVar2 = (longlong *)*plVar7;
        puVar10 = (undefined8 *)
                  ((*(ulonglong *)(this + 0x30) &
                   (((((((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar7 + 0x14)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar7 + 0x15)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar7 + 0x16)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar7 + 0x17)) * 0x100000001b3) * 0x10 +
                  *(longlong *)(this + 0x18));
        if ((longlong *)*puVar10 != plVar1) break;
        *puVar10 = plVar7;
        puVar10[1] = plVar7;
        plVar7 = plVar2;
      }
      plVar3 = (longlong *)puVar10[1];
      if (plVar7[2] != plVar3[2]) break;
      plVar3 = (longlong *)*plVar3;
      if (plVar3 != plVar7) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
      }
      puVar10[1] = plVar7;
      plVar7 = plVar2;
    }
    do {
      if ((longlong *)*puVar10 == plVar3) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        *puVar6 = plVar7;
        plVar3[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
        *puVar10 = plVar7;
        plVar7 = plVar2;
        goto joined_r0x0001501c7292;
      }
      plVar3 = (longlong *)plVar3[1];
    } while (plVar7[2] != plVar3[2]);
    lVar9 = *plVar3;
    plVar3 = (longlong *)plVar7[1];
    *plVar3 = (longlong)plVar2;
    plVar4 = (longlong *)plVar2[1];
    *plVar4 = lVar9;
    puVar10 = *(undefined8 **)(lVar9 + 8);
    *puVar10 = plVar7;
    *(longlong **)(lVar9 + 8) = plVar4;
    plVar2[1] = (longlong)plVar3;
    plVar7[1] = (longlong)puVar10;
    plVar7 = plVar2;
  } while( true );
}

// _Get_first @ 1501c7420

/* public: struct std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   const & __ptr64 __cdecl std::_Compressed_pair<struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,float,1>::_Get_first(void)const
   __ptr64 */

equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> * __thiscall
std::
_Compressed_pair<std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,float,1>::
_Get_first(_Compressed_pair<std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,float,1>
           *this)

{
  return (equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> *)this;
}

// _Get_first @ 1501c7430

/* public: struct std::hash<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> const
   & __ptr64 __cdecl std::_Compressed_pair<struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,class std::_Compressed_pair<struct
   std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64>,float,1>,1>::_Get_first(void)const __ptr64 */

hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> * __thiscall
std::
_Compressed_pair<std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::_Compressed_pair<std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,float,1>,1>
::_Get_first(_Compressed_pair<std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::_Compressed_pair<std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,float,1>,1>
             *this)

{
  return (hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64> *)this;
}

// _Get_first @ 1501c7440

/* public: class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> > & __ptr64 __cdecl
   std::_Compressed_pair<class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> >,class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,1>::_Get_first(void) __ptr64 */

allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
* __thiscall
std::
_Compressed_pair<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>,std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,1>
::_Get_first(_Compressed_pair<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>,std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,1>
             *this)

{
  return (allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
          *)this;
}

// _Get_first @ 1501c7450

/* public: class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> > const & __ptr64
   __cdecl std::_Compressed_pair<class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> >,class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,1>::_Get_first(void)const __ptr64 */

allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
* __thiscall
std::
_Compressed_pair<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>,std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,1>
::_Get_first(_Compressed_pair<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>,std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,1>
             *this)

{
  return (allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
          *)this;
}

// _Get_first @ 1501c7460

/* public: class std::allocator<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> > & __ptr64 __cdecl std::_Compressed_pair<class
   std::allocator<class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> >,class std::_Vector_val<struct std::_Simple_types<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> >
   >,1>::_Get_first(void) __ptr64 */

allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>
* __thiscall
std::
_Compressed_pair<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>,std::_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>,1>
::_Get_first(_Compressed_pair<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>,std::_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>,1>
             *this)

{
  return (allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>
          *)this;
}

// _Get_first @ 1501c7470

/* public: class std::allocator<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> > const & __ptr64 __cdecl
   std::_Compressed_pair<class std::allocator<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> >,class std::_Vector_val<struct
   std::_Simple_types<class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> > >,1>::_Get_first(void)const __ptr64 */

allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>
* __thiscall
std::
_Compressed_pair<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>,std::_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>,1>
::_Get_first(_Compressed_pair<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>,std::_Vector_val<std::_Simple_types<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>,1>
             *this)

{
  return (allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>
          *)this;
}

// _Get_max_bucket_size @ 1501c7480

/* public: float & __ptr64 __cdecl std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >::_Get_max_bucket_size(void) __ptr64
    */

float * __thiscall
std::
_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::_Get_max_bucket_size
          (_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
           *this)

{
  return (float *)this;
}

// _Get_max_bucket_size @ 1501c7490

/* public: float const & __ptr64 __cdecl std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >::_Get_max_bucket_size(void)const
   __ptr64 */

float * __thiscall
std::
_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::_Get_max_bucket_size
          (_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
           *this)

{
  return (float *)this;
}

// _Getal @ 1501c74a0

/* private: class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> > & __ptr64 __cdecl
   std::list<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> >::_Getal(void)
   __ptr64 */

allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
* __thiscall
std::
list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::_Getal(list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
         *this)

{
  return (allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
          *)this;
}

// _Getal @ 1501c74b0

/* private: class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> > const & __ptr64
   __cdecl std::list<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >::_Getal(void)const __ptr64 */

allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
* __thiscall
std::
list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::_Getal(list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
         *this)

{
  return (allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
          *)this;
}

// _Insert_new_node_before @ 1501c74c0

/* protected: struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,void * __ptr64> * __ptr64 __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0>
   >::_Insert_new_node_before(unsigned __int64,struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64 const,struct
   std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64>
   * __ptr64 const) __ptr64 */

_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> * __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::_Insert_new_node_before
          (_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
           *this,__uint64 param_1,
          _List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
          *param_2,_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                   *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + 1;
  *(_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> **)
   param_3 = param_2;
  *(undefined8 **)(param_3 + 8) = puVar1;
  *puVar1 = param_3;
  *(_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> **)
   (param_2 + 8) = param_3;
  plVar2 = (longlong *)((param_1 & *(ulonglong *)(this + 0x30)) * 0x10 + *(longlong *)(this + 0x18))
  ;
  if ((_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *)
      *plVar2 ==
      *(_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
        **)(this + 8)) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    return (_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *)
           param_3;
  }
  if ((_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *)
      *plVar2 == param_2) {
    *plVar2 = (longlong)param_3;
    return (_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *)
           param_3;
  }
  if ((undefined8 *)plVar2[1] == puVar1) {
    plVar2[1] = (longlong)param_3;
  }
  return (_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *)
         param_3;
}

// _Kfn @ 1501c7520

/* public: static struct absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64
   __cdecl std::_Uset_traits<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,class
   std::_Uhash_compare<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct
   std::hash<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct
   std::equal_to<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0>::_Kfn(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64) */

CordRep ** __cdecl
std::
_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>
::_Kfn(CordRep **param_1)

{
  return param_1;
}

// _Make_iter @ 1501c7530

/* public: class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> > > __cdecl std::list<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >::_Make_iter(struct
   std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64>
   * __ptr64)const __ptr64 */

_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> * __thiscall
std::
list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::_Make_iter(list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
             *this,_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                   *param_1)

{
  undefined8 in_R8;
  
  *(undefined8 *)param_1 = in_R8;
  return param_1;
}

// _Max_bucket_size @ 1501c7540

/* protected: float & __ptr64 __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> >::_Max_bucket_size(void) __ptr64
    */

float * __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::_Max_bucket_size(_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
                   *this)

{
  return (float *)this;
}

// _Max_bucket_size @ 1501c7550

/* protected: float const & __ptr64 __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> >::_Max_bucket_size(void)const
   __ptr64 */

float * __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::_Max_bucket_size(_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
                   *this)

{
  return (float *)this;
}

// _Min_load_factor_buckets @ 1501c7560

/* protected: unsigned __int64 __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0>
   >::_Min_load_factor_buckets(unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::_Min_load_factor_buckets
          (_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
           *this,__uint64 param_1)

{
  longlong lVar1;
  float fVar2;
  
  fVar2 = ceilf((float)param_1 / *(float *)this);
  lVar1 = 0;
  if ((__real_5f000000 <= fVar2) && (fVar2 = fVar2 - __real_5f000000, fVar2 < __real_5f000000)) {
    lVar1 = -0x8000000000000000;
  }
  return (longlong)fVar2 + lVar1;
}

// _Orphan_non_end @ 1501c75d0

/* public: void __cdecl std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >::_Orphan_non_end(void) __ptr64 */

void __thiscall
std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::_Orphan_non_end(_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
                  *this)

{
  return;
}

// _Rehash_for_1 @ 1501c75e0

/* protected: void __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> >::_Rehash_for_1(void) __ptr64 */

void __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::_Rehash_for_1(_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
                *this)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = *(ulonglong *)(this + 0x38);
  fVar5 = ceilf((float)(*(longlong *)(this + 0x10) + 1) / *(float *)this);
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

// _Release @ 1501c76a0

/* public: struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,void * __ptr64> * __ptr64 __cdecl std::_Alloc_construct_ptr<class std::allocator<struct
   std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64>
   > >::_Release(void) __ptr64 */

_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> * __thiscall
std::
_Alloc_construct_ptr<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
::_Release(_Alloc_construct_ptr<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
           *this)

{
  _List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *p_Var1;
  
  p_Var1 = *(_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> **)
            (this + 8);
  *(undefined8 *)(this + 8) = 0;
  return p_Var1;
}

// _Release @ 1501c76c0

/* public: class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> * __ptr64 __cdecl std::_Uninitialized_backout<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> *
   __ptr64>::_Release(void) __ptr64 */

_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
* __thiscall
std::
_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64>
::_Release(_Uninitialized_backout<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64>
           *this)

{
  *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
    **)this = *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
                **)(this + 8);
  return *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
           **)(this + 8);
}

// _Tidy @ 1501c76d0

/* public: void __cdecl std::_Hash_vec<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> >
   >::_Tidy(void) __ptr64 */

void __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
::_Tidy(_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
        *this)

{
  void *pvVar1;
  void *pvVar2;
  ulong64 uVar3;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    uVar3 = *(longlong *)(this + 0x10) - (longlong)pvVar1 & 0xfffffffffffffff8;
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

// _Tidy @ 1501c7740

/* private: void __cdecl std::list<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,class std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >::_Tidy(void) __ptr64 */

void __thiscall
std::
list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::_Tidy(list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
        *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)this;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    ::operator_delete(puVar1,0x18);
    puVar1 = puVar2;
  }
  ::operator_delete(*(void **)this,0x18);
  return;
}

// _Unchecked_begin @ 1501c77b0

/* public: class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> >::_Unchecked_begin(void) __ptr64
    */

void __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::_Unchecked_begin(_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
                   *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = **(undefined8 **)(this + 8);
  return;
}

// _Unchecked_begin @ 1501c77d0

/* public: class std::_List_unchecked_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> > >
   __cdecl std::list<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >::_Unchecked_begin(void) __ptr64 */

void __thiscall
std::
list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::_Unchecked_begin(list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
                   *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = **(undefined8 **)this;
  return;
}

// _Unchecked_end @ 1501c77f0

/* public: class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> >::_Unchecked_end(void) __ptr64 */

void __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::_Unchecked_end(_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
                 *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)(this + 8);
  return;
}

// _Unchecked_end @ 1501c7810

/* public: class std::_List_unchecked_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> > >
   __cdecl std::list<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,class
   std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >::_Unchecked_end(void) __ptr64 */

void __thiscall
std::
list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::_Unchecked_end(list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
                 *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)this;
  return;
}

// _Unchecked_erase @ 1501c7820

/* private: struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,void * __ptr64> * __ptr64 __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> >::_Unchecked_erase(struct
   std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64>
   * __ptr64,struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,void * __ptr64> * __ptr64 const) __ptr64 */

_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> * __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::_Unchecked_erase(_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
                   *this,_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                         *param_1,
                  _List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                  *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  _List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *p_Var4
  ;
  longlong *plVar5;
  undefined8 *puVar6;
  _List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *p_Var7
  ;
  _List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *p_Var8
  ;
  _List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *p_Var9
  ;
  
  if (param_1 == param_2) {
    return (_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *)
           param_2;
  }
  lVar1 = *(longlong *)(this + 0x18);
  puVar2 = *(undefined8 **)(this + 8);
  puVar3 = *(undefined8 **)(param_1 + 8);
  plVar5 = (longlong *)
           ((*(ulonglong *)(this + 0x30) &
            (((((((((ulonglong)(byte)param_1[0x10] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)(byte)param_1[0x11]) * 0x100000001b3 ^ (ulonglong)(byte)param_1[0x12])
                 * 0x100000001b3 ^ (ulonglong)(byte)param_1[0x13]) * 0x100000001b3 ^
               (ulonglong)(byte)param_1[0x14]) * 0x100000001b3 ^ (ulonglong)(byte)param_1[0x15]) *
              0x100000001b3 ^ (ulonglong)(byte)param_1[0x16]) * 0x100000001b3 ^
            (ulonglong)(byte)param_1[0x17]) * 0x100000001b3) * 0x10 + lVar1);
  p_Var4 = (_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
            *)*plVar5;
  p_Var8 = (_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
            *)plVar5[1];
  p_Var7 = param_1;
  do {
    p_Var9 = *(_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
               **)p_Var7;
    ::operator_delete(p_Var7,0x18);
    *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + -1;
    if (p_Var7 == p_Var8) {
      puVar6 = puVar3;
      if (p_Var4 == param_1) {
        *plVar5 = (longlong)puVar2;
        puVar6 = puVar2;
      }
      plVar5[1] = (longlong)puVar6;
      while (p_Var9 != param_2) {
        plVar5 = (longlong *)
                 ((*(ulonglong *)(this + 0x30) &
                  (((((((((ulonglong)(byte)p_Var9[0x10] ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                        (ulonglong)(byte)p_Var9[0x11]) * 0x100000001b3 ^
                       (ulonglong)(byte)p_Var9[0x12]) * 0x100000001b3 ^
                      (ulonglong)(byte)p_Var9[0x13]) * 0x100000001b3 ^ (ulonglong)(byte)p_Var9[0x14]
                     ) * 0x100000001b3 ^ (ulonglong)(byte)p_Var9[0x15]) * 0x100000001b3 ^
                   (ulonglong)(byte)p_Var9[0x16]) * 0x100000001b3 ^ (ulonglong)(byte)p_Var9[0x17]) *
                  0x100000001b3) * 0x10 + lVar1);
        p_Var4 = (_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                  *)plVar5[1];
        p_Var8 = p_Var9;
        while( true ) {
          p_Var9 = *(_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                     **)p_Var8;
          ::operator_delete(p_Var8,0x18);
          *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + -1;
          if (p_Var8 == p_Var4) break;
          p_Var8 = p_Var9;
          if (p_Var9 == param_2) {
            *plVar5 = (longlong)p_Var9;
            goto LAB_1501c7a04;
          }
        }
        *plVar5 = (longlong)puVar2;
        plVar5[1] = (longlong)puVar2;
      }
      goto LAB_1501c7a04;
    }
    p_Var7 = p_Var9;
  } while (p_Var9 != param_2);
  if (p_Var4 == param_1) {
    *plVar5 = (longlong)p_Var9;
  }
LAB_1501c7a04:
  *puVar3 = p_Var9;
  *(undefined8 **)(p_Var9 + 8) = puVar3;
  return (_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *)
         param_2;
}

// _Unchecked_splice @ 1501c7a50

/* public: static struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,void * __ptr64> * __ptr64 __cdecl std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >::_Unchecked_splice(struct
   std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64>
   * __ptr64 const,struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,void * __ptr64> * __ptr64 const,struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> * __ptr64 const) */

_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> * __cdecl
std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::_Unchecked_splice(_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                    *param_1,
                   _List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                   *param_2,_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                            *param_3)

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
  return (_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *)
         param_3;
}

// allocate @ 1501c7a80

/* public: struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,void * __ptr64> * __ptr64 __cdecl std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> >::allocate(unsigned
   __int64) __ptr64 */

_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> * __thiscall
std::
allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
::allocate(allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
           *this,__uint64 param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  _List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *p_Var3;
  
  if (param_1 < 0xaaaaaaaaaaaaaab) {
    uVar1 = param_1 * 0x18;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        p_Var3 = ::operator_new(uVar1);
        return p_Var3;
      }
      return (_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *)
             0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pvVar2 = ::operator_new(uVar1 + 0x27);
      if (pvVar2 != (void *)0x0) {
        p_Var3 = (_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                  *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
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

// allocate @ 1501c7b00

/* public: class std::_List_unchecked_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >,struct std::_Iterator_base0> * __ptr64 __cdecl std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0>
   >::allocate(unsigned __int64) __ptr64 */

_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
* __thiscall
std::
allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>
::allocate(allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>
           *this,__uint64 param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
  *p_Var3;
  
  if (param_1 < 0x2000000000000000) {
    uVar1 = param_1 * 8;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        p_Var3 = ::operator_new(uVar1);
        return p_Var3;
      }
      return (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
              *)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pvVar2 = ::operator_new(uVar1 + 0x27);
      if (pvVar2 != (void *)0x0) {
        p_Var3 = (_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
                  *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
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

// begin @ 1501c7b80

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 const * __ptr64 __cdecl
   absl::lts_20240722::Span<struct absl::lts_20240722::cord_internal::CordRep * __ptr64
   const>::begin(void)const __ptr64 */

CordRep ** __thiscall
absl::lts_20240722::Span<absl::lts_20240722::cord_internal::CordRep*___ptr64_const>::begin
          (Span<absl::lts_20240722::cord_internal::CordRep*___ptr64_const> *this)

{
  return *(CordRep ***)this;
}

// bucket @ 1501c7b90

/* public: unsigned __int64 __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> >::bucket(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64)const __ptr64 */

__uint64 __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::bucket(_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
         *this,CordRep **param_1)

{
  return *(ulonglong *)(this + 0x30) &
         (((((((((ulonglong)*(byte *)param_1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)param_1 + 1)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_1 + 4)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_1 + 5)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_1 + 6)) * 0x100000001b3 ^
         (ulonglong)*(byte *)((longlong)param_1 + 7)) * 0x100000001b3;
}

// bucket_count @ 1501c7c10

/* public: unsigned __int64 __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> >::bucket_count(void)const __ptr64
    */

__uint64 __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::bucket_count(_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
               *this)

{
  return *(__uint64 *)(this + 0x38);
}

// capacity @ 1501c7c20

/* public: unsigned __int64 __cdecl std::_Hash_vec<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> >
   >::capacity(void)const __ptr64 */

__uint64 __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
::capacity(_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
           *this)

{
  return *(longlong *)(this + 0x10) - *(longlong *)this >> 3;
}

// clear @ 1501c7c40

/* public: void __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> >::clear(void) __ptr64 */

void __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::clear(_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
        *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  if (*(ulonglong *)(this + 0x10) != 0) {
    if (*(ulonglong *)(this + 0x10) < *(ulonglong *)(this + 0x38) >> 3) {
      _Unchecked_erase(this,*(_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                              **)*(_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                                   **)(this + 8),
                       *(_List_node<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                         **)(this + 8));
      return;
    }
    puVar1 = *(undefined8 **)(this + 8);
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      ::operator_delete(puVar1,0x18);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(this + 8) = *(undefined8 *)(this + 8);
    *(longlong *)(*(longlong *)(this + 8) + 8) = *(longlong *)(this + 8);
    *(undefined8 *)(this + 0x10) = 0;
    local_res8 = *(undefined8 *)(this + 8);
    fill<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>*___ptr64,std::_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>_>
              (*(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
                 **)(this + 0x18),
               *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
                 **)(this + 0x20),
               (_List_unchecked_const_iterator<class_std::_List_val<struct_std::_List_simple_types<struct_absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,struct_std::_Iterator_base0>
                *)&local_res8);
  }
  return;
}

// clear @ 1501c7d00

/* public: void __cdecl std::list<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,class std::allocator<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64>
   >::clear(void) __ptr64 */

void __thiscall
std::
list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::clear(list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
        *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)this;
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    ::operator_delete(puVar1,0x18);
    puVar1 = puVar2;
  }
  *(undefined8 *)*(undefined8 *)this = *(undefined8 *)this;
  *(longlong *)(*(longlong *)this + 8) = *(longlong *)this;
  *(undefined8 *)(this + 8) = 0;
  return;
}

// data @ 1501c7d70

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 const * __ptr64 __cdecl
   absl::lts_20240722::Span<struct absl::lts_20240722::cord_internal::CordRep * __ptr64
   const>::data(void)const __ptr64 */

CordRep ** __thiscall
absl::lts_20240722::Span<absl::lts_20240722::cord_internal::CordRep*___ptr64_const>::data
          (Span<absl::lts_20240722::cord_internal::CordRep*___ptr64_const> *this)

{
  return *(CordRep ***)this;
}

// deallocate @ 1501c7d80

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<struct
   std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64>
   > >::deallocate(class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> > & __ptr64,struct
   std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64>
   * __ptr64 const,unsigned __int64) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
::deallocate(allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
             *param_1,
            _List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
            *param_2,__uint64 param_3)

{
  _List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *p_Var1;
  ulong64 uVar2;
  
  uVar2 = param_3 * 0x18;
  p_Var1 = param_2;
  if (0xfff < uVar2) {
    p_Var1 = *(_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
               **)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if ((_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *)0x1f
        < param_2 + (-8 - (longlong)p_Var1)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(p_Var1,uVar2);
  return;
}

// deallocate @ 1501c7dd0

/* public: void __cdecl std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> >::deallocate(struct
   std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64>
   * __ptr64 const,unsigned __int64) __ptr64 */

void __thiscall
std::
allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
::deallocate(allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
             *this,_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
                   *param_1,__uint64 param_2)

{
  _List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *p_Var1;
  ulong64 uVar2;
  
  uVar2 = param_2 * 0x18;
  p_Var1 = param_1;
  if (0xfff < uVar2) {
    p_Var1 = *(_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>
               **)(param_1 + -8);
    uVar2 = uVar2 + 0x27;
    if ((_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64> *)0x1f
        < param_1 + (-8 - (longlong)p_Var1)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(p_Var1,uVar2);
  return;
}

// deallocate @ 1501c7e20

/* public: void __cdecl std::allocator<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> >::deallocate(class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> *
   __ptr64 const,unsigned __int64) __ptr64 */

void __thiscall
std::
allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>
::deallocate(allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>
             *this,_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
                   *param_1,__uint64 param_2)

{
  _List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
  *p_Var1;
  ulonglong uVar2;
  
  uVar2 = param_2 * 8;
  p_Var1 = param_1;
  if (0xfff < uVar2) {
    p_Var1 = *(_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
               **)(param_1 + -8);
    uVar2 = uVar2 + 0x27;
    if ((_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>
         *)0x1f < param_1 + (-8 - (longlong)p_Var1)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(p_Var1,uVar2);
  return;
}

// end @ 1501c7e70

/* public: struct absl::lts_20240722::cord_internal::CordRep * __ptr64 const * __ptr64 __cdecl
   absl::lts_20240722::Span<struct absl::lts_20240722::cord_internal::CordRep * __ptr64
   const>::end(void)const __ptr64 */

CordRep ** __thiscall
absl::lts_20240722::Span<absl::lts_20240722::cord_internal::CordRep*___ptr64_const>::end
          (Span<absl::lts_20240722::cord_internal::CordRep*___ptr64_const> *this)

{
  return (CordRep **)(*(longlong *)this + *(longlong *)(this + 8) * 8);
}

// insert @ 1501c7e90

/* public: struct std::pair<class std::_List_const_iterator<class std::_List_val<struct
   std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep const * __ptr64> >
   >,bool> __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> >::insert(struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64 const & __ptr64) __ptr64 */

CordRep ** __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::insert(_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
         *this,CordRep **param_1)

{
  emplace<absl::lts_20240722::cord_internal::CordRep_const*___ptr64_const&___ptr64>(this,param_1);
  return param_1;
}

// max_load_factor @ 1501c7eb0

/* public: float __cdecl std::_Hash<class std::_Uset_traits<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,class std::_Uhash_compare<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,struct std::hash<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,struct std::equal_to<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,class std::allocator<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64>,0> >::max_load_factor(void)const
   __ptr64 */

float __thiscall
std::
_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
::max_load_factor(_Hash<std::_Uset_traits<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::_Uhash_compare<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::hash<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,std::equal_to<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>,0>_>
                  *this)

{
  return *(float *)this;
}

// max_size @ 1501c7ec0

/* public: static unsigned __int64 __cdecl std::_Default_allocator_traits<class
   std::allocator<struct std::_List_node<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64,void * __ptr64> > >::max_size(class std::allocator<struct std::_List_node<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64,void * __ptr64> > const & __ptr64) */

__uint64 __cdecl
std::
_Default_allocator_traits<std::allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>_>
::max_size(allocator<std::_List_node<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,void*___ptr64>_>
           *param_1)

{
  return 0xaaaaaaaaaaaaaaa;
}

// max_size @ 1501c7ee0

/* public: static unsigned __int64 __cdecl std::_Default_allocator_traits<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> >
   >::max_size(class std::allocator<class std::_List_unchecked_const_iterator<class
   std::_List_val<struct std::_List_simple_types<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64> >,struct std::_Iterator_base0> > const & __ptr64) */

__uint64 __cdecl
std::
_Default_allocator_traits<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
::max_size(allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>
           *param_1)

{
  return 0x1fffffffffffffff;
}

// max_size @ 1501c7f00

/* public: unsigned __int64 __cdecl std::_Hash_vec<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> >
   >::max_size(void)const __ptr64 */

__uint64 __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
::max_size(_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
           *this)

{
  return 0x1fffffffffffffff;
}

// max_size @ 1501c7f20

/* public: unsigned __int64 __cdecl std::list<struct absl::lts_20240722::cord_internal::CordRep
   const * __ptr64,class std::allocator<struct absl::lts_20240722::cord_internal::CordRep const *
   __ptr64> >::max_size(void)const __ptr64 */

__uint64 __thiscall
std::
list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
::max_size(list<absl::lts_20240722::cord_internal::CordRep_const*___ptr64,std::allocator<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>
           *this)

{
  return 0xaaaaaaaaaaaaaaa;
}

// size @ 1501c7f40

/* public: unsigned __int64 __cdecl absl::lts_20240722::Span<struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64 const>::size(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::Span<absl::lts_20240722::cord_internal::CordRep*___ptr64_const>::size
          (Span<absl::lts_20240722::cord_internal::CordRep*___ptr64_const> *this)

{
  return *(__uint64 *)(this + 8);
}

// size @ 1501c7f50

/* public: unsigned __int64 __cdecl std::_Hash_vec<class std::allocator<class
   std::_List_unchecked_const_iterator<class std::_List_val<struct std::_List_simple_types<struct
   absl::lts_20240722::cord_internal::CordRep const * __ptr64> >,struct std::_Iterator_base0> >
   >::size(void)const __ptr64 */

__uint64 __thiscall
std::
_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
::size(_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<absl::lts_20240722::cord_internal::CordRep_const*___ptr64>_>,std::_Iterator_base0>_>_>
       *this)

{
  return *(longlong *)(this + 8) - *(longlong *)this >> 3;
}

// size @ 1501c7f70

/* public: unsigned __int64 __cdecl absl::lts_20240722::cord_internal::CordRepBtree::size(void)const
   __ptr64 */

__uint64 __thiscall absl::lts_20240722::cord_internal::CordRepBtree::size(CordRepBtree *this)

{
  return (ulonglong)*(byte *)((longlong)&this->_padding_ + 7) -
         (ulonglong)*(byte *)((longlong)&this->_padding_ + 6);
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 463

// StatusOr<google::protobuf::FeatureResolver><absl::lts_20240722::Status_const_,0> @ 14fb5e2d0

/* public: __cdecl absl::lts_20240722::StatusOr<class
   google::protobuf::FeatureResolver>::StatusOr<class google::protobuf::FeatureResolver><class
   absl::lts_20240722::Status const ,0>(class absl::lts_20240722::Status const && __ptr64) __ptr64
    */

StatusOr<google::protobuf::FeatureResolver> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::FeatureResolver>::
StatusOr<google::protobuf::FeatureResolver><absl::lts_20240722::Status_const_,0>
          (StatusOr<google::protobuf::FeatureResolver> *this,Status *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1->rep_;
  *(int **)this = piVar1;
  if (((ulonglong)piVar1 & 1) == 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (*(longlong *)this == 1) {
    internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// StatusOr<google::protobuf::FeatureSet><absl::lts_20240722::Status_const_,0> @ 14fb5e310

/* public: __cdecl absl::lts_20240722::StatusOr<class google::protobuf::FeatureSet>::StatusOr<class
   google::protobuf::FeatureSet><class absl::lts_20240722::Status const ,0>(class
   absl::lts_20240722::Status const && __ptr64) __ptr64 */

StatusOr<google::protobuf::FeatureSet> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::FeatureSet>::
StatusOr<google::protobuf::FeatureSet><absl::lts_20240722::Status_const_,0>
          (StatusOr<google::protobuf::FeatureSet> *this,Status *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1->rep_;
  *(int **)this = piVar1;
  if (((ulonglong)piVar1 & 1) == 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (*(longlong *)this == 1) {
    internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// StatusOr<google::protobuf::FeatureSetDefaults><absl::lts_20240722::Status_const_,0> @ 14fb5e350

/* public: __cdecl absl::lts_20240722::StatusOr<class
   google::protobuf::FeatureSetDefaults>::StatusOr<class google::protobuf::FeatureSetDefaults><class
   absl::lts_20240722::Status const ,0>(class absl::lts_20240722::Status const && __ptr64) __ptr64
    */

StatusOr<google::protobuf::FeatureSetDefaults> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::FeatureSetDefaults>::
StatusOr<google::protobuf::FeatureSetDefaults><absl::lts_20240722::Status_const_,0>
          (StatusOr<google::protobuf::FeatureSetDefaults> *this,Status *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1->rep_;
  *(int **)this = piVar1;
  if (((ulonglong)piVar1 & 1) == 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (*(longlong *)this == 1) {
    internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// StatusOrData<google::protobuf::FeatureResolver><absl::lts_20240722::Status_const_,0> @ 14fb5e390

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::FeatureResolver>::StatusOrData<class google::protobuf::FeatureResolver><class
   absl::lts_20240722::Status const ,0>(class absl::lts_20240722::Status const && __ptr64) __ptr64
    */

StatusOrData<google::protobuf::FeatureResolver> * __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::FeatureResolver>::
StatusOrData<google::protobuf::FeatureResolver><absl::lts_20240722::Status_const_,0>
          (StatusOrData<google::protobuf::FeatureResolver> *this,Status *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1->rep_;
  *(int **)this = piVar1;
  if (((ulonglong)piVar1 & 1) == 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (*(longlong *)this == 1) {
    Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// StatusOrData<google::protobuf::FeatureSet><absl::lts_20240722::Status_const_,0> @ 14fb5e3d0

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::FeatureSet>::StatusOrData<class google::protobuf::FeatureSet><class
   absl::lts_20240722::Status const ,0>(class absl::lts_20240722::Status const && __ptr64) __ptr64
    */

StatusOrData<google::protobuf::FeatureSet> * __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::FeatureSet>::
StatusOrData<google::protobuf::FeatureSet><absl::lts_20240722::Status_const_,0>
          (StatusOrData<google::protobuf::FeatureSet> *this,Status *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1->rep_;
  *(int **)this = piVar1;
  if (((ulonglong)piVar1 & 1) == 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (*(longlong *)this == 1) {
    Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// StatusOrData<google::protobuf::FeatureSetDefaults><absl::lts_20240722::Status_const_,0> @ 14fb5e410

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::FeatureSetDefaults>::StatusOrData<class
   google::protobuf::FeatureSetDefaults><class absl::lts_20240722::Status const ,0>(class
   absl::lts_20240722::Status const && __ptr64) __ptr64 */

StatusOrData<google::protobuf::FeatureSetDefaults> * __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::FeatureSetDefaults>::
StatusOrData<google::protobuf::FeatureSetDefaults><absl::lts_20240722::Status_const_,0>
          (StatusOrData<google::protobuf::FeatureSetDefaults> *this,Status *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1->rep_;
  *(int **)this = piVar1;
  if (((ulonglong)piVar1 & 1) == 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (*(longlong *)this == 1) {
    Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// _Compressed_pair<std::default_delete<google::protobuf::Message>,google::protobuf::Message*___ptr64,1><> @ 14fb5e450

/* public: __cdecl std::_Compressed_pair<struct std::default_delete<class
   google::protobuf::Message>,class google::protobuf::Message * __ptr64,1>::_Compressed_pair<struct
   std::default_delete<class google::protobuf::Message>,class google::protobuf::Message *
   __ptr64,1><>(struct std::_Zero_then_variadic_args_t) __ptr64 */

_Compressed_pair<std::default_delete<google::protobuf::Message>,google::protobuf::Message*___ptr64,1>
* __thiscall
std::
_Compressed_pair<std::default_delete<google::protobuf::Message>,google::protobuf::Message*___ptr64,1>
::
_Compressed_pair<std::default_delete<google::protobuf::Message>,google::protobuf::Message*___ptr64,1><>
          (_Compressed_pair<std::default_delete<google::protobuf::Message>,google::protobuf::Message*___ptr64,1>
           *this,_Zero_then_variadic_args_t param_1)

{
  *(undefined8 *)this = 0;
  return this;
}

// _Compressed_pair<std::default_delete<google::protobuf::DynamicMessageFactory>,google::protobuf::DynamicMessageFactory*___ptr64,1><google::protobuf::DynamicMessageFactory*___ptr64&___ptr64> @ 14fb5e470

/* public: __cdecl std::_Compressed_pair<struct std::default_delete<class
   google::protobuf::DynamicMessageFactory>,class google::protobuf::DynamicMessageFactory *
   __ptr64,1>::_Compressed_pair<struct std::default_delete<class
   google::protobuf::DynamicMessageFactory>,class google::protobuf::DynamicMessageFactory *
   __ptr64,1><class google::protobuf::DynamicMessageFactory * __ptr64 & __ptr64>(struct
   std::_Zero_then_variadic_args_t,class google::protobuf::DynamicMessageFactory * __ptr64 &
   __ptr64) __ptr64 */

_Compressed_pair<std::default_delete<google::protobuf::DynamicMessageFactory>,google::protobuf::DynamicMessageFactory*___ptr64,1>
* __thiscall
std::
_Compressed_pair<std::default_delete<google::protobuf::DynamicMessageFactory>,google::protobuf::DynamicMessageFactory*___ptr64,1>
::
_Compressed_pair<std::default_delete<google::protobuf::DynamicMessageFactory>,google::protobuf::DynamicMessageFactory*___ptr64,1><google::protobuf::DynamicMessageFactory*___ptr64&___ptr64>
          (_Compressed_pair<std::default_delete<google::protobuf::DynamicMessageFactory>,google::protobuf::DynamicMessageFactory*___ptr64,1>
           *this,_Zero_then_variadic_args_t param_1,DynamicMessageFactory **param_2)

{
  *(DynamicMessageFactory **)this = *param_2;
  return this;
}

// pair<google::protobuf::FieldOptions_EditionDefault*___ptr64,google::protobuf::FieldOptions_EditionDefault*___ptr64><google::protobuf::FieldOptions_EditionDefault*___ptr64&___ptr64,google::protobuf::FieldOptions_EditionDefault*___ptr64&___ptr64,0> @ 14fb5e480

/* public: __cdecl std::pair<class google::protobuf::FieldOptions_EditionDefault * __ptr64,class
   google::protobuf::FieldOptions_EditionDefault * __ptr64>::pair<class
   google::protobuf::FieldOptions_EditionDefault * __ptr64,class
   google::protobuf::FieldOptions_EditionDefault * __ptr64><class
   google::protobuf::FieldOptions_EditionDefault * __ptr64 & __ptr64,class
   google::protobuf::FieldOptions_EditionDefault * __ptr64 & __ptr64,0>(class
   google::protobuf::FieldOptions_EditionDefault * __ptr64 & __ptr64,class
   google::protobuf::FieldOptions_EditionDefault * __ptr64 & __ptr64) __ptr64 */

pair<google::protobuf::FieldOptions_EditionDefault*___ptr64,google::protobuf::FieldOptions_EditionDefault*___ptr64>
* __thiscall
std::
pair<google::protobuf::FieldOptions_EditionDefault*___ptr64,google::protobuf::FieldOptions_EditionDefault*___ptr64>
::
pair<google::protobuf::FieldOptions_EditionDefault*___ptr64,google::protobuf::FieldOptions_EditionDefault*___ptr64><google::protobuf::FieldOptions_EditionDefault*___ptr64&___ptr64,google::protobuf::FieldOptions_EditionDefault*___ptr64&___ptr64,0>
          (pair<google::protobuf::FieldOptions_EditionDefault*___ptr64,google::protobuf::FieldOptions_EditionDefault*___ptr64>
           *this,FieldOptions_EditionDefault **param_1,FieldOptions_EditionDefault **param_2)

{
  *(FieldOptions_EditionDefault **)this = *param_1;
  *(FieldOptions_EditionDefault **)(this + 8) = *param_2;
  return this;
}

// pair<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,bool><absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>&___ptr64,bool,0> @ 14fb5e4a0

/* public: __cdecl std::pair<class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,bool>::pair<class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,bool><class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> & __ptr64,bool,0>(class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> & __ptr64,bool && __ptr64) __ptr64 */

pair<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,bool>
* __thiscall
std::
pair<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,bool>
::
pair<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,bool><absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>&___ptr64,bool,0>
          (pair<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,bool>
           *this,btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
                 *param_1,bool *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  this[0x10] = (pair<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,bool>
                )*param_2;
  return this;
}

// Storage<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,0,1><absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare_const&___ptr64> @ 14fb5e4c0

/* public: __cdecl absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare,0,1>::Storage<struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare,0,1><struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare const &
   __ptr64>(struct std::in_place_t,struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare const & __ptr64)
   __ptr64 */

Storage<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,0,1>
* __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,0,1>
::
Storage<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,0,1><absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare_const&___ptr64>
          (Storage<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,0,1>
           *this,in_place_t param_1,checked_compare *param_2)

{
  return this;
}

// CompressedTuple<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,std::allocator<google::protobuf::Edition>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64><absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare_const&___ptr64,std::allocator<google::protobuf::Edition>_const&___ptr64,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,1> @ 14fb5e4d0

/* public: __cdecl absl::lts_20240722::container_internal::CompressedTuple<struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare,class
   std::allocator<enum google::protobuf::Edition>,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>::CompressedTuple<struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare,class
   std::allocator<enum google::protobuf::Edition>,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64><struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare const & __ptr64,class
   std::allocator<enum google::protobuf::Edition> const & __ptr64,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,1>(struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare const & __ptr64,class
   std::allocator<enum google::protobuf::Edition> const & __ptr64,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 && __ptr64) __ptr64 */

CompressedTuple<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,std::allocator<google::protobuf::Edition>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>
* __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,std::allocator<google::protobuf::Edition>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>
::
CompressedTuple<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,std::allocator<google::protobuf::Edition>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64><absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare_const&___ptr64,std::allocator<google::protobuf::Edition>_const&___ptr64,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,1>
          (CompressedTuple<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,std::allocator<google::protobuf::Edition>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>
           *this,checked_compare *param_1,allocator<google::protobuf::Edition> *param_2,
          btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          **param_3)

{
  *(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
    **)this = *param_3;
  return this;
}

// CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,std::allocator<google::protobuf::Edition>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,0,1,2>,1><absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare_const&___ptr64,std::allocator<google::protobuf::Edition>_const&___ptr64,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64> @ 14fb5e4e0

/* public: __cdecl
   absl::lts_20240722::container_internal::internal_compressed_tuple::CompressedTupleImpl<class
   absl::lts_20240722::container_internal::CompressedTuple<struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare,class
   std::allocator<enum google::protobuf::Edition>,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,0,1,2>,1>::CompressedTupleImpl<class
   absl::lts_20240722::container_internal::CompressedTuple<struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare,class
   std::allocator<enum google::protobuf::Edition>,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,0,1,2>,1><struct absl::lts_20240722::container_internal::key_compare_adapter<struct
   std::less<enum google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare const
   & __ptr64,class std::allocator<enum google::protobuf::Edition> const & __ptr64,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>(struct std::in_place_t,struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare const & __ptr64,class
   std::allocator<enum google::protobuf::Edition> const & __ptr64,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 && __ptr64) __ptr64 */

CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,std::allocator<google::protobuf::Edition>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,0,1,2>,1>
* __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,std::allocator<google::protobuf::Edition>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,0,1,2>,1>
::
CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,std::allocator<google::protobuf::Edition>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,0,1,2>,1><absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare_const&___ptr64,std::allocator<google::protobuf::Edition>_const&___ptr64,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>
          (CompressedTupleImpl<absl::lts_20240722::container_internal::CompressedTuple<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,std::allocator<google::protobuf::Edition>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,0,1,2>,1>
           *this,in_place_t param_1,checked_compare *param_2,
          allocator<google::protobuf::Edition> *param_3,
          btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          **param_4)

{
  *(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
    **)this = *param_4;
  return this;
}

// _Compressed_pair<std::allocator<google::protobuf::FieldOptions_EditionDefault>,std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>,1><std::allocator<google::protobuf::FieldOptions_EditionDefault>_const&___ptr64> @ 14fb5e500

/* public: __cdecl std::_Compressed_pair<class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault>,class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault>
   >,1>::_Compressed_pair<class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault>,class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault> >,1><class
   std::allocator<class google::protobuf::FieldOptions_EditionDefault> const & __ptr64>(struct
   std::_One_then_variadic_args_t,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> const & __ptr64) __ptr64 */

_Compressed_pair<std::allocator<google::protobuf::FieldOptions_EditionDefault>,std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<google::protobuf::FieldOptions_EditionDefault>,std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>,1>
::
_Compressed_pair<std::allocator<google::protobuf::FieldOptions_EditionDefault>,std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>,1><std::allocator<google::protobuf::FieldOptions_EditionDefault>_const&___ptr64>
          (_Compressed_pair<std::allocator<google::protobuf::FieldOptions_EditionDefault>,std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>,1>
           *this,_One_then_variadic_args_t param_1,
          allocator<google::protobuf::FieldOptions_EditionDefault> *param_2)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// Storage<std::allocator<google::protobuf::Edition>,1,1><std::allocator<google::protobuf::Edition>_const&___ptr64> @ 14fb5e520

/* public: __cdecl absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<class
   std::allocator<enum google::protobuf::Edition>,1,1>::Storage<class std::allocator<enum
   google::protobuf::Edition>,1,1><class std::allocator<enum google::protobuf::Edition> const &
   __ptr64>(struct std::in_place_t,class std::allocator<enum google::protobuf::Edition> const &
   __ptr64) __ptr64 */

Storage<std::allocator<google::protobuf::Edition>,1,1> * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<std::allocator<google::protobuf::Edition>,1,1>::
Storage<std::allocator<google::protobuf::Edition>,1,1><std::allocator<google::protobuf::Edition>_const&___ptr64>
          (Storage<std::allocator<google::protobuf::Edition>,1,1> *this,in_place_t param_1,
          allocator<google::protobuf::Edition> *param_2)

{
  return this;
}

// Storage<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,2,0><absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64> @ 14fb5e530

/* public: __cdecl absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,2,0>::Storage<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,2,0><class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>(struct std::in_place_t,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 && __ptr64) __ptr64 */

Storage<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,2,0>
* __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,2,0>
::
Storage<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,2,0><absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>
          (Storage<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,2,0>
           *this,in_place_t param_1,
          btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          **param_2)

{
  *(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
    **)this = *param_2;
  return this;
}

// unique_ptr<google::protobuf::DynamicMessageFactory,std::default_delete<google::protobuf::DynamicMessageFactory>_><std::default_delete<google::protobuf::DynamicMessageFactory>,0> @ 14fb5e540

/* public: __cdecl std::unique_ptr<class google::protobuf::DynamicMessageFactory,struct
   std::default_delete<class google::protobuf::DynamicMessageFactory> >::unique_ptr<class
   google::protobuf::DynamicMessageFactory,struct std::default_delete<class
   google::protobuf::DynamicMessageFactory> ><struct std::default_delete<class
   google::protobuf::DynamicMessageFactory>,0>(class google::protobuf::DynamicMessageFactory *
   __ptr64) __ptr64 */

unique_ptr<google::protobuf::DynamicMessageFactory,std::default_delete<google::protobuf::DynamicMessageFactory>_>
* __thiscall
std::
unique_ptr<google::protobuf::DynamicMessageFactory,std::default_delete<google::protobuf::DynamicMessageFactory>_>
::
unique_ptr<google::protobuf::DynamicMessageFactory,std::default_delete<google::protobuf::DynamicMessageFactory>_><std::default_delete<google::protobuf::DynamicMessageFactory>,0>
          (unique_ptr<google::protobuf::DynamicMessageFactory,std::default_delete<google::protobuf::DynamicMessageFactory>_>
           *this,DynamicMessageFactory *param_1)

{
  *(DynamicMessageFactory **)this = param_1;
  return this;
}

// unique_ptr<google::protobuf::Message,std::default_delete<google::protobuf::Message>_><std::default_delete<google::protobuf::Message>,0> @ 14fb5e550

/* public: __cdecl std::unique_ptr<class google::protobuf::Message,struct std::default_delete<class
   google::protobuf::Message> >::unique_ptr<class google::protobuf::Message,struct
   std::default_delete<class google::protobuf::Message> ><struct std::default_delete<class
   google::protobuf::Message>,0>(void) __ptr64 */

unique_ptr<google::protobuf::Message,std::default_delete<google::protobuf::Message>_> * __thiscall
std::unique_ptr<google::protobuf::Message,std::default_delete<google::protobuf::Message>_>::
unique_ptr<google::protobuf::Message,std::default_delete<google::protobuf::Message>_><std::default_delete<google::protobuf::Message>,0>
          (unique_ptr<google::protobuf::Message,std::default_delete<google::protobuf::Message>_>
           *this)

{
  *(undefined8 *)this = 0;
  return this;
}

// vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_><google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>,0> @ 14fb5e570

/* public: __cdecl std::vector<class google::protobuf::FieldOptions_EditionDefault,class
   std::allocator<class google::protobuf::FieldOptions_EditionDefault> >::vector<class
   google::protobuf::FieldOptions_EditionDefault,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> ><class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const >,0>(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const >,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const >,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> const & __ptr64) __ptr64 */

vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
* __thiscall
std::
vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
::
vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_><google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>,0>
          (vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  FieldOptions_EditionDefault *this_00;
  
  this_00 = (FieldOptions_EditionDefault *)0x0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar2 = (longlong)param_3 - (longlong)param_2 >> 3;
  if (uVar2 != 0) {
    if (0x666666666666666 < uVar2) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    uVar1 = uVar2 * 0x28;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        this_00 = ::operator_new(uVar1);
      }
    }
    else {
      if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        _Throw_bad_array_new_length();
      }
      pvVar3 = ::operator_new(uVar1 + 0x27);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      this_00 = (FieldOptions_EditionDefault *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
      *(void **)&this_00[-1]._impl_.edition_ = pvVar3;
    }
    *(FieldOptions_EditionDefault **)this = this_00;
    *(FieldOptions_EditionDefault **)(this + 8) = this_00;
    *(FieldOptions_EditionDefault **)(this + 0x10) = this_00 + uVar2;
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      google::protobuf::FieldOptions_EditionDefault::FieldOptions_EditionDefault
                (this_00,(Arena *)0x0,(FieldOptions_EditionDefault *)*param_2);
      this_00->_padding_ = (longlong)google::protobuf::FieldOptions_EditionDefault::vftable;
      this_00 = this_00 + 1;
    }
    *(FieldOptions_EditionDefault **)(this + 8) = this_00;
  }
  return this;
}

// pair<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,bool><absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,bool,0> @ 14fb5e6b0

/* public: __cdecl std::pair<class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,bool>::pair<class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,bool><class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,bool,0>(class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> && __ptr64,bool && __ptr64) __ptr64 */

pair<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,bool>
* __thiscall
std::
pair<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,bool>
::
pair<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,bool><absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,bool,0>
          (pair<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,bool>
           *this,btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
                 *param_1,bool *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  this[0x10] = (pair<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,bool>
                )*param_2;
  return this;
}

// btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_const_,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64><absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64,0> @ 14fb5e6d0

/* public: __cdecl absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > const ,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > const ,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64><class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64,0>(class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>) __ptr64 */

btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_const_,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
* __thiscall
absl::lts_20240722::container_internal::
btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_const_,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
::
btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_const_,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64><absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64,0>
          (btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_const_,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
           *this,undefined8 *param_2)

{
  *(undefined8 *)this = *param_2;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_2 + 1);
  return this;
}

// StatusOr<google::protobuf::FeatureResolver><google::protobuf::FeatureResolver,0> @ 14fb5e6f0

/* public: __cdecl absl::lts_20240722::StatusOr<class
   google::protobuf::FeatureResolver>::StatusOr<class google::protobuf::FeatureResolver><class
   google::protobuf::FeatureResolver,0>(class google::protobuf::FeatureResolver && __ptr64) __ptr64
    */

StatusOr<google::protobuf::FeatureResolver> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::FeatureResolver>::
StatusOr<google::protobuf::FeatureResolver><google::protobuf::FeatureResolver,0>
          (StatusOr<google::protobuf::FeatureResolver> *this,FeatureResolver *param_1)

{
  google::protobuf::FeatureSet::FeatureSet((FeatureSet *)(this + 8),(FeatureSet *)param_1);
  *(undefined8 *)this = 1;
  return this;
}

// StatusOr<google::protobuf::FeatureResolver><google::protobuf::FeatureResolver> @ 14fb5e720

/* public: __cdecl absl::lts_20240722::StatusOr<class
   google::protobuf::FeatureResolver>::StatusOr<class google::protobuf::FeatureResolver><class
   google::protobuf::FeatureResolver>(struct std::in_place_t,class google::protobuf::FeatureResolver
   && __ptr64) __ptr64 */

StatusOr<google::protobuf::FeatureResolver> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::FeatureResolver>::
StatusOr<google::protobuf::FeatureResolver><google::protobuf::FeatureResolver>
          (StatusOr<google::protobuf::FeatureResolver> *this,in_place_t param_1,
          FeatureResolver *param_2)

{
  google::protobuf::FeatureSet::FeatureSet((FeatureSet *)(this + 8),(FeatureSet *)param_2);
  *(undefined8 *)this = 1;
  return this;
}

// StatusOrData<google::protobuf::FeatureResolver><google::protobuf::FeatureResolver> @ 14fb5e750

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::FeatureResolver>::StatusOrData<class google::protobuf::FeatureResolver><class
   google::protobuf::FeatureResolver>(struct std::in_place_t,class google::protobuf::FeatureResolver
   && __ptr64) __ptr64 */

StatusOrData<google::protobuf::FeatureResolver> * __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::FeatureResolver>::
StatusOrData<google::protobuf::FeatureResolver><google::protobuf::FeatureResolver>
          (StatusOrData<google::protobuf::FeatureResolver> *this,in_place_t param_1,
          FeatureResolver *param_2)

{
  google::protobuf::FeatureSet::FeatureSet((FeatureSet *)(this + 8),(FeatureSet *)param_2);
  *(undefined8 *)this = 1;
  return this;
}

// StatusOr<google::protobuf::FeatureSet><google::protobuf::FeatureSet,0> @ 14fb5e780

/* public: __cdecl absl::lts_20240722::StatusOr<class google::protobuf::FeatureSet>::StatusOr<class
   google::protobuf::FeatureSet><class google::protobuf::FeatureSet,0>(class
   google::protobuf::FeatureSet && __ptr64) __ptr64 */

StatusOr<google::protobuf::FeatureSet> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::FeatureSet>::
StatusOr<google::protobuf::FeatureSet><google::protobuf::FeatureSet,0>
          (StatusOr<google::protobuf::FeatureSet> *this,FeatureSet *param_1)

{
  google::protobuf::FeatureSet::FeatureSet((FeatureSet *)(this + 8),param_1);
  *(undefined8 *)this = 1;
  return this;
}

// StatusOr<google::protobuf::FeatureSet><google::protobuf::FeatureSet> @ 14fb5e7b0

/* public: __cdecl absl::lts_20240722::StatusOr<class google::protobuf::FeatureSet>::StatusOr<class
   google::protobuf::FeatureSet><class google::protobuf::FeatureSet>(struct std::in_place_t,class
   google::protobuf::FeatureSet && __ptr64) __ptr64 */

StatusOr<google::protobuf::FeatureSet> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::FeatureSet>::
StatusOr<google::protobuf::FeatureSet><google::protobuf::FeatureSet>
          (StatusOr<google::protobuf::FeatureSet> *this,in_place_t param_1,FeatureSet *param_2)

{
  google::protobuf::FeatureSet::FeatureSet((FeatureSet *)(this + 8),param_2);
  *(undefined8 *)this = 1;
  return this;
}

// StatusOrData<google::protobuf::FeatureSet><google::protobuf::FeatureSet> @ 14fb5e7e0

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::FeatureSet>::StatusOrData<class google::protobuf::FeatureSet><class
   google::protobuf::FeatureSet>(struct std::in_place_t,class google::protobuf::FeatureSet &&
   __ptr64) __ptr64 */

StatusOrData<google::protobuf::FeatureSet> * __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::FeatureSet>::
StatusOrData<google::protobuf::FeatureSet><google::protobuf::FeatureSet>
          (StatusOrData<google::protobuf::FeatureSet> *this,in_place_t param_1,FeatureSet *param_2)

{
  google::protobuf::FeatureSet::FeatureSet((FeatureSet *)(this + 8),param_2);
  *(undefined8 *)this = 1;
  return this;
}

// StatusOr<google::protobuf::FeatureSetDefaults><google::protobuf::FeatureSetDefaults,0> @ 14fb5e810

/* public: __cdecl absl::lts_20240722::StatusOr<class
   google::protobuf::FeatureSetDefaults>::StatusOr<class google::protobuf::FeatureSetDefaults><class
   google::protobuf::FeatureSetDefaults,0>(class google::protobuf::FeatureSetDefaults && __ptr64)
   __ptr64 */

StatusOr<google::protobuf::FeatureSetDefaults> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::FeatureSetDefaults>::
StatusOr<google::protobuf::FeatureSetDefaults><google::protobuf::FeatureSetDefaults,0>
          (StatusOr<google::protobuf::FeatureSetDefaults> *this,FeatureSetDefaults *param_1)

{
  FeatureSetDefaults *this_00;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  this_00 = (FeatureSetDefaults *)(this + 8);
  google::protobuf::FeatureSetDefaults::FeatureSetDefaults(this_00,(Arena *)0x0);
  this_00->_padding_ = (longlong)google::protobuf::FeatureSetDefaults::vftable;
  if (this_00 != param_1) {
    puVar1 = (undefined8 *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 0x10) & 0xfffffffffffffffe);
    if (((byte)this[0x10] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      google::protobuf::FeatureSetDefaults::InternalSwap(this_00,param_1);
    }
    else {
      google::protobuf::FeatureSetDefaults::CopyFrom(this_00,param_1);
    }
  }
  this_00->_padding_ = (longlong)google::protobuf::FeatureSetDefaults::vftable;
  *(undefined8 *)this = 1;
  return this;
}

// StatusOr<google::protobuf::FeatureSetDefaults><google::protobuf::FeatureSetDefaults> @ 14fb5e8b0

/* public: __cdecl absl::lts_20240722::StatusOr<class
   google::protobuf::FeatureSetDefaults>::StatusOr<class google::protobuf::FeatureSetDefaults><class
   google::protobuf::FeatureSetDefaults>(struct std::in_place_t,class
   google::protobuf::FeatureSetDefaults && __ptr64) __ptr64 */

StatusOr<google::protobuf::FeatureSetDefaults> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::FeatureSetDefaults>::
StatusOr<google::protobuf::FeatureSetDefaults><google::protobuf::FeatureSetDefaults>
          (StatusOr<google::protobuf::FeatureSetDefaults> *this,in_place_t param_1,
          FeatureSetDefaults *param_2)

{
  FeatureSetDefaults *this_00;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  this_00 = (FeatureSetDefaults *)(this + 8);
  google::protobuf::FeatureSetDefaults::FeatureSetDefaults(this_00,(Arena *)0x0);
  this_00->_padding_ = (longlong)google::protobuf::FeatureSetDefaults::vftable;
  if (this_00 != param_2) {
    puVar1 = (undefined8 *)(param_2->_padding_ & 0xfffffffffffffffe);
    if ((param_2->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 0x10) & 0xfffffffffffffffe);
    if (((byte)this[0x10] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      google::protobuf::FeatureSetDefaults::InternalSwap(this_00,param_2);
    }
    else {
      google::protobuf::FeatureSetDefaults::CopyFrom(this_00,param_2);
    }
  }
  this_00->_padding_ = (longlong)google::protobuf::FeatureSetDefaults::vftable;
  *(undefined8 *)this = 1;
  return this;
}

// StatusOrData<google::protobuf::FeatureSetDefaults><google::protobuf::FeatureSetDefaults> @ 14fb5e950

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::FeatureSetDefaults>::StatusOrData<class
   google::protobuf::FeatureSetDefaults><class google::protobuf::FeatureSetDefaults>(struct
   std::in_place_t,class google::protobuf::FeatureSetDefaults && __ptr64) __ptr64 */

StatusOrData<google::protobuf::FeatureSetDefaults> * __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::FeatureSetDefaults>::
StatusOrData<google::protobuf::FeatureSetDefaults><google::protobuf::FeatureSetDefaults>
          (StatusOrData<google::protobuf::FeatureSetDefaults> *this,in_place_t param_1,
          FeatureSetDefaults *param_2)

{
  FeatureSetDefaults *this_00;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  this_00 = (FeatureSetDefaults *)(this + 8);
  google::protobuf::FeatureSetDefaults::FeatureSetDefaults(this_00,(Arena *)0x0);
  this_00->_padding_ = (longlong)google::protobuf::FeatureSetDefaults::vftable;
  if (this_00 != param_2) {
    puVar1 = (undefined8 *)(param_2->_padding_ & 0xfffffffffffffffe);
    if ((param_2->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 0x10) & 0xfffffffffffffffe);
    if (((byte)this[0x10] & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      google::protobuf::FeatureSetDefaults::InternalSwap(this_00,param_2);
    }
    else {
      google::protobuf::FeatureSetDefaults::CopyFrom(this_00,param_2);
    }
  }
  this_00->_padding_ = (longlong)google::protobuf::FeatureSetDefaults::vftable;
  *(undefined8 *)this = 1;
  return this;
}

// StatusOr<google::protobuf::FeatureResolver><absl::lts_20240722::Status,0> @ 14fb5e9f0

/* public: __cdecl absl::lts_20240722::StatusOr<class
   google::protobuf::FeatureResolver>::StatusOr<class google::protobuf::FeatureResolver><class
   absl::lts_20240722::Status,0>(class absl::lts_20240722::Status && __ptr64) __ptr64 */

StatusOr<google::protobuf::FeatureResolver> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::FeatureResolver>::
StatusOr<google::protobuf::FeatureResolver><absl::lts_20240722::Status,0>
          (StatusOr<google::protobuf::FeatureResolver> *this,Status *param_1)

{
  *(ulong64 *)this = param_1->rep_;
  param_1->rep_ = 0x37;
  if (*(longlong *)this == 1) {
    internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// StatusOr<google::protobuf::FeatureSetDefaults><absl::lts_20240722::Status,0> @ 14fb5ea30

/* public: __cdecl absl::lts_20240722::StatusOr<class
   google::protobuf::FeatureSetDefaults>::StatusOr<class google::protobuf::FeatureSetDefaults><class
   absl::lts_20240722::Status,0>(class absl::lts_20240722::Status && __ptr64) __ptr64 */

StatusOr<google::protobuf::FeatureSetDefaults> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::FeatureSetDefaults>::
StatusOr<google::protobuf::FeatureSetDefaults><absl::lts_20240722::Status,0>
          (StatusOr<google::protobuf::FeatureSetDefaults> *this,Status *param_1)

{
  *(ulong64 *)this = param_1->rep_;
  param_1->rep_ = 0x37;
  if (*(longlong *)this == 1) {
    internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// StatusOrData<google::protobuf::FeatureResolver><absl::lts_20240722::Status,0> @ 14fb5ea70

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::FeatureResolver>::StatusOrData<class google::protobuf::FeatureResolver><class
   absl::lts_20240722::Status,0>(class absl::lts_20240722::Status && __ptr64) __ptr64 */

StatusOrData<google::protobuf::FeatureResolver> * __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::FeatureResolver>::
StatusOrData<google::protobuf::FeatureResolver><absl::lts_20240722::Status,0>
          (StatusOrData<google::protobuf::FeatureResolver> *this,Status *param_1)

{
  *(ulong64 *)this = param_1->rep_;
  param_1->rep_ = 0x37;
  if (*(longlong *)this == 1) {
    Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// StatusOrData<google::protobuf::FeatureSetDefaults><absl::lts_20240722::Status,0> @ 14fb5eab0

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::FeatureSetDefaults>::StatusOrData<class
   google::protobuf::FeatureSetDefaults><class absl::lts_20240722::Status,0>(class
   absl::lts_20240722::Status && __ptr64) __ptr64 */

StatusOrData<google::protobuf::FeatureSetDefaults> * __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::FeatureSetDefaults>::
StatusOrData<google::protobuf::FeatureSetDefaults><absl::lts_20240722::Status,0>
          (StatusOrData<google::protobuf::FeatureSetDefaults> *this,Status *param_1)

{
  *(ulong64 *)this = param_1->rep_;
  param_1->rep_ = 0x37;
  if (*(longlong *)this == 1) {
    Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// allocator<absl::lts_20240722::container_internal::AlignedType<8>_><google::protobuf::Edition> @ 14fb5eaf0

/* public: __cdecl std::allocator<struct absl::lts_20240722::container_internal::AlignedType<8>
   >::allocator<struct absl::lts_20240722::container_internal::AlignedType<8> ><enum
   google::protobuf::Edition>(class std::allocator<enum google::protobuf::Edition> const & __ptr64)
   __ptr64 */

allocator<absl::lts_20240722::container_internal::AlignedType<8>_> * __thiscall
std::allocator<absl::lts_20240722::container_internal::AlignedType<8>_>::
allocator<absl::lts_20240722::container_internal::AlignedType<8>_><google::protobuf::Edition>
          (allocator<absl::lts_20240722::container_internal::AlignedType<8>_> *this,
          allocator<google::protobuf::Edition> *param_1)

{
  return this;
}

// operator=<std::default_delete<google::protobuf::Message>,0> @ 14fb5eb00

/* public: class std::unique_ptr<class google::protobuf::Message,struct std::default_delete<class
   google::protobuf::Message> > & __ptr64 __cdecl std::unique_ptr<class
   google::protobuf::Message,struct std::default_delete<class google::protobuf::Message>
   >::operator=<struct std::default_delete<class google::protobuf::Message>,0>(class
   std::unique_ptr<class google::protobuf::Message,struct std::default_delete<class
   google::protobuf::Message> > && __ptr64) __ptr64 */

unique_ptr<class_google::protobuf::Message,struct_std::default_delete<class_google::protobuf::Message>_>
* __thiscall
std::unique_ptr<google::protobuf::Message,std::default_delete<google::protobuf::Message>_>::
operator=<std::default_delete<google::protobuf::Message>,0>
          (unique_ptr<google::protobuf::Message,std::default_delete<google::protobuf::Message>_>
           *this,unique_ptr<class_google::protobuf::Message,struct_std::default_delete<class_google::protobuf::Message>_>
                 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = 0;
  puVar2 = *(undefined8 **)this;
  *(undefined8 *)this = uVar1;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return (unique_ptr<class_google::protobuf::Message,struct_std::default_delete<class_google::protobuf::Message>_>
          *)this;
}

// operator()<google::protobuf::Edition,google::protobuf::Edition,0> @ 14fb5eb60

/* public: bool __cdecl absl::lts_20240722::container_internal::key_compare_adapter<struct
   std::less<enum google::protobuf::Edition>,enum
   google::protobuf::Edition>::checked_compare::operator()<enum google::protobuf::Edition,enum
   google::protobuf::Edition,0>(enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const & __ptr64)const __ptr64 */

bool __thiscall
absl::lts_20240722::container_internal::
key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare
::operator()<google::protobuf::Edition,google::protobuf::Edition,0>
          (checked_compare *this,Edition *param_1,Edition *param_2)

{
  return (int)*param_1 < (int)*param_2;
}

// Add<google::protobuf::internal::GenericTypeHandler<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>_> @ 14fb5eb70

/* protected: class google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::Add<class
   google::protobuf::internal::GenericTypeHandler<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> >(void) __ptr64 */

FeatureSetDefaults_FeatureSetEditionDefault * __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
Add<google::protobuf::internal::GenericTypeHandler<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>_>
          (RepeatedPtrFieldBase *this)

{
  FeatureSetDefaults_FeatureSetEditionDefault *pFVar1;
  
  pFVar1 = AddMessageLite(this,Arena::
                               DefaultConstruct<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>
                         );
  return pFVar1;
}

// Allocate<8,std::allocator<google::protobuf::Edition>_> @ 14fb5eb90

/* void * __ptr64 __cdecl absl::lts_20240722::container_internal::Allocate<8,class
   std::allocator<enum google::protobuf::Edition> >(class std::allocator<enum
   google::protobuf::Edition> * __ptr64,unsigned __int64) */

void * __cdecl
absl::lts_20240722::container_internal::Allocate<8,std::allocator<google::protobuf::Edition>_>
          (allocator<google::protobuf::Edition> *param_1,__uint64 param_2)

{
  void *pvVar1;
  
  pvVar1 = std::_Allocate<16,std::_Default_allocate_traits,0>(param_2 + 7 & 0xfffffffffffffff8);
  return pvVar1;
}

// Deallocate<8,std::allocator<google::protobuf::Edition>_> @ 14fb5ebb0

/* void __cdecl absl::lts_20240722::container_internal::Deallocate<8,class std::allocator<enum
   google::protobuf::Edition> >(class std::allocator<enum google::protobuf::Edition> * __ptr64,void
   * __ptr64,unsigned __int64) */

void __cdecl
absl::lts_20240722::container_internal::Deallocate<8,std::allocator<google::protobuf::Edition>_>
          (allocator<google::protobuf::Edition> *param_1,void *param_2,__uint64 param_3)

{
  void *pvVar1;
  ulong64 uVar2;
  
  uVar2 = param_3 + 7 & 0xfffffffffffffff8;
  pvVar1 = param_2;
  if (0xfff < uVar2) {
    pvVar1 = *(void **)((longlong)param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)pvVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pvVar1,uVar2);
  return;
}

// DefaultConstruct<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> @ 14fb5ec00

/* private: static void * __ptr64 __cdecl google::protobuf::Arena::DefaultConstruct<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>(class google::protobuf::Arena *
   __ptr64) */

void * __cdecl
google::protobuf::Arena::
DefaultConstruct<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>(Arena *param_1)

{
  FeatureSetDefaults_FeatureSetEditionDefault *pFVar1;
  void *pvVar2;
  
  if (param_1 != (Arena *)0x0) {
    pFVar1 = Allocate(param_1,0x30);
    pvVar2 = (void *)FeatureSetDefaults_FeatureSetEditionDefault::
                     FeatureSetDefaults_FeatureSetEditionDefault(pFVar1,param_1);
    return pvVar2;
  }
  pFVar1 = ::operator_new(0x30);
  pvVar2 = (void *)FeatureSetDefaults_FeatureSetEditionDefault::
                   FeatureSetDefaults_FeatureSetEditionDefault(pFVar1,(Arena *)0x0);
  return pvVar2;
}

// FUN_14fb5ec50 @ 14fb5ec50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string_view<char,std::char_traits<char>_> *
FUN_14fb5ec50(basic_string_view<char,std::char_traits<char>_> *param_1,char *param_2)

{
  undefined8 uVar1;
  ulong64 uVar2;
  undefined1 auStack_68 [32];
  _Bxty *local_48;
  ulong64 uStack_40;
  _Bxty local_30;
  undefined8 local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  uStack_40 = 0;
  if (param_2 == (char *)0x0) {
    local_48 = (_Bxty *)0x0;
  }
  else {
    uStack_40 = 0xffffffffffffffff;
    do {
      uStack_40 = uStack_40 + 1;
      local_48 = (_Bxty *)param_2;
    } while (param_2[uStack_40] != '\0');
  }
  local_30._Ptr = (char *)0x0;
  local_30._8_8_ = 0;
  local_20 = 0;
  uStack_18 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30,
             (char *)local_48,uStack_40);
  local_48 = &local_30;
  if (0xf < uStack_18) {
    local_48 = (_Bxty *)local_30._Ptr;
  }
  uStack_40 = local_20;
  absl::lts_20240722::FailedPreconditionError(param_1);
  if (0xf < uStack_18) {
    uVar2 = uStack_18 + 1;
    uVar1 = local_30._Ptr;
    if (0xfff < uVar2) {
      uVar2 = uStack_18 + 0x28;
      uVar1 = *(undefined8 *)(local_30._Ptr + -8);
      if ((char *)0x1f < local_30._Ptr + (-8 - uVar1)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar1,uVar2);
  }
  return param_1;
}

// FUN_14fb5ed60 @ 14fb5ed60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string_view<char,std::char_traits<char>_> *
FUN_14fb5ed60(basic_string_view<char,std::char_traits<char>_> *param_1,char *param_2,
             undefined8 *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  undefined1 auStack_c8 [32];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_a8;
  ulong64 uStack_a0;
  _Bxty local_90;
  ulonglong local_78;
  AlphaNum local_70;
  AlphaNum local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_c8;
  uStack_a0 = 0;
  local_70.piece_._Mydata = (char *)*param_3;
  local_70.piece_._Mysize = param_3[1];
  if (param_2 == (char *)0x0) {
    local_a8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  else {
    uStack_a0 = 0xffffffffffffffff;
    do {
      uStack_a0 = uStack_a0 + 1;
      local_a8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_2;
    } while (param_2[uStack_a0] != '\0');
  }
  local_40.piece_._Mydata = (char *)local_a8;
  local_40.piece_._Mysize = uStack_a0;
  pbVar1 = absl::lts_20240722::StrCat
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_90,
                      &local_40,&local_70);
  local_a8 = pbVar1;
  if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
    local_a8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar1->_Mypair)._Myval2._Bx._Ptr;
  }
  uStack_a0 = (pbVar1->_Mypair)._Myval2._Mysize;
  absl::lts_20240722::FailedPreconditionError(param_1);
  if (0xf < local_78) {
    uVar3 = local_78 + 1;
    uVar2 = local_90._Ptr;
    if (0xfff < uVar3) {
      uVar3 = local_78 + 0x28;
      uVar2 = *(undefined8 *)(local_90._Ptr + -8);
      if ((char *)0x1f < local_90._Ptr + (-8 - uVar2)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar2,uVar3);
  }
  return param_1;
}

// FUN_14fb5ee80 @ 14fb5ee80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string_view<char,std::char_traits<char>_> *
FUN_14fb5ee80(basic_string_view<char,std::char_traits<char>_> *param_1,char *param_2,
             undefined8 *param_3,char *param_4)

{
  ulong64 uVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [32];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_d8;
  ulong64 uStack_d0;
  _Bxty local_c0;
  ulonglong local_a8;
  AlphaNum local_a0;
  AlphaNum local_70;
  AlphaNum local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_f8;
  uVar1 = 0xffffffffffffffff;
  uStack_d0 = uVar1;
  if (param_4 == (char *)0x0) {
    local_d8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    uStack_d0 = 0;
  }
  else {
    do {
      uStack_d0 = uStack_d0 + 1;
      local_d8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_4;
    } while (param_4[uStack_d0] != '\0');
  }
  local_a0.piece_._Mydata = (char *)local_d8;
  local_a0.piece_._Mysize = uStack_d0;
  local_70.piece_._Mydata = (char *)*param_3;
  local_70.piece_._Mysize = param_3[1];
  if (param_2 == (char *)0x0) {
    local_d8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    uStack_d0 = 0;
  }
  else {
    do {
      uVar1 = uVar1 + 1;
      local_d8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_2;
      uStack_d0 = uVar1;
    } while (param_2[uVar1] != '\0');
  }
  local_40.piece_._Mydata = (char *)local_d8;
  local_40.piece_._Mysize = uStack_d0;
  pbVar2 = absl::lts_20240722::StrCat
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c0,
                      &local_40,&local_70,&local_a0);
  local_d8 = pbVar2;
  if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
    local_d8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar2->_Mypair)._Myval2._Bx._Ptr;
  }
  uStack_d0 = (pbVar2->_Mypair)._Myval2._Mysize;
  absl::lts_20240722::FailedPreconditionError(param_1);
  if (0xf < local_a8) {
    uVar1 = local_a8 + 1;
    uVar3 = local_c0._Ptr;
    if (0xfff < uVar1) {
      uVar1 = local_a8 + 0x28;
      uVar3 = *(undefined8 *)(local_c0._Ptr + -8);
      if ((char *)0x1f < local_c0._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar3,uVar1);
  }
  return param_1;
}

// FUN_14fb5efc0 @ 14fb5efc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string_view<char,std::char_traits<char>_> *
FUN_14fb5efc0(basic_string_view<char,std::char_traits<char>_> *param_1,undefined8 ***param_2,
             undefined8 *param_3,longlong param_4,undefined4 *param_5,longlong param_6)

{
  undefined8 ****ppppuVar1;
  ulong64 uVar2;
  undefined1 auStack_e8 [32];
  undefined8 ***local_c8;
  ulonglong *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  undefined8 ***local_90 [2];
  undefined8 local_80;
  ulonglong local_78;
  undefined8 **local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_e8;
  puStack_c0 = (ulonglong *)0xffffffffffffffff;
  if (param_6 == 0) {
    local_b8 = 0;
    uStack_b0 = 0;
  }
  else {
    local_b8 = param_6;
    uStack_b0 = (longlong)puStack_c0;
    do {
      uStack_b0 = uStack_b0 + 1;
    } while (*(char *)(param_6 + uStack_b0) != '\0');
  }
  lStack_a0 = (longlong)puStack_c0;
  if (param_4 == 0) {
    local_a8 = 0;
    lStack_a0 = 0;
  }
  else {
    do {
      lStack_a0 = lStack_a0 + 1;
      local_a8 = param_4;
    } while (*(char *)(param_4 + lStack_a0) != '\0');
  }
  if (param_2 == (undefined8 ***)0x0) {
    local_c8 = (undefined8 ***)0x0;
    puStack_c0 = (ulonglong *)0x0;
  }
  else {
    do {
      puStack_c0 = (ulonglong *)((longlong)puStack_c0 + 1);
      local_c8 = param_2;
    } while (*(char *)((longlong)param_2 + (longlong)puStack_c0) != '\0');
  }
  local_68 = local_c8;
  lStack_60 = (longlong)puStack_c0;
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_48 = local_a8;
  lStack_40 = lStack_a0;
  local_38 = *param_5;
  uStack_34 = param_5[1];
  uStack_30 = param_5[2];
  uStack_2c = param_5[3];
  local_28 = (undefined4)local_b8;
  uStack_24 = local_b8._4_4_;
  uStack_20 = (undefined4)uStack_b0;
  uStack_1c = uStack_b0._4_4_;
  local_c8 = &local_68;
  puStack_c0 = local_18;
  absl::lts_20240722::strings_internal::CatPieces(local_90,&local_c8);
  local_c8 = local_90;
  if (0xf < local_78) {
    local_c8 = local_90[0];
  }
  puStack_c0 = (ulonglong *)local_80;
  absl::lts_20240722::FailedPreconditionError(param_1);
  if (0xf < local_78) {
    uVar2 = local_78 + 1;
    ppppuVar1 = (undefined8 ****)local_90[0];
    if (0xfff < uVar2) {
      uVar2 = local_78 + 0x28;
      ppppuVar1 = (undefined8 ****)local_90[0][-1];
      if (0x1f < (ulonglong)((longlong)local_90[0] + (-8 - (longlong)ppppuVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar1,uVar2);
  }
  return param_1;
}

// FUN_14fb5f150 @ 14fb5f150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string_view<char,std::char_traits<char>_> *
FUN_14fb5f150(basic_string_view<char,std::char_traits<char>_> *param_1,char *param_2,
             undefined8 *param_3,char *param_4,longlong *param_5)

{
  ulonglong uVar1;
  ulong64 uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined1 auStackY_148 [32];
  char *local_118;
  ulong64 uStack_110;
  _Bxty local_f8;
  undefined8 local_e8;
  ulonglong uStack_e0;
  AlphaNum local_d8;
  AlphaNum local_a8;
  AlphaNum local_78;
  AlphaNum local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_d8.piece_._Mydata = (char *)param_5;
  if (0xf < (ulonglong)param_5[3]) {
    local_d8.piece_._Mydata = (char *)*param_5;
  }
  local_d8.piece_._Mysize = param_5[2];
  uVar2 = 0xffffffffffffffff;
  if (param_4 == (char *)0x0) {
    local_118 = (char *)0x0;
    uStack_110 = 0;
  }
  else {
    uStack_110 = 0xffffffffffffffff;
    do {
      uStack_110 = uStack_110 + 1;
      local_118 = param_4;
    } while (param_4[uStack_110] != '\0');
  }
  local_a8.piece_._Mydata = local_118;
  local_a8.piece_._Mysize = uStack_110;
  local_78.piece_._Mydata = (char *)*param_3;
  local_78.piece_._Mysize = param_3[1];
  if (param_2 == (char *)0x0) {
    local_118 = (char *)0x0;
    uStack_110 = 0;
  }
  else {
    do {
      uVar2 = uVar2 + 1;
      local_118 = param_2;
      uStack_110 = uVar2;
    } while (param_2[uVar2] != '\0');
  }
  local_48.piece_._Mydata = local_118;
  local_48.piece_._Mysize = uStack_110;
  absl::lts_20240722::StrCat
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_f8,&local_48,
             &local_78,&local_a8,&local_d8);
  absl::lts_20240722::FailedPreconditionError(param_1);
  if (0xf < uStack_e0) {
    uVar2 = uStack_e0 + 1;
    pvVar4 = (void *)CONCAT71(local_f8._1_7_,local_f8._Buf[0]);
    pvVar3 = pvVar4;
    if (0xfff < uVar2) {
      uVar2 = uStack_e0 + 0x28;
      pvVar3 = *(void **)((longlong)pvVar4 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar2);
  }
  local_e8 = ___xmm_000000000000000f0000000000000000;
  uStack_e0 = _UNK_15076add8;
  local_f8._Buf[0] = '\0';
  uVar1 = param_5[3];
  if (0xf < uVar1) {
    uVar2 = uVar1 + 1;
    pvVar3 = (void *)*param_5;
    pvVar4 = pvVar3;
    if (0xfff < uVar2) {
      uVar2 = uVar1 + 0x28;
      pvVar4 = *(void **)((longlong)pvVar3 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,uVar2);
  }
  param_5[2] = 0;
  param_5[3] = 0xf;
  *(undefined1 *)param_5 = 0;
  return param_1;
}

// FUN_14fb5f350 @ 14fb5f350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string_view<char,std::char_traits<char>_> *
FUN_14fb5f350(basic_string_view<char,std::char_traits<char>_> *param_1,char *param_2,
             undefined8 *param_3,basic_string_view<char,std::char_traits<char>_> **param_4,
             Edition param_5,longlong param_6)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 ****ppppuVar3;
  ulong64 uVar4;
  longlong lVar5;
  undefined1 auStack_188 [32];
  basic_string_view<char,std::char_traits<char>_> **local_168;
  code *pcStack_160;
  char *local_158;
  longlong lStack_150;
  longlong local_148;
  longlong lStack_140;
  basic_string_view<char,std::char_traits<char>_> **local_128;
  undefined8 uStack_120;
  basic_string_view<char,std::char_traits<char>_> local_118;
  undefined8 ***local_108;
  undefined8 uStack_100;
  undefined8 ***local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined8 local_a8;
  ulonglong uStack_a0;
  basic_string_view<char,std::char_traits<char>_> *local_98;
  code *local_90;
  char *local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 **local_68;
  longlong lStack_60;
  undefined8 ***local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong lStack_40;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  lVar5 = -1;
  if (param_6 == 0) {
    local_148 = 0;
    lStack_140 = 0;
  }
  else {
    local_148 = param_6;
    lStack_140 = lVar5;
    do {
      lStack_140 = lStack_140 + 1;
    } while (*(char *)(param_6 + lStack_140) != '\0');
  }
  uStack_d0 = 0;
  local_c8 = ___xmm_000000000000000f0000000000000000;
  uStack_c0 = _UNK_15076add8;
  local_d8 = (undefined8 ****)0x0;
  local_98 = google::protobuf::internal::ShortEditionName(&local_118,param_5);
  local_168 = (basic_string_view<char,std::char_traits<char>_> **)&local_d8;
  local_90 = absl::lts_20240722::str_format_internal::FormatArgImpl::
             Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
  local_128 = &local_98;
  uStack_120 = 1;
  local_158 = "%v";
  lStack_150 = 2;
  pcStack_160 = absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
                Flush<absl::lts_20240722::strings_internal::StringifySink>;
  absl::lts_20240722::str_format_internal::FormatUntyped(&local_168,&local_158,&local_128);
  local_108 = &local_d8;
  if (0xf < uStack_c0) {
    local_108 = local_d8;
  }
  uStack_100 = local_c8;
  pcStack_160 = (code *)lVar5;
  if (param_4 == (basic_string_view<char,std::char_traits<char>_> **)0x0) {
    local_168 = (basic_string_view<char,std::char_traits<char>_> **)0x0;
    pcStack_160 = (code *)0x0;
  }
  else {
    do {
      pcStack_160 = (code *)((longlong)pcStack_160 + 1);
      local_168 = param_4;
    } while (*(char *)((longlong)param_4 + (longlong)pcStack_160) != '\0');
  }
  if (param_2 == (char *)0x0) {
    local_158 = (char *)0x0;
    lStack_150 = 0;
  }
  else {
    do {
      lVar5 = lVar5 + 1;
      local_158 = param_2;
      lStack_150 = lVar5;
    } while (param_2[lVar5] != '\0');
  }
  local_88 = local_158;
  lStack_80 = lStack_150;
  local_78 = *param_3;
  uStack_70 = param_3[1];
  local_68 = (undefined8 **)local_168;
  lStack_60 = (longlong)pcStack_160;
  uStack_50 = local_c8;
  local_48 = local_148;
  lStack_40 = lStack_140;
  pcStack_160 = (code *)local_38;
  local_168 = (basic_string_view<char,std::char_traits<char>_> **)&local_88;
  local_58 = local_108;
  absl::lts_20240722::strings_internal::CatPieces(&local_b8,&local_168);
  local_168 = (basic_string_view<char,std::char_traits<char>_> **)&local_b8;
  if (0xf < uStack_a0) {
    local_168 = (basic_string_view<char,std::char_traits<char>_> **)CONCAT71(uStack_b7,local_b8);
  }
  pcStack_160 = (code *)local_a8;
  uStack_120 = local_a8;
  local_128 = local_168;
  absl::lts_20240722::FailedPreconditionError(param_1);
  if (0xf < uStack_a0) {
    uVar4 = uStack_a0 + 1;
    pvVar1 = (void *)CONCAT71(uStack_b7,local_b8);
    pvVar2 = pvVar1;
    if (0xfff < uVar4) {
      uVar4 = uStack_a0 + 0x28;
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,uVar4);
  }
  local_a8 = ___xmm_000000000000000f0000000000000000;
  uStack_a0 = _UNK_15076add8;
  local_b8 = 0;
  if (0xf < uStack_c0) {
    uVar4 = uStack_c0 + 1;
    ppppuVar3 = (undefined8 ****)local_d8;
    if (0xfff < uVar4) {
      uVar4 = uStack_c0 + 0x28;
      ppppuVar3 = (undefined8 ****)local_d8[-1];
      if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)ppppuVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(ppppuVar3,uVar4);
  }
  return param_1;
}

// FUN_14fb5f620 @ 14fb5f620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string_view<char,std::char_traits<char>_> *
FUN_14fb5f620(basic_string_view<char,std::char_traits<char>_> *param_1,_Bxty *param_2,
             Edition param_3)

{
  void *pvVar1;
  _Bxty *p_Var2;
  void *pvVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  undefined1 auStack_138 [32];
  _Bxty *local_118;
  code *pcStack_110;
  char *local_108;
  undefined8 uStack_100;
  _Bxty *local_e8;
  char *pcStack_e0;
  basic_string_view<char,std::char_traits<char>_> local_d8;
  _Bxty local_c8;
  ulong64 local_b8;
  ulonglong uStack_b0;
  basic_string_view<char,std::char_traits<char>_> *local_a8;
  code *local_a0;
  _Bxty local_98;
  ulong64 local_88;
  ulonglong uStack_80;
  AlphaNum local_78;
  AlphaNum local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_c8._8_8_ = 0;
  local_b8 = ___xmm_000000000000000f0000000000000000;
  uStack_b0 = _UNK_15076add8;
  local_c8._Ptr = (char *)0x0;
  local_a8 = param_1;
  local_a8 = google::protobuf::internal::ShortEditionName(&local_d8,param_3);
  local_118 = &local_c8;
  local_a0 = absl::lts_20240722::str_format_internal::FormatArgImpl::
             Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
  local_e8 = (_Bxty *)&local_a8;
  pcStack_e0 = (char *)0x1;
  local_108 = "%v";
  uStack_100 = 2;
  pcStack_110 = absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
                Flush<absl::lts_20240722::strings_internal::StringifySink>;
  absl::lts_20240722::str_format_internal::FormatUntyped(&local_118,&local_108,&local_e8);
  local_78.piece_._Mydata = (char *)&local_c8;
  if (0xf < uStack_b0) {
    local_78.piece_._Mydata = local_c8._Ptr;
  }
  local_78.piece_._Mysize = local_b8;
  if (param_2 == (_Bxty *)0x0) {
    local_118 = (_Bxty *)0x0;
    pcStack_110 = (code *)0x0;
  }
  else {
    pcStack_110 = (code *)0xffffffffffffffff;
    do {
      pcStack_110 = (code *)((longlong)pcStack_110 + 1);
      local_118 = param_2;
    } while (param_2->_Buf[(longlong)pcStack_110] != '\0');
  }
  local_48.piece_._Mydata = (char *)local_118;
  local_48.piece_._Mysize = (ulong64)pcStack_110;
  p_Var2 = (_Bxty *)absl::lts_20240722::StrCat
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_98,&local_48,&local_78);
  local_118 = p_Var2;
  if (0xf < *(ulong64 *)((longlong)p_Var2 + 0x18)) {
    local_118 = (_Bxty *)p_Var2->_Ptr;
  }
  pcStack_110 = (code *)p_Var2[1]._Ptr;
  local_e8 = local_118;
  pcStack_e0 = (char *)pcStack_110;
  absl::lts_20240722::FailedPreconditionError(param_1);
  if (0xf < uStack_80) {
    uVar5 = uStack_80 + 1;
    pvVar1 = (void *)CONCAT71(local_98._1_7_,local_98._Buf[0]);
    pvVar3 = pvVar1;
    if (0xfff < uVar5) {
      uVar5 = uStack_80 + 0x28;
      pvVar3 = *(void **)((longlong)pvVar1 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar5);
  }
  local_88 = ___xmm_000000000000000f0000000000000000;
  uStack_80 = _UNK_15076add8;
  local_98._Buf[0] = '\0';
  if (0xf < uStack_b0) {
    uVar5 = uStack_b0 + 1;
    uVar4 = local_c8._Ptr;
    if (0xfff < uVar5) {
      uVar5 = uStack_b0 + 0x28;
      uVar4 = *(undefined8 *)(local_c8._Ptr + -8);
      if ((char *)0x1f < local_c8._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar4,uVar5);
  }
  return param_1;
}

// FUN_14fb5f850 @ 14fb5f850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string_view<char,std::char_traits<char>_> *
FUN_14fb5f850(basic_string_view<char,std::char_traits<char>_> *param_1,_Bxty *param_2,
             Edition param_3,basic_string_view<char,std::char_traits<char>_> *param_4)

{
  void *pvVar1;
  _Bxty *p_Var2;
  void *pvVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  undefined1 auStack_178 [32];
  _Bxty *local_158;
  code *pcStack_150;
  char *local_148;
  undefined8 uStack_140;
  _Bxty *local_128;
  char *pcStack_120;
  basic_string_view<char,std::char_traits<char>_> local_118;
  basic_string_view<char,std::char_traits<char>_> *local_108;
  code *pcStack_100;
  _Bxty local_f8;
  ulong64 local_e8;
  ulonglong uStack_e0;
  _Bxty local_d8;
  ulong64 local_c8;
  ulonglong uStack_c0;
  AlphaNum local_b8;
  AlphaNum local_88;
  AlphaNum local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  uVar5 = 0xffffffffffffffff;
  pcStack_100 = (code *)uVar5;
  if (param_4 == (basic_string_view<char,std::char_traits<char>_> *)0x0) {
    local_108 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
    pcStack_100 = (code *)0x0;
  }
  else {
    do {
      pcStack_100 = (code *)((longlong)pcStack_100 + 1);
      local_108 = param_4;
    } while (*(char *)((longlong)&param_4->_Mydata + (longlong)pcStack_100) != '\0');
  }
  local_88.piece_._Mydata = (char *)local_108;
  local_88.piece_._Mysize = (ulong64)pcStack_100;
  local_f8._8_8_ = 0;
  local_e8 = ___xmm_000000000000000f0000000000000000;
  uStack_e0 = _UNK_15076add8;
  local_f8._Ptr = (char *)0x0;
  local_108 = google::protobuf::internal::ShortEditionName(&local_118,param_3);
  local_158 = &local_f8;
  pcStack_100 = absl::lts_20240722::str_format_internal::FormatArgImpl::
                Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
  local_128 = (_Bxty *)&local_108;
  pcStack_120 = (char *)0x1;
  local_148 = "%v";
  uStack_140 = 2;
  pcStack_150 = absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
                Flush<absl::lts_20240722::strings_internal::StringifySink>;
  absl::lts_20240722::str_format_internal::FormatUntyped(&local_158,&local_148,&local_128);
  local_b8.piece_._Mydata = (char *)&local_f8;
  if (0xf < uStack_e0) {
    local_b8.piece_._Mydata = local_f8._Ptr;
  }
  local_b8.piece_._Mysize = local_e8;
  if (param_2 == (_Bxty *)0x0) {
    local_158 = (_Bxty *)0x0;
    pcStack_150 = (code *)0x0;
  }
  else {
    do {
      uVar5 = uVar5 + 1;
      local_158 = param_2;
      pcStack_150 = (code *)uVar5;
    } while (param_2->_Buf[uVar5] != '\0');
  }
  local_58.piece_._Mydata = (char *)local_158;
  local_58.piece_._Mysize = (ulong64)pcStack_150;
  p_Var2 = (_Bxty *)absl::lts_20240722::StrCat
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_d8,&local_58,&local_b8,&local_88);
  local_158 = p_Var2;
  if (0xf < *(ulong64 *)((longlong)p_Var2 + 0x18)) {
    local_158 = (_Bxty *)p_Var2->_Ptr;
  }
  pcStack_150 = (code *)p_Var2[1]._Ptr;
  local_128 = local_158;
  pcStack_120 = (char *)pcStack_150;
  absl::lts_20240722::FailedPreconditionError(param_1);
  if (0xf < uStack_c0) {
    uVar5 = uStack_c0 + 1;
    pvVar1 = (void *)CONCAT71(local_d8._1_7_,local_d8._Buf[0]);
    pvVar3 = pvVar1;
    if (0xfff < uVar5) {
      uVar5 = uStack_c0 + 0x28;
      pvVar3 = *(void **)((longlong)pvVar1 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar5);
  }
  local_c8 = ___xmm_000000000000000f0000000000000000;
  uStack_c0 = _UNK_15076add8;
  local_d8._Buf[0] = '\0';
  if (0xf < uStack_e0) {
    uVar5 = uStack_e0 + 1;
    uVar4 = local_f8._Ptr;
    if (0xfff < uVar5) {
      uVar5 = uStack_e0 + 0x28;
      uVar4 = *(undefined8 *)(local_f8._Ptr + -8);
      if ((char *)0x1f < local_f8._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar4,uVar5);
  }
  return param_1;
}

// FUN_14fb5fab0 @ 14fb5fab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string_view<char,std::char_traits<char>_> *
FUN_14fb5fab0(basic_string_view<char,std::char_traits<char>_> *param_1,_Bxty *param_2,
             Edition param_3,basic_string_view<char,std::char_traits<char>_> *param_4,
             undefined8 *param_5)

{
  void *pvVar1;
  _Bxty *p_Var2;
  void *pvVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  undefined1 auStackY_1b8 [32];
  _Bxty *local_188;
  code *pcStack_180;
  char *local_178;
  undefined8 uStack_170;
  _Bxty *local_158;
  char *pcStack_150;
  basic_string_view<char,std::char_traits<char>_> local_148;
  basic_string_view<char,std::char_traits<char>_> *local_138;
  code *pcStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulonglong uStack_110;
  _Bxty local_108;
  ulong64 local_f8;
  ulonglong uStack_f0;
  AlphaNum local_e8;
  AlphaNum local_b8;
  AlphaNum local_88;
  AlphaNum local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_b8.piece_._Mydata = (char *)*param_5;
  local_b8.piece_._Mysize = param_5[1];
  uVar5 = 0xffffffffffffffff;
  pcStack_130 = (code *)uVar5;
  if (param_4 == (basic_string_view<char,std::char_traits<char>_> *)0x0) {
    local_138 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
    pcStack_130 = (code *)0x0;
  }
  else {
    do {
      pcStack_130 = (code *)((longlong)pcStack_130 + 1);
      local_138 = param_4;
    } while (*(char *)((longlong)&param_4->_Mydata + (longlong)pcStack_130) != '\0');
  }
  local_88.piece_._Mydata = (char *)local_138;
  local_88.piece_._Mysize = (ulong64)pcStack_130;
  local_128._8_8_ = 0;
  local_118 = ___xmm_000000000000000f0000000000000000;
  uStack_110 = _UNK_15076add8;
  local_128._Ptr = (char *)0x0;
  local_138 = google::protobuf::internal::ShortEditionName(&local_148,param_3);
  local_188 = &local_128;
  pcStack_130 = absl::lts_20240722::str_format_internal::FormatArgImpl::
                Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
  local_158 = (_Bxty *)&local_138;
  pcStack_150 = (char *)0x1;
  local_178 = "%v";
  uStack_170 = 2;
  pcStack_180 = absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
                Flush<absl::lts_20240722::strings_internal::StringifySink>;
  absl::lts_20240722::str_format_internal::FormatUntyped(&local_188,&local_178,&local_158);
  local_e8.piece_._Mydata = (char *)&local_128;
  if (0xf < uStack_110) {
    local_e8.piece_._Mydata = local_128._Ptr;
  }
  local_e8.piece_._Mysize = local_118;
  if (param_2 == (_Bxty *)0x0) {
    local_188 = (_Bxty *)0x0;
    pcStack_180 = (code *)0x0;
  }
  else {
    do {
      uVar5 = uVar5 + 1;
      local_188 = param_2;
      pcStack_180 = (code *)uVar5;
    } while (param_2->_Buf[uVar5] != '\0');
  }
  local_58.piece_._Mydata = (char *)local_188;
  local_58.piece_._Mysize = (ulong64)pcStack_180;
  p_Var2 = (_Bxty *)absl::lts_20240722::StrCat
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_108,&local_58,&local_e8,&local_88,&local_b8);
  local_188 = p_Var2;
  if (0xf < *(ulong64 *)((longlong)p_Var2 + 0x18)) {
    local_188 = (_Bxty *)p_Var2->_Ptr;
  }
  pcStack_180 = (code *)p_Var2[1]._Ptr;
  local_158 = local_188;
  pcStack_150 = (char *)pcStack_180;
  absl::lts_20240722::FailedPreconditionError(param_1);
  if (0xf < uStack_f0) {
    uVar5 = uStack_f0 + 1;
    pvVar1 = (void *)CONCAT71(local_108._1_7_,local_108._Buf[0]);
    pvVar3 = pvVar1;
    if (0xfff < uVar5) {
      uVar5 = uStack_f0 + 0x28;
      pvVar3 = *(void **)((longlong)pvVar1 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar5);
  }
  local_f8 = ___xmm_000000000000000f0000000000000000;
  uStack_f0 = _UNK_15076add8;
  local_108._Buf[0] = '\0';
  if (0xf < uStack_110) {
    uVar5 = uStack_110 + 1;
    uVar4 = local_128._Ptr;
    if (0xfff < uVar5) {
      uVar5 = uStack_110 + 0x28;
      uVar4 = *(undefined8 *)(local_128._Ptr + -8);
      if ((char *)0x1f < local_128._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar4,uVar5);
  }
  return param_1;
}

// FUN_14fb5fd30 @ 14fb5fd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string_view<char,std::char_traits<char>_> *
FUN_14fb5fd30(basic_string_view<char,std::char_traits<char>_> *param_1,char *param_2,Edition param_3
             ,char *param_4,Edition param_5)

{
  void *pvVar1;
  basic_string_view<char,std::char_traits<char>_> *pbVar2;
  void *pvVar3;
  ulong64 uVar4;
  undefined1 auStackY_1f8 [32];
  char *local_1c8;
  undefined8 uStack_1c0;
  basic_string_view<char,std::char_traits<char>_> *local_1b8;
  char *pcStack_1b0;
  basic_string_view<char,std::char_traits<char>_> local_1a0;
  basic_string_view<char,std::char_traits<char>_> local_188;
  basic_string_view<char,std::char_traits<char>_> local_178;
  basic_string_view<char,std::char_traits<char>_> local_168;
  ulong64 local_158;
  ulonglong uStack_150;
  basic_string_view<char,std::char_traits<char>_> local_148;
  ulong64 local_138;
  ulonglong uStack_130;
  _Bxty local_128;
  ulong64 local_118;
  ulonglong uStack_110;
  AlphaNum local_108;
  AlphaNum local_d8;
  AlphaNum local_a8;
  AlphaNum local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_148._Mysize = 0;
  local_138 = ___xmm_000000000000000f0000000000000000;
  uStack_130 = _UNK_15076add8;
  local_148._Mydata = (char *)0x0;
  local_178._Mydata = (char *)param_1;
  local_178._Mydata = (char *)google::protobuf::internal::ShortEditionName(&local_1a0,param_5);
  local_188._Mydata = (char *)&local_148;
  local_178._Mysize =
       (ulong64)absl::lts_20240722::str_format_internal::FormatArgImpl::
                Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
  local_1b8 = &local_178;
  pcStack_1b0 = (char *)0x1;
  local_1c8 = "%v";
  uStack_1c0 = 2;
  local_188._Mysize =
       (ulong64)absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
                Flush<absl::lts_20240722::strings_internal::StringifySink>;
  absl::lts_20240722::str_format_internal::FormatUntyped(&local_188,&local_1c8,&local_1b8);
  local_108.piece_._Mydata = (char *)&local_148;
  if (0xf < uStack_130) {
    local_108.piece_._Mydata = local_148._Mydata;
  }
  local_108.piece_._Mysize = local_138;
  uVar4 = 0xffffffffffffffff;
  local_188._Mysize = uVar4;
  if (param_4 == (char *)0x0) {
    local_188._Mydata = (char *)0x0;
    local_188._Mysize = 0;
  }
  else {
    do {
      local_188._Mysize = local_188._Mysize + 1;
      local_188._Mydata = param_4;
    } while (param_4[local_188._Mysize] != '\0');
  }
  local_a8.piece_._Mydata = local_188._Mydata;
  local_a8.piece_._Mysize = local_188._Mysize;
  local_168._Mysize = 0;
  local_158 = ___xmm_000000000000000f0000000000000000;
  uStack_150 = _UNK_15076add8;
  local_168._Mydata = (char *)0x0;
  local_188._Mydata = (char *)google::protobuf::internal::ShortEditionName(&local_1a0,param_3);
  local_178._Mydata = (char *)&local_168;
  local_188._Mysize =
       (ulong64)absl::lts_20240722::str_format_internal::FormatArgImpl::
                Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
  local_1b8 = &local_188;
  pcStack_1b0 = (char *)0x1;
  local_1c8 = "%v";
  uStack_1c0 = 2;
  local_178._Mysize =
       (ulong64)absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
                Flush<absl::lts_20240722::strings_internal::StringifySink>;
  absl::lts_20240722::str_format_internal::FormatUntyped(&local_178,&local_1c8,&local_1b8);
  local_d8.piece_._Mydata = (char *)&local_168;
  if (0xf < uStack_150) {
    local_d8.piece_._Mydata = local_168._Mydata;
  }
  local_d8.piece_._Mysize = local_158;
  if (param_2 == (char *)0x0) {
    local_188._Mydata = (char *)0x0;
    local_188._Mysize = 0;
  }
  else {
    do {
      uVar4 = uVar4 + 1;
      local_188._Mydata = param_2;
      local_188._Mysize = uVar4;
    } while (param_2[uVar4] != '\0');
  }
  local_78.piece_._Mydata = local_188._Mydata;
  local_78.piece_._Mysize = local_188._Mysize;
  pbVar2 = (basic_string_view<char,std::char_traits<char>_> *)
           absl::lts_20240722::StrCat
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_128,
                      &local_78,&local_d8,&local_a8,&local_108);
  local_1b8 = pbVar2;
  if (0xf < pbVar2[1]._Mysize) {
    local_1b8 = (basic_string_view<char,std::char_traits<char>_> *)
                (((_Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1>
                   *)&pbVar2->_Mydata)->_Myval2)._Bx._Ptr;
  }
  pcStack_1b0 = pbVar2[1]._Mydata;
  local_188._Mydata = (char *)local_1b8;
  local_188._Mysize = (ulong64)pcStack_1b0;
  absl::lts_20240722::FailedPreconditionError(param_1);
  if (0xf < uStack_110) {
    uVar4 = uStack_110 + 1;
    pvVar1 = (void *)CONCAT71(local_128._1_7_,local_128._Buf[0]);
    pvVar3 = pvVar1;
    if (0xfff < uVar4) {
      uVar4 = uStack_110 + 0x28;
      pvVar3 = *(void **)((longlong)pvVar1 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar4);
  }
  local_118 = ___xmm_000000000000000f0000000000000000;
  uStack_110 = _UNK_15076add8;
  local_128._Buf[0] = '\0';
  if (0xf < uStack_150) {
    uVar4 = uStack_150 + 1;
    pbVar2 = (basic_string_view<char,std::char_traits<char>_> *)local_168._Mydata;
    if (0xfff < uVar4) {
      uVar4 = uStack_150 + 0x28;
      pbVar2 = (basic_string_view<char,std::char_traits<char>_> *)
               ((basic_string_view<char,std::char_traits<char>_> *)
               ((longlong)local_168._Mydata + -0x10))->_Mysize;
      if (0x1f < (ulonglong)((longlong)local_168._Mydata + (-8 - (longlong)pbVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar2,uVar4);
  }
  local_158 = ___xmm_000000000000000f0000000000000000;
  uStack_150 = _UNK_15076add8;
  local_168._Mydata = (char *)((ulonglong)local_168._Mydata & 0xffffffffffffff00);
  if (0xf < uStack_130) {
    uVar4 = uStack_130 + 1;
    pbVar2 = (basic_string_view<char,std::char_traits<char>_> *)local_148._Mydata;
    if (0xfff < uVar4) {
      uVar4 = uStack_130 + 0x28;
      pbVar2 = (basic_string_view<char,std::char_traits<char>_> *)
               ((basic_string_view<char,std::char_traits<char>_> *)
               ((longlong)local_148._Mydata + -0x10))->_Mysize;
      if (0x1f < (ulonglong)((longlong)local_148._Mydata + (-8 - (longlong)pbVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar2,uVar4);
  }
  return param_1;
}

// FUN_14fb600b0 @ 14fb600b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string_view<char,std::char_traits<char>_> *
FUN_14fb600b0(basic_string_view<char,std::char_traits<char>_> *param_1,
             basic_string_view<char,std::char_traits<char>_> *param_2,Edition param_3,
             undefined8 ****param_4,Edition param_5,longlong param_6)

{
  void *pvVar1;
  void *pvVar2;
  basic_string_view<char,std::char_traits<char>_> *pbVar3;
  undefined8 *****pppppuVar4;
  ulong64 uVar5;
  undefined1 auStack_1f8 [32];
  basic_string_view<char,std::char_traits<char>_> *local_1d8;
  code *pcStack_1d0;
  undefined8 ****local_1c8;
  code *pcStack_1c0;
  longlong local_1b8;
  ulong64 uStack_1b0;
  basic_string_view<char,std::char_traits<char>_> local_1a8;
  basic_string_view<char,std::char_traits<char>_> local_190;
  basic_string_view<char,std::char_traits<char>_> *local_180;
  undefined8 uStack_178;
  undefined8 ****local_150;
  undefined8 uStack_148;
  basic_string_view<char,std::char_traits<char>_> local_118;
  basic_string_view<char,std::char_traits<char>_> *local_108;
  code *pcStack_100;
  basic_string_view<char,std::char_traits<char>_> local_f8;
  undefined8 local_e8;
  ulonglong uStack_e0;
  undefined8 ****local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  basic_string_view<char,std::char_traits<char>_> local_b8;
  ulong64 local_a8;
  ulonglong uStack_a0;
  basic_string_view<char,std::char_traits<char>_> local_98;
  basic_string_view<char,std::char_traits<char>_> *local_88;
  undefined8 uStack_80;
  undefined8 ***local_78;
  ulong64 uStack_70;
  undefined8 ****local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulong64 uStack_50;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_1f8;
  uVar5 = 0xffffffffffffffff;
  if (param_6 == 0) {
    local_1b8 = 0;
    uStack_1b0 = 0;
  }
  else {
    local_1b8 = param_6;
    uStack_1b0 = uVar5;
    do {
      uStack_1b0 = uStack_1b0 + 1;
    } while (*(char *)(param_6 + uStack_1b0) != '\0');
  }
  uStack_d0 = 0;
  local_c8 = ___xmm_000000000000000f0000000000000000;
  uStack_c0 = _UNK_15076add8;
  local_d8 = (undefined8 *****)0x0;
  local_118._Mydata = (char *)google::protobuf::internal::ShortEditionName(&local_1a8,param_5);
  local_1c8 = &local_d8;
  local_118._Mysize =
       (ulong64)absl::lts_20240722::str_format_internal::FormatArgImpl::
                Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
  local_1d8 = &local_118;
  pcStack_1d0 = (code *)0x1;
  local_108 = (basic_string_view<char,std::char_traits<char>_> *)0x1535d3fdc;
  pcStack_100 = (code *)0x2;
  pcStack_1c0 = absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
                Flush<absl::lts_20240722::strings_internal::StringifySink>;
  absl::lts_20240722::str_format_internal::FormatUntyped(&local_1c8,&local_108,&local_1d8);
  local_150 = &local_d8;
  if (0xf < uStack_c0) {
    local_150 = local_d8;
  }
  uStack_148 = local_c8;
  pcStack_1c0 = (code *)uVar5;
  if (param_4 == (undefined8 ****)0x0) {
    local_1c8 = (undefined8 ****)0x0;
    pcStack_1c0 = (code *)0x0;
  }
  else {
    do {
      pcStack_1c0 = (code *)((longlong)pcStack_1c0 + 1);
      local_1c8 = param_4;
    } while (*(char *)((longlong)param_4 + (longlong)pcStack_1c0) != '\0');
  }
  local_f8._Mysize = 0;
  local_e8 = ___xmm_000000000000000f0000000000000000;
  uStack_e0 = _UNK_15076add8;
  local_f8._Mydata = (char *)0x0;
  local_108 = google::protobuf::internal::ShortEditionName(&local_190,param_3);
  pcStack_100 = absl::lts_20240722::str_format_internal::FormatArgImpl::
                Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
  local_1a8._Mydata = (char *)&local_108;
  local_1a8._Mysize = 1;
  local_118._Mydata = "%v";
  local_118._Mysize = 2;
  pcStack_1d0 = absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
                Flush<absl::lts_20240722::strings_internal::StringifySink>;
  local_1d8 = &local_f8;
  absl::lts_20240722::str_format_internal::FormatUntyped(&local_1d8,&local_118,&local_1a8);
  local_180 = &local_f8;
  if (0xf < uStack_e0) {
    local_180 = (basic_string_view<char,std::char_traits<char>_> *)local_f8._Mydata;
  }
  uStack_178 = local_e8;
  if (param_2 == (basic_string_view<char,std::char_traits<char>_> *)0x0) {
    local_1d8 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
    pcStack_1d0 = (code *)0x0;
  }
  else {
    do {
      uVar5 = uVar5 + 1;
      local_1d8 = param_2;
      pcStack_1d0 = (code *)uVar5;
    } while (*(char *)((longlong)&param_2->_Mydata + uVar5) != '\0');
  }
  local_98._Mydata = (char *)local_1d8;
  local_98._Mysize = (ulong64)pcStack_1d0;
  uStack_80 = local_e8;
  local_78 = local_1c8;
  uStack_70 = (ulong64)pcStack_1c0;
  local_68 = local_150;
  uStack_60 = uStack_148;
  local_58 = local_1b8;
  uStack_50 = uStack_1b0;
  local_1d8 = &local_98;
  pcStack_1d0 = (code *)local_48;
  local_88 = local_180;
  absl::lts_20240722::strings_internal::CatPieces(&local_b8,&local_1d8);
  local_1d8 = &local_b8;
  if (0xf < uStack_a0) {
    local_1d8 = (basic_string_view<char,std::char_traits<char>_> *)
                CONCAT71(local_b8._Mydata._1_7_,local_b8._Mydata._0_1_);
  }
  pcStack_1d0 = (code *)local_a8;
  local_1a8._Mysize = local_a8;
  local_1a8._Mydata = (char *)local_1d8;
  absl::lts_20240722::FailedPreconditionError(param_1);
  if (0xf < uStack_a0) {
    uVar5 = uStack_a0 + 1;
    pvVar1 = (void *)CONCAT71(local_b8._Mydata._1_7_,local_b8._Mydata._0_1_);
    pvVar2 = pvVar1;
    if (0xfff < uVar5) {
      uVar5 = uStack_a0 + 0x28;
      pvVar2 = *(void **)((longlong)pvVar1 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar2,uVar5);
  }
  local_a8 = ___xmm_000000000000000f0000000000000000;
  uStack_a0 = _UNK_15076add8;
  local_b8._Mydata._0_1_ = 0;
  if (0xf < uStack_e0) {
    uVar5 = uStack_e0 + 1;
    pbVar3 = (basic_string_view<char,std::char_traits<char>_> *)local_f8._Mydata;
    if (0xfff < uVar5) {
      uVar5 = uStack_e0 + 0x28;
      pbVar3 = (basic_string_view<char,std::char_traits<char>_> *)
               ((basic_string_view<char,std::char_traits<char>_> *)
               ((longlong)local_f8._Mydata + -0x10))->_Mysize;
      if (0x1f < (ulonglong)((longlong)local_f8._Mydata + (-8 - (longlong)pbVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pbVar3,uVar5);
  }
  local_e8 = ___xmm_000000000000000f0000000000000000;
  uStack_e0 = _UNK_15076add8;
  local_f8._Mydata = (char *)((ulonglong)local_f8._Mydata & 0xffffffffffffff00);
  if (0xf < uStack_c0) {
    uVar5 = uStack_c0 + 1;
    pppppuVar4 = (undefined8 *****)local_d8;
    if (0xfff < uVar5) {
      uVar5 = uStack_c0 + 0x28;
      pppppuVar4 = (undefined8 *****)local_d8[-1];
      if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)pppppuVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pppppuVar4,uVar5);
  }
  return param_1;
}

// GetField<1> @ 14fb60490

/* private: unsigned int * __ptr64 __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::GetField<1>(void) __ptr64 */

uint * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::GetField<1>(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              *this)

{
  return (uint *)(this + 8);
}

// GetField<1> @ 14fb604a0

/* private: unsigned int const * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::GetField<1>(void)const __ptr64 */

uint * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::GetField<1>(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              *this)

{
  return (uint *)(this + 8);
}

// GetField<2> @ 14fb604b0

/* private: unsigned char * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::GetField<2>(void) __ptr64 */

uchar * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::GetField<2>(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              *this)

{
  return (uchar *)(this + 8);
}

// GetField<2> @ 14fb604c0

/* private: unsigned char const * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::GetField<2>(void)const __ptr64 */

uchar * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::GetField<2>(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              *this)

{
  return (uchar *)(this + 8);
}

// GetField<3> @ 14fb604d0

/* private: enum google::protobuf::Edition * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::GetField<3>(void) __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::GetField<3>(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              *this)

{
  return (Edition *)(this + 0xc);
}

// GetField<3> @ 14fb604e0

/* private: enum google::protobuf::Edition const * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::GetField<3>(void)const __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::GetField<3>(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              *this)

{
  return (Edition *)(this + 0xc);
}

// GetField<4> @ 14fb604f0

/* private: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::GetField<4>(void) __ptr64 */

btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
** __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::GetField<4>(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              *this)

{
  return (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
          **)(this + 0x100);
}

// GetField<4> @ 14fb60500

/* private: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 const * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::GetField<4>(void)const __ptr64 */

btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
** __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::GetField<4>(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              *this)

{
  return (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
          **)(this + 0x100);
}

// GetField<0> @ 14fb60510

/* private: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::GetField<0>(void) __ptr64 */

btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
** __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::GetField<0>(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              *this)

{
  return (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
          **)this;
}

// GetField<0> @ 14fb60520

/* private: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 const * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::GetField<0>(void)const __ptr64 */

btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
** __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::GetField<0>(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              *this)

{
  return (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
          **)this;
}

// MakeStatus<> @ 14fb60530

/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::FeatureResolver>::MakeStatus<>(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::FeatureResolver>::MakeStatus<>
          (StatusOrData<google::protobuf::FeatureResolver> *this)

{
  *(undefined8 *)this = 1;
  return;
}

// MakeStatus<> @ 14fb60540

/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::FeatureSet>::MakeStatus<>(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::FeatureSet>::MakeStatus<>
          (StatusOrData<google::protobuf::FeatureSet> *this)

{
  *(undefined8 *)this = 1;
  return;
}

// MakeStatus<> @ 14fb60550

/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::FeatureSetDefaults>::MakeStatus<>(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::FeatureSetDefaults>::
MakeStatus<>(StatusOrData<google::protobuf::FeatureSetDefaults> *this)

{
  *(undefined8 *)this = 1;
  return;
}

// Offset<1,0> @ 14fb60560

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Offset<1,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Offset<1,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
              *this)

{
  return 8;
}

// Offset<1,0> @ 14fb60570

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4>,struct std::integer_sequence<unsigned __int64,0,1>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Offset<1,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Offset<1,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
              *this)

{
  return 8;
}

// Offset<2,0> @ 14fb60580

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Offset<2,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Offset<2,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
              *this)

{
  return 8;
}

// Offset<2,0> @ 14fb60590

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4>,struct std::integer_sequence<unsigned __int64,0,1>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Offset<2,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Offset<2,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
              *this)

{
  return 8;
}

// Offset<3,0> @ 14fb605a0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Offset<3,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Offset<3,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
              *this)

{
  return 0xc;
}

// Offset<3,0> @ 14fb605b0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4>,struct std::integer_sequence<unsigned __int64,0,1>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Offset<3,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Offset<3,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
              *this)

{
  return 0xc;
}

// Offset<4,0> @ 14fb605c0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Offset<4,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Offset<4,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
              *this)

{
  return 0x100;
}

// Offset<4,0> @ 14fb605d0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4>,struct std::integer_sequence<unsigned __int64,0,1>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Offset<4,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Offset<4,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
              *this)

{
  return *(longlong *)this * 4 + 0x13U & 0xfffffffffffffff8;
}

// Offset<0,0> @ 14fb605f0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Offset<0,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Offset<0,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
              *this)

{
  return 0;
}

// Offset<0,0> @ 14fb60600

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4>,struct std::integer_sequence<unsigned __int64,0,1>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Offset<0,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Offset<0,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
              *this)

{
  return 0;
}

// Pointer<1,char_const_> @ 14fb60610

/* public: unsigned int const * __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Pointer<1,char const >(char const * __ptr64)const __ptr64 */

uint * __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Pointer<1,char_const_>
          (LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
           *this,char *param_1)

{
  return (uint *)(param_1 + 8);
}

// Pointer<1,char> @ 14fb60620

/* public: unsigned int * __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Pointer<1,char>(char * __ptr64)const __ptr64 */

uint * __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Pointer<1,char>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
                  *this,char *param_1)

{
  return (uint *)(param_1 + 8);
}

// Pointer<2,char_const_> @ 14fb60630

/* public: unsigned char const * __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Pointer<2,char const >(char const * __ptr64)const __ptr64 */

uchar * __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Pointer<2,char_const_>
          (LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
           *this,char *param_1)

{
  return (uchar *)(param_1 + 8);
}

// Pointer<2,char> @ 14fb60640

/* public: unsigned char * __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Pointer<2,char>(char * __ptr64)const __ptr64 */

uchar * __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Pointer<2,char>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
                  *this,char *param_1)

{
  return (uchar *)(param_1 + 8);
}

// Pointer<3,char_const_> @ 14fb60650

/* public: enum google::protobuf::Edition const * __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Pointer<3,char const >(char const * __ptr64)const __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Pointer<3,char_const_>
          (LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
           *this,char *param_1)

{
  return (Edition *)(param_1 + 0xc);
}

// Pointer<3,char> @ 14fb60660

/* public: enum google::protobuf::Edition * __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Pointer<3,char>(char * __ptr64)const __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Pointer<3,char>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
                  *this,char *param_1)

{
  return (Edition *)(param_1 + 0xc);
}

// Pointer<4,char_const_> @ 14fb60670

/* public: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 const * __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Pointer<4,char const >(char const * __ptr64)const __ptr64 */

btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
** __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Pointer<4,char_const_>
          (LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
           *this,char *param_1)

{
  return (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          **)(param_1 + 0x100);
}

// Pointer<4,char> @ 14fb60680

/* public: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Pointer<4,char>(char * __ptr64)const __ptr64 */

btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
** __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Pointer<4,char>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
                  *this,char *param_1)

{
  return (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          **)(param_1 + 0x100);
}

// Pointer<0,char_const_> @ 14fb60690

/* public: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 const * __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Pointer<0,char const >(char const * __ptr64)const __ptr64 */

btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
** __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Pointer<0,char_const_>
          (LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
           *this,char *param_1)

{
  return (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          **)param_1;
}

// Pointer<0,char> @ 14fb606a0

/* public: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 * __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Pointer<0,char>(char * __ptr64)const __ptr64 */

btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
** __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Pointer<0,char>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
                  *this,char *param_1)

{
  return (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          **)param_1;
}

// SanitizerPoisonObject<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64> @ 14fb606b0

/* void __cdecl absl::lts_20240722::container_internal::SanitizerPoisonObject<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>(class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 const * __ptr64) */

void __cdecl
absl::lts_20240722::container_internal::
SanitizerPoisonObject<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>
          (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           **param_1)

{
  return;
}

// SanitizerPoisonObject<google::protobuf::Edition> @ 14fb606c0

/* void __cdecl absl::lts_20240722::container_internal::SanitizerPoisonObject<enum
   google::protobuf::Edition>(enum google::protobuf::Edition const * __ptr64) */

void __cdecl
absl::lts_20240722::container_internal::SanitizerPoisonObject<google::protobuf::Edition>
          (Edition *param_1)

{
  return;
}

// SanitizerUnpoisonObject<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64> @ 14fb606d0

/* void __cdecl absl::lts_20240722::container_internal::SanitizerUnpoisonObject<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>(class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 const * __ptr64) */

void __cdecl
absl::lts_20240722::container_internal::
SanitizerUnpoisonObject<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>
          (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           **param_1)

{
  return;
}

// SanitizerUnpoisonObject<google::protobuf::Edition> @ 14fb606e0

/* void __cdecl absl::lts_20240722::container_internal::SanitizerUnpoisonObject<enum
   google::protobuf::Edition>(enum google::protobuf::Edition const * __ptr64) */

void __cdecl
absl::lts_20240722::container_internal::SanitizerUnpoisonObject<google::protobuf::Edition>
          (Edition *param_1)

{
  return;
}

// Size<1,0> @ 14fb606f0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Size<1,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Size<1,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
            *this)

{
  return 0;
}

// Size<1,0> @ 14fb60700

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4>,struct std::integer_sequence<unsigned __int64,0,1>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Size<1,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Size<1,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
            *this)

{
  return 0;
}

// Size<2,0> @ 14fb60710

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Size<2,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Size<2,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
            *this)

{
  return 4;
}

// Size<2,0> @ 14fb60720

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4>,struct std::integer_sequence<unsigned __int64,0,1>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Size<2,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Size<2,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
            *this)

{
  return 4;
}

// Size<3,0> @ 14fb60730

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Size<3,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Size<3,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
            *this)

{
  return 0x3d;
}

// Size<3,0> @ 14fb60740

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4>,struct std::integer_sequence<unsigned __int64,0,1>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Size<3,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Size<3,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
            *this)

{
  return *(__uint64 *)this;
}

// Size<4,0> @ 14fb60750

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Size<4,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Size<4,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
            *this)

{
  return 0x3e;
}

// Size<4,0> @ 14fb60760

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4>,struct std::integer_sequence<unsigned __int64,0,1>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Size<4,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Size<4,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
            *this)

{
  return *(__uint64 *)(this + 8);
}

// Size<0,0> @ 14fb60770

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Size<0,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Size<0,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
            *this)

{
  return 1;
}

// Size<0,0> @ 14fb60780

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4>,struct std::integer_sequence<unsigned __int64,0,1>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::Size<0,0>(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::Size<0,0>(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
            *this)

{
  return 1;
}

// StrCat<google::protobuf::Edition> @ 14fb60790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::StrCat<enum google::protobuf::Edition>(class absl::lts_20240722::AlphaNum
   const & __ptr64,class absl::lts_20240722::AlphaNum const & __ptr64,class
   absl::lts_20240722::AlphaNum const & __ptr64,class absl::lts_20240722::AlphaNum const &
   __ptr64,class absl::lts_20240722::AlphaNum const & __ptr64,enum google::protobuf::Edition const &
   __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::StrCat<google::protobuf::Edition>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          AlphaNum *param_1,AlphaNum *param_2,AlphaNum *param_3,AlphaNum *param_4,AlphaNum *param_5,
          Edition *param_6)

{
  undefined8 uVar1;
  undefined8 ****ppppuVar2;
  ulong64 uVar3;
  undefined1 auStack_148 [32];
  undefined8 ***local_128;
  code *pcStack_120;
  char *local_118;
  undefined8 uStack_110;
  basic_string_view<char,std::char_traits<char>_> **local_f8;
  undefined8 uStack_f0;
  basic_string_view<char,std::char_traits<char>_> local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 ***local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  basic_string_view<char,std::char_traits<char>_> *local_88;
  code *local_80;
  char *local_78;
  ulong64 uStack_70;
  char *local_68;
  ulong64 uStack_60;
  char *local_58;
  ulong64 uStack_50;
  char *local_48;
  ulong64 uStack_40;
  char *local_38;
  ulong64 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_148;
  local_78 = (param_1->piece_)._Mydata;
  uStack_70 = (param_1->piece_)._Mysize;
  local_68 = (param_2->piece_)._Mydata;
  uStack_60 = (param_2->piece_)._Mysize;
  local_58 = (param_3->piece_)._Mydata;
  uStack_50 = (param_3->piece_)._Mysize;
  local_48 = (param_4->piece_)._Mydata;
  uStack_40 = (param_4->piece_)._Mysize;
  local_38 = (param_5->piece_)._Mydata;
  uStack_30 = (param_5->piece_)._Mysize;
  uStack_a0 = 0;
  local_98 = ___xmm_000000000000000f0000000000000000;
  uStack_90 = _UNK_15076add8;
  local_a8 = (undefined8 ****)0x0;
  local_88 = (basic_string_view<char,std::char_traits<char>_> *)__return_storage_ptr__;
  local_88 = google::protobuf::internal::ShortEditionName(&local_e8,*param_6);
  local_128 = &local_a8;
  local_80 = str_format_internal::FormatArgImpl::
             Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
  local_f8 = &local_88;
  uStack_f0 = 1;
  local_118 = "%v";
  uStack_110 = 2;
  pcStack_120 = str_format_internal::FormatRawSinkImpl::
                Flush<absl::lts_20240722::strings_internal::StringifySink>;
  str_format_internal::FormatUntyped(&local_128,&local_118,&local_f8);
  ppppuVar2 = &local_a8;
  if (0xf < uStack_90) {
    ppppuVar2 = (undefined8 ****)local_a8;
  }
  uStack_d0 = local_98;
  uVar1 = uStack_d0;
  local_d8._0_4_ = SUB84(ppppuVar2,0);
  local_d8._4_4_ = (undefined4)((ulonglong)ppppuVar2 >> 0x20);
  uStack_d0._0_4_ = (undefined4)local_98;
  uStack_d0._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
  local_28 = (undefined4)local_d8;
  uStack_24 = local_d8._4_4_;
  uStack_20 = (undefined4)uStack_d0;
  uStack_1c = uStack_d0._4_4_;
  local_128 = (undefined8 ***)&local_78;
  pcStack_120 = (code *)local_18;
  local_d8 = ppppuVar2;
  uStack_d0 = uVar1;
  strings_internal::CatPieces(__return_storage_ptr__,&local_128);
  if (0xf < uStack_90) {
    uVar3 = uStack_90 + 1;
    ppppuVar2 = (undefined8 ****)local_a8;
    if (0xfff < uVar3) {
      uVar3 = uStack_90 + 0x28;
      ppppuVar2 = (undefined8 ****)local_a8[-1];
      if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)ppppuVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(ppppuVar2,uVar3);
  }
  return __return_storage_ptr__;
}

// WrapUnique<google::protobuf::Message> @ 14fb60930

/* class std::unique_ptr<class google::protobuf::Message,struct std::default_delete<class
   google::protobuf::Message> > __cdecl absl::lts_20240722::WrapUnique<class
   google::protobuf::Message>(class google::protobuf::Message * __ptr64) */

Message * __cdecl absl::lts_20240722::WrapUnique<google::protobuf::Message>(Message *param_1)

{
  undefined8 in_RDX;
  
  *(undefined8 *)param_1 = in_RDX;
  return param_1;
}

// _Adl_verify_range<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>,google::protobuf::internal::RepeatedPtrIterator<class_google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>_> @ 14fb60950

/* void __cdecl std::_Adl_verify_range<class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const >,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > >(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > const & __ptr64,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>,google::protobuf::internal::RepeatedPtrIterator<class_google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>_>
          (RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>
           *param_1,
          RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>
          *param_2)

{
  return;
}

// _Adl_verify_range<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>,google::protobuf::internal::RepeatedPtrIterator<class_google::protobuf::FieldOptions_EditionDefault_const_>_> @ 14fb60960

/* void __cdecl std::_Adl_verify_range<class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const >,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > >(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > const & __ptr64,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>,google::protobuf::internal::RepeatedPtrIterator<class_google::protobuf::FieldOptions_EditionDefault_const_>_>
          (RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_> *param_1,
          RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_> *param_2)

{
  return;
}

// _Adl_verify_range<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>,std::_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_google::protobuf::FieldOptions_EditionDefault>_>_>_> @ 14fb60970

/* void __cdecl std::_Adl_verify_range<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault> > >,class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > > >(class std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault> >
   > const & __ptr64,class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault> > > const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>,std::_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_google::protobuf::FieldOptions_EditionDefault>_>_>_>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
           *param_1,
          _Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
          *param_2)

{
  return;
}

// _Allocate_at_least_helper<std::allocator<google::protobuf::FieldOptions_EditionDefault>_> @ 14fb60980

/* class google::protobuf::FieldOptions_EditionDefault * __ptr64 __cdecl
   std::_Allocate_at_least_helper<class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> >(class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> & __ptr64,unsigned __int64 & __ptr64) */

FieldOptions_EditionDefault * __cdecl
std::_Allocate_at_least_helper<std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
          (allocator<google::protobuf::FieldOptions_EditionDefault> *param_1,__uint64 *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  FieldOptions_EditionDefault *pFVar3;
  
  if (*param_2 < 0x666666666666667) {
    uVar1 = *param_2 * 0x28;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        pFVar3 = ::operator_new(uVar1);
        return pFVar3;
      }
      return (FieldOptions_EditionDefault *)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pvVar2 = ::operator_new(uVar1 + 0x27);
      if (pvVar2 != (void *)0x0) {
        pFVar3 = (FieldOptions_EditionDefault *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
        *(void **)&pFVar3[-1]._impl_.edition_ = pvVar2;
        return pFVar3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Construct_n<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>,google::protobuf::internal::RepeatedPtrIterator<class_google::protobuf::FieldOptions_EditionDefault_const_>_> @ 14fb60a00

/* private: void __cdecl std::vector<class google::protobuf::FieldOptions_EditionDefault,class
   std::allocator<class google::protobuf::FieldOptions_EditionDefault> >::_Construct_n<class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const >,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > >(unsigned __int64,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > && __ptr64,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > && __ptr64) __ptr64 */

void __thiscall
std::
vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
::
_Construct_n<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>,google::protobuf::internal::RepeatedPtrIterator<class_google::protobuf::FieldOptions_EditionDefault_const_>_>
          (vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
           *this,__uint64 param_1,
          RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_> *param_2,
          RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_> *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  FieldOptions_EditionDefault *this_00;
  
  if (param_1 != 0) {
    if (0x666666666666666 < param_1) {
                    /* WARNING: Subroutine does not return */
      _Xlength();
    }
    uVar1 = param_1 * 0x28;
    if (uVar1 < 0x1000) {
      if (uVar1 == 0) {
        this_00 = (FieldOptions_EditionDefault *)0x0;
      }
      else {
        this_00 = ::operator_new(uVar1);
      }
    }
    else {
      if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        _Throw_bad_array_new_length();
      }
      pvVar3 = ::operator_new(uVar1 + 0x27);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      this_00 = (FieldOptions_EditionDefault *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
      *(void **)&this_00[-1]._impl_.edition_ = pvVar3;
    }
    *(FieldOptions_EditionDefault **)this = this_00;
    *(FieldOptions_EditionDefault **)(this + 8) = this_00;
    *(FieldOptions_EditionDefault **)(this + 0x10) = this_00 + param_1;
    puVar2 = *(undefined8 **)param_3;
    for (puVar4 = *(undefined8 **)param_2; puVar4 != puVar2; puVar4 = puVar4 + 1) {
      google::protobuf::FieldOptions_EditionDefault::FieldOptions_EditionDefault
                (this_00,(Arena *)0x0,(FieldOptions_EditionDefault *)*puVar4);
      this_00->_padding_ = (longlong)google::protobuf::FieldOptions_EditionDefault::vftable;
      this_00 = this_00 + 1;
    }
    *(FieldOptions_EditionDefault **)(this + 8) = this_00;
  }
  return;
}

// _Destroy_range<std::allocator<google::protobuf::FieldOptions_EditionDefault>_> @ 14fb60b30

/* void __cdecl std::_Destroy_range<class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> >(class
   google::protobuf::FieldOptions_EditionDefault * __ptr64,class
   google::protobuf::FieldOptions_EditionDefault * __ptr64 const,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> & __ptr64) */

void __cdecl
std::_Destroy_range<std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
          (FieldOptions_EditionDefault *param_1,FieldOptions_EditionDefault *param_2,
          allocator<google::protobuf::FieldOptions_EditionDefault> *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    google::protobuf::FieldOptions_EditionDefault::~FieldOptions_EditionDefault(param_1);
  }
  return;
}

// _Emplace_back<google::protobuf::FieldOptions_EditionDefault_const&___ptr64> @ 14fb60b70

/* public: void __cdecl std::_Uninitialized_backout_al<class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> >::_Emplace_back<class
   google::protobuf::FieldOptions_EditionDefault const & __ptr64>(class
   google::protobuf::FieldOptions_EditionDefault const & __ptr64) __ptr64 */

void __thiscall
std::_Uninitialized_backout_al<std::allocator<google::protobuf::FieldOptions_EditionDefault>_>::
_Emplace_back<google::protobuf::FieldOptions_EditionDefault_const&___ptr64>
          (_Uninitialized_backout_al<std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
           *this,FieldOptions_EditionDefault *param_1)

{
  FieldOptions_EditionDefault *this_00;
  
  this_00 = *(FieldOptions_EditionDefault **)(this + 8);
  google::protobuf::FieldOptions_EditionDefault::FieldOptions_EditionDefault
            (this_00,(Arena *)0x0,param_1);
  this_00->_padding_ = (longlong)google::protobuf::FieldOptions_EditionDefault::vftable;
  *(longlong *)(this + 8) = *(longlong *)(this + 8) + 0x28;
  return;
}

// _Get_unwrapped<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>&___ptr64> @ 14fb60bb0

/* UNKNOWN __cdecl std::_Get_unwrapped<class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > & __ptr64>(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > & __ptr64) */

RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_> * __cdecl
std::
_Get_unwrapped<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>&___ptr64>
          (RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>
           *param_1)

{
  return param_1;
}

// _Get_unwrapped<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>&___ptr64> @ 14fb60bc0

/* UNKNOWN __cdecl std::_Get_unwrapped<class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > & __ptr64>(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > & __ptr64) */

RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_> * __cdecl
std::
_Get_unwrapped<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>&___ptr64>
          (RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_> *param_1)

{
  return param_1;
}

// _Get_unwrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>&___ptr64> @ 14fb60bd0

/* UNKNOWN __cdecl std::_Get_unwrapped<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault> > > & __ptr64>(class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > > & __ptr64) */

undefined8 __cdecl
std::
_Get_unwrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>&___ptr64>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
           *param_1)

{
  return *(undefined8 *)param_1;
}

// _Get_unwrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>_const&___ptr64> @ 14fb60be0

/* UNKNOWN __cdecl std::_Get_unwrapped<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault> > > const &
   __ptr64>(class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > > const & __ptr64) */

undefined8 __cdecl
std::
_Get_unwrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>_const&___ptr64>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
           *param_1)

{
  return *(undefined8 *)param_1;
}

// FUN_14fb60bf0 @ 14fb60bf0

void FUN_14fb60bf0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = (param_3 - param_1) / 0x28;
  if (0x28 < lVar1) {
    lVar2 = lVar1 + 1 >> 3;
    lVar1 = lVar2 * 0x28 + param_1;
    FUN_14fb61200(param_1,lVar1,lVar2 * 0x50 + param_1,param_4);
    FUN_14fb61200(param_2 + lVar2 * -0x28,param_2,lVar2 * 0x28 + param_2,param_4);
    lVar3 = param_3 + lVar2 * -0x28;
    FUN_14fb61200(param_3 + lVar2 * -0x50,lVar3,param_3,param_4);
    FUN_14fb61200(lVar1,param_2,lVar3,param_4);
    return;
  }
  FUN_14fb61200(param_1,param_2,param_3,param_4);
  return;
}

// FUN_14fb60cf0 @ 14fb60cf0

FieldOptions_EditionDefault *
FUN_14fb60cf0(FieldOptions_EditionDefault *param_1,FieldOptions_EditionDefault *param_2)

{
  FieldOptions_EditionDefault *pFVar1;
  FieldOptions_EditionDefault *pFVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  FieldOptions_EditionDefault *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  FieldOptions_EditionDefault *pFVar8;
  FieldOptions_EditionDefault local_48;
  
  pFVar2 = param_1;
  if (param_1 != param_2) {
    while (pFVar2 = pFVar2 + 1, pFVar2 != param_2) {
      google::protobuf::FieldOptions_EditionDefault::FieldOptions_EditionDefault
                (&local_48,(Arena *)0x0);
      local_48._padding_ = (longlong)google::protobuf::FieldOptions_EditionDefault::vftable;
      if (&local_48 != pFVar2) {
        puVar3 = (undefined8 *)(pFVar2->_padding_ & 0xfffffffffffffffe);
        if ((pFVar2->_padding_ & 1) != 0) {
          puVar3 = (undefined8 *)*puVar3;
        }
        if ((local_48._padding_ & 1U) == 0) {
          puVar4 = (undefined8 *)(local_48._padding_ & 0xfffffffffffffffe);
        }
        else {
          puVar4 = *(undefined8 **)(local_48._padding_ & 0xfffffffffffffffe);
        }
        if (puVar4 == puVar3) {
          google::protobuf::FieldOptions_EditionDefault::InternalSwap(&local_48,pFVar2);
        }
        else {
          google::protobuf::FieldOptions_EditionDefault::CopyFrom(&local_48,pFVar2);
        }
      }
      local_48._padding_ = (longlong)google::protobuf::FieldOptions_EditionDefault::vftable;
      if (local_48._impl_.edition_ < (param_1->_impl_).edition_) {
        if (param_1 != pFVar2) {
          plVar6 = &pFVar2->_padding_;
          do {
            plVar7 = plVar6 + -5;
            pFVar5 = (FieldOptions_EditionDefault *)(plVar6 + -1);
            pFVar8 = (FieldOptions_EditionDefault *)(plVar6 + -6);
            if (pFVar5 != pFVar8) {
              puVar3 = (undefined8 *)(*plVar7 & 0xfffffffffffffffe);
              if ((*plVar7 & 1) != 0) {
                puVar3 = (undefined8 *)*puVar3;
              }
              puVar4 = (undefined8 *)(*plVar6 & 0xfffffffffffffffe);
              if ((*plVar6 & 1) != 0) {
                puVar4 = (undefined8 *)*puVar4;
              }
              if (puVar4 == puVar3) {
                google::protobuf::FieldOptions_EditionDefault::InternalSwap(pFVar5,pFVar8);
              }
              else {
                google::protobuf::FieldOptions_EditionDefault::CopyFrom(pFVar5,pFVar8);
              }
            }
            pFVar5 = (FieldOptions_EditionDefault *)(plVar6 + -6);
            plVar6 = plVar7;
          } while (pFVar5 != param_1);
        }
        if (param_1 != &local_48) {
          if ((local_48._padding_ & 1U) == 0) {
            puVar3 = (undefined8 *)(local_48._padding_ & 0xfffffffffffffffe);
          }
          else {
            puVar3 = *(undefined8 **)(local_48._padding_ & 0xfffffffffffffffe);
          }
          puVar4 = (undefined8 *)(param_1->_padding_ & 0xfffffffffffffffe);
          if ((param_1->_padding_ & 1) != 0) {
            puVar4 = (undefined8 *)*puVar4;
          }
          pFVar5 = param_1;
          if (puVar4 == puVar3) {
            google::protobuf::FieldOptions_EditionDefault::InternalSwap(param_1,&local_48);
          }
          else {
LAB_14fb60ef4:
            google::protobuf::FieldOptions_EditionDefault::CopyFrom(pFVar5,&local_48);
          }
        }
      }
      else {
        pFVar8 = pFVar2;
        pFVar5 = pFVar2;
        if (local_48._impl_.edition_ < pFVar2[-1]._impl_.edition_) {
          do {
            pFVar5 = pFVar8 + -1;
            if (pFVar8 != pFVar5) {
              puVar3 = (undefined8 *)(pFVar8[-1]._padding_ & 0xfffffffffffffffe);
              if ((pFVar8[-1]._padding_ & 1) != 0) {
                puVar3 = (undefined8 *)*puVar3;
              }
              puVar4 = (undefined8 *)(pFVar8->_padding_ & 0xfffffffffffffffe);
              if ((pFVar8->_padding_ & 1) != 0) {
                puVar4 = (undefined8 *)*puVar4;
              }
              if (puVar4 == puVar3) {
                google::protobuf::FieldOptions_EditionDefault::InternalSwap(pFVar8,pFVar5);
              }
              else {
                google::protobuf::FieldOptions_EditionDefault::CopyFrom(pFVar8,pFVar5);
              }
            }
            pFVar1 = pFVar8 + -2;
            pFVar8 = pFVar5;
          } while (local_48._impl_.edition_ < (pFVar1->_impl_).edition_);
        }
        if (pFVar5 != &local_48) {
          if ((local_48._padding_ & 1U) == 0) {
            puVar3 = (undefined8 *)(local_48._padding_ & 0xfffffffffffffffe);
          }
          else {
            puVar3 = *(undefined8 **)(local_48._padding_ & 0xfffffffffffffffe);
          }
          puVar4 = (undefined8 *)(pFVar5->_padding_ & 0xfffffffffffffffe);
          if ((pFVar5->_padding_ & 1) != 0) {
            puVar4 = (undefined8 *)*puVar4;
          }
          if (puVar4 != puVar3) goto LAB_14fb60ef4;
          google::protobuf::FieldOptions_EditionDefault::InternalSwap(pFVar5,&local_48);
        }
      }
      google::protobuf::FieldOptions_EditionDefault::~FieldOptions_EditionDefault(&local_48);
    }
  }
  return param_2;
}

// FUN_14fb60f40 @ 14fb60f40

void FUN_14fb60f40(longlong param_1,longlong param_2)

{
  FieldOptions_EditionDefault *pFVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  FieldOptions_EditionDefault *pFVar7;
  FieldOptions_EditionDefault *pFVar8;
  longlong lVar9;
  longlong lVar10;
  FieldOptions_EditionDefault local_58;
  
  uVar2 = (param_2 - param_1) / 0x28;
  lVar9 = (longlong)uVar2 >> 1;
  if (0 < lVar9) {
    lVar10 = (longlong)(uVar2 - 1) >> 1;
    pFVar7 = (FieldOptions_EditionDefault *)(param_1 + lVar9 * 0x28);
    do {
      lVar9 = lVar9 + -1;
      pFVar8 = pFVar7 + -1;
      google::protobuf::FieldOptions_EditionDefault::FieldOptions_EditionDefault
                (&local_58,(Arena *)0x0);
      local_58._padding_ = (longlong)google::protobuf::FieldOptions_EditionDefault::vftable;
      if (&local_58 != pFVar8) {
        puVar4 = (undefined8 *)(pFVar7[-1]._padding_ & 0xfffffffffffffffe);
        if ((pFVar7[-1]._padding_ & 1) != 0) {
          puVar4 = (undefined8 *)*puVar4;
        }
        if ((local_58._padding_ & 1U) == 0) {
          puVar5 = (undefined8 *)(local_58._padding_ & 0xfffffffffffffffe);
        }
        else {
          puVar5 = *(undefined8 **)(local_58._padding_ & 0xfffffffffffffffe);
        }
        if (puVar5 == puVar4) {
          google::protobuf::FieldOptions_EditionDefault::InternalSwap(&local_58,pFVar8);
        }
        else {
          google::protobuf::FieldOptions_EditionDefault::CopyFrom(&local_58,pFVar8);
        }
      }
      local_58._padding_ = (longlong)google::protobuf::FieldOptions_EditionDefault::vftable;
      lVar3 = lVar9;
      while (lVar3 < lVar10) {
        lVar6 = param_1 + lVar3 * 0x50;
        lVar6 = (ulonglong)(*(int *)(lVar6 + 0x48) <= *(int *)(lVar6 + 0x70)) + 1 + lVar3 * 2;
        pFVar7 = (FieldOptions_EditionDefault *)(param_1 + lVar6 * 0x28);
        pFVar1 = (FieldOptions_EditionDefault *)(param_1 + lVar3 * 0x28);
        lVar3 = lVar6;
        if (pFVar1 != pFVar7) {
          puVar4 = (undefined8 *)(pFVar7->_padding_ & 0xfffffffffffffffe);
          if ((pFVar7->_padding_ & 1) != 0) {
            puVar4 = (undefined8 *)*puVar4;
          }
          puVar5 = (undefined8 *)(pFVar1->_padding_ & 0xfffffffffffffffe);
          if ((pFVar1->_padding_ & 1) != 0) {
            puVar5 = (undefined8 *)*puVar5;
          }
          if (puVar5 == puVar4) {
            google::protobuf::FieldOptions_EditionDefault::InternalSwap(pFVar1,pFVar7);
          }
          else {
            google::protobuf::FieldOptions_EditionDefault::CopyFrom(pFVar1,pFVar7);
          }
        }
      }
      if ((lVar3 == lVar10) && ((uVar2 & 1) == 0)) {
        pFVar7 = (FieldOptions_EditionDefault *)(param_1 + (uVar2 - 1) * 0x28);
        pFVar1 = (FieldOptions_EditionDefault *)(param_1 + lVar3 * 0x28);
        if (pFVar1 != pFVar7) {
          puVar4 = (undefined8 *)(pFVar7->_padding_ & 0xfffffffffffffffe);
          if ((pFVar7->_padding_ & 1) != 0) {
            puVar4 = (undefined8 *)*puVar4;
          }
          puVar5 = (undefined8 *)(pFVar1->_padding_ & 0xfffffffffffffffe);
          if ((pFVar1->_padding_ & 1) != 0) {
            puVar5 = (undefined8 *)*puVar5;
          }
          if (puVar5 == puVar4) {
            google::protobuf::FieldOptions_EditionDefault::InternalSwap(pFVar1,pFVar7);
          }
          else {
            google::protobuf::FieldOptions_EditionDefault::CopyFrom(pFVar1,pFVar7);
          }
        }
        lVar3 = uVar2 - 1;
      }
      while (lVar9 < lVar3) {
        lVar6 = lVar3 + -1 >> 1;
        pFVar7 = (FieldOptions_EditionDefault *)(param_1 + lVar6 * 0x28);
        if (local_58._impl_.edition_ <= (pFVar7->_impl_).edition_) break;
        pFVar1 = (FieldOptions_EditionDefault *)(param_1 + lVar3 * 0x28);
        lVar3 = lVar6;
        if (pFVar1 != pFVar7) {
          puVar4 = (undefined8 *)(pFVar7->_padding_ & 0xfffffffffffffffe);
          if ((pFVar7->_padding_ & 1) != 0) {
            puVar4 = (undefined8 *)*puVar4;
          }
          puVar5 = (undefined8 *)(pFVar1->_padding_ & 0xfffffffffffffffe);
          if ((pFVar1->_padding_ & 1) != 0) {
            puVar5 = (undefined8 *)*puVar5;
          }
          if (puVar5 == puVar4) {
            google::protobuf::FieldOptions_EditionDefault::InternalSwap(pFVar1,pFVar7);
          }
          else {
            google::protobuf::FieldOptions_EditionDefault::CopyFrom(pFVar1,pFVar7);
          }
        }
      }
      pFVar7 = (FieldOptions_EditionDefault *)(param_1 + lVar3 * 0x28);
      if (pFVar7 != &local_58) {
        if ((local_58._padding_ & 1U) == 0) {
          puVar4 = (undefined8 *)(local_58._padding_ & 0xfffffffffffffffe);
        }
        else {
          puVar4 = *(undefined8 **)(local_58._padding_ & 0xfffffffffffffffe);
        }
        puVar5 = (undefined8 *)(pFVar7->_padding_ & 0xfffffffffffffffe);
        if ((pFVar7->_padding_ & 1) != 0) {
          puVar5 = (undefined8 *)*puVar5;
        }
        if (puVar5 == puVar4) {
          google::protobuf::FieldOptions_EditionDefault::InternalSwap(pFVar7,&local_58);
        }
        else {
          google::protobuf::FieldOptions_EditionDefault::CopyFrom(pFVar7,&local_58);
        }
      }
      google::protobuf::FieldOptions_EditionDefault::~FieldOptions_EditionDefault(&local_58);
      pFVar7 = pFVar8;
    } while (0 < lVar9);
  }
  return;
}

// FUN_14fb61200 @ 14fb61200

void FUN_14fb61200(FieldOptions_EditionDefault *param_1,FieldOptions_EditionDefault *param_2,
                  FieldOptions_EditionDefault *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (((param_2->_impl_).edition_ < (param_1->_impl_).edition_) && (param_1 != param_2)) {
    puVar1 = (undefined8 *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(param_2->_padding_ & 0xfffffffffffffffe);
    if ((param_2->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      google::protobuf::FieldOptions_EditionDefault::InternalSwap(param_2,param_1);
    }
    else {
      google::protobuf::internal::GenericSwap((Message *)param_2,(Message *)param_1);
    }
  }
  if ((param_3->_impl_).edition_ < (param_2->_impl_).edition_) {
    if (param_2 != param_3) {
      puVar1 = (undefined8 *)(param_2->_padding_ & 0xfffffffffffffffe);
      if ((param_2->_padding_ & 1) != 0) {
        puVar1 = (undefined8 *)*puVar1;
      }
      puVar2 = (undefined8 *)(param_3->_padding_ & 0xfffffffffffffffe);
      if ((param_3->_padding_ & 1) != 0) {
        puVar2 = (undefined8 *)*puVar2;
      }
      if (puVar2 == puVar1) {
        google::protobuf::FieldOptions_EditionDefault::InternalSwap(param_3,param_2);
      }
      else {
        google::protobuf::internal::GenericSwap((Message *)param_3,(Message *)param_2);
      }
    }
    if (((param_2->_impl_).edition_ < (param_1->_impl_).edition_) && (param_1 != param_2)) {
      puVar1 = (undefined8 *)(param_1->_padding_ & 0xfffffffffffffffe);
      if ((param_1->_padding_ & 1) != 0) {
        puVar1 = (undefined8 *)*puVar1;
      }
      puVar2 = (undefined8 *)(param_2->_padding_ & 0xfffffffffffffffe);
      if ((param_2->_padding_ & 1) != 0) {
        puVar2 = (undefined8 *)*puVar2;
      }
      if (puVar2 == puVar1) {
        google::protobuf::FieldOptions_EditionDefault::InternalSwap(param_2,param_1);
        return;
      }
      google::protobuf::internal::GenericSwap((Message *)param_2,(Message *)param_1);
    }
  }
  return;
}

// _Move_backward_unchecked<google::protobuf::FieldOptions_EditionDefault*___ptr64,google::protobuf::FieldOptions_EditionDefault*___ptr64> @ 14fb61320

/* class google::protobuf::FieldOptions_EditionDefault * __ptr64 __cdecl
   std::_Move_backward_unchecked<class google::protobuf::FieldOptions_EditionDefault * __ptr64,class
   google::protobuf::FieldOptions_EditionDefault * __ptr64>(class
   google::protobuf::FieldOptions_EditionDefault * __ptr64,class
   google::protobuf::FieldOptions_EditionDefault * __ptr64,class
   google::protobuf::FieldOptions_EditionDefault * __ptr64) */

FieldOptions_EditionDefault * __cdecl
std::
_Move_backward_unchecked<google::protobuf::FieldOptions_EditionDefault*___ptr64,google::protobuf::FieldOptions_EditionDefault*___ptr64>
          (FieldOptions_EditionDefault *param_1,FieldOptions_EditionDefault *param_2,
          FieldOptions_EditionDefault *param_3)

{
  FieldOptions_EditionDefault *pFVar1;
  FieldOptions_EditionDefault *pFVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  while (pFVar2 = param_3, pFVar1 = param_2, param_1 != pFVar1) {
    param_2 = pFVar1 + -1;
    param_3 = pFVar2 + -1;
    if (param_3 != param_2) {
      puVar3 = (undefined8 *)(pFVar1[-1]._padding_ & 0xfffffffffffffffe);
      if ((pFVar1[-1]._padding_ & 1) != 0) {
        puVar3 = (undefined8 *)*puVar3;
      }
      puVar4 = (undefined8 *)(pFVar2[-1]._padding_ & 0xfffffffffffffffe);
      if ((pFVar2[-1]._padding_ & 1) != 0) {
        puVar4 = (undefined8 *)*puVar4;
      }
      if (puVar4 == puVar3) {
        google::protobuf::FieldOptions_EditionDefault::InternalSwap(param_3,param_2);
      }
      else {
        google::protobuf::FieldOptions_EditionDefault::CopyFrom(param_3,param_2);
      }
    }
  }
  return pFVar2;
}

// _Next_iter<google::protobuf::FieldOptions_EditionDefault*___ptr64> @ 14fb613b0

/* class google::protobuf::FieldOptions_EditionDefault * __ptr64 __cdecl std::_Next_iter<class
   google::protobuf::FieldOptions_EditionDefault * __ptr64>(class
   google::protobuf::FieldOptions_EditionDefault * __ptr64) */

FieldOptions_EditionDefault * __cdecl
std::_Next_iter<google::protobuf::FieldOptions_EditionDefault*___ptr64>
          (FieldOptions_EditionDefault *param_1)

{
  return param_1 + 1;
}

// _Next_iter<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>_> @ 14fb613c0

/* class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > __cdecl
   std::_Next_iter<class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > >(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const >) */

longlong * __cdecl
std::
_Next_iter<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>_>
          (longlong *param_1,longlong param_2)

{
  *param_1 = param_2 + 8;
  return param_1;
}

// FUN_14fb613e0 @ 14fb613e0

undefined8 *
FUN_14fb613e0(undefined8 *param_1,FieldOptions_EditionDefault *param_2,
             FieldOptions_EditionDefault *param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  FieldOptions_EditionDefault *pFVar6;
  FieldOptions_EditionDefault *this;
  FieldOptions_EditionDefault *pFVar7;
  FieldOptions_EditionDefault *pFVar8;
  FieldOptions_EditionDefault *pFVar9;
  FieldOptions_EditionDefault *this_00;
  FieldOptions_EditionDefault *pFVar10;
  
  pFVar6 = param_3 + -1;
  pFVar9 = param_2 + (((longlong)param_3 - (longlong)param_2) / 0x28 >> 1);
  lVar3 = ((longlong)pFVar6 - (longlong)param_2) / 0x28;
  if (lVar3 < 0x29) {
    FUN_14fb61200(param_2,pFVar9,pFVar6,param_4);
  }
  else {
    lVar3 = lVar3 + 1 >> 3;
    FUN_14fb61200(param_2,param_2 + lVar3,param_2 + lVar3 * 2,param_4);
    FUN_14fb61200(pFVar9 + -lVar3,pFVar9,pFVar9 + lVar3,param_4);
    FUN_14fb61200(param_3 + -1 + lVar3 * -2,pFVar6 + -lVar3,param_3 + -1,param_4);
    FUN_14fb61200(param_2 + lVar3,pFVar9,pFVar6 + -lVar3,param_4);
  }
  pFVar6 = pFVar9 + 1;
  for (; param_2 < pFVar9; pFVar9 = pFVar9 + -1) {
    iVar2 = pFVar9[-1]._impl_.edition_;
    iVar1 = (pFVar9->_impl_).edition_;
    if ((iVar2 < iVar1) || (iVar1 < iVar2)) break;
  }
  pFVar7 = pFVar6;
  pFVar10 = pFVar9;
  if (pFVar6 < param_3) {
    iVar1 = (pFVar9->_impl_).edition_;
    do {
      iVar2 = (pFVar6->_impl_).edition_;
      pFVar7 = pFVar6;
      if ((iVar2 < iVar1) || (iVar1 < iVar2)) break;
      pFVar6 = pFVar6 + 1;
      pFVar7 = pFVar6;
    } while (pFVar6 < param_3);
  }
joined_r0x00014fb61529:
  do {
    this_00 = pFVar10;
    this = pFVar7;
    pFVar7 = pFVar9;
    if (param_3 <= pFVar6) {
joined_r0x00014fb61588:
      for (; param_2 < pFVar9; pFVar9 = pFVar9 + -1) {
        pFVar8 = pFVar7 + -1;
        iVar2 = pFVar7[-1]._impl_.edition_;
        iVar1 = (this_00->_impl_).edition_;
        pFVar10 = this_00;
        if (iVar1 <= iVar2) {
          if (iVar1 < iVar2) break;
          pFVar10 = this_00 + -1;
          if (pFVar10 != pFVar8) {
            puVar4 = (undefined8 *)(pFVar7[-1]._padding_ & 0xfffffffffffffffe);
            if ((pFVar7[-1]._padding_ & 1) != 0) {
              puVar4 = (undefined8 *)*puVar4;
            }
            puVar5 = (undefined8 *)(this_00[-1]._padding_ & 0xfffffffffffffffe);
            if ((this_00[-1]._padding_ & 1) != 0) {
              puVar5 = (undefined8 *)*puVar5;
            }
            if (puVar5 == puVar4) {
              google::protobuf::FieldOptions_EditionDefault::InternalSwap(pFVar10,pFVar8);
            }
            else {
              google::protobuf::internal::GenericSwap((Message *)pFVar10,(Message *)pFVar8);
            }
          }
        }
        this_00 = pFVar10;
        pFVar7 = pFVar8;
      }
      if (pFVar9 == param_2) {
        if (pFVar6 == param_3) {
          param_1[1] = this;
          *param_1 = this_00;
          return param_1;
        }
        if ((this != pFVar6) && (this != this_00)) {
          puVar4 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
          if ((this->_padding_ & 1) != 0) {
            puVar4 = (undefined8 *)*puVar4;
          }
          puVar5 = (undefined8 *)(this_00->_padding_ & 0xfffffffffffffffe);
          if ((this_00->_padding_ & 1) != 0) {
            puVar5 = (undefined8 *)*puVar5;
          }
          if (puVar5 == puVar4) {
            google::protobuf::FieldOptions_EditionDefault::InternalSwap(this_00,this);
          }
          else {
            google::protobuf::internal::GenericSwap((Message *)this_00,(Message *)this);
          }
        }
        pFVar7 = this + 1;
        if (pFVar6 != this_00) {
          puVar4 = (undefined8 *)(pFVar6->_padding_ & 0xfffffffffffffffe);
          if ((pFVar6->_padding_ & 1) != 0) {
            puVar4 = (undefined8 *)*puVar4;
          }
          puVar5 = (undefined8 *)(this_00->_padding_ & 0xfffffffffffffffe);
          if ((this_00->_padding_ & 1) != 0) {
            puVar5 = (undefined8 *)*puVar5;
          }
          if (puVar5 == puVar4) {
            google::protobuf::FieldOptions_EditionDefault::InternalSwap(this_00,pFVar6);
            pFVar6 = pFVar6 + 1;
            pFVar10 = this_00 + 1;
            goto joined_r0x00014fb61529;
          }
          google::protobuf::internal::GenericSwap((Message *)this_00,(Message *)pFVar6);
        }
        pFVar6 = pFVar6 + 1;
        pFVar10 = this_00 + 1;
        goto joined_r0x00014fb61529;
      }
      pFVar8 = pFVar9 + -1;
      if (pFVar6 != param_3) {
        pFVar7 = this;
        pFVar10 = this_00;
        if (pFVar8 != pFVar6) {
          puVar4 = (undefined8 *)(pFVar9[-1]._padding_ & 0xfffffffffffffffe);
          if ((pFVar9[-1]._padding_ & 1) != 0) {
            puVar4 = (undefined8 *)*puVar4;
          }
          puVar5 = (undefined8 *)(pFVar6->_padding_ & 0xfffffffffffffffe);
          if ((pFVar6->_padding_ & 1) != 0) {
            puVar5 = (undefined8 *)*puVar5;
          }
          if (puVar5 == puVar4) {
            google::protobuf::FieldOptions_EditionDefault::InternalSwap(pFVar6,pFVar8);
            pFVar6 = pFVar6 + 1;
            pFVar9 = pFVar8;
            goto joined_r0x00014fb61529;
          }
          google::protobuf::internal::GenericSwap((Message *)pFVar6,(Message *)pFVar8);
        }
        pFVar6 = pFVar6 + 1;
        pFVar9 = pFVar8;
        goto joined_r0x00014fb61529;
      }
      pFVar10 = this_00 + -1;
      if (pFVar8 != pFVar10) {
        puVar4 = (undefined8 *)(this_00[-1]._padding_ & 0xfffffffffffffffe);
        if ((this_00[-1]._padding_ & 1) != 0) {
          puVar4 = (undefined8 *)*puVar4;
        }
        puVar5 = (undefined8 *)(pFVar9[-1]._padding_ & 0xfffffffffffffffe);
        if ((pFVar9[-1]._padding_ & 1) != 0) {
          puVar5 = (undefined8 *)*puVar5;
        }
        if (puVar5 == puVar4) {
          google::protobuf::FieldOptions_EditionDefault::InternalSwap(pFVar8,pFVar10);
        }
        else {
          google::protobuf::internal::GenericSwap((Message *)pFVar8,(Message *)pFVar10);
        }
      }
      pFVar7 = this + -1;
      pFVar9 = pFVar8;
      if (pFVar7 != pFVar10) {
        puVar4 = (undefined8 *)(this[-1]._padding_ & 0xfffffffffffffffe);
        if ((this[-1]._padding_ & 1) != 0) {
          puVar4 = (undefined8 *)*puVar4;
        }
        puVar5 = (undefined8 *)(this_00[-1]._padding_ & 0xfffffffffffffffe);
        if ((this_00[-1]._padding_ & 1) != 0) {
          puVar5 = (undefined8 *)*puVar5;
        }
        if (puVar5 == puVar4) {
          google::protobuf::FieldOptions_EditionDefault::InternalSwap(pFVar10,pFVar7);
        }
        else {
          google::protobuf::internal::GenericSwap((Message *)pFVar10,(Message *)pFVar7);
        }
      }
      goto joined_r0x00014fb61529;
    }
    iVar2 = (this_00->_impl_).edition_;
    iVar1 = (pFVar6->_impl_).edition_;
    if (iVar1 <= iVar2) {
      if (iVar1 < iVar2) goto joined_r0x00014fb61588;
      if (this != pFVar6) {
        puVar4 = (undefined8 *)(pFVar6->_padding_ & 0xfffffffffffffffe);
        if ((pFVar6->_padding_ & 1) != 0) {
          puVar4 = (undefined8 *)*puVar4;
        }
        puVar5 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
        if ((this->_padding_ & 1) != 0) {
          puVar5 = (undefined8 *)*puVar5;
        }
        if (puVar5 == puVar4) {
          google::protobuf::FieldOptions_EditionDefault::InternalSwap(this,pFVar6);
        }
        else {
          google::protobuf::internal::GenericSwap((Message *)this,(Message *)pFVar6);
        }
      }
      this = this + 1;
    }
    pFVar6 = pFVar6 + 1;
    pFVar7 = this;
    pFVar10 = this_00;
  } while( true );
}

// FUN_14fb617d0 @ 14fb617d0

void FUN_14fb617d0(longlong param_1,longlong param_2,ulonglong param_3,
                  FieldOptions_EditionDefault *param_4)

{
  FieldOptions_EditionDefault *pFVar1;
  FieldOptions_EditionDefault *pFVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(param_3 - 1) >> 1;
  lVar3 = param_2;
  while (lVar3 < lVar7) {
    lVar6 = param_1 + lVar3 * 0x50;
    lVar6 = (ulonglong)(*(int *)(lVar6 + 0x48) <= *(int *)(lVar6 + 0x70)) + 1 + lVar3 * 2;
    pFVar1 = (FieldOptions_EditionDefault *)(param_1 + lVar6 * 0x28);
    pFVar2 = (FieldOptions_EditionDefault *)(param_1 + lVar3 * 0x28);
    lVar3 = lVar6;
    if (pFVar2 != pFVar1) {
      puVar4 = (undefined8 *)(pFVar1->_padding_ & 0xfffffffffffffffe);
      if ((pFVar1->_padding_ & 1) != 0) {
        puVar4 = (undefined8 *)*puVar4;
      }
      puVar5 = (undefined8 *)(pFVar2->_padding_ & 0xfffffffffffffffe);
      if ((pFVar2->_padding_ & 1) != 0) {
        puVar5 = (undefined8 *)*puVar5;
      }
      if (puVar5 == puVar4) {
        google::protobuf::FieldOptions_EditionDefault::InternalSwap(pFVar2,pFVar1);
      }
      else {
        google::protobuf::FieldOptions_EditionDefault::CopyFrom(pFVar2,pFVar1);
      }
    }
  }
  if ((lVar3 == lVar7) && ((param_3 & 1) == 0)) {
    pFVar1 = (FieldOptions_EditionDefault *)(param_1 + (param_3 - 1) * 0x28);
    pFVar2 = (FieldOptions_EditionDefault *)(param_1 + lVar3 * 0x28);
    if (pFVar2 != pFVar1) {
      puVar4 = (undefined8 *)(pFVar1->_padding_ & 0xfffffffffffffffe);
      if ((pFVar1->_padding_ & 1) != 0) {
        puVar4 = (undefined8 *)*puVar4;
      }
      puVar5 = (undefined8 *)(pFVar2->_padding_ & 0xfffffffffffffffe);
      if ((pFVar2->_padding_ & 1) != 0) {
        puVar5 = (undefined8 *)*puVar5;
      }
      if (puVar5 == puVar4) {
        google::protobuf::FieldOptions_EditionDefault::InternalSwap(pFVar2,pFVar1);
      }
      else {
        google::protobuf::FieldOptions_EditionDefault::CopyFrom(pFVar2,pFVar1);
      }
    }
    lVar3 = param_3 - 1;
  }
  while (param_2 < lVar3) {
    lVar7 = lVar3 + -1 >> 1;
    pFVar1 = (FieldOptions_EditionDefault *)(param_1 + lVar7 * 0x28);
    if ((param_4->_impl_).edition_ <= (pFVar1->_impl_).edition_) break;
    pFVar2 = (FieldOptions_EditionDefault *)(param_1 + lVar3 * 0x28);
    lVar3 = lVar7;
    if (pFVar2 != pFVar1) {
      puVar4 = (undefined8 *)(pFVar1->_padding_ & 0xfffffffffffffffe);
      if ((pFVar1->_padding_ & 1) != 0) {
        puVar4 = (undefined8 *)*puVar4;
      }
      puVar5 = (undefined8 *)(pFVar2->_padding_ & 0xfffffffffffffffe);
      if ((pFVar2->_padding_ & 1) != 0) {
        puVar5 = (undefined8 *)*puVar5;
      }
      if (puVar5 == puVar4) {
        google::protobuf::FieldOptions_EditionDefault::InternalSwap(pFVar2,pFVar1);
      }
      else {
        google::protobuf::FieldOptions_EditionDefault::CopyFrom(pFVar2,pFVar1);
      }
    }
  }
  pFVar1 = (FieldOptions_EditionDefault *)(param_1 + lVar3 * 0x28);
  if (pFVar1 != param_4) {
    puVar4 = (undefined8 *)(param_4->_padding_ & 0xfffffffffffffffe);
    if ((param_4->_padding_ & 1) != 0) {
      puVar4 = (undefined8 *)*puVar4;
    }
    puVar5 = (undefined8 *)(pFVar1->_padding_ & 0xfffffffffffffffe);
    if ((pFVar1->_padding_ & 1) != 0) {
      puVar5 = (undefined8 *)*puVar5;
    }
    if (puVar5 == puVar4) {
      google::protobuf::FieldOptions_EditionDefault::InternalSwap(pFVar1,param_4);
    }
    else {
      google::protobuf::FieldOptions_EditionDefault::CopyFrom(pFVar1,param_4);
    }
  }
  return;
}

// FUN_14fb619d0 @ 14fb619d0

void FUN_14fb619d0(FieldOptions_EditionDefault *param_1,longlong param_2,
                  FieldOptions_EditionDefault *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != param_1) {
    puVar1 = (undefined8 *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(param_3->_padding_ & 0xfffffffffffffffe);
    if ((param_3->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      google::protobuf::FieldOptions_EditionDefault::InternalSwap(param_3,param_1);
    }
    else {
      google::protobuf::FieldOptions_EditionDefault::CopyFrom(param_3,param_1);
    }
  }
  FUN_14fb617d0(param_1,0,(param_2 - (longlong)param_1) / 0x28,param_4);
  return;
}

// FUN_14fb61a80 @ 14fb61a80

void FUN_14fb61a80(FieldOptions_EditionDefault *param_1,longlong param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  FieldOptions_EditionDefault *this;
  FieldOptions_EditionDefault local_38;
  
  if (1 < (param_2 - (longlong)param_1) / 0x28) {
    this = (FieldOptions_EditionDefault *)(param_2 + -0x28);
    google::protobuf::FieldOptions_EditionDefault::FieldOptions_EditionDefault
              (&local_38,(Arena *)0x0);
    local_38._padding_ = (longlong)google::protobuf::FieldOptions_EditionDefault::vftable;
    if (&local_38 != this) {
      puVar1 = (undefined8 *)(*(ulonglong *)(param_2 + -0x20) & 0xfffffffffffffffe);
      if ((*(byte *)(param_2 + -0x20) & 1) != 0) {
        puVar1 = (undefined8 *)*puVar1;
      }
      if ((local_38._padding_ & 1U) == 0) {
        puVar2 = (undefined8 *)(local_38._padding_ & 0xfffffffffffffffe);
      }
      else {
        puVar2 = *(undefined8 **)(local_38._padding_ & 0xfffffffffffffffe);
      }
      if (puVar2 == puVar1) {
        google::protobuf::FieldOptions_EditionDefault::InternalSwap(&local_38,this);
      }
      else {
        google::protobuf::FieldOptions_EditionDefault::CopyFrom(&local_38,this);
      }
    }
    local_38._padding_ = (longlong)google::protobuf::FieldOptions_EditionDefault::vftable;
    if (this != param_1) {
      puVar1 = (undefined8 *)(param_1->_padding_ & 0xfffffffffffffffe);
      if ((param_1->_padding_ & 1) != 0) {
        puVar1 = (undefined8 *)*puVar1;
      }
      puVar2 = (undefined8 *)(*(ulonglong *)(param_2 + -0x20) & 0xfffffffffffffffe);
      if ((*(byte *)(param_2 + -0x20) & 1) != 0) {
        puVar2 = (undefined8 *)*puVar2;
      }
      if (puVar2 == puVar1) {
        google::protobuf::FieldOptions_EditionDefault::InternalSwap(this,param_1);
      }
      else {
        google::protobuf::FieldOptions_EditionDefault::CopyFrom(this,param_1);
      }
    }
    FUN_14fb617d0(param_1,0,((longlong)this - (longlong)param_1) / 0x28,&local_38,param_3);
    google::protobuf::FieldOptions_EditionDefault::~FieldOptions_EditionDefault(&local_38);
  }
  return;
}

// _Prev_iter<google::protobuf::FieldOptions_EditionDefault*___ptr64> @ 14fb61be0

/* class google::protobuf::FieldOptions_EditionDefault * __ptr64 __cdecl std::_Prev_iter<class
   google::protobuf::FieldOptions_EditionDefault * __ptr64>(class
   google::protobuf::FieldOptions_EditionDefault * __ptr64) */

FieldOptions_EditionDefault * __cdecl
std::_Prev_iter<google::protobuf::FieldOptions_EditionDefault*___ptr64>
          (FieldOptions_EditionDefault *param_1)

{
  return param_1 + -1;
}

// FUN_14fb61bf0 @ 14fb61bf0

void FUN_14fb61bf0(longlong param_1,longlong param_2,longlong param_3,
                  FieldOptions_EditionDefault *param_4)

{
  FieldOptions_EditionDefault *pFVar1;
  FieldOptions_EditionDefault *this;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  while (param_3 < param_2) {
    lVar4 = param_2 + -1 >> 1;
    pFVar1 = (FieldOptions_EditionDefault *)(param_1 + lVar4 * 0x28);
    if ((param_4->_impl_).edition_ <= (pFVar1->_impl_).edition_) break;
    this = (FieldOptions_EditionDefault *)(param_1 + param_2 * 0x28);
    param_2 = lVar4;
    if (this != pFVar1) {
      puVar2 = (undefined8 *)(pFVar1->_padding_ & 0xfffffffffffffffe);
      if ((pFVar1->_padding_ & 1) != 0) {
        puVar2 = (undefined8 *)*puVar2;
      }
      puVar3 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
      if ((this->_padding_ & 1) != 0) {
        puVar3 = (undefined8 *)*puVar3;
      }
      if (puVar3 == puVar2) {
        google::protobuf::FieldOptions_EditionDefault::InternalSwap(this,pFVar1);
      }
      else {
        google::protobuf::FieldOptions_EditionDefault::CopyFrom(this,pFVar1);
      }
    }
  }
  pFVar1 = (FieldOptions_EditionDefault *)(param_1 + param_2 * 0x28);
  if (pFVar1 != param_4) {
    puVar2 = (undefined8 *)(param_4->_padding_ & 0xfffffffffffffffe);
    if ((param_4->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    puVar3 = (undefined8 *)(pFVar1->_padding_ & 0xfffffffffffffffe);
    if ((pFVar1->_padding_ & 1) != 0) {
      puVar3 = (undefined8 *)*puVar3;
    }
    if (puVar3 == puVar2) {
      google::protobuf::FieldOptions_EditionDefault::InternalSwap(pFVar1,param_4);
    }
    else {
      google::protobuf::FieldOptions_EditionDefault::CopyFrom(pFVar1,param_4);
    }
  }
  return;
}

// _Refancy<google::protobuf::FieldOptions_EditionDefault*___ptr64,0> @ 14fb61cf0

/* class google::protobuf::FieldOptions_EditionDefault * __ptr64 __cdecl std::_Refancy<class
   google::protobuf::FieldOptions_EditionDefault * __ptr64,0>(class
   google::protobuf::FieldOptions_EditionDefault * __ptr64) */

FieldOptions_EditionDefault * __cdecl
std::_Refancy<google::protobuf::FieldOptions_EditionDefault*___ptr64,0>
          (FieldOptions_EditionDefault *param_1)

{
  return param_1;
}

// _Seek_wrapped<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>,google::protobuf::internal::RepeatedPtrIterator<class_google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>&___ptr64> @ 14fb61d00

/* void __cdecl std::_Seek_wrapped<class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const >,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > & __ptr64>(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > & __ptr64,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > & __ptr64) */

void __cdecl
std::
_Seek_wrapped<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>,google::protobuf::internal::RepeatedPtrIterator<class_google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>&___ptr64>
          (RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>
           *param_1,
          RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>
          *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// _Seek_wrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>,google::protobuf::FieldOptions_EditionDefault*___ptr64&___ptr64> @ 14fb61d10

/* void __cdecl std::_Seek_wrapped<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault> > >,class
   google::protobuf::FieldOptions_EditionDefault * __ptr64 & __ptr64>(class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > > & __ptr64,class
   google::protobuf::FieldOptions_EditionDefault * __ptr64 & __ptr64) */

void __cdecl
std::
_Seek_wrapped<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>,google::protobuf::FieldOptions_EditionDefault*___ptr64&___ptr64>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
           *param_1,FieldOptions_EditionDefault **param_2)

{
  *(FieldOptions_EditionDefault **)param_1 = *param_2;
  return;
}

// FUN_14fb61d20 @ 14fb61d20

void FUN_14fb61d20(FieldOptions_EditionDefault *param_1,longlong param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  FieldOptions_EditionDefault *this;
  FieldOptions_EditionDefault local_48;
  
  if (0x4f < param_2 - (longlong)param_1) {
    this = (FieldOptions_EditionDefault *)(param_2 + -0x28);
    do {
      if (1 < ((0x28 - (longlong)param_1) + (longlong)this) / 0x28) {
        google::protobuf::FieldOptions_EditionDefault::FieldOptions_EditionDefault
                  (&local_48,(Arena *)0x0);
        local_48._padding_ = (longlong)google::protobuf::FieldOptions_EditionDefault::vftable;
        if (&local_48 != this) {
          puVar1 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
          if ((this->_padding_ & 1) != 0) {
            puVar1 = (undefined8 *)*puVar1;
          }
          if ((local_48._padding_ & 1U) == 0) {
            puVar2 = (undefined8 *)(local_48._padding_ & 0xfffffffffffffffe);
          }
          else {
            puVar2 = *(undefined8 **)(local_48._padding_ & 0xfffffffffffffffe);
          }
          if (puVar2 == puVar1) {
            google::protobuf::FieldOptions_EditionDefault::InternalSwap(&local_48,this);
          }
          else {
            google::protobuf::FieldOptions_EditionDefault::CopyFrom(&local_48,this);
          }
        }
        local_48._padding_ = (longlong)google::protobuf::FieldOptions_EditionDefault::vftable;
        if (this != param_1) {
          puVar1 = (undefined8 *)(param_1->_padding_ & 0xfffffffffffffffe);
          if ((param_1->_padding_ & 1) != 0) {
            puVar1 = (undefined8 *)*puVar1;
          }
          puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
          if ((this->_padding_ & 1) != 0) {
            puVar2 = (undefined8 *)*puVar2;
          }
          if (puVar2 == puVar1) {
            google::protobuf::FieldOptions_EditionDefault::InternalSwap(this,param_1);
          }
          else {
            google::protobuf::FieldOptions_EditionDefault::CopyFrom(this,param_1);
          }
        }
        FUN_14fb617d0(param_1,0,((longlong)this - (longlong)param_1) / 0x28,&local_48,param_3);
        google::protobuf::FieldOptions_EditionDefault::~FieldOptions_EditionDefault(&local_48);
      }
      this = this + -1;
    } while (0x4f < (0x28 - (longlong)param_1) + (longlong)this);
  }
  return;
}

// FUN_14fb61ea0 @ 14fb61ea0

void FUN_14fb61ea0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_28;
  longlong local_20;
  
  lVar1 = param_2 - param_1;
  while( true ) {
    if (lVar1 < 0x528) {
      FUN_14fb60cf0(param_1,param_2,param_4);
      return;
    }
    if (param_3 < 1) break;
    FUN_14fb613e0(&local_28,param_1,param_2,param_4);
    lVar1 = local_20;
    lVar2 = local_28;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((local_28 - param_1) / 0x28 < (param_2 - local_20) / 0x28) {
      FUN_14fb61ea0(param_1,local_28,param_3,param_4);
      lVar2 = param_2;
      param_1 = lVar1;
    }
    else {
      FUN_14fb61ea0(local_20,param_2,param_3,param_4);
    }
    lVar1 = lVar2 - param_1;
    param_2 = lVar2;
  }
  FUN_14fb60f40(param_1,param_2,param_4);
  FUN_14fb61d20(param_1,param_2,param_4);
  return;
}

// _Unfancy<google::protobuf::FieldOptions_EditionDefault> @ 14fb61ff0

/* class google::protobuf::FieldOptions_EditionDefault * __ptr64 __cdecl std::_Unfancy<class
   google::protobuf::FieldOptions_EditionDefault>(class
   google::protobuf::FieldOptions_EditionDefault * __ptr64) */

FieldOptions_EditionDefault * __cdecl
std::_Unfancy<google::protobuf::FieldOptions_EditionDefault>(FieldOptions_EditionDefault *param_1)

{
  return param_1;
}

// _Uninitialized_copy<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>,google::protobuf::internal::RepeatedPtrIterator<class_google::protobuf::FieldOptions_EditionDefault_const_>,std::allocator<google::protobuf::FieldOptions_EditionDefault>_> @ 14fb62000

/* class google::protobuf::FieldOptions_EditionDefault * __ptr64 __cdecl
   std::_Uninitialized_copy<class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const >,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const >,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> >(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const >,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const >,class
   google::protobuf::FieldOptions_EditionDefault * __ptr64,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> & __ptr64) */

FieldOptions_EditionDefault * __cdecl
std::
_Uninitialized_copy<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>,google::protobuf::internal::RepeatedPtrIterator<class_google::protobuf::FieldOptions_EditionDefault_const_>,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
          (undefined8 *param_1,undefined8 *param_2,FieldOptions_EditionDefault *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    google::protobuf::FieldOptions_EditionDefault::FieldOptions_EditionDefault
              (param_3,(Arena *)0x0,(FieldOptions_EditionDefault *)*param_1);
    param_3->_padding_ = (longlong)google::protobuf::FieldOptions_EditionDefault::vftable;
    param_3 = param_3 + 1;
  }
  return param_3;
}

// _Unwrap_iter<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>,google::protobuf::internal::RepeatedPtrIterator<class_google::protobuf::FieldOptions_EditionDefault_const_>_> @ 14fb62080

/* UNKNOWN __cdecl std::ranges::_Unwrap_iter<class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const >,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > >(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > && __ptr64) */

RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_> * __cdecl
std::ranges::
_Unwrap_iter<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>,google::protobuf::internal::RepeatedPtrIterator<class_google::protobuf::FieldOptions_EditionDefault_const_>_>
          (RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_> *param_1)

{
  return param_1;
}

// _Unwrap_sent<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>,google::protobuf::internal::RepeatedPtrIterator<class_google::protobuf::FieldOptions_EditionDefault_const_>_> @ 14fb62090

/* UNKNOWN __cdecl std::ranges::_Unwrap_sent<class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const >,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > >(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > && __ptr64) */

RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_> * __cdecl
std::ranges::
_Unwrap_sent<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>,google::protobuf::internal::RepeatedPtrIterator<class_google::protobuf::FieldOptions_EditionDefault_const_>_>
          (RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_> *param_1)

{
  return param_1;
}

// addressof<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_> @ 14fb620a0

/* class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > * __ptr64 __cdecl std::addressof<class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault> >
   >(class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > & __ptr64) */

_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_> * __cdecl
std::
addressof<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
          (_Vector_val<struct_std::_Simple_types<class_google::protobuf::FieldOptions_EditionDefault>_>
           *param_1)

{
  return (_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_> *)param_1;
}

// advance<google::protobuf::FieldOptions_EditionDefault*___ptr64,__int64> @ 14fb620b0

/* void __cdecl std::advance<class google::protobuf::FieldOptions_EditionDefault *
   __ptr64,__int64>(class google::protobuf::FieldOptions_EditionDefault * __ptr64 & __ptr64,__int64)
    */

void __cdecl
std::advance<google::protobuf::FieldOptions_EditionDefault*___ptr64,__int64>
          (FieldOptions_EditionDefault **param_1,__int64 param_2)

{
  *param_1 = *param_1 + param_2;
  return;
}

// advance<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>,__int64> @ 14fb620d0

/* void __cdecl std::advance<class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const >,__int64>(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > & __ptr64,__int64) */

void __cdecl
std::
advance<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>,__int64>
          (RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>
           *param_1,__int64 param_2)

{
  *(longlong *)param_1 = *(longlong *)param_1 + param_2 * 8;
  return;
}

// advance<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>,__int64> @ 14fb620f0

/* void __cdecl std::advance<class std::_Vector_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault> > >,__int64>(class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > > & __ptr64,__int64) */

void __cdecl
std::
advance<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>,__int64>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
           *param_1,__int64 param_2)

{
  *(longlong *)param_1 = *(longlong *)param_1 + param_2 * 0x28;
  return;
}

// begin<google::protobuf::RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>_> @ 14fb62110

/* class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > __cdecl std::begin<class
   google::protobuf::RepeatedPtrField<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> >(class
   google::protobuf::RepeatedPtrField<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> const & __ptr64) */

RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> * __cdecl
std::
begin<google::protobuf::RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>_>
          (RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> *param_1)

{
  byte *in_RDX;
  
  if ((~*in_RDX & 1) != 0) {
    *(byte **)param_1 = in_RDX;
    return param_1;
  }
  *(longlong *)param_1 = *(longlong *)in_RDX + 7;
  return param_1;
}

// begin<std::vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>_> @ 14fb62140

/* class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > > __cdecl std::begin<class std::vector<class
   google::protobuf::FieldOptions_EditionDefault,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> > >(class std::vector<class
   google::protobuf::FieldOptions_EditionDefault,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> > & __ptr64) */

vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
* __cdecl std::
          begin<std::vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>_>
                    (vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
                     *param_1)

{
  undefined8 *in_RDX;
  
  *(undefined8 *)param_1 = *in_RDX;
  return param_1;
}

// binary_search<google::protobuf::Edition,absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare> @ 14fb62150

/* public: struct absl::lts_20240722::container_internal::SearchResult<unsigned __int64,0> __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::binary_search<enum google::protobuf::Edition,struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare>(enum
   google::protobuf::Edition const & __ptr64,struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare const & __ptr64)const
   __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::
binary_search<google::protobuf::Edition,absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare>
          (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,Edition *param_1,checked_compare *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = ZEXT18((byte)this[10]);
  uVar4 = EDITION_UNKNOWN;
  if (uVar2 == EDITION_UNKNOWN) {
    param_1[0] = EDITION_UNKNOWN;
    param_1[1] = EDITION_UNKNOWN;
    return param_1;
  }
  do {
    uVar3 = (ulonglong)(uVar4 + uVar2) >> 1;
    uVar1 = uVar3 + EDITION_1_TEST_ONLY;
    if (*(int *)param_2 <= *(int *)(this + uVar3 * 4 + 0xc)) {
      uVar2 = uVar3;
      uVar1 = uVar4;
    }
    uVar4 = uVar1;
  } while (uVar4 != uVar2);
  *(undefined8 *)param_1 = uVar4;
  return param_1;
}

// binary_search_impl<google::protobuf::Edition,absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare> @ 14fb621b0

/* public: struct absl::lts_20240722::container_internal::SearchResult<unsigned __int64,0> __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::binary_search_impl<enum google::protobuf::Edition,struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare>(enum
   google::protobuf::Edition const & __ptr64,unsigned __int64,unsigned __int64,struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare const &
   __ptr64,struct std::integral_constant<bool,0>)const __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::
binary_search_impl<google::protobuf::Edition,absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare>
          (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,Edition *param_1,__uint64 param_2,__uint64 param_3,checked_compare *param_4,
          integral_constant<bool,0> param_5)

{
  checked_compare *pcVar1;
  checked_compare *pcVar2;
  
  if ((checked_compare *)param_3 == param_4) {
    *(__uint64 *)param_1 = param_3;
    return param_1;
  }
  do {
    pcVar2 = (checked_compare *)((ulonglong)(param_3 + (longlong)param_4) >> 1);
    pcVar1 = pcVar2 + 1;
    if (*(int *)param_2 <= *(int *)(this + (longlong)pcVar2 * 4 + 0xc)) {
      param_4 = pcVar2;
      pcVar1 = (checked_compare *)param_3;
    }
    param_3 = (__uint64)pcVar1;
  } while ((checked_compare *)param_3 != param_4);
  *(__uint64 *)param_1 = param_3;
  return param_1;
}

// c_begin<google::protobuf::RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>_const_> @ 14fb62210

/* class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > __cdecl
   absl::lts_20240722::container_algorithm_internal::c_begin<class
   google::protobuf::RepeatedPtrField<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> const >(class
   google::protobuf::RepeatedPtrField<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> const & __ptr64) */

RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> * __cdecl
absl::lts_20240722::container_algorithm_internal::
c_begin<google::protobuf::RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>_const_>
          (RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> *param_1)

{
  byte *in_RDX;
  
  if ((~*in_RDX & 1) != 0) {
    *(byte **)param_1 = in_RDX;
    return param_1;
  }
  *(longlong *)param_1 = *(longlong *)in_RDX + 7;
  return param_1;
}

// c_begin<std::vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>_> @ 14fb62240

/* class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > > __cdecl
   absl::lts_20240722::container_algorithm_internal::c_begin<class std::vector<class
   google::protobuf::FieldOptions_EditionDefault,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> > >(class std::vector<class
   google::protobuf::FieldOptions_EditionDefault,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> > & __ptr64) */

vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
* __cdecl absl::lts_20240722::container_algorithm_internal::
          c_begin<std::vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>_>
                    (vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
                     *param_1)

{
  undefined8 *in_RDX;
  
  *(undefined8 *)param_1 = *in_RDX;
  return param_1;
}

// c_end<google::protobuf::RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>_const_> @ 14fb62250

/* class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > __cdecl
   absl::lts_20240722::container_algorithm_internal::c_end<class
   google::protobuf::RepeatedPtrField<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> const >(class
   google::protobuf::RepeatedPtrField<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> const & __ptr64) */

RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> * __cdecl
absl::lts_20240722::container_algorithm_internal::
c_end<google::protobuf::RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>_const_>
          (RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> *param_1)

{
  byte *in_RDX;
  
  if ((~*in_RDX & 1) != 0) {
    *(byte **)param_1 = in_RDX + (longlong)*(int *)(in_RDX + 8) * 8;
    return param_1;
  }
  *(longlong *)param_1 = *(longlong *)in_RDX + 7 + (longlong)*(int *)(in_RDX + 8) * 8;
  return param_1;
}

// c_end<std::vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>_> @ 14fb62290

/* class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > > __cdecl
   absl::lts_20240722::container_algorithm_internal::c_end<class std::vector<class
   google::protobuf::FieldOptions_EditionDefault,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> > >(class std::vector<class
   google::protobuf::FieldOptions_EditionDefault,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> > & __ptr64) */

vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
* __cdecl absl::lts_20240722::container_algorithm_internal::
          c_end<std::vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>_>
                    (vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
                     *param_1)

{
  longlong in_RDX;
  
  *(undefined8 *)param_1 = *(undefined8 *)(in_RDX + 8);
  return param_1;
}

// FUN_14fb622b0 @ 14fb622b0

void FUN_14fb622b0(longlong *param_1,undefined1 param_2)

{
  FUN_14fb61ea0(*param_1,param_1[1],(param_1[1] - *param_1) / 0x28,param_2);
  return;
}

// cast<google::protobuf::internal::GenericTypeHandler<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>_> @ 14fb62400

/* private: static class google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault * __ptr64
   __cdecl google::protobuf::internal::RepeatedPtrFieldBase::cast<class
   google::protobuf::internal::GenericTypeHandler<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> >(void * __ptr64) */

FeatureSetDefaults_FeatureSetEditionDefault * __cdecl
google::protobuf::internal::RepeatedPtrFieldBase::
cast<google::protobuf::internal::GenericTypeHandler<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>_>
          (void *param_1)

{
  return param_1;
}

// compare_keys<google::protobuf::Edition,google::protobuf::Edition> @ 14fb62410

/* public: bool __cdecl absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::compare_keys<enum google::protobuf::Edition,enum
   google::protobuf::Edition>(enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const & __ptr64)const __ptr64 */

bool __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::compare_keys<google::protobuf::Edition,google::protobuf::Edition>
          (btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,Edition *param_1,Edition *param_2)

{
  return (int)*param_1 < (int)*param_2;
}

// construct<std::allocator<google::protobuf::Edition>_> @ 14fb62420

/* public: static void __cdecl absl::lts_20240722::container_internal::set_slot_policy<enum
   google::protobuf::Edition>::construct<class std::allocator<enum google::protobuf::Edition>
   >(class std::allocator<enum google::protobuf::Edition> * __ptr64,enum google::protobuf::Edition *
   __ptr64,enum google::protobuf::Edition * __ptr64) */

void __cdecl
absl::lts_20240722::container_internal::set_slot_policy<google::protobuf::Edition>::
construct<std::allocator<google::protobuf::Edition>_>
          (allocator<google::protobuf::Edition> *param_1,Edition *param_2,Edition *param_3)

{
  *param_2 = *param_3;
  return;
}

// construct<std::allocator<google::protobuf::Edition>,google::protobuf::Edition_const&___ptr64> @ 14fb62430

/* public: static void __cdecl absl::lts_20240722::container_internal::common_policy_traits<struct
   absl::lts_20240722::container_internal::set_slot_policy<enum
   google::protobuf::Edition>,void>::construct<class std::allocator<enum
   google::protobuf::Edition>,enum google::protobuf::Edition const & __ptr64>(class
   std::allocator<enum google::protobuf::Edition> * __ptr64,enum google::protobuf::Edition *
   __ptr64,enum google::protobuf::Edition const & __ptr64) */

void __cdecl
absl::lts_20240722::container_internal::
common_policy_traits<absl::lts_20240722::container_internal::set_slot_policy<google::protobuf::Edition>,void>
::construct<std::allocator<google::protobuf::Edition>,google::protobuf::Edition_const&___ptr64>
          (allocator<google::protobuf::Edition> *param_1,Edition *param_2,Edition *param_3)

{
  *param_2 = *param_3;
  return;
}

// construct<std::allocator<google::protobuf::Edition>,google::protobuf::Edition_const&___ptr64> @ 14fb62440

/* public: static void __cdecl absl::lts_20240722::container_internal::set_slot_policy<enum
   google::protobuf::Edition>::construct<class std::allocator<enum google::protobuf::Edition>,enum
   google::protobuf::Edition const & __ptr64>(class std::allocator<enum google::protobuf::Edition> *
   __ptr64,enum google::protobuf::Edition * __ptr64,enum google::protobuf::Edition const & __ptr64)
    */

void __cdecl
absl::lts_20240722::container_internal::set_slot_policy<google::protobuf::Edition>::
construct<std::allocator<google::protobuf::Edition>,google::protobuf::Edition_const&___ptr64>
          (allocator<google::protobuf::Edition> *param_1,Edition *param_2,Edition *param_3)

{
  *param_2 = *param_3;
  return;
}

// construct<std::allocator<google::protobuf::Edition>,google::protobuf::Edition*___ptr64> @ 14fb62450

/* public: static void __cdecl absl::lts_20240722::container_internal::common_policy_traits<struct
   absl::lts_20240722::container_internal::set_slot_policy<enum
   google::protobuf::Edition>,void>::construct<class std::allocator<enum
   google::protobuf::Edition>,enum google::protobuf::Edition * __ptr64>(class std::allocator<enum
   google::protobuf::Edition> * __ptr64,enum google::protobuf::Edition * __ptr64,enum
   google::protobuf::Edition * __ptr64 && __ptr64) */

void __cdecl
absl::lts_20240722::container_internal::
common_policy_traits<absl::lts_20240722::container_internal::set_slot_policy<google::protobuf::Edition>,void>
::construct<std::allocator<google::protobuf::Edition>,google::protobuf::Edition*___ptr64>
          (allocator<google::protobuf::Edition> *param_1,Edition *param_2,Edition **param_3)

{
  *param_2 = **param_3;
  return;
}

// construct<google::protobuf::FieldOptions_EditionDefault,google::protobuf::FieldOptions_EditionDefault_const&___ptr64> @ 14fb62460

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> >::construct<class
   google::protobuf::FieldOptions_EditionDefault,class google::protobuf::FieldOptions_EditionDefault
   const & __ptr64>(class std::allocator<class google::protobuf::FieldOptions_EditionDefault> &
   __ptr64,class google::protobuf::FieldOptions_EditionDefault * __ptr64 const,class
   google::protobuf::FieldOptions_EditionDefault const & __ptr64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<google::protobuf::FieldOptions_EditionDefault>_>::
construct<google::protobuf::FieldOptions_EditionDefault,google::protobuf::FieldOptions_EditionDefault_const&___ptr64>
          (allocator<google::protobuf::FieldOptions_EditionDefault> *param_1,
          FieldOptions_EditionDefault *param_2,FieldOptions_EditionDefault *param_3)

{
  google::protobuf::FieldOptions_EditionDefault::FieldOptions_EditionDefault
            (param_2,(Arena *)0x0,param_3);
  param_2->_padding_ = (longlong)google::protobuf::FieldOptions_EditionDefault::vftable;
  return;
}

// construct<google::protobuf::Edition,google::protobuf::Edition_const&___ptr64> @ 14fb62490

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<enum
   google::protobuf::Edition> >::construct<enum google::protobuf::Edition,enum
   google::protobuf::Edition const & __ptr64>(class std::allocator<enum google::protobuf::Edition> &
   __ptr64,enum google::protobuf::Edition * __ptr64 const,enum google::protobuf::Edition const &
   __ptr64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<google::protobuf::Edition>_>::
construct<google::protobuf::Edition,google::protobuf::Edition_const&___ptr64>
          (allocator<google::protobuf::Edition> *param_1,Edition *param_2,Edition *param_3)

{
  *param_2 = *param_3;
  return;
}

// construct<google::protobuf::Edition,google::protobuf::Edition> @ 14fb624a0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<enum
   google::protobuf::Edition> >::construct<enum google::protobuf::Edition,enum
   google::protobuf::Edition>(class std::allocator<enum google::protobuf::Edition> & __ptr64,enum
   google::protobuf::Edition * __ptr64 const,enum google::protobuf::Edition && __ptr64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<google::protobuf::Edition>_>::
construct<google::protobuf::Edition,google::protobuf::Edition>
          (allocator<google::protobuf::Edition> *param_1,Edition *param_2,Edition *param_3)

{
  *param_2 = *param_3;
  return;
}

// construct_at<google::protobuf::FieldOptions_EditionDefault,google::protobuf::FieldOptions_EditionDefault_const&___ptr64,0> @ 14fb624b0

/* class google::protobuf::FieldOptions_EditionDefault * __ptr64 __cdecl std::construct_at<class
   google::protobuf::FieldOptions_EditionDefault,class google::protobuf::FieldOptions_EditionDefault
   const & __ptr64,0>(class google::protobuf::FieldOptions_EditionDefault * __ptr64 const,class
   google::protobuf::FieldOptions_EditionDefault const & __ptr64) */

FieldOptions_EditionDefault * __cdecl
std::
construct_at<google::protobuf::FieldOptions_EditionDefault,google::protobuf::FieldOptions_EditionDefault_const&___ptr64,0>
          (FieldOptions_EditionDefault *param_1,FieldOptions_EditionDefault *param_2)

{
  google::protobuf::FieldOptions_EditionDefault::FieldOptions_EditionDefault
            (param_1,(Arena *)0x0,param_2);
  param_1->_padding_ = (longlong)google::protobuf::FieldOptions_EditionDefault::vftable;
  return param_1;
}

// construct_at<google::protobuf::Edition,google::protobuf::Edition_const&___ptr64,0> @ 14fb624e0

/* enum google::protobuf::Edition * __ptr64 __cdecl std::construct_at<enum
   google::protobuf::Edition,enum google::protobuf::Edition const & __ptr64,0>(enum
   google::protobuf::Edition * __ptr64 const,enum google::protobuf::Edition const & __ptr64) */

Edition * __cdecl
std::construct_at<google::protobuf::Edition,google::protobuf::Edition_const&___ptr64,0>
          (Edition *param_1,Edition *param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// construct_at<google::protobuf::Edition,google::protobuf::Edition,0> @ 14fb624f0

/* enum google::protobuf::Edition * __ptr64 __cdecl std::construct_at<enum
   google::protobuf::Edition,enum google::protobuf::Edition,0>(enum google::protobuf::Edition *
   __ptr64 const,enum google::protobuf::Edition && __ptr64) */

Edition * __cdecl
std::construct_at<google::protobuf::Edition,google::protobuf::Edition,0>
          (Edition *param_1,Edition *param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// destroy<std::allocator<google::protobuf::Edition>_> @ 14fb62500

/* public: static UNKNOWN __cdecl
   absl::lts_20240722::container_internal::common_policy_traits<struct
   absl::lts_20240722::container_internal::set_slot_policy<enum
   google::protobuf::Edition>,void>::destroy<class std::allocator<enum google::protobuf::Edition>
   >(class std::allocator<enum google::protobuf::Edition> * __ptr64,enum google::protobuf::Edition *
   __ptr64) */

void __cdecl
absl::lts_20240722::container_internal::
common_policy_traits<absl::lts_20240722::container_internal::set_slot_policy<google::protobuf::Edition>,void>
::destroy<std::allocator<google::protobuf::Edition>_>
          (allocator<google::protobuf::Edition> *param_1,Edition *param_2)

{
  return;
}

// destroy<std::allocator<google::protobuf::Edition>_> @ 14fb62510

/* public: static void __cdecl absl::lts_20240722::container_internal::set_slot_policy<enum
   google::protobuf::Edition>::destroy<class std::allocator<enum google::protobuf::Edition> >(class
   std::allocator<enum google::protobuf::Edition> * __ptr64,enum google::protobuf::Edition *
   __ptr64) */

void __cdecl
absl::lts_20240722::container_internal::set_slot_policy<google::protobuf::Edition>::
destroy<std::allocator<google::protobuf::Edition>_>
          (allocator<google::protobuf::Edition> *param_1,Edition *param_2)

{
  return;
}

// destroy<google::protobuf::FieldOptions_EditionDefault> @ 14fb62520

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> >::destroy<class
   google::protobuf::FieldOptions_EditionDefault>(class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> & __ptr64,class
   google::protobuf::FieldOptions_EditionDefault * __ptr64 const) */

void __cdecl
std::_Default_allocator_traits<std::allocator<google::protobuf::FieldOptions_EditionDefault>_>::
destroy<google::protobuf::FieldOptions_EditionDefault>
          (allocator<google::protobuf::FieldOptions_EditionDefault> *param_1,
          FieldOptions_EditionDefault *param_2)

{
  google::protobuf::FieldOptions_EditionDefault::~FieldOptions_EditionDefault(param_2);
  return;
}

// destroy<google::protobuf::Edition> @ 14fb62530

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<enum
   google::protobuf::Edition> >::destroy<enum google::protobuf::Edition>(class std::allocator<enum
   google::protobuf::Edition> & __ptr64,enum google::protobuf::Edition * __ptr64 const) */

void __cdecl
std::_Default_allocator_traits<std::allocator<google::protobuf::Edition>_>::
destroy<google::protobuf::Edition>(allocator<google::protobuf::Edition> *param_1,Edition *param_2)

{
  return;
}

// destroy_at<google::protobuf::FieldOptions_EditionDefault> @ 14fb62540

/* void __cdecl std::destroy_at<class google::protobuf::FieldOptions_EditionDefault>(class
   google::protobuf::FieldOptions_EditionDefault * __ptr64 const) */

void __cdecl
std::destroy_at<google::protobuf::FieldOptions_EditionDefault>(FieldOptions_EditionDefault *param_1)

{
  google::protobuf::FieldOptions_EditionDefault::~FieldOptions_EditionDefault(param_1);
  return;
}

// destroy_at<google::protobuf::Edition> @ 14fb62550

/* void __cdecl std::destroy_at<enum google::protobuf::Edition>(enum google::protobuf::Edition *
   __ptr64 const) */

void __cdecl std::destroy_at<google::protobuf::Edition>(Edition *param_1)

{
  return;
}

// distance<google::protobuf::FieldOptions_EditionDefault*___ptr64> @ 14fb62560

/* __int64 __cdecl std::distance<class google::protobuf::FieldOptions_EditionDefault *
   __ptr64>(class google::protobuf::FieldOptions_EditionDefault * __ptr64,class
   google::protobuf::FieldOptions_EditionDefault * __ptr64) */

__int64 __cdecl
std::distance<google::protobuf::FieldOptions_EditionDefault*___ptr64>
          (FieldOptions_EditionDefault *param_1,FieldOptions_EditionDefault *param_2)

{
  return ((longlong)param_2 - (longlong)param_1) / 0x28;
}

// distance<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>_> @ 14fb62590

/* __int64 __cdecl std::distance<class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > >(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const >,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const >) */

__int64 __cdecl
std::
distance<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>_>
          (longlong param_1,longlong param_2)

{
  return param_2 - param_1 >> 3;
}

// distance<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>_> @ 14fb625b0

/* __int64 __cdecl std::distance<class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > >(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const >,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const >) */

__int64 __cdecl
std::
distance<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>_>
          (longlong param_1,longlong param_2)

{
  return param_2 - param_1 >> 3;
}

// element<absl::lts_20240722::container_internal::set_slot_policy<google::protobuf::Edition>_> @ 14fb625d0

/* public: static enum google::protobuf::Edition & __ptr64 __cdecl
   absl::lts_20240722::container_internal::common_policy_traits<struct
   absl::lts_20240722::container_internal::set_slot_policy<enum
   google::protobuf::Edition>,void>::element<struct
   absl::lts_20240722::container_internal::set_slot_policy<enum google::protobuf::Edition> >(enum
   google::protobuf::Edition * __ptr64) */

Edition * __cdecl
absl::lts_20240722::container_internal::
common_policy_traits<absl::lts_20240722::container_internal::set_slot_policy<google::protobuf::Edition>,void>
::element<absl::lts_20240722::container_internal::set_slot_policy<google::protobuf::Edition>_>
          (Edition *param_1)

{
  return param_1;
}

// emplace_back<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14fb625e0

/* public: UNKNOWN __cdecl std::vector<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,class std::allocator<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >
   >::emplace_back<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > >(class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > && __ptr64) __ptr64 */

void __thiscall
std::
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
::emplace_back<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
           *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  
  pbVar1 = (this->_Mypair)._Myval2._Mylast;
  if (pbVar1 != (this->_Mypair)._Myval2._Myend) {
    (pbVar1->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pbVar1->_Mypair)._Myval2._Bx + 8) = 0;
    (pbVar1->_Mypair)._Myval2._Mysize = 0;
    (pbVar1->_Mypair)._Myval2._Myres = 0;
    uVar2 = *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8);
    (pbVar1->_Mypair)._Myval2._Bx._Ptr = (param_1->_Mypair)._Myval2._Bx._Ptr;
    *(undefined8 *)((longlong)&(pbVar1->_Mypair)._Myval2._Bx + 8) = uVar2;
    uVar3 = (param_1->_Mypair)._Myval2._Myres;
    (pbVar1->_Mypair)._Myval2._Mysize = (param_1->_Mypair)._Myval2._Mysize;
    (pbVar1->_Mypair)._Myval2._Myres = uVar3;
    (param_1->_Mypair)._Myval2._Mysize = 0;
    (param_1->_Mypair)._Myval2._Myres = 0xf;
    (param_1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
    (this->_Mypair)._Myval2._Mylast = (this->_Mypair)._Myval2._Mylast + 1;
    return;
  }
  _Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            (this,pbVar1,param_1);
  return;
}

// emplace_value<google::protobuf::Edition_const&___ptr64> @ 14fb62640

/* public: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::emplace_value<enum google::protobuf::Edition const &
   __ptr64>(unsigned char,class std::allocator<enum google::protobuf::Edition> * __ptr64,enum
   google::protobuf::Edition const & __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::emplace_value<google::protobuf::Edition_const&___ptr64>
          (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,uchar param_1,allocator<google::protobuf::Edition> *param_2,Edition *param_3)

{
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar1;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar2;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  bVar3;
  uint uVar4;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar5;
  uint uVar6;
  longlong lVar7;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)param_1;
  if (param_1 < (byte)this[10]) {
    lVar7 = (byte)this[10] - uVar9;
    pbVar5 = this + (uVar9 + 3 + lVar7) * 4;
    pbVar8 = pbVar5 + lVar7 * -4;
    if (pbVar5 != pbVar8) {
      do {
        pbVar1 = pbVar5 + -4;
        pbVar2 = pbVar5 + ((param_1 + 1) - uVar9) * 4 + -4;
        pbVar5 = pbVar5 + -4;
        *(undefined4 *)pbVar2 = *(undefined4 *)pbVar1;
      } while (pbVar5 != pbVar8);
    }
  }
  *(Edition *)(this + uVar9 * 4 + 0xc) = *param_3;
  bVar3 = this[10];
  this[10] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              )((char)bVar3 + 1U);
  if (this[0xb] ==
      (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
       )0x0) {
    uVar4 = (uint)(byte)((char)bVar3 + 1U);
    while (param_1 + 1 < uVar4) {
      uVar6 = uVar4 - 1 & 0xff;
      lVar7 = *(longlong *)(this + (ulonglong)uVar6 * 8 + 0x100);
      *(longlong *)(this + (ulonglong)uVar4 * 8 + 0x100) = lVar7;
      *(char *)(lVar7 + 8) = (char)uVar4;
      uVar4 = uVar6;
    }
  }
  return;
}

// emplace_value<google::protobuf::Edition*___ptr64> @ 14fb62710

/* public: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::emplace_value<enum google::protobuf::Edition *
   __ptr64>(unsigned char,class std::allocator<enum google::protobuf::Edition> * __ptr64,enum
   google::protobuf::Edition * __ptr64 && __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::emplace_value<google::protobuf::Edition*___ptr64>
          (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,uchar param_1,allocator<google::protobuf::Edition> *param_2,Edition **param_3)

{
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar1;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar2;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  bVar3;
  uint uVar4;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar5;
  uint uVar6;
  longlong lVar7;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)param_1;
  if (param_1 < (byte)this[10]) {
    lVar7 = (byte)this[10] - uVar9;
    pbVar5 = this + (uVar9 + 3 + lVar7) * 4;
    pbVar8 = pbVar5 + lVar7 * -4;
    if (pbVar5 != pbVar8) {
      do {
        pbVar1 = pbVar5 + -4;
        pbVar2 = pbVar5 + ((param_1 + 1) - uVar9) * 4 + -4;
        pbVar5 = pbVar5 + -4;
        *(undefined4 *)pbVar2 = *(undefined4 *)pbVar1;
      } while (pbVar5 != pbVar8);
    }
  }
  *(Edition *)(this + uVar9 * 4 + 0xc) = **param_3;
  bVar3 = this[10];
  this[10] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              )((char)bVar3 + 1U);
  if (this[0xb] ==
      (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
       )0x0) {
    uVar4 = (uint)(byte)((char)bVar3 + 1U);
    while (param_1 + 1 < uVar4) {
      uVar6 = uVar4 - 1 & 0xff;
      lVar7 = *(longlong *)(this + (ulonglong)uVar6 * 8 + 0x100);
      *(longlong *)(this + (ulonglong)uVar4 * 8 + 0x100) = lVar7;
      *(char *)(lVar7 + 8) = (char)uVar4;
      uVar4 = uVar6;
    }
  }
  return;
}

// end<google::protobuf::RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>_> @ 14fb627f0

/* class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > __cdecl std::end<class
   google::protobuf::RepeatedPtrField<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> >(class
   google::protobuf::RepeatedPtrField<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> const & __ptr64) */

RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> * __cdecl
std::
end<google::protobuf::RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>_>
          (RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> *param_1)

{
  byte *in_RDX;
  
  if ((~*in_RDX & 1) != 0) {
    *(byte **)param_1 = in_RDX + (longlong)*(int *)(in_RDX + 8) * 8;
    return param_1;
  }
  *(longlong *)param_1 = *(longlong *)in_RDX + 7 + (longlong)*(int *)(in_RDX + 8) * 8;
  return param_1;
}

// end<std::vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>_> @ 14fb62830

/* class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > > __cdecl std::end<class std::vector<class
   google::protobuf::FieldOptions_EditionDefault,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> > >(class std::vector<class
   google::protobuf::FieldOptions_EditionDefault,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> > & __ptr64) */

vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
* __cdecl std::
          end<std::vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>_>
                    (vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
                     *param_1)

{
  longlong in_RDX;
  
  *(undefined8 *)param_1 = *(undefined8 *)(in_RDX + 8);
  return param_1;
}

// exchange<google::protobuf::Message*___ptr64,std::nullptr_t> @ 14fb62850

/* class google::protobuf::Message * __ptr64 __cdecl std::exchange<class google::protobuf::Message *
   __ptr64,std::nullptr_t>(class google::protobuf::Message * __ptr64 & __ptr64,std::nullptr_t &&
   __ptr64) */

Message * __cdecl
std::exchange<google::protobuf::Message*___ptr64,std::nullptr_t>
          (Message **param_1,std__nullptr_t *param_2)

{
  Message *pMVar1;
  
  pMVar1 = *param_1;
  *param_1 = *(Message **)param_2;
  return pMVar1;
}

// exchange<google::protobuf::Message*___ptr64,google::protobuf::Message*___ptr64&___ptr64> @ 14fb62860

/* class google::protobuf::Message * __ptr64 __cdecl std::exchange<class google::protobuf::Message *
   __ptr64,class google::protobuf::Message * __ptr64 & __ptr64>(class google::protobuf::Message *
   __ptr64 & __ptr64,class google::protobuf::Message * __ptr64 & __ptr64) */

Message * __cdecl
std::exchange<google::protobuf::Message*___ptr64,google::protobuf::Message*___ptr64&___ptr64>
          (Message **param_1,Message **param_2)

{
  Message *pMVar1;
  
  pMVar1 = *param_1;
  *param_1 = *param_2;
  return pMVar1;
}

// forward<google::protobuf::DynamicMessageFactory*___ptr64&___ptr64> @ 14fb62870

/* class google::protobuf::DynamicMessageFactory * __ptr64 & __ptr64 __cdecl std::forward<class
   google::protobuf::DynamicMessageFactory * __ptr64 & __ptr64>(class
   google::protobuf::DynamicMessageFactory * __ptr64 & __ptr64) */

DynamicMessageFactory ** __cdecl
std::forward<google::protobuf::DynamicMessageFactory*___ptr64&___ptr64>
          (DynamicMessageFactory **param_1)

{
  return param_1;
}

// forward<google::protobuf::FieldOptions_EditionDefault*___ptr64&___ptr64> @ 14fb62880

/* class google::protobuf::FieldOptions_EditionDefault * __ptr64 & __ptr64 __cdecl
   std::forward<class google::protobuf::FieldOptions_EditionDefault * __ptr64 & __ptr64>(class
   google::protobuf::FieldOptions_EditionDefault * __ptr64 & __ptr64) */

FieldOptions_EditionDefault ** __cdecl
std::forward<google::protobuf::FieldOptions_EditionDefault*___ptr64&___ptr64>
          (FieldOptions_EditionDefault **param_1)

{
  return param_1;
}

// forward<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>&___ptr64> @ 14fb628b0

/* class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > & __ptr64 __cdecl
   std::forward<class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > & __ptr64>(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > & __ptr64) */

RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_> * __cdecl
std::
forward<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>&___ptr64>
          (RepeatedPtrIterator<class_google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>
           *param_1)

{
  return (RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>
          *)param_1;
}

// forward<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>&___ptr64> @ 14fb628c0

/* class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> & __ptr64 __cdecl std::forward<class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> & __ptr64>(class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> & __ptr64) */

btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
* __cdecl std::
          forward<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>&___ptr64>
                    (btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>
                     *param_1)

{
  return (btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
          *)param_1;
}

// forward<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare_const&___ptr64> @ 14fb628d0

/* struct absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare const & __ptr64
   __cdecl std::forward<struct absl::lts_20240722::container_internal::key_compare_adapter<struct
   std::less<enum google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare const
   & __ptr64>(struct absl::lts_20240722::container_internal::key_compare_adapter<struct
   std::less<enum google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare const
   & __ptr64) */

checked_compare * __cdecl
std::
forward<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare_const&___ptr64>
          (checked_compare *param_1)

{
  return (checked_compare *)param_1;
}

// forward<std::allocator<google::protobuf::FieldOptions_EditionDefault>_const&___ptr64> @ 14fb628e0

/* class std::allocator<class google::protobuf::FieldOptions_EditionDefault> const & __ptr64 __cdecl
   std::forward<class std::allocator<class google::protobuf::FieldOptions_EditionDefault> const &
   __ptr64>(class std::allocator<class google::protobuf::FieldOptions_EditionDefault> const &
   __ptr64) */

allocator<google::protobuf::FieldOptions_EditionDefault> * __cdecl
std::forward<std::allocator<google::protobuf::FieldOptions_EditionDefault>_const&___ptr64>
          (allocator<class_google::protobuf::FieldOptions_EditionDefault> *param_1)

{
  return (allocator<google::protobuf::FieldOptions_EditionDefault> *)param_1;
}

// forward<std::allocator<google::protobuf::Edition>_const&___ptr64> @ 14fb628f0

/* class std::allocator<enum google::protobuf::Edition> const & __ptr64 __cdecl std::forward<class
   std::allocator<enum google::protobuf::Edition> const & __ptr64>(class std::allocator<enum
   google::protobuf::Edition> const & __ptr64) */

allocator<google::protobuf::Edition> * __cdecl
std::forward<std::allocator<google::protobuf::Edition>_const&___ptr64>
          (allocator<enum_google::protobuf::Edition> *param_1)

{
  return (allocator<google::protobuf::Edition> *)param_1;
}

// forward<google::protobuf::FieldOptions_EditionDefault_const&___ptr64> @ 14fb62900

/* class google::protobuf::FieldOptions_EditionDefault const & __ptr64 __cdecl std::forward<class
   google::protobuf::FieldOptions_EditionDefault const & __ptr64>(class
   google::protobuf::FieldOptions_EditionDefault const & __ptr64) */

FieldOptions_EditionDefault * __cdecl
std::forward<google::protobuf::FieldOptions_EditionDefault_const&___ptr64>
          (FieldOptions_EditionDefault *param_1)

{
  return param_1;
}

// forward<google::protobuf::Edition_const&___ptr64> @ 14fb62910

/* enum google::protobuf::Edition const & __ptr64 __cdecl std::forward<enum
   google::protobuf::Edition const & __ptr64>(enum google::protobuf::Edition const & __ptr64) */

Edition * __cdecl std::forward<google::protobuf::Edition_const&___ptr64>(Edition *param_1)

{
  return param_1;
}

// forward<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64> @ 14fb62920

/* class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 && __ptr64 __cdecl std::forward<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>(class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 & __ptr64) */

btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
** __cdecl
std::
forward<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>
          (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
           **param_1)

{
  return (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          **)param_1;
}

// forward<google::protobuf::Edition*___ptr64> @ 14fb62930

/* enum google::protobuf::Edition * __ptr64 && __ptr64 __cdecl std::forward<enum
   google::protobuf::Edition * __ptr64>(enum google::protobuf::Edition * __ptr64 & __ptr64) */

Edition ** __cdecl std::forward<google::protobuf::Edition*___ptr64>(Edition **param_1)

{
  return param_1;
}

// forward<std::default_delete<google::protobuf::Message>_> @ 14fb62940

/* struct std::default_delete<class google::protobuf::Message> && __ptr64 __cdecl
   std::forward<struct std::default_delete<class google::protobuf::Message> >(struct
   std::default_delete<class google::protobuf::Message> & __ptr64) */

default_delete<google::protobuf::Message> * __cdecl
std::forward<std::default_delete<google::protobuf::Message>_>
          (default_delete<class_google::protobuf::Message> *param_1)

{
  return (default_delete<google::protobuf::Message> *)param_1;
}

// forward<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>_> @ 14fb62950

/* class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > && __ptr64 __cdecl std::forward<class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > >(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > & __ptr64) */

RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_> * __cdecl
std::
forward<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>_>
          (RepeatedPtrIterator<class_google::protobuf::FieldOptions_EditionDefault_const_> *param_1)

{
  return (RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_> *)param_1;
}

// forward<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>_> @ 14fb62960

/* class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> && __ptr64 __cdecl std::forward<class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> >(class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> & __ptr64) */

btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
* __cdecl std::
          forward<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>_>
                    (btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>
                     *param_1)

{
  return (btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
          *)param_1;
}

// forward<google::protobuf::FieldOptions_EditionDefault> @ 14fb62970

/* class google::protobuf::FieldOptions_EditionDefault && __ptr64 __cdecl std::forward<class
   google::protobuf::FieldOptions_EditionDefault>(class
   google::protobuf::FieldOptions_EditionDefault & __ptr64) */

FieldOptions_EditionDefault * __cdecl
std::forward<google::protobuf::FieldOptions_EditionDefault>(FieldOptions_EditionDefault *param_1)

{
  return param_1;
}

// forward<google::protobuf::Edition> @ 14fb62980

/* enum google::protobuf::Edition && __ptr64 __cdecl std::forward<enum
   google::protobuf::Edition>(enum google::protobuf::Edition & __ptr64) */

Edition * __cdecl std::forward<google::protobuf::Edition>(Edition *param_1)

{
  return param_1;
}

// get<1> @ 14fb62990

/* public: class std::allocator<enum google::protobuf::Edition> & __ptr64 __cdecl
   absl::lts_20240722::container_internal::CompressedTuple<struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare,class
   std::allocator<enum google::protobuf::Edition>,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>::get<1>(void) __ptr64&  */

allocator<google::protobuf::Edition> * __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,std::allocator<google::protobuf::Edition>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>
::get<1>(CompressedTuple<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,std::allocator<google::protobuf::Edition>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>
         *this)

{
  return (allocator<google::protobuf::Edition> *)this;
}

// get<2> @ 14fb629a0

/* public: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 & __ptr64 __cdecl
   absl::lts_20240722::container_internal::CompressedTuple<struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare,class
   std::allocator<enum google::protobuf::Edition>,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>::get<2>(void) __ptr64&  */

btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
** __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,std::allocator<google::protobuf::Edition>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>
::get<2>(CompressedTuple<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,std::allocator<google::protobuf::Edition>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>
         *this)

{
  return (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          **)this;
}

// get<0> @ 14fb629b0

/* public: struct absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare const & __ptr64
   __cdecl absl::lts_20240722::container_internal::CompressedTuple<struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare,class
   std::allocator<enum google::protobuf::Edition>,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>::get<0>(void)const __ptr64&  */

checked_compare * __thiscall
absl::lts_20240722::container_internal::
CompressedTuple<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,std::allocator<google::protobuf::Edition>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>
::get<0>(CompressedTuple<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,std::allocator<google::protobuf::Edition>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64>
         *this)

{
  return (checked_compare *)this;
}

// insert_unique<google::protobuf::Edition,google::protobuf::Edition_const&___ptr64> @ 14fb629c0

/* public: struct std::pair<class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,bool> __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::insert_unique<enum google::protobuf::Edition,enum
   google::protobuf::Edition const & __ptr64>(enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const & __ptr64) __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::insert_unique<google::protobuf::Edition,google::protobuf::Edition_const&___ptr64>
          (btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,Edition *param_1,Edition *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  if (*(longlong *)(this + 0x10) == 0) {
    pvVar5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10);
    *(void **)pvVar5 = pvVar5;
    *(undefined4 *)((longlong)pvVar5 + 8) = 0x1000000;
    *(void **)(this + 8) = pvVar5;
    *(void **)this = pvVar5;
  }
  local_28 = *(longlong **)this;
  while( true ) {
    uVar10 = (ulonglong)*(byte *)((longlong)local_28 + 10);
    uVar6 = 0;
    if (uVar10 != 0) {
      do {
        uVar9 = uVar6 + uVar10 >> 1;
        uVar3 = uVar9 + 1;
        if ((int)*param_2 <= *(int *)((longlong)local_28 + uVar9 * 4 + 0xc)) {
          uVar10 = uVar9;
          uVar3 = uVar6;
        }
        uVar6 = uVar3;
      } while (uVar6 != uVar10);
    }
    uVar4 = (uint)uVar6;
    uStack_20 = CONCAT44(uStack_20._4_4_,uVar4);
    uVar2 = uStack_20;
    if (*(char *)((longlong)local_28 + 0xb) != '\0') break;
    local_28 = (longlong *)local_28[(uVar6 & 0xff) + 0x20];
  }
  plVar8 = local_28;
  if (uVar4 == *(byte *)((longlong)local_28 + 10)) {
    do {
      bVar1 = *(byte *)(plVar8 + 1);
      uVar4 = (uint)bVar1;
      plVar8 = (longlong *)*plVar8;
      uStack_20 = CONCAT44(uStack_20._4_4_,(uint)bVar1);
      if (*(char *)((longlong)plVar8 + 0xb) != '\0') {
        uVar4 = (uint)bVar1;
        plVar8 = (longlong *)0x0;
        break;
      }
    } while (bVar1 == *(byte *)((longlong)plVar8 + 10));
  }
  if ((plVar8 == (longlong *)0x0) ||
     ((int)*param_2 < *(int *)((longlong)plVar8 + (longlong)(int)uVar4 * 4 + 0xc))) {
    uStack_20 = uVar2;
    puVar7 = (undefined8 *)
             internal_emplace<google::protobuf::Edition_const&___ptr64>(this,local_18,&local_28);
    *(undefined1 *)(param_1 + 4) = EDITION_1_TEST_ONLY;
    plVar8 = (longlong *)*puVar7;
    uStack_20 = puVar7[1];
  }
  else {
    *(undefined1 *)(param_1 + 4) = EDITION_UNKNOWN;
  }
  *(longlong **)param_1 = plVar8;
  *(undefined8 *)(param_1 + 2) = uStack_20;
  return param_1;
}

// internal_emplace<google::protobuf::Edition_const&___ptr64> @ 14fb62b10

/* private: class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::internal_emplace<enum google::protobuf::Edition const &
   __ptr64>(class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,enum google::protobuf::Edition const & __ptr64)
   __ptr64 */

undefined8 * __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::internal_emplace<google::protobuf::Edition_const&___ptr64>
          (btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,undefined8 *param_2,
          btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
          *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar2;
  undefined4 *puVar3;
  btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
  bVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  bVar9;
  longlong lVar10;
  uint uVar11;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar12;
  longlong lVar13;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar14;
  byte bVar15;
  ulonglong uVar16;
  uint uVar17;
  
  pbVar14 = *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
              **)param_3;
  if (pbVar14[0xb] ==
      (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
       )0x0) {
    pbVar14 = *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                **)(pbVar14 + (ulonglong)(byte)param_3[8] * 8 + 0x100);
    *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
      **)param_3 = pbVar14;
    bVar9 = pbVar14[0xb];
    while (bVar9 == (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                     )0x0) {
      pbVar14 = *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                  **)(pbVar14 + (ulonglong)(byte)pbVar14[10] * 8 + 0x100);
      *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
        **)param_3 = pbVar14;
      bVar9 = pbVar14[0xb];
    }
    *(uint *)(param_3 + 8) = (uint)(byte)pbVar14[10];
  }
  bVar9 = pbVar14[0xb];
  if (bVar9 == (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                )0x0) {
    bVar9 = (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
             )0x3d;
  }
  if (pbVar14[10] == bVar9) {
    if ((byte)bVar9 < 0x3d) {
      uVar17 = 0x3d;
      if ((uint)(byte)bVar9 * 2 < 0x3d) {
        uVar17 = (uint)(byte)bVar9 * 2 & 0xff;
      }
      pvVar8 = std::_Allocate<16,std::_Default_allocate_traits,0>
                         ((ulonglong)uVar17 * 4 + 0x13 & 0xfffffffffffffff8);
      pbVar12 = pbVar14 + 0xc;
      *(void **)param_3 = pvVar8;
      *(void **)pvVar8 = pvVar8;
      *(undefined2 *)((longlong)pvVar8 + 8) = 0;
      *(undefined1 *)((longlong)pvVar8 + 10) = 0;
      *(char *)((longlong)pvVar8 + 0xb) = (char)uVar17;
      pbVar2 = pbVar12 + (ulonglong)(byte)pbVar14[10] * 4;
      if (pbVar12 != pbVar2) {
        do {
          *(undefined4 *)(pbVar12 + ((longlong)pvVar8 - (longlong)pbVar14)) = *(undefined4 *)pbVar12
          ;
          pbVar12 = pbVar12 + 4;
        } while (pbVar12 != pbVar2);
      }
      *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
        *)((longlong)pvVar8 + 10) = pbVar14[10];
      pbVar14[10] = (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                     )0x0;
      btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
      ::clear_and_delete(pbVar14,(allocator<google::protobuf::Edition> *)(this + 8));
      *(void **)(this + 8) = pvVar8;
      *(void **)this = pvVar8;
    }
    else {
      rebalance_or_split(this,param_3);
    }
  }
  lVar5 = *(longlong *)param_3;
  bVar4 = param_3[8];
  uVar16 = (ulonglong)(byte)bVar4;
  if ((byte)bVar4 <
      (byte)*(btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
              *)(lVar5 + 10)) {
    lVar10 = (byte)*(btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
                     *)(lVar5 + 10) - uVar16;
    lVar13 = lVar5 + (lVar10 + 3 + uVar16) * 4;
    lVar10 = lVar13 + lVar10 * -4;
    if (lVar13 != lVar10) {
      do {
        puVar1 = (undefined4 *)(lVar13 + -4);
        puVar3 = (undefined4 *)((((byte)bVar4 + 1) - uVar16) * 4 + -4 + lVar13);
        lVar13 = lVar13 + -4;
        *puVar3 = *puVar1;
      } while (lVar13 != lVar10);
    }
  }
  *(undefined4 *)(lVar5 + 0xc + uVar16 * 4) = *param_4;
  bVar15 = *(char *)(lVar5 + 10) + 1;
  *(byte *)(lVar5 + 10) = bVar15;
  if (*(char *)(lVar5 + 0xb) == '\0') {
    uVar17 = (uint)bVar15;
    while ((byte)bVar4 + 1 < uVar17) {
      uVar11 = uVar17 - 1 & 0xff;
      lVar13 = *(longlong *)(lVar5 + 0x100 + (ulonglong)uVar11 * 8);
      *(longlong *)(lVar5 + 0x100 + (ulonglong)uVar17 * 8) = lVar13;
      *(char *)(lVar13 + 8) = (char)uVar17;
      uVar17 = uVar11;
    }
  }
  uVar6 = *(undefined8 *)param_3;
  uVar7 = *(undefined8 *)(param_3 + 8);
  *(longlong *)(this + 0x10) = *(longlong *)(this + 0x10) + 1;
  *param_2 = uVar6;
  param_2[1] = uVar7;
  return param_2;
}

// internal_last<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>_> @ 14fb62d20

/* private: static class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::internal_last<class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> >(class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>) */

longlong * __cdecl
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::
internal_last<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>_>
          (longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_2;
  if (*(uint *)(param_2 + 1) == (uint)*(byte *)((longlong)plVar3 + 10)) {
    while( true ) {
      bVar1 = *(byte *)(plVar3 + 1);
      plVar3 = (longlong *)*plVar3;
      *(uint *)(param_2 + 1) = (uint)bVar1;
      *param_2 = (longlong)plVar3;
      if (*(char *)((longlong)plVar3 + 0xb) != '\0') break;
      if ((uint)bVar1 != (uint)*(byte *)((longlong)plVar3 + 10)) {
        lVar2 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = lVar2;
        return param_1;
      }
    }
    *param_2 = 0;
  }
  lVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar2;
  return param_1;
}

// internal_locate<google::protobuf::Edition> @ 14fb62d80

/* private: struct absl::lts_20240722::container_internal::SearchResult<class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,0> __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::internal_locate<enum google::protobuf::Edition>(enum
   google::protobuf::Edition const & __ptr64)const __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::internal_locate<google::protobuf::Edition>
          (btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,Edition *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *in_R8;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 uStack_c;
  
  uVar5 = *(undefined8 *)this;
  while( true ) {
    uVar4 = (ulonglong)*(byte *)(uVar5 + 10);
    uVar2 = 0;
    if (uVar4 != 0) {
      do {
        uVar3 = uVar2 + uVar4 >> 1;
        uVar1 = uVar3 + 1;
        if (*in_R8 <= *(int *)(uVar5 + 0xc + uVar3 * 4)) {
          uVar4 = uVar3;
          uVar1 = uVar2;
        }
        uVar2 = uVar1;
      } while (uVar2 != uVar4);
    }
    if (*(char *)(uVar5 + 0xb) != '\0') break;
    uVar5 = *(undefined8 *)(uVar5 + 0x100 + (uVar2 & 0xff) * 8);
  }
  *(undefined8 *)param_1 = uVar5;
  *(ulonglong *)(param_1 + 2) = CONCAT44(uStack_c,(int)uVar2);
  return param_1;
}

// key<google::protobuf::Edition> @ 14fb62e10

/* public: static enum google::protobuf::Edition const & __ptr64 __cdecl
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0>::key<enum google::protobuf::Edition>(enum
   google::protobuf::Edition const & __ptr64) */

Edition * __cdecl
absl::lts_20240722::container_internal::
set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>
::key<google::protobuf::Edition>(Edition *param_1)

{
  return param_1;
}

// launder<google::protobuf::Edition> @ 14fb62e20

/* enum google::protobuf::Edition * __ptr64 __cdecl std::launder<enum
   google::protobuf::Edition>(enum google::protobuf::Edition * __ptr64) */

Edition * __cdecl std::launder<google::protobuf::Edition>(Edition *param_1)

{
  return param_1;
}

// linear_search<google::protobuf::Edition,absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare> @ 14fb62e30

/* public: struct absl::lts_20240722::container_internal::SearchResult<unsigned __int64,0> __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::linear_search<enum google::protobuf::Edition,struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare>(enum
   google::protobuf::Edition const & __ptr64,struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare const & __ptr64)const
   __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::
linear_search<google::protobuf::Edition,absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare>
          (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,Edition *param_1,checked_compare *param_2)

{
  undefined8 uVar1;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar2;
  
  uVar1 = EDITION_UNKNOWN;
  if ((ulonglong)(byte)this[10] != EDITION_UNKNOWN) {
    pbVar2 = this + 0xc;
    do {
      if (*(int *)param_2 <= *(int *)pbVar2) break;
      uVar1 = uVar1 + EDITION_1_TEST_ONLY;
      pbVar2 = pbVar2 + 4;
    } while ((ulonglong)uVar1 < (ulonglong)(byte)this[10]);
  }
  *(undefined8 *)param_1 = uVar1;
  return param_1;
}

// linear_search_impl<google::protobuf::Edition,absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare> @ 14fb62e70

/* public: struct absl::lts_20240722::container_internal::SearchResult<unsigned __int64,0> __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::linear_search_impl<enum google::protobuf::Edition,struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare>(enum
   google::protobuf::Edition const & __ptr64,unsigned __int64,unsigned __int64,struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare const &
   __ptr64,struct std::integral_constant<bool,0>)const __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::
linear_search_impl<google::protobuf::Edition,absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare>
          (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,Edition *param_1,__uint64 param_2,__uint64 param_3,checked_compare *param_4,
          integral_constant<bool,0> param_5)

{
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar1;
  
  if (param_3 < param_4) {
    pbVar1 = this + (param_3 + 3) * 4;
    do {
      if (*(int *)param_2 <= *(int *)pbVar1) break;
      param_3 = param_3 + 1;
      pbVar1 = pbVar1 + 4;
    } while (param_3 < param_4);
  }
  *(__uint64 *)param_1 = param_3;
  return param_1;
}

// lower_bound<google::protobuf::Edition> @ 14fb62eb0

/* public: struct absl::lts_20240722::container_internal::SearchResult<unsigned __int64,0> __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::lower_bound<enum google::protobuf::Edition>(enum
   google::protobuf::Edition const & __ptr64,struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare const & __ptr64)const
   __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::lower_bound<google::protobuf::Edition>
          (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,Edition *param_1,checked_compare *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = ZEXT18((byte)this[10]);
  uVar4 = EDITION_UNKNOWN;
  if (uVar2 == EDITION_UNKNOWN) {
    param_1[0] = EDITION_UNKNOWN;
    param_1[1] = EDITION_UNKNOWN;
    return param_1;
  }
  do {
    uVar3 = (ulonglong)(uVar4 + uVar2) >> 1;
    uVar1 = uVar3 + EDITION_1_TEST_ONLY;
    if (*(int *)param_2 <= *(int *)(this + uVar3 * 4 + 0xc)) {
      uVar2 = uVar3;
      uVar1 = uVar4;
    }
    uVar4 = uVar1;
  } while (uVar4 != uVar2);
  *(undefined8 *)param_1 = uVar4;
  return param_1;
}

// make_unique<google::protobuf::DynamicMessageFactory,0> @ 14fb62f10

/* class std::unique_ptr<class google::protobuf::DynamicMessageFactory,struct
   std::default_delete<class google::protobuf::DynamicMessageFactory> > __cdecl
   std::make_unique<class google::protobuf::DynamicMessageFactory,0>(void) */

void __cdecl std::make_unique<google::protobuf::DynamicMessageFactory,0>(void)

{
  DynamicMessageFactory *this;
  undefined8 uVar1;
  undefined8 *in_RCX;
  
  uVar1 = 0;
  this = ::operator_new(0x40);
  if (this != (DynamicMessageFactory *)0x0) {
    uVar1 = google::protobuf::DynamicMessageFactory::DynamicMessageFactory(this);
  }
  *in_RCX = uVar1;
  return;
}

// move<std::less<google::protobuf::Edition>&___ptr64> @ 14fb62f60

/* struct std::less<enum google::protobuf::Edition> && __ptr64 __cdecl std::move<struct
   std::less<enum google::protobuf::Edition> & __ptr64>(struct std::less<enum
   google::protobuf::Edition> & __ptr64) */

less<google::protobuf::Edition> * __cdecl
std::move<std::less<google::protobuf::Edition>&___ptr64>
          (less<enum_google::protobuf::Edition> *param_1)

{
  return (less<google::protobuf::Edition> *)param_1;
}

// move<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>&___ptr64> @ 14fb62f70

/* class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > && __ptr64 __cdecl std::move<class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > & __ptr64>(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const > & __ptr64) */

RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_> * __cdecl
std::
move<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_>&___ptr64>
          (RepeatedPtrIterator<class_google::protobuf::FieldOptions_EditionDefault_const_> *param_1)

{
  return (RepeatedPtrIterator<google::protobuf::FieldOptions_EditionDefault_const_> *)param_1;
}

// move<google::protobuf::FieldOptions_EditionDefault&___ptr64> @ 14fb62f80

/* class google::protobuf::FieldOptions_EditionDefault && __ptr64 __cdecl std::move<class
   google::protobuf::FieldOptions_EditionDefault & __ptr64>(class
   google::protobuf::FieldOptions_EditionDefault & __ptr64) */

FieldOptions_EditionDefault * __cdecl
std::move<google::protobuf::FieldOptions_EditionDefault&___ptr64>
          (FieldOptions_EditionDefault *param_1)

{
  return param_1;
}

// move<google::protobuf::Edition&___ptr64> @ 14fb62f90

/* enum google::protobuf::Edition && __ptr64 __cdecl std::move<enum google::protobuf::Edition &
   __ptr64>(enum google::protobuf::Edition & __ptr64) */

Edition * __cdecl std::move<google::protobuf::Edition&___ptr64>(Edition *param_1)

{
  return param_1;
}

// next<google::protobuf::FieldOptions_EditionDefault*___ptr64> @ 14fb62fa0

/* class google::protobuf::FieldOptions_EditionDefault * __ptr64 __cdecl std::next<class
   google::protobuf::FieldOptions_EditionDefault * __ptr64>(class
   google::protobuf::FieldOptions_EditionDefault * __ptr64,__int64) */

FieldOptions_EditionDefault * __cdecl
std::next<google::protobuf::FieldOptions_EditionDefault*___ptr64>
          (FieldOptions_EditionDefault *param_1,__int64 param_2)

{
  return param_1 + param_2;
}

// next<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>_> @ 14fb62fb0

/* class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > __cdecl std::next<class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > >(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const >,__int64) */

longlong * __cdecl
std::
next<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>_>
          (longlong *param_1,longlong param_2,longlong param_3)

{
  *param_1 = param_2 + param_3 * 8;
  return param_1;
}

// prev<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>_> @ 14fb62fd0

/* class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > __cdecl std::prev<class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > >(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const >,__int64) */

longlong * __cdecl
std::
prev<google::protobuf::internal::RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>_>
          (longlong *param_1,longlong param_2,longlong param_3)

{
  *param_1 = param_2 + param_3 * -8;
  return param_1;
}

// prev<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>_> @ 14fb62ff0

/* class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > > __cdecl std::prev<class
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > > >(class std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault> >
   >,__int64) */

longlong * __cdecl
std::
prev<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>_>
          (longlong *param_1,longlong param_2,longlong param_3)

{
  *param_1 = param_2 + param_3 * -0x28;
  return param_1;
}

// transfer<std::allocator<google::protobuf::Edition>_> @ 14fb63050

/* public: static void __cdecl absl::lts_20240722::container_internal::common_policy_traits<struct
   absl::lts_20240722::container_internal::set_slot_policy<enum
   google::protobuf::Edition>,void>::transfer<class std::allocator<enum google::protobuf::Edition>
   >(class std::allocator<enum google::protobuf::Edition> * __ptr64,enum google::protobuf::Edition *
   __ptr64,enum google::protobuf::Edition * __ptr64) */

void __cdecl
absl::lts_20240722::container_internal::
common_policy_traits<absl::lts_20240722::container_internal::set_slot_policy<google::protobuf::Edition>,void>
::transfer<std::allocator<google::protobuf::Edition>_>
          (allocator<google::protobuf::Edition> *param_1,Edition *param_2,Edition *param_3)

{
  *param_2 = *param_3;
  return;
}

// transfer_impl<std::allocator<google::protobuf::Edition>,void> @ 14fb63060

/* private: static struct std::integral_constant<bool,1> __cdecl
   absl::lts_20240722::container_internal::common_policy_traits<struct
   absl::lts_20240722::container_internal::set_slot_policy<enum
   google::protobuf::Edition>,void>::transfer_impl<class std::allocator<enum
   google::protobuf::Edition>,void>(class std::allocator<enum google::protobuf::Edition> *
   __ptr64,enum google::protobuf::Edition * __ptr64,enum google::protobuf::Edition * __ptr64,struct
   absl::lts_20240722::container_internal::common_policy_traits<struct
   absl::lts_20240722::container_internal::set_slot_policy<enum
   google::protobuf::Edition>,void>::Rank1) */

integral_constant<bool,1> __cdecl
absl::lts_20240722::container_internal::
common_policy_traits<absl::lts_20240722::container_internal::set_slot_policy<google::protobuf::Edition>,void>
::transfer_impl<std::allocator<google::protobuf::Edition>,void>
          (undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *param_3;
  return (integral_constant<bool,1>)0x0;
}

// value_init<google::protobuf::Edition_const&___ptr64> @ 14fb63160

/* private: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::value_init<enum google::protobuf::Edition const &
   __ptr64>(unsigned char,class std::allocator<enum google::protobuf::Edition> * __ptr64,enum
   google::protobuf::Edition const & __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::value_init<google::protobuf::Edition_const&___ptr64>
          (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,uchar param_1,allocator<google::protobuf::Edition> *param_2,Edition *param_3)

{
  *(Edition *)(this + (ulonglong)param_1 * 4 + 0xc) = *param_3;
  return;
}

// value_init<google::protobuf::Edition*___ptr64> @ 14fb63180

/* private: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::value_init<enum google::protobuf::Edition *
   __ptr64>(unsigned char,class std::allocator<enum google::protobuf::Edition> * __ptr64,enum
   google::protobuf::Edition * __ptr64 && __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::value_init<google::protobuf::Edition*___ptr64>
          (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,uchar param_1,allocator<google::protobuf::Edition> *param_2,Edition **param_3)

{
  *(Edition *)(this + (ulonglong)param_1 * 4 + 0xc) = **param_3;
  return;
}

// <lambda_1> @ 14fb631a0

/* public: __cdecl `private: class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::internal_emplace<enum google::protobuf::Edition const &
   __ptr64>(class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,enum google::protobuf::Edition const & __ptr64)
   __ptr64'::`2'::<lambda_1>::<lambda_1>(class std::allocator<enum google::protobuf::Edition> *
   __ptr64 & __ptr64) __ptr64 */

<lambda_1> * __thiscall
`private:_class_absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::internal_emplace<google::protobuf::Edition_const&___ptr64>(absl::lts_20240722::container_internal::btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>,google::protobuf::Edition_const&___ptr64)___ptr64'
::__l2::<lambda_1>::<lambda_1>(<lambda_1> *this,allocator<google::protobuf::Edition> **param_1)

{
  *(allocator<google::protobuf::Edition> ***)this = param_1;
  return this;
}

// <lambda_2> @ 14fb631b0

/* public: __cdecl `private: class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::internal_emplace<enum google::protobuf::Edition const &
   __ptr64>(class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,enum google::protobuf::Edition const & __ptr64)
   __ptr64'::`2'::<lambda_2>::<lambda_2>(class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> & __ptr64,class
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,class `private: class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::internal_emplace<enum google::protobuf::Edition const &
   __ptr64>(class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,enum google::protobuf::Edition const & __ptr64)
   __ptr64'::`2'::<lambda_1> const & __ptr64) __ptr64 */

<lambda_2> * __thiscall
`private:_class_absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::internal_emplace<google::protobuf::Edition_const&___ptr64>(absl::lts_20240722::container_internal::btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>,google::protobuf::Edition_const&___ptr64)___ptr64'
::__l2::<lambda_2>::<lambda_2>
          (<lambda_2> *this,
          btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>
          *param_1,btree<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                   *param_2,<lambda_1> *param_3)

{
  *(btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>
    **)this = param_1;
  *(btree<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
    **)(this + 8) = param_2;
  *(<lambda_1> **)(this + 0x10) = param_3;
  return this;
}

// LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_> @ 14fb631d0

/* public: __cdecl absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class
   std::tuple<class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >(void) __ptr64 */

LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
* __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
          (LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
           *this)

{
  *(undefined8 *)this = 0;
  return this;
}

// LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_> @ 14fb631e0

/* public: __cdecl absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class
   std::tuple<class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4>,struct std::integer_sequence<unsigned __int64,0,1>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4>,struct std::integer_sequence<unsigned __int64,0,1>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >(unsigned __int64,unsigned __int64) __ptr64 */

LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
* __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
          (LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
           *this,__uint64 param_1,__uint64 param_2)

{
  *(__uint64 *)this = param_1;
  *(__uint64 *)(this + 8) = param_2;
  return this;
}

// LayoutWithStaticSizes<std::integer_sequence<unsigned___int64,1,0,4,61,62>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64> @ 14fb63200

/* public: __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutWithStaticSizes<struct
   std::integer_sequence<unsigned __int64,1,0,4,61,62>,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>::LayoutWithStaticSizes<struct
   std::integer_sequence<unsigned __int64,1,0,4,61,62>,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>(void) __ptr64 */

LayoutWithStaticSizes<std::integer_sequence<unsigned___int64,1,0,4,61,62>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>
* __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutWithStaticSizes<std::integer_sequence<unsigned___int64,1,0,4,61,62>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>
::
LayoutWithStaticSizes<std::integer_sequence<unsigned___int64,1,0,4,61,62>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>
          (LayoutWithStaticSizes<std::integer_sequence<unsigned___int64,1,0,4,61,62>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>
           *this)

{
  *(undefined8 *)this = 0;
  return this;
}

// LayoutWithStaticSizes<std::integer_sequence<unsigned___int64,1,0,4>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64> @ 14fb63210

/* public: __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutWithStaticSizes<struct
   std::integer_sequence<unsigned __int64,1,0,4>,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>::LayoutWithStaticSizes<struct
   std::integer_sequence<unsigned __int64,1,0,4>,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>(unsigned __int64,unsigned __int64) __ptr64 */

LayoutWithStaticSizes<std::integer_sequence<unsigned___int64,1,0,4>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>
* __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutWithStaticSizes<std::integer_sequence<unsigned___int64,1,0,4>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>
::
LayoutWithStaticSizes<std::integer_sequence<unsigned___int64,1,0,4>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>
          (LayoutWithStaticSizes<std::integer_sequence<unsigned___int64,1,0,4>,absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>
           *this,__uint64 param_1,__uint64 param_2)

{
  *(__uint64 *)this = param_1;
  *(__uint64 *)(this + 8) = param_2;
  return this;
}

// SearchResult<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,0> @ 14fb63230

/* public: __cdecl absl::lts_20240722::container_internal::SearchResult<class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,0>::SearchResult<class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,0>(class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,enum
   absl::lts_20240722::container_internal::MatchKind) __ptr64 */

SearchResult<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,0>
* __thiscall
absl::lts_20240722::container_internal::
SearchResult<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,0>
::
SearchResult<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,0>
          (SearchResult<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,0>
           *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)this = *param_2;
  *(undefined8 *)(this + 8) = uVar1;
  return this;
}

// _Uninitialized_backout_al<std::allocator<google::protobuf::FieldOptions_EditionDefault>_> @ 14fb63240

/* public: __cdecl std::_Uninitialized_backout_al<class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> >::_Uninitialized_backout_al<class
   std::allocator<class google::protobuf::FieldOptions_EditionDefault> >(class
   google::protobuf::FieldOptions_EditionDefault * __ptr64,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> & __ptr64) __ptr64 */

_Uninitialized_backout_al<std::allocator<google::protobuf::FieldOptions_EditionDefault>_> *
__thiscall
std::_Uninitialized_backout_al<std::allocator<google::protobuf::FieldOptions_EditionDefault>_>::
_Uninitialized_backout_al<std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
          (_Uninitialized_backout_al<std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
           *this,FieldOptions_EditionDefault *param_1,
          allocator<google::protobuf::FieldOptions_EditionDefault> *param_2)

{
  *(FieldOptions_EditionDefault **)this = param_1;
  *(FieldOptions_EditionDefault **)(this + 8) = param_1;
  *(allocator<google::protobuf::FieldOptions_EditionDefault> **)(this + 0x10) = param_2;
  return this;
}

// _Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_> @ 14fb63260

/* public: __cdecl std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault> >
   >::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > >(class
   google::protobuf::FieldOptions_EditionDefault * __ptr64,struct std::_Container_base0 const *
   __ptr64) __ptr64 */

_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
* __thiscall
std::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
          (_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
           *this,FieldOptions_EditionDefault *param_1,_Container_base0 *param_2)

{
  *(FieldOptions_EditionDefault **)this = param_1;
  return this;
}

// _Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_> @ 14fb63270

/* public: __cdecl std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > >::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault> >
   >(class google::protobuf::FieldOptions_EditionDefault * __ptr64,struct std::_Container_base0
   const * __ptr64) __ptr64 */

_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
* __thiscall
std::
_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
::
_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
           *this,FieldOptions_EditionDefault *param_1,_Container_base0 *param_2)

{
  *(FieldOptions_EditionDefault **)this = param_1;
  return this;
}

// _Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_> @ 14fb63280

/* public: __cdecl std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> >::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> >(void) __ptr64 */

_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_> * __thiscall
std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>::
_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>
          (_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// allocator<google::protobuf::FieldOptions_EditionDefault> @ 14fb632a0

/* public: __cdecl std::allocator<class
   google::protobuf::FieldOptions_EditionDefault>::allocator<class
   google::protobuf::FieldOptions_EditionDefault>(void) __ptr64 */

allocator<google::protobuf::FieldOptions_EditionDefault> * __thiscall
std::allocator<google::protobuf::FieldOptions_EditionDefault>::
allocator<google::protobuf::FieldOptions_EditionDefault>
          (allocator<google::protobuf::FieldOptions_EditionDefault> *this)

{
  return this;
}

// allocator<google::protobuf::Edition> @ 14fb632b0

/* public: __cdecl std::allocator<enum google::protobuf::Edition>::allocator<enum
   google::protobuf::Edition>(void) __ptr64 */

allocator<google::protobuf::Edition> * __thiscall
std::allocator<google::protobuf::Edition>::allocator<google::protobuf::Edition>
          (allocator<google::protobuf::Edition> *this)

{
  return this;
}

// btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_> @ 14fb632c0

/* public: __cdecl absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >(struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare const & __ptr64,class
   std::allocator<enum google::protobuf::Edition> const & __ptr64) __ptr64 */

btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
* __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          (btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,checked_compare *param_1,allocator<google::protobuf::Edition> *param_2)

{
  *(undefined ***)this =
       &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
        ::__l2::empty_node;
  *(undefined ***)(this + 8) =
       &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
        ::__l2::empty_node;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// btree_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_> @ 14fb632e0

/* public: __cdecl absl::lts_20240722::container_internal::btree_container<class
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > >::btree_container<class
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > >(void) __ptr64 */

btree_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
* __thiscall
absl::lts_20240722::container_internal::
btree_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
::
btree_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
          (btree_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
           *this)

{
  *(undefined ***)this =
       &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
        ::__l2::empty_node;
  *(undefined ***)(this + 8) =
       &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
        ::__l2::empty_node;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64> @ 14fb63300

/* public: __cdecl absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>(class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64) __ptr64 */

btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
* __thiscall
absl::lts_20240722::container_internal::
btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
::
btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
          (btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
           *this,btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                 *param_1)

{
  *(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
    **)this = param_1;
  *(undefined4 *)(this + 8) = 0;
  return this;
}

// btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64> @ 14fb63320

/* public: __cdecl absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>(class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,int) __ptr64 */

btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
* __thiscall
absl::lts_20240722::container_internal::
btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
::
btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
          (btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
           *this,btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                 *param_1,int param_2)

{
  *(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
    **)this = param_1;
  *(int *)(this + 8) = param_2;
  return this;
}

// btree_set<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>_> @ 14fb63340

/* public: __cdecl absl::lts_20240722::btree_set<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum google::protobuf::Edition>
   >::btree_set<enum google::protobuf::Edition,struct std::less<enum
   google::protobuf::Edition>,class std::allocator<enum google::protobuf::Edition> >(void) __ptr64
    */

btree_set<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>_>
* __thiscall
absl::lts_20240722::
btree_set<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>_>
::
btree_set<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>_>
          (btree_set<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>_>
           *this)

{
  *(undefined ***)this =
       &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
        ::__l2::empty_node;
  *(undefined ***)(this + 8) =
       &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
        ::__l2::empty_node;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// btree_set_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_> @ 14fb63360

/* public: __cdecl absl::lts_20240722::container_internal::btree_set_container<class
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > >::btree_set_container<class
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > >(void) __ptr64 */

btree_set_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
* __thiscall
absl::lts_20240722::container_internal::
btree_set_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
::
btree_set_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
          (btree_set_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
           *this)

{
  *(undefined ***)this =
       &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
        ::__l2::empty_node;
  *(undefined ***)(this + 8) =
       &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
        ::__l2::empty_node;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// checked_compare_base<std::less<google::protobuf::Edition>,1> @ 14fb63380

/* public: __cdecl absl::lts_20240722::container_internal::checked_compare_base<struct
   std::less<enum google::protobuf::Edition>,1>::checked_compare_base<struct std::less<enum
   google::protobuf::Edition>,1>(struct std::less<enum google::protobuf::Edition>) __ptr64 */

checked_compare_base<std::less<google::protobuf::Edition>,1> * __thiscall
absl::lts_20240722::container_internal::checked_compare_base<std::less<google::protobuf::Edition>,1>
::checked_compare_base<std::less<google::protobuf::Edition>,1>
          (checked_compare_base<std::less<google::protobuf::Edition>,1> *this)

{
  return this;
}

// FeatureResolver @ 14fb63390

/* private: __cdecl google::protobuf::FeatureResolver::FeatureResolver(class
   google::protobuf::FeatureSet) __ptr64 */

FeatureResolver * __thiscall
google::protobuf::FeatureResolver::FeatureResolver(FeatureResolver *this,FeatureSet *param_1)

{
  FeatureSet::FeatureSet((FeatureSet *)this,param_1);
  FeatureSet::~FeatureSet(param_1);
  return this;
}

// FieldOptions_EditionDefault @ 14fb633d0

/* protected: __cdecl
   google::protobuf::FieldOptions_EditionDefault::FieldOptions_EditionDefault(class
   google::protobuf::Arena * __ptr64,class google::protobuf::FieldOptions_EditionDefault && __ptr64)
   __ptr64 */

FieldOptions_EditionDefault * __thiscall
google::protobuf::FieldOptions_EditionDefault::FieldOptions_EditionDefault
          (FieldOptions_EditionDefault *this,Arena *param_1,FieldOptions_EditionDefault *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FieldOptions_EditionDefault(this,param_1);
  this->_padding_ = (longlong)vftable;
  if (this != param_2) {
    puVar1 = (undefined8 *)(param_2->_padding_ & 0xfffffffffffffffe);
    if ((param_2->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_2);
    }
    else {
      CopyFrom(this,param_2);
    }
  }
  return this;
}

// FieldOptions_EditionDefault @ 14fb63450

/* public: __cdecl google::protobuf::FieldOptions_EditionDefault::FieldOptions_EditionDefault(class
   google::protobuf::FieldOptions_EditionDefault && __ptr64) __ptr64 */

FieldOptions_EditionDefault * __thiscall
google::protobuf::FieldOptions_EditionDefault::FieldOptions_EditionDefault
          (FieldOptions_EditionDefault *this,FieldOptions_EditionDefault *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FieldOptions_EditionDefault(this,(Arena *)0x0);
  this->_padding_ = (longlong)vftable;
  if (this != param_1) {
    puVar1 = (undefined8 *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
    }
    else {
      CopyFrom(this,param_1);
    }
  }
  this->_padding_ = (longlong)vftable;
  return this;
}

// FieldOptions_EditionDefault @ 14fb634e0

/* public: __cdecl google::protobuf::FieldOptions_EditionDefault::FieldOptions_EditionDefault(class
   google::protobuf::FieldOptions_EditionDefault const & __ptr64) __ptr64 */

FieldOptions_EditionDefault * __thiscall
google::protobuf::FieldOptions_EditionDefault::FieldOptions_EditionDefault
          (FieldOptions_EditionDefault *this,FieldOptions_EditionDefault *param_1)

{
  FieldOptions_EditionDefault(this,(Arena *)0x0,param_1);
  this->_padding_ = (longlong)vftable;
  return this;
}

// FieldOptions_FeatureSupport @ 14fb63510

/* public: __cdecl google::protobuf::FieldOptions_FeatureSupport::FieldOptions_FeatureSupport(class
   google::protobuf::FieldOptions_FeatureSupport const & __ptr64) __ptr64 */

FieldOptions_FeatureSupport * __thiscall
google::protobuf::FieldOptions_FeatureSupport::FieldOptions_FeatureSupport
          (FieldOptions_FeatureSupport *this,FieldOptions_FeatureSupport *param_1)

{
  FieldOptions_FeatureSupport(this,(Arena *)0x0,param_1);
  this->_padding_ = (longlong)vftable;
  return this;
}

// ValidationResults @ 14fb63540

/* public: __cdecl google::protobuf::FeatureResolver::ValidationResults::ValidationResults(struct
   google::protobuf::FeatureResolver::ValidationResults && __ptr64) __ptr64 */

ValidationResults * __thiscall
google::protobuf::FeatureResolver::ValidationResults::ValidationResults
          (ValidationResults *this,ValidationResults *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = uVar3;
  *(undefined8 *)(this + 0x10) = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined8 *)(this + 0x28) = uVar3;
  return this;
}

// ValidationResults @ 14fb635b0

/* public: __cdecl google::protobuf::FeatureResolver::ValidationResults::ValidationResults(void)
   __ptr64 */

ValidationResults * __thiscall
google::protobuf::FeatureResolver::ValidationResults::ValidationResults(ValidationResults *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  return this;
}

// checked_compare @ 14fb635e0

/* public: __cdecl absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum
   google::protobuf::Edition>::checked_compare::checked_compare(struct std::less<enum
   google::protobuf::Edition>) __ptr64 */

checked_compare * __thiscall
absl::lts_20240722::container_internal::
key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare
::checked_compare(checked_compare *this)

{
  return this;
}

// ~StatusOr<google::protobuf::FeatureSetDefaults> @ 14fb635f0

/* public: __cdecl absl::lts_20240722::StatusOr<class
   google::protobuf::FeatureSetDefaults>::~StatusOr<class
   google::protobuf::FeatureSetDefaults>(void) __ptr64 */

void __thiscall
absl::lts_20240722::StatusOr<google::protobuf::FeatureSetDefaults>::
~StatusOr<google::protobuf::FeatureSetDefaults>
          (StatusOr<google::protobuf::FeatureSetDefaults> *this)

{
  StatusRep *this_00;
  
  this_00 = *(StatusRep **)this;
  if (this_00 == (StatusRep *)&DAT_00000001) {
    google::protobuf::FeatureSetDefaults::~FeatureSetDefaults((FeatureSetDefaults *)(this + 8));
    return;
  }
  if (((ulonglong)this_00 & 1) == 0) {
    status_internal::StatusRep::Unref(this_00);
  }
  return;
}

// ~StatusOrData<google::protobuf::FeatureSetDefaults> @ 14fb63630

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::FeatureSetDefaults>::~StatusOrData<class
   google::protobuf::FeatureSetDefaults>(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::FeatureSetDefaults>::
~StatusOrData<google::protobuf::FeatureSetDefaults>
          (StatusOrData<google::protobuf::FeatureSetDefaults> *this)

{
  StatusRep *this_00;
  
  this_00 = *(StatusRep **)this;
  if (this_00 == (StatusRep *)&DAT_00000001) {
    google::protobuf::FeatureSetDefaults::~FeatureSetDefaults((FeatureSetDefaults *)(this + 8));
    return;
  }
  if (((ulonglong)this_00 & 1) == 0) {
    status_internal::StatusRep::Unref(this_00);
  }
  return;
}

// ~_Tidy_guard<std::vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>_> @ 14fb63670

/* public: __cdecl std::_Tidy_guard<class std::vector<class
   google::protobuf::FieldOptions_EditionDefault,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> > >::~_Tidy_guard<class std::vector<class
   google::protobuf::FieldOptions_EditionDefault,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> > >(void) __ptr64 */

void __thiscall
std::
_Tidy_guard<std::vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>_>
::
~_Tidy_guard<std::vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>_>
          (_Tidy_guard<std::vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>_>
           *this)

{
  longlong *plVar1;
  FieldOptions_EditionDefault *pFVar2;
  void *pvVar3;
  ulong64 uVar4;
  FieldOptions_EditionDefault *this_00;
  void *pvVar5;
  
  plVar1 = *(longlong **)this;
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  this_00 = (FieldOptions_EditionDefault *)*plVar1;
  if (this_00 != (FieldOptions_EditionDefault *)0x0) {
    pFVar2 = (FieldOptions_EditionDefault *)plVar1[1];
    for (; this_00 != pFVar2; this_00 = this_00 + 1) {
      google::protobuf::FieldOptions_EditionDefault::~FieldOptions_EditionDefault(this_00);
    }
    pvVar3 = (void *)*plVar1;
    uVar4 = ((plVar1[2] - (longlong)pvVar3) / 0x28) * 0x28;
    pvVar5 = pvVar3;
    if (0xfff < uVar4) {
      pvVar5 = *(void **)((longlong)pvVar3 + -8);
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar5))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar5,uVar4);
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
  return;
}

// ~_Uninitialized_backout_al<std::allocator<google::protobuf::FieldOptions_EditionDefault>_> @ 14fb63690

/* public: __cdecl std::_Uninitialized_backout_al<class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> >::~_Uninitialized_backout_al<class
   std::allocator<class google::protobuf::FieldOptions_EditionDefault> >(void) __ptr64 */

void __thiscall
std::_Uninitialized_backout_al<std::allocator<google::protobuf::FieldOptions_EditionDefault>_>::
~_Uninitialized_backout_al<std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
          (_Uninitialized_backout_al<std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
           *this)

{
  FieldOptions_EditionDefault *pFVar1;
  FieldOptions_EditionDefault *this_00;
  
  pFVar1 = *(FieldOptions_EditionDefault **)(this + 8);
  for (this_00 = *(FieldOptions_EditionDefault **)this; this_00 != pFVar1; this_00 = this_00 + 1) {
    google::protobuf::FieldOptions_EditionDefault::~FieldOptions_EditionDefault(this_00);
  }
  return;
}

// ~btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_> @ 14fb636d0

/* public: __cdecl absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::~btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >(void) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::
~btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          (btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this)

{
  if (*(longlong *)(this + 0x10) != 0) {
    btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
    ::clear_and_delete(*(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                         **)this,(allocator<google::protobuf::Edition> *)(this + 8));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)(this + 8) =
       &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
        ::__l2::empty_node;
  *(undefined ***)this =
       &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
        ::__l2::empty_node;
  return;
}

// ~btree_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_> @ 14fb63720

/* public: __cdecl absl::lts_20240722::container_internal::btree_container<class
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > >::~btree_container<class
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > >(void) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
::
~btree_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
          (btree_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
           *this)

{
  if (*(longlong *)(this + 0x10) != 0) {
    btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
    ::clear_and_delete(*(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                         **)this,(allocator<google::protobuf::Edition> *)(this + 8));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)(this + 8) =
       &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
        ::__l2::empty_node;
  *(undefined ***)this =
       &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
        ::__l2::empty_node;
  return;
}

// ~btree_set<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>_> @ 14fb63770

/* public: __cdecl absl::lts_20240722::btree_set<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum google::protobuf::Edition>
   >::~btree_set<enum google::protobuf::Edition,struct std::less<enum
   google::protobuf::Edition>,class std::allocator<enum google::protobuf::Edition> >(void) __ptr64
    */

void __thiscall
absl::lts_20240722::
btree_set<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>_>
::
~btree_set<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>_>
          (btree_set<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>_>
           *this)

{
  if (*(longlong *)(this + 0x10) != 0) {
    container_internal::
    btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
    ::clear_and_delete(*(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                         **)this,(allocator<google::protobuf::Edition> *)(this + 8));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)(this + 8) =
       &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
        ::__l2::empty_node;
  *(undefined ***)this =
       &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
        ::__l2::empty_node;
  return;
}

// ~btree_set_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_> @ 14fb637c0

/* public: __cdecl absl::lts_20240722::container_internal::btree_set_container<class
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > >::~btree_set_container<class
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > >(void) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_set_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
::
~btree_set_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
          (btree_set_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
           *this)

{
  if (*(longlong *)(this + 0x10) != 0) {
    btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
    ::clear_and_delete(*(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                         **)this,(allocator<google::protobuf::Edition> *)(this + 8));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)(this + 8) =
       &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
        ::__l2::empty_node;
  *(undefined ***)this =
       &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
        ::__l2::empty_node;
  return;
}

// ~unique_ptr<google::protobuf::DynamicMessageFactory,std::default_delete<google::protobuf::DynamicMessageFactory>_> @ 14fb63810

/* public: __cdecl std::unique_ptr<class google::protobuf::DynamicMessageFactory,struct
   std::default_delete<class google::protobuf::DynamicMessageFactory> >::~unique_ptr<class
   google::protobuf::DynamicMessageFactory,struct std::default_delete<class
   google::protobuf::DynamicMessageFactory> >(void) __ptr64 */

void __thiscall
std::
unique_ptr<google::protobuf::DynamicMessageFactory,std::default_delete<google::protobuf::DynamicMessageFactory>_>
::
~unique_ptr<google::protobuf::DynamicMessageFactory,std::default_delete<google::protobuf::DynamicMessageFactory>_>
          (unique_ptr<google::protobuf::DynamicMessageFactory,std::default_delete<google::protobuf::DynamicMessageFactory>_>
           *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014fb63820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// ~vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_> @ 14fb63830

/* public: __cdecl std::vector<class google::protobuf::FieldOptions_EditionDefault,class
   std::allocator<class google::protobuf::FieldOptions_EditionDefault> >::~vector<class
   google::protobuf::FieldOptions_EditionDefault,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> >(void) __ptr64 */

void __thiscall
std::
vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
::
~vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
          (vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
           *this)

{
  _Tidy(this);
  return;
}

// operator= @ 14fb63840

/* public: class google::protobuf::FieldOptions_EditionDefault & __ptr64 __cdecl
   google::protobuf::FieldOptions_EditionDefault::operator=(class
   google::protobuf::FieldOptions_EditionDefault && __ptr64) __ptr64 */

FieldOptions_EditionDefault * __thiscall
google::protobuf::FieldOptions_EditionDefault::operator=
          (FieldOptions_EditionDefault *this,FieldOptions_EditionDefault *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (this != param_1) {
    puVar1 = (undefined8 *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == puVar1) {
      InternalSwap(this,param_1);
      return this;
    }
    CopyFrom(this,param_1);
  }
  return this;
}

// operator== @ 14fb638a0

/* public: bool __cdecl std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault> > >::operator==(class
   std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > > const & __ptr64)const __ptr64 */

bool __thiscall
std::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
::operator==(_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
             *this,_Vector_const_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_google::protobuf::FieldOptions_EditionDefault>_>_>
                   *param_1)

{
  return *(longlong *)this == *(longlong *)param_1;
}

// operator== @ 14fb638b0

/* bool __cdecl google::protobuf::internal::operator==(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > const & __ptr64,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > const & __ptr64) */

bool __cdecl
google::protobuf::internal::operator==
          (RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>
           *param_1,
          RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>
          *param_2)

{
  return *(longlong *)param_1 == *(longlong *)param_2;
}

// operator!= @ 14fb638c0

/* public: bool __cdecl absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>::operator!=(class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> const & __ptr64)const __ptr64 */

bool __thiscall
absl::lts_20240722::container_internal::
btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
::operator!=(btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
             *this,btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>
                   *param_1)

{
  if ((*(longlong *)this == *(longlong *)param_1) && (*(int *)(this + 8) == *(int *)(param_1 + 8)))
  {
    return false;
  }
  return true;
}

// operator-> @ 14fb638f0

/* public: class google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const * __ptr64
   __cdecl google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const >::operator->(void)const
   __ptr64 */

FeatureSetDefaults_FeatureSetEditionDefault * __thiscall
google::protobuf::internal::
RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>::
operator->(RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>
           *this)

{
  return (FeatureSetDefaults_FeatureSetEditionDefault *)**(undefined8 **)this;
}

// operator-> @ 14fb63900

/* public: class google::protobuf::FieldOptions_EditionDefault * __ptr64 __cdecl
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > >::operator->(void)const __ptr64 */

FieldOptions_EditionDefault * __thiscall
std::
_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
::operator->(_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
             *this)

{
  return *(FieldOptions_EditionDefault **)this;
}

// operator-> @ 14fb63910

/* public: class google::protobuf::DynamicMessageFactory * __ptr64 __cdecl std::unique_ptr<class
   google::protobuf::DynamicMessageFactory,struct std::default_delete<class
   google::protobuf::DynamicMessageFactory> >::operator->(void)const __ptr64 */

DynamicMessageFactory * __thiscall
std::
unique_ptr<google::protobuf::DynamicMessageFactory,std::default_delete<google::protobuf::DynamicMessageFactory>_>
::operator->(unique_ptr<google::protobuf::DynamicMessageFactory,std::default_delete<google::protobuf::DynamicMessageFactory>_>
             *this)

{
  return *(DynamicMessageFactory **)this;
}

// operator* @ 14fb63920

/* public: enum google::protobuf::Edition const & __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>::operator*(void)const __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::
btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
::operator*(btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
            *this)

{
  return (Edition *)(*(longlong *)this + (ulonglong)(byte)this[8] * 4 + 0xc);
}

// operator++ @ 14fb63940

/* public: class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> & __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>::operator++(void) __ptr64 */

btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>
* __thiscall
absl::lts_20240722::container_internal::
btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
::operator++(btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
             *this)

{
  btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
  *pbVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)this;
  pbVar1 = this + 8;
  if (*(char *)((longlong)plVar7 + 0xb) != '\0') {
    uVar6 = *(uint *)pbVar1 + 1;
    *(uint *)pbVar1 = uVar6;
    if ((int)uVar6 < (int)(uint)*(byte *)((longlong)plVar7 + 10)) {
      return (btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>
              *)this;
    }
    if (*(char *)((longlong)plVar7 + 0xb) != '\0') {
      uVar4 = *(undefined8 *)this;
      uVar5 = *(undefined8 *)(this + 8);
      if (uVar6 == *(byte *)((longlong)plVar7 + 10)) {
        do {
          if (*(char *)(*plVar7 + 0xb) != '\0') break;
          uVar6 = (uint)*(byte *)(plVar7 + 1);
          *(uint *)pbVar1 = uVar6;
          plVar7 = (longlong *)*plVar7;
          *(longlong **)this = plVar7;
        } while (uVar6 == *(byte *)((longlong)plVar7 + 10));
      }
      if (uVar6 != *(byte *)((longlong)plVar7 + 10)) {
        return (btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>
                *)this;
      }
      *(undefined8 *)this = uVar4;
      *(undefined8 *)(this + 8) = uVar5;
      return (btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>
              *)this;
    }
  }
  lVar3 = plVar7[(ulonglong)(byte)((char)*pbVar1 + 1) + 0x20];
  *(longlong *)this = lVar3;
  cVar2 = *(char *)(lVar3 + 0xb);
  while (cVar2 == '\0') {
    lVar3 = *(longlong *)(lVar3 + 0x100);
    *(longlong *)this = lVar3;
    cVar2 = *(char *)(lVar3 + 0xb);
  }
  *(undefined4 *)(this + 8) = 0;
  return (btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>
          *)this;
}

// operator-- @ 14fb63a00

/* public: class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> & __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>::operator--(void) __ptr64 */

btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>
* __thiscall
absl::lts_20240722::container_internal::
btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
::operator--(btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
             *this)

{
  btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
  *pbVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)this;
  pbVar1 = this + 8;
  if (*(char *)((longlong)plVar7 + 0xb) != '\0') {
    *(int *)pbVar1 = *(int *)pbVar1 + -1;
    if (-1 < *(int *)pbVar1) {
      return (btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>
              *)this;
    }
    if (*(char *)((longlong)plVar7 + 0xb) != '\0') {
      uVar5 = *(undefined8 *)this;
      uVar6 = *(undefined8 *)(this + 8);
      if (-1 < *(int *)pbVar1) {
        return (btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>
                *)this;
      }
      do {
        if (*(char *)(*plVar7 + 0xb) != '\0') {
          *(undefined8 *)this = uVar5;
          *(undefined8 *)(this + 8) = uVar6;
          return (btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>
                  *)this;
        }
        bVar2 = *(byte *)(plVar7 + 1);
        *(uint *)pbVar1 = bVar2 - 1;
        plVar7 = (longlong *)*plVar7;
        *(longlong **)this = plVar7;
      } while ((int)(bVar2 - 1) < 0);
      return (btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>
              *)this;
    }
  }
  lVar4 = plVar7[(ulonglong)(byte)*pbVar1 + 0x20];
  *(longlong *)this = lVar4;
  cVar3 = *(char *)(lVar4 + 0xb);
  while (cVar3 == '\0') {
    lVar4 = *(longlong *)(lVar4 + 0x100 + (ulonglong)*(byte *)(lVar4 + 10) * 8);
    *(longlong *)this = lVar4;
    cVar3 = *(char *)(lVar4 + 0xb);
  }
  *(uint *)(this + 8) = *(byte *)(lVar4 + 10) - 1;
  return (btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>
          *)this;
}

// operator- @ 14fb63a90

/* __int64 __cdecl google::protobuf::internal::operator-(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const >,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const >) */

__int64 __cdecl google::protobuf::internal::operator-(longlong param_1,longlong param_2)

{
  return param_1 - param_2 >> 3;
}

// operator- @ 14fb63ab0

/* __int64 __cdecl google::protobuf::internal::operator-(class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const >,class
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FieldOptions_EditionDefault const >) */

__int64 __cdecl google::protobuf::internal::operator-(longlong param_1,longlong param_2)

{
  return param_1 - param_2 >> 3;
}

// operator() @ 14fb63ad0

/* public: __cdecl `private: class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::internal_emplace<enum google::protobuf::Edition const &
   __ptr64>(class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,enum google::protobuf::Edition const & __ptr64)
   __ptr64'::`2'::<lambda_1>::operator()(class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64)const __ptr64 */

void __thiscall
`private:_class_absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::internal_emplace<google::protobuf::Edition_const&___ptr64>(absl::lts_20240722::container_internal::btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>,google::protobuf::Edition_const&___ptr64)___ptr64'
::__l2::<lambda_1>::operator()
          (<lambda_1> *this,
          btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          *param_1,btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                   *param_2)

{
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar1;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar2;
  
  pbVar2 = param_1 + 0xc;
  pbVar1 = pbVar2 + (ulonglong)(byte)param_1[10] * 4;
  if (pbVar2 != pbVar1) {
    do {
      *(undefined4 *)(pbVar2 + ((longlong)param_2 - (longlong)param_1)) = *(undefined4 *)pbVar2;
      pbVar2 = pbVar2 + 4;
    } while (pbVar2 != pbVar1);
  }
  param_2[10] = param_1[10];
  param_1[10] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                 )0x0;
  absl::lts_20240722::container_internal::
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  ::clear_and_delete((btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                      *)param_1,(allocator<google::protobuf::Edition> *)**(undefined8 **)this);
  return;
}

// operator() @ 14fb63b50

/* public: __cdecl `private: class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::internal_emplace<enum google::protobuf::Edition const &
   __ptr64>(class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,enum google::protobuf::Edition const & __ptr64)
   __ptr64'::`2'::<lambda_2>::operator()(unsigned char)const __ptr64 */

void __thiscall
`private:_class_absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::internal_emplace<google::protobuf::Edition_const&___ptr64>(absl::lts_20240722::container_internal::btree_iterator<class_absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>,enum_google::protobuf::Edition_const&___ptr64,enum_google::protobuf::Edition_const*___ptr64>,google::protobuf::Edition_const&___ptr64)___ptr64'
::__l2::<lambda_2>::operator()(<lambda_2> *this,uchar param_1)

{
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar1;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar2;
  undefined8 *puVar3;
  void *pvVar4;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar5;
  
  pbVar2 = (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
            *)**(undefined8 **)this;
  pvVar4 = std::_Allocate<16,std::_Default_allocate_traits,0>
                     ((ulonglong)param_1 * 4 + 0x13 & 0xfffffffffffffff8);
  pbVar5 = pbVar2 + 0xc;
  *(void **)pvVar4 = pvVar4;
  *(undefined2 *)((longlong)pvVar4 + 8) = 0;
  *(undefined1 *)((longlong)pvVar4 + 10) = 0;
  *(uchar *)((longlong)pvVar4 + 0xb) = param_1;
  **(undefined8 **)this = pvVar4;
  puVar3 = *(undefined8 **)(this + 0x10);
  pbVar1 = pbVar5 + (ulonglong)(byte)pbVar2[10] * 4;
  if (pbVar5 != pbVar1) {
    do {
      *(undefined4 *)(pbVar5 + ((longlong)pvVar4 - (longlong)pbVar2)) = *(undefined4 *)pbVar5;
      pbVar5 = pbVar5 + 4;
    } while (pbVar5 != pbVar1);
  }
  *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
    *)((longlong)pvVar4 + 10) = pbVar2[10];
  pbVar2[10] = (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                )0x0;
  absl::lts_20240722::container_internal::
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  ::clear_and_delete(pbVar2,*(allocator<google::protobuf::Edition> **)*puVar3);
  *(void **)(*(longlong *)(this + 8) + 8) = pvVar4;
  **(undefined8 **)(this + 8) = pvVar4;
  return;
}

// operator() @ 14fb63c20

/* public: void __cdecl std::default_delete<class
   google::protobuf::DynamicMessageFactory>::operator()(class
   google::protobuf::DynamicMessageFactory * __ptr64)const __ptr64 */

void __thiscall
std::default_delete<google::protobuf::DynamicMessageFactory>::operator()
          (default_delete<google::protobuf::DynamicMessageFactory> *this,
          DynamicMessageFactory *param_1)

{
  if (param_1 != (DynamicMessageFactory *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014fb63c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)param_1)(param_1,1);
    return;
  }
  return;
}

// operator() @ 14fb63c40

/* public: bool __cdecl std::less<enum google::protobuf::Edition>::operator()(enum
   google::protobuf::Edition const & __ptr64,enum google::protobuf::Edition const & __ptr64)const
   __ptr64 */

bool __thiscall
std::less<google::protobuf::Edition>::operator()
          (less<google::protobuf::Edition> *this,Edition *param_1,Edition *param_2)

{
  return (int)*param_1 < (int)*param_2;
}

// operator+= @ 14fb63c50

/* public: class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const > & __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault const >::operator+=(__int64)
   __ptr64 */

RepeatedPtrIterator<class_google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_> *
__thiscall
google::protobuf::internal::
RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>::
operator+=(RepeatedPtrIterator<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>
           *this,__int64 param_1)

{
  *(longlong *)this = *(longlong *)this + param_1 * 8;
  return (RepeatedPtrIterator<class_google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault_const_>
          *)this;
}

// operator+= @ 14fb63c70

/* public: class std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > > & __ptr64 __cdecl
   std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > >::operator+=(__int64) __ptr64 */

_Vector_const_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_google::protobuf::FieldOptions_EditionDefault>_>_>
* __thiscall
std::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
::operator+=(_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
             *this,__int64 param_1)

{
  *(longlong *)this = *(longlong *)this + param_1 * 0x28;
  return (_Vector_const_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_google::protobuf::FieldOptions_EditionDefault>_>_>
          *)this;
}

// operator+= @ 14fb63c90

/* public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > > & __ptr64 __cdecl std::_Vector_iterator<class
   std::_Vector_val<struct std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault> >
   >::operator+=(__int64) __ptr64 */

_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_google::protobuf::FieldOptions_EditionDefault>_>_>
* __thiscall
std::
_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
::operator+=(_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
             *this,__int64 param_1)

{
  *(longlong *)this = *(longlong *)this + param_1 * 0x28;
  return (_Vector_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_google::protobuf::FieldOptions_EditionDefault>_>_>
          *)this;
}

// Add @ 14fb63cb0

/* public: class google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault * __ptr64 __cdecl
   google::protobuf::RepeatedPtrField<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>::Add(void) __ptr64 */

FeatureSetDefaults_FeatureSetEditionDefault * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>::
Add(RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> *this)

{
  FeatureSetDefaults_FeatureSetEditionDefault *pFVar1;
  
  pFVar1 = internal::RepeatedPtrFieldBase::AddMessageLite
                     ((RepeatedPtrFieldBase *)this,
                      Arena::
                      DefaultConstruct<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>
                     );
  return pFVar1;
}

// AllocSize @ 14fb63cd0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4,61,62>,struct std::integer_sequence<unsigned __int64>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::AllocSize(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::AllocSize(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4,61,62>,std::integer_sequence<unsigned___int64>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
            *this)

{
  return 0x2f0;
}

// AllocSize @ 14fb63ce0

/* public: unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::internal_layout::LayoutImpl<class std::tuple<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64>,struct std::integer_sequence<unsigned
   __int64,1,0,4>,struct std::integer_sequence<unsigned __int64,0,1>,struct
   std::integer_sequence<unsigned __int64,0,1,2,3,4>,struct std::integer_sequence<unsigned
   __int64,0,1,2,3,4> >::AllocSize(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::internal_layout::
LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
::AllocSize(LayoutImpl<std::tuple<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,unsigned_int,unsigned_char,google::protobuf::Edition,absl::lts_20240722::container_internal::btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>*___ptr64>,std::integer_sequence<unsigned___int64,1,0,4>,std::integer_sequence<unsigned___int64,0,1>,std::integer_sequence<unsigned___int64,0,1,2,3,4>,std::integer_sequence<unsigned___int64,0,1,2,3,4>_>
            *this)

{
  return (*(longlong *)this * 4 + 0x13U & 0xfffffffffffffff8) + *(longlong *)(this + 8) * 8;
}

// FUN_14fb63d00 @ 14fb63d00

void FUN_14fb63d00(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  FieldOptions_FeatureSupportDefaultTypeInternal *pFVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar6 + 0x40 + *(longlong *)(param_1 + 0x38));
      pFVar3 = &google::protobuf::_FieldOptions_FeatureSupport_default_instance_;
      if (*(FieldOptions_FeatureSupportDefaultTypeInternal **)(lVar2 + 0x78) !=
          (FieldOptions_FeatureSupportDefaultTypeInternal *)0x0) {
        pFVar3 = *(FieldOptions_FeatureSupportDefaultTypeInternal **)(lVar2 + 0x78);
      }
      FUN_14fb65730(*(undefined4 *)(pFVar3 + 0x20),param_2,param_3);
      pFVar3 = &google::protobuf::_FieldOptions_FeatureSupport_default_instance_;
      if (*(FieldOptions_FeatureSupportDefaultTypeInternal **)(lVar2 + 0x78) !=
          (FieldOptions_FeatureSupportDefaultTypeInternal *)0x0) {
        pFVar3 = *(FieldOptions_FeatureSupportDefaultTypeInternal **)(lVar2 + 0x78);
      }
      if ((*(uint *)(pFVar3 + 0x10) >> 3 & 1) != 0) {
        FUN_14fb65730(*(undefined4 *)(pFVar3 + 0x28),param_2,param_3);
      }
      plVar4 = (longlong *)(lVar2 + 0x40);
      if ((~(byte)*(longlong *)(lVar2 + 0x40) & 1) == 0) {
        plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x40) + 7);
      }
      plVar1 = plVar4 + *(int *)(lVar2 + 0x48);
      for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
        FUN_14fb65730(*(undefined4 *)(*plVar4 + 0x20),param_2,param_3);
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x60;
    } while (iVar5 < *(int *)(param_1 + 4));
  }
  return;
}

// CompileDefaults @ 14fb63e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static class absl::lts_20240722::StatusOr<class google::protobuf::FeatureSetDefaults>
   __cdecl google::protobuf::FeatureResolver::CompileDefaults(class google::protobuf::Descriptor
   const * __ptr64,class absl::lts_20240722::Span<class google::protobuf::FieldDescriptor const *
   __ptr64 const>,enum google::protobuf::Edition,enum google::protobuf::Edition) */

Status * __cdecl
google::protobuf::FeatureResolver::CompileDefaults
          (Status *param_1,longlong param_2,longlong *param_3,int param_4,int param_5)

{
  undefined **ppuVar1;
  FeatureSetDefaults *this;
  undefined4 *puVar2;
  char cVar3;
  FieldDescriptor *pFVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong64 *puVar8;
  Descriptor *pDVar9;
  MessageLite *pMVar10;
  MessageLite *pMVar11;
  StatusRep *this_00;
  Metadata *pMVar12;
  Message *pMVar13;
  void *pvVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar15;
  undefined8 *puVar16;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar17;
  Arena *pAVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  byte bVar22;
  ulong64 uVar23;
  longlong *plVar24;
  ulonglong uVar25;
  uint uVar26;
  undefined **ppuVar27;
  undefined1 auStack_258 [32];
  int local_238;
  StatusRep *local_228;
  uint local_220;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *local_218;
  undefined **local_210;
  longlong local_208;
  longlong *local_200;
  undefined8 *local_1f8;
  undefined **local_1f0;
  Status local_1e8;
  Status local_1e0;
  Status local_1d8;
  longlong local_1d0;
  Status local_1c8;
  Status *local_1c0;
  Status local_1b8 [2];
  undefined **local_1a8;
  undefined8 uStack_1a0;
  undefined8 *local_198;
  undefined4 *local_190;
  MessageLite *local_188;
  FeatureSetDefaults local_180;
  undefined4 local_148;
  char *local_138;
  undefined8 uStack_130;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_128;
  ulong64 uStack_120;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_118;
  ulong64 uStack_110;
  Status *local_108;
  longlong *local_100;
  basic_string_view<char,std::char_traits<char>_> local_f8;
  LogMessageFatal local_e8;
  basic_string_view<char,std::char_traits<char>_> local_d8;
  basic_string_view<char,std::char_traits<char>_> local_c8;
  Metadata local_b8;
  Metadata local_a8;
  _Bxty local_98;
  ulonglong local_80;
  _Bxty local_78;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_148 = 0;
  local_1d0 = param_2;
  local_1c0 = param_1;
  local_108 = param_1;
  if (param_5 < param_4) {
    local_238 = param_5;
    puVar8 = (ulong64 *)
             FUN_14fb5fd30(&local_228,"Invalid edition range, edition ",param_4,
                           " is newer than edition ");
    param_1->rep_ = *puVar8;
    *puVar8 = 0x37;
    local_1d8.rep_ = (ulong64)local_228;
    if (param_1->rep_ == 1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(param_1);
      local_1d8.rep_ = (ulong64)local_228;
    }
  }
  else if (param_2 == 0) {
    puVar8 = (ulong64 *)
             FUN_14fb5ec50(&local_228,
                           "Unable to find definition of google.protobuf.FeatureSet in descriptor pool."
                          );
    param_1->rep_ = *puVar8;
    *puVar8 = 0x37;
    local_1d8.rep_ = (ulong64)local_228;
    if (param_1->rep_ == 1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(param_1);
      local_1d8.rep_ = (ulong64)local_228;
    }
  }
  else {
    FUN_14fb65a00(&local_1e8);
    if ((StatusRep *)local_1e8.rep_ == (StatusRep *)&DAT_00000001) {
      puVar16 = (undefined8 *)*param_3;
      puVar20 = puVar16 + param_3[1];
      local_198 = puVar16;
      local_1f8 = puVar20;
      for (; puVar16 != puVar20; puVar16 = puVar16 + 1) {
        pFVar4 = (FieldDescriptor *)*puVar16;
        FUN_14fb662c0(&local_1d8,local_1d0,pFVar4);
        if ((StatusRep *)local_1d8.rep_ != (StatusRep *)&DAT_00000001) {
          param_1->rep_ = local_1d8.rep_;
          if ((local_1d8.rep_ & 1) == 0) {
            LOCK();
            *(int *)local_1d8.rep_ = *(int *)local_1d8.rep_ + 1;
            UNLOCK();
          }
          if (param_1->rep_ == 1) {
            absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(param_1);
          }
          goto LAB_14fb640ec;
        }
        pDVar9 = FieldDescriptor::message_type(pFVar4);
        FUN_14fb65a00(&local_1e0,pDVar9);
        if ((StatusRep *)local_1e0.rep_ != (StatusRep *)&DAT_00000001) {
          param_1->rep_ = local_1e0.rep_;
          if ((local_1e0.rep_ & 1) == 0) {
            LOCK();
            *(int *)local_1e0.rep_ = *(int *)local_1e0.rep_ + 1;
            UNLOCK();
          }
          local_1d8.rep_ = local_1e0.rep_;
          if (param_1->rep_ == 1) {
            absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(param_1);
            local_1d8.rep_ = local_1e0.rep_;
          }
          goto LAB_14fb640ec;
        }
      }
      local_218 = (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                   *)&`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
                      ::__l2::empty_node;
      local_210 = &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
                   ::__l2::empty_node;
      local_208 = 0;
      FUN_14fb63d00(local_1d0,param_5,&local_218);
      for (puVar16 = local_198; puVar16 != puVar20; puVar16 = puVar16 + 1) {
        pDVar9 = FieldDescriptor::message_type((FieldDescriptor *)*puVar16);
        FUN_14fb63d00(pDVar9,param_5,&local_218);
      }
      if (local_208 == 0) {
        local_138 = "!editions.empty()";
        uStack_130 = 0x11;
        local_f8._Mydata = "!editions.empty()";
        local_f8._Mysize = 0x11;
        absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                  (&local_e8,
                   "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\feature_resolver.cc"
                   ,0x1c1,&local_f8);
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_e8);
      }
      local_238 = *(int *)(*(undefined **)local_218 + 0xc);
      if (local_238 == 900) {
        if (param_4 < 900) {
          puVar8 = (ulong64 *)
                   FUN_14fb5fd30(&local_228,"Minimum edition ",param_4,
                                 " is earlier than the oldest valid edition ");
          param_1->rep_ = *puVar8;
          *puVar8 = 0x37;
          if (param_1->rep_ == 1) {
            absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(param_1);
          }
          if (((ulonglong)local_228 & 1) == 0) {
            absl::lts_20240722::status_internal::StatusRep::Unref(local_228);
          }
          if (local_208 == 0) {
            return param_1;
          }
          if (local_218[0xb] !=
              (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
               )0x0) {
            ::operator_delete(local_218,
                              (ulonglong)(byte)local_218[0xb] * 4 + 0x13 & 0xfffffffffffffff8);
            return param_1;
          }
          if (local_218[10] ==
              (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
               )0x0) {
            ::operator_delete(local_218,0x2f0);
            return param_1;
          }
          puVar5 = *(undefined **)local_218;
          pbVar17 = local_218;
          do {
            pbVar17 = *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                        **)(pbVar17 + 0x100);
          } while (pbVar17[0xb] ==
                   (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                    )0x0);
          uVar25 = (ulonglong)(byte)pbVar17[8];
          plVar21 = *(longlong **)pbVar17;
          do {
            do {
              puVar20 = (undefined8 *)plVar21[(uVar25 & 0xff) + 0x20];
              plVar24 = plVar21;
              if (*(char *)((longlong)puVar20 + 0xb) == '\0') {
                do {
                  puVar20 = (undefined8 *)puVar20[0x20];
                } while (*(char *)((longlong)puVar20 + 0xb) == '\0');
                uVar25 = (ulonglong)*(byte *)(puVar20 + 1);
                plVar24 = (longlong *)*puVar20;
              }
              bVar22 = *(byte *)((longlong)puVar20 + 0xb);
              if (*(byte *)((longlong)puVar20 + 0xb) == 0) {
                bVar22 = 0x3d;
              }
              ::operator_delete(puVar20,(ulonglong)bVar22 * 4 + 0x13 & 0xfffffffffffffff8);
              uVar25 = uVar25 + 1;
              plVar21 = plVar24;
            } while (uVar25 <= *(byte *)((longlong)plVar24 + 10));
            do {
              bVar22 = *(byte *)(plVar24 + 1);
              plVar21 = (longlong *)*plVar24;
              ::operator_delete(plVar24,0x2f0);
              if (plVar21 == (longlong *)puVar5) {
                return param_1;
              }
              uVar25 = (ulonglong)bVar22 + 1;
              plVar24 = plVar21;
            } while (*(byte *)((longlong)plVar21 + 10) < uVar25);
          } while( true );
        }
        FeatureSetDefaults::FeatureSetDefaults(&local_180,(Arena *)0x0);
        local_180._padding_ = (longlong)FeatureSetDefaults::vftable;
        local_180._impl_.maximum_edition_ = param_5;
        local_180._impl_._has_bits_.has_bits_[0] =
             (uint  [1])((uint)local_180._impl_._has_bits_.has_bits_[0] | 3);
        local_180._impl_.minimum_edition_ = param_4;
        local_228 = ::operator_new(0x40);
        if (local_228 == (StatusRep *)0x0) {
          local_200 = (longlong *)0x0;
        }
        else {
          local_200 = (longlong *)
                      DynamicMessageFactory::DynamicMessageFactory
                                ((DynamicMessageFactory *)local_228);
        }
        uVar25 = 0;
        local_1f0 = local_210;
        local_220 = (uint)*(byte *)((longlong)local_210 + 10);
        ppuVar27 = *(undefined ***)local_218;
        local_1a8 = *(undefined ***)local_218;
        local_100 = local_200;
        while ((param_1 = local_1c0, plVar21 = local_200, ppuVar27 != local_1f0 ||
               ((uint)uVar25 != local_220))) {
          puVar2 = (undefined4 *)((longlong)ppuVar27 + ((uVar25 & 0xff) + 3) * 4);
          local_190 = puVar2;
          pMVar10 = (MessageLite *)(**(code **)(*local_200 + 8))(local_200);
          pMVar10 = MessageLite::New(pMVar10,(Arena *)0x0);
          local_188 = pMVar10;
          pMVar11 = (MessageLite *)(**(code **)(*plVar21 + 8))(plVar21);
          this_00 = (StatusRep *)MessageLite::New(pMVar11,(Arena *)0x0);
          local_228 = this_00;
          FUN_14fb64dd0(local_1b8,*puVar2,pMVar10);
          param_1 = local_1c0;
          if ((StatusRep *)local_1b8[0].rep_ != (StatusRep *)&DAT_00000001) {
            local_1c0->rep_ = local_1b8[0].rep_;
            if ((local_1b8[0].rep_ & 1) == 0) {
              LOCK();
              *(int *)local_1b8[0].rep_ = *(int *)local_1b8[0].rep_ + 1;
              UNLOCK();
              this_00 = local_228;
              pMVar10 = local_188;
            }
            if (local_1c0->rep_ == 1) {
              absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(local_1c0);
            }
            if ((local_1b8[0].rep_ & 1) == 0) {
              absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_1b8[0].rep_);
            }
            if (this_00 != (StatusRep *)0x0) {
              (*(code *)**(undefined8 **)this_00)(this_00,1);
            }
            if (pMVar10 != (MessageLite *)0x0) {
              (**(code **)pMVar10->_padding_)(pMVar10,1);
            }
            goto LAB_14fb64793;
          }
          puVar16 = local_198;
          if (local_198 != puVar20) {
            do {
              pFVar4 = (FieldDescriptor *)*puVar16;
              pMVar12 = protobuf::Message::GetMetadata((Message *)this_00,&local_b8);
              Reflection::MutableMessage
                        (pMVar12->reflection,(Message *)this_00,pFVar4,(MessageFactory *)0x0);
              pMVar12 = protobuf::Message::GetMetadata((Message *)pMVar10,&local_a8);
              pMVar13 = Reflection::MutableMessage
                                  (pMVar12->reflection,(Message *)pMVar10,pFVar4,
                                   (MessageFactory *)0x0);
              FUN_14fb64dd0(&local_1c8,*local_190,pMVar13);
              param_1 = local_1c0;
              if ((StatusRep *)local_1c8.rep_ != (StatusRep *)&DAT_00000001) {
                local_1c0->rep_ = local_1c8.rep_;
                if ((local_1c8.rep_ & 1) == 0) {
                  LOCK();
                  *(int *)local_1c8.rep_ = *(int *)local_1c8.rep_ + 1;
                  UNLOCK();
                  this_00 = local_228;
                  pMVar10 = local_188;
                }
                if (local_1c0->rep_ == 1) {
                  absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg
                            (local_1c0);
                }
                if ((local_1c8.rep_ & 1) == 0) {
                  absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_1c8.rep_)
                  ;
                }
                if (this_00 != (StatusRep *)0x0) {
                  (*(code *)**(undefined8 **)this_00)(this_00,1);
                }
                if (pMVar10 != (MessageLite *)0x0) {
                  (**(code **)pMVar10->_padding_)(pMVar10,1);
                }
                if (local_200 == (longlong *)0x0) goto LAB_14fb647a7;
                puVar20 = (undefined8 *)*local_200;
                plVar21 = local_200;
                goto LAB_14fb6479f;
              }
              puVar16 = puVar16 + 1;
            } while (puVar16 != local_1f8);
          }
          pvVar14 = internal::RepeatedPtrFieldBase::AddMessageLite
                              ((RepeatedPtrFieldBase *)&local_180._impl_.defaults_,
                               Arena::
                               DefaultConstruct<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>
                              );
          *(undefined4 *)((longlong)pvVar14 + 0x28) = *local_190;
          *(uint *)((longlong)pvVar14 + 0x10) = *(uint *)((longlong)pvVar14 + 0x10) | 6;
          pMVar11 = *(MessageLite **)((longlong)pvVar14 + 0x20);
          if (pMVar11 == (MessageLite *)0x0) {
            pAVar18 = (Arena *)(*(ulonglong *)((longlong)pvVar14 + 8) & 0xfffffffffffffffe);
            if ((*(byte *)((longlong)pvVar14 + 8) & 1) != 0) {
              pAVar18 = (Arena *)(pAVar18->impl_).tag_and_id_;
            }
            pMVar11 = Arena::DefaultConstruct<google::protobuf::FeatureSet>(pAVar18);
            *(MessageLite **)((longlong)pvVar14 + 0x20) = pMVar11;
          }
          pbVar15 = MessageLite::SerializeAsString
                              (pMVar10,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                        *)&local_98);
          local_128 = pbVar15;
          if (0xf < (pbVar15->_Mypair)._Myval2._Myres) {
            local_128 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        (pbVar15->_Mypair)._Myval2._Bx._Ptr;
          }
          uStack_120 = (pbVar15->_Mypair)._Myval2._Mysize;
          local_d8._Mydata = (char *)local_128;
          local_d8._Mysize = uStack_120;
          MessageLite::MergeFromString(pMVar11,&local_d8);
          if (0xf < local_80) {
            uVar23 = local_80 + 1;
            uVar19 = local_98._Ptr;
            if (0xfff < uVar23) {
              uVar23 = local_80 + 0x28;
              uVar19 = *(undefined8 *)(local_98._Ptr + -8);
              if ((char *)0x1f < local_98._Ptr + (-8 - uVar19)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            ::operator_delete((void *)uVar19,uVar23);
          }
          *(uint *)((longlong)pvVar14 + 0x10) = *(uint *)((longlong)pvVar14 + 0x10) | 1;
          pMVar11 = *(MessageLite **)((longlong)pvVar14 + 0x18);
          if (pMVar11 == (MessageLite *)0x0) {
            pAVar18 = (Arena *)(*(ulonglong *)((longlong)pvVar14 + 8) & 0xfffffffffffffffe);
            if ((*(byte *)((longlong)pvVar14 + 8) & 1) != 0) {
              pAVar18 = (Arena *)(pAVar18->impl_).tag_and_id_;
            }
            pMVar11 = Arena::DefaultConstruct<google::protobuf::FeatureSet>(pAVar18);
            *(MessageLite **)((longlong)pvVar14 + 0x18) = pMVar11;
          }
          pbVar15 = MessageLite::SerializeAsString
                              ((MessageLite *)this_00,
                               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_78);
          local_118 = pbVar15;
          if (0xf < (pbVar15->_Mypair)._Myval2._Myres) {
            local_118 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        (pbVar15->_Mypair)._Myval2._Bx._Ptr;
          }
          uStack_110 = (pbVar15->_Mypair)._Myval2._Mysize;
          local_c8._Mydata = (char *)local_118;
          local_c8._Mysize = uStack_110;
          MessageLite::MergeFromString(pMVar11,&local_c8);
          if (0xf < local_60) {
            uVar23 = local_60 + 1;
            uVar19 = local_78._Ptr;
            if (0xfff < uVar23) {
              uVar23 = local_60 + 0x28;
              uVar19 = *(undefined8 *)(local_78._Ptr + -8);
              if ((char *)0x1f < local_78._Ptr + (-8 - uVar19)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            ::operator_delete((void *)uVar19,uVar23);
          }
          if (this_00 != (StatusRep *)0x0) {
            (*(code *)**(undefined8 **)this_00)(this_00);
          }
          if (pMVar10 != (MessageLite *)0x0) {
            (**(code **)pMVar10->_padding_)(pMVar10);
          }
          ppuVar7 = local_1a8;
          puVar20 = local_1f8;
          if (*(char *)((longlong)ppuVar27 + 0xb) == '\0') {
            ppuVar27 = (undefined **)ppuVar27[(ulonglong)(byte)((char)uVar25 + 1) + 0x20];
            cVar3 = *(char *)((longlong)ppuVar27 + 0xb);
            while (cVar3 == '\0') {
              ppuVar27 = (undefined **)ppuVar27[0x20];
              cVar3 = *(char *)((longlong)ppuVar27 + 0xb);
            }
            uVar25 = 0;
            local_1a8 = ppuVar27;
          }
          else {
            uVar26 = (uint)uVar25 + 1;
            uVar25 = (ulonglong)uVar26;
            uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar26);
            local_1a8 = ppuVar7;
            if ((int)(uint)*(byte *)((longlong)ppuVar27 + 10) <= (int)uVar26) {
              if (uVar26 == *(byte *)((longlong)ppuVar27 + 10)) {
                do {
                  ppuVar6 = (undefined **)*ppuVar27;
                  if (*(char *)((longlong)ppuVar6 + 0xb) != '\0') break;
                  ppuVar1 = ppuVar27 + 1;
                  uVar25 = (ulonglong)*(byte *)ppuVar1;
                  ppuVar27 = ppuVar6;
                  local_1a8 = ppuVar6;
                } while (*(byte *)ppuVar1 == *(byte *)((longlong)ppuVar6 + 10));
              }
              if ((uint)uVar25 == (uint)*(byte *)((longlong)ppuVar27 + 10)) {
                uVar25 = (ulonglong)uVar26;
                ppuVar27 = ppuVar7;
                local_1a8 = ppuVar7;
              }
            }
          }
        }
        this = (FeatureSetDefaults *)(local_1c0 + 1);
        FeatureSetDefaults::FeatureSetDefaults(this,(Arena *)0x0);
        this->_padding_ = (longlong)FeatureSetDefaults::vftable;
        if (this != &local_180) {
          if (((byte)local_180._padding_ & 1) == 0) {
            puVar20 = (undefined8 *)
                      (CONCAT71(local_180._padding_._1_7_,(byte)local_180._padding_) &
                      0xfffffffffffffffe);
          }
          else {
            puVar20 = *(undefined8 **)
                       (CONCAT71(local_180._padding_._1_7_,(byte)local_180._padding_) &
                       0xfffffffffffffffe);
          }
          puVar16 = (undefined8 *)(param_1[2].rep_ & 0xfffffffffffffffe);
          if ((param_1[2].rep_ & 1) != 0) {
            puVar16 = (undefined8 *)*puVar16;
          }
          if (puVar16 == puVar20) {
            FeatureSetDefaults::InternalSwap(this,&local_180);
          }
          else {
            FeatureSetDefaults::CopyFrom(this,&local_180);
          }
        }
        this->_padding_ = (longlong)FeatureSetDefaults::vftable;
        param_1->rep_ = 1;
LAB_14fb64793:
        if (plVar21 != (longlong *)0x0) {
          puVar20 = (undefined8 *)*plVar21;
LAB_14fb6479f:
          (*(code *)*puVar20)(plVar21,1);
        }
LAB_14fb647a7:
        FeatureSetDefaults::~FeatureSetDefaults(&local_180);
      }
      else {
        puVar8 = (ulong64 *)
                 FUN_14fb5f850(&local_228,"Minimum edition ",local_238," is not EDITION_LEGACY");
        param_1->rep_ = *puVar8;
        *puVar8 = 0x37;
        if (param_1->rep_ == 1) {
          absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(param_1);
        }
        if (((ulonglong)local_228 & 1) == 0) {
          absl::lts_20240722::status_internal::StatusRep::Unref(local_228);
        }
      }
      if (local_208 == 0) {
        return param_1;
      }
      absl::lts_20240722::container_internal::
      btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
      ::clear_and_delete(local_218,(allocator<google::protobuf::Edition> *)&local_210);
      return param_1;
    }
    param_1->rep_ = local_1e8.rep_;
    if ((local_1e8.rep_ & 1) == 0) {
      LOCK();
      *(int *)local_1e8.rep_ = *(int *)local_1e8.rep_ + 1;
      UNLOCK();
    }
    local_1d8.rep_ = local_1e8.rep_;
    if (param_1->rep_ == 1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(param_1);
      local_1d8.rep_ = local_1e8.rep_;
    }
  }
LAB_14fb640ec:
  if ((local_1d8.rep_ & 1) == 0) {
    absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_1d8.rep_);
  }
  return param_1;
}

// Create @ 14fb64800

/* public: static class absl::lts_20240722::StatusOr<class google::protobuf::FeatureResolver>
   __cdecl google::protobuf::FeatureResolver::Create(enum google::protobuf::Edition,class
   google::protobuf::FeatureSetDefaults const & __ptr64) */

Status * __cdecl
google::protobuf::FeatureResolver::Create(Edition param_1,FeatureSetDefaults *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulong64 *puVar5;
  undefined4 in_register_0000000c;
  Status *pSVar6;
  undefined8 *puVar7;
  int iVar8;
  MessageLite *pMVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  longlong in_R8;
  ulonglong uVar13;
  FeatureSet *pFVar14;
  byte *pbVar15;
  int iVar16;
  Status local_res18 [2];
  FeatureSet local_158;
  FeatureSetDefaults_FeatureSetEditionDefault local_108;
  FeatureSet local_d8;
  FeatureSet local_88;
  
  pSVar6 = (Status *)CONCAT44(in_register_0000000c,param_1);
  iVar8 = (int)param_2;
  iVar16 = 0;
  if (iVar8 < *(int *)(in_R8 + 0x30)) {
    puVar5 = (ulong64 *)
             FUN_14fb5fd30(local_res18,"Edition ",(ulonglong)param_2 & 0xffffffff,
                           " is earlier than the minimum supported edition ",*(int *)(in_R8 + 0x30))
    ;
    pSVar6->rep_ = *puVar5;
    *puVar5 = 0x37;
    if (pSVar6->rep_ == 1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(pSVar6);
    }
  }
  else if (*(int *)(in_R8 + 0x34) < iVar8) {
    puVar5 = (ulong64 *)
             FUN_14fb5fd30(local_res18,"Edition ",(ulonglong)param_2 & 0xffffffff,
                           " is later than the maximum supported edition ",*(int *)(in_R8 + 0x34));
    pSVar6->rep_ = *puVar5;
    *puVar5 = 0x37;
    if (pSVar6->rep_ == 1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(pSVar6);
    }
  }
  else {
    pbVar15 = (byte *)(in_R8 + 0x18);
    pbVar10 = pbVar15;
    pbVar12 = pbVar15;
    if ((~*pbVar15 & 1) == 0) {
      pbVar10 = (byte *)(*(longlong *)pbVar15 + 7);
      pbVar12 = (byte *)(*(longlong *)pbVar15 + 7);
    }
    iVar1 = *(int *)(in_R8 + 0x20);
    while( true ) {
      if (pbVar12 == pbVar10 + (longlong)iVar1 * 8) {
        FeatureSetDefaults_FeatureSetEditionDefault::FeatureSetDefaults_FeatureSetEditionDefault
                  (&local_108,(Arena *)0x0);
        local_108._padding_ = (longlong)FeatureSetDefaults_FeatureSetEditionDefault::vftable;
        local_108._impl_._has_bits_.has_bits_[0] =
             (uint  [1])((uint)local_108._impl_._has_bits_.has_bits_[0] | 4);
        if ((~*pbVar15 & 1) == 0) {
          pbVar10 = (byte *)((longlong)*(int *)(in_R8 + 0x20) * 8 + 7 + *(longlong *)pbVar15);
          pbVar12 = (byte *)(*(longlong *)pbVar15 + 7);
        }
        else {
          pbVar10 = pbVar15 + (longlong)*(int *)(in_R8 + 0x20) * 8;
          pbVar12 = pbVar15;
        }
        uVar13 = (longlong)pbVar10 - (longlong)pbVar12 >> 3;
        while (uVar4 = uVar13, 0 < (longlong)uVar4) {
          uVar13 = uVar4 >> 1;
          if (*(int *)(*(longlong *)(pbVar12 + uVar13 * 8) + 0x28) <= iVar8) {
            pbVar12 = pbVar12 + uVar13 * 8 + 8;
            uVar13 = uVar4 + (-1 - uVar13);
          }
        }
        if ((~*pbVar15 & 1) == 0) {
          pbVar15 = (byte *)(*(longlong *)pbVar15 + 7);
        }
        local_108._impl_.edition_ = iVar8;
        if (pbVar12 == pbVar15) {
          puVar5 = (ulong64 *)
                   FUN_14fb5f620(local_res18,"No valid default found for edition ",
                                 (ulonglong)param_2 & 0xffffffff);
          pSVar6->rep_ = *puVar5;
          *puVar5 = 0x37;
          if (pSVar6->rep_ == 1) {
            absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(pSVar6);
          }
          if ((local_res18[0].rep_ & 1) == 0) {
            absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_res18[0].rep_);
          }
        }
        else {
          pFVar14 = (FeatureSet *)&_FeatureSet_default_instance_;
          if (*(FeatureSet **)(*(longlong *)(pbVar12 + -8) + 0x20) != (FeatureSet *)0x0) {
            pFVar14 = *(FeatureSet **)(*(longlong *)(pbVar12 + -8) + 0x20);
          }
          FeatureSet::FeatureSet(&local_d8,(Arena *)0x0,pFVar14);
          local_d8._padding_ = (longlong)FeatureSet::vftable;
          pMVar9 = (MessageLite *)&_FeatureSet_default_instance_;
          if (*(MessageLite **)(*(longlong *)(pbVar12 + -8) + 0x18) != (MessageLite *)0x0) {
            pMVar9 = *(MessageLite **)(*(longlong *)(pbVar12 + -8) + 0x18);
          }
          FeatureSet::MergeImpl((MessageLite *)&local_d8,pMVar9);
          FeatureSet::FeatureSet(&local_158,(Arena *)0x0);
          local_158._padding_ = (longlong)FeatureSet::vftable;
          if ((local_d8._padding_ & 1U) == 0) {
            puVar7 = (undefined8 *)(local_d8._padding_ & 0xfffffffffffffffe);
          }
          else {
            puVar7 = *(undefined8 **)(local_d8._padding_ & 0xfffffffffffffffe);
          }
          puVar11 = (undefined8 *)(local_158._padding_ & 0xfffffffffffffffe);
          if ((local_158._padding_ & 1U) != 0) {
            puVar11 = (undefined8 *)*puVar11;
          }
          if (puVar11 == puVar7) {
            FeatureSet::InternalSwap(&local_158,&local_d8);
          }
          else {
            FeatureSet::CopyFrom(&local_158,&local_d8);
          }
          local_158._padding_ = (longlong)FeatureSet::vftable;
          FeatureSet::FeatureSet(&local_88,&local_158);
          FeatureSet::~FeatureSet(&local_158);
          FeatureSet::FeatureSet((FeatureSet *)(pSVar6 + 1),&local_88);
          pSVar6->rep_ = 1;
          FeatureSet::~FeatureSet(&local_88);
          FeatureSet::~FeatureSet(&local_d8);
        }
        FeatureSetDefaults_FeatureSetEditionDefault::~FeatureSetDefaults_FeatureSetEditionDefault
                  (&local_108);
        return pSVar6;
      }
      lVar3 = *(longlong *)pbVar12;
      iVar2 = *(int *)(lVar3 + 0x28);
      if (iVar2 == 0) break;
      if ((iVar16 != 0) && (iVar2 <= iVar16)) {
        puVar5 = (ulong64 *)
                 FUN_14fb600b0(local_res18,
                               "Feature set defaults are not strictly increasing.  Edition ",iVar16,
                               " is greater than or equal to edition ",iVar2,&s__);
        pSVar6->rep_ = *puVar5;
        *puVar5 = 0x37;
        if (pSVar6->rep_ == 1) {
          absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(pSVar6);
        }
        goto LAB_14fb64a7b;
      }
      pFVar14 = (FeatureSet *)&_FeatureSet_default_instance_;
      if (*(FeatureSet **)(lVar3 + 0x20) != (FeatureSet *)0x0) {
        pFVar14 = *(FeatureSet **)(lVar3 + 0x20);
      }
      FeatureSet::FeatureSet(&local_158,(Arena *)0x0,pFVar14);
      local_158._padding_ = (longlong)FeatureSet::vftable;
      pMVar9 = (MessageLite *)&_FeatureSet_default_instance_;
      if (*(MessageLite **)(lVar3 + 0x18) != (MessageLite *)0x0) {
        pMVar9 = *(MessageLite **)(lVar3 + 0x18);
      }
      FeatureSet::MergeImpl((MessageLite *)&local_158,pMVar9);
      FUN_14fb679b0(local_res18);
      if ((StatusRep *)local_res18[0].rep_ != (StatusRep *)&DAT_00000001) {
        pSVar6->rep_ = local_res18[0].rep_;
        if ((local_res18[0].rep_ & 1) == 0) {
          LOCK();
          *(int *)local_res18[0].rep_ = *(int *)local_res18[0].rep_ + 1;
          UNLOCK();
        }
        if (pSVar6->rep_ == 1) {
          absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(pSVar6);
        }
        if ((local_res18[0].rep_ & 1) == 0) {
          absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_res18[0].rep_);
        }
        FeatureSet::~FeatureSet(&local_158);
        return pSVar6;
      }
      iVar16 = *(int *)(lVar3 + 0x28);
      FeatureSet::~FeatureSet(&local_158);
      pbVar12 = pbVar12 + 8;
    }
    puVar5 = (ulong64 *)FUN_14fb5f850(local_res18,"Invalid edition ",0," specified.");
    pSVar6->rep_ = *puVar5;
    *puVar5 = 0x37;
    if (pSVar6->rep_ == 1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(pSVar6);
    }
  }
LAB_14fb64a7b:
  if ((local_res18[0].rep_ & 1) == 0) {
    absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_res18[0].rep_);
  }
  return pSVar6;
}

// EmptyNode @ 14fb64c90

/* private: static class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::EmptyNode(void) */

btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
* __cdecl absl::lts_20240722::container_internal::
          btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          ::EmptyNode(void)

{
  return (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          *)&`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
             ::__l2::empty_node;
}

// EnforceNamingStyle_IsValid @ 14fb64ca0

/* public: static bool __cdecl google::protobuf::FeatureSet::EnforceNamingStyle_IsValid(int) */

bool __cdecl google::protobuf::FeatureSet::EnforceNamingStyle_IsValid(int param_1)

{
  return (uint)param_1 < 3;
}

// EnsureNotOk @ 14fb64cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::FeatureResolver>::EnsureNotOk(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::FeatureResolver>::EnsureNotOk
          (StatusOrData<google::protobuf::FeatureResolver> *this)

{
  StatusRep *this_00;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Status SVar5;
  char *pcVar6;
  ulong64 uVar7;
  code *pcVar8;
  undefined1 auStack_68 [32];
  char *pcStack_48;
  undefined8 uStack_40;
  basic_string_view<char,std::char_traits<char>_> bStack_38;
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  
  if (*(longlong *)this != 1) {
    return;
  }
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  pcVar8 = _internal_log_function;
  if (_internal_log_function == (code *)0x0) {
    pcVar8 = DAT_154e167e8;
  }
  bStack_38._Mysize = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0xf;
  bStack_38._Mysize = (ulong64)::operator_new(0x40);
  uVar1 = s_An_OK_status_is_not_a_valid_con._8_8_;
  uStack_20 = 0x3f;
  uStack_18 = 0x3f;
  *(undefined8 *)bStack_38._Mysize = s_An_OK_status_is_not_a_valid_con._0_8_;
  *(undefined8 *)(bStack_38._Mysize + 8) = uVar1;
  uVar4 = s_An_OK_status_is_not_a_valid_con._28_4_;
  uVar3 = s_An_OK_status_is_not_a_valid_con._24_4_;
  uVar2 = s_An_OK_status_is_not_a_valid_con._20_4_;
  *(undefined4 *)(bStack_38._Mysize + 0x10) = s_An_OK_status_is_not_a_valid_con._16_4_;
  *(undefined4 *)(bStack_38._Mysize + 0x14) = uVar2;
  *(undefined4 *)(bStack_38._Mysize + 0x18) = uVar3;
  *(undefined4 *)(bStack_38._Mysize + 0x1c) = uVar4;
  uVar1 = s_An_OK_status_is_not_a_valid_con._40_8_;
  *(undefined8 *)(bStack_38._Mysize + 0x20) = s_An_OK_status_is_not_a_valid_con._32_8_;
  *(undefined8 *)(bStack_38._Mysize + 0x28) = uVar1;
  *(undefined8 *)(bStack_38._Mysize + 0x30) = s_An_OK_status_is_not_a_valid_con._48_8_;
  *(undefined4 *)(bStack_38._Mysize + 0x38) = s_An_OK_status_is_not_a_valid_con._56_4_;
  *(undefined2 *)(bStack_38._Mysize + 0x3c) = s_An_OK_status_is_not_a_valid_con._60_2_;
  *(char *)(bStack_38._Mysize + 0x3e) = s_An_OK_status_is_not_a_valid_con[0x3e];
  *(char *)(bStack_38._Mysize + 0x3f) = '\0';
  (*pcVar8)(2,
            "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\status\\statusor.cc"
            ,0x4d,&bStack_38._Mysize);
  if (0xf < uStack_18) {
    uVar7 = uStack_18 + 1;
    pcVar6 = (char *)bStack_38._Mysize;
    if (0xfff < uVar7) {
      uVar7 = uStack_18 + 0x28;
      pcVar6 = *(char **)(bStack_38._Mysize + -8);
      if ((char *)0x1f < (char *)(bStack_38._Mysize + (-8 - (longlong)pcVar6))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pcVar6,uVar7);
  }
  pcStack_48 = "An OK status is not a valid constructor argument to StatusOr<T>";
  uStack_40 = 0x3f;
  SVar5 = InternalError(&bStack_38);
  this_00 = *(StatusRep **)this;
  if (*(StatusRep **)SVar5.rep_ != this_00) {
    *(StatusRep **)this = *(StatusRep **)SVar5.rep_;
    *(undefined8 *)SVar5.rep_ = 0x37;
    if (((ulonglong)this_00 & 1) == 0) {
      status_internal::StatusRep::Unref(this_00);
    }
  }
  if (((ulonglong)bStack_38._Mydata & 1) == 0) {
    status_internal::StatusRep::Unref((StatusRep *)bStack_38._Mydata);
  }
  return;
}

// EnsureNotOk @ 14fb64cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::FeatureSet>::EnsureNotOk(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::FeatureSet>::EnsureNotOk
          (StatusOrData<google::protobuf::FeatureSet> *this)

{
  StatusRep *this_00;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Status SVar5;
  char *pcVar6;
  ulong64 uVar7;
  code *pcVar8;
  undefined1 auStack_68 [32];
  char *pcStack_48;
  undefined8 uStack_40;
  basic_string_view<char,std::char_traits<char>_> bStack_38;
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  
  if (*(longlong *)this != 1) {
    return;
  }
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  pcVar8 = _internal_log_function;
  if (_internal_log_function == (code *)0x0) {
    pcVar8 = DAT_154e167e8;
  }
  bStack_38._Mysize = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0xf;
  bStack_38._Mysize = (ulong64)::operator_new(0x40);
  uVar1 = s_An_OK_status_is_not_a_valid_con._8_8_;
  uStack_20 = 0x3f;
  uStack_18 = 0x3f;
  *(undefined8 *)bStack_38._Mysize = s_An_OK_status_is_not_a_valid_con._0_8_;
  *(undefined8 *)(bStack_38._Mysize + 8) = uVar1;
  uVar4 = s_An_OK_status_is_not_a_valid_con._28_4_;
  uVar3 = s_An_OK_status_is_not_a_valid_con._24_4_;
  uVar2 = s_An_OK_status_is_not_a_valid_con._20_4_;
  *(undefined4 *)(bStack_38._Mysize + 0x10) = s_An_OK_status_is_not_a_valid_con._16_4_;
  *(undefined4 *)(bStack_38._Mysize + 0x14) = uVar2;
  *(undefined4 *)(bStack_38._Mysize + 0x18) = uVar3;
  *(undefined4 *)(bStack_38._Mysize + 0x1c) = uVar4;
  uVar1 = s_An_OK_status_is_not_a_valid_con._40_8_;
  *(undefined8 *)(bStack_38._Mysize + 0x20) = s_An_OK_status_is_not_a_valid_con._32_8_;
  *(undefined8 *)(bStack_38._Mysize + 0x28) = uVar1;
  *(undefined8 *)(bStack_38._Mysize + 0x30) = s_An_OK_status_is_not_a_valid_con._48_8_;
  *(undefined4 *)(bStack_38._Mysize + 0x38) = s_An_OK_status_is_not_a_valid_con._56_4_;
  *(undefined2 *)(bStack_38._Mysize + 0x3c) = s_An_OK_status_is_not_a_valid_con._60_2_;
  *(char *)(bStack_38._Mysize + 0x3e) = s_An_OK_status_is_not_a_valid_con[0x3e];
  *(char *)(bStack_38._Mysize + 0x3f) = '\0';
  (*pcVar8)(2,
            "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\status\\statusor.cc"
            ,0x4d,&bStack_38._Mysize);
  if (0xf < uStack_18) {
    uVar7 = uStack_18 + 1;
    pcVar6 = (char *)bStack_38._Mysize;
    if (0xfff < uVar7) {
      uVar7 = uStack_18 + 0x28;
      pcVar6 = *(char **)(bStack_38._Mysize + -8);
      if ((char *)0x1f < (char *)(bStack_38._Mysize + (-8 - (longlong)pcVar6))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pcVar6,uVar7);
  }
  pcStack_48 = "An OK status is not a valid constructor argument to StatusOr<T>";
  uStack_40 = 0x3f;
  SVar5 = InternalError(&bStack_38);
  this_00 = *(StatusRep **)this;
  if (*(StatusRep **)SVar5.rep_ != this_00) {
    *(StatusRep **)this = *(StatusRep **)SVar5.rep_;
    *(undefined8 *)SVar5.rep_ = 0x37;
    if (((ulonglong)this_00 & 1) == 0) {
      status_internal::StatusRep::Unref(this_00);
    }
  }
  if (((ulonglong)bStack_38._Mydata & 1) == 0) {
    status_internal::StatusRep::Unref((StatusRep *)bStack_38._Mydata);
  }
  return;
}

// EnsureNotOk @ 14fb64cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::FeatureSetDefaults>::EnsureNotOk(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::FeatureSetDefaults>::
EnsureNotOk(StatusOrData<google::protobuf::FeatureSetDefaults> *this)

{
  StatusRep *this_00;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Status SVar5;
  char *pcVar6;
  ulong64 uVar7;
  code *pcVar8;
  undefined1 auStack_68 [32];
  char *pcStack_48;
  undefined8 uStack_40;
  basic_string_view<char,std::char_traits<char>_> bStack_38;
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  ulonglong uStack_10;
  
  if (*(longlong *)this != 1) {
    return;
  }
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  pcVar8 = _internal_log_function;
  if (_internal_log_function == (code *)0x0) {
    pcVar8 = DAT_154e167e8;
  }
  bStack_38._Mysize = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0xf;
  bStack_38._Mysize = (ulong64)::operator_new(0x40);
  uVar1 = s_An_OK_status_is_not_a_valid_con._8_8_;
  uStack_20 = 0x3f;
  uStack_18 = 0x3f;
  *(undefined8 *)bStack_38._Mysize = s_An_OK_status_is_not_a_valid_con._0_8_;
  *(undefined8 *)(bStack_38._Mysize + 8) = uVar1;
  uVar4 = s_An_OK_status_is_not_a_valid_con._28_4_;
  uVar3 = s_An_OK_status_is_not_a_valid_con._24_4_;
  uVar2 = s_An_OK_status_is_not_a_valid_con._20_4_;
  *(undefined4 *)(bStack_38._Mysize + 0x10) = s_An_OK_status_is_not_a_valid_con._16_4_;
  *(undefined4 *)(bStack_38._Mysize + 0x14) = uVar2;
  *(undefined4 *)(bStack_38._Mysize + 0x18) = uVar3;
  *(undefined4 *)(bStack_38._Mysize + 0x1c) = uVar4;
  uVar1 = s_An_OK_status_is_not_a_valid_con._40_8_;
  *(undefined8 *)(bStack_38._Mysize + 0x20) = s_An_OK_status_is_not_a_valid_con._32_8_;
  *(undefined8 *)(bStack_38._Mysize + 0x28) = uVar1;
  *(undefined8 *)(bStack_38._Mysize + 0x30) = s_An_OK_status_is_not_a_valid_con._48_8_;
  *(undefined4 *)(bStack_38._Mysize + 0x38) = s_An_OK_status_is_not_a_valid_con._56_4_;
  *(undefined2 *)(bStack_38._Mysize + 0x3c) = s_An_OK_status_is_not_a_valid_con._60_2_;
  *(char *)(bStack_38._Mysize + 0x3e) = s_An_OK_status_is_not_a_valid_con[0x3e];
  *(char *)(bStack_38._Mysize + 0x3f) = '\0';
  (*pcVar8)(2,
            "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\status\\statusor.cc"
            ,0x4d,&bStack_38._Mysize);
  if (0xf < uStack_18) {
    uVar7 = uStack_18 + 1;
    pcVar6 = (char *)bStack_38._Mysize;
    if (0xfff < uVar7) {
      uVar7 = uStack_18 + 0x28;
      pcVar6 = *(char **)(bStack_38._Mysize + -8);
      if ((char *)0x1f < (char *)(bStack_38._Mysize + (-8 - (longlong)pcVar6))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pcVar6,uVar7);
  }
  pcStack_48 = "An OK status is not a valid constructor argument to StatusOr<T>";
  uStack_40 = 0x3f;
  SVar5 = InternalError(&bStack_38);
  this_00 = *(StatusRep **)this;
  if (*(StatusRep **)SVar5.rep_ != this_00) {
    *(StatusRep **)this = *(StatusRep **)SVar5.rep_;
    *(undefined8 *)SVar5.rep_ = 0x37;
    if (((ulonglong)this_00 & 1) == 0) {
      status_internal::StatusRep::Unref(this_00);
    }
  }
  if (((ulonglong)bStack_38._Mydata & 1) == 0) {
    status_internal::StatusRep::Unref((StatusRep *)bStack_38._Mydata);
  }
  return;
}

// EnumType_IsValid @ 14fb64d10

/* public: static bool __cdecl google::protobuf::FeatureSet::EnumType_IsValid(int) */

bool __cdecl google::protobuf::FeatureSet::EnumType_IsValid(int param_1)

{
  return (uint)param_1 < 3;
}

// Equals @ 14fb64d20

/* private: bool __cdecl absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>::Equals(class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > const ,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>)const __ptr64 */

bool __thiscall
absl::lts_20240722::container_internal::
btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
::Equals(btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
         *this,longlong *param_2)

{
  if ((*(longlong *)this == *param_2) && (*(int *)(this + 8) == (int)param_2[1])) {
    return true;
  }
  return false;
}

// FeatureSet_EnforceNamingStyle_IsValid @ 14fb64d40

/* bool __cdecl google::protobuf::FeatureSet_EnforceNamingStyle_IsValid(int) */

bool __cdecl google::protobuf::FeatureSet_EnforceNamingStyle_IsValid(int param_1)

{
  return (uint)param_1 < 3;
}

// FeatureSet_EnumType_IsValid @ 14fb64d50

/* bool __cdecl google::protobuf::FeatureSet_EnumType_IsValid(int) */

bool __cdecl google::protobuf::FeatureSet_EnumType_IsValid(int param_1)

{
  return (uint)param_1 < 3;
}

// FeatureSet_FieldPresence_IsValid @ 14fb64d60

/* bool __cdecl google::protobuf::FeatureSet_FieldPresence_IsValid(int) */

bool __cdecl google::protobuf::FeatureSet_FieldPresence_IsValid(int param_1)

{
  return (uint)param_1 < 4;
}

// FeatureSet_JsonFormat_IsValid @ 14fb64d70

/* bool __cdecl google::protobuf::FeatureSet_JsonFormat_IsValid(int) */

bool __cdecl google::protobuf::FeatureSet_JsonFormat_IsValid(int param_1)

{
  return (uint)param_1 < 3;
}

// FeatureSet_MessageEncoding_IsValid @ 14fb64d80

/* bool __cdecl google::protobuf::FeatureSet_MessageEncoding_IsValid(int) */

bool __cdecl google::protobuf::FeatureSet_MessageEncoding_IsValid(int param_1)

{
  return (uint)param_1 < 3;
}

// FeatureSet_RepeatedFieldEncoding_IsValid @ 14fb64d90

/* bool __cdecl google::protobuf::FeatureSet_RepeatedFieldEncoding_IsValid(int) */

bool __cdecl google::protobuf::FeatureSet_RepeatedFieldEncoding_IsValid(int param_1)

{
  return (uint)param_1 < 3;
}

// FeatureSet_Utf8Validation_IsValid @ 14fb64da0

/* bool __cdecl google::protobuf::FeatureSet_Utf8Validation_IsValid(int) */

bool __cdecl google::protobuf::FeatureSet_Utf8Validation_IsValid(int param_1)

{
  if (((uint)param_1 < 4) && ((0xdU >> ((byte)param_1 & 0x1f) & 1) != 0)) {
    return true;
  }
  return false;
}

// FieldPresence_IsValid @ 14fb64dc0

/* public: static bool __cdecl google::protobuf::FeatureSet::FieldPresence_IsValid(int) */

bool __cdecl google::protobuf::FeatureSet::FieldPresence_IsValid(int param_1)

{
  return (uint)param_1 < 4;
}

// FUN_14fb64dd0 @ 14fb64dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014fb65623) */
/* WARNING: Removing unreachable block (ram,0x00014fb6562c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "CppType": Some values do not have unique names */

basic_string_view<char,std::char_traits<char>_> *
FUN_14fb64dd0(basic_string_view<char,std::char_traits<char>_> *param_1,int param_2,Message *param_3,
             Message *param_4)

{
  uint uVar1;
  FieldOptions_FeatureSupport *pFVar2;
  FieldOptions *pFVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  char *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  bool bVar9;
  Metadata *pMVar10;
  ulonglong uVar11;
  void *pvVar12;
  _Bxty *p_Var13;
  undefined8 uVar14;
  ulonglong uVar15;
  char *pcVar16;
  FieldOptions_FeatureSupport *pFVar17;
  ulong64 uVar18;
  RepeatedPtrField<google::protobuf::FieldOptions_EditionDefault> *pRVar19;
  _Bxty *p_Var20;
  FieldOptions_EditionDefault *pFVar21;
  undefined8 *puVar22;
  FieldDescriptor *pFVar23;
  Descriptor *pDVar24;
  undefined1 auStackY_288 [32];
  undefined1 local_258;
  _Bxty local_250;
  FieldOptions_EditionDefault *local_240;
  basic_string_view<char,std::char_traits<char>_> local_238;
  int local_228;
  int local_224;
  basic_string_view<char,std::char_traits<char>_> local_218;
  basic_string_view<char,std::char_traits<char>_> *local_208;
  longlong local_200;
  Descriptor *local_1f8;
  char *local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  Message *local_1d0;
  Message *local_1c8;
  FieldOptions_EditionDefault local_1c0;
  char *local_198;
  undefined8 uStack_190;
  Metadata local_188;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_178;
  LogMessageFatal local_158;
  Metadata local_148;
  _Bxty local_138;
  _Bxty *local_128;
  ulonglong uStack_120;
  AlphaNum local_118;
  AlphaNum local_e8;
  AlphaNum local_b8;
  AlphaNum local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_1d8 = 0;
  local_224 = param_2;
  local_208 = param_1;
  local_1f8 = (Descriptor *)param_1;
  local_1d0 = param_3;
  local_1c8 = param_4;
  pMVar10 = google::protobuf::Message::GetMetadata(param_3,&local_148);
  pDVar24 = pMVar10->descriptor;
  local_1f8 = pDVar24;
  pMVar10 = google::protobuf::Message::GetMetadata(param_4,&local_188);
  if (pDVar24 != pMVar10->descriptor) {
    local_218._Mydata = "&descriptor == overridable.GetDescriptor()";
    local_218._Mysize = 0x2a;
    local_238._Mydata = "&descriptor == overridable.GetDescriptor()";
    local_238._Mysize = 0x2a;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              ((LogMessageFatal *)&local_1e8,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\feature_resolver.cc"
               ,0x120,&local_238);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_1e8);
  }
  google::protobuf::FieldOptions_EditionDefault::FieldOptions_EditionDefault
            (&local_1c0,(Arena *)0x0);
  local_1c0._padding_ = (longlong)google::protobuf::FieldOptions_EditionDefault::vftable;
  local_1c0._impl_._has_bits_.has_bits_[0] =
       (uint  [1])((uint)local_1c0._impl_._has_bits_.has_bits_[0] | 2);
  local_228 = 0;
  local_1c0._impl_.edition_ = param_2;
  if (pDVar24->field_count_ < 1) {
LAB_14fb655cd:
    param_1->_Mydata = (char *)0x1;
    google::protobuf::FieldOptions_EditionDefault::~FieldOptions_EditionDefault(&local_1c0);
  }
  else {
    local_200 = 0;
    bVar7 = false;
    bVar6 = false;
LAB_14fb64ecb:
    pFVar23 = (FieldDescriptor *)(&pDVar24->fields_->_padding_ + local_200);
    if (((pFVar23->options_->_impl_)._has_bits_.has_bits_[0] >> 1 & 1) != 0) {
      pFVar2 = (pFVar23->options_->_impl_).feature_support_;
      pFVar17 = (FieldOptions_FeatureSupport *)
                &google::protobuf::_FieldOptions_FeatureSupport_default_instance_;
      if (pFVar2 != (FieldOptions_FeatureSupport *)0x0) {
        pFVar17 = pFVar2;
      }
      uVar1 = (pFVar17->_impl_)._has_bits_.has_bits_[0];
      if ((((uVar1 >> 1 & 1) != 0) && (param_2 < (pFVar17->_impl_).edition_introduced_)) ||
         (((uVar1 >> 3 & 1) != 0 && ((pFVar17->_impl_).edition_removed_ <= param_2)))) {
        param_4 = local_1d0;
      }
    }
    pMVar10 = google::protobuf::Message::GetMetadata(param_4,(Metadata *)&local_178);
    google::protobuf::Reflection::ClearField(pMVar10->reflection,param_4,pFVar23);
    if (pFVar23->is_repeated_) {
      local_198 = "!field.is_repeated()";
      uStack_190 = 0x14;
      local_218._Mydata = "!field.is_repeated()";
      local_218._Mysize = 0x14;
      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                ((LogMessageFatal *)&local_188,
                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\feature_resolver.cc"
                 ,0x136,&local_218);
      bVar6 = true;
    }
    if (bVar6) {
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                ((LogMessageFatal *)&local_188);
    }
    if (*(int *)((longlong)&google::protobuf::FieldDescriptor::kTypeToCppTypeMap +
                (ulonglong)pFVar23->type_ * 4) == 10) {
      local_1e8 = "field.cpp_type() != FieldDescriptor::CPPTYPE_MESSAGE";
      uStack_1e0 = 0x34;
      local_218._Mydata = "field.cpp_type() != FieldDescriptor::CPPTYPE_MESSAGE";
      local_218._Mysize = 0x34;
      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                (&local_158,
                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\feature_resolver.cc"
                 ,0x137,&local_218);
      bVar7 = true;
    }
    if (bVar7) {
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_158);
    }
    pFVar3 = pFVar23->options_;
    pRVar19 = &(pFVar3->_impl_).edition_defaults_;
    if ((~*(byte *)pRVar19 & 1) == 0) {
      puVar22 = (undefined8 *)
                ((longlong)*(int *)&(pFVar3->_impl_).edition_defaults_.field_0x8 * 8 + 7 +
                *(longlong *)pRVar19);
      pRVar19 = (RepeatedPtrField<google::protobuf::FieldOptions_EditionDefault> *)
                (*(longlong *)pRVar19 + 7);
    }
    else {
      puVar22 = (undefined8 *)
                (&pRVar19->field_0x0 +
                (longlong)*(int *)&(pFVar3->_impl_).edition_defaults_.field_0x8 * 8);
    }
    local_250._Ptr = (char *)0x0;
    local_250._8_8_ = (FieldOptions_EditionDefault *)0x0;
    local_240 = (FieldOptions_EditionDefault *)0x0;
    uVar11 = (longlong)puVar22 - (longlong)pRVar19 >> 3;
    uVar14 = local_250._8_8_;
    if (uVar11 != 0) {
      if (0x666666666666666 < uVar11) {
                    /* WARNING: Subroutine does not return */
        std::
        vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
        ::_Xlength();
      }
      uVar15 = uVar11 * 0x28;
      if (uVar15 < 0x1000) {
        if (uVar15 == 0) {
          uVar14 = (FieldOptions_EditionDefault *)0x0;
        }
        else {
          uVar14 = operator_new(uVar15);
        }
      }
      else {
        if (uVar15 + 0x27 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          std::_Throw_bad_array_new_length();
        }
        pvVar12 = operator_new(uVar15 + 0x27);
        if (pvVar12 == (void *)0x0) goto LAB_14fb6559b;
        uVar14 = (longlong)pvVar12 + 0x27U & 0xffffffffffffffe0;
        *(void **)&(((FieldOptions_EditionDefault *)(uVar14 + -0x28))->_impl_).edition_ = pvVar12;
      }
      local_240 = (FieldOptions_EditionDefault *)(uVar14 + uVar11 * 0x28);
      local_218._Mydata = (char *)&local_250;
      local_128 = &local_250;
      local_250._Ptr = (char *)uVar14;
      local_250._8_8_ = uVar14;
      local_138._Ptr = (char *)uVar14;
      for (; local_138._8_8_ = uVar14,
          pRVar19 != (RepeatedPtrField<google::protobuf::FieldOptions_EditionDefault> *)puVar22;
          pRVar19 = (RepeatedPtrField<google::protobuf::FieldOptions_EditionDefault> *)
                    &pRVar19->field_0x8) {
        google::protobuf::FieldOptions_EditionDefault::FieldOptions_EditionDefault
                  ((FieldOptions_EditionDefault *)uVar14,(Arena *)0x0,
                   *(FieldOptions_EditionDefault **)pRVar19);
        ((FieldOptions_EditionDefault *)uVar14)->_padding_ =
             (longlong)google::protobuf::FieldOptions_EditionDefault::vftable;
        uVar14 = uVar14 + 0x28;
      }
    }
    local_250._8_8_ = uVar14;
    FUN_14fb61ea0(local_250._Ptr,local_250._8_8_,
                  (longlong)(local_250._8_8_ - local_250._0_8_) / 0x28,local_258);
    param_1 = local_208;
    uVar11 = (longlong)(local_250._8_8_ - local_250._0_8_) / 0x28;
    uVar14 = local_250._Ptr;
    if ((longlong)uVar11 < 1) {
LAB_14fb654d7:
      pbVar4 = pFVar23->all_names_;
      local_238._Mydata = (char *)(pbVar4 + 1);
      if (0xf < pbVar4[1]._Mypair._Myval2._Myres) {
        local_238._Mydata = pbVar4[1]._Mypair._Myval2._Bx._Ptr;
      }
      local_238._Mysize = pbVar4[1]._Mypair._Myval2._Mysize;
      FUN_14fb5fab0(local_208,"No valid default found for edition ",local_224," in feature field ");
      uVar8 = local_250._8_8_;
      uVar14 = local_250._Ptr;
      if ((FieldOptions_EditionDefault *)local_250._Ptr == (FieldOptions_EditionDefault *)0x0)
      goto LAB_14fb655bb;
      for (; uVar14 != uVar8; uVar14 = (FieldOptions_EditionDefault *)(uVar14 + 0x28)) {
        google::protobuf::FieldOptions_EditionDefault::~FieldOptions_EditionDefault
                  ((FieldOptions_EditionDefault *)uVar14);
      }
      uVar18 = (((longlong)local_240 - (longlong)local_250._Ptr) / 0x28) * 0x28;
      pFVar21 = (FieldOptions_EditionDefault *)local_250._Ptr;
      if (0xfff < uVar18) {
        uVar18 = uVar18 + 0x27;
        pFVar21 = *(FieldOptions_EditionDefault **)
                   &(((FieldOptions_EditionDefault *)((longlong)local_250._Ptr + -0x28))->_impl_).
                    edition_;
        if (0x1f < (ulonglong)((longlong)local_250._Ptr + (-8 - (longlong)pFVar21))) {
LAB_14fb6559b:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pFVar21,uVar18);
    }
    else {
      do {
        uVar15 = uVar11 >> 1;
        if ((((FieldOptions_EditionDefault *)(uVar14 + uVar15 * 0x28))->_impl_).edition_ <=
            local_1c0._impl_.edition_) {
          uVar14 = uVar14 + (uVar15 + 1) * 0x28;
          uVar15 = uVar11 + (-1 - uVar15);
        }
        uVar11 = uVar15;
      } while (0 < (longlong)uVar15);
      if ((char *)uVar14 == local_250._Ptr) goto LAB_14fb654d7;
      p_Var20 = (_Bxty *)((ulonglong)
                          (((FieldOptions_EditionDefault *)(uVar14 + -0x28))->_impl_).value_.
                          tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      local_238._Mydata = (char *)p_Var20;
      if (0xf < *(ulong64 *)((longlong)p_Var20 + 0x18)) {
        local_238._Mydata = p_Var20->_Ptr;
      }
      local_238._Mysize = (ulong64)p_Var20[1]._Ptr;
      local_218._Mydata = local_238._Mydata;
      local_218._Mysize = local_238._Mysize;
      bVar9 = google::protobuf::TextFormat::ParseFieldValueFromString(&local_218,pFVar23,param_4);
      uVar14 = local_250._8_8_;
      if (bVar9) {
        uVar8 = local_250._Ptr;
        if ((FieldOptions_EditionDefault *)local_250._Ptr != (FieldOptions_EditionDefault *)0x0) {
          for (; uVar8 != uVar14; uVar8 = (FieldOptions_EditionDefault *)(uVar8 + 0x28)) {
            google::protobuf::FieldOptions_EditionDefault::~FieldOptions_EditionDefault
                      ((FieldOptions_EditionDefault *)uVar8);
          }
          uVar18 = (((longlong)local_240 - (longlong)local_250._Ptr) / 0x28) * 0x28;
          pFVar21 = (FieldOptions_EditionDefault *)local_250._Ptr;
          if (0xfff < uVar18) {
            uVar18 = uVar18 + 0x27;
            pFVar21 = *(FieldOptions_EditionDefault **)
                       &(((FieldOptions_EditionDefault *)((longlong)local_250._Ptr + -0x28))->_impl_
                        ).edition_;
            if (0x1f < (ulonglong)((longlong)local_250._Ptr + (-8 - (longlong)pFVar21)))
            goto LAB_14fb6559b;
          }
          operator_delete(pFVar21,uVar18);
        }
        local_228 = local_228 + 1;
        local_200 = local_200 + 0x60;
        param_1 = local_208;
        param_4 = local_1c8;
        pDVar24 = local_1f8;
        param_2 = local_224;
        if (local_1f8->field_count_ <= local_228) goto LAB_14fb655cd;
        goto LAB_14fb64ecb;
      }
      p_Var20 = (_Bxty *)std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                         basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                   (&local_178,
                                    (basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)p_Var20);
      pbVar4 = pFVar23->all_names_;
      local_e8.piece_._Mydata = (char *)(pbVar4 + 1);
      if (0xf < pbVar4[1]._Mypair._Myval2._Myres) {
        local_e8.piece_._Mydata = pbVar4[1]._Mypair._Myval2._Bx._Ptr;
      }
      local_e8.piece_._Mysize = pbVar4[1]._Mypair._Myval2._Mysize;
      local_118.piece_._Mydata = (char *)p_Var20;
      if (0xf < *(ulong64 *)((longlong)p_Var20 + 0x18)) {
        local_118.piece_._Mydata = p_Var20->_Ptr;
      }
      local_118.piece_._Mysize = (ulong64)p_Var20[1]._Ptr;
      local_b8.piece_._Mydata = ". Could not parse: ";
      local_b8.piece_._Mysize = 0x13;
      local_238._Mydata = "Parsing error in edition_defaults for feature field ";
      local_238._Mysize = 0x34;
      local_88.piece_._Mydata = "Parsing error in edition_defaults for feature field ";
      local_88.piece_._Mysize = 0x34;
      local_218._Mydata = (char *)p_Var20;
      p_Var13 = (_Bxty *)absl::lts_20240722::StrCat
                                   ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)&local_138,&local_88,&local_e8,&local_b8,&local_118);
      param_1 = local_208;
      local_238._Mydata = (char *)p_Var13;
      if (0xf < *(ulong64 *)((longlong)p_Var13 + 0x18)) {
        local_238._Mydata = p_Var13->_Ptr;
      }
      local_238._Mysize = (ulong64)p_Var13[1]._Ptr;
      absl::lts_20240722::FailedPreconditionError(local_208);
      if (0xf < uStack_120) {
        uVar18 = uStack_120 + 1;
        uVar14 = local_138._Ptr;
        if (0xfff < uVar18) {
          uVar18 = uStack_120 + 0x28;
          uVar14 = *(undefined8 *)(local_138._Ptr + -8);
          if ((char *)0x1f < local_138._Ptr + (-8 - uVar14)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete((void *)uVar14,uVar18);
      }
      local_128 = ___xmm_000000000000000f0000000000000000;
      uStack_120 = _UNK_15076add8;
      local_138._Ptr = local_138._Ptr & 0xffffffffffffff00;
      uVar11 = *(ulong64 *)((longlong)p_Var20 + 0x18);
      if (0xf < uVar11) {
        pcVar5 = p_Var20->_Ptr;
        uVar18 = uVar11 + 1;
        pcVar16 = pcVar5;
        if (0xfff < uVar18) {
          uVar18 = uVar11 + 0x28;
          pcVar16 = *(char **)(pcVar5 + -8);
          if ((char *)0x1f < pcVar5 + (-8 - (longlong)pcVar16)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pcVar16,uVar18);
      }
      uVar8 = local_250._8_8_;
      p_Var20[1]._Ptr = (char *)0x0;
      *(ulong64 *)((longlong)p_Var20 + 0x18) = 0xf;
      p_Var20->_Buf[0] = '\0';
      uVar14 = local_250._Ptr;
      if ((FieldOptions_EditionDefault *)local_250._Ptr == (FieldOptions_EditionDefault *)0x0)
      goto LAB_14fb655bb;
      for (; uVar14 != uVar8; uVar14 = (FieldOptions_EditionDefault *)(uVar14 + 0x28)) {
        google::protobuf::FieldOptions_EditionDefault::~FieldOptions_EditionDefault
                  ((FieldOptions_EditionDefault *)uVar14);
      }
      uVar18 = (((longlong)local_240 - (longlong)local_250._Ptr) / 0x28) * 0x28;
      pFVar21 = (FieldOptions_EditionDefault *)local_250._Ptr;
      if (0xfff < uVar18) {
        uVar18 = uVar18 + 0x27;
        pFVar21 = *(FieldOptions_EditionDefault **)
                   &(((FieldOptions_EditionDefault *)((longlong)local_250._Ptr + -0x28))->_impl_).
                    edition_;
        if (0x1f < (ulonglong)((longlong)local_250._Ptr + (-8 - (longlong)pFVar21))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pFVar21,uVar18);
    }
    local_250._Ptr = (char *)0x0;
    local_250._8_8_ = (FieldOptions_EditionDefault *)0x0;
    local_240 = (FieldOptions_EditionDefault *)0x0;
LAB_14fb655bb:
    google::protobuf::FieldOptions_EditionDefault::~FieldOptions_EditionDefault(&local_1c0);
  }
  return param_1;
}

// GetNewFunc @ 14fb65650

/* public: static __cdecl google::protobuf::internal::GenericTypeHandler<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>::GetNewFunc(void) */

code * __cdecl
google::protobuf::internal::
GenericTypeHandler<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>::GetNewFunc(void)

{
  return Arena::DefaultConstruct<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault>;
}

// HasMatch @ 14fb65660

/* public: static bool __cdecl absl::lts_20240722::container_internal::SearchResult<class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,0>::HasMatch(void) */

bool __cdecl
absl::lts_20240722::container_internal::
SearchResult<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,0>
::HasMatch(void)

{
  return false;
}

// InternalLayout @ 14fb65670

/* private: static __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::InternalLayout(void) */

void __cdecl
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::InternalLayout(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0;
  return;
}

// InternalSize @ 14fb65680

/* private: static unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::InternalSize(void) */

__uint64 __cdecl
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::InternalSize(void)

{
  return 0x2f0;
}

// IsEndIterator @ 14fb65690

/* private: bool __cdecl absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>::IsEndIterator(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::container_internal::
btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
::IsEndIterator(btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
                *this)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)this;
  if (*(uint *)(this + 8) == (uint)*(byte *)((longlong)plVar2 + 10)) {
    cVar1 = *(char *)(*plVar2 + 0xb);
    plVar3 = (longlong *)*plVar2;
    while( true ) {
      if (cVar1 != '\0') {
        return true;
      }
      if ((char)plVar2[1] != *(char *)((longlong)plVar3 + 10)) break;
      cVar1 = *(char *)(*plVar3 + 0xb);
      plVar2 = plVar3;
      plVar3 = (longlong *)*plVar3;
    }
  }
  return false;
}

// IsEq @ 14fb656d0

/* public: static bool __cdecl absl::lts_20240722::container_internal::SearchResult<class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,0>::IsEq(void) */

bool __cdecl
absl::lts_20240722::container_internal::
SearchResult<absl::lts_20240722::container_internal::btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>,0>
::IsEq(void)

{
  return false;
}

// JsonFormat_IsValid @ 14fb656e0

/* public: static bool __cdecl google::protobuf::FeatureSet::JsonFormat_IsValid(int) */

bool __cdecl google::protobuf::FeatureSet::JsonFormat_IsValid(int param_1)

{
  return (uint)param_1 < 3;
}

// LeafLayout @ 14fb656f0

/* private: static class
   absl::lts_20240722::container_internal::internal_layout::LayoutWithStaticSizes<struct
   std::integer_sequence<unsigned __int64,1,0,4>,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,unsigned int,unsigned char,enum
   google::protobuf::Edition,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64> __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::LeafLayout(unsigned __int64) */

__uint64 __cdecl
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::LeafLayout(__uint64 param_1)

{
  undefined8 in_RDX;
  
  *(undefined8 *)param_1 = in_RDX;
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}

// LeafSize @ 14fb65710

/* private: static unsigned __int64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::LeafSize(unsigned __int64) */

__uint64 __cdecl
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::LeafSize(__uint64 param_1)

{
  return param_1 * 4 + 0x13 & 0xfffffffffffffff8;
}

// FUN_14fb65730 @ 14fb65730

void FUN_14fb65730(int param_1,int param_2,
                  btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                  *param_3)

{
  byte bVar1;
  void *pvVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int local_res8 [2];
  longlong *local_28;
  uint uStack_20;
  undefined1 local_18 [16];
  
  if (param_1 <= param_2) {
    local_res8[0] = param_1;
    if (*(longlong *)(param_3 + 0x10) == 0) {
      pvVar2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10);
      *(void **)pvVar2 = pvVar2;
      *(undefined4 *)((longlong)pvVar2 + 8) = 0x1000000;
      *(void **)(param_3 + 8) = pvVar2;
      *(void **)param_3 = pvVar2;
    }
    local_28 = *(longlong **)param_3;
    while( true ) {
      uVar5 = 0;
      uVar6 = (ulonglong)*(byte *)((longlong)local_28 + 10);
      if ((ulonglong)*(byte *)((longlong)local_28 + 10) != 0) {
        do {
          uVar3 = uVar5 + uVar6 >> 1;
          if (*(int *)((longlong)local_28 + uVar3 * 4 + 0xc) < param_1) {
            uVar5 = uVar3 + 1;
            uVar3 = uVar6;
          }
          uVar6 = uVar3;
        } while (uVar5 != uVar3);
      }
      uStack_20 = (uint)uVar5;
      if (*(char *)((longlong)local_28 + 0xb) != '\0') break;
      local_28 = (longlong *)local_28[(uVar5 & 0xff) + 0x20];
    }
    plVar7 = local_28;
    uVar4 = uStack_20;
    if (uStack_20 == *(byte *)((longlong)local_28 + 10)) {
      do {
        bVar1 = *(byte *)(plVar7 + 1);
        uVar4 = (uint)bVar1;
        plVar7 = (longlong *)*plVar7;
        if (*(char *)((longlong)plVar7 + 0xb) != '\0') {
          plVar7 = (longlong *)0x0;
          uVar4 = (uint)bVar1;
          break;
        }
      } while (bVar1 == *(byte *)((longlong)plVar7 + 10));
    }
    if ((plVar7 == (longlong *)0x0) ||
       (param_1 < *(int *)((longlong)plVar7 + (longlong)(int)uVar4 * 4 + 0xc))) {
      absl::lts_20240722::container_internal::
      btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
      ::internal_emplace<google::protobuf::Edition_const&___ptr64>
                (param_3,local_18,&local_28,local_res8);
    }
  }
  return;
}

// MergeFeatures @ 14fb65840

/* public: class absl::lts_20240722::StatusOr<class google::protobuf::FeatureSet> __cdecl
   google::protobuf::FeatureResolver::MergeFeatures(class google::protobuf::FeatureSet const &
   __ptr64,class google::protobuf::FeatureSet const & __ptr64)const __ptr64 */

FeatureSet * __thiscall
google::protobuf::FeatureResolver::MergeFeatures
          (FeatureResolver *this,FeatureSet *param_1,FeatureSet *param_2)

{
  longlong *this_00;
  undefined8 *puVar1;
  undefined8 *puVar2;
  MessageLite *in_R9;
  StatusRep *local_res8;
  FeatureSet *local_res10;
  FeatureSet local_68;
  
  local_res10 = param_1;
  FeatureSet::FeatureSet(&local_68,(Arena *)0x0,(FeatureSet *)this);
  local_68._padding_ = (longlong)FeatureSet::vftable;
  FeatureSet::MergeImpl((MessageLite *)&local_68,(MessageLite *)param_2);
  FeatureSet::MergeImpl((MessageLite *)&local_68,in_R9);
  FUN_14fb679b0(&local_res8);
  if (local_res8 == (StatusRep *)&DAT_00000001) {
    this_00 = &param_1->_padding_;
    FeatureSet::FeatureSet((FeatureSet *)this_00,(Arena *)0x0);
    *this_00 = (longlong)FeatureSet::vftable;
    if ((FeatureSet *)this_00 != &local_68) {
      if ((local_68._padding_ & 1U) == 0) {
        puVar1 = (undefined8 *)(local_68._padding_ & 0xfffffffffffffffe);
      }
      else {
        puVar1 = *(undefined8 **)(local_68._padding_ & 0xfffffffffffffffe);
      }
      puVar2 = (undefined8 *)((ulonglong)(param_1->_impl_)._extensions_.arena_ & 0xfffffffffffffffe)
      ;
      if (((ulonglong)(param_1->_impl_)._extensions_.arena_ & 1) != 0) {
        puVar2 = (undefined8 *)*puVar2;
      }
      if (puVar2 == puVar1) {
        FeatureSet::InternalSwap((FeatureSet *)this_00,&local_68);
      }
      else {
        FeatureSet::CopyFrom((FeatureSet *)this_00,&local_68);
      }
    }
    *this_00 = (longlong)FeatureSet::vftable;
    param_1->_padding_ = 1;
  }
  else {
    param_1->_padding_ = (longlong)local_res8;
    if (((ulonglong)local_res8 & 1) == 0) {
      LOCK();
      local_res8->ref_ = (atomic<int>)((int)local_res8->ref_ + 1);
      UNLOCK();
    }
    if (param_1->_padding_ == 1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)param_1);
    }
    if (((ulonglong)local_res8 & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref(local_res8);
    }
  }
  FeatureSet::~FeatureSet(&local_68);
  return param_1;
}

// MessageEncoding_IsValid @ 14fb65980

/* public: static bool __cdecl google::protobuf::FeatureSet::MessageEncoding_IsValid(int) */

bool __cdecl google::protobuf::FeatureSet::MessageEncoding_IsValid(int param_1)

{
  return (uint)param_1 < 3;
}

// RepeatedFieldEncoding_IsValid @ 14fb65990

/* public: static bool __cdecl google::protobuf::FeatureSet::RepeatedFieldEncoding_IsValid(int) */

bool __cdecl google::protobuf::FeatureSet::RepeatedFieldEncoding_IsValid(int param_1)

{
  return (uint)param_1 < 3;
}

// Swap @ 14fb659a0

/* public: void __cdecl google::protobuf::FieldOptions_EditionDefault::Swap(class
   google::protobuf::FieldOptions_EditionDefault * __ptr64) __ptr64 */

void __thiscall
google::protobuf::FieldOptions_EditionDefault::Swap
          (FieldOptions_EditionDefault *this,FieldOptions_EditionDefault *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_1 == this) {
    return;
  }
  puVar5 = (undefined8 *)(param_1->_padding_ & 0xfffffffffffffffe);
  if ((param_1->_padding_ & 1) != 0) {
    puVar5 = (undefined8 *)*puVar5;
  }
  puVar6 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    puVar6 = (undefined8 *)*puVar6;
  }
  if (puVar6 != puVar5) {
    internal::GenericSwap((Message *)this,(Message *)param_1);
    return;
  }
  lVar3 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar3;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pvVar4 = (param_1->_impl_).value_.tagged_ptr_.ptr_;
  (param_1->_impl_).value_.tagged_ptr_.ptr_ = (this->_impl_).value_.tagged_ptr_.ptr_;
  (this->_impl_).value_.tagged_ptr_.ptr_ = pvVar4;
  iVar2 = (this->_impl_).edition_;
  (this->_impl_).edition_ = (param_1->_impl_).edition_;
  (param_1->_impl_).edition_ = iVar2;
  return;
}

// Utf8Validation_IsValid @ 14fb659e0

/* public: static bool __cdecl google::protobuf::FeatureSet::Utf8Validation_IsValid(int) */

bool __cdecl google::protobuf::FeatureSet::Utf8Validation_IsValid(int param_1)

{
  if (((uint)param_1 < 4) && ((0xdU >> ((byte)param_1 & 0x1f) & 1) != 0)) {
    return true;
  }
  return false;
}

// FUN_14fb65a00 @ 14fb65a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014fb662a1) */
/* WARNING: Removing unreachable block (ram,0x00014fb6628e) */
/* WARNING: Removing unreachable block (ram,0x00014fb65d48) */

StatusRep * FUN_14fb65a00(StatusRep *param_1,longlong param_2)

{
  longlong lVar1;
  FieldOptions *pFVar2;
  FieldOptions_FeatureSupport *pFVar3;
  bool bVar4;
  StatusRep *this;
  bool bVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  RepeatedPtrField<google::protobuf::FieldOptions_EditionDefault> *pRVar7;
  EnumDescriptor *pEVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong64 uVar11;
  RepeatedPtrField<google::protobuf::FieldOptions_EditionDefault> *pRVar12;
  FieldDescriptor *this_00;
  int iVar13;
  int iVar14;
  FieldOptions_FeatureSupport *pFVar15;
  undefined1 auStack_1c8 [32];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_1a8;
  ulong64 uStack_1a0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_198;
  ulong64 uStack_190;
  StatusRep *local_188;
  StatusRep *local_180;
  longlong local_178;
  undefined4 local_170;
  char *local_168;
  undefined8 uStack_160;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_158;
  ulong64 local_150;
  basic_string_view<char,std::char_traits<char>_> local_148;
  LogMessageFatal local_138;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_128;
  _Bxty local_108;
  ulonglong local_f0;
  AlphaNum local_d8;
  AlphaNum local_a8;
  AlphaNum local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  bVar4 = false;
  local_170 = 0;
  local_188 = param_1;
  if (*(int *)(param_2 + 0x78) < 1) {
    iVar14 = 0;
    if (0 < *(int *)(param_2 + 4)) {
      local_178 = 0;
      do {
        this_00 = (FieldDescriptor *)(*(longlong *)(param_2 + 0x38) + local_178);
        bVar5 = google::protobuf::FieldDescriptor::is_required(this_00);
        if (bVar5) {
          pbVar6 = this_00->all_names_;
          local_d8.piece_._Mydata = (char *)(pbVar6 + 1);
          if (0xf < pbVar6[1]._Mypair._Myval2._Myres) {
            local_d8.piece_._Mydata = pbVar6[1]._Mypair._Myval2._Bx._Ptr;
          }
          local_1a8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1535dd768
          ;
          uStack_1a0 = 0x22;
          local_78.piece_._Mydata = " is an unsupported required field.";
          local_78.piece_._Mysize = 0x22;
          local_d8.piece_._Mysize = pbVar6[1]._Mypair._Myval2._Mysize;
          local_128._Mypair._Myval2._Bx._Ptr = "Feature field ";
          local_128._Mypair._Myval2._Bx._8_8_ = 0xe;
          local_a8.piece_._Mydata = "Feature field ";
          local_a8.piece_._Mysize = 0xe;
          pbVar6 = absl::lts_20240722::StrCat
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_108,&local_a8,&local_d8,&local_78);
          local_1a8 = pbVar6;
          if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
            local_1a8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        (pbVar6->_Mypair)._Myval2._Bx._Ptr;
          }
          uStack_1a0 = (pbVar6->_Mypair)._Myval2._Mysize;
          local_198 = local_1a8;
          uStack_190 = uStack_1a0;
          absl::lts_20240722::FailedPreconditionError
                    ((basic_string_view<char,std::char_traits<char>_> *)param_1);
          if (local_f0 < 0x10) {
            return param_1;
          }
          uVar11 = local_f0 + 1;
          uVar10 = local_108._Ptr;
          if (0xfff < uVar11) {
            uVar11 = local_f0 + 0x28;
            uVar10 = *(undefined8 *)(local_108._Ptr + -8);
            if ((char *)0x1f < local_108._Ptr + (-8 - uVar10)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          goto LAB_14fb66284;
        }
        if (this_00->is_repeated_) {
          pbVar6 = this_00->all_names_;
          local_d8.piece_._Mydata = (char *)(pbVar6 + 1);
          if (0xf < pbVar6[1]._Mypair._Myval2._Myres) {
            local_d8.piece_._Mydata = pbVar6[1]._Mypair._Myval2._Bx._Ptr;
          }
          local_1a8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1535dd790
          ;
          uStack_1a0 = 0x22;
          local_78.piece_._Mydata = " is an unsupported repeated field.";
          local_78.piece_._Mysize = 0x22;
          local_d8.piece_._Mysize = pbVar6[1]._Mypair._Myval2._Mysize;
          local_128._Mypair._Myval2._Bx._Ptr = "Feature field ";
          local_128._Mypair._Myval2._Bx._8_8_ = 0xe;
          local_a8.piece_._Mydata = "Feature field ";
          local_a8.piece_._Mysize = 0xe;
          pbVar6 = absl::lts_20240722::StrCat
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_108,&local_a8,&local_d8,&local_78);
          local_1a8 = pbVar6;
          if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
            local_1a8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        (pbVar6->_Mypair)._Myval2._Bx._Ptr;
          }
          uStack_1a0 = (pbVar6->_Mypair)._Myval2._Mysize;
          local_198 = local_1a8;
          uStack_190 = uStack_1a0;
          absl::lts_20240722::FailedPreconditionError
                    ((basic_string_view<char,std::char_traits<char>_> *)param_1);
          if (local_f0 < 0x10) {
            return param_1;
          }
          uVar11 = local_f0 + 1;
          uVar10 = local_108._Ptr;
          if (0xfff < uVar11) {
            uVar11 = local_f0 + 0x28;
            uVar10 = *(undefined8 *)(local_108._Ptr + -8);
            if ((char *)0x1f < local_108._Ptr + (-8 - uVar10)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          goto LAB_14fb66284;
        }
        if ((this_00->type_ != '\x0e') && (this_00->type_ != '\b')) {
          pbVar6 = this_00->all_names_;
          local_d8.piece_._Mydata = (char *)(pbVar6 + 1);
          if (0xf < pbVar6[1]._Mypair._Myval2._Myres) {
            local_d8.piece_._Mydata = pbVar6[1]._Mypair._Myval2._Bx._Ptr;
          }
          local_198 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1535dd7b8
          ;
          uStack_190 = 0x1b;
          local_a8.piece_._Mydata = " is not an enum or boolean.";
          local_a8.piece_._Mysize = 0x1b;
          local_d8.piece_._Mysize = pbVar6[1]._Mypair._Myval2._Mysize;
          local_128._Mypair._Myval2._Bx._Ptr = "Feature field ";
          local_128._Mypair._Myval2._Bx._8_8_ = 0xe;
          local_78.piece_._Mydata = "Feature field ";
          local_78.piece_._Mysize = 0xe;
          pbVar6 = absl::lts_20240722::StrCat
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_108,&local_78,&local_d8,&local_a8);
          local_1a8 = pbVar6;
          if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
            local_1a8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        (pbVar6->_Mypair)._Myval2._Bx._Ptr;
          }
          uStack_1a0 = (pbVar6->_Mypair)._Myval2._Mysize;
          absl::lts_20240722::FailedPreconditionError
                    ((basic_string_view<char,std::char_traits<char>_> *)param_1);
          if (local_f0 < 0x10) {
            return param_1;
          }
          uVar11 = local_f0 + 1;
          uVar10 = local_108._Ptr;
          if (0xfff < uVar11) {
            uVar11 = local_f0 + 0x28;
            uVar10 = *(undefined8 *)(local_108._Ptr + -8);
            if ((char *)0x1f < local_108._Ptr + (-8 - uVar10)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          goto LAB_14fb66284;
        }
        pFVar2 = this_00->options_;
        uVar11 = (pFVar2->_impl_).targets_.soo_rep_.field0_0x0.long_rep.elements_int;
        if ((~((byte)uVar11 >> 2) & 1) == 0) {
          uVar9 = (pFVar2->_impl_).targets_.soo_rep_.field0_0x0.long_rep.size;
        }
        else {
          uVar9 = (uint)uVar11 & 3;
        }
        if (uVar9 == 0) {
          pbVar6 = this_00->all_names_;
          local_d8.piece_._Mydata = (char *)(pbVar6 + 1);
          if (0xf < pbVar6[1]._Mypair._Myval2._Myres) {
            local_d8.piece_._Mydata = pbVar6[1]._Mypair._Myval2._Bx._Ptr;
          }
          local_1a8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1535dd7d8
          ;
          uStack_1a0 = 0x19;
          local_78.piece_._Mydata = " has no target specified.";
          local_78.piece_._Mysize = 0x19;
          local_d8.piece_._Mysize = pbVar6[1]._Mypair._Myval2._Mysize;
          local_128._Mypair._Myval2._Bx._Ptr = "Feature field ";
          local_128._Mypair._Myval2._Bx._8_8_ = 0xe;
          local_a8.piece_._Mydata = "Feature field ";
          local_a8.piece_._Mysize = 0xe;
          pbVar6 = absl::lts_20240722::StrCat
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_108,&local_a8,&local_d8,&local_78);
          local_1a8 = pbVar6;
          if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
            local_1a8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        (pbVar6->_Mypair)._Myval2._Bx._Ptr;
          }
          uStack_1a0 = (pbVar6->_Mypair)._Myval2._Mysize;
          local_198 = local_1a8;
          uStack_190 = uStack_1a0;
          absl::lts_20240722::FailedPreconditionError
                    ((basic_string_view<char,std::char_traits<char>_> *)param_1);
          if (local_f0 < 0x10) {
            return param_1;
          }
          uVar11 = local_f0 + 1;
          uVar10 = local_108._Ptr;
          if (0xfff < uVar11) {
            uVar11 = local_f0 + 0x28;
            uVar10 = *(undefined8 *)(local_108._Ptr + -8);
            if ((char *)0x1f < local_108._Ptr + (-8 - uVar10)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          goto LAB_14fb66284;
        }
        bVar5 = false;
        pRVar7 = &(pFVar2->_impl_).edition_defaults_;
        pRVar12 = pRVar7;
        if ((~*(byte *)pRVar7 & 1) == 0) {
          lVar1 = *(longlong *)pRVar7;
          pRVar7 = (RepeatedPtrField<google::protobuf::FieldOptions_EditionDefault> *)
                   (*(longlong *)pRVar7 + 7);
          pRVar12 = (RepeatedPtrField<google::protobuf::FieldOptions_EditionDefault> *)(lVar1 + 7);
        }
        if (pRVar7 == (RepeatedPtrField<google::protobuf::FieldOptions_EditionDefault> *)
                      (&pRVar12->field_0x0 +
                      (longlong)*(int *)&(pFVar2->_impl_).edition_defaults_.field_0x8 * 8)) {
LAB_14fb65ef0:
          pbVar6 = this_00->all_names_;
          local_d8.piece_._Mydata = (char *)(pbVar6 + 1);
          if (0xf < pbVar6[1]._Mypair._Myval2._Myres) {
            local_d8.piece_._Mydata = pbVar6[1]._Mypair._Myval2._Bx._Ptr;
          }
          local_1a8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1535dd800
          ;
          uStack_1a0 = 0x47;
          local_78.piece_._Mydata =
               " has no default specified for EDITION_LEGACY, before it was introduced.";
          local_78.piece_._Mysize = 0x47;
          local_d8.piece_._Mysize = pbVar6[1]._Mypair._Myval2._Mysize;
          local_128._Mypair._Myval2._Bx._Ptr = "Feature field ";
          local_128._Mypair._Myval2._Bx._8_8_ = 0xe;
          local_a8.piece_._Mydata = "Feature field ";
          local_a8.piece_._Mysize = 0xe;
          pbVar6 = absl::lts_20240722::StrCat
                             ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_108,&local_a8,&local_d8,&local_78);
          local_1a8 = pbVar6;
          if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
            local_1a8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        (pbVar6->_Mypair)._Myval2._Bx._Ptr;
          }
          uStack_1a0 = (pbVar6->_Mypair)._Myval2._Mysize;
          local_198 = local_1a8;
          uStack_190 = uStack_1a0;
          absl::lts_20240722::FailedPreconditionError
                    ((basic_string_view<char,std::char_traits<char>_> *)param_1);
          if (local_f0 < 0x10) {
            return param_1;
          }
          uVar11 = local_f0 + 1;
          uVar10 = local_108._Ptr;
          if (0xfff < uVar11) {
            uVar11 = local_f0 + 0x28;
            uVar10 = *(undefined8 *)(local_108._Ptr + -8);
            if ((char *)0x1f < local_108._Ptr + (-8 - uVar10)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          goto LAB_14fb66284;
        }
        do {
          if (*(int *)(*(longlong *)pRVar7 + 0x20) == 900) {
            bVar5 = true;
          }
          pRVar7 = (RepeatedPtrField<google::protobuf::FieldOptions_EditionDefault> *)
                   &pRVar7->field_0x8;
        } while (pRVar7 != (RepeatedPtrField<google::protobuf::FieldOptions_EditionDefault> *)
                           (&pRVar12->field_0x0 +
                           (longlong)*(int *)&(pFVar2->_impl_).edition_defaults_.field_0x8 * 8));
        if (!bVar5) goto LAB_14fb65ef0;
        FUN_14fb67220(&local_188,this_00);
        if (local_188 != (StatusRep *)&DAT_00000001) {
          *(StatusRep **)param_1 = local_188;
          this = local_188;
          if (((ulonglong)local_188 & 1) == 0) {
            LOCK();
            local_188->ref_ = (atomic<int>)((int)local_188->ref_ + 1);
            UNLOCK();
          }
joined_r0x00014fb65ee3:
          if (((ulonglong)this & 1) != 0) {
            return param_1;
          }
          absl::lts_20240722::status_internal::StatusRep::Unref(this);
          return param_1;
        }
        pEVar8 = google::protobuf::FieldDescriptor::enum_type(this_00);
        if (pEVar8 != (EnumDescriptor *)0x0) {
          pEVar8 = google::protobuf::FieldDescriptor::enum_type(this_00);
          if (pEVar8 == (EnumDescriptor *)0x0) {
            local_168 = "field.enum_type() != nullptr";
            uStack_160 = 0x1c;
            local_148._Mydata = "field.enum_type() != nullptr";
            local_148._Mysize = 0x1c;
            absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                      (&local_138,
                       "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\feature_resolver.cc"
                       ,0x9f,&local_148);
            bVar4 = true;
          }
          if (bVar4) {
                    /* WARNING: Subroutine does not return */
            absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_138);
          }
          pFVar3 = (this_00->options_->_impl_).feature_support_;
          pFVar15 = (FieldOptions_FeatureSupport *)
                    &google::protobuf::_FieldOptions_FeatureSupport_default_instance_;
          if (pFVar3 != (FieldOptions_FeatureSupport *)0x0) {
            pFVar15 = pFVar3;
          }
          iVar13 = 0;
          pEVar8 = google::protobuf::FieldDescriptor::enum_type(this_00);
          if (0 < pEVar8->value_count_) {
            do {
              pEVar8 = google::protobuf::FieldDescriptor::enum_type(this_00);
              pbVar6 = this_00->all_names_;
              local_158 = pbVar6 + 1;
              if (0xf < pbVar6[1]._Mypair._Myval2._Myres) {
                local_158 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            pbVar6[1]._Mypair._Myval2._Bx._Ptr;
              }
              local_150 = pbVar6[1]._Mypair._Myval2._Mysize;
              FUN_14fb68760(&local_180,pFVar15,pEVar8->values_ + iVar13,&local_158);
              this = local_180;
              if (local_180 != (StatusRep *)&DAT_00000001) {
                if (((ulonglong)local_180 & 1) == 0) {
                  LOCK();
                  local_180->ref_ = (atomic<int>)((int)local_180->ref_ + 1);
                  UNLOCK();
                }
                if (((ulonglong)local_180 & 1) == 0) {
                  absl::lts_20240722::status_internal::StatusRep::Unref(local_180);
                }
                if (this != (StatusRep *)&DAT_00000001) {
                  *(StatusRep **)param_1 = this;
                  if (((ulonglong)this & 1) == 0) {
                    LOCK();
                    this->ref_ = (atomic<int>)((int)this->ref_ + 1);
                    UNLOCK();
                  }
                  goto joined_r0x00014fb65ee3;
                }
                break;
              }
              iVar13 = iVar13 + 1;
              pEVar8 = google::protobuf::FieldDescriptor::enum_type(this_00);
            } while (iVar13 < pEVar8->value_count_);
          }
        }
        iVar14 = iVar14 + 1;
        local_178 = local_178 + 0x60;
      } while (iVar14 < *(int *)(param_2 + 4));
    }
    param_1->ref_ = (atomic<int>)0x1;
    param_1->code_ = kOk;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 8);
    local_108._Ptr = (char *)(lVar1 + 0x20);
    if (0xf < *(ulonglong *)(lVar1 + 0x38)) {
      local_108._Ptr = (char *)*(longlong *)(lVar1 + 0x20);
    }
    local_d8.piece_._Mydata = " contains unsupported oneof feature fields.";
    local_d8.piece_._Mysize = 0x2b;
    local_108._8_8_ = *(undefined8 *)(lVar1 + 0x30);
    local_198 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1535dd75c;
    uStack_190 = 5;
    local_a8.piece_._Mydata = "Type ";
    local_a8.piece_._Mysize = 5;
    pbVar6 = absl::lts_20240722::StrCat(&local_128,&local_a8,(AlphaNum *)&local_108,&local_d8);
    local_1a8 = pbVar6;
    if (0xf < (pbVar6->_Mypair)._Myval2._Myres) {
      local_1a8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (pbVar6->_Mypair)._Myval2._Bx._Ptr;
    }
    uStack_1a0 = (pbVar6->_Mypair)._Myval2._Mysize;
    local_198 = local_1a8;
    uStack_190 = uStack_1a0;
    absl::lts_20240722::FailedPreconditionError
              ((basic_string_view<char,std::char_traits<char>_> *)param_1);
    if (0xf < local_128._Mypair._Myval2._Myres) {
      uVar11 = local_128._Mypair._Myval2._Myres + 1;
      uVar10 = local_128._Mypair._Myval2._Bx._Ptr;
      if (0xfff < uVar11) {
        uVar11 = local_128._Mypair._Myval2._Myres + 0x28;
        uVar10 = *(undefined8 *)(local_128._Mypair._Myval2._Bx._Ptr + -8);
        if ((char *)0x1f < local_128._Mypair._Myval2._Bx._Ptr + (-8 - uVar10)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_14fb66284:
      operator_delete((void *)uVar10,uVar11);
    }
  }
  return param_1;
}

// FUN_14fb662c0 @ 14fb662c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

_Bxty * FUN_14fb662c0(_Bxty *param_1,Descriptor *param_2,FieldDescriptor *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  _Bxty *p_Var2;
  Descriptor *pDVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  undefined1 auStack_148 [32];
  _Bxty *local_128;
  ulonglong *puStack_120;
  _Bxty *local_118;
  char *pcStack_110;
  char *local_100;
  undefined8 uStack_f8;
  _Bxty local_f0;
  char *local_e0;
  ulonglong local_d8;
  AlphaNum local_d0;
  AlphaNum local_a0;
  undefined1 local_68 [24];
  ulong64 uStack_50;
  char *local_48;
  char acStack_40 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_148;
  if (param_3 == (FieldDescriptor *)0x0) {
    pbVar4 = param_2->all_names_;
    local_a0.piece_._Mydata = (char *)(pbVar4 + 1);
    if (0xf < pbVar4[1]._Mypair._Myval2._Myres) {
      local_a0.piece_._Mydata = pbVar4[1]._Mypair._Myval2._Bx._Ptr;
    }
    local_d0.piece_._Mydata = ".";
    local_d0.piece_._Mysize = 1;
    local_a0.piece_._Mysize = pbVar4[1]._Mypair._Myval2._Mysize;
    local_118 = (_Bxty *)0x1535dd848;
    pcStack_110 = (char *)0x15;
    local_68._0_8_ = "Unknown extension of ";
    local_68._8_8_ = 0x15;
    p_Var2 = (_Bxty *)absl::lts_20240722::StrCat
                                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_f0,(AlphaNum *)local_68,&local_a0,&local_d0);
    local_128 = p_Var2;
    if (0xf < *(ulonglong *)(p_Var2[1]._Buf + 8)) {
      local_128 = (_Bxty *)p_Var2->_Ptr;
    }
    puStack_120 = (ulonglong *)p_Var2[1]._Ptr;
    local_118 = local_128;
    pcStack_110 = (char *)puStack_120;
    absl::lts_20240722::FailedPreconditionError
              ((basic_string_view<char,std::char_traits<char>_> *)param_1);
    if (local_d8 < 0x10) {
      return param_1;
    }
    uVar6 = local_d8 + 1;
    uVar5 = local_f0._Ptr;
    if (0xfff < uVar6) {
      uVar6 = local_d8 + 0x28;
      uVar5 = *(_Bxty **)(local_f0._Ptr + -8);
      if ((char *)0x1f < local_f0._Ptr + (-8 - (longlong)*(_Bxty **)(local_f0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else if (param_3->containing_type_ == param_2) {
    local_118 = param_1;
    pDVar3 = google::protobuf::FieldDescriptor::message_type(param_3);
    if (pDVar3 == (Descriptor *)0x0) {
      pbVar4 = param_3->all_names_;
      local_d0.piece_._Mydata = (char *)(pbVar4 + 1);
      if (0xf < pbVar4[1]._Mypair._Myval2._Myres) {
        local_d0.piece_._Mydata = pbVar4[1]._Mypair._Myval2._Bx._Ptr;
      }
      local_68._0_8_ =
           " is not of message type.  Feature extensions should always use messages to allow for evolution."
      ;
      local_68._8_8_ = 0x5f;
      local_d0.piece_._Mysize = pbVar4[1]._Mypair._Myval2._Mysize;
      local_128 = (_Bxty *)0x1535dd8f0;
      puStack_120 = (ulonglong *)0x15;
      local_a0.piece_._Mydata = "FeatureSet extension ";
      local_a0.piece_._Mysize = 0x15;
      p_Var2 = (_Bxty *)absl::lts_20240722::StrCat
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_f0,&local_a0,&local_d0,(AlphaNum *)local_68);
      local_128 = p_Var2;
      if (0xf < *(ulonglong *)(p_Var2[1]._Buf + 8)) {
        local_128 = (_Bxty *)p_Var2->_Ptr;
      }
      puStack_120 = (ulonglong *)p_Var2[1]._Ptr;
      absl::lts_20240722::FailedPreconditionError
                ((basic_string_view<char,std::char_traits<char>_> *)param_1);
      if (local_d8 < 0x10) {
        return param_1;
      }
      uVar6 = local_d8 + 1;
      uVar5 = local_f0._Ptr;
      if (0xfff < uVar6) {
        uVar6 = local_d8 + 0x28;
        uVar5 = *(_Bxty **)(local_f0._Ptr + -8);
        if ((char *)0x1f < local_f0._Ptr + (-8 - (longlong)*(_Bxty **)(local_f0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
    else if (param_3->is_repeated_) {
      pbVar4 = param_3->all_names_;
      local_d0.piece_._Mydata = (char *)(pbVar4 + 1);
      if (0xf < pbVar4[1]._Mypair._Myval2._Myres) {
        local_d0.piece_._Mydata = pbVar4[1]._Mypair._Myval2._Bx._Ptr;
      }
      local_d0.piece_._Mysize = pbVar4[1]._Mypair._Myval2._Mysize;
      local_128 = (_Bxty *)0x1535dd910;
      puStack_120 = (ulonglong *)0x4b;
      local_68._0_8_ = "Only singular features extensions are supported.  Found repeated extension "
      ;
      local_68._8_8_ = 0x4b;
      p_Var2 = (_Bxty *)absl::lts_20240722::StrCat
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_f0,(AlphaNum *)local_68,&local_d0);
      local_128 = p_Var2;
      if (0xf < *(ulonglong *)(p_Var2[1]._Buf + 8)) {
        local_128 = (_Bxty *)p_Var2->_Ptr;
      }
      puStack_120 = (ulonglong *)p_Var2[1]._Ptr;
      absl::lts_20240722::FailedPreconditionError
                ((basic_string_view<char,std::char_traits<char>_> *)param_1);
      if (local_d8 < 0x10) {
        return param_1;
      }
      uVar6 = local_d8 + 1;
      uVar5 = local_f0._Ptr;
      if (0xfff < uVar6) {
        uVar6 = local_d8 + 0x28;
        uVar5 = *(_Bxty **)(local_f0._Ptr + -8);
        if ((char *)0x1f < local_f0._Ptr + (-8 - (longlong)*(_Bxty **)(local_f0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
    else {
      pDVar3 = google::protobuf::FieldDescriptor::message_type(param_3);
      if ((pDVar3->extension_count_ < 1) &&
         (pDVar3 = google::protobuf::FieldDescriptor::message_type(param_3),
         pDVar3->extension_range_count_ < 1)) {
        param_1->_Ptr = (char *)0x1;
        return param_1;
      }
      pbVar4 = param_3->all_names_;
      local_d0.piece_._Mydata = (char *)(pbVar4 + 1);
      if (0xf < pbVar4[1]._Mypair._Myval2._Myres) {
        local_d0.piece_._Mydata = pbVar4[1]._Mypair._Myval2._Bx._Ptr;
      }
      local_68._0_8_ = " are not supported.";
      local_68._8_8_ = 0x13;
      local_d0.piece_._Mysize = pbVar4[1]._Mypair._Myval2._Mysize;
      local_128 = (_Bxty *)0x1535dd978;
      puStack_120 = (ulonglong *)0x27;
      local_a0.piece_._Mydata = "Nested extensions in feature extension ";
      local_a0.piece_._Mysize = 0x27;
      p_Var2 = (_Bxty *)absl::lts_20240722::StrCat
                                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    *)&local_f0,&local_a0,&local_d0,(AlphaNum *)local_68);
      local_128 = p_Var2;
      if (0xf < *(ulonglong *)(p_Var2[1]._Buf + 8)) {
        local_128 = (_Bxty *)p_Var2->_Ptr;
      }
      puStack_120 = (ulonglong *)p_Var2[1]._Ptr;
      absl::lts_20240722::FailedPreconditionError
                ((basic_string_view<char,std::char_traits<char>_> *)param_1);
      if (local_d8 < 0x10) {
        return param_1;
      }
      uVar6 = local_d8 + 1;
      uVar5 = local_f0._Ptr;
      if (0xfff < uVar6) {
        uVar6 = local_d8 + 0x28;
        uVar5 = *(undefined8 *)(local_f0._Ptr + -8);
        if ((char *)0x1f < local_f0._Ptr + (-8 - uVar5)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
  }
  else {
    pbVar1 = param_2->all_names_;
    pbVar4 = pbVar1 + 1;
    if (0xf < pbVar1[1]._Mypair._Myval2._Myres) {
      pbVar4 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                &pbVar1[1]._Mypair._Myval2._Bx;
    }
    uVar6 = pbVar1[1]._Mypair._Myval2._Mysize;
    pbVar1 = param_3->all_names_;
    local_a0.piece_._Mydata = (char *)(pbVar1 + 1);
    if (0xf < pbVar1[1]._Mypair._Myval2._Myres) {
      local_a0.piece_._Mydata = pbVar1[1]._Mypair._Myval2._Bx._Ptr;
    }
    local_100 = " is not an extension of ";
    uStack_f8 = 0x18;
    local_a0.piece_._Mysize = pbVar1[1]._Mypair._Myval2._Mysize;
    local_118 = (_Bxty *)0x1535dd880;
    pcStack_110 = (char *)0xa;
    local_68._0_8_ = "Extension ";
    local_68._8_8_ = 10;
    local_48 = " is not an extension of ";
    acStack_40[0] = '\x18';
    acStack_40[1] = '\0';
    acStack_40[2] = '\0';
    acStack_40[3] = '\0';
    acStack_40[4] = '\0';
    acStack_40[5] = '\0';
    acStack_40[6] = '\0';
    acStack_40[7] = '\0';
    local_d0.piece_._Mydata._0_4_ = SUB84(pbVar4,0);
    local_d0.piece_._Mydata._4_4_ = (undefined4)((ulonglong)pbVar4 >> 0x20);
    local_d0.piece_._Mysize._0_4_ = (undefined4)uVar6;
    local_d0.piece_._Mysize._4_4_ = (undefined4)(uVar6 >> 0x20);
    local_38 = local_d0.piece_._Mydata._0_4_;
    uStack_34 = local_d0.piece_._Mydata._4_4_;
    uStack_30 = (undefined4)local_d0.piece_._Mysize;
    uStack_2c = local_d0.piece_._Mysize._4_4_;
    local_28 = 0x5065483c;
    uStack_24 = 1;
    uStack_20 = 1;
    uStack_1c = 0;
    local_128 = (_Bxty *)local_68;
    puStack_120 = local_18;
    local_d0.piece_._Mydata = (char *)pbVar4;
    local_d0.piece_._Mysize = uVar6;
    local_68._16_8_ = local_a0.piece_._Mydata;
    uStack_50 = local_a0.piece_._Mysize;
    absl::lts_20240722::strings_internal::CatPieces(&local_f0,&local_128);
    local_128 = &local_f0;
    if (0xf < local_d8) {
      local_128 = (_Bxty *)local_f0._Ptr;
    }
    puStack_120 = (ulonglong *)local_e0;
    absl::lts_20240722::FailedPreconditionError
              ((basic_string_view<char,std::char_traits<char>_> *)param_1);
    if (local_d8 < 0x10) {
      return param_1;
    }
    uVar6 = local_d8 + 1;
    uVar5 = local_f0._Ptr;
    if (0xfff < uVar6) {
      uVar6 = local_d8 + 0x28;
      uVar5 = *(_Bxty **)(local_f0._Ptr + -8);
      if ((char *)0x1f < local_f0._Ptr + (-8 - (longlong)*(_Bxty **)(local_f0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  operator_delete((void *)uVar5,uVar6);
  return param_1;
}

// ValidateFeatureLifetimes @ 14fb66860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static struct google::protobuf::FeatureResolver::ValidationResults __cdecl
   google::protobuf::FeatureResolver::ValidateFeatureLifetimes(enum google::protobuf::Edition,class
   google::protobuf::FeatureSet const & __ptr64,class google::protobuf::Descriptor const * __ptr64)
    */

undefined8 * __cdecl
google::protobuf::FeatureResolver::ValidateFeatureLifetimes
          (Edition param_1,FeatureSet *param_2,Descriptor *param_3)

{
  MessageLite *this;
  Descriptor *this_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  undefined4 in_register_0000000c;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  Descriptor *in_R9;
  undefined1 auStack_e8 [32];
  basic_string_view<char,std::char_traits<char>_> local_c8;
  undefined4 local_b8;
  Descriptor *local_b0;
  undefined8 *local_a8;
  _Bxty local_a0;
  ulonglong local_88;
  DynamicMessageFactory local_80 [64];
  ulonglong local_40;
  
  puVar2 = (undefined8 *)CONCAT44(in_register_0000000c,param_1);
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  this_00 = (Descriptor *)0x0;
  local_b8 = 0;
  local_a8 = puVar2;
  DynamicMessageFactory::DynamicMessageFactory(local_80);
  local_b0 = (Descriptor *)0x0;
  if (in_R9 != (Descriptor *)0x0) {
    this = (MessageLite *)DynamicMessageFactory::GetPrototype(local_80,in_R9);
    this_00 = (Descriptor *)MessageLite::New(this,(Arena *)0x0);
    local_b0 = this_00;
    pbVar1 = MessageLite::SerializeAsString
                       ((MessageLite *)param_3,
                        (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a0
                       );
    local_c8._Mydata = (char *)pbVar1;
    if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
      local_c8._Mydata = (pbVar1->_Mypair)._Myval2._Bx._Ptr;
    }
    local_c8._Mysize = (pbVar1->_Mypair)._Myval2._Mysize;
    MessageLite::ParseFromString((MessageLite *)this_00,&local_c8);
    param_3 = this_00;
    if (0xf < local_88) {
      uVar4 = local_88 + 1;
      uVar3 = local_a0._Ptr;
      if (0xfff < uVar4) {
        uVar4 = local_88 + 0x28;
        uVar3 = *(undefined8 *)(local_a0._Ptr + -8);
        if ((char *)0x1f < local_a0._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete((void *)uVar3,uVar4);
    }
  }
  if (param_3 == (Descriptor *)0x0) {
    local_c8._Mydata = "pool_features != nullptr";
    local_c8._Mysize = 0x18;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              ((LogMessageFatal *)&local_a0,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\feature_resolver.cc"
               ,0x23e,&local_c8);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)&local_a0);
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  local_b8 = 2;
  FUN_14fb66a30((ulonglong)param_2 & 0xffffffff,param_3,puVar2);
  if (this_00 != (Descriptor *)0x0) {
    (*(code *)**(undefined8 **)this_00)(this_00,1);
  }
  DynamicMessageFactory::~DynamicMessageFactory(local_80);
  return puVar2;
}

// FUN_14fb66a30 @ 14fb66a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "CppType": Some values do not have unique names */

void FUN_14fb66a30(undefined4 param_1,Message *param_2,
                  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                  *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> **ppbVar1;
  FieldDescriptor *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  FieldOptions_FeatureSupport *pFVar3;
  undefined8 *puVar4;
  int iVar5;
  Metadata *pMVar6;
  Message *pMVar7;
  EnumDescriptor *pEVar8;
  EnumValueDescriptor *pEVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  undefined8 uVar11;
  ulong64 uVar12;
  undefined8 *puVar13;
  FieldOptions_FeatureSupport *pFVar14;
  undefined1 auStackY_1d8 [32];
  undefined8 *local_1a8;
  undefined8 *puStack_1a0;
  longlong local_198;
  Metadata local_188;
  char *local_178;
  undefined8 uStack_170;
  char *local_168;
  undefined8 uStack_160;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_158;
  ulong64 local_150;
  Metadata local_148;
  Metadata local_138;
  AlphaNum local_128;
  _Bxty local_f8;
  ulonglong local_e0;
  AlphaNum local_d8;
  AlphaNum local_a8;
  AlphaNum local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_1a8 = (undefined8 *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  local_198 = 0;
  pMVar6 = google::protobuf::Message::GetMetadata(param_2,&local_188);
  google::protobuf::Reflection::ListFields
            (pMVar6->reflection,param_2,
             (vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
              *)&local_1a8);
  puVar4 = puStack_1a0;
  puVar13 = local_1a8;
  do {
    if (puVar13 == puVar4) {
      if (local_1a8 != (undefined8 *)0x0) {
        uVar12 = local_198 - (longlong)local_1a8 & 0xfffffffffffffff8;
        puVar13 = local_1a8;
        if (0xfff < uVar12) {
          uVar12 = uVar12 + 0x27;
          puVar13 = (undefined8 *)local_1a8[-1];
          if (0x1f < (ulonglong)((longlong)local_1a8 + (-8 - (longlong)puVar13))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(puVar13,uVar12);
      }
      return;
    }
    this = (FieldDescriptor *)*puVar13;
    if ((this->is_extension_) &&
       (*(int *)((longlong)&google::protobuf::FieldDescriptor::kTypeToCppTypeMap +
                (ulonglong)this->type_ * 4) == 10)) {
      pMVar6 = google::protobuf::Message::GetMetadata(param_2,&local_148);
      pMVar7 = google::protobuf::Reflection::GetMessage
                         (pMVar6->reflection,param_2,this,(MessageFactory *)0x0);
      FUN_14fb66a30(param_1,pMVar7,param_3);
    }
    else {
      pEVar8 = google::protobuf::FieldDescriptor::enum_type(this);
      if (pEVar8 != (EnumDescriptor *)0x0) {
        pMVar6 = google::protobuf::Message::GetMetadata(param_2,&local_138);
        iVar5 = google::protobuf::Reflection::GetEnumValue(pMVar6->reflection,param_2,this);
        pEVar8 = google::protobuf::FieldDescriptor::enum_type(this);
        pEVar9 = google::protobuf::EnumDescriptor::FindValueByNumber(pEVar8,iVar5);
        if (pEVar9 == (EnumValueDescriptor *)0x0) {
          local_128.piece_._Mysize =
               (ulong64)absl::lts_20240722::numbers_internal::FastIntToBuffer
                                  (iVar5,local_128.digits_);
          local_128.piece_._Mysize = local_128.piece_._Mysize + (-0x10 - (longlong)&local_128);
          local_128.piece_._Mydata = local_128.digits_;
          local_178 = " has no known value ";
          uStack_170 = 0x14;
          local_a8.piece_._Mydata = " has no known value ";
          local_a8.piece_._Mysize = 0x14;
          pbVar2 = this->all_names_;
          local_d8.piece_._Mydata = (char *)(pbVar2 + 1);
          if (0xf < pbVar2[1]._Mypair._Myval2._Myres) {
            local_d8.piece_._Mydata = pbVar2[1]._Mypair._Myval2._Bx._Ptr;
          }
          local_d8.piece_._Mysize = pbVar2[1]._Mypair._Myval2._Mysize;
          local_168 = "Feature ";
          uStack_160 = 8;
          local_78.piece_._Mydata = "Feature ";
          local_78.piece_._Mysize = 8;
          pbVar10 = absl::lts_20240722::StrCat
                              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_f8,&local_78,&local_d8,&local_a8,&local_128);
          pbVar2 = (param_3->_Mypair)._Myval2._Mylast;
          if (pbVar2 == (param_3->_Mypair)._Myval2._Myend) {
            std::
            vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
            ::
            _Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                      (param_3,pbVar2,pbVar10);
          }
          else {
            (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
            *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
            (pbVar2->_Mypair)._Myval2._Mysize = 0;
            (pbVar2->_Mypair)._Myval2._Myres = 0;
            uVar11 = *(undefined8 *)((longlong)&(pbVar10->_Mypair)._Myval2._Bx + 8);
            (pbVar2->_Mypair)._Myval2._Bx._Ptr = (pbVar10->_Mypair)._Myval2._Bx._Ptr;
            *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = uVar11;
            uVar12 = (pbVar10->_Mypair)._Myval2._Myres;
            (pbVar2->_Mypair)._Myval2._Mysize = (pbVar10->_Mypair)._Myval2._Mysize;
            (pbVar2->_Mypair)._Myval2._Myres = uVar12;
            (pbVar10->_Mypair)._Myval2._Mysize = 0;
            (pbVar10->_Mypair)._Myval2._Myres = 0xf;
            (pbVar10->_Mypair)._Myval2._Bx._Buf[0] = '\0';
            ppbVar1 = &(param_3->_Mypair)._Myval2._Mylast;
            *ppbVar1 = *ppbVar1 + 1;
          }
          if (0xf < local_e0) {
            uVar12 = local_e0 + 1;
            uVar11 = local_f8._Ptr;
            if (0xfff < uVar12) {
              uVar12 = local_e0 + 0x28;
              uVar11 = *(undefined8 *)(local_f8._Ptr + -8);
              if ((char *)0x1f < local_f8._Ptr + (-8 - uVar11)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete((void *)uVar11,uVar12);
          }
          goto LAB_14fb66d00;
        }
        pFVar3 = (pEVar9->options_->_impl_).feature_support_;
        pFVar14 = (FieldOptions_FeatureSupport *)
                  &google::protobuf::_FieldOptions_FeatureSupport_default_instance_;
        if (pFVar3 != (FieldOptions_FeatureSupport *)0x0) {
          pFVar14 = pFVar3;
        }
        pbVar2 = pEVar9->all_names_;
        local_158 = pbVar2 + 1;
        if (0xf < pbVar2[1]._Mypair._Myval2._Myres) {
          local_158 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                      pbVar2[1]._Mypair._Myval2._Bx._Ptr;
        }
        local_150 = pbVar2[1]._Mypair._Myval2._Mysize;
        FUN_14fb67ed0(param_1,&local_158,pFVar14,param_3);
      }
      pFVar3 = (this->options_->_impl_).feature_support_;
      pFVar14 = (FieldOptions_FeatureSupport *)
                &google::protobuf::_FieldOptions_FeatureSupport_default_instance_;
      if (pFVar3 != (FieldOptions_FeatureSupport *)0x0) {
        pFVar14 = pFVar3;
      }
      pbVar2 = this->all_names_;
      local_188.descriptor = (Descriptor *)(pbVar2 + 1);
      if (0xf < pbVar2[1]._Mypair._Myval2._Myres) {
        local_188.descriptor = (Descriptor *)pbVar2[1]._Mypair._Myval2._Bx._Ptr;
      }
      local_188.reflection = (Reflection *)pbVar2[1]._Mypair._Myval2._Mysize;
      FUN_14fb67ed0(param_1,&local_188,pFVar14);
    }
LAB_14fb66d00:
    puVar13 = puVar13 + 1;
  } while( true );
}

// FUN_14fb66d90 @ 14fb66d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string_view<char,std::char_traits<char>_> *
FUN_14fb66d90(basic_string_view<char,std::char_traits<char>_> *param_1,longlong param_2,
             undefined8 *param_3)

{
  uint uVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  undefined1 auStack_f8 [32];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_d8;
  ulong64 uStack_d0;
  _Bxty local_c0;
  ulonglong local_a8;
  AlphaNum local_a0;
  AlphaNum local_70;
  AlphaNum local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_f8;
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 & 1) != 0) {
      local_40.piece_._Mydata =
           " specifies a deprecation warning but is not marked deprecated in any edition.";
      local_40.piece_._Mysize = 0x4d;
      local_70.piece_._Mydata = (char *)*param_3;
      local_70.piece_._Mysize = param_3[1];
      local_d8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1535dd468;
      uStack_d0 = 8;
      local_a0.piece_._Mydata = "Feature ";
      local_a0.piece_._Mysize = 8;
      pbVar2 = absl::lts_20240722::StrCat
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_c0,&local_a0,&local_70,&local_40);
      local_d8 = pbVar2;
      if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
        local_d8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (pbVar2->_Mypair)._Myval2._Bx._Ptr;
      }
      uStack_d0 = (pbVar2->_Mypair)._Myval2._Mysize;
      absl::lts_20240722::FailedPreconditionError(param_1);
      if (local_a8 < 0x10) {
        return param_1;
      }
      uVar4 = local_a8 + 1;
      uVar3 = local_c0._Ptr;
      if (0xfff < uVar4) {
        uVar4 = local_a8 + 0x28;
        uVar3 = *(undefined8 *)(local_c0._Ptr + -8);
        if ((char *)0x1f < local_c0._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_14fb671e2;
    }
  }
  else {
    if (*(int *)(param_2 + 0x24) < *(int *)(param_2 + 0x20)) {
      local_a0.piece_._Mydata = " was deprecated before it was introduced.";
      local_a0.piece_._Mysize = 0x29;
      local_70.piece_._Mydata = (char *)*param_3;
      local_70.piece_._Mysize = param_3[1];
      local_d8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1535dd468;
      uStack_d0 = 8;
      local_40.piece_._Mydata = "Feature ";
      local_40.piece_._Mysize = 8;
      pbVar2 = absl::lts_20240722::StrCat
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_c0,&local_40,&local_70,&local_a0);
      local_d8 = pbVar2;
      if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
        local_d8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (pbVar2->_Mypair)._Myval2._Bx._Ptr;
      }
      uStack_d0 = (pbVar2->_Mypair)._Myval2._Mysize;
      absl::lts_20240722::FailedPreconditionError(param_1);
      if (local_a8 < 0x10) {
        return param_1;
      }
      uVar4 = local_a8 + 1;
      uVar3 = local_c0._Ptr;
      if (0xfff < uVar4) {
        uVar4 = local_a8 + 0x28;
        uVar3 = *(char **)(local_c0._Ptr + -8);
        if ((char *)0x1f < local_c0._Ptr + (-8 - (longlong)*(char **)(local_c0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_14fb671e2;
    }
    if ((uVar1 & 1) == 0) {
      local_40.piece_._Mydata = " is deprecated but does not specify a deprecation warning.";
      local_40.piece_._Mysize = 0x3a;
      local_70.piece_._Mydata = (char *)*param_3;
      local_70.piece_._Mysize = param_3[1];
      local_d8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1535dd468;
      uStack_d0 = 8;
      local_a0.piece_._Mydata = "Feature ";
      local_a0.piece_._Mysize = 8;
      pbVar2 = absl::lts_20240722::StrCat
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_c0,&local_a0,&local_70,&local_40);
      local_d8 = pbVar2;
      if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
        local_d8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (pbVar2->_Mypair)._Myval2._Bx._Ptr;
      }
      uStack_d0 = (pbVar2->_Mypair)._Myval2._Mysize;
      absl::lts_20240722::FailedPreconditionError(param_1);
      if (local_a8 < 0x10) {
        return param_1;
      }
      uVar4 = local_a8 + 1;
      uVar3 = local_c0._Ptr;
      if (0xfff < uVar4) {
        uVar4 = local_a8 + 0x28;
        uVar3 = *(char **)(local_c0._Ptr + -8);
        if ((char *)0x1f < local_c0._Ptr + (-8 - (longlong)*(char **)(local_c0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_14fb671e2;
    }
  }
  if ((uVar1 >> 3 & 1) != 0) {
    if (*(int *)(param_2 + 0x24) < *(int *)(param_2 + 0x28)) {
      if (*(int *)(param_2 + 0x20) <= *(int *)(param_2 + 0x28)) goto LAB_14fb671e9;
      local_40.piece_._Mydata = " was removed before it was introduced.";
      local_40.piece_._Mysize = 0x26;
      local_70.piece_._Mydata = (char *)*param_3;
      local_70.piece_._Mysize = param_3[1];
      local_d8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1535dd468;
      uStack_d0 = 8;
      local_a0.piece_._Mydata = "Feature ";
      local_a0.piece_._Mysize = 8;
      pbVar2 = absl::lts_20240722::StrCat
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_c0,&local_a0,&local_70,&local_40);
      local_d8 = pbVar2;
      if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
        local_d8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (pbVar2->_Mypair)._Myval2._Bx._Ptr;
      }
      uStack_d0 = (pbVar2->_Mypair)._Myval2._Mysize;
      absl::lts_20240722::FailedPreconditionError(param_1);
      if (local_a8 < 0x10) {
        return param_1;
      }
      uVar4 = local_a8 + 1;
      uVar3 = local_c0._Ptr;
      if (0xfff < uVar4) {
        uVar4 = local_a8 + 0x28;
        uVar3 = *(char **)(local_c0._Ptr + -8);
        if ((char *)0x1f < local_c0._Ptr + (-8 - (longlong)*(char **)(local_c0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
    else {
      local_40.piece_._Mydata = " was deprecated after it was removed.";
      local_40.piece_._Mysize = 0x25;
      local_70.piece_._Mydata = (char *)*param_3;
      local_70.piece_._Mysize = param_3[1];
      local_d8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x1535dd468;
      uStack_d0 = 8;
      local_a0.piece_._Mydata = "Feature ";
      local_a0.piece_._Mysize = 8;
      pbVar2 = absl::lts_20240722::StrCat
                         ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                          &local_c0,&local_a0,&local_70,&local_40);
      local_d8 = pbVar2;
      if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
        local_d8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (pbVar2->_Mypair)._Myval2._Bx._Ptr;
      }
      uStack_d0 = (pbVar2->_Mypair)._Myval2._Mysize;
      absl::lts_20240722::FailedPreconditionError(param_1);
      if (local_a8 < 0x10) {
        return param_1;
      }
      uVar4 = local_a8 + 1;
      uVar3 = local_c0._Ptr;
      if (0xfff < uVar4) {
        uVar4 = local_a8 + 0x28;
        uVar3 = *(char **)(local_c0._Ptr + -8);
        if ((char *)0x1f < local_c0._Ptr + (-8 - (longlong)*(char **)(local_c0._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
LAB_14fb671e2:
    operator_delete((void *)uVar3,uVar4);
    return param_1;
  }
LAB_14fb671e9:
  param_1->_Mydata = (char *)0x1;
  return param_1;
}

// FUN_14fb67220 @ 14fb67220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_Bxty * FUN_14fb67220(_Bxty *param_1,longlong param_2)

{
  Edition EVar1;
  longlong lVar2;
  FieldOptions_FeatureSupportDefaultTypeInternal *pFVar3;
  code *pcVar4;
  void *pvVar5;
  _Bxty *p_Var6;
  byte *pbVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong64 uVar10;
  byte *pbVar11;
  FieldOptions_FeatureSupportDefaultTypeInternal *pFVar12;
  undefined1 auStack_1c8 [32];
  _Bxty *local_1a8;
  code *pcStack_1a0;
  _Bxty *local_188;
  code *pcStack_180;
  _Bxty *local_178;
  code *pcStack_170;
  basic_string_view<char,std::char_traits<char>_> local_160;
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  code *pcStack_130;
  _Bxty local_128;
  code *local_118;
  ulonglong uStack_110;
  _Bxty local_108;
  code *local_f8;
  ulonglong uStack_f0;
  AlphaNum local_d8;
  AlphaNum local_a8;
  char *local_78 [2];
  _Bxty *local_68;
  code *pcStack_60;
  char *local_58;
  undefined8 uStack_50;
  _Bxty *local_48;
  code *pcStack_40;
  _Bxty *local_38;
  code *pcStack_30;
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if ((*(uint *)(*(longlong *)(param_2 + 0x40) + 0x28) >> 1 & 1) == 0) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    local_108._Ptr = (char *)(lVar2 + 0x20);
    if (0xf < *(ulonglong *)(lVar2 + 0x38)) {
      local_108._Ptr = (char *)*(longlong *)(lVar2 + 0x20);
    }
    local_a8.piece_._Mydata = " has no feature support specified.";
    local_a8.piece_._Mysize = 0x22;
    local_108._8_8_ = *(undefined8 *)(lVar2 + 0x30);
    local_1a8 = (_Bxty *)0x1535dd588;
    pcStack_1a0 = (code *)0xe;
    local_d8.piece_._Mydata = "Feature field ";
    local_d8.piece_._Mysize = 0xe;
    p_Var6 = (_Bxty *)absl::lts_20240722::StrCat
                                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_128,&local_d8,(AlphaNum *)&local_108,&local_a8);
    local_1a8 = p_Var6;
    if (0xf < *(ulonglong *)(p_Var6[1]._Buf + 8)) {
      local_1a8 = (_Bxty *)p_Var6->_Ptr;
    }
    pcStack_1a0 = (code *)p_Var6[1]._Ptr;
    local_148._0_8_ = local_1a8;
    local_148._8_8_ = pcStack_1a0;
    absl::lts_20240722::FailedPreconditionError
              ((basic_string_view<char,std::char_traits<char>_> *)param_1);
    if (uStack_110 < 0x10) {
      return param_1;
    }
    uVar10 = uStack_110 + 1;
    p_Var6 = (_Bxty *)CONCAT71(local_128._1_7_,local_128._Buf[0]);
    uVar9 = p_Var6;
    if (0xfff < uVar10) {
      uVar10 = uStack_110 + 0x28;
      uVar9 = *(_Bxty **)((longlong)p_Var6 + -8);
      if ((char *)0x1f < p_Var6->_Buf + (-8 - (longlong)*(_Bxty **)((longlong)p_Var6 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else {
    pFVar3 = *(FieldOptions_FeatureSupportDefaultTypeInternal **)
              (*(longlong *)(param_2 + 0x40) + 0x78);
    pFVar12 = &google::protobuf::_FieldOptions_FeatureSupport_default_instance_;
    if (pFVar3 != (FieldOptions_FeatureSupportDefaultTypeInternal *)0x0) {
      pFVar12 = pFVar3;
    }
    lVar2 = *(longlong *)(param_2 + 0x10);
    if ((*(uint *)(pFVar12 + 0x10) >> 1 & 1) != 0) {
      local_138 = (undefined1  [8])(lVar2 + 0x20);
      if (0xf < *(ulonglong *)(lVar2 + 0x38)) {
        local_138 = *(undefined1 (*) [8])(lVar2 + 0x20);
      }
      pcStack_130 = *(code **)(lVar2 + 0x30);
      local_1a8 = param_1;
      FUN_14fb66d90(&local_1a8,pFVar12,local_138);
      if (local_1a8 != (_Bxty *)&DAT_00000001) {
        param_1->_Ptr = (char *)local_1a8;
        if (((ulonglong)local_1a8 & 1) == 0) {
          LOCK();
          *(int *)local_1a8 = *(int *)local_1a8 + 1;
          UNLOCK();
        }
        if (((ulonglong)local_1a8 & 1) != 0) {
          return param_1;
        }
        absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_1a8);
        return param_1;
      }
      pbVar7 = (byte *)(*(longlong *)(param_2 + 0x40) + 0x40);
      pbVar11 = pbVar7;
      if ((~*pbVar7 & 1) == 0) {
        lVar2 = *(longlong *)pbVar7;
        pbVar7 = (byte *)(*(longlong *)pbVar7 + 7);
        pbVar11 = (byte *)(lVar2 + 7);
      }
      do {
        if (pbVar7 == pbVar11 + (longlong)*(int *)(*(longlong *)(param_2 + 0x40) + 0x48) * 8) {
          param_1->_Ptr = (char *)0x1;
          return param_1;
        }
        EVar1 = *(Edition *)(*(longlong *)pbVar7 + 0x20);
        if (999 < (int)EVar1) {
          if ((int)EVar1 < *(int *)(pFVar12 + 0x20)) {
            lVar2 = *(longlong *)(param_2 + 0x10);
            p_Var6 = (_Bxty *)(lVar2 + 0x20);
            if (0xf < *(ulonglong *)(lVar2 + 0x38)) {
              p_Var6 = *(_Bxty **)(lVar2 + 0x20);
            }
            pcVar4 = *(code **)(lVar2 + 0x30);
            local_1a8 = (_Bxty *)0x1535dd5d0;
            pcStack_1a0 = (code *)0x1b;
            local_108._8_8_ = 0;
            local_f8 = ___xmm_000000000000000f0000000000000000;
            uStack_f0 = _UNK_15076add8;
            local_108._Ptr = (char *)0x0;
            local_148._0_8_ = google::protobuf::internal::ShortEditionName(&local_160,EVar1);
            local_138 = (undefined1  [8])&local_108;
            local_148._8_8_ =
                 absl::lts_20240722::str_format_internal::FormatArgImpl::
                 Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
            local_178 = (_Bxty *)local_148;
            pcStack_170 = (code *)0x1;
            local_188 = (_Bxty *)0x1535d3fdc;
            pcStack_180 = (code *)0x2;
            pcStack_130 = absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
                          Flush<absl::lts_20240722::strings_internal::StringifySink>;
            absl::lts_20240722::str_format_internal::FormatUntyped(local_138,&local_188,&local_178);
            local_d8.piece_._Mydata = (char *)&local_108;
            if (0xf < uStack_f0) {
              local_d8.piece_._Mydata = local_108._Ptr;
            }
            local_d8.piece_._Mysize = (ulong64)local_f8;
            local_138 = (undefined1  [8])0x1535dd5f0;
            pcStack_130 = (code *)0x25;
            local_78[0] = "Feature field ";
            local_78[1] = (char *)0xe;
            local_58 = " has a default specified for edition ";
            uStack_50 = 0x25;
            pcStack_40 = local_f8;
            local_38 = local_1a8;
            pcStack_30 = pcStack_1a0;
            local_188 = (_Bxty *)local_78;
            pcStack_180 = (code *)local_28;
            local_a8.piece_._Mydata = (char *)p_Var6;
            local_a8.piece_._Mysize = (ulong64)pcVar4;
            local_68 = p_Var6;
            pcStack_60 = pcVar4;
            local_48 = (_Bxty *)local_d8.piece_._Mydata;
            absl::lts_20240722::strings_internal::CatPieces(&local_128,&local_188);
            local_188 = &local_128;
            if (0xf < uStack_110) {
              local_188 = (_Bxty *)CONCAT71(local_128._1_7_,local_128._Buf[0]);
            }
            pcStack_180 = local_118;
            pcStack_170 = local_118;
            local_178 = local_188;
            absl::lts_20240722::FailedPreconditionError
                      ((basic_string_view<char,std::char_traits<char>_> *)param_1);
            if (0xf < uStack_110) {
              uVar10 = uStack_110 + 1;
              pvVar5 = (void *)CONCAT71(local_128._1_7_,local_128._Buf[0]);
              pvVar8 = pvVar5;
              if (0xfff < uVar10) {
                uVar10 = uStack_110 + 0x28;
                pvVar8 = *(void **)((longlong)pvVar5 + -8);
                if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar8))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar8,uVar10);
            }
            local_118 = ___xmm_000000000000000f0000000000000000;
            uStack_110 = _UNK_15076add8;
            local_128._Buf[0] = '\0';
            if (uStack_f0 < 0x10) {
              return param_1;
            }
            uVar10 = uStack_f0 + 1;
            uVar9 = local_108._Ptr;
            if (0xfff < uVar10) {
              uVar10 = uStack_f0 + 0x28;
              uVar9 = *(undefined8 *)(local_108._Ptr + -8);
              if ((char *)0x1f < local_108._Ptr + (-8 - uVar9)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            goto LAB_14fb67997;
          }
          if (((*(uint *)(pFVar12 + 0x10) >> 3 & 1) != 0) && (*(int *)(pFVar12 + 0x28) < (int)EVar1)
             ) {
            lVar2 = *(longlong *)(param_2 + 0x10);
            p_Var6 = (_Bxty *)(lVar2 + 0x20);
            if (0xf < *(ulonglong *)(lVar2 + 0x38)) {
              p_Var6 = *(_Bxty **)(lVar2 + 0x20);
            }
            pcVar4 = *(code **)(lVar2 + 0x30);
            local_148._0_8_ = ", after it was removed.";
            local_148._8_8_ = (code *)0x17;
            local_108._8_8_ = 0;
            local_f8 = ___xmm_000000000000000f0000000000000000;
            uStack_f0 = _UNK_15076add8;
            local_108._Ptr = (char *)0x0;
            local_138 = (undefined1  [8])
                        google::protobuf::internal::ShortEditionName(&local_160,EVar1);
            local_188 = &local_108;
            pcStack_130 = absl::lts_20240722::str_format_internal::FormatArgImpl::
                          Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
            local_178 = (_Bxty *)local_138;
            pcStack_170 = (code *)0x1;
            local_1a8 = (_Bxty *)0x1535d3fdc;
            pcStack_1a0 = (code *)0x2;
            pcStack_180 = absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
                          Flush<absl::lts_20240722::strings_internal::StringifySink>;
            absl::lts_20240722::str_format_internal::FormatUntyped(&local_188,&local_1a8,&local_178)
            ;
            local_a8.piece_._Mydata = (char *)&local_108;
            if (0xf < uStack_f0) {
              local_a8.piece_._Mydata = local_108._Ptr;
            }
            local_a8.piece_._Mysize = (ulong64)local_f8;
            local_1a8 = (_Bxty *)0x1535dd5f0;
            pcStack_1a0 = (code *)0x25;
            local_188 = (_Bxty *)0x1535dd588;
            pcStack_180 = (code *)0xe;
            local_78[0] = "Feature field ";
            local_78[1] = (char *)0xe;
            local_58 = " has a default specified for edition ";
            uStack_50 = 0x25;
            pcStack_40 = local_f8;
            local_38 = (_Bxty *)local_148._0_8_;
            pcStack_30 = (code *)local_148._8_8_;
            local_148._0_8_ = local_78;
            local_148._8_8_ = local_28;
            local_d8.piece_._Mydata = (char *)p_Var6;
            local_d8.piece_._Mysize = (ulong64)pcVar4;
            local_68 = p_Var6;
            pcStack_60 = pcVar4;
            local_48 = (_Bxty *)local_a8.piece_._Mydata;
            absl::lts_20240722::strings_internal::CatPieces(&local_128,local_148);
            local_178 = &local_128;
            if (0xf < uStack_110) {
              local_178 = (_Bxty *)CONCAT71(local_128._1_7_,local_128._Buf[0]);
            }
            local_148._8_8_ = local_118;
            pcStack_170 = local_118;
            local_148._0_8_ = local_178;
            absl::lts_20240722::FailedPreconditionError
                      ((basic_string_view<char,std::char_traits<char>_> *)param_1);
            if (0xf < uStack_110) {
              uVar10 = uStack_110 + 1;
              pvVar5 = (void *)CONCAT71(local_128._1_7_,local_128._Buf[0]);
              pvVar8 = pvVar5;
              if (0xfff < uVar10) {
                uVar10 = uStack_110 + 0x28;
                pvVar8 = *(void **)((longlong)pvVar5 + -8);
                if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar8))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              operator_delete(pvVar8,uVar10);
            }
            local_118 = ___xmm_000000000000000f0000000000000000;
            uStack_110 = _UNK_15076add8;
            local_128._Buf[0] = '\0';
            if (uStack_f0 < 0x10) {
              return param_1;
            }
            uVar10 = uStack_f0 + 1;
            uVar9 = local_108._Ptr;
            if (0xfff < uVar10) {
              uVar10 = uStack_f0 + 0x28;
              uVar9 = *(_Bxty **)(local_108._Ptr + -8);
              if ((char *)0x1f < local_108._Ptr + (-8 - (longlong)*(_Bxty **)(local_108._Ptr + -8)))
              {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            goto LAB_14fb67997;
          }
        }
        pbVar7 = pbVar7 + 8;
      } while( true );
    }
    local_108._Ptr = (char *)(lVar2 + 0x20);
    if (0xf < *(ulonglong *)(lVar2 + 0x38)) {
      local_108._Ptr = (char *)*(longlong *)(lVar2 + 0x20);
    }
    local_a8.piece_._Mydata = " does not specify the edition it was introduced in.";
    local_a8.piece_._Mysize = 0x33;
    local_108._8_8_ = *(undefined8 *)(lVar2 + 0x30);
    local_1a8 = (_Bxty *)0x1535dd588;
    pcStack_1a0 = (code *)0xe;
    local_d8.piece_._Mydata = "Feature field ";
    local_d8.piece_._Mysize = 0xe;
    p_Var6 = (_Bxty *)absl::lts_20240722::StrCat
                                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_128,&local_d8,(AlphaNum *)&local_108,&local_a8);
    local_1a8 = p_Var6;
    if (0xf < *(ulonglong *)(p_Var6[1]._Buf + 8)) {
      local_1a8 = (_Bxty *)p_Var6->_Ptr;
    }
    pcStack_1a0 = (code *)p_Var6[1]._Ptr;
    local_148._0_8_ = local_1a8;
    local_148._8_8_ = pcStack_1a0;
    absl::lts_20240722::FailedPreconditionError
              ((basic_string_view<char,std::char_traits<char>_> *)param_1);
    if (uStack_110 < 0x10) {
      return param_1;
    }
    uVar10 = uStack_110 + 1;
    p_Var6 = (_Bxty *)CONCAT71(local_128._1_7_,local_128._Buf[0]);
    uVar9 = p_Var6;
    if (0xfff < uVar10) {
      uVar10 = uStack_110 + 0x28;
      uVar9 = *(_Bxty **)((longlong)p_Var6 + -8);
      if ((char *)0x1f < p_Var6->_Buf + (-8 - (longlong)*(_Bxty **)((longlong)p_Var6 + -8))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
LAB_14fb67997:
  operator_delete((void *)uVar9,uVar10);
  return param_1;
}

// FUN_14fb679b0 @ 14fb679b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string_view<char,std::char_traits<char>_> *
FUN_14fb679b0(basic_string_view<char,std::char_traits<char>_> *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  undefined1 auStack_68 [32];
  _Bxty *local_48;
  undefined8 uStack_40;
  _Bxty local_30;
  undefined8 local_20;
  ulonglong uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = (_Bxty *)param_1;
  if ((*(uint *)(param_2 + 0x30) < 4) && (*(uint *)(param_2 + 0x30) != 0)) {
    if ((*(uint *)(param_2 + 0x34) < 3) && (*(uint *)(param_2 + 0x34) != 0)) {
      if ((*(uint *)(param_2 + 0x38) < 3) && (*(uint *)(param_2 + 0x38) != 0)) {
        uVar1 = *(uint *)(param_2 + 0x3c);
        if (((uVar1 < 4) && ((0xdU >> ((byte)uVar1 & 0x1f) & 1) != 0)) && (uVar1 != 0)) {
          if ((*(uint *)(param_2 + 0x40) < 3) && (*(uint *)(param_2 + 0x40) != 0)) {
            if ((*(uint *)(param_2 + 0x44) < 3) && (*(uint *)(param_2 + 0x44) != 0)) {
              if ((*(uint *)(param_2 + 0x48) < 3) && (*(uint *)(param_2 + 0x48) != 0)) {
                param_1->_Mydata = (char *)0x1;
                return param_1;
              }
              local_30._Ptr = (char *)0x0;
              local_30._8_8_ = 0;
              local_20 = 0;
              uStack_18 = 0;
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Construct<1,char_const_*>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_30,
                         "Feature field `enforce_naming_style` must resolve to a known value, found ENFORCE_NAMING_STYLE_UNKNOWN"
                         ,0x66);
              local_48 = &local_30;
              if (0xf < uStack_18) {
                local_48 = (_Bxty *)local_30._Ptr;
              }
              uStack_40 = local_20;
              absl::lts_20240722::FailedPreconditionError(param_1);
              if (uStack_18 < 0x10) {
                return param_1;
              }
              uVar3 = uStack_18 + 1;
              uVar2 = local_30._Ptr;
              if (0xfff < uVar3) {
                uVar3 = uStack_18 + 0x28;
                uVar2 = *(_Bxty **)(local_30._Ptr + -8);
                if ((char *)0x1f < local_30._Ptr + (-8 - (longlong)*(_Bxty **)(local_30._Ptr + -8)))
                {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
            }
            else {
              local_30._Ptr = (char *)0x0;
              local_30._8_8_ = 0;
              local_20 = 0;
              uStack_18 = 0;
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Construct<1,char_const_*>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_30,
                         "Feature field `json_format` must resolve to a known value, found JSON_FORMAT_UNKNOWN"
                         ,0x54);
              local_48 = &local_30;
              if (0xf < uStack_18) {
                local_48 = (_Bxty *)local_30._Ptr;
              }
              uStack_40 = local_20;
              absl::lts_20240722::FailedPreconditionError(param_1);
              if (uStack_18 < 0x10) {
                return param_1;
              }
              uVar3 = uStack_18 + 1;
              uVar2 = local_30._Ptr;
              if (0xfff < uVar3) {
                uVar3 = uStack_18 + 0x28;
                uVar2 = *(_Bxty **)(local_30._Ptr + -8);
                if ((char *)0x1f < local_30._Ptr + (-8 - (longlong)*(_Bxty **)(local_30._Ptr + -8)))
                {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
            }
          }
          else {
            local_30._Ptr = (char *)0x0;
            local_30._8_8_ = 0;
            local_20 = 0;
            uStack_18 = 0;
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Construct<1,char_const_*>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30,
                       "Feature field `message_encoding` must resolve to a known value, found MESSAGE_ENCODING_UNKNOWN"
                       ,0x5e);
            local_48 = &local_30;
            if (0xf < uStack_18) {
              local_48 = (_Bxty *)local_30._Ptr;
            }
            uStack_40 = local_20;
            absl::lts_20240722::FailedPreconditionError(param_1);
            if (uStack_18 < 0x10) {
              return param_1;
            }
            uVar3 = uStack_18 + 1;
            uVar2 = local_30._Ptr;
            if (0xfff < uVar3) {
              uVar3 = uStack_18 + 0x28;
              uVar2 = *(_Bxty **)(local_30._Ptr + -8);
              if ((char *)0x1f < local_30._Ptr + (-8 - (longlong)*(_Bxty **)(local_30._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
          }
        }
        else {
          local_30._Ptr = (char *)0x0;
          local_30._8_8_ = 0;
          local_20 = 0;
          uStack_18 = 0;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          _Construct<1,char_const_*>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30,
                     "Feature field `utf8_validation` must resolve to a known value, found UTF8_VALIDATION_UNKNOWN"
                     ,0x5c);
          local_48 = &local_30;
          if (0xf < uStack_18) {
            local_48 = (_Bxty *)local_30._Ptr;
          }
          uStack_40 = local_20;
          absl::lts_20240722::FailedPreconditionError(param_1);
          if (uStack_18 < 0x10) {
            return param_1;
          }
          uVar3 = uStack_18 + 1;
          uVar2 = local_30._Ptr;
          if (0xfff < uVar3) {
            uVar3 = uStack_18 + 0x28;
            uVar2 = *(_Bxty **)(local_30._Ptr + -8);
            if ((char *)0x1f < local_30._Ptr + (-8 - (longlong)*(_Bxty **)(local_30._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
        }
      }
      else {
        local_30._Ptr = (char *)0x0;
        local_30._8_8_ = 0;
        local_20 = 0;
        uStack_18 = 0;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Construct<1,char_const_*>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30,
                   "Feature field `repeated_field_encoding` must resolve to a known value, found REPEATED_FIELD_ENCODING_UNKNOWN"
                   ,0x6c);
        local_48 = &local_30;
        if (0xf < uStack_18) {
          local_48 = (_Bxty *)local_30._Ptr;
        }
        uStack_40 = local_20;
        absl::lts_20240722::FailedPreconditionError(param_1);
        if (uStack_18 < 0x10) {
          return param_1;
        }
        uVar3 = uStack_18 + 1;
        uVar2 = local_30._Ptr;
        if (0xfff < uVar3) {
          uVar3 = uStack_18 + 0x28;
          uVar2 = *(_Bxty **)(local_30._Ptr + -8);
          if ((char *)0x1f < local_30._Ptr + (-8 - (longlong)*(_Bxty **)(local_30._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
      }
    }
    else {
      local_30._Ptr = (char *)0x0;
      local_30._8_8_ = 0;
      local_20 = 0;
      uStack_18 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30,
                 "Feature field `enum_type` must resolve to a known value, found ENUM_TYPE_UNKNOWN",
                 0x50);
      local_48 = &local_30;
      if (0xf < uStack_18) {
        local_48 = (_Bxty *)local_30._Ptr;
      }
      uStack_40 = local_20;
      absl::lts_20240722::FailedPreconditionError(param_1);
      if (uStack_18 < 0x10) {
        return param_1;
      }
      uVar3 = uStack_18 + 1;
      uVar2 = local_30._Ptr;
      if (0xfff < uVar3) {
        uVar3 = uStack_18 + 0x28;
        uVar2 = *(_Bxty **)(local_30._Ptr + -8);
        if ((char *)0x1f < local_30._Ptr + (-8 - (longlong)*(_Bxty **)(local_30._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
  }
  else {
    local_30._Ptr = (char *)0x0;
    local_30._8_8_ = 0;
    local_20 = 0;
    uStack_18 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30,
               "Feature field `field_presence` must resolve to a known value, found FIELD_PRESENCE_UNKNOWN"
               ,0x5a);
    local_48 = &local_30;
    if (0xf < uStack_18) {
      local_48 = (_Bxty *)local_30._Ptr;
    }
    uStack_40 = local_20;
    absl::lts_20240722::FailedPreconditionError(param_1);
    if (uStack_18 < 0x10) {
      return param_1;
    }
    uVar3 = uStack_18 + 1;
    uVar2 = local_30._Ptr;
    if (0xfff < uVar3) {
      uVar3 = uStack_18 + 0x28;
      uVar2 = *(undefined8 *)(local_30._Ptr + -8);
      if ((char *)0x1f < local_30._Ptr + (-8 - uVar2)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  operator_delete((void *)uVar2,uVar3);
  return param_1;
}

// FUN_14fb67ed0 @ 14fb67ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14fb67ed0(Edition param_1,undefined8 *param_2,
                  FieldOptions_FeatureSupportDefaultTypeInternal *param_3,
                  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                  *param_4)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> **ppbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  void *pvVar3;
  void *pvVar4;
  ulong64 uVar5;
  basic_string_view<char,std::char_traits<char>_> *pbVar6;
  undefined1 auStack_1d8 [32];
  basic_string_view<char,std::char_traits<char>_> *local_1b8;
  code *pcStack_1b0;
  basic_string_view<char,std::char_traits<char>_> *local_198;
  code *pcStack_190;
  basic_string_view<char,std::char_traits<char>_> *local_188;
  undefined8 uStack_180;
  basic_string_view<char,std::char_traits<char>_> local_178;
  basic_string_view<char,std::char_traits<char>_> *local_168;
  char *pcStack_160;
  basic_string_view<char,std::char_traits<char>_> local_128;
  basic_string_view<char,std::char_traits<char>_> local_118;
  char *local_108;
  ulong64 uStack_100;
  basic_string_view<char,std::char_traits<char>_> local_f8;
  char *local_e8;
  ulong64 uStack_e0;
  _Bxty local_c8;
  char *local_b8;
  ulong64 uStack_b0;
  basic_string_view<char,std::char_traits<char>_> local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  char *local_88;
  undefined8 uStack_80;
  basic_string_view<char,std::char_traits<char>_> *local_78;
  char *pcStack_70;
  char *local_68;
  ulong64 uStack_60;
  basic_string_view<char,std::char_traits<char>_> *local_58;
  char *pcStack_50;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_1d8;
  if (param_3 == &google::protobuf::_FieldOptions_FeatureSupport_default_instance_) {
    return;
  }
  if ((int)param_1 < (int)*(Edition *)(param_3 + 0x20)) {
    local_128._Mydata = " and can\'t be used in edition ";
    local_128._Mysize = 0x1e;
    local_118._Mysize = 0;
    local_108 = ___xmm_000000000000000f0000000000000000;
    uStack_100 = _UNK_15076add8;
    local_118._Mydata = (char *)0x0;
    local_f8._Mydata =
         (char *)google::protobuf::internal::ShortEditionName
                           (&local_178,*(Edition *)(param_3 + 0x20));
    local_1b8 = &local_118;
    local_f8._Mysize =
         (ulong64)absl::lts_20240722::str_format_internal::FormatArgImpl::
                  Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
    local_188 = &local_f8;
    uStack_180 = 1;
    local_198 = (basic_string_view<char,std::char_traits<char>_> *)0x1535d3fdc;
    pcStack_190 = (code *)0x2;
    pcStack_1b0 = absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
                  Flush<absl::lts_20240722::strings_internal::StringifySink>;
    absl::lts_20240722::str_format_internal::FormatUntyped(&local_1b8,&local_198,&local_188);
    local_78 = &local_118;
    if (0xf < uStack_100) {
      local_78 = (basic_string_view<char,std::char_traits<char>_> *)local_118._Mydata;
    }
    local_198 = (basic_string_view<char,std::char_traits<char>_> *)0x1535ddd88;
    pcStack_190 = (code *)0x21;
    local_1b8 = (basic_string_view<char,std::char_traits<char>_> *)0x1535dd468;
    pcStack_1b0 = (code *)0x8;
    local_a8._Mydata = "Feature ";
    local_a8._Mysize = 8;
    local_98 = *param_2;
    uStack_90 = param_2[1];
    local_88 = " wasn\'t introduced until edition ";
    uStack_80 = 0x21;
    pcStack_70 = local_108;
    local_68 = local_128._Mydata;
    uStack_60 = local_128._Mysize;
    local_f8._Mysize = 0;
    local_e8 = ___xmm_000000000000000f0000000000000000;
    uStack_e0 = _UNK_15076add8;
    local_f8._Mydata = (char *)0x0;
    local_128._Mydata = (char *)google::protobuf::internal::ShortEditionName(&local_178,param_1);
    local_198 = &local_f8;
    local_128._Mysize =
         (ulong64)absl::lts_20240722::str_format_internal::FormatArgImpl::
                  Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
    local_188 = &local_128;
    uStack_180 = 1;
    local_1b8 = (basic_string_view<char,std::char_traits<char>_> *)0x1535d3fdc;
    pcStack_1b0 = (code *)0x2;
    pcStack_190 = absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
                  Flush<absl::lts_20240722::strings_internal::StringifySink>;
    absl::lts_20240722::str_format_internal::FormatUntyped(&local_198,&local_1b8,&local_188);
    local_168 = &local_f8;
    if (0xf < uStack_e0) {
      local_168 = (basic_string_view<char,std::char_traits<char>_> *)local_f8._Mydata;
    }
    pcStack_160 = local_e8;
    pcStack_50 = local_e8;
    local_1b8 = &local_a8;
    pcStack_1b0 = (code *)local_48;
    local_58 = local_168;
    absl::lts_20240722::strings_internal::CatPieces(&local_c8,&local_1b8);
    if (0xf < uStack_e0) {
      uVar5 = uStack_e0 + 1;
      pbVar6 = (basic_string_view<char,std::char_traits<char>_> *)local_f8._Mydata;
      if (0xfff < uVar5) {
        uVar5 = uStack_e0 + 0x28;
        pbVar6 = (basic_string_view<char,std::char_traits<char>_> *)
                 ((basic_string_view<char,std::char_traits<char>_> *)
                 ((longlong)local_f8._Mydata + -0x10))->_Mysize;
        if (0x1f < (ulonglong)((longlong)local_f8._Mydata + (-8 - (longlong)pbVar6))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pbVar6,uVar5);
    }
    local_e8 = ___xmm_000000000000000f0000000000000000;
    uStack_e0 = _UNK_15076add8;
    local_f8._Mydata = (char *)((ulonglong)local_f8._Mydata & 0xffffffffffffff00);
    pbVar2 = (param_4->_Mypair)._Myval2._Mylast;
    if (pbVar2 == (param_4->_Mypair)._Myval2._Myend) {
      std::
      vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
      ::_Emplace_reallocate<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                (param_4,pbVar2,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8);
    }
    else {
      (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
      *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = 0;
      (pbVar2->_Mypair)._Myval2._Mysize = 0;
      (pbVar2->_Mypair)._Myval2._Myres = 0;
      (pbVar2->_Mypair)._Myval2._Bx._Ptr = (char *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
      *(undefined8 *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 8) = local_c8._8_8_;
      (pbVar2->_Mypair)._Myval2._Mysize = (ulong64)local_b8;
      (pbVar2->_Mypair)._Myval2._Myres = uStack_b0;
      local_b8 = ___xmm_000000000000000f0000000000000000;
      uStack_b0 = _UNK_15076add8;
      local_c8._Buf[0] = '\0';
      ppbVar1 = &(param_4->_Mypair)._Myval2._Mylast;
      *ppbVar1 = *ppbVar1 + 1;
    }
    if (0xf < uStack_b0) {
      uVar5 = uStack_b0 + 1;
      pvVar3 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
      pvVar4 = pvVar3;
      if (0xfff < uVar5) {
        uVar5 = uStack_b0 + 0x28;
        pvVar4 = *(void **)((longlong)pvVar3 + -8);
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,uVar5);
    }
    local_b8 = ___xmm_000000000000000f0000000000000000;
    uStack_b0 = _UNK_15076add8;
    local_c8._Buf[0] = '\0';
    if (0xf < uStack_100) {
      uVar5 = uStack_100 + 1;
      pbVar6 = (basic_string_view<char,std::char_traits<char>_> *)local_118._Mydata;
      if (0xfff < uVar5) {
        uVar5 = uStack_100 + 0x28;
        pbVar6 = (basic_string_view<char,std::char_traits<char>_> *)
                 ((basic_string_view<char,std::char_traits<char>_> *)
                 ((longlong)local_118._Mydata + -0x10))->_Mysize;
        if (0x1f < (ulonglong)((longlong)local_118._Mydata + (-8 - (longlong)pbVar6))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pbVar6,uVar5);
    }
  }
  if (((*(uint *)(param_3 + 0x10) >> 3 & 1) == 0) ||
     ((int)param_1 < (int)*(Edition *)(param_3 + 0x28))) {
    if ((*(uint *)(param_3 + 0x10) >> 2 & 1) == 0) {
      return;
    }
    if ((int)param_1 < (int)*(Edition *)(param_3 + 0x24)) {
      return;
    }
    pbVar6 = (basic_string_view<char,std::char_traits<char>_> *)
             (*(ulonglong *)(param_3 + 0x18) & 0xfffffffffffffffc);
    local_f8._Mydata = ": ";
    local_f8._Mysize = 2;
    local_118._Mysize = 0;
    local_108 = ___xmm_000000000000000f0000000000000000;
    uStack_100 = _UNK_15076add8;
    local_118._Mydata = (char *)0x0;
    local_128._Mydata =
         (char *)google::protobuf::internal::ShortEditionName
                           (&local_178,*(Edition *)(param_3 + 0x24));
    local_198 = &local_118;
    local_128._Mysize =
         (ulong64)absl::lts_20240722::str_format_internal::FormatArgImpl::
                  Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
    local_188 = &local_128;
    uStack_180 = 1;
    local_1b8 = (basic_string_view<char,std::char_traits<char>_> *)0x1535d3fdc;
    pcStack_1b0 = (code *)0x2;
    pcStack_190 = absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
                  Flush<absl::lts_20240722::strings_internal::StringifySink>;
    absl::lts_20240722::str_format_internal::FormatUntyped(&local_198,&local_1b8,&local_188);
    local_78 = &local_118;
    if (0xf < uStack_100) {
      local_78 = (basic_string_view<char,std::char_traits<char>_> *)local_118._Mydata;
    }
    local_1b8 = (basic_string_view<char,std::char_traits<char>_> *)0x1535dddd0;
    pcStack_1b0 = (code *)&DAT_00000020;
    local_a8._Mydata = "Feature ";
    local_a8._Mysize = 8;
    local_98 = *param_2;
    uStack_90 = param_2[1];
    local_88 = " has been deprecated in edition ";
    uStack_80 = 0x20;
    pcStack_70 = local_108;
    local_68 = local_f8._Mydata;
    uStack_60 = local_f8._Mysize;
    local_168 = pbVar6;
    if (0xf < pbVar6[1]._Mysize) {
      local_168 = (basic_string_view<char,std::char_traits<char>_> *)pbVar6->_Mydata;
    }
    pcStack_160 = pbVar6[1]._Mydata;
    local_128._Mydata = (char *)&local_a8;
    local_128._Mysize = (ulong64)local_48;
    local_58 = local_168;
    pcStack_50 = pcStack_160;
    absl::lts_20240722::strings_internal::CatPieces(&local_c8,&local_128);
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::emplace_back<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (param_4 + 1,
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8);
    if (0xf < uStack_b0) {
      uVar5 = uStack_b0 + 1;
      pvVar3 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
      pvVar4 = pvVar3;
      if (0xfff < uVar5) {
        uVar5 = uStack_b0 + 0x28;
        pvVar4 = *(void **)((longlong)pvVar3 + -8);
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,uVar5);
    }
    local_b8 = ___xmm_000000000000000f0000000000000000;
    uStack_b0 = _UNK_15076add8;
    local_c8._Buf[0] = '\0';
    if (uStack_100 < 0x10) {
      return;
    }
    uVar5 = uStack_100 + 1;
    pbVar6 = (basic_string_view<char,std::char_traits<char>_> *)local_118._Mydata;
    if (0xfff < uVar5) {
      uVar5 = uStack_100 + 0x28;
      pbVar6 = (basic_string_view<char,std::char_traits<char>_> *)
               ((basic_string_view<char,std::char_traits<char>_> *)
               ((longlong)local_118._Mydata + -0x10))->_Mysize;
      if (0x1f < (ulonglong)((longlong)local_118._Mydata + (-8 - (longlong)pbVar6))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else {
    local_f8._Mydata = " and can\'t be used in edition ";
    local_f8._Mysize = 0x1e;
    local_118._Mysize = 0;
    local_108 = ___xmm_000000000000000f0000000000000000;
    uStack_100 = _UNK_15076add8;
    local_118._Mydata = (char *)0x0;
    local_128._Mydata =
         (char *)google::protobuf::internal::ShortEditionName
                           (&local_178,*(Edition *)(param_3 + 0x28));
    local_198 = &local_118;
    local_128._Mysize =
         (ulong64)absl::lts_20240722::str_format_internal::FormatArgImpl::
                  Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
    local_188 = &local_128;
    uStack_180 = 1;
    local_1b8 = (basic_string_view<char,std::char_traits<char>_> *)0x1535d3fdc;
    pcStack_1b0 = (code *)0x2;
    pcStack_190 = absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
                  Flush<absl::lts_20240722::strings_internal::StringifySink>;
    absl::lts_20240722::str_format_internal::FormatUntyped(&local_198,&local_1b8,&local_188);
    local_168 = &local_118;
    if (0xf < uStack_100) {
      local_168 = (basic_string_view<char,std::char_traits<char>_> *)local_118._Mydata;
    }
    pcStack_160 = local_108;
    local_1b8 = (basic_string_view<char,std::char_traits<char>_> *)0x1535dddb0;
    pcStack_1b0 = (code *)0x1d;
    local_128._Mydata = "Feature ";
    local_128._Mysize = 8;
    local_a8._Mydata = "Feature ";
    local_a8._Mysize = 8;
    local_98 = *param_2;
    uStack_90 = param_2[1];
    local_88 = " has been removed in edition ";
    uStack_80 = 0x1d;
    pcStack_70 = local_108;
    local_68 = local_f8._Mydata;
    uStack_60 = local_f8._Mysize;
    local_f8._Mysize = 0;
    local_e8 = ___xmm_000000000000000f0000000000000000;
    uStack_e0 = _UNK_15076add8;
    local_f8._Mydata = (char *)0x0;
    local_78 = local_168;
    local_128._Mydata = (char *)google::protobuf::internal::ShortEditionName(&local_178,param_1);
    local_198 = &local_f8;
    local_128._Mysize =
         (ulong64)absl::lts_20240722::str_format_internal::FormatArgImpl::
                  Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
    local_188 = &local_128;
    uStack_180 = 1;
    local_1b8 = (basic_string_view<char,std::char_traits<char>_> *)0x1535d3fdc;
    pcStack_1b0 = (code *)0x2;
    pcStack_190 = absl::lts_20240722::str_format_internal::FormatRawSinkImpl::
                  Flush<absl::lts_20240722::strings_internal::StringifySink>;
    absl::lts_20240722::str_format_internal::FormatUntyped(&local_198,&local_1b8,&local_188);
    local_168 = &local_f8;
    if (0xf < uStack_e0) {
      local_168 = (basic_string_view<char,std::char_traits<char>_> *)local_f8._Mydata;
    }
    pcStack_160 = local_e8;
    pcStack_50 = local_e8;
    local_1b8 = &local_a8;
    pcStack_1b0 = (code *)local_48;
    local_58 = local_168;
    absl::lts_20240722::strings_internal::CatPieces(&local_c8,&local_1b8);
    if (0xf < uStack_e0) {
      uVar5 = uStack_e0 + 1;
      pbVar6 = (basic_string_view<char,std::char_traits<char>_> *)local_f8._Mydata;
      if (0xfff < uVar5) {
        uVar5 = uStack_e0 + 0x28;
        pbVar6 = (basic_string_view<char,std::char_traits<char>_> *)
                 ((basic_string_view<char,std::char_traits<char>_> *)
                 ((longlong)local_f8._Mydata + -0x10))->_Mysize;
        if (0x1f < (ulonglong)((longlong)local_f8._Mydata + (-8 - (longlong)pbVar6))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pbVar6,uVar5);
    }
    local_e8 = ___xmm_000000000000000f0000000000000000;
    uStack_e0 = _UNK_15076add8;
    local_f8._Mydata = (char *)((ulonglong)local_f8._Mydata & 0xffffffffffffff00);
    std::
    vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
    ::emplace_back<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              (param_4,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c8)
    ;
    if (0xf < uStack_b0) {
      uVar5 = uStack_b0 + 1;
      pvVar3 = (void *)CONCAT71(local_c8._1_7_,local_c8._Buf[0]);
      pvVar4 = pvVar3;
      if (0xfff < uVar5) {
        uVar5 = uStack_b0 + 0x28;
        pvVar4 = *(void **)((longlong)pvVar3 + -8);
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,uVar5);
    }
    local_b8 = ___xmm_000000000000000f0000000000000000;
    uStack_b0 = _UNK_15076add8;
    local_c8._Buf[0] = '\0';
    if (uStack_100 < 0x10) {
      return;
    }
    uVar5 = uStack_100 + 1;
    pbVar6 = (basic_string_view<char,std::char_traits<char>_> *)local_118._Mydata;
    if (0xfff < uVar5) {
      uVar5 = uStack_100 + 0x28;
      pbVar6 = (basic_string_view<char,std::char_traits<char>_> *)
               ((basic_string_view<char,std::char_traits<char>_> *)
               ((longlong)local_118._Mydata + -0x10))->_Mysize;
      if (0x1f < (ulonglong)
                 ((longlong)local_118._Mydata +
                 (-8 - (longlong)
                       ((basic_string_view<char,std::char_traits<char>_> *)
                       ((longlong)local_118._Mydata + -0x10))->_Mysize))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  local_c8._Buf[0] = '\0';
  ___xmm_000000000000000f0000000000000000 = local_b8;
  _UNK_15076add8 = uStack_b0;
  operator_delete(pbVar6,uVar5);
  return;
}

// FUN_14fb68760 @ 14fb68760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

StatusRep *
FUN_14fb68760(StatusRep *param_1,FieldOptions_FeatureSupport *param_2,longlong param_3,
             undefined4 *param_4)

{
  uint uVar1;
  MessageLite *pMVar2;
  longlong lVar3;
  undefined8 *******pppppppuVar4;
  MessageLite *pMVar5;
  ulong64 uVar6;
  undefined1 auStack_178 [48];
  undefined8 ******local_148;
  ulonglong *puStack_140;
  StatusRep *local_138;
  undefined8 uStack_130;
  char *local_128;
  undefined8 uStack_120;
  FieldOptions_FeatureSupport local_110;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined8 ******local_b0 [2];
  undefined8 local_a0;
  ulonglong local_98;
  undefined8 ****local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  char *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_178;
  if ((*(uint *)(*(longlong *)(param_3 + 0x18) + 0x28) >> 1 & 1) == 0) {
    param_1->ref_ = (atomic<int>)0x1;
    param_1->code_ = kOk;
    return param_1;
  }
  local_138 = param_1;
  google::protobuf::FieldOptions_FeatureSupport::FieldOptions_FeatureSupport
            (&local_110,(Arena *)0x0,param_2);
  local_110._padding_ = (longlong)google::protobuf::FieldOptions_FeatureSupport::vftable;
  pMVar2 = *(MessageLite **)(*(longlong *)(param_3 + 0x18) + 0x50);
  pMVar5 = (MessageLite *)&google::protobuf::_FieldOptions_FeatureSupport_default_instance_;
  if (pMVar2 != (MessageLite *)0x0) {
    pMVar5 = pMVar2;
  }
  google::protobuf::FieldOptions_FeatureSupport::MergeImpl((MessageLite *)&local_110,pMVar5);
  lVar3 = *(longlong *)(param_3 + 8);
  local_128 = (char *)(lVar3 + 0x20);
  if (0xf < *(ulonglong *)(lVar3 + 0x38)) {
    local_128 = *(char **)(lVar3 + 0x20);
  }
  uStack_120 = *(undefined8 *)(lVar3 + 0x30);
  FUN_14fb66d90(&local_138,&local_110,&local_128);
  if (local_138 != (StatusRep *)&DAT_00000001) {
    *(StatusRep **)param_1 = local_138;
    if (((ulonglong)local_138 & 1) == 0) {
      LOCK();
      local_138->ref_ = (atomic<int>)((int)local_138->ref_ + 1);
      UNLOCK();
    }
    if (((ulonglong)local_138 & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref(local_138);
    }
    goto LAB_14fb68bf5;
  }
  if (local_110._impl_.edition_introduced_ < (param_2->_impl_).edition_introduced_) {
    lVar3 = *(longlong *)(param_3 + 8);
    local_e0 = lVar3 + 0x20;
    if (0xf < *(ulonglong *)(lVar3 + 0x38)) {
      local_e0 = *(longlong *)(lVar3 + 0x20);
    }
    local_138 = (StatusRep *)0x1535dd638;
    uStack_130 = 0x1f;
    uStack_d8 = *(undefined8 *)(lVar3 + 0x30);
    local_128 = "Feature value ";
    uStack_120 = 0xe;
    local_88 = (undefined8 ****)0x1535dd658;
    uStack_80 = 0xe;
    local_68 = " was introduced before feature ";
    uStack_60 = 0x1f;
    local_58 = *param_4;
    uStack_54 = param_4[1];
    uStack_50 = param_4[2];
    uStack_4c = param_4[3];
    local_48 = 0x535dd630;
    uStack_44 = 1;
    uStack_40 = 5;
    uStack_3c = 0;
    local_148 = (undefined8 ******)&local_88;
    puStack_140 = local_38;
    local_78 = local_e0;
    uStack_70 = uStack_d8;
    absl::lts_20240722::strings_internal::CatPieces(local_b0,&local_148);
    local_148 = local_b0;
    if (0xf < local_98) {
      local_148 = local_b0[0];
    }
    puStack_140 = (ulonglong *)local_a0;
    absl::lts_20240722::FailedPreconditionError
              ((basic_string_view<char,std::char_traits<char>_> *)param_1);
    if (local_98 < 0x10) goto LAB_14fb68bf5;
    uVar6 = local_98 + 1;
    pppppppuVar4 = (undefined8 *******)local_b0[0];
    if (0xfff < uVar6) {
      uVar6 = local_98 + 0x28;
      pppppppuVar4 = (undefined8 *******)local_b0[0][-1];
      if (0x1f < (ulonglong)((longlong)local_b0[0] + (-8 - (longlong)local_b0[0][-1]))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
  }
  else {
    uVar1 = (param_2->_impl_)._has_bits_.has_bits_[0];
    if (((uVar1 >> 3 & 1) == 0) ||
       (local_110._impl_.edition_removed_ <= (param_2->_impl_).edition_removed_)) {
      if (((uVar1 >> 2 & 1) == 0) ||
         (local_110._impl_.edition_deprecated_ <= (param_2->_impl_).edition_deprecated_)) {
        param_1->ref_ = (atomic<int>)0x1;
        param_1->code_ = kOk;
        goto LAB_14fb68bf5;
      }
      lVar3 = *(longlong *)(param_3 + 8);
      local_e0 = lVar3 + 0x20;
      if (0xf < *(ulonglong *)(lVar3 + 0x38)) {
        local_e0 = *(longlong *)(lVar3 + 0x20);
      }
      local_138 = (StatusRep *)0x1535dd630;
      uStack_130 = 5;
      local_128 = " was deprecated after feature ";
      uStack_120 = 0x1e;
      uStack_d8 = *(undefined8 *)(lVar3 + 0x30);
      local_88 = (undefined8 ****)0x1535dd658;
      uStack_80 = 0xe;
      local_68 = " was deprecated after feature ";
      uStack_60 = 0x1e;
      local_58 = *param_4;
      uStack_54 = param_4[1];
      uStack_50 = param_4[2];
      uStack_4c = param_4[3];
      local_48 = 0x535dd630;
      uStack_44 = 1;
      uStack_40 = 5;
      uStack_3c = 0;
      local_148 = (undefined8 ******)&local_88;
      puStack_140 = local_38;
      local_78 = local_e0;
      uStack_70 = uStack_d8;
      absl::lts_20240722::strings_internal::CatPieces(local_b0,&local_148);
      local_148 = local_b0;
      if (0xf < local_98) {
        local_148 = local_b0[0];
      }
      puStack_140 = (ulonglong *)local_a0;
      absl::lts_20240722::FailedPreconditionError
                ((basic_string_view<char,std::char_traits<char>_> *)param_1);
      if (local_98 < 0x10) goto LAB_14fb68bf5;
      uVar6 = local_98 + 1;
      pppppppuVar4 = (undefined8 *******)local_b0[0];
      if (0xfff < uVar6) {
        uVar6 = local_98 + 0x28;
        pppppppuVar4 = (undefined8 *******)local_b0[0][-1];
        if (0x1f < (ulonglong)((longlong)local_b0[0] + (-8 - (longlong)pppppppuVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
    else {
      lVar3 = *(longlong *)(param_3 + 8);
      local_e0 = lVar3 + 0x20;
      if (0xf < *(ulonglong *)(lVar3 + 0x38)) {
        local_e0 = *(longlong *)(lVar3 + 0x20);
      }
      local_138 = (StatusRep *)0x1535dd630;
      uStack_130 = 5;
      local_128 = " was removed after feature ";
      uStack_120 = 0x1b;
      uStack_d8 = *(undefined8 *)(lVar3 + 0x30);
      local_88 = (undefined8 ****)0x1535dd658;
      uStack_80 = 0xe;
      local_68 = " was removed after feature ";
      uStack_60 = 0x1b;
      local_58 = *param_4;
      uStack_54 = param_4[1];
      uStack_50 = param_4[2];
      uStack_4c = param_4[3];
      local_48 = 0x535dd630;
      uStack_44 = 1;
      uStack_40 = 5;
      uStack_3c = 0;
      local_148 = (undefined8 ******)&local_88;
      puStack_140 = local_38;
      local_78 = local_e0;
      uStack_70 = uStack_d8;
      absl::lts_20240722::strings_internal::CatPieces(local_b0,&local_148);
      local_148 = local_b0;
      if (0xf < local_98) {
        local_148 = local_b0[0];
      }
      puStack_140 = (ulonglong *)local_a0;
      absl::lts_20240722::FailedPreconditionError
                ((basic_string_view<char,std::char_traits<char>_> *)param_1);
      if (local_98 < 0x10) goto LAB_14fb68bf5;
      uVar6 = local_98 + 1;
      pppppppuVar4 = (undefined8 *******)local_b0[0];
      if (0xfff < uVar6) {
        uVar6 = local_98 + 0x28;
        pppppppuVar4 = (undefined8 *******)local_b0[0][-1];
        if (0x1f < (ulonglong)((longlong)local_b0[0] + (-8 - (longlong)local_b0[0][-1]))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
    }
  }
  operator_delete(pppppppuVar4,uVar6);
LAB_14fb68bf5:
  google::protobuf::FieldOptions_FeatureSupport::~FieldOptions_FeatureSupport(&local_110);
  return param_1;
}

// FUN_14fb68c30 @ 14fb68c30

undefined8 * FUN_14fb68c30(undefined8 *param_1,FieldDescriptor *param_2)

{
  FieldOptions_FeatureSupport *pFVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  EnumDescriptor *pEVar3;
  int iVar4;
  FieldOptions_FeatureSupport *pFVar5;
  StatusRep *local_res10;
  undefined4 uVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_38;
  ulong64 local_30;
  basic_string_view<char,std::char_traits<char>_> local_28;
  LogMessageFatal local_18;
  
  iVar4 = 0;
  uVar6 = 0;
  pEVar3 = google::protobuf::FieldDescriptor::enum_type(param_2);
  if (pEVar3 == (EnumDescriptor *)0x0) {
    local_28._Mydata = "field.enum_type() != nullptr";
    local_28._Mysize = 0x1c;
    absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
              (&local_18,
               "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\feature_resolver.cc"
               ,0x9f,&local_28);
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_18);
  }
  pFVar1 = (param_2->options_->_impl_).feature_support_;
  pFVar5 = (FieldOptions_FeatureSupport *)
           &google::protobuf::_FieldOptions_FeatureSupport_default_instance_;
  if (pFVar1 != (FieldOptions_FeatureSupport *)0x0) {
    pFVar5 = pFVar1;
  }
  pEVar3 = google::protobuf::FieldDescriptor::enum_type(param_2);
  if (0 < pEVar3->value_count_) {
    do {
      pEVar3 = google::protobuf::FieldDescriptor::enum_type(param_2);
      pbVar2 = param_2->all_names_;
      local_38 = pbVar2 + 1;
      if (0xf < pbVar2[1]._Mypair._Myval2._Myres) {
        local_38 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   pbVar2[1]._Mypair._Myval2._Bx._Ptr;
      }
      local_30 = pbVar2[1]._Mypair._Myval2._Mysize;
      FUN_14fb68760(&local_res10,pFVar5,pEVar3->values_ + iVar4,&local_38,uVar6);
      if (local_res10 != (StatusRep *)&DAT_00000001) {
        *param_1 = local_res10;
        if (((ulonglong)local_res10 & 1) == 0) {
          LOCK();
          local_res10->ref_ = (atomic<int>)((int)local_res10->ref_ + 1);
          UNLOCK();
        }
        if (((ulonglong)local_res10 & 1) != 0) {
          return param_1;
        }
        absl::lts_20240722::status_internal::StatusRep::Unref(local_res10);
        return param_1;
      }
      iVar4 = iVar4 + 1;
      pEVar3 = google::protobuf::FieldDescriptor::enum_type(param_2);
    } while (iVar4 < pEVar3->value_count_);
  }
  *param_1 = 1;
  return param_1;
}

// _Buy_nonzero @ 14fb68d90

/* private: void __cdecl std::vector<class google::protobuf::FieldOptions_EditionDefault,class
   std::allocator<class google::protobuf::FieldOptions_EditionDefault> >::_Buy_nonzero(unsigned
   __int64) __ptr64 */

void __thiscall
std::
vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
::_Buy_nonzero(vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
               *this,__uint64 param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (0x666666666666666 < param_1) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = param_1 * 0x28;
  if (uVar1 < 0x1000) {
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = ::operator_new(uVar1);
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
    pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)pvVar3 - 8) = pvVar2;
  }
  *(void **)this = pvVar3;
  *(void **)(this + 8) = pvVar3;
  *(void **)(this + 0x10) = (void *)((longlong)pvVar3 + uVar1);
  return;
}

// _Buy_raw @ 14fb68e30

/* private: void __cdecl std::vector<class google::protobuf::FieldOptions_EditionDefault,class
   std::allocator<class google::protobuf::FieldOptions_EditionDefault> >::_Buy_raw(unsigned __int64)
   __ptr64 */

void __thiscall
std::
vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
::_Buy_raw(vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
           *this,__uint64 param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_1 < 0x666666666666667) {
    uVar1 = param_1 * 0x28;
    if (uVar1 < 0x1000) {
      if (uVar1 == 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = ::operator_new(uVar1);
      }
    }
    else {
      if (uVar1 + 0x27 <= uVar1) goto LAB_14fb68eb6;
      pvVar2 = ::operator_new(uVar1 + 0x27);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar3 - 8) = pvVar2;
    }
    *(void **)this = pvVar3;
    *(void **)(this + 8) = pvVar3;
    *(void **)(this + 0x10) = (void *)((longlong)pvVar3 + uVar1);
    return;
  }
LAB_14fb68eb6:
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// _Compat @ 14fb68ed0

/* public: void __cdecl std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault> > >::_Compat(class
   std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > > const & __ptr64)const __ptr64 */

void __thiscall
std::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
::_Compat(_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
          *this,_Vector_const_iterator<class_std::_Vector_val<struct_std::_Simple_types<class_google::protobuf::FieldOptions_EditionDefault>_>_>
                *param_1)

{
  return;
}

// _Get_first @ 14fb68ee0

/* public: struct std::default_delete<class google::protobuf::DynamicMessageFactory> & __ptr64
   __cdecl std::_Compressed_pair<struct std::default_delete<class
   google::protobuf::DynamicMessageFactory>,class google::protobuf::DynamicMessageFactory *
   __ptr64,1>::_Get_first(void) __ptr64 */

default_delete<google::protobuf::DynamicMessageFactory> * __thiscall
std::
_Compressed_pair<std::default_delete<google::protobuf::DynamicMessageFactory>,google::protobuf::DynamicMessageFactory*___ptr64,1>
::_Get_first(_Compressed_pair<std::default_delete<google::protobuf::DynamicMessageFactory>,google::protobuf::DynamicMessageFactory*___ptr64,1>
             *this)

{
  return (default_delete<google::protobuf::DynamicMessageFactory> *)this;
}

// _Get_first @ 14fb68ef0

/* public: class std::allocator<class google::protobuf::FieldOptions_EditionDefault> & __ptr64
   __cdecl std::_Compressed_pair<class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault>,class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault> >,1>::_Get_first(void)
   __ptr64 */

allocator<google::protobuf::FieldOptions_EditionDefault> * __thiscall
std::
_Compressed_pair<std::allocator<google::protobuf::FieldOptions_EditionDefault>,std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>,1>
::_Get_first(_Compressed_pair<std::allocator<google::protobuf::FieldOptions_EditionDefault>,std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>,1>
             *this)

{
  return (allocator<google::protobuf::FieldOptions_EditionDefault> *)this;
}

// _Get_first @ 14fb68f00

/* public: class std::allocator<class google::protobuf::FieldOptions_EditionDefault> const & __ptr64
   __cdecl std::_Compressed_pair<class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault>,class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault>
   >,1>::_Get_first(void)const __ptr64 */

allocator<google::protobuf::FieldOptions_EditionDefault> * __thiscall
std::
_Compressed_pair<std::allocator<google::protobuf::FieldOptions_EditionDefault>,std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>,1>
::_Get_first(_Compressed_pair<std::allocator<google::protobuf::FieldOptions_EditionDefault>,std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>,1>
             *this)

{
  return (allocator<google::protobuf::FieldOptions_EditionDefault> *)this;
}

// _Getal @ 14fb68f10

/* private: class std::allocator<class google::protobuf::FieldOptions_EditionDefault> & __ptr64
   __cdecl std::vector<class google::protobuf::FieldOptions_EditionDefault,class
   std::allocator<class google::protobuf::FieldOptions_EditionDefault> >::_Getal(void) __ptr64 */

allocator<google::protobuf::FieldOptions_EditionDefault> * __thiscall
std::
vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
::_Getal(vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
         *this)

{
  return (allocator<google::protobuf::FieldOptions_EditionDefault> *)this;
}

// _Getal @ 14fb68f20

/* private: class std::allocator<class google::protobuf::FieldOptions_EditionDefault> const &
   __ptr64 __cdecl std::vector<class google::protobuf::FieldOptions_EditionDefault,class
   std::allocator<class google::protobuf::FieldOptions_EditionDefault> >::_Getal(void)const __ptr64
    */

allocator<google::protobuf::FieldOptions_EditionDefault> * __thiscall
std::
vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
::_Getal(vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
         *this)

{
  return (allocator<google::protobuf::FieldOptions_EditionDefault> *)this;
}

// _Release @ 14fb68f30

/* public: class google::protobuf::FieldOptions_EditionDefault * __ptr64 __cdecl
   std::_Uninitialized_backout_al<class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> >::_Release(void) __ptr64 */

FieldOptions_EditionDefault * __thiscall
std::_Uninitialized_backout_al<std::allocator<google::protobuf::FieldOptions_EditionDefault>_>::
_Release(_Uninitialized_backout_al<std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
         *this)

{
  *(FieldOptions_EditionDefault **)this = *(FieldOptions_EditionDefault **)(this + 8);
  return *(FieldOptions_EditionDefault **)(this + 8);
}

// _Seek_to @ 14fb68f40

/* public: void __cdecl std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault> > >::_Seek_to(class
   google::protobuf::FieldOptions_EditionDefault const * __ptr64) __ptr64 */

void __thiscall
std::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
::_Seek_to(_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
           *this,FieldOptions_EditionDefault *param_1)

{
  *(FieldOptions_EditionDefault **)this = param_1;
  return;
}

// _Tidy @ 14fb68f50

/* private: void __cdecl std::vector<class google::protobuf::FieldOptions_EditionDefault,class
   std::allocator<class google::protobuf::FieldOptions_EditionDefault> >::_Tidy(void) __ptr64 */

void __thiscall
std::
vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
::_Tidy(vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
        *this)

{
  FieldOptions_EditionDefault *pFVar1;
  void *pvVar2;
  ulong64 uVar3;
  FieldOptions_EditionDefault *this_00;
  void *pvVar4;
  
  this_00 = *(FieldOptions_EditionDefault **)this;
  if (this_00 != (FieldOptions_EditionDefault *)0x0) {
    pFVar1 = *(FieldOptions_EditionDefault **)(this + 8);
    for (; this_00 != pFVar1; this_00 = this_00 + 1) {
      google::protobuf::FieldOptions_EditionDefault::~FieldOptions_EditionDefault(this_00);
    }
    pvVar2 = *(void **)this;
    uVar3 = ((*(longlong *)(this + 0x10) - (longlong)pvVar2) / 0x28) * 0x28;
    pvVar4 = pvVar2;
    if (0xfff < uVar3) {
      pvVar4 = *(void **)((longlong)pvVar2 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar4,uVar3);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}

// _Unwrapped @ 14fb69010

/* public: class google::protobuf::FieldOptions_EditionDefault * __ptr64 __cdecl
   std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > >::_Unwrapped(void)const __ptr64 */

FieldOptions_EditionDefault * __thiscall
std::
_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
::_Unwrapped(_Vector_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
             *this)

{
  return *(FieldOptions_EditionDefault **)this;
}

// _Verify_offset @ 14fb69020

/* public: void __cdecl std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<class google::protobuf::FieldOptions_EditionDefault> >
   >::_Verify_offset(__int64)const __ptr64 */

void __thiscall
std::
_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
::_Verify_offset(_Vector_const_iterator<std::_Vector_val<std::_Simple_types<google::protobuf::FieldOptions_EditionDefault>_>_>
                 *this,__int64 param_1)

{
  return;
}

// _Xlength @ 14fb69030

/* private: static void __cdecl std::vector<class
   google::protobuf::FieldOptions_EditionDefault,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> >::_Xlength(void) */

void __cdecl
std::
vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _internal_feature_support @ 14fb69050

/* private: class google::protobuf::FieldOptions_FeatureSupport const & __ptr64 __cdecl
   google::protobuf::EnumValueOptions::_internal_feature_support(void)const __ptr64 */

FieldOptions_FeatureSupport * __thiscall
google::protobuf::EnumValueOptions::_internal_feature_support(EnumValueOptions *this)

{
  FieldOptions_FeatureSupport *pFVar1;
  FieldOptions_FeatureSupport *pFVar2;
  
  pFVar1 = (this->_impl_).feature_support_;
  pFVar2 = (FieldOptions_FeatureSupport *)&_FieldOptions_FeatureSupport_default_instance_;
  if (pFVar1 != (FieldOptions_FeatureSupport *)0x0) {
    pFVar2 = pFVar1;
  }
  return pFVar2;
}

// _internal_feature_support @ 14fb69070

/* private: class google::protobuf::FieldOptions_FeatureSupport const & __ptr64 __cdecl
   google::protobuf::FieldOptions::_internal_feature_support(void)const __ptr64 */

FieldOptions_FeatureSupport * __thiscall
google::protobuf::FieldOptions::_internal_feature_support(FieldOptions *this)

{
  FieldOptions_FeatureSupport *pFVar1;
  FieldOptions_FeatureSupport *pFVar2;
  
  pFVar1 = (this->_impl_).feature_support_;
  pFVar2 = (FieldOptions_FeatureSupport *)&_FieldOptions_FeatureSupport_default_instance_;
  if (pFVar1 != (FieldOptions_FeatureSupport *)0x0) {
    pFVar2 = pFVar1;
  }
  return pFVar2;
}

// _internal_mutable_fixed_features @ 14fb69090

/* private: class google::protobuf::FeatureSet * __ptr64 __cdecl
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault::_internal_mutable_fixed_features(void)
   __ptr64 */

FeatureSet * __thiscall
google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault::_internal_mutable_fixed_features
          (FeatureSetDefaults_FeatureSetEditionDefault *this)

{
  FeatureSet *pFVar1;
  Arena *pAVar2;
  
  pFVar1 = (this->_impl_).fixed_features_;
  if (pFVar1 == (FeatureSet *)0x0) {
    pAVar2 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    pFVar1 = Arena::DefaultConstruct<google::protobuf::FeatureSet>(pAVar2);
    (this->_impl_).fixed_features_ = pFVar1;
  }
  return pFVar1;
}

// _internal_mutable_overridable_features @ 14fb690d0

/* private: class google::protobuf::FeatureSet * __ptr64 __cdecl
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault::_internal_mutable_overridable_features(void)
   __ptr64 */

FeatureSet * __thiscall
google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault::
_internal_mutable_overridable_features(FeatureSetDefaults_FeatureSetEditionDefault *this)

{
  FeatureSet *pFVar1;
  Arena *pAVar2;
  
  pFVar1 = (this->_impl_).overridable_features_;
  if (pFVar1 == (FeatureSet *)0x0) {
    pAVar2 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    pFVar1 = Arena::DefaultConstruct<google::protobuf::FeatureSet>(pAVar2);
    (this->_impl_).overridable_features_ = pFVar1;
  }
  return pFVar1;
}

// _internal_set_edition @ 14fb69110

/* private: void __cdecl
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault::_internal_set_edition(enum
   google::protobuf::Edition) __ptr64 */

void __thiscall
google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault::_internal_set_edition
          (FeatureSetDefaults_FeatureSetEditionDefault *this,Edition param_1)

{
  (this->_impl_).edition_ = param_1;
  return;
}

// _internal_set_edition @ 14fb69120

/* private: void __cdecl google::protobuf::FieldOptions_EditionDefault::_internal_set_edition(enum
   google::protobuf::Edition) __ptr64 */

void __thiscall
google::protobuf::FieldOptions_EditionDefault::_internal_set_edition
          (FieldOptions_EditionDefault *this,Edition param_1)

{
  (this->_impl_).edition_ = param_1;
  return;
}

// _internal_set_maximum_edition @ 14fb69130

/* private: void __cdecl google::protobuf::FeatureSetDefaults::_internal_set_maximum_edition(enum
   google::protobuf::Edition) __ptr64 */

void __thiscall
google::protobuf::FeatureSetDefaults::_internal_set_maximum_edition
          (FeatureSetDefaults *this,Edition param_1)

{
  (this->_impl_).maximum_edition_ = param_1;
  return;
}

// _internal_set_minimum_edition @ 14fb69140

/* private: void __cdecl google::protobuf::FeatureSetDefaults::_internal_set_minimum_edition(enum
   google::protobuf::Edition) __ptr64 */

void __thiscall
google::protobuf::FeatureSetDefaults::_internal_set_minimum_edition
          (FeatureSetDefaults *this,Edition param_1)

{
  (this->_impl_).minimum_edition_ = param_1;
  return;
}

// allocate @ 14fb69150

/* public: class google::protobuf::FieldOptions_EditionDefault * __ptr64 __cdecl
   std::allocator<class google::protobuf::FieldOptions_EditionDefault>::allocate(unsigned __int64)
   __ptr64 */

FieldOptions_EditionDefault * __thiscall
std::allocator<google::protobuf::FieldOptions_EditionDefault>::allocate
          (allocator<google::protobuf::FieldOptions_EditionDefault> *this,__uint64 param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  FieldOptions_EditionDefault *pFVar3;
  
  if (param_1 < 0x666666666666667) {
    uVar1 = param_1 * 0x28;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        pFVar3 = ::operator_new(uVar1);
        return pFVar3;
      }
      return (FieldOptions_EditionDefault *)0x0;
    }
    if (uVar1 < uVar1 + 0x27) {
      pvVar2 = ::operator_new(uVar1 + 0x27);
      if (pvVar2 != (void *)0x0) {
        pFVar3 = (FieldOptions_EditionDefault *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
        *(void **)&pFVar3[-1]._impl_.edition_ = pvVar2;
        return pFVar3;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  _Throw_bad_array_new_length();
}

// allocate @ 14fb691d0

/* private: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::allocate(unsigned __int64) __ptr64 */

btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
* __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::allocate(btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,__uint64 param_1)

{
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar1;
  
  pbVar1 = std::_Allocate<16,std::_Default_allocate_traits,0>(param_1 + 7 & 0xfffffffffffffff8);
  return pbVar1;
}

// begin @ 14fb691f0

/* public: class google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64 __cdecl
   absl::lts_20240722::Span<class google::protobuf::FieldDescriptor const * __ptr64
   const>::begin(void)const __ptr64 */

FieldDescriptor ** __thiscall
absl::lts_20240722::Span<google::protobuf::FieldDescriptor_const*___ptr64_const>::begin
          (Span<google::protobuf::FieldDescriptor_const*___ptr64_const> *this)

{
  return *(FieldDescriptor ***)this;
}

// begin @ 14fb69200

/* public: class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::begin(void) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::begin(btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
        *this)

{
  undefined8 *puVar1;
  undefined8 *in_RDX;
  
  puVar1 = *(undefined8 **)this;
  *(undefined4 *)(in_RDX + 1) = 0;
  *in_RDX = *puVar1;
  return;
}

// begin @ 14fb69220

/* public: class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> __cdecl
   absl::lts_20240722::container_internal::btree_container<class
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > >::begin(void) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
::begin(btree_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
        *this)

{
  undefined8 *puVar1;
  undefined8 *in_RDX;
  
  puVar1 = *(undefined8 **)this;
  *(undefined4 *)(in_RDX + 1) = 0;
  *in_RDX = *puVar1;
  return;
}

// begin @ 14fb69240

/* public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > > __cdecl std::vector<class
   google::protobuf::FieldOptions_EditionDefault,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> >::begin(void) __ptr64 */

void __thiscall
std::
vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
::begin(vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
        *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)this;
  return;
}

// child @ 14fb69250

/* public: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::child(unsigned char)const __ptr64 */

btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
* __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::child(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
        *this,uchar param_1)

{
  return *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
           **)(this + (ulonglong)param_1 * 8 + 0x100);
}

// clear @ 14fb69270

/* public: void __cdecl absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::clear(void) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::clear(btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
        *this)

{
  if (*(longlong *)(this + 0x10) != 0) {
    btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
    ::clear_and_delete(*(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                         **)this,(allocator<google::protobuf::Edition> *)(this + 8));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)(this + 8) =
       &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
        ::__l2::empty_node;
  *(undefined ***)this =
       &`private:_static_class_absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64___cdecl_absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>::EmptyNode(void)'
        ::__l2::empty_node;
  return;
}

// clear_and_delete @ 14fb692c0

/* public: static void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::clear_and_delete(class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,class std::allocator<enum
   google::protobuf::Edition> * __ptr64) */

void __cdecl
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::clear_and_delete(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                   *param_1,allocator<google::protobuf::Edition> *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  if (param_1[0xb] !=
      (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
       )0x0) {
    ::operator_delete(param_1,(ulonglong)(byte)param_1[0xb] * 4 + 0x13 & 0xfffffffffffffff8);
    return;
  }
  if (param_1[10] !=
      (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
       )0x0) {
    lVar1 = *(longlong *)param_1;
    do {
      param_1 = *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                  **)(param_1 + 0x100);
    } while (param_1[0xb] ==
             (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
              )0x0);
    plVar4 = *(longlong **)param_1;
    uVar6 = (ulonglong)(byte)param_1[8];
    do {
      do {
        puVar2 = (undefined8 *)plVar4[(uVar6 & 0xff) + 0x20];
        if (*(char *)((longlong)puVar2 + 0xb) == '\0') {
          do {
            puVar2 = (undefined8 *)puVar2[0x20];
          } while (*(char *)((longlong)puVar2 + 0xb) == '\0');
          uVar6 = (ulonglong)*(byte *)(puVar2 + 1);
          plVar4 = (longlong *)*puVar2;
        }
        bVar3 = *(byte *)((longlong)puVar2 + 0xb);
        if (*(byte *)((longlong)puVar2 + 0xb) == 0) {
          bVar3 = 0x3d;
        }
        ::operator_delete(puVar2,(ulonglong)bVar3 * 4 + 0x13 & 0xfffffffffffffff8);
        uVar6 = uVar6 + 1;
        plVar5 = plVar4;
      } while (uVar6 <= *(byte *)((longlong)plVar4 + 10));
      do {
        bVar3 = *(byte *)(plVar5 + 1);
        plVar4 = (longlong *)*plVar5;
        ::operator_delete(plVar5,0x2f0);
        if (plVar4 == (longlong *)lVar1) {
          return;
        }
        uVar6 = (ulonglong)bVar3 + 1;
        plVar5 = plVar4;
      } while (*(byte *)((longlong)plVar4 + 10) < uVar6);
    } while( true );
  }
  ::operator_delete(param_1,0x2f0);
  return;
}

// clear_child @ 14fb693d0

/* public: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::clear_child(unsigned char) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::clear_child(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              *this,uchar param_1)

{
  return;
}

// comp @ 14fb693e0

/* public: struct std::less<enum google::protobuf::Edition> const & __ptr64 __cdecl
   absl::lts_20240722::container_internal::checked_compare_base<struct std::less<enum
   google::protobuf::Edition>,1>::comp(void)const __ptr64 */

less<google::protobuf::Edition> * __thiscall
absl::lts_20240722::container_internal::checked_compare_base<std::less<google::protobuf::Edition>,1>
::comp(checked_compare_base<std::less<google::protobuf::Edition>,1> *this)

{
  return (less<google::protobuf::Edition> *)this;
}

// count @ 14fb693f0

/* public: unsigned char __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::count(void)const __ptr64 */

uchar __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::count(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
        *this)

{
  return (uchar)this[10];
}

// data @ 14fb69400

/* public: class google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64 __cdecl
   absl::lts_20240722::Span<class google::protobuf::FieldDescriptor const * __ptr64
   const>::data(void)const __ptr64 */

FieldDescriptor ** __thiscall
absl::lts_20240722::Span<google::protobuf::FieldDescriptor_const*___ptr64_const>::data
          (Span<google::protobuf::FieldDescriptor_const*___ptr64_const> *this)

{
  return *(FieldDescriptor ***)this;
}

// deallocate @ 14fb69410

/* public: void __cdecl std::allocator<class
   google::protobuf::FieldOptions_EditionDefault>::deallocate(class
   google::protobuf::FieldOptions_EditionDefault * __ptr64 const,unsigned __int64) __ptr64 */

void __thiscall
std::allocator<google::protobuf::FieldOptions_EditionDefault>::deallocate
          (allocator<google::protobuf::FieldOptions_EditionDefault> *this,
          FieldOptions_EditionDefault *param_1,__uint64 param_2)

{
  FieldOptions_EditionDefault *pFVar1;
  ulong64 uVar2;
  
  uVar2 = param_2 * 0x28;
  pFVar1 = param_1;
  if (0xfff < uVar2) {
    pFVar1 = *(FieldOptions_EditionDefault **)&param_1[-1]._impl_.edition_;
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)pFVar1))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pFVar1,uVar2);
  return;
}

// deallocate @ 14fb69460

/* public: static void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::deallocate(unsigned __int64,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,class std::allocator<enum
   google::protobuf::Edition> * __ptr64) */

void __cdecl
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::deallocate(__uint64 param_1,
            btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
            *param_2,allocator<google::protobuf::Edition> *param_3)

{
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar1;
  ulong64 uVar2;
  
  uVar2 = param_1 + 7 & 0xfffffffffffffff8;
  pbVar1 = param_2;
  if (0xfff < uVar2) {
    pbVar1 = *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
               **)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if ((btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
         *)0x1f < param_2 + (-8 - (longlong)pbVar1)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(pbVar1,uVar2);
  return;
}

// decrement @ 14fb694b0

/* private: void __cdecl absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>::decrement(void) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
::decrement(btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
            *this)

{
  btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
  *pbVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)this;
  pbVar1 = this + 8;
  if (*(char *)((longlong)plVar7 + 0xb) != '\0') {
    *(int *)pbVar1 = *(int *)pbVar1 + -1;
    if (-1 < *(int *)pbVar1) {
      return;
    }
    if (*(char *)((longlong)plVar7 + 0xb) != '\0') {
      uVar5 = *(undefined8 *)this;
      uVar6 = *(undefined8 *)(this + 8);
      if (-1 < *(int *)pbVar1) {
        return;
      }
      do {
        if (*(char *)(*plVar7 + 0xb) != '\0') {
          *(undefined8 *)this = uVar5;
          *(undefined8 *)(this + 8) = uVar6;
          return;
        }
        bVar2 = *(byte *)(plVar7 + 1);
        *(uint *)pbVar1 = bVar2 - 1;
        plVar7 = (longlong *)*plVar7;
        *(longlong **)this = plVar7;
      } while ((int)(bVar2 - 1) < 0);
      return;
    }
  }
  lVar4 = plVar7[(ulonglong)(byte)*pbVar1 + 0x20];
  *(longlong *)this = lVar4;
  cVar3 = *(char *)(lVar4 + 0xb);
  while (cVar3 == '\0') {
    lVar4 = *(longlong *)(lVar4 + 0x100 + (ulonglong)*(byte *)(lVar4 + 10) * 8);
    *(longlong *)this = lVar4;
    cVar3 = *(char *)(lVar4 + 0xb);
  }
  *(uint *)(this + 8) = *(byte *)(lVar4 + 10) - 1;
  return;
}

// decrement_slow @ 14fb69540

/* private: void __cdecl absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>::decrement_slow(void) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
::decrement_slow(btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
                 *this)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)this;
  if (*(char *)((longlong)plVar6 + 0xb) == '\0') {
    lVar2 = plVar6[(ulonglong)(byte)this[8] + 0x20];
    *(longlong *)this = lVar2;
    cVar1 = *(char *)(lVar2 + 0xb);
    while (cVar1 == '\0') {
      lVar2 = *(longlong *)(lVar2 + 0x100 + (ulonglong)*(byte *)(lVar2 + 10) * 8);
      *(longlong *)this = lVar2;
      cVar1 = *(char *)(lVar2 + 0xb);
    }
    *(uint *)(this + 8) = *(byte *)(lVar2 + 10) - 1;
  }
  else {
    uVar3 = *(undefined8 *)this;
    uVar4 = *(undefined8 *)(this + 8);
    if (*(int *)(this + 8) < 0) {
      do {
        if (*(char *)(*plVar6 + 0xb) != '\0') goto LAB_14fb69575;
        iVar5 = *(byte *)(plVar6 + 1) - 1;
        *(int *)(this + 8) = iVar5;
        plVar6 = (longlong *)*plVar6;
        *(longlong **)this = plVar6;
      } while (iVar5 < 0);
      if (iVar5 < 0) {
LAB_14fb69575:
        *(undefined8 *)this = uVar3;
        *(undefined8 *)(this + 8) = uVar4;
        return;
      }
    }
  }
  return;
}

// default_instance @ 14fb695c0

/* public: static class google::protobuf::FieldOptions_FeatureSupport const & __ptr64 __cdecl
   google::protobuf::FieldOptions_FeatureSupport::default_instance(void) */

FieldOptions_FeatureSupport * __cdecl
google::protobuf::FieldOptions_FeatureSupport::default_instance(void)

{
  return (FieldOptions_FeatureSupport *)&_FieldOptions_FeatureSupport_default_instance_;
}

// deprecation_warning @ 14fb695d0

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64 __cdecl
   google::protobuf::FieldOptions_FeatureSupport::deprecation_warning(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::FieldOptions_FeatureSupport::deprecation_warning
          (FieldOptions_FeatureSupport *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
         ((ulonglong)(this->_impl_).deprecation_warning_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
}

// edition @ 14fb695e0

/* public: enum google::protobuf::Edition __cdecl
   google::protobuf::FieldOptions_EditionDefault::edition(void)const __ptr64 */

Edition __thiscall
google::protobuf::FieldOptions_EditionDefault::edition(FieldOptions_EditionDefault *this)

{
  return (this->_impl_).edition_;
}

// edition_defaults @ 14fb695f0

/* public: class google::protobuf::RepeatedPtrField<class
   google::protobuf::FieldOptions_EditionDefault> const & __ptr64 __cdecl
   google::protobuf::FieldOptions::edition_defaults(void)const __ptr64 */

RepeatedPtrField<google::protobuf::FieldOptions_EditionDefault> * __thiscall
google::protobuf::FieldOptions::edition_defaults(FieldOptions *this)

{
  return &(this->_impl_).edition_defaults_;
}

// edition_deprecated @ 14fb69600

/* public: enum google::protobuf::Edition __cdecl
   google::protobuf::FieldOptions_FeatureSupport::edition_deprecated(void)const __ptr64 */

Edition __thiscall
google::protobuf::FieldOptions_FeatureSupport::edition_deprecated(FieldOptions_FeatureSupport *this)

{
  return (this->_impl_).edition_deprecated_;
}

// edition_introduced @ 14fb69610

/* public: enum google::protobuf::Edition __cdecl
   google::protobuf::FieldOptions_FeatureSupport::edition_introduced(void)const __ptr64 */

Edition __thiscall
google::protobuf::FieldOptions_FeatureSupport::edition_introduced(FieldOptions_FeatureSupport *this)

{
  return (this->_impl_).edition_introduced_;
}

// edition_removed @ 14fb69620

/* public: enum google::protobuf::Edition __cdecl
   google::protobuf::FieldOptions_FeatureSupport::edition_removed(void)const __ptr64 */

Edition __thiscall
google::protobuf::FieldOptions_FeatureSupport::edition_removed(FieldOptions_FeatureSupport *this)

{
  return (this->_impl_).edition_removed_;
}

// element @ 14fb69630

/* public: static enum google::protobuf::Edition & __ptr64 __cdecl
   absl::lts_20240722::container_internal::set_slot_policy<enum
   google::protobuf::Edition>::element(enum google::protobuf::Edition * __ptr64) */

Edition * __cdecl
absl::lts_20240722::container_internal::set_slot_policy<google::protobuf::Edition>::element
          (Edition *param_1)

{
  return param_1;
}

// empty @ 14fb69640

/* public: bool __cdecl absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::empty(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::empty(btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
        *this)

{
  return *(longlong *)(this + 0x10) == 0;
}

// empty @ 14fb69650

/* public: bool __cdecl absl::lts_20240722::container_internal::btree_container<class
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > >::empty(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::container_internal::
btree_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
::empty(btree_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
        *this)

{
  return *(longlong *)(this + 0x10) == 0;
}

// end @ 14fb69660

/* public: class google::protobuf::FieldDescriptor const * __ptr64 const * __ptr64 __cdecl
   absl::lts_20240722::Span<class google::protobuf::FieldDescriptor const * __ptr64
   const>::end(void)const __ptr64 */

FieldDescriptor ** __thiscall
absl::lts_20240722::Span<google::protobuf::FieldDescriptor_const*___ptr64_const>::end
          (Span<google::protobuf::FieldDescriptor_const*___ptr64_const> *this)

{
  return (FieldDescriptor **)(*(longlong *)this + *(longlong *)(this + 8) * 8);
}

// end @ 14fb69680

/* public: class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::end(void) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::end(btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
      *this)

{
  longlong lVar1;
  longlong *in_RDX;
  
  lVar1 = *(longlong *)(this + 8);
  *in_RDX = lVar1;
  *(uint *)(in_RDX + 1) = (uint)*(byte *)(lVar1 + 10);
  return;
}

// end @ 14fb696a0

/* public: class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> __cdecl
   absl::lts_20240722::container_internal::btree_container<class
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > >::end(void) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
::end(btree_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
      *this)

{
  longlong lVar1;
  longlong *in_RDX;
  
  lVar1 = *(longlong *)(this + 8);
  *in_RDX = lVar1;
  *(uint *)(in_RDX + 1) = (uint)*(byte *)(lVar1 + 10);
  return;
}

// end @ 14fb696c0

/* public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class
   google::protobuf::FieldOptions_EditionDefault> > > __cdecl std::vector<class
   google::protobuf::FieldOptions_EditionDefault,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> >::end(void) __ptr64 */

void __thiscall
std::
vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
::end(vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
      *this)

{
  undefined8 *in_RDX;
  
  *in_RDX = *(undefined8 *)(this + 8);
  return;
}

// enforce_naming_style @ 14fb696e0

/* public: enum google::protobuf::FeatureSet_EnforceNamingStyle __cdecl
   google::protobuf::FeatureSet::enforce_naming_style(void)const __ptr64 */

FeatureSet_EnforceNamingStyle __thiscall
google::protobuf::FeatureSet::enforce_naming_style(FeatureSet *this)

{
  return (this->_impl_).enforce_naming_style_;
}

// feature_support @ 14fb696f0

/* public: class google::protobuf::FieldOptions_FeatureSupport const & __ptr64 __cdecl
   google::protobuf::EnumValueOptions::feature_support(void)const __ptr64 */

FieldOptions_FeatureSupport * __thiscall
google::protobuf::EnumValueOptions::feature_support(EnumValueOptions *this)

{
  FieldOptions_FeatureSupport *pFVar1;
  FieldOptions_FeatureSupport *pFVar2;
  
  pFVar1 = (this->_impl_).feature_support_;
  pFVar2 = (FieldOptions_FeatureSupport *)&_FieldOptions_FeatureSupport_default_instance_;
  if (pFVar1 != (FieldOptions_FeatureSupport *)0x0) {
    pFVar2 = pFVar1;
  }
  return pFVar2;
}

// feature_support @ 14fb69710

/* public: class google::protobuf::FieldOptions_FeatureSupport const & __ptr64 __cdecl
   google::protobuf::FieldOptions::feature_support(void)const __ptr64 */

FieldOptions_FeatureSupport * __thiscall
google::protobuf::FieldOptions::feature_support(FieldOptions *this)

{
  FieldOptions_FeatureSupport *pFVar1;
  FieldOptions_FeatureSupport *pFVar2;
  
  pFVar1 = (this->_impl_).feature_support_;
  pFVar2 = (FieldOptions_FeatureSupport *)&_FieldOptions_FeatureSupport_default_instance_;
  if (pFVar1 != (FieldOptions_FeatureSupport *)0x0) {
    pFVar2 = pFVar1;
  }
  return pFVar2;
}

// finish @ 14fb69730

/* public: unsigned char __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::finish(void)const __ptr64 */

uchar __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::finish(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
         *this)

{
  return (uchar)this[10];
}

// finish_slot @ 14fb69740

/* private: enum google::protobuf::Edition * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::finish_slot(void) __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::finish_slot(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              *this)

{
  return (Edition *)(this + ((ulonglong)(byte)this[10] + 3) * 4);
}

// generation @ 14fb69760

/* public: unsigned int __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::generation(void)const __ptr64 */

uint __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::generation(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
             *this)

{
  return 0;
}

// get @ 14fb69770

/* public: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 & __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,2,0>::get(void) __ptr64&  */

btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
** __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,2,0>
::get(Storage<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>*___ptr64,2,0>
      *this)

{
  return (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          **)this;
}

// get @ 14fb69780

/* public: struct absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare const & __ptr64
   __cdecl absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<struct
   absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare,0,1>::get(void)const
   __ptr64&  */

checked_compare * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,0,1>
::get(Storage<absl::lts_20240722::container_internal::key_compare_adapter<std::less<google::protobuf::Edition>,google::protobuf::Edition>::checked_compare,0,1>
      *this)

{
  return (checked_compare *)this;
}

// get @ 14fb69790

/* public: class std::allocator<enum google::protobuf::Edition> & __ptr64 __cdecl
   absl::lts_20240722::container_internal::internal_compressed_tuple::Storage<class
   std::allocator<enum google::protobuf::Edition>,1,1>::get(void) __ptr64&  */

allocator<google::protobuf::Edition> * __thiscall
absl::lts_20240722::container_internal::internal_compressed_tuple::
Storage<std::allocator<google::protobuf::Edition>,1,1>::get
          (Storage<std::allocator<google::protobuf::Edition>,1,1> *this)

{
  return (allocator<google::protobuf::Edition> *)this;
}

// get_root_generation @ 14fb697a0

/* public: unsigned int * __ptr64 __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::get_root_generation(void)const __ptr64 */

uint * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::get_root_generation
          (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this)

{
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  bVar1;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar2;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar3;
  
  bVar1 = (*(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
             **)this)[0xb];
  pbVar2 = *(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
             **)this;
  while (pbVar3 = pbVar2,
        bVar1 == (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                  )0x0) {
    pbVar2 = *(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
               **)pbVar3;
    bVar1 = pbVar2[0xb];
    this = pbVar3;
  }
  return (uint *)(this + 8);
}

// has_deprecation_warning @ 14fb697d0

/* public: bool __cdecl
   google::protobuf::FieldOptions_FeatureSupport::has_deprecation_warning(void)const __ptr64 */

bool __thiscall
google::protobuf::FieldOptions_FeatureSupport::has_deprecation_warning
          (FieldOptions_FeatureSupport *this)

{
  return (bool)((byte)(this->_impl_)._has_bits_.has_bits_[0] & 1);
}

// has_edition_deprecated @ 14fb697e0

/* public: bool __cdecl
   google::protobuf::FieldOptions_FeatureSupport::has_edition_deprecated(void)const __ptr64 */

bool __thiscall
google::protobuf::FieldOptions_FeatureSupport::has_edition_deprecated
          (FieldOptions_FeatureSupport *this)

{
  return (bool)((byte)((this->_impl_)._has_bits_.has_bits_[0] >> 2) & 1);
}

// has_edition_introduced @ 14fb697f0

/* public: bool __cdecl
   google::protobuf::FieldOptions_FeatureSupport::has_edition_introduced(void)const __ptr64 */

bool __thiscall
google::protobuf::FieldOptions_FeatureSupport::has_edition_introduced
          (FieldOptions_FeatureSupport *this)

{
  return (bool)((byte)((this->_impl_)._has_bits_.has_bits_[0] >> 1) & 1);
}

// has_edition_removed @ 14fb69800

/* public: bool __cdecl
   google::protobuf::FieldOptions_FeatureSupport::has_edition_removed(void)const __ptr64 */

bool __thiscall
google::protobuf::FieldOptions_FeatureSupport::has_edition_removed
          (FieldOptions_FeatureSupport *this)

{
  return (bool)((byte)((this->_impl_)._has_bits_.has_bits_[0] >> 3) & 1);
}

// has_feature_support @ 14fb69810

/* public: bool __cdecl google::protobuf::EnumValueOptions::has_feature_support(void)const __ptr64
    */

bool __thiscall google::protobuf::EnumValueOptions::has_feature_support(EnumValueOptions *this)

{
  return (bool)((byte)((this->_impl_)._has_bits_.has_bits_[0] >> 1) & 1);
}

// has_feature_support @ 14fb69820

/* public: bool __cdecl google::protobuf::FieldOptions::has_feature_support(void)const __ptr64 */

bool __thiscall google::protobuf::FieldOptions::has_feature_support(FieldOptions *this)

{
  return (bool)((byte)((this->_impl_)._has_bits_.has_bits_[0] >> 1) & 1);
}

// increment @ 14fb69830

/* private: void __cdecl absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>::increment(void) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
::increment(btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
            *this)

{
  btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
  *pbVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)this;
  pbVar1 = this + 8;
  if (*(char *)((longlong)plVar7 + 0xb) != '\0') {
    uVar6 = *(uint *)pbVar1 + 1;
    *(uint *)pbVar1 = uVar6;
    if ((int)uVar6 < (int)(uint)*(byte *)((longlong)plVar7 + 10)) {
      return;
    }
    if (*(char *)((longlong)plVar7 + 0xb) != '\0') {
      uVar4 = *(undefined8 *)this;
      uVar5 = *(undefined8 *)(this + 8);
      if (uVar6 == *(byte *)((longlong)plVar7 + 10)) {
        do {
          if (*(char *)(*plVar7 + 0xb) != '\0') break;
          uVar6 = (uint)*(byte *)(plVar7 + 1);
          *(uint *)pbVar1 = uVar6;
          plVar7 = (longlong *)*plVar7;
          *(longlong **)this = plVar7;
        } while (uVar6 == *(byte *)((longlong)plVar7 + 10));
      }
      if (uVar6 != *(byte *)((longlong)plVar7 + 10)) {
        return;
      }
      *(undefined8 *)this = uVar4;
      *(undefined8 *)(this + 8) = uVar5;
      return;
    }
  }
  lVar3 = plVar7[(ulonglong)(byte)((char)*pbVar1 + 1) + 0x20];
  *(longlong *)this = lVar3;
  cVar2 = *(char *)(lVar3 + 0xb);
  while (cVar2 == '\0') {
    lVar3 = *(longlong *)(lVar3 + 0x100);
    *(longlong *)this = lVar3;
    cVar2 = *(char *)(lVar3 + 0xb);
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}

// increment_slow @ 14fb698f0

/* private: void __cdecl absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>::increment_slow(void) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
::increment_slow(btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
                 *this)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  
  plVar5 = *(longlong **)this;
  if (*(char *)((longlong)plVar5 + 0xb) == '\0') {
    lVar2 = plVar5[(ulonglong)(byte)((char)this[8] + 1) + 0x20];
    *(longlong *)this = lVar2;
    cVar1 = *(char *)(lVar2 + 0xb);
    while (cVar1 == '\0') {
      lVar2 = *(longlong *)(lVar2 + 0x100);
      *(longlong *)this = lVar2;
      cVar1 = *(char *)(lVar2 + 0xb);
    }
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    uVar6 = *(uint *)(this + 8);
    uVar3 = *(undefined8 *)this;
    uVar4 = *(undefined8 *)(this + 8);
    if (uVar6 == *(byte *)((longlong)plVar5 + 10)) {
      do {
        if (*(char *)(*plVar5 + 0xb) != '\0') break;
        uVar6 = (uint)*(byte *)(plVar5 + 1);
        *(uint *)(this + 8) = uVar6;
        plVar5 = (longlong *)*plVar5;
        *(longlong **)this = plVar5;
      } while (uVar6 == *(byte *)((longlong)plVar5 + 10));
    }
    if (uVar6 == *(byte *)((longlong)plVar5 + 10)) {
      *(undefined8 *)this = uVar3;
      *(undefined8 *)(this + 8) = uVar4;
      return;
    }
  }
  return;
}

// init_child @ 14fb69990

/* public: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::init_child(unsigned char,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::init_child(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
             *this,uchar param_1,
            btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
            *param_2)

{
  *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
    **)(this + (ulonglong)param_1 * 8 + 0x100) = param_2;
  param_2[8] = (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                )param_1;
  *(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
    **)param_2 = this;
  return;
}

// init_internal @ 14fb699b0

/* public: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::init_internal(unsigned char,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::init_internal(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                *this,uchar param_1,
               btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
               *param_2)

{
  *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
    **)this = param_2;
  this[8] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
             )param_1;
  *(undefined2 *)(this + 9) = 0;
  this[0xb] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
               )0x0;
  return;
}

// init_leaf @ 14fb699d0

/* public: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::init_leaf(unsigned char,unsigned char,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::init_leaf(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
            *this,uchar param_1,uchar param_2,
           btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
           *param_3)

{
  *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
    **)this = param_3;
  this[8] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
             )param_1;
  *(undefined2 *)(this + 9) = 0;
  this[0xb] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
               )param_2;
  return;
}

// insert @ 14fb699f0

/* public: struct std::pair<class absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>,bool> __cdecl
   absl::lts_20240722::container_internal::btree_set_container<class
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > >::insert(enum google::protobuf::Edition const & __ptr64)
   __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::
btree_set_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
::insert(btree_set_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>_>
         *this,Edition *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int *in_R8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  if (*(longlong *)(this + 0x10) == 0) {
    pvVar5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10);
    *(void **)pvVar5 = pvVar5;
    *(undefined4 *)((longlong)pvVar5 + 8) = 0x1000000;
    *(void **)(this + 8) = pvVar5;
    *(void **)this = pvVar5;
  }
  local_28 = *(longlong **)this;
  while( true ) {
    uVar10 = (ulonglong)*(byte *)((longlong)local_28 + 10);
    uVar6 = 0;
    if (uVar10 != 0) {
      do {
        uVar9 = uVar6 + uVar10 >> 1;
        uVar3 = uVar9 + 1;
        if (*in_R8 <= *(int *)((longlong)local_28 + uVar9 * 4 + 0xc)) {
          uVar10 = uVar9;
          uVar3 = uVar6;
        }
        uVar6 = uVar3;
      } while (uVar6 != uVar10);
    }
    uVar4 = (uint)uVar6;
    uStack_20 = CONCAT44(uStack_20._4_4_,uVar4);
    uVar2 = uStack_20;
    if (*(char *)((longlong)local_28 + 0xb) != '\0') break;
    local_28 = (longlong *)local_28[(uVar6 & 0xff) + 0x20];
  }
  plVar8 = local_28;
  if (uVar4 == *(byte *)((longlong)local_28 + 10)) {
    do {
      bVar1 = *(byte *)(plVar8 + 1);
      uVar4 = (uint)bVar1;
      plVar8 = (longlong *)*plVar8;
      uStack_20 = CONCAT44(uStack_20._4_4_,(uint)bVar1);
      if (*(char *)((longlong)plVar8 + 0xb) != '\0') {
        uVar4 = (uint)bVar1;
        plVar8 = (longlong *)0x0;
        break;
      }
    } while (bVar1 == *(byte *)((longlong)plVar8 + 10));
  }
  if ((plVar8 == (longlong *)0x0) ||
     (*in_R8 < *(int *)((longlong)plVar8 + (longlong)(int)uVar4 * 4 + 0xc))) {
    uStack_20 = uVar2;
    puVar7 = (undefined8 *)
             btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
             ::internal_emplace<google::protobuf::Edition_const&___ptr64>
                       ((btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                         *)this,local_18,&local_28);
    uVar2 = puVar7[1];
    *(undefined8 *)param_1 = *puVar7;
    *(undefined8 *)(param_1 + 2) = uVar2;
    *(undefined1 *)(param_1 + 4) = EDITION_1_TEST_ONLY;
  }
  else {
    *(longlong **)param_1 = plVar8;
    *(undefined8 *)(param_1 + 2) = uStack_20;
    *(undefined1 *)(param_1 + 4) = EDITION_UNKNOWN;
  }
  return param_1;
}

// is_internal @ 14fb69b50

/* public: bool __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::is_internal(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::is_internal(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              *this)

{
  return this[0xb] ==
         (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          )0x0;
}

// is_leaf @ 14fb69b60

/* public: bool __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::is_leaf(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::is_leaf(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          *this)

{
  return this[0xb] !=
         (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          )0x0;
}

// is_root @ 14fb69b70

/* public: bool __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::is_root(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::is_root(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          *this)

{
  return *(char *)(*(longlong *)this + 0xb) != '\0';
}

// key @ 14fb69b90

/* private: enum google::protobuf::Edition const & __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>::key(void)const __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::
btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
::key(btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
      *this)

{
  return (Edition *)(*(longlong *)this + (longlong)*(int *)(this + 8) * 4 + 0xc);
}

// key @ 14fb69bb0

/* public: enum google::protobuf::Edition const & __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::key(unsigned __int64)const __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::key(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
      *this,__uint64 param_1)

{
  return (Edition *)(this + (param_1 + 3) * 4);
}

// key @ 14fb69bc0

/* public: static enum google::protobuf::Edition const & __ptr64 __cdecl
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0>::key(enum google::protobuf::Edition const * __ptr64) */

Edition * __cdecl
absl::lts_20240722::container_internal::
set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>
::key(Edition *param_1)

{
  return param_1;
}

// key_comp @ 14fb69bd0

/* public: struct absl::lts_20240722::container_internal::key_compare_adapter<struct std::less<enum
   google::protobuf::Edition>,enum google::protobuf::Edition>::checked_compare const & __ptr64
   __cdecl absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::key_comp(void)const __ptr64 */

checked_compare * __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::key_comp(btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this)

{
  return (checked_compare *)(this + 8);
}

// leftmost @ 14fb69be0

/* private: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::leftmost(void) __ptr64 */

btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
* __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::leftmost(btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this)

{
  return (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          *)**(undefined8 **)this;
}

// max_count @ 14fb69bf0

/* public: unsigned char __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::max_count(void)const __ptr64 */

uchar __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::max_count(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
            *this)

{
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  bVar1;
  
  bVar1 = this[0xb];
  if (this[0xb] ==
      (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
       )0x0) {
    bVar1 = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
             )0x3d;
  }
  return (uchar)bVar1;
}

// max_size @ 14fb69c10

/* public: static unsigned __int64 __cdecl std::_Default_allocator_traits<class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> >::max_size(class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> const & __ptr64) */

__uint64 __cdecl
std::_Default_allocator_traits<std::allocator<google::protobuf::FieldOptions_EditionDefault>_>::
max_size(allocator<google::protobuf::FieldOptions_EditionDefault> *param_1)

{
  return 0x666666666666666;
}

// max_size @ 14fb69c30

/* public: unsigned __int64 __cdecl std::vector<class
   google::protobuf::FieldOptions_EditionDefault,class std::allocator<class
   google::protobuf::FieldOptions_EditionDefault> >::max_size(void)const __ptr64 */

__uint64 __thiscall
std::
vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
::max_size(vector<google::protobuf::FieldOptions_EditionDefault,std::allocator<google::protobuf::FieldOptions_EditionDefault>_>
           *this)

{
  return 0x666666666666666;
}

// mutable_allocator @ 14fb69c50

/* private: class std::allocator<enum google::protobuf::Edition> * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::mutable_allocator(void) __ptr64 */

allocator<google::protobuf::Edition> * __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::mutable_allocator(btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                    *this)

{
  return (allocator<google::protobuf::Edition> *)(this + 8);
}

// mutable_child @ 14fb69c60

/* public: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 & __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::mutable_child(unsigned char) __ptr64 */

btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
** __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::mutable_child(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                *this,uchar param_1)

{
  return (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
          **)(this + ((ulonglong)param_1 + 0x20) * 8);
}

// mutable_defaults @ 14fb69c80

/* public: class google::protobuf::RepeatedPtrField<class
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> * __ptr64 __cdecl
   google::protobuf::FeatureSetDefaults::mutable_defaults(void) __ptr64 */

RepeatedPtrField<google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault> * __thiscall
google::protobuf::FeatureSetDefaults::mutable_defaults(FeatureSetDefaults *this)

{
  return &(this->_impl_).defaults_;
}

// mutable_finish @ 14fb69c90

/* private: unsigned char & __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::mutable_finish(void) __ptr64 */

uchar * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::mutable_finish(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                 *this)

{
  return (uchar *)(this + 10);
}

// mutable_fixed_features @ 14fb69ca0

/* public: class google::protobuf::FeatureSet * __ptr64 __cdecl
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault::mutable_fixed_features(void)
   __ptr64 */

FeatureSet * __thiscall
google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault::mutable_fixed_features
          (FeatureSetDefaults_FeatureSetEditionDefault *this)

{
  FeatureSet *pFVar1;
  Arena *pAVar2;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 2;
  pFVar1 = (this->_impl_).fixed_features_;
  if (pFVar1 == (FeatureSet *)0x0) {
    pAVar2 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    pFVar1 = Arena::DefaultConstruct<google::protobuf::FeatureSet>(pAVar2);
    (this->_impl_).fixed_features_ = pFVar1;
  }
  return pFVar1;
}

// mutable_overridable_features @ 14fb69ce0

/* public: class google::protobuf::FeatureSet * __ptr64 __cdecl
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault::mutable_overridable_features(void)
   __ptr64 */

FeatureSet * __thiscall
google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault::mutable_overridable_features
          (FeatureSetDefaults_FeatureSetEditionDefault *this)

{
  FeatureSet *pFVar1;
  Arena *pAVar2;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  pFVar1 = (this->_impl_).overridable_features_;
  if (pFVar1 == (FeatureSet *)0x0) {
    pAVar2 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    pFVar1 = Arena::DefaultConstruct<google::protobuf::FeatureSet>(pAVar2);
    (this->_impl_).overridable_features_ = pFVar1;
  }
  return pFVar1;
}

// mutable_rightmost @ 14fb69d20

/* private: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 & __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::mutable_rightmost(void) __ptr64 */

btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
** __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::mutable_rightmost(btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                    *this)

{
  return (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          **)(this + 8);
}

// mutable_root @ 14fb69d30

/* private: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 & __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::mutable_root(void) __ptr64 */

btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
** __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::mutable_root(btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
               *this)

{
  return (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          **)this;
}

// new_internal_node @ 14fb69d40

/* private: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::new_internal_node(unsigned char,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64) __ptr64 */

btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
* __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::new_internal_node(btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                    *this,uchar param_1,
                   btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                   *param_2)

{
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar1;
  
  pbVar1 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x2f0);
  *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
    **)pbVar1 = param_2;
  pbVar1[8] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
               )param_1;
  *(undefined2 *)(pbVar1 + 9) = 0;
  pbVar1[0xb] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                 )0x0;
  return pbVar1;
}

// new_leaf_node @ 14fb69d80

/* private: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::new_leaf_node(unsigned char,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64) __ptr64 */

btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
* __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::new_leaf_node(btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                *this,uchar param_1,
               btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
               *param_2)

{
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar1;
  
  pbVar1 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x100);
  *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
    **)pbVar1 = param_2;
  pbVar1[8] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
               )param_1;
  *(undefined2 *)(pbVar1 + 9) = 0;
  pbVar1[0xb] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                 )0x3d;
  return pbVar1;
}

// new_leaf_root_node @ 14fb69dc0

/* private: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::new_leaf_root_node(unsigned char) __ptr64 */

btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
* __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::new_leaf_root_node
          (btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,uchar param_1)

{
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar1;
  
  pbVar1 = std::_Allocate<16,std::_Default_allocate_traits,0>
                     ((ulonglong)param_1 * 4 + 0x13 & 0xfffffffffffffff8);
  *(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
    **)pbVar1 = pbVar1;
  *(undefined2 *)(pbVar1 + 8) = 0;
  pbVar1[10] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                )0x0;
  pbVar1[0xb] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                 )param_1;
  return pbVar1;
}

// next_generation @ 14fb69e00

/* public: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::next_generation(void) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::next_generation(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                  *this)

{
  return;
}

// ok @ 14fb69e10

/* public: bool __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::FeatureSetDefaults>::ok(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::FeatureSetDefaults>::ok
          (StatusOrData<google::protobuf::FeatureSetDefaults> *this)

{
  return *(longlong *)this == 1;
}

// parent @ 14fb69e20

/* public: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::parent(void)const __ptr64 */

btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
* __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::parent(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
         *this)

{
  return *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
           **)this;
}

// position @ 14fb69e30

/* public: unsigned char __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::position(void)const __ptr64 */

uchar __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::position(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this)

{
  return (uchar)this[8];
}

// rebalance_left_to_right @ 14fb69e40

/* public: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::rebalance_left_to_right(unsigned char,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,class std::allocator<enum
   google::protobuf::Edition> * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::rebalance_left_to_right
          (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,uchar param_1,
          btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
          *param_2,allocator<google::protobuf::Edition> *param_3)

{
  longlong lVar1;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar2;
  undefined8 *puVar3;
  char cVar4;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar5;
  byte bVar6;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar7;
  byte bVar9;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar10;
  ulonglong uVar8;
  ulonglong uVar11;
  
  pbVar10 = param_2 + (ulonglong)(byte)param_2[10] * 4 + 0xc;
  pbVar7 = pbVar10 + (ulonglong)(byte)param_2[10] * -4;
  for (; pbVar10 != pbVar7; pbVar10 = pbVar10 + -4) {
    *(undefined4 *)(pbVar10 + (ulonglong)param_1 * 4 + -4) = *(undefined4 *)(pbVar10 + -4);
  }
  lVar1 = (ulonglong)param_1 - 1;
  *(undefined4 *)(param_2 + lVar1 * 4 + 0xc) =
       *(undefined4 *)(*(longlong *)this + 0xc + (ulonglong)(byte)this[8] * 4);
  pbVar5 = this + (((ulonglong)(byte)this[10] - (ulonglong)param_1) + 4) * 4;
  pbVar2 = pbVar5 + lVar1 * 4;
  pbVar10 = param_2 + 0xc;
  for (; pbVar5 != pbVar2; pbVar5 = pbVar5 + 4) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar5;
    pbVar10 = pbVar10 + 4;
  }
  *(undefined4 *)(*(longlong *)this + (ulonglong)(byte)this[8] * 4 + 0xc) =
       *(undefined4 *)(this + ((ulonglong)(byte)this[10] - (ulonglong)param_1) * 4 + 0xc);
  if (this[0xb] ==
      (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
       )0x0) {
    bVar6 = (char)param_2[10] + 1;
    uVar8 = (ulonglong)bVar6;
    if (bVar6 != 0) {
      uVar11 = (ulonglong)((uint)param_1 + (uint)bVar6);
      do {
        bVar9 = (char)uVar11 - 1;
        uVar11 = (ulonglong)bVar9;
        bVar6 = (char)uVar8 - 1;
        uVar8 = (ulonglong)bVar6;
        puVar3 = *(undefined8 **)(param_2 + uVar8 * 8 + 0x100);
        *(undefined8 **)(param_2 + uVar11 * 8 + 0x100) = puVar3;
        *(byte *)(puVar3 + 1) = bVar9;
        *puVar3 = param_2;
      } while (bVar6 != 0);
    }
    bVar6 = 1;
    if (param_1 != '\0') {
      do {
        bVar9 = bVar6 - 1;
        cVar4 = bVar6 - param_1;
        bVar6 = bVar6 + 1;
        puVar3 = *(undefined8 **)(this + (ulonglong)(byte)(cVar4 + (char)this[10]) * 8 + 0x100);
        *(undefined8 **)(param_2 + (ulonglong)bVar9 * 8 + 0x100) = puVar3;
        *(byte *)(puVar3 + 1) = bVar9;
        *puVar3 = param_2;
      } while (bVar6 <= param_1);
    }
  }
  this[10] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              )((char)this[10] - param_1);
  param_2[10] = (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                 )((char)param_2[10] + param_1);
  return;
}

// rebalance_or_split @ 14fb69fc0

/* private: void __cdecl absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::rebalance_or_split(class
   absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64> * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::rebalance_or_split
          (btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
                 *param_1)

{
  allocator<google::protobuf::Edition> *paVar1;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  bVar2;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  bVar3;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *this_00;
  longlong *plVar4;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *this_01;
  undefined8 *puVar5;
  byte bVar6;
  longlong *plVar7;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar8;
  byte bVar9;
  int iVar10;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  bVar11;
  uint uVar12;
  uint uVar13;
  longlong *local_38;
  uint local_30;
  
  this_00 = *(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              **)param_1;
  plVar4 = *(longlong **)this_00;
  if (this_00 ==
      *(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
        **)this) {
    plVar7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x2f0);
    *plVar7 = (longlong)plVar4;
    *(undefined4 *)(plVar7 + 1) = 0;
    puVar5 = *(undefined8 **)param_1;
    plVar7[0x20] = (longlong)puVar5;
    *(undefined1 *)(puVar5 + 1) = 0;
    *puVar5 = plVar7;
    *(longlong **)this = plVar7;
  }
  else {
    bVar2 = this_00[8];
    if (bVar2 != (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                  )0x0) {
      this_01 = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                 *)plVar4[(ulonglong)((byte)bVar2 - 1 & 0xff) + 0x20];
      bVar3 = this_01[10];
      if ((byte)bVar3 < 0x3d) {
        bVar9 = (byte)(0x3d - (byte)bVar3 >> ((byte)param_1[8] < 0x3d));
        bVar6 = 1;
        if (1 < bVar9) {
          bVar6 = bVar9;
        }
        uVar12 = (uint)bVar6;
        if ((-1 < (int)((byte)param_1[8] - uVar12)) || ((byte)bVar3 + uVar12 < 0x3d)) {
          btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          ::rebalance_right_to_left
                    (this_01,bVar6,
                     (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                      *)this_00,(allocator<google::protobuf::Edition> *)(this + 8));
          iVar10 = (byte)param_1[8] - uVar12;
          *(int *)(param_1 + 8) = iVar10;
          if (-1 < iVar10) {
            return;
          }
          *(uint *)(param_1 + 8) = iVar10 + (byte)this_01[10] + 1;
          *(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
            **)param_1 = this_01;
          return;
        }
      }
    }
    if ((byte)bVar2 <
        (byte)*(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                *)((longlong)plVar4 + 10)) {
      pbVar8 = (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                *)plVar4[(ulonglong)((byte)bVar2 + 1 & 0xff) + 0x20];
      bVar11 = pbVar8[10];
      if ((byte)bVar11 < 0x3d) {
        uVar13 = 0x3d - (byte)bVar11 >> (0 < (int)*(uint *)(param_1 + 8));
        uVar12 = 1;
        if (1 < (byte)uVar13) {
          uVar12 = uVar13 & 0xff;
        }
        if (((int)(*(uint *)(param_1 + 8) & 0xff) <= (int)((byte)this_00[10] - uVar12)) ||
           (uVar12 + (byte)bVar11 < 0x3d)) {
          btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          ::rebalance_left_to_right
                    (this_00,(uchar)uVar12,pbVar8,(allocator<google::protobuf::Edition> *)(this + 8)
                    );
          if (*(int *)(param_1 + 8) <= (int)(uint)*(byte *)(*(longlong *)param_1 + 10)) {
            return;
          }
          *(uint *)(param_1 + 8) =
               (*(int *)(param_1 + 8) - (uint)*(byte *)(*(longlong *)param_1 + 10)) + -1;
          *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
            **)param_1 = pbVar8;
          return;
        }
      }
    }
    plVar7 = plVar4;
    if (*(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
          *)((longlong)plVar4 + 10) ==
        (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
         )0x3d) {
      local_30 = (uint)(byte)bVar2;
      local_38 = plVar4;
      rebalance_or_split(this,(btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
                               *)&local_38);
      plVar7 = (longlong *)**(undefined8 **)param_1;
    }
  }
  paVar1 = (allocator<google::protobuf::Edition> *)(this + 8);
  bVar11 = (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
            )(*(char *)(*(longlong *)param_1 + 8) + '\x01');
  if (*(char *)(*(longlong *)param_1 + 0xb) == '\0') {
    pbVar8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x2f0);
    *(longlong **)pbVar8 = plVar7;
    pbVar8[8] = bVar11;
    *(undefined2 *)(pbVar8 + 9) = 0;
    pbVar8[0xb] = (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                   )0x0;
    btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
    ::split(*(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              **)param_1,*(int *)(param_1 + 8),pbVar8,paVar1);
  }
  else {
    pbVar8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x100);
    *(longlong **)pbVar8 = plVar7;
    pbVar8[8] = bVar11;
    *(undefined2 *)(pbVar8 + 9) = 0;
    pbVar8[0xb] = (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                   )0x3d;
    btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
    ::split(*(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              **)param_1,*(int *)(param_1 + 8),pbVar8,paVar1);
    if (*(longlong *)paVar1 == *(longlong *)param_1) {
      *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
        **)paVar1 = pbVar8;
    }
  }
  if ((int)(uint)*(byte *)(*(longlong *)param_1 + 10) < *(int *)(param_1 + 8)) {
    *(uint *)(param_1 + 8) =
         (*(int *)(param_1 + 8) - (uint)*(byte *)(*(longlong *)param_1 + 10)) + -1;
    *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
      **)param_1 = pbVar8;
  }
  return;
}

// rebalance_right_to_left @ 14fb6a230

/* public: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::rebalance_right_to_left(unsigned char,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,class std::allocator<enum
   google::protobuf::Edition> * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::rebalance_right_to_left
          (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,uchar param_1,
          btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
          *param_2,allocator<google::protobuf::Edition> *param_3)

{
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar1;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar2;
  undefined8 *puVar3;
  byte bVar4;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong lVar8;
  
  uVar6 = (ulonglong)param_1;
  *(undefined4 *)(this + (ulonglong)(byte)this[10] * 4 + 0xc) =
       *(undefined4 *)(*(longlong *)this + 0xc + (ulonglong)(byte)this[8] * 4);
  pbVar1 = this + (ulonglong)(byte)this[10] * 4 + 0x10;
  for (pbVar5 = param_2 + 0xc; pbVar5 != param_2 + uVar6 * 4 + 8; pbVar5 = pbVar5 + 4) {
    *(undefined4 *)pbVar1 = *(undefined4 *)pbVar5;
    pbVar1 = pbVar1 + 4;
  }
  *(undefined4 *)(*(longlong *)this + (ulonglong)(byte)this[8] * 4 + 0xc) =
       *(undefined4 *)(param_2 + uVar6 * 4 + 8);
  pbVar5 = param_2 + uVar6 * 4 + 0xc;
  pbVar2 = pbVar5 + ((byte)param_2[10] - uVar6) * 4;
  if (pbVar5 != pbVar2) {
    lVar8 = (longlong)(param_2 + 0xc) - (longlong)pbVar5;
    do {
      *(undefined4 *)(pbVar5 + lVar8) = *(undefined4 *)pbVar5;
      pbVar5 = pbVar5 + 4;
    } while (pbVar5 != pbVar2);
  }
  if (this[0xb] ==
      (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
       )0x0) {
    bVar7 = 0;
    if (param_1 != '\0') {
      pbVar5 = param_2 + 0x100;
      do {
        puVar3 = *(undefined8 **)pbVar5;
        bVar4 = bVar7 + 1 + (char)this[10];
        pbVar5 = pbVar5 + 8;
        bVar7 = bVar7 + 1;
        *(undefined8 **)(this + (ulonglong)bVar4 * 8 + 0x100) = puVar3;
        *(byte *)(puVar3 + 1) = bVar4;
        *puVar3 = this;
      } while (bVar7 < param_1);
    }
    uVar6 = 0;
    if (-1 < (int)((uint)(byte)param_2[10] - (uint)param_1)) {
      do {
        puVar3 = *(undefined8 **)
                  (param_2 + (ulonglong)((uint)param_1 + (int)uVar6 & 0xff) * 8 + 0x100);
        *(undefined8 **)(param_2 + uVar6 * 8 + 0x100) = puVar3;
        *(char *)(puVar3 + 1) = (char)uVar6;
        bVar7 = (char)uVar6 + 1;
        uVar6 = (ulonglong)bVar7;
        *puVar3 = param_2;
      } while ((int)(uint)bVar7 <= (int)((uint)(byte)param_2[10] - (uint)param_1));
    }
  }
  this[10] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              )((char)this[10] + param_1);
  param_2[10] = (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                 )((char)param_2[10] - param_1);
  return;
}

// release @ 14fb6a380

/* public: class google::protobuf::Message * __ptr64 __cdecl std::unique_ptr<class
   google::protobuf::Message,struct std::default_delete<class google::protobuf::Message>
   >::release(void) __ptr64 */

Message * __thiscall
std::unique_ptr<google::protobuf::Message,std::default_delete<google::protobuf::Message>_>::release
          (unique_ptr<google::protobuf::Message,std::default_delete<google::protobuf::Message>_>
           *this)

{
  Message *pMVar1;
  
  pMVar1 = *(Message **)this;
  *(undefined8 *)this = 0;
  return pMVar1;
}

// reset @ 14fb6a3a0

/* public: void __cdecl std::unique_ptr<class google::protobuf::Message,struct
   std::default_delete<class google::protobuf::Message> >::reset(class google::protobuf::Message *
   __ptr64) __ptr64 */

void __thiscall
std::unique_ptr<google::protobuf::Message,std::default_delete<google::protobuf::Message>_>::reset
          (unique_ptr<google::protobuf::Message,std::default_delete<google::protobuf::Message>_>
           *this,Message *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  *(Message **)this = param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014fb6a3b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// rightmost @ 14fb6a3c0

/* private: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::rightmost(void) __ptr64 */

btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
* __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::rightmost(btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
            *this)

{
  return *(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           **)(this + 8);
}

// root @ 14fb6a3d0

/* private: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::root(void) __ptr64 */

btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
* __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::root(btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
       *this)

{
  return *(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           **)this;
}

// root @ 14fb6a3e0

/* private: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > const * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::root(void)const __ptr64 */

btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
* __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::root(btree<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
       *this)

{
  return *(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           **)this;
}

// set_child @ 14fb6a3f0

/* public: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::set_child(unsigned char,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::set_child(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
            *this,uchar param_1,
           btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
           *param_2)

{
  *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
    **)(this + (ulonglong)param_1 * 8 + 0x100) = param_2;
  param_2[8] = (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                )param_1;
  return;
}

// set_child_noupdate_position @ 14fb6a410

/* public: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::set_child_noupdate_position(unsigned char,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::set_child_noupdate_position
          (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,uchar param_1,
          btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
          *param_2)

{
  *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
    **)(this + (ulonglong)param_1 * 8 + 0x100) = param_2;
  return;
}

// set_edition @ 14fb6a430

/* public: void __cdecl
   google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault::set_edition(enum
   google::protobuf::Edition) __ptr64 */

void __thiscall
google::protobuf::FeatureSetDefaults_FeatureSetEditionDefault::set_edition
          (FeatureSetDefaults_FeatureSetEditionDefault *this,Edition param_1)

{
  (this->_impl_).edition_ = param_1;
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 4;
  return;
}

// set_edition @ 14fb6a440

/* public: void __cdecl google::protobuf::FieldOptions_EditionDefault::set_edition(enum
   google::protobuf::Edition) __ptr64 */

void __thiscall
google::protobuf::FieldOptions_EditionDefault::set_edition
          (FieldOptions_EditionDefault *this,Edition param_1)

{
  (this->_impl_).edition_ = param_1;
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 2;
  return;
}

// set_finish @ 14fb6a450

/* private: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::set_finish(unsigned char) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::set_finish(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
             *this,uchar param_1)

{
  this[10] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              )param_1;
  return;
}

// set_generation @ 14fb6a460

/* public: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::set_generation(unsigned int) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::set_generation(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                 *this,uint param_1)

{
  return;
}

// set_max_count @ 14fb6a470

/* private: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::set_max_count(unsigned char) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::set_max_count(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                *this,uchar param_1)

{
  this[0xb] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
               )param_1;
  return;
}

// set_maximum_edition @ 14fb6a480

/* public: void __cdecl google::protobuf::FeatureSetDefaults::set_maximum_edition(enum
   google::protobuf::Edition) __ptr64 */

void __thiscall
google::protobuf::FeatureSetDefaults::set_maximum_edition(FeatureSetDefaults *this,Edition param_1)

{
  (this->_impl_).maximum_edition_ = param_1;
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 2;
  return;
}

// set_minimum_edition @ 14fb6a490

/* public: void __cdecl google::protobuf::FeatureSetDefaults::set_minimum_edition(enum
   google::protobuf::Edition) __ptr64 */

void __thiscall
google::protobuf::FeatureSetDefaults::set_minimum_edition(FeatureSetDefaults *this,Edition param_1)

{
  (this->_impl_).minimum_edition_ = param_1;
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  return;
}

// set_parent @ 14fb6a4a0

/* private: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::set_parent(class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::set_parent(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
             *this,btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
                   *param_1)

{
  *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
    **)this = param_1;
  return;
}

// set_position @ 14fb6a4b0

/* private: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::set_position(unsigned char) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::set_position(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
               *this,uchar param_1)

{
  this[8] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
             )param_1;
  return;
}

// set_start @ 14fb6a4c0

/* private: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::set_start(unsigned char) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::set_start(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
            *this,uchar param_1)

{
  this[9] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
             )param_1;
  return;
}

// size @ 14fb6a4d0

/* public: unsigned __int64 __cdecl absl::lts_20240722::Span<class google::protobuf::FieldDescriptor
   const * __ptr64 const>::size(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::Span<google::protobuf::FieldDescriptor_const*___ptr64_const>::size
          (Span<google::protobuf::FieldDescriptor_const*___ptr64_const> *this)

{
  return *(__uint64 *)(this + 8);
}

// slot @ 14fb6a4e0

/* private: enum google::protobuf::Edition * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::slot(unsigned __int64) __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::slot(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
       *this,__uint64 param_1)

{
  return (Edition *)(this + (param_1 + 3) * 4);
}

// slot @ 14fb6a4f0

/* private: enum google::protobuf::Edition const * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::slot(unsigned __int64)const __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::slot(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
       *this,__uint64 param_1)

{
  return (Edition *)(this + (param_1 + 3) * 4);
}

// split @ 14fb6a500

/* public: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::split(int,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,class std::allocator<enum
   google::protobuf::Edition> * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::split(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
        *this,int param_1,
       btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
       *param_2,allocator<google::protobuf::Edition> *param_3)

{
  undefined4 *puVar1;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  bVar6;
  undefined4 *puVar7;
  uint uVar8;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte bVar13;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  bVar14;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar15;
  longlong lVar16;
  
  if (param_1 == 0) {
    bVar6 = (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
             )((char)this[10] - 1);
  }
  else if (param_1 == 0x3d) {
    bVar6 = (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
             )0x0;
  }
  else {
    bVar6 = (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
             )((byte)this[10] >> 1);
  }
  param_2[10] = bVar6;
  this[10] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              )((char)this[10] - (char)bVar6);
  bVar6 = param_2[10];
  pbVar15 = param_2 + 0xc;
  bVar14 = this[10];
  for (pbVar9 = this + ((ulonglong)(byte)bVar14 + 3) * 4;
      pbVar9 != this + ((ulonglong)(byte)bVar6 + (ulonglong)(byte)bVar14 + 3) * 4;
      pbVar9 = pbVar9 + 4) {
    *(undefined4 *)pbVar15 = *(undefined4 *)pbVar9;
    pbVar15 = pbVar15 + 4;
  }
  this[10] = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              )((char)this[10] + -1);
  lVar3 = *(longlong *)this;
  bVar14 = this[10];
  bVar2 = this[8];
  uVar11 = (ulonglong)(byte)bVar2;
  if ((byte)bVar2 <
      (byte)*(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              *)(lVar3 + 10)) {
    lVar10 = (byte)*(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                     *)(lVar3 + 10) - uVar11;
    lVar16 = lVar3 + (uVar11 + 3 + lVar10) * 4;
    lVar12 = lVar16 + lVar10 * -4;
    if (lVar16 != lVar12) {
      puVar7 = (undefined4 *)(lVar3 + ((ulonglong)((byte)bVar2 + 1) + 2 + lVar10) * 4);
      do {
        puVar1 = (undefined4 *)(lVar16 + -4);
        lVar16 = lVar16 + -4;
        *puVar7 = *puVar1;
        puVar7 = puVar7 + -1;
      } while (lVar16 != lVar12);
    }
  }
  *(undefined4 *)(lVar3 + 0xc + uVar11 * 4) =
       *(undefined4 *)(this + (ulonglong)(byte)bVar14 * 4 + 0xc);
  bVar13 = *(char *)(lVar3 + 10) + 1;
  *(byte *)(lVar3 + 10) = bVar13;
  if (*(char *)(lVar3 + 0xb) == '\0') {
    uVar5 = (uint)bVar13;
    while ((byte)bVar2 + 1 < uVar5) {
      uVar8 = uVar5 - 1 & 0xff;
      lVar16 = *(longlong *)(lVar3 + 0x100 + (ulonglong)uVar8 * 8);
      *(longlong *)(lVar3 + 0x100 + (ulonglong)uVar5 * 8) = lVar16;
      *(char *)(lVar16 + 8) = (char)uVar5;
      uVar5 = uVar8;
    }
  }
  *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
    **)(*(longlong *)this + 0x100 + (ulonglong)(byte)((char)this[8] + 1) * 8) = param_2;
  if (this[0xb] ==
      (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
       )0x0) {
    bVar14 = this[10];
    bVar6 = (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
             )0x0;
    do {
      bVar14 = (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                )((char)bVar14 + '\x01');
      puVar4 = *(undefined8 **)(this + (ulonglong)(byte)bVar14 * 8 + 0x100);
      *(undefined8 **)(param_2 + (ulonglong)(byte)bVar6 * 8 + 0x100) = puVar4;
      *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
        *)(puVar4 + 1) = bVar6;
      bVar6 = (btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
               )((char)bVar6 + 1);
      *puVar4 = param_2;
    } while ((byte)bVar6 <= (byte)param_2[10]);
  }
  return;
}

// start @ 14fb6a6b0

/* public: unsigned char __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::start(void)const __ptr64 */

uchar __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::start(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
        *this)

{
  return '\0';
}

// start_child @ 14fb6a6c0

/* public: class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::start_child(void)const __ptr64 */

btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
* __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::start_child(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
              *this)

{
  return *(btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
           **)(this + 0x100);
}

// start_slot @ 14fb6a6d0

/* private: enum google::protobuf::Edition * __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::start_slot(void) __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::start_slot(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
             *this)

{
  return (Edition *)(this + 0xc);
}

// swap @ 14fb6a6e0

/* void __cdecl google::protobuf::swap(class google::protobuf::FieldOptions_EditionDefault &
   __ptr64,class google::protobuf::FieldOptions_EditionDefault & __ptr64) */

void __cdecl
google::protobuf::swap(FieldOptions_EditionDefault *param_1,FieldOptions_EditionDefault *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_2 == param_1) {
    return;
  }
  puVar5 = (undefined8 *)(param_2->_padding_ & 0xfffffffffffffffe);
  if ((param_2->_padding_ & 1) != 0) {
    puVar5 = (undefined8 *)*puVar5;
  }
  puVar6 = (undefined8 *)(param_1->_padding_ & 0xfffffffffffffffe);
  if ((param_1->_padding_ & 1) != 0) {
    puVar6 = (undefined8 *)*puVar6;
  }
  if (puVar6 != puVar5) {
    internal::GenericSwap((Message *)param_1,(Message *)param_2);
    return;
  }
  lVar3 = param_1->_padding_;
  param_1->_padding_ = param_2->_padding_;
  param_2->_padding_ = lVar3;
  uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (param_2->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pvVar4 = (param_2->_impl_).value_.tagged_ptr_.ptr_;
  (param_2->_impl_).value_.tagged_ptr_.ptr_ = (param_1->_impl_).value_.tagged_ptr_.ptr_;
  (param_1->_impl_).value_.tagged_ptr_.ptr_ = pvVar4;
  iVar2 = (param_1->_impl_).edition_;
  (param_1->_impl_).edition_ = (param_2->_impl_).edition_;
  (param_2->_impl_).edition_ = iVar2;
  return;
}

// targets @ 14fb6a720

/* public: class google::protobuf::RepeatedField<int> const & __ptr64 __cdecl
   google::protobuf::FieldOptions::targets(void)const __ptr64 */

RepeatedField<int> * __thiscall google::protobuf::FieldOptions::targets(FieldOptions *this)

{
  return &(this->_impl_).targets_;
}

// transfer @ 14fb6a730

/* private: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::transfer(unsigned __int64,unsigned __int64,class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,class std::allocator<enum
   google::protobuf::Edition> * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::transfer(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,__uint64 param_1,__uint64 param_2,
          btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
          *param_3,allocator<google::protobuf::Edition> *param_4)

{
  *(undefined4 *)(this + param_1 * 4 + 0xc) = *(undefined4 *)(param_3 + param_2 * 4 + 0xc);
  return;
}

// transfer @ 14fb6a740

/* private: static void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::transfer(enum google::protobuf::Edition * __ptr64,enum
   google::protobuf::Edition * __ptr64,class std::allocator<enum google::protobuf::Edition> *
   __ptr64) */

void __cdecl
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::transfer(Edition *param_1,Edition *param_2,allocator<google::protobuf::Edition> *param_3)

{
  *param_1 = *param_2;
  return;
}

// transfer_n @ 14fb6a750

/* private: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::transfer_n(unsigned __int64,unsigned __int64,unsigned
   __int64,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,class std::allocator<enum
   google::protobuf::Edition> * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::transfer_n(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
             *this,__uint64 param_1,__uint64 param_2,__uint64 param_3,
            btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
            *param_4,allocator<google::protobuf::Edition> *param_5)

{
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar1;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar2;
  longlong lVar3;
  
  pbVar2 = param_4 + param_3 * 4 + 0xc;
  pbVar1 = pbVar2 + param_1 * 4;
  if (pbVar2 != pbVar1) {
    lVar3 = (param_2 * 4 + 0xc) - (longlong)pbVar2;
    do {
      *(undefined4 *)(this + lVar3 + (longlong)pbVar2) = *(undefined4 *)pbVar2;
      pbVar2 = pbVar2 + 4;
    } while (pbVar2 != pbVar1);
  }
  return;
}

// transfer_n_backward @ 14fb6a7a0

/* private: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::transfer_n_backward(unsigned __int64,unsigned
   __int64,unsigned __int64,class absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> > * __ptr64,class std::allocator<enum
   google::protobuf::Edition> * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::transfer_n_backward
          (btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
           *this,__uint64 param_1,__uint64 param_2,__uint64 param_3,
          btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
          *param_4,allocator<google::protobuf::Edition> *param_5)

{
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar1;
  btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
  *pbVar2;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar3;
  btree_node<struct_absl::lts_20240722::container_internal::set_params<enum_google::protobuf::Edition,struct_std::less<enum_google::protobuf::Edition>,class_std::allocator<enum_google::protobuf::Edition>,256,0>_>
  *pbVar4;
  
  pbVar3 = param_4 + (param_3 + 3 + param_1) * 4;
  pbVar4 = pbVar3 + param_1 * -4;
  if (pbVar3 != pbVar4) {
    do {
      pbVar1 = pbVar3 + -4;
      pbVar2 = this + (((param_2 - param_3) * 4 + -4) - (longlong)param_4) + (longlong)pbVar3;
      pbVar3 = pbVar3 + -4;
      *(undefined4 *)pbVar2 = *(undefined4 *)pbVar1;
    } while (pbVar3 != pbVar4);
  }
  return;
}

// update_generation @ 14fb6a800

/* private: void __cdecl absl::lts_20240722::container_internal::btree_iterator<class
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >,enum google::protobuf::Edition const & __ptr64,enum
   google::protobuf::Edition const * __ptr64>::update_generation(void) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
::update_generation(btree_iterator<absl::lts_20240722::container_internal::btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>,google::protobuf::Edition_const&___ptr64,google::protobuf::Edition_const*___ptr64>
                    *this)

{
  return;
}

// value @ 14fb6a810

/* public: enum google::protobuf::Edition & __ptr64 __cdecl
   absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::value(unsigned __int64) __ptr64 */

Edition * __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::value(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
        *this,__uint64 param_1)

{
  return (Edition *)(this + (param_1 + 3) * 4);
}

// value @ 14fb6a820

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64 __cdecl google::protobuf::FieldOptions_EditionDefault::value(void)const __ptr64
    */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::FieldOptions_EditionDefault::value(FieldOptions_EditionDefault *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
         ((ulonglong)(this->_impl_).value_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
}

// value_destroy @ 14fb6a830

/* private: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::value_destroy(unsigned char,class std::allocator<enum
   google::protobuf::Edition> * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::value_destroy(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                *this,uchar param_1,allocator<google::protobuf::Edition> *param_2)

{
  return;
}

// value_destroy_n @ 14fb6a840

/* private: void __cdecl absl::lts_20240722::container_internal::btree_node<struct
   absl::lts_20240722::container_internal::set_params<enum google::protobuf::Edition,struct
   std::less<enum google::protobuf::Edition>,class std::allocator<enum
   google::protobuf::Edition>,256,0> >::value_destroy_n(unsigned char,unsigned char,class
   std::allocator<enum google::protobuf::Edition> * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::container_internal::
btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
::value_destroy_n(btree_node<absl::lts_20240722::container_internal::set_params<google::protobuf::Edition,std::less<google::protobuf::Edition>,std::allocator<google::protobuf::Edition>,256,0>_>
                  *this,uchar param_1,uchar param_2,allocator<google::protobuf::Edition> *param_3)

{
  return;
}

// FUN_1502aaee0 @ 1502aaee0

void FUN_1502aaee0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x40),0x40);
  return;
}

// FUN_1502ab190 @ 1502ab190

void FUN_1502ab190(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x30),0x40);
  return;
}

// FUN_1502ab720 @ 1502ab720

void FUN_1502ab720(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    google::protobuf::FeatureResolver::ValidationResults::~ValidationResults
              (*(ValidationResults **)(param_2 + 0x40));
  }
  return;
}


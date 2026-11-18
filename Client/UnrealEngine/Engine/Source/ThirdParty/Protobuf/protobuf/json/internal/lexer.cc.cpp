// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 121

// StatusOr<unsigned_short><absl::lts_20240722::Status_const_,0> @ 14fb91500

/* public: __cdecl absl::lts_20240722::StatusOr<unsigned short>::StatusOr<unsigned short><class
   absl::lts_20240722::Status const ,0>(class absl::lts_20240722::Status const && __ptr64) __ptr64
    */

StatusOr<unsigned_short> * __thiscall
absl::lts_20240722::StatusOr<unsigned_short>::
StatusOr<unsigned_short><absl::lts_20240722::Status_const_,0>
          (StatusOr<unsigned_short> *this,Status *param_1)

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

// StatusOr<google::protobuf::json_internal::LocationWith<double>_><absl::lts_20240722::Status_const_,0> @ 14fb91540

/* public: __cdecl absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<double> >::StatusOr<struct
   google::protobuf::json_internal::LocationWith<double> ><class absl::lts_20240722::Status const
   ,0>(class absl::lts_20240722::Status const && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::LocationWith<double>_> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::LocationWith<double>_>::
StatusOr<google::protobuf::json_internal::LocationWith<double>_><absl::lts_20240722::Status_const_,0>
          (StatusOr<google::protobuf::json_internal::LocationWith<double>_> *this,Status *param_1)

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

// StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><absl::lts_20240722::Status_const_,0> @ 14fb91580

/* public: __cdecl absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> >::StatusOr<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> ><class absl::lts_20240722::Status const
   ,0>(class absl::lts_20240722::Status const && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
* __thiscall
absl::lts_20240722::
StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
::
StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><absl::lts_20240722::Status_const_,0>
          (StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
           *this,Status *param_1)

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

// StatusOr<google::protobuf::json_internal::MaybeOwnedString><absl::lts_20240722::Status_const_,0> @ 14fb915c0

/* public: __cdecl absl::lts_20240722::StatusOr<class
   google::protobuf::json_internal::MaybeOwnedString>::StatusOr<class
   google::protobuf::json_internal::MaybeOwnedString><class absl::lts_20240722::Status const
   ,0>(class absl::lts_20240722::Status const && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::MaybeOwnedString> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::MaybeOwnedString>::
StatusOr<google::protobuf::json_internal::MaybeOwnedString><absl::lts_20240722::Status_const_,0>
          (StatusOr<google::protobuf::json_internal::MaybeOwnedString> *this,Status *param_1)

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

// StatusOr<google::protobuf::json_internal::JsonLexer::Kind><absl::lts_20240722::Status_const_,0> @ 14fb91600

/* public: __cdecl absl::lts_20240722::StatusOr<enum
   google::protobuf::json_internal::JsonLexer::Kind>::StatusOr<enum
   google::protobuf::json_internal::JsonLexer::Kind><class absl::lts_20240722::Status const
   ,0>(class absl::lts_20240722::Status const && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::JsonLexer::Kind> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::JsonLexer::Kind>::
StatusOr<google::protobuf::json_internal::JsonLexer::Kind><absl::lts_20240722::Status_const_,0>
          (StatusOr<google::protobuf::json_internal::JsonLexer::Kind> *this,Status *param_1)

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

// StatusOrData<unsigned_short><absl::lts_20240722::Status_const_,0> @ 14fb91640

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<unsigned
   short>::StatusOrData<unsigned short><class absl::lts_20240722::Status const ,0>(class
   absl::lts_20240722::Status const && __ptr64) __ptr64 */

StatusOrData<unsigned_short> * __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<unsigned_short>::
StatusOrData<unsigned_short><absl::lts_20240722::Status_const_,0>
          (StatusOrData<unsigned_short> *this,Status *param_1)

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

// StatusOrData<google::protobuf::json_internal::LocationWith<double>_><absl::lts_20240722::Status_const_,0> @ 14fb91680

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<struct
   google::protobuf::json_internal::LocationWith<double> >::StatusOrData<struct
   google::protobuf::json_internal::LocationWith<double> ><class absl::lts_20240722::Status const
   ,0>(class absl::lts_20240722::Status const && __ptr64) __ptr64 */

StatusOrData<google::protobuf::json_internal::LocationWith<double>_> * __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::LocationWith<double>_>::
StatusOrData<google::protobuf::json_internal::LocationWith<double>_><absl::lts_20240722::Status_const_,0>
          (StatusOrData<google::protobuf::json_internal::LocationWith<double>_> *this,
          Status *param_1)

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

// StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><absl::lts_20240722::Status_const_,0> @ 14fb916c0

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> >::StatusOrData<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> ><class absl::lts_20240722::Status const
   ,0>(class absl::lts_20240722::Status const && __ptr64) __ptr64 */

StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
* __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
::
StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><absl::lts_20240722::Status_const_,0>
          (StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
           *this,Status *param_1)

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

// StatusOrData<google::protobuf::json_internal::MaybeOwnedString><absl::lts_20240722::Status_const_,0> @ 14fb91700

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::json_internal::MaybeOwnedString>::StatusOrData<class
   google::protobuf::json_internal::MaybeOwnedString><class absl::lts_20240722::Status const
   ,0>(class absl::lts_20240722::Status const && __ptr64) __ptr64 */

StatusOrData<google::protobuf::json_internal::MaybeOwnedString> * __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::MaybeOwnedString>::
StatusOrData<google::protobuf::json_internal::MaybeOwnedString><absl::lts_20240722::Status_const_,0>
          (StatusOrData<google::protobuf::json_internal::MaybeOwnedString> *this,Status *param_1)

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

// StatusOrData<google::protobuf::json_internal::JsonLexer::Kind><absl::lts_20240722::Status_const_,0> @ 14fb91740

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<enum
   google::protobuf::json_internal::JsonLexer::Kind>::StatusOrData<enum
   google::protobuf::json_internal::JsonLexer::Kind><class absl::lts_20240722::Status const
   ,0>(class absl::lts_20240722::Status const && __ptr64) __ptr64 */

StatusOrData<google::protobuf::json_internal::JsonLexer::Kind> * __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::JsonLexer::Kind>::
StatusOrData<google::protobuf::json_internal::JsonLexer::Kind><absl::lts_20240722::Status_const_,0>
          (StatusOrData<google::protobuf::json_internal::JsonLexer::Kind> *this,Status *param_1)

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

// _Non_trivial_copy<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>_><0,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0> @ 14fb91780

/* public: __cdecl std::_Non_trivial_copy<struct std::_Variant_destroy_layer_<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned> >::_Non_trivial_copy<struct
   std::_Variant_destroy_layer_<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,struct google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
   ><0,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >,0>(struct std::in_place_index_t<0>,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > && __ptr64) __ptr64 */

_Non_trivial_copy<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>_>
* __thiscall
std::
_Non_trivial_copy<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>_>
::
_Non_trivial_copy<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>_><0,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0>
          (_Non_trivial_copy<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>_>
           *this,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar1 = param_3[1];
  *(undefined8 *)this = *param_3;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = param_3[3];
  *(undefined8 *)(this + 0x10) = param_3[2];
  *(undefined8 *)(this + 0x18) = uVar1;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  this[0x20] = (_Non_trivial_copy<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>_>
                )0x0;
  return this;
}

// _Non_trivial_copy_assign<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned><0,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0> @ 14fb917c0

/* public: __cdecl std::_Non_trivial_copy_assign<struct std::_Variant_destroy_layer_<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned>::_Non_trivial_copy_assign<struct
   std::_Variant_destroy_layer_<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned><0,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,0>(struct
   std::in_place_index_t<0>,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > && __ptr64) __ptr64 */

_Non_trivial_copy_assign<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
* __thiscall
std::
_Non_trivial_copy_assign<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
::
_Non_trivial_copy_assign<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned><0,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0>
          (_Non_trivial_copy_assign<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
           *this,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar1 = param_3[1];
  *(undefined8 *)this = *param_3;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = param_3[3];
  *(undefined8 *)(this + 0x10) = param_3[2];
  *(undefined8 *)(this + 0x18) = uVar1;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  this[0x20] = (_Non_trivial_copy_assign<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                )0x0;
  return this;
}

// _Non_trivial_move<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned><0,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0> @ 14fb91800

/* public: __cdecl std::_Non_trivial_move<struct std::_Variant_destroy_layer_<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned>::_Non_trivial_move<struct
   std::_Variant_destroy_layer_<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned><0,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,0>(struct
   std::in_place_index_t<0>,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > && __ptr64) __ptr64 */

_Non_trivial_move<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
* __thiscall
std::
_Non_trivial_move<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
::
_Non_trivial_move<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned><0,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0>
          (_Non_trivial_move<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
           *this,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar1 = param_3[1];
  *(undefined8 *)this = *param_3;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = param_3[3];
  *(undefined8 *)(this + 0x10) = param_3[2];
  *(undefined8 *)(this + 0x18) = uVar1;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  this[0x20] = (_Non_trivial_move<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                )0x0;
  return this;
}

// _Non_trivial_move_assign<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned><0,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0> @ 14fb91840

/* public: __cdecl std::_Non_trivial_move_assign<struct std::_Variant_destroy_layer_<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned>::_Non_trivial_move_assign<struct
   std::_Variant_destroy_layer_<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned><0,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,0>(struct
   std::in_place_index_t<0>,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > && __ptr64) __ptr64 */

_Non_trivial_move_assign<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
* __thiscall
std::
_Non_trivial_move_assign<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
::
_Non_trivial_move_assign<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned><0,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0>
          (_Non_trivial_move_assign<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
           *this,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar1 = param_3[1];
  *(undefined8 *)this = *param_3;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = param_3[3];
  *(undefined8 *)(this + 0x10) = param_3[2];
  *(undefined8 *)(this + 0x18) = uVar1;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  this[0x20] = (_Non_trivial_move_assign<std::_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                )0x0;
  return this;
}

// _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned><0,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0> @ 14fb91880

/* public: __cdecl std::_Variant_base<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned>::_Variant_base<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned><0,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,0>(struct
   std::in_place_index_t<0>,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > && __ptr64) __ptr64 */

_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
* __thiscall
std::
_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
::
_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned><0,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0>
          (_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
           *this,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar1 = param_3[1];
  *(undefined8 *)this = *param_3;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = param_3[3];
  *(undefined8 *)(this + 0x10) = param_3[2];
  *(undefined8 *)(this + 0x18) = uVar1;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  this[0x20] = (_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                )0x0;
  return this;
}

// _Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned><0,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0> @ 14fb918c0

/* public: __cdecl std::_Variant_destroy_layer_<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned>::_Variant_destroy_layer_<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned><0,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,0>(struct
   std::in_place_index_t<0>,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > && __ptr64) __ptr64 */

_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
* __thiscall
std::
_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
::
_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned><0,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0>
          (_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
           *this,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar1 = param_3[1];
  *(undefined8 *)this = *param_3;
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = param_3[3];
  *(undefined8 *)(this + 0x10) = param_3[2];
  *(undefined8 *)(this + 0x18) = uVar1;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  this[0x20] = (_Variant_destroy_layer_<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                )0x0;
  return this;
}

// StatusOr<unsigned_short><unsigned_short,0> @ 14fb91900

/* public: __cdecl absl::lts_20240722::StatusOr<unsigned short>::StatusOr<unsigned short><unsigned
   short,0>(unsigned short && __ptr64) __ptr64 */

StatusOr<unsigned_short> * __thiscall
absl::lts_20240722::StatusOr<unsigned_short>::StatusOr<unsigned_short><unsigned_short,0>
          (StatusOr<unsigned_short> *this,ushort *param_1)

{
  *(ushort *)(this + 8) = *param_1;
  *(undefined8 *)this = 1;
  return this;
}

// StatusOr<unsigned_short><unsigned_short> @ 14fb91920

/* public: __cdecl absl::lts_20240722::StatusOr<unsigned short>::StatusOr<unsigned short><unsigned
   short>(struct std::in_place_t,unsigned short && __ptr64) __ptr64 */

StatusOr<unsigned_short> * __thiscall
absl::lts_20240722::StatusOr<unsigned_short>::StatusOr<unsigned_short><unsigned_short>
          (StatusOr<unsigned_short> *this,in_place_t param_1,ushort *param_2)

{
  *(ushort *)(this + 8) = *param_2;
  *(undefined8 *)this = 1;
  return this;
}

// StatusOrData<unsigned_short><unsigned_short> @ 14fb91940

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<unsigned
   short>::StatusOrData<unsigned short><unsigned short>(struct std::in_place_t,unsigned short &&
   __ptr64) __ptr64 */

StatusOrData<unsigned_short> * __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<unsigned_short>::
StatusOrData<unsigned_short><unsigned_short>
          (StatusOrData<unsigned_short> *this,in_place_t param_1,ushort *param_2)

{
  *(ushort *)(this + 8) = *param_2;
  *(undefined8 *)this = 1;
  return this;
}

// StatusOr<google::protobuf::json_internal::LocationWith<double>_><google::protobuf::json_internal::LocationWith<double>,0> @ 14fb91960

/* public: __cdecl absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<double> >::StatusOr<struct
   google::protobuf::json_internal::LocationWith<double> ><struct
   google::protobuf::json_internal::LocationWith<double>,0>(struct
   google::protobuf::json_internal::LocationWith<double> && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::LocationWith<double>_> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::LocationWith<double>_>::
StatusOr<google::protobuf::json_internal::LocationWith<double>_><google::protobuf::json_internal::LocationWith<double>,0>
          (StatusOr<google::protobuf::json_internal::LocationWith<double>_> *this,
          LocationWith<double> *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)this = 1;
  return this;
}

// StatusOr<google::protobuf::json_internal::LocationWith<double>_><google::protobuf::json_internal::LocationWith<double>_> @ 14fb91990

/* public: __cdecl absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<double> >::StatusOr<struct
   google::protobuf::json_internal::LocationWith<double> ><struct
   google::protobuf::json_internal::LocationWith<double> >(struct std::in_place_t,struct
   google::protobuf::json_internal::LocationWith<double> && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::LocationWith<double>_> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::LocationWith<double>_>::
StatusOr<google::protobuf::json_internal::LocationWith<double>_><google::protobuf::json_internal::LocationWith<double>_>
          (StatusOr<google::protobuf::json_internal::LocationWith<double>_> *this,in_place_t param_1
          ,LocationWith<double> *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)this = 1;
  return this;
}

// StatusOrData<google::protobuf::json_internal::LocationWith<double>_><google::protobuf::json_internal::LocationWith<double>_> @ 14fb919c0

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<struct
   google::protobuf::json_internal::LocationWith<double> >::StatusOrData<struct
   google::protobuf::json_internal::LocationWith<double> ><struct
   google::protobuf::json_internal::LocationWith<double> >(struct std::in_place_t,struct
   google::protobuf::json_internal::LocationWith<double> && __ptr64) __ptr64 */

StatusOrData<google::protobuf::json_internal::LocationWith<double>_> * __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::LocationWith<double>_>::
StatusOrData<google::protobuf::json_internal::LocationWith<double>_><google::protobuf::json_internal::LocationWith<double>_>
          (StatusOrData<google::protobuf::json_internal::LocationWith<double>_> *this,
          in_place_t param_1,LocationWith<double> *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)this = 1;
  return this;
}

// StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>,0> @ 14fb919f0

/* public: __cdecl absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> >::StatusOr<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> ><struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString>,0>(struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
* __thiscall
absl::lts_20240722::
StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
::
StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>,0>
          (StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
           *this,LocationWith<google::protobuf::json_internal::MaybeOwnedString> *param_1)

{
  undefined8 uVar1;
  
  google::protobuf::json_internal::MaybeOwnedString::MaybeOwnedString
            ((MaybeOwnedString *)(this + 8),(MaybeOwnedString *)param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x40) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x50) = uVar1;
  *(undefined8 *)this = 1;
  return this;
}

// StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_> @ 14fb91a40

/* public: __cdecl absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> >::StatusOr<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> ><struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> >(struct std::in_place_t,struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
* __thiscall
absl::lts_20240722::
StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
::
StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
          (StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
           *this,in_place_t param_1,
          LocationWith<google::protobuf::json_internal::MaybeOwnedString> *param_2)

{
  undefined8 uVar1;
  
  google::protobuf::json_internal::MaybeOwnedString::MaybeOwnedString
            ((MaybeOwnedString *)(this + 8),(MaybeOwnedString *)param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(this + 0x40) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(this + 0x50) = uVar1;
  *(undefined8 *)this = 1;
  return this;
}

// StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_> @ 14fb91aa0

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> >::StatusOrData<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> ><struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> >(struct std::in_place_t,struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> && __ptr64) __ptr64 */

StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
* __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
::
StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
          (StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
           *this,in_place_t param_1,
          LocationWith<google::protobuf::json_internal::MaybeOwnedString> *param_2)

{
  undefined8 uVar1;
  
  google::protobuf::json_internal::MaybeOwnedString::MaybeOwnedString
            ((MaybeOwnedString *)(this + 8),(MaybeOwnedString *)param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(this + 0x40) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(this + 0x50) = uVar1;
  *(undefined8 *)this = 1;
  return this;
}

// variant<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned><std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0> @ 14fb91b00

/* public: __cdecl std::variant<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned>::variant<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct
   google::protobuf::json_internal::MaybeOwnedString::StreamOwned><class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,0>(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > && __ptr64)
   __ptr64 */

variant<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
* __thiscall
std::
variant<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
::
variant<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned><std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,0>
          (variant<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
           *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  undefined8 uVar1;
  ulong64 uVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar1 = *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8);
  *(char **)this = (param_1->_Mypair)._Myval2._Bx._Ptr;
  *(undefined8 *)(this + 8) = uVar1;
  uVar2 = (param_1->_Mypair)._Myval2._Myres;
  *(ulong64 *)(this + 0x10) = (param_1->_Mypair)._Myval2._Mysize;
  *(ulong64 *)(this + 0x18) = uVar2;
  (param_1->_Mypair)._Myval2._Mysize = 0;
  (param_1->_Mypair)._Myval2._Myres = 0xf;
  (param_1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  this[0x20] = (variant<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                )0x0;
  return this;
}

// StatusOr<google::protobuf::json_internal::MaybeOwnedString><google::protobuf::json_internal::MaybeOwnedString,0> @ 14fb91b40

/* public: __cdecl absl::lts_20240722::StatusOr<class
   google::protobuf::json_internal::MaybeOwnedString>::StatusOr<class
   google::protobuf::json_internal::MaybeOwnedString><class
   google::protobuf::json_internal::MaybeOwnedString,0>(class
   google::protobuf::json_internal::MaybeOwnedString && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::MaybeOwnedString> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::MaybeOwnedString>::
StatusOr<google::protobuf::json_internal::MaybeOwnedString><google::protobuf::json_internal::MaybeOwnedString,0>
          (StatusOr<google::protobuf::json_internal::MaybeOwnedString> *this,
          MaybeOwnedString *param_1)

{
  google::protobuf::json_internal::MaybeOwnedString::MaybeOwnedString
            ((MaybeOwnedString *)(this + 8),param_1);
  *(undefined8 *)this = 1;
  return this;
}

// StatusOr<google::protobuf::json_internal::MaybeOwnedString><google::protobuf::json_internal::MaybeOwnedString> @ 14fb91b70

/* public: __cdecl absl::lts_20240722::StatusOr<class
   google::protobuf::json_internal::MaybeOwnedString>::StatusOr<class
   google::protobuf::json_internal::MaybeOwnedString><class
   google::protobuf::json_internal::MaybeOwnedString>(struct std::in_place_t,class
   google::protobuf::json_internal::MaybeOwnedString && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::MaybeOwnedString> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::MaybeOwnedString>::
StatusOr<google::protobuf::json_internal::MaybeOwnedString><google::protobuf::json_internal::MaybeOwnedString>
          (StatusOr<google::protobuf::json_internal::MaybeOwnedString> *this,in_place_t param_1,
          MaybeOwnedString *param_2)

{
  google::protobuf::json_internal::MaybeOwnedString::MaybeOwnedString
            ((MaybeOwnedString *)(this + 8),param_2);
  *(undefined8 *)this = 1;
  return this;
}

// StatusOrData<google::protobuf::json_internal::MaybeOwnedString><google::protobuf::json_internal::MaybeOwnedString> @ 14fb91ba0

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::json_internal::MaybeOwnedString>::StatusOrData<class
   google::protobuf::json_internal::MaybeOwnedString><class
   google::protobuf::json_internal::MaybeOwnedString>(struct std::in_place_t,class
   google::protobuf::json_internal::MaybeOwnedString && __ptr64) __ptr64 */

StatusOrData<google::protobuf::json_internal::MaybeOwnedString> * __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::MaybeOwnedString>::
StatusOrData<google::protobuf::json_internal::MaybeOwnedString><google::protobuf::json_internal::MaybeOwnedString>
          (StatusOrData<google::protobuf::json_internal::MaybeOwnedString> *this,in_place_t param_1,
          MaybeOwnedString *param_2)

{
  google::protobuf::json_internal::MaybeOwnedString::MaybeOwnedString
            ((MaybeOwnedString *)(this + 8),param_2);
  *(undefined8 *)this = 1;
  return this;
}

// StatusOr<unsigned_short><absl::lts_20240722::Status,0> @ 14fb91bd0

/* public: __cdecl absl::lts_20240722::StatusOr<unsigned short>::StatusOr<unsigned short><class
   absl::lts_20240722::Status,0>(class absl::lts_20240722::Status && __ptr64) __ptr64 */

StatusOr<unsigned_short> * __thiscall
absl::lts_20240722::StatusOr<unsigned_short>::StatusOr<unsigned_short><absl::lts_20240722::Status,0>
          (StatusOr<unsigned_short> *this,Status *param_1)

{
  *(ulong64 *)this = param_1->rep_;
  param_1->rep_ = 0x37;
  if (*(longlong *)this == 1) {
    internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// StatusOr<google::protobuf::json_internal::LocationWith<double>_><absl::lts_20240722::Status,0> @ 14fb91c10

/* public: __cdecl absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<double> >::StatusOr<struct
   google::protobuf::json_internal::LocationWith<double> ><class absl::lts_20240722::Status,0>(class
   absl::lts_20240722::Status && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::LocationWith<double>_> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::LocationWith<double>_>::
StatusOr<google::protobuf::json_internal::LocationWith<double>_><absl::lts_20240722::Status,0>
          (StatusOr<google::protobuf::json_internal::LocationWith<double>_> *this,Status *param_1)

{
  *(ulong64 *)this = param_1->rep_;
  param_1->rep_ = 0x37;
  if (*(longlong *)this == 1) {
    internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><absl::lts_20240722::Status,0> @ 14fb91c50

/* public: __cdecl absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> >::StatusOr<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> ><class absl::lts_20240722::Status,0>(class
   absl::lts_20240722::Status && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
* __thiscall
absl::lts_20240722::
StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
::
StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><absl::lts_20240722::Status,0>
          (StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
           *this,Status *param_1)

{
  *(ulong64 *)this = param_1->rep_;
  param_1->rep_ = 0x37;
  if (*(longlong *)this == 1) {
    internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// StatusOr<google::protobuf::json_internal::JsonLexer::Kind><absl::lts_20240722::Status,0> @ 14fb91c90

/* public: __cdecl absl::lts_20240722::StatusOr<enum
   google::protobuf::json_internal::JsonLexer::Kind>::StatusOr<enum
   google::protobuf::json_internal::JsonLexer::Kind><class absl::lts_20240722::Status,0>(class
   absl::lts_20240722::Status && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::JsonLexer::Kind> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::JsonLexer::Kind>::
StatusOr<google::protobuf::json_internal::JsonLexer::Kind><absl::lts_20240722::Status,0>
          (StatusOr<google::protobuf::json_internal::JsonLexer::Kind> *this,Status *param_1)

{
  *(ulong64 *)this = param_1->rep_;
  param_1->rep_ = 0x37;
  if (*(longlong *)this == 1) {
    internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// StatusOrData<unsigned_short><absl::lts_20240722::Status,0> @ 14fb91cd0

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<unsigned
   short>::StatusOrData<unsigned short><class absl::lts_20240722::Status,0>(class
   absl::lts_20240722::Status && __ptr64) __ptr64 */

StatusOrData<unsigned_short> * __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<unsigned_short>::
StatusOrData<unsigned_short><absl::lts_20240722::Status,0>
          (StatusOrData<unsigned_short> *this,Status *param_1)

{
  *(ulong64 *)this = param_1->rep_;
  param_1->rep_ = 0x37;
  if (*(longlong *)this == 1) {
    Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// StatusOrData<google::protobuf::json_internal::LocationWith<double>_><absl::lts_20240722::Status,0> @ 14fb91d10

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<struct
   google::protobuf::json_internal::LocationWith<double> >::StatusOrData<struct
   google::protobuf::json_internal::LocationWith<double> ><class absl::lts_20240722::Status,0>(class
   absl::lts_20240722::Status && __ptr64) __ptr64 */

StatusOrData<google::protobuf::json_internal::LocationWith<double>_> * __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::LocationWith<double>_>::
StatusOrData<google::protobuf::json_internal::LocationWith<double>_><absl::lts_20240722::Status,0>
          (StatusOrData<google::protobuf::json_internal::LocationWith<double>_> *this,
          Status *param_1)

{
  *(ulong64 *)this = param_1->rep_;
  param_1->rep_ = 0x37;
  if (*(longlong *)this == 1) {
    Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// StatusOrData<google::protobuf::json_internal::JsonLexer::Kind><absl::lts_20240722::Status,0> @ 14fb91d50

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<enum
   google::protobuf::json_internal::JsonLexer::Kind>::StatusOrData<enum
   google::protobuf::json_internal::JsonLexer::Kind><class absl::lts_20240722::Status,0>(class
   absl::lts_20240722::Status && __ptr64) __ptr64 */

StatusOrData<google::protobuf::json_internal::JsonLexer::Kind> * __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::JsonLexer::Kind>::
StatusOrData<google::protobuf::json_internal::JsonLexer::Kind><absl::lts_20240722::Status,0>
          (StatusOrData<google::protobuf::json_internal::JsonLexer::Kind> *this,Status *param_1)

{
  *(ulong64 *)this = param_1->rep_;
  param_1->rep_ = 0x37;
  if (*(longlong *)this == 1) {
    Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// StatusOr<google::protobuf::json_internal::JsonLexer::Kind><google::protobuf::json_internal::JsonLexer::Kind,0> @ 14fb91d90

/* public: __cdecl absl::lts_20240722::StatusOr<enum
   google::protobuf::json_internal::JsonLexer::Kind>::StatusOr<enum
   google::protobuf::json_internal::JsonLexer::Kind><enum
   google::protobuf::json_internal::JsonLexer::Kind,0>(enum
   google::protobuf::json_internal::JsonLexer::Kind && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::JsonLexer::Kind> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::JsonLexer::Kind>::
StatusOr<google::protobuf::json_internal::JsonLexer::Kind><google::protobuf::json_internal::JsonLexer::Kind,0>
          (StatusOr<google::protobuf::json_internal::JsonLexer::Kind> *this,Kind *param_1)

{
  *(Kind *)(this + 8) = *param_1;
  *(undefined8 *)this = 1;
  return this;
}

// StatusOr<google::protobuf::json_internal::JsonLexer::Kind><google::protobuf::json_internal::JsonLexer::Kind> @ 14fb91db0

/* public: __cdecl absl::lts_20240722::StatusOr<enum
   google::protobuf::json_internal::JsonLexer::Kind>::StatusOr<enum
   google::protobuf::json_internal::JsonLexer::Kind><enum
   google::protobuf::json_internal::JsonLexer::Kind>(struct std::in_place_t,enum
   google::protobuf::json_internal::JsonLexer::Kind && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::JsonLexer::Kind> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::JsonLexer::Kind>::
StatusOr<google::protobuf::json_internal::JsonLexer::Kind><google::protobuf::json_internal::JsonLexer::Kind>
          (StatusOr<google::protobuf::json_internal::JsonLexer::Kind> *this,in_place_t param_1,
          Kind *param_2)

{
  *(Kind *)(this + 8) = *param_2;
  *(undefined8 *)this = 1;
  return this;
}

// StatusOrData<google::protobuf::json_internal::JsonLexer::Kind><google::protobuf::json_internal::JsonLexer::Kind> @ 14fb91dd0

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<enum
   google::protobuf::json_internal::JsonLexer::Kind>::StatusOrData<enum
   google::protobuf::json_internal::JsonLexer::Kind><enum
   google::protobuf::json_internal::JsonLexer::Kind>(struct std::in_place_t,enum
   google::protobuf::json_internal::JsonLexer::Kind && __ptr64) __ptr64 */

StatusOrData<google::protobuf::json_internal::JsonLexer::Kind> * __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::JsonLexer::Kind>::
StatusOrData<google::protobuf::json_internal::JsonLexer::Kind><google::protobuf::json_internal::JsonLexer::Kind>
          (StatusOrData<google::protobuf::json_internal::JsonLexer::Kind> *this,in_place_t param_1,
          Kind *param_2)

{
  *(Kind *)(this + 8) = *param_2;
  *(undefined8 *)this = 1;
  return this;
}

// Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067>_> @ 14fb91df0

/* public: static class absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl const &
   __ptr64 __cdecl absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::Extract<class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067> >(class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067> const & __ptr64) */

UntypedFormatSpecImpl * __cdecl
absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::
Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067>_>
          (FormatSpecTemplate<131067> *param_1)

{
  return (UntypedFormatSpecImpl *)param_1;
}

// Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355,655355,524292>_> @ 14fb91e00

/* public: static class absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl const &
   __ptr64 __cdecl absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::Extract<class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355,655355,524292> >(class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355,655355,524292> const &
   __ptr64) */

UntypedFormatSpecImpl * __cdecl
absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::
Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355,655355,524292>_>
          (FormatSpecTemplate<655355,655355,655355,524292> *param_1)

{
  return (UntypedFormatSpecImpl *)param_1;
}

// MakeStatus<> @ 14fb91e10

/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<unsigned
   short>::MakeStatus<>(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<unsigned_short>::MakeStatus<>
          (StatusOrData<unsigned_short> *this)

{
  *(undefined8 *)this = 1;
  return;
}

// MakeStatus<> @ 14fb91e20

/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<struct
   google::protobuf::json_internal::LocationWith<double> >::MakeStatus<>(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::LocationWith<double>_>::MakeStatus<>
          (StatusOrData<google::protobuf::json_internal::LocationWith<double>_> *this)

{
  *(undefined8 *)this = 1;
  return;
}

// MakeStatus<> @ 14fb91e30

/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> >::MakeStatus<>(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
::MakeStatus<>(StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
               *this)

{
  *(undefined8 *)this = 1;
  return;
}

// MakeStatus<> @ 14fb91e40

/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::json_internal::MaybeOwnedString>::MakeStatus<>(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::MaybeOwnedString>::MakeStatus<>
          (StatusOrData<google::protobuf::json_internal::MaybeOwnedString> *this)

{
  *(undefined8 *)this = 1;
  return;
}

// MakeStatus<> @ 14fb91e50

/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<enum
   google::protobuf::json_internal::JsonLexer::Kind>::MakeStatus<>(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::JsonLexer::Kind>::MakeStatus<>
          (StatusOrData<google::protobuf::json_internal::JsonLexer::Kind> *this)

{
  *(undefined8 *)this = 1;
  return;
}

// MakeStatus<absl::lts_20240722::Status> @ 14fb91e60

/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> >::MakeStatus<class
   absl::lts_20240722::Status>(class absl::lts_20240722::Status && __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
::MakeStatus<absl::lts_20240722::Status>
          (StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
           *this,Status *param_1)

{
  *(ulong64 *)this = param_1->rep_;
  param_1->rep_ = 0x37;
  return;
}

// StrAppendFormat<unsigned___int64,unsigned___int64,unsigned___int64,std::basic_string_view<char,std::char_traits<char>_>_> @ 14fb91e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __ptr64
   __cdecl absl::lts_20240722::StrAppendFormat<unsigned __int64,unsigned __int64,unsigned
   __int64,class std::basic_string_view<char,struct std::char_traits<char> > >(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64,class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355,655355,524292> const &
   __ptr64,unsigned __int64 const & __ptr64,unsigned __int64 const & __ptr64,unsigned __int64 const
   & __ptr64,class std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::
StrAppendFormat<unsigned___int64,unsigned___int64,unsigned___int64,std::basic_string_view<char,std::char_traits<char>_>_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1,
          FormatSpecTemplate<655355,655355,655355,524292> *param_2,__uint64 *param_3,
          __uint64 *param_4,__uint64 *param_5,
          basic_string_view<char,std::char_traits<char>_> *param_6)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  undefined1 auStack_98 [32];
  __uint64 *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  __uint64 local_58;
  code *local_50;
  __uint64 local_48;
  code *local_40;
  __uint64 local_38;
  code *local_30;
  basic_string_view<char,std::char_traits<char>_> *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_58 = *param_3;
  local_68 = *(undefined4 *)param_2;
  uStack_64 = *(undefined4 *)(param_2 + 4);
  uStack_60 = *(undefined4 *)(param_2 + 8);
  uStack_5c = *(undefined4 *)(param_2 + 0xc);
  local_48 = *param_4;
  local_50 = str_format_internal::FormatArgImpl::Dispatch<unsigned___int64>;
  local_40 = str_format_internal::FormatArgImpl::Dispatch<unsigned___int64>;
  local_38 = *param_5;
  local_28 = param_6;
  local_20 = str_format_internal::FormatArgImpl::
             Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
  local_78 = &local_58;
  local_30 = str_format_internal::FormatArgImpl::Dispatch<unsigned___int64>;
  uStack_70 = 4;
  pbVar1 = str_format_internal::AppendPack(param_1,&local_68,&local_78);
  return pbVar1;
}

// StrFormat<char> @ 14fb91f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::StrFormat<char>(class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067> const & __ptr64,char const &
   __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::StrFormat<char>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          FormatSpecTemplate<131067> *param_1,char *param_2)

{
  undefined1 auStack_78 [32];
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char local_28;
  undefined7 uStack_27;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)param_1;
  uStack_34 = *(undefined4 *)(param_1 + 4);
  uStack_30 = *(undefined4 *)(param_1 + 8);
  uStack_2c = *(undefined4 *)(param_1 + 0xc);
  _local_28 = CONCAT71((int7)((ulonglong)__return_storage_ptr__ >> 8),*param_2);
  local_20 = str_format_internal::FormatArgImpl::Dispatch<char>;
  local_58 = &local_28;
  uStack_50 = 1;
  str_format_internal::FormatPack(local_58._0_4_,&local_38,&local_58);
  return __return_storage_ptr__;
}

// FUN_14fb91fd0 @ 14fb91fd0

/* WARNING: Removing unreachable block (ram,0x00014fb92229) */

Status * FUN_14fb91fd0(longlong param_1,Status *param_2)

{
  int iVar1;
  ulonglong uVar2;
  Status this;
  Status SVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Status local_d8;
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  local_d0;
  undefined7 uStack_cf;
  ulong64 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  char local_b0;
  ZeroCopyBufferedStream *local_a8;
  ulonglong local_98;
  ulong64 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  char local_78;
  ZeroCopyBufferedStream *local_70;
  ulong64 local_68;
  ulong64 uStack_60;
  ulong64 local_58;
  ulong64 uStack_50;
  ulong64 local_40;
  ulong64 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_40 = *(ulong64 *)(param_1 + 0x60);
  uStack_38 = *(ulong64 *)(param_1 + 0x68);
  local_30 = *(undefined4 *)(param_1 + 0x70);
  uStack_2c = *(undefined4 *)(param_1 + 0x74);
  uStack_28 = *(undefined4 *)(param_1 + 0x78);
  uStack_24 = *(undefined4 *)(param_1 + 0x7c);
  FUN_14fb92240(local_30,&local_d8);
  this.rep_ = local_d8.rep_;
  SVar3.rep_ = (ulong64)(local_d8.rep_ & 0xff);
  if ((local_d8.rep_ & 1) == 0) {
    LOCK();
    *(int *)local_d8.rep_ = *(int *)local_d8.rep_ + 1;
    UNLOCK();
    SVar3.rep_ = local_d8.rep_;
  }
  if ((StatusRep *)local_d8.rep_ == (StatusRep *)0x1) {
    local_78 = -1;
    uVar4 = (undefined4)uStack_80;
    uVar5 = uStack_80._4_4_;
    if (local_b0 == -1) {
      uVar6 = (undefined4)local_88;
      uVar7 = local_88._4_4_;
    }
    else {
      local_98 = CONCAT71(uStack_cf,local_d0);
      uStack_90 = uStack_c8;
      uVar6 = (undefined4)local_c0;
      uVar7 = local_c0._4_4_;
      if (local_b0 == '\0') {
        uVar4 = (undefined4)uStack_b8;
        uVar5 = uStack_b8._4_4_;
        local_88 = local_c0;
        uStack_80 = uStack_b8;
        local_c0 = 0;
        uStack_b8 = 0xf;
        local_d0 = (_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                    )0x0;
        local_78 = '\0';
      }
      else {
        local_78 = '\x01';
        local_88 = local_c0;
      }
    }
    local_70 = local_a8;
    if (local_a8 != (ZeroCopyBufferedStream *)0x0) {
      iVar1 = *(int *)(local_a8 + 0x4c);
      *(int *)(local_a8 + 0x4c) = *(int *)(local_a8 + 0x4c) + 1;
      if (iVar1 == 0) {
        *(undefined8 *)(local_a8 + 0x40) = *(undefined8 *)(local_a8 + 0x38);
      }
      uVar4 = (undefined4)uStack_80;
      uVar5 = uStack_80._4_4_;
      uVar6 = (undefined4)local_88;
      uVar7 = local_88._4_4_;
    }
    local_68 = local_40;
    uStack_60 = uStack_38;
    local_58 = CONCAT44(uStack_2c,local_30);
    uStack_50 = CONCAT44(uStack_24,uStack_28);
    *(undefined1 *)&param_2[5].rep_ = 0xff;
    if (local_78 != -1) {
      param_2[1].rep_ = local_98;
      param_2[2].rep_ = uStack_90;
      if (local_78 == '\0') {
        *(undefined4 *)&param_2[3].rep_ = uVar6;
        *(undefined4 *)((longlong)&param_2[3].rep_ + 4) = uVar7;
        *(undefined4 *)&param_2[4].rep_ = uVar4;
        *(undefined4 *)((longlong)&param_2[4].rep_ + 4) = uVar5;
        local_88 = 0;
        uStack_80 = 0xf;
        local_98 = local_98 & 0xffffffffffffff00;
        *(undefined1 *)&param_2[5].rep_ = 0;
      }
      else {
        *(undefined4 *)&param_2[3].rep_ = uVar6;
        *(undefined4 *)((longlong)&param_2[3].rep_ + 4) = uVar7;
        *(undefined1 *)&param_2[5].rep_ = 1;
      }
    }
    param_2[6].rep_ = (ulong64)local_a8;
    if ((local_a8 != (ZeroCopyBufferedStream *)0x0) &&
       (iVar1 = *(int *)(local_a8 + 0x4c), *(int *)(local_a8 + 0x4c) = *(int *)(local_a8 + 0x4c) + 1
       , iVar1 == 0)) {
      *(undefined8 *)(local_a8 + 0x40) = *(undefined8 *)(local_a8 + 0x38);
    }
    param_2[7].rep_ = local_40;
    param_2[8].rep_ = uStack_38;
    param_2[9].rep_ = local_58;
    param_2[10].rep_ = uStack_50;
    param_2->rep_ = 1;
    if (local_a8 != (ZeroCopyBufferedStream *)0x0) {
      google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer(local_a8);
      local_70 = (ZeroCopyBufferedStream *)0x0;
    }
    std::
    _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
    ::_Destroy((_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                *)&local_98);
    if ((StatusRep *)local_d8.rep_ == (StatusRep *)&DAT_00000001) {
      if (local_a8 != (ZeroCopyBufferedStream *)0x0) {
        google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer(local_a8);
        local_a8 = (ZeroCopyBufferedStream *)0x0;
      }
      std::
      _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
      ::_Destroy(&local_d0);
    }
    else if ((local_d8.rep_ & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_d8.rep_);
    }
  }
  else {
    param_2->rep_ = local_d8.rep_;
    uVar2 = local_d8.rep_ & 1;
    if ((local_d8.rep_ & 1) == 0) {
      LOCK();
      *(int *)local_d8.rep_ = *(int *)local_d8.rep_ + 1;
      UNLOCK();
      SVar3.rep_ = local_d8.rep_ & 0xff;
    }
    if (param_2->rep_ == 1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(param_2);
      SVar3.rep_ = local_d8.rep_ & 0xff;
    }
    if (uVar2 == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)this.rep_);
      SVar3.rep_ = local_d8.rep_ & 0xff;
    }
    if ((StatusRep *)local_d8.rep_ == (StatusRep *)&DAT_00000001) {
      if (local_a8 != (ZeroCopyBufferedStream *)0x0) {
        google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer(local_a8);
        local_a8 = (ZeroCopyBufferedStream *)0x0;
      }
      std::
      _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
      ::_Destroy(&local_d0);
    }
    else if ((SVar3.rep_ & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_d8.rep_);
    }
  }
  return param_2;
}

// FUN_14fb92240 @ 14fb92240

/* WARNING: Type propagation algorithm not settling */

Status * FUN_14fb92240(StatusRep *param_1,Status *param_2)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  longlong *plVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  Status local_res8;
  Status *local_res10;
  StatusRep *local_res20;
  StatusRep *local_60;
  ZeroCopyBufferedStream *local_58;
  longlong local_50;
  undefined1 local_40;
  StatusRep *local_38;
  
  pcVar2 = param_1[1].message_._Mypair._Myval2._Bx._Ptr;
  iVar1 = *(int *)((longlong)&param_1[1].message_._Mypair._Myval2._Mysize + 4);
  *(int *)((longlong)&param_1[1].message_._Mypair._Myval2._Mysize + 4) = iVar1 + 1;
  local_res10 = param_2;
  local_res20 = param_1;
  if (iVar1 == 0) {
    *(char **)((longlong)&param_1[1].message_._Mypair._Myval2._Bx + 8) = pcVar2;
  }
  while( true ) {
    plVar5 = (longlong *)
             google::protobuf::json_internal::ZeroCopyBufferedStream::BufferAtLeast
                       ((ZeroCopyBufferedStream *)param_1,(__uint64)&local_60);
    lVar3 = *plVar5;
    if (local_60 == (StatusRep *)&DAT_00000001) {
      if (local_58 != (ZeroCopyBufferedStream *)0x0) {
        google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer(local_58);
      }
    }
    else if (((ulonglong)local_60 & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref(local_60);
    }
    pcVar4 = param_1[1].message_._Mypair._Myval2._Bx._Ptr;
    if (lVar3 != 1) break;
    pcVar8 = (param_1->message_)._Mypair._Myval2._Bx._Ptr;
    pcVar7 = *(char **)((longlong)&(param_1->message_)._Mypair._Myval2._Bx + 8);
    pcVar6 = pcVar4;
    if (*(char *)&param_1[1].ref_ != '\0') {
      pcVar8 = (char *)(param_1->message_)._Mypair._Myval2._Mysize;
      pcVar7 = (char *)((param_1->message_)._Mypair._Myval2._Myres - (longlong)pcVar8);
      pcVar6 = pcVar4 + -*(longlong *)((longlong)&param_1[1].message_._Mypair._Myval2._Bx + 8);
    }
    if (pcVar7 < pcVar6) {
                    /* WARNING: Subroutine does not return */
      std::basic_string_view<char,std::char_traits<char>_>::_Xran();
    }
    if ((pcVar8[(longlong)pcVar6] != 0x5f) &&
       ((*(byte *)((longlong)&absl::lts_20240722::ascii_internal::kPropertyBits +
                  (ulonglong)(byte)pcVar8[(longlong)pcVar6]) & 4) == 0)) break;
    google::protobuf::json_internal::ZeroCopyBufferedStream::Advance
              ((ZeroCopyBufferedStream *)param_1,(__uint64)&local_res8);
    if ((StatusRep *)local_res8.rep_ != (StatusRep *)&DAT_00000001) {
      param_2->rep_ = local_res8.rep_;
      if ((local_res8.rep_ & 1) == 0) {
        LOCK();
        *(int *)local_res8.rep_ = *(int *)local_res8.rep_ + 1;
        UNLOCK();
      }
      if (param_2->rep_ == 1) {
        absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(param_2);
      }
      if ((local_res8.rep_ & 1) == 0) {
        absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_res8.rep_);
      }
      google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer
                ((ZeroCopyBufferedStream *)param_1);
      return param_2;
    }
  }
  iVar1 = *(int *)((longlong)&param_1[1].message_._Mypair._Myval2._Mysize + 4);
  if (iVar1 == 0) {
    *(char **)((longlong)&param_1[1].message_._Mypair._Myval2._Bx + 8) = pcVar4;
  }
  local_50 = (longlong)pcVar4 - (longlong)pcVar2;
  local_40 = 1;
  *(int *)((longlong)&param_1[1].message_._Mypair._Myval2._Mysize + 4) = iVar1 + 2;
  if (iVar1 == -1) {
    *(char **)((longlong)&param_1[1].message_._Mypair._Myval2._Bx + 8) = pcVar4;
  }
  local_60 = param_1;
  local_58 = (ZeroCopyBufferedStream *)pcVar2;
  local_38 = param_1;
  google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer
            ((ZeroCopyBufferedStream *)param_1);
  google::protobuf::json_internal::MaybeOwnedString::MaybeOwnedString
            ((MaybeOwnedString *)(param_2 + 1),(MaybeOwnedString *)&local_60);
  param_2->rep_ = 1;
  if (local_38 != (StatusRep *)0x0) {
    google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer
              ((ZeroCopyBufferedStream *)local_38);
    local_38 = (StatusRep *)0x0;
  }
  std::
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  ::_Destroy((_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
              *)&local_60);
  google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer
            ((ZeroCopyBufferedStream *)param_1);
  return param_2;
}

// FUN_14fb92430 @ 14fb92430

/* WARNING: Removing unreachable block (ram,0x00014fb92689) */

Status * FUN_14fb92430(longlong param_1,Status *param_2)

{
  int iVar1;
  ulonglong uVar2;
  Status this;
  Status SVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Status local_d8;
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  local_d0;
  undefined7 uStack_cf;
  ulong64 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  char local_b0;
  ZeroCopyBufferedStream *local_a8;
  ulonglong local_98;
  ulong64 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  char local_78;
  ZeroCopyBufferedStream *local_70;
  ulong64 local_68;
  ulong64 uStack_60;
  ulong64 local_58;
  ulong64 uStack_50;
  ulong64 local_40;
  ulong64 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_40 = *(ulong64 *)(param_1 + 0x60);
  uStack_38 = *(ulong64 *)(param_1 + 0x68);
  local_30 = *(undefined4 *)(param_1 + 0x70);
  uStack_2c = *(undefined4 *)(param_1 + 0x74);
  uStack_28 = *(undefined4 *)(param_1 + 0x78);
  uStack_24 = *(undefined4 *)(param_1 + 0x7c);
  FUN_14fb926a0(local_30,&local_d8);
  this.rep_ = local_d8.rep_;
  SVar3.rep_ = (ulong64)(local_d8.rep_ & 0xff);
  if ((local_d8.rep_ & 1) == 0) {
    LOCK();
    *(int *)local_d8.rep_ = *(int *)local_d8.rep_ + 1;
    UNLOCK();
    SVar3.rep_ = local_d8.rep_;
  }
  if ((StatusRep *)local_d8.rep_ == (StatusRep *)0x1) {
    local_78 = -1;
    uVar4 = (undefined4)uStack_80;
    uVar5 = uStack_80._4_4_;
    if (local_b0 == -1) {
      uVar6 = (undefined4)local_88;
      uVar7 = local_88._4_4_;
    }
    else {
      local_98 = CONCAT71(uStack_cf,local_d0);
      uStack_90 = uStack_c8;
      uVar6 = (undefined4)local_c0;
      uVar7 = local_c0._4_4_;
      if (local_b0 == '\0') {
        uVar4 = (undefined4)uStack_b8;
        uVar5 = uStack_b8._4_4_;
        local_88 = local_c0;
        uStack_80 = uStack_b8;
        local_c0 = 0;
        uStack_b8 = 0xf;
        local_d0 = (_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                    )0x0;
        local_78 = '\0';
      }
      else {
        local_78 = '\x01';
        local_88 = local_c0;
      }
    }
    local_70 = local_a8;
    if (local_a8 != (ZeroCopyBufferedStream *)0x0) {
      iVar1 = *(int *)(local_a8 + 0x4c);
      *(int *)(local_a8 + 0x4c) = *(int *)(local_a8 + 0x4c) + 1;
      if (iVar1 == 0) {
        *(undefined8 *)(local_a8 + 0x40) = *(undefined8 *)(local_a8 + 0x38);
      }
      uVar4 = (undefined4)uStack_80;
      uVar5 = uStack_80._4_4_;
      uVar6 = (undefined4)local_88;
      uVar7 = local_88._4_4_;
    }
    local_68 = local_40;
    uStack_60 = uStack_38;
    local_58 = CONCAT44(uStack_2c,local_30);
    uStack_50 = CONCAT44(uStack_24,uStack_28);
    *(undefined1 *)&param_2[5].rep_ = 0xff;
    if (local_78 != -1) {
      param_2[1].rep_ = local_98;
      param_2[2].rep_ = uStack_90;
      if (local_78 == '\0') {
        *(undefined4 *)&param_2[3].rep_ = uVar6;
        *(undefined4 *)((longlong)&param_2[3].rep_ + 4) = uVar7;
        *(undefined4 *)&param_2[4].rep_ = uVar4;
        *(undefined4 *)((longlong)&param_2[4].rep_ + 4) = uVar5;
        local_88 = 0;
        uStack_80 = 0xf;
        local_98 = local_98 & 0xffffffffffffff00;
        *(undefined1 *)&param_2[5].rep_ = 0;
      }
      else {
        *(undefined4 *)&param_2[3].rep_ = uVar6;
        *(undefined4 *)((longlong)&param_2[3].rep_ + 4) = uVar7;
        *(undefined1 *)&param_2[5].rep_ = 1;
      }
    }
    param_2[6].rep_ = (ulong64)local_a8;
    if ((local_a8 != (ZeroCopyBufferedStream *)0x0) &&
       (iVar1 = *(int *)(local_a8 + 0x4c), *(int *)(local_a8 + 0x4c) = *(int *)(local_a8 + 0x4c) + 1
       , iVar1 == 0)) {
      *(undefined8 *)(local_a8 + 0x40) = *(undefined8 *)(local_a8 + 0x38);
    }
    param_2[7].rep_ = local_40;
    param_2[8].rep_ = uStack_38;
    param_2[9].rep_ = local_58;
    param_2[10].rep_ = uStack_50;
    param_2->rep_ = 1;
    if (local_a8 != (ZeroCopyBufferedStream *)0x0) {
      google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer(local_a8);
      local_70 = (ZeroCopyBufferedStream *)0x0;
    }
    std::
    _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
    ::_Destroy((_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                *)&local_98);
    if ((StatusRep *)local_d8.rep_ == (StatusRep *)&DAT_00000001) {
      if (local_a8 != (ZeroCopyBufferedStream *)0x0) {
        google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer(local_a8);
        local_a8 = (ZeroCopyBufferedStream *)0x0;
      }
      std::
      _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
      ::_Destroy(&local_d0);
    }
    else if ((local_d8.rep_ & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_d8.rep_);
    }
  }
  else {
    param_2->rep_ = local_d8.rep_;
    uVar2 = local_d8.rep_ & 1;
    if ((local_d8.rep_ & 1) == 0) {
      LOCK();
      *(int *)local_d8.rep_ = *(int *)local_d8.rep_ + 1;
      UNLOCK();
      SVar3.rep_ = local_d8.rep_ & 0xff;
    }
    if (param_2->rep_ == 1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(param_2);
      SVar3.rep_ = local_d8.rep_ & 0xff;
    }
    if (uVar2 == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)this.rep_);
      SVar3.rep_ = local_d8.rep_ & 0xff;
    }
    if ((StatusRep *)local_d8.rep_ == (StatusRep *)&DAT_00000001) {
      if (local_a8 != (ZeroCopyBufferedStream *)0x0) {
        google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer(local_a8);
        local_a8 = (ZeroCopyBufferedStream *)0x0;
      }
      std::
      _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
      ::_Destroy(&local_d0);
    }
    else if ((SVar3.rep_ & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_d8.rep_);
    }
  }
  return param_2;
}

// FUN_14fb926a0 @ 14fb926a0

/* WARNING: Type propagation algorithm not settling */

Status * FUN_14fb926a0(StatusRep *param_1,Status *param_2,undefined8 param_3)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char cVar9;
  int iVar10;
  Status local_res8;
  Status *local_res10;
  undefined8 local_res18;
  StatusRep *local_res20;
  StatusRep *local_70;
  ZeroCopyBufferedStream *local_68;
  longlong local_60;
  undefined1 local_50;
  StatusRep *local_48;
  
  pcVar2 = param_1[1].message_._Mypair._Myval2._Bx._Ptr;
  iVar10 = *(int *)((longlong)&param_1[1].message_._Mypair._Myval2._Mysize + 4);
  *(int *)((longlong)&param_1[1].message_._Mypair._Myval2._Mysize + 4) = iVar10 + 1;
  if (iVar10 == 0) {
    *(char **)((longlong)&param_1[1].message_._Mypair._Myval2._Bx + 8) = pcVar2;
  }
  local_res18._4_1_ = (char)((ulonglong)param_3 >> 0x20);
  local_res18._0_4_ = (int)param_3;
  cVar9 = local_res18._4_1_;
  iVar10 = (int)local_res18;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_1;
  do {
    plVar5 = (longlong *)
             google::protobuf::json_internal::ZeroCopyBufferedStream::BufferAtLeast
                       ((ZeroCopyBufferedStream *)param_1,(__uint64)&local_70);
    lVar3 = *plVar5;
    if (local_70 == (StatusRep *)&DAT_00000001) {
      if (local_68 != (ZeroCopyBufferedStream *)0x0) {
        google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer(local_68);
      }
    }
    else if (((ulonglong)local_70 & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref(local_70);
    }
    if (lVar3 != 1) goto LAB_14fb9279c;
    pcVar7 = param_1[1].message_._Mypair._Myval2._Bx._Ptr;
    pcVar8 = (param_1->message_)._Mypair._Myval2._Bx._Ptr;
    pcVar6 = *(char **)((longlong)&(param_1->message_)._Mypair._Myval2._Bx + 8);
    if (*(char *)&param_1[1].ref_ != '\0') {
      pcVar7 = pcVar7 + -*(longlong *)((longlong)&param_1[1].message_._Mypair._Myval2._Bx + 8);
      pcVar8 = (char *)(param_1->message_)._Mypair._Myval2._Mysize;
      pcVar6 = (char *)((param_1->message_)._Mypair._Myval2._Myres - (longlong)pcVar8);
    }
    if (pcVar6 < pcVar7) {
                    /* WARNING: Subroutine does not return */
      std::basic_string_view<char,std::char_traits<char>_>::_Xran();
    }
    cVar1 = pcVar8[(longlong)pcVar7];
    if (9 < (byte)(cVar1 - 0x30U)) {
      bVar4 = cVar9 - 0x30;
      if (iVar10 == 0) {
        if (cVar1 == '-') {
          if (bVar4 < 10) goto LAB_14fb9279c;
        }
        else {
          if (9 < bVar4) goto LAB_14fb92860;
          if (cVar1 != '.') goto LAB_14fb92852;
          iVar10 = 1;
        }
      }
      else {
        if ((iVar10 != 2) && (bVar4 < 10)) {
LAB_14fb92852:
          if ((cVar1 + 0xbbU & 0xdf) == 0) {
            iVar10 = 2;
            goto LAB_14fb92878;
          }
        }
LAB_14fb92860:
        if (((cVar9 + 0xbbU & 0xdf) != 0) || ((cVar1 - 0x2bU & 0xfd) != 0)) {
LAB_14fb9279c:
          iVar10 = *(int *)((longlong)&param_1[1].message_._Mypair._Myval2._Mysize + 4);
          if (iVar10 == 0) {
            *(char **)((longlong)&param_1[1].message_._Mypair._Myval2._Bx + 8) =
                 param_1[1].message_._Mypair._Myval2._Bx._Ptr;
          }
          pcVar7 = param_1[1].message_._Mypair._Myval2._Bx._Ptr;
          local_60 = (longlong)pcVar7 - (longlong)pcVar2;
          local_50 = 1;
          *(int *)((longlong)&param_1[1].message_._Mypair._Myval2._Mysize + 4) = iVar10 + 2;
          if (iVar10 == -1) {
            *(char **)((longlong)&param_1[1].message_._Mypair._Myval2._Bx + 8) = pcVar7;
          }
          local_70 = param_1;
          local_68 = (ZeroCopyBufferedStream *)pcVar2;
          local_48 = param_1;
          google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer
                    ((ZeroCopyBufferedStream *)param_1);
          google::protobuf::json_internal::MaybeOwnedString::MaybeOwnedString
                    ((MaybeOwnedString *)(param_2 + 1),(MaybeOwnedString *)&local_70);
          param_2->rep_ = 1;
          if (local_48 != (StatusRep *)0x0) {
            google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer
                      ((ZeroCopyBufferedStream *)local_48);
            local_48 = (StatusRep *)0x0;
          }
          std::
          _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
          ::_Destroy((_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                      *)&local_70);
          google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer
                    ((ZeroCopyBufferedStream *)param_1);
          return param_2;
        }
      }
    }
LAB_14fb92878:
    google::protobuf::json_internal::ZeroCopyBufferedStream::Advance
              ((ZeroCopyBufferedStream *)param_1,(__uint64)&local_res8);
    cVar9 = cVar1;
    if ((StatusRep *)local_res8.rep_ != (StatusRep *)&DAT_00000001) {
      param_2->rep_ = local_res8.rep_;
      if ((local_res8.rep_ & 1) == 0) {
        LOCK();
        *(int *)local_res8.rep_ = *(int *)local_res8.rep_ + 1;
        UNLOCK();
      }
      if (param_2->rep_ == 1) {
        absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(param_2);
      }
      if ((local_res8.rep_ & 1) == 0) {
        absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_res8.rep_);
      }
      google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer
                ((ZeroCopyBufferedStream *)param_1);
      return param_2;
    }
  } while( true );
}

// FUN_14fb92900 @ 14fb92900

undefined8 * FUN_14fb92900(JsonLexer *param_1,undefined8 *param_2,JsonLexer *param_3)

{
  bool bVar1;
  bool bVar2;
  StatusRep *local_res20;
  StatusRep *local_d8;
  StatusRep *local_d0;
  basic_string_view<char,std::char_traits<char>_> local_c8 [2];
  char *local_a8;
  undefined8 uStack_a0;
  char *local_98;
  undefined8 uStack_90;
  char *local_88;
  undefined8 uStack_80;
  char *local_78;
  StatusRep *pSStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  basic_string_view<char,std::char_traits<char>_> local_48;
  basic_string_view<char,std::char_traits<char>_> local_38;
  
  local_a8 = "[";
  uStack_a0 = 1;
  local_68 = 0x506d039c;
  uStack_64 = 1;
  uStack_60 = 1;
  uStack_5c = 0;
  google::protobuf::json_internal::JsonLexer::Expect
            ((JsonLexer *)0x506d039c,&local_res20,&local_68,0);
  if (local_res20 == (StatusRep *)&DAT_00000001) {
    if (*(int *)(param_1 + 0x54) == 0) {
      local_98 = "JSON content was too deeply nested";
      uStack_90 = 0x22;
      local_58 = 0x535db340;
      uStack_54 = 1;
      uStack_50 = 0x22;
      uStack_4c = 0;
      google::protobuf::json_internal::JsonLocation::Invalid
                ((JsonLocation *)(param_1 + 0x60),&local_d8,&local_58,0);
      if (local_d8 != (StatusRep *)&DAT_00000001) {
        *param_2 = local_d8;
        local_d0 = local_d8;
        if (((ulonglong)local_d8 & 1) == 0) {
          LOCK();
          local_d8->ref_ = (atomic<int>)((int)local_d8->ref_ + 1);
          UNLOCK();
        }
        goto LAB_14fb92aa3;
      }
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
    }
    local_88 = "]";
    uStack_80 = 1;
    local_48._Mydata = "]";
    local_48._Mysize = 1;
    bVar1 = google::protobuf::json_internal::JsonLexer::Peek(param_1,&local_48);
    if (!bVar1) {
      bVar1 = true;
      do {
        if (bVar1 == false) {
          local_c8[0]._Mydata = "expected \',\'";
          goto LAB_14fb92ab7;
        }
        google::protobuf::json_internal::JsonLexer::SkipValue(param_3);
        if (local_d0 != (StatusRep *)&DAT_00000001) {
          *param_2 = local_d0;
          if (((ulonglong)local_d0 & 1) == 0) {
            LOCK();
            local_d0->ref_ = (atomic<int>)((int)local_d0->ref_ + 1);
            UNLOCK();
          }
          goto LAB_14fb92aa3;
        }
        local_78 = ",";
        pSStack_70 = local_d0;
        local_38._Mydata = ",";
        local_38._Mysize = (ulong64)local_d0;
        bVar1 = google::protobuf::json_internal::JsonLexer::Peek(param_1,&local_38);
        local_c8[0]._Mydata = "]";
        local_c8[0]._Mysize = 1;
        bVar2 = google::protobuf::json_internal::JsonLexer::Peek(param_1,local_c8);
      } while (!bVar2);
      if ((param_1[0x58] == (JsonLexer)0x0) && (bVar1)) {
        local_c8[0]._Mydata = "expected \']\'";
LAB_14fb92ab7:
        local_c8[0]._Mysize = 0xc;
        google::protobuf::json_internal::JsonLocation::Invalid
                  ((JsonLocation *)(param_1 + 0x60),param_2,local_c8,0);
        return param_2;
      }
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    *param_2 = 1;
  }
  else {
    *param_2 = local_res20;
    local_d0 = local_res20;
    if (((ulonglong)local_res20 & 1) == 0) {
      LOCK();
      local_res20->ref_ = (atomic<int>)((int)local_res20->ref_ + 1);
      UNLOCK();
    }
LAB_14fb92aa3:
    if (((ulonglong)local_d0 & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref(local_d0);
    }
  }
  return param_2;
}

// FUN_14fb92b10 @ 14fb92b10

/* WARNING: Removing unreachable block (ram,0x00014fb93157) */
/* WARNING: Removing unreachable block (ram,0x00014fb93147) */
/* WARNING: Removing unreachable block (ram,0x00014fb92e43) */

ulong64 * FUN_14fb92b10(JsonLexer *param_1,ulong64 *param_2,JsonLexer *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  StatusOr<struct_google::protobuf::json_internal::LocationWith<class_google::protobuf::json_internal::MaybeOwnedString>_>
  *pSVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  StatusRep *local_res20;
  basic_string_view<char,std::char_traits<char>_> local_258;
  StatusRep *local_248;
  StatusRep *local_240;
  StatusRep *local_238;
  StatusRep *local_230;
  longlong local_228;
  ulonglong uStack_220;
  Status local_218;
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  local_210 [40];
  ZeroCopyBufferedStream *local_1e8;
  undefined4 local_1b8;
  Status local_1b0;
  char *local_1a8;
  undefined8 uStack_1a0;
  char *local_198;
  undefined8 uStack_190;
  char *local_188;
  undefined8 uStack_180;
  undefined *local_178;
  undefined8 uStack_170;
  char *local_168;
  StatusRep *pSStack_160;
  char *local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  basic_string_view<char,std::char_traits<char>_> local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  basic_string_view<char,std::char_traits<char>_> local_108;
  basic_string_view<char,std::char_traits<char>_> local_f8;
  StatusRep *local_e8;
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  local_e0 [40];
  ZeroCopyBufferedStream *local_b8;
  StatusRep *local_88;
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  local_80 [40];
  ZeroCopyBufferedStream *local_58;
  
  local_1b8 = 0;
  local_1a8 = "{";
  uStack_1a0 = 1;
  local_148 = 0x50b33188;
  uStack_144 = 1;
  uStack_140 = 1;
  uStack_13c = 0;
  google::protobuf::json_internal::JsonLexer::Expect
            ((JsonLexer *)0x50b33188,&local_res20,&local_148,0);
  if (local_res20 == (StatusRep *)&DAT_00000001) {
    if (*(int *)(param_1 + 0x54) == 0) {
      local_198 = "JSON content was too deeply nested";
      uStack_190 = 0x22;
      local_138 = 0x535db340;
      uStack_134 = 1;
      uStack_130 = 0x22;
      uStack_12c = 0;
      google::protobuf::json_internal::JsonLocation::Invalid
                ((JsonLocation *)(param_1 + 0x60),&local_248,&local_138,0);
      if (local_248 != (StatusRep *)&DAT_00000001) {
        *param_2 = (ulong64)local_248;
        if (((ulonglong)local_248 & 1) == 0) {
          LOCK();
          local_248->ref_ = (atomic<int>)((int)local_248->ref_ + 1);
          UNLOCK();
        }
        bVar8 = ((ulonglong)local_248 & 1) == 0;
        local_res20 = local_248;
        goto LAB_14fb930e5;
      }
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
    }
    local_258._Mydata = "}";
    local_258._Mysize = 1;
    bVar8 = google::protobuf::json_internal::JsonLexer::Peek(param_1,&local_258);
    if (bVar8) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    else {
      bVar8 = true;
      do {
        if (bVar8 == false) {
          local_258._Mydata = "expected \',\'";
          goto LAB_14fb930f6;
        }
        google::protobuf::json_internal::JsonLexer::SkipToToken(param_1);
        if (local_230 != (StatusRep *)&DAT_00000001) {
          *param_2 = (ulong64)local_230;
          if (((ulonglong)local_230 & 1) == 0) {
            LOCK();
            local_230->ref_ = (atomic<int>)((int)local_230->ref_ + 1);
            UNLOCK();
          }
          bVar8 = ((ulonglong)local_230 & 1) == 0;
          local_res20 = local_230;
          goto LAB_14fb930e5;
        }
        local_188 = "";
        uStack_180 = 0;
        local_128._Mydata = "";
        local_128._Mysize = 0;
        puVar2 = (undefined8 *)absl::lts_20240722::Status::Status(&local_1b0,kUnknown,&local_128);
        local_218.rep_ = *puVar2;
        *puVar2 = 0x37;
        if ((StatusRep *)local_218.rep_ == (StatusRep *)&DAT_00000001) {
          absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(&local_218);
        }
        if ((local_1b0.rep_ & 1) == 0) {
          absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_1b0.rep_);
        }
        uVar5 = *(ulonglong *)(param_1 + 0x38);
        local_228 = *(longlong *)(param_1 + 8);
        uStack_220 = *(ulonglong *)(param_1 + 0x10);
        uVar3 = uVar5;
        uVar6 = uStack_220;
        lVar7 = local_228;
        if (param_1[0x30] != (JsonLexer)0x0) {
          uVar3 = uVar5 - *(longlong *)(param_1 + 0x40);
          uVar6 = *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18);
          lVar7 = *(longlong *)(param_1 + 0x18);
        }
        if (uVar6 < uVar3) {
                    /* WARNING: Subroutine does not return */
          std::basic_string_view<char,std::char_traits<char>_>::_Xran();
        }
        if (*(char *)(lVar7 + uVar3) == '\"') {
LAB_14fb92dca:
          pSVar4 = (StatusOr<struct_google::protobuf::json_internal::LocationWith<class_google::protobuf::json_internal::MaybeOwnedString>_>
                    *)google::protobuf::json_internal::JsonLexer::ParseUtf8(param_1);
          absl::lts_20240722::
          StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
          ::operator=((StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                       *)&local_218,pSVar4);
          if (local_88 == (StatusRep *)&DAT_00000001) {
            if (local_58 != (ZeroCopyBufferedStream *)0x0) {
              google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer(local_58);
              local_58 = (ZeroCopyBufferedStream *)0x0;
            }
            std::
            _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
            ::_Destroy(local_80);
          }
          else if (((ulonglong)local_88 & 1) == 0) {
            absl::lts_20240722::status_internal::StatusRep::Unref(local_88);
          }
        }
        else {
          uVar3 = uStack_220;
          lVar7 = local_228;
          if (param_1[0x30] != (JsonLexer)0x0) {
            uVar5 = uVar5 - *(longlong *)(param_1 + 0x40);
            uVar3 = *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18);
            lVar7 = *(longlong *)(param_1 + 0x18);
          }
          if (uVar3 < uVar5) {
                    /* WARNING: Subroutine does not return */
            std::basic_string_view<char,std::char_traits<char>_>::_Xran();
          }
          if (*(char *)(uVar5 + lVar7) == '\'') goto LAB_14fb92dca;
          if (param_1[0x58] == (JsonLexer)0x0) {
            local_258._Mydata = "expected \'\"\'";
            local_258._Mysize = 0xc;
            google::protobuf::json_internal::JsonLocation::Invalid
                      ((JsonLocation *)(param_1 + 0x60),param_2,&local_258,0);
            if ((StatusRep *)local_218.rep_ == (StatusRep *)&DAT_00000001) {
              if (local_1e8 != (ZeroCopyBufferedStream *)0x0) {
                google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer(local_1e8);
                local_1e8 = (ZeroCopyBufferedStream *)0x0;
              }
              std::
              _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
              ::_Destroy(local_210);
              return param_2;
            }
            if ((local_218.rep_ & 1) != 0) {
              return param_2;
            }
            absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_218.rep_);
            return param_2;
          }
          pSVar4 = (StatusOr<struct_google::protobuf::json_internal::LocationWith<class_google::protobuf::json_internal::MaybeOwnedString>_>
                    *)google::protobuf::json_internal::JsonLexer::ParseBareWord(param_1);
          absl::lts_20240722::
          StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
          ::operator=((StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                       *)&local_218,pSVar4);
          if (local_e8 == (StatusRep *)&DAT_00000001) {
            if (local_b8 != (ZeroCopyBufferedStream *)0x0) {
              google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer(local_b8);
              local_b8 = (ZeroCopyBufferedStream *)0x0;
            }
            std::
            _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
            ::_Destroy(local_e0);
          }
          else if (((ulonglong)local_e8 & 1) == 0) {
            absl::lts_20240722::status_internal::StatusRep::Unref(local_e8);
          }
        }
        if ((local_218.rep_ & 1) == 0) {
          LOCK();
          *(int *)local_218.rep_ = *(int *)local_218.rep_ + 1;
          UNLOCK();
        }
        if ((StatusRep *)local_218.rep_ != (StatusRep *)&DAT_00000001) {
          *param_2 = local_218.rep_;
          if ((local_218.rep_ & 1) == 0) {
            LOCK();
            *(int *)local_218.rep_ = *(int *)local_218.rep_ + 1;
            UNLOCK();
          }
          if ((local_218.rep_ & 1) == 0) {
            absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_218.rep_);
          }
          if ((StatusRep *)local_218.rep_ == (StatusRep *)&DAT_00000001) {
            if (local_1e8 != (ZeroCopyBufferedStream *)0x0) {
              google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer(local_1e8);
              local_1e8 = (ZeroCopyBufferedStream *)0x0;
            }
            std::
            _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
            ::_Destroy(local_210);
            return param_2;
          }
          if ((local_218.rep_ & 1) != 0) {
            return param_2;
          }
          absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_218.rep_);
          return param_2;
        }
        local_178 = &s__;
        uStack_170 = 1;
        local_118 = 0x5062ee24;
        uStack_114 = 1;
        uStack_110 = 1;
        uStack_10c = 0;
        google::protobuf::json_internal::JsonLexer::Expect(param_1,&local_238,&local_118,0);
        if (local_238 != (StatusRep *)&DAT_00000001) {
          *param_2 = (ulong64)local_238;
          if (((ulonglong)local_238 & 1) == 0) {
            LOCK();
            local_238->ref_ = (atomic<int>)((int)local_238->ref_ + 1);
            UNLOCK();
          }
          if (((ulonglong)local_238 & 1) == 0) {
            absl::lts_20240722::status_internal::StatusRep::Unref(local_238);
          }
          if ((StatusRep *)local_218.rep_ == (StatusRep *)&DAT_00000001) {
            if (local_1e8 != (ZeroCopyBufferedStream *)0x0) {
              google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer(local_1e8);
              local_1e8 = (ZeroCopyBufferedStream *)0x0;
            }
            std::
            _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
            ::_Destroy(local_210);
            return param_2;
          }
          if ((local_218.rep_ & 1) != 0) {
            return param_2;
          }
          absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_218.rep_);
          return param_2;
        }
        if ((StatusRep *)local_218.rep_ != (StatusRep *)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::internal_statusor::Helper::Crash(&local_218);
        }
        google::protobuf::json_internal::JsonLexer::SkipValue(param_3);
        if (local_240 != (StatusRep *)&DAT_00000001) {
          *param_2 = (ulong64)local_240;
          if (((ulonglong)local_240 & 1) == 0) {
            LOCK();
            local_240->ref_ = (atomic<int>)((int)local_240->ref_ + 1);
            UNLOCK();
          }
          if (((ulonglong)local_240 & 1) == 0) {
            absl::lts_20240722::status_internal::StatusRep::Unref(local_240);
          }
          if ((StatusRep *)local_218.rep_ == (StatusRep *)&DAT_00000001) {
            if (local_1e8 != (ZeroCopyBufferedStream *)0x0) {
              google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer(local_1e8);
              local_1e8 = (ZeroCopyBufferedStream *)0x0;
            }
            std::
            _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
            ::_Destroy(local_210);
            return param_2;
          }
          if ((local_218.rep_ & 1) != 0) {
            return param_2;
          }
          absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_218.rep_);
          return param_2;
        }
        local_168 = ",";
        pSStack_160 = local_240;
        local_108._Mydata = ",";
        local_108._Mysize = (ulong64)local_240;
        bVar8 = google::protobuf::json_internal::JsonLexer::Peek(param_1,&local_108);
        if ((StatusRep *)local_218.rep_ == (StatusRep *)&DAT_00000001) {
          if (local_1e8 != (ZeroCopyBufferedStream *)0x0) {
            google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer(local_1e8);
            local_1e8 = (ZeroCopyBufferedStream *)0x0;
          }
          std::
          _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
          ::_Destroy(local_210);
        }
        else if ((local_218.rep_ & 1) == 0) {
          absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_218.rep_);
        }
        local_158 = "}";
        uStack_150 = 1;
        local_f8._Mydata = "}";
        local_f8._Mysize = 1;
        bVar1 = google::protobuf::json_internal::JsonLexer::Peek(param_1,&local_f8);
      } while (!bVar1);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      if ((param_1[0x58] == (JsonLexer)0x0) && (bVar8)) {
        local_258._Mydata = "expected \'}\'";
LAB_14fb930f6:
        local_258._Mysize = 0xc;
        google::protobuf::json_internal::JsonLocation::Invalid
                  ((JsonLocation *)(param_1 + 0x60),param_2,&local_258,0);
        return param_2;
      }
    }
    *param_2 = 1;
  }
  else {
    *param_2 = (ulong64)local_res20;
    if (((ulonglong)local_res20 & 1) == 0) {
      LOCK();
      local_res20->ref_ = (atomic<int>)((int)local_res20->ref_ + 1);
      UNLOCK();
    }
    bVar8 = ((ulonglong)local_res20 & 1) == 0;
LAB_14fb930e5:
    if (bVar8) {
      absl::lts_20240722::status_internal::StatusRep::Unref(local_res20);
    }
  }
  return param_2;
}

// _Checked_x86_x64_countl_zero<unsigned_char> @ 14fb93180

/* int __cdecl std::_Checked_x86_x64_countl_zero<unsigned char>(unsigned char) */

int __cdecl std::_Checked_x86_x64_countl_zero<unsigned_char>(uchar param_1)

{
  int iVar1;
  
  if (4 < __isa_available) {
    return (ushort)LZCOUNT((ushort)param_1) - 8;
  }
  iVar1 = 0x1f;
  if (param_1 != '\0') {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (param_1 == '\0') {
    return 8;
  }
  return 7 - iVar1;
}

// _Countl_zero_bsr<unsigned_char> @ 14fb931c0

/* int __cdecl std::_Countl_zero_bsr<unsigned char>(unsigned char) */

int __cdecl std::_Countl_zero_bsr<unsigned_char>(uchar param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != '\0') {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (param_1 == '\0') {
    return 8;
  }
  return 7 - iVar1;
}

// _Countl_zero_fallback<unsigned_char> @ 14fb931e0

/* int __cdecl std::_Countl_zero_fallback<unsigned char>(unsigned char) */

int __cdecl std::_Countl_zero_fallback<unsigned_char>(uchar param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1;
  iVar2 = 8;
  uVar4 = 4;
  do {
    bVar3 = (byte)uVar5 >> (sbyte)uVar4;
    iVar1 = iVar2 - uVar4;
    if (bVar3 == 0) {
      bVar3 = (byte)uVar5;
      iVar1 = iVar2;
    }
    iVar2 = iVar1;
    uVar4 = uVar4 >> 1;
    uVar5 = (uint)bVar3;
  } while (uVar4 != 0);
  return iVar2 - uVar5;
}

// _Countl_zero_lzcnt<unsigned_char> @ 14fb93230

/* int __cdecl std::_Countl_zero_lzcnt<unsigned char>(unsigned char) */

int __cdecl std::_Countl_zero_lzcnt<unsigned_char>(uchar param_1)

{
  return (ushort)LZCOUNT((ushort)param_1) - 8;
}

// bit_cast<unsigned___int64,void_const*___ptr64,0> @ 14fb93250

/* unsigned __int64 __cdecl std::bit_cast<unsigned __int64,void const * __ptr64,0>(void const *
   __ptr64 const & __ptr64) */

__uint64 __cdecl std::bit_cast<unsigned___int64,void_const*___ptr64,0>(void **param_1)

{
  return (__uint64)*param_1;
}

// c_count<std::basic_string_view<char,std::char_traits<char>_>,char> @ 14fb93260

/* __int64 __cdecl absl::lts_20240722::c_count<class std::basic_string_view<char,struct
   std::char_traits<char> >,char>(class std::basic_string_view<char,struct std::char_traits<char> >
   const & __ptr64,char && __ptr64) */

__int64 __cdecl
absl::lts_20240722::c_count<std::basic_string_view<char,std::char_traits<char>_>,char>
          (basic_string_view<char,std::char_traits<char>_> *param_1,char *param_2)

{
  ulong64 uVar1;
  
  uVar1 = __std_count_trivial_1(param_1->_Mydata,param_1->_Mydata + param_1->_Mysize,*param_2);
  return uVar1;
}

// countl_one<unsigned_char,0> @ 14fb93280

/* int __cdecl std::countl_one<unsigned char,0>(unsigned char) */

int __cdecl std::countl_one<unsigned_char,0>(uchar param_1)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = ~param_1;
  if (4 < __isa_available) {
    return (ushort)LZCOUNT((ushort)bVar2) - 8;
  }
  iVar1 = 0x1f;
  if (bVar2 != 0) {
    for (; bVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (bVar2 == 0) {
    return 8;
  }
  return 7 - iVar1;
}

// countl_zero<unsigned_char,0> @ 14fb932c0

/* int __cdecl std::countl_zero<unsigned char,0>(unsigned char) */

int __cdecl std::countl_zero<unsigned_char,0>(uchar param_1)

{
  int iVar1;
  
  if (4 < __isa_available) {
    return (ushort)LZCOUNT((ushort)param_1) - 8;
  }
  iVar1 = 0x1f;
  if (param_1 != '\0') {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (param_1 == '\0') {
    return 8;
  }
  return 7 - iVar1;
}

// forward<unsigned_short> @ 14fb93300

/* unsigned short && __ptr64 __cdecl std::forward<unsigned short>(unsigned short & __ptr64) */

ushort * __cdecl std::forward<unsigned_short>(ushort *param_1)

{
  return param_1;
}

// forward<google::protobuf::json_internal::LocationWith<double>_> @ 14fb93310

/* struct google::protobuf::json_internal::LocationWith<double> && __ptr64 __cdecl
   std::forward<struct google::protobuf::json_internal::LocationWith<double> >(struct
   google::protobuf::json_internal::LocationWith<double> & __ptr64) */

LocationWith<double> * __cdecl
std::forward<google::protobuf::json_internal::LocationWith<double>_>(LocationWith<double> *param_1)

{
  return param_1;
}

// forward<google::protobuf::json_internal::MaybeOwnedString> @ 14fb93320

/* class google::protobuf::json_internal::MaybeOwnedString && __ptr64 __cdecl std::forward<class
   google::protobuf::json_internal::MaybeOwnedString>(class
   google::protobuf::json_internal::MaybeOwnedString & __ptr64) */

MaybeOwnedString * __cdecl
std::forward<google::protobuf::json_internal::MaybeOwnedString>(MaybeOwnedString *param_1)

{
  return param_1;
}

// forward<google::protobuf::json_internal::JsonLexer::Kind> @ 14fb93330

/* enum google::protobuf::json_internal::JsonLexer::Kind && __ptr64 __cdecl std::forward<enum
   google::protobuf::json_internal::JsonLexer::Kind>(enum
   google::protobuf::json_internal::JsonLexer::Kind & __ptr64) */

Kind * __cdecl std::forward<google::protobuf::json_internal::JsonLexer::Kind>(Kind *param_1)

{
  return param_1;
}

// move<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::Mark>&___ptr64> @ 14fb93340

/* struct google::protobuf::json_internal::LocationWith<class google::protobuf::json_internal::Mark>
   && __ptr64 __cdecl std::move<struct google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::Mark> & __ptr64>(struct
   google::protobuf::json_internal::LocationWith<class google::protobuf::json_internal::Mark> &
   __ptr64) */

LocationWith<google::protobuf::json_internal::Mark> * __cdecl
std::
move<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::Mark>&___ptr64>
          (LocationWith<class_google::protobuf::json_internal::Mark> *param_1)

{
  return (LocationWith<google::protobuf::json_internal::Mark> *)param_1;
}

// move<absl::lts_20240722::StatusOr<google::protobuf::json_internal::MaybeOwnedString>&___ptr64> @ 14fb93370

/* class absl::lts_20240722::StatusOr<class google::protobuf::json_internal::MaybeOwnedString> &&
   __ptr64 __cdecl std::move<class absl::lts_20240722::StatusOr<class
   google::protobuf::json_internal::MaybeOwnedString> & __ptr64>(class
   absl::lts_20240722::StatusOr<class google::protobuf::json_internal::MaybeOwnedString> & __ptr64)
    */

StatusOr<google::protobuf::json_internal::MaybeOwnedString> * __cdecl
std::move<absl::lts_20240722::StatusOr<google::protobuf::json_internal::MaybeOwnedString>&___ptr64>
          (StatusOr<class_google::protobuf::json_internal::MaybeOwnedString> *param_1)

{
  return (StatusOr<google::protobuf::json_internal::MaybeOwnedString> *)param_1;
}

// move<google::protobuf::json_internal::MaybeOwnedString&___ptr64> @ 14fb93380

/* class google::protobuf::json_internal::MaybeOwnedString && __ptr64 __cdecl std::move<class
   google::protobuf::json_internal::MaybeOwnedString & __ptr64>(class
   google::protobuf::json_internal::MaybeOwnedString & __ptr64) */

MaybeOwnedString * __cdecl
std::move<google::protobuf::json_internal::MaybeOwnedString&___ptr64>(MaybeOwnedString *param_1)

{
  return param_1;
}

// rotl<unsigned_int,0> @ 14fb93390

/* unsigned int __cdecl std::rotl<unsigned int,0>(unsigned int,int) */

uint __cdecl std::rotl<unsigned_int,0>(uint param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = (byte)param_2 & 0x1f;
  return param_1 << bVar1 | param_1 >> 0x20 - bVar1;
}

// rotr<unsigned_int,0> @ 14fb933a0

/* unsigned int __cdecl std::rotr<unsigned int,0>(unsigned int,int) */

uint __cdecl std::rotr<unsigned_int,0>(uint param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = (byte)param_2 & 0x1f;
  return param_1 >> bVar1 | param_1 << 0x20 - bVar1;
}

// FormatSpecTemplate<131067> @ 14fb93410

/* public: __cdecl
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067>::FormatSpecTemplate<131067>(char
   const * __ptr64) __ptr64 */

FormatSpecTemplate<131067> * __thiscall
absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067>::FormatSpecTemplate<131067>
          (FormatSpecTemplate<131067> *this,char *param_1)

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

// FormatSpecTemplate<655355,655355,655355,524292> @ 14fb93440

/* public: __cdecl
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355,655355,524292>::FormatSpecTemplate<655355,655355,655355,524292>(char
   const * __ptr64) __ptr64 */

FormatSpecTemplate<655355,655355,655355,524292> * __thiscall
absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355,655355,524292>::
FormatSpecTemplate<655355,655355,655355,524292>
          (FormatSpecTemplate<655355,655355,655355,524292> *this,char *param_1)

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

// StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_> @ 14fb93470

/* public: __cdecl absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> >::StatusOr<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> >(class absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> > && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
* __thiscall
absl::lts_20240722::
StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
::
StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
          (StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
           *this,StatusOr<struct_google::protobuf::json_internal::LocationWith<class_google::protobuf::json_internal::MaybeOwnedString>_>
                 *param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)param_1 == 1) {
    google::protobuf::json_internal::MaybeOwnedString::MaybeOwnedString
              ((MaybeOwnedString *)(this + 8),(MaybeOwnedString *)(param_1 + 8));
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(this + 0x40) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(this + 0x50) = uVar1;
    *(undefined8 *)this = 1;
    return this;
  }
  *(longlong *)this = *(longlong *)param_1;
  *(undefined8 *)param_1 = 0x37;
  return this;
}

// StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_> @ 14fb934e0

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> >::StatusOrData<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> >(class
   absl::lts_20240722::internal_statusor::StatusOrData<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> > && __ptr64) __ptr64 */

StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
* __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
::
StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
          (StatusOrData<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
           *this,StatusOrData<struct_google::protobuf::json_internal::LocationWith<class_google::protobuf::json_internal::MaybeOwnedString>_>
                 *param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)param_1 == 1) {
    google::protobuf::json_internal::MaybeOwnedString::MaybeOwnedString
              ((MaybeOwnedString *)(this + 8),(MaybeOwnedString *)(param_1 + 8));
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(this + 0x40) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(this + 0x50) = uVar1;
    *(undefined8 *)this = 1;
    return this;
  }
  *(longlong *)this = *(longlong *)param_1;
  *(undefined8 *)param_1 = 0x37;
  return this;
}

// MaybeOwnedString @ 14fb93550

/* public: __cdecl google::protobuf::json_internal::MaybeOwnedString::MaybeOwnedString(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >) __ptr64 */

MaybeOwnedString * __thiscall
google::protobuf::json_internal::MaybeOwnedString::MaybeOwnedString
          (MaybeOwnedString *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  ulonglong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong64 uVar5;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar3 = *(undefined8 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 8);
  *(char **)this = (param_1->_Mypair)._Myval2._Bx._Ptr;
  *(undefined8 *)(this + 8) = uVar3;
  uVar5 = (param_1->_Mypair)._Myval2._Myres;
  *(ulong64 *)(this + 0x10) = (param_1->_Mypair)._Myval2._Mysize;
  *(ulong64 *)(this + 0x18) = uVar5;
  (param_1->_Mypair)._Myval2._Mysize = 0;
  (param_1->_Mypair)._Myval2._Myres = 0xf;
  (param_1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  this[0x20] = (MaybeOwnedString)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  uVar1 = (param_1->_Mypair)._Myval2._Myres;
  if (0xf < uVar1) {
    pcVar2 = (param_1->_Mypair)._Myval2._Bx._Ptr;
    uVar5 = uVar1 + 1;
    pcVar4 = pcVar2;
    if (0xfff < uVar5) {
      pcVar4 = *(char **)(pcVar2 + -8);
      uVar5 = uVar1 + 0x28;
      if ((char *)0x1f < pcVar2 + (-8 - (longlong)pcVar4)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pcVar4,uVar5);
  }
  (param_1->_Mypair)._Myval2._Mysize = 0;
  (param_1->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  (param_1->_Mypair)._Myval2._Myres = 0xf;
  return this;
}

// ~StatusOr<unsigned_short> @ 14fb93610

/* public: __cdecl absl::lts_20240722::StatusOr<unsigned short>::~StatusOr<unsigned short>(void)
   __ptr64 */

void __thiscall
absl::lts_20240722::StatusOr<unsigned_short>::~StatusOr<unsigned_short>
          (StatusOr<unsigned_short> *this)

{
  StatusRep *this_00;
  
  this_00 = *(StatusRep **)this;
  if (this_00 == (StatusRep *)&DAT_00000001) {
    return;
  }
  if (((ulonglong)this_00 & 1) == 0) {
    status_internal::StatusRep::Unref(this_00);
  }
  return;
}

// ~StatusOr<google::protobuf::json_internal::MaybeOwnedString> @ 14fb93640

/* public: __cdecl absl::lts_20240722::StatusOr<class
   google::protobuf::json_internal::MaybeOwnedString>::~StatusOr<class
   google::protobuf::json_internal::MaybeOwnedString>(void) __ptr64 */

void __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::MaybeOwnedString>::
~StatusOr<google::protobuf::json_internal::MaybeOwnedString>
          (StatusOr<google::protobuf::json_internal::MaybeOwnedString> *this)

{
  StatusRep *this_00;
  
  this_00 = *(StatusRep **)this;
  if (this_00 == (StatusRep *)&DAT_00000001) {
    if (*(ZeroCopyBufferedStream **)(this + 0x30) != (ZeroCopyBufferedStream *)0x0) {
      google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer
                (*(ZeroCopyBufferedStream **)(this + 0x30));
      *(undefined8 *)(this + 0x30) = 0;
    }
    std::
    _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
    ::_Destroy((_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                *)(this + 8));
    return;
  }
  if (((ulonglong)this_00 & 1) == 0) {
    status_internal::StatusRep::Unref(this_00);
  }
  return;
}

// ~StatusOrData<unsigned_short> @ 14fb93690

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<unsigned
   short>::~StatusOrData<unsigned short>(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<unsigned_short>::~StatusOrData<unsigned_short>
          (StatusOrData<unsigned_short> *this)

{
  StatusRep *this_00;
  
  this_00 = *(StatusRep **)this;
  if (this_00 == (StatusRep *)&DAT_00000001) {
    return;
  }
  if (((ulonglong)this_00 & 1) == 0) {
    status_internal::StatusRep::Unref(this_00);
  }
  return;
}

// ~StatusOrData<google::protobuf::json_internal::MaybeOwnedString> @ 14fb936c0

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::json_internal::MaybeOwnedString>::~StatusOrData<class
   google::protobuf::json_internal::MaybeOwnedString>(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::MaybeOwnedString>::
~StatusOrData<google::protobuf::json_internal::MaybeOwnedString>
          (StatusOrData<google::protobuf::json_internal::MaybeOwnedString> *this)

{
  StatusRep *this_00;
  
  this_00 = *(StatusRep **)this;
  if (this_00 == (StatusRep *)&DAT_00000001) {
    if (*(ZeroCopyBufferedStream **)(this + 0x30) != (ZeroCopyBufferedStream *)0x0) {
      google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer
                (*(ZeroCopyBufferedStream **)(this + 0x30));
      *(undefined8 *)(this + 0x30) = 0;
    }
    std::
    _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
    ::_Destroy((_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                *)(this + 8));
    return;
  }
  if (((ulonglong)this_00 & 1) == 0) {
    status_internal::StatusRep::Unref(this_00);
  }
  return;
}

// operator-> @ 14fb93710

/* public: class google::protobuf::json_internal::MaybeOwnedString * __ptr64 __cdecl
   absl::lts_20240722::StatusOr<class
   google::protobuf::json_internal::MaybeOwnedString>::operator->(void) __ptr64 */

MaybeOwnedString * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::MaybeOwnedString>::operator->
          (StatusOr<google::protobuf::json_internal::MaybeOwnedString> *this)

{
  if (*(longlong *)this == 1) {
    return (MaybeOwnedString *)(this + 8);
  }
                    /* WARNING: Subroutine does not return */
  internal_statusor::Helper::Crash((Status *)this);
}

// operator* @ 14fb93730

/* public: unsigned short & __ptr64 __cdecl absl::lts_20240722::StatusOr<unsigned
   short>::operator*(void) __ptr64&  */

ushort * __thiscall
absl::lts_20240722::StatusOr<unsigned_short>::operator*(StatusOr<unsigned_short> *this)

{
  if (*(longlong *)this == 1) {
    return (ushort *)(this + 8);
  }
                    /* WARNING: Subroutine does not return */
  internal_statusor::Helper::Crash((Status *)this);
}

// operator* @ 14fb93750

/* public: class google::protobuf::json_internal::BufferingGuard & __ptr64 __cdecl
   absl::lts_20240722::StatusOr<class
   google::protobuf::json_internal::BufferingGuard>::operator*(void) __ptr64&  */

BufferingGuard * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::BufferingGuard>::operator*
          (StatusOr<google::protobuf::json_internal::BufferingGuard> *this)

{
  if (*(longlong *)this == 1) {
    return (BufferingGuard *)(this + 8);
  }
                    /* WARNING: Subroutine does not return */
  internal_statusor::Helper::Crash((Status *)this);
}

// operator* @ 14fb93770

/* public: class google::protobuf::json_internal::MaybeOwnedString && __ptr64 __cdecl
   absl::lts_20240722::StatusOr<class
   google::protobuf::json_internal::MaybeOwnedString>::operator*(void) __ptr64&&  */

MaybeOwnedString * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::MaybeOwnedString>::operator*
          (StatusOr<google::protobuf::json_internal::MaybeOwnedString> *this)

{
  if (*(longlong *)this == 1) {
    return (MaybeOwnedString *)(this + 8);
  }
                    /* WARNING: Subroutine does not return */
  internal_statusor::Helper::Crash((Status *)this);
}

// FUN_14fb93890 @ 14fb93890

undefined8 FUN_14fb93890(undefined8 *param_1,undefined8 param_2)

{
  google::protobuf::json_internal::JsonLexer::SkipValue((JsonLexer *)*param_1);
  return param_2;
}

// FUN_14fb938b0 @ 14fb938b0

undefined8 FUN_14fb938b0(undefined8 *param_1,undefined8 param_2)

{
  google::protobuf::json_internal::JsonLexer::SkipValue((JsonLexer *)*param_1);
  return param_2;
}

// Discard @ 14fb938d0

/* public: void __cdecl google::protobuf::json_internal::Mark::Discard(void) __ptr64&&  */

void __thiscall google::protobuf::json_internal::Mark::Discard(Mark *this)

{
  if (*(ZeroCopyBufferedStream **)(this + 8) != (ZeroCopyBufferedStream *)0x0) {
    ZeroCopyBufferedStream::DownRefBuffer(*(ZeroCopyBufferedStream **)(this + 8));
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}

// EnsureNotOk @ 14fb93900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<unsigned
   short>::EnsureNotOk(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<unsigned_short>::EnsureNotOk
          (StatusOrData<unsigned_short> *this)

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

// EnsureNotOk @ 14fb93920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<struct
   google::protobuf::json_internal::LocationWith<double> >::EnsureNotOk(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::LocationWith<double>_>::EnsureNotOk
          (StatusOrData<google::protobuf::json_internal::LocationWith<double>_> *this)

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

// EnsureNotOk @ 14fb93940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::json_internal::MaybeOwnedString>::EnsureNotOk(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::MaybeOwnedString>::EnsureNotOk
          (StatusOrData<google::protobuf::json_internal::MaybeOwnedString> *this)

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

// EnsureNotOk @ 14fb93960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<enum
   google::protobuf::json_internal::JsonLexer::Kind>::EnsureNotOk(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::JsonLexer::Kind>::EnsureNotOk
          (StatusOrData<google::protobuf::json_internal::JsonLexer::Kind> *this)

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

// EnsureOk @ 14fb93980

/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<unsigned
   short>::EnsureOk(void)const __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<unsigned_short>::EnsureOk
          (StatusOrData<unsigned_short> *this)

{
  if (*(longlong *)this == 1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  Helper::Crash((Status *)this);
}

// EnsureOk @ 14fb939a0

/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::json_internal::BufferingGuard>::EnsureOk(void)const __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::json_internal::BufferingGuard>
::EnsureOk(StatusOrData<google::protobuf::json_internal::BufferingGuard> *this)

{
  if (*(longlong *)this == 1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  Helper::Crash((Status *)this);
}

// EnsureOk @ 14fb939c0

/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::json_internal::MaybeOwnedString>::EnsureOk(void)const __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::MaybeOwnedString>::EnsureOk
          (StatusOrData<google::protobuf::json_internal::MaybeOwnedString> *this)

{
  if (*(longlong *)this == 1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  Helper::Crash((Status *)this);
}

// FUN_14fb939e0 @ 14fb939e0

void FUN_14fb939e0(undefined8 *param_1,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  byte bVar8;
  ulonglong uVar9;
  uint uVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined1 local_res8;
  
  LOCK();
  UNLOCK();
  pcVar11 = (char *)*param_1;
  lVar3 = param_1[1];
  pcVar1 = pcVar11 + lVar3;
  uVar12 = ((longlong)&PTR_LOOP_1535dfeb0 + DAT_1553e57c8) * 0x5851f42d4c957f2d + 0x1a08ee1184ba6d32
  ;
  DAT_1553e57c8 = DAT_1553e57c8 + 1;
  uVar6 = __std_count_trivial_1(pcVar11,pcVar1,' ');
  uVar9 = lVar3 + uVar6;
  if ((param_2->_Mypair)._Myval2._Myres < uVar9) {
    uVar6 = (param_2->_Mypair)._Myval2._Mysize;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    _Reallocate_grow_by<_public:_void___cdecl_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::reserve(unsigned___int64)___ptr64_::_2_::<lambda_1>_>
              (param_2,uVar9 - uVar6,local_res8);
    (param_2->_Mypair)._Myval2._Mysize = uVar6;
  }
  for (; pcVar11 != pcVar1; pcVar11 = pcVar11 + 1) {
    uVar9 = (param_2->_Mypair)._Myval2._Mysize;
    uVar4 = (param_2->_Mypair)._Myval2._Myres;
    cVar2 = *pcVar11;
    if (uVar9 < uVar4) {
      (param_2->_Mypair)._Myval2._Mysize = uVar9 + 1;
      pbVar7 = param_2;
      if (0xf < uVar4) {
        pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (param_2->_Mypair)._Myval2._Bx._Ptr;
      }
      (pbVar7->_Mypair)._Myval2._Bx._Buf[uVar9] = cVar2;
      (pbVar7->_Mypair)._Myval2._Bx._Buf[uVar9 + 1] = '\0';
    }
    else {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
                (param_2,1,local_res8,cVar2);
    }
    if ((cVar2 == ' ') &&
       (uVar12 = uVar12 * 0x5851f42d4c957f2d + 0x14057b7ef767814f,
       uVar10 = (uint)(uVar12 >> 0x2d) ^ (uint)(uVar12 >> 0x1b), bVar8 = (byte)(uVar12 >> 0x3b),
       uVar10 = uVar10 >> bVar8 | uVar10 << 0x20 - bVar8, uVar10 == (uVar10 / 3) * 3)) {
      uVar12 = uVar12 * 0x5851f42d4c957f2d + 0x14057b7ef767814f;
      uVar10 = (uint)(uVar12 >> 0x2d) ^ (uint)(uVar12 >> 0x1b);
      bVar8 = (byte)(uVar12 >> 0x3b);
      uVar10 = ((uVar10 >> bVar8 | uVar10 << 0x20 - bVar8) & 1) + 1;
      uVar9 = (ulonglong)uVar10;
      if (uVar10 != 0) {
        do {
          uVar4 = (param_2->_Mypair)._Myval2._Mysize;
          uVar5 = (param_2->_Mypair)._Myval2._Myres;
          if (uVar4 < uVar5) {
            (param_2->_Mypair)._Myval2._Mysize = uVar4 + 1;
            pbVar7 = param_2;
            if (0xf < uVar5) {
              pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (param_2->_Mypair)._Myval2._Bx._Ptr;
            }
            *(undefined2 *)((longlong)&(pbVar7->_Mypair)._Myval2._Bx + uVar4) = 0x20;
          }
          else {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
                      (param_2,1,local_res8,0x20);
          }
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
  }
  return;
}

// Invalid @ 14fb93bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class absl::lts_20240722::Status __cdecl
   google::protobuf::json_internal::JsonLocation::Invalid(class std::basic_string_view<char,struct
   std::char_traits<char> >,struct
   google::protobuf::json_internal::JsonLocation::SourceLocation)const __ptr64 */

Status __thiscall
google::protobuf::json_internal::JsonLocation::Invalid
          (JsonLocation *this,basic_string_view<char,std::char_traits<char>_> *param_1,
          undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  _Bxty *local_d8;
  ulonglong uStack_d0;
  _Bxty *local_c8;
  ulonglong uStack_c0;
  _Bxty local_b0;
  ulonglong local_a0;
  ulonglong local_98;
  _Bxty local_90;
  undefined8 local_80;
  ulonglong local_78;
  undefined1 local_68 [32];
  char local_48 [8];
  code *local_40;
  undefined8 local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_80 = 0xc;
  local_78 = 0xf;
  local_90._Ptr = (char *)s_invalid_JSON._0_8_;
  local_90._12_4_ = 0;
  local_90._8_4_ = s_invalid_JSON._8_4_;
  local_b0._8_8_ = 0;
  local_a0 = 0;
  local_98 = 0xf;
  local_b0._Ptr = (char *)0x0;
  if (*(longlong *)(this + 0x18) != 0) {
    local_d8 = (_Bxty *)0x1535dfec8;
    uStack_d0 = 4;
    local_68._0_8_ = " in ";
    local_68._8_8_ = 4;
    absl::lts_20240722::StrAppend
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_b0,
               (AlphaNum *)local_68);
    MessagePath::Describe
              (*(MessagePath **)(this + 0x18),
               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_b0);
    if (local_a0 < local_98) {
      uVar2 = &local_b0;
      if (0xf < local_98) {
        uVar2 = local_b0._Ptr;
      }
      pcVar1 = (char *)(uVar2 + local_a0);
      local_a0 = local_a0 + 1;
      pcVar1[0] = ',';
      pcVar1[1] = '\0';
    }
    else {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_b0,1,
                 local_e8,0x2c);
    }
  }
  local_68._16_8_ = *(longlong *)(this + 0x10) + 1;
  local_68._0_8_ = *(longlong *)(this + 8) + 1;
  local_68._8_8_ =
       absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<unsigned___int64>;
  local_68._24_8_ =
       absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<unsigned___int64>;
  local_48 = *(char (*) [8])this;
  local_40 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<unsigned___int64>;
  local_30 = absl::lts_20240722::str_format_internal::FormatArgImpl::
             Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
  local_c8 = (_Bxty *)local_68;
  uStack_c0 = 4;
  local_d8 = (_Bxty *)0x1535dfed0;
  uStack_d0 = 0x1e;
  local_38 = param_3;
  absl::lts_20240722::str_format_internal::AppendPack(&local_b0,&local_d8,&local_c8);
  local_d8 = &local_b0;
  if (0xf < local_98) {
    local_d8 = (_Bxty *)local_b0._Ptr;
  }
  uStack_d0 = local_a0;
  uStack_c0 = local_a0;
  local_c8 = local_d8;
  FUN_14fb939e0(&local_c8,&local_90);
  local_d8 = &local_90;
  if (0xf < local_78) {
    local_d8 = (_Bxty *)local_90._Ptr;
  }
  uStack_d0 = local_80;
  uStack_c0 = local_80;
  local_c8 = local_d8;
  absl::lts_20240722::InvalidArgumentError(param_1);
  if (0xf < local_98) {
    uVar3 = local_98 + 1;
    uVar2 = local_b0._Ptr;
    if (0xfff < uVar3) {
      uVar3 = local_98 + 0x28;
      uVar2 = *(undefined8 *)(local_b0._Ptr + -8);
      if ((char *)0x1f < local_b0._Ptr + (-8 - uVar2)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar2,uVar3);
  }
  local_a0 = 0;
  local_98 = 0xf;
  local_b0._Ptr = local_b0._Ptr & 0xffffffffffffff00;
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
    ::operator_delete((void *)uVar2,uVar3);
  }
  return (Status)(ulong64)param_1;
}

// ParseBareWord @ 14fb93e60

/* WARNING: Removing unreachable block (ram,0x00014fb9421a) */
/* private: class absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> > __cdecl
   google::protobuf::json_internal::JsonLexer::ParseBareWord(void) __ptr64 */

void __thiscall google::protobuf::json_internal::JsonLexer::ParseBareWord(JsonLexer *this)

{
  undefined1 auVar1 [16];
  int *piVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  Status SVar6;
  longlong lVar7;
  Status *in_RDX;
  ulong64 uVar8;
  ulonglong uVar9;
  Status SVar10;
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  *_Buf1;
  undefined4 uVar11;
  undefined4 uVar12;
  byte local_res18;
  undefined7 uStackX_19;
  StatusRep *local_res20;
  Status local_c8;
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  local_c0;
  undefined7 uStack_bf;
  ulong64 uStack_b8;
  ulong64 local_b0;
  ulong64 uStack_a8;
  char local_a0;
  ZeroCopyBufferedStream *local_98;
  ulong64 local_90;
  ulong64 uStack_88;
  ulong64 local_80;
  ulong64 uStack_78;
  char *local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  longlong lStack_40;
  
  SkipToToken(this);
  piVar2 = (int *)CONCAT71(uStackX_19,local_res18);
  if (piVar2 != (int *)&DAT_00000001) {
    in_RDX->rep_ = (ulong64)piVar2;
    if ((local_res18 & 1) == 0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    if (in_RDX->rep_ == 1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(in_RDX);
    }
    if ((local_res18 & 1) != 0) {
      return;
    }
    absl::lts_20240722::status_internal::StatusRep::Unref
              ((StatusRep *)CONCAT71(uStackX_19,local_res18));
    return;
  }
  FUN_14fb91fd0(this,&local_c8,local_res18);
  SVar6.rep_ = local_c8.rep_;
  local_res20 = (StatusRep *)local_c8.rep_;
  SVar10.rep_ = (ulong64)(local_c8.rep_ & 0xff);
  if ((local_c8.rep_ & 1) == 0) {
    LOCK();
    *(int *)local_c8.rep_ = *(int *)local_c8.rep_ + 1;
    UNLOCK();
    SVar10.rep_ = local_c8.rep_;
  }
  if ((StatusRep *)local_c8.rep_ != (StatusRep *)0x1) {
    in_RDX->rep_ = local_c8.rep_;
    uVar9 = local_c8.rep_ & 1;
    if ((local_c8.rep_ & 1) == 0) {
      LOCK();
      *(int *)local_c8.rep_ = *(int *)local_c8.rep_ + 1;
      UNLOCK();
      SVar10.rep_ = local_c8.rep_ & 0xff;
    }
    if (in_RDX->rep_ == 1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(in_RDX);
      SVar10.rep_ = local_c8.rep_ & 0xff;
    }
    if (uVar9 == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)SVar6.rep_);
      SVar10.rep_ = local_c8.rep_ & 0xff;
    }
    if ((StatusRep *)local_c8.rep_ != (StatusRep *)&DAT_00000001) {
      if ((SVar10.rep_ & 1) != 0) {
        return;
      }
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_c8.rep_);
      return;
    }
    if (local_98 != (ZeroCopyBufferedStream *)0x0) {
      ZeroCopyBufferedStream::DownRefBuffer(local_98);
      local_98 = (ZeroCopyBufferedStream *)0x0;
    }
    goto LAB_14fb93f71;
  }
  uVar9 = local_b0;
  if (local_a0 == '\x01') {
    lVar3 = CONCAT71(uStack_bf,local_c0);
    lVar7 = *(longlong *)(lVar3 + 0x10);
    uVar8 = uStack_b8;
    uVar11 = *(undefined4 *)(lVar3 + 8);
    uVar12 = *(undefined4 *)(lVar3 + 0xc);
    if (*(char *)(lVar3 + 0x30) != '\0') {
      uVar8 = uStack_b8 - *(longlong *)(lVar3 + 0x40);
      local_48 = *(longlong *)(lVar3 + 0x18);
      lVar7 = *(longlong *)(lVar3 + 0x20) - local_48;
      lVar3 = local_48;
      lStack_40 = lVar7;
      local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
      uVar11 = (undefined4)local_48;
      uVar12 = local_48._4_4_;
      local_48 = lVar3;
    }
    auVar1._4_4_ = uVar12;
    auVar1._0_4_ = uVar11;
    auVar1._8_4_ = (int)lVar7;
    auVar1._12_4_ = (int)((ulonglong)lVar7 >> 0x20);
    uVar5 = auVar1._8_8_;
    if (local_b0 == 0xffffffffffffffff) {
      if (uVar5 < uVar8) {
LAB_14fb9420e:
                    /* WARNING: Subroutine does not return */
        std::basic_string_view<char,std::char_traits<char>_>::_Xran();
      }
      if (uVar5 - uVar8 != 0xffffffffffffffff) {
        uVar9 = uVar5 - uVar8;
      }
      _Buf1 = (_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
               *)(CONCAT44(uVar12,uVar11) + uVar8);
    }
    else {
      if (uVar5 < uVar8) goto LAB_14fb9420e;
      if (uVar5 - uVar8 < local_b0) {
        uVar9 = uVar5 - uVar8;
      }
      _Buf1 = (_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
               *)(CONCAT44(uVar12,uVar11) + uVar8);
    }
  }
  else {
    if (local_a0 != '\0') {
                    /* WARNING: Subroutine does not return */
      std::_Throw_bad_variant_access();
    }
    _Buf1 = &local_c0;
    if (0xf < uStack_a8) {
      _Buf1 = (_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
               *)CONCAT71(uStack_bf,local_c0);
    }
  }
  if ((uVar9 != 0) && (9 < (byte)((char)*_Buf1 - 0x30U))) {
    if (uVar9 != 4) {
      if (uVar9 == 5) {
        iVar4 = memcmp(_Buf1,"false",5);
        goto joined_r0x00014fb94142;
      }
LAB_14fb94148:
      *(undefined1 *)&in_RDX[5].rep_ = 0xff;
      if (local_a0 != -1) {
        in_RDX[1].rep_ = CONCAT71(uStack_bf,local_c0);
        in_RDX[2].rep_ = uStack_b8;
        if (local_a0 == '\0') {
          in_RDX[3].rep_ = local_b0;
          in_RDX[4].rep_ = uStack_a8;
          local_b0 = 0;
          uStack_a8 = 0xf;
          local_c0 = (_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                      )0x0;
          *(undefined1 *)&in_RDX[5].rep_ = 0;
        }
        else {
          in_RDX[3].rep_ = local_b0;
          *(undefined1 *)&in_RDX[5].rep_ = 1;
        }
      }
      in_RDX[6].rep_ = (ulong64)local_98;
      if (local_98 != (ZeroCopyBufferedStream *)0x0) {
        iVar4 = *(int *)(local_98 + 0x4c);
        *(int *)(local_98 + 0x4c) = *(int *)(local_98 + 0x4c) + 1;
        if (iVar4 == 0) {
          *(undefined8 *)(local_98 + 0x40) = *(undefined8 *)(local_98 + 0x38);
        }
        SVar10.rep_ = local_c8.rep_ & 0xff;
        SVar6.rep_ = local_c8.rep_;
      }
      in_RDX[7].rep_ = local_90;
      in_RDX[8].rep_ = uStack_88;
      in_RDX[9].rep_ = local_80;
      in_RDX[10].rep_ = uStack_78;
      in_RDX->rep_ = 1;
      if ((StatusRep *)SVar6.rep_ != (StatusRep *)&DAT_00000001) {
        if ((SVar10.rep_ & 1) != 0) {
          return;
        }
        absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)SVar6.rep_);
        return;
      }
      if (local_98 != (ZeroCopyBufferedStream *)0x0) {
        ZeroCopyBufferedStream::DownRefBuffer(local_98);
        local_98 = (ZeroCopyBufferedStream *)0x0;
      }
      goto LAB_14fb93f71;
    }
    iVar4 = memcmp(_Buf1,&s_null,4);
    if (iVar4 != 0) {
      iVar4 = memcmp(_Buf1,&s_true,4);
joined_r0x00014fb94142:
      if (iVar4 != 0) goto LAB_14fb94148;
    }
  }
  local_68 = "expected bare word";
  uStack_60 = 0x12;
  SVar6 = JsonLocation::Invalid((JsonLocation *)&local_90,&local_res18,&local_68,0);
                    /* WARNING: Load size is inaccurate */
  in_RDX->rep_ = *SVar6.rep_;
  *(undefined8 *)SVar6.rep_ = 0x37;
  if (in_RDX->rep_ == 1) {
    absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(in_RDX);
  }
  if ((local_res18 & 1) == 0) {
    absl::lts_20240722::status_internal::StatusRep::Unref
              ((StatusRep *)CONCAT71(uStackX_19,local_res18));
  }
  if ((StatusRep *)local_c8.rep_ != (StatusRep *)&DAT_00000001) {
    if ((local_c8.rep_ & 1) != 0) {
      return;
    }
    absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_c8.rep_);
    return;
  }
  if (local_98 != (ZeroCopyBufferedStream *)0x0) {
    ZeroCopyBufferedStream::DownRefBuffer(local_98);
    local_98 = (ZeroCopyBufferedStream *)0x0;
  }
LAB_14fb93f71:
  std::
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  ::_Destroy(&local_c0);
  return;
}

// ParseNumber @ 14fb94230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014fb9433d) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<double> > __cdecl
   google::protobuf::json_internal::JsonLexer::ParseNumber(void) __ptr64 */

void __thiscall google::protobuf::json_internal::JsonLexer::ParseNumber(JsonLexer *this)

{
  ulonglong uVar1;
  short sVar2;
  char ******ppppppcVar3;
  Status SVar4;
  char *******pppppppcVar5;
  Status *in_RDX;
  char ******ppppppcVar6;
  ulong64 uVar7;
  char ******ppppppcVar8;
  bool bVar9;
  undefined1 auStack_178 [32];
  StatusRep *local_158 [2];
  basic_string_view<char,std::char_traits<char>_> local_148;
  char *******local_138;
  char ******local_130;
  Status local_128;
  char *******local_120;
  char ******local_118;
  char ******local_110;
  ulonglong local_108;
  char local_100;
  ZeroCopyBufferedStream *local_f8;
  char ******local_f0;
  ulong64 uStack_e8;
  ulong64 local_e0;
  ulong64 uStack_d8;
  char *******local_c8;
  undefined8 uStack_c0;
  char *******local_b8;
  ulong64 uStack_b0;
  Status local_a0;
  char *local_98;
  undefined8 local_90;
  char *******local_78;
  char ******ppppppcStack_70;
  ulong64 local_68;
  ulong64 uStack_60;
  ulong64 uStack_58;
  char *******local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  ParseRawNumber(this);
  SVar4.rep_ = local_128.rep_;
  local_158[0] = (StatusRep *)local_128.rep_;
  uVar1 = local_128.rep_ & 1;
  if ((local_128.rep_ & 1) == 0) {
    LOCK();
    *(int *)local_128.rep_ = *(int *)local_128.rep_ + 1;
    UNLOCK();
  }
  if ((StatusRep *)local_128.rep_ == (StatusRep *)0x1) {
    if (local_100 == '\x01') {
      local_148._Mydata = (char *)local_120[1];
      local_148._Mysize = (ulong64)local_120[2];
      ppppppcVar3 = (char ******)local_148._Mysize;
      ppppppcVar6 = local_118;
      ppppppcVar8 = (char ******)local_148._Mydata;
      if (*(char *)(local_120 + 6) != '\0') {
        ppppppcVar3 = (char ******)((longlong)local_120[4] - (longlong)local_120[3]);
        ppppppcVar6 = (char ******)((longlong)local_118 - (longlong)local_120[8]);
        ppppppcVar8 = local_120[3];
      }
      if (local_110 == (char ******)0xffffffffffffffff) {
        if (ppppppcVar3 < ppppppcVar6) {
LAB_14fb94692:
                    /* WARNING: Subroutine does not return */
          std::basic_string_view<char,std::char_traits<char>_>::_Xran();
        }
        ppppppcVar3 = (char ******)((longlong)ppppppcVar3 - (longlong)ppppppcVar6);
        bVar9 = ppppppcVar3 != (char ******)0xffffffffffffffff;
        ppppppcStack_70 = (char ******)0xffffffffffffffff;
      }
      else {
        if (ppppppcVar3 < ppppppcVar6) goto LAB_14fb94692;
        ppppppcVar3 = (char ******)((longlong)ppppppcVar3 - (longlong)ppppppcVar6);
        bVar9 = ppppppcVar3 < local_110;
        ppppppcStack_70 = local_110;
      }
      if (bVar9) {
        ppppppcStack_70 = ppppppcVar3;
      }
      local_78 = (char *******)((longlong)ppppppcVar8 + (longlong)ppppppcVar6);
    }
    else {
      if (local_100 != '\0') {
                    /* WARNING: Subroutine does not return */
        std::_Throw_bad_variant_access();
      }
      local_78 = (char *******)&local_120;
      if (0xf < local_108) {
        local_78 = local_120;
      }
      ppppppcStack_70 = local_110;
    }
    local_148._Mydata = (char *)local_78;
    local_148._Mysize = (ulong64)ppppppcStack_70;
    bVar9 = absl::lts_20240722::SimpleAtod(&local_148,(double *)&local_a0);
    if ((bVar9) && (sVar2 = _dclass(), sVar2 < 1)) {
      local_78 = (char *******)local_a0.rep_;
      if ((StatusRep *)local_128.rep_ != (StatusRep *)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::internal_statusor::Helper::Crash(&local_128);
      }
      ppppppcStack_70 = local_f0;
      local_68 = uStack_e8;
      uStack_60 = local_e0;
      uStack_58 = uStack_d8;
      in_RDX[1].rep_ = local_a0.rep_;
      in_RDX[2].rep_ = (ulong64)local_f0;
      in_RDX[3].rep_ = uStack_e8;
      in_RDX[4].rep_ = local_e0;
      in_RDX[5].rep_ = uStack_d8;
      in_RDX->rep_ = 1;
      if (local_f8 != (ZeroCopyBufferedStream *)0x0) {
        ZeroCopyBufferedStream::DownRefBuffer(local_f8);
        local_f8 = (ZeroCopyBufferedStream *)0x0;
      }
    }
    else {
      if ((StatusRep *)local_128.rep_ != (StatusRep *)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::internal_statusor::Helper::Crash(&local_128);
      }
      if (local_100 == '\x01') {
        local_148._Mydata = (char *)local_120[1];
        local_148._Mysize = (ulong64)local_120[2];
        ppppppcVar3 = (char ******)local_148._Mysize;
        local_138 = (char *******)local_148._Mydata;
        if (*(char *)(local_120 + 6) != '\0') {
          local_118 = (char ******)((longlong)local_118 - (longlong)local_120[8]);
          ppppppcVar3 = (char ******)((longlong)local_120[4] - (longlong)local_120[3]);
          local_138 = (char *******)local_120[3];
        }
        if (local_110 == (char ******)0xffffffffffffffff) {
          if (ppppppcVar3 < local_118) {
LAB_14fb946a3:
                    /* WARNING: Subroutine does not return */
            std::basic_string_view<char,std::char_traits<char>_>::_Xran();
          }
          local_130 = (char ******)0xffffffffffffffff;
          if ((char ******)((longlong)ppppppcVar3 - (longlong)local_118) !=
              (char ******)0xffffffffffffffff) {
            local_130 = (char ******)((longlong)ppppppcVar3 - (longlong)local_118);
          }
          local_138 = (char *******)((longlong)local_138 + (longlong)local_118);
        }
        else {
          if (ppppppcVar3 < local_118) goto LAB_14fb946a3;
          local_130 = local_110;
          if ((char ******)((longlong)ppppppcVar3 - (longlong)local_118) < local_110) {
            local_130 = (char ******)((longlong)ppppppcVar3 - (longlong)local_118);
          }
          local_138 = (char *******)((longlong)local_138 + (longlong)local_118);
        }
      }
      else {
        if (local_100 != '\0') {
                    /* WARNING: Subroutine does not return */
          std::_Throw_bad_variant_access();
        }
        local_138 = (char *******)&local_120;
        if (0xf < local_108) {
          local_138 = local_120;
        }
        local_130 = local_110;
      }
      local_48 = (char *******)&local_138;
      local_40 = absl::lts_20240722::str_format_internal::FormatArgImpl::
                 Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
      local_c8 = (char *******)&local_48;
      uStack_c0 = 1;
      local_98 = "invalid number: \'%s\'";
      local_90 = 0x14;
      absl::lts_20240722::str_format_internal::FormatPack(&local_78,&local_98,&local_c8);
      local_b8 = (char *******)&local_78;
      if (0xf < uStack_60) {
        local_b8 = local_78;
      }
      uStack_b0 = local_68;
      SVar4 = JsonLocation::Invalid((JsonLocation *)&local_f0,local_158,&local_b8,0);
                    /* WARNING: Load size is inaccurate */
      in_RDX->rep_ = *SVar4.rep_;
      *(undefined8 *)SVar4.rep_ = 0x37;
      if (in_RDX->rep_ == 1) {
        absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(in_RDX);
      }
      if (((ulonglong)local_158[0] & 1) == 0) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_158[0]);
      }
      if (0xf < uStack_60) {
        uVar7 = uStack_60 + 1;
        pppppppcVar5 = local_78;
        if (0xfff < uVar7) {
          uVar7 = uStack_60 + 0x28;
          pppppppcVar5 = (char *******)local_78[-1];
          if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pppppppcVar5))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete(pppppppcVar5,uVar7);
      }
      local_68 = ___xmm_000000000000000f0000000000000000;
      uStack_60 = _UNK_15076add8;
      local_78 = (char *******)((ulonglong)local_78 & 0xffffffffffffff00);
      if ((StatusRep *)local_128.rep_ != (StatusRep *)&DAT_00000001) {
        if ((local_128.rep_ & 1) != 0) {
          return;
        }
        absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_128.rep_);
        return;
      }
      if (local_f8 != (ZeroCopyBufferedStream *)0x0) {
        ZeroCopyBufferedStream::DownRefBuffer(local_f8);
        local_f8 = (ZeroCopyBufferedStream *)0x0;
      }
    }
  }
  else {
    in_RDX->rep_ = local_128.rep_;
    if ((local_128.rep_ & 1) == 0) {
      LOCK();
      *(int *)local_128.rep_ = *(int *)local_128.rep_ + 1;
      UNLOCK();
    }
    if (in_RDX->rep_ == 1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(in_RDX);
    }
    if (uVar1 == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)SVar4.rep_);
    }
    if ((StatusRep *)local_128.rep_ != (StatusRep *)&DAT_00000001) {
      if ((local_128.rep_ & 1) != 0) {
        return;
      }
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_128.rep_);
      return;
    }
    if (local_f8 != (ZeroCopyBufferedStream *)0x0) {
      ZeroCopyBufferedStream::DownRefBuffer(local_f8);
      local_f8 = (ZeroCopyBufferedStream *)0x0;
    }
  }
  std::
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  ::_Destroy((_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
              *)&local_120);
  return;
}

// ParseRawNumber @ 14fb946c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014fb94f7a) */
/* public: class absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> > __cdecl
   google::protobuf::json_internal::JsonLexer::ParseRawNumber(void) __ptr64 */

void __thiscall google::protobuf::json_internal::JsonLexer::ParseRawNumber(JsonLexer *this)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  int *piVar3;
  void *pvVar4;
  byte bVar5;
  char *pcVar6;
  bool bVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  **pp_Var11;
  Status SVar12;
  Status SVar13;
  ulonglong uVar14;
  void *pvVar15;
  _Bxty *in_RDX;
  ulonglong uVar16;
  ulong64 uVar17;
  ulonglong uVar18;
  StatusRep *pSVar19;
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  *_Buf1;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_1b8 [32];
  StatusRep *local_198 [2];
  _Bxty *local_188;
  code *pcStack_180;
  Status local_178;
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  local_170;
  undefined7 uStack_16f;
  ulonglong uStack_168;
  ulonglong local_160;
  ulonglong uStack_158;
  char local_150;
  ZeroCopyBufferedStream *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  byte local_118;
  undefined7 uStack_117;
  _Bxty *local_108;
  code *pcStack_100;
  char *local_f8;
  undefined8 uStack_f0;
  _Bxty local_e8;
  basic_string_view<char,std::char_traits<char>_> local_d8;
  double local_c0;
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  *local_b8;
  longlong local_b0;
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  *local_a8;
  ulonglong uStack_a0;
  StatusRep *local_98;
  ZeroCopyBufferedStream *local_90;
  undefined8 local_80;
  code *local_78;
  undefined1 local_68 [16];
  _Bxty local_58;
  code *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  pp_Var11 = &local_b8;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_108 = in_RDX;
  SkipToToken(this);
  if (local_198[0] != (StatusRep *)&DAT_00000001) {
    in_RDX->_Ptr = (char *)local_198[0];
    if (((ulonglong)local_198[0] & 1) == 0) {
      LOCK();
      local_198[0]->ref_ = (atomic<int>)((int)local_198[0]->ref_ + 1);
      UNLOCK();
    }
    if (in_RDX->_Ptr == (char *)0x1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg
                ((Status *)&in_RDX->_Ptr);
    }
    if (((ulonglong)local_198[0] & 1) != 0) {
      return;
    }
    absl::lts_20240722::status_internal::StatusRep::Unref(local_198[0]);
    return;
  }
  local_80 = (StatusRep *)((ulonglong)local_80._5_3_ << 0x28);
  FUN_14fb92430(this,&local_178,local_80);
  SVar12.rep_ = local_178.rep_;
  local_80 = (StatusRep *)local_178.rep_;
  SVar13.rep_ = (ulong64)(local_178.rep_ & 0xff);
  if ((local_178.rep_ & 1) == 0) {
    LOCK();
    *(int *)local_178.rep_ = *(int *)local_178.rep_ + 1;
    UNLOCK();
    SVar13.rep_ = local_178.rep_;
  }
  if ((StatusRep *)local_178.rep_ == (StatusRep *)&DAT_00000001) {
    uVar18 = local_160;
    if (local_150 == '\x01') {
      lVar2 = CONCAT71(uStack_16f,local_170);
      uVar14 = *(ulonglong *)(lVar2 + 0x10);
      uVar16 = uStack_168;
      uVar20 = *(undefined4 *)(lVar2 + 8);
      uVar21 = *(undefined4 *)(lVar2 + 0xc);
      if (*(char *)(lVar2 + 0x30) != '\0') {
        uVar16 = uStack_168 - *(longlong *)(lVar2 + 0x40);
        local_d8._Mydata = *(char **)(lVar2 + 0x18);
        uVar14 = *(longlong *)(lVar2 + 0x20) - (longlong)local_d8._Mydata;
        pcVar6 = local_d8._Mydata;
        local_d8._Mysize = uVar14;
        local_d8._Mydata._4_4_ = (undefined4)((ulonglong)local_d8._Mydata >> 0x20);
        uVar20 = local_d8._Mydata._0_4_;
        uVar21 = local_d8._Mydata._4_4_;
        local_d8._Mydata = pcVar6;
      }
      auVar1._4_4_ = uVar21;
      auVar1._0_4_ = uVar20;
      auVar1._8_4_ = (int)uVar14;
      auVar1._12_4_ = (int)(uVar14 >> 0x20);
      uVar14 = auVar1._8_8_;
      if (local_160 == 0xffffffffffffffff) {
        if (uVar14 < uVar16) goto LAB_14fb94f85;
        uVar18 = 0xffffffffffffffff;
        if (uVar14 - uVar16 != 0xffffffffffffffff) {
          uVar18 = uVar14 - uVar16;
        }
        _Buf1 = (_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                 *)(CONCAT44(uVar21,uVar20) + uVar16);
      }
      else {
        if (uVar14 < uVar16) goto LAB_14fb94f85;
        if (uVar14 - uVar16 < local_160) {
          uVar18 = uVar14 - uVar16;
        }
        _Buf1 = (_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                 *)(CONCAT44(uVar21,uVar20) + uVar16);
      }
    }
    else {
      if (local_150 != '\0') {
                    /* WARNING: Subroutine does not return */
        std::_Throw_bad_variant_access();
      }
      _Buf1 = &local_170;
      if (0xf < uStack_158) {
        _Buf1 = (_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                 *)CONCAT71(uStack_16f,local_170);
      }
    }
    local_e8._Ptr = (char *)_Buf1;
    local_e8._8_8_ = uVar18;
    if ((uVar18 == 0) || ((uVar18 == 1 && (iVar10 = memcmp(_Buf1,&s__,1), iVar10 == 0)))) {
      local_68._0_8_ = "expected a number";
      local_68._8_8_ = (code *)0x11;
      SVar12 = JsonLocation::Invalid((JsonLocation *)&local_140,&local_80,local_68,0);
      in_RDX->_Ptr = *(char **)SVar12.rep_;
      *(undefined8 *)SVar12.rep_ = 0x37;
      if (in_RDX->_Ptr == (char *)0x1) {
        absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg
                  ((Status *)&in_RDX->_Ptr);
      }
      if (((ulonglong)local_80 & 1) == 0) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_80);
      }
      if ((StatusRep *)local_178.rep_ != (StatusRep *)&DAT_00000001) {
        if ((local_178.rep_ & 1) != 0) {
          return;
        }
        absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_178.rep_);
        return;
      }
      if (local_148 != (ZeroCopyBufferedStream *)0x0) {
        ZeroCopyBufferedStream::DownRefBuffer(local_148);
        local_148 = (ZeroCopyBufferedStream *)0x0;
      }
    }
    else {
      if (*_Buf1 == (_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                     )0x2d) {
        if (uVar18 == 0) {
LAB_14fb94f85:
                    /* WARNING: Subroutine does not return */
          std::basic_string_view<char,std::char_traits<char>_>::_Xran();
        }
        local_b0 = -1;
        if (uVar18 - 1 != -1) {
          local_b0 = uVar18 - 1;
        }
        local_b8 = _Buf1 + 1;
      }
      else {
        local_a8 = (_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                    *)local_e8._Ptr;
        uStack_a0 = local_e8._8_8_;
        pp_Var11 = &local_a8;
      }
      if (((pp_Var11[1] <
            (_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
             *)0x2) ||
          (**pp_Var11 !=
           (_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
            )0x30)) || (9 < (byte)((char)(*pp_Var11)[1] - 0x30U))) {
        if (_Buf1[uVar18 - 1] ==
            (_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
             )0x2e) {
          local_108 = (_Bxty *)0x1535dffd8;
          pcStack_100 = (code *)0x22;
          local_68._0_8_ = "number cannot have trailing period";
          local_68._8_8_ = (code *)0x22;
          SVar12 = JsonLocation::Invalid((JsonLocation *)&local_140,&local_80,local_68,0);
          absl::lts_20240722::
          StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
          ::
          StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><absl::lts_20240722::Status,0>
                    ((StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                      *)in_RDX->_Buf,(Status *)SVar12.rep_);
          if (((ulonglong)local_80 & 1) == 0) {
            absl::lts_20240722::status_internal::StatusRep::Unref(local_80);
          }
          if ((StatusRep *)local_178.rep_ != (StatusRep *)&DAT_00000001) {
            if ((local_178.rep_ & 1) != 0) {
              return;
            }
            absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_178.rep_);
            return;
          }
          if (local_148 != (ZeroCopyBufferedStream *)0x0) {
            ZeroCopyBufferedStream::DownRefBuffer(local_148);
            local_148 = (ZeroCopyBufferedStream *)0x0;
          }
        }
        else {
          local_d8._Mydata = local_e8._Ptr;
          local_d8._Mysize = local_e8._8_8_;
          bVar7 = absl::lts_20240722::SimpleAtod(&local_d8,&local_c0);
          if ((bVar7) && (sVar9 = _dclass(local_c0), sVar9 < 1)) {
            ZeroCopyBufferedStream::BufferAtLeast
                      ((ZeroCopyBufferedStream *)this,(__uint64)&local_98);
            if (local_98 == (StatusRep *)&DAT_00000001) {
              if (local_90 != (ZeroCopyBufferedStream *)0x0) {
                ZeroCopyBufferedStream::DownRefBuffer(local_90);
              }
            }
            else if (((ulonglong)local_98 & 1) == 0) {
              absl::lts_20240722::status_internal::StatusRep::Unref(local_98);
            }
            if (this[0x48] == (JsonLexer)0x0) {
              SkipToToken(this);
              piVar3 = (int *)CONCAT71(uStack_117,local_118);
              if (piVar3 != (int *)&DAT_00000001) {
                in_RDX->_Ptr = (char *)piVar3;
                bVar5 = local_118 & 1;
                if ((local_118 & 1) == 0) {
                  LOCK();
                  *piVar3 = *piVar3 + 1;
                  UNLOCK();
                }
                pSVar19 = (StatusRep *)CONCAT71(uStack_117,local_118);
                if (in_RDX->_Ptr == (char *)0x1) {
                  absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg
                            ((Status *)&in_RDX->_Ptr);
                }
                if (bVar5 == 0) {
                  absl::lts_20240722::status_internal::StatusRep::Unref(pSVar19);
                }
                if ((StatusRep *)local_178.rep_ != (StatusRep *)&DAT_00000001) {
                  if ((local_178.rep_ & 1) != 0) {
                    return;
                  }
                  absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_178.rep_)
                  ;
                  return;
                }
                if (local_148 != (ZeroCopyBufferedStream *)0x0) {
                  ZeroCopyBufferedStream::DownRefBuffer(local_148);
                  local_148 = (ZeroCopyBufferedStream *)0x0;
                }
                goto LAB_14fb947f1;
              }
              cVar8 = ZeroCopyBufferedStream::PeekChar((ZeroCopyBufferedStream *)this);
              if (((cVar8 != ',') && (cVar8 != ']')) && (cVar8 != '}')) {
                local_118 = ZeroCopyBufferedStream::PeekChar((ZeroCopyBufferedStream *)this);
                local_80 = (StatusRep *)CONCAT71(uStack_117,local_118);
                local_78 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<char>;
                local_f8 = (char *)&local_80;
                uStack_f0 = 1;
                local_188 = (_Bxty *)0x1535dfef0;
                pcStack_180 = (code *)0x1a;
                absl::lts_20240722::str_format_internal::FormatPack(&local_58,&local_188,&local_f8);
                local_68._0_8_ = &local_58;
                if (0xf < local_40) {
                  local_68._0_8_ = (_Bxty *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
                }
                local_68._8_8_ = local_48;
                JsonLocation::Invalid((JsonLocation *)(this + 0x60),local_198,local_68,0);
                pSVar19 = local_198[0];
                in_RDX->_Ptr = (char *)local_198[0];
                local_198[0] = (StatusRep *)&DAT_00000037;
                if (pSVar19 == (StatusRep *)&DAT_00000001) {
                  absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg
                            ((Status *)&in_RDX->_Ptr);
                }
                if (((ulonglong)local_198[0] & 1) == 0) {
                  absl::lts_20240722::status_internal::StatusRep::Unref(local_198[0]);
                }
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_58);
                if ((StatusRep *)local_178.rep_ != (StatusRep *)&DAT_00000001) {
                  if ((local_178.rep_ & 1) != 0) {
                    return;
                  }
                  absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_178.rep_)
                  ;
                  return;
                }
                if (local_148 != (ZeroCopyBufferedStream *)0x0) {
                  ZeroCopyBufferedStream::DownRefBuffer(local_148);
                  local_148 = (ZeroCopyBufferedStream *)0x0;
                }
                goto LAB_14fb947f1;
              }
            }
            if ((StatusRep *)local_178.rep_ == (StatusRep *)&DAT_00000001) {
              *(StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                *)(in_RDX->_Buf + 0x28) =
                   (StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                    )0xff;
              if (local_150 != -1) {
                *(ulonglong *)(in_RDX->_Buf + 8) = CONCAT71(uStack_16f,local_170);
                *(ulonglong *)(in_RDX->_Buf + 0x10) = uStack_168;
                if (local_150 == '\0') {
                  *(ulonglong *)(in_RDX->_Buf + 0x18) = local_160;
                  *(ulonglong *)(in_RDX->_Buf + 0x20) = uStack_158;
                  local_160 = 0;
                  uStack_158 = 0xf;
                  local_170 = (_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                               )0x0;
                  *(StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                    *)(in_RDX->_Buf + 0x28) =
                       (StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                        )0x0;
                }
                else {
                  *(ulonglong *)(in_RDX->_Buf + 0x18) = local_160;
                  *(StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                    *)(in_RDX->_Buf + 0x28) =
                       (StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                        )0x1;
                }
              }
              *(ZeroCopyBufferedStream **)(in_RDX->_Buf + 0x30) = local_148;
              if ((local_148 != (ZeroCopyBufferedStream *)0x0) &&
                 (iVar10 = *(int *)(local_148 + 0x4c),
                 *(int *)(local_148 + 0x4c) = *(int *)(local_148 + 0x4c) + 1, iVar10 == 0)) {
                *(undefined8 *)(local_148 + 0x40) = *(undefined8 *)(local_148 + 0x38);
              }
              *(undefined8 *)(in_RDX->_Buf + 0x38) = local_140;
              *(undefined8 *)(in_RDX->_Buf + 0x40) = uStack_138;
              *(undefined8 *)(in_RDX->_Buf + 0x48) = local_130;
              *(undefined8 *)(in_RDX->_Buf + 0x50) = uStack_128;
              in_RDX->_Ptr = (char *)0x1;
            }
            else {
              in_RDX->_Ptr = (char *)local_178.rep_;
              local_178.rep_ = (ulong64)&DAT_00000037;
            }
            if ((StatusRep *)local_178.rep_ != (StatusRep *)&DAT_00000001) {
              if ((local_178.rep_ & 1) != 0) {
                return;
              }
              absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_178.rep_);
              return;
            }
            if (local_148 != (ZeroCopyBufferedStream *)0x0) {
              ZeroCopyBufferedStream::DownRefBuffer(local_148);
              local_148 = (ZeroCopyBufferedStream *)0x0;
            }
          }
          else {
            if ((StatusRep *)local_178.rep_ != (StatusRep *)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
              absl::lts_20240722::internal_statusor::Helper::Crash(&local_178);
            }
            local_68._0_8_ = &local_e8;
            local_68._8_8_ =
                 absl::lts_20240722::str_format_internal::FormatArgImpl::
                 Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
            local_188 = (_Bxty *)local_68;
            pcStack_180 = (code *)0x1;
            local_f8 = "invalid number: \'%s\'";
            uStack_f0 = 0x14;
            absl::lts_20240722::str_format_internal::FormatPack(&local_58,&local_f8,&local_188);
            local_188 = &local_58;
            if (0xf < local_40) {
              local_188 = (_Bxty *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
            }
            pcStack_100 = local_48;
            pcStack_180 = local_48;
            local_108 = local_188;
            SVar12 = JsonLocation::Invalid((JsonLocation *)&local_140,&local_80,&local_188,0);
            absl::lts_20240722::
            StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
            ::
            StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><absl::lts_20240722::Status,0>
                      ((StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                        *)in_RDX->_Buf,(Status *)SVar12.rep_);
            if (((ulonglong)local_80 & 1) == 0) {
              absl::lts_20240722::status_internal::StatusRep::Unref(local_80);
            }
            if (0xf < local_40) {
              uVar17 = local_40 + 1;
              pvVar4 = (void *)CONCAT71(local_58._1_7_,local_58._Buf[0]);
              pvVar15 = pvVar4;
              if (0xfff < uVar17) {
                uVar17 = local_40 + 0x28;
                pvVar15 = *(void **)((longlong)pvVar4 + -8);
                if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar15))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              ::operator_delete(pvVar15,uVar17);
            }
            local_48 = (code *)0x0;
            local_40 = 0xf;
            local_58._Buf[0] = '\0';
            if ((StatusRep *)local_178.rep_ != (StatusRep *)&DAT_00000001) {
              if ((local_178.rep_ & 1) != 0) {
                return;
              }
              absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_178.rep_);
              return;
            }
            if (local_148 != (ZeroCopyBufferedStream *)0x0) {
              ZeroCopyBufferedStream::DownRefBuffer(local_148);
              local_148 = (ZeroCopyBufferedStream *)0x0;
            }
          }
        }
      }
      else {
        local_108 = (_Bxty *)0x1535dffa8;
        pcStack_100 = (code *)0x2a;
        local_68._0_8_ = "number cannot have extraneous leading zero";
        local_68._8_8_ = (code *)0x2a;
        SVar12 = JsonLocation::Invalid((JsonLocation *)&local_140,&local_80,local_68,0);
        absl::lts_20240722::
        StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
        ::
        StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><absl::lts_20240722::Status,0>
                  ((StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                    *)in_RDX->_Buf,(Status *)SVar12.rep_);
        if (((ulonglong)local_80 & 1) == 0) {
          absl::lts_20240722::status_internal::StatusRep::Unref(local_80);
        }
        if ((StatusRep *)local_178.rep_ != (StatusRep *)&DAT_00000001) {
          if ((local_178.rep_ & 1) != 0) {
            return;
          }
          absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_178.rep_);
          return;
        }
        if (local_148 != (ZeroCopyBufferedStream *)0x0) {
          ZeroCopyBufferedStream::DownRefBuffer(local_148);
          local_148 = (ZeroCopyBufferedStream *)0x0;
        }
      }
    }
  }
  else {
    *(ulong64 *)in_RDX = local_178.rep_;
    uVar18 = local_178.rep_ & 1;
    if ((local_178.rep_ & 1) == 0) {
      LOCK();
      *(int *)local_178.rep_ = *(int *)local_178.rep_ + 1;
      UNLOCK();
      SVar13.rep_ = local_178.rep_ & 0xff;
    }
    if (in_RDX->_Ptr == (char *)0x1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg
                ((Status *)&in_RDX->_Ptr);
      SVar13.rep_ = local_178.rep_ & 0xff;
    }
    if (uVar18 == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)SVar12.rep_);
      SVar13.rep_ = local_178.rep_ & 0xff;
    }
    if ((StatusRep *)local_178.rep_ != (StatusRep *)&DAT_00000001) {
      if ((SVar13.rep_ & 1) != 0) {
        return;
      }
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_178.rep_);
      return;
    }
    if (local_148 != (ZeroCopyBufferedStream *)0x0) {
      ZeroCopyBufferedStream::DownRefBuffer(local_148);
      local_148 = (ZeroCopyBufferedStream *)0x0;
    }
  }
LAB_14fb947f1:
  std::
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  ::_Destroy(&local_170);
  return;
}

// ParseU16HexCodepoint @ 14fb95070

/* WARNING: Removing unreachable block (ram,0x00014fb95151) */
/* WARNING: Removing unreachable block (ram,0x00014fb952f8) */
/* WARNING: Type propagation algorithm not settling */
/* private: class absl::lts_20240722::StatusOr<unsigned short> __cdecl
   google::protobuf::json_internal::JsonLexer::ParseU16HexCodepoint(void) __ptr64 */

void __thiscall google::protobuf::json_internal::JsonLexer::ParseU16HexCodepoint(JsonLexer *this)

{
  char *******pppppppcVar1;
  char cVar2;
  ulonglong uVar3;
  Status SVar4;
  char ******ppppppcVar5;
  byte bVar6;
  ushort uVar7;
  Status *in_RDX;
  char *******pppppppcVar8;
  char ******ppppppcVar9;
  Status local_res18 [2];
  char *local_b8;
  undefined8 uStack_b0;
  Status local_98;
  char *******local_90;
  char ******local_88;
  ulonglong local_80;
  ulonglong local_78;
  char local_70;
  ZeroCopyBufferedStream *local_68;
  char ******local_38;
  char ******ppppppcStack_30;
  
  Take(this,(__uint64)&local_98);
  SVar4.rep_ = local_98.rep_;
  local_res18[0].rep_ = local_98.rep_;
  uVar3 = local_98.rep_ & 1;
  if ((local_98.rep_ & 1) == 0) {
    LOCK();
    *(int *)local_98.rep_ = *(int *)local_98.rep_ + 1;
    UNLOCK();
  }
  if ((StatusRep *)local_98.rep_ == (StatusRep *)0x1) {
    uVar7 = 0;
    if (local_70 == '\x01') {
      ppppppcVar9 = local_90[1];
      ppppppcVar5 = local_90[2];
      local_38 = ppppppcVar9;
      ppppppcStack_30 = ppppppcVar5;
      if (*(char *)(local_90 + 6) != '\0') {
        local_88 = (char ******)((longlong)local_88 - (longlong)local_90[8]);
        ppppppcVar9 = local_90[3];
        ppppppcVar5 = (char ******)((longlong)local_90[4] - (longlong)ppppppcVar9);
      }
      if (local_80 == 0xffffffffffffffff) {
        if (ppppppcVar5 < local_88) {
LAB_14fb952ec:
                    /* WARNING: Subroutine does not return */
          std::basic_string_view<char,std::char_traits<char>_>::_Xran();
        }
        if ((longlong)ppppppcVar5 - (longlong)local_88 != 0xffffffffffffffff) {
          local_80 = (longlong)ppppppcVar5 - (longlong)local_88;
        }
        pppppppcVar8 = (char *******)((longlong)local_88 + (longlong)ppppppcVar9);
      }
      else {
        if (ppppppcVar5 < local_88) goto LAB_14fb952ec;
        if ((ulonglong)((longlong)ppppppcVar5 - (longlong)local_88) < local_80) {
          local_80 = (longlong)ppppppcVar5 - (longlong)local_88;
        }
        pppppppcVar8 = (char *******)((longlong)local_88 + (longlong)ppppppcVar9);
      }
    }
    else {
      if (local_70 != '\0') {
                    /* WARNING: Subroutine does not return */
        std::_Throw_bad_variant_access();
      }
      pppppppcVar8 = (char *******)&local_90;
      if (0xf < local_78) {
        pppppppcVar8 = local_90;
      }
    }
    pppppppcVar1 = (char *******)((longlong)pppppppcVar8 + local_80);
    for (; pppppppcVar8 != pppppppcVar1; pppppppcVar8 = (char *******)((longlong)pppppppcVar8 + 1))
    {
      cVar2 = *(char *)pppppppcVar8;
      bVar6 = cVar2 - 0x30;
      if (9 < bVar6) {
        if ((byte)(cVar2 + 0x9fU) < 6) {
          bVar6 = cVar2 + 0xa9;
        }
        else {
          if (5 < (byte)(cVar2 + 0xbfU)) {
            local_b8 = "invalid Unicode escape";
            uStack_b0 = 0x16;
            JsonLocation::Invalid((JsonLocation *)(this + 0x60),local_res18,&local_b8,0);
            SVar4.rep_ = local_res18[0].rep_;
            in_RDX->rep_ = local_res18[0].rep_;
            local_res18[0].rep_ = (ulong64)&DAT_00000037;
            if ((StatusRep *)SVar4.rep_ == (StatusRep *)0x1) {
              absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(in_RDX);
            }
            if ((local_res18[0].rep_ & 1) == 0) {
              absl::lts_20240722::status_internal::StatusRep::Unref
                        ((StatusRep *)local_res18[0].rep_);
            }
            if ((StatusRep *)local_98.rep_ != (StatusRep *)&DAT_00000001) {
              if ((local_98.rep_ & 1) != 0) {
                return;
              }
              absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_98.rep_);
              return;
            }
            if (local_68 != (ZeroCopyBufferedStream *)0x0) {
              ZeroCopyBufferedStream::DownRefBuffer(local_68);
              local_68 = (ZeroCopyBufferedStream *)0x0;
            }
            goto LAB_14fb9511a;
          }
          bVar6 = cVar2 - 0x37;
        }
      }
      uVar7 = uVar7 << 4 | (short)(char)bVar6;
    }
    *(ushort *)&in_RDX[1].rep_ = uVar7;
    in_RDX->rep_ = 1;
    if (local_68 != (ZeroCopyBufferedStream *)0x0) {
      ZeroCopyBufferedStream::DownRefBuffer(local_68);
      local_68 = (ZeroCopyBufferedStream *)0x0;
    }
  }
  else {
    in_RDX->rep_ = local_98.rep_;
    if ((local_98.rep_ & 1) == 0) {
      LOCK();
      *(int *)local_98.rep_ = *(int *)local_98.rep_ + 1;
      UNLOCK();
    }
    if (in_RDX->rep_ == 1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(in_RDX);
    }
    if (uVar3 == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)SVar4.rep_);
    }
    if ((StatusRep *)local_98.rep_ != (StatusRep *)&DAT_00000001) {
      if ((local_98.rep_ & 1) != 0) {
        return;
      }
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_98.rep_);
      return;
    }
    if (local_68 != (ZeroCopyBufferedStream *)0x0) {
      ZeroCopyBufferedStream::DownRefBuffer(local_68);
      local_68 = (ZeroCopyBufferedStream *)0x0;
    }
  }
LAB_14fb9511a:
  std::
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  ::_Destroy((_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
              *)&local_90);
  return;
}

// ParseUnicodeEscape @ 14fb95310

/* WARNING: Removing unreachable block (ram,0x00014fb953c4) */
/* WARNING: Removing unreachable block (ram,0x00014fb95522) */
/* WARNING: Removing unreachable block (ram,0x00014fb9585d) */
/* WARNING: Removing unreachable block (ram,0x00014fb95867) */
/* private: class absl::lts_20240722::StatusOr<unsigned __int64> __cdecl
   google::protobuf::json_internal::JsonLexer::ParseUnicodeEscape(char * __ptr64 const) __ptr64 */

char * __thiscall
google::protobuf::json_internal::JsonLexer::ParseUnicodeEscape(JsonLexer *this,char *param_1)

{
  ulonglong uVar1;
  StatusRep *pSVar2;
  uint uVar3;
  uint uVar4;
  byte *in_R8;
  StatusRep *local_res20;
  StatusRep *local_a8 [2];
  char *local_98;
  undefined8 uStack_90;
  StatusRep *local_88;
  ushort local_80;
  StatusRep *local_70;
  ushort local_68;
  StatusRep *local_58;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  ParseU16HexCodepoint(this);
  pSVar2 = local_88;
  local_a8[0] = local_88;
  uVar1 = (ulonglong)local_88 & 1;
  if (((ulonglong)local_88 & 1) == 0) {
    LOCK();
    local_88->ref_ = (atomic<int>)((int)local_88->ref_ + 1);
    UNLOCK();
  }
  if (local_88 != (StatusRep *)&DAT_00000001) {
    *(StatusRep **)param_1 = local_88;
    if (((ulonglong)local_88 & 1) == 0) {
      LOCK();
      local_88->ref_ = (atomic<int>)((int)local_88->ref_ + 1);
      UNLOCK();
    }
    if (*(longlong *)param_1 == 1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)param_1);
    }
    if (uVar1 == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref(pSVar2);
    }
    if (local_88 == (StatusRep *)&DAT_00000001) {
      return param_1;
    }
    if (((ulonglong)local_88 & 1) != 0) {
      return param_1;
    }
    absl::lts_20240722::status_internal::StatusRep::Unref(local_88);
    return param_1;
  }
  uVar4 = (uint)local_80;
  uVar3 = (uint)local_80;
  if ((local_80 < 0xd800) || (0xdbff < local_80)) {
    if (0xdbff < uVar3) {
      if (uVar3 < 0xe000) {
        local_98 = "unpaired low surrogate";
        uStack_90 = 0x16;
        JsonLocation::Invalid((JsonLocation *)(this + 0x60),local_a8,&local_98,0);
        pSVar2 = local_a8[0];
        *(StatusRep **)param_1 = local_a8[0];
        local_a8[0] = (StatusRep *)&DAT_00000037;
        if (pSVar2 == (StatusRep *)&DAT_00000001) {
          absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg
                    ((Status *)param_1);
        }
        if (((ulonglong)local_a8[0] & 1) == 0) {
          absl::lts_20240722::status_internal::StatusRep::Unref(local_a8[0]);
        }
        if (local_88 == (StatusRep *)&DAT_00000001) {
          return param_1;
        }
        if (((ulonglong)local_88 & 1) != 0) {
          return param_1;
        }
        absl::lts_20240722::status_internal::StatusRep::Unref(local_88);
        return param_1;
      }
      goto LAB_14fb95713;
    }
  }
  else {
    local_48 = "\\u";
    uStack_40 = 2;
    local_38 = 0x535dfffc;
    uStack_34 = 1;
    uStack_30 = 2;
    uStack_2c = 0;
    Expect(this,&local_res20,&local_38,0);
    if (local_res20 != (StatusRep *)&DAT_00000001) {
      *(StatusRep **)param_1 = local_res20;
      if (((ulonglong)local_res20 & 1) == 0) {
        LOCK();
        local_res20->ref_ = (atomic<int>)((int)local_res20->ref_ + 1);
        UNLOCK();
      }
      if (*(longlong *)param_1 == 1) {
        absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)param_1)
        ;
      }
      if (((ulonglong)local_res20 & 1) == 0) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_res20);
      }
      if (local_88 == (StatusRep *)&DAT_00000001) {
        return param_1;
      }
      if (((ulonglong)local_88 & 1) != 0) {
        return param_1;
      }
      absl::lts_20240722::status_internal::StatusRep::Unref(local_88);
      return param_1;
    }
    ParseU16HexCodepoint(this);
    pSVar2 = local_70;
    local_58 = local_70;
    uVar1 = (ulonglong)local_70 & 1;
    if (((ulonglong)local_70 & 1) == 0) {
      LOCK();
      local_70->ref_ = (atomic<int>)((int)local_70->ref_ + 1);
      UNLOCK();
    }
    if (local_70 != (StatusRep *)&DAT_00000001) {
      *(StatusRep **)param_1 = local_70;
      if (((ulonglong)local_70 & 1) == 0) {
        LOCK();
        local_70->ref_ = (atomic<int>)((int)local_70->ref_ + 1);
        UNLOCK();
      }
      if (*(longlong *)param_1 == 1) {
        absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)param_1)
        ;
      }
      if (uVar1 == 0) {
        absl::lts_20240722::status_internal::StatusRep::Unref(pSVar2);
      }
      if ((local_70 != (StatusRep *)&DAT_00000001) && (((ulonglong)local_70 & 1) == 0)) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_70);
      }
      if (local_88 == (StatusRep *)&DAT_00000001) {
        return param_1;
      }
      if (((ulonglong)local_88 & 1) != 0) {
        return param_1;
      }
      absl::lts_20240722::status_internal::StatusRep::Unref(local_88);
      return param_1;
    }
    if (0x3ff < local_68 - 0xdc00) {
      local_98 = "invalid low surrogate";
      uStack_90 = 0x15;
      JsonLocation::Invalid((JsonLocation *)(this + 0x60),local_a8,&local_98,0);
      pSVar2 = local_a8[0];
      *(StatusRep **)param_1 = local_a8[0];
      local_a8[0] = (StatusRep *)&DAT_00000037;
      if (pSVar2 == (StatusRep *)&DAT_00000001) {
        absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)param_1)
        ;
      }
      if (((ulonglong)local_a8[0] & 1) == 0) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_a8[0]);
      }
      if ((local_70 != (StatusRep *)&DAT_00000001) && (((ulonglong)local_70 & 1) == 0)) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_70);
      }
      if (local_88 == (StatusRep *)&DAT_00000001) {
        return param_1;
      }
      if (((ulonglong)local_88 & 1) != 0) {
        return param_1;
      }
      absl::lts_20240722::status_internal::StatusRep::Unref(local_88);
      return param_1;
    }
    uVar4 = ((uVar3 & 0x3ff) << 10 | local_68 & 0x3ff) + 0x10000;
  }
  if (uVar4 < 0x80) {
    *in_R8 = (byte)uVar4;
    param_1[8] = '\x01';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0] = '\x01';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    if (local_88 == (StatusRep *)&DAT_00000001) {
      return param_1;
    }
    if (((ulonglong)local_88 & 1) != 0) {
      return param_1;
    }
    absl::lts_20240722::status_internal::StatusRep::Unref(local_88);
    return param_1;
  }
  if (uVar4 < 0x800) {
    *in_R8 = (byte)(uVar4 >> 6) & 0x1f | 0xc0;
    in_R8[1] = (byte)uVar4 & 0x3f | 0x80;
    param_1[8] = '\x02';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0] = '\x01';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    if (local_88 == (StatusRep *)&DAT_00000001) {
      return param_1;
    }
    if (((ulonglong)local_88 & 1) != 0) {
      return param_1;
    }
    absl::lts_20240722::status_internal::StatusRep::Unref(local_88);
    return param_1;
  }
LAB_14fb95713:
  if (uVar4 < 0x10000) {
    *in_R8 = (byte)(uVar4 >> 0xc) & 0xf | 0xe0;
    in_R8[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
    in_R8[2] = (byte)uVar4 & 0x3f | 0x80;
    param_1[8] = '\x03';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0] = '\x01';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    if ((local_88 != (StatusRep *)&DAT_00000001) && (((ulonglong)local_88 & 1) == 0)) {
      absl::lts_20240722::status_internal::StatusRep::Unref(local_88);
    }
  }
  else if (uVar4 < 0x110000) {
    *in_R8 = (byte)(uVar4 >> 0x12) | 0xf0;
    in_R8[1] = (byte)(uVar4 >> 0xc) & 0x3f | 0x80;
    in_R8[2] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
    in_R8[3] = (byte)uVar4 & 0x3f | 0x80;
    param_1[8] = '\x04';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0] = '\x01';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    if ((local_88 != (StatusRep *)&DAT_00000001) && (((ulonglong)local_88 & 1) == 0)) {
      absl::lts_20240722::status_internal::StatusRep::Unref(local_88);
    }
  }
  else {
    local_98 = "invalid codepoint";
    uStack_90 = 0x11;
    JsonLocation::Invalid((JsonLocation *)(this + 0x60),local_a8,&local_98,0);
    pSVar2 = local_a8[0];
    *(StatusRep **)param_1 = local_a8[0];
    local_a8[0] = (StatusRep *)&DAT_00000037;
    if (pSVar2 == (StatusRep *)&DAT_00000001) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)param_1);
    }
    if (((ulonglong)local_a8[0] & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref(local_a8[0]);
    }
    if ((local_88 != (StatusRep *)&DAT_00000001) && (((ulonglong)local_88 & 1) == 0)) {
      absl::lts_20240722::status_internal::StatusRep::Unref(local_88);
    }
  }
  return param_1;
}

// ParseUtf8 @ 14fb95880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014fb96e08) */
/* WARNING: Removing unreachable block (ram,0x00014fb96e1e) */
/* WARNING: Removing unreachable block (ram,0x00014fb96deb) */
/* WARNING: Type propagation algorithm not settling */
/* public: class absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> > __cdecl
   google::protobuf::json_internal::JsonLexer::ParseUtf8(void) __ptr64 */

_Bxty * __thiscall google::protobuf::json_internal::JsonLexer::ParseUtf8(JsonLexer *this)

{
  byte *pbVar1;
  char *pcVar2;
  <lambda_1> <Var3;
  byte bVar4;
  char ******ppppppcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined1 *puVar14;
  char cVar15;
  byte bVar16;
  bool bVar17;
  StatusOr<google::protobuf::json_internal::BufferingGuard> *pSVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  longlong lVar21;
  code *pcVar22;
  undefined8 uVar23;
  int iVar24;
  _Bxty *in_RDX;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  _Bxty *p_Var28;
  StatusRep *pSVar29;
  char *******_Src;
  StatusRep *pSVar30;
  ulonglong uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  int iVar34;
  undefined1 auStackY_3b8 [32];
  _Bxty *local_380;
  Status local_378 [2];
  char *local_368;
  undefined8 uStack_360;
  basic_string_view<char,std::char_traits<char>_> local_358;
  _Bxty *local_348;
  _Bxty *local_338;
  code *pcStack_330;
  ZeroCopyBufferedStream *local_328;
  _Bxty *local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  _Bxty *local_2f8;
  code *pcStack_2f0;
  _Bxty *local_2e8;
  ZeroCopyBufferedStream *pZStack_2e0;
  char *local_2d8;
  basic_string_view<char,std::char_traits<char>_> local_2c8;
  StatusRep *local_2b8;
  StatusRep *local_2b0;
  undefined8 local_2a8;
  char ******ppppppcStack_2a0;
  StatusRep *local_298;
  StatusRep *local_290;
  StatusRep *local_288;
  StatusRep *local_280;
  StatusRep *local_278;
  StatusRep *local_270;
  ulonglong local_268;
  StatusRep *local_260;
  longlong local_258;
  StatusRep *local_248;
  char *******local_240;
  ulonglong local_238;
  ulonglong local_230;
  ulonglong local_228;
  char local_220;
  ZeroCopyBufferedStream *local_218;
  _Bxty local_208;
  code *local_1f8;
  ulonglong local_1f0;
  char local_1e8;
  ZeroCopyBufferedStream *local_1e0;
  _Bxty local_1d8;
  char *local_1c8;
  ulonglong local_1c0;
  char local_1b8;
  _Bxty *local_1b0;
  undefined4 local_1a8;
  int local_1a4;
  undefined8 local_198;
  longlong lStack_190;
  _Bxty local_188;
  ulonglong local_178;
  ulonglong uStack_170;
  char local_168;
  ZeroCopyBufferedStream *local_160;
  _Bxty local_158;
  char *local_148;
  undefined1 local_138;
  _Bxty *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  ulonglong local_100;
  StatusRep *local_f8;
  ZeroCopyBufferedStream *local_f0;
  ulonglong local_e0;
  _Bxty local_d8;
  ulonglong local_c8;
  ulonglong uStack_c0;
  _Bxty *local_b8;
  code *pcStack_b0;
  _Bxty local_a8;
  code *local_98;
  ulonglong local_90;
  _Bxty local_88;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_1a8 = 0;
  local_380 = in_RDX;
  local_338 = in_RDX;
  SkipToToken(this);
  if ((_Bxty *)local_378[0].rep_ == (_Bxty *)&DAT_00000001) {
    uVar25 = *(ulonglong *)(this + 0x38);
    uVar32 = *(undefined4 *)(this + 8);
    uVar33 = *(undefined4 *)(this + 0xc);
    pcVar2 = *(char **)(this + 0x10);
    if (this[0x30] != (JsonLexer)0x0) {
      uVar25 = uVar25 - *(longlong *)(this + 0x40);
      p_Var28 = *(_Bxty **)(this + 0x18);
      local_2c8._Mysize = *(longlong *)(this + 0x20) - (longlong)p_Var28;
      local_2c8._Mydata._0_4_ = SUB84(p_Var28,0);
      local_2c8._Mydata._4_4_ = (undefined4)((ulonglong)p_Var28 >> 0x20);
      uVar32 = local_2c8._Mydata._0_4_;
      uVar33 = local_2c8._Mydata._4_4_;
      local_2c8._Mydata = (char *)p_Var28;
      pcVar2 = (char *)local_2c8._Mysize;
    }
    auVar6._4_4_ = uVar33;
    auVar6._0_4_ = uVar32;
    auVar6._8_4_ = (int)pcVar2;
    auVar6._12_4_ = (int)((ulonglong)pcVar2 >> 0x20);
    if (auVar6._8_8_ < uVar25) {
                    /* WARNING: Subroutine does not return */
      std::basic_string_view<char,std::char_traits<char>_>::_Xran();
    }
    <Var3 = *(<lambda_1> *)(CONCAT44(uVar33,uVar32) + uVar25);
    if ((this[0x58] == (JsonLexer)0x0) && (<Var3 == (<lambda_1>)0x27)) {
      local_368 = "expected \'\"\'";
      uStack_360 = 0xc;
      local_b8 = (_Bxty *)0x1535db8e8;
      pcStack_b0 = (code *)0xc;
      JsonLocation::Invalid((JsonLocation *)(this + 0x60),&local_380,&local_b8,0);
      p_Var28 = local_380;
      in_RDX->_Ptr = (char *)local_380;
      local_380 = (_Bxty *)&DAT_00000037;
      local_2f8 = local_380;
      if (p_Var28 == (_Bxty *)&DAT_00000001) {
        absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg
                  ((Status *)&in_RDX->_Ptr);
        local_2f8 = local_380;
      }
    }
    else {
      uVar23 = *(undefined8 *)(this + 0x60);
      uVar10 = *(undefined8 *)(this + 0x68);
      uVar11 = *(undefined8 *)(this + 0x70);
      uVar12 = *(undefined8 *)(this + 0x78);
      local_358._Mydata = "\"";
      if (<Var3 == (<lambda_1>)0x27) {
        local_358._Mydata = &s__;
      }
      pcVar22 = (code *)0xffffffffffffffff;
      do {
        local_358._Mysize = (ulong64)(pcVar22 + 1);
        pcVar2 = (undefined1 *)((longlong)local_358._Mydata + 1) + (longlong)pcVar22;
        pcVar22 = (code *)local_358._Mysize;
      } while (*pcVar2 != '\0');
      local_b8 = (_Bxty *)local_358._Mydata;
      pcStack_b0 = (code *)local_358._Mysize;
      Expect(this,&local_2f8,&local_358,0);
      if (local_2f8 == (_Bxty *)&DAT_00000001) {
        local_d8._8_8_ = 0;
        local_c8 = 0;
        uStack_c0 = 0xf;
        local_d8._Ptr = (char *)0x0;
        iVar24 = *(int *)(this + 0x4c);
        if (iVar24 == 0) {
          *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x38);
        }
        local_328 = *(ZeroCopyBufferedStream **)(this + 0x38);
        *(int *)(this + 0x4c) = iVar24 + 2;
        if (iVar24 == -1) {
          *(ZeroCopyBufferedStream **)(this + 0x40) = local_328;
        }
        local_320 = (_Bxty *)this;
        ZeroCopyBufferedStream::DownRefBuffer((ZeroCopyBufferedStream *)this);
        local_318 = *(undefined8 *)(this + 0x60);
        uStack_310 = *(undefined8 *)(this + 0x68);
        local_308 = *(undefined8 *)(this + 0x70);
        uStack_300 = *(undefined8 *)(this + 0x78);
        uVar25 = 0xf;
LAB_14fb95b00:
        do {
          pSVar18 = (StatusOr<google::protobuf::json_internal::BufferingGuard> *)
                    ZeroCopyBufferedStream::BufferAtLeast
                              ((ZeroCopyBufferedStream *)this,(__uint64)&local_f8);
          absl::lts_20240722::StatusOr<google::protobuf::json_internal::BufferingGuard>::status
                    (pSVar18);
          if (local_f8 == (StatusRep *)&DAT_00000001) {
            if (local_f0 != (ZeroCopyBufferedStream *)0x0) {
              ZeroCopyBufferedStream::DownRefBuffer(local_f0);
            }
          }
          else if (((ulonglong)local_f8 & 1) == 0) {
            absl::lts_20240722::status_internal::StatusRep::Unref(local_f8);
          }
          if (local_270 != (StatusRep *)&DAT_00000001) {
            local_380->_Ptr = (char *)local_270;
            if (((ulonglong)local_270 & 1) == 0) {
              LOCK();
              local_270->ref_ = (atomic<int>)((int)local_270->ref_ + 1);
              UNLOCK();
              uVar25 = uStack_c0;
            }
            if (local_380->_Ptr == (char *)0x1) {
              absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg
                        ((Status *)&local_380->_Ptr);
            }
            if (((ulonglong)local_270 & 1) == 0) {
              absl::lts_20240722::status_internal::StatusRep::Unref(local_270);
            }
            if (local_320 != (_Bxty *)0x0) {
              ZeroCopyBufferedStream::DownRefBuffer((ZeroCopyBufferedStream *)local_320->_Buf);
              local_320 = (_Bxty *)0x0;
            }
            if (uVar25 < 0x10) {
              return local_380;
            }
            uVar26 = uVar25 + 1;
            uVar23 = local_d8._Ptr;
            p_Var28 = local_380;
            if (uVar26 < 0x1000) goto LAB_14fb96636;
            uVar23 = *(undefined8 *)(local_d8._Ptr + -8);
            lVar21 = (longlong)local_d8._Ptr - uVar23;
joined_r0x00014fb96dde:
            uVar26 = uVar25 + 0x28;
            p_Var28 = local_380;
            if (0x1f < lVar21 - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
LAB_14fb96636:
            ::operator_delete((void *)uVar23,uVar26);
            return p_Var28;
          }
          uVar26 = *(ulonglong *)(this + 0x38);
          uVar32 = *(undefined4 *)(this + 8);
          uVar33 = *(undefined4 *)(this + 0xc);
          lVar21 = *(longlong *)(this + 0x10);
          if (this[0x30] != (JsonLexer)0x0) {
            uVar26 = uVar26 - *(longlong *)(this + 0x40);
            lVar21 = *(longlong *)(this + 0x18);
            lStack_190 = *(longlong *)(this + 0x20) - lVar21;
            local_198._0_4_ = (undefined4)lVar21;
            local_198._4_4_ = (undefined4)((ulonglong)lVar21 >> 0x20);
            uVar32 = (undefined4)local_198;
            uVar33 = local_198._4_4_;
            local_198 = lVar21;
            lVar21 = lStack_190;
          }
          auVar7._4_4_ = uVar33;
          auVar7._0_4_ = uVar32;
          auVar7._8_4_ = (int)lVar21;
          auVar7._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
          if (auVar7._8_8_ < uVar26) {
                    /* WARNING: Subroutine does not return */
            std::basic_string_view<char,std::char_traits<char>_>::_Xran();
          }
          bVar4 = *(byte *)(CONCAT44(uVar33,uVar32) + uVar26);
          ZeroCopyBufferedStream::Advance((ZeroCopyBufferedStream *)this,(__uint64)&local_298);
          pSVar30 = local_298;
          if (local_298 == (StatusRep *)&DAT_00000001) {
            *(longlong *)(this + 0x60) = *(longlong *)(this + 0x60) + 1;
            *(longlong *)(this + 0x70) = *(longlong *)(this + 0x70) + 1;
            local_2b0 = (StatusRep *)&DAT_00000001;
            pSVar30 = (StatusRep *)&DAT_00000001;
          }
          else {
            local_2b0 = local_298;
            if (((ulonglong)local_298 & 1) == 0) {
              LOCK();
              local_298->ref_ = (atomic<int>)((int)local_298->ref_ + 1);
              UNLOCK();
              uVar25 = uStack_c0;
            }
            if (((ulonglong)local_298 & 1) == 0) {
              absl::lts_20240722::status_internal::StatusRep::Unref(local_298);
            }
          }
          uVar31 = uStack_c0;
          uVar26 = local_c8;
          uVar19 = local_d8._Ptr;
          if (pSVar30 != (StatusRep *)&DAT_00000001) {
            local_380->_Ptr = (char *)pSVar30;
            pSVar29 = pSVar30;
            if (((ulonglong)pSVar30 & 1) == 0) {
              LOCK();
              pSVar30->ref_ = (atomic<int>)((int)pSVar30->ref_ + 1);
              UNLOCK();
              pSVar29 = local_2b0;
              uVar25 = uStack_c0;
            }
            if (local_380->_Ptr == (char *)0x1) {
              absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg
                        ((Status *)&local_380->_Ptr);
            }
            if (((ulonglong)pSVar30 & 1) == 0) {
              absl::lts_20240722::status_internal::StatusRep::Unref(pSVar29);
            }
            if (local_320 != (_Bxty *)0x0) {
              ZeroCopyBufferedStream::DownRefBuffer((ZeroCopyBufferedStream *)local_320->_Buf);
              local_320 = (_Bxty *)0x0;
            }
LAB_14fb96600:
            if (uVar25 < 0x10) {
              return local_380;
            }
            uVar26 = uVar25 + 1;
            uVar23 = local_d8._Ptr;
            p_Var28 = local_380;
            if (uVar26 < 0x1000) goto LAB_14fb96636;
            uVar23 = *(undefined8 *)(local_d8._Ptr + -8);
            lVar21 = (longlong)local_d8._Ptr - uVar23;
            goto joined_r0x00014fb96dde;
          }
          if ((bVar4 == 0x22) || (bVar4 == 0x27)) {
            bVar16 = 0x22;
            if (<Var3 == (<lambda_1>)0x27) {
              bVar16 = 0x27;
            }
            if (bVar4 == bVar16) {
              if (local_c8 == 0) {
                if ((local_320 != (_Bxty *)0x0) &&
                   (iVar24 = *(int *)((longlong)
                                      &(((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                          *)((longlong)local_320 + 0x38))->_Mypair)._Myval2._Mysize
                                     + 4),
                   puVar14 = (undefined1 *)
                             ((longlong)
                              &(((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                ((longlong)local_320 + 0x38))->_Mypair)._Myval2._Mysize + 4),
                   *(int *)puVar14 = *(int *)puVar14 + 1, iVar24 == 0)) {
                  *(char **)((longlong)
                             &(((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               ((longlong)local_320 + 0x38))->_Mypair)._Myval2._Bx + 8) =
                       (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        ((longlong)local_320 + 0x38))->_Mypair)._Myval2._Bx._Ptr;
                }
                local_2d8 = (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             ((longlong)local_320 + 0x38))->_Mypair)._Myval2._Bx._Ptr +
                            (-1 - (longlong)local_328);
                local_2e8 = local_320;
                pZStack_2e0 = local_328;
                local_158._Ptr = (char *)local_320;
                local_158._8_8_ = local_328;
                local_138 = 1;
                local_130 = local_320;
                if ((local_320 != (_Bxty *)0x0) &&
                   (iVar24 = *(int *)((longlong)
                                      &(((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                          *)((longlong)local_320 + 0x38))->_Mypair)._Myval2._Mysize
                                     + 4),
                   puVar14 = (undefined1 *)
                             ((longlong)
                              &(((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                ((longlong)local_320 + 0x38))->_Mypair)._Myval2._Mysize + 4),
                   *(int *)puVar14 = *(int *)puVar14 + 1, iVar24 == 0)) {
                  *(char **)((longlong)
                             &(((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               ((longlong)local_320 + 0x38))->_Mypair)._Myval2._Bx + 8) =
                       (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        ((longlong)local_320 + 0x38))->_Mypair)._Myval2._Bx._Ptr;
                }
                local_148 = local_2d8;
                if (local_320 != (_Bxty *)0x0) {
                  ZeroCopyBufferedStream::DownRefBuffer((ZeroCopyBufferedStream *)local_320->_Buf);
                }
                p_Var28 = &local_158;
                bVar13 = true;
                bVar17 = false;
              }
              else {
                local_c8 = 0;
                uVar25 = 0xf;
                uStack_c0 = 0xf;
                local_d8._Ptr = local_d8._Ptr & 0xffffffffffffff00;
                local_188._Ptr = (char *)uVar19;
                local_188._8_8_ = local_d8._8_8_;
                local_178 = uVar26;
                uStack_170 = uVar31;
                local_168 = '\0';
                local_160 = (ZeroCopyBufferedStream *)0x0;
                p_Var28 = &local_188;
                bVar13 = false;
                bVar17 = true;
              }
              MaybeOwnedString::MaybeOwnedString
                        ((MaybeOwnedString *)local_208._Buf,(MaybeOwnedString *)p_Var28->_Buf);
              if (bVar17) {
                if (local_160 != (ZeroCopyBufferedStream *)0x0) {
                  ZeroCopyBufferedStream::DownRefBuffer(local_160);
                  local_160 = (ZeroCopyBufferedStream *)0x0;
                }
                if ((local_168 != -1) && (local_168 == '\0')) {
                  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  _scalar_deleting_destructor_
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             &local_188,0);
                }
              }
              if (bVar13) {
                if (local_130 != (_Bxty *)0x0) {
                  ZeroCopyBufferedStream::DownRefBuffer((ZeroCopyBufferedStream *)local_130->_Buf);
                  local_130 = (_Bxty *)0x0;
                }
                std::
                _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                ::_Destroy((_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                            *)local_158._Buf);
              }
              if (local_1e8 == '\x01') {
                iVar24 = *(int *)&(((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)(local_208._Ptr + 8))->_Mypair)._Myval2._Bx;
                iVar34 = *(int *)(local_208._Ptr + 0xc);
                ppppppcVar5 = *(char *******)(local_208._Ptr + 0x10);
                if (((_Bxty *)(local_208._Ptr + 0x30))->_Buf[0] != '\0') {
                  local_208._8_8_ = local_208._8_8_ + -*(longlong *)(local_208._Ptr + 0x40);
                  ppppppcVar5 = *(char *******)(local_208._Ptr + 0x18);
                  ppppppcStack_2a0 =
                       (char ******)(*(ulong64 *)(local_208._Ptr + 0x20) - (longlong)ppppppcVar5);
                  local_2a8._0_4_ = (int)ppppppcVar5;
                  local_2a8._4_4_ = (int)((ulonglong)ppppppcVar5 >> 0x20);
                  iVar24 = (int)local_2a8;
                  iVar34 = local_2a8._4_4_;
                  local_2a8 = ppppppcVar5;
                  ppppppcVar5 = ppppppcStack_2a0;
                }
                auVar9._4_4_ = iVar34;
                auVar9._0_4_ = iVar24;
                auVar9._8_4_ = (int)ppppppcVar5;
                auVar9._12_4_ = (int)((ulonglong)ppppppcVar5 >> 0x20);
                if (auVar9._8_8_ < (ulonglong)local_208._8_8_) {
                    /* WARNING: Subroutine does not return */
                  std::basic_string_view<char,std::char_traits<char>_>::_Xran();
                }
                pcVar22 = (code *)(auVar9._8_8_ + -local_208._8_8_);
                pcStack_330 = local_1f8;
                if (pcVar22 < local_1f8) {
                  pcStack_330 = pcVar22;
                }
                local_338 = (_Bxty *)(local_208._8_8_ + CONCAT44(iVar34,iVar24));
              }
              else {
                if (local_1e8 != '\0') {
                    /* WARNING: Subroutine does not return */
                  std::_Throw_bad_variant_access();
                }
                local_338 = &local_208;
                if (0xf < local_1f0) {
                  local_338 = (_Bxty *)local_208._Ptr;
                }
                pcStack_330 = local_1f8;
              }
              local_358._Mydata = (char *)local_338;
              local_358._Mysize = (ulong64)pcStack_330;
              bVar17 = utf8_range::IsStructurallyValid(&local_358);
              if (bVar17) {
                MaybeOwnedString::MaybeOwnedString
                          ((MaybeOwnedString *)local_158._Buf,(MaybeOwnedString *)local_208._Buf);
                local_128 = uVar23;
                uStack_120 = uVar10;
                local_118 = uVar11;
                uStack_110 = uVar12;
                absl::lts_20240722::
                StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                ::
                StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>,0>
                          ((StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                            *)local_380->_Buf,
                           (LocationWith<google::protobuf::json_internal::MaybeOwnedString> *)
                           local_158._Buf);
                if (local_130 != (_Bxty *)0x0) {
                  ZeroCopyBufferedStream::DownRefBuffer((ZeroCopyBufferedStream *)local_130->_Buf);
                  local_130 = (_Bxty *)0x0;
                }
                std::
                _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                ::_Destroy((_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                            *)local_158._Buf);
                if (local_1e0 != (ZeroCopyBufferedStream *)0x0) {
                  ZeroCopyBufferedStream::DownRefBuffer(local_1e0);
                  local_1e0 = (ZeroCopyBufferedStream *)0x0;
                }
                std::
                _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                ::_Destroy((_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                            *)local_208._Buf);
                if (local_320 != (_Bxty *)0x0) {
                  ZeroCopyBufferedStream::DownRefBuffer((ZeroCopyBufferedStream *)local_320->_Buf);
                  local_320 = (_Bxty *)0x0;
                }
              }
              else {
                local_b8 = (_Bxty *)0x1535e0048;
                pcStack_b0 = (code *)0x14;
                local_358._Mydata = "Invalid UTF-8 string";
                local_358._Mysize = 0x14;
                JsonLocation::Invalid((JsonLocation *)(this + 0x60),local_378,&local_358,0);
                absl::lts_20240722::
                StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                ::
                StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><absl::lts_20240722::Status,0>
                          ((StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                            *)local_380->_Buf,local_378);
                if ((local_378[0].rep_ & 1) == 0) {
                  absl::lts_20240722::status_internal::StatusRep::Unref
                            ((StatusRep *)local_378[0].rep_);
                }
                if (local_1e0 != (ZeroCopyBufferedStream *)0x0) {
                  ZeroCopyBufferedStream::DownRefBuffer(local_1e0);
                  local_1e0 = (ZeroCopyBufferedStream *)0x0;
                }
                std::
                _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                ::_Destroy((_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                            *)local_208._Buf);
                if (local_320 != (_Bxty *)0x0) {
                  ZeroCopyBufferedStream::DownRefBuffer((ZeroCopyBufferedStream *)local_320->_Buf);
                  local_320 = (_Bxty *)0x0;
                }
              }
LAB_14fb96c3e:
              if (uVar25 < 0x10) {
                return local_380;
              }
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Deallocate_for_capacity((allocator<char> *)local_d8._Buf,local_d8._Ptr,uVar25);
              return local_380;
            }
          }
          else if (bVar4 == 0x5c) {
            if (local_c8 == 0) {
              local_348 = local_320;
              if ((local_320 != (_Bxty *)0x0) &&
                 (iVar24 = *(int *)((longlong)
                                    &(((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                        *)((longlong)local_320 + 0x38))->_Mypair)._Myval2._Mysize +
                                   4),
                 puVar14 = (undefined1 *)
                           ((longlong)
                            &(((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              ((longlong)local_320 + 0x38))->_Mypair)._Myval2._Mysize + 4),
                 *(int *)puVar14 = *(int *)puVar14 + 1, iVar24 == 0)) {
                *(char **)((longlong)
                           &(((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             ((longlong)local_320 + 0x38))->_Mypair)._Myval2._Bx + 8) =
                     (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                      ((longlong)local_320 + 0x38))->_Mypair)._Myval2._Bx._Ptr;
              }
              local_2d8 = (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           ((longlong)local_320 + 0x38))->_Mypair)._Myval2._Bx._Ptr +
                          (-1 - (longlong)local_328);
              local_2e8 = local_320;
              pZStack_2e0 = local_328;
              local_1d8._Ptr = (char *)local_320;
              local_1d8._8_8_ = (char *)local_328;
              local_1b8 = '\x01';
              local_1b0 = local_320;
              if ((local_320 != (_Bxty *)0x0) &&
                 (iVar24 = *(int *)((longlong)
                                    &(((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                        *)((longlong)local_320 + 0x38))->_Mypair)._Myval2._Mysize +
                                   4),
                 puVar14 = (undefined1 *)
                           ((longlong)
                            &(((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              ((longlong)local_320 + 0x38))->_Mypair)._Myval2._Mysize + 4),
                 *(int *)puVar14 = *(int *)puVar14 + 1, iVar24 == 0)) {
                *(char **)((longlong)
                           &(((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             ((longlong)local_320 + 0x38))->_Mypair)._Myval2._Bx + 8) =
                     (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                      ((longlong)local_320 + 0x38))->_Mypair)._Myval2._Bx._Ptr;
              }
              local_1c8 = local_2d8;
              if (local_320 != (_Bxty *)0x0) {
                ZeroCopyBufferedStream::DownRefBuffer((ZeroCopyBufferedStream *)local_320->_Buf);
              }
              if (local_1b8 == '\x01') {
                ZeroCopyBufferedStream::RawBuffer
                          ((ZeroCopyBufferedStream *)local_1d8._Ptr,&local_2c8,
                           (__uint64)local_1d8._8_8_,(__uint64)local_1c8);
              }
              else {
                if (local_1b8 != '\0') {
                    /* WARNING: Subroutine does not return */
                  std::_Throw_bad_variant_access();
                }
                local_2c8._Mydata = (char *)&local_1d8;
                if (0xf < local_1c0) {
                  local_2c8._Mydata = local_1d8._Ptr;
                }
                local_2c8._Mysize = (ulong64)local_1c8;
              }
              local_88._Ptr = (char *)0x0;
              local_88._8_8_ = 0;
              local_78 = 0;
              uStack_70 = 0;
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Construct<1,char_const_*>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_88,local_2c8._Mydata,local_2c8._Mysize);
              if (0xf < uVar25) {
                uVar26 = uVar25 + 1;
                uVar19 = local_d8._Ptr;
                if (0xfff < uVar26) {
                  uVar26 = uVar25 + 0x28;
                  uVar19 = *(undefined8 *)(local_d8._Ptr + -8);
                  if ((char *)0x1f < local_d8._Ptr + (-8 - uVar19)) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                ::operator_delete((void *)uVar19,uVar26);
              }
              local_d8._Ptr = local_88._Ptr;
              local_d8._8_8_ = local_88._8_8_;
              local_c8 = local_78;
              uStack_c0 = uStack_70;
              if (local_1b0 != (_Bxty *)0x0) {
                ZeroCopyBufferedStream::DownRefBuffer((ZeroCopyBufferedStream *)local_1b0->_Buf);
                local_1b0 = (_Bxty *)0x0;
              }
              std::
              _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
              ::_Destroy((_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                          *)local_1d8._Buf);
              if (local_320 != (_Bxty *)0x0) {
                ZeroCopyBufferedStream::DownRefBuffer((ZeroCopyBufferedStream *)local_320->_Buf);
              }
              local_320 = (_Bxty *)0x0;
              uVar25 = uStack_c0;
            }
            pSVar18 = (StatusOr<google::protobuf::json_internal::BufferingGuard> *)
                      ZeroCopyBufferedStream::BufferAtLeast
                                ((ZeroCopyBufferedStream *)this,(__uint64)&local_2e8);
            absl::lts_20240722::StatusOr<google::protobuf::json_internal::BufferingGuard>::status
                      (pSVar18);
            if (local_2e8 == (_Bxty *)&DAT_00000001) {
              if (pZStack_2e0 != (ZeroCopyBufferedStream *)0x0) {
                ZeroCopyBufferedStream::DownRefBuffer(pZStack_2e0);
              }
            }
            else if (((ulonglong)local_2e8 & 1) == 0) {
              absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_2e8);
            }
            if (local_280 != (StatusRep *)&DAT_00000001) {
              local_380->_Ptr = (char *)local_280;
              if (((ulonglong)local_280 & 1) == 0) {
                LOCK();
                local_280->ref_ = (atomic<int>)((int)local_280->ref_ + 1);
                UNLOCK();
                uVar25 = uStack_c0;
              }
              if (local_380->_Ptr == (char *)0x1) {
                absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg
                          ((Status *)&local_380->_Ptr);
              }
              if (((ulonglong)local_280 & 1) == 0) {
                absl::lts_20240722::status_internal::StatusRep::Unref(local_280);
              }
              if (local_320 != (_Bxty *)0x0) {
                ZeroCopyBufferedStream::DownRefBuffer((ZeroCopyBufferedStream *)local_320->_Buf);
                local_320 = (_Bxty *)0x0;
              }
              goto LAB_14fb96600;
            }
            cVar15 = ZeroCopyBufferedStream::PeekChar((ZeroCopyBufferedStream *)this);
            ZeroCopyBufferedStream::Advance((ZeroCopyBufferedStream *)this,(__uint64)&local_290);
            pSVar30 = local_290;
            if (local_290 == (StatusRep *)&DAT_00000001) {
              *(longlong *)(this + 0x60) = *(longlong *)(this + 0x60) + 1;
              *(longlong *)(this + 0x70) = *(longlong *)(this + 0x70) + 1;
              local_2b8 = (StatusRep *)&DAT_00000001;
              pSVar30 = (StatusRep *)&DAT_00000001;
            }
            else {
              local_2b8 = local_290;
              if (((ulonglong)local_290 & 1) == 0) {
                LOCK();
                local_290->ref_ = (atomic<int>)((int)local_290->ref_ + 1);
                UNLOCK();
                uVar25 = uStack_c0;
              }
              if (((ulonglong)local_290 & 1) == 0) {
                absl::lts_20240722::status_internal::StatusRep::Unref(local_290);
              }
            }
            uVar26 = local_c8;
            if (pSVar30 != (StatusRep *)&DAT_00000001) {
              local_380->_Ptr = (char *)pSVar30;
              pSVar29 = pSVar30;
              if (((ulonglong)pSVar30 & 1) == 0) {
                LOCK();
                pSVar30->ref_ = (atomic<int>)((int)pSVar30->ref_ + 1);
                UNLOCK();
                pSVar29 = local_2b8;
                uVar25 = uStack_c0;
              }
              if (local_380->_Ptr == (char *)0x1) {
                absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg
                          ((Status *)&local_380->_Ptr);
              }
              if (((ulonglong)pSVar30 & 1) == 0) {
                absl::lts_20240722::status_internal::StatusRep::Unref(pSVar29);
              }
              if (local_320 != (_Bxty *)0x0) {
                ZeroCopyBufferedStream::DownRefBuffer((ZeroCopyBufferedStream *)local_320->_Buf);
                local_320 = (_Bxty *)0x0;
              }
              goto LAB_14fb96c3e;
            }
            if ((cVar15 == 'u') || ((cVar15 == 'U' && (this[0x58] != (JsonLexer)0x0)))) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_d8,local_c8 + 4,'\0');
              ParseUnicodeEscape(this,(char *)&local_260);
              pSVar30 = local_260;
              local_288 = local_260;
              if (((ulonglong)local_260 & 1) == 0) {
                LOCK();
                local_260->ref_ = (atomic<int>)((int)local_260->ref_ + 1);
                UNLOCK();
              }
              if (local_260 != (StatusRep *)&DAT_00000001) {
                local_380->_Ptr = (char *)local_260;
                uVar25 = (ulonglong)local_260 & 1;
                if (((ulonglong)local_260 & 1) == 0) {
                  LOCK();
                  local_260->ref_ = (atomic<int>)((int)local_260->ref_ + 1);
                  UNLOCK();
                }
                if (local_380->_Ptr == (char *)0x1) {
                  absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg
                            ((Status *)&local_380->_Ptr);
                }
                if (uVar25 == 0) {
                  absl::lts_20240722::status_internal::StatusRep::Unref(pSVar30);
                }
                if ((local_260 != (StatusRep *)&DAT_00000001) && (((ulonglong)local_260 & 1) == 0))
                {
                  absl::lts_20240722::status_internal::StatusRep::Unref(local_260);
                }
                if (local_320 != (_Bxty *)0x0) {
                  ZeroCopyBufferedStream::DownRefBuffer((ZeroCopyBufferedStream *)local_320->_Buf);
                  local_320 = (_Bxty *)0x0;
                }
                if (uStack_c0 < 0x10) {
                  return local_380;
                }
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Deallocate_for_capacity((allocator<char> *)local_d8._Buf,local_d8._Ptr,uStack_c0);
                return local_380;
              }
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::resize
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_d8,local_c8 + local_258 + -4,'\0');
              uVar25 = uStack_c0;
              if ((local_260 != (StatusRep *)&DAT_00000001) && (((ulonglong)local_260 & 1) == 0)) {
                absl::lts_20240722::status_internal::StatusRep::Unref(local_260);
                uVar25 = uStack_c0;
              }
            }
            else {
              switch(cVar15) {
              case '\"':
                cVar15 = '\"';
                break;
              default:
switchD_14fb95f37_caseD_23:
                local_338 = (_Bxty *)0x1535e0060;
                pcStack_330 = (code *)0x19;
                local_348 = (_Bxty *)CONCAT71(local_348._1_7_,cVar15);
                local_b8 = local_348;
                pcStack_b0 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<char>;
                local_358._Mydata = (char *)&local_b8;
                local_358._Mysize = 1;
                local_368 = "invalid escape char: \'%c\'";
                uStack_360 = 0x19;
                absl::lts_20240722::str_format_internal::FormatPack(&local_a8,&local_368,&local_358)
                ;
                local_358._Mydata = (char *)&local_a8;
                if (0xf < local_90) {
                  local_358._Mydata = local_a8._Ptr;
                }
                pcStack_2f0 = local_98;
                local_358._Mysize = (ulong64)local_98;
                local_2f8 = (_Bxty *)local_358._Mydata;
                JsonLocation::Invalid((JsonLocation *)(this + 0x60),local_378,&local_358,0);
                absl::lts_20240722::
                StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                ::
                StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><absl::lts_20240722::Status,0>
                          ((StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                            *)local_380->_Buf,local_378);
                if ((local_378[0].rep_ & 1) == 0) {
                  absl::lts_20240722::status_internal::StatusRep::Unref
                            ((StatusRep *)local_378[0].rep_);
                }
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_a8);
                if (local_320 != (_Bxty *)0x0) {
                  ZeroCopyBufferedStream::DownRefBuffer((ZeroCopyBufferedStream *)local_320->_Buf);
                  local_320 = (_Bxty *)0x0;
                }
                if (uVar25 < 0x10) {
                  return local_380;
                }
                uVar26 = uVar25 + 1;
                uVar23 = local_d8._Ptr;
                p_Var28 = local_380;
                if (0xfff < uVar26) {
                  uVar26 = uVar25 + 0x28;
                  uVar23 = *(_Bxty **)(local_d8._Ptr + -8);
                  if ((char *)0x1f <
                      local_d8._Ptr + (-8 - (longlong)*(_Bxty **)(local_d8._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                goto LAB_14fb96636;
              case '\'':
                if (this[0x58] == (JsonLexer)0x0) goto switchD_14fb95f37_caseD_23;
                cVar15 = '\'';
                break;
              case '/':
                cVar15 = '/';
                break;
              case '\\':
                cVar15 = '\\';
                break;
              case 'b':
                cVar15 = '\b';
                break;
              case 'f':
                cVar15 = '\f';
                break;
              case 'n':
                cVar15 = '\n';
                break;
              case 'r':
                cVar15 = '\r';
                break;
              case 't':
                cVar15 = '\t';
              }
              if (local_c8 < uVar25) {
                uVar19 = &local_d8;
                if (0xf < uVar25) {
                  uVar19 = local_d8._Ptr;
                }
                pcVar2 = (char *)(uVar19 + local_c8);
                local_c8 = local_c8 + 1;
                *pcVar2 = cVar15;
                *(char *)(uVar19 + uVar26 + 1) = '\0';
                uVar25 = uStack_c0;
              }
              else {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           &local_d8,1,<Var3);
                uVar25 = uStack_c0;
              }
            }
            goto LAB_14fb95b00;
          }
          if ((0xde < (byte)(bVar4 - 0x20)) && (this[0x58] == (JsonLexer)0x0)) {
            local_338 = (_Bxty *)0x1535e0080;
            pcStack_330 = (code *)0x2a;
            local_348 = (_Bxty *)CONCAT71(local_348._1_7_,bVar4);
            local_b8 = local_348;
            pcStack_b0 = absl::lts_20240722::str_format_internal::FormatArgImpl::
                         Dispatch<unsigned_char>;
            local_358._Mydata = (char *)&local_b8;
            local_358._Mysize = 1;
            local_368 = "invalid control character 0x%02x in string";
            uStack_360 = 0x2a;
            absl::lts_20240722::str_format_internal::FormatPack(&local_a8,&local_368,&local_358);
            local_358._Mydata = (char *)&local_a8;
            if (0xf < local_90) {
              local_358._Mydata = local_a8._Ptr;
            }
            pcStack_2f0 = local_98;
            local_358._Mysize = (ulong64)local_98;
            local_2f8 = (_Bxty *)local_358._Mydata;
            JsonLocation::Invalid((JsonLocation *)(this + 0x60),local_378,&local_358,0);
            absl::lts_20240722::
            StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
            ::
            StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><absl::lts_20240722::Status,0>
                      ((StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                        *)local_380->_Buf,local_378);
            if ((local_378[0].rep_ & 1) == 0) {
              absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_378[0].rep_);
            }
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
            ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a8)
            ;
            if (local_320 != (_Bxty *)0x0) {
              ZeroCopyBufferedStream::DownRefBuffer((ZeroCopyBufferedStream *)local_320->_Buf);
              local_320 = (_Bxty *)0x0;
            }
            if (uVar25 < 0x10) {
              return local_380;
            }
            uVar26 = uVar25 + 1;
            uVar23 = local_d8._Ptr;
            p_Var28 = local_380;
            if (0xfff < uVar26) {
              uVar26 = uVar25 + 0x28;
              uVar23 = *(_Bxty **)(local_d8._Ptr + -8);
              if ((char *)0x1f < local_d8._Ptr + (-8 - (longlong)*(_Bxty **)(local_d8._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            goto LAB_14fb96636;
          }
          bVar16 = ~bVar4;
          if (__isa_available < 5) {
            local_1a4 = 0x1f;
            if (bVar16 != 0) {
              for (; bVar16 >> local_1a4 == 0; local_1a4 = local_1a4 + -1) {
              }
            }
            if (bVar16 != 0) {
              iVar24 = 7 - local_1a4;
            }
            else {
              iVar24 = 8;
            }
          }
          else {
            iVar24 = (ushort)LZCOUNT((ushort)bVar16) - 8;
          }
          if ((((iVar24 != 0) && (iVar24 != 2)) && (iVar24 != 3)) && (iVar24 != 4)) {
            local_b8 = (_Bxty *)0x1535e00b0;
            pcStack_b0 = (code *)0x17;
            local_358._Mydata = "invalid UTF-8 in string";
            local_358._Mysize = 0x17;
            JsonLocation::Invalid((JsonLocation *)(this + 0x60),local_378,&local_358,0);
            absl::lts_20240722::
            StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
            ::
            StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_><absl::lts_20240722::Status,0>
                      ((StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
                        *)local_380->_Buf,local_378);
            if ((local_378[0].rep_ & 1) == 0) {
              absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_378[0].rep_);
            }
            if (local_320 != (_Bxty *)0x0) {
              ZeroCopyBufferedStream::DownRefBuffer((ZeroCopyBufferedStream *)local_320->_Buf);
              local_320 = (_Bxty *)0x0;
            }
            if (uVar25 < 0x10) {
              return local_380;
            }
            uVar26 = uVar25 + 1;
            uVar23 = local_d8._Ptr;
            p_Var28 = local_380;
            if (0xfff < uVar26) {
              uVar26 = uVar25 + 0x28;
              uVar23 = *(_Bxty **)(local_d8._Ptr + -8);
              if ((char *)0x1f < local_d8._Ptr + (-8 - (longlong)*(_Bxty **)(local_d8._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            goto LAB_14fb96636;
          }
          if (local_c8 != 0) {
            if (local_c8 < uVar25) {
              uVar19 = &local_d8;
              if (0xf < uVar25) {
                uVar19 = local_d8._Ptr;
              }
              pbVar1 = (byte *)(uVar19 + local_c8);
              local_c8 = local_c8 + 1;
              *pbVar1 = bVar4;
              *(char *)(uVar19 + uVar26 + 1) = '\0';
              uVar25 = uStack_c0;
            }
            else {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_d8,1,<Var3);
              uVar25 = uStack_c0;
            }
          }
          ZeroCopyBufferedStream::Take((ZeroCopyBufferedStream *)this,(__uint64)&local_248);
          uVar26 = local_c8;
          pSVar30 = local_248;
          local_278 = local_248;
          if (((ulonglong)local_248 & 1) == 0) {
            LOCK();
            local_248->ref_ = (atomic<int>)((int)local_248->ref_ + 1);
            UNLOCK();
            uVar25 = uStack_c0;
          }
          if (local_248 != (StatusRep *)&DAT_00000001) {
            local_380->_Ptr = (char *)local_248;
            uVar26 = (ulonglong)local_248 & 1;
            if (((ulonglong)local_248 & 1) == 0) {
              LOCK();
              local_248->ref_ = (atomic<int>)((int)local_248->ref_ + 1);
              UNLOCK();
              uVar25 = uStack_c0;
            }
            if (local_380->_Ptr == (char *)0x1) {
              absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg
                        ((Status *)&local_380->_Ptr);
            }
            if (uVar26 == 0) {
              absl::lts_20240722::status_internal::StatusRep::Unref(pSVar30);
            }
            if (local_248 == (StatusRep *)&DAT_00000001) {
              if (local_218 != (ZeroCopyBufferedStream *)0x0) {
                ZeroCopyBufferedStream::DownRefBuffer(local_218);
                local_218 = (ZeroCopyBufferedStream *)0x0;
              }
              std::
              _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
              ::_Destroy((_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                          *)&local_240);
            }
            else if (((ulonglong)local_248 & 1) == 0) {
              absl::lts_20240722::status_internal::StatusRep::Unref(local_248);
            }
            if (local_320 != (_Bxty *)0x0) {
              ZeroCopyBufferedStream::DownRefBuffer((ZeroCopyBufferedStream *)local_320->_Buf);
              local_320 = (_Bxty *)0x0;
            }
            if (uVar25 < 0x10) {
              return local_380;
            }
            uVar26 = uVar25 + 1;
            uVar23 = local_d8._Ptr;
            p_Var28 = local_380;
            if (0xfff < uVar26) {
              uVar26 = uVar25 + 0x28;
              uVar23 = *(_Bxty **)(local_d8._Ptr + -8);
              if ((char *)0x1f < local_d8._Ptr + (-8 - (longlong)*(_Bxty **)(local_d8._Ptr + -8))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            goto LAB_14fb96636;
          }
          if (local_c8 != 0) {
            uVar31 = local_230;
            if (local_220 == '\x01') {
              uVar27 = local_238;
              uVar32 = *(undefined4 *)(local_240 + 1);
              uVar33 = *(undefined4 *)((longlong)local_240 + 0xc);
              ppppppcVar5 = local_240[2];
              if (*(char *)(local_240 + 6) != '\0') {
                uVar27 = local_238 - (longlong)local_240[8];
                ppppppcVar5 = local_240[3];
                ppppppcStack_2a0 = (char ******)((longlong)local_240[4] - (longlong)ppppppcVar5);
                local_2a8._0_4_ = (int)ppppppcVar5;
                local_2a8._4_4_ = (int)((ulonglong)ppppppcVar5 >> 0x20);
                uVar32 = (int)local_2a8;
                uVar33 = local_2a8._4_4_;
                local_2a8 = ppppppcVar5;
                ppppppcVar5 = ppppppcStack_2a0;
              }
              auVar8._4_4_ = uVar33;
              auVar8._0_4_ = uVar32;
              auVar8._8_4_ = (int)ppppppcVar5;
              auVar8._12_4_ = (int)((ulonglong)ppppppcVar5 >> 0x20);
              uVar20 = auVar8._8_8_;
              if (local_230 == 0xffffffffffffffff) {
                if (uVar20 < uVar27) {
LAB_14fb96e12:
                    /* WARNING: Subroutine does not return */
                  std::basic_string_view<char,std::char_traits<char>_>::_Xran();
                }
                local_100 = local_230;
                local_e0 = uVar20 - uVar27;
                if (local_e0 != 0xffffffffffffffff) {
                  uVar31 = local_e0;
                }
                _Src = (char *******)(CONCAT44(uVar33,uVar32) + uVar27);
              }
              else {
                if (uVar20 < uVar27) goto LAB_14fb96e12;
                local_108 = local_230;
                local_268 = uVar20 - uVar27;
                if (local_268 < local_230) {
                  uVar31 = local_268;
                }
                _Src = (char *******)(CONCAT44(uVar33,uVar32) + uVar27);
              }
            }
            else {
              if (local_220 != '\0') {
                    /* WARNING: Subroutine does not return */
                std::_Throw_bad_variant_access();
              }
              _Src = (char *******)&local_240;
              if (0xf < local_228) {
                _Src = local_240;
              }
            }
            if (uVar25 - local_c8 < uVar31) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_d8,uVar31,<Var3,(char *)_Src,uVar31);
              uVar25 = uStack_c0;
            }
            else {
              uVar19 = &local_d8;
              if (0xf < uVar25) {
                uVar19 = local_d8._Ptr;
              }
              pcVar2 = (char *)(uVar19 + local_c8);
              local_c8 = local_c8 + uVar31;
              memmove(pcVar2,_Src,uVar31);
              *(char *)(uVar19 + uVar26 + uVar31) = '\0';
              uVar25 = uStack_c0;
            }
          }
          if (local_248 == (StatusRep *)&DAT_00000001) {
            if (local_218 != (ZeroCopyBufferedStream *)0x0) {
              ZeroCopyBufferedStream::DownRefBuffer(local_218);
              local_218 = (ZeroCopyBufferedStream *)0x0;
            }
            std::
            _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
            ::_Destroy((_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                        *)&local_240);
          }
          else if (((ulonglong)local_248 & 1) == 0) {
            absl::lts_20240722::status_internal::StatusRep::Unref(local_248);
          }
        } while( true );
      }
      in_RDX->_Ptr = (char *)local_2f8;
      if (((ulonglong)local_2f8 & 1) == 0) {
        LOCK();
        *(int *)local_2f8 = *(int *)local_2f8 + 1;
        UNLOCK();
      }
      if (in_RDX->_Ptr == (char *)0x1) {
        absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg
                  ((Status *)&in_RDX->_Ptr);
      }
    }
  }
  else {
    in_RDX->_Ptr = (char *)local_378[0].rep_;
    if ((local_378[0].rep_ & 1) == 0) {
      LOCK();
      *(int *)local_378[0].rep_ = *(int *)local_378[0].rep_ + 1;
      UNLOCK();
    }
    local_2f8 = (_Bxty *)local_378[0].rep_;
    if (in_RDX->_Ptr == (char *)0x1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg
                ((Status *)&in_RDX->_Ptr);
    }
  }
  if (((ulonglong)local_2f8 & 1) == 0) {
    absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_2f8);
  }
  return in_RDX;
}

// PeekKind @ 14fb96ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class absl::lts_20240722::StatusOr<enum google::protobuf::json_internal::JsonLexer::Kind>
   __cdecl google::protobuf::json_internal::JsonLexer::PeekKind(void) __ptr64 */

void __thiscall google::protobuf::json_internal::JsonLexer::PeekKind(JsonLexer *this)

{
  Status SVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 ****ppppuVar4;
  ulonglong uVar5;
  Status *in_RDX;
  ulong64 uVar6;
  undefined1 auStack_b8 [32];
  Status local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 ***local_50 [2];
  undefined8 local_40;
  ulonglong local_38;
  ulong64 local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_b8;
  SkipToToken(this);
  if ((StatusRep *)local_98.rep_ == (StatusRep *)0x1) {
    uVar3 = *(ulonglong *)(this + 0x38);
    local_98.rep_ = *(ulong64 *)(this + 8);
    uStack_90 = *(ulonglong *)(this + 0x10);
    uVar5 = uStack_90;
    uVar6 = local_98.rep_;
    if (this[0x30] != (JsonLexer)0x0) {
      uVar3 = uVar3 - *(longlong *)(this + 0x40);
      uVar5 = *(longlong *)(this + 0x20) - *(ulong64 *)(this + 0x18);
      uVar6 = *(ulong64 *)(this + 0x18);
    }
    if (uVar5 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::basic_string_view<char,std::char_traits<char>_>::_Xran();
    }
    switch(*(undefined1 *)(uVar6 + uVar3)) {
    case 0x22:
    case 0x27:
      *(undefined4 *)&in_RDX[1].rep_ = 2;
      in_RDX->rep_ = 1;
      break;
    default:
      local_98.rep_._1_7_ = (undefined7)(local_98.rep_ >> 8);
      local_98.rep_._0_1_ = *(undefined1 *)(uVar6 + uVar3);
      local_30 = local_98.rep_;
      local_28 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<char>;
      local_98.rep_ = (ulong64)&local_30;
      uStack_90 = 1;
      uStack_60 = 1;
      uStack_5c = 0;
      local_88 = "unexpected character: \'%c\'";
      uStack_80 = 0x1a;
      local_68 = (ulong64 *)local_98.rep_;
      absl::lts_20240722::str_format_internal::FormatPack(local_50,&local_88,&local_68);
      ppppuVar4 = local_50;
      if (0xf < local_38) {
        ppppuVar4 = (undefined8 ****)local_50[0];
      }
      uStack_80 = local_40;
      uVar2 = uStack_80;
      local_88._0_4_ = SUB84(ppppuVar4,0);
      local_88._4_4_ = (undefined4)((ulonglong)ppppuVar4 >> 0x20);
      uStack_80._0_4_ = (undefined4)local_40;
      uStack_80._4_4_ = (undefined4)((ulonglong)local_40 >> 0x20);
      local_68._0_4_ = (undefined4)local_88;
      local_68._4_4_ = local_88._4_4_;
      uStack_60 = (undefined4)uStack_80;
      uStack_5c = uStack_80._4_4_;
      local_88 = (char *)ppppuVar4;
      uStack_80 = uVar2;
      JsonLocation::Invalid((JsonLocation *)(this + 0x60),&local_98,&local_68,0);
      SVar1.rep_ = local_98.rep_;
      in_RDX->rep_ = local_98.rep_;
      local_98.rep_ = (ulong64)&DAT_00000037;
      if ((ulong64 *)SVar1.rep_ == (ulong64 *)0x1) {
        absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(in_RDX);
      }
      if ((local_98.rep_ & 1) == 0) {
        absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_98.rep_);
      }
      if (0xf < local_38) {
        uVar6 = local_38 + 1;
        ppppuVar4 = (undefined8 ****)local_50[0];
        if (0xfff < uVar6) {
          uVar6 = local_38 + 0x28;
          ppppuVar4 = (undefined8 ****)local_50[0][-1];
          if (0x1f < (ulonglong)((longlong)local_50[0] + (-8 - (longlong)ppppuVar4))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete(ppppuVar4,uVar6);
      }
      break;
    case 0x2d:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      *(undefined4 *)&in_RDX[1].rep_ = 3;
      in_RDX->rep_ = 1;
      break;
    case 0x5b:
      *(undefined4 *)&in_RDX[1].rep_ = 1;
      in_RDX->rep_ = 1;
      break;
    case 0x66:
      *(undefined4 *)&in_RDX[1].rep_ = 5;
      in_RDX->rep_ = 1;
      break;
    case 0x6e:
      *(undefined4 *)&in_RDX[1].rep_ = 6;
      in_RDX->rep_ = 1;
      break;
    case 0x74:
      *(undefined4 *)&in_RDX[1].rep_ = 4;
      in_RDX->rep_ = 1;
      break;
    case 0x7b:
      *(undefined4 *)&in_RDX[1].rep_ = 0;
      in_RDX->rep_ = 1;
    }
  }
  else {
    in_RDX->rep_ = local_98.rep_;
    if ((local_98.rep_ & 1) == 0) {
      LOCK();
      *(int *)local_98.rep_ = *(int *)local_98.rep_ + 1;
      UNLOCK();
    }
    if (in_RDX->rep_ == 1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg(in_RDX);
    }
    if ((local_98.rep_ & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_98.rep_);
    }
  }
  return;
}

// SkipToToken @ 14fb971c0

/* WARNING: Removing unreachable block (ram,0x00014fb97408) */
/* WARNING: Removing unreachable block (ram,0x00014fb97390) */
/* WARNING: Removing unreachable block (ram,0x00014fb973bb) */
/* WARNING: Type propagation algorithm not settling */
/* public: class absl::lts_20240722::Status __cdecl
   google::protobuf::json_internal::JsonLexer::SkipToToken(void) __ptr64 */

Status __thiscall google::protobuf::json_internal::JsonLexer::SkipToToken(JsonLexer *this)

{
  char cVar1;
  StatusRep *this_00;
  StatusOr<google::protobuf::json_internal::BufferingGuard> *this_01;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *in_RDX;
  longlong lVar4;
  StatusRep *local_res8;
  StatusRep *local_res18;
  StatusRep *local_res20;
  StatusRep *local_40;
  ZeroCopyBufferedStream *local_38;
  
  do {
    while( true ) {
      this_01 = (StatusOr<google::protobuf::json_internal::BufferingGuard> *)
                ZeroCopyBufferedStream::BufferAtLeast
                          ((ZeroCopyBufferedStream *)this,(__uint64)&local_40);
      absl::lts_20240722::StatusOr<google::protobuf::json_internal::BufferingGuard>::status(this_01)
      ;
      if (local_40 == (StatusRep *)&DAT_00000001) {
        if (local_38 != (ZeroCopyBufferedStream *)0x0) {
          ZeroCopyBufferedStream::DownRefBuffer(local_38);
        }
      }
      else if (((ulonglong)local_40 & 1) == 0) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_40);
      }
      if (local_res20 != (StatusRep *)&DAT_00000001) {
        *in_RDX = local_res20;
        this_00 = local_res20;
        if (((ulonglong)local_res20 & 1) == 0) {
          LOCK();
          local_res20->ref_ = (atomic<int>)((int)local_res20->ref_ + 1);
          UNLOCK();
        }
        goto joined_r0x00014fb973e9;
      }
      uVar3 = *(ulonglong *)(this + 0x38);
      lVar4 = *(longlong *)(this + 8);
      uVar2 = *(ulonglong *)(this + 0x10);
      if (this[0x30] != (JsonLexer)0x0) {
        uVar3 = uVar3 - *(longlong *)(this + 0x40);
        lVar4 = *(longlong *)(this + 0x18);
        uVar2 = *(longlong *)(this + 0x20) - lVar4;
      }
      if (uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
        std::basic_string_view<char,std::char_traits<char>_>::_Xran();
      }
      cVar1 = *(char *)(lVar4 + uVar3);
      if (cVar1 == '\t') goto LAB_14fb9729b;
      if (cVar1 == '\n') break;
      if ((cVar1 != '\r') && (cVar1 != ' ')) {
        *in_RDX = 1;
        return (Status)(ulong64)in_RDX;
      }
LAB_14fb9729b:
      ZeroCopyBufferedStream::Advance((ZeroCopyBufferedStream *)this,(__uint64)&local_res18);
      this_00 = local_res18;
      if (local_res18 == (StatusRep *)&DAT_00000001) {
        *(longlong *)(this + 0x60) = *(longlong *)(this + 0x60) + 1;
        *(longlong *)(this + 0x70) = *(longlong *)(this + 0x70) + 1;
      }
      else {
        if (((ulonglong)local_res18 & 1) == 0) {
          LOCK();
          local_res18->ref_ = (atomic<int>)((int)local_res18->ref_ + 1);
          UNLOCK();
        }
        if (((ulonglong)local_res18 & 1) == 0) {
          absl::lts_20240722::status_internal::StatusRep::Unref(local_res18);
        }
        if (this_00 != (StatusRep *)&DAT_00000001) {
          *in_RDX = this_00;
          if (((ulonglong)this_00 & 1) == 0) {
            LOCK();
            this_00->ref_ = (atomic<int>)((int)this_00->ref_ + 1);
            UNLOCK();
          }
joined_r0x00014fb973e9:
          if (((ulonglong)this_00 & 1) == 0) {
            absl::lts_20240722::status_internal::StatusRep::Unref(this_00);
          }
          return (Status)(ulong64)in_RDX;
        }
      }
    }
    ZeroCopyBufferedStream::Advance((ZeroCopyBufferedStream *)this,(__uint64)&local_res8);
    this_00 = local_res8;
    if (local_res8 == (StatusRep *)&DAT_00000001) {
      *(longlong *)(this + 0x60) = *(longlong *)(this + 0x60) + 1;
      *(longlong *)(this + 0x70) = *(longlong *)(this + 0x70) + 1;
    }
    else {
      if (((ulonglong)local_res8 & 1) == 0) {
        LOCK();
        local_res8->ref_ = (atomic<int>)((int)local_res8->ref_ + 1);
        UNLOCK();
      }
      if (((ulonglong)local_res8 & 1) == 0) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_res8);
      }
      if (this_00 != (StatusRep *)&DAT_00000001) {
        *in_RDX = this_00;
        if (((ulonglong)this_00 & 1) == 0) {
          LOCK();
          this_00->ref_ = (atomic<int>)((int)this_00->ref_ + 1);
          UNLOCK();
        }
        goto joined_r0x00014fb973e9;
      }
    }
    *(longlong *)(this + 0x68) = *(longlong *)(this + 0x68) + 1;
    *(undefined8 *)(this + 0x70) = 0;
  } while( true );
}

// SkipValue @ 14fb97420

/* WARNING: Removing unreachable block (ram,0x00014fb974ae) */
/* WARNING: Removing unreachable block (ram,0x00014fb9779a) */
/* public: class absl::lts_20240722::Status __cdecl
   google::protobuf::json_internal::JsonLexer::SkipValue(void) __ptr64 */

Status __thiscall google::protobuf::json_internal::JsonLexer::SkipValue(JsonLexer *this)

{
  longlong *plVar1;
  StatusRep **ppSVar2;
  LogMessage *this_00;
  longlong *in_RDX;
  longlong lVar3;
  bool bVar4;
  StatusRep *local_res18;
  StatusRep *local_res20;
  basic_string_view<char,std::char_traits<char>_> local_c8;
  basic_string_view<char,std::char_traits<char>_> local_b8;
  StatusRep *local_a8;
  undefined4 local_a0;
  undefined4 local_90;
  LogMessageFatal local_88;
  StatusRep *local_78;
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  local_70 [40];
  ZeroCopyBufferedStream *local_48;
  
  local_90 = 0;
  PeekKind(this);
  if (((ulonglong)local_a8 & 1) == 0) {
    LOCK();
    local_a8->ref_ = (atomic<int>)((int)local_a8->ref_ + 1);
    UNLOCK();
  }
  if (local_a8 == (StatusRep *)&DAT_00000001) {
    switch(local_a0) {
    case 0:
      FUN_14fb92b10(this);
      if ((local_a8 != (StatusRep *)&DAT_00000001) && (((ulonglong)local_a8 & 1) == 0)) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_a8);
      }
      break;
    case 1:
      FUN_14fb92900(this);
      if ((local_a8 != (StatusRep *)&DAT_00000001) && (((ulonglong)local_a8 & 1) == 0)) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_a8);
      }
      break;
    case 2:
      plVar1 = (longlong *)ParseUtf8(this);
      lVar3 = *plVar1;
      bVar4 = lVar3 != 1;
      if (bVar4) {
        *plVar1 = 0x37;
        ppSVar2 = &local_res18;
      }
      else {
        ppSVar2 = &local_res20;
        lVar3 = 1;
      }
      *in_RDX = lVar3;
      *ppSVar2 = (StatusRep *)0x37;
      if ((bVar4) && (((ulonglong)local_res18 & 1) == 0)) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_res18);
      }
      if ((!bVar4) && (((ulonglong)local_res20 & 1) == 0)) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_res20);
      }
      if (local_78 == (StatusRep *)&DAT_00000001) {
        if (local_48 != (ZeroCopyBufferedStream *)0x0) {
          ZeroCopyBufferedStream::DownRefBuffer(local_48);
          local_48 = (ZeroCopyBufferedStream *)0x0;
        }
        std::
        _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
        ::_Destroy(local_70);
      }
      else if (((ulonglong)local_78 & 1) == 0) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_78);
      }
      if ((local_a8 != (StatusRep *)&DAT_00000001) && (((ulonglong)local_a8 & 1) == 0)) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_a8);
      }
      break;
    case 3:
      plVar1 = (longlong *)ParseNumber(this);
      lVar3 = *plVar1;
      bVar4 = lVar3 != 1;
      if (bVar4) {
        *plVar1 = 0x37;
        ppSVar2 = &local_res18;
      }
      else {
        ppSVar2 = &local_res20;
        lVar3 = 1;
      }
      *in_RDX = lVar3;
      *ppSVar2 = (StatusRep *)0x37;
      if ((bVar4) && (((ulonglong)local_res18 & 1) == 0)) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_res18);
      }
      if ((!bVar4) && (((ulonglong)local_res20 & 1) == 0)) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_res20);
      }
      if ((local_78 != (StatusRep *)&DAT_00000001) && (((ulonglong)local_78 & 1) == 0)) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_78);
      }
      if ((local_a8 != (StatusRep *)&DAT_00000001) && (((ulonglong)local_a8 & 1) == 0)) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_a8);
      }
      break;
    case 4:
      local_c8._Mydata = "true";
      local_c8._Mysize = 4;
      local_b8._Mydata = "true";
      local_b8._Mysize = 4;
      Expect(this);
      if ((local_a8 != (StatusRep *)&DAT_00000001) && (((ulonglong)local_a8 & 1) == 0)) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_a8);
      }
      break;
    case 5:
      local_c8._Mydata = "false";
      local_c8._Mysize = 5;
      local_b8._Mydata = "false";
      local_b8._Mysize = 5;
      Expect(this);
      if ((local_a8 != (StatusRep *)&DAT_00000001) && (((ulonglong)local_a8 & 1) == 0)) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_a8);
      }
      break;
    case 6:
      local_c8._Mydata = "null";
      local_c8._Mysize = 4;
      local_b8._Mydata = "null";
      local_b8._Mysize = 4;
      Expect(this);
      if ((local_a8 != (StatusRep *)&DAT_00000001) && (((ulonglong)local_a8 & 1) == 0)) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_a8);
      }
      break;
    default:
      local_c8._Mydata = "false";
      local_c8._Mysize = 5;
      this_00 = (LogMessage *)
                absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                          (&local_88,
                           "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\json\\internal\\lexer.cc"
                           ,0xa5,&local_c8);
      local_90 = 2;
      local_b8._Mydata = "unreachable";
      local_b8._Mysize = 0xb;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_00,&local_b8);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_88);
    }
  }
  else {
    *in_RDX = (longlong)local_a8;
    if (((ulonglong)local_a8 & 1) == 0) {
      LOCK();
      local_a8->ref_ = (atomic<int>)((int)local_a8->ref_ + 1);
      UNLOCK();
    }
    if (((ulonglong)local_a8 & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref(local_a8);
    }
    if ((local_a8 != (StatusRep *)&DAT_00000001) && (((ulonglong)local_a8 & 1) == 0)) {
      absl::lts_20240722::status_internal::StatusRep::Unref(local_a8);
    }
  }
  return (Status)(ulong64)in_RDX;
}

// Take @ 14fb97840

/* WARNING: Removing unreachable block (ram,0x00014fb97a99) */
/* public: class absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> > __cdecl
   google::protobuf::json_internal::JsonLexer::Take(unsigned __int64) __ptr64 */

__uint64 __thiscall
google::protobuf::json_internal::JsonLexer::Take(JsonLexer *this,__uint64 param_1)

{
  int iVar1;
  ulonglong uVar2;
  StatusRep *this_00;
  StatusRep *pSVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  StatusRep *local_d8;
  _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
  local_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  char local_b0;
  ZeroCopyBufferedStream *local_a8;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  char local_78;
  ZeroCopyBufferedStream *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = *(undefined8 *)(this + 0x60);
  uStack_38 = *(undefined8 *)(this + 0x68);
  local_30 = *(undefined8 *)(this + 0x70);
  uStack_28 = *(undefined8 *)(this + 0x78);
  ZeroCopyBufferedStream::Take((ZeroCopyBufferedStream *)this,(__uint64)&local_d8);
  this_00 = local_d8;
  pSVar3 = (StatusRep *)((ulonglong)local_d8 & 0xff);
  if (((ulonglong)local_d8 & 1) == 0) {
    LOCK();
    local_d8->ref_ = (atomic<int>)((int)local_d8->ref_ + 1);
    UNLOCK();
    pSVar3 = local_d8;
  }
  if (local_d8 == (StatusRep *)&DAT_00000001) {
    local_78 = -1;
    uVar4 = (undefined4)uStack_80;
    uVar5 = uStack_80._4_4_;
    if (local_b0 == -1) {
      uVar6 = (undefined4)local_88;
      uVar7 = local_88._4_4_;
    }
    else {
      local_98 = CONCAT71(uStack_cf,local_d0);
      uStack_90 = uStack_c8;
      uVar6 = (undefined4)local_c0;
      uVar7 = local_c0._4_4_;
      if (local_b0 == '\0') {
        uVar4 = (undefined4)uStack_b8;
        uVar5 = uStack_b8._4_4_;
        local_88 = local_c0;
        uStack_80 = uStack_b8;
        local_c0 = 0;
        uStack_b8 = 0xf;
        local_d0 = (_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                    )0x0;
        local_78 = '\0';
      }
      else {
        local_78 = '\x01';
        local_88 = local_c0;
      }
    }
    local_70 = local_a8;
    if (local_a8 != (ZeroCopyBufferedStream *)0x0) {
      iVar1 = *(int *)(local_a8 + 0x4c);
      *(int *)(local_a8 + 0x4c) = *(int *)(local_a8 + 0x4c) + 1;
      if (iVar1 == 0) {
        *(undefined8 *)(local_a8 + 0x40) = *(undefined8 *)(local_a8 + 0x38);
      }
      uVar4 = (undefined4)uStack_80;
      uVar5 = uStack_80._4_4_;
      uVar6 = (undefined4)local_88;
      uVar7 = local_88._4_4_;
    }
    local_68 = local_40;
    uStack_60 = uStack_38;
    local_58 = local_30;
    uStack_50 = uStack_28;
    *(undefined1 *)(param_1 + 0x28) = 0xff;
    if (local_78 != -1) {
      *(ulonglong *)(param_1 + 8) = local_98;
      *(undefined8 *)(param_1 + 0x10) = uStack_90;
      if (local_78 == '\0') {
        *(undefined4 *)(param_1 + 0x18) = uVar6;
        *(undefined4 *)(param_1 + 0x1c) = uVar7;
        *(undefined4 *)(param_1 + 0x20) = uVar4;
        *(undefined4 *)(param_1 + 0x24) = uVar5;
        local_88 = 0;
        uStack_80 = 0xf;
        local_98 = local_98 & 0xffffffffffffff00;
        *(undefined1 *)(param_1 + 0x28) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = uVar6;
        *(undefined4 *)(param_1 + 0x1c) = uVar7;
        *(undefined1 *)(param_1 + 0x28) = 1;
      }
    }
    *(ZeroCopyBufferedStream **)(param_1 + 0x30) = local_a8;
    if ((local_a8 != (ZeroCopyBufferedStream *)0x0) &&
       (iVar1 = *(int *)(local_a8 + 0x4c), *(int *)(local_a8 + 0x4c) = *(int *)(local_a8 + 0x4c) + 1
       , iVar1 == 0)) {
      *(undefined8 *)(local_a8 + 0x40) = *(undefined8 *)(local_a8 + 0x38);
    }
    *(undefined8 *)(param_1 + 0x38) = local_40;
    *(undefined8 *)(param_1 + 0x40) = uStack_38;
    *(undefined8 *)(param_1 + 0x48) = local_30;
    *(undefined8 *)(param_1 + 0x50) = uStack_28;
    *(undefined8 *)param_1 = 1;
    if (local_a8 != (ZeroCopyBufferedStream *)0x0) {
      ZeroCopyBufferedStream::DownRefBuffer(local_a8);
      local_70 = (ZeroCopyBufferedStream *)0x0;
    }
    std::
    _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
    ::_Destroy((_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                *)&local_98);
    if (local_d8 == (StatusRep *)&DAT_00000001) {
      if (local_a8 != (ZeroCopyBufferedStream *)0x0) {
        ZeroCopyBufferedStream::DownRefBuffer(local_a8);
        local_a8 = (ZeroCopyBufferedStream *)0x0;
      }
      std::
      _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
      ::_Destroy(&local_d0);
    }
    else if (((ulonglong)local_d8 & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref(local_d8);
    }
  }
  else {
    *(StatusRep **)param_1 = local_d8;
    uVar2 = (ulonglong)local_d8 & 1;
    if (((ulonglong)local_d8 & 1) == 0) {
      LOCK();
      local_d8->ref_ = (atomic<int>)((int)local_d8->ref_ + 1);
      UNLOCK();
      pSVar3 = (StatusRep *)((ulonglong)local_d8 & 0xff);
    }
    if (*(longlong *)param_1 == 1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)param_1);
      pSVar3 = (StatusRep *)((ulonglong)local_d8 & 0xff);
    }
    if (uVar2 == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref(this_00);
      pSVar3 = (StatusRep *)((ulonglong)local_d8 & 0xff);
    }
    if (local_d8 == (StatusRep *)&DAT_00000001) {
      if (local_a8 != (ZeroCopyBufferedStream *)0x0) {
        ZeroCopyBufferedStream::DownRefBuffer(local_a8);
        local_a8 = (ZeroCopyBufferedStream *)0x0;
      }
      std::
      _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
      ::_Destroy(&local_d0);
    }
    else if (((ulonglong)pSVar3 & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref(local_d8);
    }
  }
  return param_1;
}

// Take @ 14fb97ab0

/* WARNING: Removing unreachable block (ram,0x00014fb97b67) */
/* public: class absl::lts_20240722::StatusOr<class
   google::protobuf::json_internal::MaybeOwnedString> __cdecl
   google::protobuf::json_internal::ZeroCopyBufferedStream::Take(unsigned __int64) __ptr64 */

__uint64 __thiscall
google::protobuf::json_internal::ZeroCopyBufferedStream::Take
          (ZeroCopyBufferedStream *this,__uint64 param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  Status this_00;
  StatusRep *local_res20;
  Status local_78;
  ZeroCopyBufferedStream *local_70;
  ZeroCopyBufferedStream *local_60;
  undefined8 local_58;
  undefined1 local_40;
  ZeroCopyBufferedStream *local_38;
  
  BufferAtLeast(this,(__uint64)&local_78);
  this_00.rep_ = local_78.rep_;
  uVar3 = local_78.rep_ & 1;
  if ((local_78.rep_ & 1) == 0) {
    LOCK();
    *(int *)local_78.rep_ = *(int *)local_78.rep_ + 1;
    UNLOCK();
  }
  if ((StatusRep *)local_78.rep_ == (StatusRep *)&DAT_00000001) {
    uVar2 = *(undefined8 *)(this + 0x38);
    Advance(this,(__uint64)&local_res20);
    if (local_res20 == (StatusRep *)&DAT_00000001) {
      if ((StatusRep *)local_78.rep_ != (StatusRep *)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::internal_statusor::Helper::Crash(&local_78);
      }
      if ((local_70 != (ZeroCopyBufferedStream *)0x0) &&
         (iVar1 = *(int *)(local_70 + 0x4c), *(int *)(local_70 + 0x4c) = iVar1 + 1, iVar1 == 0)) {
        *(undefined8 *)(local_70 + 0x40) = *(undefined8 *)(local_70 + 0x38);
      }
      local_40 = 1;
      local_38 = local_70;
      if ((local_70 != (ZeroCopyBufferedStream *)0x0) &&
         (iVar1 = *(int *)(local_70 + 0x4c), *(int *)(local_70 + 0x4c) = iVar1 + 1, iVar1 == 0)) {
        *(undefined8 *)(local_70 + 0x40) = *(undefined8 *)(local_70 + 0x38);
      }
      local_60 = this;
      local_58 = uVar2;
      if (local_70 != (ZeroCopyBufferedStream *)0x0) {
        DownRefBuffer(local_70);
      }
      MaybeOwnedString::MaybeOwnedString
                ((MaybeOwnedString *)(param_1 + 8),(MaybeOwnedString *)&local_60);
      *(undefined8 *)param_1 = 1;
      if (local_38 != (ZeroCopyBufferedStream *)0x0) {
        DownRefBuffer(local_38);
        local_38 = (ZeroCopyBufferedStream *)0x0;
      }
      std::
      _Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
      ::_Destroy((_Variant_base<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,google::protobuf::json_internal::MaybeOwnedString::StreamOwned>
                  *)&local_60);
      if ((StatusRep *)local_78.rep_ == (StatusRep *)&DAT_00000001) {
        if (local_70 != (ZeroCopyBufferedStream *)0x0) {
          DownRefBuffer(local_70);
        }
      }
      else if ((local_78.rep_ & 1) == 0) {
        absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_78.rep_);
      }
    }
    else {
      *(StatusRep **)param_1 = local_res20;
      if (((ulonglong)local_res20 & 1) == 0) {
        LOCK();
        local_res20->ref_ = (atomic<int>)((int)local_res20->ref_ + 1);
        UNLOCK();
      }
      if (*(longlong *)param_1 == 1) {
        absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)param_1)
        ;
      }
      if (((ulonglong)local_res20 & 1) == 0) {
        absl::lts_20240722::status_internal::StatusRep::Unref(local_res20);
      }
      if ((StatusRep *)local_78.rep_ == (StatusRep *)&DAT_00000001) {
        if (local_70 != (ZeroCopyBufferedStream *)0x0) {
          DownRefBuffer(local_70);
        }
      }
      else if ((local_78.rep_ & 1) == 0) {
        absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_78.rep_);
      }
    }
  }
  else {
    *(ulong64 *)param_1 = local_78.rep_;
    if ((local_78.rep_ & 1) == 0) {
      LOCK();
      *(int *)local_78.rep_ = *(int *)local_78.rep_ + 1;
      UNLOCK();
    }
    if (*(longlong *)param_1 == 1) {
      absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)param_1);
    }
    if (uVar3 == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)this_00.rep_);
    }
    if ((StatusRep *)local_78.rep_ == (StatusRep *)&DAT_00000001) {
      if (local_70 != (ZeroCopyBufferedStream *)0x0) {
        DownRefBuffer(local_70);
      }
    }
    else if ((local_78.rep_ & 1) == 0) {
      absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_78.rep_);
    }
  }
  return param_1;
}

// ascii_isalnum @ 14fb97ce0

/* bool __cdecl absl::lts_20240722::ascii_isalnum(unsigned char) */

bool __cdecl absl::lts_20240722::ascii_isalnum(uchar param_1)

{
  return (bool)(*(byte *)((longlong)&ascii_internal::kPropertyBits + (ulonglong)param_1) >> 2 & 1);
}

// back @ 14fb97d00

/* public: char const & __ptr64 __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::back(void)const __ptr64 */

char * __thiscall
std::basic_string_view<char,std::char_traits<char>_>::back
          (basic_string_view<char,std::char_traits<char>_> *this)

{
  return this->_Mydata + (this->_Mysize - 1);
}

// ok @ 14fb97d20

/* public: bool __cdecl absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<double> >::ok(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::LocationWith<double>_>::ok
          (StatusOr<google::protobuf::json_internal::LocationWith<double>_> *this)

{
  return *(longlong *)this == 1;
}

// ok @ 14fb97d30

/* public: bool __cdecl absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> >::ok(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::
StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
::ok(StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
     *this)

{
  return *(longlong *)this == 1;
}

// ok @ 14fb97d40

/* public: bool __cdecl absl::lts_20240722::StatusOr<class
   google::protobuf::json_internal::BufferingGuard>::ok(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::BufferingGuard>::ok
          (StatusOr<google::protobuf::json_internal::BufferingGuard> *this)

{
  return *(longlong *)this == 1;
}

// ok @ 14fb97d50

/* public: bool __cdecl absl::lts_20240722::internal_statusor::StatusOrData<unsigned
   short>::ok(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<unsigned_short>::ok
          (StatusOrData<unsigned_short> *this)

{
  return *(longlong *)this == 1;
}

// ok @ 14fb97d60

/* public: bool __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::json_internal::MaybeOwnedString>::ok(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::internal_statusor::
StatusOrData<google::protobuf::json_internal::MaybeOwnedString>::ok
          (StatusOrData<google::protobuf::json_internal::MaybeOwnedString> *this)

{
  return *(longlong *)this == 1;
}

// status @ 14fb97d70

/* public: class absl::lts_20240722::Status const & __ptr64 __cdecl
   absl::lts_20240722::StatusOr<unsigned short>::status(void)const __ptr64&  */

Status * __thiscall
absl::lts_20240722::StatusOr<unsigned_short>::status(StatusOr<unsigned_short> *this)

{
  return (Status *)this;
}

// status @ 14fb97d80

/* WARNING: Removing unreachable block (ram,0x00014fb97de2) */
/* WARNING: Removing unreachable block (ram,0x00014fb97db3) */
/* public: class absl::lts_20240722::Status __cdecl absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<double> >::status(void) __ptr64&&  */

Status __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::LocationWith<double>_>::status
          (StatusOr<google::protobuf::json_internal::LocationWith<double>_> *this)

{
  longlong lVar1;
  longlong *in_RDX;
  
  lVar1 = *(longlong *)this;
  if (lVar1 == 1) {
    *in_RDX = 1;
    return (Status)(ulong64)in_RDX;
  }
  *(undefined8 *)this = 0x37;
  *in_RDX = lVar1;
  return (Status)(ulong64)in_RDX;
}

// status @ 14fb97e00

/* WARNING: Removing unreachable block (ram,0x00014fb97e62) */
/* WARNING: Removing unreachable block (ram,0x00014fb97e33) */
/* public: class absl::lts_20240722::Status __cdecl absl::lts_20240722::StatusOr<struct
   google::protobuf::json_internal::LocationWith<class
   google::protobuf::json_internal::MaybeOwnedString> >::status(void) __ptr64&&  */

Status __thiscall
absl::lts_20240722::
StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
::status(StatusOr<google::protobuf::json_internal::LocationWith<google::protobuf::json_internal::MaybeOwnedString>_>
         *this)

{
  longlong lVar1;
  longlong *in_RDX;
  
  lVar1 = *(longlong *)this;
  if (lVar1 == 1) {
    *in_RDX = 1;
    return (Status)(ulong64)in_RDX;
  }
  *(undefined8 *)this = 0x37;
  *in_RDX = lVar1;
  return (Status)(ulong64)in_RDX;
}

// status @ 14fb97e80

/* WARNING: Removing unreachable block (ram,0x00014fb97ee2) */
/* WARNING: Removing unreachable block (ram,0x00014fb97eb3) */
/* public: class absl::lts_20240722::Status __cdecl absl::lts_20240722::StatusOr<class
   google::protobuf::json_internal::BufferingGuard>::status(void) __ptr64&&  */

Status __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::BufferingGuard>::status
          (StatusOr<google::protobuf::json_internal::BufferingGuard> *this)

{
  longlong lVar1;
  longlong *in_RDX;
  
  lVar1 = *(longlong *)this;
  if (lVar1 == 1) {
    *in_RDX = 1;
    return (Status)(ulong64)in_RDX;
  }
  *(undefined8 *)this = 0x37;
  *in_RDX = lVar1;
  return (Status)(ulong64)in_RDX;
}

// status @ 14fb97f00

/* public: class absl::lts_20240722::Status const & __ptr64 __cdecl
   absl::lts_20240722::StatusOr<class
   google::protobuf::json_internal::MaybeOwnedString>::status(void)const __ptr64&  */

Status * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::MaybeOwnedString>::status
          (StatusOr<google::protobuf::json_internal::MaybeOwnedString> *this)

{
  return (Status *)this;
}

// FUN_1502ae410 @ 1502ae410

void FUN_1502ae410(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 2) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffd;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x60));
  }
  return;
}


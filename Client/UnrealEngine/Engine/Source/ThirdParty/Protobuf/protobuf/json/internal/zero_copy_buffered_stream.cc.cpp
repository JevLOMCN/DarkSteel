// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 49

// StatusOr<google::protobuf::json_internal::BufferingGuard><google::protobuf::json_internal::BufferingGuard,0> @ 14fb90520

/* public: __cdecl absl::lts_20240722::StatusOr<class
   google::protobuf::json_internal::BufferingGuard>::StatusOr<class
   google::protobuf::json_internal::BufferingGuard><class
   google::protobuf::json_internal::BufferingGuard,0>(class
   google::protobuf::json_internal::BufferingGuard && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::BufferingGuard> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::BufferingGuard>::
StatusOr<google::protobuf::json_internal::BufferingGuard><google::protobuf::json_internal::BufferingGuard,0>
          (StatusOr<google::protobuf::json_internal::BufferingGuard> *this,BufferingGuard *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)param_1;
  *(longlong *)(this + 8) = lVar2;
  if ((lVar2 != 0) &&
     (iVar1 = *(int *)(lVar2 + 0x4c), *(int *)(lVar2 + 0x4c) = iVar1 + 1, iVar1 == 0)) {
    *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(lVar2 + 0x38);
  }
  *(undefined8 *)this = 1;
  return this;
}

// StatusOr<google::protobuf::json_internal::BufferingGuard><google::protobuf::json_internal::BufferingGuard> @ 14fb90560

/* public: __cdecl absl::lts_20240722::StatusOr<class
   google::protobuf::json_internal::BufferingGuard>::StatusOr<class
   google::protobuf::json_internal::BufferingGuard><class
   google::protobuf::json_internal::BufferingGuard>(struct std::in_place_t,class
   google::protobuf::json_internal::BufferingGuard && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::BufferingGuard> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::BufferingGuard>::
StatusOr<google::protobuf::json_internal::BufferingGuard><google::protobuf::json_internal::BufferingGuard>
          (StatusOr<google::protobuf::json_internal::BufferingGuard> *this,in_place_t param_1,
          BufferingGuard *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)param_2;
  *(longlong *)(this + 8) = lVar2;
  if ((lVar2 != 0) &&
     (iVar1 = *(int *)(lVar2 + 0x4c), *(int *)(lVar2 + 0x4c) = iVar1 + 1, iVar1 == 0)) {
    *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(lVar2 + 0x38);
  }
  *(undefined8 *)this = 1;
  return this;
}

// StatusOrData<google::protobuf::json_internal::BufferingGuard><google::protobuf::json_internal::BufferingGuard> @ 14fb905a0

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::json_internal::BufferingGuard>::StatusOrData<class
   google::protobuf::json_internal::BufferingGuard><class
   google::protobuf::json_internal::BufferingGuard>(struct std::in_place_t,class
   google::protobuf::json_internal::BufferingGuard && __ptr64) __ptr64 */

StatusOrData<google::protobuf::json_internal::BufferingGuard> * __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::json_internal::BufferingGuard>
::
StatusOrData<google::protobuf::json_internal::BufferingGuard><google::protobuf::json_internal::BufferingGuard>
          (StatusOrData<google::protobuf::json_internal::BufferingGuard> *this,in_place_t param_1,
          BufferingGuard *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)param_2;
  *(longlong *)(this + 8) = lVar2;
  if ((lVar2 != 0) &&
     (iVar1 = *(int *)(lVar2 + 0x4c), *(int *)(lVar2 + 0x4c) = iVar1 + 1, iVar1 == 0)) {
    *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(lVar2 + 0x38);
  }
  *(undefined8 *)this = 1;
  return this;
}

// StatusOr<google::protobuf::json_internal::BufferingGuard><absl::lts_20240722::Status,0> @ 14fb905e0

/* public: __cdecl absl::lts_20240722::StatusOr<class
   google::protobuf::json_internal::BufferingGuard>::StatusOr<class
   google::protobuf::json_internal::BufferingGuard><class absl::lts_20240722::Status,0>(class
   absl::lts_20240722::Status && __ptr64) __ptr64 */

StatusOr<google::protobuf::json_internal::BufferingGuard> * __thiscall
absl::lts_20240722::StatusOr<google::protobuf::json_internal::BufferingGuard>::
StatusOr<google::protobuf::json_internal::BufferingGuard><absl::lts_20240722::Status,0>
          (StatusOr<google::protobuf::json_internal::BufferingGuard> *this,Status *param_1)

{
  *(ulong64 *)this = param_1->rep_;
  param_1->rep_ = 0x37;
  if (*(longlong *)this == 1) {
    internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// StatusOrData<google::protobuf::json_internal::BufferingGuard><absl::lts_20240722::Status,0> @ 14fb90620

/* public: __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::json_internal::BufferingGuard>::StatusOrData<class
   google::protobuf::json_internal::BufferingGuard><class absl::lts_20240722::Status,0>(class
   absl::lts_20240722::Status && __ptr64) __ptr64 */

StatusOrData<google::protobuf::json_internal::BufferingGuard> * __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::json_internal::BufferingGuard>
::StatusOrData<google::protobuf::json_internal::BufferingGuard><absl::lts_20240722::Status,0>
          (StatusOrData<google::protobuf::json_internal::BufferingGuard> *this,Status *param_1)

{
  *(ulong64 *)this = param_1->rep_;
  param_1->rep_ = 0x37;
  if (*(longlong *)this == 1) {
    Helper::HandleInvalidStatusCtorArg((Status *)this);
  }
  return this;
}

// operator<<<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14fb90660

/* class absl::lts_20240722::log_internal::NullStream & __ptr64 __cdecl
   absl::lts_20240722::log_internal::operator<<<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >(class
   absl::lts_20240722::log_internal::NullStream & __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) */

NullStream * __cdecl
absl::lts_20240722::log_internal::
operator<<<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (NullStream *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  return param_1;
}

// Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355,655355>_> @ 14fb90670

/* public: static class absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl const &
   __ptr64 __cdecl absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::Extract<class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355,655355> >(class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355,655355> const &
   __ptr64) */

UntypedFormatSpecImpl * __cdecl
absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::
Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355,655355>_>
          (FormatSpecTemplate<655355,655355,655355> *param_1)

{
  return (UntypedFormatSpecImpl *)param_1;
}

// MakeStatus<> @ 14fb90680

/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::json_internal::BufferingGuard>::MakeStatus<>(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::json_internal::BufferingGuard>
::MakeStatus<>(StatusOrData<google::protobuf::json_internal::BufferingGuard> *this)

{
  *(undefined8 *)this = 1;
  return;
}

// StrFormat<unsigned___int64,unsigned___int64,unsigned___int64> @ 14fb90690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::StrFormat<unsigned __int64,unsigned __int64,unsigned __int64>(class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355,655355> const &
   __ptr64,unsigned __int64 const & __ptr64,unsigned __int64 const & __ptr64,unsigned __int64 const
   & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::StrFormat<unsigned___int64,unsigned___int64,unsigned___int64>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          FormatSpecTemplate<655355,655355,655355> *param_1,__uint64 *param_2,__uint64 *param_3,
          __uint64 *param_4)

{
  undefined1 auStack_98 [32];
  __uint64 *local_78;
  undefined8 uStack_70;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  __uint64 local_48;
  code *local_40;
  __uint64 local_38;
  code *local_30;
  __uint64 local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_48 = *param_2;
  local_58 = *(undefined4 *)param_1;
  uStack_54 = *(undefined4 *)(param_1 + 4);
  uStack_50 = *(undefined4 *)(param_1 + 8);
  uStack_4c = *(undefined4 *)(param_1 + 0xc);
  local_38 = *param_3;
  local_40 = str_format_internal::FormatArgImpl::Dispatch<unsigned___int64>;
  local_30 = str_format_internal::FormatArgImpl::Dispatch<unsigned___int64>;
  local_28 = *param_4;
  local_78 = &local_48;
  local_20 = str_format_internal::FormatArgImpl::Dispatch<unsigned___int64>;
  uStack_70 = 3;
  str_format_internal::FormatPack(__return_storage_ptr__,&local_58,&local_78);
  return __return_storage_ptr__;
}

// _Construct_in_place<char,char_const&___ptr64> @ 14fb90740

/* void __cdecl std::_Construct_in_place<char,char const & __ptr64>(char & __ptr64,char const &
   __ptr64) */

void __cdecl std::_Construct_in_place<char,char_const&___ptr64>(char *param_1,char *param_2)

{
  *param_1 = *param_2;
  return;
}

// _Copy_unchecked<char_const*___ptr64,char_const*___ptr64,std::back_insert_iterator<std::vector<char,std::allocator<char>_>_>_> @ 14fb90750

/* class std::back_insert_iterator<class std::vector<char,class std::allocator<char> > > __cdecl
   std::_Copy_unchecked<char const * __ptr64,char const * __ptr64,class
   std::back_insert_iterator<class std::vector<char,class std::allocator<char> > > >(char const *
   __ptr64,char const * __ptr64,class std::back_insert_iterator<class std::vector<char,class
   std::allocator<char> > >) */

undefined8 * __cdecl
std::
_Copy_unchecked<char_const*___ptr64,char_const*___ptr64,std::back_insert_iterator<std::vector<char,std::allocator<char>_>_>_>
          (undefined8 *param_1,char *param_2,char *param_3,
          vector<char,std::allocator<char>_> *param_4)

{
  char **ppcVar1;
  char *pcVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
  }
  else {
    do {
      pcVar2 = (param_4->_Mypair)._Myval2._Mylast;
      if (pcVar2 == (param_4->_Mypair)._Myval2._Myend) {
        vector<char,std::allocator<char>_>::_Emplace_reallocate<char_const&___ptr64>
                  (param_4,pcVar2,param_2);
      }
      else {
        *pcVar2 = *param_2;
        ppcVar1 = &(param_4->_Mypair)._Myval2._Mylast;
        *ppcVar1 = *ppcVar1 + 1;
      }
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
    *param_1 = param_4;
  }
  return param_1;
}

// _Emplace_back<char> @ 14fb907d0

/* public: void __cdecl std::_Uninitialized_backout_al<class std::allocator<char>
   >::_Emplace_back<char>(char && __ptr64) __ptr64 */

void __thiscall
std::_Uninitialized_backout_al<std::allocator<char>_>::_Emplace_back<char>
          (_Uninitialized_backout_al<std::allocator<char>_> *this,char *param_1)

{
  *this->_Last = *param_1;
  this->_Last = this->_Last + 1;
  return;
}

// _Emplace_back_with_unused_capacity<char_const&___ptr64> @ 14fb907f0

/* private: char & __ptr64 __cdecl std::vector<char,class std::allocator<char>
   >::_Emplace_back_with_unused_capacity<char const & __ptr64>(char const & __ptr64) __ptr64 */

char * __thiscall
std::vector<char,std::allocator<char>_>::_Emplace_back_with_unused_capacity<char_const&___ptr64>
          (vector<char,std::allocator<char>_> *this,char *param_1)

{
  char *pcVar1;
  
  *(this->_Mypair)._Myval2._Mylast = *param_1;
  pcVar1 = (this->_Mypair)._Myval2._Mylast;
  (this->_Mypair)._Myval2._Mylast = pcVar1 + 1;
  return pcVar1;
}

// _Emplace_one_at_back<char_const&___ptr64> @ 14fb90810

/* private: char & __ptr64 __cdecl std::vector<char,class std::allocator<char>
   >::_Emplace_one_at_back<char const & __ptr64>(char const & __ptr64) __ptr64 */

char * __thiscall
std::vector<char,std::allocator<char>_>::_Emplace_one_at_back<char_const&___ptr64>
          (vector<char,std::allocator<char>_> *this,char *param_1)

{
  char *pcVar1;
  
  pcVar1 = (this->_Mypair)._Myval2._Mylast;
  if (pcVar1 != (this->_Mypair)._Myval2._Myend) {
    *pcVar1 = *param_1;
    pcVar1 = (this->_Mypair)._Myval2._Mylast;
    (this->_Mypair)._Myval2._Mylast = pcVar1 + 1;
    return pcVar1;
  }
  pcVar1 = _Emplace_reallocate<char_const&___ptr64>(this,pcVar1,param_1);
  return pcVar1;
}

// _Emplace_reallocate<char_const&___ptr64> @ 14fb90840

/* private: char * __ptr64 __cdecl std::vector<char,class std::allocator<char>
   >::_Emplace_reallocate<char const & __ptr64>(char * __ptr64 const,char const & __ptr64) __ptr64
    */

char * __thiscall
std::vector<char,std::allocator<char>_>::_Emplace_reallocate<char_const&___ptr64>
          (vector<char,std::allocator<char>_> *this,char *param_1,char *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  ulonglong uVar4;
  char *pcVar5;
  char *pcVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  char *_Dst;
  size_t _Size;
  char *pcVar9;
  
  pcVar5 = (this->_Mypair)._Myval2._Myfirst;
  lVar2 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pcVar5;
  uVar8 = 0x7fffffffffffffff;
  if (lVar2 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = lVar2 + 1;
  uVar4 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pcVar5;
  if (0x7fffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar4 = 0x8000000000000026;
LAB_14fb908ab:
    pvVar3 = ::operator_new(uVar4);
    if (pvVar3 == (void *)0x0) goto LAB_14fb909b3;
    _Dst = (char *)((longlong)pvVar3 + 0x27U & 0xffffffffffffffe0);
    *(void **)(_Dst + -8) = pvVar3;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar8 = uVar1;
    if (uVar1 <= uVar4) {
      uVar8 = uVar4;
    }
    if (0xfff < uVar8) {
      uVar4 = uVar8 + 0x27;
      if (uVar4 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        _Throw_bad_array_new_length();
      }
      goto LAB_14fb908ab;
    }
    if (uVar8 == 0) {
      _Dst = (char *)0x0;
    }
    else {
      _Dst = ::operator_new(uVar8);
    }
  }
  pcVar9 = _Dst + ((longlong)param_1 - (longlong)pcVar5);
  *pcVar9 = *param_2;
  pcVar5 = (this->_Mypair)._Myval2._Mylast;
  pcVar6 = (this->_Mypair)._Myval2._Myfirst;
  if (param_1 == pcVar5) {
    _Size = (longlong)pcVar5 - (longlong)pcVar6;
    pcVar5 = _Dst;
    param_1 = pcVar6;
  }
  else {
    memmove(_Dst,pcVar6,(longlong)param_1 - (longlong)pcVar6);
    pcVar5 = pcVar9 + 1;
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)param_1;
  }
  memmove(pcVar5,param_1,_Size);
  pcVar5 = (this->_Mypair)._Myval2._Myfirst;
  if (pcVar5 != (char *)0x0) {
    uVar7 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pcVar5;
    pcVar6 = pcVar5;
    if (0xfff < uVar7) {
      uVar7 = uVar7 + 0x27;
      pcVar6 = *(char **)(pcVar5 + -8);
      if ((char *)0x1f < pcVar5 + (-8 - (longlong)pcVar6)) {
LAB_14fb909b3:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pcVar6,uVar7);
  }
  (this->_Mypair)._Myval2._Myfirst = _Dst;
  (this->_Mypair)._Myval2._Mylast = _Dst + uVar1;
  (this->_Mypair)._Myval2._Myend = _Dst + uVar8;
  return pcVar9;
}

// _Get_unwrapped_n<std::back_insert_iterator<std::vector<char,std::allocator<char>_>_>&___ptr64,__int64> @ 14fb909d0

/* UNKNOWN __cdecl std::_Get_unwrapped_n<class std::back_insert_iterator<class
   std::vector<char,class std::allocator<char> > > & __ptr64,__int64>(class
   std::back_insert_iterator<class std::vector<char,class std::allocator<char> > > &
   __ptr64,__int64) */

back_insert_iterator<std::vector<char,std::allocator<char>_>_> * __cdecl
std::
_Get_unwrapped_n<std::back_insert_iterator<std::vector<char,std::allocator<char>_>_>&___ptr64,__int64>
          (back_insert_iterator<std::vector<char,std::allocator<char>_>_> *param_1,__int64 param_2)

{
  return param_1;
}

// _Idl_distance<std::_String_view_iterator<std::char_traits<char>_>,char_const*___ptr64> @ 14fb909e0

/* UNKNOWN __cdecl std::_Idl_distance<class std::_String_view_iterator<struct std::char_traits<char>
   >,char const * __ptr64>(char const * __ptr64 const & __ptr64,char const * __ptr64 const &
   __ptr64) */

longlong __cdecl
std::_Idl_distance<std::_String_view_iterator<std::char_traits<char>_>,char_const*___ptr64>
          (char **param_1,char **param_2)

{
  return (longlong)*param_2 - (longlong)*param_1;
}

// _Seek_wrapped<std::back_insert_iterator<std::vector<char,std::allocator<char>_>_>,std::back_insert_iterator<class_std::vector<char,class_std::allocator<char>_>_>_> @ 14fb909f0

/* void __cdecl std::_Seek_wrapped<class std::back_insert_iterator<class std::vector<char,class
   std::allocator<char> > >,class std::back_insert_iterator<class std::vector<char,class
   std::allocator<char> > > >(class std::back_insert_iterator<class std::vector<char,class
   std::allocator<char> > > & __ptr64,class std::back_insert_iterator<class std::vector<char,class
   std::allocator<char> > > && __ptr64) */

void __cdecl
std::
_Seek_wrapped<std::back_insert_iterator<std::vector<char,std::allocator<char>_>_>,std::back_insert_iterator<class_std::vector<char,class_std::allocator<char>_>_>_>
          (back_insert_iterator<std::vector<char,std::allocator<char>_>_> *param_1,
          back_insert_iterator<class_std::vector<char,class_std::allocator<char>_>_> *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// _Uninitialized_move<char*___ptr64,std::allocator<char>_> @ 14fb90a00

/* char * __ptr64 __cdecl std::_Uninitialized_move<char * __ptr64,class std::allocator<char> >(char
   * __ptr64 const,char * __ptr64 const,char * __ptr64,class std::allocator<char> & __ptr64) */

char * __cdecl
std::_Uninitialized_move<char*___ptr64,std::allocator<char>_>
          (char *param_1,char *param_2,char *param_3,allocator<char> *param_4)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return param_3 + ((longlong)param_2 - (longlong)param_1);
}

// addressof<std::vector<char,std::allocator<char>_>_> @ 14fb90a40

/* class std::vector<char,class std::allocator<char> > * __ptr64 __cdecl std::addressof<class
   std::vector<char,class std::allocator<char> > >(class std::vector<char,class std::allocator<char>
   > & __ptr64) */

vector<char,std::allocator<char>_> * __cdecl
std::addressof<std::vector<char,std::allocator<char>_>_>
          (vector<char,class_std::allocator<char>_> *param_1)

{
  return (vector<char,std::allocator<char>_> *)param_1;
}

// back_inserter<std::vector<char,std::allocator<char>_>_> @ 14fb90a50

/* class std::back_insert_iterator<class std::vector<char,class std::allocator<char> > > __cdecl
   std::back_inserter<class std::vector<char,class std::allocator<char> > >(class
   std::vector<char,class std::allocator<char> > & __ptr64) */

vector<char,std::allocator<char>_> * __cdecl
std::back_inserter<std::vector<char,std::allocator<char>_>_>
          (vector<char,std::allocator<char>_> *param_1)

{
  char *in_RDX;
  
  (param_1->_Mypair)._Myval2._Myfirst = in_RDX;
  return param_1;
}

// begin<std::basic_string_view<char,std::char_traits<char>_>_> @ 14fb90a60

/* class std::_String_view_iterator<struct std::char_traits<char> > __cdecl std::begin<class
   std::basic_string_view<char,struct std::char_traits<char> > >(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64) */

_String_view_iterator<std::char_traits<char>_> __cdecl
std::begin<std::basic_string_view<char,std::char_traits<char>_>_>
          (basic_string_view<char,std::char_traits<char>_> *param_1)

{
  undefined8 *in_RDX;
  
  param_1->_Mydata = (char *)*in_RDX;
  return (_String_view_iterator<std::char_traits<char>_>)(char *)param_1;
}

// c_begin<std::basic_string_view<char,std::char_traits<char>_>_const_> @ 14fb90a70

/* class std::_String_view_iterator<struct std::char_traits<char> > __cdecl
   absl::lts_20240722::container_algorithm_internal::c_begin<class
   std::basic_string_view<char,struct std::char_traits<char> > const >(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64) */

_String_view_iterator<std::char_traits<char>_> __cdecl
absl::lts_20240722::container_algorithm_internal::
c_begin<std::basic_string_view<char,std::char_traits<char>_>_const_>
          (basic_string_view<char,std::char_traits<char>_> *param_1)

{
  undefined8 *in_RDX;
  
  param_1->_Mydata = (char *)*in_RDX;
  return (_String_view_iterator<std::char_traits<char>_>)(char *)param_1;
}

// c_copy<std::basic_string_view<char,std::char_traits<char>_>,std::back_insert_iterator<std::vector<char,std::allocator<char>_>_>_> @ 14fb90a80

/* class std::back_insert_iterator<class std::vector<char,class std::allocator<char> > > __cdecl
   absl::lts_20240722::c_copy<class std::basic_string_view<char,struct std::char_traits<char>
   >,class std::back_insert_iterator<class std::vector<char,class std::allocator<char> > > >(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,class
   std::back_insert_iterator<class std::vector<char,class std::allocator<char> > >) */

undefined8 * __cdecl
absl::lts_20240722::
c_copy<std::basic_string_view<char,std::char_traits<char>_>,std::back_insert_iterator<std::vector<char,std::allocator<char>_>_>_>
          (undefined8 *param_1,longlong *param_2,vector<char,std::allocator<char>_> *param_3)

{
  char **ppcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = (char *)*param_2;
  pcVar3 = pcVar4 + param_2[1];
  if (pcVar4 == pcVar3) {
    *param_1 = param_3;
  }
  else {
    do {
      pcVar2 = (param_3->_Mypair)._Myval2._Mylast;
      if (pcVar2 == (param_3->_Mypair)._Myval2._Myend) {
        std::vector<char,std::allocator<char>_>::_Emplace_reallocate<char_const&___ptr64>
                  (param_3,pcVar2,pcVar4);
      }
      else {
        *pcVar2 = *pcVar4;
        ppcVar1 = &(param_3->_Mypair)._Myval2._Mylast;
        *ppcVar1 = *ppcVar1 + 1;
      }
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 != pcVar3);
    *param_1 = param_3;
  }
  return param_1;
}

// c_end<std::basic_string_view<char,std::char_traits<char>_>_const_> @ 14fb90b00

/* class std::_String_view_iterator<struct std::char_traits<char> > __cdecl
   absl::lts_20240722::container_algorithm_internal::c_end<class std::basic_string_view<char,struct
   std::char_traits<char> > const >(class std::basic_string_view<char,struct std::char_traits<char>
   > const & __ptr64) */

_String_view_iterator<std::char_traits<char>_> __cdecl
absl::lts_20240722::container_algorithm_internal::
c_end<std::basic_string_view<char,std::char_traits<char>_>_const_>
          (basic_string_view<char,std::char_traits<char>_> *param_1)

{
  longlong *in_RDX;
  
  param_1->_Mydata = (char *)(in_RDX[1] + *in_RDX);
  return (_String_view_iterator<std::char_traits<char>_>)(char *)param_1;
}

// construct<char,char_const&___ptr64> @ 14fb90b20

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<char>
   >::construct<char,char const & __ptr64>(class std::allocator<char> & __ptr64,char * __ptr64
   const,char const & __ptr64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<char>_>::construct<char,char_const&___ptr64>
          (allocator<char> *param_1,char *param_2,char *param_3)

{
  *param_2 = *param_3;
  return;
}

// construct<char,char> @ 14fb90b30

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<char>
   >::construct<char,char>(class std::allocator<char> & __ptr64,char * __ptr64 const,char &&
   __ptr64) */

void __cdecl
std::_Default_allocator_traits<std::allocator<char>_>::construct<char,char>
          (allocator<char> *param_1,char *param_2,char *param_3)

{
  *param_2 = *param_3;
  return;
}

// construct_at<char,char,0> @ 14fb90b40

/* char * __ptr64 __cdecl std::construct_at<char,char,0>(char * __ptr64 const,char && __ptr64) */

char * __cdecl std::construct_at<char,char,0>(char *param_1,char *param_2)

{
  *param_1 = *param_2;
  return param_1;
}

// copy<std::_String_view_iterator<std::char_traits<char>_>,std::back_insert_iterator<std::vector<char,std::allocator<char>_>_>_> @ 14fb90b50

/* class std::back_insert_iterator<class std::vector<char,class std::allocator<char> > > __cdecl
   std::copy<class std::_String_view_iterator<struct std::char_traits<char> >,class
   std::back_insert_iterator<class std::vector<char,class std::allocator<char> > > >(class
   std::_String_view_iterator<struct std::char_traits<char> >,class
   std::_String_view_iterator<struct std::char_traits<char> >,class std::back_insert_iterator<class
   std::vector<char,class std::allocator<char> > >) */

undefined8 * __cdecl
std::
copy<std::_String_view_iterator<std::char_traits<char>_>,std::back_insert_iterator<std::vector<char,std::allocator<char>_>_>_>
          (undefined8 *param_1,char *param_2,char *param_3,
          vector<char,std::allocator<char>_> *param_4)

{
  char **ppcVar1;
  char *pcVar2;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
  }
  else {
    do {
      pcVar2 = (param_4->_Mypair)._Myval2._Mylast;
      if (pcVar2 == (param_4->_Mypair)._Myval2._Myend) {
        vector<char,std::allocator<char>_>::_Emplace_reallocate<char_const&___ptr64>
                  (param_4,pcVar2,param_2);
      }
      else {
        *pcVar2 = *param_2;
        ppcVar1 = &(param_4->_Mypair)._Myval2._Mylast;
        *ppcVar1 = *ppcVar1 + 1;
      }
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
    *param_1 = param_4;
  }
  return param_1;
}

// end<std::basic_string_view<char,std::char_traits<char>_>_> @ 14fb90bd0

/* class std::_String_view_iterator<struct std::char_traits<char> > __cdecl std::end<class
   std::basic_string_view<char,struct std::char_traits<char> > >(class
   std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64) */

_String_view_iterator<std::char_traits<char>_> __cdecl
std::end<std::basic_string_view<char,std::char_traits<char>_>_>
          (basic_string_view<char,std::char_traits<char>_> *param_1)

{
  longlong *in_RDX;
  
  param_1->_Mydata = (char *)(in_RDX[1] + *in_RDX);
  return (_String_view_iterator<std::char_traits<char>_>)(char *)param_1;
}

// forward<char> @ 14fb90bf0

/* char && __ptr64 __cdecl std::forward<char>(char & __ptr64) */

char * __cdecl std::forward<char>(char *param_1)

{
  return param_1;
}

// forward<std::back_insert_iterator<std::vector<char,std::allocator<char>_>_>_> @ 14fb90c00

/* class std::back_insert_iterator<class std::vector<char,class std::allocator<char> > > && __ptr64
   __cdecl std::forward<class std::back_insert_iterator<class std::vector<char,class
   std::allocator<char> > > >(class std::back_insert_iterator<class std::vector<char,class
   std::allocator<char> > > & __ptr64) */

back_insert_iterator<std::vector<char,std::allocator<char>_>_> * __cdecl
std::forward<std::back_insert_iterator<std::vector<char,std::allocator<char>_>_>_>
          (back_insert_iterator<class_std::vector<char,class_std::allocator<char>_>_> *param_1)

{
  return (back_insert_iterator<std::vector<char,std::allocator<char>_>_> *)param_1;
}

// forward<google::protobuf::json_internal::BufferingGuard> @ 14fb90c10

/* class google::protobuf::json_internal::BufferingGuard && __ptr64 __cdecl std::forward<class
   google::protobuf::json_internal::BufferingGuard>(class
   google::protobuf::json_internal::BufferingGuard & __ptr64) */

BufferingGuard * __cdecl
std::forward<google::protobuf::json_internal::BufferingGuard>(BufferingGuard *param_1)

{
  return param_1;
}

// FormatSpecTemplate<655355,655355,655355> @ 14fb90c20

/* public: __cdecl
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355,655355>::FormatSpecTemplate<655355,655355,655355>(char
   const * __ptr64) __ptr64 */

FormatSpecTemplate<655355,655355,655355> * __thiscall
absl::lts_20240722::str_format_internal::FormatSpecTemplate<655355,655355,655355>::
FormatSpecTemplate<655355,655355,655355>
          (FormatSpecTemplate<655355,655355,655355> *this,char *param_1)

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

// back_insert_iterator<std::vector<char,std::allocator<char>_>_> @ 14fb90c50

/* public: __cdecl std::back_insert_iterator<class std::vector<char,class std::allocator<char> >
   >::back_insert_iterator<class std::vector<char,class std::allocator<char> > >(class
   std::vector<char,class std::allocator<char> > & __ptr64) __ptr64 */

back_insert_iterator<std::vector<char,std::allocator<char>_>_> * __thiscall
std::back_insert_iterator<std::vector<char,std::allocator<char>_>_>::
back_insert_iterator<std::vector<char,std::allocator<char>_>_>
          (back_insert_iterator<std::vector<char,std::allocator<char>_>_> *this,
          vector<char,std::allocator<char>_> *param_1)

{
  *(vector<char,std::allocator<char>_> **)this = param_1;
  return this;
}

// operator= @ 14fb90c60

/* public: class std::back_insert_iterator<class std::vector<char,class std::allocator<char> > > &
   __ptr64 __cdecl std::back_insert_iterator<class std::vector<char,class std::allocator<char> >
   >::operator=(char const & __ptr64) __ptr64 */

back_insert_iterator<class_std::vector<char,class_std::allocator<char>_>_> * __thiscall
std::back_insert_iterator<std::vector<char,std::allocator<char>_>_>::operator=
          (back_insert_iterator<std::vector<char,std::allocator<char>_>_> *this,char *param_1)

{
  char **ppcVar1;
  vector<char,std::allocator<char>_> *this_00;
  char *pcVar2;
  
  this_00 = *(vector<char,std::allocator<char>_> **)this;
  pcVar2 = (this_00->_Mypair)._Myval2._Mylast;
  if (pcVar2 != (this_00->_Mypair)._Myval2._Myend) {
    *pcVar2 = *param_1;
    ppcVar1 = &(this_00->_Mypair)._Myval2._Mylast;
    *ppcVar1 = *ppcVar1 + 1;
    return (back_insert_iterator<class_std::vector<char,class_std::allocator<char>_>_> *)this;
  }
  vector<char,std::allocator<char>_>::_Emplace_reallocate<char_const&___ptr64>
            (this_00,pcVar2,param_1);
  return (back_insert_iterator<class_std::vector<char,class_std::allocator<char>_>_> *)this;
}

// operator* @ 14fb90ca0

/* public: class std::back_insert_iterator<class std::vector<char,class std::allocator<char> > > &
   __ptr64 __cdecl std::back_insert_iterator<class std::vector<char,class std::allocator<char> >
   >::operator*(void) __ptr64 */

back_insert_iterator<class_std::vector<char,class_std::allocator<char>_>_> * __thiscall
std::back_insert_iterator<std::vector<char,std::allocator<char>_>_>::operator*
          (back_insert_iterator<std::vector<char,std::allocator<char>_>_> *this)

{
  return (back_insert_iterator<class_std::vector<char,class_std::allocator<char>_>_> *)this;
}

// operator++ @ 14fb90cb0

/* public: class std::back_insert_iterator<class std::vector<char,class std::allocator<char> > > &
   __ptr64 __cdecl std::back_insert_iterator<class std::vector<char,class std::allocator<char> >
   >::operator++(void) __ptr64 */

back_insert_iterator<class_std::vector<char,class_std::allocator<char>_>_> * __thiscall
std::back_insert_iterator<std::vector<char,std::allocator<char>_>_>::operator++
          (back_insert_iterator<std::vector<char,std::allocator<char>_>_> *this)

{
  return (back_insert_iterator<class_std::vector<char,class_std::allocator<char>_>_> *)this;
}

// Advance @ 14fb90cc0

/* public: class absl::lts_20240722::Status __cdecl
   google::protobuf::json_internal::ZeroCopyBufferedStream::Advance(unsigned __int64) __ptr64 */

Status __thiscall
google::protobuf::json_internal::ZeroCopyBufferedStream::Advance
          (ZeroCopyBufferedStream *this,__uint64 param_1)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong in_R8;
  
  while( true ) {
    if (in_R8 == 0) {
      *(undefined8 *)param_1 = 1;
      return (Status)param_1;
    }
    uVar6 = *(ulonglong *)(this + 0x10);
    uVar2 = *(ulonglong *)(this + 0x38);
    if (this[0x30] != (ZeroCopyBufferedStream)0x0) {
      uVar2 = uVar2 - *(longlong *)(this + 0x40);
      uVar6 = *(longlong *)(this + 0x20) - *(longlong *)(this + 0x18);
    }
    if (uVar6 < uVar2) break;
    lVar3 = -1;
    if (uVar6 - uVar2 != -1) {
      lVar3 = uVar6 - uVar2;
    }
    if ((lVar3 == 0) && (bVar1 = ReadChunk(this), !bVar1)) {
      absl::lts_20240722::InvalidArgumentError
                ((basic_string_view<char,std::char_traits<char>_> *)param_1);
      return (Status)param_1;
    }
    uVar6 = *(ulonglong *)(this + 0x10);
    uVar2 = *(ulonglong *)(this + 0x38);
    uVar4 = uVar2;
    if (this[0x30] != (ZeroCopyBufferedStream)0x0) {
      uVar6 = *(longlong *)(this + 0x20) - *(longlong *)(this + 0x18);
      uVar4 = uVar2 - *(longlong *)(this + 0x40);
    }
    if (uVar6 < uVar4) break;
    uVar5 = 0xffffffffffffffff;
    if (uVar6 - uVar4 != 0xffffffffffffffff) {
      uVar5 = uVar6 - uVar4;
    }
    uVar6 = in_R8;
    if (uVar5 < in_R8) {
      uVar6 = uVar5;
    }
    *(ulonglong *)(this + 0x38) = uVar2 + uVar6;
    in_R8 = in_R8 - uVar6;
  }
                    /* WARNING: Subroutine does not return */
  std::basic_string_view<char,std::char_traits<char>_>::_Xran();
}

// BufferAtLeast @ 14fb90e20

/* public: class absl::lts_20240722::StatusOr<class google::protobuf::json_internal::BufferingGuard>
   __cdecl google::protobuf::json_internal::ZeroCopyBufferedStream::BufferAtLeast(unsigned __int64)
   __ptr64 */

__uint64 __thiscall
google::protobuf::json_internal::ZeroCopyBufferedStream::BufferAtLeast
          (ZeroCopyBufferedStream *this,__uint64 param_1)

{
  int iVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  Status SVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong in_R8;
  ulonglong uVar10;
  ZeroCopyBufferedStream *local_68;
  basic_string_view<char,std::char_traits<char>_> local_40;
  
  lVar9 = 0;
  local_68 = (ZeroCopyBufferedStream *)0x0;
  local_40._Mysize = param_1;
  do {
    uVar10 = *(ulonglong *)(this + 0x38);
    uVar8 = *(ulonglong *)(this + 0x10);
    uVar3 = uVar10;
    if (this[0x30] != (ZeroCopyBufferedStream)0x0) {
      uVar8 = *(longlong *)(this + 0x20) - *(longlong *)(this + 0x18);
      uVar3 = uVar10 - *(longlong *)(this + 0x40);
    }
    if (uVar8 < uVar3) {
LAB_14fb91286:
                    /* WARNING: Subroutine does not return */
      std::basic_string_view<char,std::char_traits<char>_>::_Xran();
    }
    uVar4 = 0xffffffffffffffff;
    if (uVar8 - uVar3 != 0xffffffffffffffff) {
      uVar4 = uVar8 - uVar3;
    }
    if (in_R8 <= uVar4) {
      if ((this == (ZeroCopyBufferedStream *)0x0) ||
         (iVar1 = *(int *)(this + 0x4c), *(int *)(this + 0x4c) = iVar1 + 1, iVar1 != 0)) {
        *(ZeroCopyBufferedStream **)(param_1 + 8) = this;
        if (this == (ZeroCopyBufferedStream *)0x0) goto LAB_14fb911bd;
      }
      else {
        *(ulonglong *)(this + 0x40) = uVar10;
        *(ZeroCopyBufferedStream **)(param_1 + 8) = this;
      }
      iVar1 = *(int *)(this + 0x4c);
      *(int *)(this + 0x4c) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x38);
      }
LAB_14fb911bd:
      *(undefined8 *)param_1 = 1;
      if ((((this != (ZeroCopyBufferedStream *)0x0) &&
           (*(int *)(this + 0x4c) = *(int *)(this + 0x4c) + -1, *(int *)(this + 0x4c) < 1)) &&
          (this[0x30] != (ZeroCopyBufferedStream)0x0)) &&
         (this[0x48] == (ZeroCopyBufferedStream)0x0)) {
        lVar5 = *(longlong *)(this + 0x18);
        uVar10 = ((*(longlong *)(this + 0x20) - lVar5) + *(longlong *)(this + 0x40)) -
                 *(longlong *)(this + 0x10);
        lVar6 = lVar9;
        if (uVar10 < *(ulonglong *)(this + 0x38)) {
          lVar6 = *(ulonglong *)(this + 0x38) - uVar10;
        }
        *(longlong *)(this + 0x38) = lVar6;
        if (lVar5 != *(longlong *)(this + 0x20)) {
          *(longlong *)(this + 0x20) = lVar5;
        }
        this[0x30] = (ZeroCopyBufferedStream)0x0;
      }
      if (local_68 == (ZeroCopyBufferedStream *)0x0) {
        return param_1;
      }
      *(int *)(local_68 + 0x4c) = *(int *)(local_68 + 0x4c) + -1;
      if (0 < *(int *)(local_68 + 0x4c)) {
        return param_1;
      }
      if (local_68[0x30] == (ZeroCopyBufferedStream)0x0) {
        return param_1;
      }
      if (local_68[0x48] != (ZeroCopyBufferedStream)0x0) {
        return param_1;
      }
      lVar5 = *(longlong *)(local_68 + 0x18);
      uVar10 = ((*(longlong *)(local_68 + 0x20) - lVar5) + *(longlong *)(local_68 + 0x40)) -
               *(longlong *)(local_68 + 0x10);
      if (uVar10 < *(ulonglong *)(local_68 + 0x38)) {
        lVar9 = *(longlong *)(local_68 + 0x38) - uVar10;
      }
      *(longlong *)(local_68 + 0x38) = lVar9;
      if (lVar5 != *(longlong *)(local_68 + 0x20)) {
        *(longlong *)(local_68 + 0x20) = lVar5;
      }
      local_68[0x30] = (ZeroCopyBufferedStream)0x0;
      return param_1;
    }
    uVar8 = *(ulonglong *)(this + 0x10);
    if (this[0x30] != (ZeroCopyBufferedStream)0x0) {
      uVar10 = uVar10 - *(longlong *)(this + 0x40);
      uVar8 = *(longlong *)(this + 0x20) - *(longlong *)(this + 0x18);
    }
    if (uVar8 < uVar10) goto LAB_14fb91286;
    lVar5 = -1;
    if (uVar8 - uVar10 != -1) {
      lVar5 = uVar8 - uVar10;
    }
    if (lVar5 != 0) {
      if ((this != (ZeroCopyBufferedStream *)0x0) &&
         (iVar1 = *(int *)(this + 0x4c), *(int *)(this + 0x4c) = iVar1 + 1, iVar1 == 0)) {
        *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x38);
      }
      if (((local_68 != (ZeroCopyBufferedStream *)0x0) &&
          (*(int *)(local_68 + 0x4c) = *(int *)(local_68 + 0x4c) + -1, *(int *)(local_68 + 0x4c) < 1
          )) && ((local_68[0x30] != (ZeroCopyBufferedStream)0x0 &&
                 (local_68[0x48] == (ZeroCopyBufferedStream)0x0)))) {
        lVar5 = *(longlong *)(local_68 + 0x18);
        uVar10 = ((*(longlong *)(local_68 + 0x20) - lVar5) + *(longlong *)(local_68 + 0x40)) -
                 *(longlong *)(local_68 + 0x10);
        lVar6 = lVar9;
        if (uVar10 < *(ulonglong *)(local_68 + 0x38)) {
          lVar6 = *(ulonglong *)(local_68 + 0x38) - uVar10;
        }
        *(longlong *)(local_68 + 0x38) = lVar6;
        if (lVar5 != *(longlong *)(local_68 + 0x20)) {
          *(longlong *)(local_68 + 0x20) = lVar5;
        }
        local_68[0x30] = (ZeroCopyBufferedStream)0x0;
      }
      iVar1 = *(int *)(this + 0x4c);
      if (iVar1 == 0) {
        *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x38);
      }
      *(int *)(this + 0x4c) = iVar1;
      local_68 = this;
      if (((iVar1 < 1) && (this[0x30] != (ZeroCopyBufferedStream)0x0)) &&
         (this[0x48] == (ZeroCopyBufferedStream)0x0)) {
        lVar5 = *(longlong *)(this + 0x18);
        uVar10 = ((*(longlong *)(this + 0x20) - lVar5) + *(longlong *)(this + 0x40)) -
                 *(longlong *)(this + 0x10);
        lVar6 = lVar9;
        if (uVar10 < *(ulonglong *)(this + 0x38)) {
          lVar6 = *(ulonglong *)(this + 0x38) - uVar10;
        }
        *(longlong *)(this + 0x38) = lVar6;
        if (lVar5 != *(longlong *)(this + 0x20)) {
          *(longlong *)(this + 0x20) = lVar5;
        }
        this[0x30] = (ZeroCopyBufferedStream)0x0;
      }
    }
    bVar2 = ReadChunk(this);
    if (!bVar2) {
      SVar7 = absl::lts_20240722::InvalidArgumentError(&local_40);
      *(undefined8 *)param_1 = *(undefined8 *)SVar7.rep_;
      *(undefined8 *)SVar7.rep_ = 0x37;
      if (*(longlong *)param_1 == 1) {
        absl::lts_20240722::internal_statusor::Helper::HandleInvalidStatusCtorArg((Status *)param_1)
        ;
      }
      if (((ulonglong)local_40._Mydata & 1) == 0) {
        absl::lts_20240722::status_internal::StatusRep::Unref((StatusRep *)local_40._Mydata);
      }
      if (((local_68 != (ZeroCopyBufferedStream *)0x0) &&
          (*(int *)(local_68 + 0x4c) = *(int *)(local_68 + 0x4c) + -1, *(int *)(local_68 + 0x4c) < 1
          )) && ((local_68[0x30] != (ZeroCopyBufferedStream)0x0 &&
                 (local_68[0x48] == (ZeroCopyBufferedStream)0x0)))) {
        lVar5 = *(longlong *)(local_68 + 0x18);
        uVar10 = ((*(longlong *)(local_68 + 0x20) - lVar5) + *(longlong *)(local_68 + 0x40)) -
                 *(longlong *)(local_68 + 0x10);
        if (uVar10 < *(ulonglong *)(local_68 + 0x38)) {
          lVar9 = *(longlong *)(local_68 + 0x38) - uVar10;
        }
        *(longlong *)(local_68 + 0x38) = lVar9;
        if (lVar5 != *(longlong *)(local_68 + 0x20)) {
          *(longlong *)(local_68 + 0x20) = lVar5;
        }
        local_68[0x30] = (ZeroCopyBufferedStream)0x0;
      }
      return param_1;
    }
    if ((this != (ZeroCopyBufferedStream *)0x0) &&
       (iVar1 = *(int *)(this + 0x4c), *(int *)(this + 0x4c) = iVar1 + 1, iVar1 == 0)) {
      *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x38);
    }
    if ((((local_68 != (ZeroCopyBufferedStream *)0x0) &&
         (*(int *)(local_68 + 0x4c) = *(int *)(local_68 + 0x4c) + -1, *(int *)(local_68 + 0x4c) < 1)
         ) && (local_68[0x30] != (ZeroCopyBufferedStream)0x0)) &&
       (local_68[0x48] == (ZeroCopyBufferedStream)0x0)) {
      lVar5 = *(longlong *)(local_68 + 0x18);
      uVar10 = ((*(longlong *)(local_68 + 0x20) - lVar5) + *(longlong *)(local_68 + 0x40)) -
               *(longlong *)(local_68 + 0x10);
      lVar6 = lVar9;
      if (uVar10 < *(ulonglong *)(local_68 + 0x38)) {
        lVar6 = *(ulonglong *)(local_68 + 0x38) - uVar10;
      }
      *(longlong *)(local_68 + 0x38) = lVar6;
      if (lVar5 != *(longlong *)(local_68 + 0x20)) {
        *(longlong *)(local_68 + 0x20) = lVar5;
      }
      local_68[0x30] = (ZeroCopyBufferedStream)0x0;
    }
    iVar1 = *(int *)(this + 0x4c);
    if (iVar1 == 0) {
      *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x38);
    }
    *(int *)(this + 0x4c) = iVar1;
    local_68 = this;
    if (((iVar1 < 1) && (this[0x30] != (ZeroCopyBufferedStream)0x0)) &&
       (this[0x48] == (ZeroCopyBufferedStream)0x0)) {
      lVar5 = *(longlong *)(this + 0x18);
      uVar10 = ((*(longlong *)(this + 0x20) - lVar5) + *(longlong *)(this + 0x40)) -
               *(longlong *)(this + 0x10);
      lVar6 = lVar9;
      if (uVar10 < *(ulonglong *)(this + 0x38)) {
        lVar6 = *(ulonglong *)(this + 0x38) - uVar10;
      }
      *(longlong *)(this + 0x38) = lVar6;
      if (lVar5 != *(longlong *)(this + 0x20)) {
        *(longlong *)(this + 0x20) = lVar5;
      }
      this[0x30] = (ZeroCopyBufferedStream)0x0;
    }
  } while( true );
}

// DownRefBuffer @ 14fb912a0

/* private: void __cdecl
   google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer(void) __ptr64 */

void __thiscall
google::protobuf::json_internal::ZeroCopyBufferedStream::DownRefBuffer(ZeroCopyBufferedStream *this)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + -1;
  if (((*(int *)(this + 0x4c) < 1) && (this[0x30] != (ZeroCopyBufferedStream)0x0)) &&
     (this[0x48] == (ZeroCopyBufferedStream)0x0)) {
    lVar1 = *(longlong *)(this + 0x18);
    uVar2 = ((*(longlong *)(this + 0x40) - *(longlong *)(this + 0x10)) + *(longlong *)(this + 0x20))
            - lVar1;
    lVar3 = 0;
    if (uVar2 < *(ulonglong *)(this + 0x38)) {
      lVar3 = *(longlong *)(this + 0x38) - uVar2;
    }
    *(longlong *)(this + 0x38) = lVar3;
    if (lVar1 != *(longlong *)(this + 0x20)) {
      *(longlong *)(this + 0x20) = lVar1;
    }
    this[0x30] = (ZeroCopyBufferedStream)0x0;
  }
  return;
}

// EnsureNotOk @ 14fb91300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: void __cdecl absl::lts_20240722::internal_statusor::StatusOrData<class
   google::protobuf::json_internal::BufferingGuard>::EnsureNotOk(void) __ptr64 */

void __thiscall
absl::lts_20240722::internal_statusor::StatusOrData<google::protobuf::json_internal::BufferingGuard>
::EnsureNotOk(StatusOrData<google::protobuf::json_internal::BufferingGuard> *this)

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

// ReadChunk @ 14fb91320

/* private: bool __cdecl google::protobuf::json_internal::ZeroCopyBufferedStream::ReadChunk(void)
   __ptr64 */

bool __thiscall
google::protobuf::json_internal::ZeroCopyBufferedStream::ReadChunk(ZeroCopyBufferedStream *this)

{
  ulonglong uVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar8;
  int local_res8 [2];
  char *local_res10;
  longlong lVar7;
  
  if (this[0x48] != (ZeroCopyBufferedStream)0x0) {
    return false;
  }
  if ((0 < *(int *)(this + 0x4c)) && (this[0x30] == (ZeroCopyBufferedStream)0x0)) {
    uVar1 = *(ulonglong *)(this + 0x40);
    if (*(ulonglong *)(this + 0x10) < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::basic_string_view<char,std::char_traits<char>_>::_Xran();
    }
    lVar5 = *(ulonglong *)(this + 0x10) - uVar1;
    pcVar8 = (char *)(*(longlong *)(this + 8) + uVar1);
    lVar7 = -1;
    if (lVar5 != -1) {
      lVar7 = lVar5;
    }
    pcVar6 = pcVar8 + lVar7;
    for (; pcVar8 != pcVar6; pcVar8 = pcVar8 + 1) {
      pcVar2 = *(char **)(this + 0x20);
      if (pcVar2 == *(char **)(this + 0x28)) {
        std::vector<char,std::allocator<char>_>::_Emplace_reallocate<char_const&___ptr64>
                  ((vector<char,std::allocator<char>_> *)(this + 0x18),pcVar2,pcVar8);
      }
      else {
        *pcVar2 = *pcVar8;
        *(longlong *)(this + 0x20) = *(longlong *)(this + 0x20) + 1;
      }
    }
    this[0x30] = (ZeroCopyBufferedStream)0x1;
  }
  cVar3 = (**(code **)(**(longlong **)this + 8))(*(longlong **)this,&local_res10,local_res8);
  if (cVar3 == '\0') {
    this[0x48] = (ZeroCopyBufferedStream)0x1;
    bVar4 = false;
  }
  else {
    *(char **)(this + 8) = local_res10;
    *(longlong *)(this + 0x10) = (longlong)local_res8[0];
    if (this[0x30] == (ZeroCopyBufferedStream)0x0) {
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined8 *)(this + 0x40) = 0;
    }
    else {
      for (pcVar8 = local_res10; pcVar8 != local_res10 + local_res8[0]; pcVar8 = pcVar8 + 1) {
        pcVar6 = *(char **)(this + 0x20);
        if (pcVar6 == *(char **)(this + 0x28)) {
          std::vector<char,std::allocator<char>_>::_Emplace_reallocate<char_const&___ptr64>
                    ((vector<char,std::allocator<char>_> *)(this + 0x18),pcVar6,pcVar8);
        }
        else {
          *pcVar6 = *pcVar8;
          *(longlong *)(this + 0x20) = *(longlong *)(this + 0x20) + 1;
        }
      }
    }
    bVar4 = true;
  }
  return bVar4;
}

// _Calculate_growth @ 14fb91450

/* private: unsigned __int64 __cdecl std::vector<char,class std::allocator<char>
   >::_Calculate_growth(unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::vector<char,std::allocator<char>_>::_Calculate_growth
          (vector<char,std::allocator<char>_> *this,__uint64 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)(this->_Mypair)._Myval2._Myfirst;
  uVar1 = 0x7fffffffffffffff;
  if ((uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1)) &&
     (uVar1 = (uVar2 >> 1) + uVar2, uVar1 < param_1)) {
    uVar1 = param_1;
  }
  return uVar1;
}

// _Orphan_range @ 14fb91490

/* private: void __cdecl std::vector<char,class std::allocator<char> >::_Orphan_range(char *
   __ptr64,char * __ptr64)const __ptr64 */

void __thiscall
std::vector<char,std::allocator<char>_>::_Orphan_range
          (vector<char,std::allocator<char>_> *this,char *param_1,char *param_2)

{
  return;
}

// capacity @ 14fb914a0

/* public: unsigned __int64 __cdecl std::vector<char,class std::allocator<char>
   >::capacity(void)const __ptr64 */

__uint64 __thiscall
std::vector<char,std::allocator<char>_>::capacity(vector<char,std::allocator<char>_> *this)

{
  return (longlong)(this->_Mypair)._Myval2._Myend - (longlong)(this->_Mypair)._Myval2._Myfirst;
}

// clear @ 14fb914b0

/* public: void __cdecl std::vector<char,class std::allocator<char> >::clear(void) __ptr64 */

void __thiscall
std::vector<char,std::allocator<char>_>::clear(vector<char,std::allocator<char>_> *this)

{
  char *pcVar1;
  
  pcVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pcVar1 != (this->_Mypair)._Myval2._Mylast) {
    (this->_Mypair)._Myval2._Mylast = pcVar1;
  }
  return;
}

// push_back @ 14fb914d0

/* public: void __cdecl std::vector<char,class std::allocator<char> >::push_back(char const &
   __ptr64) __ptr64 */

void __thiscall
std::vector<char,std::allocator<char>_>::push_back
          (vector<char,std::allocator<char>_> *this,char *param_1)

{
  char **ppcVar1;
  char *pcVar2;
  
  pcVar2 = (this->_Mypair)._Myval2._Mylast;
  if (pcVar2 != (this->_Mypair)._Myval2._Myend) {
    *pcVar2 = *param_1;
    ppcVar1 = &(this->_Mypair)._Myval2._Mylast;
    *ppcVar1 = *ppcVar1 + 1;
    return;
  }
  _Emplace_reallocate<char_const&___ptr64>(this,pcVar2,param_1);
  return;
}

// FUN_1502ad420 @ 1502ad420

void FUN_1502ad420(undefined8 param_1,longlong param_2)

{
  std::allocator<char>::deallocate
            (*(allocator<char> **)(param_2 + 0x60),*(char **)(param_2 + 0x78),
             *(ulong64 *)(param_2 + 0x68));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


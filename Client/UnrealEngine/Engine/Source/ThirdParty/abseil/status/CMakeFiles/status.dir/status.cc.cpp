// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 82

// NoDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_><0> @ 14f8ed830

/* public: __cdecl absl::lts_20240722::NoDestructor<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::NoDestructor<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > ><0>(void)
   __ptr64 */

NoDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> * __thiscall
absl::lts_20240722::
NoDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
NoDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_><0>
          (NoDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this
          )

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0xf;
  *this = (NoDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>)0x0;
  return this;
}

// PlacementImpl<> @ 14f8ed860

/* public: __cdecl absl::lts_20240722::NoDestructor<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::PlacementImpl::PlacementImpl<>(void)
   __ptr64 */

PlacementImpl * __thiscall
absl::lts_20240722::
NoDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::PlacementImpl::
PlacementImpl<>(PlacementImpl *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0xf;
  *this = (PlacementImpl)0x0;
  return this;
}

// NoDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_><char_const_(&___ptr64)[28],0> @ 14f8ed890

/* public: __cdecl absl::lts_20240722::NoDestructor<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::NoDestructor<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > ><char const (&
   __ptr64)[28],0>(char const (& __ptr64)[28]) __ptr64 */

NoDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> * __thiscall
absl::lts_20240722::
NoDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
NoDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_><char_const_(&___ptr64)[28],0>
          (NoDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this
          ,char *param_1)

{
  ulong64 uVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (param_1[uVar1] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,param_1,uVar1);
  return this;
}

// PlacementImpl<char_const_(&___ptr64)[28]> @ 14f8ed8d0

/* public: __cdecl absl::lts_20240722::NoDestructor<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::PlacementImpl::PlacementImpl<char const (&
   __ptr64)[28]>(char const (& __ptr64)[28]) __ptr64 */

PlacementImpl * __thiscall
absl::lts_20240722::
NoDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::PlacementImpl::
PlacementImpl<char_const_(&___ptr64)[28]>(PlacementImpl *this,char *param_1)

{
  ulong64 uVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (param_1[uVar1] != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,param_1,uVar1);
  return this;
}

// unique_ptr<absl::lts_20240722::InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>,std::default_delete<absl::lts_20240722::InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>_>_><std::default_delete<absl::lts_20240722::InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>_>,0> @ 14f8ed910

/* public: __cdecl std::unique_ptr<class absl::lts_20240722::InlinedVector<struct
   absl::lts_20240722::status_internal::Payload,1,class std::allocator<struct
   absl::lts_20240722::status_internal::Payload> >,struct std::default_delete<class
   absl::lts_20240722::InlinedVector<struct absl::lts_20240722::status_internal::Payload,1,class
   std::allocator<struct absl::lts_20240722::status_internal::Payload> > > >::unique_ptr<class
   absl::lts_20240722::InlinedVector<struct absl::lts_20240722::status_internal::Payload,1,class
   std::allocator<struct absl::lts_20240722::status_internal::Payload> >,struct
   std::default_delete<class absl::lts_20240722::InlinedVector<struct
   absl::lts_20240722::status_internal::Payload,1,class std::allocator<struct
   absl::lts_20240722::status_internal::Payload> > > ><struct std::default_delete<class
   absl::lts_20240722::InlinedVector<struct absl::lts_20240722::status_internal::Payload,1,class
   std::allocator<struct absl::lts_20240722::status_internal::Payload> > >,0>(std::nullptr_t)
   __ptr64 */

unique_ptr<absl::lts_20240722::InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>,std::default_delete<absl::lts_20240722::InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>_>_>
* __thiscall
std::
unique_ptr<absl::lts_20240722::InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>,std::default_delete<absl::lts_20240722::InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>_>_>
::
unique_ptr<absl::lts_20240722::InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>,std::default_delete<absl::lts_20240722::InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>_>_><std::default_delete<absl::lts_20240722::InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>_>,0>
          (unique_ptr<absl::lts_20240722::InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>,std::default_delete<absl::lts_20240722::InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>_>_>
           *this)

{
  (this->_Mypair)._Myval2 =
       (InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>
        *)0x0;
  return this;
}

// Launder<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_> @ 14f8ed930

/* private: static class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const * __ptr64 __cdecl absl::lts_20240722::NoDestructor<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   >::PlacementImpl::Launder<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const >(class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::
NoDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::PlacementImpl::
Launder<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1;
}

// forward<char_const_(&___ptr64)[28]> @ 14f8ed940

/* char const (& __ptr64 __cdecl std::forward<char const (& __ptr64)[28]>(char const (&
   __ptr64)[28]))[28] */

char * __cdecl std::forward<char_const_(&___ptr64)[28]>(char *param_1)

{
  return param_1;
}

// launder<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_> @ 14f8ed950

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const *
   __ptr64 __cdecl std::launder<class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const >(class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
std::launder<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_1;
}

// Status @ 14f8ed960

/* WARNING: Removing unreachable block (ram,0x00014f8eda09) */
/* public: __cdecl absl::lts_20240722::Status::Status(enum absl::lts_20240722::StatusCode,class
   std::basic_string_view<char,struct std::char_traits<char> >) __ptr64 */

Status * __thiscall
absl::lts_20240722::Status::Status
          (Status *this,StatusCode param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  undefined4 *puVar1;
  
  this->rep_ = (longlong)(int)param_1 * 4 + 1;
  if ((param_1 != kOk) && (param_2->_Mysize != 0)) {
    puVar1 = ::operator_new(0x30);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 1;
      puVar1[1] = param_1;
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar1 + 2))->_Mypair).
      _Myval2._Bx._Ptr = (char *)0x0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(puVar1 + 2),
                 param_2->_Mydata,param_2->_Mysize);
      *(undefined8 *)(puVar1 + 10) = 0;
    }
    this->rep_ = (ulong64)puVar1;
  }
  return this;
}

// ~Status @ 14f8eda40

/* public: __cdecl absl::lts_20240722::Status::~Status(void) __ptr64 */

void __thiscall absl::lts_20240722::Status::~Status(Status *this)

{
  if (((ulonglong)this->rep_ & 1) == 0) {
    status_internal::StatusRep::Unref((StatusRep *)this->rep_);
  }
  return;
}

// operator<< @ 14f8eda60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "StatusToStringMode": Some values do not have unique names */
/* class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   absl::lts_20240722::operator<<(class std::basic_ostream<char,struct std::char_traits<char> > &
   __ptr64,class absl::lts_20240722::Status const & __ptr64) */

basic_ostream<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::operator<<
          (basic_ostream<char,struct_std::char_traits<char>_> *param_1,Status *param_2)

{
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  undefined8 uVar3;
  ulong64 uVar4;
  undefined1 auStack_58 [32];
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pbVar2 = Status::ToString(param_2,(basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)&local_38,kWithEverything);
  p_Var1 = &pbVar2->_Mypair;
  if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
    pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (pbVar2->_Mypair)._Myval2._Bx._Ptr;
  }
  std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
            ((basic_ostream<char,std::char_traits<char>_> *)param_1,(char *)pbVar2,
             (p_Var1->_Myval2)._Mysize);
  if (0xf < local_20) {
    uVar4 = local_20 + 1;
    uVar3 = local_38._Ptr;
    if (0xfff < uVar4) {
      uVar4 = local_20 + 0x28;
      uVar3 = *(undefined8 *)(local_38._Ptr + -8);
      if ((char *)0x1f < local_38._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar3,uVar4);
  }
  return (basic_ostream<char,std::char_traits<char>_> *)param_1;
}

// operator<< @ 14f8edb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_ostream<char,struct std::char_traits<char> > & __ptr64 __cdecl
   absl::lts_20240722::operator<<(class std::basic_ostream<char,struct std::char_traits<char> > &
   __ptr64,enum absl::lts_20240722::StatusCode) */

basic_ostream<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::operator<<
          (basic_ostream<char,struct_std::char_traits<char>_> *param_1,StatusCode param_2)

{
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  undefined1 auStack_58 [32];
  _Bxty local_38;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pbVar2 = StatusCodeToString((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              &local_38,param_2);
  p_Var1 = &pbVar2->_Mypair;
  if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
    pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (pbVar2->_Mypair)._Myval2._Bx._Ptr;
  }
  pbVar3 = std::_Insert_string<char,std::char_traits<char>,unsigned___int64>
                     ((basic_ostream<char,std::char_traits<char>_> *)param_1,(char *)pbVar2,
                      (p_Var1->_Myval2)._Mysize);
  if (0xf < local_20) {
    uVar5 = local_20 + 1;
    uVar4 = local_38._Ptr;
    if (0xfff < uVar5) {
      uVar5 = local_20 + 0x28;
      uVar4 = *(undefined8 *)(local_38._Ptr + -8);
      if ((char *)0x1f < local_38._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar4,uVar5);
  }
  return pbVar3;
}

// AbortedError @ 14f8edbb0

/* WARNING: Removing unreachable block (ram,0x00014f8edc3d) */
/* class absl::lts_20240722::Status __cdecl absl::lts_20240722::AbortedError(class
   std::basic_string_view<char,struct std::char_traits<char> >) */

Status __cdecl
absl::lts_20240722::AbortedError(basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  undefined8 *in_RDX;
  basic_string_view<char,std::char_traits<char>_> *local_res8;
  char *local_res10;
  basic_string_view<char,std::char_traits<char>_> **local_res18;
  
  param_1->_Mydata = (char *)0x29;
  if (in_RDX[1] != 0) {
    local_res8 = param_1;
    pcVar1 = ::operator_new(0x30);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else {
      local_res8 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
      local_res18 = &local_res8;
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\n';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8))->_Mypair).
      _Myval2._Bx._Ptr = (char *)0x0;
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      local_res10 = pcVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8),
                 (char *)*in_RDX,in_RDX[1]);
      *(basic_string_view<char,std::char_traits<char>_> **)(pcVar1 + 0x28) = local_res8;
    }
    param_1->_Mydata = pcVar1;
  }
  return (Status)(ulong64)param_1;
}

// AlreadyExistsError @ 14f8edc70

/* WARNING: Removing unreachable block (ram,0x00014f8edcfd) */
/* class absl::lts_20240722::Status __cdecl absl::lts_20240722::AlreadyExistsError(class
   std::basic_string_view<char,struct std::char_traits<char> >) */

Status __cdecl
absl::lts_20240722::AlreadyExistsError(basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  undefined8 *in_RDX;
  basic_string_view<char,std::char_traits<char>_> *local_res8;
  char *local_res10;
  basic_string_view<char,std::char_traits<char>_> **local_res18;
  
  param_1->_Mydata = (char *)0x19;
  if (in_RDX[1] != 0) {
    local_res8 = param_1;
    pcVar1 = ::operator_new(0x30);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else {
      local_res8 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
      local_res18 = &local_res8;
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\x06';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8))->_Mypair).
      _Myval2._Bx._Ptr = (char *)0x0;
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      local_res10 = pcVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8),
                 (char *)*in_RDX,in_RDX[1]);
      *(basic_string_view<char,std::char_traits<char>_> **)(pcVar1 + 0x28) = local_res8;
    }
    param_1->_Mydata = pcVar1;
  }
  return (Status)(ulong64)param_1;
}

// CancelledError @ 14f8edd30

/* WARNING: Removing unreachable block (ram,0x00014f8eddbd) */
/* class absl::lts_20240722::Status __cdecl absl::lts_20240722::CancelledError(class
   std::basic_string_view<char,struct std::char_traits<char> >) */

Status __cdecl
absl::lts_20240722::CancelledError(basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  undefined8 *in_RDX;
  basic_string_view<char,std::char_traits<char>_> *local_res8;
  char *local_res10;
  basic_string_view<char,std::char_traits<char>_> **local_res18;
  
  param_1->_Mydata = (char *)0x5;
  if (in_RDX[1] != 0) {
    local_res8 = param_1;
    pcVar1 = ::operator_new(0x30);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else {
      local_res8 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
      local_res18 = &local_res8;
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\x01';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8))->_Mypair).
      _Myval2._Bx._Ptr = (char *)0x0;
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      local_res10 = pcVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8),
                 (char *)*in_RDX,in_RDX[1]);
      *(basic_string_view<char,std::char_traits<char>_> **)(pcVar1 + 0x28) = local_res8;
    }
    param_1->_Mydata = pcVar1;
  }
  return (Status)(ulong64)param_1;
}

// DataLossError @ 14f8eddf0

/* WARNING: Removing unreachable block (ram,0x00014f8ede7d) */
/* class absl::lts_20240722::Status __cdecl absl::lts_20240722::DataLossError(class
   std::basic_string_view<char,struct std::char_traits<char> >) */

Status __cdecl
absl::lts_20240722::DataLossError(basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  undefined8 *in_RDX;
  basic_string_view<char,std::char_traits<char>_> *local_res8;
  char *local_res10;
  basic_string_view<char,std::char_traits<char>_> **local_res18;
  
  param_1->_Mydata = (char *)0x3d;
  if (in_RDX[1] != 0) {
    local_res8 = param_1;
    pcVar1 = ::operator_new(0x30);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else {
      local_res8 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
      local_res18 = &local_res8;
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\x0f';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8))->_Mypair).
      _Myval2._Bx._Ptr = (char *)0x0;
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      local_res10 = pcVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8),
                 (char *)*in_RDX,in_RDX[1]);
      *(basic_string_view<char,std::char_traits<char>_> **)(pcVar1 + 0x28) = local_res8;
    }
    param_1->_Mydata = pcVar1;
  }
  return (Status)(ulong64)param_1;
}

// DeadlineExceededError @ 14f8edeb0

/* WARNING: Removing unreachable block (ram,0x00014f8edf3d) */
/* class absl::lts_20240722::Status __cdecl absl::lts_20240722::DeadlineExceededError(class
   std::basic_string_view<char,struct std::char_traits<char> >) */

Status __cdecl
absl::lts_20240722::DeadlineExceededError(basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  undefined8 *in_RDX;
  basic_string_view<char,std::char_traits<char>_> *local_res8;
  char *local_res10;
  basic_string_view<char,std::char_traits<char>_> **local_res18;
  
  param_1->_Mydata = (char *)0x11;
  if (in_RDX[1] != 0) {
    local_res8 = param_1;
    pcVar1 = ::operator_new(0x30);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else {
      local_res8 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
      local_res18 = &local_res8;
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\x04';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8))->_Mypair).
      _Myval2._Bx._Ptr = (char *)0x0;
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      local_res10 = pcVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8),
                 (char *)*in_RDX,in_RDX[1]);
      *(basic_string_view<char,std::char_traits<char>_> **)(pcVar1 + 0x28) = local_res8;
    }
    param_1->_Mydata = pcVar1;
  }
  return (Status)(ulong64)param_1;
}

// EmptyString @ 14f8edf70

/* private: static class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const * __ptr64 __cdecl absl::lts_20240722::Status::EmptyString(void) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::Status::EmptyString(void)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_154e16810;
}

// ErrnoToStatus @ 14f8edf80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class absl::lts_20240722::Status __cdecl absl::lts_20240722::ErrnoToStatus(int,class
   std::basic_string_view<char,struct std::char_traits<char> >) */

Status __cdecl
absl::lts_20240722::ErrnoToStatus
          (int param_1,basic_string_view<char,std::char_traits<char>_> *param_2)

{
  void *pvVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  undefined4 in_register_0000000c;
  Status *this;
  void *pvVar3;
  undefined8 uVar4;
  ulong64 uVar5;
  StatusCode SVar6;
  undefined8 *in_R8;
  undefined1 auStack_128 [32];
  basic_string_view<char,std::char_traits<char>_> local_108;
  _Bxty local_f0;
  ulong64 local_e0;
  ulonglong local_d8;
  _Bxty local_d0;
  undefined8 local_c0;
  ulonglong uStack_b8;
  AlphaNum local_b0;
  AlphaNum local_80;
  AlphaNum local_50;
  ulonglong local_20;
  
  this = (Status *)CONCAT44(in_register_0000000c,param_1);
  local_20 = __security_cookie.value ^ (ulonglong)auStack_128;
  SVar6 = kOk;
  local_108._Mydata = (char *)this;
  pbVar2 = base_internal::StrError
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_d0,
                      (int)param_2);
  local_b0.piece_._Mydata = (char *)pbVar2;
  if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
    local_b0.piece_._Mydata = (pbVar2->_Mypair)._Myval2._Bx._Ptr;
  }
  local_b0.piece_._Mysize = (pbVar2->_Mypair)._Myval2._Mysize;
  local_108._Mydata = ": ";
  local_108._Mysize = 2;
  local_80.piece_._Mydata = ": ";
  local_80.piece_._Mysize = 2;
  local_50.piece_._Mydata = (char *)*in_R8;
  local_50.piece_._Mysize = in_R8[1];
  StrCat((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_f0,&local_50,
         &local_80,&local_b0);
  if (0xf < uStack_b8) {
    uVar5 = uStack_b8 + 1;
    pvVar1 = (void *)CONCAT71(local_d0._1_7_,local_d0._Buf[0]);
    pvVar3 = pvVar1;
    if (0xfff < uVar5) {
      uVar5 = uStack_b8 + 0x28;
      pvVar3 = *(void **)((longlong)pvVar1 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar3,uVar5);
  }
  local_c0 = ___xmm_000000000000000f0000000000000000;
  uStack_b8 = _UNK_15076add8;
  local_d0._Buf[0] = '\0';
  local_108._Mydata = (char *)&local_f0;
  if (0xf < local_d8) {
    local_108._Mydata = local_f0._Ptr;
  }
  switch((int)param_2) {
  case 0:
    break;
  case 1:
  case 0xd:
  case 0x1e:
    SVar6 = kPermissionDenied;
    break;
  case 2:
  case 3:
  case 6:
  case 0x13:
    SVar6 = kNotFound;
    break;
  case 4:
  case 0xb:
  case 0x27:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6e:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x79:
    SVar6 = kUnavailable;
    break;
  default:
    SVar6 = kUnknown;
    break;
  case 7:
  case 0xe:
  case 0x16:
  case 0x19:
  case 0x1d:
  case 0x21:
  case 0x26:
  case 0x2a:
  case 0x6d:
  case 0x7b:
  case 0x80:
  case 0x88:
    SVar6 = kInvalidArgument;
    break;
  case 9:
  case 10:
  case 0x10:
  case 0x14:
  case 0x15:
  case 0x20:
  case 0x29:
  case 100:
  case 0x71:
  case 0x7e:
  case 0x8b:
    SVar6 = kFailedPrecondition;
    break;
  case 0xc:
  case 0x17:
  case 0x18:
  case 0x1c:
  case 0x1f:
  case 0x77:
    SVar6 = kResourceExhausted;
    break;
  case 0x11:
  case 0x65:
  case 0x67:
    SVar6 = kAlreadyExists;
    break;
  case 0x12:
  case 0x28:
  case 0x66:
  case 0x81:
  case 0x87:
    SVar6 = kUnimplemented;
    break;
  case 0x1b:
  case 0x22:
  case 0x84:
    SVar6 = kOutOfRange;
    break;
  case 0x24:
    SVar6 = kAborted;
    break;
  case 0x69:
    SVar6 = kCancelled;
    break;
  case 0x8a:
    SVar6 = kDeadlineExceeded;
  }
  local_108._Mysize = local_e0;
  Status::Status(this,SVar6,&local_108);
  if (0xf < local_d8) {
    uVar5 = local_d8 + 1;
    uVar4 = local_f0._Ptr;
    if (0xfff < uVar5) {
      uVar5 = local_d8 + 0x28;
      uVar4 = *(undefined8 *)(local_f0._Ptr + -8);
      if ((char *)0x1f < local_f0._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar4,uVar5);
  }
  return (Status)(ulong64)this;
}

// ErrnoToStatusCode @ 14f8ee260

/* enum absl::lts_20240722::StatusCode __cdecl absl::lts_20240722::ErrnoToStatusCode(int) */

StatusCode __cdecl absl::lts_20240722::ErrnoToStatusCode(int param_1)

{
  switch(param_1) {
  case 0:
    return kOk;
  case 1:
  case 0xd:
  case 0x1e:
    return kPermissionDenied;
  case 2:
  case 3:
  case 6:
  case 0x13:
    return kNotFound;
  case 4:
  case 0xb:
  case 0x27:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6e:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x79:
    return kUnavailable;
  default:
    return kUnknown;
  case 7:
  case 0xe:
  case 0x16:
  case 0x19:
  case 0x1d:
  case 0x21:
  case 0x26:
  case 0x2a:
  case 0x6d:
  case 0x7b:
  case 0x80:
  case 0x88:
    return kInvalidArgument;
  case 9:
  case 10:
  case 0x10:
  case 0x14:
  case 0x15:
  case 0x20:
  case 0x29:
  case 100:
  case 0x71:
  case 0x7e:
  case 0x8b:
    return kFailedPrecondition;
  case 0xc:
  case 0x17:
  case 0x18:
  case 0x1c:
  case 0x1f:
  case 0x77:
    return kResourceExhausted;
  case 0x11:
  case 0x65:
  case 0x67:
    return kAlreadyExists;
  case 0x12:
  case 0x28:
  case 0x66:
  case 0x81:
  case 0x87:
    return kUnimplemented;
  case 0x1b:
  case 0x22:
  case 0x84:
    return kOutOfRange;
  case 0x24:
    return kAborted;
  case 0x69:
    return kCancelled;
  case 0x8a:
    return kDeadlineExceeded;
  }
}

// FailedPreconditionError @ 14f8ee3b0

/* WARNING: Removing unreachable block (ram,0x00014f8ee43d) */
/* class absl::lts_20240722::Status __cdecl absl::lts_20240722::FailedPreconditionError(class
   std::basic_string_view<char,struct std::char_traits<char> >) */

Status __cdecl
absl::lts_20240722::FailedPreconditionError
          (basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  undefined8 *in_RDX;
  basic_string_view<char,std::char_traits<char>_> *local_res8;
  char *local_res10;
  basic_string_view<char,std::char_traits<char>_> **local_res18;
  
  param_1->_Mydata = (char *)0x25;
  if (in_RDX[1] != 0) {
    local_res8 = param_1;
    pcVar1 = ::operator_new(0x30);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else {
      local_res8 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
      local_res18 = &local_res8;
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\t';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8))->_Mypair).
      _Myval2._Bx._Ptr = (char *)0x0;
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      local_res10 = pcVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8),
                 (char *)*in_RDX,in_RDX[1]);
      *(basic_string_view<char,std::char_traits<char>_> **)(pcVar1 + 0x28) = local_res8;
    }
    param_1->_Mydata = pcVar1;
  }
  return (Status)(ulong64)param_1;
}

// InlinedRepToCode @ 14f8ee470

/* private: static enum absl::lts_20240722::StatusCode __cdecl
   absl::lts_20240722::Status::InlinedRepToCode(unsigned __int64) */

StatusCode __cdecl absl::lts_20240722::Status::InlinedRepToCode(__uint64 param_1)

{
  return (StatusCode)(param_1 >> 2);
}

// InternalError @ 14f8ee480

/* WARNING: Removing unreachable block (ram,0x00014f8ee50d) */
/* class absl::lts_20240722::Status __cdecl absl::lts_20240722::InternalError(class
   std::basic_string_view<char,struct std::char_traits<char> >) */

Status __cdecl
absl::lts_20240722::InternalError(basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  undefined8 *in_RDX;
  basic_string_view<char,std::char_traits<char>_> *local_res8;
  char *local_res10;
  basic_string_view<char,std::char_traits<char>_> **local_res18;
  
  param_1->_Mydata = (char *)0x35;
  if (in_RDX[1] != 0) {
    local_res8 = param_1;
    pcVar1 = ::operator_new(0x30);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else {
      local_res8 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
      local_res18 = &local_res8;
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\r';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8))->_Mypair).
      _Myval2._Bx._Ptr = (char *)0x0;
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      local_res10 = pcVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8),
                 (char *)*in_RDX,in_RDX[1]);
      *(basic_string_view<char,std::char_traits<char>_> **)(pcVar1 + 0x28) = local_res8;
    }
    param_1->_Mydata = pcVar1;
  }
  return (Status)(ulong64)param_1;
}

// InvalidArgumentError @ 14f8ee540

/* WARNING: Removing unreachable block (ram,0x00014f8ee5cd) */
/* class absl::lts_20240722::Status __cdecl absl::lts_20240722::InvalidArgumentError(class
   std::basic_string_view<char,struct std::char_traits<char> >) */

Status __cdecl
absl::lts_20240722::InvalidArgumentError(basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  undefined8 *in_RDX;
  basic_string_view<char,std::char_traits<char>_> *local_res8;
  char *local_res10;
  basic_string_view<char,std::char_traits<char>_> **local_res18;
  
  param_1->_Mydata = (char *)0xd;
  if (in_RDX[1] != 0) {
    local_res8 = param_1;
    pcVar1 = ::operator_new(0x30);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else {
      local_res8 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
      local_res18 = &local_res8;
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\x03';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8))->_Mypair).
      _Myval2._Bx._Ptr = (char *)0x0;
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      local_res10 = pcVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8),
                 (char *)*in_RDX,in_RDX[1]);
      *(basic_string_view<char,std::char_traits<char>_> **)(pcVar1 + 0x28) = local_res8;
    }
    param_1->_Mydata = pcVar1;
  }
  return (Status)(ulong64)param_1;
}

// IsAborted @ 14f8ee600

/* bool __cdecl absl::lts_20240722::IsAborted(class absl::lts_20240722::Status const & __ptr64) */

bool __cdecl absl::lts_20240722::IsAborted(Status *param_1)

{
  StatusCode SVar1;
  
  if ((param_1->rep_ & 1) != 0) {
    SVar1 = status_internal::MapToLocalCode((int)(param_1->rep_ >> 2));
    return SVar1 == kAborted;
  }
  SVar1 = status_internal::MapToLocalCode(*(int *)(param_1->rep_ + 4));
  return SVar1 == kAborted;
}

// IsAlreadyExists @ 14f8ee640

/* bool __cdecl absl::lts_20240722::IsAlreadyExists(class absl::lts_20240722::Status const &
   __ptr64) */

bool __cdecl absl::lts_20240722::IsAlreadyExists(Status *param_1)

{
  StatusCode SVar1;
  
  if ((param_1->rep_ & 1) != 0) {
    SVar1 = status_internal::MapToLocalCode((int)(param_1->rep_ >> 2));
    return SVar1 == kAlreadyExists;
  }
  SVar1 = status_internal::MapToLocalCode(*(int *)(param_1->rep_ + 4));
  return SVar1 == kAlreadyExists;
}

// IsCancelled @ 14f8ee680

/* bool __cdecl absl::lts_20240722::IsCancelled(class absl::lts_20240722::Status const & __ptr64) */

bool __cdecl absl::lts_20240722::IsCancelled(Status *param_1)

{
  StatusCode SVar1;
  
  if ((param_1->rep_ & 1) != 0) {
    SVar1 = status_internal::MapToLocalCode((int)(param_1->rep_ >> 2));
    return SVar1 == kCancelled;
  }
  SVar1 = status_internal::MapToLocalCode(*(int *)(param_1->rep_ + 4));
  return SVar1 == kCancelled;
}

// IsDataLoss @ 14f8ee6c0

/* bool __cdecl absl::lts_20240722::IsDataLoss(class absl::lts_20240722::Status const & __ptr64) */

bool __cdecl absl::lts_20240722::IsDataLoss(Status *param_1)

{
  StatusCode SVar1;
  
  if ((param_1->rep_ & 1) != 0) {
    SVar1 = status_internal::MapToLocalCode((int)(param_1->rep_ >> 2));
    return SVar1 == kDataLoss;
  }
  SVar1 = status_internal::MapToLocalCode(*(int *)(param_1->rep_ + 4));
  return SVar1 == kDataLoss;
}

// IsDeadlineExceeded @ 14f8ee700

/* bool __cdecl absl::lts_20240722::IsDeadlineExceeded(class absl::lts_20240722::Status const &
   __ptr64) */

bool __cdecl absl::lts_20240722::IsDeadlineExceeded(Status *param_1)

{
  StatusCode SVar1;
  
  if ((param_1->rep_ & 1) != 0) {
    SVar1 = status_internal::MapToLocalCode((int)(param_1->rep_ >> 2));
    return SVar1 == kDeadlineExceeded;
  }
  SVar1 = status_internal::MapToLocalCode(*(int *)(param_1->rep_ + 4));
  return SVar1 == kDeadlineExceeded;
}

// IsFailedPrecondition @ 14f8ee740

/* bool __cdecl absl::lts_20240722::IsFailedPrecondition(class absl::lts_20240722::Status const &
   __ptr64) */

bool __cdecl absl::lts_20240722::IsFailedPrecondition(Status *param_1)

{
  StatusCode SVar1;
  
  if ((param_1->rep_ & 1) != 0) {
    SVar1 = status_internal::MapToLocalCode((int)(param_1->rep_ >> 2));
    return SVar1 == kFailedPrecondition;
  }
  SVar1 = status_internal::MapToLocalCode(*(int *)(param_1->rep_ + 4));
  return SVar1 == kFailedPrecondition;
}

// IsInlined @ 14f8ee780

/* private: static bool __cdecl absl::lts_20240722::Status::IsInlined(unsigned __int64) */

bool __cdecl absl::lts_20240722::Status::IsInlined(__uint64 param_1)

{
  return (bool)((byte)param_1 & 1);
}

// IsInternal @ 14f8ee790

/* bool __cdecl absl::lts_20240722::IsInternal(class absl::lts_20240722::Status const & __ptr64) */

bool __cdecl absl::lts_20240722::IsInternal(Status *param_1)

{
  StatusCode SVar1;
  
  if ((param_1->rep_ & 1) != 0) {
    SVar1 = status_internal::MapToLocalCode((int)(param_1->rep_ >> 2));
    return SVar1 == kInternal;
  }
  SVar1 = status_internal::MapToLocalCode(*(int *)(param_1->rep_ + 4));
  return SVar1 == kInternal;
}

// IsInvalidArgument @ 14f8ee7d0

/* bool __cdecl absl::lts_20240722::IsInvalidArgument(class absl::lts_20240722::Status const &
   __ptr64) */

bool __cdecl absl::lts_20240722::IsInvalidArgument(Status *param_1)

{
  StatusCode SVar1;
  
  if ((param_1->rep_ & 1) != 0) {
    SVar1 = status_internal::MapToLocalCode((int)(param_1->rep_ >> 2));
    return SVar1 == kInvalidArgument;
  }
  SVar1 = status_internal::MapToLocalCode(*(int *)(param_1->rep_ + 4));
  return SVar1 == kInvalidArgument;
}

// IsMovedFrom @ 14f8ee810

/* private: static bool __cdecl absl::lts_20240722::Status::IsMovedFrom(unsigned __int64) */

bool __cdecl absl::lts_20240722::Status::IsMovedFrom(__uint64 param_1)

{
  return (bool)((byte)param_1 >> 1 & 1);
}

// IsNotFound @ 14f8ee820

/* bool __cdecl absl::lts_20240722::IsNotFound(class absl::lts_20240722::Status const & __ptr64) */

bool __cdecl absl::lts_20240722::IsNotFound(Status *param_1)

{
  StatusCode SVar1;
  
  if ((param_1->rep_ & 1) != 0) {
    SVar1 = status_internal::MapToLocalCode((int)(param_1->rep_ >> 2));
    return SVar1 == kNotFound;
  }
  SVar1 = status_internal::MapToLocalCode(*(int *)(param_1->rep_ + 4));
  return SVar1 == kNotFound;
}

// IsOutOfRange @ 14f8ee860

/* bool __cdecl absl::lts_20240722::IsOutOfRange(class absl::lts_20240722::Status const & __ptr64)
    */

bool __cdecl absl::lts_20240722::IsOutOfRange(Status *param_1)

{
  StatusCode SVar1;
  
  if ((param_1->rep_ & 1) != 0) {
    SVar1 = status_internal::MapToLocalCode((int)(param_1->rep_ >> 2));
    return SVar1 == kOutOfRange;
  }
  SVar1 = status_internal::MapToLocalCode(*(int *)(param_1->rep_ + 4));
  return SVar1 == kOutOfRange;
}

// IsPermissionDenied @ 14f8ee8a0

/* bool __cdecl absl::lts_20240722::IsPermissionDenied(class absl::lts_20240722::Status const &
   __ptr64) */

bool __cdecl absl::lts_20240722::IsPermissionDenied(Status *param_1)

{
  StatusCode SVar1;
  
  if ((param_1->rep_ & 1) != 0) {
    SVar1 = status_internal::MapToLocalCode((int)(param_1->rep_ >> 2));
    return SVar1 == kPermissionDenied;
  }
  SVar1 = status_internal::MapToLocalCode(*(int *)(param_1->rep_ + 4));
  return SVar1 == kPermissionDenied;
}

// IsResourceExhausted @ 14f8ee8e0

/* bool __cdecl absl::lts_20240722::IsResourceExhausted(class absl::lts_20240722::Status const &
   __ptr64) */

bool __cdecl absl::lts_20240722::IsResourceExhausted(Status *param_1)

{
  StatusCode SVar1;
  
  if ((param_1->rep_ & 1) != 0) {
    SVar1 = status_internal::MapToLocalCode((int)(param_1->rep_ >> 2));
    return SVar1 == kResourceExhausted;
  }
  SVar1 = status_internal::MapToLocalCode(*(int *)(param_1->rep_ + 4));
  return SVar1 == kResourceExhausted;
}

// IsUnauthenticated @ 14f8ee920

/* bool __cdecl absl::lts_20240722::IsUnauthenticated(class absl::lts_20240722::Status const &
   __ptr64) */

bool __cdecl absl::lts_20240722::IsUnauthenticated(Status *param_1)

{
  StatusCode SVar1;
  
  if ((param_1->rep_ & 1) != 0) {
    SVar1 = status_internal::MapToLocalCode((int)(param_1->rep_ >> 2));
    return SVar1 == kUnauthenticated;
  }
  SVar1 = status_internal::MapToLocalCode(*(int *)(param_1->rep_ + 4));
  return SVar1 == kUnauthenticated;
}

// IsUnavailable @ 14f8ee960

/* bool __cdecl absl::lts_20240722::IsUnavailable(class absl::lts_20240722::Status const & __ptr64)
    */

bool __cdecl absl::lts_20240722::IsUnavailable(Status *param_1)

{
  StatusCode SVar1;
  
  if ((param_1->rep_ & 1) != 0) {
    SVar1 = status_internal::MapToLocalCode((int)(param_1->rep_ >> 2));
    return SVar1 == kUnavailable;
  }
  SVar1 = status_internal::MapToLocalCode(*(int *)(param_1->rep_ + 4));
  return SVar1 == kUnavailable;
}

// IsUnimplemented @ 14f8ee9a0

/* bool __cdecl absl::lts_20240722::IsUnimplemented(class absl::lts_20240722::Status const &
   __ptr64) */

bool __cdecl absl::lts_20240722::IsUnimplemented(Status *param_1)

{
  StatusCode SVar1;
  
  if ((param_1->rep_ & 1) != 0) {
    SVar1 = status_internal::MapToLocalCode((int)(param_1->rep_ >> 2));
    return SVar1 == kUnimplemented;
  }
  SVar1 = status_internal::MapToLocalCode(*(int *)(param_1->rep_ + 4));
  return SVar1 == kUnimplemented;
}

// IsUnknown @ 14f8ee9e0

/* bool __cdecl absl::lts_20240722::IsUnknown(class absl::lts_20240722::Status const & __ptr64) */

bool __cdecl absl::lts_20240722::IsUnknown(Status *param_1)

{
  StatusCode SVar1;
  
  if ((param_1->rep_ & 1) != 0) {
    SVar1 = status_internal::MapToLocalCode((int)(param_1->rep_ >> 2));
    return SVar1 == kUnknown;
  }
  SVar1 = status_internal::MapToLocalCode(*(int *)(param_1->rep_ + 4));
  return SVar1 == kUnknown;
}

// FUN_14f8eea20 @ 14f8eea20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,std::char_traits<char>,std::allocator<char>_> *
FUN_14f8eea20(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,
             undefined8 *param_3)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  undefined1 auStack_f8 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_d0;
  undefined8 uStack_c8;
  _Bxty local_c0;
  ulonglong local_a8;
  AlphaNum local_a0;
  AlphaNum local_70;
  AlphaNum local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d0 = param_1;
  pbVar1 = absl::lts_20240722::base_internal::StrError
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c0,
                      param_2);
  local_a0.piece_._Mydata = (char *)pbVar1;
  if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
    local_a0.piece_._Mydata = (pbVar1->_Mypair)._Myval2._Bx._Ptr;
  }
  local_a0.piece_._Mysize = (pbVar1->_Mypair)._Myval2._Mysize;
  local_d0 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&s___;
  uStack_c8 = 2;
  local_70.piece_._Mydata = ": ";
  local_70.piece_._Mysize = 2;
  local_40.piece_._Mydata = (char *)*param_3;
  local_40.piece_._Mysize = param_3[1];
  absl::lts_20240722::StrCat(param_1,&local_40,&local_70,&local_a0);
  if (0xf < local_a8) {
    uVar3 = local_a8 + 1;
    uVar2 = local_c0._Ptr;
    if (0xfff < uVar3) {
      uVar3 = local_a8 + 0x28;
      uVar2 = *(undefined8 *)(local_c0._Ptr + -8);
      if ((char *)0x1f < local_c0._Ptr + (-8 - uVar2)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar2,uVar3);
  }
  return param_1;
}

// MovedFromString @ 14f8eeb30

/* private: static class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const * __ptr64 __cdecl absl::lts_20240722::Status::MovedFromString(void)
    */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::Status::MovedFromString(void)

{
  longlong lVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < DAT_1553e4958) &&
     (_Init_thread_header(&DAT_1553e4958), DAT_1553e4958 == -1)) {
    uVar3 = 0xffffffffffffffff;
    do {
      uVar2 = uVar3 + 1;
      lVar1 = uVar3 + 1;
      uVar3 = uVar2;
    } while ("Status accessed after move."[lVar1] != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_1553e4938,
               "Status accessed after move.",uVar2);
    _Init_thread_footer(&DAT_1553e4958);
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_1553e4938;
  }
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_1553e4938;
}

// NotFoundError @ 14f8eebc0

/* WARNING: Removing unreachable block (ram,0x00014f8eec4d) */
/* class absl::lts_20240722::Status __cdecl absl::lts_20240722::NotFoundError(class
   std::basic_string_view<char,struct std::char_traits<char> >) */

Status __cdecl
absl::lts_20240722::NotFoundError(basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  undefined8 *in_RDX;
  basic_string_view<char,std::char_traits<char>_> *local_res8;
  char *local_res10;
  basic_string_view<char,std::char_traits<char>_> **local_res18;
  
  param_1->_Mydata = (char *)0x15;
  if (in_RDX[1] != 0) {
    local_res8 = param_1;
    pcVar1 = ::operator_new(0x30);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else {
      local_res8 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
      local_res18 = &local_res8;
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\x05';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8))->_Mypair).
      _Myval2._Bx._Ptr = (char *)0x0;
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      local_res10 = pcVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8),
                 (char *)*in_RDX,in_RDX[1]);
      *(basic_string_view<char,std::char_traits<char>_> **)(pcVar1 + 0x28) = local_res8;
    }
    param_1->_Mydata = pcVar1;
  }
  return (Status)(ulong64)param_1;
}

// OutOfRangeError @ 14f8eec80

/* WARNING: Removing unreachable block (ram,0x00014f8eed0d) */
/* class absl::lts_20240722::Status __cdecl absl::lts_20240722::OutOfRangeError(class
   std::basic_string_view<char,struct std::char_traits<char> >) */

Status __cdecl
absl::lts_20240722::OutOfRangeError(basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  undefined8 *in_RDX;
  basic_string_view<char,std::char_traits<char>_> *local_res8;
  char *local_res10;
  basic_string_view<char,std::char_traits<char>_> **local_res18;
  
  param_1->_Mydata = (char *)0x2d;
  if (in_RDX[1] != 0) {
    local_res8 = param_1;
    pcVar1 = ::operator_new(0x30);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else {
      local_res8 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
      local_res18 = &local_res8;
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\v';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8))->_Mypair).
      _Myval2._Bx._Ptr = (char *)0x0;
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      local_res10 = pcVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8),
                 (char *)*in_RDX,in_RDX[1]);
      *(basic_string_view<char,std::char_traits<char>_> **)(pcVar1 + 0x28) = local_res8;
    }
    param_1->_Mydata = pcVar1;
  }
  return (Status)(ulong64)param_1;
}

// PermissionDeniedError @ 14f8eed40

/* WARNING: Removing unreachable block (ram,0x00014f8eedcd) */
/* class absl::lts_20240722::Status __cdecl absl::lts_20240722::PermissionDeniedError(class
   std::basic_string_view<char,struct std::char_traits<char> >) */

Status __cdecl
absl::lts_20240722::PermissionDeniedError(basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  undefined8 *in_RDX;
  basic_string_view<char,std::char_traits<char>_> *local_res8;
  char *local_res10;
  basic_string_view<char,std::char_traits<char>_> **local_res18;
  
  param_1->_Mydata = (char *)0x1d;
  if (in_RDX[1] != 0) {
    local_res8 = param_1;
    pcVar1 = ::operator_new(0x30);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else {
      local_res8 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
      local_res18 = &local_res8;
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\a';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8))->_Mypair).
      _Myval2._Bx._Ptr = (char *)0x0;
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      local_res10 = pcVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8),
                 (char *)*in_RDX,in_RDX[1]);
      *(basic_string_view<char,std::char_traits<char>_> **)(pcVar1 + 0x28) = local_res8;
    }
    param_1->_Mydata = pcVar1;
  }
  return (Status)(ulong64)param_1;
}

// PrepareToModify @ 14f8eee00

/* WARNING: Removing unreachable block (ram,0x00014f8eee8d) */
/* private: static class absl::lts_20240722::status_internal::StatusRep * __ptr64 __cdecl
   absl::lts_20240722::Status::PrepareToModify(unsigned __int64) */

StatusRep * __cdecl absl::lts_20240722::Status::PrepareToModify(__uint64 param_1)

{
  StatusRep *pSVar1;
  unique_ptr<absl::lts_20240722::InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>,std::default_delete<absl::lts_20240722::InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>_>_>
  local_res8;
  StatusRep *local_res10;
  unique_ptr<absl::lts_20240722::InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>,std::default_delete<absl::lts_20240722::InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>_>_>
  *local_res18;
  
  if ((param_1 & 1) == 0) {
    pSVar1 = status_internal::StatusRep::CloneAndUnref((StatusRep *)param_1);
    return pSVar1;
  }
  pSVar1 = ::operator_new(0x30);
  if (pSVar1 == (StatusRep *)0x0) {
    pSVar1 = (StatusRep *)0x0;
  }
  else {
    local_res8._Mypair._Myval2 =
         (_Compressed_pair<std::default_delete<absl::lts_20240722::InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>_>,absl::lts_20240722::InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>_*,1>
          )(InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>
            *)0x0;
    local_res18 = &local_res8;
    pSVar1->ref_ = (atomic<int>)0x1;
    pSVar1->code_ = (StatusCode)(param_1 >> 2);
    (pSVar1->message_)._Mypair._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(pSVar1->message_)._Mypair._Myval2._Bx + 8) = 0;
    (pSVar1->message_)._Mypair._Myval2._Mysize = 0;
    (pSVar1->message_)._Mypair._Myval2._Myres = 0;
    local_res10 = pSVar1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              (&pSVar1->message_,(char *)0x0,0);
    (pSVar1->payloads_)._Mypair._Myval2 =
         (InlinedVector<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>
          *)local_res8._Mypair._Myval2;
  }
  return pSVar1;
}

// RepToPointer @ 14f8eeec0

/* private: static class absl::lts_20240722::status_internal::StatusRep const * __ptr64 __cdecl
   absl::lts_20240722::Status::RepToPointer(unsigned __int64) */

StatusRep * __cdecl absl::lts_20240722::Status::RepToPointer(__uint64 param_1)

{
  return (StatusRep *)param_1;
}

// ResourceExhaustedError @ 14f8eeed0

/* WARNING: Removing unreachable block (ram,0x00014f8eef5d) */
/* class absl::lts_20240722::Status __cdecl absl::lts_20240722::ResourceExhaustedError(class
   std::basic_string_view<char,struct std::char_traits<char> >) */

Status __cdecl
absl::lts_20240722::ResourceExhaustedError(basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  undefined8 *in_RDX;
  basic_string_view<char,std::char_traits<char>_> *local_res8;
  char *local_res10;
  basic_string_view<char,std::char_traits<char>_> **local_res18;
  
  param_1->_Mydata = (char *)0x21;
  if (in_RDX[1] != 0) {
    local_res8 = param_1;
    pcVar1 = ::operator_new(0x30);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else {
      local_res8 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
      local_res18 = &local_res8;
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\b';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8))->_Mypair).
      _Myval2._Bx._Ptr = (char *)0x0;
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      local_res10 = pcVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8),
                 (char *)*in_RDX,in_RDX[1]);
      *(basic_string_view<char,std::char_traits<char>_> **)(pcVar1 + 0x28) = local_res8;
    }
    param_1->_Mydata = pcVar1;
  }
  return (Status)(ulong64)param_1;
}

// StatusCodeToString @ 14f8eef90

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::StatusCodeToString(enum absl::lts_20240722::StatusCode) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::StatusCodeToString
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          StatusCode param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  
  switch(param_1) {
  case kOk:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 2;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    *(undefined2 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = 0x4b4f;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[2] = '\0';
    return __return_storage_ptr__;
  case kCancelled:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 9;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)s_CANCELLED._0_8_;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[8] = s_CANCELLED[8];
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[9] = '\0';
    return __return_storage_ptr__;
  case kUnknown:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 7;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    *(undefined4 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = s_UNKNOWN._0_4_;
    *(undefined2 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 4) = s_UNKNOWN._4_2_;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[6] = s_UNKNOWN[6];
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[7] = '\0';
    return __return_storage_ptr__;
  case kInvalidArgument:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    pcVar2 = ::operator_new(0x20);
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = pcVar2;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0x10;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0x1f;
    uVar1 = s_INVALID_ARGUMENT._8_8_;
    *(undefined8 *)pcVar2 = s_INVALID_ARGUMENT._0_8_;
    *(undefined8 *)(pcVar2 + 8) = uVar1;
    pcVar2[0x10] = '\0';
    return __return_storage_ptr__;
  case kDeadlineExceeded:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    pcVar2 = ::operator_new(0x20);
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = pcVar2;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0x11;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0x1f;
    uVar1 = s_DEADLINE_EXCEEDED._8_8_;
    *(undefined8 *)pcVar2 = s_DEADLINE_EXCEEDED._0_8_;
    *(undefined8 *)(pcVar2 + 8) = uVar1;
    pcVar2[0x10] = s_DEADLINE_EXCEEDED[0x10];
    pcVar2[0x11] = '\0';
    return __return_storage_ptr__;
  case kNotFound:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 9;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)s_NOT_FOUND._0_8_;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[8] = s_NOT_FOUND[8];
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[9] = '\0';
    return __return_storage_ptr__;
  case kAlreadyExists:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0xe;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)s_ALREADY_EXISTS._0_8_;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) =
         s_ALREADY_EXISTS._8_4_;
    *(undefined2 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 0xc) =
         s_ALREADY_EXISTS._12_2_;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0xe] = '\0';
    return __return_storage_ptr__;
  case kPermissionDenied:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    pcVar2 = ::operator_new(0x20);
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = pcVar2;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0x11;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0x1f;
    uVar1 = s_PERMISSION_DENIED._8_8_;
    *(undefined8 *)pcVar2 = s_PERMISSION_DENIED._0_8_;
    *(undefined8 *)(pcVar2 + 8) = uVar1;
    pcVar2[0x10] = s_PERMISSION_DENIED[0x10];
    pcVar2[0x11] = '\0';
    return __return_storage_ptr__;
  case kResourceExhausted:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    pcVar2 = ::operator_new(0x20);
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = pcVar2;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0x12;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0x1f;
    uVar1 = s_RESOURCE_EXHAUSTED._8_8_;
    *(undefined8 *)pcVar2 = s_RESOURCE_EXHAUSTED._0_8_;
    *(undefined8 *)(pcVar2 + 8) = uVar1;
    *(undefined2 *)(pcVar2 + 0x10) = s_RESOURCE_EXHAUSTED._16_2_;
    pcVar2[0x12] = '\0';
    return __return_storage_ptr__;
  case kFailedPrecondition:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              (__return_storage_ptr__,"FAILED_PRECONDITION",0x13);
    return __return_storage_ptr__;
  case kAborted:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 7;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    *(undefined4 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = s_ABORTED._0_4_;
    *(undefined2 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 4) = s_ABORTED._4_2_;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[6] = s_ABORTED[6];
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[7] = '\0';
    return __return_storage_ptr__;
  case kOutOfRange:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0xc;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)s_OUT_OF_RANGE._0_8_;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) =
         s_OUT_OF_RANGE._8_4_;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0xc] = '\0';
    return __return_storage_ptr__;
  case kUnimplemented:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0xd;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)s_UNIMPLEMENTED._0_8_;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) =
         s_UNIMPLEMENTED._8_4_;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0xc] = s_UNIMPLEMENTED[0xc];
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0xd] = '\0';
    return __return_storage_ptr__;
  case kInternal:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 8;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x4c414e5245544e49;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[8] = '\0';
    return __return_storage_ptr__;
  case kUnavailable:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0xb;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)s_UNAVAILABLE._0_8_;
    *(undefined2 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) =
         s_UNAVAILABLE._8_2_;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[10] = s_UNAVAILABLE[10];
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0xb] = '\0';
    return __return_storage_ptr__;
  case kDataLoss:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 9;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)s_DATA_LOSS._0_8_;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[8] = s_DATA_LOSS[8];
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[9] = '\0';
    return __return_storage_ptr__;
  case kUnauthenticated:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0xf;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)s_UNAUTHENTICATED._0_8_;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) =
         s_UNAUTHENTICATED._8_4_;
    *(undefined2 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 0xc) =
         s_UNAUTHENTICATED._12_2_;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0xe] = s_UNAUTHENTICATED[0xe];
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0xf] = '\0';
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

// StatusMessageAsCStr @ 14f8ef460

/* char const * __ptr64 __cdecl absl::lts_20240722::StatusMessageAsCStr(class
   absl::lts_20240722::Status const & __ptr64) */

char * __cdecl absl::lts_20240722::StatusMessageAsCStr(Status *param_1)

{
  ulong64 uVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  char *local_18;
  longlong lStack_10;
  
  if ((param_1->rep_ & 1) == 0) {
    uVar1 = param_1->rep_;
    local_18 = (char *)(uVar1 + 8);
    if (0xf < *(ulonglong *)(uVar1 + 0x20)) {
      local_18 = *(char **)(uVar1 + 8);
    }
    lStack_10 = *(longlong *)(uVar1 + 0x18);
  }
  else if (((byte)param_1->rep_ >> 1 & 1) == 0) {
    lStack_10 = 0;
    local_18 = (char *)0x0;
  }
  else {
    local_18 = "Status accessed after move.";
    lVar3 = -1;
    do {
      lStack_10 = lVar3 + 1;
      lVar2 = lVar3 + 1;
      lVar3 = lStack_10;
    } while ("Status accessed after move."[lVar2] != '\0');
  }
  pcVar4 = "";
  if (lStack_10 != 0) {
    pcVar4 = local_18;
  }
  return pcVar4;
}

// ToStringSlow @ 14f8ef500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "StatusToStringMode": Some values do not have unique names */
/* private: static class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > __cdecl absl::lts_20240722::Status::ToStringSlow(unsigned __int64,enum
   absl::lts_20240722::StatusToStringMode) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::Status::ToStringSlow
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          __uint64 param_1,StatusToStringMode param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  undefined1 auStack_c8 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_a0;
  undefined8 uStack_98;
  _Bxty local_90;
  ulonglong local_78;
  AlphaNum local_70;
  AlphaNum local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((param_1 & 1) == 0) {
    local_a0 = __return_storage_ptr__;
    status_internal::StatusRep::ToString((StatusRep *)param_1,__return_storage_ptr__,param_2);
  }
  else {
    local_a0 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&s___;
    uStack_98 = 2;
    local_40.piece_._Mydata = ": ";
    local_40.piece_._Mysize = 2;
    pbVar1 = StatusCodeToString((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_90,(StatusCode)(param_1 >> 2));
    local_70.piece_._Mydata = (char *)pbVar1;
    if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
      local_70.piece_._Mydata = (pbVar1->_Mypair)._Myval2._Bx._Ptr;
    }
    local_70.piece_._Mysize = (pbVar1->_Mypair)._Myval2._Mysize;
    StrCat(__return_storage_ptr__,&local_70,&local_40);
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
  }
  return __return_storage_ptr__;
}

// UnauthenticatedError @ 14f8ef610

/* WARNING: Removing unreachable block (ram,0x00014f8ef69d) */
/* class absl::lts_20240722::Status __cdecl absl::lts_20240722::UnauthenticatedError(class
   std::basic_string_view<char,struct std::char_traits<char> >) */

Status __cdecl
absl::lts_20240722::UnauthenticatedError(basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  undefined8 *in_RDX;
  basic_string_view<char,std::char_traits<char>_> *local_res8;
  char *local_res10;
  basic_string_view<char,std::char_traits<char>_> **local_res18;
  
  param_1->_Mydata = (char *)0x41;
  if (in_RDX[1] != 0) {
    local_res8 = param_1;
    pcVar1 = ::operator_new(0x30);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else {
      local_res8 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
      local_res18 = &local_res8;
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\x10';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8))->_Mypair).
      _Myval2._Bx._Ptr = (char *)0x0;
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      local_res10 = pcVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8),
                 (char *)*in_RDX,in_RDX[1]);
      *(basic_string_view<char,std::char_traits<char>_> **)(pcVar1 + 0x28) = local_res8;
    }
    param_1->_Mydata = pcVar1;
  }
  return (Status)(ulong64)param_1;
}

// UnavailableError @ 14f8ef6d0

/* WARNING: Removing unreachable block (ram,0x00014f8ef75d) */
/* class absl::lts_20240722::Status __cdecl absl::lts_20240722::UnavailableError(class
   std::basic_string_view<char,struct std::char_traits<char> >) */

Status __cdecl
absl::lts_20240722::UnavailableError(basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  undefined8 *in_RDX;
  basic_string_view<char,std::char_traits<char>_> *local_res8;
  char *local_res10;
  basic_string_view<char,std::char_traits<char>_> **local_res18;
  
  param_1->_Mydata = (char *)0x39;
  if (in_RDX[1] != 0) {
    local_res8 = param_1;
    pcVar1 = ::operator_new(0x30);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else {
      local_res8 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
      local_res18 = &local_res8;
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\x0e';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8))->_Mypair).
      _Myval2._Bx._Ptr = (char *)0x0;
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      local_res10 = pcVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8),
                 (char *)*in_RDX,in_RDX[1]);
      *(basic_string_view<char,std::char_traits<char>_> **)(pcVar1 + 0x28) = local_res8;
    }
    param_1->_Mydata = pcVar1;
  }
  return (Status)(ulong64)param_1;
}

// UnimplementedError @ 14f8ef790

/* WARNING: Removing unreachable block (ram,0x00014f8ef81d) */
/* class absl::lts_20240722::Status __cdecl absl::lts_20240722::UnimplementedError(class
   std::basic_string_view<char,struct std::char_traits<char> >) */

Status __cdecl
absl::lts_20240722::UnimplementedError(basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  undefined8 *in_RDX;
  basic_string_view<char,std::char_traits<char>_> *local_res8;
  char *local_res10;
  basic_string_view<char,std::char_traits<char>_> **local_res18;
  
  param_1->_Mydata = (char *)0x31;
  if (in_RDX[1] != 0) {
    local_res8 = param_1;
    pcVar1 = ::operator_new(0x30);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else {
      local_res8 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
      local_res18 = &local_res8;
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\f';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8))->_Mypair).
      _Myval2._Bx._Ptr = (char *)0x0;
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      local_res10 = pcVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8),
                 (char *)*in_RDX,in_RDX[1]);
      *(basic_string_view<char,std::char_traits<char>_> **)(pcVar1 + 0x28) = local_res8;
    }
    param_1->_Mydata = pcVar1;
  }
  return (Status)(ulong64)param_1;
}

// UnknownError @ 14f8ef850

/* WARNING: Removing unreachable block (ram,0x00014f8ef8dd) */
/* class absl::lts_20240722::Status __cdecl absl::lts_20240722::UnknownError(class
   std::basic_string_view<char,struct std::char_traits<char> >) */

Status __cdecl
absl::lts_20240722::UnknownError(basic_string_view<char,std::char_traits<char>_> *param_1)

{
  char *pcVar1;
  undefined8 *in_RDX;
  basic_string_view<char,std::char_traits<char>_> *local_res8;
  char *local_res10;
  basic_string_view<char,std::char_traits<char>_> **local_res18;
  
  param_1->_Mydata = (char *)0x9;
  if (in_RDX[1] != 0) {
    local_res8 = param_1;
    pcVar1 = ::operator_new(0x30);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)0x0;
    }
    else {
      local_res8 = (basic_string_view<char,std::char_traits<char>_> *)0x0;
      local_res18 = &local_res8;
      pcVar1[0] = '\x01';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\x02';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      (((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8))->_Mypair).
      _Myval2._Bx._Ptr = (char *)0x0;
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x20] = '\0';
      pcVar1[0x21] = '\0';
      pcVar1[0x22] = '\0';
      pcVar1[0x23] = '\0';
      pcVar1[0x24] = '\0';
      pcVar1[0x25] = '\0';
      pcVar1[0x26] = '\0';
      pcVar1[0x27] = '\0';
      local_res10 = pcVar1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      _Construct<1,char_const_*>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(pcVar1 + 8),
                 (char *)*in_RDX,in_RDX[1]);
      *(basic_string_view<char,std::char_traits<char>_> **)(pcVar1 + 0x28) = local_res8;
    }
    param_1->_Mydata = pcVar1;
  }
  return (Status)(ulong64)param_1;
}

// Unref @ 14f8ef910

/* private: static void __cdecl absl::lts_20240722::Status::Unref(unsigned __int64) */

void __cdecl absl::lts_20240722::Status::Unref(__uint64 param_1)

{
  int iVar1;
  Storage<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>
  *this;
  ulonglong uVar2;
  void *pvVar3;
  void *pvVar4;
  ulong64 uVar5;
  
  if ((param_1 & 1) != 0) {
    return;
  }
  if (*(int *)param_1 != 1) {
    LOCK();
    iVar1 = *(int *)param_1;
    *(int *)param_1 = *(int *)param_1 + -1;
    UNLOCK();
    if (iVar1 != 1) {
      return;
    }
  }
  this = *(Storage<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>
           **)(param_1 + 0x28);
  if (this != (Storage<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>
               *)0x0) {
    inlined_vector_internal::
    Storage<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>
    ::
    ~Storage<absl::lts_20240722::status_internal::Payload,1,std::allocator<absl::lts_20240722::status_internal::Payload>_>
              (this);
    ::operator_delete(this,0x38);
  }
  uVar2 = *(ulonglong *)(param_1 + 0x20);
  if (0xf < uVar2) {
    pvVar3 = *(void **)(param_1 + 8);
    uVar5 = uVar2 + 1;
    pvVar4 = pvVar3;
    if (0xfff < uVar5) {
      pvVar4 = *(void **)((longlong)pvVar3 + -8);
      uVar5 = uVar2 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar4,uVar5);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  ::operator_delete((void *)param_1,0x30);
  return;
}

// code @ 14f8ef920

/* public: enum absl::lts_20240722::StatusCode __cdecl absl::lts_20240722::Status::code(void)const
   __ptr64 */

StatusCode __thiscall absl::lts_20240722::Status::code(Status *this)

{
  StatusCode SVar1;
  
  if ((this->rep_ & 1) != 0) {
    SVar1 = status_internal::MapToLocalCode((int)(this->rep_ >> 2));
    return SVar1;
  }
  SVar1 = status_internal::MapToLocalCode(*(int *)(this->rep_ + 4));
  return SVar1;
}

// empty @ 14f8ef950

/* public: bool __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::empty(void)const __ptr64 */

bool __thiscall
std::basic_string_view<char,std::char_traits<char>_>::empty
          (basic_string_view<char,std::char_traits<char>_> *this)

{
  return this->_Mysize == 0;
}

// get @ 14f8ef960

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const * __ptr64 __cdecl absl::lts_20240722::NoDestructor<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::get(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
absl::lts_20240722::
NoDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::get
          (NoDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this
          )

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this;
}

// get @ 14f8ef970

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const * __ptr64 __cdecl absl::lts_20240722::NoDestructor<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > >::PlacementImpl::get(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
absl::lts_20240722::
NoDestructor<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::PlacementImpl::
get(PlacementImpl *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this;
}

// message @ 14f8ef980

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::Status::message(void)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::Status::message
          (Status *this,basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__)

{
  longlong lVar1;
  ulong64 uVar2;
  char *pcVar4;
  char *local_18;
  ulong64 uVar3;
  
  if ((this->rep_ & 1) != 0) {
    if (((byte)this->rep_ >> 1 & 1) == 0) {
      uVar2 = 0;
      local_18 = (char *)0x0;
    }
    else {
      local_18 = "Status accessed after move.";
      uVar3 = 0xffffffffffffffff;
      do {
        uVar2 = uVar3 + 1;
        lVar1 = uVar3 + 1;
        uVar3 = uVar2;
      } while ("Status accessed after move."[lVar1] != '\0');
    }
    __return_storage_ptr__->_Mydata = local_18;
    __return_storage_ptr__->_Mysize = uVar2;
    return __return_storage_ptr__;
  }
  uVar2 = this->rep_;
  pcVar4 = (char *)(uVar2 + 8);
  if (0xf < *(ulonglong *)(uVar2 + 0x20)) {
    pcVar4 = *(char **)(uVar2 + 8);
  }
  uVar2 = *(ulong64 *)(uVar2 + 0x18);
  __return_storage_ptr__->_Mydata = pcVar4;
  __return_storage_ptr__->_Mysize = uVar2;
  return __return_storage_ptr__;
}

// raw_code @ 14f8efa10

/* public: int __cdecl absl::lts_20240722::Status::raw_code(void)const __ptr64 */

int __thiscall absl::lts_20240722::Status::raw_code(Status *this)

{
  ulonglong uVar1;
  
  uVar1 = this->rep_;
  if ((uVar1 & 1) != 0) {
    return (int)(uVar1 >> 2);
  }
  return *(int *)(uVar1 + 4);
}

// FUN_150293910 @ 150293910

void FUN_150293910(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x68),0x30);
  return;
}

// FUN_1502939a0 @ 1502939a0

void FUN_1502939a0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58),0x30);
  return;
}

// FUN_1502939f0 @ 1502939f0

void FUN_1502939f0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58),0x30);
  return;
}

// FUN_150293a40 @ 150293a40

void FUN_150293a40(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58),0x30);
  return;
}

// FUN_150293a90 @ 150293a90

void FUN_150293a90(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58),0x30);
  return;
}

// FUN_150293ae0 @ 150293ae0

void FUN_150293ae0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58),0x30);
  return;
}

// FUN_150293b70 @ 150293b70

void FUN_150293b70(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58),0x30);
  return;
}

// FUN_150293bc0 @ 150293bc0

void FUN_150293bc0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58),0x30);
  return;
}

// FUN_150293c10 @ 150293c10

void FUN_150293c10(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58),0x30);
  return;
}

// FUN_150293ca0 @ 150293ca0

void FUN_150293ca0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58),0x30);
  return;
}

// FUN_150293cf0 @ 150293cf0

void FUN_150293cf0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58),0x30);
  return;
}

// FUN_150293d40 @ 150293d40

void FUN_150293d40(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58),0x30);
  return;
}

// FUN_150293d90 @ 150293d90

void FUN_150293d90(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x38),0x30);
  return;
}

// FUN_150293de0 @ 150293de0

void FUN_150293de0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58),0x30);
  return;
}

// FUN_150293e50 @ 150293e50

void FUN_150293e50(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58),0x30);
  return;
}

// FUN_150293ea0 @ 150293ea0

void FUN_150293ea0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58),0x30);
  return;
}

// FUN_150293ef0 @ 150293ef0

void FUN_150293ef0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58),0x30);
  return;
}

// FUN_150293f40 @ 150293f40

void FUN_150293f40(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x58),0x30);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 7

// EndsWithTypeName @ 14fb70a10

/* bool __cdecl google::protobuf::internal::EndsWithTypeName(class
   std::basic_string_view<char,struct std::char_traits<char> >,class
   std::basic_string_view<char,struct std::char_traits<char> >) */

bool __cdecl
google::protobuf::internal::EndsWithTypeName
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  ulonglong _Size;
  int iVar1;
  
  _Size = param_2->_Mysize;
  if ((_Size < param_1->_Mysize) && (param_1->_Mydata[param_1->_Mysize + (-1 - _Size)] == '/')) {
    if (_Size == 0) {
      return true;
    }
    if ((_Size <= param_1->_Mysize) &&
       (iVar1 = memcmp(param_1->_Mydata + (param_1->_Mysize - _Size),param_2->_Mydata,_Size),
       iVar1 == 0)) {
      return true;
    }
  }
  return false;
}

// GetTypeUrl @ 14fb70a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   google::protobuf::internal::GetTypeUrl(class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::basic_string_view<char,struct std::char_traits<char> >) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
google::protobuf::internal::GetTypeUrl
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  undefined1 auStack_d8 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_b0;
  undefined8 uStack_a8;
  AlphaNum local_a0;
  AlphaNum local_70;
  AlphaNum local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if ((param_2->_Mysize == 0) || (param_2->_Mydata[param_2->_Mysize - 1] != '/')) {
    local_70.piece_._Mydata = param_1->_Mydata;
    local_70.piece_._Mysize = param_1->_Mysize;
    uStack_a8 = 1;
    local_40.piece_._Mydata = param_2->_Mydata;
    local_40.piece_._Mysize = param_2->_Mysize;
    local_b0 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&s__;
    local_a0.piece_._Mydata = "/";
    local_a0.piece_._Mysize = 1;
    absl::lts_20240722::StrCat(__return_storage_ptr__,&local_40,&local_a0,&local_70);
  }
  else {
    local_a0.piece_._Mydata = param_1->_Mydata;
    local_a0.piece_._Mysize = param_1->_Mysize;
    local_70.piece_._Mydata = param_2->_Mydata;
    local_70.piece_._Mysize = param_2->_Mysize;
    local_b0 = __return_storage_ptr__;
    absl::lts_20240722::StrCat(__return_storage_ptr__,&local_70,&local_a0);
  }
  return __return_storage_ptr__;
}

// InternalIsLite @ 14fb70b50

/* bool __cdecl google::protobuf::internal::InternalIsLite(class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::basic_string_view<char,struct std::char_traits<char> >) */

bool __cdecl
google::protobuf::internal::InternalIsLite
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  ulonglong _Size;
  int iVar1;
  
  _Size = param_1->_Mysize;
  if ((_Size < param_2->_Mysize) && (param_2->_Mydata[(param_2->_Mysize - _Size) + -1] == '/')) {
    if (_Size == 0) {
      return true;
    }
    if ((_Size <= param_2->_Mysize) &&
       (iVar1 = memcmp(param_2->_Mydata + (param_2->_Mysize - _Size),param_1->_Mydata,_Size),
       iVar1 == 0)) {
      return true;
    }
  }
  return false;
}

// InternalPackFromLite @ 14fb70bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl google::protobuf::internal::InternalPackFromLite(class google::protobuf::MessageLite
   const & __ptr64,class std::basic_string_view<char,struct std::char_traits<char> >,class
   std::basic_string_view<char,struct std::char_traits<char> >,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64) */

bool __cdecl
google::protobuf::internal::InternalPackFromLite
          (MessageLite *param_1,basic_string_view<char,std::char_traits<char>_> *param_2,
          basic_string_view<char,std::char_traits<char>_> *param_3,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_4,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_5)

{
  bool bVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  undefined1 auStack_158 [40];
  undefined *local_130;
  undefined8 uStack_128;
  _Bxty local_120;
  ulonglong local_108;
  AlphaNum local_100;
  AlphaNum local_d0;
  AlphaNum local_a0;
  AlphaNum local_70;
  AlphaNum local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_158;
  if ((param_2->_Mysize == 0) || (param_2->_Mydata[param_2->_Mysize - 1] != '/')) {
    local_a0.piece_._Mydata = param_3->_Mydata;
    local_a0.piece_._Mysize = param_3->_Mysize;
    uStack_128 = 1;
    local_40.piece_._Mydata = param_2->_Mydata;
    local_40.piece_._Mysize = param_2->_Mysize;
    local_130 = &s__;
    local_70.piece_._Mydata = "/";
    local_70.piece_._Mysize = 1;
    absl::lts_20240722::StrCat
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_120,
               &local_40,&local_70,&local_a0);
  }
  else {
    local_100.piece_._Mydata = param_3->_Mydata;
    local_100.piece_._Mysize = param_3->_Mysize;
    local_d0.piece_._Mydata = param_2->_Mydata;
    local_d0.piece_._Mysize = param_2->_Mysize;
    absl::lts_20240722::StrCat
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_120,
               &local_d0,&local_100);
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            (param_4,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_120);
  if (0xf < local_108) {
    uVar3 = local_108 + 1;
    uVar2 = local_120._Ptr;
    if (0xfff < uVar3) {
      uVar2 = *(undefined8 *)(local_120._Ptr + -8);
      uVar3 = local_108 + 0x28;
      if ((char *)0x1f < local_120._Ptr + (-8 - uVar2)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar2,uVar3);
  }
  bVar1 = MessageLite::SerializeToString(param_1,param_5);
  return bVar1;
}

// InternalUnpackToLite @ 14fb70d10

/* bool __cdecl google::protobuf::internal::InternalUnpackToLite(class
   std::basic_string_view<char,struct std::char_traits<char> >,class
   std::basic_string_view<char,struct std::char_traits<char> >,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64,class
   google::protobuf::MessageLite * __ptr64) */

bool __cdecl
google::protobuf::internal::InternalUnpackToLite
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3,
          MessageLite *param_4)

{
  ulonglong _Size;
  bool bVar1;
  int iVar2;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  _Size = param_1->_Mysize;
  if ((_Size < param_2->_Mysize) && (param_2->_Mydata[(param_2->_Mysize - _Size) + -1] == '/')) {
    if (_Size == 0) {
LAB_14fb70d76:
      local_18._Mydata = (char *)param_3;
      if (0xf < (param_3->_Mypair)._Myval2._Myres) {
        local_18._Mydata = (param_3->_Mypair)._Myval2._Bx._Ptr;
      }
      local_18._Mysize = (param_3->_Mypair)._Myval2._Mysize;
      bVar1 = MessageLite::ParseFromString(param_4,&local_18);
      return bVar1;
    }
    if (_Size <= param_2->_Mysize) {
      iVar2 = memcmp(param_2->_Mydata + (param_2->_Mysize - _Size),param_1->_Mydata,_Size);
      if (iVar2 == 0) goto LAB_14fb70d76;
    }
  }
  return false;
}

// ParseAnyTypeUrl @ 14fb70dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl google::protobuf::internal::ParseAnyTypeUrl(class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64) */

bool __cdecl
google::protobuf::internal::ParseAnyTypeUrl
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  longlong lVar6;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar3 = param_1->_Mysize;
  pcVar4 = param_1->_Mydata;
  if (uVar3 == 0) {
    return false;
  }
  lVar6 = -1;
  if (uVar3 - 1 != -1) {
    lVar6 = uVar3 - 1;
  }
  pcVar5 = pcVar4 + lVar6;
  cVar2 = *pcVar5;
  while (cVar2 != '/') {
    if (pcVar5 == pcVar4) {
      return false;
    }
    pcVar5 = pcVar5 + -1;
    cVar2 = *pcVar5;
  }
  if ((longlong)pcVar5 - (longlong)pcVar4 == -1) {
    return false;
  }
  uVar1 = ((longlong)pcVar5 - (longlong)pcVar4) + 1;
  if (uVar1 == uVar3) {
    return false;
  }
  if (param_2 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
    uVar9 = uVar1;
    if (uVar3 < uVar1) {
      uVar9 = uVar3;
    }
    local_58._Ptr = (char *)0x0;
    local_58._8_8_ = 0;
    local_48 = 0;
    uStack_40 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,pcVar4,
               uVar9);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
              (param_2,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58)
    ;
    if (0xf < uStack_40) {
      uVar8 = uStack_40 + 1;
      uVar7 = local_58._Ptr;
      if (0xfff < uVar8) {
        uVar7 = *(undefined8 *)(local_58._Ptr + -8);
        uVar8 = uStack_40 + 0x28;
        if ((char *)0x1f < local_58._Ptr + (-8 - uVar7)) goto LAB_14fb70f35;
      }
      ::operator_delete((void *)uVar7,uVar8);
    }
  }
  if (uVar3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::basic_string_view<char,std::char_traits<char>_>::_Xran();
  }
  local_58._Ptr = (char *)0x0;
  local_58._8_8_ = 0;
  uVar8 = 0xffffffffffffffff;
  if (uVar3 - uVar1 != 0xffffffffffffffff) {
    uVar8 = uVar3 - uVar1;
  }
  local_48 = 0;
  uStack_40 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
             pcVar4 + uVar1,uVar8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator=
            (param_3,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58);
  if (0xf < uStack_40) {
    uVar8 = uStack_40 + 1;
    uVar7 = local_58._Ptr;
    if (0xfff < uVar8) {
      uVar7 = *(undefined8 *)(local_58._Ptr + -8);
      uVar8 = uStack_40 + 0x28;
      if ((char *)0x1f < local_58._Ptr + (-8 - uVar7)) {
LAB_14fb70f35:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete((void *)uVar7,uVar8);
  }
  return true;
}

// ParseAnyTypeUrl @ 14fb70f80

/* bool __cdecl google::protobuf::internal::ParseAnyTypeUrl(class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64) */

bool __cdecl
google::protobuf::internal::ParseAnyTypeUrl
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  bool bVar1;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  bVar1 = ParseAnyTypeUrl(&local_18,
                          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0,
                          param_2);
  return bVar1;
}


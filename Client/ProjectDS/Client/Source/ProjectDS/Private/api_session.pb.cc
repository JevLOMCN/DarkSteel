// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 213

// `dynamic_initializer_for_'_ExternalLoginAndCreateSessionRequest_default_instance_'' @ 14128ef40

void __cdecl
api_session::_dynamic_initializer_for___ExternalLoginAndCreateSessionRequest_default_instance___
          (void)

{
  atexit(_dynamic_atexit_destructor_for___ExternalLoginAndCreateSessionRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ExternalLoginAndCreateSessionResponse_default_instance_'' @ 14128ef60

void __cdecl
api_session::_dynamic_initializer_for___ExternalLoginAndCreateSessionResponse_default_instance___
          (void)

{
  atexit(_dynamic_atexit_destructor_for___ExternalLoginAndCreateSessionResponse_default_instance___)
  ;
  return;
}

// `dynamic_initializer_for_'_InvalidHttpResponse_default_instance_'' @ 14128ef80

void __cdecl api_session::_dynamic_initializer_for___InvalidHttpResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___InvalidHttpResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_JwtRefreshResponse_default_instance_'' @ 14128efa0

void __cdecl api_session::_dynamic_initializer_for___JwtRefreshResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___JwtRefreshResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_LoginAndCreateSessionRequest_default_instance_'' @ 14128efc0

void __cdecl
api_session::_dynamic_initializer_for___LoginAndCreateSessionRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___LoginAndCreateSessionRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_LoginAndCreateSessionResponse_default_instance_'' @ 14128efe0

void __cdecl
api_session::_dynamic_initializer_for___LoginAndCreateSessionResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___LoginAndCreateSessionResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_LoginAndRegisterPlayerRequest_default_instance_'' @ 14128f000

void __cdecl
api_session::_dynamic_initializer_for___LoginAndRegisterPlayerRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___LoginAndRegisterPlayerRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_LoginAndRegisterPlayerResponse_default_instance_'' @ 14128f020

void __cdecl
api_session::_dynamic_initializer_for___LoginAndRegisterPlayerResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___LoginAndRegisterPlayerResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_LogoutAndRemoveSessionRequest_default_instance_'' @ 14128f040

void __cdecl
api_session::_dynamic_initializer_for___LogoutAndRemoveSessionRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___LogoutAndRemoveSessionRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_LogoutAndRemoveSessionResponse_default_instance_'' @ 14128f060

void __cdecl
api_session::_dynamic_initializer_for___LogoutAndRemoveSessionResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___LogoutAndRemoveSessionResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_RegisterPlayerRequest_default_instance_'' @ 14128f080

void __cdecl api_session::_dynamic_initializer_for___RegisterPlayerRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___RegisterPlayerRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_RegisterPlayerResponse_default_instance_'' @ 14128f0a0

void __cdecl
api_session::_dynamic_initializer_for___RegisterPlayerResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___RegisterPlayerResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_SearchNicknameResponse_default_instance_'' @ 14128f0c0

void __cdecl
api_session::_dynamic_initializer_for___SearchNicknameResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SearchNicknameResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14128f0e0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_api_5fsession_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c0ea870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
api_session::RegisterPlayerRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  ulong64 uVar4;
  Arena *pAVar5;
  undefined1 auStackY_68 [32];
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar3->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar5);
          if (0xf < uStack_20) {
            uVar4 = uStack_20 + 1;
            uVar2 = local_38._Ptr;
            if (0xfff < uVar4) {
              uVar2 = *(undefined8 *)(local_38._Ptr + -8);
              uVar4 = uStack_20 + 0x28;
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar2)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar2,uVar4);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar3,pAVar5);
      }
    }
    if ((uVar1 & 2) != 0) {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._padding_ & 0xfffffffffffffffc);
      if ((pbVar3->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 2),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar5);
          if (0xf < uStack_20) {
            uVar4 = uStack_20 + 1;
            uVar2 = local_38._Ptr;
            if (0xfff < uVar4) {
              uVar2 = *(undefined8 *)(local_38._Ptr + -8);
              uVar4 = uStack_20 + 0x28;
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar2)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar2,uVar4);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
        pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 2),pbVar3,pAVar5);
      }
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c0eaaa0

void __thiscall api_session::RegisterPlayerRequest::Clear(RegisterPlayerRequest *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      puVar2 = (undefined8 *)((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar3 & 2) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).password_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  this_01 = &this->_padding_;
  if ((*this_01 & 1) == 0) {
    return;
  }
  if ((*this_01 & 1) == 0) {
    this_00 = google::protobuf::internal::InternalMetadata::
              mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>
                        ((InternalMetadata *)this_01);
  }
  else {
    this_00 = (UnknownFieldSet *)((*this_01 & 0xfffffffffffffffeU) + 8);
  }
  uVar1 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar3 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar1 & 3;
  }
  if (uVar3 != 0) {
    google::protobuf::UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14c0eab00

ulong64 __thiscall api_session::RegisterPlayerRequest::ByteSizeLong(RegisterPlayerRequest *this)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  __uint64 _Var5;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var5 = 0;
  if ((uVar3 & 3) != 0) {
    if (((uVar3 & 1) != 0) &&
       (lVar1 = *(longlong *)
                 (((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
       lVar1 != 0)) {
      uVar2 = (uint)lVar1 | 1;
      if (__isa_available < 5) {
        iVar4 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 0x1f - iVar4;
      }
      else {
        iVar4 = LZCOUNT(uVar2);
      }
      _Var5 = (ulonglong)(iVar4 * -9 + 0x160U >> 6) + 1 + lVar1;
    }
    if (((uVar3 & 2) != 0) &&
       (lVar1 = *(longlong *)
                 (((ulonglong)(this->_impl_).password_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10
                 ), lVar1 != 0)) {
      uVar3 = (uint)lVar1 | 1;
      if (__isa_available < 5) {
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 0x1f - iVar4;
      }
      else {
        iVar4 = LZCOUNT(uVar3);
      }
      _Var5 = _Var5 + 1 + (ulonglong)(iVar4 * -9 + 0x160U >> 6) + lVar1;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c0eabd0

uchar * __thiscall
api_session::RegisterPlayerRequest::_InternalSerialize
          (RegisterPlayerRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  uchar *puVar2;
  char *pcVar3;
  char *pcVar4;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_28._Mysize = 0x24;
      local_28._Mydata = "api_session.RegisterPlayerRequest.id";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,1,&local_28,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).password_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_28._Mysize = 0x2a;
      local_28._Mydata = "api_session.RegisterPlayerRequest.password";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,2,&local_28,param_1);
    }
  }
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c0ead40

ClassData * __thiscall api_session::RegisterPlayerRequest::GetClassData(RegisterPlayerRequest *this)

{
  return (ClassData *)&RegisterPlayerRequest_class_data_;
}

// PlacementNew_ @ 14c0ead60

void * __cdecl
api_session::RegisterPlayerRequest::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7RegisterPlayerRequest_api_session__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x20) =
       &google::protobuf::internal::fixed_address_empty_string;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0ead90

void * __thiscall
api_session::RegisterPlayerRequest::_scalar_deleting_destructor_
          (RegisterPlayerRequest *this,uint param_1)

{
  this->_padding_ = (longlong)&___7RegisterPlayerRequest_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).id_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).password_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// MergeImpl @ 14c0eadf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
api_session::LoginAndRegisterPlayerRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  ulong64 uVar5;
  Arena *pAVar6;
  undefined1 auStackY_68 [32];
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar4->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar6);
          if (0xf < uStack_20) {
            uVar5 = uStack_20 + 1;
            uVar3 = local_38._Ptr;
            if (0xfff < uVar5) {
              uVar3 = *(undefined8 *)(local_38._Ptr + -8);
              uVar5 = uStack_20 + 0x28;
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar3,uVar5);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar4,pAVar6);
      }
    }
    if ((uVar1 & 2) != 0) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._padding_ & 0xfffffffffffffffc);
      if ((pbVar4->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 2),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar6);
          if (0xf < uStack_20) {
            uVar5 = uStack_20 + 1;
            uVar3 = local_38._Ptr;
            if (0xfff < uVar5) {
              uVar3 = *(undefined8 *)(local_38._Ptr + -8);
              uVar5 = uStack_20 + 0x28;
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar3,uVar5);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
        pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 2),pbVar4,pAVar6);
      }
    }
    if (((uVar1 & 4) != 0) && (iVar2 = (int)param_2[2]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 & 8) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[2]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[2]._internal_metadata_.ptr_ + 4) = iVar2;
    }
    if (((uVar1 & 0x10) != 0) && (iVar2 = (int)param_2[3]._padding_, iVar2 != 0)) {
      *(int *)&param_1[3]._padding_ = iVar2;
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c0eb050

void __thiscall
api_session::LoginAndRegisterPlayerRequest::Clear(LoginAndRegisterPlayerRequest *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      puVar2 = (undefined8 *)((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar3 & 2) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).device_description_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
      ;
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
  }
  if ((uVar3 & 0x1c) != 0) {
    (this->_impl_).sdk_type_ = 0;
    (this->_impl_).os_type_ = 0;
    (this->_impl_).prefer_world_id_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  this_01 = &this->_padding_;
  if ((*this_01 & 1) == 0) {
    return;
  }
  if ((*this_01 & 1) == 0) {
    this_00 = google::protobuf::internal::InternalMetadata::
              mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>
                        ((InternalMetadata *)this_01);
  }
  else {
    this_00 = (UnknownFieldSet *)((*this_01 & 0xfffffffffffffffeU) + 8);
  }
  uVar1 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar3 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar1 & 3;
  }
  if (uVar3 != 0) {
    google::protobuf::UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14c0eb0c0

ulong64 __thiscall
api_session::LoginAndRegisterPlayerRequest::ByteSizeLong(LoginAndRegisterPlayerRequest *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulong64 uVar4;
  int iVar5;
  __uint64 _Var6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((uVar1 & 0x1f) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
       lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var6 = (ulonglong)(iVar5 * -9 + 0x160U >> 6) + 1 + lVar2;
    }
    if (((uVar1 & 2) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).device_description_.tagged_ptr_.ptr_ &
                  0xfffffffffffffffc) + 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var6 = _Var6 + 1 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 4) != 0) && (iVar5 = (this->_impl_).sdk_type_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 8) != 0) && (iVar5 = (this->_impl_).os_type_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 0x10) != 0) && (iVar5 = (this->_impl_).prefer_world_id_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c0eb1e0

uchar * __thiscall
api_session::LoginAndRegisterPlayerRequest::_InternalSerialize
          (LoginAndRegisterPlayerRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  uchar *puVar3;
  char *pcVar4;
  Impl_ *pIVar5;
  char *pcVar6;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar6 = (char *)((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar6 + 0x10);
    if (*(longlong *)(pcVar6 + 0x10) != 0) {
      pcVar4 = pcVar6;
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar4 = *(char **)pcVar6;
      }
      local_28._Mysize = 0x2c;
      local_28._Mydata = "api_session.LoginAndRegisterPlayerRequest.id";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar4,(int)*(longlong *)(pcVar6 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar6 = *(char **)pcVar6;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar6;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,1,&local_28,param_1);
    }
  }
  pIVar5 = &this->_impl_;
  if ((((pIVar5->_has_bits_).has_bits_[0] & 4) != 0) &&
     (iVar2 = (this->_impl_).sdk_type_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  if ((((pIVar5->_has_bits_).has_bits_[0] & 8) != 0) &&
     (iVar2 = (this->_impl_).os_type_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar2,param_1);
  }
  if (((pIVar5->_has_bits_).has_bits_[0] & 2) != 0) {
    pcVar6 = (char *)((ulonglong)(this->_impl_).device_description_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar6 + 0x10);
    if (*(longlong *)(pcVar6 + 0x10) != 0) {
      pcVar4 = pcVar6;
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar4 = *(char **)pcVar6;
      }
      local_28._Mysize = 0x3c;
      local_28._Mydata = "api_session.LoginAndRegisterPlayerRequest.device_description";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar4,(int)*(longlong *)(pcVar6 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar6 = *(char **)pcVar6;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar6;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,5,&local_28,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (iVar2 = (this->_impl_).prefer_world_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<6>
                        (param_2,iVar2,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14c0eb3b0

ClassData * __thiscall
api_session::LoginAndRegisterPlayerRequest::GetClassData(LoginAndRegisterPlayerRequest *this)

{
  return (ClassData *)&LoginAndRegisterPlayerRequest_class_data_;
}

// PlacementNew_ @ 14c0eb3d0

void * __cdecl
api_session::LoginAndRegisterPlayerRequest::PlacementNew_
          (void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7LoginAndRegisterPlayerRequest_api_session__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x20) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0eb410

void * __thiscall
api_session::LoginAndRegisterPlayerRequest::_scalar_deleting_destructor_
          (LoginAndRegisterPlayerRequest *this,uint param_1)

{
  this->_padding_ = (longlong)&___7LoginAndRegisterPlayerRequest_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).id_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).device_description_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// MergeImpl @ 14c0eb470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
api_session::LoginAndCreateSessionRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  ulong64 uVar5;
  Arena *pAVar6;
  undefined1 auStackY_68 [32];
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar4->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar6);
          if (0xf < uStack_20) {
            uVar5 = uStack_20 + 1;
            uVar3 = local_38._Ptr;
            if (0xfff < uVar5) {
              uVar3 = *(undefined8 *)(local_38._Ptr + -8);
              uVar5 = uStack_20 + 0x28;
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar3,uVar5);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar4,pAVar6);
      }
    }
    if ((uVar1 & 2) != 0) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._padding_ & 0xfffffffffffffffc);
      if ((pbVar4->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 2),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar6);
          if (0xf < uStack_20) {
            uVar5 = uStack_20 + 1;
            uVar3 = local_38._Ptr;
            if (0xfff < uVar5) {
              uVar3 = *(undefined8 *)(local_38._Ptr + -8);
              uVar5 = uStack_20 + 0x28;
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar3,uVar5);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
        pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 2),pbVar4,pAVar6);
      }
    }
    if ((uVar1 & 4) != 0) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar4->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
          pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[2]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar6);
          if (0xf < uStack_20) {
            uVar5 = uStack_20 + 1;
            uVar3 = local_38._Ptr;
            if (0xfff < uVar5) {
              uVar3 = *(undefined8 *)(local_38._Ptr + -8);
              uVar5 = uStack_20 + 0x28;
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar3,uVar5);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
        pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[2]._internal_metadata_,pbVar4,pAVar6);
      }
    }
    if (((uVar1 & 8) != 0) && (iVar2 = (int)param_2[3]._padding_, iVar2 != 0)) {
      *(int *)&param_1[3]._padding_ = iVar2;
    }
    if (((uVar1 & 0x10) != 0) && (iVar2 = *(int *)((longlong)&param_2[3]._padding_ + 4), iVar2 != 0)
       ) {
      *(int *)((longlong)&param_1[3]._padding_ + 4) = iVar2;
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c0eb790

void __thiscall api_session::LoginAndCreateSessionRequest::Clear(LoginAndCreateSessionRequest *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 7) != 0) {
    if ((uVar3 & 1) != 0) {
      puVar2 = (undefined8 *)((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar3 & 2) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).password_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar3 & 4) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).device_description_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
      ;
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
  }
  if ((uVar3 & 0x18) != 0) {
    (this->_impl_).sdk_type_ = 0;
    (this->_impl_).os_type_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  this_01 = &this->_padding_;
  if ((*this_01 & 1) == 0) {
    return;
  }
  if ((*this_01 & 1) == 0) {
    this_00 = google::protobuf::internal::InternalMetadata::
              mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>
                        ((InternalMetadata *)this_01);
  }
  else {
    this_00 = (UnknownFieldSet *)((*this_01 & 0xfffffffffffffffeU) + 8);
  }
  uVar1 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar3 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar1 & 3;
  }
  if (uVar3 != 0) {
    google::protobuf::UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14c0eb820

ulong64 __thiscall
api_session::LoginAndCreateSessionRequest::ByteSizeLong(LoginAndCreateSessionRequest *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulong64 uVar4;
  int iVar5;
  __uint64 _Var6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((uVar1 & 0x1f) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
       lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var6 = (ulonglong)(iVar5 * -9 + 0x160U >> 6) + 1 + lVar2;
    }
    if (((uVar1 & 2) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).password_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10
                 ), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var6 = _Var6 + 1 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 4) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).device_description_.tagged_ptr_.ptr_ &
                  0xfffffffffffffffc) + 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var6 = _Var6 + 1 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 8) != 0) && (iVar5 = (this->_impl_).sdk_type_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 0x10) != 0) && (iVar5 = (this->_impl_).os_type_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c0eb970

uchar * __thiscall
api_session::LoginAndCreateSessionRequest::_InternalSerialize
          (LoginAndCreateSessionRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  uchar *puVar3;
  char *pcVar4;
  char *pcVar5;
  Impl_ *pIVar6;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar5 = (char *)((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar5 + 0x10);
    if (*(longlong *)(pcVar5 + 0x10) != 0) {
      pcVar4 = pcVar5;
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar4 = *(char **)pcVar5;
      }
      local_28._Mysize = 0x2b;
      local_28._Mydata = "api_session.LoginAndCreateSessionRequest.id";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar4,(int)*(longlong *)(pcVar5 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar5 = *(char **)pcVar5;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar5;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,1,&local_28,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pcVar5 = (char *)((ulonglong)(this->_impl_).password_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar5 + 0x10);
    if (*(longlong *)(pcVar5 + 0x10) != 0) {
      pcVar4 = pcVar5;
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar4 = *(char **)pcVar5;
      }
      local_28._Mysize = 0x31;
      local_28._Mydata = "api_session.LoginAndCreateSessionRequest.password";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar4,(int)*(longlong *)(pcVar5 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar5 = *(char **)pcVar5;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar5;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,2,&local_28,param_1);
    }
  }
  pIVar6 = &this->_impl_;
  if ((((pIVar6->_has_bits_).has_bits_[0] & 8) != 0) &&
     (iVar2 = (this->_impl_).sdk_type_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  if ((((pIVar6->_has_bits_).has_bits_[0] & 0x10) != 0) &&
     (iVar2 = (this->_impl_).os_type_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar2,param_1);
  }
  if (((pIVar6->_has_bits_).has_bits_[0] & 4) != 0) {
    pcVar5 = (char *)((ulonglong)(this->_impl_).device_description_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar5 + 0x10);
    if (*(longlong *)(pcVar5 + 0x10) != 0) {
      pcVar4 = pcVar5;
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar4 = *(char **)pcVar5;
      }
      local_28._Mysize = 0x3b;
      local_28._Mydata = "api_session.LoginAndCreateSessionRequest.device_description";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar4,(int)*(longlong *)(pcVar5 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar5 = *(char **)pcVar5;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar5;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,5,&local_28,param_1);
    }
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar3;
}

// GetClassData @ 14c0ebbb0

ClassData * __thiscall
api_session::LoginAndCreateSessionRequest::GetClassData(LoginAndCreateSessionRequest *this)

{
  return (ClassData *)&LoginAndCreateSessionRequest_class_data_;
}

// PlacementNew_ @ 14c0ebbd0

void * __cdecl
api_session::LoginAndCreateSessionRequest::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7LoginAndCreateSessionRequest_api_session__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x20) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x28) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0ebc10

void * __thiscall
api_session::LoginAndCreateSessionRequest::_scalar_deleting_destructor_
          (LoginAndCreateSessionRequest *this,uint param_1)

{
  this->_padding_ = (longlong)&___7LoginAndCreateSessionRequest_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).id_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).password_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).device_description_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// MergeImpl @ 14c0ebc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl api_session::JwtRefreshResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  ulong64 uVar4;
  Arena *pAVar5;
  undefined1 auStackY_68 [32];
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar3->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar5);
          if (0xf < uStack_20) {
            uVar4 = uStack_20 + 1;
            uVar2 = local_38._Ptr;
            if (0xfff < uVar4) {
              uVar2 = *(undefined8 *)(local_38._Ptr + -8);
              uVar4 = uStack_20 + 0x28;
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar2)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar2,uVar4);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar3,pAVar5);
      }
    }
    if (((uVar1 & 2) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c0ebde0

void __thiscall api_session::JwtRefreshResponse::Clear(JwtRefreshResponse *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    puVar2 = (undefined8 *)
             ((ulonglong)(this->_impl_).refresh_jwt_key_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar2[2] = 0;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
  }
  (this->_impl_).player_uid_ = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  this_01 = &this->_padding_;
  if ((*this_01 & 1) == 0) {
    return;
  }
  if ((*this_01 & 1) == 0) {
    this_00 = google::protobuf::internal::InternalMetadata::
              mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>
                        ((InternalMetadata *)this_01);
  }
  else {
    this_00 = (UnknownFieldSet *)((*this_01 & 0xfffffffffffffffeU) + 8);
  }
  uVar1 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar3 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar1 & 3;
  }
  if (uVar3 != 0) {
    google::protobuf::UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14c0ebe20

ulong64 __thiscall api_session::JwtRefreshResponse::ByteSizeLong(JwtRefreshResponse *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulong64 uVar4;
  int iVar5;
  __uint64 _Var6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).refresh_jwt_key_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
                 + 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var6 = (ulonglong)(iVar5 * -9 + 0x160U >> 6) + 1 + lVar2;
    }
    if (((uVar1 & 2) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar4;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c0ebec0

uchar * __thiscall
api_session::JwtRefreshResponse::_InternalSerialize
          (JwtRefreshResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  longlong lVar2;
  uchar *puVar3;
  char *pcVar4;
  char *pcVar5;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar2,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar5 = (char *)((ulonglong)(this->_impl_).refresh_jwt_key_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar5 + 0x10);
    if (*(longlong *)(pcVar5 + 0x10) != 0) {
      pcVar4 = pcVar5;
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar4 = *(char **)pcVar5;
      }
      local_18._Mysize = 0x2e;
      local_18._Mydata = "api_session.JwtRefreshResponse.refresh_jwt_key";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar4,(int)*(longlong *)(pcVar5 + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar5 = *(char **)pcVar5;
      }
      local_18._Mysize = *puVar1;
      local_18._Mydata = pcVar5;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,2,&local_18,param_1);
    }
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar3;
}

// GetClassData @ 14c0ebfd0

ClassData * __thiscall api_session::JwtRefreshResponse::GetClassData(JwtRefreshResponse *this)

{
  return (ClassData *)&JwtRefreshResponse_class_data_;
}

// PlacementNew_ @ 14c0ebff0

void * __cdecl
api_session::JwtRefreshResponse::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7JwtRefreshResponse_api_session__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0ec020

void * __thiscall
api_session::JwtRefreshResponse::_scalar_deleting_destructor_(JwtRefreshResponse *this,uint param_1)

{
  this->_padding_ = (longlong)&___7JwtRefreshResponse_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).refresh_jwt_key_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// MergeImpl @ 14c0ec080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
api_session::ExternalLoginAndCreateSessionRequest::MergeImpl
          (MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  ulong64 uVar5;
  Arena *pAVar6;
  undefined1 auStackY_68 [32];
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar4->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar6);
          if (0xf < uStack_20) {
            uVar5 = uStack_20 + 1;
            uVar3 = local_38._Ptr;
            if (0xfff < uVar5) {
              uVar3 = *(undefined8 *)(local_38._Ptr + -8);
              uVar5 = uStack_20 + 0x28;
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar3,uVar5);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar4,pAVar6);
      }
    }
    if ((uVar1 & 2) != 0) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._padding_ & 0xfffffffffffffffc);
      if ((pbVar4->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 2),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar6);
          if (0xf < uStack_20) {
            uVar5 = uStack_20 + 1;
            uVar3 = local_38._Ptr;
            if (0xfff < uVar5) {
              uVar3 = *(undefined8 *)(local_38._Ptr + -8);
              uVar5 = uStack_20 + 0x28;
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar3,uVar5);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
        pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 2),pbVar4,pAVar6);
      }
    }
    if ((uVar1 & 4) != 0) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar4->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
          pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[2]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar6);
          if (0xf < uStack_20) {
            uVar5 = uStack_20 + 1;
            uVar3 = local_38._Ptr;
            if (0xfff < uVar5) {
              uVar3 = *(undefined8 *)(local_38._Ptr + -8);
              uVar5 = uStack_20 + 0x28;
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar3,uVar5);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
        pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[2]._internal_metadata_,pbVar4,pAVar6);
      }
    }
    if (((uVar1 & 8) != 0) && (iVar2 = (int)param_2[3]._padding_, iVar2 != 0)) {
      *(int *)&param_1[3]._padding_ = iVar2;
    }
    if (((uVar1 & 0x10) != 0) && (iVar2 = *(int *)((longlong)&param_2[3]._padding_ + 4), iVar2 != 0)
       ) {
      *(int *)((longlong)&param_1[3]._padding_ + 4) = iVar2;
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c0ec3a0

void __thiscall
api_session::ExternalLoginAndCreateSessionRequest::Clear(ExternalLoginAndCreateSessionRequest *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 7) != 0) {
    if ((uVar3 & 1) != 0) {
      puVar2 = (undefined8 *)((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar3 & 2) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).password_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar3 & 4) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).device_description_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
      ;
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
  }
  if ((uVar3 & 0x18) != 0) {
    (this->_impl_).sdk_type_ = 0;
    (this->_impl_).os_type_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  this_01 = &this->_padding_;
  if ((*this_01 & 1) == 0) {
    return;
  }
  if ((*this_01 & 1) == 0) {
    this_00 = google::protobuf::internal::InternalMetadata::
              mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>
                        ((InternalMetadata *)this_01);
  }
  else {
    this_00 = (UnknownFieldSet *)((*this_01 & 0xfffffffffffffffeU) + 8);
  }
  uVar1 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar3 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar1 & 3;
  }
  if (uVar3 != 0) {
    google::protobuf::UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14c0ec430

ulong64 __thiscall
api_session::ExternalLoginAndCreateSessionRequest::ByteSizeLong
          (ExternalLoginAndCreateSessionRequest *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulong64 uVar4;
  int iVar5;
  __uint64 _Var6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((uVar1 & 0x1f) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
       lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var6 = (ulonglong)(iVar5 * -9 + 0x160U >> 6) + 1 + lVar2;
    }
    if (((uVar1 & 2) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).password_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10
                 ), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var6 = _Var6 + 1 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 4) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).device_description_.tagged_ptr_.ptr_ &
                  0xfffffffffffffffc) + 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var6 = _Var6 + 1 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 8) != 0) && (iVar5 = (this->_impl_).sdk_type_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 0x10) != 0) && (iVar5 = (this->_impl_).os_type_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c0ec580

uchar * __thiscall
api_session::ExternalLoginAndCreateSessionRequest::_InternalSerialize
          (ExternalLoginAndCreateSessionRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  uchar *puVar3;
  char *pcVar4;
  char *pcVar5;
  Impl_ *pIVar6;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar5 = (char *)((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar5 + 0x10);
    if (*(longlong *)(pcVar5 + 0x10) != 0) {
      pcVar4 = pcVar5;
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar4 = *(char **)pcVar5;
      }
      local_28._Mysize = 0x33;
      local_28._Mydata = "api_session.ExternalLoginAndCreateSessionRequest.id";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar4,(int)*(longlong *)(pcVar5 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar5 = *(char **)pcVar5;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar5;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,1,&local_28,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pcVar5 = (char *)((ulonglong)(this->_impl_).password_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar5 + 0x10);
    if (*(longlong *)(pcVar5 + 0x10) != 0) {
      pcVar4 = pcVar5;
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar4 = *(char **)pcVar5;
      }
      local_28._Mysize = 0x39;
      local_28._Mydata = "api_session.ExternalLoginAndCreateSessionRequest.password";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar4,(int)*(longlong *)(pcVar5 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar5 = *(char **)pcVar5;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar5;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,2,&local_28,param_1);
    }
  }
  pIVar6 = &this->_impl_;
  if ((((pIVar6->_has_bits_).has_bits_[0] & 8) != 0) &&
     (iVar2 = (this->_impl_).sdk_type_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  if ((((pIVar6->_has_bits_).has_bits_[0] & 0x10) != 0) &&
     (iVar2 = (this->_impl_).os_type_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar2,param_1);
  }
  if (((pIVar6->_has_bits_).has_bits_[0] & 4) != 0) {
    pcVar5 = (char *)((ulonglong)(this->_impl_).device_description_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar5 + 0x10);
    if (*(longlong *)(pcVar5 + 0x10) != 0) {
      pcVar4 = pcVar5;
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar4 = *(char **)pcVar5;
      }
      local_28._Mysize = 0x43;
      local_28._Mydata = "api_session.ExternalLoginAndCreateSessionRequest.device_description";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar4,(int)*(longlong *)(pcVar5 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar5 = *(char **)pcVar5;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar5;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,5,&local_28,param_1);
    }
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar3;
}

// GetClassData @ 14c0ec7c0

ClassData * __thiscall
api_session::ExternalLoginAndCreateSessionRequest::GetClassData
          (ExternalLoginAndCreateSessionRequest *this)

{
  return (ClassData *)&ExternalLoginAndCreateSessionRequest_class_data_;
}

// PlacementNew_ @ 14c0ec7e0

void * __cdecl
api_session::ExternalLoginAndCreateSessionRequest::PlacementNew_
          (void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ExternalLoginAndCreateSessionRequest_api_session__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x20) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x28) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0ec820

void * __thiscall
api_session::ExternalLoginAndCreateSessionRequest::_scalar_deleting_destructor_
          (ExternalLoginAndCreateSessionRequest *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ExternalLoginAndCreateSessionRequest_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).id_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).password_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).device_description_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// MergeImpl @ 14c0ec890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
api_session::SearchNicknameResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  void *pvVar4;
  undefined8 uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  ulong64 uVar7;
  Arena *pAVar8;
  Arena *pAVar9;
  undefined1 auStackY_78 [32];
  _Bxty local_40;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar3 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar8 = pAVar9;
  if (bVar3 != 0) {
    pAVar8 = (Arena *)(pAVar9->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar6->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          local_40._8_8_ = 0;
          local_40._Ptr = (char *)0x0;
          local_30 = ___xmm_000000000000000f0000000000000000;
          uStack_28 = _UNK_15076add8;
          if (bVar3 != 0) {
            pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
                     pAVar9);
          if (0xf < uStack_28) {
            uVar7 = uStack_28 + 1;
            uVar5 = local_40._Ptr;
            if (0xfff < uVar7) {
              uVar5 = *(undefined8 *)(local_40._Ptr + -8);
              uVar7 = uStack_28 + 0x28;
              if ((char *)0x1f < local_40._Ptr + (-8 - uVar5)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar5,uVar7);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        if (bVar3 != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar6,pAVar9);
      }
    }
    if ((uVar1 & 2) != 0) {
      if ((MessageLite *)param_1[2]._padding_ == (MessageLite *)0x0) {
        pvVar4 = google::protobuf::Arena::CopyConstruct<misc::NicknameData>
                           (pAVar8,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar4;
      }
      else {
        misc::NicknameData::MergeImpl
                  ((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
      }
    }
    if (((uVar1 & 4) != 0) && (iVar2 = (int)param_2[2]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar2;
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c0eca20

void __thiscall api_session::SearchNicknameResponse::Clear(SearchNicknameResponse *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      misc::NicknameData::Clear((this->_impl_).data_);
    }
  }
  (this->_impl_).error_code_ = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c0eca90

ulong64 __thiscall api_session::SearchNicknameResponse::ByteSizeLong(SearchNicknameResponse *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  int iVar6;
  __uint64 _Var7;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var7 = 0;
  if ((uVar1 & 7) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10
                 ), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar6 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 0x1f - iVar6;
      }
      else {
        iVar6 = LZCOUNT(uVar3);
      }
      _Var7 = (ulonglong)(iVar6 * -9 + 0x160U >> 6) + 1 + lVar2;
    }
    if ((uVar1 & 2) != 0) {
      uVar4 = misc::NicknameData::ByteSizeLong((this->_impl_).data_);
      uVar3 = (uint)uVar4 | 1;
      if (__isa_available < 5) {
        iVar6 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 0x1f - iVar6;
      }
      else {
        iVar6 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 1 + (iVar6 * -9 + 0x160U >> 6) + uVar4;
    }
    if (((uVar1 & 4) != 0) && (iVar6 = (this->_impl_).error_code_, iVar6 != 0)) {
      uVar5 = (longlong)iVar6 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar6 = 0x3f - (int)lVar2;
      }
      else {
        iVar6 = (int)LZCOUNT(uVar5);
      }
      _Var7 = _Var7 + 1 + (ulonglong)(iVar6 * -9 + 0x280U >> 6);
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c0ecbc0

uchar * __thiscall
api_session::SearchNicknameResponse::_InternalSerialize
          (SearchNicknameResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  ulonglong uVar2;
  uchar *puVar3;
  byte bVar4;
  char *pcVar5;
  char *pcVar6;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) && ((this->_impl_).error_code_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar2 = (ulonglong)(this->_impl_).error_code_;
    *param_1 = 8;
    while( true ) {
      param_1 = param_1 + 1;
      bVar4 = (byte)uVar2;
      if (uVar2 < 0x80) break;
      uVar2 = uVar2 >> 7;
      *param_1 = bVar4 | 0x80;
    }
    *param_1 = bVar4;
    param_1 = param_1 + 1;
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar6 = (char *)((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar6 + 0x10);
    if (*(longlong *)(pcVar6 + 0x10) != 0) {
      pcVar5 = pcVar6;
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar5 = *(char **)pcVar6;
      }
      local_18._Mysize = 0x2b;
      local_18._Mydata = "api_session.SearchNicknameResponse.nickname";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar5,(int)*(longlong *)(pcVar6 + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar6 = *(char **)pcVar6;
      }
      local_18._Mysize = *puVar1;
      local_18._Mydata = pcVar6;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,2,&local_18,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (3,(MessageLite *)(this->_impl_).data_,
                         (int)(((this->_impl_).data_)->_impl_)._cached_size_.atom_,param_1,param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14c0ecd30

ClassData * __thiscall
api_session::SearchNicknameResponse::GetClassData(SearchNicknameResponse *this)

{
  return (ClassData *)&SearchNicknameResponse_class_data_;
}

// PlacementNew_ @ 14c0ecd50

void * __cdecl
api_session::SearchNicknameResponse::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SearchNicknameResponse_api_session__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0ecd90

void * __thiscall
api_session::SearchNicknameResponse::_scalar_deleting_destructor_
          (SearchNicknameResponse *this,uint param_1)

{
  NicknameData *this_00;
  
  this->_padding_ = (longlong)&___7SearchNicknameResponse_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  this_00 = (this->_impl_).data_;
  if (this_00 != (NicknameData *)0x0) {
    misc::NicknameData::~NicknameData(this_00);
    ::operator_delete(this_00,0x40);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// MergeImpl @ 14c0ece10

void __cdecl
api_session::RegisterPlayerResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  MessageLite *pMVar3;
  void *pvVar4;
  Arena *pAVar5;
  
  pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pMVar2 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
      pMVar3 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
      if (pMVar2 == (MessageLite *)0x0) {
        pvVar4 = google::protobuf::Arena::CopyConstruct<ResponseBase>(pAVar5,pMVar3);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar4;
      }
      else {
        ResponseBase::MergeImpl(pMVar2,pMVar3);
      }
    }
    if (((uVar1 & 2) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c0ecec0

void __thiscall api_session::RegisterPlayerResponse::Clear(RegisterPlayerResponse *this)

{
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    ResponseBase::Clear((this->_impl_).response_base_);
  }
  (this->_impl_).new_player_uid_ = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c0ecf10

ulong64 __thiscall api_session::RegisterPlayerResponse::ByteSizeLong(RegisterPlayerResponse *this)

{
  uint uVar1;
  longlong lVar2;
  ulong64 uVar3;
  uint uVar4;
  int iVar5;
  __uint64 _Var6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = ResponseBase::ByteSizeLong((this->_impl_).response_base_);
      uVar4 = (uint)uVar3 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar4);
      }
      _Var6 = (ulonglong)(iVar5 * -9 + 0x160U >> 6) + 1 + uVar3;
    }
    if (((uVar1 & 2) != 0) && (lVar2 = (this->_impl_).new_player_uid_, lVar2 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar3;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c0ecfb0

uchar * __thiscall
api_session::RegisterPlayerResponse::_InternalSerialize
          (RegisterPlayerResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  longlong lVar2;
  uchar *puVar3;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).response_base_,
                         (int)(((this->_impl_).response_base_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar1 & 2) != 0) && (lVar2 = (this->_impl_).new_player_uid_, lVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar2,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14c0ed060

ClassData * __thiscall
api_session::RegisterPlayerResponse::GetClassData(RegisterPlayerResponse *this)

{
  return (ClassData *)&RegisterPlayerResponse_class_data_;
}

// PlacementNew_ @ 14c0ed080

void * __cdecl
api_session::RegisterPlayerResponse::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7RegisterPlayerResponse_api_session__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0ed0b0

void * __thiscall
api_session::RegisterPlayerResponse::_scalar_deleting_destructor_
          (RegisterPlayerResponse *this,uint param_1)

{
  ResponseBase *this_00;
  
  this->_padding_ = (longlong)&___7RegisterPlayerResponse_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::~ResponseBase(this_00);
    ::operator_delete(this_00,0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// MergeImpl @ 14c0ed130

void __cdecl
api_session::LogoutAndRemoveSessionResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  MessageLite *pMVar3;
  void *pvVar4;
  Arena *pAVar5;
  
  pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 1) != 0) {
    pMVar2 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
    pMVar3 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
    if (pMVar2 == (MessageLite *)0x0) {
      pvVar4 = google::protobuf::Arena::CopyConstruct<ResponseBase>(pAVar5,pMVar3);
      param_1[1]._internal_metadata_.ptr_ = (long64)pvVar4;
    }
    else {
      ResponseBase::MergeImpl(pMVar2,pMVar3);
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c0ed1c0

void __thiscall
api_session::LogoutAndRemoveSessionResponse::Clear(LogoutAndRemoveSessionResponse *this)

{
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    ResponseBase::Clear((this->_impl_).response_base_);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c0ed200

ulong64 __thiscall
api_session::LogoutAndRemoveSessionResponse::ByteSizeLong(LogoutAndRemoveSessionResponse *this)

{
  ulong64 uVar1;
  int iVar2;
  uint uVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    uVar1 = ResponseBase::ByteSizeLong((this->_impl_).response_base_);
    uVar3 = (uint)uVar1 | 1;
    if (__isa_available < 5) {
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 0x1f - iVar2;
    }
    else {
      iVar2 = LZCOUNT(uVar3);
    }
    _Var4 = (ulonglong)(iVar2 * -9 + 0x160U >> 6) + 1 + uVar1;
  }
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c0ed270

uchar * __thiscall
api_session::LogoutAndRemoveSessionResponse::_InternalSerialize
          (LogoutAndRemoveSessionResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uchar *puVar1;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).response_base_,
                         (int)(((this->_impl_).response_base_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar1;
  }
  return param_1;
}

// GetClassData @ 14c0ed2e0

ClassData * __thiscall
api_session::LogoutAndRemoveSessionResponse::GetClassData(LogoutAndRemoveSessionResponse *this)

{
  return (ClassData *)&LogoutAndRemoveSessionResponse_class_data_;
}

// PlacementNew_ @ 14c0ed300

void * __cdecl
api_session::LogoutAndRemoveSessionResponse::PlacementNew_
          (void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7LogoutAndRemoveSessionResponse_api_session__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0ed330

void * __thiscall
api_session::LogoutAndRemoveSessionResponse::_scalar_deleting_destructor_
          (LogoutAndRemoveSessionResponse *this,uint param_1)

{
  ResponseBase *this_00;
  
  this->_padding_ = (longlong)&___7LogoutAndRemoveSessionResponse_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::~ResponseBase(this_00);
    ::operator_delete(this_00,0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c0ed3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
api_session::LoginAndRegisterPlayerResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  MessageLite *pMVar4;
  MessageLite *pMVar5;
  byte bVar6;
  void *pvVar7;
  undefined8 uVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  ulong64 uVar10;
  Arena *pAVar11;
  Arena *pAVar12;
  undefined1 auStackY_78 [32];
  _Bxty local_40;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  pAVar12 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar6 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar11 = pAVar12;
  if (bVar6 != 0) {
    pAVar11 = (Arena *)(pAVar12->impl_).tag_and_id_;
  }
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 0x3f) != 0) {
    if ((uVar2 & 1) != 0) {
      pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar9->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          local_40._8_8_ = 0;
          local_40._Ptr = (char *)0x0;
          local_30 = ___xmm_000000000000000f0000000000000000;
          uStack_28 = _UNK_15076add8;
          if (bVar6 != 0) {
            pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
                     pAVar12);
          if (0xf < uStack_28) {
            uVar10 = uStack_28 + 1;
            uVar8 = local_40._Ptr;
            if (0xfff < uVar10) {
              uVar8 = *(undefined8 *)(local_40._Ptr + -8);
              uVar10 = uStack_28 + 0x28;
              if ((char *)0x1f < local_40._Ptr + (-8 - uVar8)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar8,uVar10);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        if (bVar6 != 0) {
          pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar9,pAVar12);
      }
    }
    if ((uVar2 & 2) != 0) {
      if ((MessageLite *)param_1[2]._padding_ == (MessageLite *)0x0) {
        pvVar7 = google::protobuf::Arena::CopyConstruct<ResponseBase>
                           (pAVar11,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar7;
      }
      else {
        ResponseBase::MergeImpl
                  ((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
      }
    }
    if ((uVar2 & 4) != 0) {
      pMVar4 = (MessageLite *)param_1[2]._internal_metadata_.ptr_;
      pMVar5 = (MessageLite *)param_2[2]._internal_metadata_.ptr_;
      if (pMVar4 == (MessageLite *)0x0) {
        pvVar7 = google::protobuf::Arena::CopyConstruct<UniqueId>(pAVar11,pMVar5);
        param_1[2]._internal_metadata_.ptr_ = (long64)pvVar7;
      }
      else {
        UniqueId::MergeImpl(pMVar4,pMVar5);
      }
    }
    if (((uVar2 & 8) != 0) && (param_2[3]._padding_ != 0)) {
      param_1[3]._padding_ = param_2[3]._padding_;
    }
    if (((uVar2 & 0x10) != 0) && (cVar1 = (char)param_2[3]._internal_metadata_.ptr_, cVar1 != '\0'))
    {
      *(char *)&param_1[3]._internal_metadata_.ptr_ = cVar1;
    }
    if (((uVar2 & 0x20) != 0) &&
       (iVar3 = *(int *)((longlong)&param_2[3]._internal_metadata_.ptr_ + 4), iVar3 != 0)) {
      *(int *)((longlong)&param_1[3]._internal_metadata_.ptr_ + 4) = iVar3;
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar2;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c0ed590

void __thiscall
api_session::LoginAndRegisterPlayerResponse::Clear(LoginAndRegisterPlayerResponse *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).jwt_key_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      ResponseBase::Clear((this->_impl_).response_base_);
    }
    if ((uVar1 & 4) != 0) {
      UniqueId::Clear((this->_impl_).player_session_uid_);
    }
  }
  if ((uVar1 & 0x38) != 0) {
    (this->_impl_).new_player_uid_ = 0;
    (this->_impl_).is_new_player_ = false;
    *(undefined3 *)&(this->_impl_).field_0x29 = 0;
    (this->_impl_).world_id_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c0ed620

ulong64 __thiscall
api_session::LoginAndRegisterPlayerResponse::ByteSizeLong(LoginAndRegisterPlayerResponse *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulong64 uVar4;
  int iVar5;
  __uint64 _Var6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((uVar1 & 0x3f) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).jwt_key_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10)
       , lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var6 = (ulonglong)(iVar5 * -9 + 0x160U >> 6) + 1 + lVar2;
    }
    if ((uVar1 & 2) != 0) {
      uVar4 = ResponseBase::ByteSizeLong((this->_impl_).response_base_);
      uVar3 = (uint)uVar4 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var6 = _Var6 + 1 + (iVar5 * -9 + 0x160U >> 6) + uVar4;
    }
    if ((uVar1 & 4) != 0) {
      uVar4 = UniqueId::ByteSizeLong((this->_impl_).player_session_uid_);
      uVar3 = (uint)uVar4 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var6 = _Var6 + 1 + (iVar5 * -9 + 0x160U >> 6) + uVar4;
    }
    if (((uVar1 & 8) != 0) && (lVar2 = (this->_impl_).new_player_uid_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 0x10) != 0) && ((this->_impl_).is_new_player_ != false)) {
      _Var6 = _Var6 + 2;
    }
    if (((uVar1 & 0x20) != 0) && (iVar5 = (this->_impl_).world_id_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c0ed790

uchar * __thiscall
api_session::LoginAndRegisterPlayerResponse::_InternalSerialize
          (LoginAndRegisterPlayerResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uchar *puVar6;
  char *pcVar7;
  char *pcVar8;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).response_base_,
                         (int)(((this->_impl_).response_base_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar3 & 8) != 0) && (lVar5 = (this->_impl_).new_player_uid_, lVar5 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar5,param_1);
  }
  if ((uVar3 & 4) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (3,(MessageLite *)(this->_impl_).player_session_uid_,
                         (int)(((this->_impl_).player_session_uid_)->_impl_)._cached_size_.atom_,
                         param_1,param_2);
  }
  if (((uVar3 & 0x10) != 0) && ((this->_impl_).is_new_player_ != false)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar2 = (this->_impl_).is_new_player_;
    *param_1 = ' ';
    param_1[1] = bVar2 != false;
    param_1 = param_1 + 2;
  }
  if (((uVar3 & 0x20) != 0) && (iVar4 = (this->_impl_).world_id_, iVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<5>
                        (param_2,iVar4,param_1);
  }
  if ((uVar3 & 1) != 0) {
    pcVar8 = (char *)((ulonglong)(this->_impl_).jwt_key_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar8 + 0x10);
    if (*(longlong *)(pcVar8 + 0x10) != 0) {
      pcVar7 = pcVar8;
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar7 = *(char **)pcVar8;
      }
      local_18._Mysize = 0x32;
      local_18._Mydata = "api_session.LoginAndRegisterPlayerResponse.jwt_key";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar7,(int)*(longlong *)(pcVar8 + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar8 = *(char **)pcVar8;
      }
      local_18._Mysize = *puVar1;
      local_18._Mydata = pcVar8;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,6,&local_18,param_1);
    }
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar6 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar6;
}

// GetClassData @ 14c0ed940

ClassData * __thiscall
api_session::LoginAndRegisterPlayerResponse::GetClassData(LoginAndRegisterPlayerResponse *this)

{
  return (ClassData *)&LoginAndRegisterPlayerResponse_class_data_;
}

// PlacementNew_ @ 14c0ed960

void * __cdecl
api_session::LoginAndRegisterPlayerResponse::PlacementNew_
          (void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7LoginAndRegisterPlayerResponse_api_session__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0ed9a0

void * __thiscall
api_session::LoginAndRegisterPlayerResponse::_scalar_deleting_destructor_
          (LoginAndRegisterPlayerResponse *this,uint param_1)

{
  ~LoginAndRegisterPlayerResponse(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// MergeImpl @ 14c0ed9e0

void __cdecl
api_session::LoginAndCreateSessionResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  MessageLite *pMVar3;
  void *pvVar4;
  Arena *pAVar5;
  
  pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pMVar2 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
      pMVar3 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
      if (pMVar2 == (MessageLite *)0x0) {
        pvVar4 = google::protobuf::Arena::CopyConstruct<ResponseBase>(pAVar5,pMVar3);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar4;
      }
      else {
        ResponseBase::MergeImpl(pMVar2,pMVar3);
      }
    }
    if ((uVar1 & 2) != 0) {
      if ((MessageLite *)param_1[2]._padding_ == (MessageLite *)0x0) {
        pvVar4 = google::protobuf::Arena::CopyConstruct<UniqueId>
                           (pAVar5,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar4;
      }
      else {
        UniqueId::MergeImpl((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_)
        ;
      }
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c0edaa0

void __thiscall
api_session::LoginAndCreateSessionResponse::Clear(LoginAndCreateSessionResponse *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      ResponseBase::Clear((this->_impl_).response_base_);
    }
    if ((uVar1 & 2) != 0) {
      UniqueId::Clear((this->_impl_).player_session_uid_);
    }
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c0edb00

ulong64 __thiscall
api_session::LoginAndCreateSessionResponse::ByteSizeLong(LoginAndCreateSessionResponse *this)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  __uint64 _Var5;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var5 = 0;
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      uVar1 = ResponseBase::ByteSizeLong((this->_impl_).response_base_);
      uVar2 = (uint)uVar1 | 1;
      if (__isa_available < 5) {
        iVar4 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 0x1f - iVar4;
      }
      else {
        iVar4 = LZCOUNT(uVar2);
      }
      _Var5 = (ulonglong)(iVar4 * -9 + 0x160U >> 6) + 1 + uVar1;
    }
    if ((uVar3 & 2) != 0) {
      uVar1 = UniqueId::ByteSizeLong((this->_impl_).player_session_uid_);
      uVar3 = (uint)uVar1 | 1;
      if (__isa_available < 5) {
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 0x1f - iVar4;
      }
      else {
        iVar4 = LZCOUNT(uVar3);
      }
      _Var5 = _Var5 + 1 + (iVar4 * -9 + 0x160U >> 6) + uVar1;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c0edbf0

uchar * __thiscall
api_session::LoginAndCreateSessionResponse::_InternalSerialize
          (LoginAndCreateSessionResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  uchar *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).response_base_,
                         (int)(((this->_impl_).response_base_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((uVar1 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (2,(MessageLite *)(this->_impl_).player_session_uid_,
                         (int)(((this->_impl_).player_session_uid_)->_impl_)._cached_size_.atom_,
                         param_1,param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c0edca0

ClassData * __thiscall
api_session::LoginAndCreateSessionResponse::GetClassData(LoginAndCreateSessionResponse *this)

{
  return (ClassData *)&LoginAndCreateSessionResponse_class_data_;
}

// PlacementNew_ @ 14c0edcc0

void * __cdecl
api_session::LoginAndCreateSessionResponse::PlacementNew_
          (void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7LoginAndCreateSessionResponse_api_session__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0edcf0

void * __thiscall
api_session::LoginAndCreateSessionResponse::_scalar_deleting_destructor_
          (LoginAndCreateSessionResponse *this,uint param_1)

{
  ~LoginAndCreateSessionResponse(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// MergeImpl @ 14c0edd30

void __cdecl api_session::InvalidHttpResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  MessageLite *pMVar3;
  void *pvVar4;
  Arena *pAVar5;
  
  pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 1) != 0) {
    pMVar2 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
    pMVar3 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
    if (pMVar2 == (MessageLite *)0x0) {
      pvVar4 = google::protobuf::Arena::CopyConstruct<ResponseBase>(pAVar5,pMVar3);
      param_1[1]._internal_metadata_.ptr_ = (long64)pvVar4;
    }
    else {
      ResponseBase::MergeImpl(pMVar2,pMVar3);
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c0eddc0

void __thiscall api_session::InvalidHttpResponse::Clear(InvalidHttpResponse *this)

{
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    ResponseBase::Clear((this->_impl_).response_base_);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c0ede00

ulong64 __thiscall api_session::InvalidHttpResponse::ByteSizeLong(InvalidHttpResponse *this)

{
  ulong64 uVar1;
  int iVar2;
  uint uVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    uVar1 = ResponseBase::ByteSizeLong((this->_impl_).response_base_);
    uVar3 = (uint)uVar1 | 1;
    if (__isa_available < 5) {
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 0x1f - iVar2;
    }
    else {
      iVar2 = LZCOUNT(uVar3);
    }
    _Var4 = (ulonglong)(iVar2 * -9 + 0x160U >> 6) + 1 + uVar1;
  }
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c0ede70

uchar * __thiscall
api_session::InvalidHttpResponse::_InternalSerialize
          (InvalidHttpResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uchar *puVar1;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).response_base_,
                         (int)(((this->_impl_).response_base_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar1;
  }
  return param_1;
}

// GetClassData @ 14c0edee0

ClassData * __thiscall api_session::InvalidHttpResponse::GetClassData(InvalidHttpResponse *this)

{
  return (ClassData *)&InvalidHttpResponse_class_data_;
}

// PlacementNew_ @ 14c0edf00

void * __cdecl
api_session::InvalidHttpResponse::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7InvalidHttpResponse_api_session__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0edf30

void * __thiscall
api_session::InvalidHttpResponse::_scalar_deleting_destructor_
          (InvalidHttpResponse *this,uint param_1)

{
  ResponseBase *this_00;
  
  this->_padding_ = (longlong)&___7InvalidHttpResponse_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::~ResponseBase(this_00);
    ::operator_delete(this_00,0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c0edfb0

void __cdecl
api_session::ExternalLoginAndCreateSessionResponse::MergeImpl
          (MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  MessageLite *pMVar3;
  void *pvVar4;
  Arena *pAVar5;
  
  pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pMVar2 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
      pMVar3 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
      if (pMVar2 == (MessageLite *)0x0) {
        pvVar4 = google::protobuf::Arena::CopyConstruct<ResponseBase>(pAVar5,pMVar3);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar4;
      }
      else {
        ResponseBase::MergeImpl(pMVar2,pMVar3);
      }
    }
    if ((uVar1 & 2) != 0) {
      if ((MessageLite *)param_1[2]._padding_ == (MessageLite *)0x0) {
        pvVar4 = google::protobuf::Arena::CopyConstruct<UniqueId>
                           (pAVar5,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar4;
      }
      else {
        UniqueId::MergeImpl((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_)
        ;
      }
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c0ee070

void __thiscall
api_session::ExternalLoginAndCreateSessionResponse::Clear
          (ExternalLoginAndCreateSessionResponse *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      ResponseBase::Clear((this->_impl_).response_base_);
    }
    if ((uVar1 & 2) != 0) {
      UniqueId::Clear((this->_impl_).player_session_uid_);
    }
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c0ee0d0

ulong64 __thiscall
api_session::ExternalLoginAndCreateSessionResponse::ByteSizeLong
          (ExternalLoginAndCreateSessionResponse *this)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  __uint64 _Var5;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var5 = 0;
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      uVar1 = ResponseBase::ByteSizeLong((this->_impl_).response_base_);
      uVar2 = (uint)uVar1 | 1;
      if (__isa_available < 5) {
        iVar4 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 0x1f - iVar4;
      }
      else {
        iVar4 = LZCOUNT(uVar2);
      }
      _Var5 = (ulonglong)(iVar4 * -9 + 0x160U >> 6) + 1 + uVar1;
    }
    if ((uVar3 & 2) != 0) {
      uVar1 = UniqueId::ByteSizeLong((this->_impl_).player_session_uid_);
      uVar3 = (uint)uVar1 | 1;
      if (__isa_available < 5) {
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 0x1f - iVar4;
      }
      else {
        iVar4 = LZCOUNT(uVar3);
      }
      _Var5 = _Var5 + 1 + (iVar4 * -9 + 0x160U >> 6) + uVar1;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c0ee1c0

uchar * __thiscall
api_session::ExternalLoginAndCreateSessionResponse::_InternalSerialize
          (ExternalLoginAndCreateSessionResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  uchar *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).response_base_,
                         (int)(((this->_impl_).response_base_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((uVar1 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (2,(MessageLite *)(this->_impl_).player_session_uid_,
                         (int)(((this->_impl_).player_session_uid_)->_impl_)._cached_size_.atom_,
                         param_1,param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c0ee270

ClassData * __thiscall
api_session::ExternalLoginAndCreateSessionResponse::GetClassData
          (ExternalLoginAndCreateSessionResponse *this)

{
  return (ClassData *)&ExternalLoginAndCreateSessionResponse_class_data_;
}

// PlacementNew_ @ 14c0ee290

void * __cdecl
api_session::ExternalLoginAndCreateSessionResponse::PlacementNew_
          (void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ExternalLoginAndCreateSessionResponse_api_session__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0ee2c0

void * __thiscall
api_session::ExternalLoginAndCreateSessionResponse::_scalar_deleting_destructor_
          (ExternalLoginAndCreateSessionResponse *this,uint param_1)

{
  ~ExternalLoginAndCreateSessionResponse(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// MergeImpl @ 14c0ee300

void __cdecl
api_session::LogoutAndRemoveSessionRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  MessageLite *pMVar3;
  void *pvVar4;
  Arena *pAVar5;
  
  pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 1) != 0) {
    pMVar2 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
    pMVar3 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
    if (pMVar2 == (MessageLite *)0x0) {
      pvVar4 = google::protobuf::Arena::CopyConstruct<RequestBase>(pAVar5,pMVar3);
      param_1[1]._internal_metadata_.ptr_ = (long64)pvVar4;
    }
    else {
      RequestBase::MergeImpl(pMVar2,pMVar3);
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c0ee390

void __thiscall
api_session::LogoutAndRemoveSessionRequest::Clear(LogoutAndRemoveSessionRequest *this)

{
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    RequestBase::Clear((this->_impl_).request_base_);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c0ee3d0

ulong64 __thiscall
api_session::LogoutAndRemoveSessionRequest::ByteSizeLong(LogoutAndRemoveSessionRequest *this)

{
  ulong64 uVar1;
  int iVar2;
  uint uVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    uVar1 = RequestBase::ByteSizeLong((this->_impl_).request_base_);
    uVar3 = (uint)uVar1 | 1;
    if (__isa_available < 5) {
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 0x1f - iVar2;
    }
    else {
      iVar2 = LZCOUNT(uVar3);
    }
    _Var4 = (ulonglong)(iVar2 * -9 + 0x160U >> 6) + 1 + uVar1;
  }
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c0ee440

uchar * __thiscall
api_session::LogoutAndRemoveSessionRequest::_InternalSerialize
          (LogoutAndRemoveSessionRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uchar *puVar1;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).request_base_,
                         (int)(((this->_impl_).request_base_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar1;
  }
  return param_1;
}

// GetClassData @ 14c0ee4b0

ClassData * __thiscall
api_session::LogoutAndRemoveSessionRequest::GetClassData(LogoutAndRemoveSessionRequest *this)

{
  return (ClassData *)&LogoutAndRemoveSessionRequest_class_data_;
}

// PlacementNew_ @ 14c0ee4d0

void * __cdecl
api_session::LogoutAndRemoveSessionRequest::PlacementNew_
          (void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7LogoutAndRemoveSessionRequest_api_session__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0ee500

void * __thiscall
api_session::LogoutAndRemoveSessionRequest::_scalar_deleting_destructor_
          (LogoutAndRemoveSessionRequest *this,uint param_1)

{
  RequestBase *this_00;
  
  this->_padding_ = (longlong)&___7LogoutAndRemoveSessionRequest_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).request_base_;
  if (this_00 != (RequestBase *)0x0) {
    RequestBase::~RequestBase(this_00);
    ::operator_delete(this_00,0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// CopyConstruct<misc::NicknameData> @ 14c0ee580

void * __cdecl
google::protobuf::Arena::CopyConstruct<misc::NicknameData>(Arena *param_1,void *param_2)

{
  NicknameData *pNVar1;
  
  if (param_1 == (Arena *)0x0) {
    pNVar1 = ::operator_new(0x40);
  }
  else {
    pNVar1 = Allocate(param_1,0x40);
  }
  pNVar1 = misc::NicknameData::NicknameData(pNVar1,param_1,param_2);
  return pNVar1;
}

// CopyConstruct<RequestBase> @ 14c0ee5d0

void * __cdecl google::protobuf::Arena::CopyConstruct<RequestBase>(Arena *param_1,void *param_2)

{
  RequestBase *pRVar1;
  
  if (param_1 == (Arena *)0x0) {
    pRVar1 = ::operator_new(0x28);
  }
  else {
    pRVar1 = Allocate(param_1,0x28);
  }
  pRVar1 = RequestBase::RequestBase(pRVar1,param_1,param_2);
  return pRVar1;
}

// CopyConstruct<UniqueId> @ 14c0ee620

void * __cdecl google::protobuf::Arena::CopyConstruct<UniqueId>(Arena *param_1,void *param_2)

{
  UniqueId *pUVar1;
  
  if (param_1 == (Arena *)0x0) {
    pUVar1 = ::operator_new(0x20);
  }
  else {
    pUVar1 = Allocate(param_1,0x20);
  }
  pUVar1 = UniqueId::UniqueId(pUVar1,param_1,param_2);
  return pUVar1;
}

// ExternalLoginAndCreateSessionRequest @ 14c0ee670

ExternalLoginAndCreateSessionRequest * __thiscall
api_session::ExternalLoginAndCreateSessionRequest::ExternalLoginAndCreateSessionRequest
          (ExternalLoginAndCreateSessionRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ExternalLoginAndCreateSessionRequest_api_session__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).id_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).password_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).device_description_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).sdk_type_ = 0;
  (this->_impl_).os_type_ = 0;
  return this;
}

// ExternalLoginAndCreateSessionRequest @ 14c0ee6b0

ExternalLoginAndCreateSessionRequest * __thiscall
api_session::ExternalLoginAndCreateSessionRequest::ExternalLoginAndCreateSessionRequest
          (ExternalLoginAndCreateSessionRequest *this,Arena *param_1,
          ExternalLoginAndCreateSessionRequest *param_2)

{
  ArenaStringPtr *pAVar1;
  int iVar2;
  TaggedStringPtr TVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ExternalLoginAndCreateSessionRequest_api_session__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).id_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar4 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  pAVar1 = &(param_2->_impl_).password_;
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar4;
  pvVar4 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  pAVar1 = &(param_2->_impl_).device_description_;
  (this->_impl_).password_.tagged_ptr_.ptr_ = pvVar4;
  pvVar4 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  (this->_impl_).device_description_.tagged_ptr_.ptr_ = pvVar4;
  iVar2 = (param_2->_impl_).os_type_;
  (this->_impl_).sdk_type_ = (param_2->_impl_).sdk_type_;
  (this->_impl_).os_type_ = iVar2;
  return this;
}

// ExternalLoginAndCreateSessionResponse @ 14c0ee770

ExternalLoginAndCreateSessionResponse * __thiscall
api_session::ExternalLoginAndCreateSessionResponse::ExternalLoginAndCreateSessionResponse
          (ExternalLoginAndCreateSessionResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ExternalLoginAndCreateSessionResponse_api_session__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).response_base_ = (ResponseBase *)0x0;
  (this->_impl_).player_session_uid_ = (UniqueId *)0x0;
  return this;
}

// ExternalLoginAndCreateSessionResponse @ 14c0ee7a0

ExternalLoginAndCreateSessionResponse * __thiscall
api_session::ExternalLoginAndCreateSessionResponse::ExternalLoginAndCreateSessionResponse
          (ExternalLoginAndCreateSessionResponse *this,Arena *param_1,
          ExternalLoginAndCreateSessionResponse *param_2)

{
  uint uVar1;
  ResponseBase *pRVar2;
  UniqueId *pUVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ExternalLoginAndCreateSessionResponse_api_session__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  uVar1 = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = uVar1;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if ((uVar1 & 1) == 0) {
    pRVar2 = (ResponseBase *)0x0;
  }
  else {
    pRVar2 = google::protobuf::Arena::CopyConstruct<ResponseBase>
                       (param_1,(param_2->_impl_).response_base_);
  }
  (this->_impl_).response_base_ = pRVar2;
  if ((uVar1 & 2) == 0) {
    (this->_impl_).player_session_uid_ = (UniqueId *)0x0;
  }
  else {
    pUVar3 = google::protobuf::Arena::CopyConstruct<UniqueId>
                       (param_1,(param_2->_impl_).player_session_uid_);
    (this->_impl_).player_session_uid_ = pUVar3;
  }
  return this;
}

// InvalidHttpResponse @ 14c0ee850

InvalidHttpResponse * __thiscall
api_session::InvalidHttpResponse::InvalidHttpResponse(InvalidHttpResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7InvalidHttpResponse_api_session__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).response_base_ = (ResponseBase *)0x0;
  return this;
}

// InvalidHttpResponse @ 14c0ee880

InvalidHttpResponse * __thiscall
api_session::InvalidHttpResponse::InvalidHttpResponse
          (InvalidHttpResponse *this,Arena *param_1,InvalidHttpResponse *param_2)

{
  ResponseBase *pRVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7InvalidHttpResponse_api_session__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pRVar1 = (ResponseBase *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pRVar1 = google::protobuf::Arena::CopyConstruct<ResponseBase>
                       (param_1,(param_2->_impl_).response_base_);
  }
  (this->_impl_).response_base_ = pRVar1;
  return this;
}

// JwtRefreshResponse @ 14c0ee900

JwtRefreshResponse * __thiscall
api_session::JwtRefreshResponse::JwtRefreshResponse(JwtRefreshResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7JwtRefreshResponse_api_session__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).refresh_jwt_key_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).player_uid_ = 0;
  return this;
}

// JwtRefreshResponse @ 14c0ee930

JwtRefreshResponse * __thiscall
api_session::JwtRefreshResponse::JwtRefreshResponse
          (JwtRefreshResponse *this,Arena *param_1,JwtRefreshResponse *param_2)

{
  ArenaStringPtr *this_00;
  TaggedStringPtr TVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7JwtRefreshResponse_api_session__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).refresh_jwt_key_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar2 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->_impl_).refresh_jwt_key_.tagged_ptr_.ptr_ = pvVar2;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  return this;
}

// LoginAndCreateSessionRequest @ 14c0ee9c0

LoginAndCreateSessionRequest * __thiscall
api_session::LoginAndCreateSessionRequest::LoginAndCreateSessionRequest
          (LoginAndCreateSessionRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7LoginAndCreateSessionRequest_api_session__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).id_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).password_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).device_description_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).sdk_type_ = 0;
  (this->_impl_).os_type_ = 0;
  return this;
}

// LoginAndCreateSessionRequest @ 14c0eea00

LoginAndCreateSessionRequest * __thiscall
api_session::LoginAndCreateSessionRequest::LoginAndCreateSessionRequest
          (LoginAndCreateSessionRequest *this,Arena *param_1,LoginAndCreateSessionRequest *param_2)

{
  ArenaStringPtr *pAVar1;
  int iVar2;
  TaggedStringPtr TVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7LoginAndCreateSessionRequest_api_session__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).id_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar4 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  pAVar1 = &(param_2->_impl_).password_;
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar4;
  pvVar4 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  pAVar1 = &(param_2->_impl_).device_description_;
  (this->_impl_).password_.tagged_ptr_.ptr_ = pvVar4;
  pvVar4 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  (this->_impl_).device_description_.tagged_ptr_.ptr_ = pvVar4;
  iVar2 = (param_2->_impl_).os_type_;
  (this->_impl_).sdk_type_ = (param_2->_impl_).sdk_type_;
  (this->_impl_).os_type_ = iVar2;
  return this;
}

// LoginAndCreateSessionResponse @ 14c0eeac0

LoginAndCreateSessionResponse * __thiscall
api_session::LoginAndCreateSessionResponse::LoginAndCreateSessionResponse
          (LoginAndCreateSessionResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7LoginAndCreateSessionResponse_api_session__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).response_base_ = (ResponseBase *)0x0;
  (this->_impl_).player_session_uid_ = (UniqueId *)0x0;
  return this;
}

// LoginAndCreateSessionResponse @ 14c0eeaf0

LoginAndCreateSessionResponse * __thiscall
api_session::LoginAndCreateSessionResponse::LoginAndCreateSessionResponse
          (LoginAndCreateSessionResponse *this,Arena *param_1,LoginAndCreateSessionResponse *param_2
          )

{
  uint uVar1;
  ResponseBase *pRVar2;
  UniqueId *pUVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7LoginAndCreateSessionResponse_api_session__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  uVar1 = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = uVar1;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if ((uVar1 & 1) == 0) {
    pRVar2 = (ResponseBase *)0x0;
  }
  else {
    pRVar2 = google::protobuf::Arena::CopyConstruct<ResponseBase>
                       (param_1,(param_2->_impl_).response_base_);
  }
  (this->_impl_).response_base_ = pRVar2;
  if ((uVar1 & 2) == 0) {
    (this->_impl_).player_session_uid_ = (UniqueId *)0x0;
  }
  else {
    pUVar3 = google::protobuf::Arena::CopyConstruct<UniqueId>
                       (param_1,(param_2->_impl_).player_session_uid_);
    (this->_impl_).player_session_uid_ = pUVar3;
  }
  return this;
}

// LoginAndRegisterPlayerRequest @ 14c0eeba0

LoginAndRegisterPlayerRequest * __thiscall
api_session::LoginAndRegisterPlayerRequest::LoginAndRegisterPlayerRequest
          (LoginAndRegisterPlayerRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7LoginAndRegisterPlayerRequest_api_session__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).id_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).device_description_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).sdk_type_ = 0;
  (this->_impl_).os_type_ = 0;
  (this->_impl_).prefer_world_id_ = 0;
  return this;
}

// LoginAndRegisterPlayerRequest @ 14c0eebe0

LoginAndRegisterPlayerRequest * __thiscall
api_session::LoginAndRegisterPlayerRequest::LoginAndRegisterPlayerRequest
          (LoginAndRegisterPlayerRequest *this,Arena *param_1,LoginAndRegisterPlayerRequest *param_2
          )

{
  ArenaStringPtr *pAVar1;
  int iVar2;
  TaggedStringPtr TVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7LoginAndRegisterPlayerRequest_api_session__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).id_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar4 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  pAVar1 = &(param_2->_impl_).device_description_;
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar4;
  pvVar4 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  (this->_impl_).device_description_.tagged_ptr_.ptr_ = pvVar4;
  iVar2 = (param_2->_impl_).os_type_;
  (this->_impl_).sdk_type_ = (param_2->_impl_).sdk_type_;
  (this->_impl_).os_type_ = iVar2;
  (this->_impl_).prefer_world_id_ = (param_2->_impl_).prefer_world_id_;
  return this;
}

// LoginAndRegisterPlayerResponse @ 14c0eeca0

LoginAndRegisterPlayerResponse * __thiscall
api_session::LoginAndRegisterPlayerResponse::LoginAndRegisterPlayerResponse
          (LoginAndRegisterPlayerResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7LoginAndRegisterPlayerResponse_api_session__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).jwt_key_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string
  ;
  (this->_impl_).response_base_ = (ResponseBase *)0x0;
  (this->_impl_).player_session_uid_ = (UniqueId *)0x0;
  (this->_impl_).new_player_uid_ = 0;
  (this->_impl_).is_new_player_ = false;
  *(undefined3 *)&(this->_impl_).field_0x29 = 0;
  (this->_impl_).world_id_ = 0;
  return this;
}

// LoginAndRegisterPlayerResponse @ 14c0eece0

LoginAndRegisterPlayerResponse * __thiscall
api_session::LoginAndRegisterPlayerResponse::LoginAndRegisterPlayerResponse
          (LoginAndRegisterPlayerResponse *this,Arena *param_1,
          LoginAndRegisterPlayerResponse *param_2)

{
  ArenaStringPtr *this_00;
  uint uVar1;
  bool bVar2;
  undefined3 uVar3;
  int iVar4;
  TaggedStringPtr TVar5;
  void *pvVar6;
  ResponseBase *pRVar7;
  ResponseBase *pRVar8;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7LoginAndRegisterPlayerResponse_api_session__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).jwt_key_;
  pRVar8 = (ResponseBase *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar6 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  (this->_impl_).jwt_key_.tagged_ptr_.ptr_ = pvVar6;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  pRVar7 = pRVar8;
  if ((uVar1 & 2) != 0) {
    pRVar7 = google::protobuf::Arena::CopyConstruct<ResponseBase>
                       (param_1,(param_2->_impl_).response_base_);
  }
  (this->_impl_).response_base_ = pRVar7;
  if ((uVar1 & 4) != 0) {
    pRVar8 = google::protobuf::Arena::CopyConstruct<UniqueId>
                       (param_1,(param_2->_impl_).player_session_uid_);
  }
  (this->_impl_).player_session_uid_ = (UniqueId *)pRVar8;
  bVar2 = (param_2->_impl_).is_new_player_;
  uVar3 = *(undefined3 *)&(param_2->_impl_).field_0x29;
  iVar4 = (param_2->_impl_).world_id_;
  (this->_impl_).new_player_uid_ = (param_2->_impl_).new_player_uid_;
  (this->_impl_).is_new_player_ = bVar2;
  *(undefined3 *)&(this->_impl_).field_0x29 = uVar3;
  (this->_impl_).world_id_ = iVar4;
  return this;
}

// LogoutAndRemoveSessionRequest @ 14c0eedb0

LogoutAndRemoveSessionRequest * __thiscall
api_session::LogoutAndRemoveSessionRequest::LogoutAndRemoveSessionRequest
          (LogoutAndRemoveSessionRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7LogoutAndRemoveSessionRequest_api_session__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).request_base_ = (RequestBase *)0x0;
  return this;
}

// LogoutAndRemoveSessionRequest @ 14c0eede0

LogoutAndRemoveSessionRequest * __thiscall
api_session::LogoutAndRemoveSessionRequest::LogoutAndRemoveSessionRequest
          (LogoutAndRemoveSessionRequest *this,Arena *param_1,LogoutAndRemoveSessionRequest *param_2
          )

{
  RequestBase *pRVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7LogoutAndRemoveSessionRequest_api_session__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pRVar1 = (RequestBase *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pRVar1 = google::protobuf::Arena::CopyConstruct<RequestBase>
                       (param_1,(param_2->_impl_).request_base_);
  }
  (this->_impl_).request_base_ = pRVar1;
  return this;
}

// LogoutAndRemoveSessionResponse @ 14c0eee60

LogoutAndRemoveSessionResponse * __thiscall
api_session::LogoutAndRemoveSessionResponse::LogoutAndRemoveSessionResponse
          (LogoutAndRemoveSessionResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7LogoutAndRemoveSessionResponse_api_session__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).response_base_ = (ResponseBase *)0x0;
  return this;
}

// LogoutAndRemoveSessionResponse @ 14c0eee90

LogoutAndRemoveSessionResponse * __thiscall
api_session::LogoutAndRemoveSessionResponse::LogoutAndRemoveSessionResponse
          (LogoutAndRemoveSessionResponse *this,Arena *param_1,
          LogoutAndRemoveSessionResponse *param_2)

{
  ResponseBase *pRVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7LogoutAndRemoveSessionResponse_api_session__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pRVar1 = (ResponseBase *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pRVar1 = google::protobuf::Arena::CopyConstruct<ResponseBase>
                       (param_1,(param_2->_impl_).response_base_);
  }
  (this->_impl_).response_base_ = pRVar1;
  return this;
}

// RegisterPlayerRequest @ 14c0eef10

RegisterPlayerRequest * __thiscall
api_session::RegisterPlayerRequest::RegisterPlayerRequest
          (RegisterPlayerRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RegisterPlayerRequest_api_session__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).id_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).password_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  return this;
}

// RegisterPlayerRequest @ 14c0eef40

RegisterPlayerRequest * __thiscall
api_session::RegisterPlayerRequest::RegisterPlayerRequest
          (RegisterPlayerRequest *this,Arena *param_1,RegisterPlayerRequest *param_2)

{
  ArenaStringPtr *pAVar1;
  TaggedStringPtr TVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RegisterPlayerRequest_api_session__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).id_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).password_;
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) == 0) {
    (this->_impl_).password_.tagged_ptr_.ptr_ = pvVar3;
    return this;
  }
  TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                    (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
  (this->_impl_).password_.tagged_ptr_.ptr_ = *TVar2.ptr_;
  return this;
}

// RegisterPlayerResponse @ 14c0ef000

RegisterPlayerResponse * __thiscall
api_session::RegisterPlayerResponse::RegisterPlayerResponse
          (RegisterPlayerResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RegisterPlayerResponse_api_session__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).response_base_ = (ResponseBase *)0x0;
  (this->_impl_).new_player_uid_ = 0;
  return this;
}

// RegisterPlayerResponse @ 14c0ef030

RegisterPlayerResponse * __thiscall
api_session::RegisterPlayerResponse::RegisterPlayerResponse
          (RegisterPlayerResponse *this,Arena *param_1,RegisterPlayerResponse *param_2)

{
  ResponseBase *pRVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RegisterPlayerResponse_api_session__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pRVar1 = (ResponseBase *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pRVar1 = google::protobuf::Arena::CopyConstruct<ResponseBase>
                       (param_1,(param_2->_impl_).response_base_);
  }
  (this->_impl_).response_base_ = pRVar1;
  (this->_impl_).new_player_uid_ = (param_2->_impl_).new_player_uid_;
  return this;
}

// SearchNicknameResponse @ 14c0ef0c0

SearchNicknameResponse * __thiscall
api_session::SearchNicknameResponse::SearchNicknameResponse
          (SearchNicknameResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SearchNicknameResponse_api_session__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).data_ = (NicknameData *)0x0;
  (this->_impl_).error_code_ = 0;
  return this;
}

// SearchNicknameResponse @ 14c0ef100

SearchNicknameResponse * __thiscall
api_session::SearchNicknameResponse::SearchNicknameResponse
          (SearchNicknameResponse *this,Arena *param_1,SearchNicknameResponse *param_2)

{
  ArenaStringPtr *this_00;
  TaggedStringPtr TVar1;
  void *pvVar2;
  NicknameData *pNVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SearchNicknameResponse_api_session__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).nickname_;
  pNVar3 = (NicknameData *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar2 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->_impl_).nickname_.tagged_ptr_.ptr_ = pvVar2;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pNVar3 = google::protobuf::Arena::CopyConstruct<misc::NicknameData>
                       (param_1,(param_2->_impl_).data_);
  }
  (this->_impl_).data_ = pNVar3;
  (this->_impl_).error_code_ = (param_2->_impl_).error_code_;
  return this;
}

// ~ExternalLoginAndCreateSessionRequest @ 14c0ef1b0

void __thiscall
api_session::ExternalLoginAndCreateSessionRequest::~ExternalLoginAndCreateSessionRequest
          (ExternalLoginAndCreateSessionRequest *this)

{
  this->_padding_ = (longlong)&___7ExternalLoginAndCreateSessionRequest_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).id_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).password_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).device_description_);
  return;
}

// ~ExternalLoginAndCreateSessionResponse @ 14c0ef200

void __thiscall
api_session::ExternalLoginAndCreateSessionResponse::~ExternalLoginAndCreateSessionResponse
          (ExternalLoginAndCreateSessionResponse *this)

{
  ResponseBase *this_00;
  UniqueId *this_01;
  
  this->_padding_ = (longlong)&___7ExternalLoginAndCreateSessionResponse_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::~ResponseBase(this_00);
    ::operator_delete(this_00,0x28);
  }
  this_01 = (this->_impl_).player_session_uid_;
  if (this_01 != (UniqueId *)0x0) {
    UniqueId::~UniqueId(this_01);
    ::operator_delete(this_01,0x20);
  }
  return;
}

// ~InvalidHttpResponse @ 14c0ef280

void __thiscall api_session::InvalidHttpResponse::~InvalidHttpResponse(InvalidHttpResponse *this)

{
  ResponseBase *this_00;
  
  this->_padding_ = (longlong)&___7InvalidHttpResponse_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::~ResponseBase(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// ~JwtRefreshResponse @ 14c0ef2d0

void __thiscall api_session::JwtRefreshResponse::~JwtRefreshResponse(JwtRefreshResponse *this)

{
  this->_padding_ = (longlong)&___7JwtRefreshResponse_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).refresh_jwt_key_);
  return;
}

// ~LoginAndCreateSessionRequest @ 14c0ef310

void __thiscall
api_session::LoginAndCreateSessionRequest::~LoginAndCreateSessionRequest
          (LoginAndCreateSessionRequest *this)

{
  this->_padding_ = (longlong)&___7LoginAndCreateSessionRequest_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).id_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).password_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).device_description_);
  return;
}

// ~LoginAndCreateSessionResponse @ 14c0ef360

void __thiscall
api_session::LoginAndCreateSessionResponse::~LoginAndCreateSessionResponse
          (LoginAndCreateSessionResponse *this)

{
  ResponseBase *this_00;
  UniqueId *this_01;
  
  this->_padding_ = (longlong)&___7LoginAndCreateSessionResponse_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::~ResponseBase(this_00);
    ::operator_delete(this_00,0x28);
  }
  this_01 = (this->_impl_).player_session_uid_;
  if (this_01 != (UniqueId *)0x0) {
    UniqueId::~UniqueId(this_01);
    ::operator_delete(this_01,0x20);
  }
  return;
}

// ~LoginAndRegisterPlayerRequest @ 14c0ef3e0

void __thiscall
api_session::LoginAndRegisterPlayerRequest::~LoginAndRegisterPlayerRequest
          (LoginAndRegisterPlayerRequest *this)

{
  this->_padding_ = (longlong)&___7LoginAndRegisterPlayerRequest_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).id_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).device_description_);
  return;
}

// ~LoginAndRegisterPlayerResponse @ 14c0ef420

void __thiscall
api_session::LoginAndRegisterPlayerResponse::~LoginAndRegisterPlayerResponse
          (LoginAndRegisterPlayerResponse *this)

{
  ResponseBase *this_00;
  UniqueId *this_01;
  
  this->_padding_ = (longlong)&___7LoginAndRegisterPlayerResponse_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).jwt_key_);
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::~ResponseBase(this_00);
    ::operator_delete(this_00,0x28);
  }
  this_01 = (this->_impl_).player_session_uid_;
  if (this_01 != (UniqueId *)0x0) {
    UniqueId::~UniqueId(this_01);
    ::operator_delete(this_01,0x20);
  }
  return;
}

// ~LogoutAndRemoveSessionRequest @ 14c0ef4a0

void __thiscall
api_session::LogoutAndRemoveSessionRequest::~LogoutAndRemoveSessionRequest
          (LogoutAndRemoveSessionRequest *this)

{
  RequestBase *this_00;
  
  this->_padding_ = (longlong)&___7LogoutAndRemoveSessionRequest_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).request_base_;
  if (this_00 != (RequestBase *)0x0) {
    RequestBase::~RequestBase(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// ~LogoutAndRemoveSessionResponse @ 14c0ef4f0

void __thiscall
api_session::LogoutAndRemoveSessionResponse::~LogoutAndRemoveSessionResponse
          (LogoutAndRemoveSessionResponse *this)

{
  ResponseBase *this_00;
  
  this->_padding_ = (longlong)&___7LogoutAndRemoveSessionResponse_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::~ResponseBase(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// ~RegisterPlayerRequest @ 14c0ef540

void __thiscall
api_session::RegisterPlayerRequest::~RegisterPlayerRequest(RegisterPlayerRequest *this)

{
  this->_padding_ = (longlong)&___7RegisterPlayerRequest_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).id_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).password_);
  return;
}

// ~RegisterPlayerResponse @ 14c0ef580

void __thiscall
api_session::RegisterPlayerResponse::~RegisterPlayerResponse(RegisterPlayerResponse *this)

{
  ResponseBase *this_00;
  
  this->_padding_ = (longlong)&___7RegisterPlayerResponse_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::~ResponseBase(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// ~SearchNicknameResponse @ 14c0ef5d0

void __thiscall
api_session::SearchNicknameResponse::~SearchNicknameResponse(SearchNicknameResponse *this)

{
  NicknameData *this_00;
  
  this->_padding_ = (longlong)&___7SearchNicknameResponse_api_session__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  this_00 = (this->_impl_).data_;
  if (this_00 != (NicknameData *)0x0) {
    misc::NicknameData::~NicknameData(this_00);
    ::operator_delete(this_00,0x40);
    return;
  }
  return;
}

// `scalar_deleting_destructor' @ 14c0ef630

void * __thiscall misc::NicknameData::_scalar_deleting_destructor_(NicknameData *this,uint param_1)

{
  ~NicknameData(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0ef670

void * __thiscall RequestBase::_scalar_deleting_destructor_(RequestBase *this,uint param_1)

{
  ~RequestBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0ef6b0

void * __thiscall UniqueId::_scalar_deleting_destructor_(UniqueId *this,uint param_1)

{
  ~UniqueId(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// CopyFrom @ 14c0ef6f0

void __thiscall
api_session::ExternalLoginAndCreateSessionRequest::CopyFrom
          (ExternalLoginAndCreateSessionRequest *this,ExternalLoginAndCreateSessionRequest *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c0ef730

void __thiscall
api_session::ExternalLoginAndCreateSessionResponse::CopyFrom
          (ExternalLoginAndCreateSessionResponse *this,
          ExternalLoginAndCreateSessionResponse *param_1)

{
  uint uVar1;
  ResponseBase *pRVar2;
  UniqueId *pUVar3;
  ResponseBase *pRVar4;
  UniqueId *pUVar5;
  Arena *pAVar6;
  
  if (param_1 != this) {
    Clear(this);
    pAVar6 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 3) != 0) {
      if ((uVar1 & 1) != 0) {
        pRVar4 = (this->_impl_).response_base_;
        pRVar2 = (param_1->_impl_).response_base_;
        if (pRVar4 == (ResponseBase *)0x0) {
          pRVar4 = google::protobuf::Arena::CopyConstruct<ResponseBase>(pAVar6,pRVar2);
          (this->_impl_).response_base_ = pRVar4;
        }
        else {
          ResponseBase::MergeImpl((MessageLite *)pRVar4,(MessageLite *)pRVar2);
        }
      }
      if ((uVar1 & 2) != 0) {
        pUVar5 = (this->_impl_).player_session_uid_;
        pUVar3 = (param_1->_impl_).player_session_uid_;
        if (pUVar5 == (UniqueId *)0x0) {
          pUVar5 = google::protobuf::Arena::CopyConstruct<UniqueId>(pAVar6,pUVar3);
          (this->_impl_).player_session_uid_ = pUVar5;
        }
        else {
          UniqueId::MergeImpl((MessageLite *)pUVar5,(MessageLite *)pUVar3);
        }
      }
    }
    (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar1;
    if ((param_1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&this->_padding_,
                 (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    }
  }
  return;
}

// CopyFrom @ 14c0ef800

void __thiscall
api_session::InvalidHttpResponse::CopyFrom(InvalidHttpResponse *this,InvalidHttpResponse *param_1)

{
  uint uVar1;
  ResponseBase *pRVar2;
  ResponseBase *pRVar3;
  Arena *pAVar4;
  
  if (param_1 != this) {
    Clear(this);
    pAVar4 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 1) != 0) {
      pRVar3 = (this->_impl_).response_base_;
      pRVar2 = (param_1->_impl_).response_base_;
      if (pRVar3 == (ResponseBase *)0x0) {
        pRVar3 = google::protobuf::Arena::CopyConstruct<ResponseBase>(pAVar4,pRVar2);
        (this->_impl_).response_base_ = pRVar3;
      }
      else {
        ResponseBase::MergeImpl((MessageLite *)pRVar3,(MessageLite *)pRVar2);
      }
    }
    (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar1;
    if ((param_1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&this->_padding_,
                 (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    }
  }
  return;
}

// CopyFrom @ 14c0ef8a0

void __thiscall
api_session::JwtRefreshResponse::CopyFrom(JwtRefreshResponse *this,JwtRefreshResponse *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c0ef8e0

void __thiscall
api_session::LoginAndCreateSessionRequest::CopyFrom
          (LoginAndCreateSessionRequest *this,LoginAndCreateSessionRequest *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c0ef920

void __thiscall
api_session::LoginAndCreateSessionResponse::CopyFrom
          (LoginAndCreateSessionResponse *this,LoginAndCreateSessionResponse *param_1)

{
  uint uVar1;
  ResponseBase *pRVar2;
  UniqueId *pUVar3;
  ResponseBase *pRVar4;
  UniqueId *pUVar5;
  Arena *pAVar6;
  
  if (param_1 != this) {
    Clear(this);
    pAVar6 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 3) != 0) {
      if ((uVar1 & 1) != 0) {
        pRVar4 = (this->_impl_).response_base_;
        pRVar2 = (param_1->_impl_).response_base_;
        if (pRVar4 == (ResponseBase *)0x0) {
          pRVar4 = google::protobuf::Arena::CopyConstruct<ResponseBase>(pAVar6,pRVar2);
          (this->_impl_).response_base_ = pRVar4;
        }
        else {
          ResponseBase::MergeImpl((MessageLite *)pRVar4,(MessageLite *)pRVar2);
        }
      }
      if ((uVar1 & 2) != 0) {
        pUVar5 = (this->_impl_).player_session_uid_;
        pUVar3 = (param_1->_impl_).player_session_uid_;
        if (pUVar5 == (UniqueId *)0x0) {
          pUVar5 = google::protobuf::Arena::CopyConstruct<UniqueId>(pAVar6,pUVar3);
          (this->_impl_).player_session_uid_ = pUVar5;
        }
        else {
          UniqueId::MergeImpl((MessageLite *)pUVar5,(MessageLite *)pUVar3);
        }
      }
    }
    (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar1;
    if ((param_1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&this->_padding_,
                 (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    }
  }
  return;
}

// CopyFrom @ 14c0ef9f0

void __thiscall
api_session::LoginAndRegisterPlayerRequest::CopyFrom
          (LoginAndRegisterPlayerRequest *this,LoginAndRegisterPlayerRequest *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c0efa30

void __thiscall
api_session::LoginAndRegisterPlayerResponse::CopyFrom
          (LoginAndRegisterPlayerResponse *this,LoginAndRegisterPlayerResponse *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c0efa70

void __thiscall
api_session::LogoutAndRemoveSessionRequest::CopyFrom
          (LogoutAndRemoveSessionRequest *this,LogoutAndRemoveSessionRequest *param_1)

{
  uint uVar1;
  RequestBase *pRVar2;
  RequestBase *pRVar3;
  Arena *pAVar4;
  
  if (param_1 != this) {
    Clear(this);
    pAVar4 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 1) != 0) {
      pRVar3 = (this->_impl_).request_base_;
      pRVar2 = (param_1->_impl_).request_base_;
      if (pRVar3 == (RequestBase *)0x0) {
        pRVar3 = google::protobuf::Arena::CopyConstruct<RequestBase>(pAVar4,pRVar2);
        (this->_impl_).request_base_ = pRVar3;
      }
      else {
        RequestBase::MergeImpl((MessageLite *)pRVar3,(MessageLite *)pRVar2);
      }
    }
    (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar1;
    if ((param_1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&this->_padding_,
                 (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    }
  }
  return;
}

// CopyFrom @ 14c0efb10

void __thiscall
api_session::LogoutAndRemoveSessionResponse::CopyFrom
          (LogoutAndRemoveSessionResponse *this,LogoutAndRemoveSessionResponse *param_1)

{
  uint uVar1;
  ResponseBase *pRVar2;
  ResponseBase *pRVar3;
  Arena *pAVar4;
  
  if (param_1 != this) {
    Clear(this);
    pAVar4 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 1) != 0) {
      pRVar3 = (this->_impl_).response_base_;
      pRVar2 = (param_1->_impl_).response_base_;
      if (pRVar3 == (ResponseBase *)0x0) {
        pRVar3 = google::protobuf::Arena::CopyConstruct<ResponseBase>(pAVar4,pRVar2);
        (this->_impl_).response_base_ = pRVar3;
      }
      else {
        ResponseBase::MergeImpl((MessageLite *)pRVar3,(MessageLite *)pRVar2);
      }
    }
    (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar1;
    if ((param_1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&this->_padding_,
                 (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    }
  }
  return;
}

// CopyFrom @ 14c0efbb0

void __thiscall
api_session::RegisterPlayerRequest::CopyFrom
          (RegisterPlayerRequest *this,RegisterPlayerRequest *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c0efbf0

void __thiscall
api_session::RegisterPlayerResponse::CopyFrom
          (RegisterPlayerResponse *this,RegisterPlayerResponse *param_1)

{
  uint uVar1;
  ResponseBase *pRVar2;
  longlong lVar3;
  ResponseBase *pRVar4;
  Arena *pAVar5;
  
  if (param_1 != this) {
    Clear(this);
    pAVar5 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 3) != 0) {
      if ((uVar1 & 1) != 0) {
        pRVar4 = (this->_impl_).response_base_;
        pRVar2 = (param_1->_impl_).response_base_;
        if (pRVar4 == (ResponseBase *)0x0) {
          pRVar4 = google::protobuf::Arena::CopyConstruct<ResponseBase>(pAVar5,pRVar2);
          (this->_impl_).response_base_ = pRVar4;
        }
        else {
          ResponseBase::MergeImpl((MessageLite *)pRVar4,(MessageLite *)pRVar2);
        }
      }
      if (((uVar1 & 2) != 0) && (lVar3 = (param_1->_impl_).new_player_uid_, lVar3 != 0)) {
        (this->_impl_).new_player_uid_ = lVar3;
      }
    }
    (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar1;
    if ((param_1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&this->_padding_,
                 (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    }
  }
  return;
}

// CopyFrom @ 14c0efcb0

void __thiscall
api_session::SearchNicknameResponse::CopyFrom
          (SearchNicknameResponse *this,SearchNicknameResponse *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c0efcf0

Metadata * __thiscall
api_session::ExternalLoginAndCreateSessionRequest::GetMetadata
          (ExternalLoginAndCreateSessionRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&ExternalLoginAndCreateSessionRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0efd30

Metadata * __thiscall
api_session::ExternalLoginAndCreateSessionResponse::GetMetadata
          (ExternalLoginAndCreateSessionResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&ExternalLoginAndCreateSessionResponse_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0efd70

Metadata * __thiscall
api_session::InvalidHttpResponse::GetMetadata
          (InvalidHttpResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&InvalidHttpResponse_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0efdb0

Metadata * __thiscall
api_session::JwtRefreshResponse::GetMetadata
          (JwtRefreshResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&JwtRefreshResponse_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0efdf0

Metadata * __thiscall
api_session::LoginAndCreateSessionRequest::GetMetadata
          (LoginAndCreateSessionRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&LoginAndCreateSessionRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0efe30

Metadata * __thiscall
api_session::LoginAndCreateSessionResponse::GetMetadata
          (LoginAndCreateSessionResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&LoginAndCreateSessionResponse_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0efe70

Metadata * __thiscall
api_session::LoginAndRegisterPlayerRequest::GetMetadata
          (LoginAndRegisterPlayerRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&LoginAndRegisterPlayerRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0efeb0

Metadata * __thiscall
api_session::LoginAndRegisterPlayerResponse::GetMetadata
          (LoginAndRegisterPlayerResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&LoginAndRegisterPlayerResponse_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0efef0

Metadata * __thiscall
api_session::LogoutAndRemoveSessionRequest::GetMetadata
          (LogoutAndRemoveSessionRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&LogoutAndRemoveSessionRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0eff30

Metadata * __thiscall
api_session::LogoutAndRemoveSessionResponse::GetMetadata
          (LogoutAndRemoveSessionResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&LogoutAndRemoveSessionResponse_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0eff70

Metadata * __thiscall
api_session::RegisterPlayerRequest::GetMetadata
          (RegisterPlayerRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&RegisterPlayerRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0effb0

Metadata * __thiscall
api_session::RegisterPlayerResponse::GetMetadata
          (RegisterPlayerResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&RegisterPlayerResponse_class_data_)
  ;
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0efff0

Metadata * __thiscall
api_session::SearchNicknameResponse::GetMetadata
          (SearchNicknameResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SearchNicknameResponse_class_data_)
  ;
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c0f0030

void __thiscall
api_session::ExternalLoginAndCreateSessionRequest::InternalSwap
          (ExternalLoginAndCreateSessionRequest *this,ExternalLoginAndCreateSessionRequest *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pvVar3 = (param_1->_impl_).id_.tagged_ptr_.ptr_;
  (param_1->_impl_).id_.tagged_ptr_.ptr_ = (this->_impl_).id_.tagged_ptr_.ptr_;
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).password_.tagged_ptr_.ptr_;
  (param_1->_impl_).password_.tagged_ptr_.ptr_ = (this->_impl_).password_.tagged_ptr_.ptr_;
  (this->_impl_).password_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).device_description_.tagged_ptr_.ptr_;
  (param_1->_impl_).device_description_.tagged_ptr_.ptr_ =
       (this->_impl_).device_description_.tagged_ptr_.ptr_;
  (this->_impl_).device_description_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).sdk_type_,this + 1,&(param_1->_impl_).sdk_type_);
  return;
}

// InternalSwap @ 14c0f00a0

void __thiscall
api_session::ExternalLoginAndCreateSessionResponse::InternalSwap
          (ExternalLoginAndCreateSessionResponse *this,
          ExternalLoginAndCreateSessionResponse *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).response_base_,(char *)&(param_1->_impl_).response_base_);
  return;
}

// InternalSwap @ 14c0f00e0

void __thiscall
api_session::InvalidHttpResponse::InternalSwap
          (InvalidHttpResponse *this,InvalidHttpResponse *param_1)

{
  uint uVar1;
  longlong lVar2;
  ResponseBase *pRVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pRVar3 = (this->_impl_).response_base_;
  (this->_impl_).response_base_ = (param_1->_impl_).response_base_;
  (param_1->_impl_).response_base_ = pRVar3;
  return;
}

// InternalSwap @ 14c0f0120

void __thiscall
api_session::JwtRefreshResponse::InternalSwap(JwtRefreshResponse *this,JwtRefreshResponse *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  long64 lVar4;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pvVar3 = (param_1->_impl_).refresh_jwt_key_.tagged_ptr_.ptr_;
  (param_1->_impl_).refresh_jwt_key_.tagged_ptr_.ptr_ =
       (this->_impl_).refresh_jwt_key_.tagged_ptr_.ptr_;
  (this->_impl_).refresh_jwt_key_.tagged_ptr_.ptr_ = pvVar3;
  lVar4 = (this->_impl_).player_uid_;
  (this->_impl_).player_uid_ = (param_1->_impl_).player_uid_;
  (param_1->_impl_).player_uid_ = lVar4;
  return;
}

// InternalSwap @ 14c0f0170

void __thiscall
api_session::LoginAndCreateSessionRequest::InternalSwap
          (LoginAndCreateSessionRequest *this,LoginAndCreateSessionRequest *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pvVar3 = (param_1->_impl_).id_.tagged_ptr_.ptr_;
  (param_1->_impl_).id_.tagged_ptr_.ptr_ = (this->_impl_).id_.tagged_ptr_.ptr_;
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).password_.tagged_ptr_.ptr_;
  (param_1->_impl_).password_.tagged_ptr_.ptr_ = (this->_impl_).password_.tagged_ptr_.ptr_;
  (this->_impl_).password_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).device_description_.tagged_ptr_.ptr_;
  (param_1->_impl_).device_description_.tagged_ptr_.ptr_ =
       (this->_impl_).device_description_.tagged_ptr_.ptr_;
  (this->_impl_).device_description_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).sdk_type_,this + 1,&(param_1->_impl_).sdk_type_);
  return;
}

// InternalSwap @ 14c0f01e0

void __thiscall
api_session::LoginAndCreateSessionResponse::InternalSwap
          (LoginAndCreateSessionResponse *this,LoginAndCreateSessionResponse *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).response_base_,(char *)&(param_1->_impl_).response_base_);
  return;
}

// InternalSwap @ 14c0f0220

void __thiscall
api_session::LoginAndRegisterPlayerRequest::InternalSwap
          (LoginAndRegisterPlayerRequest *this,LoginAndRegisterPlayerRequest *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pvVar3 = (param_1->_impl_).id_.tagged_ptr_.ptr_;
  (param_1->_impl_).id_.tagged_ptr_.ptr_ = (this->_impl_).id_.tagged_ptr_.ptr_;
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).device_description_.tagged_ptr_.ptr_;
  (param_1->_impl_).device_description_.tagged_ptr_.ptr_ =
       (this->_impl_).device_description_.tagged_ptr_.ptr_;
  (this->_impl_).device_description_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).sdk_type_,&(this->_impl_).field_0x24,&(param_1->_impl_).sdk_type_);
  return;
}

// InternalSwap @ 14c0f0280

void __thiscall
api_session::LoginAndRegisterPlayerResponse::InternalSwap
          (LoginAndRegisterPlayerResponse *this,LoginAndRegisterPlayerResponse *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pvVar3 = (param_1->_impl_).jwt_key_.tagged_ptr_.ptr_;
  (param_1->_impl_).jwt_key_.tagged_ptr_.ptr_ = (this->_impl_).jwt_key_.tagged_ptr_.ptr_;
  (this->_impl_).jwt_key_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).response_base_,this + 1,&(param_1->_impl_).response_base_);
  return;
}

// InternalSwap @ 14c0f02d0

void __thiscall
api_session::LogoutAndRemoveSessionRequest::InternalSwap
          (LogoutAndRemoveSessionRequest *this,LogoutAndRemoveSessionRequest *param_1)

{
  uint uVar1;
  longlong lVar2;
  RequestBase *pRVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pRVar3 = (this->_impl_).request_base_;
  (this->_impl_).request_base_ = (param_1->_impl_).request_base_;
  (param_1->_impl_).request_base_ = pRVar3;
  return;
}

// InternalSwap @ 14c0f0310

void __thiscall
api_session::LogoutAndRemoveSessionResponse::InternalSwap
          (LogoutAndRemoveSessionResponse *this,LogoutAndRemoveSessionResponse *param_1)

{
  uint uVar1;
  longlong lVar2;
  ResponseBase *pRVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pRVar3 = (this->_impl_).response_base_;
  (this->_impl_).response_base_ = (param_1->_impl_).response_base_;
  (param_1->_impl_).response_base_ = pRVar3;
  return;
}

// InternalSwap @ 14c0f0350

void __thiscall
api_session::RegisterPlayerRequest::InternalSwap
          (RegisterPlayerRequest *this,RegisterPlayerRequest *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pvVar3 = (param_1->_impl_).id_.tagged_ptr_.ptr_;
  (param_1->_impl_).id_.tagged_ptr_.ptr_ = (this->_impl_).id_.tagged_ptr_.ptr_;
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).password_.tagged_ptr_.ptr_;
  (param_1->_impl_).password_.tagged_ptr_.ptr_ = (this->_impl_).password_.tagged_ptr_.ptr_;
  (this->_impl_).password_.tagged_ptr_.ptr_ = pvVar3;
  return;
}

// InternalSwap @ 14c0f03a0

void __thiscall
api_session::RegisterPlayerResponse::InternalSwap
          (RegisterPlayerResponse *this,RegisterPlayerResponse *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).response_base_,(char *)&(param_1->_impl_).response_base_);
  return;
}

// InternalSwap @ 14c0f03e0

void __thiscall
api_session::SearchNicknameResponse::InternalSwap
          (SearchNicknameResponse *this,SearchNicknameResponse *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pvVar3 = (param_1->_impl_).nickname_.tagged_ptr_.ptr_;
  (param_1->_impl_).nickname_.tagged_ptr_.ptr_ = (this->_impl_).nickname_.tagged_ptr_.ptr_;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).data_,&(this->_impl_).field_0x1c,&(param_1->_impl_).data_);
  return;
}

// clear_data @ 14c0f0430

void __thiscall api_session::SearchNicknameResponse::clear_data(SearchNicknameResponse *this)

{
  NicknameData *this_00;
  
  this_00 = (this->_impl_).data_;
  if (this_00 != (NicknameData *)0x0) {
    misc::NicknameData::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// clear_player_session_uid @ 14c0f0460

void __thiscall
api_session::ExternalLoginAndCreateSessionResponse::clear_player_session_uid
          (ExternalLoginAndCreateSessionResponse *this)

{
  UniqueId *this_00;
  
  this_00 = (this->_impl_).player_session_uid_;
  if (this_00 != (UniqueId *)0x0) {
    UniqueId::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// clear_player_session_uid @ 14c0f0490

void __thiscall
api_session::LoginAndCreateSessionResponse::clear_player_session_uid
          (LoginAndCreateSessionResponse *this)

{
  UniqueId *this_00;
  
  this_00 = (this->_impl_).player_session_uid_;
  if (this_00 != (UniqueId *)0x0) {
    UniqueId::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// clear_player_session_uid @ 14c0f04c0

void __thiscall
api_session::LoginAndRegisterPlayerResponse::clear_player_session_uid
          (LoginAndRegisterPlayerResponse *this)

{
  UniqueId *this_00;
  
  this_00 = (this->_impl_).player_session_uid_;
  if (this_00 != (UniqueId *)0x0) {
    UniqueId::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffb;
  return;
}

// clear_request_base @ 14c0f04f0

void __thiscall
api_session::LogoutAndRemoveSessionRequest::clear_request_base(LogoutAndRemoveSessionRequest *this)

{
  RequestBase *this_00;
  
  this_00 = (this->_impl_).request_base_;
  if (this_00 != (RequestBase *)0x0) {
    RequestBase::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_response_base @ 14c0f0520

void __thiscall
api_session::ExternalLoginAndCreateSessionResponse::clear_response_base
          (ExternalLoginAndCreateSessionResponse *this)

{
  ResponseBase *this_00;
  
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_response_base @ 14c0f0550

void __thiscall api_session::InvalidHttpResponse::clear_response_base(InvalidHttpResponse *this)

{
  ResponseBase *this_00;
  
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_response_base @ 14c0f0580

void __thiscall
api_session::LoginAndCreateSessionResponse::clear_response_base(LoginAndCreateSessionResponse *this)

{
  ResponseBase *this_00;
  
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_response_base @ 14c0f05b0

void __thiscall
api_session::LoginAndRegisterPlayerResponse::clear_response_base
          (LoginAndRegisterPlayerResponse *this)

{
  ResponseBase *this_00;
  
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// clear_response_base @ 14c0f05e0

void __thiscall
api_session::LogoutAndRemoveSessionResponse::clear_response_base
          (LogoutAndRemoveSessionResponse *this)

{
  ResponseBase *this_00;
  
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_response_base @ 14c0f0610

void __thiscall
api_session::RegisterPlayerResponse::clear_response_base(RegisterPlayerResponse *this)

{
  ResponseBase *this_00;
  
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// `dynamic_atexit_destructor_for_'_ExternalLoginAndCreateSessionRequest_default_instance_'' @ 150440940

void __cdecl
api_session::
_dynamic_atexit_destructor_for___ExternalLoginAndCreateSessionRequest_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ExternalLoginAndCreateSessionResponse_default_instance_'' @ 150440950

void __cdecl
api_session::
_dynamic_atexit_destructor_for___ExternalLoginAndCreateSessionResponse_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_InvalidHttpResponse_default_instance_'' @ 150440960

void __cdecl
api_session::_dynamic_atexit_destructor_for___InvalidHttpResponse_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_JwtRefreshResponse_default_instance_'' @ 150440970

void __cdecl
api_session::_dynamic_atexit_destructor_for___JwtRefreshResponse_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_LoginAndCreateSessionRequest_default_instance_'' @ 150440980

void __cdecl
api_session::_dynamic_atexit_destructor_for___LoginAndCreateSessionRequest_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_LoginAndCreateSessionResponse_default_instance_'' @ 150440990

void __cdecl
api_session::_dynamic_atexit_destructor_for___LoginAndCreateSessionResponse_default_instance___
          (void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_LoginAndRegisterPlayerRequest_default_instance_'' @ 1504409a0

void __cdecl
api_session::_dynamic_atexit_destructor_for___LoginAndRegisterPlayerRequest_default_instance___
          (void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_LoginAndRegisterPlayerResponse_default_instance_'' @ 1504409b0

void __cdecl
api_session::_dynamic_atexit_destructor_for___LoginAndRegisterPlayerResponse_default_instance___
          (void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_LogoutAndRemoveSessionRequest_default_instance_'' @ 1504409c0

void __cdecl
api_session::_dynamic_atexit_destructor_for___LogoutAndRemoveSessionRequest_default_instance___
          (void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_LogoutAndRemoveSessionResponse_default_instance_'' @ 1504409d0

void __cdecl
api_session::_dynamic_atexit_destructor_for___LogoutAndRemoveSessionResponse_default_instance___
          (void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_RegisterPlayerRequest_default_instance_'' @ 1504409e0

void __cdecl
api_session::_dynamic_atexit_destructor_for___RegisterPlayerRequest_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_RegisterPlayerResponse_default_instance_'' @ 1504409f0

void __cdecl
api_session::_dynamic_atexit_destructor_for___RegisterPlayerResponse_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_SearchNicknameResponse_default_instance_'' @ 150440a00

void __cdecl
api_session::_dynamic_atexit_destructor_for___SearchNicknameResponse_default_instance___(void)

{
  return;
}


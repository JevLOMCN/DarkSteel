// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 115

// `dynamic_initializer_for_'_GetFrontEndServerAddrRequest_default_instance_'' @ 14128f110

void __cdecl
api_system::_dynamic_initializer_for___GetFrontEndServerAddrRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___GetFrontEndServerAddrRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_GetFrontEndServerAddrResponse_default_instance_'' @ 14128f130

void __cdecl
api_system::_dynamic_initializer_for___GetFrontEndServerAddrResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___GetFrontEndServerAddrResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_GetServerListInfoRequest_default_instance_'' @ 14128f150

void __cdecl
api_system::_dynamic_initializer_for___GetServerListInfoRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___GetServerListInfoRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_GetServerListInfoResponse_default_instance_'' @ 14128f170

void __cdecl
api_system::_dynamic_initializer_for___GetServerListInfoResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___GetServerListInfoResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ServerListInfo_default_instance_'' @ 14128f190

void __cdecl api_system::_dynamic_initializer_for___ServerListInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ServerListInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_TencentUserSigRequest_default_instance_'' @ 14128f1b0

void __cdecl api_system::_dynamic_initializer_for___TencentUserSigRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___TencentUserSigRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_TencentUserSigResponse_default_instance_'' @ 14128f1d0

void __cdecl api_system::_dynamic_initializer_for___TencentUserSigResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___TencentUserSigResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14128f1f0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_api_5fsystem_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c0f0640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
api_system::GetServerListInfoRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c0f0780

void __thiscall api_system::GetServerListInfoRequest::Clear(GetServerListInfoRequest *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    puVar2 = (undefined8 *)
             ((ulonglong)(this->_impl_).player_id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar2[2] = 0;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
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

// ByteSizeLong @ 14c0f07c0

ulong64 __thiscall
api_system::GetServerListInfoRequest::ByteSizeLong(GetServerListInfoRequest *this)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar1 = *(longlong *)
               (((ulonglong)(this->_impl_).player_id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10)
     , lVar1 != 0)) {
    uVar2 = (uint)lVar1 | 1;
    if (__isa_available < 5) {
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 0x1f - iVar3;
    }
    else {
      iVar3 = LZCOUNT(uVar2);
    }
    _Var4 = (ulonglong)(iVar3 * -9 + 0x160U >> 6) + 1 + lVar1;
  }
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c0f0830

uchar * __thiscall
api_system::GetServerListInfoRequest::_InternalSerialize
          (GetServerListInfoRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  uchar *puVar2;
  char *pcVar3;
  char *pcVar4;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).player_id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_18._Mysize = 0x2d;
      local_18._Mydata = "api_system.GetServerListInfoRequest.player_id";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_18._Mysize = *puVar1;
      local_18._Mydata = pcVar4;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,1,&local_18,param_1);
    }
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar2;
}

// GetClassData @ 14c0f0930

ClassData * __thiscall
api_system::GetServerListInfoRequest::GetClassData(GetServerListInfoRequest *this)

{
  return (ClassData *)&GetServerListInfoRequest_class_data_;
}

// PlacementNew_ @ 14c0f0950

void * __cdecl
api_system::GetServerListInfoRequest::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7GetServerListInfoRequest_api_system__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0f0980

void * __thiscall
api_system::GetServerListInfoRequest::_scalar_deleting_destructor_
          (GetServerListInfoRequest *this,uint param_1)

{
  this->_padding_ = (longlong)&___7GetServerListInfoRequest_api_system__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).player_id_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c0f09e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
api_system::TencentUserSigResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
        pvVar4 = google::protobuf::Arena::CopyConstruct<ResponseBase>
                           (pAVar8,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar4;
      }
      else {
        ResponseBase::MergeImpl
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

// Clear @ 14c0f0b70

void __thiscall api_system::TencentUserSigResponse::Clear(TencentUserSigResponse *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).user_sig_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      ResponseBase::Clear((this->_impl_).response_base_);
    }
  }
  (this->_impl_).sdk_app_id_ = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c0f0be0

ulong64 __thiscall api_system::TencentUserSigResponse::ByteSizeLong(TencentUserSigResponse *this)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  int iVar5;
  __uint64 _Var6;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((uVar3 & 7) != 0) {
    if (((uVar3 & 1) != 0) &&
       (lVar1 = *(longlong *)
                 (((ulonglong)(this->_impl_).user_sig_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10
                 ), lVar1 != 0)) {
      uVar2 = (uint)lVar1 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar2);
      }
      _Var6 = (ulonglong)(iVar5 * -9 + 0x160U >> 6) + 1 + lVar1;
    }
    if ((uVar3 & 2) != 0) {
      uVar4 = ResponseBase::ByteSizeLong((this->_impl_).response_base_);
      uVar2 = (uint)uVar4 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar2);
      }
      _Var6 = _Var6 + 1 + (iVar5 * -9 + 0x160U >> 6) + uVar4;
    }
    if (((uVar3 & 4) != 0) && (uVar3 = (this->_impl_).sdk_app_id_, uVar3 != 0)) {
      uVar3 = uVar3 | 1;
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
      _Var6 = _Var6 + (iVar5 * -9 + 0x1a0U >> 6);
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c0f0d10

uchar * __thiscall
api_system::TencentUserSigResponse::_InternalSerialize
          (TencentUserSigResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  byte *pbVar2;
  byte bVar3;
  uchar *puVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  uVar5 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar5 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).response_base_,
                         (int)(((this->_impl_).response_base_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((uVar5 & 1) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).user_sig_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar6 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar6 = *(char **)pcVar7;
      }
      local_28._Mysize = 0x2a;
      local_28._Mydata = "api_system.TencentUserSigResponse.user_sig";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,2,&local_28,param_1);
    }
  }
  if (((uVar5 & 4) != 0) && ((this->_impl_).sdk_app_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar5 = (this->_impl_).sdk_app_id_;
    *param_1 = 0x18;
    while( true ) {
      pbVar2 = param_1 + 1;
      bVar3 = (byte)uVar5;
      if (uVar5 < 0x80) break;
      uVar5 = uVar5 >> 7;
      *pbVar2 = bVar3 | 0x80;
      param_1 = pbVar2;
    }
    *pbVar2 = bVar3;
    param_1 = param_1 + 2;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar4 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar4;
  }
  return param_1;
}

// GetClassData @ 14c0f0e70

ClassData * __thiscall
api_system::TencentUserSigResponse::GetClassData(TencentUserSigResponse *this)

{
  return (ClassData *)&TencentUserSigResponse_class_data_;
}

// PlacementNew_ @ 14c0f0e90

void * __cdecl
api_system::TencentUserSigResponse::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7TencentUserSigResponse_api_system__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0f0ed0

void * __thiscall
api_system::TencentUserSigResponse::_scalar_deleting_destructor_
          (TencentUserSigResponse *this,uint param_1)

{
  ResponseBase *this_00;
  
  this->_padding_ = (longlong)&___7TencentUserSigResponse_api_system__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).user_sig_);
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::~ResponseBase(this_00);
    ::operator_delete(this_00,0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// MergeImpl @ 14c0f0f50

void __cdecl api_system::ServerListInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  void *pvVar6;
  Arena *pAVar7;
  Arena *pAVar8;
  
  pAVar8 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar5 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar7 = pAVar8;
  if (bVar5 != 0) {
    pAVar7 = (Arena *)(pAVar8->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((char)uVar1 != '\0') {
    if ((uVar1 & 1) != 0) {
      uVar3 = param_2[1]._internal_metadata_.ptr_;
      *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
      if (bVar5 != 0) {
        pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
      }
      google::protobuf::internal::ArenaStringPtr::Set<>
                ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (uVar3 & 0xfffffffffffffffc),pAVar8);
    }
    if ((uVar1 & 2) != 0) {
      if ((MessageLite *)param_1[2]._padding_ == (MessageLite *)0x0) {
        pvVar6 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                           (pAVar7,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar6;
      }
      else {
        google::protobuf::Timestamp::MergeImpl
                  ((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
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
    if (((uVar1 & 0x20) != 0) && (iVar2 = *(int *)((longlong)&param_2[3]._padding_ + 4), iVar2 != 0)
       ) {
      *(int *)((longlong)&param_1[3]._padding_ + 4) = iVar2;
    }
    if (((uVar1 & 0x40) != 0) && (lVar4 = param_2[3]._internal_metadata_.ptr_, lVar4 != 0)) {
      param_1[3]._internal_metadata_.ptr_ = lVar4;
    }
    if (((char)uVar1 < '\0') && (iVar2 = (int)param_2[4]._padding_, iVar2 != 0)) {
      *(int *)&param_1[4]._padding_ = iVar2;
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) == 0) {
    return;
  }
  google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
            (&param_1->_internal_metadata_,
             (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8));
  return;
}

// Clear @ 14c0f1080

void __thiscall api_system::ServerListInfo::Clear(ServerListInfo *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
      ;
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).game_server_refresh_dt_);
    }
  }
  if ((uVar1 & 0xfc) != 0) {
    (this->_impl_).world_id_ = 0;
    (this->_impl_).region_index_ = 0;
    (this->_impl_).timezone_index_ = 0;
    (this->_impl_).server_type_ = 0;
    (this->_impl_).world_name_id_ = 0;
    (this->_impl_).game_server_state_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c0f1100

ulong64 __thiscall api_system::ServerListInfo::ByteSizeLong(ServerListInfo *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  __uint64 _Var4;
  ulong64 uVar5;
  int iVar6;
  __uint64 _Var7;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var7 = 0;
  if ((char)uVar1 != '\0') {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(longlong *)
               (((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10);
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
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).game_server_refresh_dt_);
      uVar3 = (uint)_Var4 | 1;
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
      _Var7 = _Var7 + 1 + (iVar6 * -9 + 0x160U >> 6) + _Var4;
    }
    if (((uVar1 & 4) != 0) && (iVar6 = (this->_impl_).world_id_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 & 8) != 0) && (iVar6 = (this->_impl_).region_index_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 & 0x10) != 0) && (iVar6 = (this->_impl_).timezone_index_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 & 0x20) != 0) && (iVar6 = (this->_impl_).server_type_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 & 0x40) != 0) && (lVar2 = (this->_impl_).world_name_id_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar5;
    }
    if (((char)uVar1 < '\0') && (iVar6 = (this->_impl_).game_server_state_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c0f1270

uchar * __thiscall
api_system::ServerListInfo::_InternalSerialize
          (ServerListInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uchar *puVar5;
  char *pcVar6;
  char *pcVar7;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar2 = (this->_impl_).world_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (iVar2 = (this->_impl_).region_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (iVar2 = (this->_impl_).timezone_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (iVar2 = (this->_impl_).server_type_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x80) != 0) &&
     (iVar2 = (this->_impl_).game_server_state_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<7>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x40) != 0) &&
     (lVar4 = (this->_impl_).world_name_id_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<8>
                        (param_2,lVar4,param_1);
  }
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (9,(MessageLite *)(this->_impl_).game_server_refresh_dt_,
                         (int)(((this->_impl_).game_server_refresh_dt_)->_impl_)._cached_size_.atom_
                         ,param_1,param_2);
  }
  if ((uVar3 & 1) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    pcVar6 = pcVar7;
    if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
      pcVar6 = *(char **)pcVar7;
    }
    local_18._Mydata = "api_system.ServerListInfo.name";
    local_18._Mysize = 0x1e;
    google::protobuf::internal::WireFormatLite::VerifyUtf8String
              (pcVar6,(int)*puVar1,SERIALIZE,&local_18);
    if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
      pcVar7 = *(char **)pcVar7;
    }
    local_18._Mysize = *puVar1;
    local_18._Mydata = pcVar7;
    param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                        (param_2,10,&local_18,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar5;
  }
  return param_1;
}

// GetClassData @ 14c0f1430

ClassData * __thiscall api_system::ServerListInfo::GetClassData(ServerListInfo *this)

{
  return (ClassData *)&ServerListInfo_class_data_;
}

// PlacementNew_ @ 14c0f1450

void * __cdecl api_system::ServerListInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ServerListInfo_api_system__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined4 *)((longlong)param_2 + 0x40) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0f1490

void * __thiscall
api_system::ServerListInfo::_scalar_deleting_destructor_(ServerListInfo *this,uint param_1)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7ServerListInfo_api_system__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).name_);
  this_00 = (this->_impl_).game_server_refresh_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// MergeImpl @ 14c0f1510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
api_system::GetFrontEndServerAddrResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  if ((uVar1 & 0x1f) != 0) {
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
        pvVar4 = google::protobuf::Arena::CopyConstruct<ResponseBase>
                           (pAVar8,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar4;
      }
      else {
        ResponseBase::MergeImpl
                  ((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
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

// Clear @ 14c0f16c0

void __thiscall
api_system::GetFrontEndServerAddrResponse::Clear(GetFrontEndServerAddrResponse *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)((ulonglong)(this->_impl_).addr_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
      ;
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      ResponseBase::Clear((this->_impl_).response_base_);
    }
  }
  if ((uVar1 & 0x1c) != 0) {
    (this->_impl_).port_ = 0;
    (this->_impl_).region_index_ = 0;
    (this->_impl_).account_authority_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c0f1740

ulong64 __thiscall
api_system::GetFrontEndServerAddrResponse::ByteSizeLong(GetFrontEndServerAddrResponse *this)

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
  if ((uVar1 & 0x1f) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).addr_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
       lVar2 != 0)) {
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
      uVar4 = ResponseBase::ByteSizeLong((this->_impl_).response_base_);
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
    if (((uVar1 & 4) != 0) && (iVar6 = (this->_impl_).port_, iVar6 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar4;
    }
    if (((uVar1 & 8) != 0) && (iVar6 = (this->_impl_).region_index_, iVar6 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar4;
    }
    if (((uVar1 & 0x10) != 0) && (iVar6 = (this->_impl_).account_authority_, iVar6 != 0)) {
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

// _InternalSerialize @ 14c0f18a0

uchar * __thiscall
api_system::GetFrontEndServerAddrResponse::_InternalSerialize
          (GetFrontEndServerAddrResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uchar *puVar5;
  byte bVar6;
  char *pcVar7;
  char *pcVar8;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar2 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).response_base_,
                         (int)(((this->_impl_).response_base_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((uVar2 & 1) != 0) {
    pcVar8 = (char *)((ulonglong)(this->_impl_).addr_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar8 + 0x10);
    if (*(longlong *)(pcVar8 + 0x10) != 0) {
      pcVar7 = pcVar8;
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar7 = *(char **)pcVar8;
      }
      local_28._Mysize = 0x2d;
      local_28._Mydata = "api_system.GetFrontEndServerAddrResponse.addr";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar7,(int)*(longlong *)(pcVar8 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar8 = *(char **)pcVar8;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar8;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,2,&local_28,param_1);
    }
  }
  if (((uVar2 & 4) != 0) && (iVar3 = (this->_impl_).port_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar3,param_1);
  }
  if (((uVar2 & 8) != 0) && (iVar3 = (this->_impl_).region_index_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar3,param_1);
  }
  if (((uVar2 & 0x10) != 0) && ((this->_impl_).account_authority_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (ulonglong)(this->_impl_).account_authority_;
    *param_1 = 0x28;
    while( true ) {
      param_1 = param_1 + 1;
      bVar6 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_1 = bVar6 | 0x80;
    }
    *param_1 = bVar6;
    param_1 = param_1 + 1;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar5;
  }
  return param_1;
}

// GetClassData @ 14c0f1a50

ClassData * __thiscall
api_system::GetFrontEndServerAddrResponse::GetClassData(GetFrontEndServerAddrResponse *this)

{
  return (ClassData *)&GetFrontEndServerAddrResponse_class_data_;
}

// PlacementNew_ @ 14c0f1a70

void * __cdecl
api_system::GetFrontEndServerAddrResponse::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7GetFrontEndServerAddrResponse_api_system__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0f1ab0

void * __thiscall
api_system::GetFrontEndServerAddrResponse::_scalar_deleting_destructor_
          (GetFrontEndServerAddrResponse *this,uint param_1)

{
  ResponseBase *this_00;
  
  this->_padding_ = (longlong)&___7GetFrontEndServerAddrResponse_api_system__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).addr_);
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::~ResponseBase(this_00);
    ::operator_delete(this_00,0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// MergeImpl @ 14c0f1b30

void __cdecl api_system::TencentUserSigRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
        pvVar4 = google::protobuf::Arena::CopyConstruct<RequestBase>(pAVar5,pMVar3);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar4;
      }
      else {
        RequestBase::MergeImpl(pMVar2,pMVar3);
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

// Clear @ 14c0f1be0

void __thiscall api_system::TencentUserSigRequest::Clear(TencentUserSigRequest *this)

{
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    RequestBase::Clear((this->_impl_).request_base_);
  }
  (this->_impl_).player_uid_ = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c0f1c30

ulong64 __thiscall api_system::TencentUserSigRequest::ByteSizeLong(TencentUserSigRequest *this)

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
      uVar3 = RequestBase::ByteSizeLong((this->_impl_).request_base_);
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
    if (((uVar1 & 2) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar3;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c0f1cd0

uchar * __thiscall
api_system::TencentUserSigRequest::_InternalSerialize
          (TencentUserSigRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  longlong lVar2;
  uchar *puVar3;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).request_base_,
                         (int)(((this->_impl_).request_base_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar1 & 2) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
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

// GetClassData @ 14c0f1d80

ClassData * __thiscall api_system::TencentUserSigRequest::GetClassData(TencentUserSigRequest *this)

{
  return (ClassData *)&TencentUserSigRequest_class_data_;
}

// PlacementNew_ @ 14c0f1da0

void * __cdecl
api_system::TencentUserSigRequest::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7TencentUserSigRequest_api_system__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0f1dd0

void * __thiscall
api_system::TencentUserSigRequest::_scalar_deleting_destructor_
          (TencentUserSigRequest *this,uint param_1)

{
  RequestBase *this_00;
  
  this->_padding_ = (longlong)&___7TencentUserSigRequest_api_system__6B_;
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
    ::operator_delete(this,0x28);
  }
  return this;
}

// MergeImpl @ 14c0f1e50

void __cdecl
api_system::GetServerListInfoResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  void *pvVar2;
  Arena *pAVar3;
  
  pAVar3 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  if ((int)param_2[2]._padding_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&param_1[1]._internal_metadata_,
               (RepeatedPtrFieldBase *)&param_2[1]._internal_metadata_,
               google::protobuf::Arena::CopyConstruct<api_system::ServerListInfo>);
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 1) != 0) {
    if ((MessageLite *)param_1[3]._padding_ == (MessageLite *)0x0) {
      pvVar2 = google::protobuf::Arena::CopyConstruct<ResponseBase>
                         (pAVar3,(MessageLite *)param_2[3]._padding_);
      param_1[3]._padding_ = (longlong)pvVar2;
    }
    else {
      ResponseBase::MergeImpl
                ((MessageLite *)param_1[3]._padding_,(MessageLite *)param_2[3]._padding_);
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

// Clear @ 14c0f1f00

void __thiscall api_system::GetServerListInfoResponse::Clear(GetServerListInfoResponse *this)

{
  if (0 < *(int *)&(this->_impl_).table_.field_0x8) {
    google::protobuf::internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).table_);
  }
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

// ByteSizeLong @ 14c0f1f50

ulong64 __thiscall
api_system::GetServerListInfoResponse::ByteSizeLong(GetServerListInfoResponse *this)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  __uint64 _Var4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  RepeatedPtrField<api_system::ServerListInfo> *pRVar8;
  ulonglong uVar9;
  
  uVar1 = *(ulonglong *)&(this->_impl_).table_;
  pRVar8 = &(this->_impl_).table_;
  uVar6 = *(uint *)&(this->_impl_).table_.field_0x8;
  uVar9 = (ulonglong)uVar6;
  if ((uVar1 & 1) != 0) {
    pRVar8 = (RepeatedPtrField<api_system::ServerListInfo> *)(uVar1 + 7);
  }
  puVar2 = (undefined8 *)&pRVar8->field_0x0;
  for (; pRVar8 != (RepeatedPtrField<api_system::ServerListInfo> *)(puVar2 + (int)uVar6);
      pRVar8 = (RepeatedPtrField<api_system::ServerListInfo> *)&pRVar8->field_0x8) {
    uVar3 = ServerListInfo::ByteSizeLong(*(ServerListInfo **)pRVar8);
    uVar5 = (uint)uVar3 | 1;
    if (__isa_available < 5) {
      iVar7 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      iVar7 = 0x1f - iVar7;
    }
    else {
      iVar7 = LZCOUNT(uVar5);
    }
    uVar9 = uVar9 + (iVar7 * -9 + 0x160U >> 6) + uVar3;
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    uVar3 = ResponseBase::ByteSizeLong((this->_impl_).response_base_);
    uVar6 = (uint)uVar3 | 1;
    if (__isa_available < 5) {
      iVar7 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      iVar7 = 0x1f - iVar7;
    }
    else {
      iVar7 = LZCOUNT(uVar6);
    }
    uVar9 = uVar9 + 1 + (iVar7 * -9 + 0x160U >> 6) + uVar3;
  }
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar9,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c0f2050

uchar * __thiscall
api_system::GetServerListInfoResponse::_InternalSerialize
          (GetServerListInfoResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).response_base_,
                         (int)(((this->_impl_).response_base_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  uVar1 = *(uint *)&(this->_impl_).table_.field_0x8;
  if (uVar1 != 0) {
    do {
      pMVar2 = *(MessageLite **)&(this->_impl_).table_;
      if (((ulonglong)pMVar2 & 1) != 0) {
        pMVar2 = *(MessageLite **)((longlong)&pMVar2->_padding_ + (longlong)(int)uVar3 * 8 + 7);
      }
      param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                          (2,pMVar2,*(int *)((longlong)&pMVar2[1]._padding_ + 4),param_1,param_2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  if ((this->_padding_ & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                        ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                         param_2);
  }
  return param_1;
}

// GetClassData @ 14c0f2110

ClassData * __thiscall
api_system::GetServerListInfoResponse::GetClassData(GetServerListInfoResponse *this)

{
  return (ClassData *)&GetServerListInfoResponse_class_data_;
}

// PlacementNew_ @ 14c0f2130

void * __cdecl
api_system::GetServerListInfoResponse::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7GetServerListInfoResponse_api_system__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(Arena **)((longlong)param_2 + 0x28) = param_3;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0f2160

void * __thiscall
api_system::GetServerListInfoResponse::_scalar_deleting_destructor_
          (GetServerListInfoResponse *this,uint param_1)

{
  ResponseBase *this_00;
  
  this->_padding_ = (longlong)&___7GetServerListInfoResponse_api_system__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::~ResponseBase(this_00);
    ::operator_delete(this_00,0x28);
  }
  if (*(longlong *)&(this->_impl_).table_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).table_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// MergeImpl @ 14c0f21f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
api_system::GetFrontEndServerAddrRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  void *pvVar5;
  undefined8 uVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  ulong64 uVar8;
  Arena *pAVar9;
  Arena *pAVar10;
  undefined1 auStackY_78 [32];
  _Bxty local_40;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  pAVar10 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar4 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar9 = pAVar10;
  if (bVar4 != 0) {
    pAVar9 = (Arena *)(pAVar10->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar7->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          local_40._8_8_ = 0;
          local_40._Ptr = (char *)0x0;
          local_30 = ___xmm_000000000000000f0000000000000000;
          uStack_28 = _UNK_15076add8;
          if (bVar4 != 0) {
            pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
                     pAVar10);
          if (0xf < uStack_28) {
            uVar8 = uStack_28 + 1;
            uVar6 = local_40._Ptr;
            if (0xfff < uVar8) {
              uVar6 = *(undefined8 *)(local_40._Ptr + -8);
              uVar8 = uStack_28 + 0x28;
              if ((char *)0x1f < local_40._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar6,uVar8);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        if (bVar4 != 0) {
          pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar7,pAVar10);
      }
    }
    if ((uVar1 & 2) != 0) {
      if ((MessageLite *)param_1[2]._padding_ == (MessageLite *)0x0) {
        pvVar5 = google::protobuf::Arena::CopyConstruct<RequestBase>
                           (pAVar9,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar5;
      }
      else {
        RequestBase::MergeImpl
                  ((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
      }
    }
    if (((uVar1 & 4) != 0) && (lVar3 = param_2[2]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[2]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar1 & 8) != 0) && (iVar2 = (int)param_2[3]._padding_, iVar2 != 0)) {
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

// Clear @ 14c0f2390

void __thiscall api_system::GetFrontEndServerAddrRequest::Clear(GetFrontEndServerAddrRequest *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
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
      RequestBase::Clear((this->_impl_).request_base_);
    }
  }
  if ((uVar1 & 0xc) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).world_id_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c0f2410

ulong64 __thiscall
api_system::GetFrontEndServerAddrRequest::ByteSizeLong(GetFrontEndServerAddrRequest *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulong64 uVar4;
  int iVar5;
  __uint64 _Var6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((uVar1 & 0xf) != 0) {
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
      uVar4 = RequestBase::ByteSizeLong((this->_impl_).request_base_);
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
    if (((uVar1 & 4) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 8) != 0) && (iVar5 = (this->_impl_).world_id_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c0f2530

uchar * __thiscall
api_system::GetFrontEndServerAddrRequest::_InternalSerialize
          (GetFrontEndServerAddrRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uchar *puVar5;
  char *pcVar6;
  char *pcVar7;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar2 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).request_base_,
                         (int)(((this->_impl_).request_base_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar2 & 8) != 0) && (iVar3 = (this->_impl_).world_id_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar3,param_1);
  }
  if (((uVar2 & 4) != 0) && (lVar4 = (this->_impl_).player_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<3>
                        (param_2,lVar4,param_1);
  }
  if ((uVar2 & 1) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).jwt_key_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar6 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar6 = *(char **)pcVar7;
      }
      local_18._Mysize = 0x2f;
      local_18._Mydata = "api_system.GetFrontEndServerAddrRequest.jwt_key";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_18._Mysize = *puVar1;
      local_18._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,4,&local_18,param_1);
    }
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar5;
}

// GetClassData @ 14c0f2680

ClassData * __thiscall
api_system::GetFrontEndServerAddrRequest::GetClassData(GetFrontEndServerAddrRequest *this)

{
  return (ClassData *)&GetFrontEndServerAddrRequest_class_data_;
}

// PlacementNew_ @ 14c0f26a0

void * __cdecl
api_system::GetFrontEndServerAddrRequest::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7GetFrontEndServerAddrRequest_api_system__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0f26e0

void * __thiscall
api_system::GetFrontEndServerAddrRequest::_scalar_deleting_destructor_
          (GetFrontEndServerAddrRequest *this,uint param_1)

{
  RequestBase *this_00;
  
  this->_padding_ = (longlong)&___7GetFrontEndServerAddrRequest_api_system__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).jwt_key_);
  this_00 = (this->_impl_).request_base_;
  if (this_00 != (RequestBase *)0x0) {
    RequestBase::~RequestBase(this_00);
    ::operator_delete(this_00,0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// CopyConstruct<api_system::ServerListInfo> @ 14c0f2760

void * __cdecl
google::protobuf::Arena::CopyConstruct<api_system::ServerListInfo>(Arena *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  TaggedStringPtr TVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar5 = (void *)0x0;
  if (param_1 == (Arena *)0x0) {
    puVar2 = ::operator_new(0x48);
  }
  else {
    puVar2 = Allocate(param_1,0x48);
  }
  puVar2[1] = param_1;
  *puVar2 = &___7ServerListInfo_api_system__6B_;
  if ((*(byte *)((longlong)param_2 + 8) & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(puVar2 + 1),
               (UnknownFieldSet *)((*(ulonglong *)((longlong)param_2 + 8) & 0xfffffffffffffffe) + 8)
              );
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
  pvVar4 = ((TaggedStringPtr *)((longlong)param_2 + 0x18))->ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = internal::TaggedStringPtr::ForceCopy
                      ((TaggedStringPtr *)((longlong)param_2 + 0x18),(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  puVar2[3] = pvVar4;
  if ((*(byte *)(puVar2 + 2) & 2) != 0) {
    pvVar5 = CopyConstruct<google::protobuf::Timestamp>
                       (param_1,*(void **)((longlong)param_2 + 0x20));
  }
  puVar2[4] = pvVar5;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)param_2 + 0x28);
  puVar2[6] = uVar1;
  puVar2[7] = *(undefined8 *)((longlong)param_2 + 0x38);
  *(undefined4 *)(puVar2 + 8) = *(undefined4 *)((longlong)param_2 + 0x40);
  return puVar2;
}

// WriteInt32ToArrayWithField<7> @ 14c0f2840

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<7>
          (EpsCopyOutputStream *param_1,int param_2,uchar *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  if (param_1->end_ <= param_3) {
    param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_1,param_3);
  }
  *param_3 = 0x38;
  while( true ) {
    pbVar1 = param_3 + 1;
    bVar2 = (byte)uVar3;
    if (uVar3 < 0x80) break;
    uVar3 = uVar3 >> 7;
    *pbVar1 = bVar2 | 0x80;
    param_3 = pbVar1;
  }
  *pbVar1 = bVar2;
  return param_3 + 2;
}

// GetFrontEndServerAddrRequest @ 14c0f28a0

GetFrontEndServerAddrRequest * __thiscall
api_system::GetFrontEndServerAddrRequest::GetFrontEndServerAddrRequest
          (GetFrontEndServerAddrRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7GetFrontEndServerAddrRequest_api_system__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).jwt_key_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string
  ;
  (this->_impl_).request_base_ = (RequestBase *)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).world_id_ = 0;
  return this;
}

// GetFrontEndServerAddrRequest @ 14c0f28e0

GetFrontEndServerAddrRequest * __thiscall
api_system::GetFrontEndServerAddrRequest::GetFrontEndServerAddrRequest
          (GetFrontEndServerAddrRequest *this,Arena *param_1,GetFrontEndServerAddrRequest *param_2)

{
  ArenaStringPtr *this_00;
  TaggedStringPtr TVar1;
  void *pvVar2;
  RequestBase *pRVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7GetFrontEndServerAddrRequest_api_system__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).jwt_key_;
  pRVar3 = (RequestBase *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar2 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->_impl_).jwt_key_.tagged_ptr_.ptr_ = pvVar2;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pRVar3 = google::protobuf::Arena::CopyConstruct<RequestBase>
                       (param_1,(param_2->_impl_).request_base_);
  }
  (this->_impl_).request_base_ = pRVar3;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).world_id_ = (param_2->_impl_).world_id_;
  return this;
}

// GetFrontEndServerAddrResponse @ 14c0f29a0

GetFrontEndServerAddrResponse * __thiscall
api_system::GetFrontEndServerAddrResponse::GetFrontEndServerAddrResponse
          (GetFrontEndServerAddrResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7GetFrontEndServerAddrResponse_api_system__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).addr_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).response_base_ = (ResponseBase *)0x0;
  (this->_impl_).port_ = 0;
  (this->_impl_).region_index_ = 0;
  (this->_impl_).account_authority_ = 0;
  return this;
}

// GetFrontEndServerAddrResponse @ 14c0f29e0

GetFrontEndServerAddrResponse * __thiscall
api_system::GetFrontEndServerAddrResponse::GetFrontEndServerAddrResponse
          (GetFrontEndServerAddrResponse *this,Arena *param_1,GetFrontEndServerAddrResponse *param_2
          )

{
  ArenaStringPtr *this_00;
  int iVar1;
  TaggedStringPtr TVar2;
  void *pvVar3;
  ResponseBase *pRVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7GetFrontEndServerAddrResponse_api_system__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).addr_;
  pRVar4 = (ResponseBase *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar3 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  (this->_impl_).addr_.tagged_ptr_.ptr_ = pvVar3;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pRVar4 = google::protobuf::Arena::CopyConstruct<ResponseBase>
                       (param_1,(param_2->_impl_).response_base_);
  }
  (this->_impl_).response_base_ = pRVar4;
  iVar1 = (param_2->_impl_).region_index_;
  (this->_impl_).port_ = (param_2->_impl_).port_;
  (this->_impl_).region_index_ = iVar1;
  (this->_impl_).account_authority_ = (param_2->_impl_).account_authority_;
  return this;
}

// GetServerListInfoRequest @ 14c0f2aa0

GetServerListInfoRequest * __thiscall
api_system::GetServerListInfoRequest::GetServerListInfoRequest
          (GetServerListInfoRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7GetServerListInfoRequest_api_system__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).player_id_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  return this;
}

// GetServerListInfoRequest @ 14c0f2ad0

GetServerListInfoRequest * __thiscall
api_system::GetServerListInfoRequest::GetServerListInfoRequest
          (GetServerListInfoRequest *this,Arena *param_1,GetServerListInfoRequest *param_2)

{
  ArenaStringPtr *this_00;
  void *pvVar1;
  TaggedStringPtr TVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7GetServerListInfoRequest_api_system__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).player_id_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar1 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar1 & 3) == 0) {
    (this->_impl_).player_id_.tagged_ptr_.ptr_ = pvVar1;
    return this;
  }
  TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                    (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
  (this->_impl_).player_id_.tagged_ptr_.ptr_ = *TVar2.ptr_;
  return this;
}

// GetServerListInfoResponse @ 14c0f2b70

GetServerListInfoResponse * __thiscall
api_system::GetServerListInfoResponse::GetServerListInfoResponse
          (GetServerListInfoResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7GetServerListInfoResponse_api_system__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->_impl_).table_ = 0;
  *(undefined8 *)&(this->_impl_).table_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).table_.field_0x10 = param_1;
  (this->_impl_).response_base_ = (ResponseBase *)0x0;
  return this;
}

// GetServerListInfoResponse @ 14c0f2ba0

GetServerListInfoResponse * __thiscall
api_system::GetServerListInfoResponse::GetServerListInfoResponse
          (GetServerListInfoResponse *this,Arena *param_1,GetServerListInfoResponse *param_2)

{
  RepeatedPtrField<api_system::ServerListInfo> *this_00;
  ResponseBase *pRVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7GetServerListInfoResponse_api_system__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(this->_impl_).table_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  *(Arena **)&(this->_impl_).table_.field_0x10 = param_1;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).table_.field_0x8 = 0;
  if (*(int *)&(param_2->_impl_).table_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this_00,(RepeatedPtrFieldBase *)&(param_2->_impl_).table_,
               google::protobuf::Arena::CopyConstruct<api_system::ServerListInfo>);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) == 0) {
    (this->_impl_).response_base_ = (ResponseBase *)0x0;
  }
  else {
    pRVar1 = google::protobuf::Arena::CopyConstruct<ResponseBase>
                       (param_1,(param_2->_impl_).response_base_);
    (this->_impl_).response_base_ = pRVar1;
  }
  return this;
}

// ServerListInfo @ 14c0f2c50

ServerListInfo * __thiscall
api_system::ServerListInfo::ServerListInfo(ServerListInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServerListInfo_api_system__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).name_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).game_server_refresh_dt_ = (Timestamp *)0x0;
  (this->_impl_).world_id_ = 0;
  (this->_impl_).region_index_ = 0;
  (this->_impl_).timezone_index_ = 0;
  (this->_impl_).server_type_ = 0;
  (this->_impl_).world_name_id_ = 0;
  (this->_impl_).game_server_state_ = 0;
  return this;
}

// ServerListInfo @ 14c0f2c90

ServerListInfo * __thiscall
api_system::ServerListInfo::ServerListInfo
          (ServerListInfo *this,Arena *param_1,ServerListInfo *param_2)

{
  ArenaStringPtr *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  TaggedStringPtr TVar4;
  void *pvVar5;
  Timestamp *pTVar6;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServerListInfo_api_system__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).name_;
  pTVar6 = (Timestamp *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar5 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar5 & 3) != 0) {
    TVar4 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar5 = *TVar4.ptr_;
  }
  (this->_impl_).name_.tagged_ptr_.ptr_ = pvVar5;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pTVar6 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).game_server_refresh_dt_);
  }
  (this->_impl_).game_server_refresh_dt_ = pTVar6;
  iVar1 = (param_2->_impl_).region_index_;
  iVar2 = (param_2->_impl_).timezone_index_;
  iVar3 = (param_2->_impl_).server_type_;
  (this->_impl_).world_id_ = (param_2->_impl_).world_id_;
  (this->_impl_).region_index_ = iVar1;
  (this->_impl_).timezone_index_ = iVar2;
  (this->_impl_).server_type_ = iVar3;
  (this->_impl_).world_name_id_ = (param_2->_impl_).world_name_id_;
  (this->_impl_).game_server_state_ = (param_2->_impl_).game_server_state_;
  return this;
}

// TencentUserSigRequest @ 14c0f2d50

TencentUserSigRequest * __thiscall
api_system::TencentUserSigRequest::TencentUserSigRequest(TencentUserSigRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7TencentUserSigRequest_api_system__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).request_base_ = (RequestBase *)0x0;
  (this->_impl_).player_uid_ = 0;
  return this;
}

// TencentUserSigRequest @ 14c0f2d80

TencentUserSigRequest * __thiscall
api_system::TencentUserSigRequest::TencentUserSigRequest
          (TencentUserSigRequest *this,Arena *param_1,TencentUserSigRequest *param_2)

{
  RequestBase *pRVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7TencentUserSigRequest_api_system__6B_;
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
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  return this;
}

// TencentUserSigResponse @ 14c0f2e10

TencentUserSigResponse * __thiscall
api_system::TencentUserSigResponse::TencentUserSigResponse
          (TencentUserSigResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7TencentUserSigResponse_api_system__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).user_sig_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).response_base_ = (ResponseBase *)0x0;
  (this->_impl_).sdk_app_id_ = 0;
  return this;
}

// TencentUserSigResponse @ 14c0f2e50

TencentUserSigResponse * __thiscall
api_system::TencentUserSigResponse::TencentUserSigResponse
          (TencentUserSigResponse *this,Arena *param_1,TencentUserSigResponse *param_2)

{
  ArenaStringPtr *this_00;
  TaggedStringPtr TVar1;
  void *pvVar2;
  ResponseBase *pRVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7TencentUserSigResponse_api_system__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).user_sig_;
  pRVar3 = (ResponseBase *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar2 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->_impl_).user_sig_.tagged_ptr_.ptr_ = pvVar2;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pRVar3 = google::protobuf::Arena::CopyConstruct<ResponseBase>
                       (param_1,(param_2->_impl_).response_base_);
  }
  (this->_impl_).response_base_ = pRVar3;
  (this->_impl_).sdk_app_id_ = (param_2->_impl_).sdk_app_id_;
  return this;
}

// ~RepeatedPtrField<api_system::ServerListInfo> @ 14c0f2f00

void __thiscall
google::protobuf::RepeatedPtrField<api_system::ServerListInfo>::
~RepeatedPtrField<api_system::ServerListInfo>(RepeatedPtrField<api_system::ServerListInfo> *this)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  RepeatedPtrField<api_system::ServerListInfo> *pRVar4;
  
  if (*(longlong *)this == 0) {
    return;
  }
  lVar3 = 0;
  if (*(longlong *)&this->field_0x10 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  if ((~*(byte *)this & 1) == 0) {
    uVar2 = *(uint *)(*(longlong *)this + -1);
    pRVar4 = (RepeatedPtrField<api_system::ServerListInfo> *)(*(longlong *)this + 7);
  }
  else {
    uVar2 = (uint)(*(longlong *)this != 0);
    pRVar4 = this;
  }
  if (0 < (int)uVar2) {
    do {
      puVar1 = *(undefined8 **)(&pRVar4->field_0x0 + lVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar2);
  }
  if ((~*(byte *)this & 1) == 0) {
    ::operator_delete((void *)(*(longlong *)this + -1),
                      (longlong)(*(int *)&this->field_0xc + 1) * 8 + 8);
  }
  *(undefined8 *)this = 0;
  return;
}

// ~GetFrontEndServerAddrRequest @ 14c0f2f20

void __thiscall
api_system::GetFrontEndServerAddrRequest::~GetFrontEndServerAddrRequest
          (GetFrontEndServerAddrRequest *this)

{
  RequestBase *this_00;
  
  this->_padding_ = (longlong)&___7GetFrontEndServerAddrRequest_api_system__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).jwt_key_);
  this_00 = (this->_impl_).request_base_;
  if (this_00 != (RequestBase *)0x0) {
    RequestBase::~RequestBase(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// ~GetFrontEndServerAddrResponse @ 14c0f2f80

void __thiscall
api_system::GetFrontEndServerAddrResponse::~GetFrontEndServerAddrResponse
          (GetFrontEndServerAddrResponse *this)

{
  ResponseBase *this_00;
  
  this->_padding_ = (longlong)&___7GetFrontEndServerAddrResponse_api_system__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).addr_);
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::~ResponseBase(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// ~GetServerListInfoRequest @ 14c0f2fe0

void __thiscall
api_system::GetServerListInfoRequest::~GetServerListInfoRequest(GetServerListInfoRequest *this)

{
  this->_padding_ = (longlong)&___7GetServerListInfoRequest_api_system__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).player_id_);
  return;
}

// ~GetServerListInfoResponse @ 14c0f3020

void __thiscall
api_system::GetServerListInfoResponse::~GetServerListInfoResponse(GetServerListInfoResponse *this)

{
  ResponseBase *this_00;
  
  this->_padding_ = (longlong)&___7GetServerListInfoResponse_api_system__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::~ResponseBase(this_00);
    ::operator_delete(this_00,0x28);
  }
  if (*(longlong *)&(this->_impl_).table_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).table_);
  }
  return;
}

// ~ServerListInfo @ 14c0f3090

void __thiscall api_system::ServerListInfo::~ServerListInfo(ServerListInfo *this)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7ServerListInfo_api_system__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).name_);
  this_00 = (this->_impl_).game_server_refresh_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// ~TencentUserSigRequest @ 14c0f30f0

void __thiscall
api_system::TencentUserSigRequest::~TencentUserSigRequest(TencentUserSigRequest *this)

{
  RequestBase *this_00;
  
  this->_padding_ = (longlong)&___7TencentUserSigRequest_api_system__6B_;
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

// ~TencentUserSigResponse @ 14c0f3140

void __thiscall
api_system::TencentUserSigResponse::~TencentUserSigResponse(TencentUserSigResponse *this)

{
  ResponseBase *this_00;
  
  this->_padding_ = (longlong)&___7TencentUserSigResponse_api_system__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).user_sig_);
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::~ResponseBase(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// CopyFrom @ 14c0f31a0

void __thiscall
api_system::GetFrontEndServerAddrRequest::CopyFrom
          (GetFrontEndServerAddrRequest *this,GetFrontEndServerAddrRequest *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c0f31e0

void __thiscall
api_system::GetFrontEndServerAddrResponse::CopyFrom
          (GetFrontEndServerAddrResponse *this,GetFrontEndServerAddrResponse *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c0f3220

void __thiscall
api_system::GetServerListInfoRequest::CopyFrom
          (GetServerListInfoRequest *this,GetServerListInfoRequest *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c0f3260

void __thiscall
api_system::GetServerListInfoResponse::CopyFrom
          (GetServerListInfoResponse *this,GetServerListInfoResponse *param_1)

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
    if (*(int *)&(param_1->_impl_).table_.field_0x8 != 0) {
      google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
                ((RepeatedPtrFieldBase *)&(this->_impl_).table_,
                 (RepeatedPtrFieldBase *)&(param_1->_impl_).table_,
                 google::protobuf::Arena::CopyConstruct<api_system::ServerListInfo>);
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

// CopyFrom @ 14c0f3320

void __thiscall api_system::ServerListInfo::CopyFrom(ServerListInfo *this,ServerListInfo *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c0f3360

void __thiscall
api_system::TencentUserSigRequest::CopyFrom
          (TencentUserSigRequest *this,TencentUserSigRequest *param_1)

{
  uint uVar1;
  RequestBase *pRVar2;
  longlong lVar3;
  RequestBase *pRVar4;
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
        pRVar4 = (this->_impl_).request_base_;
        pRVar2 = (param_1->_impl_).request_base_;
        if (pRVar4 == (RequestBase *)0x0) {
          pRVar4 = google::protobuf::Arena::CopyConstruct<RequestBase>(pAVar5,pRVar2);
          (this->_impl_).request_base_ = pRVar4;
        }
        else {
          RequestBase::MergeImpl((MessageLite *)pRVar4,(MessageLite *)pRVar2);
        }
      }
      if (((uVar1 & 2) != 0) && (lVar3 = (param_1->_impl_).player_uid_, lVar3 != 0)) {
        (this->_impl_).player_uid_ = lVar3;
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

// CopyFrom @ 14c0f3420

void __thiscall
api_system::TencentUserSigResponse::CopyFrom
          (TencentUserSigResponse *this,TencentUserSigResponse *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c0f3460

Metadata * __thiscall
api_system::GetFrontEndServerAddrRequest::GetMetadata
          (GetFrontEndServerAddrRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&GetFrontEndServerAddrRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0f34a0

Metadata * __thiscall
api_system::GetFrontEndServerAddrResponse::GetMetadata
          (GetFrontEndServerAddrResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&GetFrontEndServerAddrResponse_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0f34e0

Metadata * __thiscall
api_system::GetServerListInfoRequest::GetMetadata
          (GetServerListInfoRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&GetServerListInfoRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0f3520

Metadata * __thiscall
api_system::GetServerListInfoResponse::GetMetadata
          (GetServerListInfoResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&GetServerListInfoResponse_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0f3560

Metadata * __thiscall
api_system::ServerListInfo::GetMetadata(ServerListInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&ServerListInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0f35a0

Metadata * __thiscall
api_system::TencentUserSigRequest::GetMetadata
          (TencentUserSigRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&TencentUserSigRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0f35e0

Metadata * __thiscall
api_system::TencentUserSigResponse::GetMetadata
          (TencentUserSigResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&TencentUserSigResponse_class_data_)
  ;
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c0f3620

void __thiscall
api_system::GetFrontEndServerAddrRequest::InternalSwap
          (GetFrontEndServerAddrRequest *this,GetFrontEndServerAddrRequest *param_1)

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
            (&(this->_impl_).request_base_,&(this->_impl_).field_0x24,
             &(param_1->_impl_).request_base_);
  return;
}

// InternalSwap @ 14c0f3670

void __thiscall
api_system::GetFrontEndServerAddrResponse::InternalSwap
          (GetFrontEndServerAddrResponse *this,GetFrontEndServerAddrResponse *param_1)

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
  pvVar3 = (param_1->_impl_).addr_.tagged_ptr_.ptr_;
  (param_1->_impl_).addr_.tagged_ptr_.ptr_ = (this->_impl_).addr_.tagged_ptr_.ptr_;
  (this->_impl_).addr_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).response_base_,&(this->_impl_).field_0x24,
             &(param_1->_impl_).response_base_);
  return;
}

// InternalSwap @ 14c0f36c0

void __thiscall
api_system::GetServerListInfoRequest::InternalSwap
          (GetServerListInfoRequest *this,GetServerListInfoRequest *param_1)

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
  pvVar3 = (param_1->_impl_).player_id_.tagged_ptr_.ptr_;
  (param_1->_impl_).player_id_.tagged_ptr_.ptr_ = (this->_impl_).player_id_.tagged_ptr_.ptr_;
  (this->_impl_).player_id_.tagged_ptr_.ptr_ = pvVar3;
  return;
}

// InternalSwap @ 14c0f3700

void __thiscall
api_system::GetServerListInfoResponse::InternalSwap
          (GetServerListInfoResponse *this,GetServerListInfoResponse *param_1)

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
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).table_,(char *)&(param_1->_impl_).table_);
  pRVar3 = (this->_impl_).response_base_;
  (this->_impl_).response_base_ = (param_1->_impl_).response_base_;
  (param_1->_impl_).response_base_ = pRVar3;
  return;
}

// InternalSwap @ 14c0f3760

void __thiscall
api_system::ServerListInfo::InternalSwap(ServerListInfo *this,ServerListInfo *param_1)

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
  pvVar3 = (param_1->_impl_).name_.tagged_ptr_.ptr_;
  (param_1->_impl_).name_.tagged_ptr_.ptr_ = (this->_impl_).name_.tagged_ptr_.ptr_;
  (this->_impl_).name_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).game_server_refresh_dt_,&(this->_impl_).field_0x34,
             &(param_1->_impl_).game_server_refresh_dt_);
  return;
}

// InternalSwap @ 14c0f37b0

void __thiscall
api_system::TencentUserSigRequest::InternalSwap
          (TencentUserSigRequest *this,TencentUserSigRequest *param_1)

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
            ((char *)&(this->_impl_).request_base_,(char *)&(param_1->_impl_).request_base_);
  return;
}

// InternalSwap @ 14c0f37f0

void __thiscall
api_system::TencentUserSigResponse::InternalSwap
          (TencentUserSigResponse *this,TencentUserSigResponse *param_1)

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
  pvVar3 = (param_1->_impl_).user_sig_.tagged_ptr_.ptr_;
  (param_1->_impl_).user_sig_.tagged_ptr_.ptr_ = (this->_impl_).user_sig_.tagged_ptr_.ptr_;
  (this->_impl_).user_sig_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).response_base_,&(this->_impl_).field_0x1c,
             &(param_1->_impl_).response_base_);
  return;
}

// clear_game_server_refresh_dt @ 14c0f3840

void __thiscall api_system::ServerListInfo::clear_game_server_refresh_dt(ServerListInfo *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).game_server_refresh_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// clear_request_base @ 14c0f3870

void __thiscall
api_system::GetFrontEndServerAddrRequest::clear_request_base(GetFrontEndServerAddrRequest *this)

{
  RequestBase *this_00;
  
  this_00 = (this->_impl_).request_base_;
  if (this_00 != (RequestBase *)0x0) {
    RequestBase::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// clear_request_base @ 14c0f38a0

void __thiscall api_system::TencentUserSigRequest::clear_request_base(TencentUserSigRequest *this)

{
  RequestBase *this_00;
  
  this_00 = (this->_impl_).request_base_;
  if (this_00 != (RequestBase *)0x0) {
    RequestBase::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_response_base @ 14c0f38d0

void __thiscall
api_system::GetFrontEndServerAddrResponse::clear_response_base(GetFrontEndServerAddrResponse *this)

{
  ResponseBase *this_00;
  
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// clear_response_base @ 14c0f3900

void __thiscall
api_system::GetServerListInfoResponse::clear_response_base(GetServerListInfoResponse *this)

{
  ResponseBase *this_00;
  
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_response_base @ 14c0f3930

void __thiscall
api_system::TencentUserSigResponse::clear_response_base(TencentUserSigResponse *this)

{
  ResponseBase *this_00;
  
  this_00 = (this->_impl_).response_base_;
  if (this_00 != (ResponseBase *)0x0) {
    ResponseBase::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// `dynamic_atexit_destructor_for_'_GetFrontEndServerAddrRequest_default_instance_'' @ 150440a10

void __cdecl
api_system::_dynamic_atexit_destructor_for___GetFrontEndServerAddrRequest_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_GetFrontEndServerAddrResponse_default_instance_'' @ 150440a20

void __cdecl
api_system::_dynamic_atexit_destructor_for___GetFrontEndServerAddrResponse_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_GetServerListInfoRequest_default_instance_'' @ 150440a30

void __cdecl
api_system::_dynamic_atexit_destructor_for___GetServerListInfoRequest_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_GetServerListInfoResponse_default_instance_'' @ 150440a40

void __cdecl
api_system::_dynamic_atexit_destructor_for___GetServerListInfoResponse_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ServerListInfo_default_instance_'' @ 150440a50

void __cdecl api_system::_dynamic_atexit_destructor_for___ServerListInfo_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_TencentUserSigRequest_default_instance_'' @ 150440a60

void __cdecl
api_system::_dynamic_atexit_destructor_for___TencentUserSigRequest_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_TencentUserSigResponse_default_instance_'' @ 150440a70

void __cdecl
api_system::_dynamic_atexit_destructor_for___TencentUserSigResponse_default_instance___(void)

{
  return;
}


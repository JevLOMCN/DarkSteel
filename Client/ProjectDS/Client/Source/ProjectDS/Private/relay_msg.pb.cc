// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 48

// `dynamic_initializer_for_'_EncodedMessages_default_instance_'' @ 141295dc0

void __cdecl relay_msg::_dynamic_initializer_for___EncodedMessages_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___EncodedMessages_default_instance___);
  return;
}

// `dynamic_initializer_for_'_FrontEndMessages_default_instance_'' @ 141295de0

void __cdecl relay_msg::_dynamic_initializer_for___FrontEndMessages_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___FrontEndMessages_default_instance___);
  return;
}

// `dynamic_initializer_for_'_GameServerMessages_default_instance_'' @ 141295e00

void __cdecl relay_msg::_dynamic_initializer_for___GameServerMessages_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___GameServerMessages_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 141295e20

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_relay_5fmsg_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c19b7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl relay_msg::GameServerMessages::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  google::protobuf::RepeatedField<unsigned___int64>::MergeFrom
            ((RepeatedField<unsigned___int64> *)&param_1[1]._internal_metadata_,
             (RepeatedField<unsigned___int64> *)&param_2[1]._internal_metadata_);
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[3]._padding_ & 0xfffffffffffffffc);
      if ((pbVar4->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[3]._padding_ & 3) == 0) {
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
                    ((ArenaStringPtr *)(param_1 + 3),
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
                  ((ArenaStringPtr *)(param_1 + 3),pbVar4,pAVar6);
      }
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (int)param_2[3]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[3]._internal_metadata_.ptr_ = iVar2;
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

// Clear @ 14c19b940

void __thiscall relay_msg::GameServerMessages::Clear(GameServerMessages *this)

{
  ulonglong uVar1;
  ulong64 uVar2;
  undefined8 *puVar3;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar4;
  
  uVar1 = (this->_impl_).front_end_client_session_ids_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar1 & 4) == 0) {
    (this->_impl_).front_end_client_session_ids_.soo_rep_.field0_0x0.long_rep.elements_int =
         uVar1 & 0xfffffffffffffff8;
  }
  else {
    (this->_impl_).front_end_client_session_ids_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    puVar3 = (undefined8 *)
             ((ulonglong)(this->_impl_).message_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar3[2] = 0;
    if (0xf < (ulonglong)puVar3[3]) {
      puVar3 = (undefined8 *)*puVar3;
    }
    *(undefined1 *)puVar3 = 0;
  }
  (this->_impl_).protocol_type_ = 0;
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
  uVar2 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar2 >> 2) & 1) == 0) {
    uVar4 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar4 = (uint)uVar2 & 3;
  }
  if (uVar4 != 0) {
    google::protobuf::UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14c19b9a0

ulong64 __thiscall relay_msg::GameServerMessages::ByteSizeLong(GameServerMessages *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  __uint64 _Var4;
  ulonglong uVar5;
  int iVar6;
  
  _Var4 = google::protobuf::internal::WireFormatLite::UInt64SizeWithPackedTagSize
                    (&(this->_impl_).front_end_client_session_ids_,1,
                     &(this->_impl_)._front_end_client_session_ids_cached_byte_size_);
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).message_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10)
       , lVar2 != 0)) {
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
      _Var4 = _Var4 + 1 + (ulonglong)(iVar6 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 2) != 0) && (iVar6 = (this->_impl_).protocol_type_, iVar6 != 0)) {
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
      _Var4 = _Var4 + 1 + (ulonglong)(iVar6 * -9 + 0x280U >> 6);
    }
  }
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c19ba80

uchar * __thiscall
relay_msg::GameServerMessages::_InternalSerialize
          (GameServerMessages *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  byte *pbVar2;
  integral_constant<bool,1> *piVar3;
  byte bVar4;
  ShortSooRep_u_8 *pSVar5;
  ulonglong uVar6;
  char *pcVar7;
  uchar *puVar8;
  integral_constant<bool,1> iVar9;
  ShortSooRep_u_8 SVar10;
  atomic<int> aVar11;
  ShortSooRep_u_8 *pSVar12;
  ShortSooRep_u_8 *pSVar13;
  uint uVar14;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  aVar11 = (this->_impl_)._front_end_client_session_ids_cached_byte_size_.atom_;
  if (0 < (int)aVar11) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    *param_1 = 10;
    while( true ) {
      pbVar2 = param_1 + 1;
      bVar4 = aVar11._0_1_;
      if ((uint)aVar11 < 0x80) break;
      aVar11 = (atomic<int>)((uint)aVar11 >> 7);
      *pbVar2 = bVar4 | 0x80;
      param_1 = pbVar2;
    }
    *pbVar2 = bVar4;
    param_1 = param_1 + 2;
    uVar6 = (this->_impl_).front_end_client_session_ids_.soo_rep_.field0_0x0.long_rep.elements_int;
    pSVar5 = (ShortSooRep_u_8 *)(uVar6 & 0xfffffffffffffff8);
    if ((uVar6 & 4) == 0) {
      uVar14 = (uint)uVar6 & 3;
      pSVar5 = &(this->_impl_).front_end_client_session_ids_.soo_rep_.field0_0x0.short_rep.
                field1_0x8;
    }
    else {
      uVar14 = (this->_impl_).front_end_client_session_ids_.soo_rep_.field0_0x0.long_rep.size;
    }
    pSVar12 = pSVar5;
    do {
      if ((integral_constant<bool,1> *)param_2->end_ <= param_1) {
        param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
      }
      pSVar13 = pSVar12 + 1;
      for (SVar10 = *pSVar12; 0x7f < (ulonglong)SVar10; SVar10.data = SVar10.data >> 7) {
        *param_1 = (byte)SVar10.dummy | 0x80;
        param_1 = param_1 + 1;
      }
      *param_1 = (uchar)SVar10.dummy;
      param_1 = param_1 + 1;
      pSVar12 = pSVar13;
    } while (pSVar13 < pSVar5 + (int)uVar14);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) && ((this->_impl_).protocol_type_ != 0)) {
    if ((integral_constant<bool,1> *)param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar6 = (ulonglong)(this->_impl_).protocol_type_;
    *param_1 = '\x10';
    while( true ) {
      piVar3 = (integral_constant<bool,1> *)(param_1 + 1);
      iVar9 = SUB81(uVar6,0);
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *piVar3 = (integral_constant<bool,1>)((byte)iVar9 | 0x80);
      param_1 = (uchar *)piVar3;
    }
    *piVar3 = iVar9;
    param_1 = param_1 + 2;
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).message_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*puVar1 != 0) {
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_18._Mydata = pcVar7;
      local_18._Mysize = *puVar1;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteBytesMaybeAliased
                          (param_2,3,&local_18,param_1);
    }
  }
  if ((this->_padding_ & 1) == 0) {
    return (uchar *)(integral_constant<bool,1> *)param_1;
  }
  puVar8 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar8;
}

// GetClassData @ 14c19bc30

ClassData * __thiscall relay_msg::GameServerMessages::GetClassData(GameServerMessages *this)

{
  return (ClassData *)&GameServerMessages_class_data_;
}

// PlacementNew_ @ 14c19bc50

void * __cdecl
relay_msg::GameServerMessages::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7GameServerMessages_relay_msg__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(Arena **)((longlong)param_2 + 0x18) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x30) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x38) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c19bc90

void * __thiscall
relay_msg::GameServerMessages::_scalar_deleting_destructor_(GameServerMessages *this,uint param_1)

{
  ulonglong uVar1;
  
  this->_padding_ = (longlong)&___7GameServerMessages_relay_msg__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).message_);
  uVar1 = (this->_impl_).front_end_client_session_ids_.soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)
                      (this->_impl_).front_end_client_session_ids_.soo_rep_.field0_0x0.long_rep.
                      capacity * 8 + 8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// MergeImpl @ 14c19bd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl relay_msg::EncodedMessages::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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

// Clear @ 14c19be50

void __thiscall relay_msg::EncodedMessages::Clear(EncodedMessages *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    puVar2 = (undefined8 *)
             ((ulonglong)(this->_impl_).message_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
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

// ByteSizeLong @ 14c19be90

ulong64 __thiscall relay_msg::EncodedMessages::ByteSizeLong(EncodedMessages *this)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar1 = *(longlong *)
               (((ulonglong)(this->_impl_).message_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
     lVar1 != 0)) {
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

// _InternalSerialize @ 14c19bf00

uchar * __thiscall
relay_msg::EncodedMessages::_InternalSerialize
          (EncodedMessages *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  char *pcVar2;
  uchar *puVar3;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar2 = (char *)((ulonglong)(this->_impl_).message_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar2 + 0x10);
    if (*puVar1 != 0) {
      if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
        pcVar2 = *(char **)pcVar2;
      }
      local_18._Mydata = pcVar2;
      local_18._Mysize = *puVar1;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteBytesMaybeAliased
                          (param_2,1,&local_18,param_1);
    }
  }
  if ((this->_padding_ & 1) != 0) {
    puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14c19bf90

ClassData * __thiscall relay_msg::EncodedMessages::GetClassData(EncodedMessages *this)

{
  return (ClassData *)&EncodedMessages_class_data_;
}

// PlacementNew_ @ 14c19bfb0

void * __cdecl relay_msg::EncodedMessages::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7EncodedMessages_relay_msg__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c19bfe0

void * __thiscall
relay_msg::EncodedMessages::_scalar_deleting_destructor_(EncodedMessages *this,uint param_1)

{
  this->_padding_ = (longlong)&___7EncodedMessages_relay_msg__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).message_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c19c040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl relay_msg::FrontEndMessages::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  byte bVar2;
  void *pvVar3;
  undefined8 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  ulong64 uVar6;
  Arena *pAVar7;
  Arena *pAVar8;
  undefined1 auStackY_78 [32];
  _Bxty local_40;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  pAVar8 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar2 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar7 = pAVar8;
  if (bVar2 != 0) {
    pAVar7 = (Arena *)(pAVar8->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          local_40._8_8_ = 0;
          local_40._Ptr = (char *)0x0;
          local_30 = ___xmm_000000000000000f0000000000000000;
          uStack_28 = _UNK_15076add8;
          if (bVar2 != 0) {
            pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
                     pAVar8);
          if (0xf < uStack_28) {
            uVar6 = uStack_28 + 1;
            uVar4 = local_40._Ptr;
            if (0xfff < uVar6) {
              uVar4 = *(undefined8 *)(local_40._Ptr + -8);
              uVar6 = uStack_28 + 0x28;
              if ((char *)0x1f < local_40._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar4,uVar6);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        if (bVar2 != 0) {
          pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar5,pAVar8);
      }
    }
    if ((uVar1 & 2) != 0) {
      if ((MessageLite *)param_1[2]._padding_ == (MessageLite *)0x0) {
        pvVar3 = google::protobuf::Arena::CopyConstruct<messages::PlayerEntity>
                           (pAVar7,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar3;
      }
      else {
        messages::PlayerEntity::MergeImpl
                  ((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
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

// Clear @ 14c19c1c0

void __thiscall relay_msg::FrontEndMessages::Clear(FrontEndMessages *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).message_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      messages::PlayerEntity::Clear((this->_impl_).entity_);
    }
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c19c230

ulong64 __thiscall relay_msg::FrontEndMessages::ByteSizeLong(FrontEndMessages *this)

{
  longlong lVar1;
  uint uVar2;
  ulong64 uVar3;
  int iVar4;
  uint uVar5;
  __uint64 _Var6;
  
  uVar5 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((uVar5 & 3) != 0) {
    if (((uVar5 & 1) != 0) &&
       (lVar1 = *(longlong *)
                 (((ulonglong)(this->_impl_).message_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10)
       , lVar1 != 0)) {
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
      _Var6 = (ulonglong)(iVar4 * -9 + 0x160U >> 6) + 1 + lVar1;
    }
    if ((uVar5 & 2) != 0) {
      uVar3 = messages::PlayerEntity::ByteSizeLong((this->_impl_).entity_);
      uVar5 = (uint)uVar3 | 1;
      if (__isa_available < 5) {
        iVar4 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 0x1f - iVar4;
      }
      else {
        iVar4 = LZCOUNT(uVar5);
      }
      _Var6 = _Var6 + 1 + (iVar4 * -9 + 0x160U >> 6) + uVar3;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c19c310

uchar * __thiscall
relay_msg::FrontEndMessages::_InternalSerialize
          (FrontEndMessages *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  uint uVar2;
  char *pcVar3;
  uchar *puVar4;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar2 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).entity_,
                         (int)(((this->_impl_).entity_)->_impl_)._cached_size_.atom_,param_1,param_2
                        );
  }
  if ((uVar2 & 1) != 0) {
    pcVar3 = (char *)((ulonglong)(this->_impl_).message_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar3 + 0x10);
    if (*puVar1 != 0) {
      if (0xf < *(ulonglong *)(pcVar3 + 0x18)) {
        pcVar3 = *(char **)pcVar3;
      }
      local_18._Mydata = pcVar3;
      local_18._Mysize = *puVar1;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteBytesMaybeAliased
                          (param_2,3,&local_18,param_1);
    }
  }
  if ((this->_padding_ & 1) != 0) {
    puVar4 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar4;
  }
  return param_1;
}

// GetClassData @ 14c19c3e0

ClassData * __thiscall relay_msg::FrontEndMessages::GetClassData(FrontEndMessages *this)

{
  return (ClassData *)&FrontEndMessages_class_data_;
}

// PlacementNew_ @ 14c19c400

void * __cdecl
relay_msg::FrontEndMessages::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7FrontEndMessages_relay_msg__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c19c430

void * __thiscall
relay_msg::FrontEndMessages::_scalar_deleting_destructor_(FrontEndMessages *this,uint param_1)

{
  PlayerEntity *this_00;
  
  this->_padding_ = (longlong)&___7FrontEndMessages_relay_msg__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).message_);
  this_00 = (this->_impl_).entity_;
  if (this_00 != (PlayerEntity *)0x0) {
    messages::PlayerEntity::~PlayerEntity(this_00);
    ::operator_delete(this_00,0x20);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// EncodedMessages @ 14c19c4b0

EncodedMessages * __thiscall
relay_msg::EncodedMessages::EncodedMessages(EncodedMessages *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7EncodedMessages_relay_msg__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).message_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string
  ;
  return this;
}

// EncodedMessages @ 14c19c4e0

EncodedMessages * __thiscall
relay_msg::EncodedMessages::EncodedMessages
          (EncodedMessages *this,Arena *param_1,EncodedMessages *param_2)

{
  ArenaStringPtr *this_00;
  void *pvVar1;
  TaggedStringPtr TVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7EncodedMessages_relay_msg__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).message_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar1 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar1 & 3) == 0) {
    (this->_impl_).message_.tagged_ptr_.ptr_ = pvVar1;
    return this;
  }
  TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                    (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
  (this->_impl_).message_.tagged_ptr_.ptr_ = *TVar2.ptr_;
  return this;
}

// FrontEndMessages @ 14c19c580

FrontEndMessages * __thiscall
relay_msg::FrontEndMessages::FrontEndMessages(FrontEndMessages *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FrontEndMessages_relay_msg__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).message_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string
  ;
  (this->_impl_).entity_ = (PlayerEntity *)0x0;
  return this;
}

// FrontEndMessages @ 14c19c5b0

FrontEndMessages * __thiscall
relay_msg::FrontEndMessages::FrontEndMessages
          (FrontEndMessages *this,Arena *param_1,FrontEndMessages *param_2)

{
  ArenaStringPtr *this_00;
  TaggedStringPtr TVar1;
  void *pvVar2;
  PlayerEntity *pPVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FrontEndMessages_relay_msg__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).message_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar2 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->_impl_).message_.tagged_ptr_.ptr_ = pvVar2;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pPVar3 = google::protobuf::Arena::CopyConstruct<messages::PlayerEntity>
                       (param_1,(param_2->_impl_).entity_);
    (this->_impl_).entity_ = pPVar3;
    return this;
  }
  (this->_impl_).entity_ = (PlayerEntity *)0x0;
  return this;
}

// GameServerMessages @ 14c19c670

GameServerMessages * __thiscall
relay_msg::GameServerMessages::GameServerMessages(GameServerMessages *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7GameServerMessages_relay_msg__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).front_end_client_session_ids_.soo_rep_.field0_0x0.long_rep.elements_int =
       (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->_impl_).front_end_client_session_ids_.soo_rep_.field0_0x0 + 8) =
       0;
  (this->_impl_).message_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string
  ;
  (this->_impl_)._front_end_client_session_ids_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).protocol_type_ = 0;
  return this;
}

// GameServerMessages @ 14c19c6b0

GameServerMessages * __thiscall
relay_msg::GameServerMessages::GameServerMessages
          (GameServerMessages *this,Arena *param_1,GameServerMessages *param_2)

{
  ArenaStringPtr *this_00;
  TaggedStringPtr TVar1;
  void *pvVar2;
  InternalVisibility local_res8 [8];
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7GameServerMessages_relay_msg__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<unsigned___int64>::RepeatedField<unsigned___int64>
            (&(this->_impl_).front_end_client_session_ids_,local_res8[0],param_1,
             &(param_2->_impl_).front_end_client_session_ids_);
  this_00 = &(param_2->_impl_).message_;
  (this->_impl_)._front_end_client_session_ids_cached_byte_size_.atom_ = (atomic<int>)0x0;
  pvVar2 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)local_res8);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->_impl_).message_.tagged_ptr_.ptr_ = pvVar2;
  (this->_impl_).protocol_type_ = (param_2->_impl_).protocol_type_;
  return this;
}

// ~EncodedMessages @ 14c19c760

void __thiscall relay_msg::EncodedMessages::~EncodedMessages(EncodedMessages *this)

{
  this->_padding_ = (longlong)&___7EncodedMessages_relay_msg__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).message_);
  return;
}

// ~FrontEndMessages @ 14c19c7a0

void __thiscall relay_msg::FrontEndMessages::~FrontEndMessages(FrontEndMessages *this)

{
  PlayerEntity *this_00;
  
  this->_padding_ = (longlong)&___7FrontEndMessages_relay_msg__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).message_);
  this_00 = (this->_impl_).entity_;
  if (this_00 != (PlayerEntity *)0x0) {
    messages::PlayerEntity::~PlayerEntity(this_00);
    ::operator_delete(this_00,0x20);
    return;
  }
  return;
}

// ~GameServerMessages @ 14c19c800

void __thiscall relay_msg::GameServerMessages::~GameServerMessages(GameServerMessages *this)

{
  ulonglong uVar1;
  
  this->_padding_ = (longlong)&___7GameServerMessages_relay_msg__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).message_);
  uVar1 = (this->_impl_).front_end_client_session_ids_.soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)
                      (this->_impl_).front_end_client_session_ids_.soo_rep_.field0_0x0.long_rep.
                      capacity * 8 + 8);
    return;
  }
  return;
}

// CopyFrom @ 14c19c870

void __thiscall relay_msg::EncodedMessages::CopyFrom(EncodedMessages *this,EncodedMessages *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c19c8b0

void __thiscall
relay_msg::FrontEndMessages::CopyFrom(FrontEndMessages *this,FrontEndMessages *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c19c8f0

void __thiscall
relay_msg::GameServerMessages::CopyFrom(GameServerMessages *this,GameServerMessages *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c19c930

Metadata * __thiscall
relay_msg::EncodedMessages::GetMetadata(EncodedMessages *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&EncodedMessages_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c19c970

Metadata * __thiscall
relay_msg::FrontEndMessages::GetMetadata(FrontEndMessages *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&FrontEndMessages_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c19c9b0

Metadata * __thiscall
relay_msg::GameServerMessages::GetMetadata
          (GameServerMessages *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&GameServerMessages_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c19c9f0

void __thiscall
relay_msg::EncodedMessages::InternalSwap(EncodedMessages *this,EncodedMessages *param_1)

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
  pvVar3 = (param_1->_impl_).message_.tagged_ptr_.ptr_;
  (param_1->_impl_).message_.tagged_ptr_.ptr_ = (this->_impl_).message_.tagged_ptr_.ptr_;
  (this->_impl_).message_.tagged_ptr_.ptr_ = pvVar3;
  return;
}

// InternalSwap @ 14c19ca30

void __thiscall
relay_msg::FrontEndMessages::InternalSwap(FrontEndMessages *this,FrontEndMessages *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  PlayerEntity *pPVar4;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pvVar3 = (param_1->_impl_).message_.tagged_ptr_.ptr_;
  (param_1->_impl_).message_.tagged_ptr_.ptr_ = (this->_impl_).message_.tagged_ptr_.ptr_;
  (this->_impl_).message_.tagged_ptr_.ptr_ = pvVar3;
  pPVar4 = (this->_impl_).entity_;
  (this->_impl_).entity_ = (param_1->_impl_).entity_;
  (param_1->_impl_).entity_ = pPVar4;
  return;
}

// InternalSwap @ 14c19ca80

void __thiscall
relay_msg::GameServerMessages::InternalSwap(GameServerMessages *this,GameServerMessages *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  
  lVar3 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar3;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).front_end_client_session_ids_,
             (char *)&(param_1->_impl_).front_end_client_session_ids_);
  pvVar4 = (param_1->_impl_).message_.tagged_ptr_.ptr_;
  (param_1->_impl_).message_.tagged_ptr_.ptr_ = (this->_impl_).message_.tagged_ptr_.ptr_;
  (this->_impl_).message_.tagged_ptr_.ptr_ = pvVar4;
  iVar2 = (this->_impl_).protocol_type_;
  (this->_impl_).protocol_type_ = (param_1->_impl_).protocol_type_;
  (param_1->_impl_).protocol_type_ = iVar2;
  return;
}

// WriteBytesMaybeAliased @ 14c19caf0

uchar * __thiscall
google::protobuf::io::EpsCopyOutputStream::WriteBytesMaybeAliased
          (EpsCopyOutputStream *this,uint param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2,uchar *param_3)

{
  size_t _Size;
  uint uVar1;
  uchar *puVar2;
  longlong lVar3;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  _Size = param_2->_Mysize;
  local_18._Mydata = param_2->_Mydata;
  local_18._Mysize = param_2->_Mysize;
  if ((longlong)_Size < 0x80) {
    uVar1 = param_1 * 8;
    if (uVar1 < 0x80) {
      lVar3 = -1;
    }
    else if (uVar1 < 0x4000) {
      lVar3 = -2;
    }
    else if (uVar1 < 0x200000) {
      lVar3 = -3;
    }
    else {
      lVar3 = (ulonglong)(uVar1 < 0x10000000) - 5;
    }
    if ((longlong)_Size <= (longlong)(this->end_ + lVar3 + (0xf - (longlong)param_3))) {
      for (uVar1 = uVar1 | 2; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
        *param_3 = (byte)uVar1 | 0x80;
        param_3 = param_3 + 1;
      }
      *param_3 = (byte)uVar1;
      param_3[1] = (byte)_Size;
      memcpy(param_3 + 2,local_18._Mydata,_Size);
      return param_3 + 2 + _Size;
    }
  }
  puVar2 = WriteStringMaybeAliasedOutline(this,param_1,&local_18,param_3);
  return puVar2;
}

// clear_entity @ 14c19cbf0

void __thiscall relay_msg::FrontEndMessages::clear_entity(FrontEndMessages *this)

{
  PlayerEntity *this_00;
  
  this_00 = (this->_impl_).entity_;
  if (this_00 != (PlayerEntity *)0x0) {
    messages::PlayerEntity::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// `dynamic_atexit_destructor_for_'_EncodedMessages_default_instance_'' @ 150442370

void __cdecl relay_msg::_dynamic_atexit_destructor_for___EncodedMessages_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_FrontEndMessages_default_instance_'' @ 150442380

void __cdecl relay_msg::_dynamic_atexit_destructor_for___FrontEndMessages_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_GameServerMessages_default_instance_'' @ 150442390

void __cdecl
relay_msg::_dynamic_atexit_destructor_for___GameServerMessages_default_instance___(void)

{
  return;
}


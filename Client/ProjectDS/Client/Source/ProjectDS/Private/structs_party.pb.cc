// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 71

// `dynamic_initializer_for_'_PartyInfo_default_instance_'' @ 1412998d0

void __cdecl ds_proto::_dynamic_initializer_for___PartyInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___PartyInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_PartyInviteRejectInfo_default_instance_'' @ 1412998f0

void __cdecl ds_proto::_dynamic_initializer_for___PartyInviteRejectInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___PartyInviteRejectInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_PartyInvitedInfo_default_instance_'' @ 141299910

void __cdecl ds_proto::_dynamic_initializer_for___PartyInvitedInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___PartyInvitedInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_PartyMemberInfo_default_instance_'' @ 141299930

void __cdecl ds_proto::_dynamic_initializer_for___PartyMemberInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___PartyMemberInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_PartySlotInfo_default_instance_'' @ 141299950

void __cdecl ds_proto::_dynamic_initializer_for___PartySlotInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___PartySlotInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 141299970

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_structs_5fparty_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c22df70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ds_proto::PartyMemberInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  ulong64 uVar6;
  Arena *pAVar7;
  undefined1 auStackY_68 [32];
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 0x7f) != 0) {
    if ((uVar2 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar7);
          if (0xf < uStack_20) {
            uVar6 = uStack_20 + 1;
            uVar4 = local_38._Ptr;
            if (0xfff < uVar6) {
              uVar4 = *(undefined8 *)(local_38._Ptr + -8);
              uVar6 = uStack_20 + 0x28;
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar4)) {
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
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if (((uVar2 & 2) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
    }
    if (((uVar2 & 4) != 0) && (iVar3 = (int)param_2[2]._internal_metadata_.ptr_, iVar3 != 0)) {
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar3;
    }
    if (((uVar2 & 8) != 0) &&
       (iVar3 = *(int *)((longlong)&param_2[2]._internal_metadata_.ptr_ + 4), iVar3 != 0)) {
      *(int *)((longlong)&param_1[2]._internal_metadata_.ptr_ + 4) = iVar3;
    }
    if (((uVar2 & 0x10) != 0) && (cVar1 = (char)param_2[3]._padding_, cVar1 != '\0')) {
      *(char *)&param_1[3]._padding_ = cVar1;
    }
    if (((uVar2 & 0x20) != 0) &&
       (cVar1 = *(char *)((longlong)&param_2[3]._padding_ + 1), cVar1 != '\0')) {
      *(char *)((longlong)&param_1[3]._padding_ + 1) = cVar1;
    }
    if (((uVar2 & 0x40) != 0) && (iVar3 = *(int *)((longlong)&param_2[3]._padding_ + 4), iVar3 != 0)
       ) {
      *(int *)((longlong)&param_1[3]._padding_ + 4) = iVar3;
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

// Clear @ 14c22e120

void __thiscall ds_proto::PartyMemberInfo::Clear(PartyMemberInfo *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 1) != 0) {
    puVar2 = (undefined8 *)((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar2[2] = 0;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
  }
  if ((uVar3 & 0x7e) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).level_ = 0;
    (this->_impl_).char_id_ = 0;
    (this->_impl_).online_ = false;
    (this->_impl_).dead_ = false;
    *(undefined2 *)&(this->_impl_).field_0x22 = 0;
    (this->_impl_).game_server_index_ = 0;
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

// ByteSizeLong @ 14c22e170

ulong64 __thiscall ds_proto::PartyMemberInfo::ByteSizeLong(PartyMemberInfo *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulong64 uVar4;
  int iVar5;
  __uint64 _Var6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((uVar1 & 0x7f) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
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
    if (((uVar1 & 2) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 4) != 0) && (iVar5 = (this->_impl_).level_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 8) != 0) && (iVar5 = (this->_impl_).char_id_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 0x10) != 0) && ((this->_impl_).online_ != false)) {
      _Var6 = _Var6 + 2;
    }
    if (((uVar1 & 0x20) != 0) && ((this->_impl_).dead_ != false)) {
      _Var6 = _Var6 + 2;
    }
    if (((uVar1 & 0x40) != 0) && (iVar5 = (this->_impl_).game_server_index_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c22e280

uchar * __thiscall
ds_proto::PartyMemberInfo::_InternalSerialize
          (PartyMemberInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  uchar *puVar5;
  char *pcVar6;
  char *pcVar7;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar4 = (this->_impl_).player_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar4,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar6 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar6 = *(char **)pcVar7;
      }
      local_28._Mysize = 0x1d;
      local_28._Mydata = "ds_proto.PartyMemberInfo.name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,3,&local_28,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar3 = (this->_impl_).level_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) && ((this->_impl_).online_ != false)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar2 = (this->_impl_).online_;
    *param_1 = '8';
    param_1[1] = bVar2 != false;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (iVar3 = (this->_impl_).char_id_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<8>
                        (param_2,iVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) && ((this->_impl_).dead_ != false)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar2 = (this->_impl_).dead_;
    *param_1 = 'H';
    param_1[1] = bVar2 != false;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x40) != 0) &&
     (iVar3 = (this->_impl_).game_server_index_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<11>
                        (param_2,iVar3,param_1);
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar5;
}

// GetClassData @ 14c22e450

ClassData * __thiscall ds_proto::PartyMemberInfo::GetClassData(PartyMemberInfo *this)

{
  return (ClassData *)&PartyMemberInfo_class_data_;
}

// PlacementNew_ @ 14c22e470

void * __cdecl ds_proto::PartyMemberInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7PartyMemberInfo_ds_proto__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// MergeImpl @ 14c22e4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ds_proto::PartyInvitedInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  ulong64 uVar6;
  Arena *pAVar7;
  undefined1 auStackY_68 [32];
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 0x1f) != 0) {
    if ((uVar2 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar7);
          if (0xf < uStack_20) {
            uVar6 = uStack_20 + 1;
            uVar4 = local_38._Ptr;
            if (0xfff < uVar6) {
              uVar4 = *(undefined8 *)(local_38._Ptr + -8);
              uVar6 = uStack_20 + 0x28;
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar4)) {
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
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if (((uVar2 & 2) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
    }
    if (((uVar2 & 4) != 0) && (lVar1 = param_2[2]._internal_metadata_.ptr_, lVar1 != 0)) {
      param_1[2]._internal_metadata_.ptr_ = lVar1;
    }
    if (((uVar2 & 8) != 0) && (param_2[3]._padding_ != 0)) {
      param_1[3]._padding_ = param_2[3]._padding_;
    }
    if (((uVar2 & 0x10) != 0) && (iVar3 = (int)param_2[3]._internal_metadata_.ptr_, iVar3 != 0)) {
      *(int *)&param_1[3]._internal_metadata_.ptr_ = iVar3;
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

// Clear @ 14c22e650

void __thiscall ds_proto::PartyInvitedInfo::Clear(PartyInvitedInfo *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 1) != 0) {
    puVar2 = (undefined8 *)
             ((ulonglong)(this->_impl_).sender_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar2[2] = 0;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
  }
  if ((uVar3 & 0x1e) != 0) {
    (this->_impl_).party_id_ = 0;
    (this->_impl_).end_time_ = 0.0;
    (this->_impl_).sender_uid_ = 0;
    (this->_impl_).sender_level_ = 0;
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

// ByteSizeLong @ 14c22e6b0

ulong64 __thiscall ds_proto::PartyInvitedInfo::ByteSizeLong(PartyInvitedInfo *this)

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
                 (((ulonglong)(this->_impl_).sender_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), lVar2 != 0)) {
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
    if (((uVar1 & 2) != 0) && (lVar2 = (this->_impl_).party_id_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 4) != 0) && ((this->_impl_).end_time_ != 0.0)) {
      _Var6 = _Var6 + 9;
    }
    if (((uVar1 & 8) != 0) && (lVar2 = (this->_impl_).sender_uid_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 0x10) != 0) && (iVar5 = (this->_impl_).sender_level_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c22e7a0

uchar * __thiscall
ds_proto::PartyInvitedInfo::_InternalSerialize
          (PartyInvitedInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  uchar *puVar5;
  char *pcVar6;
  char *pcVar7;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar4 = (this->_impl_).party_id_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar4,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) && ((this->_impl_).end_time_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    dVar2 = (this->_impl_).end_time_;
    *param_1 = '\x11';
    *(double *)(param_1 + 1) = dVar2;
    param_1 = param_1 + 9;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (lVar4 = (this->_impl_).sender_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<3>
                        (param_2,lVar4,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (iVar3 = (this->_impl_).sender_level_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar3,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).sender_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar6 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar6 = *(char **)pcVar7;
      }
      local_18._Mysize = 0x25;
      local_18._Mydata = "ds_proto.PartyInvitedInfo.sender_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_18._Mysize = *puVar1;
      local_18._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,5,&local_18,param_1);
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

// GetClassData @ 14c22e920

ClassData * __thiscall ds_proto::PartyInvitedInfo::GetClassData(PartyInvitedInfo *this)

{
  return (ClassData *)&PartyInvitedInfo_class_data_;
}

// PlacementNew_ @ 14c22e940

void * __cdecl ds_proto::PartyInvitedInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7PartyInvitedInfo_ds_proto__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined4 *)((longlong)param_2 + 0x38) = 0;
  return param_2;
}

// MergeImpl @ 14c22e980

void __cdecl ds_proto::PartyInviteRejectInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 3) != 0) {
    if (((uVar2 & 1) != 0) && (lVar3 = param_2[1]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[1]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar2 & 2) != 0) && (cVar1 = (char)param_2[2]._padding_, cVar1 != '\0')) {
      *(char *)&param_1[2]._padding_ = cVar1;
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar2;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
    return;
  }
  return;
}

// Clear @ 14c22e9d0

void __thiscall ds_proto::PartyInviteRejectInfo::Clear(PartyInviteRejectInfo *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 3) != 0) {
    (this->_impl_).sender_uid_ = 0;
    (this->_impl_).is_timeout_ = false;
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
    uVar2 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar2 = (uint)uVar1 & 3;
  }
  if (uVar2 != 0) {
    google::protobuf::UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14c22ea00

ulong64 __thiscall ds_proto::PartyInviteRejectInfo::ByteSizeLong(PartyInviteRejectInfo *this)

{
  uint uVar1;
  longlong lVar2;
  __uint64 _Var3;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var3 = 0;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (lVar2 = (this->_impl_).sender_uid_, lVar2 != 0)) {
      _Var3 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
    }
    if (((uVar1 & 2) != 0) && ((this->_impl_).is_timeout_ != false)) {
      _Var3 = _Var3 + 2;
    }
  }
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var3,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c22ea60

uchar * __thiscall
ds_proto::PartyInviteRejectInfo::_InternalSerialize
          (PartyInviteRejectInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  bool bVar1;
  longlong lVar2;
  uchar *puVar3;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar2 = (this->_impl_).sender_uid_, lVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) && ((this->_impl_).is_timeout_ != false))
  {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar1 = (this->_impl_).is_timeout_;
    *param_1 = '\x10';
    param_1[1] = bVar1 != false;
    param_1 = param_1 + 2;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14c22eb00

ClassData * __thiscall ds_proto::PartyInviteRejectInfo::GetClassData(PartyInviteRejectInfo *this)

{
  return (ClassData *)&PartyInviteRejectInfo_class_data_;
}

// PlacementNew_ @ 14c22eb20

void * __cdecl
ds_proto::PartyInviteRejectInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7PartyInviteRejectInfo_ds_proto__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// MergeImpl @ 14c22eb50

void __cdecl ds_proto::PartyInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (lVar2 = param_2[1]._internal_metadata_.ptr_, lVar2 != 0)) {
      param_1[1]._internal_metadata_.ptr_ = lVar2;
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
    return;
  }
  return;
}

// Clear @ 14c22eba0

void __thiscall ds_proto::PartyInfo::Clear(PartyInfo *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 3) != 0) {
    (this->_impl_).party_uid_ = 0;
    (this->_impl_).leader_uid_ = 0;
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
    uVar2 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar2 = (uint)uVar1 & 3;
  }
  if (uVar2 != 0) {
    google::protobuf::UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14c22ebd0

ulong64 __thiscall ds_proto::PartyInfo::ByteSizeLong(PartyInfo *this)

{
  uint uVar1;
  longlong lVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  __uint64 _Var5;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  uVar3 = 0;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (lVar2 = (this->_impl_).party_uid_, lVar2 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
    }
    if (((uVar1 & 2) != 0) && (lVar2 = (this->_impl_).leader_uid_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      uVar3 = uVar3 + uVar4;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar3,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c22ec40

uchar * __thiscall
ds_proto::PartyInfo::_InternalSerialize(PartyInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  longlong lVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar1 = (this->_impl_).party_uid_, lVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar1,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar1 = (this->_impl_).leader_uid_, lVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar1,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c22ecd0

ClassData * __thiscall ds_proto::PartyInfo::GetClassData(PartyInfo *this)

{
  return (ClassData *)&PartyInfo_class_data_;
}

// PlacementNew_ @ 14c22ecf0

void * __cdecl ds_proto::PartyInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7PartyInfo_ds_proto__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// MergeImpl @ 14c22ed20

void __cdecl ds_proto::PartySlotInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  MessageLite *pMVar3;
  MessageLite *pMVar4;
  void *pvVar5;
  Arena *pAVar6;
  
  pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pMVar3 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
      pMVar4 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
      if (pMVar3 == (MessageLite *)0x0) {
        pvVar5 = google::protobuf::Arena::CopyConstruct<ds_proto::PartyMemberInfo>(pAVar6,pMVar4);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar5;
      }
      else {
        PartyMemberInfo::MergeImpl(pMVar3,pMVar4);
      }
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (int)param_2[2]._padding_, iVar2 != 0)) {
      *(int *)&param_1[2]._padding_ = iVar2;
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

// Clear @ 14c22edd0

void __thiscall ds_proto::PartySlotInfo::Clear(PartySlotInfo *this)

{
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    PartyMemberInfo::Clear((this->_impl_).member_);
  }
  (this->_impl_).slot_index_ = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c22ee20

ulong64 __thiscall ds_proto::PartySlotInfo::ByteSizeLong(PartySlotInfo *this)

{
  uint uVar1;
  ulong64 uVar2;
  uint uVar3;
  int iVar4;
  __uint64 _Var5;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var5 = 0;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = PartyMemberInfo::ByteSizeLong((this->_impl_).member_);
      uVar3 = (uint)uVar2 | 1;
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
      _Var5 = (ulonglong)(iVar4 * -9 + 0x160U >> 6) + 1 + uVar2;
    }
    if (((uVar1 & 2) != 0) && (uVar1 = (this->_impl_).slot_index_, uVar1 != 0)) {
      uVar1 = uVar1 | 1;
      if (__isa_available < 5) {
        iVar4 = 0x1f;
        if (uVar1 != 0) {
          for (; uVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 0x1f - iVar4;
      }
      else {
        iVar4 = LZCOUNT(uVar1);
      }
      _Var5 = _Var5 + (iVar4 * -9 + 0x1a0U >> 6);
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c22eef0

uchar * __thiscall
ds_proto::PartySlotInfo::_InternalSerialize
          (PartySlotInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uchar *puVar3;
  uint uVar4;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) && ((this->_impl_).slot_index_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (this->_impl_).slot_index_;
    *param_1 = 8;
    while( true ) {
      pbVar1 = param_1 + 1;
      bVar2 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *pbVar1 = bVar2 | 0x80;
      param_1 = pbVar1;
    }
    *pbVar1 = bVar2;
    param_1 = param_1 + 2;
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (3,(MessageLite *)(this->_impl_).member_,
                         (int)(((this->_impl_).member_)->_impl_)._cached_size_.atom_,param_1,param_2
                        );
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar3;
}

// GetClassData @ 14c22efb0

ClassData * __thiscall ds_proto::PartySlotInfo::GetClassData(PartySlotInfo *this)

{
  return (ClassData *)&PartySlotInfo_class_data_;
}

// PlacementNew_ @ 14c22efd0

void * __cdecl ds_proto::PartySlotInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7PartySlotInfo_ds_proto__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// PartyInfo @ 14c22f000

PartyInfo * __thiscall ds_proto::PartyInfo::PartyInfo(PartyInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PartyInfo_ds_proto__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).party_uid_ = 0;
  (this->_impl_).leader_uid_ = 0;
  return this;
}

// PartyInfo @ 14c22f030

PartyInfo * __thiscall
ds_proto::PartyInfo::PartyInfo(PartyInfo *this,Arena *param_1,PartyInfo *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PartyInfo_ds_proto__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).party_uid_ = (param_2->_impl_).party_uid_;
  (this->_impl_).leader_uid_ = (param_2->_impl_).leader_uid_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// PartyInviteRejectInfo @ 14c22f090

PartyInviteRejectInfo * __thiscall
ds_proto::PartyInviteRejectInfo::PartyInviteRejectInfo(PartyInviteRejectInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PartyInviteRejectInfo_ds_proto__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).sender_uid_ = 0;
  (this->_impl_).is_timeout_ = false;
  return this;
}

// PartyInviteRejectInfo @ 14c22f0c0

PartyInviteRejectInfo * __thiscall
ds_proto::PartyInviteRejectInfo::PartyInviteRejectInfo
          (PartyInviteRejectInfo *this,Arena *param_1,PartyInviteRejectInfo *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PartyInviteRejectInfo_ds_proto__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).sender_uid_ = (param_2->_impl_).sender_uid_;
  (this->_impl_).is_timeout_ = (param_2->_impl_).is_timeout_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// PartyInvitedInfo @ 14c22f120

PartyInvitedInfo * __thiscall
ds_proto::PartyInvitedInfo::PartyInvitedInfo(PartyInvitedInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PartyInvitedInfo_ds_proto__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).sender_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).party_id_ = 0;
  (this->_impl_).end_time_ = 0.0;
  (this->_impl_).sender_uid_ = 0;
  (this->_impl_).sender_level_ = 0;
  return this;
}

// PartyInvitedInfo @ 14c22f160

PartyInvitedInfo * __thiscall
ds_proto::PartyInvitedInfo::PartyInvitedInfo
          (PartyInvitedInfo *this,Arena *param_1,PartyInvitedInfo *param_2)

{
  ArenaStringPtr *this_00;
  double dVar1;
  TaggedStringPtr TVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PartyInvitedInfo_ds_proto__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).sender_name_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar3 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  (this->_impl_).sender_name_.tagged_ptr_.ptr_ = pvVar3;
  dVar1 = (param_2->_impl_).end_time_;
  (this->_impl_).party_id_ = (param_2->_impl_).party_id_;
  (this->_impl_).end_time_ = dVar1;
  (this->_impl_).sender_uid_ = (param_2->_impl_).sender_uid_;
  (this->_impl_).sender_level_ = (param_2->_impl_).sender_level_;
  return this;
}

// PartyMemberInfo @ 14c22f200

PartyMemberInfo * __thiscall
ds_proto::PartyMemberInfo::PartyMemberInfo(PartyMemberInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PartyMemberInfo_ds_proto__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).name_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).level_ = 0;
  (this->_impl_).char_id_ = 0;
  (this->_impl_).online_ = false;
  (this->_impl_).dead_ = false;
  *(undefined2 *)&(this->_impl_).field_0x22 = 0;
  (this->_impl_).game_server_index_ = 0;
  return this;
}

// PartyMemberInfo @ 14c22f240

PartyMemberInfo * __thiscall
ds_proto::PartyMemberInfo::PartyMemberInfo
          (PartyMemberInfo *this,Arena *param_1,PartyMemberInfo *param_2)

{
  ArenaStringPtr *this_00;
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined2 uVar4;
  TaggedStringPtr TVar5;
  void *pvVar6;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PartyMemberInfo_ds_proto__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).name_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar6 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  (this->_impl_).name_.tagged_ptr_.ptr_ = pvVar6;
  iVar1 = (param_2->_impl_).level_;
  iVar2 = (param_2->_impl_).char_id_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).level_ = iVar1;
  (this->_impl_).char_id_ = iVar2;
  bVar3 = (param_2->_impl_).dead_;
  uVar4 = *(undefined2 *)&(param_2->_impl_).field_0x22;
  iVar1 = (param_2->_impl_).game_server_index_;
  (this->_impl_).online_ = (param_2->_impl_).online_;
  (this->_impl_).dead_ = bVar3;
  *(undefined2 *)&(this->_impl_).field_0x22 = uVar4;
  (this->_impl_).game_server_index_ = iVar1;
  return this;
}

// PartySlotInfo @ 14c22f2e0

PartySlotInfo * __thiscall
ds_proto::PartySlotInfo::PartySlotInfo(PartySlotInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PartySlotInfo_ds_proto__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).member_ = (PartyMemberInfo *)0x0;
  (this->_impl_).slot_index_ = 0;
  return this;
}

// PartySlotInfo @ 14c22f310

PartySlotInfo * __thiscall
ds_proto::PartySlotInfo::PartySlotInfo(PartySlotInfo *this,Arena *param_1,PartySlotInfo *param_2)

{
  PartyMemberInfo *pPVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PartySlotInfo_ds_proto__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pPVar1 = (PartyMemberInfo *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pPVar1 = google::protobuf::Arena::CopyConstruct<ds_proto::PartyMemberInfo>
                       (param_1,(param_2->_impl_).member_);
  }
  (this->_impl_).member_ = pPVar1;
  (this->_impl_).slot_index_ = (param_2->_impl_).slot_index_;
  return this;
}

// ~PartyInfo @ 14c22f3a0

void __thiscall ds_proto::PartyInfo::~PartyInfo(PartyInfo *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7PartyInfo_ds_proto__6B_;
  plVar1 = &this->_padding_;
  if ((*plVar1 & 1) == 0) {
    return;
  }
  pvVar4 = (void *)(*plVar1 & 0xfffffffffffffffe);
  if (pvVar4 != (void *)0x0) {
    if ((~((byte)*(undefined8 *)((longlong)pvVar4 + 8) >> 2) & 1) == 0) {
      uVar3 = *(uint *)((longlong)pvVar4 + 0x10);
    }
    else {
      uVar3 = (uint)*(undefined8 *)((longlong)pvVar4 + 8) & 3;
    }
    if (uVar3 != 0) {
      google::protobuf::UnknownFieldSet::ClearFallback((UnknownFieldSet *)((longlong)pvVar4 + 8));
    }
    if ((~((byte)*(ulonglong *)((longlong)pvVar4 + 8) >> 2) & 1) == 0) {
      plVar2 = (longlong *)((*(ulonglong *)((longlong)pvVar4 + 8) & 0xfffffffffffffff8) - 0x10);
      if (*plVar2 == 0) {
        ::operator_delete(plVar2,((longlong)*(int *)((longlong)pvVar4 + 0x14) + 1) * 0x10);
      }
    }
    ::operator_delete(pvVar4,0x18);
    *plVar1 = 0;
    return;
  }
  *plVar1 = 0;
  return;
}

// ~PartyInviteRejectInfo @ 14c22f3c0

void __thiscall ds_proto::PartyInviteRejectInfo::~PartyInviteRejectInfo(PartyInviteRejectInfo *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7PartyInviteRejectInfo_ds_proto__6B_;
  plVar1 = &this->_padding_;
  if ((*plVar1 & 1) == 0) {
    return;
  }
  pvVar4 = (void *)(*plVar1 & 0xfffffffffffffffe);
  if (pvVar4 != (void *)0x0) {
    if ((~((byte)*(undefined8 *)((longlong)pvVar4 + 8) >> 2) & 1) == 0) {
      uVar3 = *(uint *)((longlong)pvVar4 + 0x10);
    }
    else {
      uVar3 = (uint)*(undefined8 *)((longlong)pvVar4 + 8) & 3;
    }
    if (uVar3 != 0) {
      google::protobuf::UnknownFieldSet::ClearFallback((UnknownFieldSet *)((longlong)pvVar4 + 8));
    }
    if ((~((byte)*(ulonglong *)((longlong)pvVar4 + 8) >> 2) & 1) == 0) {
      plVar2 = (longlong *)((*(ulonglong *)((longlong)pvVar4 + 8) & 0xfffffffffffffff8) - 0x10);
      if (*plVar2 == 0) {
        ::operator_delete(plVar2,((longlong)*(int *)((longlong)pvVar4 + 0x14) + 1) * 0x10);
      }
    }
    ::operator_delete(pvVar4,0x18);
    *plVar1 = 0;
    return;
  }
  *plVar1 = 0;
  return;
}

// ~PartyInvitedInfo @ 14c22f3e0

void __thiscall ds_proto::PartyInvitedInfo::~PartyInvitedInfo(PartyInvitedInfo *this)

{
  this->_padding_ = (longlong)&___7PartyInvitedInfo_ds_proto__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).sender_name_);
  return;
}

// ~PartyMemberInfo @ 14c22f420

void __thiscall ds_proto::PartyMemberInfo::~PartyMemberInfo(PartyMemberInfo *this)

{
  this->_padding_ = (longlong)&___7PartyMemberInfo_ds_proto__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).name_);
  return;
}

// ~PartySlotInfo @ 14c22f460

void __thiscall ds_proto::PartySlotInfo::~PartySlotInfo(PartySlotInfo *this)

{
  PartyMemberInfo *pPVar1;
  
  this->_padding_ = (longlong)&___7PartySlotInfo_ds_proto__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  pPVar1 = (this->_impl_).member_;
  if (pPVar1 != (PartyMemberInfo *)0x0) {
    pPVar1->_padding_ = (longlong)&___7PartyMemberInfo_ds_proto__6B_;
    if ((pPVar1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::
      DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&pPVar1->_padding_);
    }
    google::protobuf::internal::ArenaStringPtr::Destroy(&(pPVar1->_impl_).name_);
    ::operator_delete(pPVar1,0x38);
    return;
  }
  return;
}

// CopyFrom @ 14c22f4d0

void __thiscall ds_proto::PartyInfo::CopyFrom(PartyInfo *this,PartyInfo *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 3) != 0) {
      if (((uVar1 & 1) != 0) && (lVar2 = (param_1->_impl_).party_uid_, lVar2 != 0)) {
        (this->_impl_).party_uid_ = lVar2;
      }
      if (((uVar1 & 2) != 0) && (lVar2 = (param_1->_impl_).leader_uid_, lVar2 != 0)) {
        (this->_impl_).leader_uid_ = lVar2;
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

// CopyFrom @ 14c22f550

void __thiscall
ds_proto::PartyInviteRejectInfo::CopyFrom
          (PartyInviteRejectInfo *this,PartyInviteRejectInfo *param_1)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_1 != this) {
    Clear(this);
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar2 & 3) != 0) {
      if (((uVar2 & 1) != 0) && (lVar3 = (param_1->_impl_).sender_uid_, lVar3 != 0)) {
        (this->_impl_).sender_uid_ = lVar3;
      }
      if (((uVar2 & 2) != 0) && (bVar1 = (param_1->_impl_).is_timeout_, bVar1 != false)) {
        (this->_impl_).is_timeout_ = bVar1;
      }
    }
    (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar2;
    if ((param_1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&this->_padding_,
                 (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    }
  }
  return;
}

// CopyFrom @ 14c22f5c0

void __thiscall
ds_proto::PartyInvitedInfo::CopyFrom(PartyInvitedInfo *this,PartyInvitedInfo *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c22f600

void __thiscall ds_proto::PartyMemberInfo::CopyFrom(PartyMemberInfo *this,PartyMemberInfo *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c22f640

void __thiscall ds_proto::PartySlotInfo::CopyFrom(PartySlotInfo *this,PartySlotInfo *param_1)

{
  uint uVar1;
  uint uVar2;
  PartyMemberInfo *pPVar3;
  PartyMemberInfo *pPVar4;
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
        pPVar4 = (this->_impl_).member_;
        pPVar3 = (param_1->_impl_).member_;
        if (pPVar4 == (PartyMemberInfo *)0x0) {
          pPVar4 = google::protobuf::Arena::CopyConstruct<ds_proto::PartyMemberInfo>(pAVar5,pPVar3);
          (this->_impl_).member_ = pPVar4;
        }
        else {
          PartyMemberInfo::MergeImpl((MessageLite *)pPVar4,(MessageLite *)pPVar3);
        }
      }
      if (((uVar1 & 2) != 0) && (uVar2 = (param_1->_impl_).slot_index_, uVar2 != 0)) {
        (this->_impl_).slot_index_ = uVar2;
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

// GetMetadata @ 14c22f700

Metadata * __thiscall
ds_proto::PartyInfo::GetMetadata(PartyInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&PartyInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c22f740

Metadata * __thiscall
ds_proto::PartyInviteRejectInfo::GetMetadata
          (PartyInviteRejectInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&PartyInviteRejectInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c22f780

Metadata * __thiscall
ds_proto::PartyInvitedInfo::GetMetadata(PartyInvitedInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&PartyInvitedInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c22f7c0

Metadata * __thiscall
ds_proto::PartyMemberInfo::GetMetadata(PartyMemberInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&PartyMemberInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c22f800

Metadata * __thiscall
ds_proto::PartySlotInfo::GetMetadata(PartySlotInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&PartySlotInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c22f840

void __thiscall ds_proto::PartyInfo::InternalSwap(PartyInfo *this,PartyInfo *param_1)

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
            ((char *)&(this->_impl_).party_uid_,(char *)&(param_1->_impl_).party_uid_);
  return;
}

// InternalSwap @ 14c22f880

void __thiscall
ds_proto::PartyInviteRejectInfo::InternalSwap
          (PartyInviteRejectInfo *this,PartyInviteRejectInfo *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).sender_uid_,&(this->_impl_).field_0x11,&(param_1->_impl_).sender_uid_);
  return;
}

// InternalSwap @ 14c22f8c0

void __thiscall
ds_proto::PartyInvitedInfo::InternalSwap(PartyInvitedInfo *this,PartyInvitedInfo *param_1)

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
  pvVar3 = (param_1->_impl_).sender_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).sender_name_.tagged_ptr_.ptr_ = (this->_impl_).sender_name_.tagged_ptr_.ptr_;
  (this->_impl_).sender_name_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).party_id_,&(this->_impl_).field_0x2c,&(param_1->_impl_).party_id_);
  return;
}

// InternalSwap @ 14c22f910

void __thiscall
ds_proto::PartyMemberInfo::InternalSwap(PartyMemberInfo *this,PartyMemberInfo *param_1)

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
            (&(this->_impl_).player_uid_,this + 1,&(param_1->_impl_).player_uid_);
  return;
}

// InternalSwap @ 14c22f960

void __thiscall ds_proto::PartySlotInfo::InternalSwap(PartySlotInfo *this,PartySlotInfo *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).member_,&(this->_impl_).field_0x14,&(param_1->_impl_).member_);
  return;
}

// `dynamic_atexit_destructor_for_'_PartyInfo_default_instance_'' @ 150443bd0

void __cdecl ds_proto::_dynamic_atexit_destructor_for___PartyInfo_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_PartyInviteRejectInfo_default_instance_'' @ 150443be0

void __cdecl
ds_proto::_dynamic_atexit_destructor_for___PartyInviteRejectInfo_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_PartyInvitedInfo_default_instance_'' @ 150443bf0

void __cdecl ds_proto::_dynamic_atexit_destructor_for___PartyInvitedInfo_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_PartyMemberInfo_default_instance_'' @ 150443c00

void __cdecl ds_proto::_dynamic_atexit_destructor_for___PartyMemberInfo_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_PartySlotInfo_default_instance_'' @ 150443c10

void __cdecl ds_proto::_dynamic_atexit_destructor_for___PartySlotInfo_default_instance___(void)

{
  return;
}


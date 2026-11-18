// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 90

// `dynamic_initializer_for_'_RaidCharInfo_default_instance_'' @ 141299a60

void __cdecl ds_proto::_dynamic_initializer_for___RaidCharInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___RaidCharInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_RaidNoticeInfo_default_instance_'' @ 141299a80

void __cdecl ds_proto::_dynamic_initializer_for___RaidNoticeInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___RaidNoticeInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_RaidPartyInfo_default_instance_'' @ 141299aa0

void __cdecl ds_proto::_dynamic_initializer_for___RaidPartyInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___RaidPartyInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_RaidPartyInvitedInfo_default_instance_'' @ 141299ac0

void __cdecl ds_proto::_dynamic_initializer_for___RaidPartyInvitedInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___RaidPartyInvitedInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_RaidPartyMemberInfo_default_instance_'' @ 141299ae0

void __cdecl ds_proto::_dynamic_initializer_for___RaidPartyMemberInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___RaidPartyMemberInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_RaidPartySimpleInfo_default_instance_'' @ 141299b00

void __cdecl ds_proto::_dynamic_initializer_for___RaidPartySimpleInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___RaidPartySimpleInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 141299b20

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_structs_5fraid_5fparty_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c231270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ds_proto::RaidPartySimpleInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  ulong64 uVar7;
  Arena *pAVar8;
  undefined1 auStackY_68 [32];
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  uVar2 = (uint)param_2[1]._padding_;
  if ((char)uVar2 != '\0') {
    if ((uVar2 & 1) != 0) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar6->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar8 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar8);
          if (0xf < uStack_20) {
            uVar7 = uStack_20 + 1;
            uVar5 = local_38._Ptr;
            if (0xfff < uVar7) {
              uVar5 = *(undefined8 *)(local_38._Ptr + -8);
              uVar7 = uStack_20 + 0x28;
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar5)) {
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
        pAVar8 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar6,pAVar8);
      }
    }
    if ((uVar2 & 2) != 0) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._padding_ & 0xfffffffffffffffc);
      if ((pbVar6->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar8 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 2),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar8);
          if (0xf < uStack_20) {
            uVar7 = uStack_20 + 1;
            uVar5 = local_38._Ptr;
            if (0xfff < uVar7) {
              uVar5 = *(undefined8 *)(local_38._Ptr + -8);
              uVar7 = uStack_20 + 0x28;
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar5)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar5,uVar7);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
        pAVar8 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 2),pbVar6,pAVar8);
      }
    }
    if (((uVar2 & 4) != 0) && (lVar4 = param_2[2]._internal_metadata_.ptr_, lVar4 != 0)) {
      param_1[2]._internal_metadata_.ptr_ = lVar4;
    }
    if (((uVar2 & 8) != 0) && (iVar3 = (int)param_2[3]._padding_, iVar3 != 0)) {
      *(int *)&param_1[3]._padding_ = iVar3;
    }
    if (((uVar2 & 0x10) != 0) &&
       (cVar1 = *(char *)((longlong)&param_2[3]._padding_ + 4), cVar1 != '\0')) {
      *(char *)((longlong)&param_1[3]._padding_ + 4) = cVar1;
    }
    if (((uVar2 & 0x20) != 0) &&
       (cVar1 = *(char *)((longlong)&param_2[3]._padding_ + 5), cVar1 != '\0')) {
      *(char *)((longlong)&param_1[3]._padding_ + 5) = cVar1;
    }
    if (((uVar2 & 0x40) != 0) && (lVar4 = param_2[3]._internal_metadata_.ptr_, lVar4 != 0)) {
      param_1[3]._internal_metadata_.ptr_ = lVar4;
    }
    if (((char)uVar2 < '\0') && (iVar3 = (int)param_2[4]._padding_, iVar3 != 0)) {
      *(int *)&param_1[4]._padding_ = iVar3;
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

// Clear @ 14c231500

void __thiscall ds_proto::RaidPartySimpleInfo::Clear(RaidPartySimpleInfo *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).party_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar3 & 2) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).leader_nick_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
  }
  if ((uVar3 & 0xfc) != 0) {
    (this->_impl_).raid_party_uid_ = 0;
    (this->_impl_).dungeon_id_ = 0;
    (this->_impl_).is_password_ = false;
    (this->_impl_).is_public_ = false;
    *(undefined2 *)&(this->_impl_).field_0x26 = 0;
    (this->_impl_).leader_uid_ = 0;
    (this->_impl_).member_count_ = 0;
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

// ByteSizeLong @ 14c231580

ulong64 __thiscall ds_proto::RaidPartySimpleInfo::ByteSizeLong(RaidPartySimpleInfo *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulong64 uVar4;
  int iVar5;
  __uint64 _Var6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((char)uVar1 != '\0') {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).party_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
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
    if (((uVar1 & 2) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).leader_nick_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc
                  ) + 0x10), lVar2 != 0)) {
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
    if (((uVar1 & 4) != 0) && (lVar2 = (this->_impl_).raid_party_uid_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 8) != 0) && (iVar5 = (this->_impl_).dungeon_id_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 0x10) != 0) && ((this->_impl_).is_password_ != false)) {
      _Var6 = _Var6 + 2;
    }
    if (((uVar1 & 0x20) != 0) && ((this->_impl_).is_public_ != false)) {
      _Var6 = _Var6 + 2;
    }
    if (((uVar1 & 0x40) != 0) && (lVar2 = (this->_impl_).leader_uid_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar4;
    }
    if (((char)uVar1 < '\0') && (iVar5 = (this->_impl_).member_count_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c2316e0

uchar * __thiscall
ds_proto::RaidPartySimpleInfo::_InternalSerialize
          (RaidPartySimpleInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  uchar *puVar5;
  char *pcVar6;
  char *pcVar7;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (lVar4 = (this->_impl_).raid_party_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar4,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (iVar3 = (this->_impl_).dungeon_id_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar3,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).party_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar6 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar6 = *(char **)pcVar7;
      }
      local_28._Mysize = 0x27;
      local_28._Mydata = "ds_proto.RaidPartySimpleInfo.party_name";
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
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     ((this->_impl_).is_password_ != false)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar2 = (this->_impl_).is_password_;
    *param_1 = ' ';
    param_1[1] = bVar2 != false;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x40) != 0) &&
     (lVar4 = (this->_impl_).leader_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<6>
                        (param_2,lVar4,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).leader_nick_name_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar6 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar6 = *(char **)pcVar7;
      }
      local_28._Mysize = 0x2d;
      local_28._Mydata = "ds_proto.RaidPartySimpleInfo.leader_nick_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,7,&local_28,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) && ((this->_impl_).is_public_ != false)
     ) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar2 = (this->_impl_).is_public_;
    *param_1 = 'P';
    param_1[1] = bVar2 != false;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x80) != 0) &&
     (iVar3 = (this->_impl_).member_count_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<11>
                        (param_2,iVar3,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar5;
  }
  return param_1;
}

// GetClassData @ 14c231940

ClassData * __thiscall ds_proto::RaidPartySimpleInfo::GetClassData(RaidPartySimpleInfo *this)

{
  return (ClassData *)&RaidPartySimpleInfo_class_data_;
}

// PlacementNew_ @ 14c231960

void * __cdecl
ds_proto::RaidPartySimpleInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7RaidPartySimpleInfo_ds_proto__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x20) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined4 *)((longlong)param_2 + 0x40) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c2319a0

void * __thiscall
ds_proto::RaidPartySimpleInfo::_scalar_deleting_destructor_(RaidPartySimpleInfo *this,uint param_1)

{
  this->_padding_ = (longlong)&___7RaidPartySimpleInfo_ds_proto__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).party_name_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).leader_nick_name_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// MergeImpl @ 14c231a00

void __cdecl ds_proto::RaidPartyInvitedInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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

// Clear @ 14c231a60

void __thiscall ds_proto::RaidPartyInvitedInfo::Clear(RaidPartyInvitedInfo *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 3) != 0) {
    (this->_impl_).party_id_ = 0;
    (this->_impl_).end_time_ = 0.0;
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

// ByteSizeLong @ 14c231a90

ulong64 __thiscall ds_proto::RaidPartyInvitedInfo::ByteSizeLong(RaidPartyInvitedInfo *this)

{
  uint uVar1;
  longlong lVar2;
  __uint64 _Var3;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var3 = 0;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (lVar2 = (this->_impl_).party_id_, lVar2 != 0)) {
      _Var3 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
    }
    if (((uVar1 & 2) != 0) && ((this->_impl_).end_time_ != 0.0)) {
      _Var3 = _Var3 + 9;
    }
  }
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var3,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c231af0

uchar * __thiscall
ds_proto::RaidPartyInvitedInfo::_InternalSerialize
          (RaidPartyInvitedInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  double dVar1;
  longlong lVar2;
  uchar *puVar3;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar2 = (this->_impl_).party_id_, lVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) && ((this->_impl_).end_time_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    dVar1 = (this->_impl_).end_time_;
    *param_1 = '\x11';
    *(double *)(param_1 + 1) = dVar1;
    param_1 = param_1 + 9;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14c231b90

ClassData * __thiscall ds_proto::RaidPartyInvitedInfo::GetClassData(RaidPartyInvitedInfo *this)

{
  return (ClassData *)&RaidPartyInvitedInfo_class_data_;
}

// PlacementNew_ @ 14c231bb0

void * __cdecl
ds_proto::RaidPartyInvitedInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7RaidPartyInvitedInfo_ds_proto__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c231be0

void * __thiscall
ds_proto::RaidPartyInvitedInfo::_scalar_deleting_destructor_
          (RaidPartyInvitedInfo *this,uint param_1)

{
  this->_padding_ = (longlong)&___7RaidPartyInvitedInfo_ds_proto__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// MergeImpl @ 14c231c30

void __cdecl ds_proto::RaidNoticeInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (lVar3 = param_2[1]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[1]._internal_metadata_.ptr_ = lVar3;
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
    return;
  }
  return;
}

// Clear @ 14c231c80

void __thiscall ds_proto::RaidNoticeInfo::Clear(RaidNoticeInfo *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 3) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).server_index_ = 0;
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

// ByteSizeLong @ 14c231cb0

ulong64 __thiscall ds_proto::RaidNoticeInfo::ByteSizeLong(RaidNoticeInfo *this)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  __uint64 _Var6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  uVar4 = 0;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (lVar3 = (this->_impl_).player_uid_, lVar3 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar3);
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (this->_impl_).server_index_, iVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
      uVar4 = uVar4 + uVar5;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar4,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c231d20

uchar * __thiscall
ds_proto::RaidNoticeInfo::_InternalSerialize
          (RaidNoticeInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  longlong lVar2;
  uchar *puVar3;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (iVar1 = (this->_impl_).server_index_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar1,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14c231db0

ClassData * __thiscall ds_proto::RaidNoticeInfo::GetClassData(RaidNoticeInfo *this)

{
  return (ClassData *)&RaidNoticeInfo_class_data_;
}

// PlacementNew_ @ 14c231dd0

void * __cdecl ds_proto::RaidNoticeInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7RaidNoticeInfo_ds_proto__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c231e00

void * __thiscall
ds_proto::RaidNoticeInfo::_scalar_deleting_destructor_(RaidNoticeInfo *this,uint param_1)

{
  this->_padding_ = (longlong)&___7RaidNoticeInfo_ds_proto__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// MergeImpl @ 14c231e50

void __cdecl ds_proto::RaidCharInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 7) != 0) {
    if (((uVar1 & 1) != 0) && (iVar2 = (int)param_2[1]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[1]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 & 2) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4) = iVar2;
    }
    if (((uVar1 & 4) != 0) && (iVar2 = (int)param_2[2]._padding_, iVar2 != 0)) {
      *(int *)&param_1[2]._padding_ = iVar2;
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

// Clear @ 14c231eb0

void __thiscall ds_proto::RaidCharInfo::Clear(RaidCharInfo *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 7) != 0) {
    (this->_impl_).char_id_ = 0;
    (this->_impl_).char_level_ = 0;
    (this->_impl_).char_ascend_ = 0;
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

// ByteSizeLong @ 14c231ee0

ulong64 __thiscall ds_proto::RaidCharInfo::ByteSizeLong(RaidCharInfo *this)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  __uint64 _Var5;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  uVar3 = 0;
  if ((uVar1 & 7) != 0) {
    if (((uVar1 & 1) != 0) && (iVar2 = (this->_impl_).char_id_, iVar2 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (this->_impl_).char_level_, iVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
      uVar3 = uVar3 + uVar4;
    }
    if (((uVar1 & 4) != 0) && (iVar2 = (this->_impl_).char_ascend_, iVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
      uVar3 = uVar3 + uVar4;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar3,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c231f60

uchar * __thiscall
ds_proto::RaidCharInfo::_InternalSerialize
          (RaidCharInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar1 = (this->_impl_).char_id_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar1,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (iVar1 = (this->_impl_).char_level_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar1,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar1 = (this->_impl_).char_ascend_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar1,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c232000

ClassData * __thiscall ds_proto::RaidCharInfo::GetClassData(RaidCharInfo *this)

{
  return (ClassData *)&RaidCharInfo_class_data_;
}

// PlacementNew_ @ 14c232020

void * __cdecl ds_proto::RaidCharInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7RaidCharInfo_ds_proto__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// MergeImpl @ 14c232050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ds_proto::RaidPartyMemberInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  if ((uVar1 & 0x1f) != 0) {
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
      if ((RaidCharInfo *)param_1[2]._padding_ == (RaidCharInfo *)0x0) {
        pvVar5 = google::protobuf::Arena::CopyConstruct<ds_proto::RaidCharInfo>
                           (pAVar9,(RaidCharInfo *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar5;
      }
      else {
        RaidCharInfo::MergeFrom
                  ((RaidCharInfo *)param_1[2]._padding_,(RaidCharInfo *)param_2[2]._padding_);
      }
    }
    if (((uVar1 & 4) != 0) && (lVar3 = param_2[2]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[2]._internal_metadata_.ptr_ = lVar3;
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

// Clear @ 14c232200

void __thiscall ds_proto::RaidPartyMemberInfo::Clear(RaidPartyMemberInfo *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).nick_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      RaidCharInfo::Clear((this->_impl_).char_info_);
    }
  }
  if ((uVar1 & 0x1c) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).slot_index_ = 0;
    (this->_impl_).member_state_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c232280

ulong64 __thiscall ds_proto::RaidPartyMemberInfo::ByteSizeLong(RaidPartyMemberInfo *this)

{
  uint uVar1;
  longlong lVar2;
  RaidCharInfo *this_00;
  uint uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  __uint64 _Var6;
  ulonglong uVar7;
  int iVar8;
  ulong64 uVar9;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  uVar4 = 0;
  if ((uVar1 & 0x1f) != 0) {
    uVar9 = uVar4;
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).nick_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), uVar9 = 0, lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar8 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar8 = 0x1f - iVar8;
      }
      else {
        iVar8 = LZCOUNT(uVar3);
      }
      uVar9 = (ulonglong)(iVar8 * -9 + 0x160U >> 6) + 1 + lVar2;
    }
    if ((uVar1 & 2) != 0) {
      this_00 = (this->_impl_).char_info_;
      uVar3 = (this_00->_impl_)._has_bits_.has_bits_[0];
      if ((uVar3 & 7) != 0) {
        if (((uVar3 & 1) != 0) && (iVar8 = (this_00->_impl_).char_id_, iVar8 != 0)) {
          uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar8);
        }
        if (((uVar3 & 2) != 0) && (iVar8 = (this_00->_impl_).char_level_, iVar8 != 0)) {
          uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar8);
          uVar4 = uVar4 + uVar5;
        }
        if (((uVar3 & 4) != 0) && (iVar8 = (this_00->_impl_).char_ascend_, iVar8 != 0)) {
          uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar8);
          uVar4 = uVar4 + uVar5;
        }
      }
      _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                        ((Message *)this_00,uVar4,&(this_00->_impl_)._cached_size_);
      uVar3 = (uint)_Var6 | 1;
      if (__isa_available < 5) {
        iVar8 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar8 = 0x1f - iVar8;
      }
      else {
        iVar8 = LZCOUNT(uVar3);
      }
      uVar9 = uVar9 + 1 + (iVar8 * -9 + 0x160U >> 6) + _Var6;
    }
    uVar4 = uVar9;
    if (((uVar1 & 4) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar9 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      uVar4 = uVar4 + uVar9;
    }
    if (((uVar1 & 8) != 0) && (uVar3 = (this->_impl_).slot_index_, uVar3 != 0)) {
      uVar3 = uVar3 | 1;
      if (__isa_available < 5) {
        iVar8 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar8 = 0x1f - iVar8;
      }
      else {
        iVar8 = LZCOUNT(uVar3);
      }
      uVar4 = uVar4 + (iVar8 * -9 + 0x1a0U >> 6);
    }
    if (((uVar1 & 0x10) != 0) && (iVar8 = (this->_impl_).member_state_, iVar8 != 0)) {
      uVar7 = (longlong)iVar8 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar2;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar7);
      }
      uVar4 = uVar4 + 1 + (ulonglong)(iVar8 * -9 + 0x280U >> 6);
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar4,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c232470

uchar * __thiscall
ds_proto::RaidPartyMemberInfo::_InternalSerialize
          (RaidPartyMemberInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  uchar *puVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) && ((this->_impl_).slot_index_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar6 = (this->_impl_).slot_index_;
    *param_1 = 8;
    while( true ) {
      param_1 = param_1 + 1;
      bVar3 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *param_1 = bVar3 | 0x80;
    }
    *param_1 = bVar3;
    param_1 = param_1 + 1;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar2,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar8 = (char *)((ulonglong)(this->_impl_).nick_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar8 + 0x10);
    if (*(longlong *)(pcVar8 + 0x10) != 0) {
      pcVar7 = pcVar8;
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar7 = *(char **)pcVar8;
      }
      local_18._Mysize = 0x26;
      local_18._Mydata = "ds_proto.RaidPartyMemberInfo.nick_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar7,(int)*(longlong *)(pcVar8 + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar8 = *(char **)pcVar8;
      }
      local_18._Mysize = *puVar1;
      local_18._Mydata = pcVar8;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,3,&local_18,param_1);
    }
  }
  uVar6 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar6 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (5,(MessageLite *)(this->_impl_).char_info_,
                         (int)(((this->_impl_).char_info_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar6 & 0x10) != 0) && ((this->_impl_).member_state_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (ulonglong)(this->_impl_).member_state_;
    *param_1 = 0x38;
    while( true ) {
      param_1 = param_1 + 1;
      bVar3 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_1 = bVar3 | 0x80;
    }
    *param_1 = bVar3;
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

// GetClassData @ 14c232660

ClassData * __thiscall ds_proto::RaidPartyMemberInfo::GetClassData(RaidPartyMemberInfo *this)

{
  return (ClassData *)&RaidPartyMemberInfo_class_data_;
}

// PlacementNew_ @ 14c232680

void * __cdecl
ds_proto::RaidPartyMemberInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7RaidPartyMemberInfo_ds_proto__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// MergeImpl @ 14c2326c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ds_proto::RaidPartyInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  ulong64 uVar7;
  Arena *pAVar8;
  undefined1 auStackY_68 [32];
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  if ((int)param_2[2]._padding_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&param_1[1]._internal_metadata_,
               (RepeatedPtrFieldBase *)&param_2[1]._internal_metadata_,
               google::protobuf::Arena::CopyConstruct<ds_proto::RaidPartyMemberInfo>);
  }
  uVar2 = (uint)param_2[1]._padding_;
  if ((char)uVar2 != '\0') {
    if ((uVar2 & 1) != 0) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[3]._padding_ & 0xfffffffffffffffc);
      if ((pbVar6->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[3]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar8 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 3),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar8);
          if (0xf < uStack_20) {
            uVar7 = uStack_20 + 1;
            uVar5 = local_38._Ptr;
            if (0xfff < uVar7) {
              uVar5 = *(undefined8 *)(local_38._Ptr + -8);
              uVar7 = uStack_20 + 0x28;
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar5)) {
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
        pAVar8 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 3),pbVar6,pAVar8);
      }
    }
    if (((uVar2 & 2) != 0) && (lVar4 = param_2[3]._internal_metadata_.ptr_, lVar4 != 0)) {
      param_1[3]._internal_metadata_.ptr_ = lVar4;
    }
    if (((uVar2 & 4) != 0) && (iVar3 = (int)param_2[4]._padding_, iVar3 != 0)) {
      *(int *)&param_1[4]._padding_ = iVar3;
    }
    if (((uVar2 & 8) != 0) &&
       (cVar1 = *(char *)((longlong)&param_2[4]._padding_ + 4), cVar1 != '\0')) {
      *(char *)((longlong)&param_1[4]._padding_ + 4) = cVar1;
    }
    if (((uVar2 & 0x10) != 0) &&
       (cVar1 = *(char *)((longlong)&param_2[4]._padding_ + 5), cVar1 != '\0')) {
      *(char *)((longlong)&param_1[4]._padding_ + 5) = cVar1;
    }
    if (((uVar2 & 0x20) != 0) && (lVar4 = param_2[4]._internal_metadata_.ptr_, lVar4 != 0)) {
      param_1[4]._internal_metadata_.ptr_ = lVar4;
    }
    if (((uVar2 & 0x40) != 0) && (iVar3 = (int)param_2[5]._padding_, iVar3 != 0)) {
      *(int *)&param_1[5]._padding_ = iVar3;
    }
    if (((char)uVar2 < '\0') && (iVar3 = *(int *)((longlong)&param_2[5]._padding_ + 4), iVar3 != 0))
    {
      *(int *)((longlong)&param_1[5]._padding_ + 4) = iVar3;
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

// Clear @ 14c2328a0

void __thiscall ds_proto::RaidPartyInfo::Clear(RaidPartyInfo *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (0 < *(int *)&(this->_impl_).members_.field_0x8) {
    google::protobuf::internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).members_);
  }
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    puVar2 = (undefined8 *)
             ((ulonglong)(this->_impl_).party_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar2[2] = 0;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
  }
  if ((uVar1 & 0xfe) != 0) {
    (this->_impl_).raid_party_uid_ = 0;
    (this->_impl_).dungeon_id_ = 0;
    (this->_impl_).is_password_ = false;
    (this->_impl_).is_public_ = false;
    *(undefined2 *)&(this->_impl_).field_0x36 = 0;
    (this->_impl_).leader_uid_ = 0;
    (this->_impl_).member_count_ = 0;
    (this->_impl_).state_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c232920

ulong64 __thiscall ds_proto::RaidPartyInfo::ByteSizeLong(RaidPartyInfo *this)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  uint uVar7;
  int iVar8;
  RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *pRVar9;
  ulonglong uVar10;
  
  uVar5 = *(ulonglong *)&(this->_impl_).members_;
  pRVar9 = &(this->_impl_).members_;
  uVar1 = *(uint *)&(this->_impl_).members_.field_0x8;
  uVar10 = (ulonglong)uVar1;
  if ((uVar5 & 1) != 0) {
    pRVar9 = (RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *)(uVar5 + 7);
  }
  puVar3 = (undefined8 *)&pRVar9->field_0x0;
  for (; pRVar9 != (RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *)(puVar3 + (int)uVar1);
      pRVar9 = (RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *)&pRVar9->field_0x8) {
    uVar4 = RaidPartyMemberInfo::ByteSizeLong(*(RaidPartyMemberInfo **)pRVar9);
    uVar7 = (uint)uVar4 | 1;
    if (__isa_available < 5) {
      iVar8 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      iVar8 = 0x1f - iVar8;
    }
    else {
      iVar8 = LZCOUNT(uVar7);
    }
    uVar10 = uVar10 + (iVar8 * -9 + 0x160U >> 6) + uVar4;
  }
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((char)uVar1 != '\0') {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).party_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), lVar2 != 0)) {
      uVar7 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar8 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar8 = 0x1f - iVar8;
      }
      else {
        iVar8 = LZCOUNT(uVar7);
      }
      uVar10 = uVar10 + 1 + (ulonglong)(iVar8 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 2) != 0) && (uVar5 = (this->_impl_).raid_party_uid_, uVar5 != 0)) {
      uVar5 = uVar5 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar2;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar5);
      }
      uVar10 = uVar10 + (iVar8 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 4) != 0) && (iVar8 = (this->_impl_).dungeon_id_, iVar8 != 0)) {
      uVar5 = (longlong)iVar8 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar2;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar5);
      }
      uVar10 = uVar10 + (iVar8 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 8) != 0) && ((this->_impl_).is_password_ != false)) {
      uVar10 = uVar10 + 2;
    }
    if (((uVar1 & 0x10) != 0) && ((this->_impl_).is_public_ != false)) {
      uVar10 = uVar10 + 2;
    }
    if (((uVar1 & 0x20) != 0) && (uVar5 = (this->_impl_).leader_uid_, uVar5 != 0)) {
      uVar5 = uVar5 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar2;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar5);
      }
      uVar10 = uVar10 + (iVar8 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 0x40) != 0) && (iVar8 = (this->_impl_).member_count_, iVar8 != 0)) {
      uVar5 = (longlong)iVar8 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar2;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar5);
      }
      uVar10 = uVar10 + (iVar8 * -9 + 0x2c0U >> 6);
    }
    if (((char)uVar1 < '\0') && (iVar8 = (this->_impl_).state_, iVar8 != 0)) {
      uVar5 = (longlong)iVar8 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar2;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar5);
      }
      uVar10 = uVar10 + (iVar8 * -9 + 0x2c0U >> 6);
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar10,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c232b80

uchar * __thiscall
ds_proto::RaidPartyInfo::_InternalSerialize
          (RaidPartyInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uchar *puVar6;
  char *pcVar7;
  MessageLite *pMVar8;
  char *pcVar9;
  uint uVar10;
  basic_string_view<char,std::char_traits<char>_> local_38;
  
  uVar10 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar5 = (this->_impl_).raid_party_uid_, lVar5 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar5,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar3 = (this->_impl_).dungeon_id_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar3,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar9 = (char *)((ulonglong)(this->_impl_).party_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar9 + 0x10);
    if (*(longlong *)(pcVar9 + 0x10) != 0) {
      pcVar7 = pcVar9;
      if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
        pcVar7 = *(char **)pcVar9;
      }
      local_38._Mysize = 0x21;
      local_38._Mydata = "ds_proto.RaidPartyInfo.party_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar7,(int)*(longlong *)(pcVar9 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
        pcVar9 = *(char **)pcVar9;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar9;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,3,&local_38,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) && ((this->_impl_).is_password_ != false))
  {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar2 = (this->_impl_).is_password_;
    *param_1 = ' ';
    param_1[1] = bVar2 != false;
    param_1 = param_1 + 2;
  }
  uVar4 = *(uint *)&(this->_impl_).members_.field_0x8;
  if (uVar4 != 0) {
    do {
      pMVar8 = *(MessageLite **)&(this->_impl_).members_;
      if (((ulonglong)pMVar8 & 1) != 0) {
        pMVar8 = *(MessageLite **)((longlong)&pMVar8->_padding_ + (longlong)(int)uVar10 * 8 + 7);
      }
      param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                          (7,pMVar8,*(int *)((longlong)&pMVar8[1]._padding_ + 4),param_1,param_2);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar4);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (lVar5 = (this->_impl_).leader_uid_, lVar5 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<9>
                        (param_2,lVar5,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) && ((this->_impl_).is_public_ != false)
     ) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar2 = (this->_impl_).is_public_;
    *param_1 = 'P';
    param_1[1] = bVar2 != false;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x40) != 0) &&
     (iVar3 = (this->_impl_).member_count_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<11>
                        (param_2,iVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x80) != 0) &&
     (iVar3 = (this->_impl_).state_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<12>
                        (param_2,iVar3,param_1);
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar6 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar6;
}

// GetClassData @ 14c232dc0

ClassData * __thiscall ds_proto::RaidPartyInfo::GetClassData(RaidPartyInfo *this)

{
  return (ClassData *)&RaidPartyInfo_class_data_;
}

// PlacementNew_ @ 14c232de0

void * __cdecl ds_proto::RaidPartyInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7RaidPartyInfo_ds_proto__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x30) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(Arena **)((longlong)param_2 + 0x28) = param_3;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  return param_2;
}

// RaidCharInfo @ 14c232e20

RaidCharInfo * __thiscall ds_proto::RaidCharInfo::RaidCharInfo(RaidCharInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RaidCharInfo_ds_proto__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).char_id_ = 0;
  (this->_impl_).char_level_ = 0;
  (this->_impl_).char_ascend_ = 0;
  return this;
}

// RaidCharInfo @ 14c232e50

RaidCharInfo * __thiscall
ds_proto::RaidCharInfo::RaidCharInfo(RaidCharInfo *this,Arena *param_1,RaidCharInfo *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RaidCharInfo_ds_proto__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).char_id_ = (param_2->_impl_).char_id_;
  (this->_impl_).char_level_ = (param_2->_impl_).char_level_;
  (this->_impl_).char_ascend_ = (param_2->_impl_).char_ascend_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// RaidNoticeInfo @ 14c232ec0

RaidNoticeInfo * __thiscall
ds_proto::RaidNoticeInfo::RaidNoticeInfo(RaidNoticeInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RaidNoticeInfo_ds_proto__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).server_index_ = 0;
  return this;
}

// RaidNoticeInfo @ 14c232ef0

RaidNoticeInfo * __thiscall
ds_proto::RaidNoticeInfo::RaidNoticeInfo
          (RaidNoticeInfo *this,Arena *param_1,RaidNoticeInfo *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RaidNoticeInfo_ds_proto__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).server_index_ = (param_2->_impl_).server_index_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// RaidPartyInfo @ 14c232f50

RaidPartyInfo * __thiscall
ds_proto::RaidPartyInfo::RaidPartyInfo(RaidPartyInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RaidPartyInfo_ds_proto__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->_impl_).members_ = 0;
  *(undefined8 *)&(this->_impl_).members_.field_0x8 = 0;
  (this->_impl_).party_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  *(Arena **)&(this->_impl_).members_.field_0x10 = param_1;
  (this->_impl_).raid_party_uid_ = 0;
  (this->_impl_).dungeon_id_ = 0;
  (this->_impl_).is_password_ = false;
  (this->_impl_).is_public_ = false;
  *(undefined2 *)&(this->_impl_).field_0x36 = 0;
  (this->_impl_).leader_uid_ = 0;
  (this->_impl_).member_count_ = 0;
  (this->_impl_).state_ = 0;
  return this;
}

// RaidPartyInfo @ 14c232f90

RaidPartyInfo * __thiscall
ds_proto::RaidPartyInfo::RaidPartyInfo(RaidPartyInfo *this,Arena *param_1,RaidPartyInfo *param_2)

{
  RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *this_00;
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  TaggedStringPtr TVar6;
  void *pvVar7;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RaidPartyInfo_ds_proto__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(this->_impl_).members_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  *(Arena **)&(this->_impl_).members_.field_0x10 = param_1;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).members_.field_0x8 = 0;
  if (*(int *)&(param_2->_impl_).members_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this_00,(RepeatedPtrFieldBase *)&(param_2->_impl_).members_,
               google::protobuf::Arena::CopyConstruct<ds_proto::RaidPartyMemberInfo>);
  }
  pvVar7 = (param_2->_impl_).party_name_.tagged_ptr_.ptr_;
  if (((ulonglong)pvVar7 & 3) != 0) {
    TVar6 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&(param_2->_impl_).party_name_.tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar7 = *TVar6.ptr_;
  }
  (this->_impl_).party_name_.tagged_ptr_.ptr_ = pvVar7;
  iVar1 = (param_2->_impl_).dungeon_id_;
  bVar2 = (param_2->_impl_).is_password_;
  bVar3 = (param_2->_impl_).is_public_;
  uVar4 = *(undefined2 *)&(param_2->_impl_).field_0x36;
  (this->_impl_).raid_party_uid_ = (param_2->_impl_).raid_party_uid_;
  (this->_impl_).dungeon_id_ = iVar1;
  (this->_impl_).is_password_ = bVar2;
  (this->_impl_).is_public_ = bVar3;
  *(undefined2 *)&(this->_impl_).field_0x36 = uVar4;
  iVar1 = (param_2->_impl_).member_count_;
  iVar5 = (param_2->_impl_).state_;
  (this->_impl_).leader_uid_ = (param_2->_impl_).leader_uid_;
  (this->_impl_).member_count_ = iVar1;
  (this->_impl_).state_ = iVar5;
  return this;
}

// RaidPartyInvitedInfo @ 14c233050

RaidPartyInvitedInfo * __thiscall
ds_proto::RaidPartyInvitedInfo::RaidPartyInvitedInfo(RaidPartyInvitedInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RaidPartyInvitedInfo_ds_proto__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).party_id_ = 0;
  (this->_impl_).end_time_ = 0.0;
  return this;
}

// RaidPartyInvitedInfo @ 14c233080

RaidPartyInvitedInfo * __thiscall
ds_proto::RaidPartyInvitedInfo::RaidPartyInvitedInfo
          (RaidPartyInvitedInfo *this,Arena *param_1,RaidPartyInvitedInfo *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RaidPartyInvitedInfo_ds_proto__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).party_id_ = (param_2->_impl_).party_id_;
  (this->_impl_).end_time_ = (param_2->_impl_).end_time_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// RaidPartyMemberInfo @ 14c2330e0

RaidPartyMemberInfo * __thiscall
ds_proto::RaidPartyMemberInfo::RaidPartyMemberInfo(RaidPartyMemberInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RaidPartyMemberInfo_ds_proto__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).nick_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).char_info_ = (RaidCharInfo *)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).slot_index_ = 0;
  (this->_impl_).member_state_ = 0;
  return this;
}

// RaidPartyMemberInfo @ 14c233120

RaidPartyMemberInfo * __thiscall
ds_proto::RaidPartyMemberInfo::RaidPartyMemberInfo
          (RaidPartyMemberInfo *this,Arena *param_1,RaidPartyMemberInfo *param_2)

{
  ArenaStringPtr *this_00;
  uint uVar1;
  int iVar2;
  TaggedStringPtr TVar3;
  void *pvVar4;
  RaidCharInfo *pRVar5;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RaidPartyMemberInfo_ds_proto__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).nick_name_;
  pRVar5 = (RaidCharInfo *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar4 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  (this->_impl_).nick_name_.tagged_ptr_.ptr_ = pvVar4;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pRVar5 = google::protobuf::Arena::CopyConstruct<ds_proto::RaidCharInfo>
                       (param_1,(param_2->_impl_).char_info_);
  }
  (this->_impl_).char_info_ = pRVar5;
  uVar1 = (param_2->_impl_).slot_index_;
  iVar2 = (param_2->_impl_).member_state_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).slot_index_ = uVar1;
  (this->_impl_).member_state_ = iVar2;
  return this;
}

// RaidPartySimpleInfo @ 14c2331d0

RaidPartySimpleInfo * __thiscall
ds_proto::RaidPartySimpleInfo::RaidPartySimpleInfo(RaidPartySimpleInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RaidPartySimpleInfo_ds_proto__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).party_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).leader_nick_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).raid_party_uid_ = 0;
  (this->_impl_).dungeon_id_ = 0;
  (this->_impl_).is_password_ = false;
  (this->_impl_).is_public_ = false;
  *(undefined2 *)&(this->_impl_).field_0x26 = 0;
  (this->_impl_).leader_uid_ = 0;
  (this->_impl_).member_count_ = 0;
  return this;
}

// RaidPartySimpleInfo @ 14c233210

RaidPartySimpleInfo * __thiscall
ds_proto::RaidPartySimpleInfo::RaidPartySimpleInfo
          (RaidPartySimpleInfo *this,Arena *param_1,RaidPartySimpleInfo *param_2)

{
  ArenaStringPtr *pAVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined2 uVar5;
  TaggedStringPtr TVar6;
  void *pvVar7;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RaidPartySimpleInfo_ds_proto__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).party_name_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar7 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar7 & 3) != 0) {
    TVar6 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar7 = *TVar6.ptr_;
  }
  pAVar1 = &(param_2->_impl_).leader_nick_name_;
  (this->_impl_).party_name_.tagged_ptr_.ptr_ = pvVar7;
  pvVar7 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar7 & 3) != 0) {
    TVar6 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar7 = *TVar6.ptr_;
  }
  (this->_impl_).leader_nick_name_.tagged_ptr_.ptr_ = pvVar7;
  iVar2 = (param_2->_impl_).dungeon_id_;
  bVar3 = (param_2->_impl_).is_password_;
  bVar4 = (param_2->_impl_).is_public_;
  uVar5 = *(undefined2 *)&(param_2->_impl_).field_0x26;
  (this->_impl_).raid_party_uid_ = (param_2->_impl_).raid_party_uid_;
  (this->_impl_).dungeon_id_ = iVar2;
  (this->_impl_).is_password_ = bVar3;
  (this->_impl_).is_public_ = bVar4;
  *(undefined2 *)&(this->_impl_).field_0x26 = uVar5;
  (this->_impl_).leader_uid_ = (param_2->_impl_).leader_uid_;
  (this->_impl_).member_count_ = (param_2->_impl_).member_count_;
  return this;
}

// ~RepeatedPtrField<ds_proto::RaidPartyMemberInfo> @ 14c2332d0

void __thiscall
google::protobuf::RepeatedPtrField<ds_proto::RaidPartyMemberInfo>::
~RepeatedPtrField<ds_proto::RaidPartyMemberInfo>
          (RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *this)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *pRVar4;
  
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
    pRVar4 = (RepeatedPtrField<ds_proto::RaidPartyMemberInfo> *)(*(longlong *)this + 7);
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

// ~RaidCharInfo @ 14c2332f0

void __thiscall ds_proto::RaidCharInfo::~RaidCharInfo(RaidCharInfo *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7RaidCharInfo_ds_proto__6B_;
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

// ~RaidNoticeInfo @ 14c233310

void __thiscall ds_proto::RaidNoticeInfo::~RaidNoticeInfo(RaidNoticeInfo *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7RaidNoticeInfo_ds_proto__6B_;
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

// ~RaidPartyInfo @ 14c233330

void __thiscall ds_proto::RaidPartyInfo::~RaidPartyInfo(RaidPartyInfo *this)

{
  this->_padding_ = (longlong)&___7RaidPartyInfo_ds_proto__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).party_name_);
  if (*(longlong *)&(this->_impl_).members_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).members_);
    return;
  }
  return;
}

// ~RaidPartyInvitedInfo @ 14c233380

void __thiscall ds_proto::RaidPartyInvitedInfo::~RaidPartyInvitedInfo(RaidPartyInvitedInfo *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7RaidPartyInvitedInfo_ds_proto__6B_;
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

// ~RaidPartyMemberInfo @ 14c2333a0

void __thiscall ds_proto::RaidPartyMemberInfo::~RaidPartyMemberInfo(RaidPartyMemberInfo *this)

{
  RaidCharInfo *pRVar1;
  
  this->_padding_ = (longlong)&___7RaidPartyMemberInfo_ds_proto__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nick_name_);
  pRVar1 = (this->_impl_).char_info_;
  if (pRVar1 != (RaidCharInfo *)0x0) {
    pRVar1->_padding_ = (longlong)&___7RaidCharInfo_ds_proto__6B_;
    if ((pRVar1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::
      DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&pRVar1->_padding_);
    }
    ::operator_delete(pRVar1,0x28);
    return;
  }
  return;
}

// ~RaidPartySimpleInfo @ 14c233410

void __thiscall ds_proto::RaidPartySimpleInfo::~RaidPartySimpleInfo(RaidPartySimpleInfo *this)

{
  this->_padding_ = (longlong)&___7RaidPartySimpleInfo_ds_proto__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).party_name_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).leader_nick_name_);
  return;
}

// CopyFrom @ 14c233450

void __thiscall ds_proto::RaidCharInfo::CopyFrom(RaidCharInfo *this,RaidCharInfo *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 7) != 0) {
      if (((uVar1 & 1) != 0) && (iVar2 = (param_1->_impl_).char_id_, iVar2 != 0)) {
        (this->_impl_).char_id_ = iVar2;
      }
      if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).char_level_, iVar2 != 0)) {
        (this->_impl_).char_level_ = iVar2;
      }
      if (((uVar1 & 4) != 0) && (iVar2 = (param_1->_impl_).char_ascend_, iVar2 != 0)) {
        (this->_impl_).char_ascend_ = iVar2;
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

// CopyFrom @ 14c2334d0

void __thiscall ds_proto::RaidNoticeInfo::CopyFrom(RaidNoticeInfo *this,RaidNoticeInfo *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 3) != 0) {
      if (((uVar1 & 1) != 0) && (lVar3 = (param_1->_impl_).player_uid_, lVar3 != 0)) {
        (this->_impl_).player_uid_ = lVar3;
      }
      if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).server_index_, iVar2 != 0)) {
        (this->_impl_).server_index_ = iVar2;
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

// CopyFrom @ 14c233540

void __thiscall ds_proto::RaidPartyInfo::CopyFrom(RaidPartyInfo *this,RaidPartyInfo *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c233580

void __thiscall
ds_proto::RaidPartyInvitedInfo::CopyFrom(RaidPartyInvitedInfo *this,RaidPartyInvitedInfo *param_1)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_1 != this) {
    Clear(this);
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar2 & 3) != 0) {
      if (((uVar2 & 1) != 0) && (lVar3 = (param_1->_impl_).party_id_, lVar3 != 0)) {
        (this->_impl_).party_id_ = lVar3;
      }
      if (((uVar2 & 2) != 0) && (dVar1 = (param_1->_impl_).end_time_, dVar1 != 0.0)) {
        (this->_impl_).end_time_ = dVar1;
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

// CopyFrom @ 14c233600

void __thiscall
ds_proto::RaidPartyMemberInfo::CopyFrom(RaidPartyMemberInfo *this,RaidPartyMemberInfo *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c233640

void __thiscall
ds_proto::RaidPartySimpleInfo::CopyFrom(RaidPartySimpleInfo *this,RaidPartySimpleInfo *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c233680

Metadata * __thiscall
ds_proto::RaidCharInfo::GetMetadata(RaidCharInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&RaidCharInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c2336c0

Metadata * __thiscall
ds_proto::RaidNoticeInfo::GetMetadata(RaidNoticeInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&RaidNoticeInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c233700

Metadata * __thiscall
ds_proto::RaidPartyInfo::GetMetadata(RaidPartyInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&RaidPartyInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c233740

Metadata * __thiscall
ds_proto::RaidPartyInvitedInfo::GetMetadata
          (RaidPartyInvitedInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&RaidPartyInvitedInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c233780

Metadata * __thiscall
ds_proto::RaidPartyMemberInfo::GetMetadata
          (RaidPartyMemberInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&RaidPartyMemberInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c2337c0

Metadata * __thiscall
ds_proto::RaidPartySimpleInfo::GetMetadata
          (RaidPartySimpleInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&RaidPartySimpleInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c233800

void __thiscall ds_proto::RaidCharInfo::InternalSwap(RaidCharInfo *this,RaidCharInfo *param_1)

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
            (&(this->_impl_).char_id_,&this->field_0x24,&(param_1->_impl_).char_id_);
  return;
}

// InternalSwap @ 14c233840

void __thiscall ds_proto::RaidNoticeInfo::InternalSwap(RaidNoticeInfo *this,RaidNoticeInfo *param_1)

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
            (&(this->_impl_).player_uid_,&(this->_impl_).field_0x14,&(param_1->_impl_).player_uid_);
  return;
}

// InternalSwap @ 14c233880

void __thiscall ds_proto::RaidPartyInfo::InternalSwap(RaidPartyInfo *this,RaidPartyInfo *param_1)

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
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).members_,(char *)&(param_1->_impl_).members_);
  pvVar3 = (param_1->_impl_).party_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).party_name_.tagged_ptr_.ptr_ = (this->_impl_).party_name_.tagged_ptr_.ptr_;
  (this->_impl_).party_name_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).raid_party_uid_,this + 1,&(param_1->_impl_).raid_party_uid_);
  return;
}

// InternalSwap @ 14c2338f0

void __thiscall
ds_proto::RaidPartyInvitedInfo::InternalSwap
          (RaidPartyInvitedInfo *this,RaidPartyInvitedInfo *param_1)

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
            ((char *)&(this->_impl_).party_id_,(char *)&(param_1->_impl_).party_id_);
  return;
}

// InternalSwap @ 14c233930

void __thiscall
ds_proto::RaidPartyMemberInfo::InternalSwap(RaidPartyMemberInfo *this,RaidPartyMemberInfo *param_1)

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
  pvVar3 = (param_1->_impl_).nick_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).nick_name_.tagged_ptr_.ptr_ = (this->_impl_).nick_name_.tagged_ptr_.ptr_;
  (this->_impl_).nick_name_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).char_info_,this + 1,&(param_1->_impl_).char_info_);
  return;
}

// InternalSwap @ 14c233980

void __thiscall
ds_proto::RaidPartySimpleInfo::InternalSwap(RaidPartySimpleInfo *this,RaidPartySimpleInfo *param_1)

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
  pvVar3 = (param_1->_impl_).party_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).party_name_.tagged_ptr_.ptr_ = (this->_impl_).party_name_.tagged_ptr_.ptr_;
  (this->_impl_).party_name_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).leader_nick_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).leader_nick_name_.tagged_ptr_.ptr_ =
       (this->_impl_).leader_nick_name_.tagged_ptr_.ptr_;
  (this->_impl_).leader_nick_name_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).raid_party_uid_,&(this->_impl_).field_0x34,
             &(param_1->_impl_).raid_party_uid_);
  return;
}

// MergeFrom @ 14c2339e0

void __thiscall ds_proto::RaidCharInfo::MergeFrom(RaidCharInfo *this,RaidCharInfo *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 7) != 0) {
    if (((uVar1 & 1) != 0) && (iVar2 = (param_1->_impl_).char_id_, iVar2 != 0)) {
      (this->_impl_).char_id_ = iVar2;
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).char_level_, iVar2 != 0)) {
      (this->_impl_).char_level_ = iVar2;
    }
    if (((uVar1 & 4) != 0) && (iVar2 = (param_1->_impl_).char_ascend_, iVar2 != 0)) {
      (this->_impl_).char_ascend_ = iVar2;
    }
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar1;
  if ((param_1->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_RaidCharInfo_default_instance_'' @ 150443c50

void __cdecl ds_proto::_dynamic_atexit_destructor_for___RaidCharInfo_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_RaidNoticeInfo_default_instance_'' @ 150443c60

void __cdecl ds_proto::_dynamic_atexit_destructor_for___RaidNoticeInfo_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_RaidPartyInfo_default_instance_'' @ 150443c70

void __cdecl ds_proto::_dynamic_atexit_destructor_for___RaidPartyInfo_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_RaidPartyInvitedInfo_default_instance_'' @ 150443c80

void __cdecl
ds_proto::_dynamic_atexit_destructor_for___RaidPartyInvitedInfo_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_RaidPartyMemberInfo_default_instance_'' @ 150443c90

void __cdecl
ds_proto::_dynamic_atexit_destructor_for___RaidPartyMemberInfo_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_RaidPartySimpleInfo_default_instance_'' @ 150443ca0

void __cdecl
ds_proto::_dynamic_atexit_destructor_for___RaidPartySimpleInfo_default_instance___(void)

{
  return;
}


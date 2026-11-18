// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 135

// `dynamic_initializer_for_'_ChatBuff_default_instance_'' @ 14128f9d0

void __cdecl chat_link::_dynamic_initializer_for___ChatBuff_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ChatBuff_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ChatEmote_default_instance_'' @ 14128f9f0

void __cdecl chat_link::_dynamic_initializer_for___ChatEmote_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ChatEmote_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ChatGroup_default_instance_'' @ 14128fa10

void __cdecl chat_link::_dynamic_initializer_for___ChatGroup_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ChatGroup_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ChatLink_default_instance_'' @ 14128fa30

void __cdecl chat_link::_dynamic_initializer_for___ChatLink_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ChatLink_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ChatLocation_default_instance_'' @ 14128fa50

void __cdecl chat_link::_dynamic_initializer_for___ChatLocation_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ChatLocation_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ChatParty_default_instance_'' @ 14128fa70

void __cdecl chat_link::_dynamic_initializer_for___ChatParty_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ChatParty_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ChatPlayer_default_instance_'' @ 14128fa90

void __cdecl chat_link::_dynamic_initializer_for___ChatPlayer_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ChatPlayer_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14128fab0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_chat_5flink_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c0f4110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl chat_link::ChatPlayer::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  if ((uVar1 & 0xf) != 0) {
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
    if (((uVar1 & 2) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
    }
    if (((uVar1 & 4) != 0) && (iVar2 = (int)param_2[2]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 & 8) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[2]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[2]._internal_metadata_.ptr_ + 4) = iVar2;
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

// Clear @ 14c0f4290

void __thiscall chat_link::ChatPlayer::Clear(ChatPlayer *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 1) != 0) {
    puVar2 = (undefined8 *)
             ((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar2[2] = 0;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
  }
  if ((uVar3 & 0xe) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).game_server_index_ = 0;
    (this->_impl_).world_id_ = 0;
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

// ByteSizeLong @ 14c0f42e0

ulong64 __thiscall chat_link::ChatPlayer::ByteSizeLong(ChatPlayer *this)

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
                 (((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10
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
      _Var6 = (ulonglong)(iVar5 * -9 + 0x160U >> 6) + 1 + lVar2;
    }
    if (((uVar1 & 2) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 4) != 0) && (iVar5 = (this->_impl_).game_server_index_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
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

// _InternalSerialize @ 14c0f43b0

uchar * __thiscall
chat_link::ChatPlayer::_InternalSerialize
          (ChatPlayer *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  longlong lVar3;
  uchar *puVar4;
  char *pcVar5;
  Impl_ *pIVar6;
  char *pcVar7;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar5 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar5 = *(char **)pcVar7;
      }
      local_28._Mysize = 0x1d;
      local_28._Mydata = "chat_link.ChatPlayer.nickname";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar5,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,1,&local_28,param_1);
    }
  }
  pIVar6 = &this->_impl_;
  if ((((pIVar6->_has_bits_).has_bits_[0] & 2) != 0) &&
     (lVar3 = (this->_impl_).player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar3,param_1);
  }
  if ((((pIVar6->_has_bits_).has_bits_[0] & 4) != 0) &&
     (iVar2 = (this->_impl_).game_server_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  if ((((pIVar6->_has_bits_).has_bits_[0] & 8) != 0) &&
     (iVar2 = (this->_impl_).world_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar2,param_1);
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar4 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar4;
}

// GetClassData @ 14c0f4500

ClassData * __thiscall chat_link::ChatPlayer::GetClassData(ChatPlayer *this)

{
  return (ClassData *)&ChatPlayer_class_data_;
}

// PlacementNew_ @ 14c0f4520

void * __cdecl chat_link::ChatPlayer::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ChatPlayer_chat_link__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0f4550

void * __thiscall chat_link::ChatPlayer::_scalar_deleting_destructor_(ChatPlayer *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ChatPlayer_chat_link__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// MergeImpl @ 14c0f45b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl chat_link::ChatParty::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
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
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
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
    if (((uVar1 & 2) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
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

// Clear @ 14c0f4730

void __thiscall chat_link::ChatParty::Clear(ChatParty *this)

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
  if ((uVar3 & 0xe) != 0) {
    (this->_impl_).party_id_ = 0;
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

// ByteSizeLong @ 14c0f4780

ulong64 __thiscall chat_link::ChatParty::ByteSizeLong(ChatParty *this)

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
    if (((uVar1 & 4) != 0) && (lVar2 = (this->_impl_).sender_uid_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 8) != 0) && (iVar5 = (this->_impl_).sender_level_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c0f4860

uchar * __thiscall
chat_link::ChatParty::_InternalSerialize
          (ChatParty *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  longlong lVar3;
  uchar *puVar4;
  char *pcVar5;
  char *pcVar6;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar3 = (this->_impl_).party_id_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (lVar3 = (this->_impl_).sender_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (iVar2 = (this->_impl_).sender_level_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar6 = (char *)((ulonglong)(this->_impl_).sender_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar6 + 0x10);
    if (*(longlong *)(pcVar6 + 0x10) != 0) {
      pcVar5 = pcVar6;
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar5 = *(char **)pcVar6;
      }
      local_18._Mysize = 0x1f;
      local_18._Mydata = "chat_link.ChatParty.sender_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar5,(int)*(longlong *)(pcVar6 + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar6 = *(char **)pcVar6;
      }
      local_18._Mysize = *puVar1;
      local_18._Mydata = pcVar6;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,4,&local_18,param_1);
    }
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar4 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar4;
}

// GetClassData @ 14c0f49b0

ClassData * __thiscall chat_link::ChatParty::GetClassData(ChatParty *this)

{
  return (ClassData *)&ChatParty_class_data_;
}

// PlacementNew_ @ 14c0f49d0

void * __cdecl chat_link::ChatParty::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ChatParty_chat_link__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0f4a10

void * __thiscall chat_link::ChatParty::_scalar_deleting_destructor_(ChatParty *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ChatParty_chat_link__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).sender_name_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// MergeImpl @ 14c0f4a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl chat_link::ChatGroup::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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

// Clear @ 14c0f4bb0

void __thiscall chat_link::ChatGroup::Clear(ChatGroup *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    puVar2 = (undefined8 *)
             ((ulonglong)(this->_impl_).group_id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
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

// ByteSizeLong @ 14c0f4bf0

ulong64 __thiscall chat_link::ChatGroup::ByteSizeLong(ChatGroup *this)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar1 = *(longlong *)
               (((ulonglong)(this->_impl_).group_id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
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

// _InternalSerialize @ 14c0f4c60

uchar * __thiscall
chat_link::ChatGroup::_InternalSerialize
          (ChatGroup *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  uchar *puVar2;
  char *pcVar3;
  char *pcVar4;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).group_id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_18._Mysize = 0x1c;
      local_18._Mydata = "chat_link.ChatGroup.group_id";
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

// GetClassData @ 14c0f4d60

ClassData * __thiscall chat_link::ChatGroup::GetClassData(ChatGroup *this)

{
  return (ClassData *)&ChatGroup_class_data_;
}

// PlacementNew_ @ 14c0f4d80

void * __cdecl chat_link::ChatGroup::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ChatGroup_chat_link__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0f4db0

void * __thiscall chat_link::ChatGroup::_scalar_deleting_destructor_(ChatGroup *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ChatGroup_chat_link__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).group_id_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c0f4e10

void __cdecl chat_link::ChatEmote::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)param_2[1]._padding_;
  if (((uVar1 & 1) != 0) && (iVar2 = (int)param_2[1]._internal_metadata_.ptr_, iVar2 != 0)) {
    *(int *)&param_1[1]._internal_metadata_.ptr_ = iVar2;
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

// Clear @ 14c0f4e50

void __thiscall chat_link::ChatEmote::Clear(ChatEmote *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  (this->_impl_).emote_id_ = 0;
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

// ByteSizeLong @ 14c0f4e70

ulong64 __thiscall chat_link::ChatEmote::ByteSizeLong(ChatEmote *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar2 = (this->_impl_).emote_id_, iVar2 != 0)) {
    uVar3 = (longlong)iVar2 | 1;
    if (__isa_available < 5) {
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar2 = 0x3f - (int)lVar1;
    }
    else {
      iVar2 = (int)LZCOUNT(uVar3);
    }
    _Var4 = (__uint64)(iVar2 * -9 + 0x2c0U >> 6);
  }
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c0f4ed0

uchar * __thiscall
chat_link::ChatEmote::_InternalSerialize
          (ChatEmote *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar1 = (this->_impl_).emote_id_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
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

// GetClassData @ 14c0f4f40

ClassData * __thiscall chat_link::ChatEmote::GetClassData(ChatEmote *this)

{
  return (ClassData *)&ChatEmote_class_data_;
}

// PlacementNew_ @ 14c0f4f60

void * __cdecl chat_link::ChatEmote::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ChatEmote_chat_link__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0f4f90

void * __thiscall chat_link::ChatEmote::_scalar_deleting_destructor_(ChatEmote *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ChatEmote_chat_link__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c0f4fe0

void __cdecl chat_link::ChatBuff::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)param_2[1]._padding_;
  if (((uVar1 & 1) != 0) && (iVar2 = (int)param_2[1]._internal_metadata_.ptr_, iVar2 != 0)) {
    *(int *)&param_1[1]._internal_metadata_.ptr_ = iVar2;
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

// Clear @ 14c0f5020

void __thiscall chat_link::ChatBuff::Clear(ChatBuff *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  (this->_impl_).buff_id_ = 0;
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

// ByteSizeLong @ 14c0f5040

ulong64 __thiscall chat_link::ChatBuff::ByteSizeLong(ChatBuff *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar2 = (this->_impl_).buff_id_, iVar2 != 0)) {
    uVar3 = (longlong)iVar2 | 1;
    if (__isa_available < 5) {
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar2 = 0x3f - (int)lVar1;
    }
    else {
      iVar2 = (int)LZCOUNT(uVar3);
    }
    _Var4 = (__uint64)(iVar2 * -9 + 0x2c0U >> 6);
  }
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c0f50a0

uchar * __thiscall
chat_link::ChatBuff::_InternalSerialize(ChatBuff *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar1 = (this->_impl_).buff_id_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
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

// GetClassData @ 14c0f5110

ClassData * __thiscall chat_link::ChatBuff::GetClassData(ChatBuff *this)

{
  return (ClassData *)&ChatBuff_class_data_;
}

// PlacementNew_ @ 14c0f5130

void * __cdecl chat_link::ChatBuff::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ChatBuff_chat_link__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0f5160

void * __thiscall chat_link::ChatBuff::_scalar_deleting_destructor_(ChatBuff *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ChatBuff_chat_link__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c0f51b0

void __cdecl chat_link::ChatLocation::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  void *pvVar5;
  Arena *pAVar6;
  Arena *pAVar7;
  
  pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar4 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar6 = pAVar7;
  if (bVar4 != 0) {
    pAVar6 = (Arena *)(pAVar7->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = param_2[1]._internal_metadata_.ptr_;
      *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
      if (bVar4 != 0) {
        pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
      }
      google::protobuf::internal::ArenaStringPtr::Set<>
                ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                 (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (uVar3 & 0xfffffffffffffffc),pAVar7);
    }
    if ((uVar1 & 2) != 0) {
      if ((MessageLite *)param_1[2]._padding_ == (MessageLite *)0x0) {
        pvVar5 = google::protobuf::Arena::CopyConstruct<Vector>
                           (pAVar6,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar5;
      }
      else {
        Vector::MergeImpl((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
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
  if (((param_2->_internal_metadata_).ptr_ & 1) == 0) {
    return;
  }
  google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
            (&param_1->_internal_metadata_,
             (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8));
  return;
}

// Clear @ 14c0f52b0

void __thiscall chat_link::ChatLocation::Clear(ChatLocation *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)((ulonglong)(this->_impl_).memo_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
      ;
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      Vector::Clear((this->_impl_).position_);
    }
  }
  if ((uVar1 & 0x1c) != 0) {
    (this->_impl_).island_id_ = 0;
    (this->_impl_).indoor_group_id_ = 0;
    (this->_impl_).floor_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c0f5330

ulong64 __thiscall chat_link::ChatLocation::ByteSizeLong(ChatLocation *this)

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
    if ((uVar1 & 1) != 0) {
      lVar2 = *(longlong *)
               (((ulonglong)(this->_impl_).memo_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10);
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
      uVar4 = Vector::ByteSizeLong((this->_impl_).position_);
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
    if (((uVar1 & 4) != 0) && (iVar5 = (this->_impl_).island_id_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 8) != 0) && (iVar5 = (this->_impl_).indoor_group_id_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 0x10) != 0) && (iVar5 = (this->_impl_).floor_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c0f5460

uchar * __thiscall
chat_link::ChatLocation::_InternalSerialize
          (ChatLocation *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  char *pcVar5;
  char *pcVar6;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar2 = (this->_impl_).island_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (iVar2 = (this->_impl_).indoor_group_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (iVar2 = (this->_impl_).floor_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (4,(MessageLite *)(this->_impl_).position_,
                         (int)(((this->_impl_).position_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((uVar3 & 1) != 0) {
    pcVar6 = (char *)((ulonglong)(this->_impl_).memo_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar6 + 0x10);
    pcVar5 = pcVar6;
    if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
      pcVar5 = *(char **)pcVar6;
    }
    local_18._Mydata = "chat_link.ChatLocation.memo";
    local_18._Mysize = 0x1b;
    google::protobuf::internal::WireFormatLite::VerifyUtf8String
              (pcVar5,(int)*puVar1,SERIALIZE,&local_18);
    if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
      pcVar6 = *(char **)pcVar6;
    }
    local_18._Mysize = *puVar1;
    local_18._Mydata = pcVar6;
    param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                        (param_2,5,&local_18,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar4 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar4;
  }
  return param_1;
}

// GetClassData @ 14c0f55d0

ClassData * __thiscall chat_link::ChatLocation::GetClassData(ChatLocation *this)

{
  return (ClassData *)&ChatLocation_class_data_;
}

// PlacementNew_ @ 14c0f55f0

void * __cdecl chat_link::ChatLocation::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ChatLocation_chat_link__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0f5630

void * __thiscall
chat_link::ChatLocation::_scalar_deleting_destructor_(ChatLocation *this,uint param_1)

{
  Vector *this_00;
  
  this->_padding_ = (longlong)&___7ChatLocation_chat_link__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).memo_);
  this_00 = (this->_impl_).position_;
  if (this_00 != (Vector *)0x0) {
    Vector::~Vector(this_00);
    ::operator_delete(this_00,0x30);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// MergeImpl @ 14c0f56b0

void __cdecl chat_link::ChatLink::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  InternalMetadata *this;
  int iVar1;
  int iVar2;
  MessageLite *pMVar3;
  Arena *pAVar4;
  
  this = &param_1->_internal_metadata_;
  pAVar4 = (Arena *)(this->ptr_ & 0xfffffffffffffffe);
  if ((this->ptr_ & 1) != 0) {
    pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
  }
  iVar1 = *(int *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4);
  if (iVar1 != 0) {
    iVar2 = *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        clear_items((ChatLink *)param_1);
      }
      *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4) = iVar1;
    }
    switch(iVar1) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      if (iVar2 == iVar1) {
        google::protobuf::Message::MergeFrom
                  ((Message *)param_1[1]._padding_,(Message *)param_2[1]._padding_);
      }
      else {
        pMVar3 = google::protobuf::MessageLite::CopyConstruct
                           (pAVar4,(MessageLite *)param_2[1]._padding_);
        param_1[1]._padding_ = (longlong)pMVar3;
      }
    }
  }
  if (((param_2->_internal_metadata_).ptr_ & 1) == 0) {
    return;
  }
  google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
            (this,(UnknownFieldSet *)
                  (((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8));
  return;
}

// Clear @ 14c0f57b0

void __thiscall chat_link::ChatLink::Clear(ChatLink *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).items_.player_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if ((this->_padding_ & 1) == 0) {
    return;
  }
  google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
            ((InternalMetadata *)&this->_padding_);
  return;
}

// ByteSizeLong @ 14c0f5860

ulong64 __thiscall chat_link::ChatLink::ByteSizeLong(ChatLink *this)

{
  ulong64 uVar1;
  __uint64 _Var2;
  
  _Var2 = 0;
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    uVar1 = google::protobuf::internal::WireFormatLite::MessageSize<google::protobuf::Message>
                      ((this->_impl_).items_.player_);
    _Var2 = uVar1 + 1;
  }
  _Var2 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var2,&(this->_impl_)._cached_size_);
  return _Var2;
}

// _InternalSerialize @ 14c0f58e0

uchar * __thiscall
chat_link::ChatLink::_InternalSerialize(ChatLink *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  uchar *puVar2;
  int iVar3;
  
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).items_.player_);
    iVar3 = 1;
    break;
  case 2:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).items_.player_);
    iVar3 = 2;
    break;
  case 3:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).items_.player_);
    iVar3 = 3;
    break;
  case 4:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).items_.player_);
    iVar3 = 4;
    break;
  case 5:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).items_.player_);
    iVar3 = 5;
    break;
  case 6:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).items_.player_);
    iVar3 = 6;
    break;
  case 7:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).items_.player_);
    iVar3 = 7;
    break;
  case 8:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).items_.player_);
    iVar3 = 8;
    break;
  case 9:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).items_.player_);
    iVar3 = 9;
    break;
  case 10:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).items_.player_);
    iVar3 = 10;
    break;
  default:
    goto switchD_14c0f591a_default;
  }
  param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                      (iVar3,(MessageLite *)(this->_impl_).items_.player_,iVar1,param_1,param_2);
switchD_14c0f591a_default:
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar2;
}

// GetClassData @ 14c0f5a50

ClassData * __thiscall chat_link::ChatLink::GetClassData(ChatLink *this)

{
  return (ClassData *)&ChatLink_class_data_;
}

// PlacementNew_ @ 14c0f5a70

void * __cdecl chat_link::ChatLink::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ChatLink_chat_link__6B_;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0f5a90

void * __thiscall chat_link::ChatLink::_scalar_deleting_destructor_(ChatLink *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ChatLink_chat_link__6B_;
  SharedDtor((MessageLite *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// CopyConstruct<Vector> @ 14c0f5ae0

void * __cdecl google::protobuf::Arena::CopyConstruct<Vector>(Arena *param_1,void *param_2)

{
  Vector *pVVar1;
  
  if (param_1 == (Arena *)0x0) {
    pVVar1 = ::operator_new(0x30);
  }
  else {
    pVVar1 = Allocate(param_1,0x30);
  }
  pVVar1 = Vector::Vector(pVVar1,param_1,param_2);
  return pVVar1;
}

// GetOwnedMessage<chat_link::ChatBuff> @ 14c0f5b30

ChatBuff * __cdecl
google::protobuf::internal::GetOwnedMessage<chat_link::ChatBuff>
          (Arena *param_1,ChatBuff *param_2,Arena *param_3)

{
  ChatBuff *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (ChatBuff *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (ChatBuff *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<chat_link::ChatEmote> @ 14c0f5b40

ChatEmote * __cdecl
google::protobuf::internal::GetOwnedMessage<chat_link::ChatEmote>
          (Arena *param_1,ChatEmote *param_2,Arena *param_3)

{
  ChatEmote *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (ChatEmote *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (ChatEmote *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<chat_link::ChatGroup> @ 14c0f5b50

ChatGroup * __cdecl
google::protobuf::internal::GetOwnedMessage<chat_link::ChatGroup>
          (Arena *param_1,ChatGroup *param_2,Arena *param_3)

{
  ChatGroup *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (ChatGroup *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (ChatGroup *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<chat_link::ChatLocation> @ 14c0f5b60

ChatLocation * __cdecl
google::protobuf::internal::GetOwnedMessage<chat_link::ChatLocation>
          (Arena *param_1,ChatLocation *param_2,Arena *param_3)

{
  ChatLocation *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (ChatLocation *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (ChatLocation *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<chat_link::ChatParty> @ 14c0f5b70

ChatParty * __cdecl
google::protobuf::internal::GetOwnedMessage<chat_link::ChatParty>
          (Arena *param_1,ChatParty *param_2,Arena *param_3)

{
  ChatParty *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (ChatParty *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (ChatParty *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<chat_link::ChatPlayer> @ 14c0f5b80

ChatPlayer * __cdecl
google::protobuf::internal::GetOwnedMessage<chat_link::ChatPlayer>
          (Arena *param_1,ChatPlayer *param_2,Arena *param_3)

{
  ChatPlayer *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (ChatPlayer *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (ChatPlayer *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlItemEquipmentTable> @ 14c0f5b90

SqlItemEquipmentTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlItemEquipmentTable>
          (Arena *param_1,SqlItemEquipmentTable *param_2,Arena *param_3)

{
  SqlItemEquipmentTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlItemEquipmentTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlItemEquipmentTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlItemStackableTable> @ 14c0f5ba0

SqlItemStackableTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlItemStackableTable>
          (Arena *param_1,SqlItemStackableTable *param_2,Arena *param_3)

{
  SqlItemStackableTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlItemStackableTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlItemStackableTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlPlayerSkillTable> @ 14c0f5bb0

SqlPlayerSkillTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlPlayerSkillTable>
          (Arena *param_1,SqlPlayerSkillTable *param_2,Arena *param_3)

{
  SqlPlayerSkillTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlPlayerSkillTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlPlayerSkillTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlWeaponSkillSlotTable> @ 14c0f5bc0

SqlWeaponSkillSlotTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlWeaponSkillSlotTable>
          (Arena *param_1,SqlWeaponSkillSlotTable *param_2,Arena *param_3)

{
  SqlWeaponSkillSlotTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlWeaponSkillSlotTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlWeaponSkillSlotTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// ChatBuff @ 14c0f5bd0

ChatBuff * __thiscall chat_link::ChatBuff::ChatBuff(ChatBuff *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ChatBuff_chat_link__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).buff_id_ = 0;
  return this;
}

// ChatBuff @ 14c0f5c00

ChatBuff * __thiscall chat_link::ChatBuff::ChatBuff(ChatBuff *this,Arena *param_1,ChatBuff *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ChatBuff_chat_link__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).buff_id_ = (param_2->_impl_).buff_id_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// ChatEmote @ 14c0f5c60

ChatEmote * __thiscall chat_link::ChatEmote::ChatEmote(ChatEmote *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ChatEmote_chat_link__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).emote_id_ = 0;
  return this;
}

// ChatEmote @ 14c0f5c90

ChatEmote * __thiscall
chat_link::ChatEmote::ChatEmote(ChatEmote *this,Arena *param_1,ChatEmote *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ChatEmote_chat_link__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).emote_id_ = (param_2->_impl_).emote_id_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// ChatGroup @ 14c0f5cf0

ChatGroup * __thiscall chat_link::ChatGroup::ChatGroup(ChatGroup *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ChatGroup_chat_link__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).group_id_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  return this;
}

// ChatGroup @ 14c0f5d20

ChatGroup * __thiscall
chat_link::ChatGroup::ChatGroup(ChatGroup *this,Arena *param_1,ChatGroup *param_2)

{
  ArenaStringPtr *this_00;
  void *pvVar1;
  TaggedStringPtr TVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ChatGroup_chat_link__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).group_id_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar1 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar1 & 3) == 0) {
    (this->_impl_).group_id_.tagged_ptr_.ptr_ = pvVar1;
    return this;
  }
  TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                    (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
  (this->_impl_).group_id_.tagged_ptr_.ptr_ = *TVar2.ptr_;
  return this;
}

// ChatLink @ 14c0f5dc0

ChatLink * __thiscall chat_link::ChatLink::ChatLink(ChatLink *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ChatLink_chat_link__6B_;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = 0;
  return this;
}

// ChatLink @ 14c0f5de0

ChatLink * __thiscall chat_link::ChatLink::ChatLink(ChatLink *this,Arena *param_1,ChatLink *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ChatLink_chat_link__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  uVar1 = (param_2->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = uVar1;
  switch(uVar1) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    pMVar2 = google::protobuf::MessageLite::CopyConstruct
                       (param_1,(MessageLite *)(param_2->_impl_).items_.player_);
    (this->_impl_).items_.player_ = (Message *)pMVar2;
  }
  return this;
}

// ChatLocation @ 14c0f5ea0

ChatLocation * __thiscall chat_link::ChatLocation::ChatLocation(ChatLocation *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ChatLocation_chat_link__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).memo_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).position_ = (Vector *)0x0;
  (this->_impl_).island_id_ = 0;
  (this->_impl_).indoor_group_id_ = 0;
  (this->_impl_).floor_ = 0;
  return this;
}

// ChatLocation @ 14c0f5ee0

ChatLocation * __thiscall
chat_link::ChatLocation::ChatLocation(ChatLocation *this,Arena *param_1,ChatLocation *param_2)

{
  ArenaStringPtr *this_00;
  int iVar1;
  TaggedStringPtr TVar2;
  void *pvVar3;
  Vector *pVVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ChatLocation_chat_link__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).memo_;
  pVVar4 = (Vector *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar3 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  (this->_impl_).memo_.tagged_ptr_.ptr_ = pvVar3;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pVVar4 = google::protobuf::Arena::CopyConstruct<Vector>(param_1,(param_2->_impl_).position_);
  }
  (this->_impl_).position_ = pVVar4;
  iVar1 = (param_2->_impl_).indoor_group_id_;
  (this->_impl_).island_id_ = (param_2->_impl_).island_id_;
  (this->_impl_).indoor_group_id_ = iVar1;
  (this->_impl_).floor_ = (param_2->_impl_).floor_;
  return this;
}

// ChatParty @ 14c0f5fa0

ChatParty * __thiscall chat_link::ChatParty::ChatParty(ChatParty *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ChatParty_chat_link__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).sender_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).party_id_ = 0;
  (this->_impl_).sender_uid_ = 0;
  (this->_impl_).sender_level_ = 0;
  return this;
}

// ChatParty @ 14c0f5fe0

ChatParty * __thiscall
chat_link::ChatParty::ChatParty(ChatParty *this,Arena *param_1,ChatParty *param_2)

{
  ArenaStringPtr *this_00;
  long64 lVar1;
  TaggedStringPtr TVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ChatParty_chat_link__6B_;
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
  lVar1 = (param_2->_impl_).sender_uid_;
  (this->_impl_).party_id_ = (param_2->_impl_).party_id_;
  (this->_impl_).sender_uid_ = lVar1;
  (this->_impl_).sender_level_ = (param_2->_impl_).sender_level_;
  return this;
}

// ChatPlayer @ 14c0f6080

ChatPlayer * __thiscall chat_link::ChatPlayer::ChatPlayer(ChatPlayer *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ChatPlayer_chat_link__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).game_server_index_ = 0;
  (this->_impl_).world_id_ = 0;
  return this;
}

// ChatPlayer @ 14c0f60b0

ChatPlayer * __thiscall
chat_link::ChatPlayer::ChatPlayer(ChatPlayer *this,Arena *param_1,ChatPlayer *param_2)

{
  ArenaStringPtr *this_00;
  int iVar1;
  int iVar2;
  TaggedStringPtr TVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ChatPlayer_chat_link__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).nickname_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar4 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  (this->_impl_).nickname_.tagged_ptr_.ptr_ = pvVar4;
  iVar1 = (param_2->_impl_).game_server_index_;
  iVar2 = (param_2->_impl_).world_id_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).game_server_index_ = iVar1;
  (this->_impl_).world_id_ = iVar2;
  return this;
}

// ~ChatBuff @ 14c0f6140

void __thiscall chat_link::ChatBuff::~ChatBuff(ChatBuff *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7ChatBuff_chat_link__6B_;
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

// ~ChatEmote @ 14c0f6160

void __thiscall chat_link::ChatEmote::~ChatEmote(ChatEmote *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7ChatEmote_chat_link__6B_;
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

// ~ChatGroup @ 14c0f6180

void __thiscall chat_link::ChatGroup::~ChatGroup(ChatGroup *this)

{
  this->_padding_ = (longlong)&___7ChatGroup_chat_link__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).group_id_);
  return;
}

// ~ChatLink @ 14c0f61c0

void __thiscall chat_link::ChatLink::~ChatLink(ChatLink *this)

{
  this->_padding_ = (longlong)&___7ChatLink_chat_link__6B_;
  SharedDtor((MessageLite *)this);
  return;
}

// ~ChatLocation @ 14c0f61e0

void __thiscall chat_link::ChatLocation::~ChatLocation(ChatLocation *this)

{
  Vector *this_00;
  
  this->_padding_ = (longlong)&___7ChatLocation_chat_link__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).memo_);
  this_00 = (this->_impl_).position_;
  if (this_00 != (Vector *)0x0) {
    Vector::~Vector(this_00);
    ::operator_delete(this_00,0x30);
    return;
  }
  return;
}

// ~ChatParty @ 14c0f6240

void __thiscall chat_link::ChatParty::~ChatParty(ChatParty *this)

{
  this->_padding_ = (longlong)&___7ChatParty_chat_link__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).sender_name_);
  return;
}

// ~ChatPlayer @ 14c0f6280

void __thiscall chat_link::ChatPlayer::~ChatPlayer(ChatPlayer *this)

{
  this->_padding_ = (longlong)&___7ChatPlayer_chat_link__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  return;
}

// `scalar_deleting_destructor' @ 14c0f62c0

void * __thiscall Vector::_scalar_deleting_destructor_(Vector *this,uint param_1)

{
  ~Vector(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// CopyFrom @ 14c0f6300

void __thiscall chat_link::ChatBuff::CopyFrom(ChatBuff *this,ChatBuff *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar1 & 1) != 0) && (iVar2 = (param_1->_impl_).buff_id_, iVar2 != 0)) {
      (this->_impl_).buff_id_ = iVar2;
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

// CopyFrom @ 14c0f6360

void __thiscall chat_link::ChatEmote::CopyFrom(ChatEmote *this,ChatEmote *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar1 & 1) != 0) && (iVar2 = (param_1->_impl_).emote_id_, iVar2 != 0)) {
      (this->_impl_).emote_id_ = iVar2;
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

// CopyFrom @ 14c0f63c0

void __thiscall chat_link::ChatGroup::CopyFrom(ChatGroup *this,ChatGroup *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c0f6400

void __thiscall chat_link::ChatLink::CopyFrom(ChatLink *this,ChatLink *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c0f6440

void __thiscall chat_link::ChatLocation::CopyFrom(ChatLocation *this,ChatLocation *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c0f6480

void __thiscall chat_link::ChatParty::CopyFrom(ChatParty *this,ChatParty *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c0f64c0

void __thiscall chat_link::ChatPlayer::CopyFrom(ChatPlayer *this,ChatPlayer *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c0f6500

Metadata * __thiscall
chat_link::ChatBuff::GetMetadata(ChatBuff *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&ChatBuff_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0f6540

Metadata * __thiscall
chat_link::ChatEmote::GetMetadata(ChatEmote *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&ChatEmote_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0f6580

Metadata * __thiscall
chat_link::ChatGroup::GetMetadata(ChatGroup *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&ChatGroup_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0f65c0

Metadata * __thiscall
chat_link::ChatLink::GetMetadata(ChatLink *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&ChatLink_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0f6600

Metadata * __thiscall
chat_link::ChatLocation::GetMetadata(ChatLocation *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&ChatLocation_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0f6640

Metadata * __thiscall
chat_link::ChatParty::GetMetadata(ChatParty *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&ChatParty_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0f6680

Metadata * __thiscall
chat_link::ChatPlayer::GetMetadata(ChatPlayer *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&ChatPlayer_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c0f66c0

void __thiscall chat_link::ChatBuff::InternalSwap(ChatBuff *this,ChatBuff *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar3;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  iVar2 = (this->_impl_).buff_id_;
  (this->_impl_).buff_id_ = (param_1->_impl_).buff_id_;
  (param_1->_impl_).buff_id_ = iVar2;
  return;
}

// InternalSwap @ 14c0f6700

void __thiscall chat_link::ChatEmote::InternalSwap(ChatEmote *this,ChatEmote *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar3;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  iVar2 = (this->_impl_).emote_id_;
  (this->_impl_).emote_id_ = (param_1->_impl_).emote_id_;
  (param_1->_impl_).emote_id_ = iVar2;
  return;
}

// InternalSwap @ 14c0f6740

void __thiscall chat_link::ChatGroup::InternalSwap(ChatGroup *this,ChatGroup *param_1)

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
  pvVar3 = (param_1->_impl_).group_id_.tagged_ptr_.ptr_;
  (param_1->_impl_).group_id_.tagged_ptr_.ptr_ = (this->_impl_).group_id_.tagged_ptr_.ptr_;
  (this->_impl_).group_id_.tagged_ptr_.ptr_ = pvVar3;
  return;
}

// InternalSwap @ 14c0f6780

void __thiscall chat_link::ChatLink::InternalSwap(ChatLink *this,ChatLink *param_1)

{
  uint uVar1;
  longlong lVar2;
  ItemsUnion IVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  IVar3 = (this->_impl_).items_;
  (this->_impl_).items_ = (param_1->_impl_).items_;
  (param_1->_impl_).items_ = IVar3;
  uVar1 = (this->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = (param_1->_impl_)._oneof_case_[0];
  (param_1->_impl_)._oneof_case_[0] = uVar1;
  return;
}

// InternalSwap @ 14c0f67c0

void __thiscall chat_link::ChatLocation::InternalSwap(ChatLocation *this,ChatLocation *param_1)

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
  pvVar3 = (param_1->_impl_).memo_.tagged_ptr_.ptr_;
  (param_1->_impl_).memo_.tagged_ptr_.ptr_ = (this->_impl_).memo_.tagged_ptr_.ptr_;
  (this->_impl_).memo_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).position_,&(this->_impl_).field_0x24,&(param_1->_impl_).position_);
  return;
}

// InternalSwap @ 14c0f6810

void __thiscall chat_link::ChatParty::InternalSwap(ChatParty *this,ChatParty *param_1)

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
            (&(this->_impl_).party_id_,&(this->_impl_).field_0x24,&(param_1->_impl_).party_id_);
  return;
}

// InternalSwap @ 14c0f6860

void __thiscall chat_link::ChatPlayer::InternalSwap(ChatPlayer *this,ChatPlayer *param_1)

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
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).player_uid_,(char *)&(param_1->_impl_).player_uid_);
  return;
}

// SharedDtor @ 14c0f68b0

void __cdecl chat_link::ChatLink::SharedDtor(MessageLite *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>(&param_1->_internal_metadata_);
  }
  iVar1 = *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4);
  if (iVar1 != 0) {
    switch(iVar1) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      puVar2 = (undefined8 *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
      if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
        puVar2 = (undefined8 *)*puVar2;
      }
      if ((puVar2 == (undefined8 *)0x0) &&
         (puVar2 = (undefined8 *)param_1[1]._padding_, puVar2 != (undefined8 *)0x0)) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(undefined4 *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4) = 0;
  }
  return;
}

// clear_character_skill @ 14c0f6960

void __thiscall chat_link::ChatLink::clear_character_skill(ChatLink *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 5) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).items_.player_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_equipment_item @ 14c0f69b0

void __thiscall chat_link::ChatLink::clear_equipment_item(ChatLink *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 3) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).items_.player_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_items @ 14c0f6a00

void __thiscall chat_link::ChatLink::clear_items(ChatLink *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).items_.player_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// clear_player_skill @ 14c0f6a90

void __thiscall chat_link::ChatLink::clear_player_skill(ChatLink *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 4) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).items_.player_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_position @ 14c0f6ae0

void __thiscall chat_link::ChatLocation::clear_position(ChatLocation *this)

{
  Vector *this_00;
  
  this_00 = (this->_impl_).position_;
  if (this_00 != (Vector *)0x0) {
    Vector::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// clear_stackable_item @ 14c0f6b10

void __thiscall chat_link::ChatLink::clear_stackable_item(ChatLink *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 2) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).items_.player_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// set_allocated_buff @ 14c0f6b60

void __thiscall chat_link::ChatLink::set_allocated_buff(ChatLink *this,ChatBuff *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (pMVar1 = (this->_impl_).items_.player_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (ChatBuff *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (ChatBuff *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 6;
    (this->_impl_).items_.player_ = (Message *)param_1;
  }
  return;
}

// set_allocated_character_skill @ 14c0f6c50

void __thiscall
chat_link::ChatLink::set_allocated_character_skill(ChatLink *this,SqlWeaponSkillSlotTable *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (pMVar1 = (this->_impl_).items_.player_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlWeaponSkillSlotTable *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (SqlWeaponSkillSlotTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 5;
    (this->_impl_).items_.player_ = (Message *)param_1;
  }
  return;
}

// set_allocated_emote @ 14c0f6d40

void __thiscall chat_link::ChatLink::set_allocated_emote(ChatLink *this,ChatEmote *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (pMVar1 = (this->_impl_).items_.player_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (ChatEmote *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (ChatEmote *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 10;
    (this->_impl_).items_.player_ = (Message *)param_1;
  }
  return;
}

// set_allocated_equipment_item @ 14c0f6e30

void __thiscall
chat_link::ChatLink::set_allocated_equipment_item(ChatLink *this,SqlItemEquipmentTable *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (pMVar1 = (this->_impl_).items_.player_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlItemEquipmentTable *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (SqlItemEquipmentTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 3;
    (this->_impl_).items_.player_ = (Message *)param_1;
  }
  return;
}

// set_allocated_group @ 14c0f6f20

void __thiscall chat_link::ChatLink::set_allocated_group(ChatLink *this,ChatGroup *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (pMVar1 = (this->_impl_).items_.player_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (ChatGroup *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (ChatGroup *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 7;
    (this->_impl_).items_.player_ = (Message *)param_1;
  }
  return;
}

// set_allocated_location @ 14c0f7010

void __thiscall chat_link::ChatLink::set_allocated_location(ChatLink *this,ChatLocation *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (pMVar1 = (this->_impl_).items_.player_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (ChatLocation *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (ChatLocation *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 9;
    (this->_impl_).items_.player_ = (Message *)param_1;
  }
  return;
}

// set_allocated_party @ 14c0f7100

void __thiscall chat_link::ChatLink::set_allocated_party(ChatLink *this,ChatParty *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (pMVar1 = (this->_impl_).items_.player_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (ChatParty *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (ChatParty *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 8;
    (this->_impl_).items_.player_ = (Message *)param_1;
  }
  return;
}

// set_allocated_player @ 14c0f71f0

void __thiscall chat_link::ChatLink::set_allocated_player(ChatLink *this,ChatPlayer *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (pMVar1 = (this->_impl_).items_.player_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (ChatPlayer *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (ChatPlayer *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 1;
    (this->_impl_).items_.player_ = (Message *)param_1;
  }
  return;
}

// set_allocated_player_skill @ 14c0f72e0

void __thiscall
chat_link::ChatLink::set_allocated_player_skill(ChatLink *this,SqlPlayerSkillTable *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (pMVar1 = (this->_impl_).items_.player_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlPlayerSkillTable *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (SqlPlayerSkillTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 4;
    (this->_impl_).items_.player_ = (Message *)param_1;
  }
  return;
}

// set_allocated_stackable_item @ 14c0f73d0

void __thiscall
chat_link::ChatLink::set_allocated_stackable_item(ChatLink *this,SqlItemStackableTable *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (pMVar1 = (this->_impl_).items_.player_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SqlItemStackableTable *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (SqlItemStackableTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 2;
    (this->_impl_).items_.player_ = (Message *)param_1;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_ChatBuff_default_instance_'' @ 150440a80

void __cdecl chat_link::_dynamic_atexit_destructor_for___ChatBuff_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ChatEmote_default_instance_'' @ 150440a90

void __cdecl chat_link::_dynamic_atexit_destructor_for___ChatEmote_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ChatGroup_default_instance_'' @ 150440aa0

void __cdecl chat_link::_dynamic_atexit_destructor_for___ChatGroup_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ChatLink_default_instance_'' @ 150440ab0

void __cdecl chat_link::_dynamic_atexit_destructor_for___ChatLink_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ChatLocation_default_instance_'' @ 150440ac0

void __cdecl chat_link::_dynamic_atexit_destructor_for___ChatLocation_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ChatParty_default_instance_'' @ 150440ad0

void __cdecl chat_link::_dynamic_atexit_destructor_for___ChatParty_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ChatPlayer_default_instance_'' @ 150440ae0

void __cdecl chat_link::_dynamic_atexit_destructor_for___ChatPlayer_default_instance___(void)

{
  return;
}


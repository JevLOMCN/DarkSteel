// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 36

// `dynamic_initializer_for_'_CreateNicknameServiceBusRequest_default_instance_'' @ 14128e8a0

void __cdecl _dynamic_initializer_for___CreateNicknameServiceBusRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___CreateNicknameServiceBusRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_CreateNicknameServiceBusResponse_default_instance_'' @ 14128e8c0

void __cdecl _dynamic_initializer_for___CreateNicknameServiceBusResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___CreateNicknameServiceBusResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14128e8e0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_api_5fplayer_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c0d7bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl CreateNicknameServiceBusResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  if ((char)uVar1 != '\0') {
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
    if ((uVar1 & 2) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._padding_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 2),
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
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 2),pbVar5,pAVar7);
      }
    }
    if ((uVar1 & 4) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[2]._internal_metadata_,
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
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[2]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if (((uVar1 & 8) != 0) && (iVar2 = (int)param_2[3]._padding_, iVar2 != 0)) {
      *(int *)&param_1[3]._padding_ = iVar2;
    }
    if (((uVar1 & 0x10) != 0) && (iVar2 = *(int *)((longlong)&param_2[3]._padding_ + 4), iVar2 != 0)
       ) {
      *(int *)((longlong)&param_1[3]._padding_ + 4) = iVar2;
    }
    if (((uVar1 & 0x20) != 0) && (lVar3 = param_2[3]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[3]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar1 & 0x40) != 0) && (iVar2 = (int)param_2[4]._padding_, iVar2 != 0)) {
      *(int *)&param_1[4]._padding_ = iVar2;
    }
    if (((char)uVar1 < '\0') && (iVar2 = *(int *)((longlong)&param_2[4]._padding_ + 4), iVar2 != 0))
    {
      *(int *)((longlong)&param_1[4]._padding_ + 4) = iVar2;
    }
  }
  if ((uVar1 & 0x300) != 0) {
    if (((uVar1 >> 8 & 1) != 0) && (lVar3 = param_2[4]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[4]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar1 >> 9 & 1) != 0) && (iVar2 = (int)param_2[5]._padding_, iVar2 != 0)) {
      *(int *)&param_1[5]._padding_ = iVar2;
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

// Clear @ 14c0d7f30

void __thiscall CreateNicknameServiceBusResponse::Clear(CreateNicknameServiceBusResponse *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 7) != 0) {
    if ((uVar3 & 1) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).queue_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar3 & 2) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar3 & 4) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).custom_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
  }
  if ((uVar3 & 0xf8) != 0) {
    (this->_impl_).error_code_ = 0;
    (this->_impl_).game_server_index_ = 0;
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).weapon_ = 0;
    (this->_impl_).region_index_ = 0;
  }
  if ((uVar3 & 0x300) != 0) {
    (this->_impl_).player_entity_ = 0;
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

// ByteSizeLong @ 14c0d7fe0

ulong64 __thiscall
CreateNicknameServiceBusResponse::ByteSizeLong(CreateNicknameServiceBusResponse *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  int iVar6;
  __uint64 _Var7;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var7 = 0;
  if ((char)uVar1 != '\0') {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).queue_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), lVar2 != 0)) {
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
    if (((uVar1 & 2) != 0) &&
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
      _Var7 = _Var7 + 1 + (ulonglong)(iVar6 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 4) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).custom_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
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
      _Var7 = _Var7 + 1 + (ulonglong)(iVar6 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 8) != 0) && (iVar6 = (this->_impl_).error_code_, iVar6 != 0)) {
      uVar4 = (longlong)iVar6 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar6 = 0x3f - (int)lVar2;
      }
      else {
        iVar6 = (int)LZCOUNT(uVar4);
      }
      _Var7 = _Var7 + 1 + (ulonglong)(iVar6 * -9 + 0x280U >> 6);
    }
    if (((uVar1 & 0x10) != 0) && (iVar6 = (this->_impl_).game_server_index_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 & 0x20) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 & 0x40) != 0) && (iVar6 = (this->_impl_).weapon_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((char)uVar1 < '\0') && (iVar6 = (this->_impl_).region_index_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32Size(iVar6);
      _Var7 = _Var7 + uVar5 + 2;
    }
  }
  if ((uVar1 & 0x300) != 0) {
    if (((uVar1 >> 8 & 1) != 0) && (uVar5 = (this->_impl_).player_entity_, uVar5 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::UInt64Size(uVar5);
      _Var7 = _Var7 + uVar5 + 2;
    }
    if (((uVar1 >> 9 & 1) != 0) && (iVar6 = (this->_impl_).world_id_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32Size(iVar6);
      _Var7 = _Var7 + uVar5 + 2;
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c0d81e0

uchar * __thiscall
CreateNicknameServiceBusResponse::_InternalSerialize
          (CreateNicknameServiceBusResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uchar *puVar5;
  byte bVar6;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  Impl_ *pIVar10;
  char *pcVar11;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) && ((this->_impl_).error_code_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (ulonglong)(this->_impl_).error_code_;
    *param_1 = 8;
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
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar11 = (char *)((ulonglong)(this->_impl_).queue_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar11 + 0x10);
    if (*(longlong *)(pcVar11 + 0x10) != 0) {
      pcVar8 = pcVar11;
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar8 = *(char **)pcVar11;
      }
      local_28._Mysize = 0x2b;
      local_28._Mydata = "CreateNicknameServiceBusResponse.queue_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar8,(int)*(longlong *)(pcVar11 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar11;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,10,&local_28,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (lVar3 = (this->_impl_).player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<11>
                        (param_2,lVar3,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pcVar11 = (char *)((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar11 + 0x10);
    if (*(longlong *)(pcVar11 + 0x10) != 0) {
      pcVar8 = pcVar11;
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar8 = *(char **)pcVar11;
      }
      local_28._Mysize = 0x29;
      local_28._Mydata = "CreateNicknameServiceBusResponse.nickname";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar8,(int)*(longlong *)(pcVar11 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar11;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0xc,&local_28,param_1);
    }
  }
  pIVar10 = &this->_impl_;
  if ((((pIVar10->_has_bits_).has_bits_[0] & 0x10) != 0) &&
     (iVar2 = (this->_impl_).game_server_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<13>
                        (param_2,iVar2,param_1);
  }
  if ((((pIVar10->_has_bits_).has_bits_[0] & 0x40) != 0) &&
     (iVar2 = (this->_impl_).weapon_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<14>
                        (param_2,iVar2,param_1);
  }
  if (((pIVar10->_has_bits_).has_bits_[0] & 4) != 0) {
    pcVar11 = (char *)((ulonglong)(this->_impl_).custom_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar11 + 0x10);
    if (*(longlong *)(pcVar11 + 0x10) != 0) {
      pcVar8 = pcVar11;
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar8 = *(char **)pcVar11;
      }
      local_28._Mysize = 0x27;
      local_28._Mydata = "CreateNicknameServiceBusResponse.custom";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar8,(int)*(longlong *)(pcVar11 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar11;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0xf,&local_28,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x80) != 0) && ((this->_impl_).region_index_ != 0))
  {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (ulonglong)(this->_impl_).region_index_;
    uVar7 = 0x88;
    do {
      pbVar9 = param_1;
      bVar6 = (byte)uVar7;
      uVar7 = uVar7 >> 7;
      *pbVar9 = bVar6 | 0x80;
      param_1 = pbVar9 + 1;
    } while (0x7f < uVar7);
    pbVar9[1] = (byte)uVar7;
    pbVar9 = pbVar9 + 2;
    for (; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
      *pbVar9 = (byte)uVar4 | 0x80;
      pbVar9 = pbVar9 + 1;
    }
    *pbVar9 = (byte)uVar4;
    param_1 = pbVar9 + 1;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x200) != 0) && ((this->_impl_).world_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (ulonglong)(this->_impl_).world_id_;
    uVar7 = 0x90;
    do {
      pbVar9 = param_1;
      bVar6 = (byte)uVar7;
      uVar7 = uVar7 >> 7;
      *pbVar9 = bVar6 | 0x80;
      param_1 = pbVar9 + 1;
    } while (0x7f < uVar7);
    pbVar9[1] = (byte)uVar7;
    pbVar9 = pbVar9 + 2;
    for (; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
      *pbVar9 = (byte)uVar4 | 0x80;
      pbVar9 = pbVar9 + 1;
    }
    *pbVar9 = (byte)uVar4;
    param_1 = pbVar9 + 1;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x100) != 0) &&
     ((this->_impl_).player_entity_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (this->_impl_).player_entity_;
    uVar7 = 0x98;
    do {
      pbVar9 = param_1;
      bVar6 = (byte)uVar7;
      uVar7 = uVar7 >> 7;
      *pbVar9 = bVar6 | 0x80;
      param_1 = pbVar9 + 1;
    } while (0x7f < uVar7);
    pbVar9[1] = (byte)uVar7;
    pbVar9 = pbVar9 + 2;
    for (; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
      *pbVar9 = (byte)uVar4 | 0x80;
      pbVar9 = pbVar9 + 1;
    }
    *pbVar9 = (byte)uVar4;
    param_1 = pbVar9 + 1;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar5;
  }
  return param_1;
}

// GetClassData @ 14c0d8600

ClassData * __thiscall
CreateNicknameServiceBusResponse::GetClassData(CreateNicknameServiceBusResponse *this)

{
  return (ClassData *)&CreateNicknameServiceBusResponse_class_data_;
}

// PlacementNew_ @ 14c0d8620

void * __cdecl
CreateNicknameServiceBusResponse::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7CreateNicknameServiceBusResponse__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x20) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x28) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0d8670

void * __thiscall
CreateNicknameServiceBusResponse::_scalar_deleting_destructor_
          (CreateNicknameServiceBusResponse *this,uint param_1)

{
  this->_padding_ = (longlong)&___7CreateNicknameServiceBusResponse__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).queue_name_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).custom_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// MergeImpl @ 14c0d86e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl CreateNicknameServiceBusRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  if ((char)uVar1 != '\0') {
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
    if ((uVar1 & 2) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._padding_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 2),
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
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 2),pbVar5,pAVar7);
      }
    }
    if ((uVar1 & 4) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[2]._internal_metadata_,
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
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[2]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if (((uVar1 & 8) != 0) && (param_2[3]._padding_ != 0)) {
      param_1[3]._padding_ = param_2[3]._padding_;
    }
    if (((uVar1 & 0x10) != 0) && (iVar2 = (int)param_2[3]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[3]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 & 0x20) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[3]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[3]._internal_metadata_.ptr_ + 4) = iVar2;
    }
    if (((uVar1 & 0x40) != 0) && (iVar2 = (int)param_2[4]._padding_, iVar2 != 0)) {
      *(int *)&param_1[4]._padding_ = iVar2;
    }
    if (((char)uVar1 < '\0') && (iVar2 = *(int *)((longlong)&param_2[4]._padding_ + 4), iVar2 != 0))
    {
      *(int *)((longlong)&param_1[4]._padding_ + 4) = iVar2;
    }
  }
  if (((uVar1 >> 8 & 1) != 0) && (lVar3 = param_2[4]._internal_metadata_.ptr_, lVar3 != 0)) {
    param_1[4]._internal_metadata_.ptr_ = lVar3;
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

// Clear @ 14c0d8a40

void __thiscall CreateNicknameServiceBusRequest::Clear(CreateNicknameServiceBusRequest *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 7) != 0) {
    if ((uVar3 & 1) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).queue_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar3 & 2) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar3 & 4) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).custom_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
  }
  if ((uVar3 & 0xf8) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).game_server_index_ = 0;
    (this->_impl_).weapon_ = 0;
    (this->_impl_).region_index_ = 0;
    (this->_impl_).world_id_ = 0;
  }
  (this->_impl_).player_entity_ = 0;
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

// ByteSizeLong @ 14c0d8ae0

ulong64 __thiscall
CreateNicknameServiceBusRequest::ByteSizeLong(CreateNicknameServiceBusRequest *this)

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
  if ((char)uVar1 != '\0') {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).queue_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), lVar2 != 0)) {
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
    if (((uVar1 & 2) != 0) &&
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
      _Var7 = _Var7 + 1 + (ulonglong)(iVar6 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 4) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).custom_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
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
      _Var7 = _Var7 + 1 + (ulonglong)(iVar6 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 8) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar4;
    }
    if (((uVar1 & 0x10) != 0) && (iVar6 = (this->_impl_).game_server_index_, iVar6 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar4;
    }
    if (((uVar1 & 0x20) != 0) && (iVar6 = (this->_impl_).weapon_, iVar6 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar4;
    }
    if (((uVar1 & 0x40) != 0) && (iVar6 = (this->_impl_).region_index_, iVar6 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32Size(iVar6);
      _Var7 = _Var7 + uVar4 + 2;
    }
    if (((char)uVar1 < '\0') && (iVar6 = (this->_impl_).world_id_, iVar6 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32Size(iVar6);
      _Var7 = _Var7 + uVar4 + 2;
    }
  }
  if (((uVar1 >> 8 & 1) != 0) && (uVar5 = (this->_impl_).player_entity_, uVar5 != 0)) {
    uVar5 = uVar5 | 1;
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
    _Var7 = _Var7 + 2 + (ulonglong)(iVar6 * -9 + 0x280U >> 6);
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c0d8cc0

uchar * __thiscall
CreateNicknameServiceBusRequest::_InternalSerialize
          (CreateNicknameServiceBusRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  longlong lVar3;
  uchar *puVar4;
  byte bVar5;
  uint uVar6;
  char *pcVar7;
  ulonglong uVar8;
  byte *pbVar9;
  Impl_ *pIVar10;
  char *pcVar11;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar11 = (char *)((ulonglong)(this->_impl_).queue_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar11 + 0x10);
    if (*(longlong *)(pcVar11 + 0x10) != 0) {
      pcVar7 = pcVar11;
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar7 = *(char **)pcVar11;
      }
      local_28._Mysize = 0x2a;
      local_28._Mydata = "CreateNicknameServiceBusRequest.queue_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar7,(int)*(longlong *)(pcVar11 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar11;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,10,&local_28,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (lVar3 = (this->_impl_).player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<11>
                        (param_2,lVar3,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pcVar11 = (char *)((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar11 + 0x10);
    if (*(longlong *)(pcVar11 + 0x10) != 0) {
      pcVar7 = pcVar11;
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar7 = *(char **)pcVar11;
      }
      local_28._Mysize = 0x28;
      local_28._Mydata = "CreateNicknameServiceBusRequest.nickname";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar7,(int)*(longlong *)(pcVar11 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar11;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0xc,&local_28,param_1);
    }
  }
  pIVar10 = &this->_impl_;
  if ((((pIVar10->_has_bits_).has_bits_[0] & 0x10) != 0) &&
     (iVar2 = (this->_impl_).game_server_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<13>
                        (param_2,iVar2,param_1);
  }
  if ((((pIVar10->_has_bits_).has_bits_[0] & 0x20) != 0) &&
     (iVar2 = (this->_impl_).weapon_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<14>
                        (param_2,iVar2,param_1);
  }
  if (((pIVar10->_has_bits_).has_bits_[0] & 4) != 0) {
    pcVar11 = (char *)((ulonglong)(this->_impl_).custom_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar11 + 0x10);
    if (*(longlong *)(pcVar11 + 0x10) != 0) {
      pcVar7 = pcVar11;
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar7 = *(char **)pcVar11;
      }
      local_28._Mysize = 0x26;
      local_28._Mydata = "CreateNicknameServiceBusRequest.custom";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar7,(int)*(longlong *)(pcVar11 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar11;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0xf,&local_28,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x40) != 0) && ((this->_impl_).region_index_ != 0))
  {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar8 = (ulonglong)(this->_impl_).region_index_;
    uVar6 = 0x88;
    do {
      pbVar9 = param_1;
      bVar5 = (byte)uVar6;
      uVar6 = uVar6 >> 7;
      *pbVar9 = bVar5 | 0x80;
      param_1 = pbVar9 + 1;
    } while (0x7f < uVar6);
    pbVar9[1] = (byte)uVar6;
    pbVar9 = pbVar9 + 2;
    for (; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
      *pbVar9 = (byte)uVar8 | 0x80;
      pbVar9 = pbVar9 + 1;
    }
    *pbVar9 = (byte)uVar8;
    param_1 = pbVar9 + 1;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x80) != 0) && ((this->_impl_).world_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar8 = (ulonglong)(this->_impl_).world_id_;
    uVar6 = 0x90;
    do {
      pbVar9 = param_1;
      bVar5 = (byte)uVar6;
      uVar6 = uVar6 >> 7;
      *pbVar9 = bVar5 | 0x80;
      param_1 = pbVar9 + 1;
    } while (0x7f < uVar6);
    pbVar9[1] = (byte)uVar6;
    pbVar9 = pbVar9 + 2;
    for (; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
      *pbVar9 = (byte)uVar8 | 0x80;
      pbVar9 = pbVar9 + 1;
    }
    *pbVar9 = (byte)uVar8;
    param_1 = pbVar9 + 1;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x100) != 0) &&
     ((this->_impl_).player_entity_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar8 = (this->_impl_).player_entity_;
    uVar6 = 0x98;
    do {
      pbVar9 = param_1;
      bVar5 = (byte)uVar6;
      uVar6 = uVar6 >> 7;
      *pbVar9 = bVar5 | 0x80;
      param_1 = pbVar9 + 1;
    } while (0x7f < uVar6);
    pbVar9[1] = (byte)uVar6;
    pbVar9 = pbVar9 + 2;
    for (; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
      *pbVar9 = (byte)uVar8 | 0x80;
      pbVar9 = pbVar9 + 1;
    }
    *pbVar9 = (byte)uVar8;
    param_1 = pbVar9 + 1;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar4 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar4;
  }
  return param_1;
}

// GetClassData @ 14c0d9090

ClassData * __thiscall
CreateNicknameServiceBusRequest::GetClassData(CreateNicknameServiceBusRequest *this)

{
  return (ClassData *)&CreateNicknameServiceBusRequest_class_data_;
}

// PlacementNew_ @ 14c0d90b0

void * __cdecl
CreateNicknameServiceBusRequest::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7CreateNicknameServiceBusRequest__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x20) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x28) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0d90f0

void * __thiscall
CreateNicknameServiceBusRequest::_scalar_deleting_destructor_
          (CreateNicknameServiceBusRequest *this,uint param_1)

{
  this->_padding_ = (longlong)&___7CreateNicknameServiceBusRequest__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).queue_name_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).custom_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// WriteInt32ToArrayWithField<13> @ 14c0d9160

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<13>
          (EpsCopyOutputStream *param_1,int param_2,uchar *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  if (param_1->end_ <= param_3) {
    param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_1,param_3);
  }
  *param_3 = 0x68;
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

// WriteInt32ToArrayWithField<14> @ 14c0d91c0

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<14>
          (EpsCopyOutputStream *param_1,int param_2,uchar *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  if (param_1->end_ <= param_3) {
    param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_1,param_3);
  }
  *param_3 = 0x70;
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

// WriteInt64ToArrayWithField<11> @ 14c0d9220

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<11>
          (EpsCopyOutputStream *param_1,long64 param_2,uchar *param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  if (param_1->end_ <= param_3) {
    param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_1,param_3);
  }
  *param_3 = 0x58;
  while( true ) {
    pbVar1 = param_3 + 1;
    bVar2 = (byte)param_2;
    if ((ulonglong)param_2 < 0x80) break;
    param_2 = (ulonglong)param_2 >> 7;
    *pbVar1 = bVar2 | 0x80;
    param_3 = pbVar1;
  }
  *pbVar1 = bVar2;
  return param_3 + 2;
}

// CreateNicknameServiceBusRequest @ 14c0d9280

CreateNicknameServiceBusRequest * __thiscall
CreateNicknameServiceBusRequest::CreateNicknameServiceBusRequest
          (CreateNicknameServiceBusRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7CreateNicknameServiceBusRequest__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).queue_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).custom_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).game_server_index_ = 0;
  (this->_impl_).weapon_ = 0;
  (this->_impl_).region_index_ = 0;
  (this->_impl_).world_id_ = 0;
  (this->_impl_).player_entity_ = 0;
  return this;
}

// CreateNicknameServiceBusRequest @ 14c0d92c0

CreateNicknameServiceBusRequest * __thiscall
CreateNicknameServiceBusRequest::CreateNicknameServiceBusRequest
          (CreateNicknameServiceBusRequest *this,Arena *param_1,
          CreateNicknameServiceBusRequest *param_2)

{
  ArenaStringPtr *pAVar1;
  ulong64 uVar2;
  int iVar3;
  int iVar4;
  TaggedStringPtr TVar5;
  void *pvVar6;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7CreateNicknameServiceBusRequest__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).queue_name_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar6 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  pAVar1 = &(param_2->_impl_).nickname_;
  (this->_impl_).queue_name_.tagged_ptr_.ptr_ = pvVar6;
  pvVar6 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  pAVar1 = &(param_2->_impl_).custom_;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ = pvVar6;
  pvVar6 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  (this->_impl_).custom_.tagged_ptr_.ptr_ = pvVar6;
  iVar3 = (param_2->_impl_).game_server_index_;
  iVar4 = (param_2->_impl_).weapon_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).game_server_index_ = iVar3;
  (this->_impl_).weapon_ = iVar4;
  iVar3 = (param_2->_impl_).world_id_;
  uVar2 = (param_2->_impl_).player_entity_;
  (this->_impl_).region_index_ = (param_2->_impl_).region_index_;
  (this->_impl_).world_id_ = iVar3;
  (this->_impl_).player_entity_ = uVar2;
  return this;
}

// CreateNicknameServiceBusResponse @ 14c0d9390

CreateNicknameServiceBusResponse * __thiscall
CreateNicknameServiceBusResponse::CreateNicknameServiceBusResponse
          (CreateNicknameServiceBusResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7CreateNicknameServiceBusResponse__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).queue_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).custom_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).error_code_ = 0;
  (this->_impl_).game_server_index_ = 0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).weapon_ = 0;
  (this->_impl_).region_index_ = 0;
  (this->_impl_).player_entity_ = 0;
  (this->_impl_).world_id_ = 0;
  return this;
}

// CreateNicknameServiceBusResponse @ 14c0d93e0

CreateNicknameServiceBusResponse * __thiscall
CreateNicknameServiceBusResponse::CreateNicknameServiceBusResponse
          (CreateNicknameServiceBusResponse *this,Arena *param_1,
          CreateNicknameServiceBusResponse *param_2)

{
  ArenaStringPtr *pAVar1;
  long64 lVar2;
  ulong64 uVar3;
  int iVar4;
  TaggedStringPtr TVar5;
  void *pvVar6;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7CreateNicknameServiceBusResponse__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).queue_name_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar6 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  pAVar1 = &(param_2->_impl_).nickname_;
  (this->_impl_).queue_name_.tagged_ptr_.ptr_ = pvVar6;
  pvVar6 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  pAVar1 = &(param_2->_impl_).custom_;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ = pvVar6;
  pvVar6 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  (this->_impl_).custom_.tagged_ptr_.ptr_ = pvVar6;
  iVar4 = (param_2->_impl_).game_server_index_;
  lVar2 = (param_2->_impl_).player_uid_;
  (this->_impl_).error_code_ = (param_2->_impl_).error_code_;
  (this->_impl_).game_server_index_ = iVar4;
  (this->_impl_).player_uid_ = lVar2;
  iVar4 = (param_2->_impl_).region_index_;
  uVar3 = (param_2->_impl_).player_entity_;
  (this->_impl_).weapon_ = (param_2->_impl_).weapon_;
  (this->_impl_).region_index_ = iVar4;
  (this->_impl_).player_entity_ = uVar3;
  (this->_impl_).world_id_ = (param_2->_impl_).world_id_;
  return this;
}

// ~CreateNicknameServiceBusRequest @ 14c0d94b0

void __thiscall
CreateNicknameServiceBusRequest::~CreateNicknameServiceBusRequest
          (CreateNicknameServiceBusRequest *this)

{
  this->_padding_ = (longlong)&___7CreateNicknameServiceBusRequest__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).queue_name_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).custom_);
  return;
}

// ~CreateNicknameServiceBusResponse @ 14c0d9500

void __thiscall
CreateNicknameServiceBusResponse::~CreateNicknameServiceBusResponse
          (CreateNicknameServiceBusResponse *this)

{
  this->_padding_ = (longlong)&___7CreateNicknameServiceBusResponse__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).queue_name_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).custom_);
  return;
}

// CopyFrom @ 14c0d9550

void __thiscall
CreateNicknameServiceBusRequest::CopyFrom
          (CreateNicknameServiceBusRequest *this,CreateNicknameServiceBusRequest *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c0d9590

void __thiscall
CreateNicknameServiceBusResponse::CopyFrom
          (CreateNicknameServiceBusResponse *this,CreateNicknameServiceBusResponse *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c0d95d0

Metadata * __thiscall
CreateNicknameServiceBusRequest::GetMetadata
          (CreateNicknameServiceBusRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&CreateNicknameServiceBusRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c0d9610

Metadata * __thiscall
CreateNicknameServiceBusResponse::GetMetadata
          (CreateNicknameServiceBusResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&CreateNicknameServiceBusResponse_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// Int32Size @ 14c0d9650

ulong64 __cdecl google::protobuf::internal::WireFormatLite::Int32Size(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (longlong)param_1 | 1;
  if (4 < __isa_available) {
    return (ulonglong)((int)LZCOUNT(uVar2) * -9 + 0x280U >> 6);
  }
  lVar1 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return (ulonglong)((0x3f - (int)lVar1) * -9 + 0x280U >> 6);
}

// InternalSwap @ 14c0d96a0

void __thiscall
CreateNicknameServiceBusRequest::InternalSwap
          (CreateNicknameServiceBusRequest *this,CreateNicknameServiceBusRequest *param_1)

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
  pvVar3 = (param_1->_impl_).queue_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).queue_name_.tagged_ptr_.ptr_ = (this->_impl_).queue_name_.tagged_ptr_.ptr_;
  (this->_impl_).queue_name_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).nickname_.tagged_ptr_.ptr_;
  (param_1->_impl_).nickname_.tagged_ptr_.ptr_ = (this->_impl_).nickname_.tagged_ptr_.ptr_;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).custom_.tagged_ptr_.ptr_;
  (param_1->_impl_).custom_.tagged_ptr_.ptr_ = (this->_impl_).custom_.tagged_ptr_.ptr_;
  (this->_impl_).custom_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).player_uid_,this + 1,&(param_1->_impl_).player_uid_);
  return;
}

// InternalSwap @ 14c0d9710

void __thiscall
CreateNicknameServiceBusResponse::InternalSwap
          (CreateNicknameServiceBusResponse *this,CreateNicknameServiceBusResponse *param_1)

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
  pvVar3 = (param_1->_impl_).queue_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).queue_name_.tagged_ptr_.ptr_ = (this->_impl_).queue_name_.tagged_ptr_.ptr_;
  (this->_impl_).queue_name_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).nickname_.tagged_ptr_.ptr_;
  (param_1->_impl_).nickname_.tagged_ptr_.ptr_ = (this->_impl_).nickname_.tagged_ptr_.ptr_;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).custom_.tagged_ptr_.ptr_;
  (param_1->_impl_).custom_.tagged_ptr_.ptr_ = (this->_impl_).custom_.tagged_ptr_.ptr_;
  (this->_impl_).custom_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).error_code_,&(this->_impl_).field_0x44,&(param_1->_impl_).error_code_);
  return;
}

// UInt64Size @ 14c0d9780

ulong64 __cdecl google::protobuf::internal::WireFormatLite::UInt64Size(ulong64 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_1 | 1;
  if (4 < __isa_available) {
    return (ulonglong)((int)LZCOUNT(uVar2) * -9 + 0x280U >> 6);
  }
  lVar1 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  return (ulonglong)((0x3f - (int)lVar1) * -9 + 0x280U >> 6);
}

// `dynamic_atexit_destructor_for_'_CreateNicknameServiceBusRequest_default_instance_'' @ 150440620

void __cdecl
_dynamic_atexit_destructor_for___CreateNicknameServiceBusRequest_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_CreateNicknameServiceBusResponse_default_instance_'' @ 150440630

void __cdecl
_dynamic_atexit_destructor_for___CreateNicknameServiceBusResponse_default_instance___(void)

{
  return;
}


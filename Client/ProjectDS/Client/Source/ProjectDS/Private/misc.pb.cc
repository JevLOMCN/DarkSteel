// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 183

// `dynamic_initializer_for_'_MiscBreachDataMessage_default_instance_'' @ 141294050

void __cdecl misc::_dynamic_initializer_for___MiscBreachDataMessage_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___MiscBreachDataMessage_default_instance___);
  return;
}

// `dynamic_initializer_for_'_MiscGameOptionMessage_default_instance_'' @ 141294070

void __cdecl misc::_dynamic_initializer_for___MiscGameOptionMessage_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___MiscGameOptionMessage_default_instance___);
  return;
}

// `dynamic_initializer_for_'_MiscMinimapMarkerMessage_default_instance_'' @ 141294090

void __cdecl misc::_dynamic_initializer_for___MiscMinimapMarkerMessage_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___MiscMinimapMarkerMessage_default_instance___);
  return;
}

// `dynamic_initializer_for_'_MiscPlayerMessage_default_instance_'' @ 1412940b0

void __cdecl misc::_dynamic_initializer_for___MiscPlayerMessage_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___MiscPlayerMessage_default_instance___);
  return;
}

// `dynamic_initializer_for_'_MiscPlayerType_default_instance_'' @ 1412940d0

void __cdecl misc::_dynamic_initializer_for___MiscPlayerType_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___MiscPlayerType_default_instance___);
  return;
}

// `dynamic_initializer_for_'_NicknameData_default_instance_'' @ 1412940f0

void __cdecl misc::_dynamic_initializer_for___NicknameData_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___NicknameData_default_instance___);
  return;
}

// `dynamic_initializer_for_'_NicknameMessage_default_instance_'' @ 141294110

void __cdecl misc::_dynamic_initializer_for___NicknameMessage_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___NicknameMessage_default_instance___);
  return;
}

// `dynamic_initializer_for_'_PkHistoryRequest_default_instance_'' @ 141294130

void __cdecl misc::_dynamic_initializer_for___PkHistoryRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___PkHistoryRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_PlayerList_default_instance_'' @ 141294150

void __cdecl misc::_dynamic_initializer_for___PlayerList_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___PlayerList_default_instance___);
  return;
}

// `dynamic_initializer_for_'_Player_default_instance_'' @ 141294170

void __cdecl misc::_dynamic_initializer_for___Player_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___Player_default_instance___);
  return;
}

// `dynamic_initializer_for_'_PlayersByNameRequest_default_instance_'' @ 141294190

void __cdecl misc::_dynamic_initializer_for___PlayersByNameRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___PlayersByNameRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 1412941b0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_misc_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c1674e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl misc::PlayersByNameRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
      *(int *)&param_1[2]._padding_ = (int)param_2[2]._padding_;
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

// Clear @ 14c167640

void __thiscall misc::PlayersByNameRequest::Clear(PlayersByNameRequest *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    puVar2 = (undefined8 *)
             ((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar2[2] = 0;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
  }
  (this->_impl_).region_index_ = 0;
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

// ByteSizeLong @ 14c167680

ulong64 __thiscall misc::PlayersByNameRequest::ByteSizeLong(PlayersByNameRequest *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  __uint64 _Var6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((uVar1 & 3) != 0) {
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
    if ((uVar1 & 2) != 0) {
      uVar4 = (longlong)(this->_impl_).region_index_ | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar5 = 0x3f - (int)lVar2;
      }
      else {
        iVar5 = (int)LZCOUNT(uVar4);
      }
      _Var6 = _Var6 + (iVar5 * -9 + 0x2c0U >> 6);
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c167730

uchar * __thiscall
misc::PlayersByNameRequest::_InternalSerialize
          (PlayersByNameRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  uchar *puVar2;
  char *pcVar3;
  char *pcVar4;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_28._Mysize = 0x22;
      local_28._Mydata = "misc.PlayersByNameRequest.nickname";
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
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,(this->_impl_).region_index_,param_1);
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar2;
}

// GetClassData @ 14c167840

ClassData * __thiscall misc::PlayersByNameRequest::GetClassData(PlayersByNameRequest *this)

{
  return (ClassData *)&PlayersByNameRequest_class_data_;
}

// PlacementNew_ @ 14c167860

void * __cdecl misc::PlayersByNameRequest::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7PlayersByNameRequest_misc__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c167890

void * __thiscall
misc::PlayersByNameRequest::_scalar_deleting_destructor_(PlayersByNameRequest *this,uint param_1)

{
  this->_padding_ = (longlong)&___7PlayersByNameRequest_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// MergeImpl @ 14c1678f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl misc::NicknameMessage::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  if ((uVar1 & 0x3f) != 0) {
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
    if (((uVar1 & 0x20) != 0) && (iVar2 = (int)param_2[3]._internal_metadata_.ptr_, iVar2 != 0)) {
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

// Clear @ 14c167b60

void __thiscall misc::NicknameMessage::Clear(NicknameMessage *this)

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
               ((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar3 & 2) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).server_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
  }
  if ((uVar3 & 0x3c) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).region_index_ = 0;
    (this->_impl_).world_id_ = 0;
    (this->_impl_).dirty_flag_ = 0;
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

// ByteSizeLong @ 14c167be0

ulong64 __thiscall misc::NicknameMessage::ByteSizeLong(NicknameMessage *this)

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
    if (((uVar1 & 2) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).server_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
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
      _Var6 = _Var6 + 2 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 4) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 8) != 0) && (iVar5 = (this->_impl_).region_index_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 0x10) != 0) && (iVar5 = (this->_impl_).world_id_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 0x20) != 0) && (iVar5 = (this->_impl_).dirty_flag_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::EnumSize(iVar5);
      _Var6 = _Var6 + uVar4 + 1;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c167d20

uchar * __thiscall
misc::NicknameMessage::_InternalSerialize
          (NicknameMessage *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte bVar6;
  char *pcVar7;
  Impl_ *pIVar8;
  char *pcVar9;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar9 = (char *)((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar9 + 0x10);
    if (*(longlong *)(pcVar9 + 0x10) != 0) {
      pcVar7 = pcVar9;
      if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
        pcVar7 = *(char **)pcVar9;
      }
      local_28._Mysize = 0x1d;
      local_28._Mydata = "misc.NicknameMessage.nickname";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar7,(int)*(longlong *)(pcVar9 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
        pcVar9 = *(char **)pcVar9;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar9;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,1,&local_28,param_1);
    }
  }
  pIVar8 = &this->_impl_;
  if ((((pIVar8->_has_bits_).has_bits_[0] & 4) != 0) &&
     (lVar3 = (this->_impl_).player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar3,param_1);
  }
  if ((((pIVar8->_has_bits_).has_bits_[0] & 8) != 0) &&
     (iVar2 = (this->_impl_).region_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  if ((((pIVar8->_has_bits_).has_bits_[0] & 0x10) != 0) &&
     (iVar2 = (this->_impl_).world_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) && ((this->_impl_).dirty_flag_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar5 = (ulonglong)(this->_impl_).dirty_flag_;
    *param_1 = 0x50;
    while( true ) {
      pbVar4 = param_1 + 1;
      bVar6 = (byte)uVar5;
      if (uVar5 < 0x80) break;
      uVar5 = uVar5 >> 7;
      *pbVar4 = bVar6 | 0x80;
      param_1 = pbVar4;
    }
    *pbVar4 = bVar6;
    param_1 = param_1 + 2;
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pcVar9 = (char *)((ulonglong)(this->_impl_).server_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar9 + 0x10);
    if (*(longlong *)(pcVar9 + 0x10) != 0) {
      pcVar7 = pcVar9;
      if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
        pcVar7 = *(char **)pcVar9;
      }
      local_28._Mysize = 0x20;
      local_28._Mydata = "misc.NicknameMessage.server_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar7,(int)*(longlong *)(pcVar9 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
        pcVar9 = *(char **)pcVar9;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar9;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,100,&local_28,param_1);
    }
  }
  if ((this->_padding_ & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                        ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                         param_2);
  }
  return param_1;
}

// GetClassData @ 14c167f40

ClassData * __thiscall misc::NicknameMessage::GetClassData(NicknameMessage *this)

{
  return (ClassData *)&NicknameMessage_class_data_;
}

// PlacementNew_ @ 14c167f60

void * __cdecl misc::NicknameMessage::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7NicknameMessage_misc__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x20) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined4 *)((longlong)param_2 + 0x38) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c167fa0

void * __thiscall
misc::NicknameMessage::_scalar_deleting_destructor_(NicknameMessage *this,uint param_1)

{
  this->_padding_ = (longlong)&___7NicknameMessage_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).server_name_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// MergeImpl @ 14c168000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl misc::NicknameData::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  if ((uVar1 & 0x3f) != 0) {
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
    if (((uVar1 & 0x20) != 0) && (iVar2 = (int)param_2[3]._internal_metadata_.ptr_, iVar2 != 0)) {
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

// Clear @ 14c168270

void __thiscall misc::NicknameData::Clear(NicknameData *this)

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
               ((ulonglong)(this->_impl_).origin_nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
  }
  if ((uVar3 & 0x3c) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).partition_key_ = 0;
    (this->_impl_).region_index_ = 0;
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

// ByteSizeLong @ 14c1682f0

ulong64 __thiscall misc::NicknameData::ByteSizeLong(NicknameData *this)

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
                 (((ulonglong)(this->_impl_).origin_nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
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
      _Var6 = _Var6 + 1 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 4) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 8) != 0) && (iVar5 = (this->_impl_).partition_key_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 0x10) != 0) && (iVar5 = (this->_impl_).region_index_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
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

// _InternalSerialize @ 14c168430

uchar * __thiscall
misc::NicknameData::_InternalSerialize
          (NicknameData *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  longlong lVar3;
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
      local_28._Mysize = 0x14;
      local_28._Mydata = "misc.NicknameData.id";
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
  pIVar6 = &this->_impl_;
  if ((((pIVar6->_has_bits_).has_bits_[0] & 8) != 0) &&
     (iVar2 = (this->_impl_).partition_key_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar2,param_1);
  }
  if ((((pIVar6->_has_bits_).has_bits_[0] & 4) != 0) &&
     (lVar3 = (this->_impl_).player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<3>
                        (param_2,lVar3,param_1);
  }
  if ((((pIVar6->_has_bits_).has_bits_[0] & 0x10) != 0) &&
     (iVar2 = (this->_impl_).region_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (iVar2 = (this->_impl_).world_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<5>
                        (param_2,iVar2,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pcVar5 = (char *)((ulonglong)(this->_impl_).origin_nickname_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar5 + 0x10);
    if (*(longlong *)(pcVar5 + 0x10) != 0) {
      pcVar4 = pcVar5;
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar4 = *(char **)pcVar5;
      }
      local_28._Mysize = 0x21;
      local_28._Mydata = "misc.NicknameData.origin_nickname";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar4,(int)*(longlong *)(pcVar5 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar5 = *(char **)pcVar5;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar5;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,6,&local_28,param_1);
    }
  }
  if ((this->_padding_ & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                        ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                         param_2);
  }
  return param_1;
}

// GetClassData @ 14c168620

ClassData * __thiscall misc::NicknameData::GetClassData(NicknameData *this)

{
  return (ClassData *)&NicknameData_class_data_;
}

// PlacementNew_ @ 14c168640

void * __cdecl misc::NicknameData::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7NicknameData_misc__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x20) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined4 *)((longlong)param_2 + 0x38) = 0;
  return param_2;
}

// MergeImpl @ 14c168680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl misc::MiscBreachDataMessage::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  if ((uVar1 & 0x3f) != 0) {
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
    if (((uVar1 & 0x10) != 0) && (param_2[3]._padding_ != 0)) {
      param_1[3]._padding_ = param_2[3]._padding_;
    }
    if (((uVar1 & 0x20) != 0) && (iVar2 = (int)param_2[3]._internal_metadata_.ptr_, iVar2 != 0)) {
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

// Clear @ 14c168820

void __thiscall misc::MiscBreachDataMessage::Clear(MiscBreachDataMessage *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 1) != 0) {
    puVar2 = (undefined8 *)
             ((ulonglong)(this->_impl_).server_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar2[2] = 0;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
  }
  if ((uVar3 & 0x3e) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).island_id_ = 0;
    (this->_impl_).breach_id_ = 0;
    (this->_impl_).zone_id_ = 0;
    (this->_impl_).region_index_ = 0;
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

// ByteSizeLong @ 14c168880

ulong64 __thiscall misc::MiscBreachDataMessage::ByteSizeLong(MiscBreachDataMessage *this)

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
                 (((ulonglong)(this->_impl_).server_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
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
      _Var6 = (ulonglong)(iVar5 * -9 + 0x160U >> 6) + 2 + lVar2;
    }
    if (((uVar1 & 2) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 4) != 0) && (iVar5 = (this->_impl_).island_id_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 8) != 0) && (iVar5 = (this->_impl_).breach_id_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 0x10) != 0) && (lVar2 = (this->_impl_).zone_id_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 0x20) != 0) && (iVar5 = (this->_impl_).region_index_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c168980

uchar * __thiscall
misc::MiscBreachDataMessage::_InternalSerialize
          (MiscBreachDataMessage *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  longlong lVar3;
  uchar *puVar4;
  char *pcVar5;
  char *pcVar6;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar2 = (this->_impl_).island_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar3 = (this->_impl_).player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (lVar3 = (this->_impl_).zone_id_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<3>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (iVar2 = (this->_impl_).breach_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (iVar2 = (this->_impl_).region_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<5>
                        (param_2,iVar2,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar6 = (char *)((ulonglong)(this->_impl_).server_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar6 + 0x10);
    if (*(longlong *)(pcVar6 + 0x10) != 0) {
      pcVar5 = pcVar6;
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar5 = *(char **)pcVar6;
      }
      local_18._Mysize = 0x26;
      local_18._Mydata = "misc.MiscBreachDataMessage.server_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar5,(int)*(longlong *)(pcVar6 + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar6 = *(char **)pcVar6;
      }
      local_18._Mysize = *puVar1;
      local_18._Mydata = pcVar6;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,100,&local_18,param_1);
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

// GetClassData @ 14c168b00

ClassData * __thiscall misc::MiscBreachDataMessage::GetClassData(MiscBreachDataMessage *this)

{
  return (ClassData *)&MiscBreachDataMessage_class_data_;
}

// PlacementNew_ @ 14c168b20

void * __cdecl
misc::MiscBreachDataMessage::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7MiscBreachDataMessage_misc__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined4 *)((longlong)param_2 + 0x38) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c168b60

void * __thiscall
misc::MiscBreachDataMessage::_scalar_deleting_destructor_(MiscBreachDataMessage *this,uint param_1)

{
  this->_padding_ = (longlong)&___7MiscBreachDataMessage_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).server_name_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// MergeImpl @ 14c168bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl misc::Player::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  MessageLite *pMVar3;
  MessageLite *pMVar4;
  longlong lVar5;
  byte bVar6;
  void *pvVar7;
  undefined8 uVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  ulong64 uVar10;
  Arena *pAVar11;
  Arena *pAVar12;
  undefined1 auStackY_88 [32];
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  pAVar11 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar6 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar12 = pAVar11;
  if (bVar6 != 0) {
    pAVar12 = (Arena *)(pAVar11->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((char)uVar1 != '\0') {
    if ((uVar1 & 1) != 0) {
      pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar9->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (bVar6 != 0) {
            pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar11);
          if (0xf < uStack_38) {
            uVar10 = uStack_38 + 1;
            uVar8 = local_50._Ptr;
            if (0xfff < uVar10) {
              uVar8 = *(undefined8 *)(local_50._Ptr + -8);
              uVar10 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar8)) {
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
          pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar9,pAVar11);
      }
    }
    if ((uVar1 & 2) != 0) {
      pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._padding_ & 0xfffffffffffffffc);
      if ((pbVar9->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar11 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 2),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar11);
          if (0xf < uStack_38) {
            uVar10 = uStack_38 + 1;
            uVar8 = local_50._Ptr;
            if (0xfff < uVar10) {
              uVar8 = *(undefined8 *)(local_50._Ptr + -8);
              uVar10 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar8)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar8,uVar10);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
        pAVar11 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 2),pbVar9,pAVar11);
      }
    }
    if ((uVar1 & 4) != 0) {
      pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar9->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
          pAVar11 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[2]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar11);
          if (0xf < uStack_38) {
            uVar10 = uStack_38 + 1;
            uVar8 = local_50._Ptr;
            if (0xfff < uVar10) {
              uVar8 = *(undefined8 *)(local_50._Ptr + -8);
              uVar10 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar8)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar8,uVar10);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
        pAVar11 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[2]._internal_metadata_,pbVar9,pAVar11);
      }
    }
    if ((uVar1 & 8) != 0) {
      pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[3]._padding_ & 0xfffffffffffffffc);
      if ((pbVar9->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[3]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 8;
          pAVar11 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 3),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar11);
          if (0xf < uStack_38) {
            uVar10 = uStack_38 + 1;
            uVar8 = local_50._Ptr;
            if (0xfff < uVar10) {
              uVar8 = *(undefined8 *)(local_50._Ptr + -8);
              uVar10 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar8)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar8,uVar10);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 8;
        pAVar11 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 3),pbVar9,pAVar11);
      }
    }
    if ((uVar1 & 0x10) != 0) {
      pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[3]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar9->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[3]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x10;
          pAVar11 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[3]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar11);
          if (0xf < uStack_38) {
            uVar10 = uStack_38 + 1;
            uVar8 = local_50._Ptr;
            if (0xfff < uVar10) {
              uVar8 = *(undefined8 *)(local_50._Ptr + -8);
              uVar10 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar8)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar8,uVar10);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 0x10;
        pAVar11 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[3]._internal_metadata_,pbVar9,pAVar11);
      }
    }
    if ((uVar1 & 0x20) != 0) {
      if ((MessageLite *)param_1[4]._padding_ == (MessageLite *)0x0) {
        pvVar7 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                           (pAVar12,(MessageLite *)param_2[4]._padding_);
        param_1[4]._padding_ = (longlong)pvVar7;
      }
      else {
        google::protobuf::Timestamp::MergeImpl
                  ((MessageLite *)param_1[4]._padding_,(MessageLite *)param_2[4]._padding_);
      }
    }
    if ((uVar1 & 0x40) != 0) {
      pMVar3 = (MessageLite *)param_1[4]._internal_metadata_.ptr_;
      pMVar4 = (MessageLite *)param_2[4]._internal_metadata_.ptr_;
      if (pMVar3 == (MessageLite *)0x0) {
        pvVar7 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>(pAVar12,pMVar4)
        ;
        param_1[4]._internal_metadata_.ptr_ = (long64)pvVar7;
      }
      else {
        google::protobuf::Timestamp::MergeImpl(pMVar3,pMVar4);
      }
    }
    if (((char)uVar1 < '\0') && (param_2[5]._padding_ != 0)) {
      param_1[5]._padding_ = param_2[5]._padding_;
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if (((uVar1 >> 8 & 1) != 0) && (iVar2 = (int)param_2[5]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[5]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 >> 9 & 1) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[5]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[5]._internal_metadata_.ptr_ + 4) = iVar2;
    }
    if (((uVar1 >> 10 & 1) != 0) && (iVar2 = (int)param_2[6]._padding_, iVar2 != 0)) {
      *(int *)&param_1[6]._padding_ = iVar2;
    }
    if (((uVar1 >> 0xb & 1) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[6]._padding_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[6]._padding_ + 4) = iVar2;
    }
    if (((uVar1 >> 0xc & 1) != 0) && (lVar5 = param_2[6]._internal_metadata_.ptr_, lVar5 != 0)) {
      param_1[6]._internal_metadata_.ptr_ = lVar5;
    }
    if (((uVar1 >> 0xd & 1) != 0) && (iVar2 = (int)param_2[7]._padding_, iVar2 != 0)) {
      *(int *)&param_1[7]._padding_ = iVar2;
    }
    if (((uVar1 >> 0xe & 1) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[7]._padding_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[7]._padding_ + 4) = iVar2;
    }
    if (((uVar1 >> 0xf & 1) != 0) && (iVar2 = (int)param_2[7]._internal_metadata_.ptr_, iVar2 != 0))
    {
      *(int *)&param_1[7]._internal_metadata_.ptr_ = iVar2;
    }
  }
  if ((uVar1 & 0x1f0000) != 0) {
    if (((uVar1 >> 0x10 & 1) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[7]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[7]._internal_metadata_.ptr_ + 4) = iVar2;
    }
    if (((uVar1 >> 0x11 & 1) != 0) && (iVar2 = (int)param_2[8]._padding_, iVar2 != 0)) {
      *(int *)&param_1[8]._padding_ = iVar2;
    }
    if (((uVar1 >> 0x12 & 1) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[8]._padding_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[8]._padding_ + 4) = iVar2;
    }
    if (((uVar1 >> 0x13 & 1) != 0) && (iVar2 = (int)param_2[8]._internal_metadata_.ptr_, iVar2 != 0)
       ) {
      *(int *)&param_1[8]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 >> 0x14 & 1) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[8]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[8]._internal_metadata_.ptr_ + 4) = iVar2;
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

// Clear @ 14c1691b0

void __thiscall misc::Player::Clear(Player *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 0x7f) != 0) {
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
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).player_session_uid_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
      ;
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 4) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).guild_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 8) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).custom_info_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 0x10) != 0) {
      puVar2 = (undefined8 *)((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 0x20) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).login_dt_);
    }
    if ((uVar1 & 0x40) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).logout_dt_);
    }
  }
  (this->_impl_).player_uid_ = 0;
  if ((uVar1 & 0xff00) != 0) {
    (this->_impl_).world_id_ = 0;
    (this->_impl_).player_grade_ = 0;
    (this->_impl_).region_index_ = 0;
    (this->_impl_).guild_icon_ = 0;
    (this->_impl_).guild_uid_ = 0;
    (this->_impl_).island_id_ = 0;
    (this->_impl_).main_char_id_ = 0;
    (this->_impl_).main_char_level_ = 0;
  }
  if ((uVar1 & 0x1f0000) != 0) {
    (this->_impl_).main_char_skin_ = 0;
    (this->_impl_).main_char_combat_power_ = 0.0;
    (this->_impl_).player_icon_ = 0;
    (this->_impl_).main_quest_id_ = 0;
    (this->_impl_).game_server_index_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c1692f0

ulong64 __thiscall misc::Player::ByteSizeLong(Player *this)

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
    if (((uVar1 & 2) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).player_session_uid_.tagged_ptr_.ptr_ &
                  0xfffffffffffffffc) + 0x10), lVar2 != 0)) {
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
                 (((ulonglong)(this->_impl_).guild_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
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
      _Var7 = _Var7 + 1 + (ulonglong)(iVar6 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 8) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).custom_info_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
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
      _Var7 = _Var7 + 2 + (ulonglong)(iVar6 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 0x10) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
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
      _Var7 = _Var7 + 2 + (ulonglong)(iVar6 * -9 + 0x160U >> 6) + lVar2;
    }
    if ((uVar1 & 0x20) != 0) {
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).login_dt_);
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
    if ((uVar1 & 0x40) != 0) {
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).logout_dt_);
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
    if (((char)uVar1 < '\0') && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar5;
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if (((uVar1 >> 8 & 1) != 0) && (iVar6 = (this->_impl_).world_id_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 >> 9 & 1) != 0) && (iVar6 = (this->_impl_).player_grade_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 >> 10 & 1) != 0) && (iVar6 = (this->_impl_).region_index_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 >> 0xb & 1) != 0) && (iVar6 = (this->_impl_).guild_icon_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 >> 0xc & 1) != 0) && (lVar2 = (this->_impl_).guild_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 >> 0xd & 1) != 0) && (uVar3 = (this->_impl_).island_id_, uVar3 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::UInt32SizePlusOne(uVar3);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 >> 0xe & 1) != 0) && (iVar6 = (this->_impl_).main_char_id_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32Size(iVar6);
      _Var7 = _Var7 + uVar5 + 2;
    }
    if (((uVar1 >> 0xf & 1) != 0) && (iVar6 = (this->_impl_).main_char_level_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32Size(iVar6);
      _Var7 = _Var7 + uVar5 + 2;
    }
  }
  if ((uVar1 & 0x1f0000) != 0) {
    if (((uVar1 >> 0x10 & 1) != 0) && (iVar6 = (this->_impl_).main_char_skin_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32Size(iVar6);
      _Var7 = _Var7 + uVar5 + 2;
    }
    if (((uVar1 >> 0x11 & 1) != 0) && ((this->_impl_).main_char_combat_power_ != 0.0)) {
      _Var7 = _Var7 + 6;
    }
    if (((uVar1 >> 0x12 & 1) != 0) && (iVar6 = (this->_impl_).player_icon_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32Size(iVar6);
      _Var7 = _Var7 + uVar5 + 2;
    }
    if (((uVar1 >> 0x13 & 1) != 0) && (iVar6 = (this->_impl_).main_quest_id_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32Size(iVar6);
      _Var7 = _Var7 + uVar5 + 2;
    }
    if (((uVar1 >> 0x14 & 1) != 0) && (iVar6 = (this->_impl_).game_server_index_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32Size(iVar6);
      _Var7 = _Var7 + uVar5 + 2;
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c1696a0

uchar * __thiscall
misc::Player::_InternalSerialize(Player *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  ulonglong uVar9;
  byte *pbVar10;
  Impl_ *pIVar11;
  char *pcVar12;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x80) != 0) &&
     (lVar4 = (this->_impl_).player_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar4,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar12 = (char *)((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar12 + 0x10);
    if (*(longlong *)(pcVar12 + 0x10) != 0) {
      pcVar8 = pcVar12;
      if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
        pcVar8 = *(char **)pcVar12;
      }
      local_28._Mysize = 0x14;
      local_28._Mydata = "misc.Player.nickname";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar8,(int)*(longlong *)(pcVar12 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
        pcVar12 = *(char **)pcVar12;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar12;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,2,&local_28,param_1);
    }
  }
  pIVar11 = &this->_impl_;
  if ((((pIVar11->_has_bits_).has_bits_[0] & 0x100) != 0) &&
     (iVar3 = (this->_impl_).world_id_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar3,param_1);
  }
  if ((((pIVar11->_has_bits_).has_bits_[0] & 0x200) != 0) &&
     (iVar3 = (this->_impl_).player_grade_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar3,param_1);
  }
  if ((((pIVar11->_has_bits_).has_bits_[0] & 0x400) != 0) &&
     (iVar3 = (this->_impl_).region_index_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<5>
                        (param_2,iVar3,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pcVar12 = (char *)((ulonglong)(this->_impl_).player_session_uid_.tagged_ptr_.ptr_ &
                      0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar12 + 0x10);
    if (*(longlong *)(pcVar12 + 0x10) != 0) {
      pcVar8 = pcVar12;
      if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
        pcVar8 = *(char **)pcVar12;
      }
      local_28._Mysize = 0x1e;
      local_28._Mydata = "misc.Player.player_session_uid";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar8,(int)*(longlong *)(pcVar12 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
        pcVar12 = *(char **)pcVar12;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar12;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,6,&local_28,param_1);
    }
  }
  uVar7 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar7 & 0x20) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (8,(MessageLite *)(this->_impl_).login_dt_,
                         (int)(((this->_impl_).login_dt_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((uVar7 & 0x40) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (9,(MessageLite *)(this->_impl_).logout_dt_,
                         (int)(((this->_impl_).logout_dt_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar7 >> 0xc & 1) != 0) && (lVar4 = (this->_impl_).guild_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<10>
                        (param_2,lVar4,param_1);
  }
  if ((uVar7 & 4) != 0) {
    pcVar12 = (char *)((ulonglong)(this->_impl_).guild_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar12 + 0x10);
    if (*(longlong *)(pcVar12 + 0x10) != 0) {
      pcVar8 = pcVar12;
      if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
        pcVar8 = *(char **)pcVar12;
      }
      local_28._Mysize = 0x16;
      local_28._Mydata = "misc.Player.guild_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar8,(int)*(longlong *)(pcVar12 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
        pcVar12 = *(char **)pcVar12;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar12;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0xb,&local_28,param_1);
    }
  }
  if (((uVar7 >> 0xb & 1) != 0) && (iVar3 = (this->_impl_).guild_icon_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<12>
                        (param_2,iVar3,param_1);
  }
  if (((uVar7 >> 0xd & 1) != 0) && ((this->_impl_).island_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar6 = (this->_impl_).island_id_;
    *param_1 = 0x68;
    while( true ) {
      param_1 = param_1 + 1;
      bVar5 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *param_1 = bVar5 | 0x80;
    }
    *param_1 = bVar5;
    param_1 = param_1 + 1;
  }
  if (((uVar7 >> 0xe & 1) != 0) && ((this->_impl_).main_char_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar9 = (ulonglong)(this->_impl_).main_char_id_;
    uVar6 = 0xa8;
    do {
      pbVar10 = param_1;
      bVar5 = (byte)uVar6;
      uVar6 = uVar6 >> 7;
      *pbVar10 = bVar5 | 0x80;
      param_1 = pbVar10 + 1;
    } while (0x7f < uVar6);
    pbVar10[1] = (byte)uVar6;
    pbVar10 = pbVar10 + 2;
    for (; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
      *pbVar10 = (byte)uVar9 | 0x80;
      pbVar10 = pbVar10 + 1;
    }
    *pbVar10 = (byte)uVar9;
    param_1 = pbVar10 + 1;
  }
  if (((uVar7 >> 0xf & 1) != 0) && ((this->_impl_).main_char_level_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar9 = (ulonglong)(this->_impl_).main_char_level_;
    uVar6 = 0xb0;
    do {
      pbVar10 = param_1;
      bVar5 = (byte)uVar6;
      uVar6 = uVar6 >> 7;
      *pbVar10 = bVar5 | 0x80;
      param_1 = pbVar10 + 1;
    } while (0x7f < uVar6);
    pbVar10[1] = (byte)uVar6;
    pbVar10 = pbVar10 + 2;
    for (; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
      *pbVar10 = (byte)uVar9 | 0x80;
      pbVar10 = pbVar10 + 1;
    }
    *pbVar10 = (byte)uVar9;
    param_1 = pbVar10 + 1;
  }
  if (((uVar7 >> 0x10 & 1) != 0) && ((this->_impl_).main_char_skin_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar9 = (ulonglong)(this->_impl_).main_char_skin_;
    uVar6 = 0xb8;
    do {
      pbVar10 = param_1;
      bVar5 = (byte)uVar6;
      uVar6 = uVar6 >> 7;
      *pbVar10 = bVar5 | 0x80;
      param_1 = pbVar10 + 1;
    } while (0x7f < uVar6);
    pbVar10[1] = (byte)uVar6;
    pbVar10 = pbVar10 + 2;
    for (; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
      *pbVar10 = (byte)uVar9 | 0x80;
      pbVar10 = pbVar10 + 1;
    }
    *pbVar10 = (byte)uVar9;
    param_1 = pbVar10 + 1;
  }
  if (((uVar7 >> 0x11 & 1) != 0) && ((this->_impl_).main_char_combat_power_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    fVar2 = (this->_impl_).main_char_combat_power_;
    uVar6 = 0xc5;
    do {
      pbVar10 = param_1;
      bVar5 = (byte)uVar6;
      uVar6 = uVar6 >> 7;
      *pbVar10 = bVar5 | 0x80;
      param_1 = pbVar10 + 1;
    } while (0x7f < uVar6);
    pbVar10[1] = (byte)uVar6;
    *(float *)(pbVar10 + 2) = fVar2;
    param_1 = pbVar10 + 6;
  }
  if (((uVar7 >> 0x12 & 1) != 0) && ((this->_impl_).player_icon_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar9 = (ulonglong)(this->_impl_).player_icon_;
    uVar6 = 200;
    do {
      pbVar10 = param_1;
      bVar5 = (byte)uVar6;
      uVar6 = uVar6 >> 7;
      *pbVar10 = bVar5 | 0x80;
      param_1 = pbVar10 + 1;
    } while (0x7f < uVar6);
    pbVar10[1] = (byte)uVar6;
    pbVar10 = pbVar10 + 2;
    for (; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
      *pbVar10 = (byte)uVar9 | 0x80;
      pbVar10 = pbVar10 + 1;
    }
    *pbVar10 = (byte)uVar9;
    param_1 = pbVar10 + 1;
  }
  if (((uVar7 >> 0x13 & 1) != 0) && ((this->_impl_).main_quest_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar9 = (ulonglong)(this->_impl_).main_quest_id_;
    uVar6 = 0xd0;
    do {
      pbVar10 = param_1;
      bVar5 = (byte)uVar6;
      uVar6 = uVar6 >> 7;
      *pbVar10 = bVar5 | 0x80;
      param_1 = pbVar10 + 1;
    } while (0x7f < uVar6);
    pbVar10[1] = (byte)uVar6;
    pbVar10 = pbVar10 + 2;
    for (; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
      *pbVar10 = (byte)uVar9 | 0x80;
      pbVar10 = pbVar10 + 1;
    }
    *pbVar10 = (byte)uVar9;
    param_1 = pbVar10 + 1;
  }
  if ((uVar7 & 8) != 0) {
    pcVar12 = (char *)((ulonglong)(this->_impl_).custom_info_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
    ;
    puVar1 = (ulong64 *)(pcVar12 + 0x10);
    if (*(longlong *)(pcVar12 + 0x10) != 0) {
      pcVar8 = pcVar12;
      if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
        pcVar8 = *(char **)pcVar12;
      }
      local_28._Mysize = 0x17;
      local_28._Mydata = "misc.Player.custom_info";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar8,(int)*(longlong *)(pcVar12 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
        pcVar12 = *(char **)pcVar12;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar12;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x1b,&local_28,param_1);
    }
  }
  if ((uVar7 & 0x10) != 0) {
    pcVar12 = (char *)((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar12 + 0x10);
    if (*(longlong *)(pcVar12 + 0x10) != 0) {
      pcVar8 = pcVar12;
      if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
        pcVar8 = *(char **)pcVar12;
      }
      local_28._Mysize = 0xe;
      local_28._Mydata = "misc.Player.id";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar8,(int)*(longlong *)(pcVar12 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
        pcVar12 = *(char **)pcVar12;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar12;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x1e,&local_28,param_1);
    }
  }
  if (((uVar7 >> 0x14 & 1) != 0) && ((this->_impl_).game_server_index_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar9 = (ulonglong)(this->_impl_).game_server_index_;
    uVar7 = 0xf8;
    do {
      pbVar10 = param_1;
      bVar5 = (byte)uVar7;
      uVar7 = uVar7 >> 7;
      *pbVar10 = bVar5 | 0x80;
      param_1 = pbVar10 + 1;
    } while (0x7f < uVar7);
    pbVar10[1] = (byte)uVar7;
    pbVar10 = pbVar10 + 2;
    for (; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
      *pbVar10 = (byte)uVar9 | 0x80;
      pbVar10 = pbVar10 + 1;
    }
    *pbVar10 = (byte)uVar9;
    param_1 = pbVar10 + 1;
  }
  if ((this->_padding_ & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                        ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                         param_2);
  }
  return param_1;
}

// GetClassData @ 14c169e20

ClassData * __thiscall misc::Player::GetClassData(Player *this)

{
  return (ClassData *)&Player_class_data_;
}

// PlacementNew_ @ 14c169e40

void * __cdecl misc::Player::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7Player_misc__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x20) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x28) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x30) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x38) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c169ea0

void * __thiscall misc::Player::_scalar_deleting_destructor_(Player *this,uint param_1)

{
  ~Player(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// MergeImpl @ 14c169ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl misc::PkHistoryRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  MessageLite *pMVar3;
  MessageLite *pMVar4;
  longlong lVar5;
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
  uVar1 = (uint)param_2[1]._padding_;
  if ((char)uVar1 != '\0') {
    if ((uVar1 & 1) != 0) {
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
    if ((uVar1 & 2) != 0) {
      pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._padding_ & 0xfffffffffffffffc);
      if ((pbVar9->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar12 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_40._8_8_ = 0;
          local_40._Ptr = (char *)0x0;
          local_30 = ___xmm_000000000000000f0000000000000000;
          uStack_28 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 2),
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
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
        pAVar12 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 2),pbVar9,pAVar12);
      }
    }
    if ((uVar1 & 4) != 0) {
      pMVar3 = (MessageLite *)param_1[2]._internal_metadata_.ptr_;
      pMVar4 = (MessageLite *)param_2[2]._internal_metadata_.ptr_;
      if (pMVar3 == (MessageLite *)0x0) {
        pvVar7 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>(pAVar11,pMVar4)
        ;
        param_1[2]._internal_metadata_.ptr_ = (long64)pvVar7;
      }
      else {
        google::protobuf::Timestamp::MergeImpl(pMVar3,pMVar4);
      }
    }
    if (((uVar1 & 8) != 0) && (param_2[3]._padding_ != 0)) {
      param_1[3]._padding_ = param_2[3]._padding_;
    }
    if (((uVar1 & 0x10) != 0) && (lVar5 = param_2[3]._internal_metadata_.ptr_, lVar5 != 0)) {
      param_1[3]._internal_metadata_.ptr_ = lVar5;
    }
    if (((uVar1 & 0x20) != 0) && (iVar2 = (int)param_2[4]._padding_, iVar2 != 0)) {
      *(int *)&param_1[4]._padding_ = iVar2;
    }
    if (((uVar1 & 0x40) != 0) && (iVar2 = *(int *)((longlong)&param_2[4]._padding_ + 4), iVar2 != 0)
       ) {
      *(int *)((longlong)&param_1[4]._padding_ + 4) = iVar2;
    }
    if (((char)uVar1 < '\0') && (lVar5 = param_2[4]._internal_metadata_.ptr_, lVar5 != 0)) {
      param_1[4]._internal_metadata_.ptr_ = lVar5;
    }
  }
  if ((uVar1 & 0xf00) != 0) {
    if (((uVar1 >> 8 & 1) != 0) && (iVar2 = (int)param_2[5]._padding_, iVar2 != 0)) {
      *(int *)&param_1[5]._padding_ = iVar2;
    }
    if (((uVar1 >> 9 & 1) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[5]._padding_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[5]._padding_ + 4) = iVar2;
    }
    if (((uVar1 >> 10 & 1) != 0) && (iVar2 = (int)param_2[5]._internal_metadata_.ptr_, iVar2 != 0))
    {
      *(int *)&param_1[5]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 >> 0xb & 1) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[5]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[5]._internal_metadata_.ptr_ + 4) = iVar2;
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

// Clear @ 14c16a1e0

void __thiscall misc::PkHistoryRequest::Clear(PkHistoryRequest *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).target_nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).target_guild_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 4) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).current_time_);
    }
  }
  if ((uVar1 & 0xf8) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).target_player_uid_ = 0;
    (this->_impl_).target_char_id_ = 0;
    (this->_impl_).target_guild_icon_ = 0;
    (this->_impl_).target_guild_uid_ = 0;
  }
  if ((uVar1 & 0xf00) != 0) {
    (this->_impl_).target_char_level_ = 0;
    (this->_impl_).target_combat_power_ = 0.0;
    (this->_impl_).pk_state_ = 0;
    (this->_impl_).region_index_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c16a290

ulong64 __thiscall misc::PkHistoryRequest::ByteSizeLong(PkHistoryRequest *this)

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
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).target_nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
                 + 0x10), lVar2 != 0)) {
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
                 (((ulonglong)(this->_impl_).target_guild_name_.tagged_ptr_.ptr_ &
                  0xfffffffffffffffc) + 0x10), lVar2 != 0)) {
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
    if ((uVar1 & 4) != 0) {
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).current_time_);
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
    if (((uVar1 & 8) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 & 0x10) != 0) && (lVar2 = (this->_impl_).target_player_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 & 0x20) != 0) && (iVar6 = (this->_impl_).target_char_id_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 & 0x40) != 0) && (iVar6 = (this->_impl_).target_guild_icon_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((char)uVar1 < '\0') && (lVar2 = (this->_impl_).target_guild_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar5;
    }
  }
  if ((uVar1 & 0xf00) != 0) {
    if (((uVar1 >> 8 & 1) != 0) && (iVar6 = (this->_impl_).target_char_level_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 >> 9 & 1) != 0) && ((this->_impl_).target_combat_power_ != 0.0)) {
      _Var7 = _Var7 + 5;
    }
    if (((uVar1 >> 10 & 1) != 0) && (iVar6 = (this->_impl_).pk_state_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::EnumSize(iVar6);
      _Var7 = _Var7 + uVar5 + 1;
    }
    if (((uVar1 >> 0xb & 1) != 0) && (iVar6 = (this->_impl_).region_index_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c16a490

uchar * __thiscall
misc::PkHistoryRequest::_InternalSerialize
          (PkHistoryRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  byte *pbVar6;
  ulonglong uVar7;
  uchar *puVar8;
  byte bVar9;
  char *pcVar10;
  char *pcVar11;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (lVar5 = (this->_impl_).player_uid_, lVar5 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar5,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (lVar5 = (this->_impl_).target_player_uid_, lVar5 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar5,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (iVar3 = (this->_impl_).target_char_id_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar3,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar11 = (char *)((ulonglong)(this->_impl_).target_nickname_.tagged_ptr_.ptr_ &
                      0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar11 + 0x10);
    if (*(longlong *)(pcVar11 + 0x10) != 0) {
      pcVar10 = pcVar11;
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar10 = *(char **)pcVar11;
      }
      local_28._Mysize = 0x25;
      local_28._Mydata = "misc.PkHistoryRequest.target_nickname";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar10,(int)*(longlong *)(pcVar11 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar11;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,4,&local_28,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x80) != 0) &&
     (lVar5 = (this->_impl_).target_guild_uid_, lVar5 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<5>
                        (param_2,lVar5,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x40) != 0) &&
     (iVar3 = (this->_impl_).target_guild_icon_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<6>
                        (param_2,iVar3,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pcVar11 = (char *)((ulonglong)(this->_impl_).target_guild_name_.tagged_ptr_.ptr_ &
                      0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar11 + 0x10);
    if (*(longlong *)(pcVar11 + 0x10) != 0) {
      pcVar10 = pcVar11;
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar10 = *(char **)pcVar11;
      }
      local_28._Mysize = 0x27;
      local_28._Mydata = "misc.PkHistoryRequest.target_guild_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar10,(int)*(longlong *)(pcVar11 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar11;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,7,&local_28,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x100) != 0) &&
     (iVar3 = (this->_impl_).target_char_level_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<8>
                        (param_2,iVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x200) != 0) &&
     ((this->_impl_).target_combat_power_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    fVar2 = (this->_impl_).target_combat_power_;
    *param_1 = 0x4d;
    *(float *)(param_1 + 1) = fVar2;
    param_1 = param_1 + 5;
  }
  uVar4 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar4 & 4) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (10,(MessageLite *)(this->_impl_).current_time_,
                         (int)(((this->_impl_).current_time_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar4 >> 10 & 1) != 0) && ((this->_impl_).pk_state_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar7 = (ulonglong)(this->_impl_).pk_state_;
    *param_1 = 0x58;
    while( true ) {
      pbVar6 = param_1 + 1;
      bVar9 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *pbVar6 = bVar9 | 0x80;
      param_1 = pbVar6;
    }
    *pbVar6 = bVar9;
    param_1 = param_1 + 2;
  }
  if (((uVar4 >> 0xb & 1) != 0) && (iVar3 = (this->_impl_).region_index_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<12>
                        (param_2,iVar3,param_1);
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar8 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar8;
}

// GetClassData @ 14c16a770

ClassData * __thiscall misc::PkHistoryRequest::GetClassData(PkHistoryRequest *this)

{
  return (ClassData *)&PkHistoryRequest_class_data_;
}

// PlacementNew_ @ 14c16a790

void * __cdecl misc::PkHistoryRequest::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7PkHistoryRequest_misc__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x20) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c16a7e0

void * __thiscall
misc::PkHistoryRequest::_scalar_deleting_destructor_(PkHistoryRequest *this,uint param_1)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7PkHistoryRequest_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).target_nickname_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).target_guild_name_);
  this_00 = (this->_impl_).current_time_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// MergeImpl @ 14c16a870

void __cdecl misc::MiscPlayerType::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  InternalMetadata *this;
  int iVar1;
  int iVar2;
  void *pvVar3;
  GlobalEmptyString *pGVar4;
  Arena *pAVar5;
  bool bVar6;
  
  this = &param_1->_internal_metadata_;
  pAVar5 = (Arena *)(this->ptr_ & 0xfffffffffffffffe);
  if ((this->ptr_ & 1) != 0) {
    pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  iVar1 = *(int *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4);
  if (iVar1 == 0) goto LAB_14c16a991;
  iVar2 = *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      clear_item((MiscPlayerType *)param_1);
    }
    *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4) = iVar1;
  }
  switch(iVar1) {
  case 1:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x14:
  case 0x17:
  case 0x18:
    *(int *)&param_1[1]._padding_ = (int)param_2[1]._padding_;
    break;
  case 2:
  case 3:
    if (iVar2 == iVar1) {
      google::protobuf::Timestamp::MergeImpl
                ((MessageLite *)param_1[1]._padding_,(MessageLite *)param_2[1]._padding_);
    }
    else {
      pvVar3 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                         (pAVar5,(MessageLite *)param_2[1]._padding_);
      param_1[1]._padding_ = (longlong)pvVar3;
    }
    break;
  case 4:
    if (iVar2 != iVar1) {
      param_1[1]._padding_ = (longlong)&google::protobuf::internal::fixed_address_empty_string;
    }
    bVar6 = *(int *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4) == 4;
    goto LAB_14c16a97a;
  case 5:
    if (iVar2 != iVar1) {
      param_1[1]._padding_ = (longlong)&google::protobuf::internal::fixed_address_empty_string;
    }
    bVar6 = *(int *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4) == 5;
    goto LAB_14c16a97a;
  case 0x15:
    param_1[1]._padding_ = param_2[1]._padding_;
    break;
  case 0x16:
    if (iVar2 != iVar1) {
      param_1[1]._padding_ = (longlong)&google::protobuf::internal::fixed_address_empty_string;
    }
    bVar6 = *(int *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4) == 0x16;
    goto LAB_14c16a97a;
  case 0x19:
    if (iVar2 != iVar1) {
      param_1[1]._padding_ = (longlong)&google::protobuf::internal::fixed_address_empty_string;
    }
    bVar6 = *(int *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4) == 0x19;
LAB_14c16a97a:
    pGVar4 = &google::protobuf::internal::fixed_address_empty_string;
    if (bVar6) {
      pGVar4 = (GlobalEmptyString *)(param_2[1]._padding_ & 0xfffffffffffffffc);
    }
    google::protobuf::internal::ArenaStringPtr::Set<>
              ((ArenaStringPtr *)(param_1 + 1),&pGVar4->value_,pAVar5);
  }
LAB_14c16a991:
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (this,(UnknownFieldSet *)
                    (((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8));
    return;
  }
  return;
}

// Clear @ 14c16aa40

void __thiscall misc::MiscPlayerType::Clear(MiscPlayerType *this)

{
  clear_item(this);
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c16aa70

ulong64 __thiscall misc::MiscPlayerType::ByteSizeLong(MiscPlayerType *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  __uint64 _Var5;
  
  _Var5 = 0;
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xb:
    _Var5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne
                      ((this->_impl_).item_.world_id_);
    break;
  case 2:
  case 3:
    uVar4 = google::protobuf::internal::WireFormatLite::MessageSize<google::protobuf::Timestamp>
                      ((this->_impl_).item_.login_dt_);
    _Var5 = uVar4 + 1;
    break;
  case 4:
  case 5:
    uVar4 = google::protobuf::internal::WireFormatLite::StringSize
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       ((this->_impl_).item_.guild_uid_ & 0xfffffffffffffffc));
    _Var5 = uVar4 + 1;
    break;
  case 10:
    _Var5 = 5;
    break;
  case 0xc:
    _Var5 = google::protobuf::internal::WireFormatLite::UInt32SizePlusOne
                      ((this->_impl_).item_.island_id_);
    break;
  case 0x14:
  case 0x17:
  case 0x18:
    uVar4 = google::protobuf::internal::WireFormatLite::Int32Size((this->_impl_).item_.world_id_);
    goto LAB_14c16ab36;
  case 0x15:
    uVar3 = (this->_impl_).item_.guild_uid_ | 1;
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
    _Var5 = (ulonglong)(iVar2 * -9 + 0x280U >> 6) + 2;
    break;
  case 0x16:
  case 0x19:
    uVar4 = google::protobuf::internal::WireFormatLite::StringSize
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       ((this->_impl_).item_.guild_uid_ & 0xfffffffffffffffc));
LAB_14c16ab36:
    _Var5 = uVar4 + 2;
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c16abc0

uchar * __thiscall
misc::MiscPlayerType::_InternalSerialize
          (MiscPlayerType *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uchar *puVar1;
  uint uVar2;
  int iVar3;
  ItemUnion IVar4;
  char *pcVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  ConstantInitialized *pCVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  ulong64 *puVar13;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,(this->_impl_).item_.world_id_,param_1);
    break;
  case 2:
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (2,(MessageLite *)(this->_impl_).item_.login_dt_,
                         (int)(((this->_impl_).item_.login_dt_)->_impl_)._cached_size_.atom_,param_1
                         ,param_2);
    break;
  case 3:
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (3,(MessageLite *)(this->_impl_).item_.login_dt_,
                         (int)(((this->_impl_).item_.login_dt_)->_impl_)._cached_size_.atom_,param_1
                         ,param_2);
    break;
  case 4:
    pcVar12 = (char *)((this->_impl_).item_.guild_uid_ & 0xfffffffffffffffc);
    puVar13 = (ulong64 *)(pcVar12 + 0x10);
    pcVar5 = pcVar12;
    if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
      pcVar5 = *(char **)pcVar12;
    }
    local_28._Mydata = "misc.MiscPlayerType.nickname";
    local_28._Mysize = 0x1c;
    google::protobuf::internal::WireFormatLite::VerifyUtf8String
              (pcVar5,(int)*puVar13,SERIALIZE,&local_28);
    if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
      pcVar12 = *(char **)pcVar12;
    }
    uVar7 = 4;
    goto LAB_14c16b09b;
  case 5:
    pcVar12 = (char *)((this->_impl_).item_.guild_uid_ & 0xfffffffffffffffc);
    puVar13 = (ulong64 *)(pcVar12 + 0x10);
    pcVar5 = pcVar12;
    if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
      pcVar5 = *(char **)pcVar12;
    }
    local_28._Mydata = "misc.MiscPlayerType.player_session_uid";
    local_28._Mysize = 0x26;
    google::protobuf::internal::WireFormatLite::VerifyUtf8String
              (pcVar5,(int)*puVar13,SERIALIZE,&local_28);
    if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
      pcVar12 = *(char **)pcVar12;
    }
    uVar7 = 5;
    goto LAB_14c16b09b;
  case 6:
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<6>
                        (param_2,(this->_impl_).item_.world_id_,param_1);
    break;
  case 7:
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<7>
                        (param_2,(this->_impl_).item_.world_id_,param_1);
    break;
  case 8:
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<8>
                        (param_2,(this->_impl_).item_.world_id_,param_1);
    break;
  case 9:
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<9>
                        (param_2,(this->_impl_).item_.world_id_,param_1);
    break;
  case 10:
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    if ((this->_impl_)._oneof_case_[0] == 10) {
      iVar3 = (this->_impl_).item_.world_id_;
      *param_1 = 'U';
      *(int *)(param_1 + 1) = iVar3;
      param_1 = param_1 + 5;
    }
    else {
      *param_1 = 'U';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1 = param_1 + 5;
    }
    break;
  case 0xb:
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<11>
                        (param_2,(this->_impl_).item_.world_id_,param_1);
    break;
  case 0xc:
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    if ((this->_impl_)._oneof_case_[0] == 0xc) {
      uVar7 = (this->_impl_).item_.island_id_;
      *param_1 = '`';
      pbVar11 = param_1 + 1;
      if (0x7f < uVar7) {
        do {
          pbVar10 = pbVar11;
          uVar2 = uVar7 >> 7;
          *pbVar10 = (byte)uVar7 | 0x80;
          pbVar11 = pbVar10 + 1;
          uVar7 = uVar2;
        } while (0x7f < uVar2);
        pbVar10[1] = (byte)uVar2;
        param_1 = pbVar10 + 2;
        break;
      }
    }
    else {
      *param_1 = '`';
      uVar7 = 0;
    }
    param_1[1] = (uchar)uVar7;
    param_1 = param_1 + 2;
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    break;
  case 0x14:
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    if ((this->_impl_)._oneof_case_[0] == 0x14) {
      iVar3 = (this->_impl_).item_.world_id_;
    }
    else {
      iVar3 = 0;
    }
    uVar7 = 0xa0;
    do {
      pbVar11 = param_1;
      bVar6 = (byte)uVar7;
      uVar7 = uVar7 >> 7;
      *pbVar11 = bVar6 | 0x80;
      param_1 = pbVar11 + 1;
    } while (0x7f < uVar7);
    pbVar11[1] = (byte)uVar7;
    pbVar11 = pbVar11 + 2;
    uVar8 = (ulonglong)iVar3;
    if (uVar8 < 0x80) goto LAB_14c16b047;
    do {
      pbVar10 = pbVar11;
      bVar6 = (byte)uVar8;
      uVar8 = uVar8 >> 7;
      *pbVar10 = bVar6 | 0x80;
      pbVar11 = pbVar10 + 1;
    } while (0x7f < uVar8);
    pbVar10[1] = (byte)uVar8;
    param_1 = pbVar10 + 2;
    break;
  case 0x15:
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    if ((this->_impl_)._oneof_case_[0] == 0x15) {
      IVar4 = (this->_impl_).item_;
    }
    else {
      IVar4.login_dt_ = (Timestamp *)0x0;
    }
    uVar7 = 0xa8;
    do {
      pbVar11 = param_1;
      bVar6 = (byte)uVar7;
      uVar7 = uVar7 >> 7;
      *pbVar11 = bVar6 | 0x80;
      param_1 = pbVar11 + 1;
    } while (0x7f < uVar7);
    pbVar11[1] = (byte)uVar7;
    pCVar9 = (ConstantInitialized *)(pbVar11 + 2);
    for (; (Timestamp *)0x7f < IVar4.login_dt_; IVar4.login_dt_ = IVar4.login_dt_ >> 7) {
      *pCVar9 = (ConstantInitialized)((byte)IVar4._constinit_ | 0x80);
      pCVar9 = pCVar9 + 1;
    }
    *pCVar9 = IVar4._constinit_;
    param_1 = (uchar *)(pCVar9 + 1);
    break;
  case 0x16:
    pcVar12 = (char *)((this->_impl_).item_.guild_uid_ & 0xfffffffffffffffc);
    puVar13 = (ulong64 *)(pcVar12 + 0x10);
    pcVar5 = pcVar12;
    if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
      pcVar5 = *(char **)pcVar12;
    }
    local_28._Mydata = "misc.MiscPlayerType.guild_name";
    local_28._Mysize = 0x1e;
    google::protobuf::internal::WireFormatLite::VerifyUtf8String
              (pcVar5,(int)*puVar13,SERIALIZE,&local_28);
    if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
      pcVar12 = *(char **)pcVar12;
    }
    uVar7 = 0x16;
    goto LAB_14c16b09b;
  case 0x17:
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    if ((this->_impl_)._oneof_case_[0] == 0x17) {
      iVar3 = (this->_impl_).item_.world_id_;
    }
    else {
      iVar3 = 0;
    }
    uVar7 = 0xb8;
    do {
      pbVar11 = param_1;
      bVar6 = (byte)uVar7;
      uVar7 = uVar7 >> 7;
      *pbVar11 = bVar6 | 0x80;
      param_1 = pbVar11 + 1;
    } while (0x7f < uVar7);
    pbVar11[1] = (byte)uVar7;
    pbVar11 = pbVar11 + 2;
    uVar8 = (ulonglong)iVar3;
    if (uVar8 < 0x80) goto LAB_14c16b047;
    do {
      pbVar10 = pbVar11;
      bVar6 = (byte)uVar8;
      uVar8 = uVar8 >> 7;
      *pbVar10 = bVar6 | 0x80;
      pbVar11 = pbVar10 + 1;
    } while (0x7f < uVar8);
    pbVar10[1] = (byte)uVar8;
    param_1 = pbVar10 + 2;
    break;
  case 0x18:
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    if ((this->_impl_)._oneof_case_[0] == 0x18) {
      iVar3 = (this->_impl_).item_.world_id_;
    }
    else {
      iVar3 = 0;
    }
    uVar7 = 0xc0;
    do {
      pbVar11 = param_1;
      bVar6 = (byte)uVar7;
      uVar7 = uVar7 >> 7;
      *pbVar11 = bVar6 | 0x80;
      param_1 = pbVar11 + 1;
    } while (0x7f < uVar7);
    pbVar11[1] = (byte)uVar7;
    pbVar11 = pbVar11 + 2;
    for (uVar8 = (ulonglong)iVar3; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
      *pbVar11 = (byte)uVar8 | 0x80;
      pbVar11 = pbVar11 + 1;
    }
LAB_14c16b047:
    *pbVar11 = (byte)uVar8;
    param_1 = pbVar11 + 1;
    break;
  case 0x19:
    pcVar12 = (char *)((this->_impl_).item_.guild_uid_ & 0xfffffffffffffffc);
    puVar13 = (ulong64 *)(pcVar12 + 0x10);
    pcVar5 = pcVar12;
    if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
      pcVar5 = *(char **)pcVar12;
    }
    local_28._Mydata = "misc.MiscPlayerType.custom_info";
    local_28._Mysize = 0x1f;
    google::protobuf::internal::WireFormatLite::VerifyUtf8String
              (pcVar5,(int)*puVar13,SERIALIZE,&local_28);
    if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
      pcVar12 = *(char **)pcVar12;
    }
    uVar7 = 0x19;
LAB_14c16b09b:
    local_28._Mysize = *puVar13;
    local_28._Mydata = pcVar12;
    param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                        (param_2,uVar7,&local_28,param_1);
    break;
  default:
    goto switchD_14c16ac03_default;
  }
switchD_14c16ac03_default:
  if ((this->_padding_ & 1) != 0) {
    puVar1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar1;
  }
  return (uchar *)(ConstantInitialized *)param_1;
}

// GetClassData @ 14c16b170

ClassData * __thiscall misc::MiscPlayerType::GetClassData(MiscPlayerType *this)

{
  return (ClassData *)&MiscPlayerType_class_data_;
}

// PlacementNew_ @ 14c16b190

void * __cdecl misc::MiscPlayerType::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7MiscPlayerType_misc__6B_;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c16b1b0

void * __thiscall
misc::MiscPlayerType::_scalar_deleting_destructor_(MiscPlayerType *this,uint param_1)

{
  this->_padding_ = (longlong)&___7MiscPlayerType_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((this->_impl_)._oneof_case_[0] != 0) {
    clear_item(this);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c16b210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl misc::MiscMinimapMarkerMessage::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  MessageLite *pMVar3;
  MessageLite *pMVar4;
  byte bVar5;
  void *pvVar6;
  undefined8 uVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  ulong64 uVar9;
  Arena *pAVar10;
  Arena *pAVar11;
  undefined1 auStackY_78 [32];
  _Bxty local_40;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  pAVar11 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar5 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar10 = pAVar11;
  if (bVar5 != 0) {
    pAVar10 = (Arena *)(pAVar11->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar8->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          local_40._8_8_ = 0;
          local_40._Ptr = (char *)0x0;
          local_30 = ___xmm_000000000000000f0000000000000000;
          uStack_28 = _UNK_15076add8;
          if (bVar5 != 0) {
            pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
                     pAVar11);
          if (0xf < uStack_28) {
            uVar9 = uStack_28 + 1;
            uVar7 = local_40._Ptr;
            if (0xfff < uVar9) {
              uVar7 = *(undefined8 *)(local_40._Ptr + -8);
              uVar9 = uStack_28 + 0x28;
              if ((char *)0x1f < local_40._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar7,uVar9);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        if (bVar5 != 0) {
          pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar8,pAVar11);
      }
    }
    if ((uVar1 & 2) != 0) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._padding_ & 0xfffffffffffffffc);
      if ((pbVar8->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar11 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_40._8_8_ = 0;
          local_40._Ptr = (char *)0x0;
          local_30 = ___xmm_000000000000000f0000000000000000;
          uStack_28 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 2),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
                     pAVar11);
          if (0xf < uStack_28) {
            uVar9 = uStack_28 + 1;
            uVar7 = local_40._Ptr;
            if (0xfff < uVar9) {
              uVar7 = *(undefined8 *)(local_40._Ptr + -8);
              uVar9 = uStack_28 + 0x28;
              if ((char *)0x1f < local_40._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar7,uVar9);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
        pAVar11 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 2),pbVar8,pAVar11);
      }
    }
    if ((uVar1 & 4) != 0) {
      pMVar3 = (MessageLite *)param_1[2]._internal_metadata_.ptr_;
      pMVar4 = (MessageLite *)param_2[2]._internal_metadata_.ptr_;
      if (pMVar3 == (MessageLite *)0x0) {
        pvVar6 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>(pAVar10,pMVar4)
        ;
        param_1[2]._internal_metadata_.ptr_ = (long64)pvVar6;
      }
      else {
        google::protobuf::Timestamp::MergeImpl(pMVar3,pMVar4);
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

// Clear @ 14c16b4a0

void __thiscall misc::MiscMinimapMarkerMessage::Clear(MiscMinimapMarkerMessage *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).minimap_marker_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      puVar2 = (undefined8 *)((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 4) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).update_dt_);
    }
  }
  if ((uVar1 & 0x38) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).region_index_ = 0;
    (this->_impl_).version_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c16b540

ulong64 __thiscall misc::MiscMinimapMarkerMessage::ByteSizeLong(MiscMinimapMarkerMessage *this)

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
  if ((uVar1 & 0x3f) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).minimap_marker_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
                 + 0x10), lVar2 != 0)) {
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
                 (((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
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
    if ((uVar1 & 4) != 0) {
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).update_dt_);
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
    if (((uVar1 & 8) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 & 0x10) != 0) && (iVar6 = (this->_impl_).region_index_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 & 0x20) != 0) && (iVar6 = (this->_impl_).version_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c16b6c0

uchar * __thiscall
misc::MiscMinimapMarkerMessage::_InternalSerialize
          (MiscMinimapMarkerMessage *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uchar *puVar5;
  char *pcVar6;
  char *pcVar7;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (lVar4 = (this->_impl_).player_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar4,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (iVar2 = (this->_impl_).region_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (iVar2 = (this->_impl_).version_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 4) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (4,(MessageLite *)(this->_impl_).update_dt_,
                         (int)(((this->_impl_).update_dt_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((uVar3 & 1) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).minimap_marker_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar6 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar6 = *(char **)pcVar7;
      }
      local_28._Mysize = 0x2c;
      local_28._Mydata = "misc.MiscMinimapMarkerMessage.minimap_marker";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,5,&local_28,param_1);
    }
  }
  if ((uVar3 & 2) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar6 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar6 = *(char **)pcVar7;
      }
      local_28._Mysize = 0x20;
      local_28._Mydata = "misc.MiscMinimapMarkerMessage.id";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,6,&local_28,param_1);
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

// GetClassData @ 14c16b8a0

ClassData * __thiscall misc::MiscMinimapMarkerMessage::GetClassData(MiscMinimapMarkerMessage *this)

{
  return (ClassData *)&MiscMinimapMarkerMessage_class_data_;
}

// PlacementNew_ @ 14c16b8c0

void * __cdecl
misc::MiscMinimapMarkerMessage::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7MiscMinimapMarkerMessage_misc__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x20) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c16b900

void * __thiscall
misc::MiscMinimapMarkerMessage::_scalar_deleting_destructor_
          (MiscMinimapMarkerMessage *this,uint param_1)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7MiscMinimapMarkerMessage_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).minimap_marker_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).id_);
  this_00 = (this->_impl_).update_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// MergeImpl @ 14c16b990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl misc::MiscGameOptionMessage::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  MessageLite *pMVar3;
  MessageLite *pMVar4;
  byte bVar5;
  void *pvVar6;
  undefined8 uVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  ulong64 uVar9;
  Arena *pAVar10;
  Arena *pAVar11;
  undefined1 auStackY_78 [32];
  _Bxty local_40;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  pAVar11 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar5 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar10 = pAVar11;
  if (bVar5 != 0) {
    pAVar10 = (Arena *)(pAVar11->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar8->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          local_40._8_8_ = 0;
          local_40._Ptr = (char *)0x0;
          local_30 = ___xmm_000000000000000f0000000000000000;
          uStack_28 = _UNK_15076add8;
          if (bVar5 != 0) {
            pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
                     pAVar11);
          if (0xf < uStack_28) {
            uVar9 = uStack_28 + 1;
            uVar7 = local_40._Ptr;
            if (0xfff < uVar9) {
              uVar7 = *(undefined8 *)(local_40._Ptr + -8);
              uVar9 = uStack_28 + 0x28;
              if ((char *)0x1f < local_40._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar7,uVar9);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        if (bVar5 != 0) {
          pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar8,pAVar11);
      }
    }
    if ((uVar1 & 2) != 0) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._padding_ & 0xfffffffffffffffc);
      if ((pbVar8->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar11 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_40._8_8_ = 0;
          local_40._Ptr = (char *)0x0;
          local_30 = ___xmm_000000000000000f0000000000000000;
          uStack_28 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 2),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
                     pAVar11);
          if (0xf < uStack_28) {
            uVar9 = uStack_28 + 1;
            uVar7 = local_40._Ptr;
            if (0xfff < uVar9) {
              uVar7 = *(undefined8 *)(local_40._Ptr + -8);
              uVar9 = uStack_28 + 0x28;
              if ((char *)0x1f < local_40._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar7,uVar9);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
        pAVar11 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 2),pbVar8,pAVar11);
      }
    }
    if ((uVar1 & 4) != 0) {
      pMVar3 = (MessageLite *)param_1[2]._internal_metadata_.ptr_;
      pMVar4 = (MessageLite *)param_2[2]._internal_metadata_.ptr_;
      if (pMVar3 == (MessageLite *)0x0) {
        pvVar6 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>(pAVar10,pMVar4)
        ;
        param_1[2]._internal_metadata_.ptr_ = (long64)pvVar6;
      }
      else {
        google::protobuf::Timestamp::MergeImpl(pMVar3,pMVar4);
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

// Clear @ 14c16bc20

void __thiscall misc::MiscGameOptionMessage::Clear(MiscGameOptionMessage *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).game_option_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      puVar2 = (undefined8 *)((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 4) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).update_dt_);
    }
  }
  if ((uVar1 & 0x38) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).version_ = 0;
    (this->_impl_).region_index_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c16bcc0

ulong64 __thiscall misc::MiscGameOptionMessage::ByteSizeLong(MiscGameOptionMessage *this)

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
  if ((uVar1 & 0x3f) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).game_option_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
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
                 (((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
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
    if ((uVar1 & 4) != 0) {
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).update_dt_);
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
    if (((uVar1 & 8) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 & 0x10) != 0) && (iVar6 = (this->_impl_).version_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 & 0x20) != 0) && (iVar6 = (this->_impl_).region_index_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c16be40

uchar * __thiscall
misc::MiscGameOptionMessage::_InternalSerialize
          (MiscGameOptionMessage *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uchar *puVar5;
  char *pcVar6;
  char *pcVar7;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (lVar4 = (this->_impl_).player_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar4,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (iVar2 = (this->_impl_).version_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar2,param_1);
  }
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 4) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (3,(MessageLite *)(this->_impl_).update_dt_,
                         (int)(((this->_impl_).update_dt_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((uVar3 & 1) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).game_option_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar6 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar6 = *(char **)pcVar7;
      }
      local_28._Mysize = 0x26;
      local_28._Mydata = "misc.MiscGameOptionMessage.game_option";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,4,&local_28,param_1);
    }
  }
  if ((uVar3 & 2) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar6 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar6 = *(char **)pcVar7;
      }
      local_28._Mysize = 0x1d;
      local_28._Mydata = "misc.MiscGameOptionMessage.id";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,5,&local_28,param_1);
    }
  }
  if (((uVar3 & 0x20) != 0) && (iVar2 = (this->_impl_).region_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<6>
                        (param_2,iVar2,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar5;
  }
  return param_1;
}

// GetClassData @ 14c16c020

ClassData * __thiscall misc::MiscGameOptionMessage::GetClassData(MiscGameOptionMessage *this)

{
  return (ClassData *)&MiscGameOptionMessage_class_data_;
}

// PlacementNew_ @ 14c16c040

void * __cdecl
misc::MiscGameOptionMessage::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7MiscGameOptionMessage_misc__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x20) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c16c080

void * __thiscall
misc::MiscGameOptionMessage::_scalar_deleting_destructor_(MiscGameOptionMessage *this,uint param_1)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7MiscGameOptionMessage_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).game_option_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).id_);
  this_00 = (this->_impl_).update_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// MergeImpl @ 14c16c110

void __cdecl misc::PlayerList::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  if ((int)param_2[1]._internal_metadata_.ptr_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)(param_1 + 1),(RepeatedPtrFieldBase *)(param_2 + 1),
               google::protobuf::Arena::CopyConstruct<misc::Player>);
  }
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c16c170

void __thiscall misc::PlayerList::Clear(PlayerList *this)

{
  if (0 < *(int *)&(this->_impl_).players_.field_0x8) {
    google::protobuf::internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&this->_impl_);
  }
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c16c1b0

ulong64 __thiscall misc::PlayerList::ByteSizeLong(PlayerList *this)

{
  uint uVar1;
  ulonglong uVar2;
  RepeatedPtrField<misc::Player> *pRVar3;
  ulong64 uVar4;
  uint uVar5;
  int iVar6;
  Impl_ *pIVar7;
  __uint64 _Var8;
  
  uVar2 = *(ulonglong *)&(this->_impl_).players_;
  pIVar7 = &this->_impl_;
  uVar1 = *(uint *)&(this->_impl_).players_.field_0x8;
  _Var8 = (__uint64)uVar1;
  if ((uVar2 & 1) != 0) {
    pIVar7 = (Impl_ *)(uVar2 + 7);
  }
  pRVar3 = &pIVar7->players_;
  for (; pIVar7 != (Impl_ *)(&pRVar3->field_0x0 + (longlong)(int)uVar1 * 8);
      pIVar7 = (Impl_ *)&(pIVar7->players_).field_0x8) {
    uVar4 = Player::ByteSizeLong(*(Player **)&pIVar7->players_);
    uVar5 = (uint)uVar4 | 1;
    if (__isa_available < 5) {
      iVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 0x1f - iVar6;
    }
    else {
      iVar6 = LZCOUNT(uVar5);
    }
    _Var8 = _Var8 + (iVar6 * -9 + 0x160U >> 6) + uVar4;
  }
  _Var8 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var8,&(this->_impl_)._cached_size_);
  return _Var8;
}

// _InternalSerialize @ 14c16c260

uchar * __thiscall
misc::PlayerList::_InternalSerialize(PlayerList *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  uint uVar3;
  
  uVar1 = *(uint *)&(this->_impl_).players_.field_0x8;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      pMVar2 = *(MessageLite **)&(this->_impl_).players_;
      if (((ulonglong)pMVar2 & 1) != 0) {
        pMVar2 = *(MessageLite **)((longlong)&pMVar2->_padding_ + (longlong)(int)uVar3 * 8 + 7);
      }
      param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                          (1,pMVar2,*(int *)((longlong)&pMVar2[1]._padding_ + 4),param_1,param_2);
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

// GetClassData @ 14c16c2f0

ClassData * __thiscall misc::PlayerList::GetClassData(PlayerList *this)

{
  return (ClassData *)&PlayerList_class_data_;
}

// PlacementNew_ @ 14c16c310

void * __cdecl misc::PlayerList::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7PlayerList_misc__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(Arena **)((longlong)param_2 + 0x20) = param_3;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c16c340

void * __thiscall misc::PlayerList::_scalar_deleting_destructor_(PlayerList *this,uint param_1)

{
  this->_padding_ = (longlong)&___7PlayerList_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if (*(longlong *)&(this->_impl_).players_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&this->_impl_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// MergeImpl @ 14c16c3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl misc::MiscPlayerMessage::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  if ((int)param_2[2]._padding_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&param_1[1]._internal_metadata_,
               (RepeatedPtrFieldBase *)&param_2[1]._internal_metadata_,
               google::protobuf::Arena::CopyConstruct<misc::MiscPlayerType>);
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[3]._padding_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[3]._padding_ & 3) == 0) {
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
                    ((ArenaStringPtr *)(param_1 + 3),
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
                  ((ArenaStringPtr *)(param_1 + 3),pbVar5,pAVar7);
      }
    }
    if (((uVar1 & 2) != 0) && (lVar3 = param_2[3]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[3]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar1 & 4) != 0) && (iVar2 = (int)param_2[4]._padding_, iVar2 != 0)) {
      *(int *)&param_1[4]._padding_ = iVar2;
    }
    if (((uVar1 & 8) != 0) && (iVar2 = *(int *)((longlong)&param_2[4]._padding_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[4]._padding_ + 4) = iVar2;
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

// Clear @ 14c16c540

void __thiscall misc::MiscPlayerMessage::Clear(MiscPlayerMessage *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (0 < *(int *)&(this->_impl_).values_.field_0x8) {
    google::protobuf::internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).values_);
  }
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    puVar2 = (undefined8 *)
             ((ulonglong)(this->_impl_).servername_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar2[2] = 0;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
  }
  if ((uVar1 & 0xe) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).dirty_flag_ = 0;
    (this->_impl_).region_index_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c16c5b0

ulong64 __thiscall misc::MiscPlayerMessage::ByteSizeLong(MiscPlayerMessage *this)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  uint uVar7;
  int iVar8;
  RepeatedPtrField<misc::MiscPlayerType> *pRVar9;
  ulonglong uVar10;
  
  uVar5 = *(ulonglong *)&(this->_impl_).values_;
  pRVar9 = &(this->_impl_).values_;
  uVar1 = *(uint *)&(this->_impl_).values_.field_0x8;
  uVar10 = (ulonglong)uVar1;
  if ((uVar5 & 1) != 0) {
    pRVar9 = (RepeatedPtrField<misc::MiscPlayerType> *)(uVar5 + 7);
  }
  puVar3 = (undefined8 *)&pRVar9->field_0x0;
  for (; pRVar9 != (RepeatedPtrField<misc::MiscPlayerType> *)(puVar3 + (int)uVar1);
      pRVar9 = (RepeatedPtrField<misc::MiscPlayerType> *)&pRVar9->field_0x8) {
    uVar4 = MiscPlayerType::ByteSizeLong(*(MiscPlayerType **)pRVar9);
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
  if ((uVar1 & 0xf) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).servername_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
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
    if (((uVar1 & 2) != 0) && (uVar5 = (this->_impl_).player_uid_, uVar5 != 0)) {
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
    if (((uVar1 & 4) != 0) && (iVar8 = (this->_impl_).dirty_flag_, iVar8 != 0)) {
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
      uVar10 = uVar10 + 1 + (ulonglong)(iVar8 * -9 + 0x280U >> 6);
    }
    if (((uVar1 & 8) != 0) && (iVar8 = (this->_impl_).region_index_, iVar8 != 0)) {
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

// _InternalSerialize @ 14c16c780

uchar * __thiscall
misc::MiscPlayerMessage::_InternalSerialize
          (MiscPlayerMessage *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte bVar7;
  char *pcVar8;
  MessageLite *pMVar9;
  uint uVar10;
  char *pcVar11;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  uVar10 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) && ((this->_impl_).dirty_flag_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar6 = (ulonglong)(this->_impl_).dirty_flag_;
    *param_1 = 8;
    while( true ) {
      pbVar5 = param_1 + 1;
      bVar7 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *pbVar5 = bVar7 | 0x80;
      param_1 = pbVar5;
    }
    *pbVar5 = bVar7;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar4 = (this->_impl_).player_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar4,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (iVar2 = (this->_impl_).region_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  uVar3 = *(uint *)&(this->_impl_).values_.field_0x8;
  if (uVar3 != 0) {
    do {
      pMVar9 = *(MessageLite **)&(this->_impl_).values_;
      if (((ulonglong)pMVar9 & 1) != 0) {
        pMVar9 = *(MessageLite **)((longlong)&pMVar9->_padding_ + (longlong)(int)uVar10 * 8 + 7);
      }
      param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                          (5,pMVar9,(int)pMVar9[1]._internal_metadata_.ptr_,param_1,param_2);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar3);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar11 = (char *)((ulonglong)(this->_impl_).servername_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar11 + 0x10);
    if (*(longlong *)(pcVar11 + 0x10) != 0) {
      pcVar8 = pcVar11;
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar8 = *(char **)pcVar11;
      }
      local_28._Mysize = 0x21;
      local_28._Mydata = "misc.MiscPlayerMessage.ServerName";
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
  if ((this->_padding_ & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                        ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                         param_2);
  }
  return param_1;
}

// GetClassData @ 14c16c920

ClassData * __thiscall misc::MiscPlayerMessage::GetClassData(MiscPlayerMessage *this)

{
  return (ClassData *)&MiscPlayerMessage_class_data_;
}

// PlacementNew_ @ 14c16c940

void * __cdecl misc::MiscPlayerMessage::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7MiscPlayerMessage_misc__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x30) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(Arena **)((longlong)param_2 + 0x28) = param_3;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c16c980

void * __thiscall
misc::MiscPlayerMessage::_scalar_deleting_destructor_(MiscPlayerMessage *this,uint param_1)

{
  this->_padding_ = (longlong)&___7MiscPlayerMessage_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).servername_);
  if (*(longlong *)&(this->_impl_).values_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).values_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// CopyConstruct<misc::MiscPlayerType> @ 14c16c9f0

void * __cdecl
google::protobuf::Arena::CopyConstruct<misc::MiscPlayerType>(Arena *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if (param_1 == (Arena *)0x0) {
    puVar2 = ::operator_new(0x20);
  }
  else {
    puVar2 = Allocate(param_1,0x20);
  }
  puVar2[1] = param_1;
  *puVar2 = &___7MiscPlayerType_misc__6B_;
  if ((*(byte *)((longlong)param_2 + 8) & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(puVar2 + 1),
               (UnknownFieldSet *)((*(ulonglong *)((longlong)param_2 + 8) & 0xfffffffffffffffe) + 8)
              );
  }
  *(undefined4 *)(puVar2 + 3) = 0;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar1;
  switch(uVar1) {
  case 1:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x14:
  case 0x17:
  case 0x18:
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)param_2 + 0x10);
    break;
  case 2:
  case 3:
    pvVar3 = CopyConstruct<google::protobuf::Timestamp>
                       (param_1,*(void **)((longlong)param_2 + 0x10));
    puVar2[2] = pvVar3;
    break;
  case 4:
  case 5:
  case 0x16:
  case 0x19:
    internal::ArenaStringPtr::ArenaStringPtr
              ((ArenaStringPtr *)(puVar2 + 2),param_1,(ArenaStringPtr *)((longlong)param_2 + 0x10));
    break;
  case 0x15:
    puVar2[2] = *(undefined8 *)((longlong)param_2 + 0x10);
  }
  return puVar2;
}

// CopyConstruct<misc::Player> @ 14c16cb40

void * __cdecl google::protobuf::Arena::CopyConstruct<misc::Player>(Arena *param_1,void *param_2)

{
  Player *pPVar1;
  
  if (param_1 == (Arena *)0x0) {
    pPVar1 = ::operator_new(0x90);
  }
  else {
    pPVar1 = Allocate(param_1,0x90);
  }
  pPVar1 = misc::Player::Player(pPVar1,param_1,param_2);
  return pPVar1;
}

// WriteInt32ToArrayWithField<8> @ 14c16cb90

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<8>
          (EpsCopyOutputStream *param_1,int param_2,uchar *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  if (param_1->end_ <= param_3) {
    param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_1,param_3);
  }
  *param_3 = 0x40;
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

// WriteInt32ToArrayWithField<9> @ 14c16cbf0

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<9>
          (EpsCopyOutputStream *param_1,int param_2,uchar *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  if (param_1->end_ <= param_3) {
    param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_1,param_3);
  }
  *param_3 = 0x48;
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

// ArenaStringPtr @ 14c16cc50

ArenaStringPtr * __thiscall
google::protobuf::internal::ArenaStringPtr::ArenaStringPtr
          (ArenaStringPtr *this,Arena *param_1,ArenaStringPtr *param_2)

{
  void *pvVar1;
  TaggedStringPtr TVar2;
  
  pvVar1 = (param_2->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar1 & 3) == 0) {
    (this->tagged_ptr_).ptr_ = pvVar1;
    return this;
  }
  TVar2 = TaggedStringPtr::ForceCopy(&param_2->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
  (this->tagged_ptr_).ptr_ = *TVar2.ptr_;
  return this;
}

// MiscBreachDataMessage @ 14c16cca0

MiscBreachDataMessage * __thiscall
misc::MiscBreachDataMessage::MiscBreachDataMessage(MiscBreachDataMessage *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MiscBreachDataMessage_misc__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).server_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).island_id_ = 0;
  (this->_impl_).breach_id_ = 0;
  (this->_impl_).zone_id_ = 0;
  (this->_impl_).region_index_ = 0;
  return this;
}

// MiscBreachDataMessage @ 14c16cce0

MiscBreachDataMessage * __thiscall
misc::MiscBreachDataMessage::MiscBreachDataMessage
          (MiscBreachDataMessage *this,Arena *param_1,MiscBreachDataMessage *param_2)

{
  ArenaStringPtr *this_00;
  int iVar1;
  int iVar2;
  TaggedStringPtr TVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MiscBreachDataMessage_misc__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).server_name_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar4 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  (this->_impl_).server_name_.tagged_ptr_.ptr_ = pvVar4;
  iVar1 = (param_2->_impl_).island_id_;
  iVar2 = (param_2->_impl_).breach_id_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).island_id_ = iVar1;
  (this->_impl_).breach_id_ = iVar2;
  (this->_impl_).zone_id_ = (param_2->_impl_).zone_id_;
  (this->_impl_).region_index_ = (param_2->_impl_).region_index_;
  return this;
}

// MiscGameOptionMessage @ 14c16cd80

MiscGameOptionMessage * __thiscall
misc::MiscGameOptionMessage::MiscGameOptionMessage(MiscGameOptionMessage *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MiscGameOptionMessage_misc__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).game_option_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).id_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).update_dt_ = (Timestamp *)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).version_ = 0;
  (this->_impl_).region_index_ = 0;
  return this;
}

// MiscGameOptionMessage @ 14c16cdc0

MiscGameOptionMessage * __thiscall
misc::MiscGameOptionMessage::MiscGameOptionMessage
          (MiscGameOptionMessage *this,Arena *param_1,MiscGameOptionMessage *param_2)

{
  ArenaStringPtr *pAVar1;
  int iVar2;
  int iVar3;
  TaggedStringPtr TVar4;
  void *pvVar5;
  Timestamp *pTVar6;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MiscGameOptionMessage_misc__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).game_option_;
  pTVar6 = (Timestamp *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar5 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar5 & 3) != 0) {
    TVar4 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar5 = *TVar4.ptr_;
  }
  pAVar1 = &(param_2->_impl_).id_;
  (this->_impl_).game_option_.tagged_ptr_.ptr_ = pvVar5;
  pvVar5 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar5 & 3) != 0) {
    TVar4 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar5 = *TVar4.ptr_;
  }
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar5;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) {
    pTVar6 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).update_dt_);
  }
  (this->_impl_).update_dt_ = pTVar6;
  iVar2 = (param_2->_impl_).version_;
  iVar3 = (param_2->_impl_).region_index_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).version_ = iVar2;
  (this->_impl_).region_index_ = iVar3;
  return this;
}

// MiscMinimapMarkerMessage @ 14c16ce80

MiscMinimapMarkerMessage * __thiscall
misc::MiscMinimapMarkerMessage::MiscMinimapMarkerMessage
          (MiscMinimapMarkerMessage *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MiscMinimapMarkerMessage_misc__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).minimap_marker_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).id_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).update_dt_ = (Timestamp *)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).region_index_ = 0;
  (this->_impl_).version_ = 0;
  return this;
}

// MiscMinimapMarkerMessage @ 14c16cec0

MiscMinimapMarkerMessage * __thiscall
misc::MiscMinimapMarkerMessage::MiscMinimapMarkerMessage
          (MiscMinimapMarkerMessage *this,Arena *param_1,MiscMinimapMarkerMessage *param_2)

{
  ArenaStringPtr *pAVar1;
  int iVar2;
  int iVar3;
  TaggedStringPtr TVar4;
  void *pvVar5;
  Timestamp *pTVar6;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MiscMinimapMarkerMessage_misc__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).minimap_marker_;
  pTVar6 = (Timestamp *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar5 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar5 & 3) != 0) {
    TVar4 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar5 = *TVar4.ptr_;
  }
  pAVar1 = &(param_2->_impl_).id_;
  (this->_impl_).minimap_marker_.tagged_ptr_.ptr_ = pvVar5;
  pvVar5 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar5 & 3) != 0) {
    TVar4 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar5 = *TVar4.ptr_;
  }
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar5;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) {
    pTVar6 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).update_dt_);
  }
  (this->_impl_).update_dt_ = pTVar6;
  iVar2 = (param_2->_impl_).region_index_;
  iVar3 = (param_2->_impl_).version_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).region_index_ = iVar2;
  (this->_impl_).version_ = iVar3;
  return this;
}

// MiscPlayerMessage @ 14c16cf80

MiscPlayerMessage * __thiscall
misc::MiscPlayerMessage::MiscPlayerMessage(MiscPlayerMessage *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MiscPlayerMessage_misc__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->_impl_).values_ = 0;
  *(undefined8 *)&(this->_impl_).values_.field_0x8 = 0;
  (this->_impl_).servername_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  *(Arena **)&(this->_impl_).values_.field_0x10 = param_1;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).dirty_flag_ = 0;
  (this->_impl_).region_index_ = 0;
  return this;
}

// MiscPlayerMessage @ 14c16cfc0

MiscPlayerMessage * __thiscall
misc::MiscPlayerMessage::MiscPlayerMessage
          (MiscPlayerMessage *this,Arena *param_1,MiscPlayerMessage *param_2)

{
  RepeatedPtrField<misc::MiscPlayerType> *this_00;
  int iVar1;
  int iVar2;
  TaggedStringPtr TVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MiscPlayerMessage_misc__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(this->_impl_).values_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  *(Arena **)&(this->_impl_).values_.field_0x10 = param_1;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).values_.field_0x8 = 0;
  if (*(int *)&(param_2->_impl_).values_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this_00,(RepeatedPtrFieldBase *)&(param_2->_impl_).values_,
               google::protobuf::Arena::CopyConstruct<misc::MiscPlayerType>);
  }
  pvVar4 = (param_2->_impl_).servername_.tagged_ptr_.ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&(param_2->_impl_).servername_.tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  (this->_impl_).servername_.tagged_ptr_.ptr_ = pvVar4;
  iVar1 = (param_2->_impl_).dirty_flag_;
  iVar2 = (param_2->_impl_).region_index_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).dirty_flag_ = iVar1;
  (this->_impl_).region_index_ = iVar2;
  return this;
}

// MiscPlayerType @ 14c16d080

MiscPlayerType * __thiscall
misc::MiscPlayerType::MiscPlayerType(MiscPlayerType *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MiscPlayerType_misc__6B_;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = 0;
  return this;
}

// MiscPlayerType @ 14c16d0a0

MiscPlayerType * __thiscall
misc::MiscPlayerType::MiscPlayerType(MiscPlayerType *this,Arena *param_1,MiscPlayerType *param_2)

{
  uint uVar1;
  Timestamp *pTVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MiscPlayerType_misc__6B_;
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
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x14:
  case 0x17:
  case 0x18:
    (this->_impl_).item_.world_id_ = (param_2->_impl_).item_.world_id_;
    break;
  case 2:
  case 3:
    pTVar2 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).item_.login_dt_);
    (this->_impl_).item_.login_dt_ = pTVar2;
    break;
  case 4:
  case 5:
  case 0x16:
  case 0x19:
    google::protobuf::internal::ArenaStringPtr::ArenaStringPtr
              ((ArenaStringPtr *)&this->_impl_,param_1,(ArenaStringPtr *)&param_2->_impl_);
    break;
  case 0x15:
    (this->_impl_).item_ = (param_2->_impl_).item_;
  }
  return this;
}

// NicknameData @ 14c16d1d0

NicknameData * __thiscall misc::NicknameData::NicknameData(NicknameData *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7NicknameData_misc__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).id_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).origin_nickname_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).partition_key_ = 0;
  (this->_impl_).region_index_ = 0;
  (this->_impl_).world_id_ = 0;
  return this;
}

// NicknameData @ 14c16d210

NicknameData * __thiscall
misc::NicknameData::NicknameData(NicknameData *this,Arena *param_1,NicknameData *param_2)

{
  ArenaStringPtr *pAVar1;
  int iVar2;
  int iVar3;
  TaggedStringPtr TVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7NicknameData_misc__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).id_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar5 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar5 & 3) != 0) {
    TVar4 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar5 = *TVar4.ptr_;
  }
  pAVar1 = &(param_2->_impl_).origin_nickname_;
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar5;
  pvVar5 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar5 & 3) != 0) {
    TVar4 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar5 = *TVar4.ptr_;
  }
  (this->_impl_).origin_nickname_.tagged_ptr_.ptr_ = pvVar5;
  iVar2 = (param_2->_impl_).partition_key_;
  iVar3 = (param_2->_impl_).region_index_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).partition_key_ = iVar2;
  (this->_impl_).region_index_ = iVar3;
  (this->_impl_).world_id_ = (param_2->_impl_).world_id_;
  return this;
}

// NicknameMessage @ 14c16d2d0

NicknameMessage * __thiscall
misc::NicknameMessage::NicknameMessage(NicknameMessage *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7NicknameMessage_misc__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).server_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).region_index_ = 0;
  (this->_impl_).world_id_ = 0;
  (this->_impl_).dirty_flag_ = 0;
  return this;
}

// NicknameMessage @ 14c16d310

NicknameMessage * __thiscall
misc::NicknameMessage::NicknameMessage
          (NicknameMessage *this,Arena *param_1,NicknameMessage *param_2)

{
  ArenaStringPtr *pAVar1;
  int iVar2;
  int iVar3;
  TaggedStringPtr TVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7NicknameMessage_misc__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).nickname_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar5 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar5 & 3) != 0) {
    TVar4 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar5 = *TVar4.ptr_;
  }
  pAVar1 = &(param_2->_impl_).server_name_;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ = pvVar5;
  pvVar5 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar5 & 3) != 0) {
    TVar4 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar5 = *TVar4.ptr_;
  }
  (this->_impl_).server_name_.tagged_ptr_.ptr_ = pvVar5;
  iVar2 = (param_2->_impl_).region_index_;
  iVar3 = (param_2->_impl_).world_id_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).region_index_ = iVar2;
  (this->_impl_).world_id_ = iVar3;
  (this->_impl_).dirty_flag_ = (param_2->_impl_).dirty_flag_;
  return this;
}

// PkHistoryRequest @ 14c16d3d0

PkHistoryRequest * __thiscall
misc::PkHistoryRequest::PkHistoryRequest(PkHistoryRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PkHistoryRequest_misc__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).target_nickname_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).target_guild_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).current_time_ = (Timestamp *)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).target_player_uid_ = 0;
  (this->_impl_).target_char_id_ = 0;
  (this->_impl_).target_guild_icon_ = 0;
  (this->_impl_).target_guild_uid_ = 0;
  (this->_impl_).target_char_level_ = 0;
  (this->_impl_).target_combat_power_ = 0.0;
  (this->_impl_).pk_state_ = 0;
  (this->_impl_).region_index_ = 0;
  return this;
}

// PkHistoryRequest @ 14c16d420

PkHistoryRequest * __thiscall
misc::PkHistoryRequest::PkHistoryRequest
          (PkHistoryRequest *this,Arena *param_1,PkHistoryRequest *param_2)

{
  ArenaStringPtr *pAVar1;
  long64 lVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  TaggedStringPtr TVar6;
  void *pvVar7;
  Timestamp *pTVar8;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PkHistoryRequest_misc__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).target_nickname_;
  pTVar8 = (Timestamp *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar7 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar7 & 3) != 0) {
    TVar6 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar7 = *TVar6.ptr_;
  }
  pAVar1 = &(param_2->_impl_).target_guild_name_;
  (this->_impl_).target_nickname_.tagged_ptr_.ptr_ = pvVar7;
  pvVar7 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar7 & 3) != 0) {
    TVar6 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar7 = *TVar6.ptr_;
  }
  (this->_impl_).target_guild_name_.tagged_ptr_.ptr_ = pvVar7;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) {
    pTVar8 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).current_time_);
  }
  (this->_impl_).current_time_ = pTVar8;
  lVar2 = (param_2->_impl_).target_player_uid_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).target_player_uid_ = lVar2;
  iVar3 = (param_2->_impl_).target_guild_icon_;
  lVar2 = (param_2->_impl_).target_guild_uid_;
  (this->_impl_).target_char_id_ = (param_2->_impl_).target_char_id_;
  (this->_impl_).target_guild_icon_ = iVar3;
  (this->_impl_).target_guild_uid_ = lVar2;
  fVar4 = (param_2->_impl_).target_combat_power_;
  iVar3 = (param_2->_impl_).pk_state_;
  iVar5 = (param_2->_impl_).region_index_;
  (this->_impl_).target_char_level_ = (param_2->_impl_).target_char_level_;
  (this->_impl_).target_combat_power_ = fVar4;
  (this->_impl_).pk_state_ = iVar3;
  (this->_impl_).region_index_ = iVar5;
  return this;
}

// Player @ 14c16d4f0

Player * __thiscall misc::Player::Player(Player *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7Player_misc__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).player_session_uid_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).guild_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).custom_info_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).id_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).login_dt_ = (Timestamp *)0x0;
  (this->_impl_).logout_dt_ = (Timestamp *)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).world_id_ = 0;
  (this->_impl_).player_grade_ = 0;
  (this->_impl_).region_index_ = 0;
  (this->_impl_).guild_icon_ = 0;
  (this->_impl_).guild_uid_ = 0;
  (this->_impl_).island_id_ = 0;
  (this->_impl_).main_char_id_ = 0;
  (this->_impl_).main_char_level_ = 0;
  (this->_impl_).main_char_skin_ = 0;
  (this->_impl_).main_char_combat_power_ = 0.0;
  (this->_impl_).player_icon_ = 0;
  (this->_impl_).main_quest_id_ = 0;
  (this->_impl_).game_server_index_ = 0;
  return this;
}

// Player @ 14c16d550

Player * __thiscall misc::Player::Player(Player *this,Arena *param_1,Player *param_2)

{
  ArenaStringPtr *pAVar1;
  uint uVar2;
  long64 lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  TaggedStringPtr TVar7;
  void *pvVar8;
  Timestamp *pTVar9;
  Timestamp *pTVar10;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7Player_misc__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).nickname_;
  pTVar10 = (Timestamp *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar8 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar8 & 3) != 0) {
    TVar7 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar8 = *TVar7.ptr_;
  }
  pAVar1 = &(param_2->_impl_).player_session_uid_;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ = pvVar8;
  pvVar8 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar8 & 3) != 0) {
    TVar7 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar8 = *TVar7.ptr_;
  }
  pAVar1 = &(param_2->_impl_).guild_name_;
  (this->_impl_).player_session_uid_.tagged_ptr_.ptr_ = pvVar8;
  pvVar8 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar8 & 3) != 0) {
    TVar7 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    pvVar8 = *TVar7.ptr_;
  }
  pAVar1 = &(param_2->_impl_).custom_info_;
  (this->_impl_).guild_name_.tagged_ptr_.ptr_ = pvVar8;
  pvVar8 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar8 & 3) != 0) {
    TVar7 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000020);
                    /* WARNING: Load size is inaccurate */
    pvVar8 = *TVar7.ptr_;
  }
  pAVar1 = &(param_2->_impl_).id_;
  (this->_impl_).custom_info_.tagged_ptr_.ptr_ = pvVar8;
  pvVar8 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar8 & 3) != 0) {
    TVar7 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0xffffffffffffffc8);
                    /* WARNING: Load size is inaccurate */
    pvVar8 = *TVar7.ptr_;
  }
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar8;
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  pTVar9 = pTVar10;
  if ((uVar2 & 0x20) != 0) {
    pTVar9 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).login_dt_);
  }
  (this->_impl_).login_dt_ = pTVar9;
  if ((uVar2 & 0x40) != 0) {
    pTVar10 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                        (param_1,(param_2->_impl_).logout_dt_);
  }
  (this->_impl_).logout_dt_ = pTVar10;
  iVar4 = (param_2->_impl_).world_id_;
  iVar5 = (param_2->_impl_).player_grade_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).world_id_ = iVar4;
  (this->_impl_).player_grade_ = iVar5;
  iVar4 = (param_2->_impl_).guild_icon_;
  lVar3 = (param_2->_impl_).guild_uid_;
  (this->_impl_).region_index_ = (param_2->_impl_).region_index_;
  (this->_impl_).guild_icon_ = iVar4;
  (this->_impl_).guild_uid_ = lVar3;
  iVar4 = (param_2->_impl_).main_char_id_;
  iVar5 = (param_2->_impl_).main_char_level_;
  iVar6 = (param_2->_impl_).main_char_skin_;
  (this->_impl_).island_id_ = (param_2->_impl_).island_id_;
  (this->_impl_).main_char_id_ = iVar4;
  (this->_impl_).main_char_level_ = iVar5;
  (this->_impl_).main_char_skin_ = iVar6;
  iVar4 = (param_2->_impl_).player_icon_;
  iVar5 = (param_2->_impl_).main_quest_id_;
  iVar6 = (param_2->_impl_).game_server_index_;
  (this->_impl_).main_char_combat_power_ = (param_2->_impl_).main_char_combat_power_;
  (this->_impl_).player_icon_ = iVar4;
  (this->_impl_).main_quest_id_ = iVar5;
  (this->_impl_).game_server_index_ = iVar6;
  return this;
}

// PlayerList @ 14c16d6b0

PlayerList * __thiscall misc::PlayerList::PlayerList(PlayerList *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PlayerList_misc__6B_;
  *(undefined8 *)&(this->_impl_).players_ = 0;
  *(undefined8 *)&(this->_impl_).players_.field_0x8 = 0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  *(Arena **)&(this->_impl_).players_.field_0x10 = param_1;
  return this;
}

// PlayerList @ 14c16d6e0

PlayerList * __thiscall
misc::PlayerList::PlayerList(PlayerList *this,Arena *param_1,PlayerList *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PlayerList_misc__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  *(Arena **)&(this->_impl_).players_.field_0x10 = param_1;
  *(undefined8 *)&(this->_impl_).players_ = 0;
  *(undefined8 *)&(this->_impl_).players_.field_0x8 = 0;
  if (*(int *)&(param_2->_impl_).players_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&this->_impl_,(RepeatedPtrFieldBase *)&param_2->_impl_,
               google::protobuf::Arena::CopyConstruct<misc::Player>);
  }
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  return this;
}

// PlayersByNameRequest @ 14c16d770

PlayersByNameRequest * __thiscall
misc::PlayersByNameRequest::PlayersByNameRequest(PlayersByNameRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PlayersByNameRequest_misc__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).region_index_ = 0;
  return this;
}

// PlayersByNameRequest @ 14c16d7a0

PlayersByNameRequest * __thiscall
misc::PlayersByNameRequest::PlayersByNameRequest
          (PlayersByNameRequest *this,Arena *param_1,PlayersByNameRequest *param_2)

{
  ArenaStringPtr *this_00;
  TaggedStringPtr TVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PlayersByNameRequest_misc__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).nickname_;
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
  (this->_impl_).region_index_ = (param_2->_impl_).region_index_;
  return this;
}

// ~RepeatedPtrField<misc::MiscPlayerType> @ 14c16d830

void __thiscall
google::protobuf::RepeatedPtrField<misc::MiscPlayerType>::~RepeatedPtrField<misc::MiscPlayerType>
          (RepeatedPtrField<misc::MiscPlayerType> *this)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  RepeatedPtrField<misc::MiscPlayerType> *pRVar4;
  
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
    pRVar4 = (RepeatedPtrField<misc::MiscPlayerType> *)(*(longlong *)this + 7);
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

// ~RepeatedPtrField<misc::Player> @ 14c16d850

void __thiscall
google::protobuf::RepeatedPtrField<misc::Player>::~RepeatedPtrField<misc::Player>
          (RepeatedPtrField<misc::Player> *this)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  RepeatedPtrField<misc::Player> *pRVar4;
  
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
    pRVar4 = (RepeatedPtrField<misc::Player> *)(*(longlong *)this + 7);
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

// ~MiscBreachDataMessage @ 14c16d870

void __thiscall misc::MiscBreachDataMessage::~MiscBreachDataMessage(MiscBreachDataMessage *this)

{
  this->_padding_ = (longlong)&___7MiscBreachDataMessage_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).server_name_);
  return;
}

// ~MiscGameOptionMessage @ 14c16d8b0

void __thiscall misc::MiscGameOptionMessage::~MiscGameOptionMessage(MiscGameOptionMessage *this)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7MiscGameOptionMessage_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).game_option_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).id_);
  this_00 = (this->_impl_).update_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// ~MiscMinimapMarkerMessage @ 14c16d920

void __thiscall
misc::MiscMinimapMarkerMessage::~MiscMinimapMarkerMessage(MiscMinimapMarkerMessage *this)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7MiscMinimapMarkerMessage_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).minimap_marker_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).id_);
  this_00 = (this->_impl_).update_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// ~MiscPlayerMessage @ 14c16d990

void __thiscall misc::MiscPlayerMessage::~MiscPlayerMessage(MiscPlayerMessage *this)

{
  this->_padding_ = (longlong)&___7MiscPlayerMessage_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).servername_);
  if (*(longlong *)&(this->_impl_).values_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).values_);
    return;
  }
  return;
}

// ~MiscPlayerType @ 14c16d9e0

void __thiscall misc::MiscPlayerType::~MiscPlayerType(MiscPlayerType *this)

{
  this->_padding_ = (longlong)&___7MiscPlayerType_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((this->_impl_)._oneof_case_[0] != 0) {
    clear_item(this);
    return;
  }
  return;
}

// ~NicknameData @ 14c16da20

void __thiscall misc::NicknameData::~NicknameData(NicknameData *this)

{
  this->_padding_ = (longlong)&___7NicknameData_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).id_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).origin_nickname_);
  return;
}

// ~NicknameMessage @ 14c16da60

void __thiscall misc::NicknameMessage::~NicknameMessage(NicknameMessage *this)

{
  this->_padding_ = (longlong)&___7NicknameMessage_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).server_name_);
  return;
}

// ~PkHistoryRequest @ 14c16daa0

void __thiscall misc::PkHistoryRequest::~PkHistoryRequest(PkHistoryRequest *this)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7PkHistoryRequest_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).target_nickname_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).target_guild_name_);
  this_00 = (this->_impl_).current_time_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// ~Player @ 14c16db10

void __thiscall misc::Player::~Player(Player *this)

{
  Timestamp *pTVar1;
  
  this->_padding_ = (longlong)&___7Player_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).player_session_uid_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).guild_name_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).custom_info_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).id_);
  pTVar1 = (this->_impl_).login_dt_;
  if (pTVar1 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(pTVar1);
    ::operator_delete(pTVar1,0x28);
  }
  pTVar1 = (this->_impl_).logout_dt_;
  if (pTVar1 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(pTVar1);
    ::operator_delete(pTVar1,0x28);
  }
  return;
}

// ~PlayerList @ 14c16dbb0

void __thiscall misc::PlayerList::~PlayerList(PlayerList *this)

{
  this->_padding_ = (longlong)&___7PlayerList_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if (*(longlong *)&(this->_impl_).players_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&this->_impl_);
    return;
  }
  return;
}

// ~PlayersByNameRequest @ 14c16dc00

void __thiscall misc::PlayersByNameRequest::~PlayersByNameRequest(PlayersByNameRequest *this)

{
  this->_padding_ = (longlong)&___7PlayersByNameRequest_misc__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  return;
}

// CopyFrom @ 14c16dc40

void __thiscall
misc::MiscBreachDataMessage::CopyFrom(MiscBreachDataMessage *this,MiscBreachDataMessage *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c16dc80

void __thiscall
misc::MiscGameOptionMessage::CopyFrom(MiscGameOptionMessage *this,MiscGameOptionMessage *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c16dcc0

void __thiscall
misc::MiscMinimapMarkerMessage::CopyFrom
          (MiscMinimapMarkerMessage *this,MiscMinimapMarkerMessage *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c16dd00

void __thiscall
misc::MiscPlayerMessage::CopyFrom(MiscPlayerMessage *this,MiscPlayerMessage *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c16dd40

void __thiscall misc::MiscPlayerType::CopyFrom(MiscPlayerType *this,MiscPlayerType *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c16dd80

void __thiscall misc::NicknameData::CopyFrom(NicknameData *this,NicknameData *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c16ddc0

void __thiscall misc::NicknameMessage::CopyFrom(NicknameMessage *this,NicknameMessage *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c16de00

void __thiscall misc::PkHistoryRequest::CopyFrom(PkHistoryRequest *this,PkHistoryRequest *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c16de40

void __thiscall misc::Player::CopyFrom(Player *this,Player *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c16de80

void __thiscall misc::PlayerList::CopyFrom(PlayerList *this,PlayerList *param_1)

{
  if (param_1 != this) {
    Clear(this);
    if (*(int *)&(param_1->_impl_).players_.field_0x8 != 0) {
      google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
                ((RepeatedPtrFieldBase *)&this->_impl_,(RepeatedPtrFieldBase *)&param_1->_impl_,
                 google::protobuf::Arena::CopyConstruct<misc::Player>);
    }
    if ((param_1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&this->_padding_,
                 (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    }
  }
  return;
}

// CopyFrom @ 14c16dee0

void __thiscall
misc::PlayersByNameRequest::CopyFrom(PlayersByNameRequest *this,PlayersByNameRequest *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c16df20

Metadata * __thiscall
misc::MiscBreachDataMessage::GetMetadata
          (MiscBreachDataMessage *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&MiscBreachDataMessage_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c16df60

Metadata * __thiscall
misc::MiscGameOptionMessage::GetMetadata
          (MiscGameOptionMessage *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&MiscGameOptionMessage_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c16dfa0

Metadata * __thiscall
misc::MiscMinimapMarkerMessage::GetMetadata
          (MiscMinimapMarkerMessage *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&MiscMinimapMarkerMessage_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c16dfe0

Metadata * __thiscall
misc::MiscPlayerMessage::GetMetadata(MiscPlayerMessage *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&MiscPlayerMessage_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c16e020

Metadata * __thiscall
misc::MiscPlayerType::GetMetadata(MiscPlayerType *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&MiscPlayerType_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c16e060

Metadata * __thiscall
misc::NicknameData::GetMetadata(NicknameData *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&NicknameData_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c16e0a0

Metadata * __thiscall
misc::NicknameMessage::GetMetadata(NicknameMessage *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&NicknameMessage_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c16e0e0

Metadata * __thiscall
misc::PkHistoryRequest::GetMetadata(PkHistoryRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&PkHistoryRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c16e120

Metadata * __thiscall misc::Player::GetMetadata(Player *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&Player_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c16e160

Metadata * __thiscall
misc::PlayerList::GetMetadata(PlayerList *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&PlayerList_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c16e1a0

Metadata * __thiscall
misc::PlayersByNameRequest::GetMetadata(PlayersByNameRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&PlayersByNameRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c16e1e0

void __thiscall
misc::MiscBreachDataMessage::InternalSwap
          (MiscBreachDataMessage *this,MiscBreachDataMessage *param_1)

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
  pvVar3 = (param_1->_impl_).server_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).server_name_.tagged_ptr_.ptr_ = (this->_impl_).server_name_.tagged_ptr_.ptr_;
  (this->_impl_).server_name_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).player_uid_,&(this->_impl_).field_0x2c,&(param_1->_impl_).player_uid_);
  return;
}

// InternalSwap @ 14c16e230

void __thiscall
misc::MiscGameOptionMessage::InternalSwap
          (MiscGameOptionMessage *this,MiscGameOptionMessage *param_1)

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
  pvVar3 = (param_1->_impl_).game_option_.tagged_ptr_.ptr_;
  (param_1->_impl_).game_option_.tagged_ptr_.ptr_ = (this->_impl_).game_option_.tagged_ptr_.ptr_;
  (this->_impl_).game_option_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).id_.tagged_ptr_.ptr_;
  (param_1->_impl_).id_.tagged_ptr_.ptr_ = (this->_impl_).id_.tagged_ptr_.ptr_;
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).update_dt_,this + 1,&(param_1->_impl_).update_dt_);
  return;
}

// InternalSwap @ 14c16e290

void __thiscall
misc::MiscMinimapMarkerMessage::InternalSwap
          (MiscMinimapMarkerMessage *this,MiscMinimapMarkerMessage *param_1)

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
  pvVar3 = (param_1->_impl_).minimap_marker_.tagged_ptr_.ptr_;
  (param_1->_impl_).minimap_marker_.tagged_ptr_.ptr_ =
       (this->_impl_).minimap_marker_.tagged_ptr_.ptr_;
  (this->_impl_).minimap_marker_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).id_.tagged_ptr_.ptr_;
  (param_1->_impl_).id_.tagged_ptr_.ptr_ = (this->_impl_).id_.tagged_ptr_.ptr_;
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).update_dt_,this + 1,&(param_1->_impl_).update_dt_);
  return;
}

// InternalSwap @ 14c16e2f0

void __thiscall
misc::MiscPlayerMessage::InternalSwap(MiscPlayerMessage *this,MiscPlayerMessage *param_1)

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
            ((char *)&(this->_impl_).values_,(char *)&(param_1->_impl_).values_);
  pvVar3 = (param_1->_impl_).servername_.tagged_ptr_.ptr_;
  (param_1->_impl_).servername_.tagged_ptr_.ptr_ = (this->_impl_).servername_.tagged_ptr_.ptr_;
  (this->_impl_).servername_.tagged_ptr_.ptr_ = pvVar3;
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).player_uid_,(char *)&(param_1->_impl_).player_uid_);
  return;
}

// InternalSwap @ 14c16e360

void __thiscall misc::MiscPlayerType::InternalSwap(MiscPlayerType *this,MiscPlayerType *param_1)

{
  uint uVar1;
  longlong lVar2;
  ItemUnion IVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  IVar3 = (this->_impl_).item_;
  (this->_impl_).item_ = (param_1->_impl_).item_;
  (param_1->_impl_).item_ = IVar3;
  uVar1 = (this->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = (param_1->_impl_)._oneof_case_[0];
  (param_1->_impl_)._oneof_case_[0] = uVar1;
  return;
}

// InternalSwap @ 14c16e3a0

void __thiscall misc::NicknameData::InternalSwap(NicknameData *this,NicknameData *param_1)

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
  pvVar3 = (param_1->_impl_).origin_nickname_.tagged_ptr_.ptr_;
  (param_1->_impl_).origin_nickname_.tagged_ptr_.ptr_ =
       (this->_impl_).origin_nickname_.tagged_ptr_.ptr_;
  (this->_impl_).origin_nickname_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).player_uid_,&(this->_impl_).field_0x2c,&(param_1->_impl_).player_uid_);
  return;
}

// InternalSwap @ 14c16e400

void __thiscall misc::NicknameMessage::InternalSwap(NicknameMessage *this,NicknameMessage *param_1)

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
  pvVar3 = (param_1->_impl_).server_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).server_name_.tagged_ptr_.ptr_ = (this->_impl_).server_name_.tagged_ptr_.ptr_;
  (this->_impl_).server_name_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).player_uid_,&(this->_impl_).field_0x2c,&(param_1->_impl_).player_uid_);
  return;
}

// InternalSwap @ 14c16e460

void __thiscall
misc::PkHistoryRequest::InternalSwap(PkHistoryRequest *this,PkHistoryRequest *param_1)

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
  pvVar3 = (param_1->_impl_).target_nickname_.tagged_ptr_.ptr_;
  (param_1->_impl_).target_nickname_.tagged_ptr_.ptr_ =
       (this->_impl_).target_nickname_.tagged_ptr_.ptr_;
  (this->_impl_).target_nickname_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).target_guild_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).target_guild_name_.tagged_ptr_.ptr_ =
       (this->_impl_).target_guild_name_.tagged_ptr_.ptr_;
  (this->_impl_).target_guild_name_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).current_time_,this + 1,&(param_1->_impl_).current_time_);
  return;
}

// InternalSwap @ 14c16e4c0

void __thiscall misc::Player::InternalSwap(Player *this,Player *param_1)

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
  pvVar3 = (param_1->_impl_).player_session_uid_.tagged_ptr_.ptr_;
  (param_1->_impl_).player_session_uid_.tagged_ptr_.ptr_ =
       (this->_impl_).player_session_uid_.tagged_ptr_.ptr_;
  (this->_impl_).player_session_uid_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).guild_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).guild_name_.tagged_ptr_.ptr_ = (this->_impl_).guild_name_.tagged_ptr_.ptr_;
  (this->_impl_).guild_name_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).custom_info_.tagged_ptr_.ptr_;
  (param_1->_impl_).custom_info_.tagged_ptr_.ptr_ = (this->_impl_).custom_info_.tagged_ptr_.ptr_;
  (this->_impl_).custom_info_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).id_.tagged_ptr_.ptr_;
  (param_1->_impl_).id_.tagged_ptr_.ptr_ = (this->_impl_).id_.tagged_ptr_.ptr_;
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).login_dt_,this + 1,&(param_1->_impl_).login_dt_);
  return;
}

// InternalSwap @ 14c16e550

void __thiscall misc::PlayerList::InternalSwap(PlayerList *this,PlayerList *param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar1;
  google::protobuf::internal::memswap<16>((char *)&this->_impl_,(char *)&param_1->_impl_);
  return;
}

// InternalSwap @ 14c16e580

void __thiscall
misc::PlayersByNameRequest::InternalSwap(PlayersByNameRequest *this,PlayersByNameRequest *param_1)

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
  pvVar4 = (param_1->_impl_).nickname_.tagged_ptr_.ptr_;
  (param_1->_impl_).nickname_.tagged_ptr_.ptr_ = (this->_impl_).nickname_.tagged_ptr_.ptr_;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ = pvVar4;
  iVar2 = (this->_impl_).region_index_;
  (this->_impl_).region_index_ = (param_1->_impl_).region_index_;
  (param_1->_impl_).region_index_ = iVar2;
  return;
}

// StringSize @ 14c16e5d0

ulong64 __cdecl
google::protobuf::internal::WireFormatLite::StringSize
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  ulong64 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = (param_1->_Mypair)._Myval2._Mysize;
  uVar2 = (uint)uVar1 | 1;
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
  return (iVar3 * -9 + 0x160U >> 6) + uVar1;
}

// clear_current_time @ 14c16e610

void __thiscall misc::PkHistoryRequest::clear_current_time(PkHistoryRequest *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).current_time_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffb;
  return;
}

// clear_item @ 14c16e640

void __thiscall misc::MiscPlayerType::clear_item(MiscPlayerType *this)

{
  Timestamp *this_00;
  undefined8 *puVar1;
  
  switch((this->_impl_)._oneof_case_[0]) {
  case 2:
  case 3:
    puVar1 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    if ((puVar1 == (undefined8 *)0x0) &&
       (this_00 = (this->_impl_).item_.login_dt_, this_00 != (Timestamp *)0x0)) {
      google::protobuf::Timestamp::~Timestamp(this_00);
      ::operator_delete(this_00,0x28);
      (this->_impl_)._oneof_case_[0] = 0;
      return;
    }
    break;
  case 4:
  case 5:
  case 0x16:
  case 0x19:
    google::protobuf::internal::ArenaStringPtr::Destroy((ArenaStringPtr *)&this->_impl_);
  }
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// clear_login_dt @ 14c16e710

void __thiscall misc::MiscPlayerType::clear_login_dt(MiscPlayerType *this)

{
  Timestamp *this_00;
  undefined8 *puVar1;
  
  if ((this->_impl_)._oneof_case_[0] == 2) {
    puVar1 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    if ((puVar1 == (undefined8 *)0x0) &&
       (this_00 = (this->_impl_).item_.login_dt_, this_00 != (Timestamp *)0x0)) {
      google::protobuf::Timestamp::~Timestamp(this_00);
      ::operator_delete(this_00,0x28);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_login_dt @ 14c16e770

void __thiscall misc::Player::clear_login_dt(Player *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).login_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xffffffdf;
  return;
}

// clear_logout_dt @ 14c16e7a0

void __thiscall misc::MiscPlayerType::clear_logout_dt(MiscPlayerType *this)

{
  Timestamp *this_00;
  undefined8 *puVar1;
  
  if ((this->_impl_)._oneof_case_[0] == 3) {
    puVar1 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    if ((puVar1 == (undefined8 *)0x0) &&
       (this_00 = (this->_impl_).item_.login_dt_, this_00 != (Timestamp *)0x0)) {
      google::protobuf::Timestamp::~Timestamp(this_00);
      ::operator_delete(this_00,0x28);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_logout_dt @ 14c16e800

void __thiscall misc::Player::clear_logout_dt(Player *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).logout_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xffffffbf;
  return;
}

// clear_update_dt @ 14c16e830

void __thiscall misc::MiscGameOptionMessage::clear_update_dt(MiscGameOptionMessage *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).update_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffb;
  return;
}

// clear_update_dt @ 14c16e860

void __thiscall misc::MiscMinimapMarkerMessage::clear_update_dt(MiscMinimapMarkerMessage *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).update_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffb;
  return;
}

// set_allocated_login_dt @ 14c16e890

void __thiscall
misc::MiscPlayerType::set_allocated_login_dt(MiscPlayerType *this,Timestamp *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_item(this);
  if (param_1 != (Timestamp *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (Timestamp *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 2;
    (this->_impl_).item_.login_dt_ = param_1;
  }
  return;
}

// set_allocated_logout_dt @ 14c16e910

void __thiscall
misc::MiscPlayerType::set_allocated_logout_dt(MiscPlayerType *this,Timestamp *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_item(this);
  if (param_1 != (Timestamp *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (Timestamp *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 3;
    (this->_impl_).item_.login_dt_ = param_1;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_MiscBreachDataMessage_default_instance_'' @ 150441d40

void __cdecl misc::_dynamic_atexit_destructor_for___MiscBreachDataMessage_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_MiscGameOptionMessage_default_instance_'' @ 150441d50

void __cdecl misc::_dynamic_atexit_destructor_for___MiscGameOptionMessage_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_MiscMinimapMarkerMessage_default_instance_'' @ 150441d60

void __cdecl
misc::_dynamic_atexit_destructor_for___MiscMinimapMarkerMessage_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_MiscPlayerMessage_default_instance_'' @ 150441d70

void __cdecl misc::_dynamic_atexit_destructor_for___MiscPlayerMessage_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_MiscPlayerType_default_instance_'' @ 150441d80

void __cdecl misc::_dynamic_atexit_destructor_for___MiscPlayerType_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_NicknameData_default_instance_'' @ 150441d90

void __cdecl misc::_dynamic_atexit_destructor_for___NicknameData_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_NicknameMessage_default_instance_'' @ 150441da0

void __cdecl misc::_dynamic_atexit_destructor_for___NicknameMessage_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_PkHistoryRequest_default_instance_'' @ 150441db0

void __cdecl misc::_dynamic_atexit_destructor_for___PkHistoryRequest_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_PlayerList_default_instance_'' @ 150441dc0

void __cdecl misc::_dynamic_atexit_destructor_for___PlayerList_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_Player_default_instance_'' @ 150441dd0

void __cdecl misc::_dynamic_atexit_destructor_for___Player_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_PlayersByNameRequest_default_instance_'' @ 150441de0

void __cdecl misc::_dynamic_atexit_destructor_for___PlayersByNameRequest_default_instance___(void)

{
  return;
}


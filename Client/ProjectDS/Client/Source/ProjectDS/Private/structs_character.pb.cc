// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 55

// `dynamic_initializer_for_'_CharacterConnect_default_instance_'' @ 1412996d0

void __cdecl _dynamic_initializer_for___CharacterConnect_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___CharacterConnect_default_instance___);
  return;
}

// `dynamic_initializer_for_'_CharacterInfo_default_instance_'' @ 1412996f0

void __cdecl _dynamic_initializer_for___CharacterInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___CharacterInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_CharacterProfile_default_instance_'' @ 141299710

void __cdecl _dynamic_initializer_for___CharacterProfile_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___CharacterProfile_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 141299730

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_structs_5fcharacter_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c2298e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl CharacterProfile::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
      if ((MessageLite *)param_1[2]._padding_ == (MessageLite *)0x0) {
        pvVar7 = google::protobuf::Arena::CopyConstruct<Vector>
                           (pAVar11,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar7;
      }
      else {
        Vector::MergeImpl((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
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
    if ((uVar1 & 8) != 0) {
      if ((MessageLite *)param_1[3]._padding_ == (MessageLite *)0x0) {
        pvVar7 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                           (pAVar11,(MessageLite *)param_2[3]._padding_);
        param_1[3]._padding_ = (longlong)pvVar7;
      }
      else {
        google::protobuf::Timestamp::MergeImpl
                  ((MessageLite *)param_1[3]._padding_,(MessageLite *)param_2[3]._padding_);
      }
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
  if ((uVar1 & 0x300) != 0) {
    if (((uVar1 >> 8 & 1) != 0) && (iVar2 = (int)param_2[5]._padding_, iVar2 != 0)) {
      *(int *)&param_1[5]._padding_ = iVar2;
    }
    if (((uVar1 >> 9 & 1) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[5]._padding_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[5]._padding_ + 4) = iVar2;
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

// Clear @ 14c229b20

void __thiscall CharacterProfile::Clear(CharacterProfile *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 0xf) != 0) {
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
      Vector::Clear((this->_impl_).position_);
    }
    if ((uVar1 & 4) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).upsert_dt_);
    }
    if ((uVar1 & 8) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).create_dt_);
    }
  }
  if ((uVar1 & 0xf0) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).version_ = 0;
    (this->_impl_).char_id_ = 0;
    (this->_impl_).exp_ = 0;
  }
  if ((uVar1 & 0x300) != 0) {
    (this->_impl_).char_level_ = 0;
    (this->_impl_).island_id_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c229bd0

ulong64 __thiscall CharacterProfile::ByteSizeLong(CharacterProfile *this)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  __uint64 _Var5;
  int iVar6;
  __uint64 _Var7;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var7 = 0;
  if ((char)uVar3 != '\0') {
    if (((uVar3 & 1) != 0) &&
       (lVar1 = *(longlong *)
                 (((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10
                 ), lVar1 != 0)) {
      uVar2 = (uint)lVar1 | 1;
      if (__isa_available < 5) {
        iVar6 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 0x1f - iVar6;
      }
      else {
        iVar6 = LZCOUNT(uVar2);
      }
      _Var7 = (ulonglong)(iVar6 * -9 + 0x160U >> 6) + 1 + lVar1;
    }
    if ((uVar3 & 2) != 0) {
      uVar4 = Vector::ByteSizeLong((this->_impl_).position_);
      uVar2 = (uint)uVar4 | 1;
      if (__isa_available < 5) {
        iVar6 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 0x1f - iVar6;
      }
      else {
        iVar6 = LZCOUNT(uVar2);
      }
      _Var7 = _Var7 + 1 + (iVar6 * -9 + 0x160U >> 6) + uVar4;
    }
    if ((uVar3 & 4) != 0) {
      _Var5 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).upsert_dt_);
      uVar2 = (uint)_Var5 | 1;
      if (__isa_available < 5) {
        iVar6 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 0x1f - iVar6;
      }
      else {
        iVar6 = LZCOUNT(uVar2);
      }
      _Var7 = _Var7 + 1 + (iVar6 * -9 + 0x160U >> 6) + _Var5;
    }
    if ((uVar3 & 8) != 0) {
      _Var5 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).create_dt_);
      uVar2 = (uint)_Var5 | 1;
      if (__isa_available < 5) {
        iVar6 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 0x1f - iVar6;
      }
      else {
        iVar6 = LZCOUNT(uVar2);
      }
      _Var7 = _Var7 + 1 + (iVar6 * -9 + 0x160U >> 6) + _Var5;
    }
    if (((uVar3 & 0x10) != 0) && (lVar1 = (this->_impl_).player_uid_, lVar1 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar1);
      _Var7 = _Var7 + uVar4;
    }
    if (((uVar3 & 0x20) != 0) && (iVar6 = (this->_impl_).version_, iVar6 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar4;
    }
    if (((uVar3 & 0x40) != 0) && (iVar6 = (this->_impl_).char_id_, iVar6 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar4;
    }
    if (((char)uVar3 < '\0') && (lVar1 = (this->_impl_).exp_, lVar1 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar1);
      _Var7 = _Var7 + uVar4;
    }
  }
  if ((uVar3 & 0x300) != 0) {
    if (((uVar3 >> 8 & 1) != 0) && (iVar6 = (this->_impl_).char_level_, iVar6 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar4;
    }
    if (((uVar3 >> 9 & 1) != 0) && (uVar3 = (this->_impl_).island_id_, uVar3 != 0)) {
      uVar3 = uVar3 | 1;
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
      _Var7 = _Var7 + (iVar6 * -9 + 0x1a0U >> 6);
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c229e00

uchar * __thiscall
CharacterProfile::_InternalSerialize
          (CharacterProfile *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  size_t *psVar1;
  int iVar2;
  longlong lVar3;
  size_t _Size;
  byte bVar4;
  uchar *puVar5;
  uint uVar6;
  char *pcVar7;
  char *_Src;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (iVar2 = (this->_impl_).version_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (lVar3 = (this->_impl_).player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x40) != 0) &&
     (iVar2 = (this->_impl_).char_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    _Src = (char *)((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    psVar1 = (size_t *)(_Src + 0x10);
    if (*(longlong *)(_Src + 0x10) != 0) {
      pcVar7 = _Src;
      if (0xf < *(ulonglong *)(_Src + 0x18)) {
        pcVar7 = *(char **)_Src;
      }
      local_18._Mysize = 0x19;
      local_18._Mydata = "CharacterProfile.nickname";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar7,(int)*(longlong *)(_Src + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(_Src + 0x18)) {
        _Src = *(char **)_Src;
      }
      _Size = *psVar1;
      if (((longlong)_Size < 0x80) &&
         ((longlong)_Size <= (longlong)(param_2->end_ + (0xe - (longlong)param_1)))) {
        *param_1 = 0x22;
        param_1[1] = (byte)_Size;
        memcpy(param_1 + 2,_Src,_Size);
        param_1 = param_1 + 2 + _Size;
      }
      else {
        local_18._Mydata = _Src;
        local_18._Mysize = _Size;
        param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliasedOutline
                            (param_2,4,&local_18,param_1);
      }
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x100) != 0) &&
     (iVar2 = (this->_impl_).char_level_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<8>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x80) != 0) &&
     (lVar3 = (this->_impl_).exp_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<9>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x200) != 0) && ((this->_impl_).island_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar6 = (this->_impl_).island_id_;
    *param_1 = 0x50;
    while( true ) {
      param_1 = param_1 + 1;
      bVar4 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *param_1 = bVar4 | 0x80;
    }
    *param_1 = bVar4;
    param_1 = param_1 + 1;
  }
  uVar6 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar6 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (0xb,(MessageLite *)(this->_impl_).position_,
                         (int)(((this->_impl_).position_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((uVar6 & 4) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (0xc,(MessageLite *)(this->_impl_).upsert_dt_,
                         (int)(((this->_impl_).upsert_dt_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((uVar6 & 8) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (0xd,(MessageLite *)(this->_impl_).create_dt_,
                         (int)(((this->_impl_).create_dt_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar5;
  }
  return param_1;
}

// GetClassData @ 14c22a090

ClassData * __thiscall CharacterProfile::GetClassData(CharacterProfile *this)

{
  return (ClassData *)&CharacterProfile_class_data_;
}

// PlacementNew_ @ 14c22a0b0

void * __cdecl CharacterProfile::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7CharacterProfile__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  return param_2;
}

// MergeImpl @ 14c22a0f0

void __cdecl CharacterInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
        pvVar4 = google::protobuf::Arena::CopyConstruct<ds_game::SqlCharacterLevelTable>
                           (pAVar5,pMVar3);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar4;
      }
      else {
        ds_game::SqlCharacterLevelTable::MergeImpl(pMVar2,pMVar3);
      }
    }
    if ((uVar1 & 2) != 0) {
      if ((MessageLite *)param_1[2]._padding_ == (MessageLite *)0x0) {
        pvVar4 = google::protobuf::Arena::CopyConstruct<ds_game::SqlCharacterSkinTable>
                           (pAVar5,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar4;
      }
      else {
        ds_game::SqlCharacterSkinTable::MergeImpl
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

// Clear @ 14c22a1b0

void __thiscall CharacterInfo::Clear(CharacterInfo *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      ds_game::SqlCharacterLevelTable::Clear((this->_impl_).char_level_table_);
    }
    if ((uVar1 & 2) != 0) {
      ds_game::SqlCharacterSkinTable::Clear((this->_impl_).char_skin_table_);
    }
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c22a210

ulong64 __thiscall CharacterInfo::ByteSizeLong(CharacterInfo *this)

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
      uVar1 = ds_game::SqlCharacterLevelTable::ByteSizeLong((this->_impl_).char_level_table_);
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
      uVar1 = ds_game::SqlCharacterSkinTable::ByteSizeLong((this->_impl_).char_skin_table_);
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

// _InternalSerialize @ 14c22a300

uchar * __thiscall
CharacterInfo::_InternalSerialize(CharacterInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  uchar *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (3,(MessageLite *)(this->_impl_).char_level_table_,
                         (int)(((this->_impl_).char_level_table_)->_impl_)._cached_size_.atom_,
                         param_1,param_2);
  }
  if ((uVar1 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (4,(MessageLite *)(this->_impl_).char_skin_table_,
                         (int)(((this->_impl_).char_skin_table_)->_impl_)._cached_size_.atom_,
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

// GetClassData @ 14c22a3b0

ClassData * __thiscall CharacterInfo::GetClassData(CharacterInfo *this)

{
  return (ClassData *)&CharacterInfo_class_data_;
}

// PlacementNew_ @ 14c22a3d0

void * __cdecl CharacterInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7CharacterInfo__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// MergeImpl @ 14c22a400

void __cdecl CharacterConnect::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  MessageLite *pMVar3;
  MessageLite *pMVar4;
  longlong lVar5;
  void *pvVar6;
  Arena *pAVar7;
  
  pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      pMVar3 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
      pMVar4 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
      if (pMVar3 == (MessageLite *)0x0) {
        pvVar6 = google::protobuf::Arena::CopyConstruct<UniqueId>(pAVar7,pMVar4);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar6;
      }
      else {
        UniqueId::MergeImpl(pMVar3,pMVar4);
      }
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
    if (((uVar1 & 4) != 0) && (lVar5 = param_2[2]._internal_metadata_.ptr_, lVar5 != 0)) {
      param_1[2]._internal_metadata_.ptr_ = lVar5;
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

// Clear @ 14c22a4f0

void __thiscall CharacterConnect::Clear(CharacterConnect *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      UniqueId::Clear((this->_impl_).player_session_uid_);
    }
    if ((uVar1 & 2) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).create_dt_);
    }
  }
  if ((uVar1 & 0x1c) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).version_ = 0;
    (this->_impl_).server_index_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c22a560

ulong64 __thiscall CharacterConnect::ByteSizeLong(CharacterConnect *this)

{
  uint uVar1;
  longlong lVar2;
  ulong64 uVar3;
  __uint64 _Var4;
  uint uVar5;
  int iVar6;
  __uint64 _Var7;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var7 = 0;
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = UniqueId::ByteSizeLong((this->_impl_).player_session_uid_);
      uVar5 = (uint)uVar3 | 1;
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
      _Var7 = (ulonglong)(iVar6 * -9 + 0x160U >> 6) + 1 + uVar3;
    }
    if ((uVar1 & 2) != 0) {
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).create_dt_);
      uVar5 = (uint)_Var4 | 1;
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
      _Var7 = _Var7 + 1 + (iVar6 * -9 + 0x160U >> 6) + _Var4;
    }
    if (((uVar1 & 4) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar3;
    }
    if (((uVar1 & 8) != 0) && (iVar6 = (this->_impl_).version_, iVar6 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar3;
    }
    if (((uVar1 & 0x10) != 0) && (iVar6 = (this->_impl_).server_index_, iVar6 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar3;
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c22a690

uchar * __thiscall
CharacterConnect::_InternalSerialize
          (CharacterConnect *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uchar *puVar4;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (iVar1 = (this->_impl_).version_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar1,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (lVar3 = (this->_impl_).player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (iVar1 = (this->_impl_).server_index_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar1,param_1);
  }
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar2 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (4,(MessageLite *)(this->_impl_).player_session_uid_,
                         (int)(((this->_impl_).player_session_uid_)->_impl_)._cached_size_.atom_,
                         param_1,param_2);
  }
  if ((uVar2 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (5,(MessageLite *)(this->_impl_).create_dt_,
                         (int)(((this->_impl_).create_dt_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar4 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar4;
  }
  return param_1;
}

// GetClassData @ 14c22a7a0

ClassData * __thiscall CharacterConnect::GetClassData(CharacterConnect *this)

{
  return (ClassData *)&CharacterConnect_class_data_;
}

// PlacementNew_ @ 14c22a7c0

void * __cdecl CharacterConnect::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7CharacterConnect__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// CopyConstruct<ds_game::SqlCharacterLevelTable> @ 14c22a7f0

void * __cdecl
google::protobuf::Arena::CopyConstruct<ds_game::SqlCharacterLevelTable>
          (Arena *param_1,void *param_2)

{
  SqlCharacterLevelTable *pSVar1;
  
  if (param_1 == (Arena *)0x0) {
    pSVar1 = ::operator_new(0x38);
  }
  else {
    pSVar1 = Allocate(param_1,0x38);
  }
  pSVar1 = ds_game::SqlCharacterLevelTable::SqlCharacterLevelTable(pSVar1,param_1,param_2);
  return pSVar1;
}

// CopyConstruct<ds_game::SqlCharacterSkinTable> @ 14c22a840

void * __cdecl
google::protobuf::Arena::CopyConstruct<ds_game::SqlCharacterSkinTable>(Arena *param_1,void *param_2)

{
  SqlCharacterSkinTable *pSVar1;
  
  if (param_1 == (Arena *)0x0) {
    pSVar1 = ::operator_new(0x28);
  }
  else {
    pSVar1 = Allocate(param_1,0x28);
  }
  pSVar1 = ds_game::SqlCharacterSkinTable::SqlCharacterSkinTable(pSVar1,param_1,param_2);
  return pSVar1;
}

// WriteInt64ToArrayWithField<9> @ 14c22a890

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<9>
          (EpsCopyOutputStream *param_1,long64 param_2,uchar *param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  if (param_1->end_ <= param_3) {
    param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_1,param_3);
  }
  *param_3 = 0x48;
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

// CharacterConnect @ 14c22a8f0

CharacterConnect * __thiscall
CharacterConnect::CharacterConnect(CharacterConnect *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7CharacterConnect__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).player_session_uid_ = (UniqueId *)0x0;
  (this->_impl_).create_dt_ = (Timestamp *)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).version_ = 0;
  (this->_impl_).server_index_ = 0;
  return this;
}

// CharacterConnect @ 14c22a920

CharacterConnect * __thiscall
CharacterConnect::CharacterConnect(CharacterConnect *this,Arena *param_1,CharacterConnect *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  Timestamp *pTVar4;
  Timestamp *pTVar5;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7CharacterConnect__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pTVar5 = (Timestamp *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  pTVar4 = pTVar5;
  if ((uVar1 & 1) != 0) {
    pTVar4 = google::protobuf::Arena::CopyConstruct<UniqueId>
                       (param_1,(param_2->_impl_).player_session_uid_);
  }
  (this->_impl_).player_session_uid_ = (UniqueId *)pTVar4;
  if ((uVar1 & 2) != 0) {
    pTVar5 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).create_dt_);
  }
  (this->_impl_).create_dt_ = pTVar5;
  iVar2 = (param_2->_impl_).version_;
  iVar3 = (param_2->_impl_).server_index_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).version_ = iVar2;
  (this->_impl_).server_index_ = iVar3;
  return this;
}

// CharacterInfo @ 14c22a9e0

CharacterInfo * __thiscall CharacterInfo::CharacterInfo(CharacterInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7CharacterInfo__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).char_level_table_ = (SqlCharacterLevelTable *)0x0;
  (this->_impl_).char_skin_table_ = (SqlCharacterSkinTable *)0x0;
  return this;
}

// CharacterInfo @ 14c22aa10

CharacterInfo * __thiscall
CharacterInfo::CharacterInfo(CharacterInfo *this,Arena *param_1,CharacterInfo *param_2)

{
  uint uVar1;
  SqlCharacterLevelTable *pSVar2;
  SqlCharacterSkinTable *pSVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7CharacterInfo__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  uVar1 = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = uVar1;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if ((uVar1 & 1) == 0) {
    pSVar2 = (SqlCharacterLevelTable *)0x0;
  }
  else {
    pSVar2 = google::protobuf::Arena::CopyConstruct<ds_game::SqlCharacterLevelTable>
                       (param_1,(param_2->_impl_).char_level_table_);
  }
  (this->_impl_).char_level_table_ = pSVar2;
  if ((uVar1 & 2) == 0) {
    (this->_impl_).char_skin_table_ = (SqlCharacterSkinTable *)0x0;
  }
  else {
    pSVar3 = google::protobuf::Arena::CopyConstruct<ds_game::SqlCharacterSkinTable>
                       (param_1,(param_2->_impl_).char_skin_table_);
    (this->_impl_).char_skin_table_ = pSVar3;
  }
  return this;
}

// CharacterProfile @ 14c22aac0

CharacterProfile * __thiscall
CharacterProfile::CharacterProfile(CharacterProfile *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7CharacterProfile__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).position_ = (Vector *)0x0;
  (this->_impl_).upsert_dt_ = (Timestamp *)0x0;
  (this->_impl_).create_dt_ = (Timestamp *)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).version_ = 0;
  (this->_impl_).char_id_ = 0;
  (this->_impl_).exp_ = 0;
  (this->_impl_).char_level_ = 0;
  (this->_impl_).island_id_ = 0;
  return this;
}

// CharacterProfile @ 14c22ab00

CharacterProfile * __thiscall
CharacterProfile::CharacterProfile(CharacterProfile *this,Arena *param_1,CharacterProfile *param_2)

{
  ArenaStringPtr *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  TaggedStringPtr TVar4;
  void *pvVar5;
  Vector *pVVar6;
  Vector *pVVar7;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7CharacterProfile__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).nickname_;
  pVVar7 = (Vector *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar5 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar5 & 3) != 0) {
    TVar4 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar5 = *TVar4.ptr_;
  }
  (this->_impl_).nickname_.tagged_ptr_.ptr_ = pvVar5;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  pVVar6 = pVVar7;
  if ((uVar1 & 2) != 0) {
    pVVar6 = google::protobuf::Arena::CopyConstruct<Vector>(param_1,(param_2->_impl_).position_);
  }
  (this->_impl_).position_ = pVVar6;
  pVVar6 = pVVar7;
  if ((uVar1 & 4) != 0) {
    pVVar6 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).upsert_dt_);
  }
  (this->_impl_).upsert_dt_ = (Timestamp *)pVVar6;
  if ((uVar1 & 8) != 0) {
    pVVar7 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).create_dt_);
  }
  (this->_impl_).create_dt_ = (Timestamp *)pVVar7;
  iVar2 = (param_2->_impl_).version_;
  iVar3 = (param_2->_impl_).char_id_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).version_ = iVar2;
  (this->_impl_).char_id_ = iVar3;
  iVar2 = (param_2->_impl_).char_level_;
  uVar1 = (param_2->_impl_).island_id_;
  (this->_impl_).exp_ = (param_2->_impl_).exp_;
  (this->_impl_).char_level_ = iVar2;
  (this->_impl_).island_id_ = uVar1;
  return this;
}

// ~CharacterConnect @ 14c22abf0

void __thiscall CharacterConnect::~CharacterConnect(CharacterConnect *this)

{
  UniqueId *this_00;
  Timestamp *this_01;
  
  this->_padding_ = (longlong)&___7CharacterConnect__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).player_session_uid_;
  if (this_00 != (UniqueId *)0x0) {
    UniqueId::~UniqueId(this_00);
    ::operator_delete(this_00,0x20);
  }
  this_01 = (this->_impl_).create_dt_;
  if (this_01 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_01);
    ::operator_delete(this_01,0x28);
  }
  return;
}

// ~CharacterInfo @ 14c22ac70

void __thiscall CharacterInfo::~CharacterInfo(CharacterInfo *this)

{
  SqlCharacterLevelTable *this_00;
  SqlCharacterSkinTable *this_01;
  
  this->_padding_ = (longlong)&___7CharacterInfo__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).char_level_table_;
  if (this_00 != (SqlCharacterLevelTable *)0x0) {
    ds_game::SqlCharacterLevelTable::~SqlCharacterLevelTable(this_00);
    ::operator_delete(this_00,0x38);
  }
  this_01 = (this->_impl_).char_skin_table_;
  if (this_01 != (SqlCharacterSkinTable *)0x0) {
    ds_game::SqlCharacterSkinTable::~SqlCharacterSkinTable(this_01);
    ::operator_delete(this_01,0x28);
  }
  return;
}

// ~CharacterProfile @ 14c22acf0

void __thiscall CharacterProfile::~CharacterProfile(CharacterProfile *this)

{
  Vector *this_00;
  Timestamp *pTVar1;
  
  this->_padding_ = (longlong)&___7CharacterProfile__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  this_00 = (this->_impl_).position_;
  if (this_00 != (Vector *)0x0) {
    Vector::~Vector(this_00);
    ::operator_delete(this_00,0x30);
  }
  pTVar1 = (this->_impl_).upsert_dt_;
  if (pTVar1 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(pTVar1);
    ::operator_delete(pTVar1,0x28);
  }
  pTVar1 = (this->_impl_).create_dt_;
  if (pTVar1 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(pTVar1);
    ::operator_delete(pTVar1,0x28);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c22ad90

void * __thiscall
ds_game::SqlCharacterLevelTable::_scalar_deleting_destructor_
          (SqlCharacterLevelTable *this,uint param_1)

{
  ~SqlCharacterLevelTable(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c22add0

void * __thiscall
ds_game::SqlCharacterSkinTable::_scalar_deleting_destructor_
          (SqlCharacterSkinTable *this,uint param_1)

{
  ~SqlCharacterSkinTable(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// CopyFrom @ 14c22ae10

void __thiscall CharacterConnect::CopyFrom(CharacterConnect *this,CharacterConnect *param_1)

{
  uint uVar1;
  int iVar2;
  UniqueId *pUVar3;
  Timestamp *pTVar4;
  longlong lVar5;
  UniqueId *pUVar6;
  Timestamp *pTVar7;
  Arena *pAVar8;
  
  if (param_1 != this) {
    Clear(this);
    pAVar8 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 0x1f) != 0) {
      if ((uVar1 & 1) != 0) {
        pUVar6 = (this->_impl_).player_session_uid_;
        pUVar3 = (param_1->_impl_).player_session_uid_;
        if (pUVar6 == (UniqueId *)0x0) {
          pUVar6 = google::protobuf::Arena::CopyConstruct<UniqueId>(pAVar8,pUVar3);
          (this->_impl_).player_session_uid_ = pUVar6;
        }
        else {
          UniqueId::MergeImpl((MessageLite *)pUVar6,(MessageLite *)pUVar3);
        }
      }
      if ((uVar1 & 2) != 0) {
        pTVar7 = (this->_impl_).create_dt_;
        pTVar4 = (param_1->_impl_).create_dt_;
        if (pTVar7 == (Timestamp *)0x0) {
          pTVar7 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                             (pAVar8,pTVar4);
          (this->_impl_).create_dt_ = pTVar7;
        }
        else {
          google::protobuf::Timestamp::MergeImpl((MessageLite *)pTVar7,(MessageLite *)pTVar4);
        }
      }
      if (((uVar1 & 4) != 0) && (lVar5 = (param_1->_impl_).player_uid_, lVar5 != 0)) {
        (this->_impl_).player_uid_ = lVar5;
      }
      if (((uVar1 & 8) != 0) && (iVar2 = (param_1->_impl_).version_, iVar2 != 0)) {
        (this->_impl_).version_ = iVar2;
      }
      if (((uVar1 & 0x10) != 0) && (iVar2 = (param_1->_impl_).server_index_, iVar2 != 0)) {
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

// CopyFrom @ 14c22af10

void __thiscall CharacterInfo::CopyFrom(CharacterInfo *this,CharacterInfo *param_1)

{
  uint uVar1;
  SqlCharacterLevelTable *pSVar2;
  SqlCharacterSkinTable *pSVar3;
  SqlCharacterLevelTable *pSVar4;
  SqlCharacterSkinTable *pSVar5;
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
        pSVar4 = (this->_impl_).char_level_table_;
        pSVar2 = (param_1->_impl_).char_level_table_;
        if (pSVar4 == (SqlCharacterLevelTable *)0x0) {
          pSVar4 = google::protobuf::Arena::CopyConstruct<ds_game::SqlCharacterLevelTable>
                             (pAVar6,pSVar2);
          (this->_impl_).char_level_table_ = pSVar4;
        }
        else {
          ds_game::SqlCharacterLevelTable::MergeImpl((MessageLite *)pSVar4,(MessageLite *)pSVar2);
        }
      }
      if ((uVar1 & 2) != 0) {
        pSVar5 = (this->_impl_).char_skin_table_;
        pSVar3 = (param_1->_impl_).char_skin_table_;
        if (pSVar5 == (SqlCharacterSkinTable *)0x0) {
          pSVar5 = google::protobuf::Arena::CopyConstruct<ds_game::SqlCharacterSkinTable>
                             (pAVar6,pSVar3);
          (this->_impl_).char_skin_table_ = pSVar5;
        }
        else {
          ds_game::SqlCharacterSkinTable::MergeImpl((MessageLite *)pSVar5,(MessageLite *)pSVar3);
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

// CopyFrom @ 14c22afe0

void __thiscall CharacterProfile::CopyFrom(CharacterProfile *this,CharacterProfile *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c22b020

Metadata * __thiscall
CharacterConnect::GetMetadata(CharacterConnect *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&CharacterConnect_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c22b060

Metadata * __thiscall
CharacterInfo::GetMetadata(CharacterInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&CharacterInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c22b0a0

Metadata * __thiscall
CharacterProfile::GetMetadata(CharacterProfile *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&CharacterProfile_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c22b0e0

void __thiscall CharacterConnect::InternalSwap(CharacterConnect *this,CharacterConnect *param_1)

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
            (&(this->_impl_).player_session_uid_,this + 1,&(param_1->_impl_).player_session_uid_);
  return;
}

// InternalSwap @ 14c22b120

void __thiscall CharacterInfo::InternalSwap(CharacterInfo *this,CharacterInfo *param_1)

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
            ((char *)&(this->_impl_).char_level_table_,(char *)&(param_1->_impl_).char_level_table_)
  ;
  return;
}

// InternalSwap @ 14c22b160

void __thiscall CharacterProfile::InternalSwap(CharacterProfile *this,CharacterProfile *param_1)

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
            (&(this->_impl_).position_,this + 1,&(param_1->_impl_).position_);
  return;
}

// clear_char_level_table @ 14c22b1b0

void __thiscall CharacterInfo::clear_char_level_table(CharacterInfo *this)

{
  SqlCharacterLevelTable *this_00;
  
  this_00 = (this->_impl_).char_level_table_;
  if (this_00 != (SqlCharacterLevelTable *)0x0) {
    ds_game::SqlCharacterLevelTable::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_char_skin_table @ 14c22b1e0

void __thiscall CharacterInfo::clear_char_skin_table(CharacterInfo *this)

{
  SqlCharacterSkinTable *this_00;
  
  this_00 = (this->_impl_).char_skin_table_;
  if (this_00 != (SqlCharacterSkinTable *)0x0) {
    ds_game::SqlCharacterSkinTable::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// clear_create_dt @ 14c22b210

void __thiscall CharacterConnect::clear_create_dt(CharacterConnect *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).create_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// clear_create_dt @ 14c22b240

void __thiscall CharacterProfile::clear_create_dt(CharacterProfile *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).create_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffff7;
  return;
}

// clear_player_session_uid @ 14c22b270

void __thiscall CharacterConnect::clear_player_session_uid(CharacterConnect *this)

{
  UniqueId *this_00;
  
  this_00 = (this->_impl_).player_session_uid_;
  if (this_00 != (UniqueId *)0x0) {
    UniqueId::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_position @ 14c22b2a0

void __thiscall CharacterProfile::clear_position(CharacterProfile *this)

{
  Vector *this_00;
  
  this_00 = (this->_impl_).position_;
  if (this_00 != (Vector *)0x0) {
    Vector::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// clear_upsert_dt @ 14c22b2d0

void __thiscall CharacterProfile::clear_upsert_dt(CharacterProfile *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).upsert_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffb;
  return;
}

// `dynamic_atexit_destructor_for_'_CharacterConnect_default_instance_'' @ 150443b30

void __cdecl _dynamic_atexit_destructor_for___CharacterConnect_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_CharacterInfo_default_instance_'' @ 150443b40

void __cdecl _dynamic_atexit_destructor_for___CharacterInfo_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_CharacterProfile_default_instance_'' @ 150443b50

void __cdecl _dynamic_atexit_destructor_for___CharacterProfile_default_instance___(void)

{
  return;
}


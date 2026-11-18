// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 31

// `dynamic_initializer_for_'_PkData_default_instance_'' @ 1412999f0

void __cdecl _dynamic_initializer_for___PkData_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___PkData_default_instance___);
  return;
}

// `dynamic_initializer_for_'_PkHistory_default_instance_'' @ 141299a10

void __cdecl _dynamic_initializer_for___PkHistory_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___PkHistory_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 141299a30

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_structs_5fpk_5fdata_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c22ff80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl PkData::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  if ((char)uVar1 != '\0') {
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
    if (((uVar1 & 0x10) != 0) && (param_2[3]._padding_ != 0)) {
      param_1[3]._padding_ = param_2[3]._padding_;
    }
    if (((uVar1 & 0x20) != 0) && (iVar2 = (int)param_2[3]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[3]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 & 0x40) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[3]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[3]._internal_metadata_.ptr_ + 4) = iVar2;
    }
    if (((char)uVar1 < '\0') && (param_2[4]._padding_ != 0)) {
      param_1[4]._padding_ = param_2[4]._padding_;
    }
  }
  if (((uVar1 >> 8 & 1) != 0) && (iVar2 = (int)param_2[4]._internal_metadata_.ptr_, iVar2 != 0)) {
    *(int *)&param_1[4]._internal_metadata_.ptr_ = iVar2;
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

// Clear @ 14c230220

void __thiscall PkData::Clear(PkData *this)

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
               ((ulonglong)(this->_impl_).guild_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
  }
  if ((uVar3 & 0xfc) != 0) {
    (this->_impl_).char_id_ = 0;
    (this->_impl_).guild_icon_ = 0;
    (this->_impl_).guild_uid_ = 0;
    (this->_impl_).char_level_ = 0;
    (this->_impl_).combat_power_ = 0.0;
    (this->_impl_).create_time_ = 0;
  }
  (this->_impl_).pk_state_ = 0;
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

// ByteSizeLong @ 14c2302a0

ulong64 __thiscall PkData::ByteSizeLong(PkData *this)

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
    if (((uVar1 & 4) != 0) && (iVar6 = (this->_impl_).char_id_, iVar6 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar4;
    }
    if (((uVar1 & 8) != 0) && (iVar6 = (this->_impl_).guild_icon_, iVar6 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar4;
    }
    if (((uVar1 & 0x10) != 0) && (lVar2 = (this->_impl_).guild_uid_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar4;
    }
    if (((uVar1 & 0x20) != 0) && (iVar6 = (this->_impl_).char_level_, iVar6 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar4;
    }
    if (((uVar1 & 0x40) != 0) && ((this->_impl_).combat_power_ != 0.0)) {
      _Var7 = _Var7 + 5;
    }
    if (((char)uVar1 < '\0') && (lVar2 = (this->_impl_).create_time_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar4;
    }
  }
  if (((uVar1 >> 8 & 1) != 0) && (iVar6 = (this->_impl_).pk_state_, iVar6 != 0)) {
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
    _Var7 = _Var7 + (iVar6 * -9 + 0x2c0U >> 6);
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c230440

uchar * __thiscall
PkData::_InternalSerialize(PkData *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  uchar *puVar5;
  char *pcVar6;
  Impl_ *pIVar7;
  char *pcVar8;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar3 = (this->_impl_).char_id_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar3,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar8 = (char *)((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar8 + 0x10);
    if (*(longlong *)(pcVar8 + 0x10) != 0) {
      pcVar6 = pcVar8;
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar6 = *(char **)pcVar8;
      }
      local_28._Mysize = 0xf;
      local_28._Mydata = "PkData.nickname";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar8 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar8 = *(char **)pcVar8;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar8;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,2,&local_28,param_1);
    }
  }
  pIVar7 = &this->_impl_;
  if ((((pIVar7->_has_bits_).has_bits_[0] & 0x10) != 0) &&
     (lVar4 = (this->_impl_).guild_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<3>
                        (param_2,lVar4,param_1);
  }
  if ((((pIVar7->_has_bits_).has_bits_[0] & 8) != 0) &&
     (iVar3 = (this->_impl_).guild_icon_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar3,param_1);
  }
  if (((pIVar7->_has_bits_).has_bits_[0] & 2) != 0) {
    pcVar8 = (char *)((ulonglong)(this->_impl_).guild_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar8 + 0x10);
    if (*(longlong *)(pcVar8 + 0x10) != 0) {
      pcVar6 = pcVar8;
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar6 = *(char **)pcVar8;
      }
      local_28._Mysize = 0x11;
      local_28._Mydata = "PkData.guild_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar8 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar8 = *(char **)pcVar8;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar8;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,5,&local_28,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (iVar3 = (this->_impl_).char_level_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<6>
                        (param_2,iVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x40) != 0) &&
     ((this->_impl_).combat_power_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    fVar2 = (this->_impl_).combat_power_;
    *param_1 = '=';
    *(float *)(param_1 + 1) = fVar2;
    param_1 = param_1 + 5;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x100) != 0) &&
     (iVar3 = (this->_impl_).pk_state_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<8>
                        (param_2,iVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x80) != 0) &&
     (lVar4 = (this->_impl_).create_time_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<9>
                        (param_2,lVar4,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar5;
  }
  return param_1;
}

// GetClassData @ 14c230690

ClassData * __thiscall PkData::GetClassData(PkData *this)

{
  return (ClassData *)&PkData_class_data_;
}

// PlacementNew_ @ 14c2306b0

void * __cdecl PkData::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7PkData__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x20) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c2306f0

void * __thiscall PkData::_scalar_deleting_destructor_(PkData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7PkData__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).guild_name_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// MergeImpl @ 14c230750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl PkHistory::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
               google::protobuf::Arena::CopyConstruct<PkData>);
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0x1f) != 0) {
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
    if (((uVar1 & 0x10) != 0) && (iVar2 = (int)param_2[4]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[4]._internal_metadata_.ptr_ = iVar2;
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

// Clear @ 14c230900

void __thiscall PkHistory::Clear(PkHistory *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (0 < *(int *)&(this->_impl_).pk_data_.field_0x8) {
    google::protobuf::internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).pk_data_);
  }
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    puVar2 = (undefined8 *)((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar2[2] = 0;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
  }
  if ((uVar1 & 0x1e) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).kill_count_ = 0;
    (this->_impl_).death_count_ = 0;
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

// ByteSizeLong @ 14c230980

ulong64 __thiscall PkHistory::ByteSizeLong(PkHistory *this)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  uint uVar7;
  int iVar8;
  RepeatedPtrField<PkData> *pRVar9;
  ulonglong uVar10;
  
  uVar5 = *(ulonglong *)&(this->_impl_).pk_data_;
  pRVar9 = &(this->_impl_).pk_data_;
  uVar1 = *(uint *)&(this->_impl_).pk_data_.field_0x8;
  uVar10 = (ulonglong)uVar1;
  if ((uVar5 & 1) != 0) {
    pRVar9 = (RepeatedPtrField<PkData> *)(uVar5 + 7);
  }
  puVar3 = (undefined8 *)&pRVar9->field_0x0;
  for (; pRVar9 != (RepeatedPtrField<PkData> *)(puVar3 + (int)uVar1);
      pRVar9 = (RepeatedPtrField<PkData> *)&pRVar9->field_0x8) {
    uVar4 = PkData::ByteSizeLong(*(PkData **)pRVar9);
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
  if ((uVar1 & 0x1f) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
       lVar2 != 0)) {
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
    if (((uVar1 & 4) != 0) && (iVar8 = (this->_impl_).kill_count_, iVar8 != 0)) {
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
    if (((uVar1 & 8) != 0) && (iVar8 = (this->_impl_).death_count_, iVar8 != 0)) {
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
    if (((uVar1 & 0x10) != 0) && (iVar8 = (this->_impl_).region_index_, iVar8 != 0)) {
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

// _InternalSerialize @ 14c230b90

uchar * __thiscall
PkHistory::_InternalSerialize(PkHistory *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  MessageLite *pMVar6;
  uint uVar7;
  char *pcVar8;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  uVar7 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar4 = (this->_impl_).player_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar4,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar2 = (this->_impl_).kill_count_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (iVar2 = (this->_impl_).death_count_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  uVar3 = *(uint *)&(this->_impl_).pk_data_.field_0x8;
  if (uVar3 != 0) {
    do {
      pMVar6 = *(MessageLite **)&(this->_impl_).pk_data_;
      if (((ulonglong)pMVar6 & 1) != 0) {
        pMVar6 = *(MessageLite **)((longlong)&pMVar6->_padding_ + (longlong)(int)uVar7 * 8 + 7);
      }
      param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                          (4,pMVar6,*(int *)((longlong)&pMVar6[1]._padding_ + 4),param_1,param_2);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar8 = (char *)((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar8 + 0x10);
    if (*(longlong *)(pcVar8 + 0x10) != 0) {
      pcVar5 = pcVar8;
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar5 = *(char **)pcVar8;
      }
      local_28._Mysize = 0xc;
      local_28._Mydata = "PkHistory.id";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar5,(int)*(longlong *)(pcVar8 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar8 = *(char **)pcVar8;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar8;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,5,&local_28,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (iVar2 = (this->_impl_).region_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<6>
                        (param_2,iVar2,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                        ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                         param_2);
  }
  return param_1;
}

// GetClassData @ 14c230d20

ClassData * __thiscall PkHistory::GetClassData(PkHistory *this)

{
  return (ClassData *)&PkHistory_class_data_;
}

// PlacementNew_ @ 14c230d40

void * __cdecl PkHistory::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7PkHistory__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x30) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(Arena **)((longlong)param_2 + 0x28) = param_3;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c230d90

void * __thiscall PkHistory::_scalar_deleting_destructor_(PkHistory *this,uint param_1)

{
  this->_padding_ = (longlong)&___7PkHistory__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).id_);
  if (*(longlong *)&(this->_impl_).pk_data_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).pk_data_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// PkData @ 14c230e00

PkData * __thiscall PkData::PkData(PkData *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PkData__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).guild_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).char_id_ = 0;
  (this->_impl_).guild_icon_ = 0;
  (this->_impl_).guild_uid_ = 0;
  (this->_impl_).char_level_ = 0;
  (this->_impl_).combat_power_ = 0.0;
  (this->_impl_).create_time_ = 0;
  (this->_impl_).pk_state_ = 0;
  return this;
}

// PkData @ 14c230e40

PkData * __thiscall PkData::PkData(PkData *this,Arena *param_1,PkData *param_2)

{
  ArenaStringPtr *pAVar1;
  long64 lVar2;
  int iVar3;
  float fVar4;
  TaggedStringPtr TVar5;
  void *pvVar6;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PkData__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).nickname_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar6 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  pAVar1 = &(param_2->_impl_).guild_name_;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ = pvVar6;
  pvVar6 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  (this->_impl_).guild_name_.tagged_ptr_.ptr_ = pvVar6;
  iVar3 = (param_2->_impl_).guild_icon_;
  lVar2 = (param_2->_impl_).guild_uid_;
  (this->_impl_).char_id_ = (param_2->_impl_).char_id_;
  (this->_impl_).guild_icon_ = iVar3;
  (this->_impl_).guild_uid_ = lVar2;
  fVar4 = (param_2->_impl_).combat_power_;
  lVar2 = (param_2->_impl_).create_time_;
  (this->_impl_).char_level_ = (param_2->_impl_).char_level_;
  (this->_impl_).combat_power_ = fVar4;
  (this->_impl_).create_time_ = lVar2;
  (this->_impl_).pk_state_ = (param_2->_impl_).pk_state_;
  return this;
}

// PkHistory @ 14c230f00

PkHistory * __thiscall PkHistory::PkHistory(PkHistory *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PkHistory__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->_impl_).pk_data_ = 0;
  *(undefined8 *)&(this->_impl_).pk_data_.field_0x8 = 0;
  (this->_impl_).id_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  *(Arena **)&(this->_impl_).pk_data_.field_0x10 = param_1;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).kill_count_ = 0;
  (this->_impl_).death_count_ = 0;
  (this->_impl_).region_index_ = 0;
  return this;
}

// PkHistory @ 14c230f50

PkHistory * __thiscall PkHistory::PkHistory(PkHistory *this,Arena *param_1,PkHistory *param_2)

{
  RepeatedPtrField<PkData> *this_00;
  int iVar1;
  int iVar2;
  TaggedStringPtr TVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PkHistory__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(this->_impl_).pk_data_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  *(Arena **)&(this->_impl_).pk_data_.field_0x10 = param_1;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).pk_data_.field_0x8 = 0;
  if (*(int *)&(param_2->_impl_).pk_data_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this_00,(RepeatedPtrFieldBase *)&(param_2->_impl_).pk_data_,
               google::protobuf::Arena::CopyConstruct<PkData>);
  }
  pvVar4 = (param_2->_impl_).id_.tagged_ptr_.ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&(param_2->_impl_).id_.tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar4;
  iVar1 = (param_2->_impl_).kill_count_;
  iVar2 = (param_2->_impl_).death_count_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).kill_count_ = iVar1;
  (this->_impl_).death_count_ = iVar2;
  (this->_impl_).region_index_ = (param_2->_impl_).region_index_;
  return this;
}

// ~PkData @ 14c231010

void __thiscall PkData::~PkData(PkData *this)

{
  this->_padding_ = (longlong)&___7PkData__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).guild_name_);
  return;
}

// ~PkHistory @ 14c231050

void __thiscall PkHistory::~PkHistory(PkHistory *this)

{
  this->_padding_ = (longlong)&___7PkHistory__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).id_);
  if (*(longlong *)&(this->_impl_).pk_data_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).pk_data_);
    return;
  }
  return;
}

// CopyFrom @ 14c2310a0

void __thiscall PkData::CopyFrom(PkData *this,PkData *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c2310e0

void __thiscall PkHistory::CopyFrom(PkHistory *this,PkHistory *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c231120

Metadata * __thiscall PkData::GetMetadata(PkData *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&PkData_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c231160

Metadata * __thiscall PkHistory::GetMetadata(PkHistory *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&PkHistory_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c2311a0

void __thiscall PkData::InternalSwap(PkData *this,PkData *param_1)

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
  pvVar3 = (param_1->_impl_).guild_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).guild_name_.tagged_ptr_.ptr_ = (this->_impl_).guild_name_.tagged_ptr_.ptr_;
  (this->_impl_).guild_name_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).char_id_,&(this->_impl_).field_0x3c,&(param_1->_impl_).char_id_);
  return;
}

// InternalSwap @ 14c231200

void __thiscall PkHistory::InternalSwap(PkHistory *this,PkHistory *param_1)

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
            ((char *)&(this->_impl_).pk_data_,(char *)&(param_1->_impl_).pk_data_);
  pvVar3 = (param_1->_impl_).id_.tagged_ptr_.ptr_;
  (param_1->_impl_).id_.tagged_ptr_.ptr_ = (this->_impl_).id_.tagged_ptr_.ptr_;
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).player_uid_,&(this->_impl_).field_0x3c,&(param_1->_impl_).player_uid_);
  return;
}

// `dynamic_atexit_destructor_for_'_PkData_default_instance_'' @ 150443c30

void __cdecl _dynamic_atexit_destructor_for___PkData_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_PkHistory_default_instance_'' @ 150443c40

void __cdecl _dynamic_atexit_destructor_for___PkHistory_default_instance___(void)

{
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// `dynamic_initializer_for_'_SqlResurrectTable_default_instance_'' @ 14129c160

void __cdecl ds_game::_dynamic_initializer_for___SqlResurrectTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlResurrectTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129c180

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fgame_2fsql_5fresurrect_5ftable_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c25ad50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ds_game::SqlResurrectTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
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
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
  }
  google::protobuf::RepeatedField<int>::MergeFrom
            ((RepeatedField<int> *)&param_1[1]._internal_metadata_,
             (RepeatedField<int> *)&param_2[1]._internal_metadata_);
  if ((int)param_2[3]._internal_metadata_.ptr_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)(param_1 + 3),(RepeatedPtrFieldBase *)(param_2 + 3),
               google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>);
  }
  uVar2 = (uint)param_2[1]._padding_;
  if ((char)uVar2 != '\0') {
    if ((uVar2 & 1) != 0) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[4]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar6->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[4]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar8 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_40._8_8_ = 0;
          local_40._Ptr = (char *)0x0;
          local_30 = ___xmm_000000000000000f0000000000000000;
          uStack_28 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[4]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
                     pAVar8);
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
        pAVar8 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[4]._internal_metadata_,pbVar6,pAVar8);
      }
    }
    if ((uVar2 & 2) != 0) {
      if ((MessageLite *)param_1[5]._padding_ == (MessageLite *)0x0) {
        pvVar4 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                           (pAVar9,(MessageLite *)param_2[5]._padding_);
        param_1[5]._padding_ = (longlong)pvVar4;
      }
      else {
        google::protobuf::Timestamp::MergeImpl
                  ((MessageLite *)param_1[5]._padding_,(MessageLite *)param_2[5]._padding_);
      }
    }
    if (((uVar2 & 4) != 0) && (lVar3 = param_2[5]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[5]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar2 & 8) != 0) && (iVar1 = (int)param_2[6]._padding_, iVar1 != 0)) {
      *(int *)&param_1[6]._padding_ = iVar1;
    }
    if (((uVar2 & 0x10) != 0) && (iVar1 = *(int *)((longlong)&param_2[6]._padding_ + 4), iVar1 != 0)
       ) {
      *(int *)((longlong)&param_1[6]._padding_ + 4) = iVar1;
    }
    if (((uVar2 & 0x20) != 0) && (iVar1 = (int)param_2[6]._internal_metadata_.ptr_, iVar1 != 0)) {
      *(int *)&param_1[6]._internal_metadata_.ptr_ = iVar1;
    }
    if (((uVar2 & 0x40) != 0) &&
       (iVar1 = *(int *)((longlong)&param_2[6]._internal_metadata_.ptr_ + 4), iVar1 != 0)) {
      *(int *)((longlong)&param_1[6]._internal_metadata_.ptr_ + 4) = iVar1;
    }
    if (((char)uVar2 < '\0') && (param_2[7]._padding_ != 0)) {
      param_1[7]._padding_ = param_2[7]._padding_;
    }
  }
  if (((uVar2 >> 8 & 1) != 0) && (iVar1 = (int)param_2[7]._internal_metadata_.ptr_, iVar1 != 0)) {
    *(int *)&param_1[7]._internal_metadata_.ptr_ = iVar1;
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

// Clear @ 14c25af90

void __thiscall ds_game::SqlResurrectTable::Clear(SqlResurrectTable *this)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  uVar2 = (this->_impl_).acc_count_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar2 & 4) == 0) {
    (this->_impl_).acc_count_.soo_rep_.field0_0x0.long_rep.elements_int = uVar2 & 0xfffffffffffffff8
    ;
  }
  else {
    (this->_impl_).acc_count_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  if (0 < *(int *)&(this->_impl_).reset_time_.field_0x8) {
    google::protobuf::internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).reset_time_);
  }
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).attacker_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar1 & 2) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).died_time_);
    }
  }
  if ((uVar1 & 0xfc) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).death_type_ = 0;
    (this->_impl_).wait_resurrect_ = 0.0;
    (this->_impl_).wait_auto_resurrect_ = 0.0;
    (this->_impl_).dead_zone_ = 0;
    (this->_impl_).attacker_uid_ = 0;
  }
  (this->_impl_).penalty_id_ = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c25b040

ulong64 __thiscall ds_game::SqlResurrectTable::ByteSizeLong(SqlResurrectTable *this)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  __uint64 _Var4;
  __uint64 _Var5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  RepeatedPtrField<google::protobuf::Timestamp> *pRVar9;
  
  _Var4 = google::protobuf::internal::WireFormatLite::Int32SizeWithPackedTagSize
                    (&(this->_impl_).acc_count_,1,&(this->_impl_)._acc_count_cached_byte_size_);
  uVar1 = *(uint *)&(this->_impl_).reset_time_.field_0x8;
  pRVar9 = &(this->_impl_).reset_time_;
  _Var4 = uVar1 + _Var4;
  if ((*(ulonglong *)pRVar9 & 1) != 0) {
    pRVar9 = (RepeatedPtrField<google::protobuf::Timestamp> *)(*(ulonglong *)pRVar9 + 7);
  }
  puVar3 = (undefined8 *)&pRVar9->field_0x0;
  for (; pRVar9 != (RepeatedPtrField<google::protobuf::Timestamp> *)(puVar3 + (int)uVar1);
      pRVar9 = (RepeatedPtrField<google::protobuf::Timestamp> *)&pRVar9->field_0x8) {
    _Var5 = google::protobuf::Timestamp::ByteSizeLong(*(Timestamp **)pRVar9);
    uVar7 = (uint)_Var5 | 1;
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
    _Var4 = _Var4 + (iVar8 * -9 + 0x160U >> 6) + _Var5;
  }
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((char)uVar1 != '\0') {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).attacker_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
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
      _Var4 = _Var4 + 1 + (ulonglong)(iVar8 * -9 + 0x160U >> 6) + lVar2;
    }
    if ((uVar1 & 2) != 0) {
      _Var5 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).died_time_);
      uVar7 = (uint)_Var5 | 1;
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
      _Var4 = _Var4 + 1 + (iVar8 * -9 + 0x160U >> 6) + _Var5;
    }
    if (((uVar1 & 4) != 0) && (uVar6 = (this->_impl_).player_uid_, uVar6 != 0)) {
      uVar6 = uVar6 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar2;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar6);
      }
      _Var4 = _Var4 + (iVar8 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 8) != 0) && (iVar8 = (this->_impl_).death_type_, iVar8 != 0)) {
      uVar6 = (longlong)iVar8 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar2;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar6);
      }
      _Var4 = _Var4 + 1 + (ulonglong)(iVar8 * -9 + 0x280U >> 6);
    }
    if (((uVar1 & 0x10) != 0) && ((this->_impl_).wait_resurrect_ != 0.0)) {
      _Var4 = _Var4 + 5;
    }
    if (((uVar1 & 0x20) != 0) && ((this->_impl_).wait_auto_resurrect_ != 0.0)) {
      _Var4 = _Var4 + 5;
    }
    if (((uVar1 & 0x40) != 0) && (iVar8 = (this->_impl_).dead_zone_, iVar8 != 0)) {
      uVar6 = (longlong)iVar8 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar2;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar6);
      }
      _Var4 = _Var4 + 1 + (ulonglong)(iVar8 * -9 + 0x280U >> 6);
    }
    if (((char)uVar1 < '\0') && (uVar6 = (this->_impl_).attacker_uid_, uVar6 != 0)) {
      uVar6 = uVar6 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar2;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar6);
      }
      _Var4 = _Var4 + (iVar8 * -9 + 0x2c0U >> 6);
    }
  }
  if (((uVar1 >> 8 & 1) != 0) && (iVar8 = (this->_impl_).penalty_id_, iVar8 != 0)) {
    uVar6 = (longlong)iVar8 | 1;
    if (__isa_available < 5) {
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 0x3f - (int)lVar2;
    }
    else {
      iVar8 = (int)LZCOUNT(uVar6);
    }
    _Var4 = _Var4 + (iVar8 * -9 + 0x2c0U >> 6);
  }
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c25b300

uchar * __thiscall
ds_game::SqlResurrectTable::_InternalSerialize
          (SqlResurrectTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  size_t *psVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  size_t _Size;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  uchar *puVar10;
  byte bVar11;
  int *piVar12;
  char *pcVar13;
  MessageLite *pMVar14;
  atomic<int> aVar15;
  char *_Src;
  uint uVar16;
  basic_string_view<char,std::char_traits<char>_> local_38;
  
  uVar16 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (lVar6 = (this->_impl_).player_uid_, lVar6 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar6,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) && ((this->_impl_).death_type_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar9 = (ulonglong)(this->_impl_).death_type_;
    *param_1 = 0x18;
    while( true ) {
      param_1 = param_1 + 1;
      bVar11 = (byte)uVar9;
      if (uVar9 < 0x80) break;
      uVar9 = uVar9 >> 7;
      *param_1 = bVar11 | 0x80;
    }
    *param_1 = bVar11;
    param_1 = param_1 + 1;
  }
  uVar4 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar4 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (4,(MessageLite *)(this->_impl_).died_time_,
                         (int)(((this->_impl_).died_time_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar4 & 0x10) != 0) && ((this->_impl_).wait_resurrect_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    fVar3 = (this->_impl_).wait_resurrect_;
    *param_1 = 0x2d;
    *(float *)(param_1 + 1) = fVar3;
    param_1 = param_1 + 5;
  }
  if (((uVar4 & 0x20) != 0) && ((this->_impl_).wait_auto_resurrect_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    fVar3 = (this->_impl_).wait_auto_resurrect_;
    *param_1 = 0x35;
    *(float *)(param_1 + 1) = fVar3;
    param_1 = param_1 + 5;
  }
  aVar15 = (this->_impl_)._acc_count_cached_byte_size_.atom_;
  if (0 < (int)aVar15) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    *param_1 = 0x3a;
    while( true ) {
      param_1 = param_1 + 1;
      bVar11 = aVar15._0_1_;
      if ((uint)aVar15 < 0x80) break;
      aVar15 = (atomic<int>)((uint)aVar15 >> 7);
      *param_1 = bVar11 | 0x80;
    }
    *param_1 = bVar11;
    param_1 = param_1 + 1;
    uVar9 = (this->_impl_).acc_count_.soo_rep_.field0_0x0.long_rep.elements_int;
    if ((uVar9 & 4) == 0) {
      piVar12 = &(this->_impl_).acc_count_.soo_rep_.field0_0x0.long_rep.size;
      uVar8 = (uint)uVar9 & 3;
    }
    else {
      uVar8 = (this->_impl_).acc_count_.soo_rep_.field0_0x0.long_rep.size;
      piVar12 = (int *)(uVar9 & 0xfffffffffffffff8);
    }
    piVar2 = piVar12 + (int)uVar8;
    do {
      if (param_2->end_ <= param_1) {
        param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
      }
      iVar5 = *piVar12;
      piVar12 = piVar12 + 1;
      for (uVar9 = (ulonglong)iVar5; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
        *param_1 = (byte)uVar9 | 0x80;
        param_1 = param_1 + 1;
      }
      *param_1 = (byte)uVar9;
      param_1 = param_1 + 1;
    } while (piVar12 < piVar2);
  }
  uVar8 = *(uint *)&(this->_impl_).reset_time_.field_0x8;
  if (uVar8 != 0) {
    do {
      pMVar14 = *(MessageLite **)&(this->_impl_).reset_time_;
      if (((ulonglong)pMVar14 & 1) != 0) {
        pMVar14 = *(MessageLite **)((longlong)&pMVar14->_padding_ + (longlong)(int)uVar16 * 8 + 7);
      }
      param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                          (8,pMVar14,*(int *)((longlong)&pMVar14[1]._padding_ + 4),param_1,param_2);
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar8);
  }
  if (((char)uVar4 < '\0') && (lVar6 = (this->_impl_).attacker_uid_, lVar6 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<9>
                        (param_2,lVar6,param_1);
  }
  if ((uVar4 & 1) != 0) {
    _Src = (char *)((ulonglong)(this->_impl_).attacker_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    psVar1 = (size_t *)(_Src + 0x10);
    if (*(longlong *)(_Src + 0x10) != 0) {
      pcVar13 = _Src;
      if (0xf < *(ulonglong *)(_Src + 0x18)) {
        pcVar13 = *(char **)_Src;
      }
      local_38._Mysize = 0x27;
      local_38._Mydata = "ds_game.SqlResurrectTable.attacker_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar13,(int)*(longlong *)(_Src + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(_Src + 0x18)) {
        _Src = *(char **)_Src;
      }
      _Size = *psVar1;
      if (((longlong)_Size < 0x80) &&
         ((longlong)_Size <= (longlong)(param_2->end_ + (0xe - (longlong)param_1)))) {
        *param_1 = 0x52;
        param_1[1] = (byte)_Size;
        memcpy(param_1 + 2,_Src,_Size);
        param_1 = param_1 + 2 + _Size;
      }
      else {
        local_38._Mydata = _Src;
        local_38._Mysize = _Size;
        param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliasedOutline
                            (param_2,10,&local_38,param_1);
      }
    }
  }
  if (((uVar4 & 0x40) != 0) && ((this->_impl_).dead_zone_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar9 = (ulonglong)(this->_impl_).dead_zone_;
    *param_1 = 0x58;
    while( true ) {
      pbVar7 = param_1 + 1;
      bVar11 = (byte)uVar9;
      if (uVar9 < 0x80) break;
      uVar9 = uVar9 >> 7;
      *pbVar7 = bVar11 | 0x80;
      param_1 = pbVar7;
    }
    *pbVar7 = bVar11;
    param_1 = param_1 + 2;
  }
  if (((uVar4 >> 8 & 1) != 0) && (iVar5 = (this->_impl_).penalty_id_, iVar5 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<12>
                        (param_2,iVar5,param_1);
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar10 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                      ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                       param_2);
  return puVar10;
}

// GetClassData @ 14c25b6d0

ClassData * __thiscall ds_game::SqlResurrectTable::GetClassData(SqlResurrectTable *this)

{
  return (ClassData *)&SqlResurrectTable_class_data_;
}

// PlacementNew_ @ 14c25b6f0

void * __cdecl ds_game::SqlResurrectTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlResurrectTable_ds_game__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(Arena **)((longlong)param_2 + 0x18) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x48) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(Arena **)((longlong)param_2 + 0x40) = param_3;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined4 *)((longlong)param_2 + 0x78) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c25b750

void * __thiscall
ds_game::SqlResurrectTable::_scalar_deleting_destructor_(SqlResurrectTable *this,uint param_1)

{
  ~SqlResurrectTable(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// SqlResurrectTable @ 14c25b790

SqlResurrectTable * __thiscall
ds_game::SqlResurrectTable::SqlResurrectTable(SqlResurrectTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlResurrectTable_ds_game__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).acc_count_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->_impl_).acc_count_.soo_rep_.field0_0x0 + 8) = 0;
  (this->_impl_).attacker_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_)._acc_count_cached_byte_size_.atom_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->_impl_).reset_time_ = 0;
  *(undefined8 *)&(this->_impl_).reset_time_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).reset_time_.field_0x10 = param_1;
  (this->_impl_).died_time_ = (Timestamp *)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).death_type_ = 0;
  (this->_impl_).wait_resurrect_ = 0.0;
  (this->_impl_).wait_auto_resurrect_ = 0.0;
  (this->_impl_).dead_zone_ = 0;
  (this->_impl_).attacker_uid_ = 0;
  (this->_impl_).penalty_id_ = 0;
  return this;
}

// SqlResurrectTable @ 14c25b7f0

SqlResurrectTable * __thiscall
ds_game::SqlResurrectTable::SqlResurrectTable
          (SqlResurrectTable *this,Arena *param_1,SqlResurrectTable *param_2)

{
  RepeatedPtrField<google::protobuf::Timestamp> *this_00;
  long64 lVar1;
  int iVar2;
  float fVar3;
  TaggedStringPtr TVar4;
  void *pvVar5;
  Timestamp *pTVar6;
  InternalVisibility local_res8 [8];
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlResurrectTable_ds_game__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pTVar6 = (Timestamp *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<int>::RepeatedField<int>
            (&(this->_impl_).acc_count_,local_res8[0],param_1,&(param_2->_impl_).acc_count_);
  this_00 = &(this->_impl_).reset_time_;
  (this->_impl_)._acc_count_cached_byte_size_.atom_ = (atomic<int>)0x0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).reset_time_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).reset_time_.field_0x10 = param_1;
  if (*(int *)&(param_2->_impl_).reset_time_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this_00,
               (RepeatedPtrFieldBase *)&(param_2->_impl_).reset_time_,
               google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>);
  }
  pvVar5 = (param_2->_impl_).attacker_name_.tagged_ptr_.ptr_;
  if (((ulonglong)pvVar5 & 3) != 0) {
    TVar4 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&(param_2->_impl_).attacker_name_.tagged_ptr_,(Arena *)local_res8);
                    /* WARNING: Load size is inaccurate */
    pvVar5 = *TVar4.ptr_;
  }
  (this->_impl_).attacker_name_.tagged_ptr_.ptr_ = pvVar5;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pTVar6 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).died_time_);
  }
  (this->_impl_).died_time_ = pTVar6;
  iVar2 = (param_2->_impl_).death_type_;
  fVar3 = (param_2->_impl_).wait_resurrect_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).death_type_ = iVar2;
  (this->_impl_).wait_resurrect_ = fVar3;
  iVar2 = (param_2->_impl_).dead_zone_;
  lVar1 = (param_2->_impl_).attacker_uid_;
  (this->_impl_).wait_auto_resurrect_ = (param_2->_impl_).wait_auto_resurrect_;
  (this->_impl_).dead_zone_ = iVar2;
  (this->_impl_).attacker_uid_ = lVar1;
  (this->_impl_).penalty_id_ = (param_2->_impl_).penalty_id_;
  return this;
}

// ~RepeatedPtrField<google::protobuf::Timestamp> @ 14c25b8f0

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Timestamp>::
~RepeatedPtrField<google::protobuf::Timestamp>(RepeatedPtrField<google::protobuf::Timestamp> *this)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  RepeatedPtrField<google::protobuf::Timestamp> *pRVar4;
  
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
    pRVar4 = (RepeatedPtrField<google::protobuf::Timestamp> *)(*(longlong *)this + 7);
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

// ~SqlResurrectTable @ 14c25b910

void __thiscall ds_game::SqlResurrectTable::~SqlResurrectTable(SqlResurrectTable *this)

{
  Timestamp *this_00;
  ulonglong uVar1;
  
  this->_padding_ = (longlong)&___7SqlResurrectTable_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).attacker_name_);
  this_00 = (this->_impl_).died_time_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
  }
  if (*(longlong *)&(this->_impl_).reset_time_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).reset_time_);
  }
  uVar1 = (this->_impl_).acc_count_.soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)(this->_impl_).acc_count_.soo_rep_.field0_0x0.long_rep.capacity * 4
                      + 8);
  }
  return;
}

// CopyFrom @ 14c25b9b0

void __thiscall
ds_game::SqlResurrectTable::CopyFrom(SqlResurrectTable *this,SqlResurrectTable *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c25b9f0

Metadata * __thiscall
ds_game::SqlResurrectTable::GetMetadata(SqlResurrectTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SqlResurrectTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c25ba30

void __thiscall
ds_game::SqlResurrectTable::InternalSwap(SqlResurrectTable *this,SqlResurrectTable *param_1)

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
            ((char *)&(this->_impl_).acc_count_,(char *)&(param_1->_impl_).acc_count_);
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).reset_time_,(char *)&(param_1->_impl_).reset_time_);
  pvVar3 = (param_1->_impl_).attacker_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).attacker_name_.tagged_ptr_.ptr_ = (this->_impl_).attacker_name_.tagged_ptr_.ptr_
  ;
  (this->_impl_).attacker_name_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).died_time_,&(this->_impl_).field_0x6c,&(param_1->_impl_).died_time_);
  return;
}

// clear_died_time @ 14c25bab0

void __thiscall ds_game::SqlResurrectTable::clear_died_time(SqlResurrectTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).died_time_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// clear_reset_time @ 14c25bae0

void __thiscall ds_game::SqlResurrectTable::clear_reset_time(SqlResurrectTable *this)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  RepeatedPtrField<google::protobuf::Timestamp> *pRVar5;
  
  pRVar5 = &(this->_impl_).reset_time_;
  if (*(int *)&(this->_impl_).reset_time_.field_0x8 < 1) {
    return;
  }
  puVar1 = &(this->_impl_).reset_time_.field_0x8;
  if ((*(ulonglong *)pRVar5 & 1) != 0) {
    pRVar5 = (RepeatedPtrField<google::protobuf::Timestamp> *)(*(ulonglong *)pRVar5 + 7);
  }
  iVar2 = *(int *)puVar1;
  lVar4 = 0;
  do {
    lVar3 = lVar4 * 8;
    lVar4 = lVar4 + 1;
    (**(code **)(**(longlong **)(&pRVar5->field_0x0 + lVar3) + 8))();
  } while (lVar4 < iVar2);
  *(undefined4 *)puVar1 = 0;
  return;
}

// `dynamic_atexit_destructor_for_'_SqlResurrectTable_default_instance_'' @ 150444520

void __cdecl ds_game::_dynamic_atexit_destructor_for___SqlResurrectTable_default_instance___(void)

{
  return;
}


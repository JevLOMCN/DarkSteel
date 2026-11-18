// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// `dynamic_initializer_for_'_SqlMailTable_default_instance_'' @ 14129c570

void __cdecl ds_mail::_dynamic_initializer_for___SqlMailTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlMailTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129c590

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_ds_5fmail_2fsql_5fmail_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c261430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ds_mail::SqlMailTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  MessageLite *pMVar4;
  MessageLite *pMVar5;
  longlong lVar6;
  byte bVar7;
  void *pvVar8;
  undefined8 uVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  ulong64 uVar11;
  Arena *pAVar12;
  Arena *pAVar13;
  undefined1 auStackY_88 [32];
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  pAVar12 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar7 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar13 = pAVar12;
  if (bVar7 != 0) {
    pAVar13 = (Arena *)(pAVar12->impl_).tag_and_id_;
  }
  uVar2 = (uint)param_2[1]._padding_;
  if ((char)uVar2 != '\0') {
    if ((uVar2 & 1) != 0) {
      pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar10->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (bVar7 != 0) {
            pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar12);
          if (0xf < uStack_38) {
            uVar11 = uStack_38 + 1;
            uVar9 = local_50._Ptr;
            if (0xfff < uVar11) {
              uVar9 = *(undefined8 *)(local_50._Ptr + -8);
              uVar11 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar9)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar9,uVar11);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        if (bVar7 != 0) {
          pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar10,pAVar12);
      }
    }
    if ((uVar2 & 2) != 0) {
      pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_2[2]._padding_ & 0xfffffffffffffffc);
      if ((pbVar10->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar12 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 2),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar12);
          if (0xf < uStack_38) {
            uVar11 = uStack_38 + 1;
            uVar9 = local_50._Ptr;
            if (0xfff < uVar11) {
              uVar9 = *(undefined8 *)(local_50._Ptr + -8);
              uVar11 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar9)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar9,uVar11);
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
                  ((ArenaStringPtr *)(param_1 + 2),pbVar10,pAVar12);
      }
    }
    if ((uVar2 & 4) != 0) {
      pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_2[2]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar10->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
          pAVar12 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[2]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar12);
          if (0xf < uStack_38) {
            uVar11 = uStack_38 + 1;
            uVar9 = local_50._Ptr;
            if (0xfff < uVar11) {
              uVar9 = *(undefined8 *)(local_50._Ptr + -8);
              uVar11 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar9)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar9,uVar11);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
        pAVar12 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[2]._internal_metadata_,pbVar10,pAVar12);
      }
    }
    if ((uVar2 & 8) != 0) {
      pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                (param_2[3]._padding_ & 0xfffffffffffffffc);
      if ((pbVar10->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[3]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 8;
          pAVar12 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 3),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar12);
          if (0xf < uStack_38) {
            uVar11 = uStack_38 + 1;
            uVar9 = local_50._Ptr;
            if (0xfff < uVar11) {
              uVar9 = *(undefined8 *)(local_50._Ptr + -8);
              uVar11 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar9)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar9,uVar11);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 8;
        pAVar12 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar12 = (Arena *)(pAVar12->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 3),pbVar10,pAVar12);
      }
    }
    if ((uVar2 & 0x10) != 0) {
      pMVar4 = (MessageLite *)param_1[3]._internal_metadata_.ptr_;
      pMVar5 = (MessageLite *)param_2[3]._internal_metadata_.ptr_;
      if (pMVar4 == (MessageLite *)0x0) {
        pvVar8 = google::protobuf::Arena::CopyConstruct<UniqueId>(pAVar13,pMVar5);
        param_1[3]._internal_metadata_.ptr_ = (long64)pvVar8;
      }
      else {
        UniqueId::MergeImpl(pMVar4,pMVar5);
      }
    }
    if ((uVar2 & 0x20) != 0) {
      if ((MessageLite *)param_1[4]._padding_ == (MessageLite *)0x0) {
        pvVar8 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                           (pAVar13,(MessageLite *)param_2[4]._padding_);
        param_1[4]._padding_ = (longlong)pvVar8;
      }
      else {
        google::protobuf::Timestamp::MergeImpl
                  ((MessageLite *)param_1[4]._padding_,(MessageLite *)param_2[4]._padding_);
      }
    }
    if ((uVar2 & 0x40) != 0) {
      pMVar4 = (MessageLite *)param_1[4]._internal_metadata_.ptr_;
      pMVar5 = (MessageLite *)param_2[4]._internal_metadata_.ptr_;
      if (pMVar4 == (MessageLite *)0x0) {
        pvVar8 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>(pAVar13,pMVar5)
        ;
        param_1[4]._internal_metadata_.ptr_ = (long64)pvVar8;
      }
      else {
        google::protobuf::Timestamp::MergeImpl(pMVar4,pMVar5);
      }
    }
    if (((char)uVar2 < '\0') && (param_2[5]._padding_ != 0)) {
      param_1[5]._padding_ = param_2[5]._padding_;
    }
  }
  if ((uVar2 & 0x1f00) != 0) {
    if (((uVar2 >> 8 & 1) != 0) && (lVar6 = param_2[5]._internal_metadata_.ptr_, lVar6 != 0)) {
      param_1[5]._internal_metadata_.ptr_ = lVar6;
    }
    if (((uVar2 >> 9 & 1) != 0) && (iVar3 = (int)param_2[6]._padding_, iVar3 != 0)) {
      *(int *)&param_1[6]._padding_ = iVar3;
    }
    if (((uVar2 >> 10 & 1) != 0) &&
       (iVar3 = *(int *)((longlong)&param_2[6]._padding_ + 4), iVar3 != 0)) {
      *(int *)((longlong)&param_1[6]._padding_ + 4) = iVar3;
    }
    if (((uVar2 >> 0xb & 1) != 0) &&
       (cVar1 = (char)param_2[6]._internal_metadata_.ptr_, cVar1 != '\0')) {
      *(char *)&param_1[6]._internal_metadata_.ptr_ = cVar1;
    }
    if (((uVar2 >> 0xc & 1) != 0) &&
       (cVar1 = *(char *)((longlong)&param_2[6]._internal_metadata_.ptr_ + 1), cVar1 != '\0')) {
      *(char *)((longlong)&param_1[6]._internal_metadata_.ptr_ + 1) = cVar1;
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

// Clear @ 14c2618d0

void __thiscall ds_mail::SqlMailTable::Clear(SqlMailTable *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).mail_sender_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).mail_title_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 4) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).mail_content_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 8) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).reward_values_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 0x10) != 0) {
      UniqueId::Clear((this->_impl_).mail_uid_);
    }
    if ((uVar1 & 0x20) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).send_dt_);
    }
    if ((uVar1 & 0x40) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).remove_dt_);
    }
  }
  (this->_impl_).receiver_player_uid_ = 0;
  if ((uVar1 & 0x1f00) != 0) {
    (this->_impl_).sender_player_uid_ = 0;
    (this->_impl_).mail_type_ = 0;
    (this->_impl_).mail_category_type_ = 0;
    (this->_impl_).is_read_ = false;
    (this->_impl_).is_reward_ = false;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c2619e0

ulong64 __thiscall ds_mail::SqlMailTable::ByteSizeLong(SqlMailTable *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulong64 uVar4;
  __uint64 _Var5;
  int iVar6;
  __uint64 _Var7;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var7 = 0;
  if ((char)uVar1 != '\0') {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).mail_sender_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc
                  ) + 0x10), lVar2 != 0)) {
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
                 (((ulonglong)(this->_impl_).mail_title_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
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
    if (((uVar1 & 4) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).mail_content_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
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
                 (((ulonglong)(this->_impl_).reward_values_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
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
    if ((uVar1 & 0x10) != 0) {
      uVar4 = UniqueId::ByteSizeLong((this->_impl_).mail_uid_);
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
    if ((uVar1 & 0x20) != 0) {
      _Var5 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).send_dt_);
      uVar3 = (uint)_Var5 | 1;
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
      _Var7 = _Var7 + 1 + (iVar6 * -9 + 0x160U >> 6) + _Var5;
    }
    if ((uVar1 & 0x40) != 0) {
      _Var5 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).remove_dt_);
      uVar3 = (uint)_Var5 | 1;
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
      _Var7 = _Var7 + 1 + (iVar6 * -9 + 0x160U >> 6) + _Var5;
    }
    if (((char)uVar1 < '\0') && (lVar2 = (this->_impl_).receiver_player_uid_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar4;
    }
  }
  if ((uVar1 & 0x1f00) != 0) {
    if (((uVar1 >> 8 & 1) != 0) && (lVar2 = (this->_impl_).sender_player_uid_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar4;
    }
    if (((uVar1 >> 9 & 1) != 0) && (iVar6 = (this->_impl_).mail_type_, iVar6 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar4;
    }
    if (((uVar1 >> 10 & 1) != 0) && (iVar6 = (this->_impl_).mail_category_type_, iVar6 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar4;
    }
    if (((uVar1 >> 0xb & 1) != 0) && ((this->_impl_).is_read_ != false)) {
      _Var7 = _Var7 + 2;
    }
    if (((uVar1 >> 0xc & 1) != 0) && ((this->_impl_).is_reward_ != false)) {
      _Var7 = _Var7 + 2;
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c261cb0

uchar * __thiscall
ds_mail::SqlMailTable::_InternalSerialize
          (SqlMailTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uchar *puVar6;
  char *pcVar7;
  char *pcVar8;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x80) != 0) &&
     (lVar5 = (this->_impl_).receiver_player_uid_, lVar5 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar5,param_1);
  }
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 0x10) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (2,(MessageLite *)(this->_impl_).mail_uid_,
                         (int)(((this->_impl_).mail_uid_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar3 >> 8 & 1) != 0) && (lVar5 = (this->_impl_).sender_player_uid_, lVar5 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<3>
                        (param_2,lVar5,param_1);
  }
  if ((uVar3 & 1) != 0) {
    pcVar8 = (char *)((ulonglong)(this->_impl_).mail_sender_name_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar8 + 0x10);
    if (*(longlong *)(pcVar8 + 0x10) != 0) {
      pcVar7 = pcVar8;
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar7 = *(char **)pcVar8;
      }
      local_28._Mysize = 0x25;
      local_28._Mydata = "ds_mail.SqlMailTable.mail_sender_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar7,(int)*(longlong *)(pcVar8 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar8 = *(char **)pcVar8;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar8;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,4,&local_28,param_1);
    }
  }
  if ((uVar3 & 2) != 0) {
    pcVar8 = (char *)((ulonglong)(this->_impl_).mail_title_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar8 + 0x10);
    if (*(longlong *)(pcVar8 + 0x10) != 0) {
      pcVar7 = pcVar8;
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar7 = *(char **)pcVar8;
      }
      local_28._Mysize = 0x1f;
      local_28._Mydata = "ds_mail.SqlMailTable.mail_title";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar7,(int)*(longlong *)(pcVar8 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar8 = *(char **)pcVar8;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar8;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,5,&local_28,param_1);
    }
  }
  if ((uVar3 & 4) != 0) {
    pcVar8 = (char *)((ulonglong)(this->_impl_).mail_content_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
    ;
    puVar1 = (ulong64 *)(pcVar8 + 0x10);
    if (*(longlong *)(pcVar8 + 0x10) != 0) {
      pcVar7 = pcVar8;
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar7 = *(char **)pcVar8;
      }
      local_28._Mysize = 0x21;
      local_28._Mydata = "ds_mail.SqlMailTable.mail_content";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar7,(int)*(longlong *)(pcVar8 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar8 = *(char **)pcVar8;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar8;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,6,&local_28,param_1);
    }
  }
  if ((uVar3 & 0x20) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (7,(MessageLite *)(this->_impl_).send_dt_,
                         (int)(((this->_impl_).send_dt_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((uVar3 & 0x40) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (8,(MessageLite *)(this->_impl_).remove_dt_,
                         (int)(((this->_impl_).remove_dt_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar3 >> 9 & 1) != 0) && (iVar4 = (this->_impl_).mail_type_, iVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<9>
                        (param_2,iVar4,param_1);
  }
  if (((uVar3 >> 10 & 1) != 0) && (iVar4 = (this->_impl_).mail_category_type_, iVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<10>
                        (param_2,iVar4,param_1);
  }
  if ((uVar3 & 8) != 0) {
    pcVar8 = (char *)((ulonglong)(this->_impl_).reward_values_.tagged_ptr_.ptr_ & 0xfffffffffffffffc
                     );
    puVar1 = (ulong64 *)(pcVar8 + 0x10);
    if (*(longlong *)(pcVar8 + 0x10) != 0) {
      pcVar7 = pcVar8;
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar7 = *(char **)pcVar8;
      }
      local_28._Mysize = 0x22;
      local_28._Mydata = "ds_mail.SqlMailTable.reward_values";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar7,(int)*(longlong *)(pcVar8 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar8 = *(char **)pcVar8;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar8;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0xb,&local_28,param_1);
    }
  }
  if (((uVar3 >> 0xb & 1) != 0) && ((this->_impl_).is_read_ != false)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar2 = (this->_impl_).is_read_;
    *param_1 = '`';
    param_1[1] = bVar2 != false;
    param_1 = param_1 + 2;
  }
  if (((uVar3 >> 0xc & 1) != 0) && ((this->_impl_).is_reward_ != false)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar2 = (this->_impl_).is_reward_;
    *param_1 = 'h';
    param_1[1] = bVar2 != false;
    param_1 = param_1 + 2;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar6 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar6;
  }
  return param_1;
}

// GetClassData @ 14c262050

ClassData * __thiscall ds_mail::SqlMailTable::GetClassData(SqlMailTable *this)

{
  return (ClassData *)&SqlMailTable_class_data_;
}

// PlacementNew_ @ 14c262070

void * __cdecl ds_mail::SqlMailTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlMailTable_ds_mail__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x20) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x28) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x30) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined2 *)((longlong)param_2 + 0x68) = 0;
  return param_2;
}

// SqlMailTable @ 14c2620c0

SqlMailTable * __thiscall ds_mail::SqlMailTable::SqlMailTable(SqlMailTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlMailTable_ds_mail__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).mail_sender_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).mail_title_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).mail_content_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).reward_values_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).mail_uid_ = (UniqueId *)0x0;
  (this->_impl_).send_dt_ = (Timestamp *)0x0;
  (this->_impl_).remove_dt_ = (Timestamp *)0x0;
  (this->_impl_).receiver_player_uid_ = 0;
  (this->_impl_).sender_player_uid_ = 0;
  (this->_impl_).mail_type_ = 0;
  (this->_impl_).mail_category_type_ = 0;
  (this->_impl_).is_read_ = false;
  (this->_impl_).is_reward_ = false;
  return this;
}

// SqlMailTable @ 14c262110

SqlMailTable * __thiscall
ds_mail::SqlMailTable::SqlMailTable(SqlMailTable *this,Arena *param_1,SqlMailTable *param_2)

{
  ArenaStringPtr *pAVar1;
  uint uVar2;
  long64 lVar3;
  int iVar4;
  bool bVar5;
  TaggedStringPtr TVar6;
  void *pvVar7;
  Timestamp *pTVar8;
  Timestamp *pTVar9;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlMailTable_ds_mail__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).mail_sender_name_;
  pTVar9 = (Timestamp *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar7 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar7 & 3) != 0) {
    TVar6 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar7 = *TVar6.ptr_;
  }
  pAVar1 = &(param_2->_impl_).mail_title_;
  (this->_impl_).mail_sender_name_.tagged_ptr_.ptr_ = pvVar7;
  pvVar7 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar7 & 3) != 0) {
    TVar6 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar7 = *TVar6.ptr_;
  }
  pAVar1 = &(param_2->_impl_).mail_content_;
  (this->_impl_).mail_title_.tagged_ptr_.ptr_ = pvVar7;
  pvVar7 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar7 & 3) != 0) {
    TVar6 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    pvVar7 = *TVar6.ptr_;
  }
  pAVar1 = &(param_2->_impl_).reward_values_;
  (this->_impl_).mail_content_.tagged_ptr_.ptr_ = pvVar7;
  pvVar7 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar7 & 3) != 0) {
    TVar6 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000020);
                    /* WARNING: Load size is inaccurate */
    pvVar7 = *TVar6.ptr_;
  }
  (this->_impl_).reward_values_.tagged_ptr_.ptr_ = pvVar7;
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  pTVar8 = pTVar9;
  if ((uVar2 & 0x10) != 0) {
    pTVar8 = google::protobuf::Arena::CopyConstruct<UniqueId>(param_1,(param_2->_impl_).mail_uid_);
  }
  (this->_impl_).mail_uid_ = (UniqueId *)pTVar8;
  pTVar8 = pTVar9;
  if ((uVar2 & 0x20) != 0) {
    pTVar8 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).send_dt_);
  }
  (this->_impl_).send_dt_ = pTVar8;
  if ((uVar2 & 0x40) != 0) {
    pTVar9 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).remove_dt_);
  }
  (this->_impl_).remove_dt_ = pTVar9;
  lVar3 = (param_2->_impl_).sender_player_uid_;
  (this->_impl_).receiver_player_uid_ = (param_2->_impl_).receiver_player_uid_;
  (this->_impl_).sender_player_uid_ = lVar3;
  iVar4 = (param_2->_impl_).mail_category_type_;
  (this->_impl_).mail_type_ = (param_2->_impl_).mail_type_;
  (this->_impl_).mail_category_type_ = iVar4;
  bVar5 = (param_2->_impl_).is_reward_;
  (this->_impl_).is_read_ = (param_2->_impl_).is_read_;
  (this->_impl_).is_reward_ = bVar5;
  return this;
}

// ~SqlMailTable @ 14c262260

void __thiscall ds_mail::SqlMailTable::~SqlMailTable(SqlMailTable *this)

{
  UniqueId *this_00;
  Timestamp *pTVar1;
  
  this->_padding_ = (longlong)&___7SqlMailTable_ds_mail__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).mail_sender_name_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).mail_title_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).mail_content_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).reward_values_);
  this_00 = (this->_impl_).mail_uid_;
  if (this_00 != (UniqueId *)0x0) {
    UniqueId::~UniqueId(this_00);
    ::operator_delete(this_00,0x20);
  }
  pTVar1 = (this->_impl_).send_dt_;
  if (pTVar1 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(pTVar1);
    ::operator_delete(pTVar1,0x28);
  }
  pTVar1 = (this->_impl_).remove_dt_;
  if (pTVar1 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(pTVar1);
    ::operator_delete(pTVar1,0x28);
  }
  return;
}

// CopyFrom @ 14c262320

void __thiscall ds_mail::SqlMailTable::CopyFrom(SqlMailTable *this,SqlMailTable *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c262360

Metadata * __thiscall
ds_mail::SqlMailTable::GetMetadata(SqlMailTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SqlMailTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c2623a0

void __thiscall ds_mail::SqlMailTable::InternalSwap(SqlMailTable *this,SqlMailTable *param_1)

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
  pvVar3 = (param_1->_impl_).mail_sender_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).mail_sender_name_.tagged_ptr_.ptr_ =
       (this->_impl_).mail_sender_name_.tagged_ptr_.ptr_;
  (this->_impl_).mail_sender_name_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).mail_title_.tagged_ptr_.ptr_;
  (param_1->_impl_).mail_title_.tagged_ptr_.ptr_ = (this->_impl_).mail_title_.tagged_ptr_.ptr_;
  (this->_impl_).mail_title_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).mail_content_.tagged_ptr_.ptr_;
  (param_1->_impl_).mail_content_.tagged_ptr_.ptr_ = (this->_impl_).mail_content_.tagged_ptr_.ptr_;
  (this->_impl_).mail_content_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).reward_values_.tagged_ptr_.ptr_;
  (param_1->_impl_).reward_values_.tagged_ptr_.ptr_ = (this->_impl_).reward_values_.tagged_ptr_.ptr_
  ;
  (this->_impl_).reward_values_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).mail_uid_,&(this->_impl_).field_0x5a,&(param_1->_impl_).mail_uid_);
  return;
}

// clear_mail_uid @ 14c262420

void __thiscall ds_mail::SqlMailTable::clear_mail_uid(SqlMailTable *this)

{
  UniqueId *this_00;
  
  this_00 = (this->_impl_).mail_uid_;
  if (this_00 != (UniqueId *)0x0) {
    UniqueId::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xffffffef;
  return;
}

// clear_remove_dt @ 14c262450

void __thiscall ds_mail::SqlMailTable::clear_remove_dt(SqlMailTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).remove_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xffffffbf;
  return;
}

// clear_send_dt @ 14c262480

void __thiscall ds_mail::SqlMailTable::clear_send_dt(SqlMailTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).send_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xffffffdf;
  return;
}

// `dynamic_atexit_destructor_for_'_SqlMailTable_default_instance_'' @ 1504445f0

void __cdecl ds_mail::_dynamic_atexit_destructor_for___SqlMailTable_default_instance___(void)

{
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// `dynamic_initializer_for_'_SqlGuildTable_default_instance_'' @ 14129c480

void __cdecl ds_guild::_dynamic_initializer_for___SqlGuildTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlGuildTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129c4a0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_ds_5fguild_2fsql_5fguild_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c25f080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ds_guild::SqlGuildTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
    if ((char)uVar1 < '\0') {
      if ((MessageLite *)param_1[5]._padding_ == (MessageLite *)0x0) {
        pvVar7 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                           (pAVar12,(MessageLite *)param_2[5]._padding_);
        param_1[5]._padding_ = (longlong)pvVar7;
      }
      else {
        google::protobuf::Timestamp::MergeImpl
                  ((MessageLite *)param_1[5]._padding_,(MessageLite *)param_2[5]._padding_);
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if (((uVar1 >> 8 & 1) != 0) && (lVar5 = param_2[5]._internal_metadata_.ptr_, lVar5 != 0)) {
      param_1[5]._internal_metadata_.ptr_ = lVar5;
    }
    if (((uVar1 >> 9 & 1) != 0) && (param_2[6]._padding_ != 0)) {
      param_1[6]._padding_ = param_2[6]._padding_;
    }
    if (((uVar1 >> 10 & 1) != 0) && (lVar5 = param_2[6]._internal_metadata_.ptr_, lVar5 != 0)) {
      param_1[6]._internal_metadata_.ptr_ = lVar5;
    }
    if (((uVar1 >> 0xb & 1) != 0) && (iVar2 = (int)param_2[7]._padding_, iVar2 != 0)) {
      *(int *)&param_1[7]._padding_ = iVar2;
    }
    if (((uVar1 >> 0xc & 1) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[7]._padding_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[7]._padding_ + 4) = iVar2;
    }
    if (((uVar1 >> 0xd & 1) != 0) && (lVar5 = param_2[7]._internal_metadata_.ptr_, lVar5 != 0)) {
      param_1[7]._internal_metadata_.ptr_ = lVar5;
    }
    if (((uVar1 >> 0xe & 1) != 0) && (iVar2 = (int)param_2[8]._padding_, iVar2 != 0)) {
      *(int *)&param_1[8]._padding_ = iVar2;
    }
    if (((uVar1 >> 0xf & 1) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[8]._padding_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[8]._padding_ + 4) = iVar2;
    }
  }
  if ((uVar1 & 0x30000) != 0) {
    if (((uVar1 >> 0x10 & 1) != 0) && (iVar2 = (int)param_2[8]._internal_metadata_.ptr_, iVar2 != 0)
       ) {
      *(int *)&param_1[8]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 >> 0x11 & 1) != 0) &&
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

// Clear @ 14c25f650

void __thiscall ds_guild::SqlGuildTable::Clear(SqlGuildTable *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((char)uVar1 != '\0') {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).guild_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).master_nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 4) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).mark_info_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 8) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).recruit_message_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 0x10) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).notice_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 0x20) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).disband_time_);
    }
    if ((uVar1 & 0x40) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).reg_time_);
    }
    if ((char)uVar1 < '\0') {
      google::protobuf::Timestamp::Clear((this->_impl_).update_time_);
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    (this->_impl_).guild_uid_ = 0;
    (this->_impl_).master_player_uid_ = 0;
    (this->_impl_).gold_ = 0;
    (this->_impl_).member_count_ = 0;
    (this->_impl_).level_ = 0;
    (this->_impl_).exp_ = 0;
    (this->_impl_).disband_yn_ = 0;
    (this->_impl_).kick_auto_type_ = 0;
  }
  if ((uVar1 & 0x30000) != 0) {
    (this->_impl_).recruit_type_ = 0;
    (this->_impl_).recruit_level_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c25f780

ulong64 __thiscall ds_guild::SqlGuildTable::ByteSizeLong(SqlGuildTable *this)

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
      _Var7 = (ulonglong)(iVar6 * -9 + 0x160U >> 6) + 1 + lVar2;
    }
    if (((uVar1 & 2) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).master_nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
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
      _Var7 = _Var7 + 1 + (ulonglong)(iVar6 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 4) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).mark_info_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
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
                 (((ulonglong)(this->_impl_).recruit_message_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
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
      _Var7 = _Var7 + 1 + (ulonglong)(iVar6 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 0x10) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).notice_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
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
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).disband_time_);
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
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).reg_time_);
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
      _Var7 = _Var7 + 2 + (iVar6 * -9 + 0x160U >> 6) + _Var4;
    }
    if ((char)uVar1 < '\0') {
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).update_time_);
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
      _Var7 = _Var7 + 2 + (iVar6 * -9 + 0x160U >> 6) + _Var4;
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if (((uVar1 >> 8 & 1) != 0) && (lVar2 = (this->_impl_).guild_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 >> 9 & 1) != 0) && (lVar2 = (this->_impl_).master_player_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 >> 10 & 1) != 0) && (lVar2 = (this->_impl_).gold_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 >> 0xb & 1) != 0) && (iVar6 = (this->_impl_).member_count_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 >> 0xc & 1) != 0) && (iVar6 = (this->_impl_).level_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 >> 0xd & 1) != 0) && (lVar2 = (this->_impl_).exp_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 >> 0xe & 1) != 0) && (iVar6 = (this->_impl_).disband_yn_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 >> 0xf & 1) != 0) && (iVar6 = (this->_impl_).kick_auto_type_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
  }
  if ((uVar1 & 0x30000) != 0) {
    if (((uVar1 >> 0x10 & 1) != 0) && (iVar6 = (this->_impl_).recruit_type_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 >> 0x11 & 1) != 0) && (iVar6 = (this->_impl_).recruit_level_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c25fb10

uchar * __thiscall
ds_guild::SqlGuildTable::_InternalSerialize
          (SqlGuildTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char *pcVar5;
  Impl_ *pIVar6;
  char *pcVar7;
  basic_string_view<char,std::char_traits<char>_> local_38;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x100) != 0) &&
     (lVar4 = (this->_impl_).guild_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar4,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).guild_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar5 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar5 = *(char **)pcVar7;
      }
      local_38._Mysize = 0x21;
      local_38._Mydata = "ds_guild.SqlGuildTable.guild_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar5,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,2,&local_38,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x200) != 0) &&
     (lVar4 = (this->_impl_).master_player_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<3>
                        (param_2,lVar4,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).master_nickname_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar5 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar5 = *(char **)pcVar7;
      }
      local_38._Mysize = 0x26;
      local_38._Mydata = "ds_guild.SqlGuildTable.master_nickname";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar5,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,4,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).mark_info_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar5 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar5 = *(char **)pcVar7;
      }
      local_38._Mysize = 0x20;
      local_38._Mydata = "ds_guild.SqlGuildTable.mark_info";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar5,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,5,&local_38,param_1);
    }
  }
  pIVar6 = &this->_impl_;
  if ((((pIVar6->_has_bits_).has_bits_[0] & 0x800) != 0) &&
     (iVar2 = (this->_impl_).member_count_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<6>
                        (param_2,iVar2,param_1);
  }
  if ((((pIVar6->_has_bits_).has_bits_[0] & 0x400) != 0) &&
     (lVar4 = (this->_impl_).gold_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<7>
                        (param_2,lVar4,param_1);
  }
  if ((((pIVar6->_has_bits_).has_bits_[0] & 0x2000) != 0) &&
     (lVar4 = (this->_impl_).exp_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<8>
                        (param_2,lVar4,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x1000) != 0) &&
     (iVar2 = (this->_impl_).level_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<9>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x4000) != 0) &&
     (iVar2 = (this->_impl_).disband_yn_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<10>
                        (param_2,iVar2,param_1);
  }
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 0x20) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (0xb,(MessageLite *)(this->_impl_).disband_time_,
                         (int)(((this->_impl_).disband_time_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar3 >> 0xf & 1) != 0) && (iVar2 = (this->_impl_).kick_auto_type_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<12>
                        (param_2,iVar2,param_1);
  }
  if (((uVar3 >> 0x10 & 1) != 0) && (iVar2 = (this->_impl_).recruit_type_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<13>
                        (param_2,iVar2,param_1);
  }
  if (((uVar3 >> 0x11 & 1) != 0) && (iVar2 = (this->_impl_).recruit_level_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<14>
                        (param_2,iVar2,param_1);
  }
  if ((uVar3 & 8) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).recruit_message_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar5 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar5 = *(char **)pcVar7;
      }
      local_38._Mysize = 0x26;
      local_38._Mydata = "ds_guild.SqlGuildTable.recruit_message";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar5,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0xf,&local_38,param_1);
    }
  }
  if ((uVar3 & 0x10) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).notice_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar5 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar5 = *(char **)pcVar7;
      }
      local_38._Mysize = 0x1d;
      local_38._Mydata = "ds_guild.SqlGuildTable.notice";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar5,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,0x10,&local_38,param_1);
    }
  }
  if ((uVar3 & 0x40) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (0x19,(MessageLite *)(this->_impl_).reg_time_,
                         (int)(((this->_impl_).reg_time_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((char)uVar3 < '\0') {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (0x1a,(MessageLite *)(this->_impl_).update_time_,
                         (int)(((this->_impl_).update_time_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                        ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                         param_2);
  }
  return param_1;
}

// GetClassData @ 14c25ffb0

ClassData * __thiscall ds_guild::SqlGuildTable::GetClassData(SqlGuildTable *this)

{
  return (ClassData *)&SqlGuildTable_class_data_;
}

// PlacementNew_ @ 14c25ffd0

void * __cdecl ds_guild::SqlGuildTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlGuildTable_ds_guild__6B_;
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

// SqlGuildTable @ 14c260030

SqlGuildTable * __thiscall
ds_guild::SqlGuildTable::SqlGuildTable(SqlGuildTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlGuildTable_ds_guild__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).guild_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).master_nickname_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).mark_info_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).recruit_message_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).notice_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).disband_time_ = (Timestamp *)0x0;
  (this->_impl_).reg_time_ = (Timestamp *)0x0;
  (this->_impl_).update_time_ = (Timestamp *)0x0;
  (this->_impl_).guild_uid_ = 0;
  (this->_impl_).master_player_uid_ = 0;
  (this->_impl_).gold_ = 0;
  (this->_impl_).member_count_ = 0;
  (this->_impl_).level_ = 0;
  (this->_impl_).exp_ = 0;
  (this->_impl_).disband_yn_ = 0;
  (this->_impl_).kick_auto_type_ = 0;
  (this->_impl_).recruit_type_ = 0;
  (this->_impl_).recruit_level_ = 0;
  return this;
}

// SqlGuildTable @ 14c260090

SqlGuildTable * __thiscall
ds_guild::SqlGuildTable::SqlGuildTable(SqlGuildTable *this,Arena *param_1,SqlGuildTable *param_2)

{
  ArenaStringPtr *pAVar1;
  uint uVar2;
  long64 lVar3;
  int iVar4;
  int iVar5;
  TaggedStringPtr TVar6;
  void *pvVar7;
  Timestamp *pTVar8;
  Timestamp *pTVar9;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlGuildTable_ds_guild__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).guild_name_;
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
  pAVar1 = &(param_2->_impl_).master_nickname_;
  (this->_impl_).guild_name_.tagged_ptr_.ptr_ = pvVar7;
  pvVar7 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar7 & 3) != 0) {
    TVar6 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar7 = *TVar6.ptr_;
  }
  pAVar1 = &(param_2->_impl_).mark_info_;
  (this->_impl_).master_nickname_.tagged_ptr_.ptr_ = pvVar7;
  pvVar7 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar7 & 3) != 0) {
    TVar6 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    pvVar7 = *TVar6.ptr_;
  }
  pAVar1 = &(param_2->_impl_).recruit_message_;
  (this->_impl_).mark_info_.tagged_ptr_.ptr_ = pvVar7;
  pvVar7 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar7 & 3) != 0) {
    TVar6 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000020);
                    /* WARNING: Load size is inaccurate */
    pvVar7 = *TVar6.ptr_;
  }
  pAVar1 = &(param_2->_impl_).notice_;
  (this->_impl_).recruit_message_.tagged_ptr_.ptr_ = pvVar7;
  pvVar7 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar7 & 3) != 0) {
    TVar6 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0xffffffffffffffc8);
                    /* WARNING: Load size is inaccurate */
    pvVar7 = *TVar6.ptr_;
  }
  (this->_impl_).notice_.tagged_ptr_.ptr_ = pvVar7;
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  pTVar8 = pTVar9;
  if ((uVar2 & 0x20) != 0) {
    pTVar8 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).disband_time_);
  }
  (this->_impl_).disband_time_ = pTVar8;
  pTVar8 = pTVar9;
  if ((uVar2 & 0x40) != 0) {
    pTVar8 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).reg_time_);
  }
  (this->_impl_).reg_time_ = pTVar8;
  if ((char)uVar2 < '\0') {
    pTVar9 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).update_time_);
  }
  (this->_impl_).update_time_ = pTVar9;
  lVar3 = (param_2->_impl_).master_player_uid_;
  (this->_impl_).guild_uid_ = (param_2->_impl_).guild_uid_;
  (this->_impl_).master_player_uid_ = lVar3;
  iVar4 = (param_2->_impl_).member_count_;
  iVar5 = (param_2->_impl_).level_;
  (this->_impl_).gold_ = (param_2->_impl_).gold_;
  (this->_impl_).member_count_ = iVar4;
  (this->_impl_).level_ = iVar5;
  iVar4 = (param_2->_impl_).disband_yn_;
  iVar5 = (param_2->_impl_).kick_auto_type_;
  (this->_impl_).exp_ = (param_2->_impl_).exp_;
  (this->_impl_).disband_yn_ = iVar4;
  (this->_impl_).kick_auto_type_ = iVar5;
  iVar4 = (param_2->_impl_).recruit_level_;
  (this->_impl_).recruit_type_ = (param_2->_impl_).recruit_type_;
  (this->_impl_).recruit_level_ = iVar4;
  return this;
}

// ~SqlGuildTable @ 14c260210

void __thiscall ds_guild::SqlGuildTable::~SqlGuildTable(SqlGuildTable *this)

{
  Timestamp *pTVar1;
  
  this->_padding_ = (longlong)&___7SqlGuildTable_ds_guild__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).guild_name_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).master_nickname_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).mark_info_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).recruit_message_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).notice_);
  pTVar1 = (this->_impl_).disband_time_;
  if (pTVar1 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(pTVar1);
    ::operator_delete(pTVar1,0x28);
  }
  pTVar1 = (this->_impl_).reg_time_;
  if (pTVar1 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(pTVar1);
    ::operator_delete(pTVar1,0x28);
  }
  pTVar1 = (this->_impl_).update_time_;
  if (pTVar1 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(pTVar1);
    ::operator_delete(pTVar1,0x28);
  }
  return;
}

// CopyFrom @ 14c2602d0

void __thiscall ds_guild::SqlGuildTable::CopyFrom(SqlGuildTable *this,SqlGuildTable *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c260310

Metadata * __thiscall
ds_guild::SqlGuildTable::GetMetadata(SqlGuildTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SqlGuildTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c260350

void __thiscall ds_guild::SqlGuildTable::InternalSwap(SqlGuildTable *this,SqlGuildTable *param_1)

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
  pvVar3 = (param_1->_impl_).guild_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).guild_name_.tagged_ptr_.ptr_ = (this->_impl_).guild_name_.tagged_ptr_.ptr_;
  (this->_impl_).guild_name_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).master_nickname_.tagged_ptr_.ptr_;
  (param_1->_impl_).master_nickname_.tagged_ptr_.ptr_ =
       (this->_impl_).master_nickname_.tagged_ptr_.ptr_;
  (this->_impl_).master_nickname_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).mark_info_.tagged_ptr_.ptr_;
  (param_1->_impl_).mark_info_.tagged_ptr_.ptr_ = (this->_impl_).mark_info_.tagged_ptr_.ptr_;
  (this->_impl_).mark_info_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).recruit_message_.tagged_ptr_.ptr_;
  (param_1->_impl_).recruit_message_.tagged_ptr_.ptr_ =
       (this->_impl_).recruit_message_.tagged_ptr_.ptr_;
  (this->_impl_).recruit_message_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).notice_.tagged_ptr_.ptr_;
  (param_1->_impl_).notice_.tagged_ptr_.ptr_ = (this->_impl_).notice_.tagged_ptr_.ptr_;
  (this->_impl_).notice_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).disband_time_,this + 1,&(param_1->_impl_).disband_time_);
  return;
}

// clear_disband_time @ 14c2603e0

void __thiscall ds_guild::SqlGuildTable::clear_disband_time(SqlGuildTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).disband_time_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xffffffdf;
  return;
}

// clear_reg_time @ 14c260410

void __thiscall ds_guild::SqlGuildTable::clear_reg_time(SqlGuildTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).reg_time_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xffffffbf;
  return;
}

// clear_update_time @ 14c260440

void __thiscall ds_guild::SqlGuildTable::clear_update_time(SqlGuildTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).update_time_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xffffff7f;
  return;
}

// `dynamic_atexit_destructor_for_'_SqlGuildTable_default_instance_'' @ 1504445c0

void __cdecl ds_guild::_dynamic_atexit_destructor_for___SqlGuildTable_default_instance___(void)

{
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// `dynamic_initializer_for_'_SqlDbAgentServerListTable_default_instance_'' @ 14129b080

void __cdecl
ds_config::_dynamic_initializer_for___SqlDbAgentServerListTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlDbAgentServerListTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129b0a0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fconfig_2fsql_5fdb_5fagent_5fserver_5flist_5ftable_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c244ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ds_config::SqlDbAgentServerListTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  undefined1 auStackY_88 [32];
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  pAVar10 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar5 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar11 = pAVar10;
  if (bVar5 != 0) {
    pAVar11 = (Arena *)(pAVar10->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((char)uVar1 != '\0') {
    if ((uVar1 & 1) != 0) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar8->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (bVar5 != 0) {
            pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar10);
          if (0xf < uStack_38) {
            uVar9 = uStack_38 + 1;
            uVar7 = local_50._Ptr;
            if (0xfff < uVar9) {
              uVar7 = *(undefined8 *)(local_50._Ptr + -8);
              uVar9 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar7)) {
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
          pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar8,pAVar10);
      }
    }
    if ((uVar1 & 2) != 0) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._padding_ & 0xfffffffffffffffc);
      if ((pbVar8->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar10 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 2),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar10);
          if (0xf < uStack_38) {
            uVar9 = uStack_38 + 1;
            uVar7 = local_50._Ptr;
            if (0xfff < uVar9) {
              uVar7 = *(undefined8 *)(local_50._Ptr + -8);
              uVar9 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar7)) {
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
        pAVar10 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 2),pbVar8,pAVar10);
      }
    }
    if ((uVar1 & 4) != 0) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar8->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
          pAVar10 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[2]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar10);
          if (0xf < uStack_38) {
            uVar9 = uStack_38 + 1;
            uVar7 = local_50._Ptr;
            if (0xfff < uVar9) {
              uVar7 = *(undefined8 *)(local_50._Ptr + -8);
              uVar9 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar7,uVar9);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
        pAVar10 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[2]._internal_metadata_,pbVar8,pAVar10);
      }
    }
    if ((uVar1 & 8) != 0) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[3]._padding_ & 0xfffffffffffffffc);
      if ((pbVar8->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[3]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 8;
          pAVar10 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 3),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar10);
          if (0xf < uStack_38) {
            uVar9 = uStack_38 + 1;
            uVar7 = local_50._Ptr;
            if (0xfff < uVar9) {
              uVar7 = *(undefined8 *)(local_50._Ptr + -8);
              uVar9 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar7,uVar9);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 8;
        pAVar10 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 3),pbVar8,pAVar10);
      }
    }
    if ((uVar1 & 0x10) != 0) {
      pMVar3 = (MessageLite *)param_1[3]._internal_metadata_.ptr_;
      pMVar4 = (MessageLite *)param_2[3]._internal_metadata_.ptr_;
      if (pMVar3 == (MessageLite *)0x0) {
        pvVar6 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>(pAVar11,pMVar4)
        ;
        param_1[3]._internal_metadata_.ptr_ = (long64)pvVar6;
      }
      else {
        google::protobuf::Timestamp::MergeImpl(pMVar3,pMVar4);
      }
    }
    if (((uVar1 & 0x20) != 0) && (iVar2 = (int)param_2[4]._padding_, iVar2 != 0)) {
      *(int *)&param_1[4]._padding_ = iVar2;
    }
    if (((uVar1 & 0x40) != 0) && (iVar2 = *(int *)((longlong)&param_2[4]._padding_ + 4), iVar2 != 0)
       ) {
      *(int *)((longlong)&param_1[4]._padding_ + 4) = iVar2;
    }
    if (((char)uVar1 < '\0') && (iVar2 = (int)param_2[4]._internal_metadata_.ptr_, iVar2 != 0)) {
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

// Clear @ 14c244fb0

void __thiscall ds_config::SqlDbAgentServerListTable::Clear(SqlDbAgentServerListTable *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).address_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).database_address_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 4) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).database_user_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 8) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).database_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 0x10) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).server_refresh_dt_);
    }
  }
  if ((uVar1 & 0xe0) != 0) {
    (this->_impl_).world_id_ = 0;
    (this->_impl_).region_index_ = 0;
    (this->_impl_).server_state_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c245090

ulong64 __thiscall
ds_config::SqlDbAgentServerListTable::ByteSizeLong(SqlDbAgentServerListTable *this)

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
                 (((ulonglong)(this->_impl_).address_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10)
       , lVar2 != 0)) {
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
                 (((ulonglong)(this->_impl_).database_address_.tagged_ptr_.ptr_ & 0xfffffffffffffffc
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
      _Var7 = _Var7 + 1 + (ulonglong)(iVar6 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 4) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).database_user_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
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
                 (((ulonglong)(this->_impl_).database_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
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
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).server_refresh_dt_);
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
    if (((uVar1 & 0x20) != 0) && (iVar6 = (this->_impl_).world_id_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 & 0x40) != 0) && (iVar6 = (this->_impl_).region_index_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((char)uVar1 < '\0') && (iVar6 = (this->_impl_).server_state_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c245290

uchar * __thiscall
ds_config::SqlDbAgentServerListTable::_InternalSerialize
          (SqlDbAgentServerListTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  uchar *puVar3;
  char *pcVar4;
  char *pcVar5;
  basic_string_view<char,std::char_traits<char>_> local_38;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (iVar2 = (this->_impl_).world_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x40) != 0) &&
     (iVar2 = (this->_impl_).region_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar2,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar5 = (char *)((ulonglong)(this->_impl_).address_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar5 + 0x10);
    if (*(longlong *)(pcVar5 + 0x10) != 0) {
      pcVar4 = pcVar5;
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar4 = *(char **)pcVar5;
      }
      local_38._Mysize = 0x2b;
      local_38._Mydata = "ds_config.SqlDbAgentServerListTable.address";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar4,(int)*(longlong *)(pcVar5 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar5 = *(char **)pcVar5;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar5;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,4,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pcVar5 = (char *)((ulonglong)(this->_impl_).database_address_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar5 + 0x10);
    if (*(longlong *)(pcVar5 + 0x10) != 0) {
      pcVar4 = pcVar5;
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar4 = *(char **)pcVar5;
      }
      local_38._Mysize = 0x34;
      local_38._Mydata = "ds_config.SqlDbAgentServerListTable.database_address";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar4,(int)*(longlong *)(pcVar5 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar5 = *(char **)pcVar5;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar5;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,5,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) {
    pcVar5 = (char *)((ulonglong)(this->_impl_).database_user_.tagged_ptr_.ptr_ & 0xfffffffffffffffc
                     );
    puVar1 = (ulong64 *)(pcVar5 + 0x10);
    if (*(longlong *)(pcVar5 + 0x10) != 0) {
      pcVar4 = pcVar5;
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar4 = *(char **)pcVar5;
      }
      local_38._Mysize = 0x31;
      local_38._Mydata = "ds_config.SqlDbAgentServerListTable.database_user";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar4,(int)*(longlong *)(pcVar5 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar5 = *(char **)pcVar5;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar5;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,6,&local_38,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) {
    pcVar5 = (char *)((ulonglong)(this->_impl_).database_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc
                     );
    puVar1 = (ulong64 *)(pcVar5 + 0x10);
    if (*(longlong *)(pcVar5 + 0x10) != 0) {
      pcVar4 = pcVar5;
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar4 = *(char **)pcVar5;
      }
      local_38._Mysize = 0x31;
      local_38._Mydata = "ds_config.SqlDbAgentServerListTable.database_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar4,(int)*(longlong *)(pcVar5 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar5 + 0x18)) {
        pcVar5 = *(char **)pcVar5;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar5;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,7,&local_38,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x80) != 0) &&
     (iVar2 = (this->_impl_).server_state_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<8>
                        (param_2,iVar2,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (9,(MessageLite *)(this->_impl_).server_refresh_dt_,
                         (int)(((this->_impl_).server_refresh_dt_)->_impl_)._cached_size_.atom_,
                         param_1,param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14c245590

ClassData * __thiscall
ds_config::SqlDbAgentServerListTable::GetClassData(SqlDbAgentServerListTable *this)

{
  return (ClassData *)&SqlDbAgentServerListTable_class_data_;
}

// PlacementNew_ @ 14c2455b0

void * __cdecl
ds_config::SqlDbAgentServerListTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlDbAgentServerListTable_ds_config__6B_;
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
  *(undefined4 *)((longlong)param_2 + 0x48) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c245600

void * __thiscall
ds_config::SqlDbAgentServerListTable::_scalar_deleting_destructor_
          (SqlDbAgentServerListTable *this,uint param_1)

{
  ~SqlDbAgentServerListTable(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// SqlDbAgentServerListTable @ 14c245640

SqlDbAgentServerListTable * __thiscall
ds_config::SqlDbAgentServerListTable::SqlDbAgentServerListTable
          (SqlDbAgentServerListTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlDbAgentServerListTable_ds_config__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).address_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string
  ;
  (this->_impl_).database_address_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).database_user_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).database_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).server_refresh_dt_ = (Timestamp *)0x0;
  (this->_impl_).world_id_ = 0;
  (this->_impl_).region_index_ = 0;
  (this->_impl_).server_state_ = 0;
  return this;
}

// SqlDbAgentServerListTable @ 14c245690

SqlDbAgentServerListTable * __thiscall
ds_config::SqlDbAgentServerListTable::SqlDbAgentServerListTable
          (SqlDbAgentServerListTable *this,Arena *param_1,SqlDbAgentServerListTable *param_2)

{
  ArenaStringPtr *pAVar1;
  int iVar2;
  TaggedStringPtr TVar3;
  void *pvVar4;
  Timestamp *pTVar5;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlDbAgentServerListTable_ds_config__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).address_;
  pTVar5 = (Timestamp *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar4 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  pAVar1 = &(param_2->_impl_).database_address_;
  (this->_impl_).address_.tagged_ptr_.ptr_ = pvVar4;
  pvVar4 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  pAVar1 = &(param_2->_impl_).database_user_;
  (this->_impl_).database_address_.tagged_ptr_.ptr_ = pvVar4;
  pvVar4 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  pAVar1 = &(param_2->_impl_).database_name_;
  (this->_impl_).database_user_.tagged_ptr_.ptr_ = pvVar4;
  pvVar4 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000020);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  (this->_impl_).database_name_.tagged_ptr_.ptr_ = pvVar4;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) {
    pTVar5 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).server_refresh_dt_);
  }
  (this->_impl_).server_refresh_dt_ = pTVar5;
  iVar2 = (param_2->_impl_).region_index_;
  (this->_impl_).world_id_ = (param_2->_impl_).world_id_;
  (this->_impl_).region_index_ = iVar2;
  (this->_impl_).server_state_ = (param_2->_impl_).server_state_;
  return this;
}

// ~SqlDbAgentServerListTable @ 14c245790

void __thiscall
ds_config::SqlDbAgentServerListTable::~SqlDbAgentServerListTable(SqlDbAgentServerListTable *this)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7SqlDbAgentServerListTable_ds_config__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).address_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).database_address_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).database_user_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).database_name_);
  this_00 = (this->_impl_).server_refresh_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// CopyFrom @ 14c245810

void __thiscall
ds_config::SqlDbAgentServerListTable::CopyFrom
          (SqlDbAgentServerListTable *this,SqlDbAgentServerListTable *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c245850

Metadata * __thiscall
ds_config::SqlDbAgentServerListTable::GetMetadata
          (SqlDbAgentServerListTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&SqlDbAgentServerListTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c245890

void __thiscall
ds_config::SqlDbAgentServerListTable::InternalSwap
          (SqlDbAgentServerListTable *this,SqlDbAgentServerListTable *param_1)

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
  pvVar3 = (param_1->_impl_).address_.tagged_ptr_.ptr_;
  (param_1->_impl_).address_.tagged_ptr_.ptr_ = (this->_impl_).address_.tagged_ptr_.ptr_;
  (this->_impl_).address_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).database_address_.tagged_ptr_.ptr_;
  (param_1->_impl_).database_address_.tagged_ptr_.ptr_ =
       (this->_impl_).database_address_.tagged_ptr_.ptr_;
  (this->_impl_).database_address_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).database_user_.tagged_ptr_.ptr_;
  (param_1->_impl_).database_user_.tagged_ptr_.ptr_ = (this->_impl_).database_user_.tagged_ptr_.ptr_
  ;
  (this->_impl_).database_user_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).database_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).database_name_.tagged_ptr_.ptr_ = (this->_impl_).database_name_.tagged_ptr_.ptr_
  ;
  (this->_impl_).database_name_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).server_refresh_dt_,&(this->_impl_).field_0x3c,
             &(param_1->_impl_).server_refresh_dt_);
  return;
}

// clear_server_refresh_dt @ 14c245910

void __thiscall
ds_config::SqlDbAgentServerListTable::clear_server_refresh_dt(SqlDbAgentServerListTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).server_refresh_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xffffffef;
  return;
}

// `dynamic_atexit_destructor_for_'_SqlDbAgentServerListTable_default_instance_'' @ 1504441c0

void __cdecl
ds_config::_dynamic_atexit_destructor_for___SqlDbAgentServerListTable_default_instance___(void)

{
  return;
}


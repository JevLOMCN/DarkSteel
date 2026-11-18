// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// `dynamic_initializer_for_'_SqlGameServerListTable_default_instance_'' @ 14129b120

void __cdecl ds_config::_dynamic_initializer_for___SqlGameServerListTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlGameServerListTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129b140

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fconfig_2fsql_5fgame_5fserver_5flist_5ftable_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c2461c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ds_config::SqlGameServerListTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  void *pvVar4;
  undefined8 uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  ulong64 uVar7;
  Arena *pAVar8;
  Arena *pAVar9;
  undefined1 auStackY_88 [32];
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar3 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar8 = pAVar9;
  if (bVar3 != 0) {
    pAVar8 = (Arena *)(pAVar9->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((char)uVar1 != '\0') {
    if ((uVar1 & 1) != 0) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar6->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (bVar3 != 0) {
            pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar9);
          if (0xf < uStack_38) {
            uVar7 = uStack_38 + 1;
            uVar5 = local_50._Ptr;
            if (0xfff < uVar7) {
              uVar5 = *(undefined8 *)(local_50._Ptr + -8);
              uVar7 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar5)) {
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
        if (bVar3 != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar6,pAVar9);
      }
    }
    if ((uVar1 & 2) != 0) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._padding_ & 0xfffffffffffffffc);
      if ((pbVar6->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 2),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar9);
          if (0xf < uStack_38) {
            uVar7 = uStack_38 + 1;
            uVar5 = local_50._Ptr;
            if (0xfff < uVar7) {
              uVar5 = *(undefined8 *)(local_50._Ptr + -8);
              uVar7 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar5)) {
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
        pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 2),pbVar6,pAVar9);
      }
    }
    if ((uVar1 & 4) != 0) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar6->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
          pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[2]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar9);
          if (0xf < uStack_38) {
            uVar7 = uStack_38 + 1;
            uVar5 = local_50._Ptr;
            if (0xfff < uVar7) {
              uVar5 = *(undefined8 *)(local_50._Ptr + -8);
              uVar7 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar5)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar5,uVar7);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
        pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[2]._internal_metadata_,pbVar6,pAVar9);
      }
    }
    if ((uVar1 & 8) != 0) {
      if ((MessageLite *)param_1[3]._padding_ == (MessageLite *)0x0) {
        pvVar4 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                           (pAVar8,(MessageLite *)param_2[3]._padding_);
        param_1[3]._padding_ = (longlong)pvVar4;
      }
      else {
        google::protobuf::Timestamp::MergeImpl
                  ((MessageLite *)param_1[3]._padding_,(MessageLite *)param_2[3]._padding_);
      }
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
  if ((uVar1 & 0x700) != 0) {
    if (((uVar1 >> 8 & 1) != 0) && (iVar2 = (int)param_2[4]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[4]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 >> 9 & 1) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[4]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[4]._internal_metadata_.ptr_ + 4) = iVar2;
    }
    if (((uVar1 >> 10 & 1) != 0) && (param_2[5]._padding_ != 0)) {
      param_1[5]._padding_ = param_2[5]._padding_;
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

// Clear @ 14c246550

void __thiscall ds_config::SqlGameServerListTable::Clear(SqlGameServerListTable *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 0xf) != 0) {
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
               ((ulonglong)(this->_impl_).grpc_address_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 4) != 0) {
      puVar2 = (undefined8 *)((ulonglong)(this->_impl_).json_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
      ;
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 8) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).game_server_refresh_dt_);
    }
  }
  if ((uVar1 & 0xf0) != 0) {
    (this->_impl_).server_index_ = 0;
    (this->_impl_).world_id_ = 0;
    (this->_impl_).server_type_ = 0;
    (this->_impl_).region_index_ = 0;
  }
  if ((uVar1 & 0x700) != 0) {
    (this->_impl_).timezone_index_ = 0;
    (this->_impl_).game_server_state_ = 0;
    (this->_impl_).world_name_id_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c246620

ulong64 __thiscall ds_config::SqlGameServerListTable::ByteSizeLong(SqlGameServerListTable *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  __uint64 _Var4;
  ulong64 uVar5;
  ulonglong uVar6;
  int iVar7;
  __uint64 _Var8;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var8 = 0;
  if ((char)uVar1 != '\0') {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).address_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10)
       , lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar7 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar7 = 0x1f - iVar7;
      }
      else {
        iVar7 = LZCOUNT(uVar3);
      }
      _Var8 = (ulonglong)(iVar7 * -9 + 0x160U >> 6) + 1 + lVar2;
    }
    if (((uVar1 & 2) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).grpc_address_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar7 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar7 = 0x1f - iVar7;
      }
      else {
        iVar7 = LZCOUNT(uVar3);
      }
      _Var8 = _Var8 + 1 + (ulonglong)(iVar7 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 4) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).json_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
       lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar7 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar7 = 0x1f - iVar7;
      }
      else {
        iVar7 = LZCOUNT(uVar3);
      }
      _Var8 = _Var8 + 1 + (ulonglong)(iVar7 * -9 + 0x160U >> 6) + lVar2;
    }
    if ((uVar1 & 8) != 0) {
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).game_server_refresh_dt_);
      uVar3 = (uint)_Var4 | 1;
      if (__isa_available < 5) {
        iVar7 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar7 = 0x1f - iVar7;
      }
      else {
        iVar7 = LZCOUNT(uVar3);
      }
      _Var8 = _Var8 + 1 + (iVar7 * -9 + 0x160U >> 6) + _Var4;
    }
    if (((uVar1 & 0x10) != 0) && (iVar7 = (this->_impl_).server_index_, iVar7 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar7);
      _Var8 = _Var8 + uVar5;
    }
    if (((uVar1 & 0x20) != 0) && (iVar7 = (this->_impl_).world_id_, iVar7 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar7);
      _Var8 = _Var8 + uVar5;
    }
    if (((uVar1 & 0x40) != 0) && (iVar7 = (this->_impl_).server_type_, iVar7 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar7);
      _Var8 = _Var8 + uVar5;
    }
    if (((char)uVar1 < '\0') && (iVar7 = (this->_impl_).region_index_, iVar7 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar7);
      _Var8 = _Var8 + uVar5;
    }
  }
  if ((uVar1 & 0x700) != 0) {
    if (((uVar1 >> 8 & 1) != 0) && (iVar7 = (this->_impl_).timezone_index_, iVar7 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar7);
      _Var8 = _Var8 + uVar5;
    }
    if (((uVar1 >> 9 & 1) != 0) && (iVar7 = (this->_impl_).game_server_state_, iVar7 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar7);
      _Var8 = _Var8 + uVar5;
    }
    if (((uVar1 >> 10 & 1) != 0) && (uVar6 = (this->_impl_).world_name_id_, uVar6 != 0)) {
      uVar6 = uVar6 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar7 = 0x3f - (int)lVar2;
      }
      else {
        iVar7 = (int)LZCOUNT(uVar6);
      }
      _Var8 = _Var8 + (iVar7 * -9 + 0x2c0U >> 6);
    }
  }
  _Var8 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var8,&(this->_impl_)._cached_size_);
  return _Var8;
}

// _InternalSerialize @ 14c246870

uchar * __thiscall
ds_config::SqlGameServerListTable::_InternalSerialize
          (SqlGameServerListTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uchar *puVar5;
  char *pcVar6;
  char *pcVar7;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (iVar2 = (this->_impl_).server_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (iVar2 = (this->_impl_).world_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x40) != 0) &&
     (iVar2 = (this->_impl_).server_type_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x80) != 0) &&
     (iVar2 = (this->_impl_).region_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x100) != 0) &&
     (iVar2 = (this->_impl_).timezone_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<5>
                        (param_2,iVar2,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).address_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar6 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar6 = *(char **)pcVar7;
      }
      local_18._Mysize = 0x28;
      local_18._Mydata = "ds_config.SqlGameServerListTable.address";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_18._Mysize = *puVar1;
      local_18._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,6,&local_18,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).grpc_address_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
    ;
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar6 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar6 = *(char **)pcVar7;
      }
      local_18._Mysize = 0x2d;
      local_18._Mydata = "ds_config.SqlGameServerListTable.grpc_address";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_18._Mysize = *puVar1;
      local_18._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,7,&local_18,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).json_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar6 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar6 = *(char **)pcVar7;
      }
      local_18._Mysize = 0x25;
      local_18._Mydata = "ds_config.SqlGameServerListTable.json";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_18._Mysize = *puVar1;
      local_18._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,8,&local_18,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x200) != 0) &&
     (iVar2 = (this->_impl_).game_server_state_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<9>
                        (param_2,iVar2,param_1);
  }
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 8) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (10,(MessageLite *)(this->_impl_).game_server_refresh_dt_,
                         (int)(((this->_impl_).game_server_refresh_dt_)->_impl_)._cached_size_.atom_
                         ,param_1,param_2);
  }
  if (((uVar3 >> 10 & 1) != 0) && (lVar4 = (this->_impl_).world_name_id_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<11>
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

// GetClassData @ 14c246b50

ClassData * __thiscall ds_config::SqlGameServerListTable::GetClassData(SqlGameServerListTable *this)

{
  return (ClassData *)&SqlGameServerListTable_class_data_;
}

// PlacementNew_ @ 14c246b70

void * __cdecl
ds_config::SqlGameServerListTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlGameServerListTable_ds_config__6B_;
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
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c246bc0

void * __thiscall
ds_config::SqlGameServerListTable::_scalar_deleting_destructor_
          (SqlGameServerListTable *this,uint param_1)

{
  ~SqlGameServerListTable(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// SqlGameServerListTable @ 14c246c00

SqlGameServerListTable * __thiscall
ds_config::SqlGameServerListTable::SqlGameServerListTable
          (SqlGameServerListTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlGameServerListTable_ds_config__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).address_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string
  ;
  (this->_impl_).grpc_address_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).json_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).game_server_refresh_dt_ = (Timestamp *)0x0;
  (this->_impl_).server_index_ = 0;
  (this->_impl_).world_id_ = 0;
  (this->_impl_).server_type_ = 0;
  (this->_impl_).region_index_ = 0;
  (this->_impl_).timezone_index_ = 0;
  (this->_impl_).game_server_state_ = 0;
  (this->_impl_).world_name_id_ = 0;
  return this;
}

// SqlGameServerListTable @ 14c246c50

SqlGameServerListTable * __thiscall
ds_config::SqlGameServerListTable::SqlGameServerListTable
          (SqlGameServerListTable *this,Arena *param_1,SqlGameServerListTable *param_2)

{
  ArenaStringPtr *pAVar1;
  long64 lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  TaggedStringPtr TVar6;
  void *pvVar7;
  Timestamp *pTVar8;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlGameServerListTable_ds_config__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).address_;
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
  pAVar1 = &(param_2->_impl_).grpc_address_;
  (this->_impl_).address_.tagged_ptr_.ptr_ = pvVar7;
  pvVar7 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar7 & 3) != 0) {
    TVar6 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar7 = *TVar6.ptr_;
  }
  pAVar1 = &(param_2->_impl_).json_;
  (this->_impl_).grpc_address_.tagged_ptr_.ptr_ = pvVar7;
  pvVar7 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar7 & 3) != 0) {
    TVar6 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    pvVar7 = *TVar6.ptr_;
  }
  (this->_impl_).json_.tagged_ptr_.ptr_ = pvVar7;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) {
    pTVar8 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).game_server_refresh_dt_);
  }
  (this->_impl_).game_server_refresh_dt_ = pTVar8;
  iVar3 = (param_2->_impl_).world_id_;
  iVar4 = (param_2->_impl_).server_type_;
  iVar5 = (param_2->_impl_).region_index_;
  (this->_impl_).server_index_ = (param_2->_impl_).server_index_;
  (this->_impl_).world_id_ = iVar3;
  (this->_impl_).server_type_ = iVar4;
  (this->_impl_).region_index_ = iVar5;
  iVar3 = (param_2->_impl_).game_server_state_;
  lVar2 = (param_2->_impl_).world_name_id_;
  (this->_impl_).timezone_index_ = (param_2->_impl_).timezone_index_;
  (this->_impl_).game_server_state_ = iVar3;
  (this->_impl_).world_name_id_ = lVar2;
  return this;
}

// ~SqlGameServerListTable @ 14c246d40

void __thiscall
ds_config::SqlGameServerListTable::~SqlGameServerListTable(SqlGameServerListTable *this)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7SqlGameServerListTable_ds_config__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).address_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).grpc_address_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).json_);
  this_00 = (this->_impl_).game_server_refresh_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// CopyFrom @ 14c246db0

void __thiscall
ds_config::SqlGameServerListTable::CopyFrom
          (SqlGameServerListTable *this,SqlGameServerListTable *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c246df0

Metadata * __thiscall
ds_config::SqlGameServerListTable::GetMetadata
          (SqlGameServerListTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SqlGameServerListTable_class_data_)
  ;
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c246e30

void __thiscall
ds_config::SqlGameServerListTable::InternalSwap
          (SqlGameServerListTable *this,SqlGameServerListTable *param_1)

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
  pvVar3 = (param_1->_impl_).grpc_address_.tagged_ptr_.ptr_;
  (param_1->_impl_).grpc_address_.tagged_ptr_.ptr_ = (this->_impl_).grpc_address_.tagged_ptr_.ptr_;
  (this->_impl_).grpc_address_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).json_.tagged_ptr_.ptr_;
  (param_1->_impl_).json_.tagged_ptr_.ptr_ = (this->_impl_).json_.tagged_ptr_.ptr_;
  (this->_impl_).json_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).game_server_refresh_dt_,this + 1,
             &(param_1->_impl_).game_server_refresh_dt_);
  return;
}

// clear_game_server_refresh_dt @ 14c246ea0

void __thiscall
ds_config::SqlGameServerListTable::clear_game_server_refresh_dt(SqlGameServerListTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).game_server_refresh_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffff7;
  return;
}

// `dynamic_atexit_destructor_for_'_SqlGameServerListTable_default_instance_'' @ 1504441e0

void __cdecl
ds_config::_dynamic_atexit_destructor_for___SqlGameServerListTable_default_instance___(void)

{
  return;
}


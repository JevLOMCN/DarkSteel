// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// `dynamic_initializer_for_'_SqlRegionServerListTable_default_instance_'' @ 14129b260

void __cdecl
ds_config::_dynamic_initializer_for___SqlRegionServerListTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlRegionServerListTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129b280

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fconfig_2fsql_5fregion_5fserver_5flist_5ftable_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c248190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ds_config::SqlRegionServerListTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  if ((uVar1 & 0x1f) != 0) {
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

// Clear @ 14c248410

void __thiscall ds_config::SqlRegionServerListTable::Clear(SqlRegionServerListTable *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 7) != 0) {
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
               ((ulonglong)(this->_impl_).service_bus_string_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
      ;
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 4) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).server_refresh_dt_);
    }
  }
  if ((uVar1 & 0x18) != 0) {
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

// ByteSizeLong @ 14c2484b0

ulong64 __thiscall ds_config::SqlRegionServerListTable::ByteSizeLong(SqlRegionServerListTable *this)

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
  if ((uVar1 & 0x1f) != 0) {
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
                 (((ulonglong)(this->_impl_).service_bus_string_.tagged_ptr_.ptr_ &
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
    if (((uVar1 & 8) != 0) && (iVar6 = (this->_impl_).region_index_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 & 0x10) != 0) && (iVar6 = (this->_impl_).server_state_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c248610

uchar * __thiscall
ds_config::SqlRegionServerListTable::_InternalSerialize
          (SqlRegionServerListTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  char *pcVar5;
  char *pcVar6;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (iVar2 = (this->_impl_).region_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar2,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar6 = (char *)((ulonglong)(this->_impl_).address_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar6 + 0x10);
    if (*(longlong *)(pcVar6 + 0x10) != 0) {
      pcVar5 = pcVar6;
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar5 = *(char **)pcVar6;
      }
      local_28._Mysize = 0x2a;
      local_28._Mydata = "ds_config.SqlRegionServerListTable.address";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar5,(int)*(longlong *)(pcVar6 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar6 = *(char **)pcVar6;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar6;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,2,&local_28,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (iVar2 = (this->_impl_).server_state_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar2,param_1);
  }
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 4) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (5,(MessageLite *)(this->_impl_).server_refresh_dt_,
                         (int)(((this->_impl_).server_refresh_dt_)->_impl_)._cached_size_.atom_,
                         param_1,param_2);
  }
  if ((uVar3 & 2) != 0) {
    pcVar6 = (char *)((ulonglong)(this->_impl_).service_bus_string_.tagged_ptr_.ptr_ &
                     0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar6 + 0x10);
    if (*(longlong *)(pcVar6 + 0x10) != 0) {
      pcVar5 = pcVar6;
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar5 = *(char **)pcVar6;
      }
      local_28._Mysize = 0x35;
      local_28._Mydata = "ds_config.SqlRegionServerListTable.service_bus_string";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar5,(int)*(longlong *)(pcVar6 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar6 = *(char **)pcVar6;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar6;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,6,&local_28,param_1);
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

// GetClassData @ 14c2487e0

ClassData * __thiscall
ds_config::SqlRegionServerListTable::GetClassData(SqlRegionServerListTable *this)

{
  return (ClassData *)&SqlRegionServerListTable_class_data_;
}

// PlacementNew_ @ 14c248800

void * __cdecl
ds_config::SqlRegionServerListTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlRegionServerListTable_ds_config__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x20) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c248840

void * __thiscall
ds_config::SqlRegionServerListTable::_scalar_deleting_destructor_
          (SqlRegionServerListTable *this,uint param_1)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7SqlRegionServerListTable_ds_config__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).address_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).service_bus_string_);
  this_00 = (this->_impl_).server_refresh_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// SqlRegionServerListTable @ 14c2488d0

SqlRegionServerListTable * __thiscall
ds_config::SqlRegionServerListTable::SqlRegionServerListTable
          (SqlRegionServerListTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlRegionServerListTable_ds_config__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).address_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string
  ;
  (this->_impl_).service_bus_string_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).server_refresh_dt_ = (Timestamp *)0x0;
  (this->_impl_).region_index_ = 0;
  (this->_impl_).server_state_ = 0;
  return this;
}

// SqlRegionServerListTable @ 14c248910

SqlRegionServerListTable * __thiscall
ds_config::SqlRegionServerListTable::SqlRegionServerListTable
          (SqlRegionServerListTable *this,Arena *param_1,SqlRegionServerListTable *param_2)

{
  ArenaStringPtr *pAVar1;
  int iVar2;
  TaggedStringPtr TVar3;
  void *pvVar4;
  Timestamp *pTVar5;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlRegionServerListTable_ds_config__6B_;
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
  pAVar1 = &(param_2->_impl_).service_bus_string_;
  (this->_impl_).address_.tagged_ptr_.ptr_ = pvVar4;
  pvVar4 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  (this->_impl_).service_bus_string_.tagged_ptr_.ptr_ = pvVar4;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) {
    pTVar5 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).server_refresh_dt_);
  }
  (this->_impl_).server_refresh_dt_ = pTVar5;
  iVar2 = (param_2->_impl_).server_state_;
  (this->_impl_).region_index_ = (param_2->_impl_).region_index_;
  (this->_impl_).server_state_ = iVar2;
  return this;
}

// ~SqlRegionServerListTable @ 14c2489d0

void __thiscall
ds_config::SqlRegionServerListTable::~SqlRegionServerListTable(SqlRegionServerListTable *this)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7SqlRegionServerListTable_ds_config__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).address_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).service_bus_string_);
  this_00 = (this->_impl_).server_refresh_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// CopyFrom @ 14c248a40

void __thiscall
ds_config::SqlRegionServerListTable::CopyFrom
          (SqlRegionServerListTable *this,SqlRegionServerListTable *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c248a80

Metadata * __thiscall
ds_config::SqlRegionServerListTable::GetMetadata
          (SqlRegionServerListTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&SqlRegionServerListTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c248ac0

void __thiscall
ds_config::SqlRegionServerListTable::InternalSwap
          (SqlRegionServerListTable *this,SqlRegionServerListTable *param_1)

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
  pvVar3 = (param_1->_impl_).service_bus_string_.tagged_ptr_.ptr_;
  (param_1->_impl_).service_bus_string_.tagged_ptr_.ptr_ =
       (this->_impl_).service_bus_string_.tagged_ptr_.ptr_;
  (this->_impl_).service_bus_string_.tagged_ptr_.ptr_ = pvVar3;
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).server_refresh_dt_,
             (char *)&(param_1->_impl_).server_refresh_dt_);
  return;
}

// clear_server_refresh_dt @ 14c248b20

void __thiscall
ds_config::SqlRegionServerListTable::clear_server_refresh_dt(SqlRegionServerListTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).server_refresh_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffb;
  return;
}

// `dynamic_atexit_destructor_for_'_SqlRegionServerListTable_default_instance_'' @ 150444220

void __cdecl
ds_config::_dynamic_atexit_destructor_for___SqlRegionServerListTable_default_instance___(void)

{
  return;
}


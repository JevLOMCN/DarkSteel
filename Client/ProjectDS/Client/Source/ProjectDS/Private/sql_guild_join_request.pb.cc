// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// `dynamic_initializer_for_'_SqlGuildJoinRequestTable_default_instance_'' @ 14129c4d0

void __cdecl ds_guild::_dynamic_initializer_for___SqlGuildJoinRequestTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlGuildJoinRequestTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129c4f0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fguild_2fsql_5fguild_5fjoin_5frequest_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c260470

void __cdecl
ds_guild::SqlGuildJoinRequestTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      pMVar3 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
      pMVar4 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
      if (pMVar3 == (MessageLite *)0x0) {
        pvVar6 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>(pAVar7,pMVar4);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar6;
      }
      else {
        google::protobuf::Timestamp::MergeImpl(pMVar3,pMVar4);
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
    if ((uVar1 & 4) != 0) {
      pMVar3 = (MessageLite *)param_1[2]._internal_metadata_.ptr_;
      pMVar4 = (MessageLite *)param_2[2]._internal_metadata_.ptr_;
      if (pMVar3 == (MessageLite *)0x0) {
        pvVar6 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>(pAVar7,pMVar4);
        param_1[2]._internal_metadata_.ptr_ = (long64)pvVar6;
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

// Clear @ 14c260590

void __thiscall ds_guild::SqlGuildJoinRequestTable::Clear(SqlGuildJoinRequestTable *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).expired_time_);
    }
    if ((uVar1 & 2) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).reg_time_);
    }
    if ((uVar1 & 4) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).update_time_);
    }
  }
  if ((uVar1 & 0x38) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).guild_uid_ = 0;
    (this->_impl_).join_type_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c260610

ulong64 __thiscall ds_guild::SqlGuildJoinRequestTable::ByteSizeLong(SqlGuildJoinRequestTable *this)

{
  uint uVar1;
  longlong lVar2;
  __uint64 _Var3;
  __uint64 _Var4;
  ulong64 uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var3 = 0;
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      _Var3 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).expired_time_);
      uVar7 = (uint)_Var3 | 1;
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
      _Var3 = (ulonglong)(iVar8 * -9 + 0x160U >> 6) + 1 + _Var3;
    }
    if ((uVar1 & 2) != 0) {
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).reg_time_);
      uVar7 = (uint)_Var4 | 1;
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
      _Var3 = _Var3 + 1 + (iVar8 * -9 + 0x160U >> 6) + _Var4;
    }
    if ((uVar1 & 4) != 0) {
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).update_time_);
      uVar7 = (uint)_Var4 | 1;
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
      _Var3 = _Var3 + 1 + (iVar8 * -9 + 0x160U >> 6) + _Var4;
    }
    if (((uVar1 & 8) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 & 0x10) != 0) && (lVar2 = (this->_impl_).guild_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 & 0x20) != 0) && (iVar8 = (this->_impl_).join_type_, iVar8 != 0)) {
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
      _Var3 = _Var3 + (iVar8 * -9 + 0x2c0U >> 6);
    }
  }
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var3,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c2607b0

uchar * __thiscall
ds_guild::SqlGuildJoinRequestTable::_InternalSerialize
          (SqlGuildJoinRequestTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uchar *puVar4;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (lVar3 = (this->_impl_).player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (lVar3 = (this->_impl_).guild_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (iVar1 = (this->_impl_).join_type_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar1,param_1);
  }
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar2 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (10,(MessageLite *)(this->_impl_).expired_time_,
                         (int)(((this->_impl_).expired_time_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((uVar2 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (0xb,(MessageLite *)(this->_impl_).reg_time_,
                         (int)(((this->_impl_).reg_time_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((uVar2 & 4) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (0xc,(MessageLite *)(this->_impl_).update_time_,
                         (int)(((this->_impl_).update_time_)->_impl_)._cached_size_.atom_,param_1,
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

// GetClassData @ 14c2608e0

ClassData * __thiscall
ds_guild::SqlGuildJoinRequestTable::GetClassData(SqlGuildJoinRequestTable *this)

{
  return (ClassData *)&SqlGuildJoinRequestTable_class_data_;
}

// PlacementNew_ @ 14c260900

void * __cdecl
ds_guild::SqlGuildJoinRequestTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlGuildJoinRequestTable_ds_guild__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined4 *)((longlong)param_2 + 0x40) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c260930

void * __thiscall
ds_guild::SqlGuildJoinRequestTable::_scalar_deleting_destructor_
          (SqlGuildJoinRequestTable *this,uint param_1)

{
  ~SqlGuildJoinRequestTable(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// SqlGuildJoinRequestTable @ 14c260970

SqlGuildJoinRequestTable * __thiscall
ds_guild::SqlGuildJoinRequestTable::SqlGuildJoinRequestTable
          (SqlGuildJoinRequestTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlGuildJoinRequestTable_ds_guild__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).expired_time_ = (Timestamp *)0x0;
  (this->_impl_).reg_time_ = (Timestamp *)0x0;
  (this->_impl_).update_time_ = (Timestamp *)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).guild_uid_ = 0;
  (this->_impl_).join_type_ = 0;
  return this;
}

// SqlGuildJoinRequestTable @ 14c2609a0

SqlGuildJoinRequestTable * __thiscall
ds_guild::SqlGuildJoinRequestTable::SqlGuildJoinRequestTable
          (SqlGuildJoinRequestTable *this,Arena *param_1,SqlGuildJoinRequestTable *param_2)

{
  uint uVar1;
  long64 lVar2;
  Timestamp *pTVar3;
  Timestamp *pTVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlGuildJoinRequestTable_ds_guild__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pTVar4 = (Timestamp *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  pTVar3 = pTVar4;
  if ((uVar1 & 1) != 0) {
    pTVar3 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).expired_time_);
  }
  (this->_impl_).expired_time_ = pTVar3;
  pTVar3 = pTVar4;
  if ((uVar1 & 2) != 0) {
    pTVar3 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).reg_time_);
  }
  (this->_impl_).reg_time_ = pTVar3;
  if ((uVar1 & 4) != 0) {
    pTVar4 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).update_time_);
  }
  (this->_impl_).update_time_ = pTVar4;
  lVar2 = (param_2->_impl_).guild_uid_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).guild_uid_ = lVar2;
  (this->_impl_).join_type_ = (param_2->_impl_).join_type_;
  return this;
}

// ~SqlGuildJoinRequestTable @ 14c260a80

void __thiscall
ds_guild::SqlGuildJoinRequestTable::~SqlGuildJoinRequestTable(SqlGuildJoinRequestTable *this)

{
  Timestamp *pTVar1;
  
  this->_padding_ = (longlong)&___7SqlGuildJoinRequestTable_ds_guild__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  pTVar1 = (this->_impl_).expired_time_;
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

// CopyFrom @ 14c260b10

void __thiscall
ds_guild::SqlGuildJoinRequestTable::CopyFrom
          (SqlGuildJoinRequestTable *this,SqlGuildJoinRequestTable *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c260b50

Metadata * __thiscall
ds_guild::SqlGuildJoinRequestTable::GetMetadata
          (SqlGuildJoinRequestTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&SqlGuildJoinRequestTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c260b90

void __thiscall
ds_guild::SqlGuildJoinRequestTable::InternalSwap
          (SqlGuildJoinRequestTable *this,SqlGuildJoinRequestTable *param_1)

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
            (&(this->_impl_).expired_time_,&(this->_impl_).field_0x34,
             &(param_1->_impl_).expired_time_);
  return;
}

// clear_expired_time @ 14c260bd0

void __thiscall
ds_guild::SqlGuildJoinRequestTable::clear_expired_time(SqlGuildJoinRequestTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).expired_time_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_reg_time @ 14c260c00

void __thiscall ds_guild::SqlGuildJoinRequestTable::clear_reg_time(SqlGuildJoinRequestTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).reg_time_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// clear_update_time @ 14c260c30

void __thiscall
ds_guild::SqlGuildJoinRequestTable::clear_update_time(SqlGuildJoinRequestTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).update_time_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffb;
  return;
}

// `dynamic_atexit_destructor_for_'_SqlGuildJoinRequestTable_default_instance_'' @ 1504445d0

void __cdecl
ds_guild::_dynamic_atexit_destructor_for___SqlGuildJoinRequestTable_default_instance___(void)

{
  return;
}


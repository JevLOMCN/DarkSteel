// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// `dynamic_initializer_for_'_SqlSummaryRankTable_default_instance_'' @ 14129c660

void __cdecl ds_rank::_dynamic_initializer_for___SqlSummaryRankTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlSummaryRankTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129c680

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5frank_2fsql_5fsummary_5frank_5ftable_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c262eb0

void __cdecl ds_rank::SqlSummaryRankTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 0x7f) != 0) {
    if (((uVar2 & 1) != 0) && (lVar4 = param_2[1]._internal_metadata_.ptr_, lVar4 != 0)) {
      param_1[1]._internal_metadata_.ptr_ = lVar4;
    }
    if (((uVar2 & 2) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
    }
    if (((uVar2 & 4) != 0) && (lVar4 = param_2[2]._internal_metadata_.ptr_, lVar4 != 0)) {
      param_1[2]._internal_metadata_.ptr_ = lVar4;
    }
    if (((uVar2 & 8) != 0) && (iVar3 = (int)param_2[3]._padding_, iVar3 != 0)) {
      *(int *)&param_1[3]._padding_ = iVar3;
    }
    if (((uVar2 & 0x10) != 0) &&
       (cVar1 = *(char *)((longlong)&param_2[3]._padding_ + 4), cVar1 != '\0')) {
      *(char *)((longlong)&param_1[3]._padding_ + 4) = cVar1;
    }
    if (((uVar2 & 0x20) != 0) && (lVar4 = param_2[3]._internal_metadata_.ptr_, lVar4 != 0)) {
      param_1[3]._internal_metadata_.ptr_ = lVar4;
    }
    if (((uVar2 & 0x40) != 0) && (param_2[4]._padding_ != 0)) {
      param_1[4]._padding_ = param_2[4]._padding_;
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar2;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
    return;
  }
  return;
}

// Clear @ 14c262f60

void __thiscall ds_rank::SqlSummaryRankTable::Clear(SqlSummaryRankTable *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x7f) != 0) {
    (this->_impl_).world_id_ = 0;
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).reward_rank_ = 0;
    (this->_impl_).rank_type_ = 0;
    (this->_impl_).is_reward_ = false;
    *(undefined3 *)&(this->_impl_).field_0x25 = 0;
    (this->_impl_).unique_param_ = 0;
    (this->_impl_).current_score_ = 0;
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
    uVar2 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar2 = (uint)uVar1 & 3;
  }
  if (uVar2 != 0) {
    google::protobuf::UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14c262f90

ulong64 __thiscall ds_rank::SqlSummaryRankTable::ByteSizeLong(SqlSummaryRankTable *this)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  __uint64 _Var7;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  uVar4 = 0;
  if ((uVar1 & 0x7f) != 0) {
    if (((uVar1 & 1) != 0) && (lVar2 = (this->_impl_).world_id_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
    }
    if (((uVar1 & 2) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      uVar4 = uVar4 + uVar5;
    }
    if (((uVar1 & 4) != 0) && (lVar2 = (this->_impl_).reward_rank_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      uVar4 = uVar4 + uVar5;
    }
    if (((uVar1 & 8) != 0) && (iVar3 = (this->_impl_).rank_type_, iVar3 != 0)) {
      uVar6 = (longlong)iVar3 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 0x3f - (int)lVar2;
      }
      else {
        iVar3 = (int)LZCOUNT(uVar6);
      }
      uVar4 = uVar4 + (iVar3 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 0x10) != 0) && ((this->_impl_).is_reward_ != false)) {
      uVar4 = uVar4 + 2;
    }
    if (((uVar1 & 0x20) != 0) && (lVar2 = (this->_impl_).unique_param_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      uVar4 = uVar4 + uVar5;
    }
    if (((uVar1 & 0x40) != 0) && (lVar2 = (this->_impl_).current_score_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      uVar4 = uVar4 + uVar5;
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar4,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c2630a0

uchar * __thiscall
ds_rank::SqlSummaryRankTable::_InternalSerialize
          (SqlSummaryRankTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  uchar *puVar4;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar3 = (this->_impl_).world_id_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (iVar2 = (this->_impl_).rank_type_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar3 = (this->_impl_).player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<3>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (lVar3 = (this->_impl_).reward_rank_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<4>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (lVar3 = (this->_impl_).unique_param_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<5>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x40) != 0) &&
     (lVar3 = (this->_impl_).current_score_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<6>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) && ((this->_impl_).is_reward_ != false)
     ) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar1 = (this->_impl_).is_reward_;
    *param_1 = '8';
    param_1[1] = bVar1 != false;
    param_1 = param_1 + 2;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar4 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar4;
  }
  return param_1;
}

// GetClassData @ 14c2631e0

ClassData * __thiscall ds_rank::SqlSummaryRankTable::GetClassData(SqlSummaryRankTable *this)

{
  return (ClassData *)&SqlSummaryRankTable_class_data_;
}

// PlacementNew_ @ 14c263200

void * __cdecl
ds_rank::SqlSummaryRankTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlSummaryRankTable_ds_rank__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c263230

void * __thiscall
ds_rank::SqlSummaryRankTable::_scalar_deleting_destructor_(SqlSummaryRankTable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SqlSummaryRankTable_ds_rank__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// SqlSummaryRankTable @ 14c263280

SqlSummaryRankTable * __thiscall
ds_rank::SqlSummaryRankTable::SqlSummaryRankTable(SqlSummaryRankTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlSummaryRankTable_ds_rank__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).world_id_ = 0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).reward_rank_ = 0;
  (this->_impl_).rank_type_ = 0;
  (this->_impl_).is_reward_ = false;
  *(undefined3 *)&(this->_impl_).field_0x25 = 0;
  (this->_impl_).unique_param_ = 0;
  (this->_impl_).current_score_ = 0;
  return this;
}

// SqlSummaryRankTable @ 14c2632b0

SqlSummaryRankTable * __thiscall
ds_rank::SqlSummaryRankTable::SqlSummaryRankTable
          (SqlSummaryRankTable *this,Arena *param_1,SqlSummaryRankTable *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlSummaryRankTable_ds_rank__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).world_id_ = (param_2->_impl_).world_id_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).reward_rank_ = (param_2->_impl_).reward_rank_;
  (this->_impl_).rank_type_ = (param_2->_impl_).rank_type_;
  (this->_impl_).is_reward_ = (param_2->_impl_).is_reward_;
  (this->_impl_).unique_param_ = (param_2->_impl_).unique_param_;
  (this->_impl_).current_score_ = (param_2->_impl_).current_score_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// ~SqlSummaryRankTable @ 14c263340

void __thiscall ds_rank::SqlSummaryRankTable::~SqlSummaryRankTable(SqlSummaryRankTable *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7SqlSummaryRankTable_ds_rank__6B_;
  plVar1 = &this->_padding_;
  if ((*plVar1 & 1) == 0) {
    return;
  }
  pvVar4 = (void *)(*plVar1 & 0xfffffffffffffffe);
  if (pvVar4 != (void *)0x0) {
    if ((~((byte)*(undefined8 *)((longlong)pvVar4 + 8) >> 2) & 1) == 0) {
      uVar3 = *(uint *)((longlong)pvVar4 + 0x10);
    }
    else {
      uVar3 = (uint)*(undefined8 *)((longlong)pvVar4 + 8) & 3;
    }
    if (uVar3 != 0) {
      google::protobuf::UnknownFieldSet::ClearFallback((UnknownFieldSet *)((longlong)pvVar4 + 8));
    }
    if ((~((byte)*(ulonglong *)((longlong)pvVar4 + 8) >> 2) & 1) == 0) {
      plVar2 = (longlong *)((*(ulonglong *)((longlong)pvVar4 + 8) & 0xfffffffffffffff8) - 0x10);
      if (*plVar2 == 0) {
        ::operator_delete(plVar2,((longlong)*(int *)((longlong)pvVar4 + 0x14) + 1) * 0x10);
      }
    }
    ::operator_delete(pvVar4,0x18);
    *plVar1 = 0;
    return;
  }
  *plVar1 = 0;
  return;
}

// CopyFrom @ 14c263360

void __thiscall
ds_rank::SqlSummaryRankTable::CopyFrom(SqlSummaryRankTable *this,SqlSummaryRankTable *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1 != this) {
    Clear(this);
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar2 & 0x7f) != 0) {
      if (((uVar2 & 1) != 0) && (lVar4 = (param_1->_impl_).world_id_, lVar4 != 0)) {
        (this->_impl_).world_id_ = lVar4;
      }
      if (((uVar2 & 2) != 0) && (lVar4 = (param_1->_impl_).player_uid_, lVar4 != 0)) {
        (this->_impl_).player_uid_ = lVar4;
      }
      if (((uVar2 & 4) != 0) && (lVar4 = (param_1->_impl_).reward_rank_, lVar4 != 0)) {
        (this->_impl_).reward_rank_ = lVar4;
      }
      if (((uVar2 & 8) != 0) && (iVar3 = (param_1->_impl_).rank_type_, iVar3 != 0)) {
        (this->_impl_).rank_type_ = iVar3;
      }
      if (((uVar2 & 0x10) != 0) && (bVar1 = (param_1->_impl_).is_reward_, bVar1 != false)) {
        (this->_impl_).is_reward_ = bVar1;
      }
      if (((uVar2 & 0x20) != 0) && (lVar4 = (param_1->_impl_).unique_param_, lVar4 != 0)) {
        (this->_impl_).unique_param_ = lVar4;
      }
      if (((uVar2 & 0x40) != 0) && (lVar4 = (param_1->_impl_).current_score_, lVar4 != 0)) {
        (this->_impl_).current_score_ = lVar4;
      }
    }
    (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar2;
    if ((param_1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&this->_padding_,
                 (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    }
  }
  return;
}

// GetMetadata @ 14c263430

Metadata * __thiscall
ds_rank::SqlSummaryRankTable::GetMetadata
          (SqlSummaryRankTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SqlSummaryRankTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c263470

void __thiscall
ds_rank::SqlSummaryRankTable::InternalSwap(SqlSummaryRankTable *this,SqlSummaryRankTable *param_1)

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
            (&(this->_impl_).world_id_,this + 1,&(param_1->_impl_).world_id_);
  return;
}

// `dynamic_atexit_destructor_for_'_SqlSummaryRankTable_default_instance_'' @ 150444620

void __cdecl ds_rank::_dynamic_atexit_destructor_for___SqlSummaryRankTable_default_instance___(void)

{
  return;
}


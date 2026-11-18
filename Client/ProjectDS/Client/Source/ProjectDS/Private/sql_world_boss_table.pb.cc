// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// `dynamic_initializer_for_'_SqlWorldBossTable_default_instance_'' @ 14129c750

void __cdecl ds_world::_dynamic_initializer_for___SqlWorldBossTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlWorldBossTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129c770

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fworld_2fsql_5fworld_5fboss_5ftable_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c264490

void __cdecl ds_world::SqlWorldBossTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  MessageLite *pMVar3;
  MessageLite *pMVar4;
  void *pvVar5;
  Arena *pAVar6;
  
  pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      pMVar3 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
      pMVar4 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
      if (pMVar3 == (MessageLite *)0x0) {
        pvVar5 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>(pAVar6,pMVar4);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar5;
      }
      else {
        google::protobuf::Timestamp::MergeImpl(pMVar3,pMVar4);
      }
    }
    if (((uVar1 & 2) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
    }
    if (((uVar1 & 4) != 0) && (iVar2 = (int)param_2[2]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar2;
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

// Clear @ 14c264550

void __thiscall ds_world::SqlWorldBossTable::Clear(SqlWorldBossTable *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    google::protobuf::Timestamp::Clear((this->_impl_).last_update_dt_);
  }
  if ((uVar1 & 6) != 0) {
    (this->_impl_).until_life_time_ = 0;
    (this->_impl_).table_id_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c2645b0

ulong64 __thiscall ds_world::SqlWorldBossTable::ByteSizeLong(SqlWorldBossTable *this)

{
  uint uVar1;
  longlong lVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var3 = 0;
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      _Var3 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).last_update_dt_);
      uVar5 = (uint)_Var3 | 1;
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
      _Var3 = _Var3 + 1 + (ulonglong)(iVar6 * -9 + 0x160U >> 6);
    }
    if (((uVar1 & 2) != 0) && (uVar4 = (this->_impl_).until_life_time_, uVar4 != 0)) {
      uVar4 = uVar4 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar6 = 0x3f - (int)lVar2;
      }
      else {
        iVar6 = (int)LZCOUNT(uVar4);
      }
      _Var3 = _Var3 + (iVar6 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 4) != 0) && (iVar6 = (this->_impl_).table_id_, iVar6 != 0)) {
      uVar4 = (longlong)iVar6 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar6 = 0x3f - (int)lVar2;
      }
      else {
        iVar6 = (int)LZCOUNT(uVar4);
      }
      _Var3 = _Var3 + (iVar6 * -9 + 0x2c0U >> 6);
    }
  }
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var3,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c2646c0

uchar * __thiscall
ds_world::SqlWorldBossTable::_InternalSerialize
          (SqlWorldBossTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  longlong lVar2;
  uchar *puVar3;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar1 = (this->_impl_).table_id_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar1,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar2 = (this->_impl_).until_life_time_, lVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar2,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (3,(MessageLite *)(this->_impl_).last_update_dt_,
                         (int)(((this->_impl_).last_update_dt_)->_impl_)._cached_size_.atom_,param_1
                         ,param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14c264770

ClassData * __thiscall ds_world::SqlWorldBossTable::GetClassData(SqlWorldBossTable *this)

{
  return (ClassData *)&SqlWorldBossTable_class_data_;
}

// PlacementNew_ @ 14c264790

void * __cdecl
ds_world::SqlWorldBossTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlWorldBossTable_ds_world__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c2647c0

void * __thiscall
ds_world::SqlWorldBossTable::_scalar_deleting_destructor_(SqlWorldBossTable *this,uint param_1)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7SqlWorldBossTable_ds_world__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).last_update_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// SqlWorldBossTable @ 14c264840

SqlWorldBossTable * __thiscall
ds_world::SqlWorldBossTable::SqlWorldBossTable(SqlWorldBossTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlWorldBossTable_ds_world__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).last_update_dt_ = (Timestamp *)0x0;
  (this->_impl_).until_life_time_ = 0;
  (this->_impl_).table_id_ = 0;
  return this;
}

// SqlWorldBossTable @ 14c264870

SqlWorldBossTable * __thiscall
ds_world::SqlWorldBossTable::SqlWorldBossTable
          (SqlWorldBossTable *this,Arena *param_1,SqlWorldBossTable *param_2)

{
  Timestamp *pTVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlWorldBossTable_ds_world__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pTVar1 = (Timestamp *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pTVar1 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).last_update_dt_);
  }
  (this->_impl_).last_update_dt_ = pTVar1;
  (this->_impl_).until_life_time_ = (param_2->_impl_).until_life_time_;
  (this->_impl_).table_id_ = (param_2->_impl_).table_id_;
  return this;
}

// ~SqlWorldBossTable @ 14c264900

void __thiscall ds_world::SqlWorldBossTable::~SqlWorldBossTable(SqlWorldBossTable *this)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7SqlWorldBossTable_ds_world__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).last_update_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// CopyFrom @ 14c264950

void __thiscall
ds_world::SqlWorldBossTable::CopyFrom(SqlWorldBossTable *this,SqlWorldBossTable *param_1)

{
  uint uVar1;
  int iVar2;
  Timestamp *pTVar3;
  longlong lVar4;
  Timestamp *pTVar5;
  Arena *pAVar6;
  
  if (param_1 != this) {
    Clear(this);
    pAVar6 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 7) != 0) {
      if ((uVar1 & 1) != 0) {
        pTVar5 = (this->_impl_).last_update_dt_;
        pTVar3 = (param_1->_impl_).last_update_dt_;
        if (pTVar5 == (Timestamp *)0x0) {
          pTVar5 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                             (pAVar6,pTVar3);
          (this->_impl_).last_update_dt_ = pTVar5;
        }
        else {
          google::protobuf::Timestamp::MergeImpl((MessageLite *)pTVar5,(MessageLite *)pTVar3);
        }
      }
      if (((uVar1 & 2) != 0) && (lVar4 = (param_1->_impl_).until_life_time_, lVar4 != 0)) {
        (this->_impl_).until_life_time_ = lVar4;
      }
      if (((uVar1 & 4) != 0) && (iVar2 = (param_1->_impl_).table_id_, iVar2 != 0)) {
        (this->_impl_).table_id_ = iVar2;
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

// GetMetadata @ 14c264a20

Metadata * __thiscall
ds_world::SqlWorldBossTable::GetMetadata(SqlWorldBossTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SqlWorldBossTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c264a60

void __thiscall
ds_world::SqlWorldBossTable::InternalSwap(SqlWorldBossTable *this,SqlWorldBossTable *param_1)

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
            (&(this->_impl_).last_update_dt_,&(this->_impl_).field_0x1c,
             &(param_1->_impl_).last_update_dt_);
  return;
}

// clear_last_update_dt @ 14c264aa0

void __thiscall ds_world::SqlWorldBossTable::clear_last_update_dt(SqlWorldBossTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).last_update_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// `dynamic_atexit_destructor_for_'_SqlWorldBossTable_default_instance_'' @ 150444650

void __cdecl ds_world::_dynamic_atexit_destructor_for___SqlWorldBossTable_default_instance___(void)

{
  return;
}


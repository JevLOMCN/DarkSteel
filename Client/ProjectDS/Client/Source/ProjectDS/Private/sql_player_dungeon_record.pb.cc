// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// `dynamic_initializer_for_'_SqlPlayerDungeonRecordTable_default_instance_'' @ 14129bd00

void __cdecl
ds_game::_dynamic_initializer_for___SqlPlayerDungeonRecordTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlPlayerDungeonRecordTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129bd20

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fgame_2fsql_5fplayer_5fdungeon_5frecord_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c256660

void __cdecl
ds_game::SqlPlayerDungeonRecordTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  MessageLite *pMVar4;
  MessageLite *pMVar5;
  longlong lVar6;
  void *pvVar7;
  Arena *pAVar8;
  
  pAVar8 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
  }
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 0x7f) != 0) {
    if ((uVar2 & 1) != 0) {
      pMVar4 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
      pMVar5 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
      if (pMVar4 == (MessageLite *)0x0) {
        pvVar7 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>(pAVar8,pMVar5);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar7;
      }
      else {
        google::protobuf::Timestamp::MergeImpl(pMVar4,pMVar5);
      }
    }
    if ((uVar2 & 2) != 0) {
      if ((MessageLite *)param_1[2]._padding_ == (MessageLite *)0x0) {
        pvVar7 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                           (pAVar8,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar7;
      }
      else {
        google::protobuf::Timestamp::MergeImpl
                  ((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
      }
    }
    if (((uVar2 & 4) != 0) && (lVar6 = param_2[2]._internal_metadata_.ptr_, lVar6 != 0)) {
      param_1[2]._internal_metadata_.ptr_ = lVar6;
    }
    if (((uVar2 & 8) != 0) && (iVar3 = (int)param_2[3]._padding_, iVar3 != 0)) {
      *(int *)&param_1[3]._padding_ = iVar3;
    }
    if (((uVar2 & 0x10) != 0) && (iVar3 = *(int *)((longlong)&param_2[3]._padding_ + 4), iVar3 != 0)
       ) {
      *(int *)((longlong)&param_1[3]._padding_ + 4) = iVar3;
    }
    if (((uVar2 & 0x20) != 0) && (iVar3 = (int)param_2[3]._internal_metadata_.ptr_, iVar3 != 0)) {
      *(int *)&param_1[3]._internal_metadata_.ptr_ = iVar3;
    }
    if (((uVar2 & 0x40) != 0) &&
       (cVar1 = *(char *)((longlong)&param_2[3]._internal_metadata_.ptr_ + 4), cVar1 != '\0')) {
      *(char *)((longlong)&param_1[3]._internal_metadata_.ptr_ + 4) = cVar1;
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

// Clear @ 14c256770

void __thiscall ds_game::SqlPlayerDungeonRecordTable::Clear(SqlPlayerDungeonRecordTable *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).enter_update_dt_);
    }
    if ((uVar1 & 2) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).reward_update_dt_);
    }
  }
  if ((uVar1 & 0x7c) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).dungeon_id_ = 0;
    (this->_impl_).enter_count_ = 0;
    (this->_impl_).reward_count_ = 0;
    (this->_impl_).first_clear_reward_ = false;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c2567e0

ulong64 __thiscall
ds_game::SqlPlayerDungeonRecordTable::ByteSizeLong(SqlPlayerDungeonRecordTable *this)

{
  uint uVar1;
  longlong lVar2;
  __uint64 _Var3;
  __uint64 _Var4;
  ulonglong uVar5;
  ulong64 uVar6;
  uint uVar7;
  int iVar8;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var3 = 0;
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      _Var3 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).enter_update_dt_);
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
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).reward_update_dt_);
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
    if (((uVar1 & 4) != 0) && (uVar5 = (this->_impl_).player_uid_, uVar5 != 0)) {
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
      _Var3 = _Var3 + (iVar8 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 8) != 0) && (iVar8 = (this->_impl_).dungeon_id_, iVar8 != 0)) {
      uVar6 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar8);
      _Var3 = _Var3 + uVar6;
    }
    if (((uVar1 & 0x10) != 0) && (iVar8 = (this->_impl_).enter_count_, iVar8 != 0)) {
      uVar6 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar8);
      _Var3 = _Var3 + uVar6;
    }
    if (((uVar1 & 0x20) != 0) && (iVar8 = (this->_impl_).reward_count_, iVar8 != 0)) {
      uVar6 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar8);
      _Var3 = _Var3 + uVar6;
    }
    if (((uVar1 & 0x40) != 0) && ((this->_impl_).first_clear_reward_ != false)) {
      _Var3 = _Var3 + 2;
    }
  }
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var3,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c256970

uchar * __thiscall
ds_game::SqlPlayerDungeonRecordTable::_InternalSerialize
          (SqlPlayerDungeonRecordTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uchar *puVar5;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (lVar4 = (this->_impl_).player_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar4,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (iVar2 = (this->_impl_).dungeon_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (iVar2 = (this->_impl_).enter_count_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (iVar2 = (this->_impl_).reward_count_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<5>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x40) != 0) &&
     ((this->_impl_).first_clear_reward_ != false)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar1 = (this->_impl_).first_clear_reward_;
    *param_1 = '0';
    param_1[1] = bVar1 != false;
    param_1 = param_1 + 2;
  }
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (7,(MessageLite *)(this->_impl_).enter_update_dt_,
                         (int)(((this->_impl_).enter_update_dt_)->_impl_)._cached_size_.atom_,
                         param_1,param_2);
  }
  if ((uVar3 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (8,(MessageLite *)(this->_impl_).reward_update_dt_,
                         (int)(((this->_impl_).reward_update_dt_)->_impl_)._cached_size_.atom_,
                         param_1,param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar5;
  }
  return param_1;
}

// GetClassData @ 14c256ac0

ClassData * __thiscall
ds_game::SqlPlayerDungeonRecordTable::GetClassData(SqlPlayerDungeonRecordTable *this)

{
  return (ClassData *)&SqlPlayerDungeonRecordTable_class_data_;
}

// PlacementNew_ @ 14c256ae0

void * __cdecl
ds_game::SqlPlayerDungeonRecordTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlPlayerDungeonRecordTable_ds_game__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined4 *)((longlong)param_2 + 0x38) = 0;
  *(undefined1 *)((longlong)param_2 + 0x3c) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c256b10

void * __thiscall
ds_game::SqlPlayerDungeonRecordTable::_scalar_deleting_destructor_
          (SqlPlayerDungeonRecordTable *this,uint param_1)

{
  ~SqlPlayerDungeonRecordTable(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// SqlPlayerDungeonRecordTable @ 14c256b50

SqlPlayerDungeonRecordTable * __thiscall
ds_game::SqlPlayerDungeonRecordTable::SqlPlayerDungeonRecordTable
          (SqlPlayerDungeonRecordTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlPlayerDungeonRecordTable_ds_game__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).enter_update_dt_ = (Timestamp *)0x0;
  (this->_impl_).reward_update_dt_ = (Timestamp *)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).dungeon_id_ = 0;
  (this->_impl_).enter_count_ = 0;
  (this->_impl_).reward_count_ = 0;
  (this->_impl_).first_clear_reward_ = false;
  return this;
}

// SqlPlayerDungeonRecordTable @ 14c256b80

SqlPlayerDungeonRecordTable * __thiscall
ds_game::SqlPlayerDungeonRecordTable::SqlPlayerDungeonRecordTable
          (SqlPlayerDungeonRecordTable *this,Arena *param_1,SqlPlayerDungeonRecordTable *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  Timestamp *pTVar4;
  Timestamp *pTVar5;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlPlayerDungeonRecordTable_ds_game__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pTVar5 = (Timestamp *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  pTVar4 = pTVar5;
  if ((uVar1 & 1) != 0) {
    pTVar4 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).enter_update_dt_);
  }
  (this->_impl_).enter_update_dt_ = pTVar4;
  if ((uVar1 & 2) != 0) {
    pTVar5 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).reward_update_dt_);
  }
  (this->_impl_).reward_update_dt_ = pTVar5;
  iVar2 = (param_2->_impl_).dungeon_id_;
  iVar3 = (param_2->_impl_).enter_count_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).dungeon_id_ = iVar2;
  (this->_impl_).enter_count_ = iVar3;
  (this->_impl_).reward_count_ = (param_2->_impl_).reward_count_;
  (this->_impl_).first_clear_reward_ = (param_2->_impl_).first_clear_reward_;
  return this;
}

// ~SqlPlayerDungeonRecordTable @ 14c256c50

void __thiscall
ds_game::SqlPlayerDungeonRecordTable::~SqlPlayerDungeonRecordTable
          (SqlPlayerDungeonRecordTable *this)

{
  Timestamp *pTVar1;
  
  this->_padding_ = (longlong)&___7SqlPlayerDungeonRecordTable_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  pTVar1 = (this->_impl_).enter_update_dt_;
  if (pTVar1 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(pTVar1);
    ::operator_delete(pTVar1,0x28);
  }
  pTVar1 = (this->_impl_).reward_update_dt_;
  if (pTVar1 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(pTVar1);
    ::operator_delete(pTVar1,0x28);
  }
  return;
}

// CopyFrom @ 14c256cd0

void __thiscall
ds_game::SqlPlayerDungeonRecordTable::CopyFrom
          (SqlPlayerDungeonRecordTable *this,SqlPlayerDungeonRecordTable *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c256d10

Metadata * __thiscall
ds_game::SqlPlayerDungeonRecordTable::GetMetadata
          (SqlPlayerDungeonRecordTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&SqlPlayerDungeonRecordTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c256d50

void __thiscall
ds_game::SqlPlayerDungeonRecordTable::InternalSwap
          (SqlPlayerDungeonRecordTable *this,SqlPlayerDungeonRecordTable *param_1)

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
            (&(this->_impl_).enter_update_dt_,&(this->_impl_).field_0x2d,
             &(param_1->_impl_).enter_update_dt_);
  return;
}

// clear_enter_update_dt @ 14c256d90

void __thiscall
ds_game::SqlPlayerDungeonRecordTable::clear_enter_update_dt(SqlPlayerDungeonRecordTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).enter_update_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_reward_update_dt @ 14c256dc0

void __thiscall
ds_game::SqlPlayerDungeonRecordTable::clear_reward_update_dt(SqlPlayerDungeonRecordTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).reward_update_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// `dynamic_atexit_destructor_for_'_SqlPlayerDungeonRecordTable_default_instance_'' @ 150444440

void __cdecl
ds_game::_dynamic_atexit_destructor_for___SqlPlayerDungeonRecordTable_default_instance___(void)

{
  return;
}


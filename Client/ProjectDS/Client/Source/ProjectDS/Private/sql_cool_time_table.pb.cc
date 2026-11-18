// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// `dynamic_initializer_for_'_SqlCoolTimeTable_default_instance_'' @ 14129b4e0

void __cdecl ds_game::_dynamic_initializer_for___SqlCoolTimeTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlCoolTimeTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129b500

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fgame_2fsql_5fcool_5ftime_5ftable_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c24ae50

void __cdecl ds_game::SqlCoolTimeTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  MessageLite *pMVar4;
  MessageLite *pMVar5;
  void *pvVar6;
  Arena *pAVar7;
  
  pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
  }
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 0xf) != 0) {
    if ((uVar2 & 1) != 0) {
      pMVar4 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
      pMVar5 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
      if (pMVar4 == (MessageLite *)0x0) {
        pvVar6 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>(pAVar7,pMVar5);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar6;
      }
      else {
        google::protobuf::Timestamp::MergeImpl(pMVar4,pMVar5);
      }
    }
    if (((uVar2 & 2) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
    }
    if (((uVar2 & 4) != 0) && (cVar1 = (char)param_2[2]._internal_metadata_.ptr_, cVar1 != '\0')) {
      *(char *)&param_1[2]._internal_metadata_.ptr_ = cVar1;
    }
    if (((uVar2 & 8) != 0) &&
       (iVar3 = *(int *)((longlong)&param_2[2]._internal_metadata_.ptr_ + 4), iVar3 != 0)) {
      *(int *)((longlong)&param_1[2]._internal_metadata_.ptr_ + 4) = iVar3;
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

// Clear @ 14c24af20

void __thiscall ds_game::SqlCoolTimeTable::Clear(SqlCoolTimeTable *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    google::protobuf::Timestamp::Clear((this->_impl_).expired_dt_);
  }
  if ((uVar1 & 0xe) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).is_group_ = false;
    *(undefined3 *)&(this->_impl_).field_0x19 = 0;
    (this->_impl_).cool_time_id_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c24af70

ulong64 __thiscall ds_game::SqlCoolTimeTable::ByteSizeLong(SqlCoolTimeTable *this)

{
  uint uVar1;
  longlong lVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var3 = 0;
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      _Var3 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).expired_dt_);
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
    if (((uVar1 & 2) != 0) && (uVar4 = (this->_impl_).player_uid_, uVar4 != 0)) {
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
    if (((uVar1 & 4) != 0) && ((this->_impl_).is_group_ != false)) {
      _Var3 = _Var3 + 2;
    }
    if (((uVar1 & 8) != 0) && (iVar6 = (this->_impl_).cool_time_id_, iVar6 != 0)) {
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

// _InternalSerialize @ 14c24b090

uchar * __thiscall
ds_game::SqlCoolTimeTable::_InternalSerialize
          (SqlCoolTimeTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  uchar *puVar4;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar3 = (this->_impl_).player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) && ((this->_impl_).is_group_ != false)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar1 = (this->_impl_).is_group_;
    *param_1 = '\x10';
    param_1[1] = bVar1 != false;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (iVar2 = (this->_impl_).cool_time_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (4,(MessageLite *)(this->_impl_).expired_dt_,
                         (int)(((this->_impl_).expired_dt_)->_impl_)._cached_size_.atom_,param_1,
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

// GetClassData @ 14c24b170

ClassData * __thiscall ds_game::SqlCoolTimeTable::GetClassData(SqlCoolTimeTable *this)

{
  return (ClassData *)&SqlCoolTimeTable_class_data_;
}

// PlacementNew_ @ 14c24b190

void * __cdecl ds_game::SqlCoolTimeTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlCoolTimeTable_ds_game__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c24b1c0

void * __thiscall
ds_game::SqlCoolTimeTable::_scalar_deleting_destructor_(SqlCoolTimeTable *this,uint param_1)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7SqlCoolTimeTable_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).expired_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// SqlCoolTimeTable @ 14c24b240

SqlCoolTimeTable * __thiscall
ds_game::SqlCoolTimeTable::SqlCoolTimeTable(SqlCoolTimeTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlCoolTimeTable_ds_game__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).expired_dt_ = (Timestamp *)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).is_group_ = false;
  *(undefined3 *)&(this->_impl_).field_0x19 = 0;
  (this->_impl_).cool_time_id_ = 0;
  return this;
}

// SqlCoolTimeTable @ 14c24b270

SqlCoolTimeTable * __thiscall
ds_game::SqlCoolTimeTable::SqlCoolTimeTable
          (SqlCoolTimeTable *this,Arena *param_1,SqlCoolTimeTable *param_2)

{
  bool bVar1;
  undefined3 uVar2;
  int iVar3;
  Timestamp *pTVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlCoolTimeTable_ds_game__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pTVar4 = (Timestamp *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pTVar4 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).expired_dt_);
  }
  (this->_impl_).expired_dt_ = pTVar4;
  bVar1 = (param_2->_impl_).is_group_;
  uVar2 = *(undefined3 *)&(param_2->_impl_).field_0x19;
  iVar3 = (param_2->_impl_).cool_time_id_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).is_group_ = bVar1;
  *(undefined3 *)&(this->_impl_).field_0x19 = uVar2;
  (this->_impl_).cool_time_id_ = iVar3;
  return this;
}

// ~SqlCoolTimeTable @ 14c24b300

void __thiscall ds_game::SqlCoolTimeTable::~SqlCoolTimeTable(SqlCoolTimeTable *this)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7SqlCoolTimeTable_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).expired_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// CopyFrom @ 14c24b350

void __thiscall
ds_game::SqlCoolTimeTable::CopyFrom(SqlCoolTimeTable *this,SqlCoolTimeTable *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  Timestamp *pTVar4;
  longlong lVar5;
  Timestamp *pTVar6;
  Arena *pAVar7;
  
  if (param_1 != this) {
    Clear(this);
    pAVar7 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
    }
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar2 & 0xf) != 0) {
      if ((uVar2 & 1) != 0) {
        pTVar6 = (this->_impl_).expired_dt_;
        pTVar4 = (param_1->_impl_).expired_dt_;
        if (pTVar6 == (Timestamp *)0x0) {
          pTVar6 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                             (pAVar7,pTVar4);
          (this->_impl_).expired_dt_ = pTVar6;
        }
        else {
          google::protobuf::Timestamp::MergeImpl((MessageLite *)pTVar6,(MessageLite *)pTVar4);
        }
      }
      if (((uVar2 & 2) != 0) && (lVar5 = (param_1->_impl_).player_uid_, lVar5 != 0)) {
        (this->_impl_).player_uid_ = lVar5;
      }
      if (((uVar2 & 4) != 0) && (bVar1 = (param_1->_impl_).is_group_, bVar1 != false)) {
        (this->_impl_).is_group_ = bVar1;
      }
      if (((uVar2 & 8) != 0) && (iVar3 = (param_1->_impl_).cool_time_id_, iVar3 != 0)) {
        (this->_impl_).cool_time_id_ = iVar3;
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

// GetMetadata @ 14c24b430

Metadata * __thiscall
ds_game::SqlCoolTimeTable::GetMetadata(SqlCoolTimeTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SqlCoolTimeTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c24b470

void __thiscall
ds_game::SqlCoolTimeTable::InternalSwap(SqlCoolTimeTable *this,SqlCoolTimeTable *param_1)

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
            (&(this->_impl_).expired_dt_,this + 1,&(param_1->_impl_).expired_dt_);
  return;
}

// clear_expired_dt @ 14c24b4b0

void __thiscall ds_game::SqlCoolTimeTable::clear_expired_dt(SqlCoolTimeTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).expired_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// `dynamic_atexit_destructor_for_'_SqlCoolTimeTable_default_instance_'' @ 1504442a0

void __cdecl ds_game::_dynamic_atexit_destructor_for___SqlCoolTimeTable_default_instance___(void)

{
  return;
}


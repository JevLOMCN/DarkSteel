// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// `dynamic_initializer_for_'_SqlCombatPowerTable_default_instance_'' @ 14129b490

void __cdecl ds_game::_dynamic_initializer_for___SqlCombatPowerTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlCombatPowerTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129b4b0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fgame_2fsql_5fcombat_5fpower_5ftable_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c24aa60

void __cdecl ds_game::SqlCombatPowerTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 3) != 0) {
    if (((uVar2 & 1) != 0) && (lVar3 = param_2[1]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[1]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar2 & 2) != 0) && (iVar1 = (int)param_2[2]._padding_, iVar1 != 0)) {
      *(int *)&param_1[2]._padding_ = iVar1;
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

// Clear @ 14c24aac0

void __thiscall ds_game::SqlCombatPowerTable::Clear(SqlCombatPowerTable *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 3) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).combat_power_ = 0.0;
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

// ByteSizeLong @ 14c24aaf0

ulong64 __thiscall ds_game::SqlCombatPowerTable::ByteSizeLong(SqlCombatPowerTable *this)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  __uint64 _Var5;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var5 = 0;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (uVar4 = (this->_impl_).player_uid_, uVar4 != 0)) {
      uVar4 = uVar4 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 0x3f - (int)lVar2;
      }
      else {
        iVar3 = (int)LZCOUNT(uVar4);
      }
      _Var5 = (__uint64)(iVar3 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 2) != 0) && ((this->_impl_).combat_power_ != 0.0)) {
      _Var5 = _Var5 + 5;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c24ab60

uchar * __thiscall
ds_game::SqlCombatPowerTable::_InternalSerialize
          (SqlCombatPowerTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  float fVar1;
  longlong lVar2;
  uchar *puVar3;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) && ((this->_impl_).combat_power_ != 0.0))
  {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    fVar1 = (this->_impl_).combat_power_;
    *param_1 = '\x1d';
    *(float *)(param_1 + 1) = fVar1;
    param_1 = param_1 + 5;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14c24ac00

ClassData * __thiscall ds_game::SqlCombatPowerTable::GetClassData(SqlCombatPowerTable *this)

{
  return (ClassData *)&SqlCombatPowerTable_class_data_;
}

// PlacementNew_ @ 14c24ac20

void * __cdecl
ds_game::SqlCombatPowerTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlCombatPowerTable_ds_game__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c24ac50

void * __thiscall
ds_game::SqlCombatPowerTable::_scalar_deleting_destructor_(SqlCombatPowerTable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SqlCombatPowerTable_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// SqlCombatPowerTable @ 14c24aca0

SqlCombatPowerTable * __thiscall
ds_game::SqlCombatPowerTable::SqlCombatPowerTable(SqlCombatPowerTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlCombatPowerTable_ds_game__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).combat_power_ = 0.0;
  return this;
}

// SqlCombatPowerTable @ 14c24acd0

SqlCombatPowerTable * __thiscall
ds_game::SqlCombatPowerTable::SqlCombatPowerTable
          (SqlCombatPowerTable *this,Arena *param_1,SqlCombatPowerTable *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlCombatPowerTable_ds_game__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).combat_power_ = (param_2->_impl_).combat_power_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// ~SqlCombatPowerTable @ 14c24ad30

void __thiscall ds_game::SqlCombatPowerTable::~SqlCombatPowerTable(SqlCombatPowerTable *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7SqlCombatPowerTable_ds_game__6B_;
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

// CopyFrom @ 14c24ad50

void __thiscall
ds_game::SqlCombatPowerTable::CopyFrom(SqlCombatPowerTable *this,SqlCombatPowerTable *param_1)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_1 != this) {
    Clear(this);
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar2 & 3) != 0) {
      if (((uVar2 & 1) != 0) && (lVar3 = (param_1->_impl_).player_uid_, lVar3 != 0)) {
        (this->_impl_).player_uid_ = lVar3;
      }
      if (((uVar2 & 2) != 0) && (fVar1 = (param_1->_impl_).combat_power_, fVar1 != 0.0)) {
        (this->_impl_).combat_power_ = fVar1;
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

// GetMetadata @ 14c24add0

Metadata * __thiscall
ds_game::SqlCombatPowerTable::GetMetadata
          (SqlCombatPowerTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SqlCombatPowerTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c24ae10

void __thiscall
ds_game::SqlCombatPowerTable::InternalSwap(SqlCombatPowerTable *this,SqlCombatPowerTable *param_1)

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
            (&(this->_impl_).player_uid_,&(this->_impl_).field_0x14,&(param_1->_impl_).player_uid_);
  return;
}

// `dynamic_atexit_destructor_for_'_SqlCombatPowerTable_default_instance_'' @ 150444290

void __cdecl ds_game::_dynamic_atexit_destructor_for___SqlCombatPowerTable_default_instance___(void)

{
  return;
}


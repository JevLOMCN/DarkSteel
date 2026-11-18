// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// `dynamic_initializer_for_'_SqlWeaponSkillSlotTable_default_instance_'' @ 14129c3e0

void __cdecl ds_game::_dynamic_initializer_for___SqlWeaponSkillSlotTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlWeaponSkillSlotTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129c400

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fgame_2fsql_5fweapon_5fskill_5fslot_5ftable_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c25e2c0

void __cdecl ds_game::SqlWeaponSkillSlotTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0x3f) != 0) {
    if (((uVar1 & 1) != 0) && (lVar3 = param_2[1]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[1]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar1 & 2) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
    }
    if (((uVar1 & 4) != 0) && (iVar2 = (int)param_2[2]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 & 8) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[2]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[2]._internal_metadata_.ptr_ + 4) = iVar2;
    }
    if (((uVar1 & 0x10) != 0) && (param_2[3]._padding_ != 0)) {
      param_1[3]._padding_ = param_2[3]._padding_;
    }
    if (((uVar1 & 0x20) != 0) && (iVar2 = (int)param_2[3]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[3]._internal_metadata_.ptr_ = iVar2;
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
    return;
  }
  return;
}

// Clear @ 14c25e360

void __thiscall ds_game::SqlWeaponSkillSlotTable::Clear(SqlWeaponSkillSlotTable *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x3f) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).weapon_base_id_ = 0;
    (this->_impl_).slot_index_ = 0;
    (this->_impl_).selected_skill_id_ = 0;
    (this->_impl_).ascend_wait_complete_id_ = 0;
    (this->_impl_).skill_level_ = 0;
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

// ByteSizeLong @ 14c25e390

ulong64 __thiscall ds_game::SqlWeaponSkillSlotTable::ByteSizeLong(SqlWeaponSkillSlotTable *this)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  __uint64 _Var6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  uVar4 = 0;
  if ((uVar1 & 0x3f) != 0) {
    if (((uVar1 & 1) != 0) && (lVar3 = (this->_impl_).player_uid_, lVar3 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar3);
    }
    if (((uVar1 & 2) != 0) && (lVar3 = (this->_impl_).weapon_base_id_, lVar3 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar3);
      uVar4 = uVar4 + uVar5;
    }
    if (((uVar1 & 4) != 0) && (iVar2 = (this->_impl_).slot_index_, iVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
      uVar4 = uVar4 + uVar5;
    }
    if (((uVar1 & 8) != 0) && (iVar2 = (this->_impl_).selected_skill_id_, iVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
      uVar4 = uVar4 + uVar5;
    }
    if (((uVar1 & 0x10) != 0) && (lVar3 = (this->_impl_).ascend_wait_complete_id_, lVar3 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar3);
      uVar4 = uVar4 + uVar5;
    }
    if (((uVar1 & 0x20) != 0) && (iVar2 = (this->_impl_).skill_level_, iVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
      uVar4 = uVar4 + uVar5;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar4,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c25e460

uchar * __thiscall
ds_game::SqlWeaponSkillSlotTable::_InternalSerialize
          (SqlWeaponSkillSlotTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  longlong lVar2;
  uchar *puVar3;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar2 = (this->_impl_).weapon_base_id_, lVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar1 = (this->_impl_).slot_index_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar1,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (iVar1 = (this->_impl_).selected_skill_id_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar1,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (iVar1 = (this->_impl_).skill_level_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<5>
                        (param_2,iVar1,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (lVar2 = (this->_impl_).ascend_wait_complete_id_, lVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<8>
                        (param_2,lVar2,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14c25e560

ClassData * __thiscall ds_game::SqlWeaponSkillSlotTable::GetClassData(SqlWeaponSkillSlotTable *this)

{
  return (ClassData *)&SqlWeaponSkillSlotTable_class_data_;
}

// PlacementNew_ @ 14c25e580

void * __cdecl
ds_game::SqlWeaponSkillSlotTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlWeaponSkillSlotTable_ds_game__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined4 *)((longlong)param_2 + 0x38) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c25e5b0

void * __thiscall
ds_game::SqlWeaponSkillSlotTable::_scalar_deleting_destructor_
          (SqlWeaponSkillSlotTable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SqlWeaponSkillSlotTable_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// SqlWeaponSkillSlotTable @ 14c25e600

SqlWeaponSkillSlotTable * __thiscall
ds_game::SqlWeaponSkillSlotTable::SqlWeaponSkillSlotTable
          (SqlWeaponSkillSlotTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlWeaponSkillSlotTable_ds_game__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).weapon_base_id_ = 0;
  (this->_impl_).slot_index_ = 0;
  (this->_impl_).selected_skill_id_ = 0;
  (this->_impl_).ascend_wait_complete_id_ = 0;
  (this->_impl_).skill_level_ = 0;
  return this;
}

// SqlWeaponSkillSlotTable @ 14c25e630

SqlWeaponSkillSlotTable * __thiscall
ds_game::SqlWeaponSkillSlotTable::SqlWeaponSkillSlotTable
          (SqlWeaponSkillSlotTable *this,Arena *param_1,SqlWeaponSkillSlotTable *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlWeaponSkillSlotTable_ds_game__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).weapon_base_id_ = (param_2->_impl_).weapon_base_id_;
  (this->_impl_).slot_index_ = (param_2->_impl_).slot_index_;
  (this->_impl_).selected_skill_id_ = (param_2->_impl_).selected_skill_id_;
  (this->_impl_).ascend_wait_complete_id_ = (param_2->_impl_).ascend_wait_complete_id_;
  (this->_impl_).skill_level_ = (param_2->_impl_).skill_level_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// ~SqlWeaponSkillSlotTable @ 14c25e6b0

void __thiscall
ds_game::SqlWeaponSkillSlotTable::~SqlWeaponSkillSlotTable(SqlWeaponSkillSlotTable *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7SqlWeaponSkillSlotTable_ds_game__6B_;
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

// CopyFrom @ 14c25e6d0

void __thiscall
ds_game::SqlWeaponSkillSlotTable::CopyFrom
          (SqlWeaponSkillSlotTable *this,SqlWeaponSkillSlotTable *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 0x3f) != 0) {
      if (((uVar1 & 1) != 0) && (lVar3 = (param_1->_impl_).player_uid_, lVar3 != 0)) {
        (this->_impl_).player_uid_ = lVar3;
      }
      if (((uVar1 & 2) != 0) && (lVar3 = (param_1->_impl_).weapon_base_id_, lVar3 != 0)) {
        (this->_impl_).weapon_base_id_ = lVar3;
      }
      if (((uVar1 & 4) != 0) && (iVar2 = (param_1->_impl_).slot_index_, iVar2 != 0)) {
        (this->_impl_).slot_index_ = iVar2;
      }
      if (((uVar1 & 8) != 0) && (iVar2 = (param_1->_impl_).selected_skill_id_, iVar2 != 0)) {
        (this->_impl_).selected_skill_id_ = iVar2;
      }
      if (((uVar1 & 0x10) != 0) && (lVar3 = (param_1->_impl_).ascend_wait_complete_id_, lVar3 != 0))
      {
        (this->_impl_).ascend_wait_complete_id_ = lVar3;
      }
      if (((uVar1 & 0x20) != 0) && (iVar2 = (param_1->_impl_).skill_level_, iVar2 != 0)) {
        (this->_impl_).skill_level_ = iVar2;
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

// GetMetadata @ 14c25e790

Metadata * __thiscall
ds_game::SqlWeaponSkillSlotTable::GetMetadata
          (SqlWeaponSkillSlotTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&SqlWeaponSkillSlotTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c25e7d0

void __thiscall
ds_game::SqlWeaponSkillSlotTable::InternalSwap
          (SqlWeaponSkillSlotTable *this,SqlWeaponSkillSlotTable *param_1)

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
            (&(this->_impl_).player_uid_,&(this->_impl_).field_0x2c,&(param_1->_impl_).player_uid_);
  return;
}

// `dynamic_atexit_destructor_for_'_SqlWeaponSkillSlotTable_default_instance_'' @ 1504445a0

void __cdecl
ds_game::_dynamic_atexit_destructor_for___SqlWeaponSkillSlotTable_default_instance___(void)

{
  return;
}


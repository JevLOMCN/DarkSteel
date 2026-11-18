// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// `dynamic_initializer_for_'_SqlPositionTable_default_instance_'' @ 14129bee0

void __cdecl ds_game::_dynamic_initializer_for___SqlPositionTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlPositionTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129bf00

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_ds_5fgame_2fsql_5fposition_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c258370

void __cdecl ds_game::SqlPositionTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  int iVar1;
  uint uVar2;
  MessageLite *pMVar3;
  MessageLite *pMVar4;
  longlong lVar5;
  void *pvVar6;
  Arena *pAVar7;
  
  pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
  }
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 0x3f) != 0) {
    if ((uVar2 & 1) != 0) {
      pMVar3 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
      pMVar4 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
      if (pMVar3 == (MessageLite *)0x0) {
        pvVar6 = google::protobuf::Arena::CopyConstruct<Vector>(pAVar7,pMVar4);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar6;
      }
      else {
        Vector::MergeImpl(pMVar3,pMVar4);
      }
    }
    if ((uVar2 & 2) != 0) {
      if ((MessageLite *)param_1[2]._padding_ == (MessageLite *)0x0) {
        pvVar6 = google::protobuf::Arena::CopyConstruct<Vector>
                           (pAVar7,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar6;
      }
      else {
        Vector::MergeImpl((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
      }
    }
    if (((uVar2 & 4) != 0) && (lVar5 = param_2[2]._internal_metadata_.ptr_, lVar5 != 0)) {
      param_1[2]._internal_metadata_.ptr_ = lVar5;
    }
    if (((uVar2 & 8) != 0) && (iVar1 = (int)param_2[3]._padding_, iVar1 != 0)) {
      *(int *)&param_1[3]._padding_ = iVar1;
    }
    if (((uVar2 & 0x10) != 0) && (iVar1 = *(int *)((longlong)&param_2[3]._padding_ + 4), iVar1 != 0)
       ) {
      *(int *)((longlong)&param_1[3]._padding_ + 4) = iVar1;
    }
    if (((uVar2 & 0x20) != 0) && (iVar1 = (int)param_2[3]._internal_metadata_.ptr_, iVar1 != 0)) {
      *(int *)&param_1[3]._internal_metadata_.ptr_ = iVar1;
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

// Clear @ 14c258480

void __thiscall ds_game::SqlPositionTable::Clear(SqlPositionTable *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      Vector::Clear((this->_impl_).position_);
    }
    if ((uVar1 & 2) != 0) {
      Vector::Clear((this->_impl_).relative_position_);
    }
  }
  if ((uVar1 & 0x3c) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).island_id_ = 0;
    (this->_impl_).direction_ = 0.0;
    (this->_impl_).transport_spawn_id_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c2584f0

ulong64 __thiscall ds_game::SqlPositionTable::ByteSizeLong(SqlPositionTable *this)

{
  uint uVar1;
  longlong lVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  __uint64 _Var7;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var7 = 0;
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = Vector::ByteSizeLong((this->_impl_).position_);
      uVar5 = (uint)uVar3 | 1;
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
      _Var7 = (ulonglong)(iVar6 * -9 + 0x160U >> 6) + 1 + uVar3;
    }
    if ((uVar1 & 2) != 0) {
      uVar3 = Vector::ByteSizeLong((this->_impl_).relative_position_);
      uVar5 = (uint)uVar3 | 1;
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
      _Var7 = _Var7 + 1 + (iVar6 * -9 + 0x160U >> 6) + uVar3;
    }
    if (((uVar1 & 4) != 0) && (uVar4 = (this->_impl_).player_uid_, uVar4 != 0)) {
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
      _Var7 = _Var7 + (iVar6 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 8) != 0) && (iVar6 = (this->_impl_).island_id_, iVar6 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar3;
    }
    if (((uVar1 & 0x10) != 0) && ((this->_impl_).direction_ != 0.0)) {
      _Var7 = _Var7 + 5;
    }
    if (((uVar1 & 0x20) != 0) && (iVar6 = (this->_impl_).transport_spawn_id_, iVar6 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar3;
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c258660

uchar * __thiscall
ds_game::SqlPositionTable::_InternalSerialize
          (SqlPositionTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  float fVar1;
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
     (iVar2 = (this->_impl_).island_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (4,(MessageLite *)(this->_impl_).position_,
                         (int)(((this->_impl_).position_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar3 & 0x10) != 0) && ((this->_impl_).direction_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    fVar1 = (this->_impl_).direction_;
    *param_1 = '-';
    *(float *)(param_1 + 1) = fVar1;
    param_1 = param_1 + 5;
  }
  if (((uVar3 & 0x20) != 0) && (iVar2 = (this->_impl_).transport_spawn_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<6>
                        (param_2,iVar2,param_1);
  }
  if ((uVar3 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (7,(MessageLite *)(this->_impl_).relative_position_,
                         (int)(((this->_impl_).relative_position_)->_impl_)._cached_size_.atom_,
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

// GetClassData @ 14c258790

ClassData * __thiscall ds_game::SqlPositionTable::GetClassData(SqlPositionTable *this)

{
  return (ClassData *)&SqlPositionTable_class_data_;
}

// PlacementNew_ @ 14c2587b0

void * __cdecl ds_game::SqlPositionTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlPositionTable_ds_game__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined4 *)((longlong)param_2 + 0x38) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c2587e0

void * __thiscall
ds_game::SqlPositionTable::_scalar_deleting_destructor_(SqlPositionTable *this,uint param_1)

{
  ~SqlPositionTable(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// SqlPositionTable @ 14c258820

SqlPositionTable * __thiscall
ds_game::SqlPositionTable::SqlPositionTable(SqlPositionTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlPositionTable_ds_game__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).position_ = (Vector *)0x0;
  (this->_impl_).relative_position_ = (Vector *)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).island_id_ = 0;
  (this->_impl_).direction_ = 0.0;
  (this->_impl_).transport_spawn_id_ = 0;
  return this;
}

// SqlPositionTable @ 14c258850

SqlPositionTable * __thiscall
ds_game::SqlPositionTable::SqlPositionTable
          (SqlPositionTable *this,Arena *param_1,SqlPositionTable *param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  Vector *pVVar4;
  Vector *pVVar5;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlPositionTable_ds_game__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pVVar5 = (Vector *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  pVVar4 = pVVar5;
  if ((uVar1 & 1) != 0) {
    pVVar4 = google::protobuf::Arena::CopyConstruct<Vector>(param_1,(param_2->_impl_).position_);
  }
  (this->_impl_).position_ = pVVar4;
  if ((uVar1 & 2) != 0) {
    pVVar5 = google::protobuf::Arena::CopyConstruct<Vector>
                       (param_1,(param_2->_impl_).relative_position_);
  }
  (this->_impl_).relative_position_ = pVVar5;
  iVar2 = (param_2->_impl_).island_id_;
  fVar3 = (param_2->_impl_).direction_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).island_id_ = iVar2;
  (this->_impl_).direction_ = fVar3;
  (this->_impl_).transport_spawn_id_ = (param_2->_impl_).transport_spawn_id_;
  return this;
}

// ~SqlPositionTable @ 14c258920

void __thiscall ds_game::SqlPositionTable::~SqlPositionTable(SqlPositionTable *this)

{
  Vector *pVVar1;
  
  this->_padding_ = (longlong)&___7SqlPositionTable_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  pVVar1 = (this->_impl_).position_;
  if (pVVar1 != (Vector *)0x0) {
    Vector::~Vector(pVVar1);
    ::operator_delete(pVVar1,0x30);
  }
  pVVar1 = (this->_impl_).relative_position_;
  if (pVVar1 != (Vector *)0x0) {
    Vector::~Vector(pVVar1);
    ::operator_delete(pVVar1,0x30);
  }
  return;
}

// CopyFrom @ 14c2589a0

void __thiscall
ds_game::SqlPositionTable::CopyFrom(SqlPositionTable *this,SqlPositionTable *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c2589e0

Metadata * __thiscall
ds_game::SqlPositionTable::GetMetadata(SqlPositionTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SqlPositionTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c258a20

void __thiscall
ds_game::SqlPositionTable::InternalSwap(SqlPositionTable *this,SqlPositionTable *param_1)

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
            (&(this->_impl_).position_,&(this->_impl_).field_0x2c,&(param_1->_impl_).position_);
  return;
}

// clear_position @ 14c258a60

void __thiscall ds_game::SqlPositionTable::clear_position(SqlPositionTable *this)

{
  Vector *this_00;
  
  this_00 = (this->_impl_).position_;
  if (this_00 != (Vector *)0x0) {
    Vector::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_relative_position @ 14c258a90

void __thiscall ds_game::SqlPositionTable::clear_relative_position(SqlPositionTable *this)

{
  Vector *this_00;
  
  this_00 = (this->_impl_).relative_position_;
  if (this_00 != (Vector *)0x0) {
    Vector::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// `dynamic_atexit_destructor_for_'_SqlPositionTable_default_instance_'' @ 1504444a0

void __cdecl ds_game::_dynamic_atexit_destructor_for___SqlPositionTable_default_instance___(void)

{
  return;
}


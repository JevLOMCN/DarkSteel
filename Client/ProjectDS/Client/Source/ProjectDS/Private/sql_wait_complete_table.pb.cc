// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// `dynamic_initializer_for_'_SqlWaitCompleteTable_default_instance_'' @ 14129c340

void __cdecl ds_game::_dynamic_initializer_for___SqlWaitCompleteTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlWaitCompleteTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129c360

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fgame_2fsql_5fwait_5fcomplete_5ftable_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c25d610

void __cdecl ds_game::SqlWaitCompleteTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  if ((char)uVar1 != '\0') {
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
    if (((uVar1 & 4) != 0) && (lVar5 = param_2[2]._internal_metadata_.ptr_, lVar5 != 0)) {
      param_1[2]._internal_metadata_.ptr_ = lVar5;
    }
    if (((uVar1 & 8) != 0) && (param_2[3]._padding_ != 0)) {
      param_1[3]._padding_ = param_2[3]._padding_;
    }
    if (((uVar1 & 0x10) != 0) && (lVar5 = param_2[3]._internal_metadata_.ptr_, lVar5 != 0)) {
      param_1[3]._internal_metadata_.ptr_ = lVar5;
    }
    if (((uVar1 & 0x20) != 0) && (param_2[4]._padding_ != 0)) {
      param_1[4]._padding_ = param_2[4]._padding_;
    }
    if (((uVar1 & 0x40) != 0) && (lVar5 = param_2[4]._internal_metadata_.ptr_, lVar5 != 0)) {
      param_1[4]._internal_metadata_.ptr_ = lVar5;
    }
    if (((char)uVar1 < '\0') && (iVar2 = (int)param_2[5]._padding_, iVar2 != 0)) {
      *(int *)&param_1[5]._padding_ = iVar2;
    }
  }
  if (((uVar1 >> 8 & 1) != 0) && (iVar2 = *(int *)((longlong)&param_2[5]._padding_ + 4), iVar2 != 0)
     ) {
    *(int *)((longlong)&param_1[5]._padding_ + 4) = iVar2;
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

// Clear @ 14c25d750

void __thiscall ds_game::SqlWaitCompleteTable::Clear(SqlWaitCompleteTable *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).begin_dt_);
    }
    if ((uVar1 & 2) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).complete_dt_);
    }
  }
  if ((uVar1 & 0xfc) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).wait_complete_uid_ = 0;
    (this->_impl_).param1_ = 0;
    (this->_impl_).param2_ = 0;
    (this->_impl_).param3_ = 0;
    (this->_impl_).wait_complete_type_ = 0;
  }
  (this->_impl_).accel_seconds_ = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c25d7d0

ulong64 __thiscall ds_game::SqlWaitCompleteTable::ByteSizeLong(SqlWaitCompleteTable *this)

{
  uint uVar1;
  longlong lVar2;
  __uint64 _Var3;
  __uint64 _Var4;
  ulong64 uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  
  _Var3 = 0;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((char)uVar1 != '\0') {
    if ((uVar1 & 1) != 0) {
      _Var3 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).begin_dt_);
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
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).complete_dt_);
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
    if (((uVar1 & 4) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 & 8) != 0) && (lVar2 = (this->_impl_).wait_complete_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 & 0x10) != 0) && (lVar2 = (this->_impl_).param1_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 & 0x20) != 0) && (lVar2 = (this->_impl_).param2_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 & 0x40) != 0) && (lVar2 = (this->_impl_).param3_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var3 = _Var3 + uVar5;
    }
    if (((char)uVar1 < '\0') && (iVar8 = (this->_impl_).wait_complete_type_, iVar8 != 0)) {
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
      _Var3 = _Var3 + 1 + (ulonglong)(iVar8 * -9 + 0x280U >> 6);
    }
  }
  if (((uVar1 >> 8 & 1) != 0) && (iVar8 = (this->_impl_).accel_seconds_, iVar8 != 0)) {
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
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var3,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c25d9b0

uchar * __thiscall
ds_game::SqlWaitCompleteTable::_InternalSerialize
          (SqlWaitCompleteTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uchar *puVar5;
  byte bVar6;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (lVar3 = (this->_impl_).player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (lVar3 = (this->_impl_).wait_complete_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x80) != 0) &&
     ((this->_impl_).wait_complete_type_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (ulonglong)(this->_impl_).wait_complete_type_;
    *param_1 = 0x18;
    while( true ) {
      param_1 = param_1 + 1;
      bVar6 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_1 = bVar6 | 0x80;
    }
    *param_1 = bVar6;
    param_1 = param_1 + 1;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (lVar3 = (this->_impl_).param1_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<4>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (lVar3 = (this->_impl_).param2_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<5>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x40) != 0) &&
     (lVar3 = (this->_impl_).param3_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<6>
                        (param_2,lVar3,param_1);
  }
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (7,(MessageLite *)(this->_impl_).begin_dt_,
                         (int)(((this->_impl_).begin_dt_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((uVar1 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (8,(MessageLite *)(this->_impl_).complete_dt_,
                         (int)(((this->_impl_).complete_dt_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar1 >> 8 & 1) != 0) && (iVar2 = (this->_impl_).accel_seconds_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<9>
                        (param_2,iVar2,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar5;
  }
  return param_1;
}

// GetClassData @ 14c25db70

ClassData * __thiscall ds_game::SqlWaitCompleteTable::GetClassData(SqlWaitCompleteTable *this)

{
  return (ClassData *)&SqlWaitCompleteTable_class_data_;
}

// PlacementNew_ @ 14c25db90

void * __cdecl
ds_game::SqlWaitCompleteTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlWaitCompleteTable_ds_game__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c25dbd0

void * __thiscall
ds_game::SqlWaitCompleteTable::_scalar_deleting_destructor_(SqlWaitCompleteTable *this,uint param_1)

{
  ~SqlWaitCompleteTable(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// SqlWaitCompleteTable @ 14c25dc10

SqlWaitCompleteTable * __thiscall
ds_game::SqlWaitCompleteTable::SqlWaitCompleteTable(SqlWaitCompleteTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlWaitCompleteTable_ds_game__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).begin_dt_ = (Timestamp *)0x0;
  (this->_impl_).complete_dt_ = (Timestamp *)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).wait_complete_uid_ = 0;
  (this->_impl_).param1_ = 0;
  (this->_impl_).param2_ = 0;
  (this->_impl_).param3_ = 0;
  (this->_impl_).wait_complete_type_ = 0;
  (this->_impl_).accel_seconds_ = 0;
  return this;
}

// SqlWaitCompleteTable @ 14c25dc50

SqlWaitCompleteTable * __thiscall
ds_game::SqlWaitCompleteTable::SqlWaitCompleteTable
          (SqlWaitCompleteTable *this,Arena *param_1,SqlWaitCompleteTable *param_2)

{
  uint uVar1;
  long64 lVar2;
  int iVar3;
  int iVar4;
  Timestamp *pTVar5;
  Timestamp *pTVar6;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlWaitCompleteTable_ds_game__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pTVar6 = (Timestamp *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  pTVar5 = pTVar6;
  if ((uVar1 & 1) != 0) {
    pTVar5 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).begin_dt_);
  }
  (this->_impl_).begin_dt_ = pTVar5;
  if ((uVar1 & 2) != 0) {
    pTVar6 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).complete_dt_);
  }
  (this->_impl_).complete_dt_ = pTVar6;
  lVar2 = (param_2->_impl_).wait_complete_uid_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).wait_complete_uid_ = lVar2;
  lVar2 = (param_2->_impl_).param2_;
  (this->_impl_).param1_ = (param_2->_impl_).param1_;
  (this->_impl_).param2_ = lVar2;
  iVar3 = (param_2->_impl_).wait_complete_type_;
  iVar4 = (param_2->_impl_).accel_seconds_;
  (this->_impl_).param3_ = (param_2->_impl_).param3_;
  (this->_impl_).wait_complete_type_ = iVar3;
  (this->_impl_).accel_seconds_ = iVar4;
  return this;
}

// ~SqlWaitCompleteTable @ 14c25dd20

void __thiscall ds_game::SqlWaitCompleteTable::~SqlWaitCompleteTable(SqlWaitCompleteTable *this)

{
  Timestamp *pTVar1;
  
  this->_padding_ = (longlong)&___7SqlWaitCompleteTable_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  pTVar1 = (this->_impl_).begin_dt_;
  if (pTVar1 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(pTVar1);
    ::operator_delete(pTVar1,0x28);
  }
  pTVar1 = (this->_impl_).complete_dt_;
  if (pTVar1 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(pTVar1);
    ::operator_delete(pTVar1,0x28);
  }
  return;
}

// CopyFrom @ 14c25dda0

void __thiscall
ds_game::SqlWaitCompleteTable::CopyFrom(SqlWaitCompleteTable *this,SqlWaitCompleteTable *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c25dde0

Metadata * __thiscall
ds_game::SqlWaitCompleteTable::GetMetadata
          (SqlWaitCompleteTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SqlWaitCompleteTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c25de20

void __thiscall
ds_game::SqlWaitCompleteTable::InternalSwap
          (SqlWaitCompleteTable *this,SqlWaitCompleteTable *param_1)

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
            (&(this->_impl_).begin_dt_,this + 1,&(param_1->_impl_).begin_dt_);
  return;
}

// clear_begin_dt @ 14c25de60

void __thiscall ds_game::SqlWaitCompleteTable::clear_begin_dt(SqlWaitCompleteTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).begin_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_complete_dt @ 14c25de90

void __thiscall ds_game::SqlWaitCompleteTable::clear_complete_dt(SqlWaitCompleteTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).complete_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// `dynamic_atexit_destructor_for_'_SqlWaitCompleteTable_default_instance_'' @ 150444580

void __cdecl
ds_game::_dynamic_atexit_destructor_for___SqlWaitCompleteTable_default_instance___(void)

{
  return;
}


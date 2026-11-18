// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// `dynamic_initializer_for_'_SqlInstanceQuestTable_default_instance_'' @ 14129b760

void __cdecl ds_game::_dynamic_initializer_for___SqlInstanceQuestTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlInstanceQuestTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129b780

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fgame_2fsql_5finstance_5fquest_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c24e840

void __cdecl ds_game::SqlInstanceQuestTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  Arena *pAVar5;
  
  pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  google::protobuf::RepeatedField<int>::MergeFrom
            ((RepeatedField<int> *)&param_1[1]._internal_metadata_,
             (RepeatedField<int> *)&param_2[1]._internal_metadata_);
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      if ((MessageLite *)param_1[3]._padding_ == (MessageLite *)0x0) {
        pvVar4 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                           (pAVar5,(MessageLite *)param_2[3]._padding_);
        param_1[3]._padding_ = (longlong)pvVar4;
      }
      else {
        google::protobuf::Timestamp::MergeImpl
                  ((MessageLite *)param_1[3]._padding_,(MessageLite *)param_2[3]._padding_);
      }
    }
    if (((uVar1 & 2) != 0) && (lVar3 = param_2[3]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[3]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar1 & 4) != 0) && (iVar2 = (int)param_2[4]._padding_, iVar2 != 0)) {
      *(int *)&param_1[4]._padding_ = iVar2;
    }
    if (((uVar1 & 8) != 0) && (iVar2 = *(int *)((longlong)&param_2[4]._padding_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[4]._padding_ + 4) = iVar2;
    }
    if (((uVar1 & 0x10) != 0) && (lVar3 = param_2[4]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[4]._internal_metadata_.ptr_ = lVar3;
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

// Clear @ 14c24e930

void __thiscall ds_game::SqlInstanceQuestTable::Clear(SqlInstanceQuestTable *this)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (this->_impl_).objective_count_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar2 & 4) == 0) {
    (this->_impl_).objective_count_.soo_rep_.field0_0x0.long_rep.elements_int =
         uVar2 & 0xfffffffffffffff8;
  }
  else {
    (this->_impl_).objective_count_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    google::protobuf::Timestamp::Clear((this->_impl_).limit_dt_);
  }
  if ((uVar1 & 0x1e) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).quest_id_ = 0;
    (this->_impl_).quest_state_ = 0;
    (this->_impl_).instance_quest_uid_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c24e9a0

ulong64 __thiscall ds_game::SqlInstanceQuestTable::ByteSizeLong(SqlInstanceQuestTable *this)

{
  uint uVar1;
  longlong lVar2;
  __uint64 _Var3;
  __uint64 _Var4;
  ulong64 uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  
  _Var3 = google::protobuf::internal::WireFormatLite::Int32SizeWithPackedTagSize
                    (&(this->_impl_).objective_count_,1,
                     &(this->_impl_)._objective_count_cached_byte_size_);
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).limit_dt_);
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
    if (((uVar1 & 2) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 & 4) != 0) && (iVar8 = (this->_impl_).quest_id_, iVar8 != 0)) {
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
    if (((uVar1 & 8) != 0) && (iVar8 = (this->_impl_).quest_state_, iVar8 != 0)) {
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
    if (((uVar1 & 0x10) != 0) && (lVar2 = (this->_impl_).instance_quest_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var3 = _Var3 + uVar5;
    }
  }
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var3,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c24eb10

uchar * __thiscall
ds_game::SqlInstanceQuestTable::_InternalSerialize
          (SqlInstanceQuestTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int *piVar5;
  uchar *puVar6;
  byte bVar7;
  atomic<int> aVar8;
  uint uVar9;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar3 = (this->_impl_).player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar2 = (this->_impl_).quest_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) && ((this->_impl_).quest_state_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (ulonglong)(this->_impl_).quest_state_;
    *param_1 = 0x20;
    while( true ) {
      param_1 = param_1 + 1;
      bVar7 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_1 = bVar7 | 0x80;
    }
    *param_1 = bVar7;
    param_1 = param_1 + 1;
  }
  aVar8 = (this->_impl_)._objective_count_cached_byte_size_.atom_;
  if (0 < (int)aVar8) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    *param_1 = 0x2a;
    while( true ) {
      param_1 = param_1 + 1;
      bVar7 = aVar8._0_1_;
      if ((uint)aVar8 < 0x80) break;
      aVar8 = (atomic<int>)((uint)aVar8 >> 7);
      *param_1 = bVar7 | 0x80;
    }
    *param_1 = bVar7;
    param_1 = param_1 + 1;
    uVar4 = (this->_impl_).objective_count_.soo_rep_.field0_0x0.long_rep.elements_int;
    piVar5 = (int *)(uVar4 & 0xfffffffffffffff8);
    if ((uVar4 & 4) == 0) {
      uVar9 = (uint)uVar4 & 3;
      piVar5 = &(this->_impl_).objective_count_.soo_rep_.field0_0x0.long_rep.size;
    }
    else {
      uVar9 = (this->_impl_).objective_count_.soo_rep_.field0_0x0.long_rep.size;
    }
    piVar1 = piVar5 + (int)uVar9;
    do {
      if (param_2->end_ <= param_1) {
        param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
      }
      iVar2 = *piVar5;
      piVar5 = piVar5 + 1;
      for (uVar4 = (ulonglong)iVar2; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
        *param_1 = (byte)uVar4 | 0x80;
        param_1 = param_1 + 1;
      }
      *param_1 = (byte)uVar4;
      param_1 = param_1 + 1;
    } while (piVar5 < piVar1);
  }
  uVar9 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar9 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (7,(MessageLite *)(this->_impl_).limit_dt_,
                         (int)(((this->_impl_).limit_dt_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar9 & 0x10) != 0) && (lVar3 = (this->_impl_).instance_quest_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<8>
                        (param_2,lVar3,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar6 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar6;
  }
  return param_1;
}

// GetClassData @ 14c24ed10

ClassData * __thiscall ds_game::SqlInstanceQuestTable::GetClassData(SqlInstanceQuestTable *this)

{
  return (ClassData *)&SqlInstanceQuestTable_class_data_;
}

// PlacementNew_ @ 14c24ed30

void * __cdecl
ds_game::SqlInstanceQuestTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlInstanceQuestTable_ds_game__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(Arena **)((longlong)param_2 + 0x18) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c24ed70

void * __thiscall
ds_game::SqlInstanceQuestTable::_scalar_deleting_destructor_
          (SqlInstanceQuestTable *this,uint param_1)

{
  ~SqlInstanceQuestTable(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// SqlInstanceQuestTable @ 14c24edb0

SqlInstanceQuestTable * __thiscall
ds_game::SqlInstanceQuestTable::SqlInstanceQuestTable(SqlInstanceQuestTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlInstanceQuestTable_ds_game__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).objective_count_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->_impl_).objective_count_.soo_rep_.field0_0x0 + 8) = 0;
  (this->_impl_)._objective_count_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).limit_dt_ = (Timestamp *)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).quest_id_ = 0;
  (this->_impl_).quest_state_ = 0;
  (this->_impl_).instance_quest_uid_ = 0;
  return this;
}

// SqlInstanceQuestTable @ 14c24edf0

SqlInstanceQuestTable * __thiscall
ds_game::SqlInstanceQuestTable::SqlInstanceQuestTable
          (SqlInstanceQuestTable *this,Arena *param_1,SqlInstanceQuestTable *param_2)

{
  int iVar1;
  int iVar2;
  Timestamp *pTVar3;
  InternalVisibility local_res8;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlInstanceQuestTable_ds_game__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pTVar3 = (Timestamp *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<int>::RepeatedField<int>
            (&(this->_impl_).objective_count_,local_res8,param_1,&(param_2->_impl_).objective_count_
            );
  (this->_impl_)._objective_count_cached_byte_size_.atom_ = (atomic<int>)0x0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pTVar3 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).limit_dt_);
  }
  (this->_impl_).limit_dt_ = pTVar3;
  iVar1 = (param_2->_impl_).quest_id_;
  iVar2 = (param_2->_impl_).quest_state_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).quest_id_ = iVar1;
  (this->_impl_).quest_state_ = iVar2;
  (this->_impl_).instance_quest_uid_ = (param_2->_impl_).instance_quest_uid_;
  return this;
}

// ~SqlInstanceQuestTable @ 14c24eeb0

void __thiscall ds_game::SqlInstanceQuestTable::~SqlInstanceQuestTable(SqlInstanceQuestTable *this)

{
  Timestamp *this_00;
  ulonglong uVar1;
  
  this->_padding_ = (longlong)&___7SqlInstanceQuestTable_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).limit_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
  }
  uVar1 = (this->_impl_).objective_count_.soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)
                      (this->_impl_).objective_count_.soo_rep_.field0_0x0.long_rep.capacity * 4 + 8)
    ;
  }
  return;
}

// CopyFrom @ 14c24ef30

void __thiscall
ds_game::SqlInstanceQuestTable::CopyFrom(SqlInstanceQuestTable *this,SqlInstanceQuestTable *param_1)

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
    google::protobuf::RepeatedField<int>::MergeFrom
              (&(this->_impl_).objective_count_,&(param_1->_impl_).objective_count_);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 0x1f) != 0) {
      if ((uVar1 & 1) != 0) {
        pTVar5 = (this->_impl_).limit_dt_;
        pTVar3 = (param_1->_impl_).limit_dt_;
        if (pTVar5 == (Timestamp *)0x0) {
          pTVar5 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                             (pAVar6,pTVar3);
          (this->_impl_).limit_dt_ = pTVar5;
        }
        else {
          google::protobuf::Timestamp::MergeImpl((MessageLite *)pTVar5,(MessageLite *)pTVar3);
        }
      }
      if (((uVar1 & 2) != 0) && (lVar4 = (param_1->_impl_).player_uid_, lVar4 != 0)) {
        (this->_impl_).player_uid_ = lVar4;
      }
      if (((uVar1 & 4) != 0) && (iVar2 = (param_1->_impl_).quest_id_, iVar2 != 0)) {
        (this->_impl_).quest_id_ = iVar2;
      }
      if (((uVar1 & 8) != 0) && (iVar2 = (param_1->_impl_).quest_state_, iVar2 != 0)) {
        (this->_impl_).quest_state_ = iVar2;
      }
      if (((uVar1 & 0x10) != 0) && (lVar4 = (param_1->_impl_).instance_quest_uid_, lVar4 != 0)) {
        (this->_impl_).instance_quest_uid_ = lVar4;
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

// GetMetadata @ 14c24f030

Metadata * __thiscall
ds_game::SqlInstanceQuestTable::GetMetadata
          (SqlInstanceQuestTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SqlInstanceQuestTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c24f070

void __thiscall
ds_game::SqlInstanceQuestTable::InternalSwap
          (SqlInstanceQuestTable *this,SqlInstanceQuestTable *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).objective_count_,(char *)&(param_1->_impl_).objective_count_);
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).limit_dt_,this + 1,&(param_1->_impl_).limit_dt_);
  return;
}

// clear_limit_dt @ 14c24f0d0

void __thiscall ds_game::SqlInstanceQuestTable::clear_limit_dt(SqlInstanceQuestTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).limit_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// `dynamic_atexit_destructor_for_'_SqlInstanceQuestTable_default_instance_'' @ 150444320

void __cdecl
ds_game::_dynamic_atexit_destructor_for___SqlInstanceQuestTable_default_instance___(void)

{
  return;
}


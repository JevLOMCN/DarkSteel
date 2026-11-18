// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// `dynamic_initializer_for_'_SqlPlayerConnectionDt_default_instance_'' @ 14129bcb0

void __cdecl ds_game::_dynamic_initializer_for___SqlPlayerConnectionDt_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlPlayerConnectionDt_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129bcd0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fgame_2fsql_5fplayer_5fconnection_5fdt_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c255f60

void __cdecl ds_game::SqlPlayerConnectionDt::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  MessageLite *pMVar3;
  longlong lVar4;
  void *pvVar5;
  Arena *pAVar6;
  
  pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      pMVar2 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
      pMVar3 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
      if (pMVar2 == (MessageLite *)0x0) {
        pvVar5 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>(pAVar6,pMVar3);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar5;
      }
      else {
        google::protobuf::Timestamp::MergeImpl(pMVar2,pMVar3);
      }
    }
    if ((uVar1 & 2) != 0) {
      if ((MessageLite *)param_1[2]._padding_ == (MessageLite *)0x0) {
        pvVar5 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                           (pAVar6,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar5;
      }
      else {
        google::protobuf::Timestamp::MergeImpl
                  ((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
      }
    }
    if (((uVar1 & 4) != 0) && (lVar4 = param_2[2]._internal_metadata_.ptr_, lVar4 != 0)) {
      param_1[2]._internal_metadata_.ptr_ = lVar4;
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

// Clear @ 14c256030

void __thiscall ds_game::SqlPlayerConnectionDt::Clear(SqlPlayerConnectionDt *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).login_dt_);
    }
    if ((uVar1 & 2) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).logout_dt_);
    }
  }
  (this->_impl_).player_uid_ = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c256090

ulong64 __thiscall ds_game::SqlPlayerConnectionDt::ByteSizeLong(SqlPlayerConnectionDt *this)

{
  uint uVar1;
  longlong lVar2;
  __uint64 _Var3;
  __uint64 _Var4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var3 = 0;
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      _Var3 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).login_dt_);
      uVar6 = (uint)_Var3 | 1;
      if (__isa_available < 5) {
        iVar7 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar7 = 0x1f - iVar7;
      }
      else {
        iVar7 = LZCOUNT(uVar6);
      }
      _Var3 = (ulonglong)(iVar7 * -9 + 0x160U >> 6) + 1 + _Var3;
    }
    if ((uVar1 & 2) != 0) {
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).logout_dt_);
      uVar6 = (uint)_Var4 | 1;
      if (__isa_available < 5) {
        iVar7 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar7 = 0x1f - iVar7;
      }
      else {
        iVar7 = LZCOUNT(uVar6);
      }
      _Var3 = _Var3 + 1 + (iVar7 * -9 + 0x160U >> 6) + _Var4;
    }
    if (((uVar1 & 4) != 0) && (uVar5 = (this->_impl_).player_uid_, uVar5 != 0)) {
      uVar5 = uVar5 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar7 = 0x3f - (int)lVar2;
      }
      else {
        iVar7 = (int)LZCOUNT(uVar5);
      }
      _Var3 = _Var3 + (iVar7 * -9 + 0x2c0U >> 6);
    }
  }
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var3,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c2561d0

uchar * __thiscall
ds_game::SqlPlayerConnectionDt::_InternalSerialize
          (SqlPlayerConnectionDt *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  longlong lVar2;
  uchar *puVar3;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar2,param_1);
  }
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (2,(MessageLite *)(this->_impl_).login_dt_,
                         (int)(((this->_impl_).login_dt_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((uVar1 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (3,(MessageLite *)(this->_impl_).logout_dt_,
                         (int)(((this->_impl_).logout_dt_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14c2562a0

ClassData * __thiscall ds_game::SqlPlayerConnectionDt::GetClassData(SqlPlayerConnectionDt *this)

{
  return (ClassData *)&SqlPlayerConnectionDt_class_data_;
}

// PlacementNew_ @ 14c2562c0

void * __cdecl
ds_game::SqlPlayerConnectionDt::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlPlayerConnectionDt_ds_game__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c2562f0

void * __thiscall
ds_game::SqlPlayerConnectionDt::_scalar_deleting_destructor_
          (SqlPlayerConnectionDt *this,uint param_1)

{
  ~SqlPlayerConnectionDt(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// SqlPlayerConnectionDt @ 14c256330

SqlPlayerConnectionDt * __thiscall
ds_game::SqlPlayerConnectionDt::SqlPlayerConnectionDt(SqlPlayerConnectionDt *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlPlayerConnectionDt_ds_game__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).login_dt_ = (Timestamp *)0x0;
  (this->_impl_).logout_dt_ = (Timestamp *)0x0;
  (this->_impl_).player_uid_ = 0;
  return this;
}

// SqlPlayerConnectionDt @ 14c256360

SqlPlayerConnectionDt * __thiscall
ds_game::SqlPlayerConnectionDt::SqlPlayerConnectionDt
          (SqlPlayerConnectionDt *this,Arena *param_1,SqlPlayerConnectionDt *param_2)

{
  uint uVar1;
  Timestamp *pTVar2;
  Timestamp *pTVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlPlayerConnectionDt_ds_game__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pTVar3 = (Timestamp *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  pTVar2 = pTVar3;
  if ((uVar1 & 1) != 0) {
    pTVar2 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).login_dt_);
  }
  (this->_impl_).login_dt_ = pTVar2;
  if ((uVar1 & 2) != 0) {
    pTVar3 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).logout_dt_);
  }
  (this->_impl_).logout_dt_ = pTVar3;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  return this;
}

// ~SqlPlayerConnectionDt @ 14c256420

void __thiscall ds_game::SqlPlayerConnectionDt::~SqlPlayerConnectionDt(SqlPlayerConnectionDt *this)

{
  Timestamp *pTVar1;
  
  this->_padding_ = (longlong)&___7SqlPlayerConnectionDt_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  pTVar1 = (this->_impl_).login_dt_;
  if (pTVar1 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(pTVar1);
    ::operator_delete(pTVar1,0x28);
  }
  pTVar1 = (this->_impl_).logout_dt_;
  if (pTVar1 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(pTVar1);
    ::operator_delete(pTVar1,0x28);
  }
  return;
}

// CopyFrom @ 14c2564a0

void __thiscall
ds_game::SqlPlayerConnectionDt::CopyFrom(SqlPlayerConnectionDt *this,SqlPlayerConnectionDt *param_1)

{
  uint uVar1;
  Timestamp *pTVar2;
  longlong lVar3;
  Timestamp *pTVar4;
  Arena *pAVar5;
  
  if (param_1 != this) {
    Clear(this);
    pAVar5 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 7) != 0) {
      if ((uVar1 & 1) != 0) {
        pTVar4 = (this->_impl_).login_dt_;
        pTVar2 = (param_1->_impl_).login_dt_;
        if (pTVar4 == (Timestamp *)0x0) {
          pTVar4 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                             (pAVar5,pTVar2);
          (this->_impl_).login_dt_ = pTVar4;
        }
        else {
          google::protobuf::Timestamp::MergeImpl((MessageLite *)pTVar4,(MessageLite *)pTVar2);
        }
      }
      if ((uVar1 & 2) != 0) {
        pTVar4 = (this->_impl_).logout_dt_;
        pTVar2 = (param_1->_impl_).logout_dt_;
        if (pTVar4 == (Timestamp *)0x0) {
          pTVar4 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                             (pAVar5,pTVar2);
          (this->_impl_).logout_dt_ = pTVar4;
        }
        else {
          google::protobuf::Timestamp::MergeImpl((MessageLite *)pTVar4,(MessageLite *)pTVar2);
        }
      }
      if (((uVar1 & 4) != 0) && (lVar3 = (param_1->_impl_).player_uid_, lVar3 != 0)) {
        (this->_impl_).player_uid_ = lVar3;
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

// GetMetadata @ 14c256580

Metadata * __thiscall
ds_game::SqlPlayerConnectionDt::GetMetadata
          (SqlPlayerConnectionDt *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SqlPlayerConnectionDt_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c2565c0

void __thiscall
ds_game::SqlPlayerConnectionDt::InternalSwap
          (SqlPlayerConnectionDt *this,SqlPlayerConnectionDt *param_1)

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
            (&(this->_impl_).login_dt_,this + 1,&(param_1->_impl_).login_dt_);
  return;
}

// clear_login_dt @ 14c256600

void __thiscall ds_game::SqlPlayerConnectionDt::clear_login_dt(SqlPlayerConnectionDt *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).login_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_logout_dt @ 14c256630

void __thiscall ds_game::SqlPlayerConnectionDt::clear_logout_dt(SqlPlayerConnectionDt *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).logout_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// `dynamic_atexit_destructor_for_'_SqlPlayerConnectionDt_default_instance_'' @ 150444430

void __cdecl
ds_game::_dynamic_atexit_destructor_for___SqlPlayerConnectionDt_default_instance___(void)

{
  return;
}


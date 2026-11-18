// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// `dynamic_initializer_for_'_EntityExpireTime_default_instance_'' @ 1412915a0

void __cdecl components::_dynamic_initializer_for___EntityExpireTime_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___EntityExpireTime_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 1412915c0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_components_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c138dd0

void __cdecl components::EntityExpireTime::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  MessageLite *pMVar3;
  void *pvVar4;
  Arena *pAVar5;
  
  pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 1) != 0) {
    pMVar2 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
    pMVar3 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
    if (pMVar2 == (MessageLite *)0x0) {
      pvVar4 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>(pAVar5,pMVar3);
      param_1[1]._internal_metadata_.ptr_ = (long64)pvVar4;
    }
    else {
      google::protobuf::Timestamp::MergeImpl(pMVar2,pMVar3);
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

// Clear @ 14c138e60

void __thiscall components::EntityExpireTime::Clear(EntityExpireTime *this)

{
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    google::protobuf::Timestamp::Clear((this->_impl_).when_);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c138ea0

ulong64 __thiscall components::EntityExpireTime::ByteSizeLong(EntityExpireTime *this)

{
  __uint64 _Var1;
  int iVar2;
  uint uVar3;
  
  _Var1 = 0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    _Var1 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).when_);
    uVar3 = (uint)_Var1 | 1;
    if (__isa_available < 5) {
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 0x1f - iVar2;
    }
    else {
      iVar2 = LZCOUNT(uVar3);
    }
    _Var1 = (ulonglong)(iVar2 * -9 + 0x160U >> 6) + 1 + _Var1;
  }
  _Var1 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var1,&(this->_impl_)._cached_size_);
  return _Var1;
}

// _InternalSerialize @ 14c138f10

uchar * __thiscall
components::EntityExpireTime::_InternalSerialize
          (EntityExpireTime *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uchar *puVar1;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).when_,
                         (int)(((this->_impl_).when_)->_impl_)._cached_size_.atom_,param_1,param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar1;
  }
  return param_1;
}

// GetClassData @ 14c138f80

ClassData * __thiscall components::EntityExpireTime::GetClassData(EntityExpireTime *this)

{
  return (ClassData *)&EntityExpireTime_class_data_;
}

// PlacementNew_ @ 14c138fa0

void * __cdecl
components::EntityExpireTime::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7EntityExpireTime_components__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c138fd0

void * __thiscall
components::EntityExpireTime::_scalar_deleting_destructor_(EntityExpireTime *this,uint param_1)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7EntityExpireTime_components__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).when_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// EntityExpireTime @ 14c139050

EntityExpireTime * __thiscall
components::EntityExpireTime::EntityExpireTime(EntityExpireTime *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7EntityExpireTime_components__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).when_ = (Timestamp *)0x0;
  return this;
}

// EntityExpireTime @ 14c139080

EntityExpireTime * __thiscall
components::EntityExpireTime::EntityExpireTime
          (EntityExpireTime *this,Arena *param_1,EntityExpireTime *param_2)

{
  Timestamp *pTVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7EntityExpireTime_components__6B_;
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
                       (param_1,(param_2->_impl_).when_);
  }
  (this->_impl_).when_ = pTVar1;
  return this;
}

// ~EntityExpireTime @ 14c139100

void __thiscall components::EntityExpireTime::~EntityExpireTime(EntityExpireTime *this)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7EntityExpireTime_components__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).when_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// CopyFrom @ 14c139150

void __thiscall
components::EntityExpireTime::CopyFrom(EntityExpireTime *this,EntityExpireTime *param_1)

{
  uint uVar1;
  Timestamp *pTVar2;
  Timestamp *pTVar3;
  Arena *pAVar4;
  
  if (param_1 != this) {
    Clear(this);
    pAVar4 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 1) != 0) {
      pTVar3 = (this->_impl_).when_;
      pTVar2 = (param_1->_impl_).when_;
      if (pTVar3 == (Timestamp *)0x0) {
        pTVar3 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>(pAVar4,pTVar2);
        (this->_impl_).when_ = pTVar3;
      }
      else {
        google::protobuf::Timestamp::MergeImpl((MessageLite *)pTVar3,(MessageLite *)pTVar2);
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

// GetMetadata @ 14c1391f0

Metadata * __thiscall
components::EntityExpireTime::GetMetadata(EntityExpireTime *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&EntityExpireTime_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c139230

void __thiscall
components::EntityExpireTime::InternalSwap(EntityExpireTime *this,EntityExpireTime *param_1)

{
  uint uVar1;
  longlong lVar2;
  Timestamp *pTVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pTVar3 = (this->_impl_).when_;
  (this->_impl_).when_ = (param_1->_impl_).when_;
  (param_1->_impl_).when_ = pTVar3;
  return;
}

// clear_when @ 14c139270

void __thiscall components::EntityExpireTime::clear_when(EntityExpireTime *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).when_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// `dynamic_atexit_destructor_for_'_EntityExpireTime_default_instance_'' @ 150441700

void __cdecl components::_dynamic_atexit_destructor_for___EntityExpireTime_default_instance___(void)

{
  return;
}


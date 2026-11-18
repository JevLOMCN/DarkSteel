// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// `dynamic_initializer_for_'_Warp_default_instance_'' @ 141299bc0

void __cdecl ds_proto::_dynamic_initializer_for___Warp_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___Warp_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 141299be0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_structs_5fwarp_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c2345d0

void __cdecl ds_proto::Warp::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  if ((uVar1 & 0x1f) != 0) {
    if ((uVar1 & 1) != 0) {
      pMVar3 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
      pMVar4 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
      if (pMVar3 == (MessageLite *)0x0) {
        pvVar5 = google::protobuf::Arena::CopyConstruct<Vector>(pAVar6,pMVar4);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar5;
      }
      else {
        Vector::MergeImpl(pMVar3,pMVar4);
      }
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (int)param_2[2]._padding_, iVar2 != 0)) {
      *(int *)&param_1[2]._padding_ = iVar2;
    }
    if (((uVar1 & 4) != 0) && (iVar2 = *(int *)((longlong)&param_2[2]._padding_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[2]._padding_ + 4) = iVar2;
    }
    if (((uVar1 & 8) != 0) && (iVar2 = (int)param_2[2]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 & 0x10) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[2]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[2]._internal_metadata_.ptr_ + 4) = iVar2;
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

// Clear @ 14c2346b0

void __thiscall ds_proto::Warp::Clear(Warp *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    Vector::Clear((this->_impl_).position_);
  }
  if ((uVar1 & 0x1e) != 0) {
    (this->_impl_).direction_ = 0.0;
    (this->_impl_).island_id_ = 0;
    (this->_impl_).warp_location_id_ = 0;
    (this->_impl_).warp_type_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c234700

ulong64 __thiscall ds_proto::Warp::ByteSizeLong(Warp *this)

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
  if ((uVar1 & 0x1f) != 0) {
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
    if (((uVar1 & 2) != 0) && ((this->_impl_).direction_ != 0.0)) {
      _Var7 = _Var7 + 5;
    }
    if (((uVar1 & 4) != 0) && (uVar5 = (this->_impl_).island_id_, uVar5 != 0)) {
      uVar5 = uVar5 | 1;
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
      _Var7 = _Var7 + (iVar6 * -9 + 0x1a0U >> 6);
    }
    if (((uVar1 & 8) != 0) && (iVar6 = (this->_impl_).warp_location_id_, iVar6 != 0)) {
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
      _Var7 = _Var7 + (iVar6 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 0x10) != 0) && (iVar6 = (this->_impl_).warp_type_, iVar6 != 0)) {
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
      _Var7 = _Var7 + 1 + (ulonglong)(iVar6 * -9 + 0x280U >> 6);
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c234860

uchar * __thiscall
ds_proto::Warp::_InternalSerialize(Warp *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  ulonglong uVar6;
  uchar *puVar7;
  uint uVar8;
  
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar2 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (2,(MessageLite *)(this->_impl_).position_,
                         (int)(((this->_impl_).position_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar2 & 2) != 0) && ((this->_impl_).direction_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    fVar1 = (this->_impl_).direction_;
    *param_1 = 0x1d;
    *(float *)(param_1 + 1) = fVar1;
    param_1 = param_1 + 5;
  }
  if (((uVar2 & 4) != 0) && ((this->_impl_).island_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar8 = (this->_impl_).island_id_;
    *param_1 = 0x20;
    while( true ) {
      pbVar4 = param_1 + 1;
      bVar5 = (byte)uVar8;
      if (uVar8 < 0x80) break;
      uVar8 = uVar8 >> 7;
      *pbVar4 = bVar5 | 0x80;
      param_1 = pbVar4;
    }
    *pbVar4 = bVar5;
    param_1 = param_1 + 2;
  }
  if (((uVar2 & 8) != 0) && (iVar3 = (this->_impl_).warp_location_id_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<5>
                        (param_2,iVar3,param_1);
  }
  if (((uVar2 & 0x10) != 0) && ((this->_impl_).warp_type_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar6 = (ulonglong)(this->_impl_).warp_type_;
    *param_1 = 0x30;
    while( true ) {
      param_1 = param_1 + 1;
      bVar5 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *param_1 = bVar5 | 0x80;
    }
    *param_1 = bVar5;
    param_1 = param_1 + 1;
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar7 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar7;
}

// GetClassData @ 14c2349d0

ClassData * __thiscall ds_proto::Warp::GetClassData(Warp *this)

{
  return (ClassData *)&Warp_class_data_;
}

// PlacementNew_ @ 14c2349f0

void * __cdecl ds_proto::Warp::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7Warp_ds_proto__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  return param_2;
}

// Warp @ 14c234a20

Warp * __thiscall ds_proto::Warp::Warp(Warp *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7Warp_ds_proto__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).position_ = (Vector *)0x0;
  (this->_impl_).direction_ = 0.0;
  (this->_impl_).island_id_ = 0;
  (this->_impl_).warp_location_id_ = 0;
  (this->_impl_).warp_type_ = 0;
  return this;
}

// Warp @ 14c234a50

Warp * __thiscall ds_proto::Warp::Warp(Warp *this,Arena *param_1,Warp *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  Vector *pVVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7Warp_ds_proto__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pVVar4 = (Vector *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pVVar4 = google::protobuf::Arena::CopyConstruct<Vector>(param_1,(param_2->_impl_).position_);
  }
  (this->_impl_).position_ = pVVar4;
  uVar1 = (param_2->_impl_).island_id_;
  iVar2 = (param_2->_impl_).warp_location_id_;
  iVar3 = (param_2->_impl_).warp_type_;
  (this->_impl_).direction_ = (param_2->_impl_).direction_;
  (this->_impl_).island_id_ = uVar1;
  (this->_impl_).warp_location_id_ = iVar2;
  (this->_impl_).warp_type_ = iVar3;
  return this;
}

// ~Warp @ 14c234ae0

void __thiscall ds_proto::Warp::~Warp(Warp *this)

{
  Vector *this_00;
  
  this->_padding_ = (longlong)&___7Warp_ds_proto__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).position_;
  if (this_00 != (Vector *)0x0) {
    Vector::~Vector(this_00);
    ::operator_delete(this_00,0x30);
    return;
  }
  return;
}

// CopyFrom @ 14c234b30

void __thiscall ds_proto::Warp::CopyFrom(Warp *this,Warp *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  Vector *pVVar5;
  Vector *pVVar6;
  Arena *pAVar7;
  
  if (param_1 != this) {
    Clear(this);
    pAVar7 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
    }
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar2 & 0x1f) != 0) {
      if ((uVar2 & 1) != 0) {
        pVVar6 = (this->_impl_).position_;
        pVVar5 = (param_1->_impl_).position_;
        if (pVVar6 == (Vector *)0x0) {
          pVVar6 = google::protobuf::Arena::CopyConstruct<Vector>(pAVar7,pVVar5);
          (this->_impl_).position_ = pVVar6;
        }
        else {
          Vector::MergeImpl((MessageLite *)pVVar6,(MessageLite *)pVVar5);
        }
      }
      if (((uVar2 & 2) != 0) && (fVar1 = (param_1->_impl_).direction_, fVar1 != 0.0)) {
        (this->_impl_).direction_ = fVar1;
      }
      if (((uVar2 & 4) != 0) && (uVar3 = (param_1->_impl_).island_id_, uVar3 != 0)) {
        (this->_impl_).island_id_ = uVar3;
      }
      if (((uVar2 & 8) != 0) && (iVar4 = (param_1->_impl_).warp_location_id_, iVar4 != 0)) {
        (this->_impl_).warp_location_id_ = iVar4;
      }
      if (((uVar2 & 0x10) != 0) && (iVar4 = (param_1->_impl_).warp_type_, iVar4 != 0)) {
        (this->_impl_).warp_type_ = iVar4;
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

// GetMetadata @ 14c234c20

Metadata * __thiscall ds_proto::Warp::GetMetadata(Warp *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&Warp_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c234c60

void __thiscall ds_proto::Warp::InternalSwap(Warp *this,Warp *param_1)

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
            (&(this->_impl_).position_,this + 1,&(param_1->_impl_).position_);
  return;
}

// clear_position @ 14c234ca0

void __thiscall ds_proto::Warp::clear_position(Warp *this)

{
  Vector *this_00;
  
  this_00 = (this->_impl_).position_;
  if (this_00 != (Vector *)0x0) {
    Vector::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// `dynamic_atexit_destructor_for_'_Warp_default_instance_'' @ 150443cd0

void __cdecl ds_proto::_dynamic_atexit_destructor_for___Warp_default_instance___(void)

{
  return;
}


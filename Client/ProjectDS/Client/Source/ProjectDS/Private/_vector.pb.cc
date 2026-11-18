// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 44

// `dynamic_initializer_for_'_Vector2_default_instance_'' @ 14129adc0

void __cdecl _dynamic_initializer_for___Vector2_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___Vector2_default_instance___);
  return;
}

// `dynamic_initializer_for_'_VectorF_default_instance_'' @ 14129ade0

void __cdecl _dynamic_initializer_for___VectorF_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___VectorF_default_instance___);
  return;
}

// `dynamic_initializer_for_'_Vector_default_instance_'' @ 14129ae00

void __cdecl _dynamic_initializer_for___Vector_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___Vector_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129ae20

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table__5fvector_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c240810

void __cdecl VectorF::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 7) != 0) {
    if (((uVar2 & 1) != 0) && (iVar1 = (int)param_2[1]._internal_metadata_.ptr_, iVar1 != 0)) {
      *(int *)&param_1[1]._internal_metadata_.ptr_ = iVar1;
    }
    if (((uVar2 & 2) != 0) &&
       (iVar1 = *(int *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4), iVar1 != 0)) {
      *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4) = iVar1;
    }
    if (((uVar2 & 4) != 0) && (iVar1 = (int)param_2[2]._padding_, iVar1 != 0)) {
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

// Clear @ 14c240890

void __thiscall VectorF::Clear(VectorF *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 7) != 0) {
    (this->_impl_).x_ = 0.0;
    (this->_impl_).y_ = 0.0;
    (this->_impl_).z_ = 0.0;
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

// ByteSizeLong @ 14c2408c0

ulong64 __thiscall VectorF::ByteSizeLong(VectorF *this)

{
  uint uVar1;
  __uint64 _Var2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var2 = 0;
  if ((uVar1 & 7) != 0) {
    if (((uVar1 & 1) != 0) && ((this->_impl_).x_ != 0.0)) {
      _Var2 = 5;
    }
    if (((uVar1 & 2) != 0) && ((this->_impl_).y_ != 0.0)) {
      _Var2 = _Var2 + 5;
    }
    if (((uVar1 & 4) != 0) && ((this->_impl_).z_ != 0.0)) {
      _Var2 = _Var2 + 5;
    }
  }
  _Var2 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var2,&(this->_impl_)._cached_size_);
  return _Var2;
}

// _InternalSerialize @ 14c240910

uchar * __thiscall
VectorF::_InternalSerialize(VectorF *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  float fVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).x_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    fVar1 = (this->_impl_).x_;
    *param_1 = '\r';
    *(float *)(param_1 + 1) = fVar1;
    param_1 = param_1 + 5;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) && ((this->_impl_).y_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    fVar1 = (this->_impl_).y_;
    *param_1 = '\x15';
    *(float *)(param_1 + 1) = fVar1;
    param_1 = param_1 + 5;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) && ((this->_impl_).z_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    fVar1 = (this->_impl_).z_;
    *param_1 = '\x1d';
    *(float *)(param_1 + 1) = fVar1;
    param_1 = param_1 + 5;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c2409e0

ClassData * __thiscall VectorF::GetClassData(VectorF *this)

{
  return (ClassData *)&VectorF_class_data_;
}

// PlacementNew_ @ 14c240a00

void * __cdecl VectorF::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7VectorF__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// MergeImpl @ 14c240a30

void __cdecl Vector2::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 3) != 0) {
    if (((uVar2 & 1) != 0) && (lVar1 = param_2[1]._internal_metadata_.ptr_, lVar1 != 0)) {
      param_1[1]._internal_metadata_.ptr_ = lVar1;
    }
    if (((uVar2 & 2) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
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

// Clear @ 14c240aa0

void __thiscall Vector2::Clear(Vector2 *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 3) != 0) {
    (this->_impl_).x_ = 0.0;
    (this->_impl_).y_ = 0.0;
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

// ByteSizeLong @ 14c240ad0

ulong64 __thiscall Vector2::ByteSizeLong(Vector2 *this)

{
  uint uVar1;
  __uint64 _Var2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var2 = 0;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && ((this->_impl_).x_ != 0.0)) {
      _Var2 = 9;
    }
    if (((uVar1 & 2) != 0) && ((this->_impl_).y_ != 0.0)) {
      _Var2 = _Var2 + 9;
    }
  }
  _Var2 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var2,&(this->_impl_)._cached_size_);
  return _Var2;
}

// _InternalSerialize @ 14c240b10

uchar * __thiscall
Vector2::_InternalSerialize(Vector2 *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  double dVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).x_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    dVar1 = (this->_impl_).x_;
    *param_1 = '\t';
    *(double *)(param_1 + 1) = dVar1;
    param_1 = param_1 + 9;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) && ((this->_impl_).y_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    dVar1 = (this->_impl_).y_;
    *param_1 = '\x11';
    *(double *)(param_1 + 1) = dVar1;
    param_1 = param_1 + 9;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c240bc0

ClassData * __thiscall Vector2::GetClassData(Vector2 *this)

{
  return (ClassData *)&Vector2_class_data_;
}

// PlacementNew_ @ 14c240be0

void * __cdecl Vector2::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7Vector2__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c240c10

void * __thiscall Vector2::_scalar_deleting_destructor_(Vector2 *this,uint param_1)

{
  this->_padding_ = (longlong)&___7Vector2__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// MergeImpl @ 14c240c60

void __cdecl Vector::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 7) != 0) {
    if (((uVar2 & 1) != 0) && (lVar1 = param_2[1]._internal_metadata_.ptr_, lVar1 != 0)) {
      param_1[1]._internal_metadata_.ptr_ = lVar1;
    }
    if (((uVar2 & 2) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
    }
    if (((uVar2 & 4) != 0) && (lVar1 = param_2[2]._internal_metadata_.ptr_, lVar1 != 0)) {
      param_1[2]._internal_metadata_.ptr_ = lVar1;
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

// Clear @ 14c240ce0

void __thiscall Vector::Clear(Vector *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 7) != 0) {
    (this->_impl_).x_ = 0.0;
    (this->_impl_).y_ = 0.0;
    (this->_impl_).z_ = 0.0;
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

// ByteSizeLong @ 14c240d10

ulong64 __thiscall Vector::ByteSizeLong(Vector *this)

{
  uint uVar1;
  __uint64 _Var2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var2 = 0;
  if ((uVar1 & 7) != 0) {
    if (((uVar1 & 1) != 0) && ((this->_impl_).x_ != 0.0)) {
      _Var2 = 9;
    }
    if (((uVar1 & 2) != 0) && ((this->_impl_).y_ != 0.0)) {
      _Var2 = _Var2 + 9;
    }
    if (((uVar1 & 4) != 0) && ((this->_impl_).z_ != 0.0)) {
      _Var2 = _Var2 + 9;
    }
  }
  _Var2 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var2,&(this->_impl_)._cached_size_);
  return _Var2;
}

// _InternalSerialize @ 14c240d70

uchar * __thiscall
Vector::_InternalSerialize(Vector *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  double dVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).x_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    dVar1 = (this->_impl_).x_;
    *param_1 = '\t';
    *(double *)(param_1 + 1) = dVar1;
    param_1 = param_1 + 9;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) && ((this->_impl_).y_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    dVar1 = (this->_impl_).y_;
    *param_1 = '\x11';
    *(double *)(param_1 + 1) = dVar1;
    param_1 = param_1 + 9;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) && ((this->_impl_).z_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    dVar1 = (this->_impl_).z_;
    *param_1 = '\x19';
    *(double *)(param_1 + 1) = dVar1;
    param_1 = param_1 + 9;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c240e50

ClassData * __thiscall Vector::GetClassData(Vector *this)

{
  return (ClassData *)&Vector_class_data_;
}

// PlacementNew_ @ 14c240e70

void * __cdecl Vector::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7Vector__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  return param_2;
}

// Vector2 @ 14c240ea0

Vector2 * __thiscall Vector2::Vector2(Vector2 *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7Vector2__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).x_ = 0.0;
  (this->_impl_).y_ = 0.0;
  return this;
}

// Vector2 @ 14c240ed0

Vector2 * __thiscall Vector2::Vector2(Vector2 *this,Arena *param_1,Vector2 *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7Vector2__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).x_ = (param_2->_impl_).x_;
  (this->_impl_).y_ = (param_2->_impl_).y_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// Vector @ 14c240f30

Vector * __thiscall Vector::Vector(Vector *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7Vector__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).x_ = 0.0;
  (this->_impl_).y_ = 0.0;
  (this->_impl_).z_ = 0.0;
  return this;
}

// Vector @ 14c240f60

Vector * __thiscall Vector::Vector(Vector *this,Arena *param_1,Vector *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7Vector__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).x_ = (param_2->_impl_).x_;
  (this->_impl_).y_ = (param_2->_impl_).y_;
  (this->_impl_).z_ = (param_2->_impl_).z_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// VectorF @ 14c240fd0

VectorF * __thiscall VectorF::VectorF(VectorF *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7VectorF__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).x_ = 0.0;
  (this->_impl_).y_ = 0.0;
  (this->_impl_).z_ = 0.0;
  return this;
}

// VectorF @ 14c241000

VectorF * __thiscall VectorF::VectorF(VectorF *this,Arena *param_1,VectorF *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7VectorF__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).x_ = (param_2->_impl_).x_;
  (this->_impl_).y_ = (param_2->_impl_).y_;
  (this->_impl_).z_ = (param_2->_impl_).z_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// ~Vector2 @ 14c241070

void __thiscall Vector2::~Vector2(Vector2 *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7Vector2__6B_;
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

// ~Vector @ 14c241090

void __thiscall Vector::~Vector(Vector *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7Vector__6B_;
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

// ~VectorF @ 14c2410b0

void __thiscall VectorF::~VectorF(VectorF *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7VectorF__6B_;
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

// CopyFrom @ 14c2410d0

void __thiscall Vector2::CopyFrom(Vector2 *this,Vector2 *param_1)

{
  double dVar1;
  uint uVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar2 & 3) != 0) {
      if (((uVar2 & 1) != 0) && (dVar1 = (param_1->_impl_).x_, dVar1 != 0.0)) {
        (this->_impl_).x_ = dVar1;
      }
      if (((uVar2 & 2) != 0) && (dVar1 = (param_1->_impl_).y_, dVar1 != 0.0)) {
        (this->_impl_).y_ = dVar1;
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

// CopyFrom @ 14c241160

void __thiscall Vector::CopyFrom(Vector *this,Vector *param_1)

{
  double dVar1;
  uint uVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar2 & 7) != 0) {
      if (((uVar2 & 1) != 0) && (dVar1 = (param_1->_impl_).x_, dVar1 != 0.0)) {
        (this->_impl_).x_ = dVar1;
      }
      if (((uVar2 & 2) != 0) && (dVar1 = (param_1->_impl_).y_, dVar1 != 0.0)) {
        (this->_impl_).y_ = dVar1;
      }
      if (((uVar2 & 4) != 0) && (dVar1 = (param_1->_impl_).z_, dVar1 != 0.0)) {
        (this->_impl_).z_ = dVar1;
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

// CopyFrom @ 14c241200

void __thiscall VectorF::CopyFrom(VectorF *this,VectorF *param_1)

{
  float fVar1;
  uint uVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar2 & 7) != 0) {
      if (((uVar2 & 1) != 0) && (fVar1 = (param_1->_impl_).x_, fVar1 != 0.0)) {
        (this->_impl_).x_ = fVar1;
      }
      if (((uVar2 & 2) != 0) && (fVar1 = (param_1->_impl_).y_, fVar1 != 0.0)) {
        (this->_impl_).y_ = fVar1;
      }
      if (((uVar2 & 4) != 0) && (fVar1 = (param_1->_impl_).z_, fVar1 != 0.0)) {
        (this->_impl_).z_ = fVar1;
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

// GetMetadata @ 14c2412a0

Metadata * __thiscall Vector2::GetMetadata(Vector2 *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&Vector2_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c2412e0

Metadata * __thiscall Vector::GetMetadata(Vector *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&Vector_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c241320

Metadata * __thiscall VectorF::GetMetadata(VectorF *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&VectorF_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c241360

void __thiscall Vector2::InternalSwap(Vector2 *this,Vector2 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  google::protobuf::internal::memswap<16>((char *)&(this->_impl_).x_,(char *)&(param_1->_impl_).x_);
  return;
}

// InternalSwap @ 14c2413a0

void __thiscall Vector::InternalSwap(Vector *this,Vector *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  __std_swap_ranges_trivially_swappable_noalias(&(this->_impl_).x_,this + 1,&(param_1->_impl_).x_);
  return;
}

// InternalSwap @ 14c2413e0

void __thiscall VectorF::InternalSwap(VectorF *this,VectorF *param_1)

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
            (&(this->_impl_).x_,&this->field_0x24,&(param_1->_impl_).x_);
  return;
}

// `dynamic_atexit_destructor_for_'_Vector2_default_instance_'' @ 150444120

void __cdecl _dynamic_atexit_destructor_for___Vector2_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_VectorF_default_instance_'' @ 150444130

void __cdecl _dynamic_atexit_destructor_for___VectorF_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_Vector_default_instance_'' @ 150444140

void __cdecl _dynamic_atexit_destructor_for___Vector_default_instance___(void)

{
  return;
}


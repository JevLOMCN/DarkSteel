// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// `dynamic_initializer_for_'_Damage_default_instance_'' @ 14128d910

void __cdecl _dynamic_initializer_for___Damage_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___Damage_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14128d930

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_ability_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c0b09c0

void __cdecl Damage::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)param_2[1]._padding_;
  if (((uVar1 & 1) != 0) && (iVar2 = (int)param_2[1]._internal_metadata_.ptr_, iVar2 != 0)) {
    *(int *)&param_1[1]._internal_metadata_.ptr_ = iVar2;
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

// Clear @ 14c0b0a00

void __thiscall Damage::Clear(Damage *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  (this->_impl_).amount_ = 0;
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

// ByteSizeLong @ 14c0b0a20

ulong64 __thiscall Damage::ByteSizeLong(Damage *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar2 = (this->_impl_).amount_, iVar2 != 0)) {
    uVar3 = (longlong)iVar2 | 1;
    if (__isa_available < 5) {
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar2 = 0x3f - (int)lVar1;
    }
    else {
      iVar2 = (int)LZCOUNT(uVar3);
    }
    _Var4 = (__uint64)(iVar2 * -9 + 0x2c0U >> 6);
  }
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c0b0a80

uchar * __thiscall
Damage::_InternalSerialize(Damage *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar1 = (this->_impl_).amount_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar1,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c0b0af0

ClassData * __thiscall Damage::GetClassData(Damage *this)

{
  return (ClassData *)&Damage_class_data_;
}

// PlacementNew_ @ 14c0b0b10

void * __cdecl Damage::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7Damage__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c0b0b40

void * __thiscall Damage::_scalar_deleting_destructor_(Damage *this,uint param_1)

{
  this->_padding_ = (longlong)&___7Damage__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// WriteInt32ToArrayWithField<1> @ 14c0b0b90

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
          (EpsCopyOutputStream *param_1,int param_2,uchar *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  if (param_1->end_ <= param_3) {
    param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_1,param_3);
  }
  *param_3 = 8;
  while( true ) {
    pbVar1 = param_3 + 1;
    bVar2 = (byte)uVar3;
    if (uVar3 < 0x80) break;
    uVar3 = uVar3 >> 7;
    *pbVar1 = bVar2 | 0x80;
    param_3 = pbVar1;
  }
  *pbVar1 = bVar2;
  return param_3 + 2;
}

// Damage @ 14c0b0bf0

Damage * __thiscall Damage::Damage(Damage *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7Damage__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).amount_ = 0;
  return this;
}

// Damage @ 14c0b0c20

Damage * __thiscall Damage::Damage(Damage *this,Arena *param_1,Damage *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7Damage__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).amount_ = (param_2->_impl_).amount_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// ~RepeatedField<google::protobuf::UnknownField> @ 14c0b0c80

void __thiscall
google::protobuf::RepeatedField<google::protobuf::UnknownField>::
~RepeatedField<google::protobuf::UnknownField>(RepeatedField<google::protobuf::UnknownField> *this)

{
  ulonglong uVar1;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((uVar1 & 4) != 0) {
    uVar1 = uVar1 & 0xfffffffffffffff8;
    if (*(longlong *)(uVar1 - 0x10) == 0) {
      ::operator_delete((void *)(uVar1 - 0x10),
                        ((longlong)(this->soo_rep_).field0_0x0.long_rep.capacity + 1) * 0x10);
      return;
    }
  }
  return;
}

// ~Damage @ 14c0b0cb0

void __thiscall Damage::~Damage(Damage *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7Damage__6B_;
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

// ~MessageLite @ 14c0b0cd0

void __thiscall google::protobuf::MessageLite::~MessageLite(MessageLite *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14c0b0ce0

void * __thiscall
google::protobuf::Message::_scalar_deleting_destructor_(Message *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14c0b0d10

void * __thiscall
google::protobuf::MessageLite::_scalar_deleting_destructor_(MessageLite *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// CopyFrom @ 14c0b0d40

void __thiscall Damage::CopyFrom(Damage *this,Damage *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar1 & 1) != 0) && (iVar2 = (param_1->_impl_).amount_, iVar2 != 0)) {
      (this->_impl_).amount_ = iVar2;
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

// GetMetadata @ 14c0b0da0

Metadata * __thiscall Damage::GetMetadata(Damage *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&Damage_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c0b0de0

void __thiscall Damage::InternalSwap(Damage *this,Damage *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar3;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  iVar2 = (this->_impl_).amount_;
  (this->_impl_).amount_ = (param_1->_impl_).amount_;
  (param_1->_impl_).amount_ = iVar2;
  return;
}

// WriteInt32NoTagToArray @ 14c0b0e20

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteInt32NoTagToArray(int param_1,uchar *param_2)

{
  ulonglong uVar1;
  
  for (uVar1 = (ulonglong)param_1; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_2 = (byte)uVar1 | 0x80;
    param_2 = param_2 + 1;
  }
  *param_2 = (byte)uVar1;
  return param_2 + 1;
}

// WriteInt32ToArray @ 14c0b0e60

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteInt32ToArray
          (int param_1,int param_2,uchar *param_3)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  for (uVar2 = param_1 * 8; 0x7f < uVar2; uVar2 = uVar2 >> 7) {
    *param_3 = (byte)uVar2 | 0x80;
    param_3 = param_3 + 1;
  }
  *param_3 = (byte)uVar2;
  while( true ) {
    param_3 = param_3 + 1;
    bVar1 = (byte)uVar3;
    if (uVar3 < 0x80) break;
    uVar3 = uVar3 >> 7;
    *param_3 = bVar1 | 0x80;
  }
  *param_3 = bVar1;
  return param_3 + 1;
}

// default_instance @ 14c0b0ed0

UnknownFieldSet * __cdecl google::protobuf::UnknownFieldSet::default_instance(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_google::protobuf::UnknownFieldSet_const&___ptr64___cdecl_google::protobuf::UnknownFieldSet::default_instance(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_google::protobuf::UnknownFieldSet_const&___ptr64___cdecl_google::protobuf::UnknownFieldSet::default_instance(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_google::protobuf::UnknownFieldSet_const&___ptr64___cdecl_google::protobuf::UnknownFieldSet::default_instance(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`google::protobuf::UnknownFieldSet::default_instance'::__l2::
             _dynamic_atexit_destructor_for__instance__);
      _Init_thread_footer(&`public:_static_class_google::protobuf::UnknownFieldSet_const&___ptr64___cdecl_google::protobuf::UnknownFieldSet::default_instance(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_google::protobuf::UnknownFieldSet_const&___ptr64___cdecl_google::protobuf::UnknownFieldSet::default_instance(void)'
          ::__l2::instance;
}

// `dynamic_atexit_destructor_for_'_Damage_default_instance_'' @ 15043ffb0

void __cdecl _dynamic_atexit_destructor_for___Damage_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'instance'' @ 15043ffc0

void __cdecl
`google::protobuf::UnknownFieldSet::default_instance'::__l2::
_dynamic_atexit_destructor_for__instance__(void)

{
  undefined4 uVar1;
  
  uVar1 = `public:_static_class_google::protobuf::UnknownFieldSet_const&___ptr64___cdecl_google::protobuf::UnknownFieldSet::default_instance(void)'
          ::__l2::instance.fields_.soo_rep_.field0_0x0.long_rep.size;
  if ((`public:_static_class_google::protobuf::UnknownFieldSet_const&___ptr64___cdecl_google::protobuf::UnknownFieldSet::default_instance(void)'
       ::__l2::instance.fields_.soo_rep_.field0_0x0.long_rep.elements_int & 4) == 0) {
    uVar1 = (uint)`public:_static_class_google::protobuf::UnknownFieldSet_const&___ptr64___cdecl_google::protobuf::UnknownFieldSet::default_instance(void)'
                  ::__l2::instance.fields_.soo_rep_.field0_0x0.long_rep.elements_int & 3;
  }
  if (uVar1 != 0) {
    google::protobuf::UnknownFieldSet::ClearFallback
              (&`public:_static_class_google::protobuf::UnknownFieldSet_const&___ptr64___cdecl_google::protobuf::UnknownFieldSet::default_instance(void)'
                ::__l2::instance);
  }
  if (((`public:_static_class_google::protobuf::UnknownFieldSet_const&___ptr64___cdecl_google::protobuf::UnknownFieldSet::default_instance(void)'
        ::__l2::instance.fields_.soo_rep_.field0_0x0.long_rep.elements_int & 4) != 0) &&
     (*(longlong *)
       ((`public:_static_class_google::protobuf::UnknownFieldSet_const&___ptr64___cdecl_google::protobuf::UnknownFieldSet::default_instance(void)'
         ::__l2::instance.fields_.soo_rep_.field0_0x0.long_rep.elements_int & 0xfffffffffffffff8) -
       0x10) == 0)) {
    ::operator_delete((void *)((`public:_static_class_google::protobuf::UnknownFieldSet_const&___ptr64___cdecl_google::protobuf::UnknownFieldSet::default_instance(void)'
                                ::__l2::instance.fields_.soo_rep_.field0_0x0.long_rep.elements_int &
                               0xfffffffffffffff8) - 0x10),
                      ((longlong)
                       `public:_static_class_google::protobuf::UnknownFieldSet_const&___ptr64___cdecl_google::protobuf::UnknownFieldSet::default_instance(void)'
                       ::__l2::instance.fields_.soo_rep_.field0_0x0.long_rep.capacity + 1) * 0x10);
    return;
  }
  return;
}


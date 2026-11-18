// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// `dynamic_initializer_for_'_Passenger_default_instance_'' @ 1412999a0

void __cdecl _dynamic_initializer_for___Passenger_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___Passenger_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 1412999c0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_structs_5fpassenger_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c22f9a0

void __cdecl Passenger::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pMVar2 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
      pMVar3 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
      if (pMVar2 == (MessageLite *)0x0) {
        pvVar4 = google::protobuf::Arena::CopyConstruct<messages::MyTransport>(pAVar5,pMVar3);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar4;
      }
      else {
        messages::MyTransport::MergeImpl(pMVar2,pMVar3);
      }
    }
    if (((uVar1 & 2) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
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

// Clear @ 14c22fa50

void __thiscall Passenger::Clear(Passenger *this)

{
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    messages::MyTransport::Clear((this->_impl_).my_transport_);
  }
  (this->_impl_).entity_id_ = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c22faa0

ulong64 __thiscall Passenger::ByteSizeLong(Passenger *this)

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
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = messages::MyTransport::ByteSizeLong((this->_impl_).my_transport_);
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
    if (((uVar1 & 2) != 0) && (uVar4 = (this->_impl_).entity_id_, uVar4 != 0)) {
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
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c22fb70

uchar * __thiscall
Passenger::_InternalSerialize(Passenger *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  byte *pbVar1;
  uchar *puVar2;
  byte bVar3;
  ulonglong uVar4;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) && ((this->_impl_).entity_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (this->_impl_).entity_id_;
    *param_1 = 8;
    while( true ) {
      pbVar1 = param_1 + 1;
      bVar3 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *pbVar1 = bVar3 | 0x80;
      param_1 = pbVar1;
    }
    *pbVar1 = bVar3;
    param_1 = param_1 + 2;
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (2,(MessageLite *)(this->_impl_).my_transport_,
                         (int)(((this->_impl_).my_transport_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar2;
}

// GetClassData @ 14c22fc30

ClassData * __thiscall Passenger::GetClassData(Passenger *this)

{
  return (ClassData *)&Passenger_class_data_;
}

// PlacementNew_ @ 14c22fc50

void * __cdecl Passenger::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7Passenger__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c22fc80

void * __thiscall Passenger::_scalar_deleting_destructor_(Passenger *this,uint param_1)

{
  MyTransport *this_00;
  
  this->_padding_ = (longlong)&___7Passenger__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).my_transport_;
  if (this_00 != (MyTransport *)0x0) {
    messages::MyTransport::~MyTransport(this_00);
    ::operator_delete(this_00,0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Passenger @ 14c22fd00

Passenger * __thiscall Passenger::Passenger(Passenger *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7Passenger__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).my_transport_ = (MyTransport *)0x0;
  (this->_impl_).entity_id_ = 0;
  return this;
}

// Passenger @ 14c22fd30

Passenger * __thiscall Passenger::Passenger(Passenger *this,Arena *param_1,Passenger *param_2)

{
  MyTransport *pMVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7Passenger__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pMVar1 = (MyTransport *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pMVar1 = google::protobuf::Arena::CopyConstruct<messages::MyTransport>
                       (param_1,(param_2->_impl_).my_transport_);
  }
  (this->_impl_).my_transport_ = pMVar1;
  (this->_impl_).entity_id_ = (param_2->_impl_).entity_id_;
  return this;
}

// ~Passenger @ 14c22fdc0

void __thiscall Passenger::~Passenger(Passenger *this)

{
  MyTransport *this_00;
  
  this->_padding_ = (longlong)&___7Passenger__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).my_transport_;
  if (this_00 != (MyTransport *)0x0) {
    messages::MyTransport::~MyTransport(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// CopyFrom @ 14c22fe10

void __thiscall Passenger::CopyFrom(Passenger *this,Passenger *param_1)

{
  uint uVar1;
  MyTransport *pMVar2;
  ulong64 uVar3;
  MyTransport *pMVar4;
  Arena *pAVar5;
  
  if (param_1 != this) {
    Clear(this);
    pAVar5 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 3) != 0) {
      if ((uVar1 & 1) != 0) {
        pMVar4 = (this->_impl_).my_transport_;
        pMVar2 = (param_1->_impl_).my_transport_;
        if (pMVar4 == (MyTransport *)0x0) {
          pMVar4 = google::protobuf::Arena::CopyConstruct<messages::MyTransport>(pAVar5,pMVar2);
          (this->_impl_).my_transport_ = pMVar4;
        }
        else {
          messages::MyTransport::MergeImpl((MessageLite *)pMVar4,(MessageLite *)pMVar2);
        }
      }
      if (((uVar1 & 2) != 0) && (uVar3 = (param_1->_impl_).entity_id_, uVar3 != 0)) {
        (this->_impl_).entity_id_ = uVar3;
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

// GetMetadata @ 14c22fed0

Metadata * __thiscall Passenger::GetMetadata(Passenger *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&Passenger_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c22ff10

void __thiscall Passenger::InternalSwap(Passenger *this,Passenger *param_1)

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
            ((char *)&(this->_impl_).my_transport_,(char *)&(param_1->_impl_).my_transport_);
  return;
}

// clear_my_transport @ 14c22ff50

void __thiscall Passenger::clear_my_transport(Passenger *this)

{
  MyTransport *this_00;
  
  this_00 = (this->_impl_).my_transport_;
  if (this_00 != (MyTransport *)0x0) {
    messages::MyTransport::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// `dynamic_atexit_destructor_for_'_Passenger_default_instance_'' @ 150443c20

void __cdecl _dynamic_atexit_destructor_for___Passenger_default_instance___(void)

{
  return;
}


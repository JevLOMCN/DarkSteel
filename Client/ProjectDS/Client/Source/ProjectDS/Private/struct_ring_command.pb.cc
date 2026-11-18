// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// `dynamic_initializer_for_'_RingCommandSet_default_instance_'' @ 141299c10

void __cdecl _dynamic_initializer_for___RingCommandSet_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___RingCommandSet_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 141299c30

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_struct_5fring_5fcommand_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c234cd0

void __cdecl RingCommandSet::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      pMVar3 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
      pMVar4 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
      if (pMVar3 == (MessageLite *)0x0) {
        pvVar5 = google::protobuf::Arena::CopyConstruct<messages::SlotDeck>(pAVar6,pMVar4);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar5;
      }
      else {
        messages::SlotDeck::MergeImpl(pMVar3,pMVar4);
      }
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (int)param_2[2]._padding_, iVar2 != 0)) {
      *(int *)&param_1[2]._padding_ = iVar2;
    }
    if (((uVar1 & 4) != 0) && (iVar2 = *(int *)((longlong)&param_2[2]._padding_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[2]._padding_ + 4) = iVar2;
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

// Clear @ 14c234d90

void __thiscall RingCommandSet::Clear(RingCommandSet *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    messages::SlotDeck::Clear((this->_impl_).slot_deck_);
  }
  if ((uVar1 & 6) != 0) {
    (this->_impl_).cmd_type_ = 0;
    (this->_impl_).cmd_value_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c234de0

ulong64 __thiscall RingCommandSet::ByteSizeLong(RingCommandSet *this)

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
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = messages::SlotDeck::ByteSizeLong((this->_impl_).slot_deck_);
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
    if (((uVar1 & 2) != 0) && (iVar6 = (this->_impl_).cmd_type_, iVar6 != 0)) {
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
    if (((uVar1 & 4) != 0) && (iVar6 = (this->_impl_).cmd_value_, iVar6 != 0)) {
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
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c234ef0

uchar * __thiscall
RingCommandSet::_InternalSerialize(RingCommandSet *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  uchar *puVar5;
  byte bVar6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).slot_deck_,
                         (int)(((this->_impl_).slot_deck_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar1 & 2) != 0) && ((this->_impl_).cmd_type_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (ulonglong)(this->_impl_).cmd_type_;
    *param_1 = 0x10;
    while( true ) {
      pbVar3 = param_1 + 1;
      bVar6 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *pbVar3 = bVar6 | 0x80;
      param_1 = pbVar3;
    }
    *pbVar3 = bVar6;
    param_1 = param_1 + 2;
  }
  if (((uVar1 & 4) != 0) && (iVar2 = (this->_impl_).cmd_value_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar5;
}

// GetClassData @ 14c234fe0

ClassData * __thiscall RingCommandSet::GetClassData(RingCommandSet *this)

{
  return (ClassData *)&RingCommandSet_class_data_;
}

// PlacementNew_ @ 14c235000

void * __cdecl RingCommandSet::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7RingCommandSet__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c235030

void * __thiscall RingCommandSet::_scalar_deleting_destructor_(RingCommandSet *this,uint param_1)

{
  SlotDeck *this_00;
  
  this->_padding_ = (longlong)&___7RingCommandSet__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).slot_deck_;
  if (this_00 != (SlotDeck *)0x0) {
    messages::SlotDeck::~SlotDeck(this_00);
    ::operator_delete(this_00,0x20);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// RingCommandSet @ 14c2350b0

RingCommandSet * __thiscall RingCommandSet::RingCommandSet(RingCommandSet *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RingCommandSet__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).slot_deck_ = (SlotDeck *)0x0;
  (this->_impl_).cmd_type_ = 0;
  (this->_impl_).cmd_value_ = 0;
  return this;
}

// RingCommandSet @ 14c2350e0

RingCommandSet * __thiscall
RingCommandSet::RingCommandSet(RingCommandSet *this,Arena *param_1,RingCommandSet *param_2)

{
  int iVar1;
  SlotDeck *pSVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RingCommandSet__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pSVar2 = (SlotDeck *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pSVar2 = google::protobuf::Arena::CopyConstruct<messages::SlotDeck>
                       (param_1,(param_2->_impl_).slot_deck_);
  }
  (this->_impl_).slot_deck_ = pSVar2;
  iVar1 = (param_2->_impl_).cmd_value_;
  (this->_impl_).cmd_type_ = (param_2->_impl_).cmd_type_;
  (this->_impl_).cmd_value_ = iVar1;
  return this;
}

// ~RingCommandSet @ 14c235170

void __thiscall RingCommandSet::~RingCommandSet(RingCommandSet *this)

{
  SlotDeck *this_00;
  
  this->_padding_ = (longlong)&___7RingCommandSet__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).slot_deck_;
  if (this_00 != (SlotDeck *)0x0) {
    messages::SlotDeck::~SlotDeck(this_00);
    ::operator_delete(this_00,0x20);
    return;
  }
  return;
}

// CopyFrom @ 14c2351c0

void __thiscall RingCommandSet::CopyFrom(RingCommandSet *this,RingCommandSet *param_1)

{
  uint uVar1;
  int iVar2;
  SlotDeck *pSVar3;
  SlotDeck *pSVar4;
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
        pSVar4 = (this->_impl_).slot_deck_;
        pSVar3 = (param_1->_impl_).slot_deck_;
        if (pSVar4 == (SlotDeck *)0x0) {
          pSVar4 = google::protobuf::Arena::CopyConstruct<messages::SlotDeck>(pAVar5,pSVar3);
          (this->_impl_).slot_deck_ = pSVar4;
        }
        else {
          messages::SlotDeck::MergeImpl((MessageLite *)pSVar4,(MessageLite *)pSVar3);
        }
      }
      if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).cmd_type_, iVar2 != 0)) {
        (this->_impl_).cmd_type_ = iVar2;
      }
      if (((uVar1 & 4) != 0) && (iVar2 = (param_1->_impl_).cmd_value_, iVar2 != 0)) {
        (this->_impl_).cmd_value_ = iVar2;
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

// GetMetadata @ 14c235290

Metadata * __thiscall
RingCommandSet::GetMetadata(RingCommandSet *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&RingCommandSet_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c2352d0

void __thiscall RingCommandSet::InternalSwap(RingCommandSet *this,RingCommandSet *param_1)

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
            ((char *)&(this->_impl_).slot_deck_,(char *)&(param_1->_impl_).slot_deck_);
  return;
}

// clear_slot_deck @ 14c235310

void __thiscall RingCommandSet::clear_slot_deck(RingCommandSet *this)

{
  SlotDeck *this_00;
  
  this_00 = (this->_impl_).slot_deck_;
  if (this_00 != (SlotDeck *)0x0) {
    messages::SlotDeck::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// `dynamic_atexit_destructor_for_'_RingCommandSet_default_instance_'' @ 150443ce0

void __cdecl _dynamic_atexit_destructor_for___RingCommandSet_default_instance___(void)

{
  return;
}


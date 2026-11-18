// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 320

// `dynamic_initializer_for_'_All_default_instance_'' @ 141293d40

void __cdecl messages::_dynamic_initializer_for___All_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___All_default_instance___);
  return;
}

// `dynamic_initializer_for_'_CharacterEntityType_default_instance_'' @ 141293d60

void __cdecl messages::_dynamic_initializer_for___CharacterEntityType_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___CharacterEntityType_default_instance___);
  return;
}

// `dynamic_initializer_for_'_FallingInfo_default_instance_'' @ 141293d80

void __cdecl messages::_dynamic_initializer_for___FallingInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___FallingInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_FrontEndClientSession_default_instance_'' @ 141293da0

void __cdecl messages::_dynamic_initializer_for___FrontEndClientSession_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___FrontEndClientSession_default_instance___);
  return;
}

// `dynamic_initializer_for_'_InteractionNpcType_default_instance_'' @ 141293dc0

void __cdecl messages::_dynamic_initializer_for___InteractionNpcType_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___InteractionNpcType_default_instance___);
  return;
}

// `dynamic_initializer_for_'_InteractionStuffType_default_instance_'' @ 141293de0

void __cdecl messages::_dynamic_initializer_for___InteractionStuffType_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___InteractionStuffType_default_instance___);
  return;
}

// `dynamic_initializer_for_'_LocationTransportType_default_instance_'' @ 141293e00

void __cdecl messages::_dynamic_initializer_for___LocationTransportType_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___LocationTransportType_default_instance___);
  return;
}

// `dynamic_initializer_for_'_LocationType_default_instance_'' @ 141293e20

void __cdecl messages::_dynamic_initializer_for___LocationType_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___LocationType_default_instance___);
  return;
}

// `dynamic_initializer_for_'_MainCharacter_default_instance_'' @ 141293e40

void __cdecl messages::_dynamic_initializer_for___MainCharacter_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___MainCharacter_default_instance___);
  return;
}

// `dynamic_initializer_for_'_MultiTargetHitPoint_default_instance_'' @ 141293e60

void __cdecl messages::_dynamic_initializer_for___MultiTargetHitPoint_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___MultiTargetHitPoint_default_instance___);
  return;
}

// `dynamic_initializer_for_'_MyTransport_default_instance_'' @ 141293e80

void __cdecl messages::_dynamic_initializer_for___MyTransport_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___MyTransport_default_instance___);
  return;
}

// `dynamic_initializer_for_'_None_default_instance_'' @ 141293ea0

void __cdecl messages::_dynamic_initializer_for___None_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___None_default_instance___);
  return;
}

// `dynamic_initializer_for_'_PkSpawnInfo_default_instance_'' @ 141293ec0

void __cdecl messages::_dynamic_initializer_for___PkSpawnInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___PkSpawnInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_PlayerEntity_default_instance_'' @ 141293ee0

void __cdecl messages::_dynamic_initializer_for___PlayerEntity_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___PlayerEntity_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ProjectileInfo_default_instance_'' @ 141293f00

void __cdecl messages::_dynamic_initializer_for___ProjectileInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ProjectileInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ServerChangeType_default_instance_'' @ 141293f20

void __cdecl messages::_dynamic_initializer_for___ServerChangeType_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ServerChangeType_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ServerSession_default_instance_'' @ 141293f40

void __cdecl messages::_dynamic_initializer_for___ServerSession_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ServerSession_default_instance___);
  return;
}

// `dynamic_initializer_for_'_SlotDeck_default_instance_'' @ 141293f60

void __cdecl messages::_dynamic_initializer_for___SlotDeck_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SlotDeck_default_instance___);
  return;
}

// `dynamic_initializer_for_'_SubCharacter_default_instance_'' @ 141293f80

void __cdecl messages::_dynamic_initializer_for___SubCharacter_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SubCharacter_default_instance___);
  return;
}

// `dynamic_initializer_for_'_Target_default_instance_'' @ 141293fa0

void __cdecl messages::_dynamic_initializer_for___Target_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___Target_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 141293fc0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_messages_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c160f70

void __cdecl messages::SubCharacter::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = (uint)param_2[1]._padding_;
  if (((uVar1 & 1) != 0) && (lVar2 = param_2[1]._internal_metadata_.ptr_, lVar2 != 0)) {
    param_1[1]._internal_metadata_.ptr_ = lVar2;
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

// Clear @ 14c160fb0

void __thiscall messages::SubCharacter::Clear(SubCharacter *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  (this->_impl_).bits_ = 0;
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

// ByteSizeLong @ 14c160fe0

ulong64 __thiscall messages::SubCharacter::ByteSizeLong(SubCharacter *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (uVar3 = (this->_impl_).bits_, uVar3 != 0)) {
    uVar3 = uVar3 | 1;
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

// _InternalSerialize @ 14c161040

uchar * __thiscall
messages::SubCharacter::_InternalSerialize
          (SubCharacter *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  byte *pbVar1;
  uchar *puVar2;
  byte bVar3;
  ulonglong uVar4;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).bits_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (this->_impl_).bits_;
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
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar2;
}

// GetClassData @ 14c1610e0

ClassData * __thiscall messages::SubCharacter::GetClassData(SubCharacter *this)

{
  return (ClassData *)&SubCharacter_class_data_;
}

// PlacementNew_ @ 14c161100

void * __cdecl messages::SubCharacter::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SubCharacter_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c161130

void * __thiscall
messages::SubCharacter::_scalar_deleting_destructor_(SubCharacter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SubCharacter_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c161180

void __cdecl messages::SlotDeck::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (iVar2 = (int)param_2[1]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[1]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 & 2) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4) = iVar2;
    }
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

// Clear @ 14c1611d0

void __thiscall messages::SlotDeck::Clear(SlotDeck *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 3) != 0) {
    (this->_impl_).deck_index_ = 0;
    (this->_impl_).slot_index_ = 0;
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

// ByteSizeLong @ 14c161200

ulong64 __thiscall messages::SlotDeck::ByteSizeLong(SlotDeck *this)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  __uint64 _Var5;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  uVar3 = 0;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (iVar2 = (this->_impl_).deck_index_, iVar2 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (this->_impl_).slot_index_, iVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
      uVar3 = uVar3 + uVar4;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar3,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c161270

uchar * __thiscall
messages::SlotDeck::_InternalSerialize(SlotDeck *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar1 = (this->_impl_).deck_index_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar1,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (iVar1 = (this->_impl_).slot_index_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
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

// GetClassData @ 14c161300

ClassData * __thiscall messages::SlotDeck::GetClassData(SlotDeck *this)

{
  return (ClassData *)&SlotDeck_class_data_;
}

// PlacementNew_ @ 14c161320

void * __cdecl messages::SlotDeck::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SlotDeck_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c161350

void * __thiscall messages::SlotDeck::_scalar_deleting_destructor_(SlotDeck *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SlotDeck_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c1613a0

void __cdecl messages::ServerSession::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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

// Clear @ 14c1613e0

void __thiscall messages::ServerSession::Clear(ServerSession *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  (this->_impl_).id_ = 0;
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

// ByteSizeLong @ 14c161400

ulong64 __thiscall messages::ServerSession::ByteSizeLong(ServerSession *this)

{
  uint uVar1;
  int iVar2;
  __uint64 _Var3;
  
  _Var3 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (uVar1 = (this->_impl_).id_, uVar1 != 0)) {
    uVar1 = uVar1 | 1;
    if (__isa_available < 5) {
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 0x1f - iVar2;
    }
    else {
      iVar2 = LZCOUNT(uVar1);
    }
    _Var3 = (__uint64)(iVar2 * -9 + 0x1a0U >> 6);
  }
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var3,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c161450

uchar * __thiscall
messages::ServerSession::_InternalSerialize
          (ServerSession *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uchar *puVar3;
  uint uVar4;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (this->_impl_).id_;
    *param_1 = 8;
    while( true ) {
      pbVar1 = param_1 + 1;
      bVar2 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *pbVar1 = bVar2 | 0x80;
      param_1 = pbVar1;
    }
    *pbVar1 = bVar2;
    param_1 = param_1 + 2;
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar3;
}

// GetClassData @ 14c1614f0

ClassData * __thiscall messages::ServerSession::GetClassData(ServerSession *this)

{
  return (ClassData *)&ServerSession_class_data_;
}

// PlacementNew_ @ 14c161510

void * __cdecl messages::ServerSession::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ServerSession_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c161540

void * __thiscall
messages::ServerSession::_scalar_deleting_destructor_(ServerSession *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ServerSession_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c161590

void __cdecl messages::PlayerEntity::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = (uint)param_2[1]._padding_;
  if (((uVar1 & 1) != 0) && (lVar2 = param_2[1]._internal_metadata_.ptr_, lVar2 != 0)) {
    param_1[1]._internal_metadata_.ptr_ = lVar2;
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

// Clear @ 14c1615d0

void __thiscall messages::PlayerEntity::Clear(PlayerEntity *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  (this->_impl_).bits_ = 0;
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

// ByteSizeLong @ 14c161600

ulong64 __thiscall messages::PlayerEntity::ByteSizeLong(PlayerEntity *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (uVar3 = (this->_impl_).bits_, uVar3 != 0)) {
    uVar3 = uVar3 | 1;
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

// _InternalSerialize @ 14c161660

uchar * __thiscall
messages::PlayerEntity::_InternalSerialize
          (PlayerEntity *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  byte *pbVar1;
  uchar *puVar2;
  byte bVar3;
  ulonglong uVar4;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).bits_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (this->_impl_).bits_;
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
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar2;
}

// GetClassData @ 14c161700

ClassData * __thiscall messages::PlayerEntity::GetClassData(PlayerEntity *this)

{
  return (ClassData *)&PlayerEntity_class_data_;
}

// PlacementNew_ @ 14c161720

void * __cdecl messages::PlayerEntity::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7PlayerEntity_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c161750

void * __thiscall
messages::PlayerEntity::_scalar_deleting_destructor_(PlayerEntity *this,uint param_1)

{
  this->_padding_ = (longlong)&___7PlayerEntity_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c1617a0

void __cdecl messages::PkSpawnInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 0x1f) != 0) {
    if (((uVar2 & 1) != 0) && (iVar3 = (int)param_2[1]._internal_metadata_.ptr_, iVar3 != 0)) {
      *(int *)&param_1[1]._internal_metadata_.ptr_ = iVar3;
    }
    if (((uVar2 & 2) != 0) &&
       (iVar3 = *(int *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4), iVar3 != 0)) {
      *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4) = iVar3;
    }
    if (((uVar2 & 4) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
    }
    if (((uVar2 & 8) != 0) && (lVar1 = param_2[2]._internal_metadata_.ptr_, lVar1 != 0)) {
      param_1[2]._internal_metadata_.ptr_ = lVar1;
    }
    if (((uVar2 & 0x10) != 0) && (param_2[3]._padding_ != 0)) {
      param_1[3]._padding_ = param_2[3]._padding_;
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

// Clear @ 14c161840

void __thiscall messages::PkSpawnInfo::Clear(PkSpawnInfo *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x1f) != 0) {
    (this->_impl_).pk_mode_type_ = 0;
    (this->_impl_).criminal_point_ = 0;
    (this->_impl_).recent_first_attack_player_uid_ = 0;
    (this->_impl_).recent_first_attack_valid_real_ticks_ = 0.0;
    (this->_impl_).my_player_uid_first_attack_valid_real_ticks_ = 0.0;
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

// ByteSizeLong @ 14c161870

ulong64 __thiscall messages::PkSpawnInfo::ByteSizeLong(PkSpawnInfo *this)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  __uint64 _Var5;
  int iVar6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var5 = 0;
  if ((uVar1 & 0x1f) != 0) {
    if (((uVar1 & 1) != 0) && (iVar6 = (this->_impl_).pk_mode_type_, iVar6 != 0)) {
      uVar3 = (longlong)iVar6 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar6 = 0x3f - (int)lVar2;
      }
      else {
        iVar6 = (int)LZCOUNT(uVar3);
      }
      _Var5 = (ulonglong)(iVar6 * -9 + 0x280U >> 6) + 1;
    }
    if (((uVar1 & 2) != 0) && (iVar6 = (this->_impl_).criminal_point_, iVar6 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var5 = _Var5 + uVar4;
    }
    if (((uVar1 & 4) != 0) && (uVar3 = (this->_impl_).recent_first_attack_player_uid_, uVar3 != 0))
    {
      uVar3 = uVar3 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar6 = 0x3f - (int)lVar2;
      }
      else {
        iVar6 = (int)LZCOUNT(uVar3);
      }
      _Var5 = _Var5 + (iVar6 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 8) != 0) && ((this->_impl_).recent_first_attack_valid_real_ticks_ != 0.0)) {
      _Var5 = _Var5 + 9;
    }
    if (((uVar1 & 0x10) != 0) &&
       ((this->_impl_).my_player_uid_first_attack_valid_real_ticks_ != 0.0)) {
      _Var5 = _Var5 + 9;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c161980

uchar * __thiscall
messages::PkSpawnInfo::_InternalSerialize
          (PkSpawnInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uchar *puVar6;
  byte bVar7;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).pk_mode_type_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar5 = (ulonglong)(this->_impl_).pk_mode_type_;
    *param_1 = 8;
    while( true ) {
      pbVar4 = param_1 + 1;
      bVar7 = (byte)uVar5;
      if (uVar5 < 0x80) break;
      uVar5 = uVar5 >> 7;
      *pbVar4 = bVar7 | 0x80;
      param_1 = pbVar4;
    }
    *pbVar4 = bVar7;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (iVar2 = (this->_impl_).criminal_point_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (lVar3 = (this->_impl_).recent_first_attack_player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<3>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     ((this->_impl_).recent_first_attack_valid_real_ticks_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    dVar1 = (this->_impl_).recent_first_attack_valid_real_ticks_;
    *param_1 = 0x21;
    *(double *)(param_1 + 1) = dVar1;
    param_1 = param_1 + 9;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     ((this->_impl_).my_player_uid_first_attack_valid_real_ticks_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    dVar1 = (this->_impl_).my_player_uid_first_attack_valid_real_ticks_;
    *param_1 = 0x29;
    *(double *)(param_1 + 1) = dVar1;
    param_1 = param_1 + 9;
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar6 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar6;
}

// GetClassData @ 14c161ab0

ClassData * __thiscall messages::PkSpawnInfo::GetClassData(PkSpawnInfo *this)

{
  return (ClassData *)&PkSpawnInfo_class_data_;
}

// PlacementNew_ @ 14c161ad0

void * __cdecl messages::PkSpawnInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7PkSpawnInfo_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c161b00

void * __thiscall
messages::PkSpawnInfo::_scalar_deleting_destructor_(PkSpawnInfo *this,uint param_1)

{
  this->_padding_ = (longlong)&___7PkSpawnInfo_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// MergeImpl @ 14c161b50

void __cdecl messages::None::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2[1]._padding_;
  if (((uVar2 & 1) != 0) && (cVar1 = (char)param_2[1]._internal_metadata_.ptr_, cVar1 != '\0')) {
    *(char *)&param_1[1]._internal_metadata_.ptr_ = cVar1;
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

// Clear @ 14c161b90

void __thiscall messages::None::Clear(None *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  (this->_impl_).phantom_data_ = false;
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

// ByteSizeLong @ 14c161bb0

ulong64 __thiscall messages::None::ByteSizeLong(None *this)

{
  __uint64 _Var1;
  
  _Var1 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).phantom_data_ != false)
     ) {
    _Var1 = 2;
  }
  _Var1 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var1,&(this->_impl_)._cached_size_);
  return _Var1;
}

// _InternalSerialize @ 14c161be0

uchar * __thiscall
messages::None::_InternalSerialize(None *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  bool bVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).phantom_data_ != false)
     ) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar1 = (this->_impl_).phantom_data_;
    *param_1 = '\b';
    param_1[1] = bVar1 != false;
    param_1 = param_1 + 2;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c161c60

ClassData * __thiscall messages::None::GetClassData(None *this)

{
  return (ClassData *)&None_class_data_;
}

// PlacementNew_ @ 14c161c80

void * __cdecl messages::None::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7None_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined1 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c161cb0

void * __thiscall messages::None::_scalar_deleting_destructor_(None *this,uint param_1)

{
  this->_padding_ = (longlong)&___7None_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c161d00

void __cdecl messages::MainCharacter::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = (uint)param_2[1]._padding_;
  if (((uVar1 & 1) != 0) && (lVar2 = param_2[1]._internal_metadata_.ptr_, lVar2 != 0)) {
    param_1[1]._internal_metadata_.ptr_ = lVar2;
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

// Clear @ 14c161d40

void __thiscall messages::MainCharacter::Clear(MainCharacter *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  (this->_impl_).bits_ = 0;
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

// ByteSizeLong @ 14c161d70

ulong64 __thiscall messages::MainCharacter::ByteSizeLong(MainCharacter *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (uVar3 = (this->_impl_).bits_, uVar3 != 0)) {
    uVar3 = uVar3 | 1;
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

// _InternalSerialize @ 14c161dd0

uchar * __thiscall
messages::MainCharacter::_InternalSerialize
          (MainCharacter *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  byte *pbVar1;
  uchar *puVar2;
  byte bVar3;
  ulonglong uVar4;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).bits_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (this->_impl_).bits_;
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
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar2;
}

// GetClassData @ 14c161e70

ClassData * __thiscall messages::MainCharacter::GetClassData(MainCharacter *this)

{
  return (ClassData *)&MainCharacter_class_data_;
}

// PlacementNew_ @ 14c161e90

void * __cdecl messages::MainCharacter::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7MainCharacter_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c161ec0

void * __thiscall
messages::MainCharacter::_scalar_deleting_destructor_(MainCharacter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7MainCharacter_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c161f10

void __cdecl messages::InteractionStuffType::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = (uint)param_2[1]._padding_;
  if (((uVar1 & 1) != 0) && (lVar2 = param_2[1]._internal_metadata_.ptr_, lVar2 != 0)) {
    param_1[1]._internal_metadata_.ptr_ = lVar2;
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

// Clear @ 14c161f50

void __thiscall messages::InteractionStuffType::Clear(InteractionStuffType *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  (this->_impl_).stuff_entity_id_ = 0;
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

// ByteSizeLong @ 14c161f80

ulong64 __thiscall messages::InteractionStuffType::ByteSizeLong(InteractionStuffType *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (uVar3 = (this->_impl_).stuff_entity_id_, uVar3 != 0)) {
    uVar3 = uVar3 | 1;
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

// _InternalSerialize @ 14c161fe0

uchar * __thiscall
messages::InteractionStuffType::_InternalSerialize
          (InteractionStuffType *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  byte *pbVar1;
  uchar *puVar2;
  byte bVar3;
  ulonglong uVar4;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).stuff_entity_id_ != 0))
  {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (this->_impl_).stuff_entity_id_;
    *param_1 = 0x18;
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
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar2;
}

// GetClassData @ 14c162080

ClassData * __thiscall messages::InteractionStuffType::GetClassData(InteractionStuffType *this)

{
  return (ClassData *)&InteractionStuffType_class_data_;
}

// PlacementNew_ @ 14c1620a0

void * __cdecl
messages::InteractionStuffType::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7InteractionStuffType_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c1620d0

void * __thiscall
messages::InteractionStuffType::_scalar_deleting_destructor_
          (InteractionStuffType *this,uint param_1)

{
  this->_padding_ = (longlong)&___7InteractionStuffType_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c162120

void __cdecl messages::InteractionNpcType::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = (uint)param_2[1]._padding_;
  if (((uVar1 & 1) != 0) && (lVar2 = param_2[1]._internal_metadata_.ptr_, lVar2 != 0)) {
    param_1[1]._internal_metadata_.ptr_ = lVar2;
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

// Clear @ 14c162160

void __thiscall messages::InteractionNpcType::Clear(InteractionNpcType *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  (this->_impl_).npc_entity_id_ = 0;
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

// ByteSizeLong @ 14c162190

ulong64 __thiscall messages::InteractionNpcType::ByteSizeLong(InteractionNpcType *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (uVar3 = (this->_impl_).npc_entity_id_, uVar3 != 0)) {
    uVar3 = uVar3 | 1;
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

// _InternalSerialize @ 14c1621f0

uchar * __thiscall
messages::InteractionNpcType::_InternalSerialize
          (InteractionNpcType *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  byte *pbVar1;
  uchar *puVar2;
  byte bVar3;
  ulonglong uVar4;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).npc_entity_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (this->_impl_).npc_entity_id_;
    *param_1 = 0x18;
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
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar2;
}

// GetClassData @ 14c162290

ClassData * __thiscall messages::InteractionNpcType::GetClassData(InteractionNpcType *this)

{
  return (ClassData *)&InteractionNpcType_class_data_;
}

// PlacementNew_ @ 14c1622b0

void * __cdecl
messages::InteractionNpcType::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7InteractionNpcType_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c1622e0

void * __thiscall
messages::InteractionNpcType::_scalar_deleting_destructor_(InteractionNpcType *this,uint param_1)

{
  this->_padding_ = (longlong)&___7InteractionNpcType_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c162330

void __cdecl messages::FrontEndClientSession::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (lVar3 = param_2[1]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[1]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (int)param_2[2]._padding_, iVar2 != 0)) {
      *(int *)&param_1[2]._padding_ = iVar2;
    }
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

// Clear @ 14c162380

void __thiscall messages::FrontEndClientSession::Clear(FrontEndClientSession *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 3) != 0) {
    (this->_impl_).client_session_id_ = 0;
    (this->_impl_).server_index_ = 0;
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

// ByteSizeLong @ 14c1623b0

ulong64 __thiscall messages::FrontEndClientSession::ByteSizeLong(FrontEndClientSession *this)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  __uint64 _Var5;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  uVar3 = 0;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (uVar4 = (this->_impl_).client_session_id_, uVar4 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::UInt64SizePlusOne(uVar4);
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (this->_impl_).server_index_, iVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
      uVar3 = uVar3 + uVar4;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar3,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c162420

uchar * __thiscall
messages::FrontEndClientSession::_InternalSerialize
          (FrontEndClientSession *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  byte *pbVar2;
  uchar *puVar3;
  byte bVar4;
  ulonglong uVar5;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (iVar1 = (this->_impl_).server_index_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar1,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     ((this->_impl_).client_session_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar5 = (this->_impl_).client_session_id_;
    *param_1 = 0x10;
    while( true ) {
      pbVar2 = param_1 + 1;
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x80) break;
      uVar5 = uVar5 >> 7;
      *pbVar2 = bVar4 | 0x80;
      param_1 = pbVar2;
    }
    *pbVar2 = bVar4;
    param_1 = param_1 + 2;
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar3;
}

// GetClassData @ 14c1624e0

ClassData * __thiscall messages::FrontEndClientSession::GetClassData(FrontEndClientSession *this)

{
  return (ClassData *)&FrontEndClientSession_class_data_;
}

// PlacementNew_ @ 14c162500

void * __cdecl
messages::FrontEndClientSession::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7FrontEndClientSession_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// MergeImpl @ 14c162530

void __cdecl messages::FallingInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2[1]._padding_;
  if (((uVar2 & 1) != 0) && (iVar1 = (int)param_2[1]._internal_metadata_.ptr_, iVar1 != 0)) {
    *(int *)&param_1[1]._internal_metadata_.ptr_ = iVar1;
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

// Clear @ 14c162580

void __thiscall messages::FallingInfo::Clear(FallingInfo *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  (this->_impl_).height_ = 0.0;
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

// ByteSizeLong @ 14c1625a0

ulong64 __thiscall messages::FallingInfo::ByteSizeLong(FallingInfo *this)

{
  __uint64 _Var1;
  
  _Var1 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).height_ != 0.0)) {
    _Var1 = 5;
  }
  _Var1 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var1,&(this->_impl_)._cached_size_);
  return _Var1;
}

// _InternalSerialize @ 14c1625d0

uchar * __thiscall
messages::FallingInfo::_InternalSerialize
          (FallingInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  float fVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).height_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    fVar1 = (this->_impl_).height_;
    *param_1 = '\r';
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

// GetClassData @ 14c162650

ClassData * __thiscall messages::FallingInfo::GetClassData(FallingInfo *this)

{
  return (ClassData *)&FallingInfo_class_data_;
}

// PlacementNew_ @ 14c162670

void * __cdecl messages::FallingInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7FallingInfo_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// MergeImpl @ 14c1626a0

void __cdecl messages::All::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2[1]._padding_;
  if (((uVar2 & 1) != 0) && (cVar1 = (char)param_2[1]._internal_metadata_.ptr_, cVar1 != '\0')) {
    *(char *)&param_1[1]._internal_metadata_.ptr_ = cVar1;
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

// Clear @ 14c1626e0

void __thiscall messages::All::Clear(All *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  (this->_impl_).phantom_data_ = false;
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

// ByteSizeLong @ 14c162700

ulong64 __thiscall messages::All::ByteSizeLong(All *this)

{
  __uint64 _Var1;
  
  _Var1 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).phantom_data_ != false)
     ) {
    _Var1 = 2;
  }
  _Var1 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var1,&(this->_impl_)._cached_size_);
  return _Var1;
}

// _InternalSerialize @ 14c162730

uchar * __thiscall
messages::All::_InternalSerialize(All *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  bool bVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).phantom_data_ != false)
     ) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar1 = (this->_impl_).phantom_data_;
    *param_1 = '\b';
    param_1[1] = bVar1 != false;
    param_1 = param_1 + 2;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c1627b0

ClassData * __thiscall messages::All::GetClassData(All *this)

{
  return (ClassData *)&All_class_data_;
}

// PlacementNew_ @ 14c1627d0

void * __cdecl messages::All::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7All_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined1 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c162800

void * __thiscall messages::All::_scalar_deleting_destructor_(All *this,uint param_1)

{
  this->_padding_ = (longlong)&___7All_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c162850

void __cdecl messages::Target::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  Arena *pAVar5;
  
  pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = param_1[1]._internal_metadata_.ptr_;
      pvVar4 = (void *)param_2[1]._internal_metadata_.ptr_;
      if (lVar3 == 0) {
        pvVar4 = google::protobuf::Arena::CopyConstruct<messages::PlayerEntity>(pAVar5,pvVar4);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar4;
      }
      else {
        uVar2 = *(uint *)((longlong)pvVar4 + 0x10);
        if (((uVar2 & 1) != 0) && (*(longlong *)((longlong)pvVar4 + 0x18) != 0)) {
          *(longlong *)(lVar3 + 0x18) = *(longlong *)((longlong)pvVar4 + 0x18);
        }
        *(uint *)(lVar3 + 0x10) = *(uint *)(lVar3 + 0x10) | uVar2;
        if ((*(byte *)((longlong)pvVar4 + 8) & 1) != 0) {
          google::protobuf::internal::InternalMetadata::
          DoMergeFrom<google::protobuf::UnknownFieldSet>
                    ((InternalMetadata *)(lVar3 + 8),
                     (UnknownFieldSet *)
                     ((*(ulonglong *)((longlong)pvVar4 + 8) & 0xfffffffffffffffe) + 8));
        }
      }
    }
    if ((uVar1 & 2) != 0) {
      if ((FrontEndClientSession *)param_1[2]._padding_ == (FrontEndClientSession *)0x0) {
        pvVar4 = google::protobuf::Arena::CopyConstruct<messages::FrontEndClientSession>
                           (pAVar5,(FrontEndClientSession *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar4;
      }
      else {
        FrontEndClientSession::MergeFrom
                  ((FrontEndClientSession *)param_1[2]._padding_,
                   (FrontEndClientSession *)param_2[2]._padding_);
      }
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

// Clear @ 14c162940

void __thiscall messages::Target::Clear(Target *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      PlayerEntity::Clear((this->_impl_).player_entity_);
    }
    if ((uVar1 & 2) != 0) {
      FrontEndClientSession::Clear((this->_impl_).front_end_client_session_);
    }
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c1629a0

ulong64 __thiscall messages::Target::ByteSizeLong(Target *this)

{
  PlayerEntity *this_00;
  FrontEndClientSession *this_01;
  longlong lVar1;
  ulonglong uVar2;
  __uint64 _Var3;
  ulong64 uVar4;
  ulong64 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong64 uVar9;
  
  uVar8 = (this->_impl_)._has_bits_.has_bits_[0];
  uVar4 = 0;
  uVar9 = uVar4;
  if ((uVar8 & 3) != 0) {
    if ((uVar8 & 1) != 0) {
      this_00 = (this->_impl_).player_entity_;
      if ((((this_00->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
         (uVar2 = (this_00->_impl_).bits_, uVar9 = 0, uVar2 != 0)) {
        uVar2 = uVar2 | 1;
        if (__isa_available < 5) {
          lVar1 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar7 = 0x3f - (int)lVar1;
        }
        else {
          iVar7 = (int)LZCOUNT(uVar2);
        }
        uVar9 = (ulong64)(iVar7 * -9 + 0x2c0U >> 6);
      }
      _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                        ((Message *)this_00,uVar9,&(this_00->_impl_)._cached_size_);
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
      uVar9 = (ulonglong)(iVar7 * -9 + 0x160U >> 6) + 1 + _Var3;
    }
    if ((uVar8 & 2) != 0) {
      this_01 = (this->_impl_).front_end_client_session_;
      uVar8 = (this_01->_impl_)._has_bits_.has_bits_[0];
      if ((uVar8 & 3) != 0) {
        if (((uVar8 & 1) != 0) && (uVar5 = (this_01->_impl_).client_session_id_, uVar5 != 0)) {
          uVar4 = google::protobuf::internal::WireFormatLite::UInt64SizePlusOne(uVar5);
        }
        if (((uVar8 & 2) != 0) && (iVar7 = (this_01->_impl_).server_index_, iVar7 != 0)) {
          uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar7);
          uVar4 = uVar4 + uVar5;
        }
      }
      _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                        ((Message *)this_01,uVar4,&(this_01->_impl_)._cached_size_);
      uVar8 = (uint)_Var3 | 1;
      if (__isa_available < 5) {
        iVar7 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar7 = 0x1f - iVar7;
      }
      else {
        iVar7 = LZCOUNT(uVar8);
      }
      uVar9 = uVar9 + 1 + (iVar7 * -9 + 0x160U >> 6) + _Var3;
    }
  }
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar9,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c162b20

uchar * __thiscall
messages::Target::_InternalSerialize(Target *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  uchar *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).player_entity_,
                         (int)(((this->_impl_).player_entity_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((uVar1 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (2,(MessageLite *)(this->_impl_).front_end_client_session_,
                         (int)(((this->_impl_).front_end_client_session_)->_impl_)._cached_size_.
                              atom_,param_1,param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c162bd0

ClassData * __thiscall messages::Target::GetClassData(Target *this)

{
  return (ClassData *)&Target_class_data_;
}

// PlacementNew_ @ 14c162bf0

void * __cdecl messages::Target::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7Target_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c162c20

void * __thiscall messages::Target::_scalar_deleting_destructor_(Target *this,uint param_1)

{
  ~Target(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// MergeImpl @ 14c162c60

void __cdecl messages::ProjectileInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  int iVar1;
  uint uVar2;
  MessageLite *pMVar3;
  MessageLite *pMVar4;
  void *pvVar5;
  Arena *pAVar6;
  
  pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
  }
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
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
    if ((uVar2 & 2) != 0) {
      if ((MessageLite *)param_1[2]._padding_ == (MessageLite *)0x0) {
        pvVar5 = google::protobuf::Arena::CopyConstruct<Vector>
                           (pAVar6,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar5;
      }
      else {
        Vector::MergeImpl((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
      }
    }
    if (((uVar2 & 4) != 0) && (iVar1 = (int)param_2[2]._internal_metadata_.ptr_, iVar1 != 0)) {
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar1;
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

// Clear @ 14c162d30

void __thiscall messages::ProjectileInfo::Clear(ProjectileInfo *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      Vector::Clear((this->_impl_).target_position_);
    }
    if ((uVar1 & 2) != 0) {
      Vector::Clear((this->_impl_).aim_position_);
    }
  }
  (this->_impl_).impact_delay_sec_ = 0.0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c162d90

ulong64 __thiscall messages::ProjectileInfo::ByteSizeLong(ProjectileInfo *this)

{
  uint uVar1;
  ulong64 uVar2;
  uint uVar3;
  int iVar4;
  __uint64 _Var5;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var5 = 0;
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = Vector::ByteSizeLong((this->_impl_).target_position_);
      uVar3 = (uint)uVar2 | 1;
      if (__isa_available < 5) {
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 0x1f - iVar4;
      }
      else {
        iVar4 = LZCOUNT(uVar3);
      }
      _Var5 = (ulonglong)(iVar4 * -9 + 0x160U >> 6) + 1 + uVar2;
    }
    if ((uVar1 & 2) != 0) {
      uVar2 = Vector::ByteSizeLong((this->_impl_).aim_position_);
      uVar3 = (uint)uVar2 | 1;
      if (__isa_available < 5) {
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 0x1f - iVar4;
      }
      else {
        iVar4 = LZCOUNT(uVar3);
      }
      _Var5 = _Var5 + 1 + (iVar4 * -9 + 0x160U >> 6) + uVar2;
    }
    if (((uVar1 & 4) != 0) && ((this->_impl_).impact_delay_sec_ != 0.0)) {
      _Var5 = _Var5 + 5;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c162e90

uchar * __thiscall
messages::ProjectileInfo::_InternalSerialize
          (ProjectileInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  float fVar1;
  uint uVar2;
  uchar *puVar3;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     ((this->_impl_).impact_delay_sec_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    fVar1 = (this->_impl_).impact_delay_sec_;
    *param_1 = '\r';
    *(float *)(param_1 + 1) = fVar1;
    param_1 = param_1 + 5;
  }
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar2 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (2,(MessageLite *)(this->_impl_).target_position_,
                         (int)(((this->_impl_).target_position_)->_impl_)._cached_size_.atom_,
                         param_1,param_2);
  }
  if ((uVar2 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (3,(MessageLite *)(this->_impl_).aim_position_,
                         (int)(((this->_impl_).aim_position_)->_impl_)._cached_size_.atom_,param_1,
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

// GetClassData @ 14c162f70

ClassData * __thiscall messages::ProjectileInfo::GetClassData(ProjectileInfo *this)

{
  return (ClassData *)&ProjectileInfo_class_data_;
}

// PlacementNew_ @ 14c162f90

void * __cdecl messages::ProjectileInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ProjectileInfo_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  return param_2;
}

// MergeImpl @ 14c162fc0

void __cdecl messages::MyTransport::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
        pvVar4 = google::protobuf::Arena::CopyConstruct<Vector>(pAVar5,pMVar3);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar4;
      }
      else {
        Vector::MergeImpl(pMVar2,pMVar3);
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

// Clear @ 14c163070

void __thiscall messages::MyTransport::Clear(MyTransport *this)

{
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    Vector::Clear((this->_impl_).relative_position_);
  }
  (this->_impl_).transport_entity_id_ = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c1630c0

ulong64 __thiscall messages::MyTransport::ByteSizeLong(MyTransport *this)

{
  uint uVar1;
  ulong64 uVar2;
  uint uVar3;
  int iVar4;
  __uint64 _Var5;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var5 = 0;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = Vector::ByteSizeLong((this->_impl_).relative_position_);
      uVar3 = (uint)uVar2 | 1;
      if (__isa_available < 5) {
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 0x1f - iVar4;
      }
      else {
        iVar4 = LZCOUNT(uVar3);
      }
      _Var5 = (ulonglong)(iVar4 * -9 + 0x160U >> 6) + 1 + uVar2;
    }
    if (((uVar1 & 2) != 0) && (uVar2 = (this->_impl_).transport_entity_id_, uVar2 != 0)) {
      uVar2 = google::protobuf::internal::WireFormatLite::UInt64SizePlusOne(uVar2);
      _Var5 = _Var5 + uVar2;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c163160

uchar * __thiscall
messages::MyTransport::_InternalSerialize
          (MyTransport *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  byte *pbVar1;
  uchar *puVar2;
  byte bVar3;
  ulonglong uVar4;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     ((this->_impl_).transport_entity_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (this->_impl_).transport_entity_id_;
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
                        (2,(MessageLite *)(this->_impl_).relative_position_,
                         (int)(((this->_impl_).relative_position_)->_impl_)._cached_size_.atom_,
                         param_1,param_2);
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar2;
}

// GetClassData @ 14c163220

ClassData * __thiscall messages::MyTransport::GetClassData(MyTransport *this)

{
  return (ClassData *)&MyTransport_class_data_;
}

// PlacementNew_ @ 14c163240

void * __cdecl messages::MyTransport::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7MyTransport_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// MergeImpl @ 14c163270

void __cdecl messages::MultiTargetHitPoint::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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

// Clear @ 14c163330

void __thiscall messages::MultiTargetHitPoint::Clear(MultiTargetHitPoint *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    Vector::Clear((this->_impl_).target_move_reference_position_);
  }
  if ((uVar1 & 6) != 0) {
    (this->_impl_).hit_capsule_radius_ = 0.0;
    (this->_impl_).hit_point_index_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c163380

ulong64 __thiscall messages::MultiTargetHitPoint::ByteSizeLong(MultiTargetHitPoint *this)

{
  uint uVar1;
  ulong64 uVar2;
  uint uVar3;
  int iVar4;
  __uint64 _Var5;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var5 = 0;
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = Vector::ByteSizeLong((this->_impl_).target_move_reference_position_);
      uVar3 = (uint)uVar2 | 1;
      if (__isa_available < 5) {
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 0x1f - iVar4;
      }
      else {
        iVar4 = LZCOUNT(uVar3);
      }
      _Var5 = (ulonglong)(iVar4 * -9 + 0x160U >> 6) + 1 + uVar2;
    }
    if (((uVar1 & 2) != 0) && ((this->_impl_).hit_capsule_radius_ != 0.0)) {
      _Var5 = _Var5 + 5;
    }
    if (((uVar1 & 4) != 0) && (iVar4 = (this->_impl_).hit_point_index_, iVar4 != 0)) {
      uVar2 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar4);
      _Var5 = _Var5 + uVar2;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c163430

uchar * __thiscall
messages::MultiTargetHitPoint::_InternalSerialize
          (MultiTargetHitPoint *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uchar *puVar4;
  
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar2 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).target_move_reference_position_,
                         (int)(((this->_impl_).target_move_reference_position_)->_impl_).
                              _cached_size_.atom_,param_1,param_2);
  }
  if (((uVar2 & 2) != 0) && ((this->_impl_).hit_capsule_radius_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    fVar1 = (this->_impl_).hit_capsule_radius_;
    *param_1 = '\x15';
    *(float *)(param_1 + 1) = fVar1;
    param_1 = param_1 + 5;
  }
  if (((uVar2 & 4) != 0) && (iVar3 = (this->_impl_).hit_point_index_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar3,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar4 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar4;
  }
  return param_1;
}

// GetClassData @ 14c163500

ClassData * __thiscall messages::MultiTargetHitPoint::GetClassData(MultiTargetHitPoint *this)

{
  return (ClassData *)&MultiTargetHitPoint_class_data_;
}

// PlacementNew_ @ 14c163520

void * __cdecl
messages::MultiTargetHitPoint::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7MultiTargetHitPoint_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// MergeImpl @ 14c163550

void __cdecl messages::LocationType::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  int iVar1;
  uint uVar2;
  MessageLite *pMVar3;
  MessageLite *pMVar4;
  void *pvVar5;
  Arena *pAVar6;
  
  pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
  }
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
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
    if (((uVar2 & 2) != 0) && (iVar1 = (int)param_2[2]._padding_, iVar1 != 0)) {
      *(int *)&param_1[2]._padding_ = iVar1;
    }
    if (((uVar2 & 4) != 0) && (iVar1 = *(int *)((longlong)&param_2[2]._padding_ + 4), iVar1 != 0)) {
      *(int *)((longlong)&param_1[2]._padding_ + 4) = iVar1;
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

// Clear @ 14c163610

void __thiscall messages::LocationType::Clear(LocationType *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    Vector::Clear((this->_impl_).position_);
  }
  if ((uVar1 & 6) != 0) {
    (this->_impl_).id_ = 0;
    (this->_impl_).direction_ = 0.0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c163660

ulong64 __thiscall messages::LocationType::ByteSizeLong(LocationType *this)

{
  uint uVar1;
  ulong64 uVar2;
  uint uVar3;
  int iVar4;
  __uint64 _Var5;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var5 = 0;
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar2 = Vector::ByteSizeLong((this->_impl_).position_);
      uVar3 = (uint)uVar2 | 1;
      if (__isa_available < 5) {
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 0x1f - iVar4;
      }
      else {
        iVar4 = LZCOUNT(uVar3);
      }
      _Var5 = (ulonglong)(iVar4 * -9 + 0x160U >> 6) + 1 + uVar2;
    }
    if (((uVar1 & 2) != 0) && (iVar4 = (this->_impl_).id_, iVar4 != 0)) {
      uVar2 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar4);
      _Var5 = _Var5 + uVar2;
    }
    if (((uVar1 & 4) != 0) && ((this->_impl_).direction_ != 0.0)) {
      _Var5 = _Var5 + 5;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c163710

uchar * __thiscall
messages::LocationType::_InternalSerialize
          (LocationType *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (iVar2 = (this->_impl_).id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar2,param_1);
  }
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (2,(MessageLite *)(this->_impl_).position_,
                         (int)(((this->_impl_).position_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar3 & 4) != 0) && ((this->_impl_).direction_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    fVar1 = (this->_impl_).direction_;
    *param_1 = '\x1d';
    *(float *)(param_1 + 1) = fVar1;
    param_1 = param_1 + 5;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar4 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar4;
  }
  return param_1;
}

// GetClassData @ 14c1637e0

ClassData * __thiscall messages::LocationType::GetClassData(LocationType *this)

{
  return (ClassData *)&LocationType_class_data_;
}

// PlacementNew_ @ 14c163800

void * __cdecl messages::LocationType::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7LocationType_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c163830

void * __thiscall
messages::LocationType::_scalar_deleting_destructor_(LocationType *this,uint param_1)

{
  Vector *this_00;
  
  this->_padding_ = (longlong)&___7LocationType_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).position_;
  if (this_00 != (Vector *)0x0) {
    Vector::~Vector(this_00);
    ::operator_delete(this_00,0x30);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// MergeImpl @ 14c1638b0

void __cdecl messages::CharacterEntityType::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  InternalMetadata *this;
  int iVar1;
  int iVar2;
  void *pvVar3;
  Arena *pAVar4;
  
  this = &param_1->_internal_metadata_;
  pAVar4 = (Arena *)(this->ptr_ & 0xfffffffffffffffe);
  if ((this->ptr_ & 1) != 0) {
    pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
  }
  iVar1 = *(int *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4);
  if (iVar1 != 0) {
    iVar2 = *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        clear_entity((CharacterEntityType *)param_1);
      }
      *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4) = iVar1;
    }
    if (iVar1 == 1) {
      if (iVar2 == 1) {
        MainCharacter::MergeFrom
                  ((MainCharacter *)param_1[1]._padding_,(MainCharacter *)param_2[1]._padding_);
      }
      else {
        pvVar3 = google::protobuf::Arena::CopyConstruct<messages::MainCharacter>
                           (pAVar4,(MainCharacter *)param_2[1]._padding_);
        param_1[1]._padding_ = (longlong)pvVar3;
      }
    }
    else if (iVar1 == 2) {
      if (iVar2 == 2) {
        SubCharacter::MergeFrom
                  ((SubCharacter *)param_1[1]._padding_,(SubCharacter *)param_2[1]._padding_);
      }
      else {
        pvVar3 = google::protobuf::Arena::CopyConstruct<messages::SubCharacter>
                           (pAVar4,(SubCharacter *)param_2[1]._padding_);
        param_1[1]._padding_ = (longlong)pvVar3;
      }
    }
  }
  if (((param_2->_internal_metadata_).ptr_ & 1) == 0) {
    return;
  }
  google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
            (this,(UnknownFieldSet *)
                  (((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8));
  return;
}

// Clear @ 14c163990

void __thiscall messages::CharacterEntityType::Clear(CharacterEntityType *this)

{
  clear_entity(this);
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c1639c0

ulong64 __thiscall messages::CharacterEntityType::ByteSizeLong(CharacterEntityType *this)

{
  MainCharacter *this_00;
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  __uint64 _Var5;
  
  uVar3 = (this->_impl_)._oneof_case_[0];
  _Var5 = 0;
  if ((uVar3 == 1) || (uVar3 == 2)) {
    this_00 = (this->_impl_).entity_.main_;
    if ((((this_00->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
       (uVar2 = (this_00->_impl_).bits_, uVar2 != 0)) {
      uVar2 = uVar2 | 1;
      if (__isa_available < 5) {
        lVar1 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar4 = 0x3f - (int)lVar1;
      }
      else {
        iVar4 = (int)LZCOUNT(uVar2);
      }
      _Var5 = (__uint64)(iVar4 * -9 + 0x2c0U >> 6);
    }
    _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                      ((Message *)this_00,_Var5,&(this_00->_impl_)._cached_size_);
    uVar3 = (uint)_Var5 | 1;
    if (__isa_available < 5) {
      iVar4 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 0x1f - iVar4;
    }
    else {
      iVar4 = LZCOUNT(uVar3);
    }
    _Var5 = _Var5 + 1 + (ulonglong)(iVar4 * -9 + 0x160U >> 6);
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c163a80

uchar * __thiscall
messages::CharacterEntityType::_InternalSerialize
          (CharacterEntityType *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  uchar *puVar2;
  int iVar3;
  
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 == 1) {
    iVar3 = 1;
  }
  else {
    if (uVar1 != 2) goto LAB_14c163ac5;
    iVar3 = 2;
  }
  param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                      (iVar3,(MessageLite *)(this->_impl_).entity_.main_,
                       (int)(((this->_impl_).entity_.main_)->_impl_)._cached_size_.atom_,param_1,
                       param_2);
LAB_14c163ac5:
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c163b00

ClassData * __thiscall messages::CharacterEntityType::GetClassData(CharacterEntityType *this)

{
  return (ClassData *)&CharacterEntityType_class_data_;
}

// PlacementNew_ @ 14c163b20

void * __cdecl
messages::CharacterEntityType::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7CharacterEntityType_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c163b40

void * __thiscall
messages::CharacterEntityType::_scalar_deleting_destructor_(CharacterEntityType *this,uint param_1)

{
  this->_padding_ = (longlong)&___7CharacterEntityType_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((this->_impl_)._oneof_case_[0] != 0) {
    clear_entity(this);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c163ba0

void __cdecl messages::LocationTransportType::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  int iVar1;
  uint uVar2;
  MessageLite *pMVar3;
  MessageLite *pMVar4;
  void *pvVar5;
  Arena *pAVar6;
  
  pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
  }
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 0x1f) != 0) {
    if ((uVar2 & 1) != 0) {
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
    if ((uVar2 & 2) != 0) {
      if ((LocationType *)param_1[2]._padding_ == (LocationType *)0x0) {
        pvVar5 = google::protobuf::Arena::CopyConstruct<messages::LocationType>
                           (pAVar6,(LocationType *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar5;
      }
      else {
        LocationType::MergeFrom
                  ((LocationType *)param_1[2]._padding_,(LocationType *)param_2[2]._padding_);
      }
    }
    if (((uVar2 & 4) != 0) && (iVar1 = (int)param_2[2]._internal_metadata_.ptr_, iVar1 != 0)) {
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar1;
    }
    if (((uVar2 & 8) != 0) &&
       (iVar1 = *(int *)((longlong)&param_2[2]._internal_metadata_.ptr_ + 4), iVar1 != 0)) {
      *(int *)((longlong)&param_1[2]._internal_metadata_.ptr_ + 4) = iVar1;
    }
    if (((uVar2 & 0x10) != 0) && (param_2[3]._padding_ != 0)) {
      param_1[3]._padding_ = param_2[3]._padding_;
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

// Clear @ 14c163ca0

void __thiscall messages::LocationTransportType::Clear(LocationTransportType *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      Vector::Clear((this->_impl_).position_);
    }
    if ((uVar1 & 2) != 0) {
      LocationType::Clear((this->_impl_).fail_location_);
    }
  }
  if ((uVar1 & 0x1c) != 0) {
    (this->_impl_).id_ = 0;
    (this->_impl_).direction_ = 0.0;
    (this->_impl_).transport_entity_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c163d10

ulong64 __thiscall messages::LocationTransportType::ByteSizeLong(LocationTransportType *this)

{
  uint uVar1;
  LocationType *this_00;
  ulong64 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  __uint64 _Var6;
  __uint64 _Var7;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var7 = 0;
  if ((uVar1 & 0x1f) != 0) {
    _Var6 = _Var7;
    if ((uVar1 & 1) != 0) {
      uVar2 = Vector::ByteSizeLong((this->_impl_).position_);
      uVar3 = (uint)uVar2 | 1;
      if (__isa_available < 5) {
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 0x1f - iVar4;
      }
      else {
        iVar4 = LZCOUNT(uVar3);
      }
      _Var6 = (ulonglong)(iVar4 * -9 + 0x160U >> 6) + 1 + uVar2;
    }
    if ((uVar1 & 2) != 0) {
      this_00 = (this->_impl_).fail_location_;
      uVar3 = (this_00->_impl_)._has_bits_.has_bits_[0];
      if ((uVar3 & 7) != 0) {
        if ((uVar3 & 1) != 0) {
          uVar2 = Vector::ByteSizeLong((this_00->_impl_).position_);
          uVar5 = (uint)uVar2 | 1;
          if (__isa_available < 5) {
            iVar4 = 0x1f;
            if (uVar5 != 0) {
              for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
              }
            }
            iVar4 = 0x1f - iVar4;
          }
          else {
            iVar4 = LZCOUNT(uVar5);
          }
          _Var7 = (ulonglong)(iVar4 * -9 + 0x160U >> 6) + 1 + uVar2;
        }
        if (((uVar3 & 2) != 0) && (iVar4 = (this_00->_impl_).id_, iVar4 != 0)) {
          uVar2 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar4);
          _Var7 = _Var7 + uVar2;
        }
        if (((uVar3 & 4) != 0) && ((this_00->_impl_).direction_ != 0.0)) {
          _Var7 = _Var7 + 5;
        }
      }
      _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                        ((Message *)this_00,_Var7,&(this_00->_impl_)._cached_size_);
      uVar3 = (uint)_Var7 | 1;
      if (__isa_available < 5) {
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 0x1f - iVar4;
      }
      else {
        iVar4 = LZCOUNT(uVar3);
      }
      _Var6 = _Var6 + 1 + (iVar4 * -9 + 0x160U >> 6) + _Var7;
    }
    _Var7 = _Var6;
    if (((uVar1 & 4) != 0) && (iVar4 = (this->_impl_).id_, iVar4 != 0)) {
      uVar2 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar4);
      _Var7 = _Var7 + uVar2;
    }
    if (((uVar1 & 8) != 0) && ((this->_impl_).direction_ != 0.0)) {
      _Var7 = _Var7 + 5;
    }
    if (((uVar1 & 0x10) != 0) && (uVar2 = (this->_impl_).transport_entity_, uVar2 != 0)) {
      uVar2 = google::protobuf::internal::WireFormatLite::UInt64SizePlusOne(uVar2);
      _Var7 = _Var7 + uVar2;
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c163ec0

uchar * __thiscall
messages::LocationTransportType::_InternalSerialize
          (LocationTransportType *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uchar *puVar5;
  byte bVar6;
  ulonglong uVar7;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar2 = (this->_impl_).id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar2,param_1);
  }
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (2,(MessageLite *)(this->_impl_).position_,
                         (int)(((this->_impl_).position_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar3 & 8) != 0) && ((this->_impl_).direction_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    fVar1 = (this->_impl_).direction_;
    *param_1 = 0x1d;
    *(float *)(param_1 + 1) = fVar1;
    param_1 = param_1 + 5;
  }
  if (((uVar3 & 0x10) != 0) && ((this->_impl_).transport_entity_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar7 = (this->_impl_).transport_entity_;
    *param_1 = 0x20;
    while( true ) {
      pbVar4 = param_1 + 1;
      bVar6 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *pbVar4 = bVar6 | 0x80;
      param_1 = pbVar4;
    }
    *pbVar4 = bVar6;
    param_1 = param_1 + 2;
  }
  if ((uVar3 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (5,(MessageLite *)(this->_impl_).fail_location_,
                         (int)(((this->_impl_).fail_location_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar5;
}

// GetClassData @ 14c164010

ClassData * __thiscall messages::LocationTransportType::GetClassData(LocationTransportType *this)

{
  return (ClassData *)&LocationTransportType_class_data_;
}

// PlacementNew_ @ 14c164030

void * __cdecl
messages::LocationTransportType::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7LocationTransportType_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c164060

void * __thiscall
messages::LocationTransportType::_scalar_deleting_destructor_
          (LocationTransportType *this,uint param_1)

{
  ~LocationTransportType(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// MergeImpl @ 14c1640a0

void __cdecl messages::ServerChangeType::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  MessageLite *pMVar4;
  Arena *pAVar5;
  byte bVar6;
  Arena *pAVar7;
  bool bVar8;
  
  pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar6 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar7 = pAVar5;
  if (bVar6 != 0) {
    pAVar7 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  iVar1 = *(int *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4);
  if (iVar1 != 0) {
    iVar2 = *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4);
    if (iVar2 != iVar1) {
      if ((iVar2 != 0) && (((iVar2 == 1 || (iVar2 == 2)) || (iVar2 == 3)))) {
        if (bVar6 != 0) {
          pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
        }
        if ((pAVar5 == (Arena *)0x0) &&
           (puVar3 = (undefined8 *)param_1[1]._padding_, puVar3 != (undefined8 *)0x0)) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4) = iVar1;
    }
    if (iVar1 == 1) {
      bVar8 = iVar2 == 1;
    }
    else if (iVar1 == 2) {
      bVar8 = iVar2 == 2;
    }
    else {
      if (iVar1 != 3) goto LAB_14c164168;
      bVar8 = iVar2 == 3;
    }
    if (bVar8) {
      google::protobuf::Message::MergeFrom
                ((Message *)param_1[1]._padding_,(Message *)param_2[1]._padding_);
    }
    else {
      pMVar4 = google::protobuf::MessageLite::CopyConstruct
                         (pAVar7,(MessageLite *)param_2[1]._padding_);
      param_1[1]._padding_ = (longlong)pMVar4;
    }
  }
LAB_14c164168:
  if (((param_2->_internal_metadata_).ptr_ & 1) == 0) {
    return;
  }
  google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
            (&param_1->_internal_metadata_,
             (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8));
  return;
}

// Clear @ 14c1641b0

void __thiscall messages::ServerChangeType::Clear(ServerChangeType *this)

{
  uint uVar1;
  Message *pMVar2;
  undefined8 *puVar3;
  
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    puVar3 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar3 = (undefined8 *)*puVar3;
    }
    if ((puVar3 == (undefined8 *)0x0) &&
       (pMVar2 = (this->_impl_).item_.zone_island_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c164220

ulong64 __thiscall messages::ServerChangeType::ByteSizeLong(ServerChangeType *this)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  uVar2 = (this->_impl_)._oneof_case_[0];
  if (uVar2 != 1) {
    if ((uVar2 != 2) && (uVar2 != 3)) goto LAB_14c16427c;
  }
  lVar1 = (**(code **)(*(longlong *)(this->_impl_).item_.zone_island_ + 0x10))();
  uVar2 = (uint)lVar1 | 1;
  if (__isa_available < 5) {
    iVar3 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar3 = 0x1f - iVar3;
  }
  else {
    iVar3 = LZCOUNT(uVar2);
  }
  _Var4 = (ulonglong)(iVar3 * -9 + 0x160U >> 6) + 1 + lVar1;
LAB_14c16427c:
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c1642a0

uchar * __thiscall
messages::ServerChangeType::_InternalSerialize
          (ServerChangeType *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 == 1) {
    iVar2 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).item_.zone_island_);
    iVar4 = 1;
  }
  else if (uVar1 == 2) {
    iVar2 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).item_.zone_island_);
    iVar4 = 2;
  }
  else {
    if (uVar1 != 3) goto LAB_14c164313;
    iVar2 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).item_.zone_island_);
    iVar4 = 3;
  }
  param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                      (iVar4,(MessageLite *)(this->_impl_).item_.zone_island_,iVar2,param_1,param_2)
  ;
LAB_14c164313:
  if ((this->_padding_ & 1) != 0) {
    puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14c164360

ClassData * __thiscall messages::ServerChangeType::GetClassData(ServerChangeType *this)

{
  return (ClassData *)&ServerChangeType_class_data_;
}

// PlacementNew_ @ 14c164380

void * __cdecl messages::ServerChangeType::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ServerChangeType_messages__6B_;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// CopyConstruct<messages::LocationType> @ 14c1643a0

void * __cdecl
google::protobuf::Arena::CopyConstruct<messages::LocationType>(Arena *param_1,void *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  if (param_1 == (Arena *)0x0) {
    puVar1 = ::operator_new(0x28);
  }
  else {
    puVar1 = Allocate(param_1,0x28);
  }
  puVar1[1] = param_1;
  *puVar1 = &___7LocationType_messages__6B_;
  if ((*(byte *)((longlong)param_2 + 8) & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(puVar1 + 1),
               (UnknownFieldSet *)((*(ulonglong *)((longlong)param_2 + 8) & 0xfffffffffffffffe) + 8)
              );
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
  if ((*(byte *)(puVar1 + 2) & 1) != 0) {
    pvVar2 = CopyConstruct<Vector>(param_1,*(void **)((longlong)param_2 + 0x18));
  }
  puVar1[3] = pvVar2;
  puVar1[4] = *(undefined8 *)((longlong)param_2 + 0x20);
  return puVar1;
}

// CopyConstruct<messages::MainCharacter> @ 14c164450

void * __cdecl
google::protobuf::Arena::CopyConstruct<messages::MainCharacter>(Arena *param_1,void *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (Arena *)0x0) {
    puVar1 = ::operator_new(0x20);
  }
  else {
    puVar1 = Allocate(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &___7MainCharacter_messages__6B_;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  puVar1[3] = *(undefined8 *)((longlong)param_2 + 0x18);
  if ((*(byte *)((longlong)param_2 + 8) & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(puVar1 + 1),
               (UnknownFieldSet *)((*(ulonglong *)((longlong)param_2 + 8) & 0xfffffffffffffffe) + 8)
              );
  }
  return puVar1;
}

// CopyConstruct<messages::PlayerEntity> @ 14c1644e0

void * __cdecl
google::protobuf::Arena::CopyConstruct<messages::PlayerEntity>(Arena *param_1,void *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (Arena *)0x0) {
    puVar1 = ::operator_new(0x20);
  }
  else {
    puVar1 = Allocate(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &___7PlayerEntity_messages__6B_;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  puVar1[3] = *(undefined8 *)((longlong)param_2 + 0x18);
  if ((*(byte *)((longlong)param_2 + 8) & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(puVar1 + 1),
               (UnknownFieldSet *)((*(ulonglong *)((longlong)param_2 + 8) & 0xfffffffffffffffe) + 8)
              );
  }
  return puVar1;
}

// CopyConstruct<messages::SubCharacter> @ 14c164570

void * __cdecl
google::protobuf::Arena::CopyConstruct<messages::SubCharacter>(Arena *param_1,void *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (Arena *)0x0) {
    puVar1 = ::operator_new(0x20);
  }
  else {
    puVar1 = Allocate(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &___7SubCharacter_messages__6B_;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  puVar1[3] = *(undefined8 *)((longlong)param_2 + 0x18);
  if ((*(byte *)((longlong)param_2 + 8) & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(puVar1 + 1),
               (UnknownFieldSet *)((*(ulonglong *)((longlong)param_2 + 8) & 0xfffffffffffffffe) + 8)
              );
  }
  return puVar1;
}

// GetOwnedMessage<messages::LocationTransportType> @ 14c164600

LocationTransportType * __cdecl
google::protobuf::internal::GetOwnedMessage<messages::LocationTransportType>
          (Arena *param_1,LocationTransportType *param_2,Arena *param_3)

{
  LocationTransportType *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (LocationTransportType *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (LocationTransportType *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<messages::LocationType> @ 14c164610

LocationType * __cdecl
google::protobuf::internal::GetOwnedMessage<messages::LocationType>
          (Arena *param_1,LocationType *param_2,Arena *param_3)

{
  LocationType *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (LocationType *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (LocationType *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<messages::MainCharacter> @ 14c164620

MainCharacter * __cdecl
google::protobuf::internal::GetOwnedMessage<messages::MainCharacter>
          (Arena *param_1,MainCharacter *param_2,Arena *param_3)

{
  MainCharacter *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (MainCharacter *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (MainCharacter *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<messages::SubCharacter> @ 14c164630

SubCharacter * __cdecl
google::protobuf::internal::GetOwnedMessage<messages::SubCharacter>
          (Arena *param_1,SubCharacter *param_2,Arena *param_3)

{
  SubCharacter *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SubCharacter *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SubCharacter *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// All @ 14c164640

All * __thiscall messages::All::All(All *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7All_messages__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).phantom_data_ = false;
  return this;
}

// All @ 14c164670

All * __thiscall messages::All::All(All *this,Arena *param_1,All *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7All_messages__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).phantom_data_ = (param_2->_impl_).phantom_data_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// CharacterEntityType @ 14c1646d0

CharacterEntityType * __thiscall
messages::CharacterEntityType::CharacterEntityType(CharacterEntityType *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7CharacterEntityType_messages__6B_;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = 0;
  return this;
}

// CharacterEntityType @ 14c1646f0

CharacterEntityType * __thiscall
messages::CharacterEntityType::CharacterEntityType
          (CharacterEntityType *this,Arena *param_1,CharacterEntityType *param_2)

{
  uint uVar1;
  MainCharacter *pMVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7CharacterEntityType_messages__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  uVar1 = (param_2->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = uVar1;
  if (uVar1 == 1) {
    pMVar2 = google::protobuf::Arena::CopyConstruct<messages::MainCharacter>
                       (param_1,(param_2->_impl_).entity_.main_);
  }
  else {
    if (uVar1 != 2) {
      return this;
    }
    pMVar2 = google::protobuf::Arena::CopyConstruct<messages::SubCharacter>
                       (param_1,(param_2->_impl_).entity_.main_);
  }
  (this->_impl_).entity_.main_ = pMVar2;
  return this;
}

// FallingInfo @ 14c164780

FallingInfo * __thiscall messages::FallingInfo::FallingInfo(FallingInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FallingInfo_messages__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).height_ = 0.0;
  return this;
}

// FallingInfo @ 14c1647b0

FallingInfo * __thiscall
messages::FallingInfo::FallingInfo(FallingInfo *this,Arena *param_1,FallingInfo *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FallingInfo_messages__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).height_ = (param_2->_impl_).height_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// FrontEndClientSession @ 14c164810

FrontEndClientSession * __thiscall
messages::FrontEndClientSession::FrontEndClientSession(FrontEndClientSession *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FrontEndClientSession_messages__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).client_session_id_ = 0;
  (this->_impl_).server_index_ = 0;
  return this;
}

// FrontEndClientSession @ 14c164840

FrontEndClientSession * __thiscall
messages::FrontEndClientSession::FrontEndClientSession
          (FrontEndClientSession *this,Arena *param_1,FrontEndClientSession *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FrontEndClientSession_messages__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).client_session_id_ = (param_2->_impl_).client_session_id_;
  (this->_impl_).server_index_ = (param_2->_impl_).server_index_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// InteractionNpcType @ 14c1648a0

InteractionNpcType * __thiscall
messages::InteractionNpcType::InteractionNpcType(InteractionNpcType *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7InteractionNpcType_messages__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).npc_entity_id_ = 0;
  return this;
}

// InteractionNpcType @ 14c1648d0

InteractionNpcType * __thiscall
messages::InteractionNpcType::InteractionNpcType
          (InteractionNpcType *this,Arena *param_1,InteractionNpcType *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7InteractionNpcType_messages__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).npc_entity_id_ = (param_2->_impl_).npc_entity_id_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// InteractionStuffType @ 14c164930

InteractionStuffType * __thiscall
messages::InteractionStuffType::InteractionStuffType(InteractionStuffType *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7InteractionStuffType_messages__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).stuff_entity_id_ = 0;
  return this;
}

// InteractionStuffType @ 14c164960

InteractionStuffType * __thiscall
messages::InteractionStuffType::InteractionStuffType
          (InteractionStuffType *this,Arena *param_1,InteractionStuffType *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7InteractionStuffType_messages__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).stuff_entity_id_ = (param_2->_impl_).stuff_entity_id_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// LocationTransportType @ 14c1649c0

LocationTransportType * __thiscall
messages::LocationTransportType::LocationTransportType(LocationTransportType *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7LocationTransportType_messages__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).position_ = (Vector *)0x0;
  (this->_impl_).fail_location_ = (LocationType *)0x0;
  (this->_impl_).id_ = 0;
  (this->_impl_).direction_ = 0.0;
  (this->_impl_).transport_entity_ = 0;
  return this;
}

// LocationTransportType @ 14c1649f0

LocationTransportType * __thiscall
messages::LocationTransportType::LocationTransportType
          (LocationTransportType *this,Arena *param_1,LocationTransportType *param_2)

{
  uint uVar1;
  ulong64 uVar2;
  float fVar3;
  Vector *pVVar4;
  Vector *pVVar5;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7LocationTransportType_messages__6B_;
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
    pVVar5 = google::protobuf::Arena::CopyConstruct<messages::LocationType>
                       (param_1,(param_2->_impl_).fail_location_);
  }
  (this->_impl_).fail_location_ = (LocationType *)pVVar5;
  fVar3 = (param_2->_impl_).direction_;
  uVar2 = (param_2->_impl_).transport_entity_;
  (this->_impl_).id_ = (param_2->_impl_).id_;
  (this->_impl_).direction_ = fVar3;
  (this->_impl_).transport_entity_ = uVar2;
  return this;
}

// LocationType @ 14c164ab0

LocationType * __thiscall messages::LocationType::LocationType(LocationType *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7LocationType_messages__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).position_ = (Vector *)0x0;
  (this->_impl_).id_ = 0;
  (this->_impl_).direction_ = 0.0;
  return this;
}

// LocationType @ 14c164ae0

LocationType * __thiscall
messages::LocationType::LocationType(LocationType *this,Arena *param_1,LocationType *param_2)

{
  float fVar1;
  Vector *pVVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7LocationType_messages__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pVVar2 = (Vector *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pVVar2 = google::protobuf::Arena::CopyConstruct<Vector>(param_1,(param_2->_impl_).position_);
  }
  (this->_impl_).position_ = pVVar2;
  fVar1 = (param_2->_impl_).direction_;
  (this->_impl_).id_ = (param_2->_impl_).id_;
  (this->_impl_).direction_ = fVar1;
  return this;
}

// MainCharacter @ 14c164b70

MainCharacter * __thiscall
messages::MainCharacter::MainCharacter(MainCharacter *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MainCharacter_messages__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).bits_ = 0;
  return this;
}

// MainCharacter @ 14c164ba0

MainCharacter * __thiscall
messages::MainCharacter::MainCharacter(MainCharacter *this,Arena *param_1,MainCharacter *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MainCharacter_messages__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).bits_ = (param_2->_impl_).bits_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// MultiTargetHitPoint @ 14c164c00

MultiTargetHitPoint * __thiscall
messages::MultiTargetHitPoint::MultiTargetHitPoint(MultiTargetHitPoint *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MultiTargetHitPoint_messages__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).target_move_reference_position_ = (Vector *)0x0;
  (this->_impl_).hit_capsule_radius_ = 0.0;
  (this->_impl_).hit_point_index_ = 0;
  return this;
}

// MultiTargetHitPoint @ 14c164c30

MultiTargetHitPoint * __thiscall
messages::MultiTargetHitPoint::MultiTargetHitPoint
          (MultiTargetHitPoint *this,Arena *param_1,MultiTargetHitPoint *param_2)

{
  int iVar1;
  Vector *pVVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MultiTargetHitPoint_messages__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pVVar2 = (Vector *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pVVar2 = google::protobuf::Arena::CopyConstruct<Vector>
                       (param_1,(param_2->_impl_).target_move_reference_position_);
  }
  (this->_impl_).target_move_reference_position_ = pVVar2;
  iVar1 = (param_2->_impl_).hit_point_index_;
  (this->_impl_).hit_capsule_radius_ = (param_2->_impl_).hit_capsule_radius_;
  (this->_impl_).hit_point_index_ = iVar1;
  return this;
}

// MyTransport @ 14c164cc0

MyTransport * __thiscall messages::MyTransport::MyTransport(MyTransport *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MyTransport_messages__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).relative_position_ = (Vector *)0x0;
  (this->_impl_).transport_entity_id_ = 0;
  return this;
}

// MyTransport @ 14c164cf0

MyTransport * __thiscall
messages::MyTransport::MyTransport(MyTransport *this,Arena *param_1,MyTransport *param_2)

{
  Vector *pVVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MyTransport_messages__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pVVar1 = (Vector *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pVVar1 = google::protobuf::Arena::CopyConstruct<Vector>
                       (param_1,(param_2->_impl_).relative_position_);
  }
  (this->_impl_).relative_position_ = pVVar1;
  (this->_impl_).transport_entity_id_ = (param_2->_impl_).transport_entity_id_;
  return this;
}

// None @ 14c164d80

None * __thiscall messages::None::None(None *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7None_messages__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).phantom_data_ = false;
  return this;
}

// None @ 14c164db0

None * __thiscall messages::None::None(None *this,Arena *param_1,None *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7None_messages__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).phantom_data_ = (param_2->_impl_).phantom_data_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// PkSpawnInfo @ 14c164e10

PkSpawnInfo * __thiscall messages::PkSpawnInfo::PkSpawnInfo(PkSpawnInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PkSpawnInfo_messages__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).pk_mode_type_ = 0;
  (this->_impl_).criminal_point_ = 0;
  (this->_impl_).recent_first_attack_player_uid_ = 0;
  (this->_impl_).recent_first_attack_valid_real_ticks_ = 0.0;
  (this->_impl_).my_player_uid_first_attack_valid_real_ticks_ = 0.0;
  return this;
}

// PkSpawnInfo @ 14c164e40

PkSpawnInfo * __thiscall
messages::PkSpawnInfo::PkSpawnInfo(PkSpawnInfo *this,Arena *param_1,PkSpawnInfo *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PkSpawnInfo_messages__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).pk_mode_type_ = (param_2->_impl_).pk_mode_type_;
  (this->_impl_).criminal_point_ = (param_2->_impl_).criminal_point_;
  (this->_impl_).recent_first_attack_player_uid_ = (param_2->_impl_).recent_first_attack_player_uid_
  ;
  (this->_impl_).recent_first_attack_valid_real_ticks_ =
       (param_2->_impl_).recent_first_attack_valid_real_ticks_;
  (this->_impl_).my_player_uid_first_attack_valid_real_ticks_ =
       (param_2->_impl_).my_player_uid_first_attack_valid_real_ticks_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// PlayerEntity @ 14c164ec0

PlayerEntity * __thiscall messages::PlayerEntity::PlayerEntity(PlayerEntity *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PlayerEntity_messages__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).bits_ = 0;
  return this;
}

// PlayerEntity @ 14c164ef0

PlayerEntity * __thiscall
messages::PlayerEntity::PlayerEntity(PlayerEntity *this,Arena *param_1,PlayerEntity *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PlayerEntity_messages__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).bits_ = (param_2->_impl_).bits_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// ProjectileInfo @ 14c164f50

ProjectileInfo * __thiscall
messages::ProjectileInfo::ProjectileInfo(ProjectileInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ProjectileInfo_messages__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).target_position_ = (Vector *)0x0;
  (this->_impl_).aim_position_ = (Vector *)0x0;
  (this->_impl_).impact_delay_sec_ = 0.0;
  return this;
}

// ProjectileInfo @ 14c164f80

ProjectileInfo * __thiscall
messages::ProjectileInfo::ProjectileInfo
          (ProjectileInfo *this,Arena *param_1,ProjectileInfo *param_2)

{
  uint uVar1;
  Vector *pVVar2;
  Vector *pVVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ProjectileInfo_messages__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pVVar3 = (Vector *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  pVVar2 = pVVar3;
  if ((uVar1 & 1) != 0) {
    pVVar2 = google::protobuf::Arena::CopyConstruct<Vector>
                       (param_1,(param_2->_impl_).target_position_);
  }
  (this->_impl_).target_position_ = pVVar2;
  if ((uVar1 & 2) != 0) {
    pVVar3 = google::protobuf::Arena::CopyConstruct<Vector>(param_1,(param_2->_impl_).aim_position_)
    ;
  }
  (this->_impl_).aim_position_ = pVVar3;
  (this->_impl_).impact_delay_sec_ = (param_2->_impl_).impact_delay_sec_;
  return this;
}

// ServerChangeType @ 14c165040

ServerChangeType * __thiscall
messages::ServerChangeType::ServerChangeType(ServerChangeType *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServerChangeType_messages__6B_;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = 0;
  return this;
}

// ServerChangeType @ 14c165060

ServerChangeType * __thiscall
messages::ServerChangeType::ServerChangeType
          (ServerChangeType *this,Arena *param_1,ServerChangeType *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServerChangeType_messages__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  uVar1 = (param_2->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = uVar1;
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    pMVar2 = google::protobuf::MessageLite::CopyConstruct
                       (param_1,(MessageLite *)(param_2->_impl_).item_.zone_island_);
    (this->_impl_).item_.zone_island_ = (Message *)pMVar2;
  }
  return this;
}

// ServerSession @ 14c1650f0

ServerSession * __thiscall
messages::ServerSession::ServerSession(ServerSession *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServerSession_messages__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).id_ = 0;
  return this;
}

// ServerSession @ 14c165120

ServerSession * __thiscall
messages::ServerSession::ServerSession(ServerSession *this,Arena *param_1,ServerSession *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServerSession_messages__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).id_ = (param_2->_impl_).id_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// SlotDeck @ 14c165180

SlotDeck * __thiscall messages::SlotDeck::SlotDeck(SlotDeck *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SlotDeck_messages__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).deck_index_ = 0;
  (this->_impl_).slot_index_ = 0;
  return this;
}

// SlotDeck @ 14c1651b0

SlotDeck * __thiscall messages::SlotDeck::SlotDeck(SlotDeck *this,Arena *param_1,SlotDeck *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SlotDeck_messages__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).deck_index_ = (param_2->_impl_).deck_index_;
  (this->_impl_).slot_index_ = (param_2->_impl_).slot_index_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// SubCharacter @ 14c165210

SubCharacter * __thiscall messages::SubCharacter::SubCharacter(SubCharacter *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SubCharacter_messages__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).bits_ = 0;
  return this;
}

// SubCharacter @ 14c165240

SubCharacter * __thiscall
messages::SubCharacter::SubCharacter(SubCharacter *this,Arena *param_1,SubCharacter *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SubCharacter_messages__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).bits_ = (param_2->_impl_).bits_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// Target @ 14c1652a0

Target * __thiscall messages::Target::Target(Target *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7Target_messages__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).player_entity_ = (PlayerEntity *)0x0;
  (this->_impl_).front_end_client_session_ = (FrontEndClientSession *)0x0;
  return this;
}

// Target @ 14c1652d0

Target * __thiscall messages::Target::Target(Target *this,Arena *param_1,Target *param_2)

{
  uint uVar1;
  PlayerEntity *pPVar2;
  FrontEndClientSession *pFVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7Target_messages__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  uVar1 = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = uVar1;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if ((uVar1 & 1) == 0) {
    pPVar2 = (PlayerEntity *)0x0;
  }
  else {
    pPVar2 = google::protobuf::Arena::CopyConstruct<messages::PlayerEntity>
                       (param_1,(param_2->_impl_).player_entity_);
  }
  (this->_impl_).player_entity_ = pPVar2;
  if ((uVar1 & 2) == 0) {
    (this->_impl_).front_end_client_session_ = (FrontEndClientSession *)0x0;
  }
  else {
    pFVar3 = google::protobuf::Arena::CopyConstruct<messages::FrontEndClientSession>
                       (param_1,(param_2->_impl_).front_end_client_session_);
    (this->_impl_).front_end_client_session_ = pFVar3;
  }
  return this;
}

// ~All @ 14c165380

void __thiscall messages::All::~All(All *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7All_messages__6B_;
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

// ~CharacterEntityType @ 14c1653a0

void __thiscall messages::CharacterEntityType::~CharacterEntityType(CharacterEntityType *this)

{
  this->_padding_ = (longlong)&___7CharacterEntityType_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((this->_impl_)._oneof_case_[0] != 0) {
    clear_entity(this);
    return;
  }
  return;
}

// ~FallingInfo @ 14c1653e0

void __thiscall messages::FallingInfo::~FallingInfo(FallingInfo *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7FallingInfo_messages__6B_;
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

// ~FrontEndClientSession @ 14c165400

void __thiscall messages::FrontEndClientSession::~FrontEndClientSession(FrontEndClientSession *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7FrontEndClientSession_messages__6B_;
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

// ~InteractionNpcType @ 14c165420

void __thiscall messages::InteractionNpcType::~InteractionNpcType(InteractionNpcType *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7InteractionNpcType_messages__6B_;
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

// ~InteractionStuffType @ 14c165440

void __thiscall messages::InteractionStuffType::~InteractionStuffType(InteractionStuffType *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7InteractionStuffType_messages__6B_;
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

// ~LocationTransportType @ 14c165460

void __thiscall messages::LocationTransportType::~LocationTransportType(LocationTransportType *this)

{
  Vector *pVVar1;
  LocationType *pLVar2;
  
  this->_padding_ = (longlong)&___7LocationTransportType_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  pVVar1 = (this->_impl_).position_;
  if (pVVar1 != (Vector *)0x0) {
    Vector::~Vector(pVVar1);
    ::operator_delete(pVVar1,0x30);
  }
  pLVar2 = (this->_impl_).fail_location_;
  if (pLVar2 != (LocationType *)0x0) {
    pLVar2->_padding_ = (longlong)&___7LocationType_messages__6B_;
    if ((pLVar2->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::
      DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&pLVar2->_padding_);
    }
    pVVar1 = (pLVar2->_impl_).position_;
    if (pVVar1 != (Vector *)0x0) {
      Vector::~Vector(pVVar1);
      ::operator_delete(pVVar1,0x30);
    }
    ::operator_delete(pLVar2,0x28);
  }
  return;
}

// ~LocationType @ 14c165500

void __thiscall messages::LocationType::~LocationType(LocationType *this)

{
  Vector *this_00;
  
  this->_padding_ = (longlong)&___7LocationType_messages__6B_;
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

// ~MainCharacter @ 14c165550

void __thiscall messages::MainCharacter::~MainCharacter(MainCharacter *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7MainCharacter_messages__6B_;
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

// ~MultiTargetHitPoint @ 14c165570

void __thiscall messages::MultiTargetHitPoint::~MultiTargetHitPoint(MultiTargetHitPoint *this)

{
  Vector *this_00;
  
  this->_padding_ = (longlong)&___7MultiTargetHitPoint_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).target_move_reference_position_;
  if (this_00 != (Vector *)0x0) {
    Vector::~Vector(this_00);
    ::operator_delete(this_00,0x30);
    return;
  }
  return;
}

// ~MyTransport @ 14c1655c0

void __thiscall messages::MyTransport::~MyTransport(MyTransport *this)

{
  Vector *this_00;
  
  this->_padding_ = (longlong)&___7MyTransport_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).relative_position_;
  if (this_00 != (Vector *)0x0) {
    Vector::~Vector(this_00);
    ::operator_delete(this_00,0x30);
    return;
  }
  return;
}

// ~None @ 14c165610

void __thiscall messages::None::~None(None *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7None_messages__6B_;
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

// ~PkSpawnInfo @ 14c165630

void __thiscall messages::PkSpawnInfo::~PkSpawnInfo(PkSpawnInfo *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7PkSpawnInfo_messages__6B_;
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

// ~PlayerEntity @ 14c165650

void __thiscall messages::PlayerEntity::~PlayerEntity(PlayerEntity *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7PlayerEntity_messages__6B_;
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

// ~ProjectileInfo @ 14c165670

void __thiscall messages::ProjectileInfo::~ProjectileInfo(ProjectileInfo *this)

{
  Vector *pVVar1;
  
  this->_padding_ = (longlong)&___7ProjectileInfo_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  pVVar1 = (this->_impl_).target_position_;
  if (pVVar1 != (Vector *)0x0) {
    Vector::~Vector(pVVar1);
    ::operator_delete(pVVar1,0x30);
  }
  pVVar1 = (this->_impl_).aim_position_;
  if (pVVar1 != (Vector *)0x0) {
    Vector::~Vector(pVVar1);
    ::operator_delete(pVVar1,0x30);
  }
  return;
}

// ~ServerChangeType @ 14c1656f0

void __thiscall messages::ServerChangeType::~ServerChangeType(ServerChangeType *this)

{
  uint uVar1;
  Message *pMVar2;
  undefined8 *puVar3;
  
  this->_padding_ = (longlong)&___7ServerChangeType_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 != 0) {
    if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
      puVar3 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
      if ((this->_padding_ & 1) != 0) {
        puVar3 = (undefined8 *)*puVar3;
      }
      if ((puVar3 == (undefined8 *)0x0) &&
         (pMVar2 = (this->_impl_).item_.zone_island_, pMVar2 != (Message *)0x0)) {
        (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
      }
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// ~ServerSession @ 14c165770

void __thiscall messages::ServerSession::~ServerSession(ServerSession *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7ServerSession_messages__6B_;
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

// ~SlotDeck @ 14c165790

void __thiscall messages::SlotDeck::~SlotDeck(SlotDeck *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7SlotDeck_messages__6B_;
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

// ~SubCharacter @ 14c1657b0

void __thiscall messages::SubCharacter::~SubCharacter(SubCharacter *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7SubCharacter_messages__6B_;
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

// ~Target @ 14c1657d0

void __thiscall messages::Target::~Target(Target *this)

{
  PlayerEntity *pPVar1;
  FrontEndClientSession *pFVar2;
  
  this->_padding_ = (longlong)&___7Target_messages__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  pPVar1 = (this->_impl_).player_entity_;
  if (pPVar1 != (PlayerEntity *)0x0) {
    pPVar1->_padding_ = (longlong)&___7PlayerEntity_messages__6B_;
    if ((pPVar1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::
      DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&pPVar1->_padding_);
    }
    ::operator_delete(pPVar1,0x20);
  }
  pFVar2 = (this->_impl_).front_end_client_session_;
  if (pFVar2 != (FrontEndClientSession *)0x0) {
    pFVar2->_padding_ = (longlong)&___7FrontEndClientSession_messages__6B_;
    if ((pFVar2->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::
      DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&pFVar2->_padding_);
    }
    ::operator_delete(pFVar2,0x28);
  }
  return;
}

// CopyFrom @ 14c165870

void __thiscall messages::All::CopyFrom(All *this,All *param_1)

{
  bool bVar1;
  uint uVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar2 & 1) != 0) && (bVar1 = (param_1->_impl_).phantom_data_, bVar1 != false)) {
      (this->_impl_).phantom_data_ = bVar1;
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

// CopyFrom @ 14c1658d0

void __thiscall
messages::CharacterEntityType::CopyFrom(CharacterEntityType *this,CharacterEntityType *param_1)

{
  uint uVar1;
  uint uVar2;
  SubCharacter *pSVar3;
  MainCharacter *pMVar4;
  Arena *pAVar5;
  
  if (param_1 != this) {
    Clear(this);
    pAVar5 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
    }
    uVar1 = (param_1->_impl_)._oneof_case_[0];
    if (uVar1 != 0) {
      uVar2 = (this->_impl_)._oneof_case_[0];
      if (uVar2 != uVar1) {
        if (uVar2 != 0) {
          clear_entity(this);
        }
        (this->_impl_)._oneof_case_[0] = uVar1;
      }
      if (uVar1 == 1) {
        pMVar4 = (param_1->_impl_).entity_.main_;
        if (uVar2 == 1) {
          MainCharacter::MergeFrom((this->_impl_).entity_.main_,pMVar4);
        }
        else {
          pMVar4 = google::protobuf::Arena::CopyConstruct<messages::MainCharacter>(pAVar5,pMVar4);
          (this->_impl_).entity_.main_ = pMVar4;
        }
      }
      else if (uVar1 == 2) {
        pSVar3 = (param_1->_impl_).entity_.sub_;
        if (uVar2 == 2) {
          SubCharacter::MergeFrom((this->_impl_).entity_.sub_,pSVar3);
        }
        else {
          pMVar4 = google::protobuf::Arena::CopyConstruct<messages::SubCharacter>(pAVar5,pSVar3);
          (this->_impl_).entity_.main_ = pMVar4;
        }
      }
    }
    if ((param_1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&this->_padding_,
                 (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    }
  }
  return;
}

// CopyFrom @ 14c1659c0

void __thiscall messages::FallingInfo::CopyFrom(FallingInfo *this,FallingInfo *param_1)

{
  float fVar1;
  uint uVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar2 & 1) != 0) && (fVar1 = (param_1->_impl_).height_, fVar1 != 0.0)) {
      (this->_impl_).height_ = fVar1;
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

// CopyFrom @ 14c165a30

void __thiscall
messages::FrontEndClientSession::CopyFrom
          (FrontEndClientSession *this,FrontEndClientSession *param_1)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 3) != 0) {
      if (((uVar1 & 1) != 0) && (uVar3 = (param_1->_impl_).client_session_id_, uVar3 != 0)) {
        (this->_impl_).client_session_id_ = uVar3;
      }
      if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).server_index_, iVar2 != 0)) {
        (this->_impl_).server_index_ = iVar2;
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

// CopyFrom @ 14c165aa0

void __thiscall
messages::InteractionNpcType::CopyFrom(InteractionNpcType *this,InteractionNpcType *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar1 & 1) != 0) && (uVar2 = (param_1->_impl_).npc_entity_id_, uVar2 != 0)) {
      (this->_impl_).npc_entity_id_ = uVar2;
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

// CopyFrom @ 14c165b00

void __thiscall
messages::InteractionStuffType::CopyFrom(InteractionStuffType *this,InteractionStuffType *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar1 & 1) != 0) && (uVar2 = (param_1->_impl_).stuff_entity_id_, uVar2 != 0)) {
      (this->_impl_).stuff_entity_id_ = uVar2;
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

// CopyFrom @ 14c165b60

void __thiscall
messages::LocationTransportType::CopyFrom
          (LocationTransportType *this,LocationTransportType *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  Vector *pVVar4;
  LocationType *pLVar5;
  ulong64 uVar6;
  Vector *pVVar7;
  LocationType *pLVar8;
  Arena *pAVar9;
  
  if (param_1 != this) {
    Clear(this);
    pAVar9 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
    }
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar2 & 0x1f) != 0) {
      if ((uVar2 & 1) != 0) {
        pVVar7 = (this->_impl_).position_;
        pVVar4 = (param_1->_impl_).position_;
        if (pVVar7 == (Vector *)0x0) {
          pVVar7 = google::protobuf::Arena::CopyConstruct<Vector>(pAVar9,pVVar4);
          (this->_impl_).position_ = pVVar7;
        }
        else {
          Vector::MergeImpl((MessageLite *)pVVar7,(MessageLite *)pVVar4);
        }
      }
      if ((uVar2 & 2) != 0) {
        pLVar8 = (this->_impl_).fail_location_;
        pLVar5 = (param_1->_impl_).fail_location_;
        if (pLVar8 == (LocationType *)0x0) {
          pLVar8 = google::protobuf::Arena::CopyConstruct<messages::LocationType>(pAVar9,pLVar5);
          (this->_impl_).fail_location_ = pLVar8;
        }
        else {
          LocationType::MergeFrom(pLVar8,pLVar5);
        }
      }
      if (((uVar2 & 4) != 0) && (iVar3 = (param_1->_impl_).id_, iVar3 != 0)) {
        (this->_impl_).id_ = iVar3;
      }
      if (((uVar2 & 8) != 0) && (fVar1 = (param_1->_impl_).direction_, fVar1 != 0.0)) {
        (this->_impl_).direction_ = fVar1;
      }
      if (((uVar2 & 0x10) != 0) && (uVar6 = (param_1->_impl_).transport_entity_, uVar6 != 0)) {
        (this->_impl_).transport_entity_ = uVar6;
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

// CopyFrom @ 14c165c70

void __thiscall messages::LocationType::CopyFrom(LocationType *this,LocationType *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeFrom(this,param_1);
  }
  return;
}

// CopyFrom @ 14c165cb0

void __thiscall messages::MainCharacter::CopyFrom(MainCharacter *this,MainCharacter *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar1 & 1) != 0) && (uVar2 = (param_1->_impl_).bits_, uVar2 != 0)) {
      (this->_impl_).bits_ = uVar2;
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

// CopyFrom @ 14c165d10

void __thiscall
messages::MultiTargetHitPoint::CopyFrom(MultiTargetHitPoint *this,MultiTargetHitPoint *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  Vector *pVVar4;
  Vector *pVVar5;
  Arena *pAVar6;
  
  if (param_1 != this) {
    Clear(this);
    pAVar6 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
    }
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar2 & 7) != 0) {
      if ((uVar2 & 1) != 0) {
        pVVar5 = (this->_impl_).target_move_reference_position_;
        pVVar4 = (param_1->_impl_).target_move_reference_position_;
        if (pVVar5 == (Vector *)0x0) {
          pVVar5 = google::protobuf::Arena::CopyConstruct<Vector>(pAVar6,pVVar4);
          (this->_impl_).target_move_reference_position_ = pVVar5;
        }
        else {
          Vector::MergeImpl((MessageLite *)pVVar5,(MessageLite *)pVVar4);
        }
      }
      if (((uVar2 & 2) != 0) && (fVar1 = (param_1->_impl_).hit_capsule_radius_, fVar1 != 0.0)) {
        (this->_impl_).hit_capsule_radius_ = fVar1;
      }
      if (((uVar2 & 4) != 0) && (iVar3 = (param_1->_impl_).hit_point_index_, iVar3 != 0)) {
        (this->_impl_).hit_point_index_ = iVar3;
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

// CopyFrom @ 14c165de0

void __thiscall messages::MyTransport::CopyFrom(MyTransport *this,MyTransport *param_1)

{
  uint uVar1;
  Vector *pVVar2;
  ulong64 uVar3;
  Vector *pVVar4;
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
        pVVar4 = (this->_impl_).relative_position_;
        pVVar2 = (param_1->_impl_).relative_position_;
        if (pVVar4 == (Vector *)0x0) {
          pVVar4 = google::protobuf::Arena::CopyConstruct<Vector>(pAVar5,pVVar2);
          (this->_impl_).relative_position_ = pVVar4;
        }
        else {
          Vector::MergeImpl((MessageLite *)pVVar4,(MessageLite *)pVVar2);
        }
      }
      if (((uVar1 & 2) != 0) && (uVar3 = (param_1->_impl_).transport_entity_id_, uVar3 != 0)) {
        (this->_impl_).transport_entity_id_ = uVar3;
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

// CopyFrom @ 14c165ea0

void __thiscall messages::None::CopyFrom(None *this,None *param_1)

{
  bool bVar1;
  uint uVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar2 & 1) != 0) && (bVar1 = (param_1->_impl_).phantom_data_, bVar1 != false)) {
      (this->_impl_).phantom_data_ = bVar1;
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

// CopyFrom @ 14c165f00

void __thiscall messages::PkSpawnInfo::CopyFrom(PkSpawnInfo *this,PkSpawnInfo *param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1 != this) {
    Clear(this);
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar2 & 0x1f) != 0) {
      if (((uVar2 & 1) != 0) && (iVar3 = (param_1->_impl_).pk_mode_type_, iVar3 != 0)) {
        (this->_impl_).pk_mode_type_ = iVar3;
      }
      if (((uVar2 & 2) != 0) && (iVar3 = (param_1->_impl_).criminal_point_, iVar3 != 0)) {
        (this->_impl_).criminal_point_ = iVar3;
      }
      if (((uVar2 & 4) != 0) &&
         (lVar4 = (param_1->_impl_).recent_first_attack_player_uid_, lVar4 != 0)) {
        (this->_impl_).recent_first_attack_player_uid_ = lVar4;
      }
      if (((uVar2 & 8) != 0) &&
         (dVar1 = (param_1->_impl_).recent_first_attack_valid_real_ticks_, dVar1 != 0.0)) {
        (this->_impl_).recent_first_attack_valid_real_ticks_ = dVar1;
      }
      if (((uVar2 & 0x10) != 0) &&
         (dVar1 = (param_1->_impl_).my_player_uid_first_attack_valid_real_ticks_, dVar1 != 0.0)) {
        (this->_impl_).my_player_uid_first_attack_valid_real_ticks_ = dVar1;
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

// CopyFrom @ 14c165fc0

void __thiscall messages::PlayerEntity::CopyFrom(PlayerEntity *this,PlayerEntity *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar1 & 1) != 0) && (uVar2 = (param_1->_impl_).bits_, uVar2 != 0)) {
      (this->_impl_).bits_ = uVar2;
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

// CopyFrom @ 14c166020

void __thiscall messages::ProjectileInfo::CopyFrom(ProjectileInfo *this,ProjectileInfo *param_1)

{
  float fVar1;
  uint uVar2;
  Vector *pVVar3;
  Vector *pVVar4;
  Arena *pAVar5;
  
  if (param_1 != this) {
    Clear(this);
    pAVar5 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
    }
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar2 & 7) != 0) {
      if ((uVar2 & 1) != 0) {
        pVVar4 = (this->_impl_).target_position_;
        pVVar3 = (param_1->_impl_).target_position_;
        if (pVVar4 == (Vector *)0x0) {
          pVVar4 = google::protobuf::Arena::CopyConstruct<Vector>(pAVar5,pVVar3);
          (this->_impl_).target_position_ = pVVar4;
        }
        else {
          Vector::MergeImpl((MessageLite *)pVVar4,(MessageLite *)pVVar3);
        }
      }
      if ((uVar2 & 2) != 0) {
        pVVar4 = (this->_impl_).aim_position_;
        pVVar3 = (param_1->_impl_).aim_position_;
        if (pVVar4 == (Vector *)0x0) {
          pVVar4 = google::protobuf::Arena::CopyConstruct<Vector>(pAVar5,pVVar3);
          (this->_impl_).aim_position_ = pVVar4;
        }
        else {
          Vector::MergeImpl((MessageLite *)pVVar4,(MessageLite *)pVVar3);
        }
      }
      if (((uVar2 & 4) != 0) && (fVar1 = (param_1->_impl_).impact_delay_sec_, fVar1 != 0.0)) {
        (this->_impl_).impact_delay_sec_ = fVar1;
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

// CopyFrom @ 14c166110

void __thiscall
messages::ServerChangeType::CopyFrom(ServerChangeType *this,ServerChangeType *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c166150

void __thiscall messages::ServerSession::CopyFrom(ServerSession *this,ServerSession *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar1 & 1) != 0) && (uVar2 = (param_1->_impl_).id_, uVar2 != 0)) {
      (this->_impl_).id_ = uVar2;
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

// CopyFrom @ 14c1661b0

void __thiscall messages::SlotDeck::CopyFrom(SlotDeck *this,SlotDeck *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 3) != 0) {
      if (((uVar1 & 1) != 0) && (iVar2 = (param_1->_impl_).deck_index_, iVar2 != 0)) {
        (this->_impl_).deck_index_ = iVar2;
      }
      if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).slot_index_, iVar2 != 0)) {
        (this->_impl_).slot_index_ = iVar2;
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

// CopyFrom @ 14c166220

void __thiscall messages::SubCharacter::CopyFrom(SubCharacter *this,SubCharacter *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar1 & 1) != 0) && (uVar2 = (param_1->_impl_).bits_, uVar2 != 0)) {
      (this->_impl_).bits_ = uVar2;
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

// CopyFrom @ 14c166280

void __thiscall messages::Target::CopyFrom(Target *this,Target *param_1)

{
  uint uVar1;
  uint uVar2;
  PlayerEntity *pPVar3;
  ulong64 uVar4;
  FrontEndClientSession *pFVar5;
  PlayerEntity *pPVar6;
  FrontEndClientSession *pFVar7;
  Arena *pAVar8;
  
  if (param_1 != this) {
    Clear(this);
    pAVar8 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 3) != 0) {
      if ((uVar1 & 1) != 0) {
        pPVar6 = (this->_impl_).player_entity_;
        pPVar3 = (param_1->_impl_).player_entity_;
        if (pPVar6 == (PlayerEntity *)0x0) {
          pPVar6 = google::protobuf::Arena::CopyConstruct<messages::PlayerEntity>(pAVar8,pPVar3);
          (this->_impl_).player_entity_ = pPVar6;
        }
        else {
          uVar2 = (pPVar3->_impl_)._has_bits_.has_bits_[0];
          if (((uVar2 & 1) != 0) && (uVar4 = (pPVar3->_impl_).bits_, uVar4 != 0)) {
            (pPVar6->_impl_).bits_ = uVar4;
          }
          (pPVar6->_impl_)._has_bits_.has_bits_[0] =
               (pPVar6->_impl_)._has_bits_.has_bits_[0] | uVar2;
          if ((pPVar3->_padding_ & 1) != 0) {
            google::protobuf::internal::InternalMetadata::
            DoMergeFrom<google::protobuf::UnknownFieldSet>
                      ((InternalMetadata *)&pPVar6->_padding_,
                       (UnknownFieldSet *)((pPVar3->_padding_ & 0xfffffffffffffffeU) + 8));
          }
        }
      }
      if ((uVar1 & 2) != 0) {
        pFVar7 = (this->_impl_).front_end_client_session_;
        pFVar5 = (param_1->_impl_).front_end_client_session_;
        if (pFVar7 == (FrontEndClientSession *)0x0) {
          pFVar7 = google::protobuf::Arena::CopyConstruct<messages::FrontEndClientSession>
                             (pAVar8,pFVar5);
          (this->_impl_).front_end_client_session_ = pFVar7;
        }
        else {
          FrontEndClientSession::MergeFrom(pFVar7,pFVar5);
        }
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

// GetMetadata @ 14c166380

Metadata * __thiscall messages::All::GetMetadata(All *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&All_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c1663c0

Metadata * __thiscall
messages::CharacterEntityType::GetMetadata
          (CharacterEntityType *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&CharacterEntityType_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c166400

Metadata * __thiscall
messages::FallingInfo::GetMetadata(FallingInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&FallingInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c166440

Metadata * __thiscall
messages::FrontEndClientSession::GetMetadata
          (FrontEndClientSession *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&FrontEndClientSession_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c166480

Metadata * __thiscall
messages::InteractionNpcType::GetMetadata(InteractionNpcType *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&InteractionNpcType_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c1664c0

Metadata * __thiscall
messages::InteractionStuffType::GetMetadata
          (InteractionStuffType *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&InteractionStuffType_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c166500

Metadata * __thiscall
messages::LocationTransportType::GetMetadata
          (LocationTransportType *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&LocationTransportType_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c166540

Metadata * __thiscall
messages::LocationType::GetMetadata(LocationType *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&LocationType_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c166580

Metadata * __thiscall
messages::MainCharacter::GetMetadata(MainCharacter *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&MainCharacter_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c1665c0

Metadata * __thiscall
messages::MultiTargetHitPoint::GetMetadata
          (MultiTargetHitPoint *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&MultiTargetHitPoint_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c166600

Metadata * __thiscall
messages::MyTransport::GetMetadata(MyTransport *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&MyTransport_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c166640

Metadata * __thiscall messages::None::GetMetadata(None *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&None_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c166680

Metadata * __thiscall
messages::PkSpawnInfo::GetMetadata(PkSpawnInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&PkSpawnInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c1666c0

Metadata * __thiscall
messages::PlayerEntity::GetMetadata(PlayerEntity *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&PlayerEntity_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c166700

Metadata * __thiscall
messages::ProjectileInfo::GetMetadata(ProjectileInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&ProjectileInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c166740

Metadata * __thiscall
messages::ServerChangeType::GetMetadata(ServerChangeType *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&ServerChangeType_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c166780

Metadata * __thiscall
messages::ServerSession::GetMetadata(ServerSession *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&ServerSession_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c1667c0

Metadata * __thiscall
messages::SlotDeck::GetMetadata(SlotDeck *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SlotDeck_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c166800

Metadata * __thiscall
messages::SubCharacter::GetMetadata(SubCharacter *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SubCharacter_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c166840

Metadata * __thiscall messages::Target::GetMetadata(Target *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&Target_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c166880

void __thiscall messages::All::InternalSwap(All *this,All *param_1)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar3;
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar2;
  bVar1 = (this->_impl_).phantom_data_;
  (this->_impl_).phantom_data_ = (param_1->_impl_).phantom_data_;
  (param_1->_impl_).phantom_data_ = bVar1;
  return;
}

// InternalSwap @ 14c1668c0

void __thiscall
messages::CharacterEntityType::InternalSwap(CharacterEntityType *this,CharacterEntityType *param_1)

{
  uint uVar1;
  longlong lVar2;
  EntityUnion EVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  EVar3 = (this->_impl_).entity_;
  (this->_impl_).entity_ = (param_1->_impl_).entity_;
  (param_1->_impl_).entity_ = EVar3;
  uVar1 = (this->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = (param_1->_impl_)._oneof_case_[0];
  (param_1->_impl_)._oneof_case_[0] = uVar1;
  return;
}

// InternalSwap @ 14c166900

void __thiscall messages::FallingInfo::InternalSwap(FallingInfo *this,FallingInfo *param_1)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar3;
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar2;
  fVar1 = (this->_impl_).height_;
  (this->_impl_).height_ = (param_1->_impl_).height_;
  (param_1->_impl_).height_ = fVar1;
  return;
}

// InternalSwap @ 14c166940

void __thiscall
messages::FrontEndClientSession::InternalSwap
          (FrontEndClientSession *this,FrontEndClientSession *param_1)

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
            (&(this->_impl_).client_session_id_,&(this->_impl_).field_0x14,
             &(param_1->_impl_).client_session_id_);
  return;
}

// InternalSwap @ 14c166980

void __thiscall
messages::InteractionNpcType::InternalSwap(InteractionNpcType *this,InteractionNpcType *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulong64 uVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  uVar3 = (this->_impl_).npc_entity_id_;
  (this->_impl_).npc_entity_id_ = (param_1->_impl_).npc_entity_id_;
  (param_1->_impl_).npc_entity_id_ = uVar3;
  return;
}

// InternalSwap @ 14c1669c0

void __thiscall
messages::InteractionStuffType::InternalSwap
          (InteractionStuffType *this,InteractionStuffType *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulong64 uVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  uVar3 = (this->_impl_).stuff_entity_id_;
  (this->_impl_).stuff_entity_id_ = (param_1->_impl_).stuff_entity_id_;
  (param_1->_impl_).stuff_entity_id_ = uVar3;
  return;
}

// InternalSwap @ 14c166a00

void __thiscall
messages::LocationTransportType::InternalSwap
          (LocationTransportType *this,LocationTransportType *param_1)

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

// InternalSwap @ 14c166a40

void __thiscall messages::LocationType::InternalSwap(LocationType *this,LocationType *param_1)

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
            ((char *)&(this->_impl_).position_,(char *)&(param_1->_impl_).position_);
  return;
}

// InternalSwap @ 14c166a80

void __thiscall messages::MainCharacter::InternalSwap(MainCharacter *this,MainCharacter *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulong64 uVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  uVar3 = (this->_impl_).bits_;
  (this->_impl_).bits_ = (param_1->_impl_).bits_;
  (param_1->_impl_).bits_ = uVar3;
  return;
}

// InternalSwap @ 14c166ac0

void __thiscall
messages::MultiTargetHitPoint::InternalSwap(MultiTargetHitPoint *this,MultiTargetHitPoint *param_1)

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
            ((char *)&(this->_impl_).target_move_reference_position_,
             (char *)&(param_1->_impl_).target_move_reference_position_);
  return;
}

// InternalSwap @ 14c166b00

void __thiscall messages::MyTransport::InternalSwap(MyTransport *this,MyTransport *param_1)

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
            ((char *)&(this->_impl_).relative_position_,
             (char *)&(param_1->_impl_).relative_position_);
  return;
}

// InternalSwap @ 14c166b40

void __thiscall messages::None::InternalSwap(None *this,None *param_1)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar3;
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar2;
  bVar1 = (this->_impl_).phantom_data_;
  (this->_impl_).phantom_data_ = (param_1->_impl_).phantom_data_;
  (param_1->_impl_).phantom_data_ = bVar1;
  return;
}

// InternalSwap @ 14c166b80

void __thiscall messages::PkSpawnInfo::InternalSwap(PkSpawnInfo *this,PkSpawnInfo *param_1)

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
            (&(this->_impl_).pk_mode_type_,this + 1,&(param_1->_impl_).pk_mode_type_);
  return;
}

// InternalSwap @ 14c166bc0

void __thiscall messages::PlayerEntity::InternalSwap(PlayerEntity *this,PlayerEntity *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulong64 uVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  uVar3 = (this->_impl_).bits_;
  (this->_impl_).bits_ = (param_1->_impl_).bits_;
  (param_1->_impl_).bits_ = uVar3;
  return;
}

// InternalSwap @ 14c166c00

void __thiscall messages::ProjectileInfo::InternalSwap(ProjectileInfo *this,ProjectileInfo *param_1)

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
            (&(this->_impl_).target_position_,&(this->_impl_).field_0x1c,
             &(param_1->_impl_).target_position_);
  return;
}

// InternalSwap @ 14c166c40

void __thiscall
messages::ServerChangeType::InternalSwap(ServerChangeType *this,ServerChangeType *param_1)

{
  uint uVar1;
  longlong lVar2;
  ItemUnion IVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  IVar3 = (this->_impl_).item_;
  (this->_impl_).item_ = (param_1->_impl_).item_;
  (param_1->_impl_).item_ = IVar3;
  uVar1 = (this->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = (param_1->_impl_)._oneof_case_[0];
  (param_1->_impl_)._oneof_case_[0] = uVar1;
  return;
}

// InternalSwap @ 14c166c80

void __thiscall messages::ServerSession::InternalSwap(ServerSession *this,ServerSession *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  uVar1 = (this->_impl_).id_;
  (this->_impl_).id_ = (param_1->_impl_).id_;
  (param_1->_impl_).id_ = uVar1;
  return;
}

// InternalSwap @ 14c166cc0

void __thiscall messages::SlotDeck::InternalSwap(SlotDeck *this,SlotDeck *param_1)

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
            (&(this->_impl_).deck_index_,this + 1,&(param_1->_impl_).deck_index_);
  return;
}

// InternalSwap @ 14c166d00

void __thiscall messages::SubCharacter::InternalSwap(SubCharacter *this,SubCharacter *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulong64 uVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  uVar3 = (this->_impl_).bits_;
  (this->_impl_).bits_ = (param_1->_impl_).bits_;
  (param_1->_impl_).bits_ = uVar3;
  return;
}

// InternalSwap @ 14c166d40

void __thiscall messages::Target::InternalSwap(Target *this,Target *param_1)

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
            ((char *)&(this->_impl_).player_entity_,(char *)&(param_1->_impl_).player_entity_);
  return;
}

// MergeFrom @ 14c166d80

void __thiscall
messages::FrontEndClientSession::MergeFrom
          (FrontEndClientSession *this,FrontEndClientSession *param_1)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  
  uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (uVar3 = (param_1->_impl_).client_session_id_, uVar3 != 0)) {
      (this->_impl_).client_session_id_ = uVar3;
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).server_index_, iVar2 != 0)) {
      (this->_impl_).server_index_ = iVar2;
    }
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar1;
  if ((param_1->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    return;
  }
  return;
}

// MergeFrom @ 14c166dd0

void __thiscall messages::LocationType::MergeFrom(LocationType *this,LocationType *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  Vector *pVVar4;
  Vector *pVVar5;
  Arena *pAVar6;
  
  pAVar6 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
  }
  uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
      pVVar5 = (this->_impl_).position_;
      pVVar4 = (param_1->_impl_).position_;
      if (pVVar5 == (Vector *)0x0) {
        pVVar5 = google::protobuf::Arena::CopyConstruct<Vector>(pAVar6,pVVar4);
        (this->_impl_).position_ = pVVar5;
      }
      else {
        Vector::MergeImpl((MessageLite *)pVVar5,(MessageLite *)pVVar4);
      }
    }
    if (((uVar2 & 2) != 0) && (iVar3 = (param_1->_impl_).id_, iVar3 != 0)) {
      (this->_impl_).id_ = iVar3;
    }
    if (((uVar2 & 4) != 0) && (fVar1 = (param_1->_impl_).direction_, fVar1 != 0.0)) {
      (this->_impl_).direction_ = fVar1;
    }
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar2;
  if ((param_1->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return;
}

// MergeFrom @ 14c166e90

void __thiscall messages::MainCharacter::MergeFrom(MainCharacter *this,MainCharacter *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  
  uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
  if (((uVar1 & 1) != 0) && (uVar2 = (param_1->_impl_).bits_, uVar2 != 0)) {
    (this->_impl_).bits_ = uVar2;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar1;
  if ((param_1->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    return;
  }
  return;
}

// MergeFrom @ 14c166ed0

void __thiscall messages::SubCharacter::MergeFrom(SubCharacter *this,SubCharacter *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  
  uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
  if (((uVar1 & 1) != 0) && (uVar2 = (param_1->_impl_).bits_, uVar2 != 0)) {
    (this->_impl_).bits_ = uVar2;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar1;
  if ((param_1->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    return;
  }
  return;
}

// clear_aim_position @ 14c166f10

void __thiscall messages::ProjectileInfo::clear_aim_position(ProjectileInfo *this)

{
  Vector *this_00;
  
  this_00 = (this->_impl_).aim_position_;
  if (this_00 != (Vector *)0x0) {
    Vector::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// clear_entity @ 14c166f40

void __thiscall messages::CharacterEntityType::clear_entity(CharacterEntityType *this)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  MainCharacter *pMVar4;
  
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 == 1) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 != (undefined8 *)0x0) ||
       (pMVar4 = (this->_impl_).entity_.main_, pMVar4 == (MainCharacter *)0x0)) goto LAB_14c166fcc;
    ppuVar3 = &___7MainCharacter_messages__6B_;
  }
  else {
    if (uVar1 != 2) goto LAB_14c166fcc;
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 != (undefined8 *)0x0) ||
       (pMVar4 = (this->_impl_).entity_.main_, pMVar4 == (MainCharacter *)0x0)) goto LAB_14c166fcc;
    ppuVar3 = &___7SubCharacter_messages__6B_;
  }
  pMVar4->_padding_ = (longlong)ppuVar3;
  if ((pMVar4->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&pMVar4->_padding_)
    ;
  }
  ::operator_delete(pMVar4,0x20);
LAB_14c166fcc:
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// clear_item @ 14c166ff0

void __thiscall messages::ServerChangeType::clear_item(ServerChangeType *this)

{
  uint uVar1;
  Message *pMVar2;
  undefined8 *puVar3;
  
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    puVar3 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar3 = (undefined8 *)*puVar3;
    }
    if ((puVar3 == (undefined8 *)0x0) &&
       (pMVar2 = (this->_impl_).item_.zone_island_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// clear_position @ 14c167050

void __thiscall messages::LocationTransportType::clear_position(LocationTransportType *this)

{
  Vector *this_00;
  
  this_00 = (this->_impl_).position_;
  if (this_00 != (Vector *)0x0) {
    Vector::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_position @ 14c167080

void __thiscall messages::LocationType::clear_position(LocationType *this)

{
  Vector *this_00;
  
  this_00 = (this->_impl_).position_;
  if (this_00 != (Vector *)0x0) {
    Vector::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_relative_position @ 14c1670b0

void __thiscall messages::MyTransport::clear_relative_position(MyTransport *this)

{
  Vector *this_00;
  
  this_00 = (this->_impl_).relative_position_;
  if (this_00 != (Vector *)0x0) {
    Vector::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_target_move_reference_position @ 14c1670e0

void __thiscall
messages::MultiTargetHitPoint::clear_target_move_reference_position(MultiTargetHitPoint *this)

{
  Vector *this_00;
  
  this_00 = (this->_impl_).target_move_reference_position_;
  if (this_00 != (Vector *)0x0) {
    Vector::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_target_position @ 14c167110

void __thiscall messages::ProjectileInfo::clear_target_position(ProjectileInfo *this)

{
  Vector *this_00;
  
  this_00 = (this->_impl_).target_position_;
  if (this_00 != (Vector *)0x0) {
    Vector::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// set_allocated_main @ 14c167140

void __thiscall
messages::CharacterEntityType::set_allocated_main(CharacterEntityType *this,MainCharacter *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_entity(this);
  if (param_1 != (MainCharacter *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (MainCharacter *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 1;
    (this->_impl_).entity_.main_ = param_1;
  }
  return;
}

// set_allocated_sub @ 14c1671c0

void __thiscall
messages::CharacterEntityType::set_allocated_sub(CharacterEntityType *this,SubCharacter *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_entity(this);
  if (param_1 != (SubCharacter *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SubCharacter *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 2;
    (this->_impl_).entity_.sub_ = param_1;
  }
  return;
}

// set_allocated_transport_location @ 14c167240

void __thiscall
messages::ServerChangeType::set_allocated_transport_location
          (ServerChangeType *this,LocationTransportType *param_1)

{
  uint uVar1;
  Message *pMVar2;
  Arena *pAVar3;
  Arena *pAVar4;
  byte bVar5;
  
  pAVar4 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar5 = (byte)this->_padding_ & 1;
  pAVar3 = pAVar4;
  if (bVar5 != 0) {
    pAVar3 = (Arena *)(pAVar4->impl_).tag_and_id_;
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    if (bVar5 != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if ((pAVar4 == (Arena *)0x0) &&
       (pMVar2 = (this->_impl_).item_.zone_island_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (LocationTransportType *)0x0) {
    pAVar4 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if (pAVar3 != pAVar4) {
      param_1 = (LocationTransportType *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar3,(MessageLite *)param_1,pAVar4);
    }
    (this->_impl_)._oneof_case_[0] = 3;
    (this->_impl_).item_.zone_island_ = (Message *)param_1;
  }
  return;
}

// set_allocated_warp_location @ 14c167300

void __thiscall
messages::ServerChangeType::set_allocated_warp_location
          (ServerChangeType *this,LocationType *param_1)

{
  uint uVar1;
  Message *pMVar2;
  Arena *pAVar3;
  Arena *pAVar4;
  byte bVar5;
  
  pAVar4 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar5 = (byte)this->_padding_ & 1;
  pAVar3 = pAVar4;
  if (bVar5 != 0) {
    pAVar3 = (Arena *)(pAVar4->impl_).tag_and_id_;
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    if (bVar5 != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if ((pAVar4 == (Arena *)0x0) &&
       (pMVar2 = (this->_impl_).item_.zone_island_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (LocationType *)0x0) {
    pAVar4 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if (pAVar3 != pAVar4) {
      param_1 = (LocationType *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar3,(MessageLite *)param_1,pAVar4);
    }
    (this->_impl_)._oneof_case_[0] = 2;
    (this->_impl_).item_.zone_island_ = (Message *)param_1;
  }
  return;
}

// set_allocated_zone_island @ 14c1673c0

void __thiscall
messages::ServerChangeType::set_allocated_zone_island(ServerChangeType *this,LocationType *param_1)

{
  uint uVar1;
  Message *pMVar2;
  Arena *pAVar3;
  Arena *pAVar4;
  byte bVar5;
  
  pAVar4 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar5 = (byte)this->_padding_ & 1;
  pAVar3 = pAVar4;
  if (bVar5 != 0) {
    pAVar3 = (Arena *)(pAVar4->impl_).tag_and_id_;
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    if (bVar5 != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if ((pAVar4 == (Arena *)0x0) &&
       (pMVar2 = (this->_impl_).item_.zone_island_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (LocationType *)0x0) {
    pAVar4 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if (pAVar3 != pAVar4) {
      param_1 = (LocationType *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar3,(MessageLite *)param_1,pAVar4);
    }
    (this->_impl_)._oneof_case_[0] = 1;
    (this->_impl_).item_.zone_island_ = (Message *)param_1;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_All_default_instance_'' @ 150441c00

void __cdecl messages::_dynamic_atexit_destructor_for___All_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_CharacterEntityType_default_instance_'' @ 150441c10

void __cdecl
messages::_dynamic_atexit_destructor_for___CharacterEntityType_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_FallingInfo_default_instance_'' @ 150441c20

void __cdecl messages::_dynamic_atexit_destructor_for___FallingInfo_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_FrontEndClientSession_default_instance_'' @ 150441c30

void __cdecl
messages::_dynamic_atexit_destructor_for___FrontEndClientSession_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_InteractionNpcType_default_instance_'' @ 150441c40

void __cdecl messages::_dynamic_atexit_destructor_for___InteractionNpcType_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_InteractionStuffType_default_instance_'' @ 150441c50

void __cdecl
messages::_dynamic_atexit_destructor_for___InteractionStuffType_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_LocationTransportType_default_instance_'' @ 150441c60

void __cdecl
messages::_dynamic_atexit_destructor_for___LocationTransportType_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_LocationType_default_instance_'' @ 150441c70

void __cdecl messages::_dynamic_atexit_destructor_for___LocationType_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_MainCharacter_default_instance_'' @ 150441c80

void __cdecl messages::_dynamic_atexit_destructor_for___MainCharacter_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_MultiTargetHitPoint_default_instance_'' @ 150441c90

void __cdecl
messages::_dynamic_atexit_destructor_for___MultiTargetHitPoint_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_MyTransport_default_instance_'' @ 150441ca0

void __cdecl messages::_dynamic_atexit_destructor_for___MyTransport_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_None_default_instance_'' @ 150441cb0

void __cdecl messages::_dynamic_atexit_destructor_for___None_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_PkSpawnInfo_default_instance_'' @ 150441cc0

void __cdecl messages::_dynamic_atexit_destructor_for___PkSpawnInfo_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_PlayerEntity_default_instance_'' @ 150441cd0

void __cdecl messages::_dynamic_atexit_destructor_for___PlayerEntity_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ProjectileInfo_default_instance_'' @ 150441ce0

void __cdecl messages::_dynamic_atexit_destructor_for___ProjectileInfo_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ServerChangeType_default_instance_'' @ 150441cf0

void __cdecl messages::_dynamic_atexit_destructor_for___ServerChangeType_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ServerSession_default_instance_'' @ 150441d00

void __cdecl messages::_dynamic_atexit_destructor_for___ServerSession_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_SlotDeck_default_instance_'' @ 150441d10

void __cdecl messages::_dynamic_atexit_destructor_for___SlotDeck_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_SubCharacter_default_instance_'' @ 150441d20

void __cdecl messages::_dynamic_atexit_destructor_for___SubCharacter_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_Target_default_instance_'' @ 150441d30

void __cdecl messages::_dynamic_atexit_destructor_for___Target_default_instance___(void)

{
  return;
}


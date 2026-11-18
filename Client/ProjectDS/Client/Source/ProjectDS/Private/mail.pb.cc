// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 204

// `dynamic_initializer_for_'_MailCategoryListResponse_default_instance_'' @ 141293940

void __cdecl mail::_dynamic_initializer_for___MailCategoryListResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___MailCategoryListResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_MailCleanRequest_default_instance_'' @ 141293960

void __cdecl mail::_dynamic_initializer_for___MailCleanRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___MailCleanRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_MailItem_default_instance_'' @ 141293980

void __cdecl mail::_dynamic_initializer_for___MailItem_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___MailItem_default_instance___);
  return;
}

// `dynamic_initializer_for_'_MailServerResponse_default_instance_'' @ 1412939a0

void __cdecl mail::_dynamic_initializer_for___MailServerResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___MailServerResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ServiceBusMailAlertRequest_default_instance_'' @ 1412939c0

void __cdecl mail::_dynamic_initializer_for___ServiceBusMailAlertRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ServiceBusMailAlertRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ServiceBusMailDeleteRequest_default_instance_'' @ 1412939e0

void __cdecl mail::_dynamic_initializer_for___ServiceBusMailDeleteRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ServiceBusMailDeleteRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ServiceBusMailDeleteResponse_default_instance_'' @ 141293a00

void __cdecl mail::_dynamic_initializer_for___ServiceBusMailDeleteResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ServiceBusMailDeleteResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ServiceBusMailReceiveRequest_default_instance_'' @ 141293a20

void __cdecl mail::_dynamic_initializer_for___ServiceBusMailReceiveRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ServiceBusMailReceiveRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ServiceBusMailReceiveResponse_default_instance_'' @ 141293a40

void __cdecl
mail::_dynamic_initializer_for___ServiceBusMailReceiveResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ServiceBusMailReceiveResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ServiceBusMailSendRequest_default_instance_'' @ 141293a60

void __cdecl mail::_dynamic_initializer_for___ServiceBusMailSendRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ServiceBusMailSendRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ServiceBusMailSendResponse_default_instance_'' @ 141293a80

void __cdecl mail::_dynamic_initializer_for___ServiceBusMailSendResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ServiceBusMailSendResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 141293aa0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_mail_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c15b1a0

void __cdecl mail::ServiceBusMailSendResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 3) != 0) {
    if (((uVar2 & 1) != 0) && (lVar3 = param_2[1]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[1]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar2 & 2) != 0) && (cVar1 = (char)param_2[2]._padding_, cVar1 != '\0')) {
      *(char *)&param_1[2]._padding_ = cVar1;
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

// Clear @ 14c15b1f0

void __thiscall mail::ServiceBusMailSendResponse::Clear(ServiceBusMailSendResponse *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 3) != 0) {
    (this->_impl_).event_id_ = 0;
    (this->_impl_).is_fail_ = false;
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

// ByteSizeLong @ 14c15b220

ulong64 __thiscall mail::ServiceBusMailSendResponse::ByteSizeLong(ServiceBusMailSendResponse *this)

{
  uint uVar1;
  ulong64 uVar2;
  __uint64 _Var3;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var3 = 0;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (uVar2 = (this->_impl_).event_id_, uVar2 != 0)) {
      _Var3 = google::protobuf::internal::WireFormatLite::UInt64SizePlusOne(uVar2);
    }
    if (((uVar1 & 2) != 0) && ((this->_impl_).is_fail_ != false)) {
      _Var3 = _Var3 + 2;
    }
  }
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var3,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c15b280

uchar * __thiscall
mail::ServiceBusMailSendResponse::_InternalSerialize
          (ServiceBusMailSendResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  bool bVar1;
  byte *pbVar2;
  uchar *puVar3;
  byte bVar4;
  ulonglong uVar5;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).event_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar5 = (this->_impl_).event_id_;
    *param_1 = 8;
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
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) && ((this->_impl_).is_fail_ != false)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar1 = (this->_impl_).is_fail_;
    *param_1 = 0x10;
    param_1[1] = bVar1 != false;
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

// GetClassData @ 14c15b350

ClassData * __thiscall
mail::ServiceBusMailSendResponse::GetClassData(ServiceBusMailSendResponse *this)

{
  return (ClassData *)&ServiceBusMailSendResponse_class_data_;
}

// PlacementNew_ @ 14c15b370

void * __cdecl
mail::ServiceBusMailSendResponse::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ServiceBusMailSendResponse_mail__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c15b3a0

void * __thiscall
mail::ServiceBusMailSendResponse::_scalar_deleting_destructor_
          (ServiceBusMailSendResponse *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ServiceBusMailSendResponse_mail__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// MergeImpl @ 14c15b3f0

void __cdecl
mail::ServiceBusMailDeleteResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 7) != 0) {
    if (((uVar1 & 1) != 0) && (lVar3 = param_2[1]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[1]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar1 & 2) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
    }
    if (((uVar1 & 4) != 0) && (iVar2 = (int)param_2[2]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar2;
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

// Clear @ 14c15b450

void __thiscall mail::ServiceBusMailDeleteResponse::Clear(ServiceBusMailDeleteResponse *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 7) != 0) {
    (this->_impl_).entity_id_ = 0;
    (this->_impl_).event_id_ = 0;
    (this->_impl_).error_code_ = 0;
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

// ByteSizeLong @ 14c15b480

ulong64 __thiscall
mail::ServiceBusMailDeleteResponse::ByteSizeLong(ServiceBusMailDeleteResponse *this)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  __uint64 _Var5;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  uVar3 = 0;
  if ((uVar1 & 7) != 0) {
    if (((uVar1 & 1) != 0) && (uVar4 = (this->_impl_).entity_id_, uVar4 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::UInt64SizePlusOne(uVar4);
    }
    if (((uVar1 & 2) != 0) && (uVar4 = (this->_impl_).event_id_, uVar4 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::UInt64SizePlusOne(uVar4);
      uVar3 = uVar3 + uVar4;
    }
    if (((uVar1 & 4) != 0) && (iVar2 = (this->_impl_).error_code_, iVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::EnumSize(iVar2);
      uVar3 = uVar3 + uVar4 + 1;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar3,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c15b510

uchar * __thiscall
mail::ServiceBusMailDeleteResponse::_InternalSerialize
          (ServiceBusMailDeleteResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  byte *pbVar1;
  uchar *puVar2;
  byte bVar3;
  ulonglong uVar4;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).entity_id_ != 0)) {
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
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) && ((this->_impl_).event_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (this->_impl_).event_id_;
    *param_1 = 0x10;
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
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) && ((this->_impl_).error_code_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (ulonglong)(this->_impl_).error_code_;
    *param_1 = 0x38;
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

// GetClassData @ 14c15b650

ClassData * __thiscall
mail::ServiceBusMailDeleteResponse::GetClassData(ServiceBusMailDeleteResponse *this)

{
  return (ClassData *)&ServiceBusMailDeleteResponse_class_data_;
}

// PlacementNew_ @ 14c15b670

void * __cdecl
mail::ServiceBusMailDeleteResponse::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ServiceBusMailDeleteResponse_mail__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c15b6a0

void * __thiscall
mail::ServiceBusMailDeleteResponse::_scalar_deleting_destructor_
          (ServiceBusMailDeleteResponse *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ServiceBusMailDeleteResponse_mail__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// MergeImpl @ 14c15b6f0

void __cdecl mail::ServiceBusMailAlertRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 3) != 0) {
    if (((uVar2 & 1) != 0) && (lVar3 = param_2[1]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[1]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar2 & 2) != 0) && (cVar1 = (char)param_2[2]._padding_, cVar1 != '\0')) {
      *(char *)&param_1[2]._padding_ = cVar1;
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

// Clear @ 14c15b740

void __thiscall mail::ServiceBusMailAlertRequest::Clear(ServiceBusMailAlertRequest *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 3) != 0) {
    (this->_impl_).receive_player_uid_ = 0;
    (this->_impl_).is_reward_ = false;
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

// ByteSizeLong @ 14c15b770

ulong64 __thiscall mail::ServiceBusMailAlertRequest::ByteSizeLong(ServiceBusMailAlertRequest *this)

{
  uint uVar1;
  longlong lVar2;
  __uint64 _Var3;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var3 = 0;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (lVar2 = (this->_impl_).receive_player_uid_, lVar2 != 0)) {
      _Var3 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
    }
    if (((uVar1 & 2) != 0) && ((this->_impl_).is_reward_ != false)) {
      _Var3 = _Var3 + 2;
    }
  }
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var3,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c15b7d0

uchar * __thiscall
mail::ServiceBusMailAlertRequest::_InternalSerialize
          (ServiceBusMailAlertRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  bool bVar1;
  longlong lVar2;
  uchar *puVar3;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar2 = (this->_impl_).receive_player_uid_, lVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) && ((this->_impl_).is_reward_ != false)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar1 = (this->_impl_).is_reward_;
    *param_1 = '\x10';
    param_1[1] = bVar1 != false;
    param_1 = param_1 + 2;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14c15b870

ClassData * __thiscall
mail::ServiceBusMailAlertRequest::GetClassData(ServiceBusMailAlertRequest *this)

{
  return (ClassData *)&ServiceBusMailAlertRequest_class_data_;
}

// PlacementNew_ @ 14c15b890

void * __cdecl
mail::ServiceBusMailAlertRequest::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ServiceBusMailAlertRequest_mail__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c15b8c0

void * __thiscall
mail::ServiceBusMailAlertRequest::_scalar_deleting_destructor_
          (ServiceBusMailAlertRequest *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ServiceBusMailAlertRequest_mail__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// MergeImpl @ 14c15b910

void __cdecl mail::MailCleanRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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

// Clear @ 14c15b950

void __thiscall mail::MailCleanRequest::Clear(MailCleanRequest *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  (this->_impl_).receiver_uid_ = 0;
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

// ByteSizeLong @ 14c15b980

ulong64 __thiscall mail::MailCleanRequest::ByteSizeLong(MailCleanRequest *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (uVar3 = (this->_impl_).receiver_uid_, uVar3 != 0)) {
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

// _InternalSerialize @ 14c15b9e0

uchar * __thiscall
mail::MailCleanRequest::_InternalSerialize
          (MailCleanRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  longlong lVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar1 = (this->_impl_).receiver_uid_, lVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar1,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c15ba50

ClassData * __thiscall mail::MailCleanRequest::GetClassData(MailCleanRequest *this)

{
  return (ClassData *)&MailCleanRequest_class_data_;
}

// PlacementNew_ @ 14c15ba70

void * __cdecl mail::MailCleanRequest::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7MailCleanRequest_mail__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c15baa0

void * __thiscall
mail::MailCleanRequest::_scalar_deleting_destructor_(MailCleanRequest *this,uint param_1)

{
  this->_padding_ = (longlong)&___7MailCleanRequest_mail__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c15baf0

void __cdecl
mail::ServiceBusMailReceiveRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  Arena *pAVar6;
  
  pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
  }
  if ((int)param_2[2]._padding_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&param_1[1]._internal_metadata_,
               (RepeatedPtrFieldBase *)&param_2[1]._internal_metadata_,
               google::protobuf::Arena::CopyConstruct<UniqueId>);
  }
  uVar2 = (uint)param_2[1]._padding_;
  if ((char)uVar2 != '\0') {
    if ((uVar2 & 1) != 0) {
      if ((MessageLite *)param_1[3]._padding_ == (MessageLite *)0x0) {
        pvVar5 = google::protobuf::Arena::CopyConstruct<UniqueId>
                           (pAVar6,(MessageLite *)param_2[3]._padding_);
        param_1[3]._padding_ = (longlong)pvVar5;
      }
      else {
        UniqueId::MergeImpl((MessageLite *)param_1[3]._padding_,(MessageLite *)param_2[3]._padding_)
        ;
      }
    }
    if (((uVar2 & 2) != 0) && (lVar4 = param_2[3]._internal_metadata_.ptr_, lVar4 != 0)) {
      param_1[3]._internal_metadata_.ptr_ = lVar4;
    }
    if (((uVar2 & 4) != 0) && (param_2[4]._padding_ != 0)) {
      param_1[4]._padding_ = param_2[4]._padding_;
    }
    if (((uVar2 & 8) != 0) && (iVar3 = (int)param_2[4]._internal_metadata_.ptr_, iVar3 != 0)) {
      *(int *)&param_1[4]._internal_metadata_.ptr_ = iVar3;
    }
    if (((uVar2 & 0x10) != 0) &&
       (iVar3 = *(int *)((longlong)&param_2[4]._internal_metadata_.ptr_ + 4), iVar3 != 0)) {
      *(int *)((longlong)&param_1[4]._internal_metadata_.ptr_ + 4) = iVar3;
    }
    if (((uVar2 & 0x20) != 0) && (cVar1 = (char)param_2[5]._padding_, cVar1 != '\0')) {
      *(char *)&param_1[5]._padding_ = cVar1;
    }
    if (((uVar2 & 0x40) != 0) && (iVar3 = *(int *)((longlong)&param_2[5]._padding_ + 4), iVar3 != 0)
       ) {
      *(int *)((longlong)&param_1[5]._padding_ + 4) = iVar3;
    }
    if (((char)uVar2 < '\0') && (lVar4 = param_2[5]._internal_metadata_.ptr_, lVar4 != 0)) {
      param_1[5]._internal_metadata_.ptr_ = lVar4;
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

// Clear @ 14c15bc20

void __thiscall mail::ServiceBusMailReceiveRequest::Clear(ServiceBusMailReceiveRequest *this)

{
  uint uVar1;
  
  if (0 < *(int *)&(this->_impl_).receive_fail_mail_uid_.field_0x8) {
    google::protobuf::internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).receive_fail_mail_uid_);
  }
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    UniqueId::Clear((this->_impl_).receive_mail_uid_);
  }
  if ((uVar1 & 0xfe) != 0) {
    (this->_impl_).entity_id_ = 0;
    (this->_impl_).receiver_player_uid_ = 0;
    (this->_impl_).mail_category_type_ = 0;
    (this->_impl_).game_server_index_ = 0;
    (this->_impl_).is_fail_ = false;
    *(undefined3 *)&(this->_impl_).field_0x41 = 0;
    (this->_impl_).storage_limit_ = 0;
    (this->_impl_).event_id_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c15bc90

ulong64 __thiscall
mail::ServiceBusMailReceiveRequest::ByteSizeLong(ServiceBusMailReceiveRequest *this)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  uint uVar7;
  int iVar8;
  RepeatedPtrField<UniqueId> *pRVar9;
  ulonglong uVar10;
  
  uVar5 = *(ulonglong *)&(this->_impl_).receive_fail_mail_uid_;
  pRVar9 = &(this->_impl_).receive_fail_mail_uid_;
  uVar1 = *(uint *)&(this->_impl_).receive_fail_mail_uid_.field_0x8;
  uVar10 = (ulonglong)uVar1;
  if ((uVar5 & 1) != 0) {
    pRVar9 = (RepeatedPtrField<UniqueId> *)(uVar5 + 7);
  }
  puVar3 = (undefined8 *)&pRVar9->field_0x0;
  for (; pRVar9 != (RepeatedPtrField<UniqueId> *)(puVar3 + (int)uVar1);
      pRVar9 = (RepeatedPtrField<UniqueId> *)&pRVar9->field_0x8) {
    uVar4 = UniqueId::ByteSizeLong(*(UniqueId **)pRVar9);
    uVar7 = (uint)uVar4 | 1;
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
    uVar10 = uVar10 + (iVar8 * -9 + 0x160U >> 6) + uVar4;
  }
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((char)uVar1 != '\0') {
    if ((uVar1 & 1) != 0) {
      uVar4 = UniqueId::ByteSizeLong((this->_impl_).receive_mail_uid_);
      uVar7 = (uint)uVar4 | 1;
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
      uVar10 = uVar10 + 1 + (iVar8 * -9 + 0x160U >> 6) + uVar4;
    }
    if (((uVar1 & 2) != 0) && (uVar5 = (this->_impl_).entity_id_, uVar5 != 0)) {
      uVar5 = uVar5 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar2;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar5);
      }
      uVar10 = uVar10 + (iVar8 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 4) != 0) && (uVar5 = (this->_impl_).receiver_player_uid_, uVar5 != 0)) {
      uVar5 = uVar5 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar2;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar5);
      }
      uVar10 = uVar10 + (iVar8 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 8) != 0) && (iVar8 = (this->_impl_).mail_category_type_, iVar8 != 0)) {
      uVar5 = (longlong)iVar8 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar2;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar5);
      }
      uVar10 = uVar10 + 1 + (ulonglong)(iVar8 * -9 + 0x280U >> 6);
    }
    if (((uVar1 & 0x10) != 0) && (iVar8 = (this->_impl_).game_server_index_, iVar8 != 0)) {
      uVar5 = (longlong)iVar8 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar2;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar5);
      }
      uVar10 = uVar10 + (iVar8 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 0x20) != 0) && ((this->_impl_).is_fail_ != false)) {
      uVar10 = uVar10 + 2;
    }
    if (((uVar1 & 0x40) != 0) && (uVar7 = (this->_impl_).storage_limit_, uVar7 != 0)) {
      uVar7 = uVar7 | 1;
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
      uVar10 = uVar10 + (iVar8 * -9 + 0x1a0U >> 6);
    }
    if (((char)uVar1 < '\0') && (uVar5 = (this->_impl_).event_id_, uVar5 != 0)) {
      uVar5 = uVar5 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar2;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar5);
      }
      uVar10 = uVar10 + (iVar8 * -9 + 0x2c0U >> 6);
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar10,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c15bf10

uchar * __thiscall
mail::ServiceBusMailReceiveRequest::_InternalSerialize
          (ServiceBusMailReceiveRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  byte *pbVar6;
  byte bVar7;
  ulonglong uVar8;
  MessageLite *pMVar9;
  uint uVar10;
  
  uVar10 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) && ((this->_impl_).entity_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar8 = (this->_impl_).entity_id_;
    *param_1 = 8;
    while( true ) {
      pbVar6 = param_1 + 1;
      bVar7 = (byte)uVar8;
      if (uVar8 < 0x80) break;
      uVar8 = uVar8 >> 7;
      *pbVar6 = bVar7 | 0x80;
      param_1 = pbVar6;
    }
    *pbVar6 = bVar7;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (lVar5 = (this->_impl_).receiver_player_uid_, lVar5 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar5,param_1);
  }
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar2 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (3,(MessageLite *)(this->_impl_).receive_mail_uid_,
                         (int)(((this->_impl_).receive_mail_uid_)->_impl_)._cached_size_.atom_,
                         param_1,param_2);
  }
  if (((uVar2 & 8) != 0) && ((this->_impl_).mail_category_type_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar8 = (ulonglong)(this->_impl_).mail_category_type_;
    *param_1 = 0x20;
    while( true ) {
      param_1 = param_1 + 1;
      bVar7 = (byte)uVar8;
      if (uVar8 < 0x80) break;
      uVar8 = uVar8 >> 7;
      *param_1 = bVar7 | 0x80;
    }
    *param_1 = bVar7;
    param_1 = param_1 + 1;
  }
  if (((uVar2 & 0x10) != 0) && (iVar3 = (this->_impl_).game_server_index_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<5>
                        (param_2,iVar3,param_1);
  }
  if (((uVar2 & 0x20) != 0) && ((this->_impl_).is_fail_ != false)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar1 = (this->_impl_).is_fail_;
    *param_1 = 0x30;
    param_1[1] = bVar1 != false;
    param_1 = param_1 + 2;
  }
  uVar4 = *(uint *)&(this->_impl_).receive_fail_mail_uid_.field_0x8;
  if (uVar4 != 0) {
    do {
      pMVar9 = *(MessageLite **)&(this->_impl_).receive_fail_mail_uid_;
      if (((ulonglong)pMVar9 & 1) != 0) {
        pMVar9 = *(MessageLite **)((longlong)&pMVar9->_padding_ + (longlong)(int)uVar10 * 8 + 7);
      }
      param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                          (7,pMVar9,*(int *)((longlong)&pMVar9[1]._padding_ + 4),param_1,param_2);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar4);
  }
  if (((char)uVar2 < '\0') && ((this->_impl_).event_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar8 = (this->_impl_).event_id_;
    *param_1 = 0x40;
    while( true ) {
      param_1 = param_1 + 1;
      bVar7 = (byte)uVar8;
      if (uVar8 < 0x80) break;
      uVar8 = uVar8 >> 7;
      *param_1 = bVar7 | 0x80;
    }
    *param_1 = bVar7;
    param_1 = param_1 + 1;
  }
  if (((uVar2 & 0x40) != 0) && ((this->_impl_).storage_limit_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar10 = (this->_impl_).storage_limit_;
    *param_1 = 0x48;
    while( true ) {
      pbVar6 = param_1 + 1;
      bVar7 = (byte)uVar10;
      if (uVar10 < 0x80) break;
      uVar10 = uVar10 >> 7;
      *pbVar6 = bVar7 | 0x80;
      param_1 = pbVar6;
    }
    *pbVar6 = bVar7;
    param_1 = param_1 + 2;
  }
  if ((this->_padding_ & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                        ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                         param_2);
  }
  return param_1;
}

// GetClassData @ 14c15c190

ClassData * __thiscall
mail::ServiceBusMailReceiveRequest::GetClassData(ServiceBusMailReceiveRequest *this)

{
  return (ClassData *)&ServiceBusMailReceiveRequest_class_data_;
}

// PlacementNew_ @ 14c15c1b0

void * __cdecl
mail::ServiceBusMailReceiveRequest::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ServiceBusMailReceiveRequest_mail__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(Arena **)((longlong)param_2 + 0x28) = param_3;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c15c1f0

void * __thiscall
mail::ServiceBusMailReceiveRequest::_scalar_deleting_destructor_
          (ServiceBusMailReceiveRequest *this,uint param_1)

{
  UniqueId *this_00;
  
  this->_padding_ = (longlong)&___7ServiceBusMailReceiveRequest_mail__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).receive_mail_uid_;
  if (this_00 != (UniqueId *)0x0) {
    UniqueId::~UniqueId(this_00);
    ::operator_delete(this_00,0x20);
  }
  if (*(longlong *)&(this->_impl_).receive_fail_mail_uid_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).receive_fail_mail_uid_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// MergeImpl @ 14c15c280

void __cdecl mail::ServiceBusMailDeleteRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      pMVar3 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
      pMVar4 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
      if (pMVar3 == (MessageLite *)0x0) {
        pvVar6 = google::protobuf::Arena::CopyConstruct<UniqueId>(pAVar7,pMVar4);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar6;
      }
      else {
        UniqueId::MergeImpl(pMVar3,pMVar4);
      }
    }
    if (((uVar1 & 2) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
    }
    if (((uVar1 & 4) != 0) && (lVar5 = param_2[2]._internal_metadata_.ptr_, lVar5 != 0)) {
      param_1[2]._internal_metadata_.ptr_ = lVar5;
    }
    if (((uVar1 & 8) != 0) && (iVar2 = (int)param_2[3]._padding_, iVar2 != 0)) {
      *(int *)&param_1[3]._padding_ = iVar2;
    }
    if (((uVar1 & 0x10) != 0) && (iVar2 = *(int *)((longlong)&param_2[3]._padding_ + 4), iVar2 != 0)
       ) {
      *(int *)((longlong)&param_1[3]._padding_ + 4) = iVar2;
    }
    if (((uVar1 & 0x20) != 0) && (lVar5 = param_2[3]._internal_metadata_.ptr_, lVar5 != 0)) {
      param_1[3]._internal_metadata_.ptr_ = lVar5;
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

// Clear @ 14c15c370

void __thiscall mail::ServiceBusMailDeleteRequest::Clear(ServiceBusMailDeleteRequest *this)

{
  uint uVar1;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    UniqueId::Clear((this->_impl_).mail_uid_);
  }
  if ((uVar1 & 0x3e) != 0) {
    (this->_impl_).receiver_player_uid_ = 0;
    (this->_impl_).entity_id_ = 0;
    (this->_impl_).game_server_index_ = 0;
    (this->_impl_).mail_category_type_ = 0;
    (this->_impl_).event_id_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c15c3d0

ulong64 __thiscall
mail::ServiceBusMailDeleteRequest::ByteSizeLong(ServiceBusMailDeleteRequest *this)

{
  uint uVar1;
  longlong lVar2;
  ulong64 uVar3;
  uint uVar4;
  int iVar5;
  __uint64 _Var6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = UniqueId::ByteSizeLong((this->_impl_).mail_uid_);
      uVar4 = (uint)uVar3 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar4);
      }
      _Var6 = (ulonglong)(iVar5 * -9 + 0x160U >> 6) + 1 + uVar3;
    }
    if (((uVar1 & 2) != 0) && (lVar2 = (this->_impl_).receiver_player_uid_, lVar2 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar3;
    }
    if (((uVar1 & 4) != 0) && (uVar3 = (this->_impl_).entity_id_, uVar3 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::UInt64SizePlusOne(uVar3);
      _Var6 = _Var6 + uVar3;
    }
    if (((uVar1 & 8) != 0) && (iVar5 = (this->_impl_).game_server_index_, iVar5 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar3;
    }
    if (((uVar1 & 0x10) != 0) && (iVar5 = (this->_impl_).mail_category_type_, iVar5 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::EnumSize(iVar5);
      _Var6 = _Var6 + uVar3 + 1;
    }
    if (((uVar1 & 0x20) != 0) && (uVar3 = (this->_impl_).event_id_, uVar3 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::UInt64SizePlusOne(uVar3);
      _Var6 = _Var6 + uVar3;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c15c4d0

uchar * __thiscall
mail::ServiceBusMailDeleteRequest::_InternalSerialize
          (ServiceBusMailDeleteRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  uchar *puVar5;
  byte bVar6;
  ulonglong uVar7;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).mail_uid_,
                         (int)(((this->_impl_).mail_uid_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if (((uVar1 & 2) != 0) && (lVar3 = (this->_impl_).receiver_player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar3,param_1);
  }
  if (((uVar1 & 8) != 0) && (iVar2 = (this->_impl_).game_server_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  if (((uVar1 & 4) != 0) && ((this->_impl_).entity_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar7 = (this->_impl_).entity_id_;
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
  if (((uVar1 & 0x10) != 0) && ((this->_impl_).mail_category_type_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar7 = (ulonglong)(this->_impl_).mail_category_type_;
    *param_1 = 0x28;
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
  if (((uVar1 & 0x20) != 0) && ((this->_impl_).event_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar7 = (this->_impl_).event_id_;
    *param_1 = 0x30;
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
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar5;
}

// GetClassData @ 14c15c680

ClassData * __thiscall
mail::ServiceBusMailDeleteRequest::GetClassData(ServiceBusMailDeleteRequest *this)

{
  return (ClassData *)&ServiceBusMailDeleteRequest_class_data_;
}

// PlacementNew_ @ 14c15c6a0

void * __cdecl
mail::ServiceBusMailDeleteRequest::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ServiceBusMailDeleteRequest_mail__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c15c6d0

void * __thiscall
mail::ServiceBusMailDeleteRequest::_scalar_deleting_destructor_
          (ServiceBusMailDeleteRequest *this,uint param_1)

{
  UniqueId *this_00;
  
  this->_padding_ = (longlong)&___7ServiceBusMailDeleteRequest_mail__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).mail_uid_;
  if (this_00 != (UniqueId *)0x0) {
    UniqueId::~UniqueId(this_00);
    ::operator_delete(this_00,0x20);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// MergeImpl @ 14c15c750

void __cdecl mail::MailItem::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  if ((int)param_2[1]._internal_metadata_.ptr_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)(param_1 + 1),(RepeatedPtrFieldBase *)(param_2 + 1),
               google::protobuf::Arena::CopyConstruct<ds_game::SqlMoneyTable>);
  }
  if ((int)param_2[3]._padding_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&param_1[2]._internal_metadata_,
               (RepeatedPtrFieldBase *)&param_2[2]._internal_metadata_,
               google::protobuf::Arena::CopyConstruct<ds_game::SqlItemEquipmentTable>);
  }
  if ((int)param_2[4]._internal_metadata_.ptr_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)(param_1 + 4),(RepeatedPtrFieldBase *)(param_2 + 4),
               google::protobuf::Arena::CopyConstruct<ds_game::SqlItemStackableTable>);
  }
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c15c7e0

void __thiscall mail::MailItem::Clear(MailItem *this)

{
  if (0 < *(int *)&(this->_impl_).money_.field_0x8) {
    google::protobuf::internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&this->_impl_);
  }
  if (0 < *(int *)&(this->_impl_).equipment_.field_0x8) {
    google::protobuf::internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).equipment_);
  }
  if (0 < *(int *)&(this->_impl_).stackable_.field_0x8) {
    google::protobuf::internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).stackable_);
  }
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c15c840

ulong64 __thiscall mail::MailItem::ByteSizeLong(MailItem *this)

{
  uint uVar1;
  ulonglong uVar2;
  RepeatedPtrField<ds_game::SqlMoneyTable> *pRVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  uint uVar6;
  int iVar7;
  Impl_ *pIVar8;
  RepeatedPtrField<ds_game::SqlItemEquipmentTable> *pRVar9;
  RepeatedPtrField<ds_game::SqlItemStackableTable> *pRVar10;
  ulonglong uVar11;
  longlong lVar12;
  __uint64 _Var13;
  
  uVar2 = *(ulonglong *)&(this->_impl_).money_;
  pIVar8 = &this->_impl_;
  uVar1 = *(uint *)&(this->_impl_).money_.field_0x8;
  uVar11 = (ulonglong)uVar1;
  if ((uVar2 & 1) != 0) {
    pIVar8 = (Impl_ *)(uVar2 + 7);
  }
  pRVar3 = &pIVar8->money_;
  for (; pIVar8 != (Impl_ *)(&pRVar3->field_0x0 + (longlong)(int)uVar1 * 8);
      pIVar8 = (Impl_ *)&(pIVar8->money_).field_0x8) {
    uVar5 = ds_game::SqlMoneyTable::ByteSizeLong(*(SqlMoneyTable **)&pIVar8->money_);
    uVar6 = (uint)uVar5 | 1;
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
    uVar11 = uVar11 + (iVar7 * -9 + 0x160U >> 6) + uVar5;
  }
  uVar1 = *(uint *)&(this->_impl_).equipment_.field_0x8;
  pRVar9 = &(this->_impl_).equipment_;
  lVar12 = uVar11 + uVar1;
  if ((*(ulonglong *)pRVar9 & 1) != 0) {
    pRVar9 = (RepeatedPtrField<ds_game::SqlItemEquipmentTable> *)(*(ulonglong *)pRVar9 + 7);
  }
  puVar4 = (undefined8 *)&pRVar9->field_0x0;
  for (; pRVar9 != (RepeatedPtrField<ds_game::SqlItemEquipmentTable> *)(puVar4 + (int)uVar1);
      pRVar9 = (RepeatedPtrField<ds_game::SqlItemEquipmentTable> *)&pRVar9->field_0x8) {
    uVar5 = ds_game::SqlItemEquipmentTable::ByteSizeLong(*(SqlItemEquipmentTable **)pRVar9);
    uVar6 = (uint)uVar5 | 1;
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
    lVar12 = lVar12 + (iVar7 * -9 + 0x160U >> 6) + uVar5;
  }
  uVar1 = *(uint *)&(this->_impl_).stackable_.field_0x8;
  pRVar10 = &(this->_impl_).stackable_;
  _Var13 = lVar12 + (ulonglong)uVar1;
  if ((*(ulonglong *)pRVar10 & 1) != 0) {
    pRVar10 = (RepeatedPtrField<ds_game::SqlItemStackableTable> *)(*(ulonglong *)pRVar10 + 7);
  }
  puVar4 = (undefined8 *)&pRVar10->field_0x0;
  for (; pRVar10 != (RepeatedPtrField<ds_game::SqlItemStackableTable> *)(puVar4 + (int)uVar1);
      pRVar10 = (RepeatedPtrField<ds_game::SqlItemStackableTable> *)&pRVar10->field_0x8) {
    uVar5 = ds_game::SqlItemStackableTable::ByteSizeLong(*(SqlItemStackableTable **)pRVar10);
    uVar6 = (uint)uVar5 | 1;
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
    _Var13 = _Var13 + (iVar7 * -9 + 0x160U >> 6) + uVar5;
  }
  _Var13 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                     ((Message *)this,_Var13,&(this->_impl_)._cached_size_);
  return _Var13;
}

// _InternalSerialize @ 14c15c9d0

uchar * __thiscall
mail::MailItem::_InternalSerialize(MailItem *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)&(this->_impl_).money_.field_0x8;
  uVar3 = 0;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      pMVar2 = *(MessageLite **)&(this->_impl_).money_;
      if (((ulonglong)pMVar2 & 1) != 0) {
        pMVar2 = *(MessageLite **)((longlong)&pMVar2->_padding_ + (longlong)(int)uVar4 * 8 + 7);
      }
      param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                          (1,pMVar2,*(int *)((longlong)&pMVar2[1]._padding_ + 4),param_1,param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  uVar1 = *(uint *)&(this->_impl_).equipment_.field_0x8;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      pMVar2 = *(MessageLite **)&(this->_impl_).equipment_;
      if (((ulonglong)pMVar2 & 1) != 0) {
        pMVar2 = *(MessageLite **)((longlong)&pMVar2->_padding_ + (longlong)(int)uVar4 * 8 + 7);
      }
      param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                          (2,pMVar2,*(int *)((longlong)&pMVar2[1]._padding_ + 4),param_1,param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  uVar1 = *(uint *)&(this->_impl_).stackable_.field_0x8;
  if (uVar1 != 0) {
    do {
      pMVar2 = *(MessageLite **)&(this->_impl_).stackable_;
      if (((ulonglong)pMVar2 & 1) != 0) {
        pMVar2 = *(MessageLite **)((longlong)&pMVar2->_padding_ + (longlong)(int)uVar3 * 8 + 7);
      }
      param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                          (3,pMVar2,*(int *)((longlong)&pMVar2[1]._padding_ + 4),param_1,param_2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  if ((this->_padding_ & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                        ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                         param_2);
  }
  return param_1;
}

// GetClassData @ 14c15cad0

ClassData * __thiscall mail::MailItem::GetClassData(MailItem *this)

{
  return (ClassData *)&MailItem_class_data_;
}

// PlacementNew_ @ 14c15caf0

void * __cdecl mail::MailItem::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7MailItem_mail__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined4 *)((longlong)param_2 + 0x58) = 0;
  *(Arena **)((longlong)param_2 + 0x20) = param_3;
  *(Arena **)((longlong)param_2 + 0x38) = param_3;
  *(Arena **)((longlong)param_2 + 0x50) = param_3;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c15cb40

void * __thiscall mail::MailItem::_scalar_deleting_destructor_(MailItem *this,uint param_1)

{
  this->_padding_ = (longlong)&___7MailItem_mail__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if (*(longlong *)&(this->_impl_).stackable_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).stackable_);
  }
  if (*(longlong *)&(this->_impl_).equipment_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).equipment_);
  }
  if (*(longlong *)&(this->_impl_).money_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&this->_impl_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// MergeImpl @ 14c15cbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl mail::ServiceBusMailSendRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  MailItem *this;
  MailItem *pMVar3;
  longlong lVar4;
  void *pvVar5;
  undefined8 uVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  ulong64 uVar8;
  Arena *pAVar9;
  Arena *pAVar10;
  undefined1 auStackY_88 [32];
  _Bxty local_50;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  pAVar10 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
  }
  google::protobuf::RepeatedField<__int64>::MergeFrom
            ((RepeatedField<__int64> *)&param_1[1]._internal_metadata_,
             (RepeatedField<__int64> *)&param_2[1]._internal_metadata_);
  uVar1 = (uint)param_2[1]._padding_;
  if ((char)uVar1 != '\0') {
    if ((uVar1 & 1) != 0) {
      pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[3]._padding_ & 0xfffffffffffffffc);
      if ((pbVar7->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[3]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 3),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar9);
          if (0xf < uStack_38) {
            uVar8 = uStack_38 + 1;
            uVar6 = local_50._Ptr;
            if (0xfff < uVar8) {
              uVar6 = *(undefined8 *)(local_50._Ptr + -8);
              uVar8 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar6,uVar8);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 3),pbVar7,pAVar9);
      }
    }
    if ((uVar1 & 2) != 0) {
      pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[3]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar7->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[3]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[3]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar9);
          if (0xf < uStack_38) {
            uVar8 = uStack_38 + 1;
            uVar6 = local_50._Ptr;
            if (0xfff < uVar8) {
              uVar6 = *(undefined8 *)(local_50._Ptr + -8);
              uVar8 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar6,uVar8);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
        pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[3]._internal_metadata_,pbVar7,pAVar9);
      }
    }
    if ((uVar1 & 4) != 0) {
      pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[4]._padding_ & 0xfffffffffffffffc);
      if ((pbVar7->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[4]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
          pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_50._8_8_ = 0;
          local_50._Ptr = (char *)0x0;
          local_40 = ___xmm_000000000000000f0000000000000000;
          uStack_38 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 4),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_50,
                     pAVar9);
          if (0xf < uStack_38) {
            uVar8 = uStack_38 + 1;
            uVar6 = local_50._Ptr;
            if (0xfff < uVar8) {
              uVar6 = *(undefined8 *)(local_50._Ptr + -8);
              uVar8 = uStack_38 + 0x28;
              if ((char *)0x1f < local_50._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar6,uVar8);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
        pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 4),pbVar7,pAVar9);
      }
    }
    if ((uVar1 & 8) != 0) {
      this = (MailItem *)param_1[4]._internal_metadata_.ptr_;
      pMVar3 = (MailItem *)param_2[4]._internal_metadata_.ptr_;
      if (this == (MailItem *)0x0) {
        pvVar5 = google::protobuf::Arena::CopyConstruct<mail::MailItem>(pAVar10,pMVar3);
        param_1[4]._internal_metadata_.ptr_ = (long64)pvVar5;
      }
      else {
        MailItem::MergeFrom(this,pMVar3);
      }
    }
    if (((uVar1 & 0x10) != 0) && (param_2[5]._padding_ != 0)) {
      param_1[5]._padding_ = param_2[5]._padding_;
    }
    if (((uVar1 & 0x20) != 0) && (lVar4 = param_2[5]._internal_metadata_.ptr_, lVar4 != 0)) {
      param_1[5]._internal_metadata_.ptr_ = lVar4;
    }
    if (((uVar1 & 0x40) != 0) && (iVar2 = (int)param_2[6]._padding_, iVar2 != 0)) {
      *(int *)&param_1[6]._padding_ = iVar2;
    }
    if (((char)uVar1 < '\0') && (iVar2 = *(int *)((longlong)&param_2[6]._padding_ + 4), iVar2 != 0))
    {
      *(int *)((longlong)&param_1[6]._padding_ + 4) = iVar2;
    }
  }
  if ((uVar1 & 0x700) != 0) {
    if (((uVar1 >> 8 & 1) != 0) && (lVar4 = param_2[6]._internal_metadata_.ptr_, lVar4 != 0)) {
      param_1[6]._internal_metadata_.ptr_ = lVar4;
    }
    if (((uVar1 >> 9 & 1) != 0) && (iVar2 = (int)param_2[7]._padding_, iVar2 != 0)) {
      *(int *)&param_1[7]._padding_ = iVar2;
    }
    if (((uVar1 >> 10 & 1) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[7]._padding_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[7]._padding_ + 4) = iVar2;
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

// Clear @ 14c15cf90

void __thiscall mail::ServiceBusMailSendRequest::Clear(ServiceBusMailSendRequest *this)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  uVar2 = (this->_impl_).receiver_player_uid_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar2 & 4) == 0) {
    (this->_impl_).receiver_player_uid_.soo_rep_.field0_0x0.long_rep.elements_int =
         uVar2 & 0xfffffffffffffff8;
  }
  else {
    (this->_impl_).receiver_player_uid_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).mail_title_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar1 & 2) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).mail_sender_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar1 & 4) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).mail_content_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar1 & 8) != 0) {
      MailItem::Clear((this->_impl_).mail_reward_value_);
    }
  }
  if ((uVar1 & 0xf0) != 0) {
    (this->_impl_).sender_player_uid_ = 0;
    (this->_impl_).event_id_ = 0;
    (this->_impl_).mail_category_type_ = 0;
    (this->_impl_).mail_type_ = 0;
  }
  if ((uVar1 & 0x700) != 0) {
    (this->_impl_).expires_in_seconds_ = 0;
    (this->_impl_).game_server_index_ = 0;
    (this->_impl_).region_index_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c15d070

ulong64 __thiscall mail::ServiceBusMailSendRequest::ByteSizeLong(ServiceBusMailSendRequest *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  __uint64 _Var4;
  ulong64 uVar5;
  int iVar6;
  
  _Var4 = google::protobuf::internal::WireFormatLite::Int64SizeWithPackedTagSize
                    (&(this->_impl_).receiver_player_uid_,1,
                     &(this->_impl_)._receiver_player_uid_cached_byte_size_);
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((char)uVar1 != '\0') {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).mail_title_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar6 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 0x1f - iVar6;
      }
      else {
        iVar6 = LZCOUNT(uVar3);
      }
      _Var4 = _Var4 + 1 + (ulonglong)(iVar6 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 2) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).mail_sender_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc
                  ) + 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar6 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 0x1f - iVar6;
      }
      else {
        iVar6 = LZCOUNT(uVar3);
      }
      _Var4 = _Var4 + 1 + (ulonglong)(iVar6 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 4) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).mail_content_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar6 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 0x1f - iVar6;
      }
      else {
        iVar6 = LZCOUNT(uVar3);
      }
      _Var4 = _Var4 + 1 + (ulonglong)(iVar6 * -9 + 0x160U >> 6) + lVar2;
    }
    if ((uVar1 & 8) != 0) {
      uVar5 = MailItem::ByteSizeLong((this->_impl_).mail_reward_value_);
      uVar3 = (uint)uVar5 | 1;
      if (__isa_available < 5) {
        iVar6 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 0x1f - iVar6;
      }
      else {
        iVar6 = LZCOUNT(uVar3);
      }
      _Var4 = _Var4 + 1 + (iVar6 * -9 + 0x160U >> 6) + uVar5;
    }
    if (((uVar1 & 0x10) != 0) && (lVar2 = (this->_impl_).sender_player_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var4 = _Var4 + uVar5;
    }
    if (((uVar1 & 0x20) != 0) && (uVar5 = (this->_impl_).event_id_, uVar5 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::UInt64SizePlusOne(uVar5);
      _Var4 = _Var4 + uVar5;
    }
    if (((uVar1 & 0x40) != 0) && (iVar6 = (this->_impl_).mail_category_type_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::EnumSize(iVar6);
      _Var4 = _Var4 + uVar5 + 1;
    }
    if (((char)uVar1 < '\0') && (iVar6 = (this->_impl_).mail_type_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::EnumSize(iVar6);
      _Var4 = _Var4 + uVar5 + 1;
    }
  }
  if ((uVar1 & 0x700) != 0) {
    if (((uVar1 >> 8 & 1) != 0) && (lVar2 = (this->_impl_).expires_in_seconds_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var4 = _Var4 + uVar5;
    }
    if (((uVar1 >> 9 & 1) != 0) && (iVar6 = (this->_impl_).game_server_index_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var4 = _Var4 + uVar5;
    }
    if (((uVar1 >> 10 & 1) != 0) && (iVar6 = (this->_impl_).region_index_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var4 = _Var4 + uVar5;
    }
  }
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c15d2b0

uchar * __thiscall
mail::ServiceBusMailSendRequest::_InternalSerialize
          (ServiceBusMailSendRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  longlong lVar3;
  integral_constant<bool,1> *piVar4;
  uint uVar5;
  uchar *puVar6;
  integral_constant<bool,1> iVar7;
  ulonglong uVar8;
  ShortSooRep_u_8 *pSVar9;
  ShortSooRep_u_8 SVar10;
  char *pcVar11;
  atomic<int> aVar12;
  ShortSooRep_u_8 *pSVar13;
  ShortSooRep_u_8 *pSVar14;
  char *pcVar15;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (lVar3 = (this->_impl_).sender_player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) && ((this->_impl_).event_id_ != 0)) {
    if ((integral_constant<bool,1> *)param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar8 = (this->_impl_).event_id_;
    *param_1 = '\x10';
    while( true ) {
      param_1 = param_1 + 1;
      iVar7 = SUB81(uVar8,0);
      if (uVar8 < 0x80) break;
      uVar8 = uVar8 >> 7;
      *param_1 = (byte)iVar7 | 0x80;
    }
    *param_1 = (uchar)iVar7;
    param_1 = param_1 + 1;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x40) != 0) &&
     ((this->_impl_).mail_category_type_ != 0)) {
    if ((integral_constant<bool,1> *)param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar8 = (ulonglong)(this->_impl_).mail_category_type_;
    *param_1 = '\x18';
    while( true ) {
      piVar4 = (integral_constant<bool,1> *)(param_1 + 1);
      iVar7 = SUB81(uVar8,0);
      if (uVar8 < 0x80) break;
      uVar8 = uVar8 >> 7;
      *piVar4 = (integral_constant<bool,1>)((byte)iVar7 | 0x80);
      param_1 = (uchar *)piVar4;
    }
    *piVar4 = iVar7;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x80) != 0) && ((this->_impl_).mail_type_ != 0)) {
    if ((integral_constant<bool,1> *)param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar8 = (ulonglong)(this->_impl_).mail_type_;
    *param_1 = ' ';
    while( true ) {
      piVar4 = (integral_constant<bool,1> *)(param_1 + 1);
      iVar7 = SUB81(uVar8,0);
      if (uVar8 < 0x80) break;
      uVar8 = uVar8 >> 7;
      *piVar4 = (integral_constant<bool,1>)((byte)iVar7 | 0x80);
      param_1 = (uchar *)piVar4;
    }
    *piVar4 = iVar7;
    param_1 = param_1 + 2;
  }
  aVar12 = (this->_impl_)._receiver_player_uid_cached_byte_size_.atom_;
  if (0 < (int)aVar12) {
    if ((integral_constant<bool,1> *)param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    *param_1 = '*';
    while( true ) {
      piVar4 = (integral_constant<bool,1> *)(param_1 + 1);
      iVar7 = aVar12._0_1_;
      if ((uint)aVar12 < 0x80) break;
      aVar12 = (atomic<int>)((uint)aVar12 >> 7);
      *piVar4 = (integral_constant<bool,1>)((byte)iVar7 | 0x80);
      param_1 = (uchar *)piVar4;
    }
    *piVar4 = iVar7;
    param_1 = param_1 + 2;
    uVar8 = (this->_impl_).receiver_player_uid_.soo_rep_.field0_0x0.long_rep.elements_int;
    if ((uVar8 & 4) == 0) {
      pSVar9 = &(this->_impl_).receiver_player_uid_.soo_rep_.field0_0x0.short_rep.field1_0x8;
      uVar5 = (uint)uVar8 & 3;
    }
    else {
      uVar5 = (this->_impl_).receiver_player_uid_.soo_rep_.field0_0x0.long_rep.size;
      pSVar9 = (ShortSooRep_u_8 *)(uVar8 & 0xfffffffffffffff8);
    }
    pSVar13 = pSVar9;
    do {
      if ((integral_constant<bool,1> *)param_2->end_ <= param_1) {
        param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
      }
      pSVar14 = pSVar13 + 1;
      for (SVar10 = *pSVar13; 0x7f < (ulonglong)SVar10; SVar10.data = SVar10.data >> 7) {
        *param_1 = (byte)SVar10.dummy | 0x80;
        param_1 = param_1 + 1;
      }
      *param_1 = (uchar)SVar10.dummy;
      param_1 = param_1 + 1;
      pSVar13 = pSVar14;
    } while (pSVar14 < pSVar9 + (int)uVar5);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar15 = (char *)((ulonglong)(this->_impl_).mail_title_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar15 + 0x10);
    if (*(longlong *)(pcVar15 + 0x10) != 0) {
      pcVar11 = pcVar15;
      if (0xf < *(ulonglong *)(pcVar15 + 0x18)) {
        pcVar11 = *(char **)pcVar15;
      }
      local_28._Mysize = 0x29;
      local_28._Mydata = "mail.ServiceBusMailSendRequest.mail_title";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar11,(int)*(longlong *)(pcVar15 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar15 + 0x18)) {
        pcVar15 = *(char **)pcVar15;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar15;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,6,&local_28,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pcVar15 = (char *)((ulonglong)(this->_impl_).mail_sender_name_.tagged_ptr_.ptr_ &
                      0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar15 + 0x10);
    if (*(longlong *)(pcVar15 + 0x10) != 0) {
      pcVar11 = pcVar15;
      if (0xf < *(ulonglong *)(pcVar15 + 0x18)) {
        pcVar11 = *(char **)pcVar15;
      }
      local_28._Mysize = 0x2f;
      local_28._Mydata = "mail.ServiceBusMailSendRequest.mail_sender_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar11,(int)*(longlong *)(pcVar15 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar15 + 0x18)) {
        pcVar15 = *(char **)pcVar15;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar15;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,7,&local_28,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) {
    pcVar15 = (char *)((ulonglong)(this->_impl_).mail_content_.tagged_ptr_.ptr_ & 0xfffffffffffffffc
                      );
    puVar1 = (ulong64 *)(pcVar15 + 0x10);
    if (*(longlong *)(pcVar15 + 0x10) != 0) {
      pcVar11 = pcVar15;
      if (0xf < *(ulonglong *)(pcVar15 + 0x18)) {
        pcVar11 = *(char **)pcVar15;
      }
      local_28._Mysize = 0x2b;
      local_28._Mydata = "mail.ServiceBusMailSendRequest.mail_content";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar11,(int)*(longlong *)(pcVar15 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar15 + 0x18)) {
        pcVar15 = *(char **)pcVar15;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar15;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,8,&local_28,param_1);
    }
  }
  uVar5 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar5 & 8) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (9,(MessageLite *)(this->_impl_).mail_reward_value_,
                         (int)(((this->_impl_).mail_reward_value_)->_impl_)._cached_size_.atom_,
                         param_1,param_2);
  }
  if (((uVar5 >> 8 & 1) != 0) && (lVar3 = (this->_impl_).expires_in_seconds_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<10>
                        (param_2,lVar3,param_1);
  }
  if (((uVar5 >> 9 & 1) != 0) && (iVar2 = (this->_impl_).game_server_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<11>
                        (param_2,iVar2,param_1);
  }
  if (((uVar5 >> 10 & 1) != 0) && (iVar2 = (this->_impl_).region_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<12>
                        (param_2,iVar2,param_1);
  }
  if ((this->_padding_ & 1) == 0) {
    return (uchar *)(integral_constant<bool,1> *)param_1;
  }
  puVar6 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar6;
}

// GetClassData @ 14c15d6e0

ClassData * __thiscall
mail::ServiceBusMailSendRequest::GetClassData(ServiceBusMailSendRequest *this)

{
  return (ClassData *)&ServiceBusMailSendRequest_class_data_;
}

// PlacementNew_ @ 14c15d700

void * __cdecl
mail::ServiceBusMailSendRequest::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ServiceBusMailSendRequest_mail__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(Arena **)((longlong)param_2 + 0x18) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x30) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x38) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x40) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c15d750

void * __thiscall
mail::ServiceBusMailSendRequest::_scalar_deleting_destructor_
          (ServiceBusMailSendRequest *this,uint param_1)

{
  ~ServiceBusMailSendRequest(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// MergeImpl @ 14c15d790

void __cdecl
mail::ServiceBusMailReceiveResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if ((int)param_2[2]._padding_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&param_1[1]._internal_metadata_,
               (RepeatedPtrFieldBase *)&param_2[1]._internal_metadata_,
               google::protobuf::Arena::CopyConstruct<UniqueId>);
  }
  if ((int)param_2[3]._internal_metadata_.ptr_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)(param_1 + 3),(RepeatedPtrFieldBase *)(param_2 + 3),
               google::protobuf::Arena::CopyConstruct<mail::MailItem>);
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0x1f) != 0) {
    if (((uVar1 & 1) != 0) && (lVar3 = param_2[4]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[4]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar1 & 2) != 0) && (param_2[5]._padding_ != 0)) {
      param_1[5]._padding_ = param_2[5]._padding_;
    }
    if (((uVar1 & 4) != 0) && (iVar2 = (int)param_2[5]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[5]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 & 8) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[5]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[5]._internal_metadata_.ptr_ + 4) = iVar2;
    }
    if (((uVar1 & 0x10) != 0) && (param_2[6]._padding_ != 0)) {
      param_1[6]._padding_ = param_2[6]._padding_;
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

// Clear @ 14c15d860

void __thiscall mail::ServiceBusMailReceiveResponse::Clear(ServiceBusMailReceiveResponse *this)

{
  if (0 < *(int *)&(this->_impl_).mail_uid_.field_0x8) {
    google::protobuf::internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).mail_uid_);
  }
  if (0 < *(int *)&(this->_impl_).mail_reward_value_.field_0x8) {
    google::protobuf::internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).mail_reward_value_);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x1f) != 0) {
    (this->_impl_).entity_id_ = 0;
    (this->_impl_).receiver_player_uid_ = 0;
    (this->_impl_).mail_category_type_ = 0;
    (this->_impl_).error_code_ = 0;
    (this->_impl_).event_id_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c15d8c0

ulong64 __thiscall
mail::ServiceBusMailReceiveResponse::ByteSizeLong(ServiceBusMailReceiveResponse *this)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  RepeatedPtrField<UniqueId> *pRVar8;
  RepeatedPtrField<mail::MailItem> *pRVar9;
  ulonglong uVar10;
  __uint64 _Var11;
  
  uVar5 = *(ulonglong *)&(this->_impl_).mail_uid_;
  pRVar8 = &(this->_impl_).mail_uid_;
  uVar1 = *(uint *)&(this->_impl_).mail_uid_.field_0x8;
  uVar10 = (ulonglong)uVar1;
  if ((uVar5 & 1) != 0) {
    pRVar8 = (RepeatedPtrField<UniqueId> *)(uVar5 + 7);
  }
  puVar3 = (undefined8 *)&pRVar8->field_0x0;
  for (; pRVar8 != (RepeatedPtrField<UniqueId> *)(puVar3 + (int)uVar1);
      pRVar8 = (RepeatedPtrField<UniqueId> *)&pRVar8->field_0x8) {
    uVar4 = UniqueId::ByteSizeLong(*(UniqueId **)pRVar8);
    uVar6 = (uint)uVar4 | 1;
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
    uVar10 = uVar10 + (iVar7 * -9 + 0x160U >> 6) + uVar4;
  }
  uVar1 = *(uint *)&(this->_impl_).mail_reward_value_.field_0x8;
  pRVar9 = &(this->_impl_).mail_reward_value_;
  _Var11 = uVar10 + uVar1;
  if ((*(ulonglong *)pRVar9 & 1) != 0) {
    pRVar9 = (RepeatedPtrField<mail::MailItem> *)(*(ulonglong *)pRVar9 + 7);
  }
  puVar3 = (undefined8 *)&pRVar9->field_0x0;
  for (; pRVar9 != (RepeatedPtrField<mail::MailItem> *)(puVar3 + (int)uVar1);
      pRVar9 = (RepeatedPtrField<mail::MailItem> *)&pRVar9->field_0x8) {
    uVar4 = MailItem::ByteSizeLong(*(MailItem **)pRVar9);
    uVar6 = (uint)uVar4 | 1;
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
    _Var11 = _Var11 + (iVar7 * -9 + 0x160U >> 6) + uVar4;
  }
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 0x1f) != 0) {
    if (((uVar1 & 1) != 0) && (uVar5 = (this->_impl_).entity_id_, uVar5 != 0)) {
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
      _Var11 = _Var11 + (iVar7 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 2) != 0) && (uVar5 = (this->_impl_).receiver_player_uid_, uVar5 != 0)) {
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
      _Var11 = _Var11 + (iVar7 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 4) != 0) && (iVar7 = (this->_impl_).mail_category_type_, iVar7 != 0)) {
      uVar5 = (longlong)iVar7 | 1;
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
      _Var11 = _Var11 + 1 + (ulonglong)(iVar7 * -9 + 0x280U >> 6);
    }
    if (((uVar1 & 8) != 0) && (iVar7 = (this->_impl_).error_code_, iVar7 != 0)) {
      uVar5 = (longlong)iVar7 | 1;
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
      _Var11 = _Var11 + 1 + (ulonglong)(iVar7 * -9 + 0x280U >> 6);
    }
    if (((uVar1 & 0x10) != 0) && (uVar5 = (this->_impl_).event_id_, uVar5 != 0)) {
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
      _Var11 = _Var11 + (iVar7 * -9 + 0x2c0U >> 6);
    }
  }
  _Var11 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                     ((Message *)this,_Var11,&(this->_impl_)._cached_size_);
  return _Var11;
}

// _InternalSerialize @ 14c15db30

uchar * __thiscall
mail::ServiceBusMailReceiveResponse::_InternalSerialize
          (ServiceBusMailReceiveResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  byte bVar4;
  ulonglong uVar5;
  MessageLite *pMVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).entity_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar5 = (this->_impl_).entity_id_;
    *param_1 = 8;
    while( true ) {
      pbVar3 = param_1 + 1;
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x80) break;
      uVar5 = uVar5 >> 7;
      *pbVar3 = bVar4 | 0x80;
      param_1 = pbVar3;
    }
    *pbVar3 = bVar4;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar2 = (this->_impl_).receiver_player_uid_, lVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     ((this->_impl_).mail_category_type_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar5 = (ulonglong)(this->_impl_).mail_category_type_;
    *param_1 = 0x18;
    while( true ) {
      pbVar3 = param_1 + 1;
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x80) break;
      uVar5 = uVar5 >> 7;
      *pbVar3 = bVar4 | 0x80;
      param_1 = pbVar3;
    }
    *pbVar3 = bVar4;
    param_1 = param_1 + 2;
  }
  uVar1 = *(uint *)&(this->_impl_).mail_uid_.field_0x8;
  uVar8 = uVar7;
  if (uVar1 != 0) {
    do {
      pMVar6 = *(MessageLite **)&(this->_impl_).mail_uid_;
      if (((ulonglong)pMVar6 & 1) != 0) {
        pMVar6 = *(MessageLite **)((longlong)&pMVar6->_padding_ + (longlong)(int)uVar8 * 8 + 7);
      }
      param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                          (4,pMVar6,*(int *)((longlong)&pMVar6[1]._padding_ + 4),param_1,param_2);
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar1);
  }
  uVar1 = *(uint *)&(this->_impl_).mail_reward_value_.field_0x8;
  if (uVar1 != 0) {
    do {
      pMVar6 = *(MessageLite **)&(this->_impl_).mail_reward_value_;
      if (((ulonglong)pMVar6 & 1) != 0) {
        pMVar6 = *(MessageLite **)((longlong)&pMVar6->_padding_ + (longlong)(int)uVar7 * 8 + 7);
      }
      param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                          (5,pMVar6,(int)pMVar6[5]._internal_metadata_.ptr_,param_1,param_2);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) && ((this->_impl_).event_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar5 = (this->_impl_).event_id_;
    *param_1 = 0x30;
    while( true ) {
      param_1 = param_1 + 1;
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x80) break;
      uVar5 = uVar5 >> 7;
      *param_1 = bVar4 | 0x80;
    }
    *param_1 = bVar4;
    param_1 = param_1 + 1;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) && ((this->_impl_).error_code_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar5 = (ulonglong)(this->_impl_).error_code_;
    *param_1 = 0x38;
    while( true ) {
      pbVar3 = param_1 + 1;
      bVar4 = (byte)uVar5;
      if (uVar5 < 0x80) break;
      uVar5 = uVar5 >> 7;
      *pbVar3 = bVar4 | 0x80;
      param_1 = pbVar3;
    }
    *pbVar3 = bVar4;
    param_1 = param_1 + 2;
  }
  if ((this->_padding_ & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                        ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                         param_2);
  }
  return param_1;
}

// GetClassData @ 14c15dd70

ClassData * __thiscall
mail::ServiceBusMailReceiveResponse::GetClassData(ServiceBusMailReceiveResponse *this)

{
  return (ClassData *)&ServiceBusMailReceiveResponse_class_data_;
}

// PlacementNew_ @ 14c15dd90

void * __cdecl
mail::ServiceBusMailReceiveResponse::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ServiceBusMailReceiveResponse_mail__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(Arena **)((longlong)param_2 + 0x28) = param_3;
  *(Arena **)((longlong)param_2 + 0x40) = param_3;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c15dde0

void * __thiscall
mail::ServiceBusMailReceiveResponse::_scalar_deleting_destructor_
          (ServiceBusMailReceiveResponse *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ServiceBusMailReceiveResponse_mail__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if (*(longlong *)&(this->_impl_).mail_reward_value_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).mail_reward_value_);
  }
  if (*(longlong *)&(this->_impl_).mail_uid_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).mail_uid_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// MergeImpl @ 14c15de50

void __cdecl mail::MailCategoryListResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  if ((int)param_2[1]._internal_metadata_.ptr_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)(param_1 + 1),(RepeatedPtrFieldBase *)(param_2 + 1),
               google::protobuf::Arena::CopyConstruct<ds_mail::SqlMailTable>);
  }
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c15deb0

void __thiscall mail::MailCategoryListResponse::Clear(MailCategoryListResponse *this)

{
  if (0 < *(int *)&(this->_impl_).mail_list_.field_0x8) {
    google::protobuf::internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&this->_impl_);
  }
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c15def0

ulong64 __thiscall mail::MailCategoryListResponse::ByteSizeLong(MailCategoryListResponse *this)

{
  uint uVar1;
  ulonglong uVar2;
  RepeatedPtrField<ds_mail::SqlMailTable> *pRVar3;
  ulong64 uVar4;
  uint uVar5;
  int iVar6;
  Impl_ *pIVar7;
  __uint64 _Var8;
  
  uVar2 = *(ulonglong *)&(this->_impl_).mail_list_;
  pIVar7 = &this->_impl_;
  uVar1 = *(uint *)&(this->_impl_).mail_list_.field_0x8;
  _Var8 = (__uint64)uVar1;
  if ((uVar2 & 1) != 0) {
    pIVar7 = (Impl_ *)(uVar2 + 7);
  }
  pRVar3 = &pIVar7->mail_list_;
  for (; pIVar7 != (Impl_ *)(&pRVar3->field_0x0 + (longlong)(int)uVar1 * 8);
      pIVar7 = (Impl_ *)&(pIVar7->mail_list_).field_0x8) {
    uVar4 = ds_mail::SqlMailTable::ByteSizeLong(*(SqlMailTable **)&pIVar7->mail_list_);
    uVar5 = (uint)uVar4 | 1;
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
    _Var8 = _Var8 + (iVar6 * -9 + 0x160U >> 6) + uVar4;
  }
  _Var8 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var8,&(this->_impl_)._cached_size_);
  return _Var8;
}

// _InternalSerialize @ 14c15dfa0

uchar * __thiscall
mail::MailCategoryListResponse::_InternalSerialize
          (MailCategoryListResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  uint uVar3;
  
  uVar1 = *(uint *)&(this->_impl_).mail_list_.field_0x8;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      pMVar2 = *(MessageLite **)&(this->_impl_).mail_list_;
      if (((ulonglong)pMVar2 & 1) != 0) {
        pMVar2 = *(MessageLite **)((longlong)&pMVar2->_padding_ + (longlong)(int)uVar3 * 8 + 7);
      }
      param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                          (1,pMVar2,*(int *)((longlong)&pMVar2[1]._padding_ + 4),param_1,param_2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  if ((this->_padding_ & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                        ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                         param_2);
  }
  return param_1;
}

// GetClassData @ 14c15e030

ClassData * __thiscall mail::MailCategoryListResponse::GetClassData(MailCategoryListResponse *this)

{
  return (ClassData *)&MailCategoryListResponse_class_data_;
}

// PlacementNew_ @ 14c15e050

void * __cdecl
mail::MailCategoryListResponse::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7MailCategoryListResponse_mail__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(Arena **)((longlong)param_2 + 0x20) = param_3;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c15e080

void * __thiscall
mail::MailCategoryListResponse::_scalar_deleting_destructor_
          (MailCategoryListResponse *this,uint param_1)

{
  this->_padding_ = (longlong)&___7MailCategoryListResponse_mail__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if (*(longlong *)&(this->_impl_).mail_list_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&this->_impl_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// MergeImpl @ 14c15e0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl mail::MailServerResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  MessageLite *pMVar5;
  undefined8 uVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  ulong64 uVar8;
  Arena *pAVar9;
  Arena *pAVar10;
  undefined1 auStackY_88 [32];
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_88;
  pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar4 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar10 = pAVar9;
  if (bVar4 != 0) {
    pAVar10 = (Arena *)(pAVar9->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 1) != 0) {
    pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
    if ((pbVar7->_Mypair)._Myval2._Mysize == 0) {
      if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        local_58._8_8_ = 0;
        local_58._Ptr = (char *)0x0;
        local_48 = ___xmm_000000000000000f0000000000000000;
        uStack_40 = _UNK_15076add8;
        if (bVar4 != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                   (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                   pAVar9);
        if (0xf < uStack_40) {
          uVar8 = uStack_40 + 1;
          uVar6 = local_58._Ptr;
          if (0xfff < uVar8) {
            uVar6 = *(undefined8 *)(local_58._Ptr + -8);
            uVar8 = uStack_40 + 0x28;
            if ((char *)0x1f < local_58._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar6,uVar8);
        }
      }
    }
    else {
      *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
      if (bVar4 != 0) {
        pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
      }
      google::protobuf::internal::ArenaStringPtr::Set<>
                ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar7,pAVar9);
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  iVar2 = (int)param_2[2]._internal_metadata_.ptr_;
  if (iVar2 != 0) {
    iVar3 = (int)param_1[2]._internal_metadata_.ptr_;
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        clear_mail_response((MailServerResponse *)param_1);
      }
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar2;
    }
    switch(iVar2) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      if (iVar3 == iVar2) {
        google::protobuf::Message::MergeFrom
                  ((Message *)param_1[2]._padding_,(Message *)param_2[2]._padding_);
      }
      else {
        pMVar5 = google::protobuf::MessageLite::CopyConstruct
                           (pAVar10,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pMVar5;
      }
    }
  }
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c15e2b0

void __thiscall mail::MailServerResponse::Clear(MailServerResponse *this)

{
  undefined8 *puVar1;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    puVar1 = (undefined8 *)
             ((ulonglong)(this->_impl_).server_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1[2] = 0;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar1 = (undefined8 *)*puVar1;
    }
    *(undefined1 *)puVar1 = 0;
  }
  clear_mail_response(this);
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c15e310

ulong64 __thiscall mail::MailServerResponse::ByteSizeLong(MailServerResponse *this)

{
  longlong lVar1;
  uint uVar2;
  ulong64 uVar3;
  int iVar4;
  __uint64 _Var5;
  
  _Var5 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar1 = *(longlong *)
               (((ulonglong)(this->_impl_).server_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
               0x10), lVar1 != 0)) {
    uVar2 = (uint)lVar1 | 1;
    if (__isa_available < 5) {
      iVar4 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 0x1f - iVar4;
    }
    else {
      iVar4 = LZCOUNT(uVar2);
    }
    _Var5 = (ulonglong)(iVar4 * -9 + 0x160U >> 6) + 2 + lVar1;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    uVar3 = google::protobuf::internal::WireFormatLite::MessageSize<google::protobuf::Message>
                      ((this->_impl_).mail_response_.mail_clean_request_);
    _Var5 = _Var5 + uVar3 + 1;
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c15e3e0

uchar * __thiscall
mail::MailServerResponse::_InternalSerialize
          (MailServerResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
    iVar2 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).mail_response_.mail_clean_request_);
    iVar4 = 1;
    break;
  case 2:
    iVar2 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).mail_response_.mail_clean_request_);
    iVar4 = 2;
    break;
  case 3:
    iVar2 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).mail_response_.mail_clean_request_);
    iVar4 = 3;
    break;
  case 4:
    iVar2 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).mail_response_.mail_clean_request_);
    iVar4 = 4;
    break;
  case 5:
    iVar2 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).mail_response_.mail_clean_request_);
    iVar4 = 5;
    break;
  case 6:
    iVar2 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).mail_response_.mail_clean_request_);
    iVar4 = 6;
    break;
  case 7:
    iVar2 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).mail_response_.mail_clean_request_);
    iVar4 = 7;
    break;
  case 8:
    iVar2 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).mail_response_.mail_clean_request_);
    iVar4 = 8;
    break;
  default:
    goto switchD_14c15e41a_default;
  }
  param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                      (iVar4,(MessageLite *)(this->_impl_).mail_response_.mail_clean_request_,iVar2,
                       param_1,param_2);
switchD_14c15e41a_default:
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar6 = (char *)((ulonglong)(this->_impl_).server_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar6 + 0x10);
    if (*(longlong *)(pcVar6 + 0x10) != 0) {
      pcVar5 = pcVar6;
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar5 = *(char **)pcVar6;
      }
      local_18._Mysize = 0x23;
      local_18._Mydata = "mail.MailServerResponse.server_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar5,(int)*(longlong *)(pcVar6 + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar6 = *(char **)pcVar6;
      }
      local_18._Mysize = *puVar1;
      local_18._Mydata = pcVar6;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,100,&local_18,param_1);
    }
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar3;
}

// GetClassData @ 14c15e5b0

ClassData * __thiscall mail::MailServerResponse::GetClassData(MailServerResponse *this)

{
  return (ClassData *)&MailServerResponse_class_data_;
}

// PlacementNew_ @ 14c15e5d0

void * __cdecl mail::MailServerResponse::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7MailServerResponse_mail__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c15e600

void * __thiscall
mail::MailServerResponse::_scalar_deleting_destructor_(MailServerResponse *this,uint param_1)

{
  this->_padding_ = (longlong)&___7MailServerResponse_mail__6B_;
  SharedDtor((MessageLite *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// CopyConstruct<mail::MailItem> @ 14c15e650

void * __cdecl google::protobuf::Arena::CopyConstruct<mail::MailItem>(Arena *param_1,void *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (Arena *)0x0) {
    puVar1 = ::operator_new(0x60);
  }
  else {
    puVar1 = Allocate(param_1,0x60);
  }
  puVar1[1] = param_1;
  *puVar1 = &___7MailItem_mail__6B_;
  if ((*(byte *)((longlong)param_2 + 8) & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(puVar1 + 1),
               (UnknownFieldSet *)((*(ulonglong *)((longlong)param_2 + 8) & 0xfffffffffffffffe) + 8)
              );
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  if (*(int *)((longlong)param_2 + 0x18) != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)(puVar1 + 2),
               (RepeatedPtrFieldBase *)((longlong)param_2 + 0x10),
               CopyConstruct<ds_game::SqlMoneyTable>);
  }
  ((RepeatedPtrFieldBase *)(puVar1 + 5))->tagged_rep_or_elem_ = (void *)0x0;
  puVar1[6] = 0;
  puVar1[7] = param_1;
  if (*(int *)((longlong)param_2 + 0x30) != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)(puVar1 + 5),
               (RepeatedPtrFieldBase *)((longlong)param_2 + 0x28),
               CopyConstruct<ds_game::SqlItemEquipmentTable>);
  }
  ((RepeatedPtrFieldBase *)(puVar1 + 8))->tagged_rep_or_elem_ = (void *)0x0;
  puVar1[9] = 0;
  puVar1[10] = param_1;
  if (*(int *)((longlong)param_2 + 0x48) != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)(puVar1 + 8),
               (RepeatedPtrFieldBase *)((longlong)param_2 + 0x40),
               CopyConstruct<ds_game::SqlItemStackableTable>);
  }
  *(undefined4 *)(puVar1 + 0xb) = 0;
  return puVar1;
}

// CopyConstruct<ds_game::SqlItemEquipmentTable> @ 14c15e750

void * __cdecl
google::protobuf::Arena::CopyConstruct<ds_game::SqlItemEquipmentTable>(Arena *param_1,void *param_2)

{
  SqlItemEquipmentTable *pSVar1;
  
  if (param_1 == (Arena *)0x0) {
    pSVar1 = ::operator_new(0x88);
  }
  else {
    pSVar1 = Allocate(param_1,0x88);
  }
  pSVar1 = ds_game::SqlItemEquipmentTable::SqlItemEquipmentTable(pSVar1,param_1,param_2);
  return pSVar1;
}

// CopyConstruct<ds_game::SqlItemStackableTable> @ 14c15e7a0

void * __cdecl
google::protobuf::Arena::CopyConstruct<ds_game::SqlItemStackableTable>(Arena *param_1,void *param_2)

{
  SqlItemStackableTable *pSVar1;
  
  if (param_1 == (Arena *)0x0) {
    pSVar1 = ::operator_new(0x40);
  }
  else {
    pSVar1 = Allocate(param_1,0x40);
  }
  pSVar1 = ds_game::SqlItemStackableTable::SqlItemStackableTable(pSVar1,param_1,param_2);
  return pSVar1;
}

// CopyConstruct<ds_game::SqlMoneyTable> @ 14c15e7f0

void * __cdecl
google::protobuf::Arena::CopyConstruct<ds_game::SqlMoneyTable>(Arena *param_1,void *param_2)

{
  SqlMoneyTable *pSVar1;
  
  if (param_1 == (Arena *)0x0) {
    pSVar1 = ::operator_new(0x30);
  }
  else {
    pSVar1 = Allocate(param_1,0x30);
  }
  pSVar1 = ds_game::SqlMoneyTable::SqlMoneyTable(pSVar1,param_1,param_2);
  return pSVar1;
}

// GetOwnedMessage<mail::MailCleanRequest> @ 14c15e840

MailCleanRequest * __cdecl
google::protobuf::internal::GetOwnedMessage<mail::MailCleanRequest>
          (Arena *param_1,MailCleanRequest *param_2,Arena *param_3)

{
  MailCleanRequest *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (MailCleanRequest *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (MailCleanRequest *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<mail::ServiceBusMailAlertRequest> @ 14c15e850

ServiceBusMailAlertRequest * __cdecl
google::protobuf::internal::GetOwnedMessage<mail::ServiceBusMailAlertRequest>
          (Arena *param_1,ServiceBusMailAlertRequest *param_2,Arena *param_3)

{
  ServiceBusMailAlertRequest *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (ServiceBusMailAlertRequest *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (ServiceBusMailAlertRequest *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<mail::ServiceBusMailDeleteRequest> @ 14c15e860

ServiceBusMailDeleteRequest * __cdecl
google::protobuf::internal::GetOwnedMessage<mail::ServiceBusMailDeleteRequest>
          (Arena *param_1,ServiceBusMailDeleteRequest *param_2,Arena *param_3)

{
  ServiceBusMailDeleteRequest *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (ServiceBusMailDeleteRequest *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (ServiceBusMailDeleteRequest *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<mail::ServiceBusMailDeleteResponse> @ 14c15e870

ServiceBusMailDeleteResponse * __cdecl
google::protobuf::internal::GetOwnedMessage<mail::ServiceBusMailDeleteResponse>
          (Arena *param_1,ServiceBusMailDeleteResponse *param_2,Arena *param_3)

{
  ServiceBusMailDeleteResponse *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (ServiceBusMailDeleteResponse *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (ServiceBusMailDeleteResponse *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<mail::ServiceBusMailReceiveRequest> @ 14c15e880

ServiceBusMailReceiveRequest * __cdecl
google::protobuf::internal::GetOwnedMessage<mail::ServiceBusMailReceiveRequest>
          (Arena *param_1,ServiceBusMailReceiveRequest *param_2,Arena *param_3)

{
  ServiceBusMailReceiveRequest *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (ServiceBusMailReceiveRequest *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (ServiceBusMailReceiveRequest *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<mail::ServiceBusMailReceiveResponse> @ 14c15e890

ServiceBusMailReceiveResponse * __cdecl
google::protobuf::internal::GetOwnedMessage<mail::ServiceBusMailReceiveResponse>
          (Arena *param_1,ServiceBusMailReceiveResponse *param_2,Arena *param_3)

{
  ServiceBusMailReceiveResponse *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (ServiceBusMailReceiveResponse *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (ServiceBusMailReceiveResponse *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<mail::ServiceBusMailSendRequest> @ 14c15e8a0

ServiceBusMailSendRequest * __cdecl
google::protobuf::internal::GetOwnedMessage<mail::ServiceBusMailSendRequest>
          (Arena *param_1,ServiceBusMailSendRequest *param_2,Arena *param_3)

{
  ServiceBusMailSendRequest *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (ServiceBusMailSendRequest *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (ServiceBusMailSendRequest *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<mail::ServiceBusMailSendResponse> @ 14c15e8b0

ServiceBusMailSendResponse * __cdecl
google::protobuf::internal::GetOwnedMessage<mail::ServiceBusMailSendResponse>
          (Arena *param_1,ServiceBusMailSendResponse *param_2,Arena *param_3)

{
  ServiceBusMailSendResponse *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (ServiceBusMailSendResponse *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (ServiceBusMailSendResponse *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// WriteInt32ToArrayWithField<12> @ 14c15e8c0

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<12>
          (EpsCopyOutputStream *param_1,int param_2,uchar *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  if (param_1->end_ <= param_3) {
    param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_1,param_3);
  }
  *param_3 = 0x60;
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

// WriteInt64ToArrayWithField<10> @ 14c15e920

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<10>
          (EpsCopyOutputStream *param_1,long64 param_2,uchar *param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  if (param_1->end_ <= param_3) {
    param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_1,param_3);
  }
  *param_3 = 0x50;
  while( true ) {
    pbVar1 = param_3 + 1;
    bVar2 = (byte)param_2;
    if ((ulonglong)param_2 < 0x80) break;
    param_2 = (ulonglong)param_2 >> 7;
    *pbVar1 = bVar2 | 0x80;
    param_3 = pbVar1;
  }
  *pbVar1 = bVar2;
  return param_3 + 2;
}

// MailCategoryListResponse @ 14c15e980

MailCategoryListResponse * __thiscall
mail::MailCategoryListResponse::MailCategoryListResponse
          (MailCategoryListResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MailCategoryListResponse_mail__6B_;
  *(undefined8 *)&(this->_impl_).mail_list_ = 0;
  *(undefined8 *)&(this->_impl_).mail_list_.field_0x8 = 0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  *(Arena **)&(this->_impl_).mail_list_.field_0x10 = param_1;
  return this;
}

// MailCategoryListResponse @ 14c15e9b0

MailCategoryListResponse * __thiscall
mail::MailCategoryListResponse::MailCategoryListResponse
          (MailCategoryListResponse *this,Arena *param_1,MailCategoryListResponse *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MailCategoryListResponse_mail__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  *(Arena **)&(this->_impl_).mail_list_.field_0x10 = param_1;
  *(undefined8 *)&(this->_impl_).mail_list_ = 0;
  *(undefined8 *)&(this->_impl_).mail_list_.field_0x8 = 0;
  if (*(int *)&(param_2->_impl_).mail_list_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&this->_impl_,(RepeatedPtrFieldBase *)&param_2->_impl_,
               google::protobuf::Arena::CopyConstruct<ds_mail::SqlMailTable>);
  }
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  return this;
}

// MailCleanRequest @ 14c15ea40

MailCleanRequest * __thiscall
mail::MailCleanRequest::MailCleanRequest(MailCleanRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MailCleanRequest_mail__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).receiver_uid_ = 0;
  return this;
}

// MailCleanRequest @ 14c15ea70

MailCleanRequest * __thiscall
mail::MailCleanRequest::MailCleanRequest
          (MailCleanRequest *this,Arena *param_1,MailCleanRequest *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MailCleanRequest_mail__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).receiver_uid_ = (param_2->_impl_).receiver_uid_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// MailItem @ 14c15ead0

MailItem * __thiscall mail::MailItem::MailItem(MailItem *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MailItem_mail__6B_;
  *(undefined8 *)&(this->_impl_).money_ = 0;
  *(undefined8 *)&(this->_impl_).money_.field_0x8 = 0;
  *(undefined8 *)&(this->_impl_).equipment_ = 0;
  *(undefined8 *)&(this->_impl_).equipment_.field_0x8 = 0;
  *(undefined8 *)&(this->_impl_).stackable_ = 0;
  *(undefined8 *)&(this->_impl_).stackable_.field_0x8 = 0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  *(Arena **)&(this->_impl_).money_.field_0x10 = param_1;
  *(Arena **)&(this->_impl_).equipment_.field_0x10 = param_1;
  *(Arena **)&(this->_impl_).stackable_.field_0x10 = param_1;
  return this;
}

// MailItem @ 14c15eb20

MailItem * __thiscall mail::MailItem::MailItem(MailItem *this,Arena *param_1,MailItem *param_2)

{
  RepeatedPtrField<ds_game::SqlItemEquipmentTable> *this_00;
  RepeatedPtrField<ds_game::SqlItemStackableTable> *this_01;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MailItem_mail__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  *(Arena **)&(this->_impl_).money_.field_0x10 = param_1;
  *(undefined8 *)&(this->_impl_).money_ = 0;
  *(undefined8 *)&(this->_impl_).money_.field_0x8 = 0;
  if (*(int *)&(param_2->_impl_).money_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&this->_impl_,(RepeatedPtrFieldBase *)&param_2->_impl_,
               google::protobuf::Arena::CopyConstruct<ds_game::SqlMoneyTable>);
  }
  this_00 = &(this->_impl_).equipment_;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).equipment_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).equipment_.field_0x10 = param_1;
  if (*(int *)&(param_2->_impl_).equipment_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this_00,(RepeatedPtrFieldBase *)&(param_2->_impl_).equipment_
               ,google::protobuf::Arena::CopyConstruct<ds_game::SqlItemEquipmentTable>);
  }
  this_01 = &(this->_impl_).stackable_;
  *(undefined8 *)&this_01->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).stackable_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).stackable_.field_0x10 = param_1;
  if (*(int *)&(param_2->_impl_).stackable_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this_01,(RepeatedPtrFieldBase *)&(param_2->_impl_).stackable_
               ,google::protobuf::Arena::CopyConstruct<ds_game::SqlItemStackableTable>);
  }
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  return this;
}

// MailServerResponse @ 14c15ec10

MailServerResponse * __thiscall
mail::MailServerResponse::MailServerResponse(MailServerResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MailServerResponse_mail__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).server_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_)._oneof_case_[0] = 0;
  return this;
}

// MailServerResponse @ 14c15ec40

MailServerResponse * __thiscall
mail::MailServerResponse::MailServerResponse
          (MailServerResponse *this,Arena *param_1,MailServerResponse *param_2)

{
  ArenaStringPtr *this_00;
  uint uVar1;
  TaggedStringPtr TVar2;
  void *pvVar3;
  MessageLite *pMVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MailServerResponse_mail__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).server_name_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar3 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  (this->_impl_).server_name_.tagged_ptr_.ptr_ = pvVar3;
  uVar1 = (param_2->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = uVar1;
  switch(uVar1) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    pMVar4 = google::protobuf::MessageLite::CopyConstruct
                       (param_1,(MessageLite *)(param_2->_impl_).mail_response_.mail_clean_request_)
    ;
    (this->_impl_).mail_response_.mail_clean_request_ = (Message *)pMVar4;
  }
  return this;
}

// ServiceBusMailAlertRequest @ 14c15ed20

ServiceBusMailAlertRequest * __thiscall
mail::ServiceBusMailAlertRequest::ServiceBusMailAlertRequest
          (ServiceBusMailAlertRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusMailAlertRequest_mail__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).receive_player_uid_ = 0;
  (this->_impl_).is_reward_ = false;
  return this;
}

// ServiceBusMailAlertRequest @ 14c15ed50

ServiceBusMailAlertRequest * __thiscall
mail::ServiceBusMailAlertRequest::ServiceBusMailAlertRequest
          (ServiceBusMailAlertRequest *this,Arena *param_1,ServiceBusMailAlertRequest *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusMailAlertRequest_mail__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).receive_player_uid_ = (param_2->_impl_).receive_player_uid_;
  (this->_impl_).is_reward_ = (param_2->_impl_).is_reward_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// ServiceBusMailDeleteRequest @ 14c15edb0

ServiceBusMailDeleteRequest * __thiscall
mail::ServiceBusMailDeleteRequest::ServiceBusMailDeleteRequest
          (ServiceBusMailDeleteRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusMailDeleteRequest_mail__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).mail_uid_ = (UniqueId *)0x0;
  (this->_impl_).receiver_player_uid_ = 0;
  (this->_impl_).entity_id_ = 0;
  (this->_impl_).game_server_index_ = 0;
  (this->_impl_).mail_category_type_ = 0;
  (this->_impl_).event_id_ = 0;
  return this;
}

// ServiceBusMailDeleteRequest @ 14c15ede0

ServiceBusMailDeleteRequest * __thiscall
mail::ServiceBusMailDeleteRequest::ServiceBusMailDeleteRequest
          (ServiceBusMailDeleteRequest *this,Arena *param_1,ServiceBusMailDeleteRequest *param_2)

{
  ulong64 uVar1;
  int iVar2;
  UniqueId *pUVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusMailDeleteRequest_mail__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pUVar3 = (UniqueId *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pUVar3 = google::protobuf::Arena::CopyConstruct<UniqueId>(param_1,(param_2->_impl_).mail_uid_);
  }
  (this->_impl_).mail_uid_ = pUVar3;
  uVar1 = (param_2->_impl_).entity_id_;
  (this->_impl_).receiver_player_uid_ = (param_2->_impl_).receiver_player_uid_;
  (this->_impl_).entity_id_ = uVar1;
  iVar2 = (param_2->_impl_).mail_category_type_;
  uVar1 = (param_2->_impl_).event_id_;
  (this->_impl_).game_server_index_ = (param_2->_impl_).game_server_index_;
  (this->_impl_).mail_category_type_ = iVar2;
  (this->_impl_).event_id_ = uVar1;
  return this;
}

// ServiceBusMailDeleteResponse @ 14c15ee70

ServiceBusMailDeleteResponse * __thiscall
mail::ServiceBusMailDeleteResponse::ServiceBusMailDeleteResponse
          (ServiceBusMailDeleteResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusMailDeleteResponse_mail__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).entity_id_ = 0;
  (this->_impl_).event_id_ = 0;
  (this->_impl_).error_code_ = 0;
  return this;
}

// ServiceBusMailDeleteResponse @ 14c15eea0

ServiceBusMailDeleteResponse * __thiscall
mail::ServiceBusMailDeleteResponse::ServiceBusMailDeleteResponse
          (ServiceBusMailDeleteResponse *this,Arena *param_1,ServiceBusMailDeleteResponse *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusMailDeleteResponse_mail__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).entity_id_ = (param_2->_impl_).entity_id_;
  (this->_impl_).event_id_ = (param_2->_impl_).event_id_;
  (this->_impl_).error_code_ = (param_2->_impl_).error_code_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// ServiceBusMailReceiveRequest @ 14c15ef10

ServiceBusMailReceiveRequest * __thiscall
mail::ServiceBusMailReceiveRequest::ServiceBusMailReceiveRequest
          (ServiceBusMailReceiveRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusMailReceiveRequest_mail__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->_impl_).receive_fail_mail_uid_ = 0;
  *(undefined8 *)&(this->_impl_).receive_fail_mail_uid_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).receive_fail_mail_uid_.field_0x10 = param_1;
  (this->_impl_).receive_mail_uid_ = (UniqueId *)0x0;
  (this->_impl_).entity_id_ = 0;
  (this->_impl_).receiver_player_uid_ = 0;
  (this->_impl_).mail_category_type_ = 0;
  (this->_impl_).game_server_index_ = 0;
  (this->_impl_).is_fail_ = false;
  *(undefined3 *)&(this->_impl_).field_0x41 = 0;
  (this->_impl_).storage_limit_ = 0;
  (this->_impl_).event_id_ = 0;
  return this;
}

// ServiceBusMailReceiveRequest @ 14c15ef50

ServiceBusMailReceiveRequest * __thiscall
mail::ServiceBusMailReceiveRequest::ServiceBusMailReceiveRequest
          (ServiceBusMailReceiveRequest *this,Arena *param_1,ServiceBusMailReceiveRequest *param_2)

{
  RepeatedPtrField<UniqueId> *this_00;
  long64 lVar1;
  int iVar2;
  bool bVar3;
  undefined3 uVar4;
  uint uVar5;
  UniqueId *pUVar6;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusMailReceiveRequest_mail__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(this->_impl_).receive_fail_mail_uid_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pUVar6 = (UniqueId *)0x0;
  *(Arena **)&(this->_impl_).receive_fail_mail_uid_.field_0x10 = param_1;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).receive_fail_mail_uid_.field_0x8 = 0;
  if (*(int *)&(param_2->_impl_).receive_fail_mail_uid_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this_00,
               (RepeatedPtrFieldBase *)&(param_2->_impl_).receive_fail_mail_uid_,
               google::protobuf::Arena::CopyConstruct<UniqueId>);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pUVar6 = google::protobuf::Arena::CopyConstruct<UniqueId>
                       (param_1,(param_2->_impl_).receive_mail_uid_);
  }
  (this->_impl_).receive_mail_uid_ = pUVar6;
  lVar1 = (param_2->_impl_).receiver_player_uid_;
  (this->_impl_).entity_id_ = (param_2->_impl_).entity_id_;
  (this->_impl_).receiver_player_uid_ = lVar1;
  iVar2 = (param_2->_impl_).game_server_index_;
  bVar3 = (param_2->_impl_).is_fail_;
  uVar4 = *(undefined3 *)&(param_2->_impl_).field_0x41;
  uVar5 = (param_2->_impl_).storage_limit_;
  (this->_impl_).mail_category_type_ = (param_2->_impl_).mail_category_type_;
  (this->_impl_).game_server_index_ = iVar2;
  (this->_impl_).is_fail_ = bVar3;
  *(undefined3 *)&(this->_impl_).field_0x41 = uVar4;
  (this->_impl_).storage_limit_ = uVar5;
  (this->_impl_).event_id_ = (param_2->_impl_).event_id_;
  return this;
}

// ServiceBusMailReceiveResponse @ 14c15f020

ServiceBusMailReceiveResponse * __thiscall
mail::ServiceBusMailReceiveResponse::ServiceBusMailReceiveResponse
          (ServiceBusMailReceiveResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusMailReceiveResponse_mail__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->_impl_).mail_uid_ = 0;
  *(undefined8 *)&(this->_impl_).mail_uid_.field_0x8 = 0;
  *(undefined8 *)&(this->_impl_).mail_reward_value_ = 0;
  *(undefined8 *)&(this->_impl_).mail_reward_value_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).mail_uid_.field_0x10 = param_1;
  *(Arena **)&(this->_impl_).mail_reward_value_.field_0x10 = param_1;
  (this->_impl_).entity_id_ = 0;
  (this->_impl_).receiver_player_uid_ = 0;
  (this->_impl_).mail_category_type_ = 0;
  (this->_impl_).error_code_ = 0;
  (this->_impl_).event_id_ = 0;
  return this;
}

// ServiceBusMailReceiveResponse @ 14c15f070

ServiceBusMailReceiveResponse * __thiscall
mail::ServiceBusMailReceiveResponse::ServiceBusMailReceiveResponse
          (ServiceBusMailReceiveResponse *this,Arena *param_1,ServiceBusMailReceiveResponse *param_2
          )

{
  RepeatedPtrField<UniqueId> *this_00;
  RepeatedPtrField<mail::MailItem> *this_01;
  long64 lVar1;
  ulong64 uVar2;
  int iVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusMailReceiveResponse_mail__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(this->_impl_).mail_uid_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  *(Arena **)&(this->_impl_).mail_uid_.field_0x10 = param_1;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).mail_uid_.field_0x8 = 0;
  if (*(int *)&(param_2->_impl_).mail_uid_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this_00,(RepeatedPtrFieldBase *)&(param_2->_impl_).mail_uid_,
               google::protobuf::Arena::CopyConstruct<UniqueId>);
  }
  this_01 = &(this->_impl_).mail_reward_value_;
  *(undefined8 *)&this_01->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).mail_reward_value_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).mail_reward_value_.field_0x10 = param_1;
  if (*(int *)&(param_2->_impl_).mail_reward_value_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this_01,
               (RepeatedPtrFieldBase *)&(param_2->_impl_).mail_reward_value_,
               google::protobuf::Arena::CopyConstruct<mail::MailItem>);
  }
  lVar1 = (param_2->_impl_).receiver_player_uid_;
  (this->_impl_).entity_id_ = (param_2->_impl_).entity_id_;
  (this->_impl_).receiver_player_uid_ = lVar1;
  iVar3 = (param_2->_impl_).error_code_;
  uVar2 = (param_2->_impl_).event_id_;
  (this->_impl_).mail_category_type_ = (param_2->_impl_).mail_category_type_;
  (this->_impl_).error_code_ = iVar3;
  (this->_impl_).event_id_ = uVar2;
  return this;
}

// ServiceBusMailSendRequest @ 14c15f140

ServiceBusMailSendRequest * __thiscall
mail::ServiceBusMailSendRequest::ServiceBusMailSendRequest
          (ServiceBusMailSendRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusMailSendRequest_mail__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).receiver_player_uid_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->_impl_).receiver_player_uid_.soo_rep_.field0_0x0 + 8) = 0;
  (this->_impl_).mail_title_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_)._receiver_player_uid_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).mail_sender_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).mail_content_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).mail_reward_value_ = (MailItem *)0x0;
  (this->_impl_).sender_player_uid_ = 0;
  (this->_impl_).event_id_ = 0;
  (this->_impl_).mail_category_type_ = 0;
  (this->_impl_).mail_type_ = 0;
  (this->_impl_).expires_in_seconds_ = 0;
  (this->_impl_).game_server_index_ = 0;
  (this->_impl_).region_index_ = 0;
  return this;
}

// ServiceBusMailSendRequest @ 14c15f190

ServiceBusMailSendRequest * __thiscall
mail::ServiceBusMailSendRequest::ServiceBusMailSendRequest
          (ServiceBusMailSendRequest *this,Arena *param_1,ServiceBusMailSendRequest *param_2)

{
  ArenaStringPtr *pAVar1;
  ulong64 uVar2;
  long64 lVar3;
  int iVar4;
  TaggedStringPtr TVar5;
  void *pvVar6;
  MailItem *pMVar7;
  InternalVisibility local_res8 [8];
  InternalVisibility local_res10 [8];
  InternalVisibility local_res18 [8];
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusMailSendRequest_mail__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pMVar7 = (MailItem *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<__int64>::RepeatedField<__int64>
            (&(this->_impl_).receiver_player_uid_,local_res8[0],param_1,
             &(param_2->_impl_).receiver_player_uid_);
  pAVar1 = &(param_2->_impl_).mail_title_;
  (this->_impl_)._receiver_player_uid_cached_byte_size_.atom_ = (atomic<int>)0x0;
  pvVar6 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)local_res8);
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  pAVar1 = &(param_2->_impl_).mail_sender_name_;
  (this->_impl_).mail_title_.tagged_ptr_.ptr_ = pvVar6;
  pvVar6 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)(local_res8 + 8));
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  pAVar1 = &(param_2->_impl_).mail_content_;
  (this->_impl_).mail_sender_name_.tagged_ptr_.ptr_ = pvVar6;
  pvVar6 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)(local_res8 + 0x10));
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  (this->_impl_).mail_content_.tagged_ptr_.ptr_ = pvVar6;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) {
    pMVar7 = google::protobuf::Arena::CopyConstruct<mail::MailItem>
                       (param_1,(param_2->_impl_).mail_reward_value_);
  }
  (this->_impl_).mail_reward_value_ = pMVar7;
  uVar2 = (param_2->_impl_).event_id_;
  (this->_impl_).sender_player_uid_ = (param_2->_impl_).sender_player_uid_;
  (this->_impl_).event_id_ = uVar2;
  iVar4 = (param_2->_impl_).mail_type_;
  lVar3 = (param_2->_impl_).expires_in_seconds_;
  (this->_impl_).mail_category_type_ = (param_2->_impl_).mail_category_type_;
  (this->_impl_).mail_type_ = iVar4;
  (this->_impl_).expires_in_seconds_ = lVar3;
  iVar4 = (param_2->_impl_).region_index_;
  (this->_impl_).game_server_index_ = (param_2->_impl_).game_server_index_;
  (this->_impl_).region_index_ = iVar4;
  return this;
}

// ServiceBusMailSendResponse @ 14c15f2a0

ServiceBusMailSendResponse * __thiscall
mail::ServiceBusMailSendResponse::ServiceBusMailSendResponse
          (ServiceBusMailSendResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusMailSendResponse_mail__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).event_id_ = 0;
  (this->_impl_).is_fail_ = false;
  return this;
}

// ServiceBusMailSendResponse @ 14c15f2d0

ServiceBusMailSendResponse * __thiscall
mail::ServiceBusMailSendResponse::ServiceBusMailSendResponse
          (ServiceBusMailSendResponse *this,Arena *param_1,ServiceBusMailSendResponse *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusMailSendResponse_mail__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).event_id_ = (param_2->_impl_).event_id_;
  (this->_impl_).is_fail_ = (param_2->_impl_).is_fail_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// ~RepeatedPtrField<mail::MailItem> @ 14c15f330

void __thiscall
google::protobuf::RepeatedPtrField<mail::MailItem>::~RepeatedPtrField<mail::MailItem>
          (RepeatedPtrField<mail::MailItem> *this)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  RepeatedPtrField<mail::MailItem> *pRVar4;
  
  if (*(longlong *)this == 0) {
    return;
  }
  lVar3 = 0;
  if (*(longlong *)&this->field_0x10 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  if ((~*(byte *)this & 1) == 0) {
    uVar2 = *(uint *)(*(longlong *)this + -1);
    pRVar4 = (RepeatedPtrField<mail::MailItem> *)(*(longlong *)this + 7);
  }
  else {
    uVar2 = (uint)(*(longlong *)this != 0);
    pRVar4 = this;
  }
  if (0 < (int)uVar2) {
    do {
      puVar1 = *(undefined8 **)(&pRVar4->field_0x0 + lVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar2);
  }
  if ((~*(byte *)this & 1) == 0) {
    ::operator_delete((void *)(*(longlong *)this + -1),
                      (longlong)(*(int *)&this->field_0xc + 1) * 8 + 8);
  }
  *(undefined8 *)this = 0;
  return;
}

// ~RepeatedPtrField<ds_game::SqlItemEquipmentTable> @ 14c15f350

void __thiscall
google::protobuf::RepeatedPtrField<ds_game::SqlItemEquipmentTable>::
~RepeatedPtrField<ds_game::SqlItemEquipmentTable>
          (RepeatedPtrField<ds_game::SqlItemEquipmentTable> *this)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  RepeatedPtrField<ds_game::SqlItemEquipmentTable> *pRVar4;
  
  if (*(longlong *)this == 0) {
    return;
  }
  lVar3 = 0;
  if (*(longlong *)&this->field_0x10 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  if ((~*(byte *)this & 1) == 0) {
    uVar2 = *(uint *)(*(longlong *)this + -1);
    pRVar4 = (RepeatedPtrField<ds_game::SqlItemEquipmentTable> *)(*(longlong *)this + 7);
  }
  else {
    uVar2 = (uint)(*(longlong *)this != 0);
    pRVar4 = this;
  }
  if (0 < (int)uVar2) {
    do {
      puVar1 = *(undefined8 **)(&pRVar4->field_0x0 + lVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar2);
  }
  if ((~*(byte *)this & 1) == 0) {
    ::operator_delete((void *)(*(longlong *)this + -1),
                      (longlong)(*(int *)&this->field_0xc + 1) * 8 + 8);
  }
  *(undefined8 *)this = 0;
  return;
}

// ~RepeatedPtrField<ds_game::SqlItemStackableTable> @ 14c15f370

void __thiscall
google::protobuf::RepeatedPtrField<ds_game::SqlItemStackableTable>::
~RepeatedPtrField<ds_game::SqlItemStackableTable>
          (RepeatedPtrField<ds_game::SqlItemStackableTable> *this)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  RepeatedPtrField<ds_game::SqlItemStackableTable> *pRVar4;
  
  if (*(longlong *)this == 0) {
    return;
  }
  lVar3 = 0;
  if (*(longlong *)&this->field_0x10 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  if ((~*(byte *)this & 1) == 0) {
    uVar2 = *(uint *)(*(longlong *)this + -1);
    pRVar4 = (RepeatedPtrField<ds_game::SqlItemStackableTable> *)(*(longlong *)this + 7);
  }
  else {
    uVar2 = (uint)(*(longlong *)this != 0);
    pRVar4 = this;
  }
  if (0 < (int)uVar2) {
    do {
      puVar1 = *(undefined8 **)(&pRVar4->field_0x0 + lVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar2);
  }
  if ((~*(byte *)this & 1) == 0) {
    ::operator_delete((void *)(*(longlong *)this + -1),
                      (longlong)(*(int *)&this->field_0xc + 1) * 8 + 8);
  }
  *(undefined8 *)this = 0;
  return;
}

// ~RepeatedPtrField<ds_mail::SqlMailTable> @ 14c15f390

void __thiscall
google::protobuf::RepeatedPtrField<ds_mail::SqlMailTable>::~RepeatedPtrField<ds_mail::SqlMailTable>
          (RepeatedPtrField<ds_mail::SqlMailTable> *this)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  RepeatedPtrField<ds_mail::SqlMailTable> *pRVar4;
  
  if (*(longlong *)this == 0) {
    return;
  }
  lVar3 = 0;
  if (*(longlong *)&this->field_0x10 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  if ((~*(byte *)this & 1) == 0) {
    uVar2 = *(uint *)(*(longlong *)this + -1);
    pRVar4 = (RepeatedPtrField<ds_mail::SqlMailTable> *)(*(longlong *)this + 7);
  }
  else {
    uVar2 = (uint)(*(longlong *)this != 0);
    pRVar4 = this;
  }
  if (0 < (int)uVar2) {
    do {
      puVar1 = *(undefined8 **)(&pRVar4->field_0x0 + lVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar2);
  }
  if ((~*(byte *)this & 1) == 0) {
    ::operator_delete((void *)(*(longlong *)this + -1),
                      (longlong)(*(int *)&this->field_0xc + 1) * 8 + 8);
  }
  *(undefined8 *)this = 0;
  return;
}

// ~RepeatedPtrField<ds_game::SqlMoneyTable> @ 14c15f3b0

void __thiscall
google::protobuf::RepeatedPtrField<ds_game::SqlMoneyTable>::
~RepeatedPtrField<ds_game::SqlMoneyTable>(RepeatedPtrField<ds_game::SqlMoneyTable> *this)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  RepeatedPtrField<ds_game::SqlMoneyTable> *pRVar4;
  
  if (*(longlong *)this == 0) {
    return;
  }
  lVar3 = 0;
  if (*(longlong *)&this->field_0x10 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  if ((~*(byte *)this & 1) == 0) {
    uVar2 = *(uint *)(*(longlong *)this + -1);
    pRVar4 = (RepeatedPtrField<ds_game::SqlMoneyTable> *)(*(longlong *)this + 7);
  }
  else {
    uVar2 = (uint)(*(longlong *)this != 0);
    pRVar4 = this;
  }
  if (0 < (int)uVar2) {
    do {
      puVar1 = *(undefined8 **)(&pRVar4->field_0x0 + lVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar2);
  }
  if ((~*(byte *)this & 1) == 0) {
    ::operator_delete((void *)(*(longlong *)this + -1),
                      (longlong)(*(int *)&this->field_0xc + 1) * 8 + 8);
  }
  *(undefined8 *)this = 0;
  return;
}

// ~MailCategoryListResponse @ 14c15f3d0

void __thiscall
mail::MailCategoryListResponse::~MailCategoryListResponse(MailCategoryListResponse *this)

{
  this->_padding_ = (longlong)&___7MailCategoryListResponse_mail__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if (*(longlong *)&(this->_impl_).mail_list_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&this->_impl_);
    return;
  }
  return;
}

// ~MailCleanRequest @ 14c15f420

void __thiscall mail::MailCleanRequest::~MailCleanRequest(MailCleanRequest *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7MailCleanRequest_mail__6B_;
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

// ~MailItem @ 14c15f440

void __thiscall mail::MailItem::~MailItem(MailItem *this)

{
  this->_padding_ = (longlong)&___7MailItem_mail__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if (*(longlong *)&(this->_impl_).stackable_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).stackable_);
  }
  if (*(longlong *)&(this->_impl_).equipment_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).equipment_);
  }
  if (*(longlong *)&(this->_impl_).money_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&this->_impl_);
    return;
  }
  return;
}

// ~MailServerResponse @ 14c15f4b0

void __thiscall mail::MailServerResponse::~MailServerResponse(MailServerResponse *this)

{
  this->_padding_ = (longlong)&___7MailServerResponse_mail__6B_;
  SharedDtor((MessageLite *)this);
  return;
}

// ~ServiceBusMailAlertRequest @ 14c15f4d0

void __thiscall
mail::ServiceBusMailAlertRequest::~ServiceBusMailAlertRequest(ServiceBusMailAlertRequest *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7ServiceBusMailAlertRequest_mail__6B_;
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

// ~ServiceBusMailDeleteRequest @ 14c15f4f0

void __thiscall
mail::ServiceBusMailDeleteRequest::~ServiceBusMailDeleteRequest(ServiceBusMailDeleteRequest *this)

{
  UniqueId *this_00;
  
  this->_padding_ = (longlong)&___7ServiceBusMailDeleteRequest_mail__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).mail_uid_;
  if (this_00 != (UniqueId *)0x0) {
    UniqueId::~UniqueId(this_00);
    ::operator_delete(this_00,0x20);
    return;
  }
  return;
}

// ~ServiceBusMailDeleteResponse @ 14c15f540

void __thiscall
mail::ServiceBusMailDeleteResponse::~ServiceBusMailDeleteResponse
          (ServiceBusMailDeleteResponse *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7ServiceBusMailDeleteResponse_mail__6B_;
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

// ~ServiceBusMailReceiveRequest @ 14c15f560

void __thiscall
mail::ServiceBusMailReceiveRequest::~ServiceBusMailReceiveRequest
          (ServiceBusMailReceiveRequest *this)

{
  UniqueId *this_00;
  
  this->_padding_ = (longlong)&___7ServiceBusMailReceiveRequest_mail__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).receive_mail_uid_;
  if (this_00 != (UniqueId *)0x0) {
    UniqueId::~UniqueId(this_00);
    ::operator_delete(this_00,0x20);
  }
  if (*(longlong *)&(this->_impl_).receive_fail_mail_uid_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).receive_fail_mail_uid_);
  }
  return;
}

// ~ServiceBusMailReceiveResponse @ 14c15f5d0

void __thiscall
mail::ServiceBusMailReceiveResponse::~ServiceBusMailReceiveResponse
          (ServiceBusMailReceiveResponse *this)

{
  this->_padding_ = (longlong)&___7ServiceBusMailReceiveResponse_mail__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if (*(longlong *)&(this->_impl_).mail_reward_value_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).mail_reward_value_);
  }
  if (*(longlong *)&(this->_impl_).mail_uid_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).mail_uid_);
    return;
  }
  return;
}

// ~ServiceBusMailSendRequest @ 14c15f630

void __thiscall
mail::ServiceBusMailSendRequest::~ServiceBusMailSendRequest(ServiceBusMailSendRequest *this)

{
  MailItem *pMVar1;
  ulonglong uVar2;
  
  this->_padding_ = (longlong)&___7ServiceBusMailSendRequest_mail__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).mail_title_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).mail_sender_name_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).mail_content_);
  pMVar1 = (this->_impl_).mail_reward_value_;
  if (pMVar1 != (MailItem *)0x0) {
    pMVar1->_padding_ = (longlong)&___7MailItem_mail__6B_;
    if ((pMVar1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::
      DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&pMVar1->_padding_);
    }
    if (*(longlong *)&(pMVar1->_impl_).stackable_ != 0) {
      google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
                ((RepeatedPtrFieldBase *)&(pMVar1->_impl_).stackable_);
    }
    if (*(longlong *)&(pMVar1->_impl_).equipment_ != 0) {
      google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
                ((RepeatedPtrFieldBase *)&(pMVar1->_impl_).equipment_);
    }
    if (*(longlong *)&(pMVar1->_impl_).money_ != 0) {
      google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
                ((RepeatedPtrFieldBase *)&pMVar1->_impl_);
    }
    ::operator_delete(pMVar1,0x60);
  }
  uVar2 = (this->_impl_).receiver_player_uid_.soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar2 & 4) != 0) && (uVar2 = uVar2 & 0xfffffffffffffff8, *(longlong *)(uVar2 - 8) == 0)) {
    ::operator_delete((void *)(uVar2 - 8),
                      (longlong)
                      (this->_impl_).receiver_player_uid_.soo_rep_.field0_0x0.long_rep.capacity * 8
                      + 8);
    return;
  }
  return;
}

// ~ServiceBusMailSendResponse @ 14c15f720

void __thiscall
mail::ServiceBusMailSendResponse::~ServiceBusMailSendResponse(ServiceBusMailSendResponse *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7ServiceBusMailSendResponse_mail__6B_;
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

// CopyFrom @ 14c15f740

void __thiscall
mail::MailCategoryListResponse::CopyFrom
          (MailCategoryListResponse *this,MailCategoryListResponse *param_1)

{
  if (param_1 != this) {
    Clear(this);
    if (*(int *)&(param_1->_impl_).mail_list_.field_0x8 != 0) {
      google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
                ((RepeatedPtrFieldBase *)&this->_impl_,(RepeatedPtrFieldBase *)&param_1->_impl_,
                 google::protobuf::Arena::CopyConstruct<ds_mail::SqlMailTable>);
    }
    if ((param_1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&this->_padding_,
                 (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    }
  }
  return;
}

// CopyFrom @ 14c15f7a0

void __thiscall mail::MailCleanRequest::CopyFrom(MailCleanRequest *this,MailCleanRequest *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar1 & 1) != 0) && (lVar2 = (param_1->_impl_).receiver_uid_, lVar2 != 0)) {
      (this->_impl_).receiver_uid_ = lVar2;
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

// CopyFrom @ 14c15f800

void __thiscall mail::MailItem::CopyFrom(MailItem *this,MailItem *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeFrom(this,param_1);
  }
  return;
}

// CopyFrom @ 14c15f840

void __thiscall
mail::MailServerResponse::CopyFrom(MailServerResponse *this,MailServerResponse *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c15f880

void __thiscall
mail::ServiceBusMailAlertRequest::CopyFrom
          (ServiceBusMailAlertRequest *this,ServiceBusMailAlertRequest *param_1)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_1 != this) {
    Clear(this);
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar2 & 3) != 0) {
      if (((uVar2 & 1) != 0) && (lVar3 = (param_1->_impl_).receive_player_uid_, lVar3 != 0)) {
        (this->_impl_).receive_player_uid_ = lVar3;
      }
      if (((uVar2 & 2) != 0) && (bVar1 = (param_1->_impl_).is_reward_, bVar1 != false)) {
        (this->_impl_).is_reward_ = bVar1;
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

// CopyFrom @ 14c15f8f0

void __thiscall
mail::ServiceBusMailDeleteRequest::CopyFrom
          (ServiceBusMailDeleteRequest *this,ServiceBusMailDeleteRequest *param_1)

{
  uint uVar1;
  int iVar2;
  UniqueId *pUVar3;
  longlong lVar4;
  ulong64 uVar5;
  UniqueId *pUVar6;
  Arena *pAVar7;
  
  if (param_1 != this) {
    Clear(this);
    pAVar7 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 0x3f) != 0) {
      if ((uVar1 & 1) != 0) {
        pUVar6 = (this->_impl_).mail_uid_;
        pUVar3 = (param_1->_impl_).mail_uid_;
        if (pUVar6 == (UniqueId *)0x0) {
          pUVar6 = google::protobuf::Arena::CopyConstruct<UniqueId>(pAVar7,pUVar3);
          (this->_impl_).mail_uid_ = pUVar6;
        }
        else {
          UniqueId::MergeImpl((MessageLite *)pUVar6,(MessageLite *)pUVar3);
        }
      }
      if (((uVar1 & 2) != 0) && (lVar4 = (param_1->_impl_).receiver_player_uid_, lVar4 != 0)) {
        (this->_impl_).receiver_player_uid_ = lVar4;
      }
      if (((uVar1 & 4) != 0) && (uVar5 = (param_1->_impl_).entity_id_, uVar5 != 0)) {
        (this->_impl_).entity_id_ = uVar5;
      }
      if (((uVar1 & 8) != 0) && (iVar2 = (param_1->_impl_).game_server_index_, iVar2 != 0)) {
        (this->_impl_).game_server_index_ = iVar2;
      }
      if (((uVar1 & 0x10) != 0) && (iVar2 = (param_1->_impl_).mail_category_type_, iVar2 != 0)) {
        (this->_impl_).mail_category_type_ = iVar2;
      }
      if (((uVar1 & 0x20) != 0) && (uVar5 = (param_1->_impl_).event_id_, uVar5 != 0)) {
        (this->_impl_).event_id_ = uVar5;
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

// CopyFrom @ 14c15f9f0

void __thiscall
mail::ServiceBusMailDeleteResponse::CopyFrom
          (ServiceBusMailDeleteResponse *this,ServiceBusMailDeleteResponse *param_1)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 7) != 0) {
      if (((uVar1 & 1) != 0) && (uVar3 = (param_1->_impl_).entity_id_, uVar3 != 0)) {
        (this->_impl_).entity_id_ = uVar3;
      }
      if (((uVar1 & 2) != 0) && (uVar3 = (param_1->_impl_).event_id_, uVar3 != 0)) {
        (this->_impl_).event_id_ = uVar3;
      }
      if (((uVar1 & 4) != 0) && (iVar2 = (param_1->_impl_).error_code_, iVar2 != 0)) {
        (this->_impl_).error_code_ = iVar2;
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

// CopyFrom @ 14c15fa70

void __thiscall
mail::ServiceBusMailReceiveRequest::CopyFrom
          (ServiceBusMailReceiveRequest *this,ServiceBusMailReceiveRequest *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c15fab0

void __thiscall
mail::ServiceBusMailReceiveResponse::CopyFrom
          (ServiceBusMailReceiveResponse *this,ServiceBusMailReceiveResponse *param_1)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  longlong lVar4;
  
  if (param_1 != this) {
    Clear(this);
    if (*(int *)&(param_1->_impl_).mail_uid_.field_0x8 != 0) {
      google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
                ((RepeatedPtrFieldBase *)&(this->_impl_).mail_uid_,
                 (RepeatedPtrFieldBase *)&(param_1->_impl_).mail_uid_,
                 google::protobuf::Arena::CopyConstruct<UniqueId>);
    }
    if (*(int *)&(param_1->_impl_).mail_reward_value_.field_0x8 != 0) {
      google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
                ((RepeatedPtrFieldBase *)&(this->_impl_).mail_reward_value_,
                 (RepeatedPtrFieldBase *)&(param_1->_impl_).mail_reward_value_,
                 google::protobuf::Arena::CopyConstruct<mail::MailItem>);
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 0x1f) != 0) {
      if (((uVar1 & 1) != 0) && (uVar3 = (param_1->_impl_).entity_id_, uVar3 != 0)) {
        (this->_impl_).entity_id_ = uVar3;
      }
      if (((uVar1 & 2) != 0) && (lVar4 = (param_1->_impl_).receiver_player_uid_, lVar4 != 0)) {
        (this->_impl_).receiver_player_uid_ = lVar4;
      }
      if (((uVar1 & 4) != 0) && (iVar2 = (param_1->_impl_).mail_category_type_, iVar2 != 0)) {
        (this->_impl_).mail_category_type_ = iVar2;
      }
      if (((uVar1 & 8) != 0) && (iVar2 = (param_1->_impl_).error_code_, iVar2 != 0)) {
        (this->_impl_).error_code_ = iVar2;
      }
      if (((uVar1 & 0x10) != 0) && (uVar3 = (param_1->_impl_).event_id_, uVar3 != 0)) {
        (this->_impl_).event_id_ = uVar3;
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

// CopyFrom @ 14c15fb90

void __thiscall
mail::ServiceBusMailSendRequest::CopyFrom
          (ServiceBusMailSendRequest *this,ServiceBusMailSendRequest *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c15fbd0

void __thiscall
mail::ServiceBusMailSendResponse::CopyFrom
          (ServiceBusMailSendResponse *this,ServiceBusMailSendResponse *param_1)

{
  bool bVar1;
  uint uVar2;
  ulong64 uVar3;
  
  if (param_1 != this) {
    Clear(this);
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar2 & 3) != 0) {
      if (((uVar2 & 1) != 0) && (uVar3 = (param_1->_impl_).event_id_, uVar3 != 0)) {
        (this->_impl_).event_id_ = uVar3;
      }
      if (((uVar2 & 2) != 0) && (bVar1 = (param_1->_impl_).is_fail_, bVar1 != false)) {
        (this->_impl_).is_fail_ = bVar1;
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

// GetMetadata @ 14c15fc40

Metadata * __thiscall
mail::MailCategoryListResponse::GetMetadata
          (MailCategoryListResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&MailCategoryListResponse_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c15fc80

Metadata * __thiscall
mail::MailCleanRequest::GetMetadata(MailCleanRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&MailCleanRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c15fcc0

Metadata * __thiscall mail::MailItem::GetMetadata(MailItem *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&MailItem_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c15fd00

Metadata * __thiscall
mail::MailServerResponse::GetMetadata(MailServerResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&MailServerResponse_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c15fd40

Metadata * __thiscall
mail::ServiceBusMailAlertRequest::GetMetadata
          (ServiceBusMailAlertRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&ServiceBusMailAlertRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c15fd80

Metadata * __thiscall
mail::ServiceBusMailDeleteRequest::GetMetadata
          (ServiceBusMailDeleteRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&ServiceBusMailDeleteRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c15fdc0

Metadata * __thiscall
mail::ServiceBusMailDeleteResponse::GetMetadata
          (ServiceBusMailDeleteResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&ServiceBusMailDeleteResponse_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c15fe00

Metadata * __thiscall
mail::ServiceBusMailReceiveRequest::GetMetadata
          (ServiceBusMailReceiveRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&ServiceBusMailReceiveRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c15fe40

Metadata * __thiscall
mail::ServiceBusMailReceiveResponse::GetMetadata
          (ServiceBusMailReceiveResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&ServiceBusMailReceiveResponse_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c15fe80

Metadata * __thiscall
mail::ServiceBusMailSendRequest::GetMetadata
          (ServiceBusMailSendRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&ServiceBusMailSendRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c15fec0

Metadata * __thiscall
mail::ServiceBusMailSendResponse::GetMetadata
          (ServiceBusMailSendResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&ServiceBusMailSendResponse_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c15ff00

void __thiscall
mail::MailCategoryListResponse::InternalSwap
          (MailCategoryListResponse *this,MailCategoryListResponse *param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar1;
  google::protobuf::internal::memswap<16>((char *)&this->_impl_,(char *)&param_1->_impl_);
  return;
}

// InternalSwap @ 14c15ff30

void __thiscall
mail::MailCleanRequest::InternalSwap(MailCleanRequest *this,MailCleanRequest *param_1)

{
  uint uVar1;
  longlong lVar2;
  long64 lVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  lVar3 = (this->_impl_).receiver_uid_;
  (this->_impl_).receiver_uid_ = (param_1->_impl_).receiver_uid_;
  (param_1->_impl_).receiver_uid_ = lVar3;
  return;
}

// InternalSwap @ 14c15ff70

void __thiscall mail::MailItem::InternalSwap(MailItem *this,MailItem *param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar1;
  google::protobuf::internal::memswap<16>((char *)&this->_impl_,(char *)&param_1->_impl_);
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).equipment_,(char *)&(param_1->_impl_).equipment_);
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).stackable_,(char *)&(param_1->_impl_).stackable_);
  return;
}

// InternalSwap @ 14c15ffd0

void __thiscall
mail::MailServerResponse::InternalSwap(MailServerResponse *this,MailServerResponse *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  MailResponseUnion MVar4;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pvVar3 = (param_1->_impl_).server_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).server_name_.tagged_ptr_.ptr_ = (this->_impl_).server_name_.tagged_ptr_.ptr_;
  (this->_impl_).server_name_.tagged_ptr_.ptr_ = pvVar3;
  MVar4 = (this->_impl_).mail_response_;
  (this->_impl_).mail_response_ = (param_1->_impl_).mail_response_;
  (param_1->_impl_).mail_response_ = MVar4;
  uVar1 = (this->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = (param_1->_impl_)._oneof_case_[0];
  (param_1->_impl_)._oneof_case_[0] = uVar1;
  return;
}

// InternalSwap @ 14c160030

void __thiscall
mail::ServiceBusMailAlertRequest::InternalSwap
          (ServiceBusMailAlertRequest *this,ServiceBusMailAlertRequest *param_1)

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
            (&(this->_impl_).receive_player_uid_,&(this->_impl_).field_0x11,
             &(param_1->_impl_).receive_player_uid_);
  return;
}

// InternalSwap @ 14c160070

void __thiscall
mail::ServiceBusMailDeleteRequest::InternalSwap
          (ServiceBusMailDeleteRequest *this,ServiceBusMailDeleteRequest *param_1)

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
            (&(this->_impl_).mail_uid_,this + 1,&(param_1->_impl_).mail_uid_);
  return;
}

// InternalSwap @ 14c1600b0

void __thiscall
mail::ServiceBusMailDeleteResponse::InternalSwap
          (ServiceBusMailDeleteResponse *this,ServiceBusMailDeleteResponse *param_1)

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
            (&(this->_impl_).entity_id_,&(this->_impl_).field_0x1c,&(param_1->_impl_).entity_id_);
  return;
}

// InternalSwap @ 14c1600f0

void __thiscall
mail::ServiceBusMailReceiveRequest::InternalSwap
          (ServiceBusMailReceiveRequest *this,ServiceBusMailReceiveRequest *param_1)

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
            ((char *)&(this->_impl_).receive_fail_mail_uid_,
             (char *)&(param_1->_impl_).receive_fail_mail_uid_);
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).receive_mail_uid_,this + 1,&(param_1->_impl_).receive_mail_uid_);
  return;
}

// InternalSwap @ 14c160150

void __thiscall
mail::ServiceBusMailReceiveResponse::InternalSwap
          (ServiceBusMailReceiveResponse *this,ServiceBusMailReceiveResponse *param_1)

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
            ((char *)&(this->_impl_).mail_uid_,(char *)&(param_1->_impl_).mail_uid_);
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).mail_reward_value_,
             (char *)&(param_1->_impl_).mail_reward_value_);
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).entity_id_,this + 1,&(param_1->_impl_).entity_id_);
  return;
}

// InternalSwap @ 14c1601c0

void __thiscall
mail::ServiceBusMailSendRequest::InternalSwap
          (ServiceBusMailSendRequest *this,ServiceBusMailSendRequest *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).receiver_player_uid_,
             (char *)&(param_1->_impl_).receiver_player_uid_);
  pvVar3 = (param_1->_impl_).mail_title_.tagged_ptr_.ptr_;
  (param_1->_impl_).mail_title_.tagged_ptr_.ptr_ = (this->_impl_).mail_title_.tagged_ptr_.ptr_;
  (this->_impl_).mail_title_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).mail_sender_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).mail_sender_name_.tagged_ptr_.ptr_ =
       (this->_impl_).mail_sender_name_.tagged_ptr_.ptr_;
  (this->_impl_).mail_sender_name_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).mail_content_.tagged_ptr_.ptr_;
  (param_1->_impl_).mail_content_.tagged_ptr_.ptr_ = (this->_impl_).mail_content_.tagged_ptr_.ptr_;
  (this->_impl_).mail_content_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).mail_reward_value_,this + 1,&(param_1->_impl_).mail_reward_value_);
  return;
}

// InternalSwap @ 14c160250

void __thiscall
mail::ServiceBusMailSendResponse::InternalSwap
          (ServiceBusMailSendResponse *this,ServiceBusMailSendResponse *param_1)

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
            (&(this->_impl_).event_id_,&(this->_impl_).field_0x11,&(param_1->_impl_).event_id_);
  return;
}

// MergeFrom @ 14c160290

void __thiscall mail::MailItem::MergeFrom(MailItem *this,MailItem *param_1)

{
  if (*(int *)&(param_1->_impl_).money_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&this->_impl_,(RepeatedPtrFieldBase *)&param_1->_impl_,
               google::protobuf::Arena::CopyConstruct<ds_game::SqlMoneyTable>);
  }
  if (*(int *)&(param_1->_impl_).equipment_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&(this->_impl_).equipment_,
               (RepeatedPtrFieldBase *)&(param_1->_impl_).equipment_,
               google::protobuf::Arena::CopyConstruct<ds_game::SqlItemEquipmentTable>);
  }
  if (*(int *)&(param_1->_impl_).stackable_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&(this->_impl_).stackable_,
               (RepeatedPtrFieldBase *)&(param_1->_impl_).stackable_,
               google::protobuf::Arena::CopyConstruct<ds_game::SqlItemStackableTable>);
  }
  if ((param_1->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return;
}

// SharedDtor @ 14c160320

void __cdecl mail::MailServerResponse::SharedDtor(MessageLite *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>(&param_1->_internal_metadata_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy
            ((ArenaStringPtr *)&param_1[1]._internal_metadata_);
  iVar1 = (int)param_1[2]._internal_metadata_.ptr_;
  if (iVar1 != 0) {
    switch(iVar1) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      puVar2 = (undefined8 *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
      if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
        puVar2 = (undefined8 *)*puVar2;
      }
      if ((puVar2 == (undefined8 *)0x0) &&
         (puVar2 = (undefined8 *)param_1[2]._padding_, puVar2 != (undefined8 *)0x0)) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(undefined4 *)&param_1[2]._internal_metadata_.ptr_ = 0;
  }
  return;
}

// clear_equipment @ 14c1603d0

void __thiscall mail::MailItem::clear_equipment(MailItem *this)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  RepeatedPtrField<ds_game::SqlItemEquipmentTable> *pRVar5;
  
  pRVar5 = &(this->_impl_).equipment_;
  if (*(int *)&(this->_impl_).equipment_.field_0x8 < 1) {
    return;
  }
  puVar1 = &(this->_impl_).equipment_.field_0x8;
  if ((*(ulonglong *)pRVar5 & 1) != 0) {
    pRVar5 = (RepeatedPtrField<ds_game::SqlItemEquipmentTable> *)(*(ulonglong *)pRVar5 + 7);
  }
  iVar2 = *(int *)puVar1;
  lVar4 = 0;
  do {
    lVar3 = lVar4 * 8;
    lVar4 = lVar4 + 1;
    (**(code **)(**(longlong **)(&pRVar5->field_0x0 + lVar3) + 8))();
  } while (lVar4 < iVar2);
  *(undefined4 *)puVar1 = 0;
  return;
}

// clear_mail_list @ 14c1603f0

void __thiscall mail::MailCategoryListResponse::clear_mail_list(MailCategoryListResponse *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  Impl_ *pIVar5;
  
  pIVar5 = &this->_impl_;
  if (*(int *)&(this->_impl_).mail_list_.field_0x8 < 1) {
    return;
  }
  puVar1 = &(this->_impl_).mail_list_.field_0x8;
  if ((*(ulonglong *)&pIVar5->mail_list_ & 1) != 0) {
    pIVar5 = (Impl_ *)(*(ulonglong *)&pIVar5->mail_list_ + 7);
  }
  iVar3 = *(int *)puVar1;
  lVar4 = 0;
  do {
    lVar2 = lVar4 * 8;
    lVar4 = lVar4 + 1;
    (**(code **)(**(longlong **)(&(pIVar5->mail_list_).field_0x0 + lVar2) + 8))();
  } while (lVar4 < iVar3);
  *(undefined4 *)puVar1 = 0;
  return;
}

// clear_mail_response @ 14c160410

void __thiscall mail::MailServerResponse::clear_mail_response(MailServerResponse *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).mail_response_.mail_clean_request_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// clear_mail_uid @ 14c1604a0

void __thiscall mail::ServiceBusMailDeleteRequest::clear_mail_uid(ServiceBusMailDeleteRequest *this)

{
  UniqueId *this_00;
  
  this_00 = (this->_impl_).mail_uid_;
  if (this_00 != (UniqueId *)0x0) {
    UniqueId::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_mail_uid @ 14c1604d0

void __thiscall
mail::ServiceBusMailReceiveResponse::clear_mail_uid(ServiceBusMailReceiveResponse *this)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  RepeatedPtrField<UniqueId> *pRVar5;
  
  pRVar5 = &(this->_impl_).mail_uid_;
  if (*(int *)&(this->_impl_).mail_uid_.field_0x8 < 1) {
    return;
  }
  puVar1 = &(this->_impl_).mail_uid_.field_0x8;
  if ((*(ulonglong *)pRVar5 & 1) != 0) {
    pRVar5 = (RepeatedPtrField<UniqueId> *)(*(ulonglong *)pRVar5 + 7);
  }
  iVar2 = *(int *)puVar1;
  lVar4 = 0;
  do {
    lVar3 = lVar4 * 8;
    lVar4 = lVar4 + 1;
    (**(code **)(**(longlong **)(&pRVar5->field_0x0 + lVar3) + 8))();
  } while (lVar4 < iVar2);
  *(undefined4 *)puVar1 = 0;
  return;
}

// clear_money @ 14c1604f0

void __thiscall mail::MailItem::clear_money(MailItem *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  Impl_ *pIVar5;
  
  pIVar5 = &this->_impl_;
  if (*(int *)&(this->_impl_).money_.field_0x8 < 1) {
    return;
  }
  puVar1 = &(this->_impl_).money_.field_0x8;
  if ((*(ulonglong *)&pIVar5->money_ & 1) != 0) {
    pIVar5 = (Impl_ *)(*(ulonglong *)&pIVar5->money_ + 7);
  }
  iVar3 = *(int *)puVar1;
  lVar4 = 0;
  do {
    lVar2 = lVar4 * 8;
    lVar4 = lVar4 + 1;
    (**(code **)(**(longlong **)(&(pIVar5->money_).field_0x0 + lVar2) + 8))();
  } while (lVar4 < iVar3);
  *(undefined4 *)puVar1 = 0;
  return;
}

// clear_receive_fail_mail_uid @ 14c160510

void __thiscall
mail::ServiceBusMailReceiveRequest::clear_receive_fail_mail_uid(ServiceBusMailReceiveRequest *this)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  RepeatedPtrField<UniqueId> *pRVar5;
  
  pRVar5 = &(this->_impl_).receive_fail_mail_uid_;
  if (*(int *)&(this->_impl_).receive_fail_mail_uid_.field_0x8 < 1) {
    return;
  }
  puVar1 = &(this->_impl_).receive_fail_mail_uid_.field_0x8;
  if ((*(ulonglong *)pRVar5 & 1) != 0) {
    pRVar5 = (RepeatedPtrField<UniqueId> *)(*(ulonglong *)pRVar5 + 7);
  }
  iVar2 = *(int *)puVar1;
  lVar4 = 0;
  do {
    lVar3 = lVar4 * 8;
    lVar4 = lVar4 + 1;
    (**(code **)(**(longlong **)(&pRVar5->field_0x0 + lVar3) + 8))();
  } while (lVar4 < iVar2);
  *(undefined4 *)puVar1 = 0;
  return;
}

// clear_receive_mail_uid @ 14c160530

void __thiscall
mail::ServiceBusMailReceiveRequest::clear_receive_mail_uid(ServiceBusMailReceiveRequest *this)

{
  UniqueId *this_00;
  
  this_00 = (this->_impl_).receive_mail_uid_;
  if (this_00 != (UniqueId *)0x0) {
    UniqueId::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_stackable @ 14c160560

void __thiscall mail::MailItem::clear_stackable(MailItem *this)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  RepeatedPtrField<ds_game::SqlItemStackableTable> *pRVar5;
  
  pRVar5 = &(this->_impl_).stackable_;
  if (*(int *)&(this->_impl_).stackable_.field_0x8 < 1) {
    return;
  }
  puVar1 = &(this->_impl_).stackable_.field_0x8;
  if ((*(ulonglong *)pRVar5 & 1) != 0) {
    pRVar5 = (RepeatedPtrField<ds_game::SqlItemStackableTable> *)(*(ulonglong *)pRVar5 + 7);
  }
  iVar2 = *(int *)puVar1;
  lVar4 = 0;
  do {
    lVar3 = lVar4 * 8;
    lVar4 = lVar4 + 1;
    (**(code **)(**(longlong **)(&pRVar5->field_0x0 + lVar3) + 8))();
  } while (lVar4 < iVar2);
  *(undefined4 *)puVar1 = 0;
  return;
}

// set_allocated_mail_alert_request @ 14c160580

void __thiscall
mail::MailServerResponse::set_allocated_mail_alert_request
          (MailServerResponse *this,ServiceBusMailAlertRequest *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (pMVar1 = (this->_impl_).mail_response_.mail_clean_request_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (ServiceBusMailAlertRequest *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (ServiceBusMailAlertRequest *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 8;
    (this->_impl_).mail_response_.mail_clean_request_ = (Message *)param_1;
  }
  return;
}

// set_allocated_mail_clean_request @ 14c160670

void __thiscall
mail::MailServerResponse::set_allocated_mail_clean_request
          (MailServerResponse *this,MailCleanRequest *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (pMVar1 = (this->_impl_).mail_response_.mail_clean_request_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (MailCleanRequest *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (MailCleanRequest *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 1;
    (this->_impl_).mail_response_.mail_clean_request_ = (Message *)param_1;
  }
  return;
}

// set_allocated_mail_delete_request @ 14c160760

void __thiscall
mail::MailServerResponse::set_allocated_mail_delete_request
          (MailServerResponse *this,ServiceBusMailDeleteRequest *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (pMVar1 = (this->_impl_).mail_response_.mail_clean_request_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (ServiceBusMailDeleteRequest *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (ServiceBusMailDeleteRequest *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 6;
    (this->_impl_).mail_response_.mail_clean_request_ = (Message *)param_1;
  }
  return;
}

// set_allocated_mail_delete_response @ 14c160850

void __thiscall
mail::MailServerResponse::set_allocated_mail_delete_response
          (MailServerResponse *this,ServiceBusMailDeleteResponse *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (pMVar1 = (this->_impl_).mail_response_.mail_clean_request_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (ServiceBusMailDeleteResponse *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (ServiceBusMailDeleteResponse *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 7;
    (this->_impl_).mail_response_.mail_clean_request_ = (Message *)param_1;
  }
  return;
}

// set_allocated_mail_receive_request @ 14c160940

void __thiscall
mail::MailServerResponse::set_allocated_mail_receive_request
          (MailServerResponse *this,ServiceBusMailReceiveRequest *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (pMVar1 = (this->_impl_).mail_response_.mail_clean_request_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (ServiceBusMailReceiveRequest *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (ServiceBusMailReceiveRequest *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 4;
    (this->_impl_).mail_response_.mail_clean_request_ = (Message *)param_1;
  }
  return;
}

// set_allocated_mail_receive_response @ 14c160a30

void __thiscall
mail::MailServerResponse::set_allocated_mail_receive_response
          (MailServerResponse *this,ServiceBusMailReceiveResponse *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (pMVar1 = (this->_impl_).mail_response_.mail_clean_request_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (ServiceBusMailReceiveResponse *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (ServiceBusMailReceiveResponse *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 5;
    (this->_impl_).mail_response_.mail_clean_request_ = (Message *)param_1;
  }
  return;
}

// set_allocated_mail_send_request @ 14c160b20

void __thiscall
mail::MailServerResponse::set_allocated_mail_send_request
          (MailServerResponse *this,ServiceBusMailSendRequest *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (pMVar1 = (this->_impl_).mail_response_.mail_clean_request_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (ServiceBusMailSendRequest *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (ServiceBusMailSendRequest *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 2;
    (this->_impl_).mail_response_.mail_clean_request_ = (Message *)param_1;
  }
  return;
}

// set_allocated_mail_send_response @ 14c160c10

void __thiscall
mail::MailServerResponse::set_allocated_mail_send_response
          (MailServerResponse *this,ServiceBusMailSendResponse *param_1)

{
  Message *pMVar1;
  Arena *pAVar2;
  Arena *pAVar3;
  byte bVar4;
  
  pAVar3 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar4 = (byte)this->_padding_ & 1;
  pAVar2 = pAVar3;
  if (bVar4 != 0) {
    pAVar2 = (Arena *)(pAVar3->impl_).tag_and_id_;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    if (bVar4 != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if ((pAVar3 == (Arena *)0x0) &&
       (pMVar1 = (this->_impl_).mail_response_.mail_clean_request_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (ServiceBusMailSendResponse *)0x0) {
    pAVar3 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar3 = (Arena *)(pAVar3->impl_).tag_and_id_;
    }
    if (pAVar2 != pAVar3) {
      param_1 = (ServiceBusMailSendResponse *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar2,(MessageLite *)param_1,pAVar3);
    }
    (this->_impl_)._oneof_case_[0] = 3;
    (this->_impl_).mail_response_.mail_clean_request_ = (Message *)param_1;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_MailCategoryListResponse_default_instance_'' @ 150441b50

void __cdecl
mail::_dynamic_atexit_destructor_for___MailCategoryListResponse_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_MailCleanRequest_default_instance_'' @ 150441b60

void __cdecl mail::_dynamic_atexit_destructor_for___MailCleanRequest_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_MailItem_default_instance_'' @ 150441b70

void __cdecl mail::_dynamic_atexit_destructor_for___MailItem_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_MailServerResponse_default_instance_'' @ 150441b80

void __cdecl mail::_dynamic_atexit_destructor_for___MailServerResponse_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ServiceBusMailAlertRequest_default_instance_'' @ 150441b90

void __cdecl
mail::_dynamic_atexit_destructor_for___ServiceBusMailAlertRequest_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ServiceBusMailDeleteRequest_default_instance_'' @ 150441ba0

void __cdecl
mail::_dynamic_atexit_destructor_for___ServiceBusMailDeleteRequest_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ServiceBusMailDeleteResponse_default_instance_'' @ 150441bb0

void __cdecl
mail::_dynamic_atexit_destructor_for___ServiceBusMailDeleteResponse_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ServiceBusMailReceiveRequest_default_instance_'' @ 150441bc0

void __cdecl
mail::_dynamic_atexit_destructor_for___ServiceBusMailReceiveRequest_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ServiceBusMailReceiveResponse_default_instance_'' @ 150441bd0

void __cdecl
mail::_dynamic_atexit_destructor_for___ServiceBusMailReceiveResponse_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ServiceBusMailSendRequest_default_instance_'' @ 150441be0

void __cdecl
mail::_dynamic_atexit_destructor_for___ServiceBusMailSendRequest_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ServiceBusMailSendResponse_default_instance_'' @ 150441bf0

void __cdecl
mail::_dynamic_atexit_destructor_for___ServiceBusMailSendResponse_default_instance___(void)

{
  return;
}


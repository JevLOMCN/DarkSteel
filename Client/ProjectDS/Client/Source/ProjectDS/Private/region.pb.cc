// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 89

// `dynamic_initializer_for_'_GameServerToRegionServerMessages_default_instance_'' @ 141295ce0

void __cdecl
region::_dynamic_initializer_for___GameServerToRegionServerMessages_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___GameServerToRegionServerMessages_default_instance___);
  return;
}

// `dynamic_initializer_for_'_PingRequest_default_instance_'' @ 141295d00

void __cdecl region::_dynamic_initializer_for___PingRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___PingRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_PongResponse_default_instance_'' @ 141295d20

void __cdecl region::_dynamic_initializer_for___PongResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___PongResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_RegionServerToGameServerMessages_default_instance_'' @ 141295d40

void __cdecl
region::_dynamic_initializer_for___RegionServerToGameServerMessages_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___RegionServerToGameServerMessages_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 141295d60

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_region_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c199800

void __cdecl
region::RegionServerToGameServerMessages::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  PongResponse *pPVar4;
  MessageLite *pMVar5;
  void *pvVar6;
  Arena *pAVar7;
  byte bVar8;
  Arena *pAVar9;
  bool bVar10;
  
  pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar8 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar9 = pAVar7;
  if (bVar8 != 0) {
    pAVar9 = (Arena *)(pAVar7->impl_).tag_and_id_;
  }
  iVar1 = *(int *)((longlong)&param_2[2]._padding_ + 4);
  if (iVar1 != 0) {
    iVar2 = *(int *)((longlong)&param_1[2]._padding_ + 4);
    if (iVar2 != iVar1) {
      if ((iVar2 != 0) && (((iVar2 == 1 || (iVar2 == 2)) || (iVar2 == 3)))) {
        if (bVar8 != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        if ((pAVar7 == (Arena *)0x0) &&
           (puVar3 = (undefined8 *)param_1[1]._padding_, puVar3 != (undefined8 *)0x0)) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      *(int *)((longlong)&param_1[2]._padding_ + 4) = iVar1;
    }
    if (iVar1 == 1) {
      bVar10 = iVar2 == 1;
    }
    else if (iVar1 == 2) {
      bVar10 = iVar2 == 2;
    }
    else {
      if (iVar1 != 3) goto LAB_14c1998bf;
      bVar10 = iVar2 == 3;
    }
    if (bVar10) {
      google::protobuf::Message::MergeFrom
                ((Message *)param_1[1]._padding_,(Message *)param_2[1]._padding_);
    }
    else {
      pMVar5 = google::protobuf::MessageLite::CopyConstruct
                         (pAVar9,(MessageLite *)param_2[1]._padding_);
      param_1[1]._padding_ = (longlong)pMVar5;
    }
  }
LAB_14c1998bf:
  iVar1 = (int)param_2[2]._internal_metadata_.ptr_;
  if (iVar1 != 0) {
    iVar2 = (int)param_1[2]._internal_metadata_.ptr_;
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        clear_RegionServerMessage((RegionServerToGameServerMessages *)param_1);
      }
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar1;
    }
    if (iVar1 == 10) {
      pMVar5 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
      if (iVar2 == 10) {
        protocol::ServerRoleRegister::MergeImpl
                  ((MessageLite *)param_1[1]._internal_metadata_.ptr_,pMVar5);
      }
      else {
        pvVar6 = google::protobuf::Arena::CopyConstruct<protocol::ServerRoleRegister>(pAVar9,pMVar5)
        ;
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar6;
      }
    }
    else if (iVar1 == 0xb) {
      pPVar4 = (PongResponse *)param_2[1]._internal_metadata_.ptr_;
      if (iVar2 == 0xb) {
        PongResponse::MergeFrom((PongResponse *)param_1[1]._internal_metadata_.ptr_,pPVar4);
      }
      else {
        pvVar6 = google::protobuf::Arena::CopyConstruct<region::PongResponse>(pAVar9,pPVar4);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar6;
      }
    }
  }
  if (((param_2->_internal_metadata_).ptr_ & 1) == 0) {
    return;
  }
  google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
            (&param_1->_internal_metadata_,
             (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8));
  return;
}

// Clear @ 14c199970

void __thiscall
region::RegionServerToGameServerMessages::Clear(RegionServerToGameServerMessages *this)

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
       (pMVar2 = (this->_impl_).RegionServerMessageType_.none_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  clear_RegionServerMessage(this);
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c1999f0

ulong64 __thiscall
region::RegionServerToGameServerMessages::ByteSizeLong(RegionServerToGameServerMessages *this)

{
  ServerRoleRegister *this_00;
  longlong lVar1;
  uint uVar2;
  int iVar3;
  __uint64 _Var4;
  __uint64 _Var5;
  
  _Var5 = 0;
  uVar2 = (this->_impl_)._oneof_case_[0];
  if (((uVar2 == 1) || (uVar2 == 2)) || (_Var4 = _Var5, uVar2 == 3)) {
    lVar1 = (**(code **)(*(longlong *)(this->_impl_).RegionServerMessageType_.none_ + 0x10))();
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
  }
  uVar2 = (this->_impl_)._oneof_case_[1];
  if (uVar2 == 10) {
    _Var5 = protocol::ServerRoleRegister::ByteSizeLong
                      ((this->_impl_).RegionServerMessage_.roleregister_);
  }
  else {
    if (uVar2 != 0xb) goto LAB_14c199ad3;
    this_00 = (this->_impl_).RegionServerMessage_.roleregister_;
    if ((((this_00->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
       ((this_00->_impl_).ip_.tagged_ptr_.ptr_ != (void *)0x0)) {
      _Var5 = 9;
    }
    _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                      ((Message *)this_00,_Var5,&(this_00->_impl_)._cached_size_);
  }
  uVar2 = (uint)_Var5 | 1;
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
  _Var4 = _Var4 + 1 + (iVar3 * -9 + 0x160U >> 6) + _Var5;
LAB_14c199ad3:
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c199b10

uchar * __thiscall
region::RegionServerToGameServerMessages::_InternalSerialize
          (RegionServerToGameServerMessages *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 == 1) {
    iVar2 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).RegionServerMessageType_.none_);
    iVar4 = 1;
LAB_14c199b68:
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (iVar4,(MessageLite *)(this->_impl_).RegionServerMessageType_.none_,iVar2,
                         param_1,param_2);
  }
  else {
    if (uVar1 == 2) {
      iVar2 = google::protobuf::MessageLite::GetCachedSize
                        ((MessageLite *)(this->_impl_).RegionServerMessageType_.none_);
      iVar4 = 2;
      goto LAB_14c199b68;
    }
    if (uVar1 == 3) {
      iVar2 = google::protobuf::MessageLite::GetCachedSize
                        ((MessageLite *)(this->_impl_).RegionServerMessageType_.none_);
      iVar4 = 3;
      goto LAB_14c199b68;
    }
  }
  uVar1 = (this->_impl_)._oneof_case_[1];
  if (uVar1 == 10) {
    iVar2 = 10;
  }
  else {
    if (uVar1 != 0xb) goto LAB_14c199bb4;
    iVar2 = 0xb;
  }
  param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                      (iVar2,(MessageLite *)(this->_impl_).RegionServerMessage_.roleregister_,
                       (int)(((this->_impl_).RegionServerMessage_.roleregister_)->_impl_).
                            _cached_size_.atom_,param_1,param_2);
LAB_14c199bb4:
  if ((this->_padding_ & 1) != 0) {
    puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14c199c00

ClassData * __thiscall
region::RegionServerToGameServerMessages::GetClassData(RegionServerToGameServerMessages *this)

{
  return (ClassData *)&RegionServerToGameServerMessages_class_data_;
}

// PlacementNew_ @ 14c199c20

void * __cdecl
region::RegionServerToGameServerMessages::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7RegionServerToGameServerMessages_region__6B_;
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c199c50

void * __thiscall
region::RegionServerToGameServerMessages::_scalar_deleting_destructor_
          (RegionServerToGameServerMessages *this,uint param_1)

{
  ~RegionServerToGameServerMessages(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// MergeImpl @ 14c199c90

void __cdecl region::PongResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2[1]._padding_;
  if (((uVar2 & 1) != 0) && (lVar1 = param_2[1]._internal_metadata_.ptr_, lVar1 != 0)) {
    param_1[1]._internal_metadata_.ptr_ = lVar1;
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

// Clear @ 14c199ce0

void __thiscall region::PongResponse::Clear(PongResponse *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  (this->_impl_).ticks_ = 0.0;
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

// ByteSizeLong @ 14c199d10

ulong64 __thiscall region::PongResponse::ByteSizeLong(PongResponse *this)

{
  __uint64 _Var1;
  
  _Var1 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).ticks_ != 0.0)) {
    _Var1 = 9;
  }
  _Var1 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var1,&(this->_impl_)._cached_size_);
  return _Var1;
}

// _InternalSerialize @ 14c199d40

uchar * __thiscall
region::PongResponse::_InternalSerialize
          (PongResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  double dVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).ticks_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    dVar1 = (this->_impl_).ticks_;
    *param_1 = '\t';
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

// GetClassData @ 14c199dc0

ClassData * __thiscall region::PongResponse::GetClassData(PongResponse *this)

{
  return (ClassData *)&PongResponse_class_data_;
}

// PlacementNew_ @ 14c199de0

void * __cdecl region::PongResponse::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7PongResponse_region__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c199e10

void * __thiscall
region::PongResponse::_scalar_deleting_destructor_(PongResponse *this,uint param_1)

{
  this->_padding_ = (longlong)&___7PongResponse_region__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c199e60

void __cdecl region::PingRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2[1]._padding_;
  if (((uVar2 & 1) != 0) && (lVar1 = param_2[1]._internal_metadata_.ptr_, lVar1 != 0)) {
    param_1[1]._internal_metadata_.ptr_ = lVar1;
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

// Clear @ 14c199eb0

void __thiscall region::PingRequest::Clear(PingRequest *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  (this->_impl_).ticks_ = 0.0;
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

// ByteSizeLong @ 14c199ee0

ulong64 __thiscall region::PingRequest::ByteSizeLong(PingRequest *this)

{
  __uint64 _Var1;
  
  _Var1 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).ticks_ != 0.0)) {
    _Var1 = 9;
  }
  _Var1 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var1,&(this->_impl_)._cached_size_);
  return _Var1;
}

// _InternalSerialize @ 14c199f10

uchar * __thiscall
region::PingRequest::_InternalSerialize
          (PingRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  double dVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).ticks_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    dVar1 = (this->_impl_).ticks_;
    *param_1 = '\t';
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

// GetClassData @ 14c199f90

ClassData * __thiscall region::PingRequest::GetClassData(PingRequest *this)

{
  return (ClassData *)&PingRequest_class_data_;
}

// PlacementNew_ @ 14c199fb0

void * __cdecl region::PingRequest::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7PingRequest_region__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c199fe0

void * __thiscall region::PingRequest::_scalar_deleting_destructor_(PingRequest *this,uint param_1)

{
  this->_padding_ = (longlong)&___7PingRequest_region__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c19a030

void __cdecl
region::GameServerToRegionServerMessages::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  InternalMetadata *this;
  uint uVar1;
  int iVar2;
  int iVar3;
  MessageLite *pMVar4;
  MessageLite *pMVar5;
  void *pvVar6;
  Arena *pAVar7;
  
  this = &param_1->_internal_metadata_;
  pAVar7 = (Arena *)(this->ptr_ & 0xfffffffffffffffe);
  if ((this->ptr_ & 1) != 0) {
    pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 1) != 0) {
    pMVar4 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
    pMVar5 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
    if (pMVar4 == (MessageLite *)0x0) {
      pvVar6 = google::protobuf::Arena::CopyConstruct<messages::ServerSession>(pAVar7,pMVar5);
      param_1[1]._internal_metadata_.ptr_ = (long64)pvVar6;
    }
    else {
      messages::ServerSession::MergeImpl(pMVar4,pMVar5);
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  iVar2 = (int)param_2[2]._internal_metadata_.ptr_;
  if (iVar2 != 0) {
    iVar3 = (int)param_1[2]._internal_metadata_.ptr_;
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        clear_GameServerMessage((GameServerToRegionServerMessages *)param_1);
      }
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar2;
    }
    if (iVar2 == 10) {
      if (iVar3 == 10) {
        protocol::ServerRoleRegister::MergeImpl
                  ((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
      }
      else {
        pvVar6 = google::protobuf::Arena::CopyConstruct<protocol::ServerRoleRegister>
                           (pAVar7,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar6;
      }
    }
    else if (iVar2 == 0xb) {
      if (iVar3 == 0xb) {
        PingRequest::MergeFrom
                  ((PingRequest *)param_1[2]._padding_,(PingRequest *)param_2[2]._padding_);
      }
      else {
        pvVar6 = google::protobuf::Arena::CopyConstruct<region::PingRequest>
                           (pAVar7,(PingRequest *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar6;
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

// Clear @ 14c19a140

void __thiscall
region::GameServerToRegionServerMessages::Clear(GameServerToRegionServerMessages *this)

{
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    messages::ServerSession::Clear((this->_impl_).server_session_);
  }
  clear_GameServerMessage(this);
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c19a190

ulong64 __thiscall
region::GameServerToRegionServerMessages::ByteSizeLong(GameServerToRegionServerMessages *this)

{
  ServerRoleRegister *this_00;
  ulong64 uVar1;
  uint uVar2;
  int iVar3;
  __uint64 _Var4;
  __uint64 _Var5;
  
  _Var5 = 0;
  _Var4 = _Var5;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    uVar1 = messages::ServerSession::ByteSizeLong((this->_impl_).server_session_);
    uVar2 = (uint)uVar1 | 1;
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
    _Var4 = (ulonglong)(iVar3 * -9 + 0x160U >> 6) + 1 + uVar1;
  }
  uVar2 = (this->_impl_)._oneof_case_[0];
  if (uVar2 == 10) {
    _Var5 = protocol::ServerRoleRegister::ByteSizeLong
                      ((this->_impl_).GameServerMessage_.roleregister_);
  }
  else {
    if (uVar2 != 0xb) goto LAB_14c19a266;
    this_00 = (this->_impl_).GameServerMessage_.roleregister_;
    if ((((this_00->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
       ((this_00->_impl_).ip_.tagged_ptr_.ptr_ != (void *)0x0)) {
      _Var5 = 9;
    }
    _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                      ((Message *)this_00,_Var5,&(this_00->_impl_)._cached_size_);
  }
  uVar2 = (uint)_Var5 | 1;
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
  _Var4 = _Var4 + 1 + (iVar3 * -9 + 0x160U >> 6) + _Var5;
LAB_14c19a266:
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c19a2a0

uchar * __thiscall
region::GameServerToRegionServerMessages::_InternalSerialize
          (GameServerToRegionServerMessages *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  uchar *puVar2;
  int iVar3;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).server_session_,
                         (int)(((this->_impl_).server_session_)->_impl_)._cached_size_.atom_,param_1
                         ,param_2);
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 == 10) {
    iVar3 = 10;
  }
  else {
    if (uVar1 != 0xb) goto LAB_14c19a30c;
    iVar3 = 0xb;
  }
  param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                      (iVar3,(MessageLite *)(this->_impl_).GameServerMessage_.roleregister_,
                       (int)(((this->_impl_).GameServerMessage_.roleregister_)->_impl_).
                            _cached_size_.atom_,param_1,param_2);
LAB_14c19a30c:
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c19a350

ClassData * __thiscall
region::GameServerToRegionServerMessages::GetClassData(GameServerToRegionServerMessages *this)

{
  return (ClassData *)&GameServerToRegionServerMessages_class_data_;
}

// PlacementNew_ @ 14c19a370

void * __cdecl
region::GameServerToRegionServerMessages::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7GameServerToRegionServerMessages_region__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c19a3a0

void * __thiscall
region::GameServerToRegionServerMessages::_scalar_deleting_destructor_
          (GameServerToRegionServerMessages *this,uint param_1)

{
  ServerSession *this_00;
  
  this->_padding_ = (longlong)&___7GameServerToRegionServerMessages_region__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).server_session_;
  if (this_00 != (ServerSession *)0x0) {
    messages::ServerSession::~ServerSession(this_00);
    ::operator_delete(this_00,0x20);
  }
  if ((this->_impl_)._oneof_case_[0] != 0) {
    clear_GameServerMessage(this);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// CopyConstruct<region::PingRequest> @ 14c19a430

void * __cdecl
google::protobuf::Arena::CopyConstruct<region::PingRequest>(Arena *param_1,void *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (Arena *)0x0) {
    puVar1 = ::operator_new(0x20);
  }
  else {
    puVar1 = Allocate(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &___7PingRequest_region__6B_;
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

// CopyConstruct<region::PongResponse> @ 14c19a4c0

void * __cdecl
google::protobuf::Arena::CopyConstruct<region::PongResponse>(Arena *param_1,void *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (Arena *)0x0) {
    puVar1 = ::operator_new(0x20);
  }
  else {
    puVar1 = Allocate(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &___7PongResponse_region__6B_;
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

// CopyConstruct<protocol::ServerRoleRegister> @ 14c19a550

void * __cdecl
google::protobuf::Arena::CopyConstruct<protocol::ServerRoleRegister>(Arena *param_1,void *param_2)

{
  ServerRoleRegister *pSVar1;
  
  if (param_1 == (Arena *)0x0) {
    pSVar1 = ::operator_new(0x30);
  }
  else {
    pSVar1 = Allocate(param_1,0x30);
  }
  pSVar1 = protocol::ServerRoleRegister::ServerRoleRegister(pSVar1,param_1,param_2);
  return pSVar1;
}

// CopyConstruct<messages::ServerSession> @ 14c19a5a0

void * __cdecl
google::protobuf::Arena::CopyConstruct<messages::ServerSession>(Arena *param_1,void *param_2)

{
  ServerSession *pSVar1;
  
  if (param_1 == (Arena *)0x0) {
    pSVar1 = ::operator_new(0x20);
  }
  else {
    pSVar1 = Allocate(param_1,0x20);
  }
  pSVar1 = messages::ServerSession::ServerSession(pSVar1,param_1,param_2);
  return pSVar1;
}

// GetOwnedMessage<messages::All> @ 14c19a5f0

All * __cdecl
google::protobuf::internal::GetOwnedMessage<messages::All>
          (Arena *param_1,All *param_2,Arena *param_3)

{
  All *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (All *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (All *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<messages::None> @ 14c19a600

None * __cdecl
google::protobuf::internal::GetOwnedMessage<messages::None>
          (Arena *param_1,None *param_2,Arena *param_3)

{
  None *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (None *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (None *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<region::PingRequest> @ 14c19a610

PingRequest * __cdecl
google::protobuf::internal::GetOwnedMessage<region::PingRequest>
          (Arena *param_1,PingRequest *param_2,Arena *param_3)

{
  PingRequest *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (PingRequest *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (PingRequest *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<region::PongResponse> @ 14c19a620

PongResponse * __cdecl
google::protobuf::internal::GetOwnedMessage<region::PongResponse>
          (Arena *param_1,PongResponse *param_2,Arena *param_3)

{
  PongResponse *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (PongResponse *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (PongResponse *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<messages::Target> @ 14c19a630

Target * __cdecl
google::protobuf::internal::GetOwnedMessage<messages::Target>
          (Arena *param_1,Target *param_2,Arena *param_3)

{
  Target *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (Target *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (Target *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GameServerToRegionServerMessages @ 14c19a640

GameServerToRegionServerMessages * __thiscall
region::GameServerToRegionServerMessages::GameServerToRegionServerMessages
          (GameServerToRegionServerMessages *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7GameServerToRegionServerMessages_region__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = 0;
  (this->_impl_).server_session_ = (ServerSession *)0x0;
  return this;
}

// GameServerToRegionServerMessages @ 14c19a670

GameServerToRegionServerMessages * __thiscall
region::GameServerToRegionServerMessages::GameServerToRegionServerMessages
          (GameServerToRegionServerMessages *this,Arena *param_1,
          GameServerToRegionServerMessages *param_2)

{
  uint uVar1;
  ServerSession *pSVar2;
  ServerRoleRegister *pSVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7GameServerToRegionServerMessages_region__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pSVar2 = (ServerSession *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = (param_2->_impl_)._oneof_case_[0];
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pSVar2 = google::protobuf::Arena::CopyConstruct<messages::ServerSession>
                       (param_1,(param_2->_impl_).server_session_);
  }
  (this->_impl_).server_session_ = pSVar2;
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 == 10) {
    pSVar3 = google::protobuf::Arena::CopyConstruct<protocol::ServerRoleRegister>
                       (param_1,(param_2->_impl_).GameServerMessage_.roleregister_);
  }
  else {
    if (uVar1 != 0xb) {
      return this;
    }
    pSVar3 = google::protobuf::Arena::CopyConstruct<region::PingRequest>
                       (param_1,(param_2->_impl_).GameServerMessage_.roleregister_);
  }
  (this->_impl_).GameServerMessage_.roleregister_ = pSVar3;
  return this;
}

// PingRequest @ 14c19a720

PingRequest * __thiscall region::PingRequest::PingRequest(PingRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PingRequest_region__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).ticks_ = 0.0;
  return this;
}

// PingRequest @ 14c19a750

PingRequest * __thiscall
region::PingRequest::PingRequest(PingRequest *this,Arena *param_1,PingRequest *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PingRequest_region__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).ticks_ = (param_2->_impl_).ticks_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// PongResponse @ 14c19a7b0

PongResponse * __thiscall region::PongResponse::PongResponse(PongResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PongResponse_region__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).ticks_ = 0.0;
  return this;
}

// PongResponse @ 14c19a7e0

PongResponse * __thiscall
region::PongResponse::PongResponse(PongResponse *this,Arena *param_1,PongResponse *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7PongResponse_region__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).ticks_ = (param_2->_impl_).ticks_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// RegionServerToGameServerMessages @ 14c19a840

RegionServerToGameServerMessages * __thiscall
region::RegionServerToGameServerMessages::RegionServerToGameServerMessages
          (RegionServerToGameServerMessages *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RegionServerToGameServerMessages_region__6B_;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = 0;
  (this->_impl_)._oneof_case_[1] = 0;
  return this;
}

// RegionServerToGameServerMessages @ 14c19a870

RegionServerToGameServerMessages * __thiscall
region::RegionServerToGameServerMessages::RegionServerToGameServerMessages
          (RegionServerToGameServerMessages *this,Arena *param_1,
          RegionServerToGameServerMessages *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  ServerRoleRegister *pSVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RegionServerToGameServerMessages_region__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  uVar1 = (param_2->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = uVar1;
  (this->_impl_)._oneof_case_[1] = (param_2->_impl_)._oneof_case_[1];
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    pMVar2 = google::protobuf::MessageLite::CopyConstruct
                       (param_1,(MessageLite *)(param_2->_impl_).RegionServerMessageType_.none_);
    (this->_impl_).RegionServerMessageType_.none_ = (Message *)pMVar2;
  }
  uVar1 = (this->_impl_)._oneof_case_[1];
  if (uVar1 == 10) {
    pSVar3 = google::protobuf::Arena::CopyConstruct<protocol::ServerRoleRegister>
                       (param_1,(param_2->_impl_).RegionServerMessage_.roleregister_);
  }
  else {
    if (uVar1 != 0xb) {
      return this;
    }
    pSVar3 = google::protobuf::Arena::CopyConstruct<region::PongResponse>
                       (param_1,(param_2->_impl_).RegionServerMessage_.roleregister_);
  }
  (this->_impl_).RegionServerMessage_.roleregister_ = pSVar3;
  return this;
}

// ~GameServerToRegionServerMessages @ 14c19a930

void __thiscall
region::GameServerToRegionServerMessages::~GameServerToRegionServerMessages
          (GameServerToRegionServerMessages *this)

{
  ServerSession *this_00;
  
  this->_padding_ = (longlong)&___7GameServerToRegionServerMessages_region__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).server_session_;
  if (this_00 != (ServerSession *)0x0) {
    messages::ServerSession::~ServerSession(this_00);
    ::operator_delete(this_00,0x20);
  }
  if ((this->_impl_)._oneof_case_[0] != 0) {
    clear_GameServerMessage(this);
  }
  return;
}

// ~PingRequest @ 14c19a9a0

void __thiscall region::PingRequest::~PingRequest(PingRequest *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7PingRequest_region__6B_;
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

// ~PongResponse @ 14c19a9c0

void __thiscall region::PongResponse::~PongResponse(PongResponse *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7PongResponse_region__6B_;
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

// ~RegionServerToGameServerMessages @ 14c19a9e0

void __thiscall
region::RegionServerToGameServerMessages::~RegionServerToGameServerMessages
          (RegionServerToGameServerMessages *this)

{
  uint uVar1;
  Message *pMVar2;
  undefined8 *puVar3;
  
  this->_padding_ = (longlong)&___7RegionServerToGameServerMessages_region__6B_;
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
         (pMVar2 = (this->_impl_).RegionServerMessageType_.none_, pMVar2 != (Message *)0x0)) {
        (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
      }
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  if ((this->_impl_)._oneof_case_[1] != 0) {
    clear_RegionServerMessage(this);
  }
  return;
}

// `scalar_deleting_destructor' @ 14c19aa70

void * __thiscall
protocol::ServerRoleRegister::_scalar_deleting_destructor_(ServerRoleRegister *this,uint param_1)

{
  ~ServerRoleRegister(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// CopyFrom @ 14c19aab0

void __thiscall
region::GameServerToRegionServerMessages::CopyFrom
          (GameServerToRegionServerMessages *this,GameServerToRegionServerMessages *param_1)

{
  uint uVar1;
  uint uVar2;
  ServerSession *pSVar3;
  PingRequest *pPVar4;
  ServerSession *pSVar5;
  ServerRoleRegister *pSVar6;
  Arena *pAVar7;
  
  if (param_1 != this) {
    Clear(this);
    pAVar7 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 1) != 0) {
      pSVar5 = (this->_impl_).server_session_;
      pSVar3 = (param_1->_impl_).server_session_;
      if (pSVar5 == (ServerSession *)0x0) {
        pSVar5 = google::protobuf::Arena::CopyConstruct<messages::ServerSession>(pAVar7,pSVar3);
        (this->_impl_).server_session_ = pSVar5;
      }
      else {
        messages::ServerSession::MergeImpl((MessageLite *)pSVar5,(MessageLite *)pSVar3);
      }
    }
    (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar1;
    uVar1 = (param_1->_impl_)._oneof_case_[0];
    if (uVar1 != 0) {
      uVar2 = (this->_impl_)._oneof_case_[0];
      if (uVar2 != uVar1) {
        if (uVar2 != 0) {
          clear_GameServerMessage(this);
        }
        (this->_impl_)._oneof_case_[0] = uVar1;
      }
      if (uVar1 == 10) {
        pSVar6 = (param_1->_impl_).GameServerMessage_.roleregister_;
        if (uVar2 == 10) {
          protocol::ServerRoleRegister::MergeImpl
                    ((MessageLite *)(this->_impl_).GameServerMessage_.roleregister_,
                     (MessageLite *)pSVar6);
        }
        else {
          pSVar6 = google::protobuf::Arena::CopyConstruct<protocol::ServerRoleRegister>
                             (pAVar7,pSVar6);
          (this->_impl_).GameServerMessage_.roleregister_ = pSVar6;
        }
      }
      else if (uVar1 == 0xb) {
        pPVar4 = (param_1->_impl_).GameServerMessage_.pingreq_;
        if (uVar2 == 0xb) {
          PingRequest::MergeFrom((this->_impl_).GameServerMessage_.pingreq_,pPVar4);
        }
        else {
          pSVar6 = google::protobuf::Arena::CopyConstruct<region::PingRequest>(pAVar7,pPVar4);
          (this->_impl_).GameServerMessage_.roleregister_ = pSVar6;
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

// CopyFrom @ 14c19abc0

void __thiscall region::PingRequest::CopyFrom(PingRequest *this,PingRequest *param_1)

{
  double dVar1;
  uint uVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar2 & 1) != 0) && (dVar1 = (param_1->_impl_).ticks_, dVar1 != 0.0)) {
      (this->_impl_).ticks_ = dVar1;
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

// CopyFrom @ 14c19ac30

void __thiscall region::PongResponse::CopyFrom(PongResponse *this,PongResponse *param_1)

{
  double dVar1;
  uint uVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar2 & 1) != 0) && (dVar1 = (param_1->_impl_).ticks_, dVar1 != 0.0)) {
      (this->_impl_).ticks_ = dVar1;
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

// CopyFrom @ 14c19aca0

void __thiscall
region::RegionServerToGameServerMessages::CopyFrom
          (RegionServerToGameServerMessages *this,RegionServerToGameServerMessages *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c19ace0

Metadata * __thiscall
region::GameServerToRegionServerMessages::GetMetadata
          (GameServerToRegionServerMessages *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&GameServerToRegionServerMessages_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c19ad20

Metadata * __thiscall
region::PingRequest::GetMetadata(PingRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&PingRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c19ad60

Metadata * __thiscall
region::PongResponse::GetMetadata(PongResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&PongResponse_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c19ada0

Metadata * __thiscall
region::RegionServerToGameServerMessages::GetMetadata
          (RegionServerToGameServerMessages *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&RegionServerToGameServerMessages_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c19ade0

void __thiscall
region::GameServerToRegionServerMessages::InternalSwap
          (GameServerToRegionServerMessages *this,GameServerToRegionServerMessages *param_1)

{
  uint uVar1;
  longlong lVar2;
  ServerSession *pSVar3;
  GameServerMessageUnion GVar4;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pSVar3 = (this->_impl_).server_session_;
  (this->_impl_).server_session_ = (param_1->_impl_).server_session_;
  (param_1->_impl_).server_session_ = pSVar3;
  GVar4 = (this->_impl_).GameServerMessage_;
  (this->_impl_).GameServerMessage_ = (param_1->_impl_).GameServerMessage_;
  (param_1->_impl_).GameServerMessage_ = GVar4;
  uVar1 = (this->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = (param_1->_impl_)._oneof_case_[0];
  (param_1->_impl_)._oneof_case_[0] = uVar1;
  return;
}

// InternalSwap @ 14c19ae40

void __thiscall region::PingRequest::InternalSwap(PingRequest *this,PingRequest *param_1)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar3;
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar2;
  dVar1 = (this->_impl_).ticks_;
  (this->_impl_).ticks_ = (param_1->_impl_).ticks_;
  (param_1->_impl_).ticks_ = dVar1;
  return;
}

// InternalSwap @ 14c19ae80

void __thiscall region::PongResponse::InternalSwap(PongResponse *this,PongResponse *param_1)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar3;
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar2;
  dVar1 = (this->_impl_).ticks_;
  (this->_impl_).ticks_ = (param_1->_impl_).ticks_;
  (param_1->_impl_).ticks_ = dVar1;
  return;
}

// InternalSwap @ 14c19aec0

void __thiscall
region::RegionServerToGameServerMessages::InternalSwap
          (RegionServerToGameServerMessages *this,RegionServerToGameServerMessages *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  RegionServerMessageTypeUnion RVar4;
  RegionServerMessageUnion RVar5;
  
  lVar3 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar3;
  RVar4 = (this->_impl_).RegionServerMessageType_;
  (this->_impl_).RegionServerMessageType_ = (param_1->_impl_).RegionServerMessageType_;
  (param_1->_impl_).RegionServerMessageType_ = RVar4;
  RVar5 = (this->_impl_).RegionServerMessage_;
  (this->_impl_).RegionServerMessage_ = (param_1->_impl_).RegionServerMessage_;
  (param_1->_impl_).RegionServerMessage_ = RVar5;
  uVar1 = (this->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = (param_1->_impl_)._oneof_case_[0];
  uVar2 = (param_1->_impl_)._oneof_case_[1];
  (param_1->_impl_)._oneof_case_[0] = uVar1;
  uVar1 = (this->_impl_)._oneof_case_[1];
  (this->_impl_)._oneof_case_[1] = uVar2;
  (param_1->_impl_)._oneof_case_[1] = uVar1;
  return;
}

// MergeFrom @ 14c19af20

void __thiscall region::PingRequest::MergeFrom(PingRequest *this,PingRequest *param_1)

{
  double dVar1;
  uint uVar2;
  
  uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
  if (((uVar2 & 1) != 0) && (dVar1 = (param_1->_impl_).ticks_, dVar1 != 0.0)) {
    (this->_impl_).ticks_ = dVar1;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar2;
  if ((param_1->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    return;
  }
  return;
}

// MergeFrom @ 14c19af70

void __thiscall region::PongResponse::MergeFrom(PongResponse *this,PongResponse *param_1)

{
  double dVar1;
  uint uVar2;
  
  uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
  if (((uVar2 & 1) != 0) && (dVar1 = (param_1->_impl_).ticks_, dVar1 != 0.0)) {
    (this->_impl_).ticks_ = dVar1;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar2;
  if ((param_1->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    return;
  }
  return;
}

// clear_GameServerMessage @ 14c19afc0

void __thiscall
region::GameServerToRegionServerMessages::clear_GameServerMessage
          (GameServerToRegionServerMessages *this)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  ServerRoleRegister *this_00;
  
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 == 10) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 != (undefined8 *)0x0) ||
       (this_00 = (this->_impl_).GameServerMessage_.roleregister_,
       this_00 == (ServerRoleRegister *)0x0)) goto LAB_14c19b052;
    protocol::ServerRoleRegister::~ServerRoleRegister(this_00);
    uVar3 = 0x30;
  }
  else {
    if (uVar1 != 0xb) goto LAB_14c19b052;
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 != (undefined8 *)0x0) ||
       (this_00 = (this->_impl_).GameServerMessage_.roleregister_,
       this_00 == (ServerRoleRegister *)0x0)) goto LAB_14c19b052;
    this_00->_padding_ = (longlong)&___7PingRequest_region__6B_;
    if ((this_00->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::
      DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&this_00->_padding_);
    }
    uVar3 = 0x20;
  }
  ::operator_delete(this_00,uVar3);
LAB_14c19b052:
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// clear_RegionServerMessage @ 14c19b070

void __thiscall
region::RegionServerToGameServerMessages::clear_RegionServerMessage
          (RegionServerToGameServerMessages *this)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  ServerRoleRegister *this_00;
  
  uVar1 = (this->_impl_)._oneof_case_[1];
  if (uVar1 == 10) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 != (undefined8 *)0x0) ||
       (this_00 = (this->_impl_).RegionServerMessage_.roleregister_,
       this_00 == (ServerRoleRegister *)0x0)) goto LAB_14c19b102;
    protocol::ServerRoleRegister::~ServerRoleRegister(this_00);
    uVar3 = 0x30;
  }
  else {
    if (uVar1 != 0xb) goto LAB_14c19b102;
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 != (undefined8 *)0x0) ||
       (this_00 = (this->_impl_).RegionServerMessage_.roleregister_,
       this_00 == (ServerRoleRegister *)0x0)) goto LAB_14c19b102;
    this_00->_padding_ = (longlong)&___7PongResponse_region__6B_;
    if ((this_00->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::
      DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&this_00->_padding_);
    }
    uVar3 = 0x20;
  }
  ::operator_delete(this_00,uVar3);
LAB_14c19b102:
  (this->_impl_)._oneof_case_[1] = 0;
  return;
}

// clear_RegionServerMessageType @ 14c19b120

void __thiscall
region::RegionServerToGameServerMessages::clear_RegionServerMessageType
          (RegionServerToGameServerMessages *this)

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
       (pMVar2 = (this->_impl_).RegionServerMessageType_.none_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// clear_all @ 14c19b180

void __thiscall
region::RegionServerToGameServerMessages::clear_all(RegionServerToGameServerMessages *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 2) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).RegionServerMessageType_.none_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_none @ 14c19b1d0

void __thiscall
region::RegionServerToGameServerMessages::clear_none(RegionServerToGameServerMessages *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 1) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).RegionServerMessageType_.none_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_roleregister @ 14c19b220

void __thiscall
region::GameServerToRegionServerMessages::clear_roleregister(GameServerToRegionServerMessages *this)

{
  ServerRoleRegister *this_00;
  undefined8 *puVar1;
  
  if ((this->_impl_)._oneof_case_[0] == 10) {
    puVar1 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    if ((puVar1 == (undefined8 *)0x0) &&
       (this_00 = (this->_impl_).GameServerMessage_.roleregister_,
       this_00 != (ServerRoleRegister *)0x0)) {
      protocol::ServerRoleRegister::~ServerRoleRegister(this_00);
      ::operator_delete(this_00,0x30);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_roleregister @ 14c19b280

void __thiscall
region::RegionServerToGameServerMessages::clear_roleregister(RegionServerToGameServerMessages *this)

{
  ServerRoleRegister *this_00;
  undefined8 *puVar1;
  
  if ((this->_impl_)._oneof_case_[1] == 10) {
    puVar1 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar1 = (undefined8 *)*puVar1;
    }
    if ((puVar1 == (undefined8 *)0x0) &&
       (this_00 = (this->_impl_).RegionServerMessage_.roleregister_,
       this_00 != (ServerRoleRegister *)0x0)) {
      protocol::ServerRoleRegister::~ServerRoleRegister(this_00);
      ::operator_delete(this_00,0x30);
    }
    (this->_impl_)._oneof_case_[1] = 0;
  }
  return;
}

// clear_server_session @ 14c19b2e0

void __thiscall
region::GameServerToRegionServerMessages::clear_server_session
          (GameServerToRegionServerMessages *this)

{
  ServerSession *this_00;
  
  this_00 = (this->_impl_).server_session_;
  if (this_00 != (ServerSession *)0x0) {
    messages::ServerSession::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// clear_target @ 14c19b310

void __thiscall
region::RegionServerToGameServerMessages::clear_target(RegionServerToGameServerMessages *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 3) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).RegionServerMessageType_.none_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// set_allocated_all @ 14c19b360

void __thiscall
region::RegionServerToGameServerMessages::set_allocated_all
          (RegionServerToGameServerMessages *this,All *param_1)

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
       (pMVar2 = (this->_impl_).RegionServerMessageType_.none_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (All *)0x0) {
    pAVar4 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if (pAVar3 != pAVar4) {
      param_1 = (All *)google::protobuf::internal::GetOwnedMessageInternal
                                 (pAVar3,(MessageLite *)param_1,pAVar4);
    }
    (this->_impl_)._oneof_case_[0] = 2;
    (this->_impl_).RegionServerMessageType_.none_ = (Message *)param_1;
  }
  return;
}

// set_allocated_none @ 14c19b420

void __thiscall
region::RegionServerToGameServerMessages::set_allocated_none
          (RegionServerToGameServerMessages *this,None *param_1)

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
       (pMVar2 = (this->_impl_).RegionServerMessageType_.none_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (None *)0x0) {
    pAVar4 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if (pAVar3 != pAVar4) {
      param_1 = (None *)google::protobuf::internal::GetOwnedMessageInternal
                                  (pAVar3,(MessageLite *)param_1,pAVar4);
    }
    (this->_impl_)._oneof_case_[0] = 1;
    (this->_impl_).RegionServerMessageType_.none_ = (Message *)param_1;
  }
  return;
}

// set_allocated_pingreq @ 14c19b4e0

void __thiscall
region::GameServerToRegionServerMessages::set_allocated_pingreq
          (GameServerToRegionServerMessages *this,PingRequest *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_GameServerMessage(this);
  if (param_1 != (PingRequest *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (PingRequest *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0xb;
    (this->_impl_).GameServerMessage_.pingreq_ = param_1;
  }
  return;
}

// set_allocated_pongres @ 14c19b560

void __thiscall
region::RegionServerToGameServerMessages::set_allocated_pongres
          (RegionServerToGameServerMessages *this,PongResponse *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_RegionServerMessage(this);
  if (param_1 != (PongResponse *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (PongResponse *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[1] = 0xb;
    (this->_impl_).RegionServerMessage_.pongres_ = param_1;
  }
  return;
}

// set_allocated_roleregister @ 14c19b5e0

void __thiscall
region::GameServerToRegionServerMessages::set_allocated_roleregister
          (GameServerToRegionServerMessages *this,ServerRoleRegister *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_GameServerMessage(this);
  if (param_1 != (ServerRoleRegister *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (ServerRoleRegister *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 10;
    (this->_impl_).GameServerMessage_.roleregister_ = param_1;
  }
  return;
}

// set_allocated_roleregister @ 14c19b660

void __thiscall
region::RegionServerToGameServerMessages::set_allocated_roleregister
          (RegionServerToGameServerMessages *this,ServerRoleRegister *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_RegionServerMessage(this);
  if (param_1 != (ServerRoleRegister *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (ServerRoleRegister *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[1] = 10;
    (this->_impl_).RegionServerMessage_.roleregister_ = param_1;
  }
  return;
}

// set_allocated_target @ 14c19b6e0

void __thiscall
region::RegionServerToGameServerMessages::set_allocated_target
          (RegionServerToGameServerMessages *this,Target *param_1)

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
       (pMVar2 = (this->_impl_).RegionServerMessageType_.none_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (Target *)0x0) {
    pAVar4 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if (pAVar3 != pAVar4) {
      param_1 = (Target *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar3,(MessageLite *)param_1,pAVar4);
    }
    (this->_impl_)._oneof_case_[0] = 3;
    (this->_impl_).RegionServerMessageType_.none_ = (Message *)param_1;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_GameServerToRegionServerMessages_default_instance_'' @ 150442330

void __cdecl
region::_dynamic_atexit_destructor_for___GameServerToRegionServerMessages_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_PingRequest_default_instance_'' @ 150442340

void __cdecl region::_dynamic_atexit_destructor_for___PingRequest_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_PongResponse_default_instance_'' @ 150442350

void __cdecl region::_dynamic_atexit_destructor_for___PongResponse_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_RegionServerToGameServerMessages_default_instance_'' @ 150442360

void __cdecl
region::_dynamic_atexit_destructor_for___RegionServerToGameServerMessages_default_instance___(void)

{
  return;
}


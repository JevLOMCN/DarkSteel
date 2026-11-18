// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 48

// `dynamic_initializer_for_'_ItemBuy_default_instance_'' @ 141299840

void __cdecl _dynamic_initializer_for___ItemBuy_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ItemBuy_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ItemRepairInfo_default_instance_'' @ 141299860

void __cdecl _dynamic_initializer_for___ItemRepairInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ItemRepairInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_MountLostInfo_default_instance_'' @ 141299880

void __cdecl _dynamic_initializer_for___MountLostInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___MountLostInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 1412998a0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_structs_5fitem_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c22cb30

void __cdecl MountLostInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  google::protobuf::RepeatedField<int>::MergeFrom
            ((RepeatedField<int> *)&param_1[1]._internal_metadata_,
             (RepeatedField<int> *)&param_2[1]._internal_metadata_);
  google::protobuf::RepeatedField<int>::MergeFrom
            ((RepeatedField<int> *)(param_1 + 3),(RepeatedField<int> *)(param_2 + 3));
  google::protobuf::RepeatedField<int>::MergeFrom
            ((RepeatedField<int> *)&param_1[4]._internal_metadata_,
             (RepeatedField<int> *)&param_2[4]._internal_metadata_);
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 7) != 0) {
    if (((uVar1 & 1) != 0) && (param_2[6]._padding_ != 0)) {
      param_1[6]._padding_ = param_2[6]._padding_;
    }
    if (((uVar1 & 2) != 0) && (lVar2 = param_2[6]._internal_metadata_.ptr_, lVar2 != 0)) {
      param_1[6]._internal_metadata_.ptr_ = lVar2;
    }
    if (((uVar1 & 4) != 0) && (param_2[7]._padding_ != 0)) {
      param_1[7]._padding_ = param_2[7]._padding_;
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

// Clear @ 14c22cbd0

void __thiscall MountLostInfo::Clear(MountLostInfo *this)

{
  ulonglong uVar1;
  ulong64 uVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar1 = (this->_impl_).item_id_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar1 & 4) == 0) {
    (this->_impl_).item_id_.soo_rep_.field0_0x0.long_rep.elements_int = uVar1 & 0xfffffffffffffff8;
  }
  else {
    (this->_impl_).item_id_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  uVar1 = (this->_impl_).quantity_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar1 & 4) == 0) {
    (this->_impl_).quantity_.soo_rep_.field0_0x0.long_rep.elements_int = uVar1 & 0xfffffffffffffff8;
  }
  else {
    (this->_impl_).quantity_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  uVar1 = (this->_impl_).quantity_trade_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar1 & 4) == 0) {
    (this->_impl_).quantity_trade_.soo_rep_.field0_0x0.long_rep.elements_int =
         uVar1 & 0xfffffffffffffff8;
  }
  else {
    (this->_impl_).quantity_trade_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 7) != 0) {
    (this->_impl_).list_id_ = 0;
    (this->_impl_).record_time_ = 0;
    (this->_impl_).end_time_ = 0;
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
  uVar2 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar2 >> 2) & 1) == 0) {
    uVar3 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar2 & 3;
  }
  if (uVar3 != 0) {
    google::protobuf::UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14c22cc40

ulong64 __thiscall MountLostInfo::ByteSizeLong(MountLostInfo *this)

{
  uint uVar1;
  longlong lVar2;
  __uint64 _Var3;
  __uint64 _Var4;
  __uint64 _Var5;
  ulong64 uVar6;
  
  _Var3 = google::protobuf::internal::WireFormatLite::Int32SizeWithPackedTagSize
                    (&(this->_impl_).item_id_,1,&(this->_impl_)._item_id_cached_byte_size_);
  _Var4 = google::protobuf::internal::WireFormatLite::Int32SizeWithPackedTagSize
                    (&(this->_impl_).quantity_,1,&(this->_impl_)._quantity_cached_byte_size_);
  _Var5 = google::protobuf::internal::WireFormatLite::Int32SizeWithPackedTagSize
                    (&(this->_impl_).quantity_trade_,1,
                     &(this->_impl_)._quantity_trade_cached_byte_size_);
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var5 = _Var3 + _Var4 + _Var5;
  if ((uVar1 & 7) != 0) {
    if (((uVar1 & 1) != 0) && (lVar2 = (this->_impl_).list_id_, lVar2 != 0)) {
      uVar6 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var5 = _Var5 + uVar6;
    }
    if (((uVar1 & 2) != 0) && (uVar6 = (this->_impl_).record_time_, uVar6 != 0)) {
      uVar6 = google::protobuf::internal::WireFormatLite::UInt64SizePlusOne(uVar6);
      _Var5 = _Var5 + uVar6;
    }
    if (((uVar1 & 4) != 0) && (uVar6 = (this->_impl_).end_time_, uVar6 != 0)) {
      uVar6 = google::protobuf::internal::WireFormatLite::UInt64SizePlusOne(uVar6);
      _Var5 = _Var5 + uVar6;
    }
  }
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c22cd00

uchar * __thiscall
MountLostInfo::_InternalSerialize(MountLostInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  int *piVar5;
  uchar *puVar6;
  byte bVar7;
  ulonglong uVar8;
  atomic<int> aVar9;
  uint uVar10;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar3 = (this->_impl_).list_id_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar3,param_1);
  }
  aVar9 = (this->_impl_)._item_id_cached_byte_size_.atom_;
  if (0 < (int)aVar9) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    *param_1 = 0x12;
    while( true ) {
      param_1 = param_1 + 1;
      bVar7 = aVar9._0_1_;
      if ((uint)aVar9 < 0x80) break;
      aVar9 = (atomic<int>)((uint)aVar9 >> 7);
      *param_1 = bVar7 | 0x80;
    }
    *param_1 = bVar7;
    param_1 = param_1 + 1;
    uVar8 = (this->_impl_).item_id_.soo_rep_.field0_0x0.long_rep.elements_int;
    piVar5 = (int *)(uVar8 & 0xfffffffffffffff8);
    if ((uVar8 & 4) == 0) {
      uVar10 = (uint)uVar8 & 3;
      piVar5 = &(this->_impl_).item_id_.soo_rep_.field0_0x0.long_rep.size;
    }
    else {
      uVar10 = (this->_impl_).item_id_.soo_rep_.field0_0x0.long_rep.size;
    }
    piVar1 = piVar5 + (int)uVar10;
    do {
      if (param_2->end_ <= param_1) {
        param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
      }
      iVar2 = *piVar5;
      piVar5 = piVar5 + 1;
      for (uVar8 = (ulonglong)iVar2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
        *param_1 = (byte)uVar8 | 0x80;
        param_1 = param_1 + 1;
      }
      *param_1 = (byte)uVar8;
      param_1 = param_1 + 1;
    } while (piVar5 < piVar1);
  }
  aVar9 = (this->_impl_)._quantity_cached_byte_size_.atom_;
  if (0 < (int)aVar9) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    *param_1 = 0x1a;
    while( true ) {
      param_1 = param_1 + 1;
      bVar7 = aVar9._0_1_;
      if ((uint)aVar9 < 0x80) break;
      aVar9 = (atomic<int>)((uint)aVar9 >> 7);
      *param_1 = bVar7 | 0x80;
    }
    *param_1 = bVar7;
    param_1 = param_1 + 1;
    uVar8 = (this->_impl_).quantity_.soo_rep_.field0_0x0.long_rep.elements_int;
    piVar5 = (int *)(uVar8 & 0xfffffffffffffff8);
    if ((uVar8 & 4) == 0) {
      uVar10 = (uint)uVar8 & 3;
      piVar5 = &(this->_impl_).quantity_.soo_rep_.field0_0x0.long_rep.size;
    }
    else {
      uVar10 = (this->_impl_).quantity_.soo_rep_.field0_0x0.long_rep.size;
    }
    piVar1 = piVar5 + (int)uVar10;
    do {
      if (param_2->end_ <= param_1) {
        param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
      }
      iVar2 = *piVar5;
      piVar5 = piVar5 + 1;
      for (uVar8 = (ulonglong)iVar2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
        *param_1 = (byte)uVar8 | 0x80;
        param_1 = param_1 + 1;
      }
      *param_1 = (byte)uVar8;
      param_1 = param_1 + 1;
    } while (piVar5 < piVar1);
  }
  aVar9 = (this->_impl_)._quantity_trade_cached_byte_size_.atom_;
  if (0 < (int)aVar9) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    *param_1 = 0x22;
    while( true ) {
      param_1 = param_1 + 1;
      bVar7 = aVar9._0_1_;
      if ((uint)aVar9 < 0x80) break;
      aVar9 = (atomic<int>)((uint)aVar9 >> 7);
      *param_1 = bVar7 | 0x80;
    }
    *param_1 = bVar7;
    param_1 = param_1 + 1;
    uVar8 = (this->_impl_).quantity_trade_.soo_rep_.field0_0x0.long_rep.elements_int;
    piVar5 = (int *)(uVar8 & 0xfffffffffffffff8);
    if ((uVar8 & 4) == 0) {
      uVar10 = (uint)uVar8 & 3;
      piVar5 = &(this->_impl_).quantity_trade_.soo_rep_.field0_0x0.long_rep.size;
    }
    else {
      uVar10 = (this->_impl_).quantity_trade_.soo_rep_.field0_0x0.long_rep.size;
    }
    piVar1 = piVar5 + (int)uVar10;
    do {
      if (param_2->end_ <= param_1) {
        param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
      }
      iVar2 = *piVar5;
      piVar5 = piVar5 + 1;
      for (uVar8 = (ulonglong)iVar2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
        *param_1 = (byte)uVar8 | 0x80;
        param_1 = param_1 + 1;
      }
      *param_1 = (byte)uVar8;
      param_1 = param_1 + 1;
    } while (piVar5 < piVar1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) && ((this->_impl_).record_time_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar8 = (this->_impl_).record_time_;
    *param_1 = 0x28;
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
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) && ((this->_impl_).end_time_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar8 = (this->_impl_).end_time_;
    *param_1 = 0x30;
    while( true ) {
      pbVar4 = param_1 + 1;
      bVar7 = (byte)uVar8;
      if (uVar8 < 0x80) break;
      uVar8 = uVar8 >> 7;
      *pbVar4 = bVar7 | 0x80;
      param_1 = pbVar4;
    }
    *pbVar4 = bVar7;
    param_1 = param_1 + 2;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar6 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar6;
  }
  return param_1;
}

// GetClassData @ 14c22d070

ClassData * __thiscall MountLostInfo::GetClassData(MountLostInfo *this)

{
  return (ClassData *)&MountLostInfo_class_data_;
}

// PlacementNew_ @ 14c22d090

void * __cdecl MountLostInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7MountLostInfo__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(Arena **)((longlong)param_2 + 0x18) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(Arena **)((longlong)param_2 + 0x30) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x38) = 0;
  *(undefined4 *)((longlong)param_2 + 0x40) = 0;
  *(Arena **)((longlong)param_2 + 0x48) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x50) = 0;
  *(undefined4 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c22d0e0

void * __thiscall MountLostInfo::_scalar_deleting_destructor_(MountLostInfo *this,uint param_1)

{
  this->_padding_ = (longlong)&___7MountLostInfo__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  Impl_::~Impl_(&this->_impl_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// MergeImpl @ 14c22d140

void __cdecl ItemRepairInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  google::protobuf::RepeatedField<int>::MergeFrom
            ((RepeatedField<int> *)&param_1[1]._internal_metadata_,
             (RepeatedField<int> *)&param_2[1]._internal_metadata_);
  google::protobuf::RepeatedField<int>::MergeFrom
            ((RepeatedField<int> *)(param_1 + 3),(RepeatedField<int> *)(param_2 + 3));
  uVar1 = (uint)param_2[1]._padding_;
  if (((uVar1 & 1) != 0) && (lVar2 = param_2[4]._internal_metadata_.ptr_, lVar2 != 0)) {
    param_1[4]._internal_metadata_.ptr_ = lVar2;
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

// Clear @ 14c22d1b0

void __thiscall ItemRepairInfo::Clear(ItemRepairInfo *this)

{
  ulonglong uVar1;
  ulong64 uVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar1 = (this->_impl_).material_item_id_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar1 & 4) == 0) {
    (this->_impl_).material_item_id_.soo_rep_.field0_0x0.long_rep.elements_int =
         uVar1 & 0xfffffffffffffff8;
  }
  else {
    (this->_impl_).material_item_id_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  uVar1 = (this->_impl_).material_item_quantity_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar1 & 4) == 0) {
    (this->_impl_).material_item_quantity_.soo_rep_.field0_0x0.long_rep.elements_int =
         uVar1 & 0xfffffffffffffff8;
  }
  else {
    (this->_impl_).material_item_quantity_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  (this->_impl_).item_uid_ = 0;
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
  uVar2 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar2 >> 2) & 1) == 0) {
    uVar3 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar2 & 3;
  }
  if (uVar3 != 0) {
    google::protobuf::UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14c22d200

ulong64 __thiscall ItemRepairInfo::ByteSizeLong(ItemRepairInfo *this)

{
  longlong lVar1;
  int iVar2;
  __uint64 _Var3;
  __uint64 _Var4;
  ulonglong uVar5;
  
  _Var3 = google::protobuf::internal::WireFormatLite::Int32SizeWithPackedTagSize
                    (&(this->_impl_).material_item_id_,1,
                     &(this->_impl_)._material_item_id_cached_byte_size_);
  _Var4 = google::protobuf::internal::WireFormatLite::Int32SizeWithPackedTagSize
                    (&(this->_impl_).material_item_quantity_,1,
                     &(this->_impl_)._material_item_quantity_cached_byte_size_);
  _Var3 = _Var3 + _Var4;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (uVar5 = (this->_impl_).item_uid_, uVar5 != 0)) {
    uVar5 = uVar5 | 1;
    if (__isa_available < 5) {
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar2 = 0x3f - (int)lVar1;
    }
    else {
      iVar2 = (int)LZCOUNT(uVar5);
    }
    _Var3 = _Var3 + (iVar2 * -9 + 0x2c0U >> 6);
  }
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var3,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c22d2a0

uchar * __thiscall
ItemRepairInfo::_InternalSerialize(ItemRepairInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  byte bVar5;
  int *piVar6;
  uchar *puVar7;
  ulonglong uVar8;
  atomic<int> aVar9;
  uint uVar10;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar3 = (this->_impl_).item_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar3,param_1);
  }
  aVar9 = (this->_impl_)._material_item_id_cached_byte_size_.atom_;
  if (0 < (int)aVar9) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    *param_1 = 0x12;
    while( true ) {
      pbVar4 = param_1 + 1;
      bVar5 = aVar9._0_1_;
      if ((uint)aVar9 < 0x80) break;
      aVar9 = (atomic<int>)((uint)aVar9 >> 7);
      *pbVar4 = bVar5 | 0x80;
      param_1 = pbVar4;
    }
    *pbVar4 = bVar5;
    param_1 = param_1 + 2;
    uVar8 = (this->_impl_).material_item_id_.soo_rep_.field0_0x0.long_rep.elements_int;
    piVar6 = (int *)(uVar8 & 0xfffffffffffffff8);
    if ((uVar8 & 4) == 0) {
      uVar10 = (uint)uVar8 & 3;
      piVar6 = &(this->_impl_).material_item_id_.soo_rep_.field0_0x0.long_rep.size;
    }
    else {
      uVar10 = (this->_impl_).material_item_id_.soo_rep_.field0_0x0.long_rep.size;
    }
    piVar1 = piVar6 + (int)uVar10;
    do {
      if (param_2->end_ <= param_1) {
        param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
      }
      iVar2 = *piVar6;
      piVar6 = piVar6 + 1;
      for (uVar8 = (ulonglong)iVar2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
        *param_1 = (byte)uVar8 | 0x80;
        param_1 = param_1 + 1;
      }
      *param_1 = (byte)uVar8;
      param_1 = param_1 + 1;
    } while (piVar6 < piVar1);
  }
  aVar9 = (this->_impl_)._material_item_quantity_cached_byte_size_.atom_;
  if (0 < (int)aVar9) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    *param_1 = 0x1a;
    while( true ) {
      param_1 = param_1 + 1;
      bVar5 = aVar9._0_1_;
      if ((uint)aVar9 < 0x80) break;
      aVar9 = (atomic<int>)((uint)aVar9 >> 7);
      *param_1 = bVar5 | 0x80;
    }
    *param_1 = bVar5;
    param_1 = param_1 + 1;
    uVar8 = (this->_impl_).material_item_quantity_.soo_rep_.field0_0x0.long_rep.elements_int;
    piVar6 = (int *)(uVar8 & 0xfffffffffffffff8);
    if ((uVar8 & 4) == 0) {
      uVar10 = (uint)uVar8 & 3;
      piVar6 = &(this->_impl_).material_item_quantity_.soo_rep_.field0_0x0.long_rep.size;
    }
    else {
      uVar10 = (this->_impl_).material_item_quantity_.soo_rep_.field0_0x0.long_rep.size;
    }
    piVar1 = piVar6 + (int)uVar10;
    do {
      if (param_2->end_ <= param_1) {
        param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
      }
      iVar2 = *piVar6;
      piVar6 = piVar6 + 1;
      for (uVar8 = (ulonglong)iVar2; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
        *param_1 = (byte)uVar8 | 0x80;
        param_1 = param_1 + 1;
      }
      *param_1 = (byte)uVar8;
      param_1 = param_1 + 1;
    } while (piVar6 < piVar1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar7 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar7;
  }
  return param_1;
}

// GetClassData @ 14c22d4a0

ClassData * __thiscall ItemRepairInfo::GetClassData(ItemRepairInfo *this)

{
  return (ClassData *)&ItemRepairInfo_class_data_;
}

// PlacementNew_ @ 14c22d4c0

void * __cdecl ItemRepairInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ItemRepairInfo__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(Arena **)((longlong)param_2 + 0x18) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(Arena **)((longlong)param_2 + 0x30) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x38) = 0;
  *(undefined4 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c22d500

void * __thiscall ItemRepairInfo::_scalar_deleting_destructor_(ItemRepairInfo *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ItemRepairInfo__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  Impl_::~Impl_(&this->_impl_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// MergeImpl @ 14c22d560

void __cdecl ItemBuy::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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

// Clear @ 14c22d5b0

void __thiscall ItemBuy::Clear(ItemBuy *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 3) != 0) {
    (this->_impl_).shop_list_id_ = 0;
    (this->_impl_).item_quantity_ = 0;
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

// ByteSizeLong @ 14c22d5e0

ulong64 __thiscall ItemBuy::ByteSizeLong(ItemBuy *this)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  __uint64 _Var5;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  uVar3 = 0;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (iVar2 = (this->_impl_).shop_list_id_, iVar2 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (this->_impl_).item_quantity_, iVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
      uVar3 = uVar3 + uVar4;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar3,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c22d650

uchar * __thiscall
ItemBuy::_InternalSerialize(ItemBuy *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar1 = (this->_impl_).shop_list_id_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar1,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (iVar1 = (this->_impl_).item_quantity_, iVar1 != 0)) {
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

// GetClassData @ 14c22d6e0

ClassData * __thiscall ItemBuy::GetClassData(ItemBuy *this)

{
  return (ClassData *)&ItemBuy_class_data_;
}

// PlacementNew_ @ 14c22d700

void * __cdecl ItemBuy::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ItemBuy__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c22d730

void * __thiscall ItemBuy::_scalar_deleting_destructor_(ItemBuy *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ItemBuy__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// ItemBuy @ 14c22d780

ItemBuy * __thiscall ItemBuy::ItemBuy(ItemBuy *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ItemBuy__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).shop_list_id_ = 0;
  (this->_impl_).item_quantity_ = 0;
  return this;
}

// ItemBuy @ 14c22d7b0

ItemBuy * __thiscall ItemBuy::ItemBuy(ItemBuy *this,Arena *param_1,ItemBuy *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ItemBuy__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).shop_list_id_ = (param_2->_impl_).shop_list_id_;
  (this->_impl_).item_quantity_ = (param_2->_impl_).item_quantity_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// ItemRepairInfo @ 14c22d810

ItemRepairInfo * __thiscall ItemRepairInfo::ItemRepairInfo(ItemRepairInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ItemRepairInfo__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).material_item_id_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->_impl_).material_item_id_.soo_rep_.field0_0x0 + 8) = 0;
  (this->_impl_)._material_item_id_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).material_item_quantity_.soo_rep_.field0_0x0.long_rep.elements_int =
       (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->_impl_).material_item_quantity_.soo_rep_.field0_0x0 + 8) = 0;
  (this->_impl_)._material_item_quantity_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).item_uid_ = 0;
  return this;
}

// ItemRepairInfo @ 14c22d850

ItemRepairInfo * __thiscall
ItemRepairInfo::ItemRepairInfo(ItemRepairInfo *this,Arena *param_1,ItemRepairInfo *param_2)

{
  InternalVisibility local_res8;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ItemRepairInfo__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<int>::RepeatedField<int>
            (&(this->_impl_).material_item_id_,local_res8,param_1,
             &(param_2->_impl_).material_item_id_);
  (this->_impl_)._material_item_id_cached_byte_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<int>::RepeatedField<int>
            (&(this->_impl_).material_item_quantity_,local_res8,param_1,
             &(param_2->_impl_).material_item_quantity_);
  (this->_impl_)._material_item_quantity_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).item_uid_ = (param_2->_impl_).item_uid_;
  return this;
}

// MountLostInfo @ 14c22d900

MountLostInfo * __thiscall MountLostInfo::MountLostInfo(MountLostInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MountLostInfo__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).item_id_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->_impl_).item_id_.soo_rep_.field0_0x0 + 8) = 0;
  (this->_impl_)._item_id_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).quantity_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->_impl_).quantity_.soo_rep_.field0_0x0 + 8) = 0;
  (this->_impl_)._quantity_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).quantity_trade_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->_impl_).quantity_trade_.soo_rep_.field0_0x0 + 8) = 0;
  (this->_impl_)._quantity_trade_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).list_id_ = 0;
  (this->_impl_).record_time_ = 0;
  (this->_impl_).end_time_ = 0;
  return this;
}

// MountLostInfo @ 14c22d950

MountLostInfo * __thiscall
MountLostInfo::MountLostInfo(MountLostInfo *this,Arena *param_1,MountLostInfo *param_2)

{
  ulong64 uVar1;
  InternalVisibility local_res8;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MountLostInfo__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<int>::RepeatedField<int>
            (&(this->_impl_).item_id_,local_res8,param_1,&(param_2->_impl_).item_id_);
  (this->_impl_)._item_id_cached_byte_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<int>::RepeatedField<int>
            (&(this->_impl_).quantity_,local_res8,param_1,&(param_2->_impl_).quantity_);
  (this->_impl_)._quantity_cached_byte_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<int>::RepeatedField<int>
            (&(this->_impl_).quantity_trade_,local_res8,param_1,&(param_2->_impl_).quantity_trade_);
  (this->_impl_)._quantity_trade_cached_byte_size_.atom_ = (atomic<int>)0x0;
  uVar1 = (param_2->_impl_).record_time_;
  (this->_impl_).list_id_ = (param_2->_impl_).list_id_;
  (this->_impl_).record_time_ = uVar1;
  (this->_impl_).end_time_ = (param_2->_impl_).end_time_;
  return this;
}

// ~Impl_ @ 14c22da30

void __thiscall ItemRepairInfo::Impl_::~Impl_(Impl_ *this)

{
  ulonglong uVar1;
  
  uVar1 = (this->material_item_quantity_).soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)
                      (this->material_item_quantity_).soo_rep_.field0_0x0.long_rep.capacity * 4 + 8)
    ;
  }
  uVar1 = (this->material_item_id_).soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)(this->material_item_id_).soo_rep_.field0_0x0.long_rep.capacity * 4
                      + 8);
    return;
  }
  return;
}

// ~Impl_ @ 14c22daa0

void __thiscall MountLostInfo::Impl_::~Impl_(Impl_ *this)

{
  ulonglong uVar1;
  
  uVar1 = (this->quantity_trade_).soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)(this->quantity_trade_).soo_rep_.field0_0x0.long_rep.capacity * 4 +
                      8);
  }
  uVar1 = (this->quantity_).soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)(this->quantity_).soo_rep_.field0_0x0.long_rep.capacity * 4 + 8);
  }
  uVar1 = (this->item_id_).soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)(this->item_id_).soo_rep_.field0_0x0.long_rep.capacity * 4 + 8);
    return;
  }
  return;
}

// ~ItemBuy @ 14c22db40

void __thiscall ItemBuy::~ItemBuy(ItemBuy *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7ItemBuy__6B_;
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

// ~ItemRepairInfo @ 14c22db60

void __thiscall ItemRepairInfo::~ItemRepairInfo(ItemRepairInfo *this)

{
  this->_padding_ = (longlong)&___7ItemRepairInfo__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  Impl_::~Impl_(&this->_impl_);
  return;
}

// ~MountLostInfo @ 14c22dba0

void __thiscall MountLostInfo::~MountLostInfo(MountLostInfo *this)

{
  this->_padding_ = (longlong)&___7MountLostInfo__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  Impl_::~Impl_(&this->_impl_);
  return;
}

// CopyFrom @ 14c22dbe0

void __thiscall ItemBuy::CopyFrom(ItemBuy *this,ItemBuy *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 3) != 0) {
      if (((uVar1 & 1) != 0) && (iVar2 = (param_1->_impl_).shop_list_id_, iVar2 != 0)) {
        (this->_impl_).shop_list_id_ = iVar2;
      }
      if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).item_quantity_, iVar2 != 0)) {
        (this->_impl_).item_quantity_ = iVar2;
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

// CopyFrom @ 14c22dc50

void __thiscall ItemRepairInfo::CopyFrom(ItemRepairInfo *this,ItemRepairInfo *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 != this) {
    Clear(this);
    google::protobuf::RepeatedField<int>::MergeFrom
              (&(this->_impl_).material_item_id_,&(param_1->_impl_).material_item_id_);
    google::protobuf::RepeatedField<int>::MergeFrom
              (&(this->_impl_).material_item_quantity_,&(param_1->_impl_).material_item_quantity_);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar1 & 1) != 0) && (lVar2 = (param_1->_impl_).item_uid_, lVar2 != 0)) {
      (this->_impl_).item_uid_ = lVar2;
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

// CopyFrom @ 14c22dcd0

void __thiscall MountLostInfo::CopyFrom(MountLostInfo *this,MountLostInfo *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulong64 uVar3;
  
  if (param_1 != this) {
    Clear(this);
    google::protobuf::RepeatedField<int>::MergeFrom
              (&(this->_impl_).item_id_,&(param_1->_impl_).item_id_);
    google::protobuf::RepeatedField<int>::MergeFrom
              (&(this->_impl_).quantity_,&(param_1->_impl_).quantity_);
    google::protobuf::RepeatedField<int>::MergeFrom
              (&(this->_impl_).quantity_trade_,&(param_1->_impl_).quantity_trade_);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 7) != 0) {
      if (((uVar1 & 1) != 0) && (lVar2 = (param_1->_impl_).list_id_, lVar2 != 0)) {
        (this->_impl_).list_id_ = lVar2;
      }
      if (((uVar1 & 2) != 0) && (uVar3 = (param_1->_impl_).record_time_, uVar3 != 0)) {
        (this->_impl_).record_time_ = uVar3;
      }
      if (((uVar1 & 4) != 0) && (uVar3 = (param_1->_impl_).end_time_, uVar3 != 0)) {
        (this->_impl_).end_time_ = uVar3;
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

// GetMetadata @ 14c22dd80

Metadata * __thiscall ItemBuy::GetMetadata(ItemBuy *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&ItemBuy_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c22ddc0

Metadata * __thiscall
ItemRepairInfo::GetMetadata(ItemRepairInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&ItemRepairInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c22de00

Metadata * __thiscall
MountLostInfo::GetMetadata(MountLostInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&MountLostInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c22de40

void __thiscall ItemBuy::InternalSwap(ItemBuy *this,ItemBuy *param_1)

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
            (&(this->_impl_).shop_list_id_,this + 1,&(param_1->_impl_).shop_list_id_);
  return;
}

// InternalSwap @ 14c22de80

void __thiscall ItemRepairInfo::InternalSwap(ItemRepairInfo *this,ItemRepairInfo *param_1)

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
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).material_item_id_,(char *)&(param_1->_impl_).material_item_id_)
  ;
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).material_item_quantity_,
             (char *)&(param_1->_impl_).material_item_quantity_);
  lVar3 = (this->_impl_).item_uid_;
  (this->_impl_).item_uid_ = (param_1->_impl_).item_uid_;
  (param_1->_impl_).item_uid_ = lVar3;
  return;
}

// InternalSwap @ 14c22def0

void __thiscall MountLostInfo::InternalSwap(MountLostInfo *this,MountLostInfo *param_1)

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
            ((char *)&(this->_impl_).item_id_,(char *)&(param_1->_impl_).item_id_);
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).quantity_,(char *)&(param_1->_impl_).quantity_);
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).quantity_trade_,(char *)&(param_1->_impl_).quantity_trade_);
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).list_id_,this + 1,&(param_1->_impl_).list_id_);
  return;
}

// `dynamic_atexit_destructor_for_'_ItemBuy_default_instance_'' @ 150443ba0

void __cdecl _dynamic_atexit_destructor_for___ItemBuy_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ItemRepairInfo_default_instance_'' @ 150443bb0

void __cdecl _dynamic_atexit_destructor_for___ItemRepairInfo_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_MountLostInfo_default_instance_'' @ 150443bc0

void __cdecl _dynamic_atexit_destructor_for___MountLostInfo_default_instance___(void)

{
  return;
}


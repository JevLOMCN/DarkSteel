// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// `dynamic_initializer_for_'_SqlItemEquipmentTable_default_instance_'' @ 14129b800

void __cdecl ds_game::_dynamic_initializer_for___SqlItemEquipmentTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlItemEquipmentTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129b820

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fgame_2fsql_5fitem_5fequipment_5ftable_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c24f550

void __cdecl ds_game::SqlItemEquipmentTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  google::protobuf::RepeatedField<int>::MergeFrom
            ((RepeatedField<int> *)&param_1[1]._internal_metadata_,
             (RepeatedField<int> *)&param_2[1]._internal_metadata_);
  google::protobuf::RepeatedField<int>::MergeFrom
            ((RepeatedField<int> *)(param_1 + 3),(RepeatedField<int> *)(param_2 + 3));
  uVar2 = (uint)param_2[1]._padding_;
  if ((char)uVar2 != '\0') {
    if (((uVar2 & 1) != 0) && (lVar4 = param_2[4]._internal_metadata_.ptr_, lVar4 != 0)) {
      param_1[4]._internal_metadata_.ptr_ = lVar4;
    }
    if (((uVar2 & 2) != 0) && (param_2[5]._padding_ != 0)) {
      param_1[5]._padding_ = param_2[5]._padding_;
    }
    if (((uVar2 & 4) != 0) && (iVar3 = (int)param_2[5]._internal_metadata_.ptr_, iVar3 != 0)) {
      *(int *)&param_1[5]._internal_metadata_.ptr_ = iVar3;
    }
    if (((uVar2 & 8) != 0) &&
       (iVar3 = *(int *)((longlong)&param_2[5]._internal_metadata_.ptr_ + 4), iVar3 != 0)) {
      *(int *)((longlong)&param_1[5]._internal_metadata_.ptr_ + 4) = iVar3;
    }
    if (((uVar2 & 0x10) != 0) && (iVar3 = (int)param_2[6]._padding_, iVar3 != 0)) {
      *(int *)&param_1[6]._padding_ = iVar3;
    }
    if (((uVar2 & 0x20) != 0) && (iVar3 = *(int *)((longlong)&param_2[6]._padding_ + 4), iVar3 != 0)
       ) {
      *(int *)((longlong)&param_1[6]._padding_ + 4) = iVar3;
    }
    if (((uVar2 & 0x40) != 0) && (cVar1 = (char)param_2[6]._internal_metadata_.ptr_, cVar1 != '\0'))
    {
      *(char *)&param_1[6]._internal_metadata_.ptr_ = cVar1;
    }
    if (((char)uVar2 < '\0') &&
       (cVar1 = *(char *)((longlong)&param_2[6]._internal_metadata_.ptr_ + 1), cVar1 != '\0')) {
      *(char *)((longlong)&param_1[6]._internal_metadata_.ptr_ + 1) = cVar1;
    }
  }
  if ((uVar2 & 0x3f00) != 0) {
    if (((uVar2 >> 8 & 1) != 0) &&
       (iVar3 = *(int *)((longlong)&param_2[6]._internal_metadata_.ptr_ + 4), iVar3 != 0)) {
      *(int *)((longlong)&param_1[6]._internal_metadata_.ptr_ + 4) = iVar3;
    }
    if (((uVar2 >> 9 & 1) != 0) && (iVar3 = (int)param_2[7]._padding_, iVar3 != 0)) {
      *(int *)&param_1[7]._padding_ = iVar3;
    }
    if (((uVar2 >> 10 & 1) != 0) &&
       (iVar3 = *(int *)((longlong)&param_2[7]._padding_ + 4), iVar3 != 0)) {
      *(int *)((longlong)&param_1[7]._padding_ + 4) = iVar3;
    }
    if (((uVar2 >> 0xb & 1) != 0) && (iVar3 = (int)param_2[7]._internal_metadata_.ptr_, iVar3 != 0))
    {
      *(int *)&param_1[7]._internal_metadata_.ptr_ = iVar3;
    }
    if (((uVar2 >> 0xc & 1) != 0) &&
       (iVar3 = *(int *)((longlong)&param_2[7]._internal_metadata_.ptr_ + 4), iVar3 != 0)) {
      *(int *)((longlong)&param_1[7]._internal_metadata_.ptr_ + 4) = iVar3;
    }
    if (((uVar2 >> 0xd & 1) != 0) && (iVar3 = (int)param_2[8]._padding_, iVar3 != 0)) {
      *(int *)&param_1[8]._padding_ = iVar3;
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

// Clear @ 14c24f6a0

void __thiscall ds_game::SqlItemEquipmentTable::Clear(SqlItemEquipmentTable *this)

{
  ulonglong uVar1;
  ulong64 uVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar1 = (this->_impl_).item_gem_socket_tid_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar1 & 4) == 0) {
    (this->_impl_).item_gem_socket_tid_.soo_rep_.field0_0x0.long_rep.elements_int =
         uVar1 & 0xfffffffffffffff8;
  }
  else {
    (this->_impl_).item_gem_socket_tid_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  uVar1 = (this->_impl_).gem_tid_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar1 & 4) == 0) {
    (this->_impl_).gem_tid_.soo_rep_.field0_0x0.long_rep.elements_int = uVar1 & 0xfffffffffffffff8;
  }
  else {
    (this->_impl_).gem_tid_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((char)uVar3 != '\0') {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).item_uid_ = 0;
    (this->_impl_).item_id_ = 0;
    (this->_impl_).inventory_type_ = 0;
    (this->_impl_).ascend_ = 0;
    (this->_impl_).level_ = 0;
    (this->_impl_).is_trade_ = false;
    (this->_impl_).is_lock_ = false;
  }
  if ((uVar3 & 0x3f00) != 0) {
    (this->_impl_).exp_ = 0;
    (this->_impl_).prefix_ = 0;
    (this->_impl_).passive_skill_id_ = 0;
    (this->_impl_).set_effect_tid_ = 0;
    (this->_impl_).fusion_ = 0;
    (this->_impl_).durability_ = 0;
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

// ByteSizeLong @ 14c24f710

ulong64 __thiscall ds_game::SqlItemEquipmentTable::ByteSizeLong(SqlItemEquipmentTable *this)

{
  uint uVar1;
  longlong lVar2;
  __uint64 _Var3;
  __uint64 _Var4;
  ulong64 uVar5;
  ulonglong uVar6;
  int iVar7;
  
  _Var3 = google::protobuf::internal::WireFormatLite::Int32SizeWithPackedTagSize
                    (&(this->_impl_).item_gem_socket_tid_,1,
                     &(this->_impl_)._item_gem_socket_tid_cached_byte_size_);
  _Var4 = google::protobuf::internal::WireFormatLite::Int32SizeWithPackedTagSize
                    (&(this->_impl_).gem_tid_,1,&(this->_impl_)._gem_tid_cached_byte_size_);
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var3 = _Var3 + _Var4;
  if ((char)uVar1 != '\0') {
    if (((uVar1 & 1) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 & 2) != 0) && (lVar2 = (this->_impl_).item_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 & 4) != 0) && (iVar7 = (this->_impl_).item_id_, iVar7 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar7);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 & 8) != 0) && (iVar7 = (this->_impl_).inventory_type_, iVar7 != 0)) {
      uVar6 = (longlong)iVar7 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar7 = 0x3f - (int)lVar2;
      }
      else {
        iVar7 = (int)LZCOUNT(uVar6);
      }
      _Var3 = _Var3 + 1 + (ulonglong)(iVar7 * -9 + 0x280U >> 6);
    }
    if (((uVar1 & 0x10) != 0) && (iVar7 = (this->_impl_).ascend_, iVar7 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar7);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 & 0x20) != 0) && (iVar7 = (this->_impl_).level_, iVar7 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar7);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 & 0x40) != 0) && ((this->_impl_).is_trade_ != false)) {
      _Var3 = _Var3 + 2;
    }
    if (((char)uVar1 < '\0') && ((this->_impl_).is_lock_ != false)) {
      _Var3 = _Var3 + 2;
    }
  }
  if ((uVar1 & 0x3f00) != 0) {
    if (((uVar1 >> 8 & 1) != 0) && (iVar7 = (this->_impl_).exp_, iVar7 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar7);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 >> 9 & 1) != 0) && (iVar7 = (this->_impl_).prefix_, iVar7 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar7);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 >> 10 & 1) != 0) && (iVar7 = (this->_impl_).passive_skill_id_, iVar7 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar7);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 >> 0xb & 1) != 0) && (iVar7 = (this->_impl_).set_effect_tid_, iVar7 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar7);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 >> 0xc & 1) != 0) && (iVar7 = (this->_impl_).fusion_, iVar7 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar7);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 >> 0xd & 1) != 0) && (iVar7 = (this->_impl_).durability_, iVar7 != 0)) {
      uVar6 = (longlong)iVar7 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar7 = 0x3f - (int)lVar2;
      }
      else {
        iVar7 = (int)LZCOUNT(uVar6);
      }
      _Var3 = _Var3 + 2 + (ulonglong)(iVar7 * -9 + 0x280U >> 6);
    }
  }
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var3,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c24f920

uchar * __thiscall
ds_game::SqlItemEquipmentTable::_InternalSerialize
          (SqlItemEquipmentTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  uchar *puVar7;
  byte bVar8;
  byte *pbVar9;
  atomic<int> aVar10;
  uint uVar11;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar4 = (this->_impl_).player_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar4,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar4 = (this->_impl_).item_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar4,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar3 = (this->_impl_).item_id_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) && ((this->_impl_).inventory_type_ != 0))
  {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar5 = (ulonglong)(this->_impl_).inventory_type_;
    *param_1 = 0x20;
    while( true ) {
      param_1 = param_1 + 1;
      bVar8 = (byte)uVar5;
      if (uVar5 < 0x80) break;
      uVar5 = uVar5 >> 7;
      *param_1 = bVar8 | 0x80;
    }
    *param_1 = bVar8;
    param_1 = param_1 + 1;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x40) != 0) && ((this->_impl_).is_trade_ != false))
  {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar2 = (this->_impl_).is_trade_;
    *param_1 = 0x28;
    param_1[1] = bVar2 != false;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (iVar3 = (this->_impl_).ascend_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<6>
                        (param_2,iVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (iVar3 = (this->_impl_).level_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<7>
                        (param_2,iVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x100) != 0) &&
     (iVar3 = (this->_impl_).exp_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<8>
                        (param_2,iVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x80) != 0) && ((this->_impl_).is_lock_ != false))
  {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar2 = (this->_impl_).is_lock_;
    *param_1 = 0x48;
    param_1[1] = bVar2 != false;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x200) != 0) &&
     (iVar3 = (this->_impl_).prefix_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<10>
                        (param_2,iVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x400) != 0) &&
     (iVar3 = (this->_impl_).passive_skill_id_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<11>
                        (param_2,iVar3,param_1);
  }
  aVar10 = (this->_impl_)._item_gem_socket_tid_cached_byte_size_.atom_;
  if (0 < (int)aVar10) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    *param_1 = 0x62;
    while( true ) {
      pbVar9 = param_1 + 1;
      bVar8 = aVar10._0_1_;
      if ((uint)aVar10 < 0x80) break;
      aVar10 = (atomic<int>)((uint)aVar10 >> 7);
      *pbVar9 = bVar8 | 0x80;
      param_1 = pbVar9;
    }
    *pbVar9 = bVar8;
    param_1 = param_1 + 2;
    uVar5 = (this->_impl_).item_gem_socket_tid_.soo_rep_.field0_0x0.long_rep.elements_int;
    piVar6 = (int *)(uVar5 & 0xfffffffffffffff8);
    if ((uVar5 & 4) == 0) {
      uVar11 = (uint)uVar5 & 3;
      piVar6 = &(this->_impl_).item_gem_socket_tid_.soo_rep_.field0_0x0.long_rep.size;
    }
    else {
      uVar11 = (this->_impl_).item_gem_socket_tid_.soo_rep_.field0_0x0.long_rep.size;
    }
    piVar1 = piVar6 + (int)uVar11;
    do {
      if (param_2->end_ <= param_1) {
        param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
      }
      iVar3 = *piVar6;
      piVar6 = piVar6 + 1;
      for (uVar5 = (ulonglong)iVar3; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
        *param_1 = (byte)uVar5 | 0x80;
        param_1 = param_1 + 1;
      }
      *param_1 = (byte)uVar5;
      param_1 = param_1 + 1;
    } while (piVar6 < piVar1);
  }
  aVar10 = (this->_impl_)._gem_tid_cached_byte_size_.atom_;
  if (0 < (int)aVar10) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    *param_1 = 0x6a;
    while( true ) {
      param_1 = param_1 + 1;
      bVar8 = aVar10._0_1_;
      if ((uint)aVar10 < 0x80) break;
      aVar10 = (atomic<int>)((uint)aVar10 >> 7);
      *param_1 = bVar8 | 0x80;
    }
    *param_1 = bVar8;
    param_1 = param_1 + 1;
    uVar5 = (this->_impl_).gem_tid_.soo_rep_.field0_0x0.long_rep.elements_int;
    piVar6 = (int *)(uVar5 & 0xfffffffffffffff8);
    if ((uVar5 & 4) == 0) {
      uVar11 = (uint)uVar5 & 3;
      piVar6 = &(this->_impl_).gem_tid_.soo_rep_.field0_0x0.long_rep.size;
    }
    else {
      uVar11 = (this->_impl_).gem_tid_.soo_rep_.field0_0x0.long_rep.size;
    }
    piVar1 = piVar6 + (int)uVar11;
    do {
      if (param_2->end_ <= param_1) {
        param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
      }
      iVar3 = *piVar6;
      piVar6 = piVar6 + 1;
      for (uVar5 = (ulonglong)iVar3; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
        *param_1 = (byte)uVar5 | 0x80;
        param_1 = param_1 + 1;
      }
      *param_1 = (byte)uVar5;
      param_1 = param_1 + 1;
    } while (piVar6 < piVar1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x800) != 0) &&
     (iVar3 = (this->_impl_).set_effect_tid_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<14>
                        (param_2,iVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x1000) != 0) &&
     (iVar3 = (this->_impl_).fusion_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<15>
                        (param_2,iVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x2000) != 0) && ((this->_impl_).durability_ != 0))
  {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar5 = (ulonglong)(this->_impl_).durability_;
    uVar11 = 0x80;
    do {
      pbVar9 = param_1;
      bVar8 = (byte)uVar11;
      uVar11 = uVar11 >> 7;
      *pbVar9 = bVar8 | 0x80;
      param_1 = pbVar9 + 1;
    } while (0x7f < uVar11);
    pbVar9[1] = (byte)uVar11;
    pbVar9 = pbVar9 + 2;
    for (; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
      *pbVar9 = (byte)uVar5 | 0x80;
      pbVar9 = pbVar9 + 1;
    }
    *pbVar9 = (byte)uVar5;
    param_1 = pbVar9 + 1;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar7 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar7;
  }
  return param_1;
}

// GetClassData @ 14c24fd70

ClassData * __thiscall ds_game::SqlItemEquipmentTable::GetClassData(SqlItemEquipmentTable *this)

{
  return (ClassData *)&SqlItemEquipmentTable_class_data_;
}

// PlacementNew_ @ 14c24fd90

void * __cdecl
ds_game::SqlItemEquipmentTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlItemEquipmentTable_ds_game__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(Arena **)((longlong)param_2 + 0x18) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(Arena **)((longlong)param_2 + 0x30) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x38) = 0;
  *(undefined4 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined4 *)((longlong)param_2 + 0x80) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c24fde0

void * __thiscall
ds_game::SqlItemEquipmentTable::_scalar_deleting_destructor_
          (SqlItemEquipmentTable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SqlItemEquipmentTable_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  Impl_::~Impl_(&this->_impl_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// SqlItemEquipmentTable @ 14c24fe40

SqlItemEquipmentTable * __thiscall
ds_game::SqlItemEquipmentTable::SqlItemEquipmentTable(SqlItemEquipmentTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlItemEquipmentTable_ds_game__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).item_gem_socket_tid_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->_impl_).item_gem_socket_tid_.soo_rep_.field0_0x0 + 8) = 0;
  (this->_impl_)._item_gem_socket_tid_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).gem_tid_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->_impl_).gem_tid_.soo_rep_.field0_0x0 + 8) = 0;
  (this->_impl_)._gem_tid_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).item_uid_ = 0;
  (this->_impl_).item_id_ = 0;
  (this->_impl_).inventory_type_ = 0;
  (this->_impl_).ascend_ = 0;
  (this->_impl_).level_ = 0;
  (this->_impl_).is_trade_ = false;
  (this->_impl_).is_lock_ = false;
  *(undefined2 *)&(this->_impl_).field_0x5a = 0;
  (this->_impl_).exp_ = 0;
  (this->_impl_).prefix_ = 0;
  (this->_impl_).passive_skill_id_ = 0;
  (this->_impl_).set_effect_tid_ = 0;
  (this->_impl_).fusion_ = 0;
  (this->_impl_).durability_ = 0;
  return this;
}

// SqlItemEquipmentTable @ 14c24fe90

SqlItemEquipmentTable * __thiscall
ds_game::SqlItemEquipmentTable::SqlItemEquipmentTable
          (SqlItemEquipmentTable *this,Arena *param_1,SqlItemEquipmentTable *param_2)

{
  long64 lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined2 uVar6;
  InternalVisibility local_res8;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlItemEquipmentTable_ds_game__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<int>::RepeatedField<int>
            (&(this->_impl_).item_gem_socket_tid_,local_res8,param_1,
             &(param_2->_impl_).item_gem_socket_tid_);
  (this->_impl_)._item_gem_socket_tid_cached_byte_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<int>::RepeatedField<int>
            (&(this->_impl_).gem_tid_,local_res8,param_1,&(param_2->_impl_).gem_tid_);
  (this->_impl_)._gem_tid_cached_byte_size_.atom_ = (atomic<int>)0x0;
  lVar1 = (param_2->_impl_).item_uid_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).item_uid_ = lVar1;
  iVar2 = (param_2->_impl_).inventory_type_;
  iVar3 = (param_2->_impl_).ascend_;
  iVar4 = (param_2->_impl_).level_;
  (this->_impl_).item_id_ = (param_2->_impl_).item_id_;
  (this->_impl_).inventory_type_ = iVar2;
  (this->_impl_).ascend_ = iVar3;
  (this->_impl_).level_ = iVar4;
  bVar5 = (param_2->_impl_).is_lock_;
  uVar6 = *(undefined2 *)&(param_2->_impl_).field_0x5a;
  iVar2 = (param_2->_impl_).exp_;
  iVar3 = (param_2->_impl_).prefix_;
  iVar4 = (param_2->_impl_).passive_skill_id_;
  (this->_impl_).is_trade_ = (param_2->_impl_).is_trade_;
  (this->_impl_).is_lock_ = bVar5;
  *(undefined2 *)&(this->_impl_).field_0x5a = uVar6;
  (this->_impl_).exp_ = iVar2;
  (this->_impl_).prefix_ = iVar3;
  (this->_impl_).passive_skill_id_ = iVar4;
  iVar2 = (param_2->_impl_).fusion_;
  (this->_impl_).set_effect_tid_ = (param_2->_impl_).set_effect_tid_;
  (this->_impl_).fusion_ = iVar2;
  (this->_impl_).durability_ = (param_2->_impl_).durability_;
  return this;
}

// ~Impl_ @ 14c24ff60

void __thiscall ds_game::SqlItemEquipmentTable::Impl_::~Impl_(Impl_ *this)

{
  ulonglong uVar1;
  
  uVar1 = (this->gem_tid_).soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)(this->gem_tid_).soo_rep_.field0_0x0.long_rep.capacity * 4 + 8);
  }
  uVar1 = (this->item_gem_socket_tid_).soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)(this->item_gem_socket_tid_).soo_rep_.field0_0x0.long_rep.capacity *
                      4 + 8);
    return;
  }
  return;
}

// ~SqlItemEquipmentTable @ 14c24ffd0

void __thiscall ds_game::SqlItemEquipmentTable::~SqlItemEquipmentTable(SqlItemEquipmentTable *this)

{
  this->_padding_ = (longlong)&___7SqlItemEquipmentTable_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  Impl_::~Impl_(&this->_impl_);
  return;
}

// CopyFrom @ 14c250010

void __thiscall
ds_game::SqlItemEquipmentTable::CopyFrom(SqlItemEquipmentTable *this,SqlItemEquipmentTable *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c250050

Metadata * __thiscall
ds_game::SqlItemEquipmentTable::GetMetadata
          (SqlItemEquipmentTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SqlItemEquipmentTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c250090

void __thiscall
ds_game::SqlItemEquipmentTable::InternalSwap
          (SqlItemEquipmentTable *this,SqlItemEquipmentTable *param_1)

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
            ((char *)&(this->_impl_).item_gem_socket_tid_,
             (char *)&(param_1->_impl_).item_gem_socket_tid_);
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).gem_tid_,(char *)&(param_1->_impl_).gem_tid_);
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).player_uid_,&(this->_impl_).field_0x74,&(param_1->_impl_).player_uid_);
  return;
}

// `dynamic_atexit_destructor_for_'_SqlItemEquipmentTable_default_instance_'' @ 150444340

void __cdecl
ds_game::_dynamic_atexit_destructor_for___SqlItemEquipmentTable_default_instance___(void)

{
  return;
}


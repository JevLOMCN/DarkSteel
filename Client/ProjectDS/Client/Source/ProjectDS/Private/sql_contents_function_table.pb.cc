// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// `dynamic_initializer_for_'_SqlContentsFunctionTable_default_instance_'' @ 14129b030

void __cdecl
ds_config::_dynamic_initializer_for___SqlContentsFunctionTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlContentsFunctionTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129b050

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fconfig_2fsql_5fcontents_5ffunction_5ftable_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c244460

void __cdecl
ds_config::SqlContentsFunctionTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  
  google::protobuf::RepeatedField<int>::MergeFrom
            ((RepeatedField<int> *)&param_1[1]._internal_metadata_,
             (RepeatedField<int> *)&param_2[1]._internal_metadata_);
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0xf) != 0) {
    if (((uVar1 & 1) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[2]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[2]._internal_metadata_.ptr_ + 4) = iVar2;
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (int)param_2[3]._padding_, iVar2 != 0)) {
      *(int *)&param_1[3]._padding_ = iVar2;
    }
    if (((uVar1 & 4) != 0) && (iVar2 = *(int *)((longlong)&param_2[3]._padding_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[3]._padding_ + 4) = iVar2;
    }
    if (((uVar1 & 8) != 0) && (iVar2 = (int)param_2[3]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[3]._internal_metadata_.ptr_ = iVar2;
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

// Clear @ 14c2444f0

void __thiscall ds_config::SqlContentsFunctionTable::Clear(SqlContentsFunctionTable *this)

{
  ulonglong uVar1;
  ulong64 uVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar1 = (this->_impl_).function_lock_value_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar1 & 4) == 0) {
    (this->_impl_).function_lock_value_.soo_rep_.field0_0x0.long_rep.elements_int =
         uVar1 & 0xfffffffffffffff8;
  }
  else {
    (this->_impl_).function_lock_value_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0xf) != 0) {
    (this->_impl_).index_ = 0;
    (this->_impl_).control_target_ = 0;
    (this->_impl_).control_target_value_ = 0;
    (this->_impl_).function_lock_type_ = 0;
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

// ByteSizeLong @ 14c244530

ulong64 __thiscall ds_config::SqlContentsFunctionTable::ByteSizeLong(SqlContentsFunctionTable *this)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  __uint64 _Var4;
  ulong64 uVar5;
  ulonglong uVar6;
  
  _Var4 = google::protobuf::internal::WireFormatLite::Int32SizeWithPackedTagSize
                    (&(this->_impl_).function_lock_value_,1,
                     &(this->_impl_)._function_lock_value_cached_byte_size_);
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 0xf) != 0) {
    if (((uVar1 & 1) != 0) && (iVar3 = (this->_impl_).index_, iVar3 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::EnumSize(iVar3);
      _Var4 = _Var4 + uVar5 + 1;
    }
    if (((uVar1 & 2) != 0) && (iVar3 = (this->_impl_).control_target_, iVar3 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::EnumSize(iVar3);
      _Var4 = _Var4 + uVar5 + 1;
    }
    if (((uVar1 & 4) != 0) && (iVar3 = (this->_impl_).control_target_value_, iVar3 != 0)) {
      uVar6 = (longlong)iVar3 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 0x3f - (int)lVar2;
      }
      else {
        iVar3 = (int)LZCOUNT(uVar6);
      }
      _Var4 = _Var4 + (iVar3 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 8) != 0) && (iVar3 = (this->_impl_).function_lock_type_, iVar3 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::EnumSize(iVar3);
      _Var4 = _Var4 + uVar5 + 1;
    }
  }
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c244610

uchar * __thiscall
ds_config::SqlContentsFunctionTable::_InternalSerialize
          (SqlContentsFunctionTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  int *piVar5;
  uchar *puVar6;
  byte bVar7;
  atomic<int> aVar8;
  uint uVar9;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).index_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (ulonglong)(this->_impl_).index_;
    *param_1 = 8;
    while( true ) {
      param_1 = param_1 + 1;
      bVar7 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_1 = bVar7 | 0x80;
    }
    *param_1 = bVar7;
    param_1 = param_1 + 1;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) && ((this->_impl_).control_target_ != 0))
  {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (ulonglong)(this->_impl_).control_target_;
    *param_1 = 0x10;
    while( true ) {
      pbVar3 = param_1 + 1;
      bVar7 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *pbVar3 = bVar7 | 0x80;
      param_1 = pbVar3;
    }
    *pbVar3 = bVar7;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar2 = (this->_impl_).control_target_value_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     ((this->_impl_).function_lock_type_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (ulonglong)(this->_impl_).function_lock_type_;
    *param_1 = 0x20;
    while( true ) {
      param_1 = param_1 + 1;
      bVar7 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *param_1 = bVar7 | 0x80;
    }
    *param_1 = bVar7;
    param_1 = param_1 + 1;
  }
  aVar8 = (this->_impl_)._function_lock_value_cached_byte_size_.atom_;
  if (0 < (int)aVar8) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    *param_1 = 0x2a;
    while( true ) {
      param_1 = param_1 + 1;
      bVar7 = aVar8._0_1_;
      if ((uint)aVar8 < 0x80) break;
      aVar8 = (atomic<int>)((uint)aVar8 >> 7);
      *param_1 = bVar7 | 0x80;
    }
    *param_1 = bVar7;
    param_1 = param_1 + 1;
    uVar4 = (this->_impl_).function_lock_value_.soo_rep_.field0_0x0.long_rep.elements_int;
    piVar5 = (int *)(uVar4 & 0xfffffffffffffff8);
    if ((uVar4 & 4) == 0) {
      uVar9 = (uint)uVar4 & 3;
      piVar5 = &(this->_impl_).function_lock_value_.soo_rep_.field0_0x0.long_rep.size;
    }
    else {
      uVar9 = (this->_impl_).function_lock_value_.soo_rep_.field0_0x0.long_rep.size;
    }
    piVar1 = piVar5 + (int)uVar9;
    do {
      if (param_2->end_ <= param_1) {
        param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
      }
      iVar2 = *piVar5;
      piVar5 = piVar5 + 1;
      for (uVar4 = (ulonglong)iVar2; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
        *param_1 = (byte)uVar4 | 0x80;
        param_1 = param_1 + 1;
      }
      *param_1 = (byte)uVar4;
      param_1 = param_1 + 1;
    } while (piVar5 < piVar1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar6 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar6;
  }
  return param_1;
}

// GetClassData @ 14c244850

ClassData * __thiscall
ds_config::SqlContentsFunctionTable::GetClassData(SqlContentsFunctionTable *this)

{
  return (ClassData *)&SqlContentsFunctionTable_class_data_;
}

// PlacementNew_ @ 14c244870

void * __cdecl
ds_config::SqlContentsFunctionTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlContentsFunctionTable_ds_config__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(Arena **)((longlong)param_2 + 0x18) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c2448b0

void * __thiscall
ds_config::SqlContentsFunctionTable::_scalar_deleting_destructor_
          (SqlContentsFunctionTable *this,uint param_1)

{
  ulonglong uVar1;
  
  this->_padding_ = (longlong)&___7SqlContentsFunctionTable_ds_config__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  uVar1 = (this->_impl_).function_lock_value_.soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)
                      (this->_impl_).function_lock_value_.soo_rep_.field0_0x0.long_rep.capacity * 4
                      + 8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// SqlContentsFunctionTable @ 14c244930

SqlContentsFunctionTable * __thiscall
ds_config::SqlContentsFunctionTable::SqlContentsFunctionTable
          (SqlContentsFunctionTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlContentsFunctionTable_ds_config__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).function_lock_value_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->_impl_).function_lock_value_.soo_rep_.field0_0x0 + 8) = 0;
  (this->_impl_)._function_lock_value_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).index_ = 0;
  (this->_impl_).control_target_ = 0;
  (this->_impl_).control_target_value_ = 0;
  (this->_impl_).function_lock_type_ = 0;
  return this;
}

// SqlContentsFunctionTable @ 14c244970

SqlContentsFunctionTable * __thiscall
ds_config::SqlContentsFunctionTable::SqlContentsFunctionTable
          (SqlContentsFunctionTable *this,Arena *param_1,SqlContentsFunctionTable *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  InternalVisibility local_res8;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlContentsFunctionTable_ds_config__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<int>::RepeatedField<int>
            (&(this->_impl_).function_lock_value_,local_res8,param_1,
             &(param_2->_impl_).function_lock_value_);
  (this->_impl_)._function_lock_value_cached_byte_size_.atom_ = (atomic<int>)0x0;
  iVar1 = (param_2->_impl_).control_target_;
  iVar2 = (param_2->_impl_).control_target_value_;
  iVar3 = (param_2->_impl_).function_lock_type_;
  (this->_impl_).index_ = (param_2->_impl_).index_;
  (this->_impl_).control_target_ = iVar1;
  (this->_impl_).control_target_value_ = iVar2;
  (this->_impl_).function_lock_type_ = iVar3;
  return this;
}

// ~SqlContentsFunctionTable @ 14c244a00

void __thiscall
ds_config::SqlContentsFunctionTable::~SqlContentsFunctionTable(SqlContentsFunctionTable *this)

{
  ulonglong uVar1;
  
  this->_padding_ = (longlong)&___7SqlContentsFunctionTable_ds_config__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  uVar1 = (this->_impl_).function_lock_value_.soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)
                      (this->_impl_).function_lock_value_.soo_rep_.field0_0x0.long_rep.capacity * 4
                      + 8);
    return;
  }
  return;
}

// CopyFrom @ 14c244a60

void __thiscall
ds_config::SqlContentsFunctionTable::CopyFrom
          (SqlContentsFunctionTable *this,SqlContentsFunctionTable *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != this) {
    Clear(this);
    google::protobuf::RepeatedField<int>::MergeFrom
              (&(this->_impl_).function_lock_value_,&(param_1->_impl_).function_lock_value_);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 0xf) != 0) {
      if (((uVar1 & 1) != 0) && (iVar2 = (param_1->_impl_).index_, iVar2 != 0)) {
        (this->_impl_).index_ = iVar2;
      }
      if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).control_target_, iVar2 != 0)) {
        (this->_impl_).control_target_ = iVar2;
      }
      if (((uVar1 & 4) != 0) && (iVar2 = (param_1->_impl_).control_target_value_, iVar2 != 0)) {
        (this->_impl_).control_target_value_ = iVar2;
      }
      if (((uVar1 & 8) != 0) && (iVar2 = (param_1->_impl_).function_lock_type_, iVar2 != 0)) {
        (this->_impl_).function_lock_type_ = iVar2;
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

// GetMetadata @ 14c244b00

Metadata * __thiscall
ds_config::SqlContentsFunctionTable::GetMetadata
          (SqlContentsFunctionTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&SqlContentsFunctionTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c244b40

void __thiscall
ds_config::SqlContentsFunctionTable::InternalSwap
          (SqlContentsFunctionTable *this,SqlContentsFunctionTable *param_1)

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
            ((char *)&(this->_impl_).function_lock_value_,
             (char *)&(param_1->_impl_).function_lock_value_);
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).index_,(char *)&(param_1->_impl_).index_);
  return;
}

// `dynamic_atexit_destructor_for_'_SqlContentsFunctionTable_default_instance_'' @ 1504441b0

void __cdecl
ds_config::_dynamic_atexit_destructor_for___SqlContentsFunctionTable_default_instance___(void)

{
  return;
}


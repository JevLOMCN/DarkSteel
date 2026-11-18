// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// `dynamic_initializer_for_'_SqlZoneWeatherTable_default_instance_'' @ 14129c7a0

void __cdecl ds_world::_dynamic_initializer_for___SqlZoneWeatherTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlZoneWeatherTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129c7c0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fworld_2fsql_5fzone_5fweather_5ftable_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c264ad0

void __cdecl ds_world::SqlZoneWeatherTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  
  google::protobuf::RepeatedField<int>::MergeFrom
            ((RepeatedField<int> *)&param_1[1]._internal_metadata_,
             (RepeatedField<int> *)&param_2[1]._internal_metadata_);
  google::protobuf::RepeatedField<int>::MergeFrom
            ((RepeatedField<int> *)(param_1 + 3),(RepeatedField<int> *)(param_2 + 3));
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 7) != 0) {
    if (((uVar1 & 1) != 0) && (iVar2 = *(int *)((longlong)&param_2[4]._padding_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[4]._padding_ + 4) = iVar2;
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (int)param_2[4]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[4]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 & 4) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[4]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[4]._internal_metadata_.ptr_ + 4) = iVar2;
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

// Clear @ 14c264b60

void __thiscall ds_world::SqlZoneWeatherTable::Clear(SqlZoneWeatherTable *this)

{
  ulonglong uVar1;
  ulong64 uVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar1 = (this->_impl_).today_weather_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar1 & 4) == 0) {
    (this->_impl_).today_weather_.soo_rep_.field0_0x0.long_rep.elements_int =
         uVar1 & 0xfffffffffffffff8;
  }
  else {
    (this->_impl_).today_weather_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  uVar1 = (this->_impl_).tomorrow_weather_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar1 & 4) == 0) {
    (this->_impl_).tomorrow_weather_.soo_rep_.field0_0x0.long_rep.elements_int =
         uVar1 & 0xfffffffffffffff8;
  }
  else {
    (this->_impl_).tomorrow_weather_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 7) != 0) {
    (this->_impl_).zone_id_ = 0;
    (this->_impl_).today_weather_probability_ = 0;
    (this->_impl_).tomorrow_weather_probability_ = 0;
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

// ByteSizeLong @ 14c264bc0

ulong64 __thiscall ds_world::SqlZoneWeatherTable::ByteSizeLong(SqlZoneWeatherTable *this)

{
  uint uVar1;
  int iVar2;
  __uint64 _Var3;
  __uint64 _Var4;
  ulong64 uVar5;
  
  _Var3 = google::protobuf::internal::WireFormatLite::Int32SizeWithPackedTagSize
                    (&(this->_impl_).today_weather_,1,
                     &(this->_impl_)._today_weather_cached_byte_size_);
  _Var4 = google::protobuf::internal::WireFormatLite::Int32SizeWithPackedTagSize
                    (&(this->_impl_).tomorrow_weather_,1,
                     &(this->_impl_)._tomorrow_weather_cached_byte_size_);
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var3 = _Var3 + _Var4;
  if ((uVar1 & 7) != 0) {
    if (((uVar1 & 1) != 0) && (iVar2 = (this->_impl_).zone_id_, iVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (this->_impl_).today_weather_probability_, iVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
      _Var3 = _Var3 + uVar5;
    }
    if (((uVar1 & 4) != 0) && (iVar2 = (this->_impl_).tomorrow_weather_probability_, iVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
      _Var3 = _Var3 + uVar5;
    }
  }
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var3,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c264c70

uchar * __thiscall
ds_world::SqlZoneWeatherTable::_InternalSerialize
          (SqlZoneWeatherTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  int *piVar5;
  uchar *puVar6;
  ulonglong uVar7;
  atomic<int> aVar8;
  uint uVar9;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar2 = (this->_impl_).zone_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (iVar2 = (this->_impl_).today_weather_probability_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar2,param_1);
  }
  aVar8 = (this->_impl_)._today_weather_cached_byte_size_.atom_;
  if (0 < (int)aVar8) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    *param_1 = 0x1a;
    while( true ) {
      pbVar3 = param_1 + 1;
      bVar4 = aVar8._0_1_;
      if ((uint)aVar8 < 0x80) break;
      aVar8 = (atomic<int>)((uint)aVar8 >> 7);
      *pbVar3 = bVar4 | 0x80;
      param_1 = pbVar3;
    }
    *pbVar3 = bVar4;
    param_1 = param_1 + 2;
    uVar7 = (this->_impl_).today_weather_.soo_rep_.field0_0x0.long_rep.elements_int;
    piVar5 = (int *)(uVar7 & 0xfffffffffffffff8);
    if ((uVar7 & 4) == 0) {
      uVar9 = (uint)uVar7 & 3;
      piVar5 = &(this->_impl_).today_weather_.soo_rep_.field0_0x0.long_rep.size;
    }
    else {
      uVar9 = (this->_impl_).today_weather_.soo_rep_.field0_0x0.long_rep.size;
    }
    piVar1 = piVar5 + (int)uVar9;
    do {
      if (param_2->end_ <= param_1) {
        param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
      }
      iVar2 = *piVar5;
      piVar5 = piVar5 + 1;
      for (uVar7 = (ulonglong)iVar2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
        *param_1 = (byte)uVar7 | 0x80;
        param_1 = param_1 + 1;
      }
      *param_1 = (byte)uVar7;
      param_1 = param_1 + 1;
    } while (piVar5 < piVar1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar2 = (this->_impl_).tomorrow_weather_probability_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar2,param_1);
  }
  aVar8 = (this->_impl_)._tomorrow_weather_cached_byte_size_.atom_;
  if (0 < (int)aVar8) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    *param_1 = 0x2a;
    while( true ) {
      param_1 = param_1 + 1;
      bVar4 = aVar8._0_1_;
      if ((uint)aVar8 < 0x80) break;
      aVar8 = (atomic<int>)((uint)aVar8 >> 7);
      *param_1 = bVar4 | 0x80;
    }
    *param_1 = bVar4;
    param_1 = param_1 + 1;
    uVar7 = (this->_impl_).tomorrow_weather_.soo_rep_.field0_0x0.long_rep.elements_int;
    piVar5 = (int *)(uVar7 & 0xfffffffffffffff8);
    if ((uVar7 & 4) == 0) {
      uVar9 = (uint)uVar7 & 3;
      piVar5 = &(this->_impl_).tomorrow_weather_.soo_rep_.field0_0x0.long_rep.size;
    }
    else {
      uVar9 = (this->_impl_).tomorrow_weather_.soo_rep_.field0_0x0.long_rep.size;
    }
    piVar1 = piVar5 + (int)uVar9;
    do {
      if (param_2->end_ <= param_1) {
        param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
      }
      iVar2 = *piVar5;
      piVar5 = piVar5 + 1;
      for (uVar7 = (ulonglong)iVar2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
        *param_1 = (byte)uVar7 | 0x80;
        param_1 = param_1 + 1;
      }
      *param_1 = (byte)uVar7;
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

// GetClassData @ 14c264eb0

ClassData * __thiscall ds_world::SqlZoneWeatherTable::GetClassData(SqlZoneWeatherTable *this)

{
  return (ClassData *)&SqlZoneWeatherTable_class_data_;
}

// PlacementNew_ @ 14c264ed0

void * __cdecl
ds_world::SqlZoneWeatherTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlZoneWeatherTable_ds_world__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(Arena **)((longlong)param_2 + 0x18) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(Arena **)((longlong)param_2 + 0x30) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x38) = 0;
  *(undefined4 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c264f10

void * __thiscall
ds_world::SqlZoneWeatherTable::_scalar_deleting_destructor_(SqlZoneWeatherTable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SqlZoneWeatherTable_ds_world__6B_;
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

// SqlZoneWeatherTable @ 14c264f70

SqlZoneWeatherTable * __thiscall
ds_world::SqlZoneWeatherTable::SqlZoneWeatherTable(SqlZoneWeatherTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlZoneWeatherTable_ds_world__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).today_weather_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->_impl_).today_weather_.soo_rep_.field0_0x0 + 8) = 0;
  (this->_impl_)._today_weather_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).tomorrow_weather_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->_impl_).tomorrow_weather_.soo_rep_.field0_0x0 + 8) = 0;
  (this->_impl_)._tomorrow_weather_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).zone_id_ = 0;
  (this->_impl_).today_weather_probability_ = 0;
  (this->_impl_).tomorrow_weather_probability_ = 0;
  return this;
}

// SqlZoneWeatherTable @ 14c264fb0

SqlZoneWeatherTable * __thiscall
ds_world::SqlZoneWeatherTable::SqlZoneWeatherTable
          (SqlZoneWeatherTable *this,Arena *param_1,SqlZoneWeatherTable *param_2)

{
  int iVar1;
  InternalVisibility local_res8;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlZoneWeatherTable_ds_world__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<int>::RepeatedField<int>
            (&(this->_impl_).today_weather_,local_res8,param_1,&(param_2->_impl_).today_weather_);
  (this->_impl_)._today_weather_cached_byte_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<int>::RepeatedField<int>
            (&(this->_impl_).tomorrow_weather_,local_res8,param_1,
             &(param_2->_impl_).tomorrow_weather_);
  (this->_impl_)._tomorrow_weather_cached_byte_size_.atom_ = (atomic<int>)0x0;
  iVar1 = (param_2->_impl_).today_weather_probability_;
  (this->_impl_).zone_id_ = (param_2->_impl_).zone_id_;
  (this->_impl_).today_weather_probability_ = iVar1;
  (this->_impl_).tomorrow_weather_probability_ = (param_2->_impl_).tomorrow_weather_probability_;
  return this;
}

// ~Impl_ @ 14c265060

void __thiscall ds_world::SqlZoneWeatherTable::Impl_::~Impl_(Impl_ *this)

{
  ulonglong uVar1;
  
  uVar1 = (this->tomorrow_weather_).soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)(this->tomorrow_weather_).soo_rep_.field0_0x0.long_rep.capacity * 4
                      + 8);
  }
  uVar1 = (this->today_weather_).soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)(this->today_weather_).soo_rep_.field0_0x0.long_rep.capacity * 4 + 8
                     );
    return;
  }
  return;
}

// ~SqlZoneWeatherTable @ 14c2650d0

void __thiscall ds_world::SqlZoneWeatherTable::~SqlZoneWeatherTable(SqlZoneWeatherTable *this)

{
  this->_padding_ = (longlong)&___7SqlZoneWeatherTable_ds_world__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  Impl_::~Impl_(&this->_impl_);
  return;
}

// CopyFrom @ 14c265110

void __thiscall
ds_world::SqlZoneWeatherTable::CopyFrom(SqlZoneWeatherTable *this,SqlZoneWeatherTable *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != this) {
    Clear(this);
    google::protobuf::RepeatedField<int>::MergeFrom
              (&(this->_impl_).today_weather_,&(param_1->_impl_).today_weather_);
    google::protobuf::RepeatedField<int>::MergeFrom
              (&(this->_impl_).tomorrow_weather_,&(param_1->_impl_).tomorrow_weather_);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 7) != 0) {
      if (((uVar1 & 1) != 0) && (iVar2 = (param_1->_impl_).zone_id_, iVar2 != 0)) {
        (this->_impl_).zone_id_ = iVar2;
      }
      if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).today_weather_probability_, iVar2 != 0))
      {
        (this->_impl_).today_weather_probability_ = iVar2;
      }
      if (((uVar1 & 4) != 0) &&
         (iVar2 = (param_1->_impl_).tomorrow_weather_probability_, iVar2 != 0)) {
        (this->_impl_).tomorrow_weather_probability_ = iVar2;
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

// GetMetadata @ 14c2651b0

Metadata * __thiscall
ds_world::SqlZoneWeatherTable::GetMetadata
          (SqlZoneWeatherTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SqlZoneWeatherTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c2651f0

void __thiscall
ds_world::SqlZoneWeatherTable::InternalSwap(SqlZoneWeatherTable *this,SqlZoneWeatherTable *param_1)

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
            ((char *)&(this->_impl_).today_weather_,(char *)&(param_1->_impl_).today_weather_);
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).tomorrow_weather_,(char *)&(param_1->_impl_).tomorrow_weather_)
  ;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).zone_id_,this + 1,&(param_1->_impl_).zone_id_);
  return;
}

// `dynamic_atexit_destructor_for_'_SqlZoneWeatherTable_default_instance_'' @ 150444660

void __cdecl
ds_world::_dynamic_atexit_destructor_for___SqlZoneWeatherTable_default_instance___(void)

{
  return;
}


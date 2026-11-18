// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 36

// `dynamic_initializer_for_'_DbBuffAddEventSourceSkill_default_instance_'' @ 141299660

void __cdecl _dynamic_initializer_for___DbBuffAddEventSourceSkill_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___DbBuffAddEventSourceSkill_default_instance___);
  return;
}

// `dynamic_initializer_for_'_DbBuffInfo_default_instance_'' @ 141299680

void __cdecl _dynamic_initializer_for___DbBuffInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___DbBuffInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 1412996a0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_structs_5fbuff_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c228ac0

void __cdecl DbBuffAddEventSourceSkill::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 3) != 0) {
    if (((uVar2 & 1) != 0) && (iVar3 = (int)param_2[1]._internal_metadata_.ptr_, iVar3 != 0)) {
      *(int *)&param_1[1]._internal_metadata_.ptr_ = iVar3;
    }
    if (((uVar2 & 2) != 0) &&
       (cVar1 = *(char *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4), cVar1 != '\0')) {
      *(char *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4) = cVar1;
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

// Clear @ 14c228b10

void __thiscall DbBuffAddEventSourceSkill::Clear(DbBuffAddEventSourceSkill *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 3) != 0) {
    (this->_impl_).skill_id_ = 0;
    (this->_impl_).is_de_buff_immune_ = false;
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

// ByteSizeLong @ 14c228b40

ulong64 __thiscall DbBuffAddEventSourceSkill::ByteSizeLong(DbBuffAddEventSourceSkill *this)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  __uint64 _Var5;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var5 = 0;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (iVar3 = (this->_impl_).skill_id_, iVar3 != 0)) {
      uVar4 = (longlong)iVar3 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 0x3f - (int)lVar2;
      }
      else {
        iVar3 = (int)LZCOUNT(uVar4);
      }
      _Var5 = (__uint64)(iVar3 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 2) != 0) && ((this->_impl_).is_de_buff_immune_ != false)) {
      _Var5 = _Var5 + 2;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c228bb0

uchar * __thiscall
DbBuffAddEventSourceSkill::_InternalSerialize
          (DbBuffAddEventSourceSkill *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  bool bVar1;
  int iVar2;
  uchar *puVar3;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar2 = (this->_impl_).skill_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     ((this->_impl_).is_de_buff_immune_ != false)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar1 = (this->_impl_).is_de_buff_immune_;
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

// GetClassData @ 14c228c50

ClassData * __thiscall DbBuffAddEventSourceSkill::GetClassData(DbBuffAddEventSourceSkill *this)

{
  return (ClassData *)&DbBuffAddEventSourceSkill_class_data_;
}

// PlacementNew_ @ 14c228c70

void * __cdecl DbBuffAddEventSourceSkill::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7DbBuffAddEventSourceSkill__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c228ca0

void * __thiscall
DbBuffAddEventSourceSkill::_scalar_deleting_destructor_
          (DbBuffAddEventSourceSkill *this,uint param_1)

{
  this->_padding_ = (longlong)&___7DbBuffAddEventSourceSkill__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c228cf0

void __cdecl DbBuffInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  InternalMetadata *this;
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  DbBuffAddEventSourceSkill *pDVar6;
  void *pvVar7;
  Arena *pAVar8;
  
  this = &param_1->_internal_metadata_;
  pAVar8 = (Arena *)(this->ptr_ & 0xfffffffffffffffe);
  if ((this->ptr_ & 1) != 0) {
    pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
  }
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 0xf) != 0) {
    if (((uVar2 & 1) != 0) && (lVar5 = param_2[1]._internal_metadata_.ptr_, lVar5 != 0)) {
      param_1[1]._internal_metadata_.ptr_ = lVar5;
    }
    if (((uVar2 & 2) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
    }
    if (((uVar2 & 4) != 0) && (lVar5 = param_2[2]._internal_metadata_.ptr_, lVar5 != 0)) {
      param_1[2]._internal_metadata_.ptr_ = lVar5;
    }
    if (((uVar2 & 8) != 0) && (cVar1 = (char)param_2[3]._padding_, cVar1 != '\0')) {
      *(char *)&param_1[3]._padding_ = cVar1;
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar2;
  iVar3 = (int)param_2[4]._padding_;
  if (iVar3 != 0) {
    iVar4 = (int)param_1[4]._padding_;
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        clear_event_source_type((DbBuffInfo *)param_1);
      }
      *(int *)&param_1[4]._padding_ = iVar3;
    }
    if (iVar3 == 5) {
      pDVar6 = (DbBuffAddEventSourceSkill *)param_2[3]._internal_metadata_.ptr_;
      if (iVar4 == 5) {
        DbBuffAddEventSourceSkill::MergeFrom
                  ((DbBuffAddEventSourceSkill *)param_1[3]._internal_metadata_.ptr_,pDVar6);
      }
      else {
        pvVar7 = google::protobuf::Arena::CopyConstruct<DbBuffAddEventSourceSkill>(pAVar8,pDVar6);
        param_1[3]._internal_metadata_.ptr_ = (long64)pvVar7;
      }
    }
    else if (iVar3 == 7) {
      *(int *)&param_1[3]._internal_metadata_.ptr_ = (int)param_2[3]._internal_metadata_.ptr_;
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

// Clear @ 14c228e10

void __thiscall DbBuffInfo::Clear(DbBuffInfo *this)

{
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0xf) != 0) {
    (this->_impl_).trigger_entity_ = 0;
    (this->_impl_).start_time_ = 0;
    (this->_impl_).end_time_ = 0;
    (this->_impl_).is_force_remove_ = false;
  }
  clear_event_source_type(this);
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c228e60

ulong64 __thiscall DbBuffInfo::ByteSizeLong(DbBuffInfo *this)

{
  DbBuffAddEventSourceSkill *this_00;
  longlong lVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  __uint64 _Var5;
  int iVar6;
  uint uVar7;
  
  uVar7 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var5 = 0;
  uVar2 = _Var5;
  if ((uVar7 & 0xf) != 0) {
    if (((uVar7 & 1) != 0) && (uVar3 = (this->_impl_).trigger_entity_, uVar2 = 0, uVar3 != 0)) {
      uVar2 = google::protobuf::internal::WireFormatLite::UInt64SizePlusOne(uVar3);
    }
    if (((uVar7 & 2) != 0) && (uVar3 = (this->_impl_).start_time_, uVar3 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::UInt64SizePlusOne(uVar3);
      uVar2 = uVar2 + uVar3;
    }
    if (((uVar7 & 4) != 0) && (uVar3 = (this->_impl_).end_time_, uVar3 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::UInt64SizePlusOne(uVar3);
      uVar2 = uVar2 + uVar3;
    }
    if (((uVar7 & 8) != 0) && ((this->_impl_).is_force_remove_ != false)) {
      uVar2 = uVar2 + 2;
    }
  }
  uVar7 = (this->_impl_)._oneof_case_[0];
  if (uVar7 == 5) {
    this_00 = (this->_impl_).event_source_type_.skill_;
    uVar7 = (this_00->_impl_)._has_bits_.has_bits_[0];
    if ((uVar7 & 3) != 0) {
      if (((uVar7 & 1) != 0) && (iVar6 = (this_00->_impl_).skill_id_, iVar6 != 0)) {
        uVar4 = (longlong)iVar6 | 1;
        if (__isa_available < 5) {
          lVar1 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar6 = 0x3f - (int)lVar1;
        }
        else {
          iVar6 = (int)LZCOUNT(uVar4);
        }
        _Var5 = (__uint64)(iVar6 * -9 + 0x2c0U >> 6);
      }
      if (((uVar7 & 2) != 0) && ((this_00->_impl_).is_de_buff_immune_ != false)) {
        _Var5 = _Var5 + 2;
      }
    }
    _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                      ((Message *)this_00,_Var5,&(this_00->_impl_)._cached_size_);
    uVar7 = (uint)_Var5 | 1;
    if (__isa_available < 5) {
      iVar6 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 0x1f - iVar6;
    }
    else {
      iVar6 = LZCOUNT(uVar7);
    }
    uVar4 = (iVar6 * -9 + 0x160U >> 6) + _Var5;
  }
  else {
    if (uVar7 != 7) goto LAB_14c228fc2;
    uVar4 = (longlong)(this->_impl_).event_source_type_.source_type_ | 1;
    if (__isa_available < 5) {
      lVar1 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 0x3f - (int)lVar1;
    }
    else {
      iVar6 = (int)LZCOUNT(uVar4);
    }
    uVar4 = (ulonglong)(iVar6 * -9 + 0x280U >> 6);
  }
  uVar2 = uVar2 + 1 + uVar4;
LAB_14c228fc2:
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar2,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c228ff0

uchar * __thiscall
DbBuffInfo::_InternalSerialize(DbBuffInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uchar *puVar5;
  byte bVar6;
  ulonglong uVar7;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).trigger_entity_ != 0))
  {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar7 = (this->_impl_).trigger_entity_;
    *param_1 = 8;
    while( true ) {
      pbVar3 = param_1 + 1;
      bVar6 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *pbVar3 = bVar6 | 0x80;
      param_1 = pbVar3;
    }
    *pbVar3 = bVar6;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) && ((this->_impl_).start_time_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar7 = (this->_impl_).start_time_;
    *param_1 = 0x10;
    while( true ) {
      pbVar3 = param_1 + 1;
      bVar6 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *pbVar3 = bVar6 | 0x80;
      param_1 = pbVar3;
    }
    *pbVar3 = bVar6;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) && ((this->_impl_).end_time_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar7 = (this->_impl_).end_time_;
    *param_1 = 0x18;
    while( true ) {
      pbVar3 = param_1 + 1;
      bVar6 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *pbVar3 = bVar6 | 0x80;
      param_1 = pbVar3;
    }
    *pbVar3 = bVar6;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     ((this->_impl_).is_force_remove_ != false)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar1 = (this->_impl_).is_force_remove_;
    *param_1 = 0x20;
    param_1[1] = bVar1 != false;
    param_1 = param_1 + 2;
  }
  uVar2 = (this->_impl_)._oneof_case_[0];
  if (uVar2 == 5) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (5,(MessageLite *)(this->_impl_).event_source_type_.skill_,
                         (int)(((this->_impl_).event_source_type_.skill_)->_impl_)._cached_size_.
                              atom_,param_1,param_2);
  }
  else if (uVar2 == 7) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    if ((this->_impl_)._oneof_case_[0] == 7) {
      iVar4 = (this->_impl_).event_source_type_.source_type_;
    }
    else {
      iVar4 = 0;
    }
    *param_1 = 0x38;
    uVar7 = (ulonglong)iVar4;
    while( true ) {
      param_1 = param_1 + 1;
      bVar6 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *param_1 = bVar6 | 0x80;
    }
    *param_1 = bVar6;
    param_1 = param_1 + 1;
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar5;
}

// GetClassData @ 14c2291e0

ClassData * __thiscall DbBuffInfo::GetClassData(DbBuffInfo *this)

{
  return (ClassData *)&DbBuffInfo_class_data_;
}

// PlacementNew_ @ 14c229200

void * __cdecl DbBuffInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7DbBuffInfo__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined1 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c229230

void * __thiscall DbBuffInfo::_scalar_deleting_destructor_(DbBuffInfo *this,uint param_1)

{
  ~DbBuffInfo(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// CopyConstruct<DbBuffAddEventSourceSkill> @ 14c229270

void * __cdecl
google::protobuf::Arena::CopyConstruct<DbBuffAddEventSourceSkill>(Arena *param_1,void *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (Arena *)0x0) {
    puVar1 = ::operator_new(0x20);
  }
  else {
    puVar1 = Allocate(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &___7DbBuffAddEventSourceSkill__6B_;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)param_2 + 0x18);
  *(undefined1 *)((longlong)puVar1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
  if ((*(byte *)((longlong)param_2 + 8) & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(puVar1 + 1),
               (UnknownFieldSet *)((*(ulonglong *)((longlong)param_2 + 8) & 0xfffffffffffffffe) + 8)
              );
  }
  return puVar1;
}

// GetOwnedMessage<DbBuffAddEventSourceSkill> @ 14c229300

DbBuffAddEventSourceSkill * __cdecl
google::protobuf::internal::GetOwnedMessage<DbBuffAddEventSourceSkill>
          (Arena *param_1,DbBuffAddEventSourceSkill *param_2,Arena *param_3)

{
  DbBuffAddEventSourceSkill *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (DbBuffAddEventSourceSkill *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (DbBuffAddEventSourceSkill *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// DbBuffAddEventSourceSkill @ 14c229310

DbBuffAddEventSourceSkill * __thiscall
DbBuffAddEventSourceSkill::DbBuffAddEventSourceSkill(DbBuffAddEventSourceSkill *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7DbBuffAddEventSourceSkill__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).skill_id_ = 0;
  (this->_impl_).is_de_buff_immune_ = false;
  return this;
}

// DbBuffAddEventSourceSkill @ 14c229340

DbBuffAddEventSourceSkill * __thiscall
DbBuffAddEventSourceSkill::DbBuffAddEventSourceSkill
          (DbBuffAddEventSourceSkill *this,Arena *param_1,DbBuffAddEventSourceSkill *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7DbBuffAddEventSourceSkill__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).skill_id_ = (param_2->_impl_).skill_id_;
  (this->_impl_).is_de_buff_immune_ = (param_2->_impl_).is_de_buff_immune_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// DbBuffInfo @ 14c2293a0

DbBuffInfo * __thiscall DbBuffInfo::DbBuffInfo(DbBuffInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7DbBuffInfo__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = 0;
  (this->_impl_).trigger_entity_ = 0;
  (this->_impl_).start_time_ = 0;
  (this->_impl_).end_time_ = 0;
  (this->_impl_).is_force_remove_ = false;
  return this;
}

// DbBuffInfo @ 14c2293d0

DbBuffInfo * __thiscall DbBuffInfo::DbBuffInfo(DbBuffInfo *this,Arena *param_1,DbBuffInfo *param_2)

{
  uint uVar1;
  ulong64 uVar2;
  DbBuffAddEventSourceSkill *pDVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7DbBuffInfo__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = (param_2->_impl_)._oneof_case_[0];
  uVar2 = (param_2->_impl_).start_time_;
  (this->_impl_).trigger_entity_ = (param_2->_impl_).trigger_entity_;
  (this->_impl_).start_time_ = uVar2;
  (this->_impl_).end_time_ = (param_2->_impl_).end_time_;
  (this->_impl_).is_force_remove_ = (param_2->_impl_).is_force_remove_;
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 == 5) {
    pDVar3 = google::protobuf::Arena::CopyConstruct<DbBuffAddEventSourceSkill>
                       (param_1,(param_2->_impl_).event_source_type_.skill_);
    (this->_impl_).event_source_type_.skill_ = pDVar3;
  }
  else if (uVar1 == 7) {
    (this->_impl_).event_source_type_.source_type_ =
         (param_2->_impl_).event_source_type_.source_type_;
    return this;
  }
  return this;
}

// ~DbBuffAddEventSourceSkill @ 14c229490

void __thiscall
DbBuffAddEventSourceSkill::~DbBuffAddEventSourceSkill(DbBuffAddEventSourceSkill *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7DbBuffAddEventSourceSkill__6B_;
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

// ~DbBuffInfo @ 14c2294b0

void __thiscall DbBuffInfo::~DbBuffInfo(DbBuffInfo *this)

{
  uint uVar1;
  DbBuffAddEventSourceSkill *pDVar2;
  undefined8 *puVar3;
  
  this->_padding_ = (longlong)&___7DbBuffInfo__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 != 0) {
    if (uVar1 == 5) {
      puVar3 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
      if ((this->_padding_ & 1) != 0) {
        puVar3 = (undefined8 *)*puVar3;
      }
      if ((puVar3 == (undefined8 *)0x0) &&
         (pDVar2 = (this->_impl_).event_source_type_.skill_,
         pDVar2 != (DbBuffAddEventSourceSkill *)0x0)) {
        pDVar2->_padding_ = (longlong)&___7DbBuffAddEventSourceSkill__6B_;
        if ((pDVar2->_padding_ & 1) != 0) {
          google::protobuf::internal::InternalMetadata::
          DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
                    ((InternalMetadata *)&pDVar2->_padding_);
        }
        ::operator_delete(pDVar2,0x20);
      }
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// CopyFrom @ 14c229540

void __thiscall
DbBuffAddEventSourceSkill::CopyFrom
          (DbBuffAddEventSourceSkill *this,DbBuffAddEventSourceSkill *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != this) {
    Clear(this);
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar2 & 3) != 0) {
      if (((uVar2 & 1) != 0) && (iVar3 = (param_1->_impl_).skill_id_, iVar3 != 0)) {
        (this->_impl_).skill_id_ = iVar3;
      }
      if (((uVar2 & 2) != 0) && (bVar1 = (param_1->_impl_).is_de_buff_immune_, bVar1 != false)) {
        (this->_impl_).is_de_buff_immune_ = bVar1;
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

// CopyFrom @ 14c2295b0

void __thiscall DbBuffInfo::CopyFrom(DbBuffInfo *this,DbBuffInfo *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c2295f0

Metadata * __thiscall
DbBuffAddEventSourceSkill::GetMetadata
          (DbBuffAddEventSourceSkill *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&DbBuffAddEventSourceSkill_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c229630

Metadata * __thiscall DbBuffInfo::GetMetadata(DbBuffInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&DbBuffInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c229670

void __thiscall
DbBuffAddEventSourceSkill::InternalSwap
          (DbBuffAddEventSourceSkill *this,DbBuffAddEventSourceSkill *param_1)

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
            (&(this->_impl_).skill_id_,&(this->_impl_).field_0xd,&(param_1->_impl_).skill_id_);
  return;
}

// InternalSwap @ 14c2296b0

void __thiscall DbBuffInfo::InternalSwap(DbBuffInfo *this,DbBuffInfo *param_1)

{
  uint uVar1;
  longlong lVar2;
  EventSourceTypeUnion EVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).trigger_entity_,&(this->_impl_).field_0x21,
             &(param_1->_impl_).trigger_entity_);
  EVar3 = (this->_impl_).event_source_type_;
  (this->_impl_).event_source_type_ = (param_1->_impl_).event_source_type_;
  (param_1->_impl_).event_source_type_ = EVar3;
  uVar1 = (this->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = (param_1->_impl_)._oneof_case_[0];
  (param_1->_impl_)._oneof_case_[0] = uVar1;
  return;
}

// MergeFrom @ 14c229720

void __thiscall
DbBuffAddEventSourceSkill::MergeFrom
          (DbBuffAddEventSourceSkill *this,DbBuffAddEventSourceSkill *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
  if ((uVar2 & 3) != 0) {
    if (((uVar2 & 1) != 0) && (iVar3 = (param_1->_impl_).skill_id_, iVar3 != 0)) {
      (this->_impl_).skill_id_ = iVar3;
    }
    if (((uVar2 & 2) != 0) && (bVar1 = (param_1->_impl_).is_de_buff_immune_, bVar1 != false)) {
      (this->_impl_).is_de_buff_immune_ = bVar1;
    }
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

// clear_event_source_type @ 14c229770

void __thiscall DbBuffInfo::clear_event_source_type(DbBuffInfo *this)

{
  DbBuffAddEventSourceSkill *pDVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 5) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == (undefined8 *)0x0) {
      pDVar1 = (this->_impl_).event_source_type_.skill_;
      if (pDVar1 != (DbBuffAddEventSourceSkill *)0x0) {
        pDVar1->_padding_ = (longlong)&___7DbBuffAddEventSourceSkill__6B_;
        if ((pDVar1->_padding_ & 1) != 0) {
          google::protobuf::internal::InternalMetadata::
          DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
                    ((InternalMetadata *)&pDVar1->_padding_);
        }
        ::operator_delete(pDVar1,0x20);
        (this->_impl_)._oneof_case_[0] = 0;
        return;
      }
      (this->_impl_)._oneof_case_[0] = 0;
      return;
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// set_allocated_skill @ 14c229810

void __thiscall DbBuffInfo::set_allocated_skill(DbBuffInfo *this,DbBuffAddEventSourceSkill *param_1)

{
  DbBuffAddEventSourceSkill *pDVar1;
  Arena *pAVar2;
  byte bVar3;
  Arena *pAVar4;
  
  pAVar2 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar3 = (byte)this->_padding_ & 1;
  pAVar4 = pAVar2;
  if (bVar3 != 0) {
    pAVar4 = (Arena *)(pAVar2->impl_).tag_and_id_;
  }
  if ((this->_impl_)._oneof_case_[0] == 5) {
    if (bVar3 != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if ((pAVar2 == (Arena *)0x0) &&
       (pDVar1 = (this->_impl_).event_source_type_.skill_,
       pDVar1 != (DbBuffAddEventSourceSkill *)0x0)) {
      pDVar1->_padding_ = (longlong)&___7DbBuffAddEventSourceSkill__6B_;
      if ((pDVar1->_padding_ & 1) != 0) {
        google::protobuf::internal::InternalMetadata::
        DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
                  ((InternalMetadata *)&pDVar1->_padding_);
      }
      ::operator_delete(pDVar1,0x20);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (DbBuffAddEventSourceSkill *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar4 != pAVar2) {
      param_1 = (DbBuffAddEventSourceSkill *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar4,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 5;
    (this->_impl_).event_source_type_.skill_ = param_1;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_DbBuffAddEventSourceSkill_default_instance_'' @ 150443b10

void __cdecl _dynamic_atexit_destructor_for___DbBuffAddEventSourceSkill_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_DbBuffInfo_default_instance_'' @ 150443b20

void __cdecl _dynamic_atexit_destructor_for___DbBuffInfo_default_instance___(void)

{
  return;
}


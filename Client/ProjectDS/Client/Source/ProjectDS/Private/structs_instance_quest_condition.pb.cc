// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 54

// `dynamic_initializer_for_'_InstanceQuestCondition_default_instance_'' @ 1412997b0

void __cdecl ds_proto::_dynamic_initializer_for___InstanceQuestCondition_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___InstanceQuestCondition_default_instance___);
  return;
}

// `dynamic_initializer_for_'_NpcSpawn_default_instance_'' @ 1412997d0

void __cdecl ds_proto::_dynamic_initializer_for___NpcSpawn_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___NpcSpawn_default_instance___);
  return;
}

// `dynamic_initializer_for_'_StuffSpawn_default_instance_'' @ 1412997f0

void __cdecl ds_proto::_dynamic_initializer_for___StuffSpawn_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___StuffSpawn_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 141299810

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_structs_5finstance_5fquest_5fcondition_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c22bb20

void __cdecl ds_proto::StuffSpawn::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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

// Clear @ 14c22bb70

void __thiscall ds_proto::StuffSpawn::Clear(StuffSpawn *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 3) != 0) {
    (this->_impl_).spawn_id_ = 0;
    (this->_impl_).stuff_id_ = 0;
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

// ByteSizeLong @ 14c22bba0

ulong64 __thiscall ds_proto::StuffSpawn::ByteSizeLong(StuffSpawn *this)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  __uint64 _Var5;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  uVar3 = 0;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (iVar2 = (this->_impl_).spawn_id_, iVar2 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (this->_impl_).stuff_id_, iVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
      uVar3 = uVar3 + uVar4;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar3,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c22bc10

uchar * __thiscall
ds_proto::StuffSpawn::_InternalSerialize
          (StuffSpawn *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar1 = (this->_impl_).spawn_id_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar1,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (iVar1 = (this->_impl_).stuff_id_, iVar1 != 0)) {
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

// GetClassData @ 14c22bca0

ClassData * __thiscall ds_proto::StuffSpawn::GetClassData(StuffSpawn *this)

{
  return (ClassData *)&StuffSpawn_class_data_;
}

// PlacementNew_ @ 14c22bcc0

void * __cdecl ds_proto::StuffSpawn::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7StuffSpawn_ds_proto__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c22bcf0

void * __thiscall ds_proto::StuffSpawn::_scalar_deleting_destructor_(StuffSpawn *this,uint param_1)

{
  this->_padding_ = (longlong)&___7StuffSpawn_ds_proto__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c22bd40

void __cdecl ds_proto::NpcSpawn::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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

// Clear @ 14c22bd90

void __thiscall ds_proto::NpcSpawn::Clear(NpcSpawn *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 3) != 0) {
    (this->_impl_).spawn_id_ = 0;
    (this->_impl_).npc_id_ = 0;
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

// ByteSizeLong @ 14c22bdc0

ulong64 __thiscall ds_proto::NpcSpawn::ByteSizeLong(NpcSpawn *this)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  __uint64 _Var5;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  uVar3 = 0;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (iVar2 = (this->_impl_).spawn_id_, iVar2 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (this->_impl_).npc_id_, iVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
      uVar3 = uVar3 + uVar4;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar3,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c22be30

uchar * __thiscall
ds_proto::NpcSpawn::_InternalSerialize(NpcSpawn *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar1 = (this->_impl_).spawn_id_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar1,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (iVar1 = (this->_impl_).npc_id_, iVar1 != 0)) {
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

// GetClassData @ 14c22bec0

ClassData * __thiscall ds_proto::NpcSpawn::GetClassData(NpcSpawn *this)

{
  return (ClassData *)&NpcSpawn_class_data_;
}

// PlacementNew_ @ 14c22bee0

void * __cdecl ds_proto::NpcSpawn::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7NpcSpawn_ds_proto__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c22bf10

void * __thiscall ds_proto::NpcSpawn::_scalar_deleting_destructor_(NpcSpawn *this,uint param_1)

{
  this->_padding_ = (longlong)&___7NpcSpawn_ds_proto__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c22bf60

void __cdecl ds_proto::InstanceQuestCondition::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
        clear_Item((InstanceQuestCondition *)param_1);
      }
      *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4) = iVar1;
    }
    if (iVar1 == 1) {
      if (iVar2 == 1) {
        NpcSpawn::MergeFrom((NpcSpawn *)param_1[1]._padding_,(NpcSpawn *)param_2[1]._padding_);
      }
      else {
        pvVar3 = google::protobuf::Arena::CopyConstruct<ds_proto::NpcSpawn>
                           (pAVar4,(NpcSpawn *)param_2[1]._padding_);
        param_1[1]._padding_ = (longlong)pvVar3;
      }
    }
    else if (iVar1 == 2) {
      if (iVar2 == 2) {
        StuffSpawn::MergeFrom((StuffSpawn *)param_1[1]._padding_,(StuffSpawn *)param_2[1]._padding_)
        ;
      }
      else {
        pvVar3 = google::protobuf::Arena::CopyConstruct<ds_proto::StuffSpawn>
                           (pAVar4,(StuffSpawn *)param_2[1]._padding_);
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

// Clear @ 14c22c040

void __thiscall ds_proto::InstanceQuestCondition::Clear(InstanceQuestCondition *this)

{
  clear_Item(this);
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c22c070

ulong64 __thiscall ds_proto::InstanceQuestCondition::ByteSizeLong(InstanceQuestCondition *this)

{
  NpcSpawn *this_00;
  ulong64 uVar1;
  ulong64 uVar2;
  __uint64 _Var3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (this->_impl_)._oneof_case_[0];
  uVar1 = 0;
  if ((uVar4 == 1) || (uVar4 == 2)) {
    this_00 = (this->_impl_).Item_.npc_spawn_;
    uVar4 = (this_00->_impl_)._has_bits_.has_bits_[0];
    if ((uVar4 & 3) != 0) {
      if (((uVar4 & 1) != 0) && (iVar5 = (this_00->_impl_).spawn_id_, iVar5 != 0)) {
        uVar1 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      }
      if (((uVar4 & 2) != 0) && (iVar5 = (this_00->_impl_).npc_id_, iVar5 != 0)) {
        uVar2 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
        uVar1 = uVar1 + uVar2;
      }
    }
    _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                      ((Message *)this_00,uVar1,&(this_00->_impl_)._cached_size_);
    uVar4 = (uint)_Var3 | 1;
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
    uVar1 = (ulonglong)(iVar5 * -9 + 0x160U >> 6) + 1 + _Var3;
  }
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar1,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c22c140

uchar * __thiscall
ds_proto::InstanceQuestCondition::_InternalSerialize
          (InstanceQuestCondition *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  uchar *puVar2;
  int iVar3;
  
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 == 1) {
    iVar3 = 1;
  }
  else {
    if (uVar1 != 2) goto LAB_14c22c185;
    iVar3 = 2;
  }
  param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                      (iVar3,(MessageLite *)(this->_impl_).Item_.npc_spawn_,
                       (int)(((this->_impl_).Item_.npc_spawn_)->_impl_)._cached_size_.atom_,param_1,
                       param_2);
LAB_14c22c185:
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c22c1c0

ClassData * __thiscall ds_proto::InstanceQuestCondition::GetClassData(InstanceQuestCondition *this)

{
  return (ClassData *)&InstanceQuestCondition_class_data_;
}

// PlacementNew_ @ 14c22c1e0

void * __cdecl
ds_proto::InstanceQuestCondition::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7InstanceQuestCondition_ds_proto__6B_;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// CopyConstruct<ds_proto::NpcSpawn> @ 14c22c200

void * __cdecl
google::protobuf::Arena::CopyConstruct<ds_proto::NpcSpawn>(Arena *param_1,void *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (Arena *)0x0) {
    puVar1 = ::operator_new(0x20);
  }
  else {
    puVar1 = Allocate(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &___7NpcSpawn_ds_proto__6B_;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)param_2 + 0x18);
  *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  if ((*(byte *)((longlong)param_2 + 8) & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(puVar1 + 1),
               (UnknownFieldSet *)((*(ulonglong *)((longlong)param_2 + 8) & 0xfffffffffffffffe) + 8)
              );
  }
  return puVar1;
}

// CopyConstruct<ds_proto::StuffSpawn> @ 14c22c290

void * __cdecl
google::protobuf::Arena::CopyConstruct<ds_proto::StuffSpawn>(Arena *param_1,void *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (Arena *)0x0) {
    puVar1 = ::operator_new(0x20);
  }
  else {
    puVar1 = Allocate(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &___7StuffSpawn_ds_proto__6B_;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)param_2 + 0x18);
  *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  if ((*(byte *)((longlong)param_2 + 8) & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(puVar1 + 1),
               (UnknownFieldSet *)((*(ulonglong *)((longlong)param_2 + 8) & 0xfffffffffffffffe) + 8)
              );
  }
  return puVar1;
}

// GetOwnedMessage<ds_proto::NpcSpawn> @ 14c22c320

NpcSpawn * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_proto::NpcSpawn>
          (Arena *param_1,NpcSpawn *param_2,Arena *param_3)

{
  NpcSpawn *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (NpcSpawn *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (NpcSpawn *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_proto::StuffSpawn> @ 14c22c330

StuffSpawn * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_proto::StuffSpawn>
          (Arena *param_1,StuffSpawn *param_2,Arena *param_3)

{
  StuffSpawn *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (StuffSpawn *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (StuffSpawn *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// InstanceQuestCondition @ 14c22c340

InstanceQuestCondition * __thiscall
ds_proto::InstanceQuestCondition::InstanceQuestCondition
          (InstanceQuestCondition *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7InstanceQuestCondition_ds_proto__6B_;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = 0;
  return this;
}

// InstanceQuestCondition @ 14c22c360

InstanceQuestCondition * __thiscall
ds_proto::InstanceQuestCondition::InstanceQuestCondition
          (InstanceQuestCondition *this,Arena *param_1,InstanceQuestCondition *param_2)

{
  uint uVar1;
  NpcSpawn *pNVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7InstanceQuestCondition_ds_proto__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  uVar1 = (param_2->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = uVar1;
  if (uVar1 == 1) {
    pNVar2 = google::protobuf::Arena::CopyConstruct<ds_proto::NpcSpawn>
                       (param_1,(param_2->_impl_).Item_.npc_spawn_);
  }
  else {
    if (uVar1 != 2) {
      return this;
    }
    pNVar2 = google::protobuf::Arena::CopyConstruct<ds_proto::StuffSpawn>
                       (param_1,(param_2->_impl_).Item_.npc_spawn_);
  }
  (this->_impl_).Item_.npc_spawn_ = pNVar2;
  return this;
}

// NpcSpawn @ 14c22c3f0

NpcSpawn * __thiscall ds_proto::NpcSpawn::NpcSpawn(NpcSpawn *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7NpcSpawn_ds_proto__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).spawn_id_ = 0;
  (this->_impl_).npc_id_ = 0;
  return this;
}

// NpcSpawn @ 14c22c420

NpcSpawn * __thiscall ds_proto::NpcSpawn::NpcSpawn(NpcSpawn *this,Arena *param_1,NpcSpawn *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7NpcSpawn_ds_proto__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).spawn_id_ = (param_2->_impl_).spawn_id_;
  (this->_impl_).npc_id_ = (param_2->_impl_).npc_id_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// StuffSpawn @ 14c22c480

StuffSpawn * __thiscall ds_proto::StuffSpawn::StuffSpawn(StuffSpawn *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7StuffSpawn_ds_proto__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).spawn_id_ = 0;
  (this->_impl_).stuff_id_ = 0;
  return this;
}

// StuffSpawn @ 14c22c4b0

StuffSpawn * __thiscall
ds_proto::StuffSpawn::StuffSpawn(StuffSpawn *this,Arena *param_1,StuffSpawn *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7StuffSpawn_ds_proto__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).spawn_id_ = (param_2->_impl_).spawn_id_;
  (this->_impl_).stuff_id_ = (param_2->_impl_).stuff_id_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// ~InstanceQuestCondition @ 14c22c510

void __thiscall
ds_proto::InstanceQuestCondition::~InstanceQuestCondition(InstanceQuestCondition *this)

{
  this->_padding_ = (longlong)&___7InstanceQuestCondition_ds_proto__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((this->_impl_)._oneof_case_[0] != 0) {
    clear_Item(this);
    return;
  }
  return;
}

// ~NpcSpawn @ 14c22c550

void __thiscall ds_proto::NpcSpawn::~NpcSpawn(NpcSpawn *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7NpcSpawn_ds_proto__6B_;
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

// ~StuffSpawn @ 14c22c570

void __thiscall ds_proto::StuffSpawn::~StuffSpawn(StuffSpawn *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7StuffSpawn_ds_proto__6B_;
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

// CopyFrom @ 14c22c590

void __thiscall
ds_proto::InstanceQuestCondition::CopyFrom
          (InstanceQuestCondition *this,InstanceQuestCondition *param_1)

{
  uint uVar1;
  uint uVar2;
  StuffSpawn *pSVar3;
  NpcSpawn *pNVar4;
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
          clear_Item(this);
        }
        (this->_impl_)._oneof_case_[0] = uVar1;
      }
      if (uVar1 == 1) {
        pNVar4 = (param_1->_impl_).Item_.npc_spawn_;
        if (uVar2 == 1) {
          NpcSpawn::MergeFrom((this->_impl_).Item_.npc_spawn_,pNVar4);
        }
        else {
          pNVar4 = google::protobuf::Arena::CopyConstruct<ds_proto::NpcSpawn>(pAVar5,pNVar4);
          (this->_impl_).Item_.npc_spawn_ = pNVar4;
        }
      }
      else if (uVar1 == 2) {
        pSVar3 = (param_1->_impl_).Item_.stuff_spawn_;
        if (uVar2 == 2) {
          StuffSpawn::MergeFrom((this->_impl_).Item_.stuff_spawn_,pSVar3);
        }
        else {
          pNVar4 = google::protobuf::Arena::CopyConstruct<ds_proto::StuffSpawn>(pAVar5,pSVar3);
          (this->_impl_).Item_.npc_spawn_ = pNVar4;
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

// CopyFrom @ 14c22c680

void __thiscall ds_proto::NpcSpawn::CopyFrom(NpcSpawn *this,NpcSpawn *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 3) != 0) {
      if (((uVar1 & 1) != 0) && (iVar2 = (param_1->_impl_).spawn_id_, iVar2 != 0)) {
        (this->_impl_).spawn_id_ = iVar2;
      }
      if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).npc_id_, iVar2 != 0)) {
        (this->_impl_).npc_id_ = iVar2;
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

// CopyFrom @ 14c22c6f0

void __thiscall ds_proto::StuffSpawn::CopyFrom(StuffSpawn *this,StuffSpawn *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 3) != 0) {
      if (((uVar1 & 1) != 0) && (iVar2 = (param_1->_impl_).spawn_id_, iVar2 != 0)) {
        (this->_impl_).spawn_id_ = iVar2;
      }
      if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).stuff_id_, iVar2 != 0)) {
        (this->_impl_).stuff_id_ = iVar2;
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

// GetMetadata @ 14c22c760

Metadata * __thiscall
ds_proto::InstanceQuestCondition::GetMetadata
          (InstanceQuestCondition *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&InstanceQuestCondition_class_data_)
  ;
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c22c7a0

Metadata * __thiscall
ds_proto::NpcSpawn::GetMetadata(NpcSpawn *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&NpcSpawn_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c22c7e0

Metadata * __thiscall
ds_proto::StuffSpawn::GetMetadata(StuffSpawn *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&StuffSpawn_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c22c820

void __thiscall
ds_proto::InstanceQuestCondition::InternalSwap
          (InstanceQuestCondition *this,InstanceQuestCondition *param_1)

{
  uint uVar1;
  longlong lVar2;
  ItemUnion IVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  IVar3 = (this->_impl_).Item_;
  (this->_impl_).Item_ = (param_1->_impl_).Item_;
  (param_1->_impl_).Item_ = IVar3;
  uVar1 = (this->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = (param_1->_impl_)._oneof_case_[0];
  (param_1->_impl_)._oneof_case_[0] = uVar1;
  return;
}

// InternalSwap @ 14c22c860

void __thiscall ds_proto::NpcSpawn::InternalSwap(NpcSpawn *this,NpcSpawn *param_1)

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
            (&(this->_impl_).spawn_id_,this + 1,&(param_1->_impl_).spawn_id_);
  return;
}

// InternalSwap @ 14c22c8a0

void __thiscall ds_proto::StuffSpawn::InternalSwap(StuffSpawn *this,StuffSpawn *param_1)

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
            (&(this->_impl_).spawn_id_,this + 1,&(param_1->_impl_).spawn_id_);
  return;
}

// MergeFrom @ 14c22c8e0

void __thiscall ds_proto::NpcSpawn::MergeFrom(NpcSpawn *this,NpcSpawn *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (iVar2 = (param_1->_impl_).spawn_id_, iVar2 != 0)) {
      (this->_impl_).spawn_id_ = iVar2;
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).npc_id_, iVar2 != 0)) {
      (this->_impl_).npc_id_ = iVar2;
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

// MergeFrom @ 14c22c930

void __thiscall ds_proto::StuffSpawn::MergeFrom(StuffSpawn *this,StuffSpawn *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (iVar2 = (param_1->_impl_).spawn_id_, iVar2 != 0)) {
      (this->_impl_).spawn_id_ = iVar2;
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).stuff_id_, iVar2 != 0)) {
      (this->_impl_).stuff_id_ = iVar2;
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

// clear_Item @ 14c22c980

void __thiscall ds_proto::InstanceQuestCondition::clear_Item(InstanceQuestCondition *this)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  NpcSpawn *pNVar4;
  
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 == 1) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 != (undefined8 *)0x0) ||
       (pNVar4 = (this->_impl_).Item_.npc_spawn_, pNVar4 == (NpcSpawn *)0x0)) goto LAB_14c22ca0c;
    ppuVar3 = &___7NpcSpawn_ds_proto__6B_;
  }
  else {
    if (uVar1 != 2) goto LAB_14c22ca0c;
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 != (undefined8 *)0x0) ||
       (pNVar4 = (this->_impl_).Item_.npc_spawn_, pNVar4 == (NpcSpawn *)0x0)) goto LAB_14c22ca0c;
    ppuVar3 = &___7StuffSpawn_ds_proto__6B_;
  }
  pNVar4->_padding_ = (longlong)ppuVar3;
  if ((pNVar4->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&pNVar4->_padding_)
    ;
  }
  ::operator_delete(pNVar4,0x20);
LAB_14c22ca0c:
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// set_allocated_npc_spawn @ 14c22ca30

void __thiscall
ds_proto::InstanceQuestCondition::set_allocated_npc_spawn
          (InstanceQuestCondition *this,NpcSpawn *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (NpcSpawn *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (NpcSpawn *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 1;
    (this->_impl_).Item_.npc_spawn_ = param_1;
  }
  return;
}

// set_allocated_stuff_spawn @ 14c22cab0

void __thiscall
ds_proto::InstanceQuestCondition::set_allocated_stuff_spawn
          (InstanceQuestCondition *this,StuffSpawn *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (StuffSpawn *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (StuffSpawn *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 2;
    (this->_impl_).Item_.stuff_spawn_ = param_1;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_InstanceQuestCondition_default_instance_'' @ 150443b70

void __cdecl
ds_proto::_dynamic_atexit_destructor_for___InstanceQuestCondition_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_NpcSpawn_default_instance_'' @ 150443b80

void __cdecl ds_proto::_dynamic_atexit_destructor_for___NpcSpawn_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_StuffSpawn_default_instance_'' @ 150443b90

void __cdecl ds_proto::_dynamic_atexit_destructor_for___StuffSpawn_default_instance___(void)

{
  return;
}


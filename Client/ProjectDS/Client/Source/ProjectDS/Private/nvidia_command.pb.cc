// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 105

// `dynamic_initializer_for_'_CharacterLevelUp_default_instance_'' @ 141294780

void __cdecl nvidia_command::_dynamic_initializer_for___CharacterLevelUp_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___CharacterLevelUp_default_instance___);
  return;
}

// `dynamic_initializer_for_'_CheatCommand_default_instance_'' @ 1412947a0

void __cdecl nvidia_command::_dynamic_initializer_for___CheatCommand_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___CheatCommand_default_instance___);
  return;
}

// `dynamic_initializer_for_'_Command_default_instance_'' @ 1412947c0

void __cdecl nvidia_command::_dynamic_initializer_for___Command_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___Command_default_instance___);
  return;
}

// `dynamic_initializer_for_'_MoveCommand_default_instance_'' @ 1412947e0

void __cdecl nvidia_command::_dynamic_initializer_for___MoveCommand_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___MoveCommand_default_instance___);
  return;
}

// `dynamic_initializer_for_'_NvidiaCommandRequest_default_instance_'' @ 141294800

void __cdecl
nvidia_command::_dynamic_initializer_for___NvidiaCommandRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___NvidiaCommandRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_SkillCommand_default_instance_'' @ 141294820

void __cdecl nvidia_command::_dynamic_initializer_for___SkillCommand_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SkillCommand_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 141294840

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_nvidia_5fcommand_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c16ef30

void __cdecl nvidia_command::SkillCommand::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  
  google::protobuf::RepeatedField<int>::MergeFrom
            ((RepeatedField<int> *)&param_1[1]._internal_metadata_,
             (RepeatedField<int> *)&param_2[1]._internal_metadata_);
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (param_2[3]._padding_ != 0)) {
      param_1[3]._padding_ = param_2[3]._padding_;
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (int)param_2[3]._internal_metadata_.ptr_, iVar2 != 0)) {
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

// Clear @ 14c16efb0

void __thiscall nvidia_command::SkillCommand::Clear(SkillCommand *this)

{
  ulonglong uVar1;
  ulong64 uVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar1 = (this->_impl_).alternative_skill_ids_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar1 & 4) == 0) {
    (this->_impl_).alternative_skill_ids_.soo_rep_.field0_0x0.long_rep.elements_int =
         uVar1 & 0xfffffffffffffff8;
  }
  else {
    (this->_impl_).alternative_skill_ids_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 3) != 0) {
    (this->_impl_).target_id_ = 0;
    (this->_impl_).skill_id_ = 0;
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

// ByteSizeLong @ 14c16f000

ulong64 __thiscall nvidia_command::SkillCommand::ByteSizeLong(SkillCommand *this)

{
  uint uVar1;
  int iVar2;
  __uint64 _Var3;
  ulong64 uVar4;
  
  _Var3 = google::protobuf::internal::WireFormatLite::Int32SizeWithPackedTagSize
                    (&(this->_impl_).alternative_skill_ids_,1,
                     &(this->_impl_)._alternative_skill_ids_cached_byte_size_);
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) && (uVar4 = (this->_impl_).target_id_, uVar4 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::UInt64SizePlusOne(uVar4);
      _Var3 = _Var3 + uVar4;
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (this->_impl_).skill_id_, iVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar2);
      _Var3 = _Var3 + uVar4;
    }
  }
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var3,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c16f080

uchar * __thiscall
nvidia_command::SkillCommand::_InternalSerialize
          (SkillCommand *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  uchar *puVar5;
  byte bVar6;
  ulonglong uVar7;
  atomic<int> aVar8;
  uint uVar9;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (iVar2 = (this->_impl_).skill_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).target_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar7 = (this->_impl_).target_id_;
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
  aVar8 = (this->_impl_)._alternative_skill_ids_cached_byte_size_.atom_;
  if (0 < (int)aVar8) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    *param_1 = 0x1a;
    while( true ) {
      pbVar3 = param_1 + 1;
      bVar6 = aVar8._0_1_;
      if ((uint)aVar8 < 0x80) break;
      aVar8 = (atomic<int>)((uint)aVar8 >> 7);
      *pbVar3 = bVar6 | 0x80;
      param_1 = pbVar3;
    }
    *pbVar3 = bVar6;
    param_1 = param_1 + 2;
    uVar7 = (this->_impl_).alternative_skill_ids_.soo_rep_.field0_0x0.long_rep.elements_int;
    piVar4 = (int *)(uVar7 & 0xfffffffffffffff8);
    if ((uVar7 & 4) == 0) {
      uVar9 = (uint)uVar7 & 3;
      piVar4 = &(this->_impl_).alternative_skill_ids_.soo_rep_.field0_0x0.long_rep.size;
    }
    else {
      uVar9 = (this->_impl_).alternative_skill_ids_.soo_rep_.field0_0x0.long_rep.size;
    }
    piVar1 = piVar4 + (int)uVar9;
    do {
      if (param_2->end_ <= param_1) {
        param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
      }
      iVar2 = *piVar4;
      piVar4 = piVar4 + 1;
      for (uVar7 = (ulonglong)iVar2; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
        *param_1 = (byte)uVar7 | 0x80;
        param_1 = param_1 + 1;
      }
      *param_1 = (byte)uVar7;
      param_1 = param_1 + 1;
    } while (piVar4 < piVar1);
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar5;
}

// GetClassData @ 14c16f210

ClassData * __thiscall nvidia_command::SkillCommand::GetClassData(SkillCommand *this)

{
  return (ClassData *)&SkillCommand_class_data_;
}

// PlacementNew_ @ 14c16f230

void * __cdecl
nvidia_command::SkillCommand::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SkillCommand_nvidia_command__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(Arena **)((longlong)param_2 + 0x18) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined4 *)((longlong)param_2 + 0x38) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c16f270

void * __thiscall
nvidia_command::SkillCommand::_scalar_deleting_destructor_(SkillCommand *this,uint param_1)

{
  ulonglong uVar1;
  
  this->_padding_ = (longlong)&___7SkillCommand_nvidia_command__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  uVar1 = (this->_impl_).alternative_skill_ids_.soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)
                      (this->_impl_).alternative_skill_ids_.soo_rep_.field0_0x0.long_rep.capacity *
                      4 + 8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// MergeImpl @ 14c16f2f0

void __cdecl nvidia_command::CharacterLevelUp::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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

// Clear @ 14c16f330

void __thiscall nvidia_command::CharacterLevelUp::Clear(CharacterLevelUp *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  (this->_impl_).level_ = 0;
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

// ByteSizeLong @ 14c16f350

ulong64 __thiscall nvidia_command::CharacterLevelUp::ByteSizeLong(CharacterLevelUp *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar2 = (this->_impl_).level_, iVar2 != 0)) {
    uVar3 = (longlong)iVar2 | 1;
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

// _InternalSerialize @ 14c16f3b0

uchar * __thiscall
nvidia_command::CharacterLevelUp::_InternalSerialize
          (CharacterLevelUp *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  uchar *puVar2;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar1 = (this->_impl_).level_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
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

// GetClassData @ 14c16f420

ClassData * __thiscall nvidia_command::CharacterLevelUp::GetClassData(CharacterLevelUp *this)

{
  return (ClassData *)&CharacterLevelUp_class_data_;
}

// PlacementNew_ @ 14c16f440

void * __cdecl
nvidia_command::CharacterLevelUp::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7CharacterLevelUp_nvidia_command__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c16f470

void * __thiscall
nvidia_command::CharacterLevelUp::_scalar_deleting_destructor_(CharacterLevelUp *this,uint param_1)

{
  this->_padding_ = (longlong)&___7CharacterLevelUp_nvidia_command__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c16f4c0

void __cdecl nvidia_command::MoveCommand::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c16f550

void __thiscall nvidia_command::MoveCommand::Clear(MoveCommand *this)

{
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    Vector::Clear((this->_impl_).destination_);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c16f590

ulong64 __thiscall nvidia_command::MoveCommand::ByteSizeLong(MoveCommand *this)

{
  ulong64 uVar1;
  int iVar2;
  uint uVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    uVar1 = Vector::ByteSizeLong((this->_impl_).destination_);
    uVar3 = (uint)uVar1 | 1;
    if (__isa_available < 5) {
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 0x1f - iVar2;
    }
    else {
      iVar2 = LZCOUNT(uVar3);
    }
    _Var4 = (ulonglong)(iVar2 * -9 + 0x160U >> 6) + 1 + uVar1;
  }
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c16f600

uchar * __thiscall
nvidia_command::MoveCommand::_InternalSerialize
          (MoveCommand *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uchar *puVar1;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).destination_,
                         (int)(((this->_impl_).destination_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar1;
  }
  return param_1;
}

// GetClassData @ 14c16f670

ClassData * __thiscall nvidia_command::MoveCommand::GetClassData(MoveCommand *this)

{
  return (ClassData *)&MoveCommand_class_data_;
}

// PlacementNew_ @ 14c16f690

void * __cdecl
nvidia_command::MoveCommand::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7MoveCommand_nvidia_command__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c16f6c0

void * __thiscall
nvidia_command::MoveCommand::_scalar_deleting_destructor_(MoveCommand *this,uint param_1)

{
  Vector *this_00;
  
  this->_padding_ = (longlong)&___7MoveCommand_nvidia_command__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).destination_;
  if (this_00 != (Vector *)0x0) {
    Vector::~Vector(this_00);
    ::operator_delete(this_00,0x30);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c16f740

void __cdecl nvidia_command::CheatCommand::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  InternalMetadata *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  void *pvVar5;
  Arena *pAVar6;
  
  this = &param_1->_internal_metadata_;
  pAVar6 = (Arena *)(this->ptr_ & 0xfffffffffffffffe);
  if ((this->ptr_ & 1) != 0) {
    pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
  }
  iVar1 = *(int *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4);
  if (iVar1 != 0) {
    iVar2 = *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        clear_cheat_action((CheatCommand *)param_1);
      }
      *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4) = iVar1;
    }
    if (iVar1 == 1) {
      pvVar5 = (void *)param_2[1]._padding_;
      if (iVar2 == 1) {
        uVar3 = *(uint *)((longlong)pvVar5 + 0x10);
        lVar4 = param_1[1]._padding_;
        if (((uVar3 & 1) != 0) && (*(int *)((longlong)pvVar5 + 0x18) != 0)) {
          *(int *)(lVar4 + 0x18) = *(int *)((longlong)pvVar5 + 0x18);
        }
        *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | uVar3;
        if ((*(byte *)((longlong)pvVar5 + 8) & 1) != 0) {
          google::protobuf::internal::InternalMetadata::
          DoMergeFrom<google::protobuf::UnknownFieldSet>
                    ((InternalMetadata *)(lVar4 + 8),
                     (UnknownFieldSet *)
                     ((*(ulonglong *)((longlong)pvVar5 + 8) & 0xfffffffffffffffe) + 8));
        }
      }
      else {
        pvVar5 = google::protobuf::Arena::CopyConstruct<nvidia_command::CharacterLevelUp>
                           (pAVar6,pvVar5);
        param_1[1]._padding_ = (longlong)pvVar5;
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

// Clear @ 14c16f830

void __thiscall nvidia_command::CheatCommand::Clear(CheatCommand *this)

{
  CharacterLevelUp *pCVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 1) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pCVar1 = (this->_impl_).cheat_action_.level_up_, pCVar1 != (CharacterLevelUp *)0x0)) {
      pCVar1->_padding_ = (longlong)&___7CharacterLevelUp_nvidia_command__6B_;
      if ((pCVar1->_padding_ & 1) != 0) {
        google::protobuf::internal::InternalMetadata::
        DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
                  ((InternalMetadata *)&pCVar1->_padding_);
      }
      ::operator_delete(pCVar1,0x20);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if ((this->_padding_ & 1) == 0) {
    return;
  }
  google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
            ((InternalMetadata *)&this->_padding_);
  return;
}

// ByteSizeLong @ 14c16f8c0

ulong64 __thiscall nvidia_command::CheatCommand::ByteSizeLong(CheatCommand *this)

{
  CharacterLevelUp *this_00;
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  __uint64 _Var5;
  
  _Var5 = 0;
  if ((this->_impl_)._oneof_case_[0] == 1) {
    this_00 = (this->_impl_).cheat_action_.level_up_;
    if ((((this_00->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
       (iVar4 = (this_00->_impl_).level_, iVar4 != 0)) {
      uVar2 = (longlong)iVar4 | 1;
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
    _Var5 = (ulonglong)(iVar4 * -9 + 0x160U >> 6) + 1 + _Var5;
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c16f980

uchar * __thiscall
nvidia_command::CheatCommand::_InternalSerialize
          (CheatCommand *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uchar *puVar1;
  
  if ((this->_impl_)._oneof_case_[0] == 1) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).cheat_action_.level_up_,
                         (int)(((this->_impl_).cheat_action_.level_up_)->_impl_)._cached_size_.atom_
                         ,param_1,param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar1;
  }
  return param_1;
}

// GetClassData @ 14c16f9f0

ClassData * __thiscall nvidia_command::CheatCommand::GetClassData(CheatCommand *this)

{
  return (ClassData *)&CheatCommand_class_data_;
}

// PlacementNew_ @ 14c16fa10

void * __cdecl
nvidia_command::CheatCommand::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7CheatCommand_nvidia_command__6B_;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c16fa30

void * __thiscall
nvidia_command::CheatCommand::_scalar_deleting_destructor_(CheatCommand *this,uint param_1)

{
  ~CheatCommand(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c16fa70

void __cdecl nvidia_command::Command::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  InternalMetadata *this;
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  MessageLite *pMVar5;
  Arena *pAVar6;
  bool bVar7;
  
  this = &param_1->_internal_metadata_;
  pAVar6 = (Arena *)(this->ptr_ & 0xfffffffffffffffe);
  if ((this->ptr_ & 1) != 0) {
    pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if (((uVar1 & 1) != 0) && (lVar4 = param_2[1]._internal_metadata_.ptr_, lVar4 != 0)) {
    param_1[1]._internal_metadata_.ptr_ = lVar4;
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  iVar2 = (int)param_2[2]._internal_metadata_.ptr_;
  if (iVar2 != 0) {
    iVar3 = (int)param_1[2]._internal_metadata_.ptr_;
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        clear_command((Command *)param_1);
      }
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar2;
    }
    if (iVar2 == 2) {
      bVar7 = iVar3 == 2;
    }
    else if (iVar2 == 3) {
      bVar7 = iVar3 == 3;
    }
    else {
      if (iVar2 != 4) goto LAB_14c16fb19;
      bVar7 = iVar3 == 4;
    }
    if (bVar7) {
      google::protobuf::Message::MergeFrom
                ((Message *)param_1[2]._padding_,(Message *)param_2[2]._padding_);
    }
    else {
      pMVar5 = google::protobuf::MessageLite::CopyConstruct
                         (pAVar6,(MessageLite *)param_2[2]._padding_);
      param_1[2]._padding_ = (longlong)pMVar5;
    }
  }
LAB_14c16fb19:
  if (((param_2->_internal_metadata_).ptr_ & 1) == 0) {
    return;
  }
  google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
            (this,(UnknownFieldSet *)
                  (((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8));
  return;
}

// Clear @ 14c16fb60

void __thiscall nvidia_command::Command::Clear(Command *this)

{
  uint uVar1;
  Message *pMVar2;
  undefined8 *puVar3;
  
  (this->_impl_).command_id_ = 0;
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (((uVar1 == 2) || (uVar1 == 3)) || (uVar1 == 4)) {
    puVar3 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar3 = (undefined8 *)*puVar3;
    }
    if ((puVar3 == (undefined8 *)0x0) &&
       (pMVar2 = (this->_impl_).command_.move_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c16fbe0

ulong64 __thiscall nvidia_command::Command::ByteSizeLong(Command *this)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  __uint64 _Var5;
  
  _Var5 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (uVar1 = (this->_impl_).command_id_, uVar1 != 0)) {
    uVar1 = uVar1 | 1;
    if (__isa_available < 5) {
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar4 = 0x3f - (int)lVar2;
    }
    else {
      iVar4 = (int)LZCOUNT(uVar1);
    }
    _Var5 = (__uint64)(iVar4 * -9 + 0x2c0U >> 6);
  }
  uVar3 = (this->_impl_)._oneof_case_[0];
  if (((uVar3 == 2) || (uVar3 == 3)) || (uVar3 == 4)) {
    lVar2 = (**(code **)(*(longlong *)(this->_impl_).command_.move_ + 0x10))();
    uVar3 = (uint)lVar2 | 1;
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
    _Var5 = _Var5 + 1 + (ulonglong)(iVar4 * -9 + 0x160U >> 6) + lVar2;
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c16fca0

uchar * __thiscall
nvidia_command::Command::_InternalSerialize
          (Command *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uchar *puVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).command_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar7 = (this->_impl_).command_id_;
    *param_1 = 8;
    while( true ) {
      pbVar2 = param_1 + 1;
      bVar5 = (byte)uVar7;
      if (uVar7 < 0x80) break;
      uVar7 = uVar7 >> 7;
      *pbVar2 = bVar5 | 0x80;
      param_1 = pbVar2;
    }
    *pbVar2 = bVar5;
    param_1 = param_1 + 2;
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 == 2) {
    iVar3 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).command_.move_);
    iVar6 = 2;
  }
  else if (uVar1 == 3) {
    iVar3 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).command_.move_);
    iVar6 = 3;
  }
  else {
    if (uVar1 != 4) goto LAB_14c16fd64;
    iVar3 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).command_.move_);
    iVar6 = 4;
  }
  param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                      (iVar6,(MessageLite *)(this->_impl_).command_.move_,iVar3,param_1,param_2);
LAB_14c16fd64:
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar4 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar4;
}

// GetClassData @ 14c16fdb0

ClassData * __thiscall nvidia_command::Command::GetClassData(Command *this)

{
  return (ClassData *)&Command_class_data_;
}

// PlacementNew_ @ 14c16fdd0

void * __cdecl nvidia_command::Command::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7Command_nvidia_command__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c16fe00

void * __thiscall nvidia_command::Command::_scalar_deleting_destructor_(Command *this,uint param_1)

{
  ~Command(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// MergeImpl @ 14c16fe40

void __cdecl
nvidia_command::NvidiaCommandRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  
  if ((int)param_2[2]._padding_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&param_1[1]._internal_metadata_,
               (RepeatedPtrFieldBase *)&param_2[1]._internal_metadata_,
               google::protobuf::Arena::CopyConstruct<nvidia_command::Command>);
  }
  uVar1 = (uint)param_2[1]._padding_;
  if (((uVar1 & 1) != 0) && (param_2[3]._padding_ != 0)) {
    param_1[3]._padding_ = param_2[3]._padding_;
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

// Clear @ 14c16feb0

void __thiscall nvidia_command::NvidiaCommandRequest::Clear(NvidiaCommandRequest *this)

{
  if (0 < *(int *)&(this->_impl_).commands_.field_0x8) {
    google::protobuf::internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).commands_);
  }
  (this->_impl_).entity_ = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c16ff00

ulong64 __thiscall nvidia_command::NvidiaCommandRequest::ByteSizeLong(NvidiaCommandRequest *this)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  uint uVar7;
  int iVar8;
  RepeatedPtrField<nvidia_command::Command> *pRVar9;
  ulonglong uVar10;
  
  uVar5 = *(ulonglong *)&(this->_impl_).commands_;
  pRVar9 = &(this->_impl_).commands_;
  uVar1 = *(uint *)&(this->_impl_).commands_.field_0x8;
  uVar10 = (ulonglong)uVar1;
  if ((uVar5 & 1) != 0) {
    pRVar9 = (RepeatedPtrField<nvidia_command::Command> *)(uVar5 + 7);
  }
  puVar3 = (undefined8 *)&pRVar9->field_0x0;
  for (; pRVar9 != (RepeatedPtrField<nvidia_command::Command> *)(puVar3 + (int)uVar1);
      pRVar9 = (RepeatedPtrField<nvidia_command::Command> *)&pRVar9->field_0x8) {
    uVar4 = Command::ByteSizeLong(*(Command **)pRVar9);
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
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (uVar5 = (this->_impl_).entity_, uVar5 != 0)) {
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
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar10,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c170000

uchar * __thiscall
nvidia_command::NvidiaCommandRequest::_InternalSerialize
          (NvidiaCommandRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  ulonglong uVar4;
  MessageLite *pMVar5;
  uint uVar6;
  
  uVar6 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).entity_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (this->_impl_).entity_;
    *param_1 = 8;
    while( true ) {
      pbVar2 = param_1 + 1;
      bVar3 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *pbVar2 = bVar3 | 0x80;
      param_1 = pbVar2;
    }
    *pbVar2 = bVar3;
    param_1 = param_1 + 2;
  }
  uVar1 = *(uint *)&(this->_impl_).commands_.field_0x8;
  if (uVar1 != 0) {
    do {
      pMVar5 = *(MessageLite **)&(this->_impl_).commands_;
      if (((ulonglong)pMVar5 & 1) != 0) {
        pMVar5 = *(MessageLite **)((longlong)&pMVar5->_padding_ + (longlong)(int)uVar6 * 8 + 7);
      }
      param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                          (2,pMVar5,*(int *)((longlong)&pMVar5[1]._padding_ + 4),param_1,param_2);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  if ((this->_padding_ & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                        ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                         param_2);
  }
  return param_1;
}

// GetClassData @ 14c1700e0

ClassData * __thiscall
nvidia_command::NvidiaCommandRequest::GetClassData(NvidiaCommandRequest *this)

{
  return (ClassData *)&NvidiaCommandRequest_class_data_;
}

// PlacementNew_ @ 14c170100

void * __cdecl
nvidia_command::NvidiaCommandRequest::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7NvidiaCommandRequest_nvidia_command__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(Arena **)((longlong)param_2 + 0x28) = param_3;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c170130

void * __thiscall
nvidia_command::NvidiaCommandRequest::_scalar_deleting_destructor_
          (NvidiaCommandRequest *this,uint param_1)

{
  this->_padding_ = (longlong)&___7NvidiaCommandRequest_nvidia_command__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if (*(longlong *)&(this->_impl_).commands_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).commands_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// CopyConstruct<nvidia_command::CharacterLevelUp> @ 14c170190

void * __cdecl
google::protobuf::Arena::CopyConstruct<nvidia_command::CharacterLevelUp>
          (Arena *param_1,void *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (Arena *)0x0) {
    puVar1 = ::operator_new(0x20);
  }
  else {
    puVar1 = Allocate(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &___7CharacterLevelUp_nvidia_command__6B_;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)param_2 + 0x18);
  if ((*(byte *)((longlong)param_2 + 8) & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(puVar1 + 1),
               (UnknownFieldSet *)((*(ulonglong *)((longlong)param_2 + 8) & 0xfffffffffffffffe) + 8)
              );
  }
  return puVar1;
}

// CopyConstruct<nvidia_command::Command> @ 14c170220

void * __cdecl
google::protobuf::Arena::CopyConstruct<nvidia_command::Command>(Arena *param_1,void *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  MessageLite *pMVar3;
  
  if (param_1 == (Arena *)0x0) {
    puVar2 = ::operator_new(0x30);
  }
  else {
    puVar2 = Allocate(param_1,0x30);
  }
  puVar2[1] = param_1;
  *puVar2 = &___7Command_nvidia_command__6B_;
  if ((*(byte *)((longlong)param_2 + 8) & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(puVar2 + 1),
               (UnknownFieldSet *)((*(ulonglong *)((longlong)param_2 + 8) & 0xfffffffffffffffe) + 8)
              );
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)((longlong)param_2 + 0x28);
  iVar1 = *(int *)(puVar2 + 5);
  puVar2[3] = *(undefined8 *)((longlong)param_2 + 0x18);
  if (((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) {
    pMVar3 = MessageLite::CopyConstruct(param_1,*(MessageLite **)((longlong)param_2 + 0x20));
    puVar2[4] = pMVar3;
  }
  return puVar2;
}

// GetOwnedMessage<nvidia_command::CharacterLevelUp> @ 14c1702e0

CharacterLevelUp * __cdecl
google::protobuf::internal::GetOwnedMessage<nvidia_command::CharacterLevelUp>
          (Arena *param_1,CharacterLevelUp *param_2,Arena *param_3)

{
  CharacterLevelUp *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (CharacterLevelUp *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (CharacterLevelUp *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<nvidia_command::CheatCommand> @ 14c1702f0

CheatCommand * __cdecl
google::protobuf::internal::GetOwnedMessage<nvidia_command::CheatCommand>
          (Arena *param_1,CheatCommand *param_2,Arena *param_3)

{
  CheatCommand *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (CheatCommand *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (CheatCommand *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<nvidia_command::MoveCommand> @ 14c170300

MoveCommand * __cdecl
google::protobuf::internal::GetOwnedMessage<nvidia_command::MoveCommand>
          (Arena *param_1,MoveCommand *param_2,Arena *param_3)

{
  MoveCommand *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (MoveCommand *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (MoveCommand *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<nvidia_command::SkillCommand> @ 14c170310

SkillCommand * __cdecl
google::protobuf::internal::GetOwnedMessage<nvidia_command::SkillCommand>
          (Arena *param_1,SkillCommand *param_2,Arena *param_3)

{
  SkillCommand *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SkillCommand *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SkillCommand *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// CharacterLevelUp @ 14c170320

CharacterLevelUp * __thiscall
nvidia_command::CharacterLevelUp::CharacterLevelUp(CharacterLevelUp *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7CharacterLevelUp_nvidia_command__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).level_ = 0;
  return this;
}

// CharacterLevelUp @ 14c170350

CharacterLevelUp * __thiscall
nvidia_command::CharacterLevelUp::CharacterLevelUp
          (CharacterLevelUp *this,Arena *param_1,CharacterLevelUp *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7CharacterLevelUp_nvidia_command__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).level_ = (param_2->_impl_).level_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// CheatCommand @ 14c1703b0

CheatCommand * __thiscall
nvidia_command::CheatCommand::CheatCommand(CheatCommand *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7CheatCommand_nvidia_command__6B_;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = 0;
  return this;
}

// CheatCommand @ 14c1703d0

CheatCommand * __thiscall
nvidia_command::CheatCommand::CheatCommand(CheatCommand *this,Arena *param_1,CheatCommand *param_2)

{
  uint uVar1;
  CharacterLevelUp *pCVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7CheatCommand_nvidia_command__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  uVar1 = (param_2->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = uVar1;
  if (uVar1 == 1) {
    pCVar2 = google::protobuf::Arena::CopyConstruct<nvidia_command::CharacterLevelUp>
                       (param_1,(param_2->_impl_).cheat_action_.level_up_);
    (this->_impl_).cheat_action_.level_up_ = pCVar2;
  }
  return this;
}

// Command @ 14c170450

Command * __thiscall nvidia_command::Command::Command(Command *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7Command_nvidia_command__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = 0;
  (this->_impl_).command_id_ = 0;
  return this;
}

// Command @ 14c170480

Command * __thiscall nvidia_command::Command::Command(Command *this,Arena *param_1,Command *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7Command_nvidia_command__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = (param_2->_impl_)._oneof_case_[0];
  uVar1 = (this->_impl_)._oneof_case_[0];
  (this->_impl_).command_id_ = (param_2->_impl_).command_id_;
  if (((uVar1 == 2) || (uVar1 == 3)) || (uVar1 == 4)) {
    pMVar2 = google::protobuf::MessageLite::CopyConstruct
                       (param_1,(MessageLite *)(param_2->_impl_).command_.move_);
    (this->_impl_).command_.move_ = (Message *)pMVar2;
  }
  return this;
}

// MoveCommand @ 14c170520

MoveCommand * __thiscall nvidia_command::MoveCommand::MoveCommand(MoveCommand *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MoveCommand_nvidia_command__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).destination_ = (Vector *)0x0;
  return this;
}

// MoveCommand @ 14c170550

MoveCommand * __thiscall
nvidia_command::MoveCommand::MoveCommand(MoveCommand *this,Arena *param_1,MoveCommand *param_2)

{
  Vector *pVVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7MoveCommand_nvidia_command__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pVVar1 = (Vector *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pVVar1 = google::protobuf::Arena::CopyConstruct<Vector>(param_1,(param_2->_impl_).destination_);
  }
  (this->_impl_).destination_ = pVVar1;
  return this;
}

// NvidiaCommandRequest @ 14c1705d0

NvidiaCommandRequest * __thiscall
nvidia_command::NvidiaCommandRequest::NvidiaCommandRequest
          (NvidiaCommandRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7NvidiaCommandRequest_nvidia_command__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->_impl_).commands_ = 0;
  *(undefined8 *)&(this->_impl_).commands_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).commands_.field_0x10 = param_1;
  (this->_impl_).entity_ = 0;
  return this;
}

// NvidiaCommandRequest @ 14c170600

NvidiaCommandRequest * __thiscall
nvidia_command::NvidiaCommandRequest::NvidiaCommandRequest
          (NvidiaCommandRequest *this,Arena *param_1,NvidiaCommandRequest *param_2)

{
  RepeatedPtrField<nvidia_command::Command> *this_00;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7NvidiaCommandRequest_nvidia_command__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(this->_impl_).commands_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  *(Arena **)&(this->_impl_).commands_.field_0x10 = param_1;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).commands_.field_0x8 = 0;
  if (*(int *)&(param_2->_impl_).commands_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this_00,(RepeatedPtrFieldBase *)&(param_2->_impl_).commands_,
               google::protobuf::Arena::CopyConstruct<nvidia_command::Command>);
  }
  (this->_impl_).entity_ = (param_2->_impl_).entity_;
  return this;
}

// SkillCommand @ 14c1706a0

SkillCommand * __thiscall
nvidia_command::SkillCommand::SkillCommand(SkillCommand *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SkillCommand_nvidia_command__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).alternative_skill_ids_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1
  ;
  *(undefined1 *)((longlong)&(this->_impl_).alternative_skill_ids_.soo_rep_.field0_0x0 + 8) = 0;
  (this->_impl_)._alternative_skill_ids_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).target_id_ = 0;
  (this->_impl_).skill_id_ = 0;
  return this;
}

// SkillCommand @ 14c1706e0

SkillCommand * __thiscall
nvidia_command::SkillCommand::SkillCommand(SkillCommand *this,Arena *param_1,SkillCommand *param_2)

{
  InternalVisibility local_res8;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SkillCommand_nvidia_command__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<int>::RepeatedField<int>
            (&(this->_impl_).alternative_skill_ids_,local_res8,param_1,
             &(param_2->_impl_).alternative_skill_ids_);
  (this->_impl_)._alternative_skill_ids_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).target_id_ = (param_2->_impl_).target_id_;
  (this->_impl_).skill_id_ = (param_2->_impl_).skill_id_;
  return this;
}

// ~RepeatedPtrField<nvidia_command::Command> @ 14c170780

void __thiscall
google::protobuf::RepeatedPtrField<nvidia_command::Command>::
~RepeatedPtrField<nvidia_command::Command>(RepeatedPtrField<nvidia_command::Command> *this)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  RepeatedPtrField<nvidia_command::Command> *pRVar4;
  
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
    pRVar4 = (RepeatedPtrField<nvidia_command::Command> *)(*(longlong *)this + 7);
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

// ~CharacterLevelUp @ 14c1707a0

void __thiscall nvidia_command::CharacterLevelUp::~CharacterLevelUp(CharacterLevelUp *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7CharacterLevelUp_nvidia_command__6B_;
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

// ~CheatCommand @ 14c1707c0

void __thiscall nvidia_command::CheatCommand::~CheatCommand(CheatCommand *this)

{
  uint uVar1;
  CharacterLevelUp *pCVar2;
  undefined8 *puVar3;
  
  this->_padding_ = (longlong)&___7CheatCommand_nvidia_command__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      puVar3 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
      if ((this->_padding_ & 1) != 0) {
        puVar3 = (undefined8 *)*puVar3;
      }
      if ((puVar3 == (undefined8 *)0x0) &&
         (pCVar2 = (this->_impl_).cheat_action_.level_up_, pCVar2 != (CharacterLevelUp *)0x0)) {
        pCVar2->_padding_ = (longlong)&___7CharacterLevelUp_nvidia_command__6B_;
        if ((pCVar2->_padding_ & 1) != 0) {
          google::protobuf::internal::InternalMetadata::
          DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
                    ((InternalMetadata *)&pCVar2->_padding_);
        }
        ::operator_delete(pCVar2,0x20);
      }
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// ~Command @ 14c170850

void __thiscall nvidia_command::Command::~Command(Command *this)

{
  uint uVar1;
  Message *pMVar2;
  undefined8 *puVar3;
  
  this->_padding_ = (longlong)&___7Command_nvidia_command__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 != 0) {
    if (((uVar1 == 2) || (uVar1 == 3)) || (uVar1 == 4)) {
      puVar3 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
      if ((this->_padding_ & 1) != 0) {
        puVar3 = (undefined8 *)*puVar3;
      }
      if ((puVar3 == (undefined8 *)0x0) &&
         (pMVar2 = (this->_impl_).command_.move_, pMVar2 != (Message *)0x0)) {
        (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
      }
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// ~MoveCommand @ 14c1708d0

void __thiscall nvidia_command::MoveCommand::~MoveCommand(MoveCommand *this)

{
  Vector *this_00;
  
  this->_padding_ = (longlong)&___7MoveCommand_nvidia_command__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).destination_;
  if (this_00 != (Vector *)0x0) {
    Vector::~Vector(this_00);
    ::operator_delete(this_00,0x30);
    return;
  }
  return;
}

// ~NvidiaCommandRequest @ 14c170920

void __thiscall
nvidia_command::NvidiaCommandRequest::~NvidiaCommandRequest(NvidiaCommandRequest *this)

{
  this->_padding_ = (longlong)&___7NvidiaCommandRequest_nvidia_command__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if (*(longlong *)&(this->_impl_).commands_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).commands_);
    return;
  }
  return;
}

// ~SkillCommand @ 14c170970

void __thiscall nvidia_command::SkillCommand::~SkillCommand(SkillCommand *this)

{
  ulonglong uVar1;
  
  this->_padding_ = (longlong)&___7SkillCommand_nvidia_command__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  uVar1 = (this->_impl_).alternative_skill_ids_.soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)
                      (this->_impl_).alternative_skill_ids_.soo_rep_.field0_0x0.long_rep.capacity *
                      4 + 8);
    return;
  }
  return;
}

// CopyFrom @ 14c1709d0

void __thiscall
nvidia_command::CharacterLevelUp::CopyFrom(CharacterLevelUp *this,CharacterLevelUp *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar1 & 1) != 0) && (iVar2 = (param_1->_impl_).level_, iVar2 != 0)) {
      (this->_impl_).level_ = iVar2;
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

// CopyFrom @ 14c170a30

void __thiscall nvidia_command::CheatCommand::CopyFrom(CheatCommand *this,CheatCommand *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  CharacterLevelUp *pCVar4;
  CharacterLevelUp *pCVar5;
  Arena *pAVar6;
  
  if (param_1 != this) {
    Clear(this);
    pAVar6 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
    }
    uVar1 = (param_1->_impl_)._oneof_case_[0];
    if (uVar1 != 0) {
      uVar2 = (this->_impl_)._oneof_case_[0];
      if (uVar2 != uVar1) {
        if (uVar2 != 0) {
          clear_cheat_action(this);
        }
        (this->_impl_)._oneof_case_[0] = uVar1;
      }
      if (uVar1 == 1) {
        pCVar5 = (param_1->_impl_).cheat_action_.level_up_;
        if (uVar2 == 1) {
          uVar1 = (pCVar5->_impl_)._has_bits_.has_bits_[0];
          pCVar4 = (this->_impl_).cheat_action_.level_up_;
          if (((uVar1 & 1) != 0) && (iVar3 = (pCVar5->_impl_).level_, iVar3 != 0)) {
            (pCVar4->_impl_).level_ = iVar3;
          }
          (pCVar4->_impl_)._has_bits_.has_bits_[0] =
               (pCVar4->_impl_)._has_bits_.has_bits_[0] | uVar1;
          if ((pCVar5->_padding_ & 1) != 0) {
            google::protobuf::internal::InternalMetadata::
            DoMergeFrom<google::protobuf::UnknownFieldSet>
                      ((InternalMetadata *)&pCVar4->_padding_,
                       (UnknownFieldSet *)((pCVar5->_padding_ & 0xfffffffffffffffeU) + 8));
          }
        }
        else {
          pCVar5 = google::protobuf::Arena::CopyConstruct<nvidia_command::CharacterLevelUp>
                             (pAVar6,pCVar5);
          (this->_impl_).cheat_action_.level_up_ = pCVar5;
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

// CopyFrom @ 14c170b20

void __thiscall nvidia_command::Command::CopyFrom(Command *this,Command *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong64 uVar3;
  MessageLite *pMVar4;
  Arena *pAVar5;
  bool bVar6;
  
  if (param_1 == this) {
    return;
  }
  Clear(this);
  pAVar5 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
  if (((uVar1 & 1) != 0) && (uVar3 = (param_1->_impl_).command_id_, uVar3 != 0)) {
    (this->_impl_).command_id_ = uVar3;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar1;
  uVar1 = (param_1->_impl_)._oneof_case_[0];
  if (uVar1 != 0) {
    uVar2 = (this->_impl_)._oneof_case_[0];
    if (uVar2 != uVar1) {
      if (uVar2 != 0) {
        clear_command(this);
      }
      (this->_impl_)._oneof_case_[0] = uVar1;
    }
    if (uVar1 == 2) {
      bVar6 = uVar2 == 2;
    }
    else if (uVar1 == 3) {
      bVar6 = uVar2 == 3;
    }
    else {
      if (uVar1 != 4) goto LAB_14c170bd2;
      bVar6 = uVar2 == 4;
    }
    pMVar4 = (MessageLite *)(param_1->_impl_).command_.move_;
    if (bVar6) {
      google::protobuf::Message::MergeFrom((this->_impl_).command_.move_,(Message *)pMVar4);
    }
    else {
      pMVar4 = google::protobuf::MessageLite::CopyConstruct(pAVar5,pMVar4);
      (this->_impl_).command_.move_ = (Message *)pMVar4;
    }
  }
LAB_14c170bd2:
  if ((param_1->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return;
}

// CopyFrom @ 14c170c10

void __thiscall nvidia_command::MoveCommand::CopyFrom(MoveCommand *this,MoveCommand *param_1)

{
  uint uVar1;
  Vector *pVVar2;
  Vector *pVVar3;
  Arena *pAVar4;
  
  if (param_1 != this) {
    Clear(this);
    pAVar4 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 1) != 0) {
      pVVar3 = (this->_impl_).destination_;
      pVVar2 = (param_1->_impl_).destination_;
      if (pVVar3 == (Vector *)0x0) {
        pVVar3 = google::protobuf::Arena::CopyConstruct<Vector>(pAVar4,pVVar2);
        (this->_impl_).destination_ = pVVar3;
      }
      else {
        Vector::MergeImpl((MessageLite *)pVVar3,(MessageLite *)pVVar2);
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

// CopyFrom @ 14c170cb0

void __thiscall
nvidia_command::NvidiaCommandRequest::CopyFrom
          (NvidiaCommandRequest *this,NvidiaCommandRequest *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  
  if (param_1 != this) {
    Clear(this);
    if (*(int *)&(param_1->_impl_).commands_.field_0x8 != 0) {
      google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
                ((RepeatedPtrFieldBase *)&(this->_impl_).commands_,
                 (RepeatedPtrFieldBase *)&(param_1->_impl_).commands_,
                 google::protobuf::Arena::CopyConstruct<nvidia_command::Command>);
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar1 & 1) != 0) && (uVar2 = (param_1->_impl_).entity_, uVar2 != 0)) {
      (this->_impl_).entity_ = uVar2;
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

// CopyFrom @ 14c170d30

void __thiscall nvidia_command::SkillCommand::CopyFrom(SkillCommand *this,SkillCommand *param_1)

{
  uint uVar1;
  int iVar2;
  ulong64 uVar3;
  
  if (param_1 != this) {
    Clear(this);
    google::protobuf::RepeatedField<int>::MergeFrom
              (&(this->_impl_).alternative_skill_ids_,&(param_1->_impl_).alternative_skill_ids_);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 3) != 0) {
      if (((uVar1 & 1) != 0) && (uVar3 = (param_1->_impl_).target_id_, uVar3 != 0)) {
        (this->_impl_).target_id_ = uVar3;
      }
      if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).skill_id_, iVar2 != 0)) {
        (this->_impl_).skill_id_ = iVar2;
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

// GetMetadata @ 14c170db0

Metadata * __thiscall
nvidia_command::CharacterLevelUp::GetMetadata
          (CharacterLevelUp *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&CharacterLevelUp_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c170df0

Metadata * __thiscall
nvidia_command::CheatCommand::GetMetadata(CheatCommand *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&CheatCommand_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c170e30

Metadata * __thiscall
nvidia_command::Command::GetMetadata(Command *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&Command_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c170e70

Metadata * __thiscall
nvidia_command::MoveCommand::GetMetadata(MoveCommand *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&MoveCommand_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c170eb0

Metadata * __thiscall
nvidia_command::NvidiaCommandRequest::GetMetadata
          (NvidiaCommandRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&NvidiaCommandRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c170ef0

Metadata * __thiscall
nvidia_command::SkillCommand::GetMetadata(SkillCommand *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SkillCommand_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c170f30

void __thiscall
nvidia_command::CharacterLevelUp::InternalSwap(CharacterLevelUp *this,CharacterLevelUp *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar3;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  iVar2 = (this->_impl_).level_;
  (this->_impl_).level_ = (param_1->_impl_).level_;
  (param_1->_impl_).level_ = iVar2;
  return;
}

// InternalSwap @ 14c170f70

void __thiscall nvidia_command::CheatCommand::InternalSwap(CheatCommand *this,CheatCommand *param_1)

{
  uint uVar1;
  longlong lVar2;
  CheatActionUnion CVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  CVar3 = (this->_impl_).cheat_action_;
  (this->_impl_).cheat_action_ = (param_1->_impl_).cheat_action_;
  (param_1->_impl_).cheat_action_ = CVar3;
  uVar1 = (this->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = (param_1->_impl_)._oneof_case_[0];
  (param_1->_impl_)._oneof_case_[0] = uVar1;
  return;
}

// InternalSwap @ 14c170fb0

void __thiscall nvidia_command::Command::InternalSwap(Command *this,Command *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulong64 uVar3;
  CommandUnion CVar4;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  uVar3 = (this->_impl_).command_id_;
  (this->_impl_).command_id_ = (param_1->_impl_).command_id_;
  (param_1->_impl_).command_id_ = uVar3;
  CVar4 = (this->_impl_).command_;
  (this->_impl_).command_ = (param_1->_impl_).command_;
  (param_1->_impl_).command_ = CVar4;
  uVar1 = (this->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = (param_1->_impl_)._oneof_case_[0];
  (param_1->_impl_)._oneof_case_[0] = uVar1;
  return;
}

// InternalSwap @ 14c171010

void __thiscall nvidia_command::MoveCommand::InternalSwap(MoveCommand *this,MoveCommand *param_1)

{
  uint uVar1;
  longlong lVar2;
  Vector *pVVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pVVar3 = (this->_impl_).destination_;
  (this->_impl_).destination_ = (param_1->_impl_).destination_;
  (param_1->_impl_).destination_ = pVVar3;
  return;
}

// InternalSwap @ 14c171050

void __thiscall
nvidia_command::NvidiaCommandRequest::InternalSwap
          (NvidiaCommandRequest *this,NvidiaCommandRequest *param_1)

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
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).commands_,(char *)&(param_1->_impl_).commands_);
  uVar3 = (this->_impl_).entity_;
  (this->_impl_).entity_ = (param_1->_impl_).entity_;
  (param_1->_impl_).entity_ = uVar3;
  return;
}

// InternalSwap @ 14c1710b0

void __thiscall nvidia_command::SkillCommand::InternalSwap(SkillCommand *this,SkillCommand *param_1)

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
            ((char *)&(this->_impl_).alternative_skill_ids_,
             (char *)&(param_1->_impl_).alternative_skill_ids_);
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).target_id_,&(this->_impl_).field_0x2c,&(param_1->_impl_).target_id_);
  return;
}

// clear_cheat_action @ 14c171110

void __thiscall nvidia_command::CheatCommand::clear_cheat_action(CheatCommand *this)

{
  CharacterLevelUp *pCVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 1) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if (puVar2 == (undefined8 *)0x0) {
      pCVar1 = (this->_impl_).cheat_action_.level_up_;
      if (pCVar1 != (CharacterLevelUp *)0x0) {
        pCVar1->_padding_ = (longlong)&___7CharacterLevelUp_nvidia_command__6B_;
        if ((pCVar1->_padding_ & 1) != 0) {
          google::protobuf::internal::InternalMetadata::
          DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
                    ((InternalMetadata *)&pCVar1->_padding_);
        }
        ::operator_delete(pCVar1,0x20);
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

// clear_command @ 14c1711b0

void __thiscall nvidia_command::Command::clear_command(Command *this)

{
  uint uVar1;
  Message *pMVar2;
  undefined8 *puVar3;
  
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (((uVar1 == 2) || (uVar1 == 3)) || (uVar1 == 4)) {
    puVar3 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar3 = (undefined8 *)*puVar3;
    }
    if ((puVar3 == (undefined8 *)0x0) &&
       (pMVar2 = (this->_impl_).command_.move_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// clear_destination @ 14c171210

void __thiscall nvidia_command::MoveCommand::clear_destination(MoveCommand *this)

{
  Vector *this_00;
  
  this_00 = (this->_impl_).destination_;
  if (this_00 != (Vector *)0x0) {
    Vector::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// set_allocated_cheat @ 14c171240

void __thiscall nvidia_command::Command::set_allocated_cheat(Command *this,CheatCommand *param_1)

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
  if (((uVar1 == 2) || (uVar1 == 3)) || (uVar1 == 4)) {
    if (bVar5 != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if ((pAVar4 == (Arena *)0x0) &&
       (pMVar2 = (this->_impl_).command_.move_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (CheatCommand *)0x0) {
    pAVar4 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if (pAVar3 != pAVar4) {
      param_1 = (CheatCommand *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar3,(MessageLite *)param_1,pAVar4);
    }
    (this->_impl_)._oneof_case_[0] = 4;
    (this->_impl_).command_.move_ = (Message *)param_1;
  }
  return;
}

// set_allocated_level_up @ 14c171300

void __thiscall
nvidia_command::CheatCommand::set_allocated_level_up(CheatCommand *this,CharacterLevelUp *param_1)

{
  CharacterLevelUp *pCVar1;
  byte bVar2;
  Arena *pAVar3;
  Arena *pAVar4;
  
  pAVar4 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar2 = (byte)this->_padding_ & 1;
  pAVar3 = pAVar4;
  if (bVar2 != 0) {
    pAVar3 = (Arena *)(pAVar4->impl_).tag_and_id_;
  }
  if ((this->_impl_)._oneof_case_[0] == 1) {
    if (bVar2 != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if ((pAVar4 == (Arena *)0x0) &&
       (pCVar1 = (this->_impl_).cheat_action_.level_up_, pCVar1 != (CharacterLevelUp *)0x0)) {
      pCVar1->_padding_ = (longlong)&___7CharacterLevelUp_nvidia_command__6B_;
      if ((pCVar1->_padding_ & 1) != 0) {
        google::protobuf::internal::InternalMetadata::
        DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
                  ((InternalMetadata *)&pCVar1->_padding_);
      }
      ::operator_delete(pCVar1,0x20);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (CharacterLevelUp *)0x0) {
    pAVar4 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if (pAVar3 != pAVar4) {
      param_1 = (CharacterLevelUp *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar3,(MessageLite *)param_1,pAVar4);
    }
    (this->_impl_)._oneof_case_[0] = 1;
    (this->_impl_).cheat_action_.level_up_ = param_1;
  }
  return;
}

// set_allocated_move @ 14c1713d0

void __thiscall nvidia_command::Command::set_allocated_move(Command *this,MoveCommand *param_1)

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
  if (((uVar1 == 2) || (uVar1 == 3)) || (uVar1 == 4)) {
    if (bVar5 != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if ((pAVar4 == (Arena *)0x0) &&
       (pMVar2 = (this->_impl_).command_.move_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (MoveCommand *)0x0) {
    pAVar4 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if (pAVar3 != pAVar4) {
      param_1 = (MoveCommand *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar3,(MessageLite *)param_1,pAVar4);
    }
    (this->_impl_)._oneof_case_[0] = 2;
    (this->_impl_).command_.move_ = (Message *)param_1;
  }
  return;
}

// set_allocated_skill @ 14c171490

void __thiscall nvidia_command::Command::set_allocated_skill(Command *this,SkillCommand *param_1)

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
  if (((uVar1 == 2) || (uVar1 == 3)) || (uVar1 == 4)) {
    if (bVar5 != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if ((pAVar4 == (Arena *)0x0) &&
       (pMVar2 = (this->_impl_).command_.move_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SkillCommand *)0x0) {
    pAVar4 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if (pAVar3 != pAVar4) {
      param_1 = (SkillCommand *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar3,(MessageLite *)param_1,pAVar4);
    }
    (this->_impl_)._oneof_case_[0] = 3;
    (this->_impl_).command_.move_ = (Message *)param_1;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_CharacterLevelUp_default_instance_'' @ 150441df0

void __cdecl
nvidia_command::_dynamic_atexit_destructor_for___CharacterLevelUp_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_CheatCommand_default_instance_'' @ 150441e00

void __cdecl nvidia_command::_dynamic_atexit_destructor_for___CheatCommand_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_Command_default_instance_'' @ 150441e10

void __cdecl nvidia_command::_dynamic_atexit_destructor_for___Command_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_MoveCommand_default_instance_'' @ 150441e20

void __cdecl nvidia_command::_dynamic_atexit_destructor_for___MoveCommand_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_NvidiaCommandRequest_default_instance_'' @ 150441e30

void __cdecl
nvidia_command::_dynamic_atexit_destructor_for___NvidiaCommandRequest_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_SkillCommand_default_instance_'' @ 150441e40

void __cdecl nvidia_command::_dynamic_atexit_destructor_for___SkillCommand_default_instance___(void)

{
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 33

// `dynamic_initializer_for_'_TeamInfo_default_instance_'' @ 141299b50

void __cdecl _dynamic_initializer_for___TeamInfo_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___TeamInfo_default_instance___);
  return;
}

// `dynamic_initializer_for_'_TeamType_default_instance_'' @ 141299b70

void __cdecl _dynamic_initializer_for___TeamType_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___TeamType_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 141299b90

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_structs_5fteam_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c233a40

void __cdecl TeamType::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4);
  if (iVar1 != 0) {
    if (*(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4) != iVar1) {
      *(int *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4) = iVar1;
    }
    switch(iVar1) {
    case 1:
      *(char *)&param_1[1]._padding_ = (char)param_2[1]._padding_;
      break;
    case 2:
      *(int *)&param_1[1]._padding_ = (int)param_2[1]._padding_;
      break;
    case 3:
    case 4:
    case 5:
    case 6:
      param_1[1]._padding_ = param_2[1]._padding_;
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

// Clear @ 14c233ad0

void __thiscall TeamType::Clear(TeamType *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  (this->_impl_)._oneof_case_[0] = 0;
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

// ByteSizeLong @ 14c233af0

ulong64 __thiscall TeamType::ByteSizeLong(TeamType *this)

{
  longlong lVar1;
  ulonglong uVar2;
  __uint64 _Var3;
  int iVar4;
  ulong64 uVar5;
  
  uVar5 = 0;
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
    uVar5 = 2;
    break;
  case 2:
    uVar2 = (longlong)(this->_impl_).item_.faction_ | 1;
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
    uVar5 = (ulonglong)(iVar4 * -9 + 0x280U >> 6) + 1;
    break;
  case 3:
  case 4:
  case 5:
    uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne
                      ((this->_impl_).item_.union__);
    break;
  case 6:
    uVar2 = (this->_impl_).item_.player_ | 1;
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
    uVar5 = (ulong64)(iVar4 * -9 + 0x2c0U >> 6);
  }
  _Var3 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar5,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14c233be0

uchar * __thiscall
TeamType::_InternalSerialize(TeamType *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  char cVar1;
  uchar *puVar2;
  int iVar3;
  ItemUnion IVar4;
  ConstantInitialized CVar5;
  ulonglong uVar6;
  
  switch((this->_impl_)._oneof_case_[0]) {
  case 1:
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    if ((this->_impl_)._oneof_case_[0] == 1) {
      cVar1 = (this->_impl_).item_.neutral_;
    }
    else {
      cVar1 = '\0';
    }
    *param_1 = '\b';
    param_1[1] = cVar1 != '\0';
    param_1 = param_1 + 2;
    break;
  case 2:
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    if ((this->_impl_)._oneof_case_[0] == 2) {
      iVar3 = (this->_impl_).item_.faction_;
    }
    else {
      iVar3 = 0;
    }
    *param_1 = '\x10';
    uVar6 = (ulonglong)iVar3;
    while( true ) {
      param_1 = param_1 + 1;
      CVar5 = SUB81(uVar6,0);
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *param_1 = (byte)CVar5 | 0x80;
    }
    *param_1 = (uchar)CVar5;
    goto LAB_14c233d36;
  case 3:
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<3>
                        (param_2,(this->_impl_).item_.union__,param_1);
    break;
  case 4:
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<4>
                        (param_2,(this->_impl_).item_.union__,param_1);
    break;
  case 5:
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<5>
                        (param_2,(this->_impl_).item_.union__,param_1);
    break;
  case 6:
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    if ((this->_impl_)._oneof_case_[0] == 6) {
      IVar4 = (this->_impl_).item_;
      *param_1 = '0';
      for (; param_1 = param_1 + 1, 0x7f < IVar4.player_; IVar4.player_ = IVar4.player_ >> 7) {
        *param_1 = IVar4.neutral_ | 0x80;
      }
    }
    else {
      *param_1 = '0';
      param_1 = param_1 + 1;
      IVar4.union__ = 0;
    }
    *param_1 = (uchar)IVar4._constinit_;
LAB_14c233d36:
    param_1 = param_1 + 1;
  }
  if ((this->_padding_ & 1) == 0) {
    return (uchar *)(ConstantInitialized *)param_1;
  }
  puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar2;
}

// GetClassData @ 14c233d90

ClassData * __thiscall TeamType::GetClassData(TeamType *this)

{
  return (ClassData *)&TeamType_class_data_;
}

// PlacementNew_ @ 14c233db0

void * __cdecl TeamType::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7TeamType__6B_;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c233dd0

void * __thiscall TeamType::_scalar_deleting_destructor_(TeamType *this,uint param_1)

{
  this->_padding_ = (longlong)&___7TeamType__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((this->_impl_)._oneof_case_[0] != 0) {
    (this->_impl_)._oneof_case_[0] = 0;
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14c233e30

void __cdecl TeamInfo::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  if ((int)param_2[1]._internal_metadata_.ptr_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)(param_1 + 1),(RepeatedPtrFieldBase *)(param_2 + 1),
               google::protobuf::Arena::CopyConstruct<TeamType>);
  }
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c233e90

void __thiscall TeamInfo::Clear(TeamInfo *this)

{
  if (0 < *(int *)&(this->_impl_).teams_.field_0x8) {
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

// ByteSizeLong @ 14c233ed0

ulong64 __thiscall TeamInfo::ByteSizeLong(TeamInfo *this)

{
  uint uVar1;
  Message *this_00;
  longlong lVar2;
  RepeatedPtrField<TeamType> *pRVar3;
  ulonglong uVar4;
  __uint64 _Var5;
  uint uVar6;
  int iVar7;
  ulong64 uVar8;
  Impl_ *pIVar9;
  __uint64 _Var10;
  
  uVar4 = *(ulonglong *)&(this->_impl_).teams_;
  pIVar9 = &this->_impl_;
  uVar1 = *(uint *)&(this->_impl_).teams_.field_0x8;
  _Var10 = (__uint64)uVar1;
  if ((uVar4 & 1) != 0) {
    pIVar9 = (Impl_ *)(uVar4 + 7);
  }
  pRVar3 = &pIVar9->teams_;
  for (; pIVar9 != (Impl_ *)(&pRVar3->field_0x0 + (longlong)(int)uVar1 * 8);
      pIVar9 = (Impl_ *)&(pIVar9->teams_).field_0x8) {
    this_00 = *(Message **)&pIVar9->teams_;
    uVar8 = 0;
    switch(*(undefined4 *)&this_00[1].field_0xc) {
    case 1:
      uVar8 = 2;
      break;
    case 2:
      uVar4 = (longlong)*(int *)(this_00 + 1) | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar7 = 0x3f - (int)lVar2;
      }
      else {
        iVar7 = (int)LZCOUNT(uVar4);
      }
      uVar8 = (ulonglong)(iVar7 * -9 + 0x280U >> 6) + 1;
      break;
    case 3:
    case 4:
    case 5:
      uVar8 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(*(long64 *)(this_00 + 1))
      ;
      break;
    case 6:
      uVar4 = *(ulonglong *)(this_00 + 1) | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar7 = 0x3f - (int)lVar2;
      }
      else {
        iVar7 = (int)LZCOUNT(uVar4);
      }
      uVar8 = (ulong64)(iVar7 * -9 + 0x2c0U >> 6);
    }
    _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                      (this_00,uVar8,(CachedSize *)&this_00[1].field_0x8);
    uVar6 = (uint)_Var5 | 1;
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
    _Var10 = _Var10 + (iVar7 * -9 + 0x160U >> 6) + _Var5;
  }
  _Var10 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                     ((Message *)this,_Var10,&(this->_impl_)._cached_size_);
  return _Var10;
}

// _InternalSerialize @ 14c234060

uchar * __thiscall
TeamInfo::_InternalSerialize(TeamInfo *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  uint uVar3;
  
  uVar1 = *(uint *)&(this->_impl_).teams_.field_0x8;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      pMVar2 = *(MessageLite **)&(this->_impl_).teams_;
      if (((ulonglong)pMVar2 & 1) != 0) {
        pMVar2 = *(MessageLite **)((longlong)&pMVar2->_padding_ + (longlong)(int)uVar3 * 8 + 7);
      }
      param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                          (1,pMVar2,(int)pMVar2[1]._internal_metadata_.ptr_,param_1,param_2);
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

// GetClassData @ 14c2340f0

ClassData * __thiscall TeamInfo::GetClassData(TeamInfo *this)

{
  return (ClassData *)&TeamInfo_class_data_;
}

// PlacementNew_ @ 14c234110

void * __cdecl TeamInfo::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7TeamInfo__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(Arena **)((longlong)param_2 + 0x20) = param_3;
  return param_2;
}

// CopyConstruct<TeamType> @ 14c234140

void * __cdecl google::protobuf::Arena::CopyConstruct<TeamType>(Arena *param_1,void *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == (Arena *)0x0) {
    puVar1 = ::operator_new(0x20);
  }
  else {
    puVar1 = Allocate(param_1,0x20);
  }
  puVar1[1] = param_1;
  *puVar1 = &___7TeamType__6B_;
  puVar1[2] = *(undefined8 *)((longlong)param_2 + 0x10);
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

// TeamInfo @ 14c2341d0

TeamInfo * __thiscall TeamInfo::TeamInfo(TeamInfo *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7TeamInfo__6B_;
  *(undefined8 *)&(this->_impl_).teams_ = 0;
  *(undefined8 *)&(this->_impl_).teams_.field_0x8 = 0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  *(Arena **)&(this->_impl_).teams_.field_0x10 = param_1;
  return this;
}

// TeamInfo @ 14c234200

TeamInfo * __thiscall TeamInfo::TeamInfo(TeamInfo *this,Arena *param_1,TeamInfo *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7TeamInfo__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  *(Arena **)&(this->_impl_).teams_.field_0x10 = param_1;
  *(undefined8 *)&(this->_impl_).teams_ = 0;
  *(undefined8 *)&(this->_impl_).teams_.field_0x8 = 0;
  if (*(int *)&(param_2->_impl_).teams_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&this->_impl_,(RepeatedPtrFieldBase *)&param_2->_impl_,
               google::protobuf::Arena::CopyConstruct<TeamType>);
  }
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  return this;
}

// TeamType @ 14c234290

TeamType * __thiscall TeamType::TeamType(TeamType *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7TeamType__6B_;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = 0;
  return this;
}

// TeamType @ 14c2342b0

TeamType * __thiscall TeamType::TeamType(TeamType *this,Arena *param_1,TeamType *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7TeamType__6B_;
  (this->_impl_).item_ = (param_2->_impl_).item_;
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_)._oneof_case_[0] = (param_2->_impl_)._oneof_case_[0];
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// ~RepeatedPtrField<TeamType> @ 14c234310

void __thiscall
google::protobuf::RepeatedPtrField<TeamType>::~RepeatedPtrField<TeamType>
          (RepeatedPtrField<TeamType> *this)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  RepeatedPtrField<TeamType> *pRVar4;
  
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
    pRVar4 = (RepeatedPtrField<TeamType> *)(*(longlong *)this + 7);
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

// ~TeamInfo @ 14c234330

void __thiscall TeamInfo::~TeamInfo(TeamInfo *this)

{
  this->_padding_ = (longlong)&___7TeamInfo__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if (*(longlong *)&(this->_impl_).teams_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&this->_impl_);
    return;
  }
  return;
}

// ~TeamType @ 14c234380

void __thiscall TeamType::~TeamType(TeamType *this)

{
  this->_padding_ = (longlong)&___7TeamType__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((this->_impl_)._oneof_case_[0] != 0) {
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// CopyFrom @ 14c2343c0

void __thiscall TeamInfo::CopyFrom(TeamInfo *this,TeamInfo *param_1)

{
  if (param_1 != this) {
    Clear(this);
    if (*(int *)&(param_1->_impl_).teams_.field_0x8 != 0) {
      google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
                ((RepeatedPtrFieldBase *)&this->_impl_,(RepeatedPtrFieldBase *)&param_1->_impl_,
                 google::protobuf::Arena::CopyConstruct<TeamType>);
    }
    if ((param_1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&this->_padding_,
                 (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    }
  }
  return;
}

// CopyFrom @ 14c234420

void __thiscall TeamType::CopyFrom(TeamType *this,TeamType *param_1)

{
  uint uVar1;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = (param_1->_impl_)._oneof_case_[0];
    if (uVar1 != 0) {
      if ((this->_impl_)._oneof_case_[0] != uVar1) {
        (this->_impl_)._oneof_case_[0] = uVar1;
      }
      switch(uVar1) {
      case 1:
        (this->_impl_).item_._constinit_ = (param_1->_impl_).item_._constinit_;
        break;
      case 2:
        (this->_impl_).item_.faction_ = (param_1->_impl_).item_.faction_;
        break;
      case 3:
      case 4:
      case 5:
      case 6:
        (this->_impl_).item_ = (param_1->_impl_).item_;
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

// GetMetadata @ 14c2344d0

Metadata * __thiscall TeamInfo::GetMetadata(TeamInfo *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&TeamInfo_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c234510

Metadata * __thiscall TeamType::GetMetadata(TeamType *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&TeamType_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c234550

void __thiscall TeamInfo::InternalSwap(TeamInfo *this,TeamInfo *param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar1;
  google::protobuf::internal::memswap<16>((char *)&this->_impl_,(char *)&param_1->_impl_);
  return;
}

// InternalSwap @ 14c234580

void __thiscall TeamType::InternalSwap(TeamType *this,TeamType *param_1)

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

// clear_item @ 14c2345c0

void __thiscall TeamType::clear_item(TeamType *this)

{
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// `dynamic_atexit_destructor_for_'_TeamInfo_default_instance_'' @ 150443cb0

void __cdecl _dynamic_atexit_destructor_for___TeamInfo_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_TeamType_default_instance_'' @ 150443cc0

void __cdecl _dynamic_atexit_destructor_for___TeamType_default_instance___(void)

{
  return;
}


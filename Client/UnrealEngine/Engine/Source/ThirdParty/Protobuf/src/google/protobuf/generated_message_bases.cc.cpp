// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 9

// Swap<google::protobuf::UnknownFieldSet> @ 14fa7cb40

/* public: void __cdecl google::protobuf::internal::InternalMetadata::Swap<class
   google::protobuf::UnknownFieldSet>(class google::protobuf::internal::InternalMetadata * __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::internal::InternalMetadata::Swap<google::protobuf::UnknownFieldSet>
          (InternalMetadata *this,InternalMetadata *param_1)

{
  UnknownFieldSet *pUVar1;
  
  if ((this->ptr_ & 1) != 0) {
    if ((param_1->ptr_ & 1) != 0) {
      DoSwap<google::protobuf::UnknownFieldSet>
                (this,(UnknownFieldSet *)((param_1->ptr_ & 0xfffffffffffffffeU) + 8));
      return;
    }
    pUVar1 = mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>(param_1);
    DoSwap<google::protobuf::UnknownFieldSet>(this,pUVar1);
    return;
  }
  if ((param_1->ptr_ & 1) != 0) {
    DoSwap<google::protobuf::UnknownFieldSet>
              (this,(UnknownFieldSet *)((param_1->ptr_ & 0xfffffffffffffffeU) + 8));
    return;
  }
  return;
}

// ~ZeroFieldsBase @ 14fa7cbb0

/* protected: virtual __cdecl google::protobuf::internal::ZeroFieldsBase::~ZeroFieldsBase(void)
   __ptr64 */

void __thiscall google::protobuf::internal::ZeroFieldsBase::~ZeroFieldsBase(ZeroFieldsBase *this)

{
  this->_padding_ = (longlong)vftable;
  if ((this->_padding_ & 1) != 0) {
    InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14fa7cbe0

/* protected: static unsigned __int64 __cdecl
   google::protobuf::internal::ZeroFieldsBase::ByteSizeLong(class google::protobuf::MessageLite
   const & __ptr64) */

__uint64 __cdecl google::protobuf::internal::ZeroFieldsBase::ByteSizeLong(MessageLite *param_1)

{
  __uint64 _Var1;
  
  _Var1 = protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)param_1,0,(CachedSize *)(param_1 + 1));
  return _Var1;
}

// Clear @ 14fa7cc00

/* protected: static void __cdecl google::protobuf::internal::ZeroFieldsBase::Clear(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::internal::ZeroFieldsBase::Clear(MessageLite *param_1)

{
  ulong64 uVar1;
  UnknownFieldSet *this;
  InternalMetadata *this_00;
  uint uVar2;
  
  this_00 = &param_1->_internal_metadata_;
  if ((this_00->ptr_ & 1) == 0) {
    return;
  }
  if ((this_00->ptr_ & 1) == 0) {
    this = InternalMetadata::mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>(this_00)
    ;
  }
  else {
    this = (UnknownFieldSet *)((this_00->ptr_ & 0xfffffffffffffffeU) + 8);
  }
  uVar1 = (this->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar2 = (this->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar2 = (uint)uVar1 & 3;
  }
  if (uVar2 != 0) {
    UnknownFieldSet::ClearFallback(this);
    return;
  }
  return;
}

// CopyImpl @ 14fa7cc20

/* protected: static void __cdecl google::protobuf::internal::ZeroFieldsBase::CopyImpl(class
   google::protobuf::Message & __ptr64,class google::protobuf::Message const & __ptr64) */

void __cdecl google::protobuf::internal::ZeroFieldsBase::CopyImpl(Message *param_1,Message *param_2)

{
  if (param_2 != param_1) {
    if ((param_1->field_0x8 & 1) != 0) {
      InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&param_1->field_0x8);
    }
    if ((param_2->field_0x8 & 1) != 0) {
      InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&param_1->field_0x8,
                 (UnknownFieldSet *)((*(ulonglong *)&param_2->field_0x8 & 0xfffffffffffffffe) + 8));
    }
  }
  return;
}

// InternalSwap @ 14fa7cc70

/* protected: void __cdecl google::protobuf::internal::ZeroFieldsBase::InternalSwap(class
   google::protobuf::internal::ZeroFieldsBase * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::ZeroFieldsBase::InternalSwap
          (ZeroFieldsBase *this,ZeroFieldsBase *param_1)

{
  longlong *this_00;
  longlong *this_01;
  UnknownFieldSet *pUVar1;
  
  this_00 = &this->_padding_;
  this_01 = &param_1->_padding_;
  if ((this->_padding_ & 1) != 0) {
    if ((*this_01 & 1) != 0) {
      InternalMetadata::DoSwap<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)this_00,
                 (UnknownFieldSet *)((*this_01 & 0xfffffffffffffffeU) + 8));
      return;
    }
    pUVar1 = InternalMetadata::mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>
                       ((InternalMetadata *)this_01);
    InternalMetadata::DoSwap<google::protobuf::UnknownFieldSet>((InternalMetadata *)this_00,pUVar1);
    return;
  }
  if ((*this_01 & 1) != 0) {
    InternalMetadata::DoSwap<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)this_00,(UnknownFieldSet *)((*this_01 & 0xfffffffffffffffeU) + 8)
              );
    return;
  }
  return;
}

// MergeImpl @ 14fa7ccf0

/* protected: static void __cdecl google::protobuf::internal::ZeroFieldsBase::MergeImpl(class
   google::protobuf::MessageLite & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl
google::protobuf::internal::ZeroFieldsBase::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
    return;
  }
  return;
}

// SharedDtor @ 14fa7cd20

/* protected: static void __cdecl google::protobuf::internal::ZeroFieldsBase::SharedDtor(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::internal::ZeroFieldsBase::SharedDtor(MessageLite *param_1)

{
  longlong *plVar1;
  InternalMetadata *pIVar2;
  uint uVar3;
  void *pvVar4;
  
  pIVar2 = &param_1->_internal_metadata_;
  if ((pIVar2->ptr_ & 1) == 0) {
    return;
  }
  pvVar4 = (void *)(pIVar2->ptr_ & 0xfffffffffffffffe);
  if (pvVar4 != (void *)0x0) {
    if ((~((byte)*(undefined8 *)((longlong)pvVar4 + 8) >> 2) & 1) == 0) {
      uVar3 = *(uint *)((longlong)pvVar4 + 0x10);
    }
    else {
      uVar3 = (uint)*(undefined8 *)((longlong)pvVar4 + 8) & 3;
    }
    if (uVar3 != 0) {
      UnknownFieldSet::ClearFallback((UnknownFieldSet *)((longlong)pvVar4 + 8));
    }
    if ((~((byte)*(ulonglong *)((longlong)pvVar4 + 8) >> 2) & 1) == 0) {
      plVar1 = (longlong *)((*(ulonglong *)((longlong)pvVar4 + 8) & 0xfffffffffffffff8) - 0x10);
      if (*plVar1 == 0) {
        ::operator_delete(plVar1,((longlong)*(int *)((longlong)pvVar4 + 0x14) + 1) * 0x10);
      }
    }
    ::operator_delete(pvVar4,0x18);
    pIVar2->ptr_ = 0;
    return;
  }
  pIVar2->ptr_ = 0;
  return;
}

// _InternalSerialize @ 14fa7cd40

/* protected: static unsigned char * __ptr64 __cdecl
   google::protobuf::internal::ZeroFieldsBase::_InternalSerialize(class
   google::protobuf::MessageLite const & __ptr64,unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64) */

uchar * __cdecl
google::protobuf::internal::ZeroFieldsBase::_InternalSerialize
          (MessageLite *param_1,uchar *param_2,EpsCopyOutputStream *param_3)

{
  uchar *puVar1;
  
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    puVar1 = WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)
                        (((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8),param_2,
                        param_3);
    return puVar1;
  }
  return param_2;
}


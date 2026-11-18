// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 22

// MergeImpl @ 14fb2d9f0

/* private: static void __cdecl pb::CppFeatures::MergeImpl(class google::protobuf::MessageLite &
   __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl pb::CppFeatures::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      *(int *)&param_1[1]._internal_metadata_.ptr_ = (int)param_2[1]._internal_metadata_.ptr_;
    }
    if ((uVar1 & 2) != 0) {
      *(undefined1 *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 4) =
           *(undefined1 *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 4);
    }
    if ((uVar1 & 4) != 0) {
      *(undefined1 *)((longlong)&param_1[1]._internal_metadata_.ptr_ + 5) =
           *(undefined1 *)((longlong)&param_2[1]._internal_metadata_.ptr_ + 5);
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

// Clear @ 14fb2da50

/* public: virtual void __cdecl pb::CppFeatures::Clear(void) __ptr64 */

void __thiscall pb::CppFeatures::Clear(CppFeatures *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  CppFeatures *this_01;
  uint uVar2;
  
  if (((byte)this[0x10] & 7) != 0) {
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined2 *)(this + 0x1c) = 0;
  }
  *(undefined4 *)(this + 0x10) = 0;
  this_01 = this + 8;
  if (((byte)*this_01 & 1) == 0) {
    return;
  }
  if (((byte)*this_01 & 1) == 0) {
    this_00 = google::protobuf::internal::InternalMetadata::
              mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>
                        ((InternalMetadata *)this_01);
  }
  else {
    this_00 = (UnknownFieldSet *)((*(ulonglong *)this_01 & 0xfffffffffffffffe) + 8);
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

// ByteSizeLong @ 14fb2da80

/* public: virtual unsigned __int64 __cdecl pb::CppFeatures::ByteSizeLong(void)const __ptr64 */

__uint64 __thiscall pb::CppFeatures::ByteSizeLong(CppFeatures *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  __uint64 _Var5;
  
  uVar4 = *(uint *)(this + 0x10) & 6;
  if (__isa_available < 2) {
    uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f) * 0x1010101 >> 0x18;
  }
  else {
    uVar4 = POPCOUNT(uVar4);
  }
  _Var5 = (__uint64)(int)(uVar4 * 2);
  if ((*(uint *)(this + 0x10) & 1) != 0) {
    uVar3 = (longlong)*(int *)(this + 0x18) | 1;
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
    _Var5 = _Var5 + 1 + (ulonglong)(iVar2 * -9 + 0x280U >> 6);
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,(CachedSize *)(this + 0x14));
  return _Var5;
}

// _InternalSerialize @ 14fb2db30

/* public: virtual unsigned char * __ptr64 __cdecl pb::CppFeatures::_InternalSerialize(unsigned char
   * __ptr64,class google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
pb::CppFeatures::_InternalSerialize(CppFeatures *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  CppFeatures CVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  uchar *puVar5;
  byte bVar6;
  
  uVar2 = *(uint *)(this + 0x10);
  if ((uVar2 & 2) != 0) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    CVar1 = this[0x1c];
    *param_1 = '\b';
    param_1[1] = CVar1 != (CppFeatures)0x0;
    param_1 = param_1 + 2;
  }
  if ((uVar2 & 1) != 0) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (ulonglong)*(int *)(this + 0x18);
    *param_1 = 0x10;
    while( true ) {
      pbVar3 = param_1 + 1;
      bVar6 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *pbVar3 = bVar6 | 0x80;
      param_1 = pbVar3;
    }
    *pbVar3 = bVar6;
    param_1 = param_1 + 2;
  }
  if ((uVar2 & 4) != 0) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    CVar1 = this[0x1d];
    *param_1 = 0x18;
    param_1[1] = CVar1 != (CppFeatures)0x0;
    param_1 = param_1 + 2;
  }
  if (((byte)this[8] & 1) == 0) {
    return param_1;
  }
  puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((*(ulonglong *)(this + 8) & 0xfffffffffffffffe) + 8),
                      param_1,param_2);
  return puVar5;
}

// GetClassData @ 14fb2dc30

/* protected: virtual struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   pb::CppFeatures::GetClassData(void)const __ptr64 */

ClassData * __thiscall pb::CppFeatures::GetClassData(CppFeatures *this)

{
  return (ClassData *)&CppFeatures_class_data_;
}

// PlacementNew_ @ 14fb2dc50

/* protected: static void * __ptr64 __cdecl pb::CppFeatures::PlacementNew_(void const * __ptr64,void
   * __ptr64,class google::protobuf::Arena * __ptr64) */

void * __cdecl pb::CppFeatures::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = vftable;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14fb2dc80

/* public: virtual void * __ptr64 __cdecl pb::CppFeatures::`scalar deleting destructor'(unsigned
   int) __ptr64 */

void * __thiscall pb::CppFeatures::_scalar_deleting_destructor_(CppFeatures *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)(this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// CppFeatures @ 14fb2dcd0

/* protected: __cdecl pb::CppFeatures::CppFeatures(class google::protobuf::Arena * __ptr64) __ptr64
    */

CppFeatures * __thiscall pb::CppFeatures::CppFeatures(CppFeatures *this,Arena *param_1)

{
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x1c) = 0;
  return this;
}

// CppFeatures @ 14fb2dd00

/* protected: __cdecl pb::CppFeatures::CppFeatures(class google::protobuf::Arena * __ptr64,class
   pb::CppFeatures const & __ptr64) __ptr64 */

CppFeatures * __thiscall
pb::CppFeatures::CppFeatures(CppFeatures *this,Arena *param_1,CppFeatures *param_2)

{
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_2 + 0x18);
  this[0x1c] = param_2[0x1c];
  this[0x1d] = param_2[0x1d];
  if (((byte)param_2[8] & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8),
               (UnknownFieldSet *)((*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe) + 8));
  }
  return this;
}

// Impl_ @ 14fb2dd70

/* public: __cdecl pb::CppFeatures::Impl_::Impl_(struct pb::CppFeatures::Impl_ const & __ptr64)
   __ptr64 */

Impl_ * __thiscall pb::CppFeatures::Impl_::Impl_(Impl_ *this,Impl_ *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  this[0xc] = param_1[0xc];
  this[0xd] = param_1[0xd];
  return this;
}

// Impl_ @ 14fb2dda0

/* public: __cdecl pb::CppFeatures::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

Impl_ * __thiscall
pb::CppFeatures::Impl_::Impl_(Impl_ *this,InternalVisibility param_1,Arena *param_2)

{
  *(undefined8 *)this = 0;
  return this;
}

// ~CppFeatures @ 14fb2ddb0

/* public: virtual __cdecl pb::CppFeatures::~CppFeatures(void) __ptr64 */

void __thiscall pb::CppFeatures::~CppFeatures(CppFeatures *this)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)(this + 8));
  }
  return;
}

// ~CppFeaturesDefaultTypeInternal @ 14fb2dde0

/* public: __cdecl pb::CppFeaturesDefaultTypeInternal::~CppFeaturesDefaultTypeInternal(void) __ptr64
    */

void __thiscall
pb::CppFeaturesDefaultTypeInternal::~CppFeaturesDefaultTypeInternal
          (CppFeaturesDefaultTypeInternal *this)

{
  return;
}

// CopyFrom @ 14fb2ddf0

/* public: void __cdecl pb::CppFeatures::CopyFrom(class pb::CppFeatures const & __ptr64) __ptr64 */

void __thiscall pb::CppFeatures::CopyFrom(CppFeatures *this,CppFeatures *param_1)

{
  uint uVar1;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = *(uint *)(param_1 + 0x10);
    if ((uVar1 & 7) != 0) {
      if ((uVar1 & 1) != 0) {
        *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
      }
      if ((uVar1 & 2) != 0) {
        this[0x1c] = param_1[0x1c];
      }
      if ((uVar1 & 4) != 0) {
        this[0x1d] = param_1[0x1d];
      }
    }
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | uVar1;
    if (((byte)param_1[8] & 1) != 0) {
      google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)(this + 8),
                 (UnknownFieldSet *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 8));
    }
  }
  return;
}

// CppFeatures_StringType_descriptor @ 14fb2de70

/* class google::protobuf::EnumDescriptor const * __ptr64 __cdecl
   pb::CppFeatures_StringType_descriptor(void) */

EnumDescriptor * __cdecl pb::CppFeatures_StringType_descriptor(void)

{
  google::protobuf::internal::AssignDescriptors
            ((DescriptorTable *)&descriptor_table_google_2fprotobuf_2fcpp_5ffeatures_2eproto);
  return DAT_1553e5770;
}

// GetMetadata @ 14fb2dea0

/* public: struct google::protobuf::Metadata __cdecl pb::CppFeatures::GetMetadata(void)const __ptr64
    */

Metadata * __thiscall
pb::CppFeatures::GetMetadata(CppFeatures *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,(ClassDataFull *)&CppFeatures_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14fb2dee0

/* private: void __cdecl pb::CppFeatures::InternalSwap(class pb::CppFeatures * __ptr64) __ptr64 */

void __thiscall pb::CppFeatures::InternalSwap(CppFeatures *this,CppFeatures *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar1 = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  __std_swap_ranges_trivially_swappable_noalias(this + 0x18,this + 0x1e,param_1 + 0x18);
  return;
}

// MergeFrom @ 14fb2df20

/* public: void __cdecl pb::CppFeatures::MergeFrom(class pb::CppFeatures const & __ptr64) __ptr64 */

void __thiscall pb::CppFeatures::MergeFrom(CppFeatures *this,CppFeatures *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    }
    if ((uVar1 & 2) != 0) {
      this[0x1c] = param_1[0x1c];
    }
    if ((uVar1 & 4) != 0) {
      this[0x1d] = param_1[0x1d];
    }
  }
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | uVar1;
  if (((byte)param_1[8] & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8),
               (UnknownFieldSet *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 8));
    return;
  }
  return;
}

// SharedCtor @ 14fb2df80

/* private: void __cdecl pb::CppFeatures::SharedCtor(class google::protobuf::Arena * __ptr64)
   __ptr64 */

void __thiscall pb::CppFeatures::SharedCtor(CppFeatures *this,Arena *param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x1c) = 0;
  return;
}

// SharedDtor @ 14fb2dfa0

/* private: static void __cdecl pb::CppFeatures::SharedDtor(class google::protobuf::MessageLite &
   __ptr64) */

void __cdecl pb::CppFeatures::SharedDtor(MessageLite *param_1)

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
      google::protobuf::UnknownFieldSet::ClearFallback((UnknownFieldSet *)((longlong)pvVar4 + 8));
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

// _internal_enum_name_uses_string_view @ 14fb2dfc0

/* private: bool __cdecl pb::CppFeatures::_internal_enum_name_uses_string_view(void)const __ptr64 */

bool __thiscall pb::CppFeatures::_internal_enum_name_uses_string_view(CppFeatures *this)

{
  return (bool)this[0x1d];
}

// FUN_150474670 @ 150474670

void FUN_150474670(void)

{
  return;
}


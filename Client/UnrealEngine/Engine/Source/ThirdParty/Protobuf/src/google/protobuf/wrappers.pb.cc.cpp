// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 193

// FUN_1414560a0 @ 1414560a0

void FUN_1414560a0(void)

{
  google::protobuf::internal::AddDescriptors
            ((DescriptorTable *)&descriptor_table_google_2fprotobuf_2fwrappers_2eproto);
  DAT_1553e57b4 = 0;
  return;
}

// MergeImpl @ 14fb777d0

/* private: static void __cdecl google::protobuf::UInt64Value::MergeImpl(class
   google::protobuf::MessageLite & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::UInt64Value::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = (uint)param_2[1]._padding_;
  if (((uVar1 & 1) != 0) && (lVar2 = param_2[1]._internal_metadata_.ptr_, lVar2 != 0)) {
    param_1[1]._internal_metadata_.ptr_ = lVar2;
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
    return;
  }
  return;
}

// Clear @ 14fb77810

/* public: virtual void __cdecl google::protobuf::UInt64Value::Clear(void) __ptr64 */

void __thiscall google::protobuf::UInt64Value::Clear(UInt64Value *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  UInt64Value *this_01;
  uint uVar2;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this_01 = this + 8;
  if (((byte)*this_01 & 1) == 0) {
    return;
  }
  if (((byte)*this_01 & 1) == 0) {
    this_00 = internal::InternalMetadata::
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
    UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14fb77840

/* public: virtual unsigned __int64 __cdecl google::protobuf::UInt64Value::ByteSizeLong(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::UInt64Value::ByteSizeLong(UInt64Value *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((byte)this[0x10] & 1) != 0) && (*(ulonglong *)(this + 0x18) != 0)) {
    uVar3 = *(ulonglong *)(this + 0x18) | 1;
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
  _Var4 = protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,(CachedSize *)(this + 0x14));
  return _Var4;
}

// _InternalSerialize @ 14fb778a0

/* public: virtual unsigned char * __ptr64 __cdecl
   google::protobuf::UInt64Value::_InternalSerialize(unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::UInt64Value::_InternalSerialize
          (UInt64Value *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  uchar *puVar4;
  
  if ((((byte)this[0x10] & 1) != 0) && (*(longlong *)(this + 0x18) != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar3 = *(ulonglong *)(this + 0x18);
    *param_1 = 8;
    while( true ) {
      pbVar1 = param_1 + 1;
      bVar2 = (byte)uVar3;
      if (uVar3 < 0x80) break;
      uVar3 = uVar3 >> 7;
      *pbVar1 = bVar2 | 0x80;
      param_1 = pbVar1;
    }
    *pbVar1 = bVar2;
    param_1 = param_1 + 2;
  }
  if (((byte)this[8] & 1) == 0) {
    return param_1;
  }
  puVar4 = internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((*(ulonglong *)(this + 8) & 0xfffffffffffffffe) + 8),
                      param_1,param_2);
  return puVar4;
}

// GetClassData @ 14fb77940

/* protected: virtual struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   google::protobuf::UInt64Value::GetClassData(void)const __ptr64 */

ClassData * __thiscall google::protobuf::UInt64Value::GetClassData(UInt64Value *this)

{
  return (ClassData *)&UInt64Value_class_data_;
}

// PlacementNew_ @ 14fb77960

/* protected: static void * __ptr64 __cdecl google::protobuf::UInt64Value::PlacementNew_(void const
   * __ptr64,void * __ptr64,class google::protobuf::Arena * __ptr64) */

void * __cdecl
google::protobuf::UInt64Value::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = vftable;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `vector_deleting_destructor' @ 14fb77990

/* public: virtual void * __ptr64 __cdecl google::protobuf::UInt64Value::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::UInt64Value::_vector_deleting_destructor_(UInt64Value *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14fb779e0

/* private: static void __cdecl google::protobuf::UInt32Value::MergeImpl(class
   google::protobuf::MessageLite & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::UInt32Value::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)param_2[1]._padding_;
  if (((uVar1 & 1) != 0) && (iVar2 = (int)param_2[1]._internal_metadata_.ptr_, iVar2 != 0)) {
    *(int *)&param_1[1]._internal_metadata_.ptr_ = iVar2;
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
    return;
  }
  return;
}

// Clear @ 14fb77a20

/* public: virtual void __cdecl google::protobuf::UInt32Value::Clear(void) __ptr64 */

void __thiscall google::protobuf::UInt32Value::Clear(UInt32Value *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  UInt32Value *this_01;
  uint uVar2;
  
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this_01 = this + 8;
  if (((byte)*this_01 & 1) == 0) {
    return;
  }
  if (((byte)*this_01 & 1) == 0) {
    this_00 = internal::InternalMetadata::
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
    UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14fb77a40

/* public: virtual unsigned __int64 __cdecl google::protobuf::UInt32Value::ByteSizeLong(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::UInt32Value::ByteSizeLong(UInt32Value *this)

{
  uint uVar1;
  int iVar2;
  __uint64 _Var3;
  
  _Var3 = 0;
  if ((((byte)this[0x10] & 1) != 0) && (*(uint *)(this + 0x18) != 0)) {
    uVar1 = *(uint *)(this + 0x18) | 1;
    if (__isa_available < 5) {
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 0x1f - iVar2;
    }
    else {
      iVar2 = LZCOUNT(uVar1);
    }
    _Var3 = (__uint64)(iVar2 * -9 + 0x1a0U >> 6);
  }
  _Var3 = protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var3,(CachedSize *)(this + 0x14));
  return _Var3;
}

// _InternalSerialize @ 14fb77a90

/* public: virtual unsigned char * __ptr64 __cdecl
   google::protobuf::UInt32Value::_InternalSerialize(unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::UInt32Value::_InternalSerialize
          (UInt32Value *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uchar *puVar3;
  byte bVar4;
  
  if ((((byte)this[0x10] & 1) != 0) && (*(int *)(this + 0x18) != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar2 = *(uint *)(this + 0x18);
    *param_1 = 8;
    while( true ) {
      pbVar1 = param_1 + 1;
      bVar4 = (byte)uVar2;
      if (uVar2 < 0x80) break;
      uVar2 = uVar2 >> 7;
      *pbVar1 = bVar4 | 0x80;
      param_1 = pbVar1;
    }
    *pbVar1 = bVar4;
    param_1 = param_1 + 2;
  }
  if (((byte)this[8] & 1) == 0) {
    return param_1;
  }
  puVar3 = internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((*(ulonglong *)(this + 8) & 0xfffffffffffffffe) + 8),
                      param_1,param_2);
  return puVar3;
}

// GetClassData @ 14fb77b30

/* protected: virtual struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   google::protobuf::UInt32Value::GetClassData(void)const __ptr64 */

ClassData * __thiscall google::protobuf::UInt32Value::GetClassData(UInt32Value *this)

{
  return (ClassData *)&UInt32Value_class_data_;
}

// PlacementNew_ @ 14fb77b50

/* protected: static void * __ptr64 __cdecl google::protobuf::UInt32Value::PlacementNew_(void const
   * __ptr64,void * __ptr64,class google::protobuf::Arena * __ptr64) */

void * __cdecl
google::protobuf::UInt32Value::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = vftable;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14fb77b80

/* public: virtual void * __ptr64 __cdecl google::protobuf::UInt32Value::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::UInt32Value::_scalar_deleting_destructor_(UInt32Value *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14fb77bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: static void __cdecl google::protobuf::StringValue::MergeImpl(class
   google::protobuf::MessageLite & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::StringValue::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  InternalMetadata *this;
  undefined8 uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  ulong64 uVar4;
  Arena *pAVar5;
  undefined1 auStack_58 [32];
  _Bxty local_38;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 1) != 0) {
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
    this = &param_1[1]._internal_metadata_;
    if ((pbVar3->_Mypair)._Myval2._Mysize == 0) {
      if ((this->ptr_ & 3) == 0) {
        local_38._8_8_ = 0;
        local_28 = 0;
        local_20 = 0xf;
        local_38._Ptr = (char *)0x0;
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
        }
        internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)this,
                   (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                   pAVar5);
        if (0xf < local_20) {
          uVar4 = local_20 + 1;
          uVar2 = local_38._Ptr;
          if (0xfff < uVar4) {
            uVar4 = local_20 + 0x28;
            uVar2 = *(undefined8 *)(local_38._Ptr + -8);
            if ((char *)0x1f < local_38._Ptr + (-8 - uVar2)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete((void *)uVar2,uVar4);
        }
      }
    }
    else {
      *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
      pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
      if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
        pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
      }
      internal::ArenaStringPtr::Set<>((ArenaStringPtr *)this,pbVar3,pAVar5);
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14fb77d00

/* public: virtual void __cdecl google::protobuf::StringValue::Clear(void) __ptr64 */

void __thiscall google::protobuf::StringValue::Clear(StringValue *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  undefined8 *puVar2;
  StringValue *this_01;
  uint uVar3;
  undefined8 *puVar4;
  
  if (((byte)this[0x10] & 1) != 0) {
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 0x18) & 0xfffffffffffffffc);
    puVar4 = puVar2;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar4 = (undefined8 *)*puVar2;
    }
    puVar2[2] = 0;
    *(undefined1 *)puVar4 = 0;
  }
  *(undefined4 *)(this + 0x10) = 0;
  this_01 = this + 8;
  if (((byte)*this_01 & 1) == 0) {
    return;
  }
  if (((byte)*this_01 & 1) == 0) {
    this_00 = internal::InternalMetadata::
              mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>
                        ((InternalMetadata *)this_01);
  }
  else {
    this_00 = (UnknownFieldSet *)((*(ulonglong *)this_01 & 0xfffffffffffffffe) + 8);
  }
  uVar1 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar3 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar1 & 3;
  }
  if (uVar3 != 0) {
    UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14fb77d40

/* public: virtual unsigned __int64 __cdecl google::protobuf::StringValue::ByteSizeLong(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::StringValue::ByteSizeLong(StringValue *this)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((byte)this[0x10] & 1) != 0) &&
     (lVar1 = *(longlong *)((*(ulonglong *)(this + 0x18) & 0xfffffffffffffffc) + 0x10), lVar1 != 0))
  {
    uVar2 = (uint)lVar1 | 1;
    if (__isa_available < 5) {
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 0x1f - iVar3;
    }
    else {
      iVar3 = LZCOUNT(uVar2);
    }
    _Var4 = (ulonglong)(iVar3 * -9 + 0x160U >> 6) + 1 + lVar1;
  }
  _Var4 = protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,(CachedSize *)(this + 0x14));
  return _Var4;
}

// _InternalSerialize @ 14fb77db0

/* public: virtual unsigned char * __ptr64 __cdecl
   google::protobuf::StringValue::_InternalSerialize(unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::StringValue::_InternalSerialize
          (StringValue *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  uchar *puVar2;
  char *pcVar3;
  char *pcVar4;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if (((byte)this[0x10] & 1) != 0) {
    pcVar4 = (char *)(*(ulonglong *)(this + 0x18) & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_18._Mydata = "google.protobuf.StringValue.value";
      local_18._Mysize = 0x21;
      internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_18._Mysize = *puVar1;
      local_18._Mydata = pcVar4;
      param_1 = io::EpsCopyOutputStream::WriteStringMaybeAliased(param_2,1,&local_18,param_1);
    }
  }
  if (((byte)this[8] & 1) == 0) {
    return param_1;
  }
  puVar2 = internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((*(ulonglong *)(this + 8) & 0xfffffffffffffffe) + 8),
                      param_1,param_2);
  return puVar2;
}

// GetClassData @ 14fb77ec0

/* protected: virtual struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   google::protobuf::StringValue::GetClassData(void)const __ptr64 */

ClassData * __thiscall google::protobuf::StringValue::GetClassData(StringValue *this)

{
  return (ClassData *)&StringValue_class_data_;
}

// PlacementNew_ @ 14fb77ee0

/* protected: static void * __ptr64 __cdecl google::protobuf::StringValue::PlacementNew_(void const
   * __ptr64,void * __ptr64,class google::protobuf::Arena * __ptr64) */

void * __cdecl
google::protobuf::StringValue::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = vftable;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) = &internal::fixed_address_empty_string;
  return param_2;
}

// `vector_deleting_destructor' @ 14fb77f10

/* public: virtual void * __ptr64 __cdecl google::protobuf::StringValue::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::StringValue::_vector_deleting_destructor_(StringValue *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8));
  }
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)(this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14fb77f70

/* private: static void __cdecl google::protobuf::Int64Value::MergeImpl(class
   google::protobuf::MessageLite & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::Int64Value::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = (uint)param_2[1]._padding_;
  if (((uVar1 & 1) != 0) && (lVar2 = param_2[1]._internal_metadata_.ptr_, lVar2 != 0)) {
    param_1[1]._internal_metadata_.ptr_ = lVar2;
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
    return;
  }
  return;
}

// Clear @ 14fb77fb0

/* public: virtual void __cdecl google::protobuf::Int64Value::Clear(void) __ptr64 */

void __thiscall google::protobuf::Int64Value::Clear(Int64Value *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  Int64Value *this_01;
  uint uVar2;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this_01 = this + 8;
  if (((byte)*this_01 & 1) == 0) {
    return;
  }
  if (((byte)*this_01 & 1) == 0) {
    this_00 = internal::InternalMetadata::
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
    UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14fb77fe0

/* public: virtual unsigned __int64 __cdecl google::protobuf::Int64Value::ByteSizeLong(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::Int64Value::ByteSizeLong(Int64Value *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((byte)this[0x10] & 1) != 0) && (*(ulonglong *)(this + 0x18) != 0)) {
    uVar3 = *(ulonglong *)(this + 0x18) | 1;
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
  _Var4 = protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,(CachedSize *)(this + 0x14));
  return _Var4;
}

// _InternalSerialize @ 14fb78040

/* public: virtual unsigned char * __ptr64 __cdecl
   google::protobuf::Int64Value::_InternalSerialize(unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::Int64Value::_InternalSerialize
          (Int64Value *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uchar *puVar1;
  
  if ((((byte)this[0x10] & 1) != 0) && (*(longlong *)(this + 0x18) != 0)) {
    param_1 = internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,*(longlong *)(this + 0x18),param_1);
  }
  if (((byte)this[8] & 1) != 0) {
    puVar1 = internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((*(ulonglong *)(this + 8) & 0xfffffffffffffffe) + 8),
                        param_1,param_2);
    return puVar1;
  }
  return param_1;
}

// GetClassData @ 14fb780b0

/* protected: virtual struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   google::protobuf::Int64Value::GetClassData(void)const __ptr64 */

ClassData * __thiscall google::protobuf::Int64Value::GetClassData(Int64Value *this)

{
  return (ClassData *)&Int64Value_class_data_;
}

// PlacementNew_ @ 14fb780d0

/* protected: static void * __ptr64 __cdecl google::protobuf::Int64Value::PlacementNew_(void const *
   __ptr64,void * __ptr64,class google::protobuf::Arena * __ptr64) */

void * __cdecl
google::protobuf::Int64Value::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = vftable;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14fb78100

/* public: virtual void * __ptr64 __cdecl google::protobuf::Int64Value::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::Int64Value::_scalar_deleting_destructor_(Int64Value *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14fb78150

/* private: static void __cdecl google::protobuf::Int32Value::MergeImpl(class
   google::protobuf::MessageLite & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::Int32Value::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)param_2[1]._padding_;
  if (((uVar1 & 1) != 0) && (iVar2 = (int)param_2[1]._internal_metadata_.ptr_, iVar2 != 0)) {
    *(int *)&param_1[1]._internal_metadata_.ptr_ = iVar2;
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
    return;
  }
  return;
}

// Clear @ 14fb78190

/* public: virtual void __cdecl google::protobuf::Int32Value::Clear(void) __ptr64 */

void __thiscall google::protobuf::Int32Value::Clear(Int32Value *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  Int32Value *this_01;
  uint uVar2;
  
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this_01 = this + 8;
  if (((byte)*this_01 & 1) == 0) {
    return;
  }
  if (((byte)*this_01 & 1) == 0) {
    this_00 = internal::InternalMetadata::
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
    UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14fb781b0

/* public: virtual unsigned __int64 __cdecl google::protobuf::Int32Value::ByteSizeLong(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::Int32Value::ByteSizeLong(Int32Value *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((byte)this[0x10] & 1) != 0) && (*(int *)(this + 0x18) != 0)) {
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
    _Var4 = (__uint64)(iVar2 * -9 + 0x2c0U >> 6);
  }
  _Var4 = protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,(CachedSize *)(this + 0x14));
  return _Var4;
}

// _InternalSerialize @ 14fb78210

/* public: virtual unsigned char * __ptr64 __cdecl
   google::protobuf::Int32Value::_InternalSerialize(unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::Int32Value::_InternalSerialize
          (Int32Value *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uchar *puVar1;
  
  if ((((byte)this[0x10] & 1) != 0) && (*(int *)(this + 0x18) != 0)) {
    param_1 = internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,*(int *)(this + 0x18),param_1);
  }
  if (((byte)this[8] & 1) != 0) {
    puVar1 = internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((*(ulonglong *)(this + 8) & 0xfffffffffffffffe) + 8),
                        param_1,param_2);
    return puVar1;
  }
  return param_1;
}

// GetClassData @ 14fb78280

/* protected: virtual struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   google::protobuf::Int32Value::GetClassData(void)const __ptr64 */

ClassData * __thiscall google::protobuf::Int32Value::GetClassData(Int32Value *this)

{
  return (ClassData *)&Int32Value_class_data_;
}

// PlacementNew_ @ 14fb782a0

/* protected: static void * __ptr64 __cdecl google::protobuf::Int32Value::PlacementNew_(void const *
   __ptr64,void * __ptr64,class google::protobuf::Arena * __ptr64) */

void * __cdecl
google::protobuf::Int32Value::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = vftable;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `vector_deleting_destructor' @ 14fb782d0

/* public: virtual void * __ptr64 __cdecl google::protobuf::Int32Value::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::Int32Value::_vector_deleting_destructor_(Int32Value *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14fb78320

/* private: static void __cdecl google::protobuf::FloatValue::MergeImpl(class
   google::protobuf::MessageLite & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::FloatValue::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2[1]._padding_;
  if (((uVar2 & 1) != 0) && (iVar1 = (int)param_2[1]._internal_metadata_.ptr_, iVar1 != 0)) {
    *(int *)&param_1[1]._internal_metadata_.ptr_ = iVar1;
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar2;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
    return;
  }
  return;
}

// Clear @ 14fb78370

/* public: virtual void __cdecl google::protobuf::FloatValue::Clear(void) __ptr64 */

void __thiscall google::protobuf::FloatValue::Clear(FloatValue *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  FloatValue *this_01;
  uint uVar2;
  
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this_01 = this + 8;
  if (((byte)*this_01 & 1) == 0) {
    return;
  }
  if (((byte)*this_01 & 1) == 0) {
    this_00 = internal::InternalMetadata::
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
    UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14fb78390

/* public: virtual unsigned __int64 __cdecl google::protobuf::FloatValue::ByteSizeLong(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::FloatValue::ByteSizeLong(FloatValue *this)

{
  __uint64 _Var1;
  
  _Var1 = 0;
  if ((((byte)this[0x10] & 1) != 0) && (*(int *)(this + 0x18) != 0)) {
    _Var1 = 5;
  }
  _Var1 = protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var1,(CachedSize *)(this + 0x14));
  return _Var1;
}

// _InternalSerialize @ 14fb783c0

/* public: virtual unsigned char * __ptr64 __cdecl
   google::protobuf::FloatValue::_InternalSerialize(unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::FloatValue::_InternalSerialize
          (FloatValue *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  undefined4 uVar1;
  uchar *puVar2;
  
  if ((((byte)this[0x10] & 1) != 0) && (*(int *)(this + 0x18) != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar1 = *(undefined4 *)(this + 0x18);
    *param_1 = '\r';
    *(undefined4 *)(param_1 + 1) = uVar1;
    param_1 = param_1 + 5;
  }
  if (((byte)this[8] & 1) != 0) {
    puVar2 = internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((*(ulonglong *)(this + 8) & 0xfffffffffffffffe) + 8),
                        param_1,param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14fb78440

/* protected: virtual struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   google::protobuf::FloatValue::GetClassData(void)const __ptr64 */

ClassData * __thiscall google::protobuf::FloatValue::GetClassData(FloatValue *this)

{
  return (ClassData *)&FloatValue_class_data_;
}

// PlacementNew_ @ 14fb78460

/* protected: static void * __ptr64 __cdecl google::protobuf::FloatValue::PlacementNew_(void const *
   __ptr64,void * __ptr64,class google::protobuf::Arena * __ptr64) */

void * __cdecl
google::protobuf::FloatValue::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = vftable;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `vector_deleting_destructor' @ 14fb78490

/* public: virtual void * __ptr64 __cdecl google::protobuf::FloatValue::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::FloatValue::_vector_deleting_destructor_(FloatValue *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14fb784e0

/* private: static void __cdecl google::protobuf::DoubleValue::MergeImpl(class
   google::protobuf::MessageLite & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::DoubleValue::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2[1]._padding_;
  if (((uVar2 & 1) != 0) && (lVar1 = param_2[1]._internal_metadata_.ptr_, lVar1 != 0)) {
    param_1[1]._internal_metadata_.ptr_ = lVar1;
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar2;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
    return;
  }
  return;
}

// Clear @ 14fb78530

/* public: virtual void __cdecl google::protobuf::DoubleValue::Clear(void) __ptr64 */

void __thiscall google::protobuf::DoubleValue::Clear(DoubleValue *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  DoubleValue *this_01;
  uint uVar2;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this_01 = this + 8;
  if (((byte)*this_01 & 1) == 0) {
    return;
  }
  if (((byte)*this_01 & 1) == 0) {
    this_00 = internal::InternalMetadata::
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
    UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14fb78560

/* public: virtual unsigned __int64 __cdecl google::protobuf::DoubleValue::ByteSizeLong(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::DoubleValue::ByteSizeLong(DoubleValue *this)

{
  __uint64 _Var1;
  
  _Var1 = 0;
  if ((((byte)this[0x10] & 1) != 0) && (*(longlong *)(this + 0x18) != 0)) {
    _Var1 = 9;
  }
  _Var1 = protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var1,(CachedSize *)(this + 0x14));
  return _Var1;
}

// _InternalSerialize @ 14fb78590

/* public: virtual unsigned char * __ptr64 __cdecl
   google::protobuf::DoubleValue::_InternalSerialize(unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::DoubleValue::_InternalSerialize
          (DoubleValue *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  undefined8 uVar1;
  uchar *puVar2;
  
  if ((((byte)this[0x10] & 1) != 0) && (*(longlong *)(this + 0x18) != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar1 = *(undefined8 *)(this + 0x18);
    *param_1 = '\t';
    *(undefined8 *)(param_1 + 1) = uVar1;
    param_1 = param_1 + 9;
  }
  if (((byte)this[8] & 1) != 0) {
    puVar2 = internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((*(ulonglong *)(this + 8) & 0xfffffffffffffffe) + 8),
                        param_1,param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14fb78610

/* protected: virtual struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   google::protobuf::DoubleValue::GetClassData(void)const __ptr64 */

ClassData * __thiscall google::protobuf::DoubleValue::GetClassData(DoubleValue *this)

{
  return (ClassData *)&DoubleValue_class_data_;
}

// PlacementNew_ @ 14fb78630

/* protected: static void * __ptr64 __cdecl google::protobuf::DoubleValue::PlacementNew_(void const
   * __ptr64,void * __ptr64,class google::protobuf::Arena * __ptr64) */

void * __cdecl
google::protobuf::DoubleValue::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = vftable;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `vector_deleting_destructor' @ 14fb78660

/* public: virtual void * __ptr64 __cdecl google::protobuf::DoubleValue::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::DoubleValue::_vector_deleting_destructor_(DoubleValue *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14fb786b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: static void __cdecl google::protobuf::BytesValue::MergeImpl(class
   google::protobuf::MessageLite & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::BytesValue::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  InternalMetadata *this;
  undefined8 uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  ulong64 uVar4;
  Arena *pAVar5;
  undefined1 auStack_58 [32];
  _Bxty local_38;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 1) != 0) {
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
    this = &param_1[1]._internal_metadata_;
    if ((pbVar3->_Mypair)._Myval2._Mysize == 0) {
      if ((this->ptr_ & 3) == 0) {
        local_38._8_8_ = 0;
        local_28 = 0;
        local_20 = 0xf;
        local_38._Ptr = (char *)0x0;
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
        }
        internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)this,
                   (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                   pAVar5);
        if (0xf < local_20) {
          uVar4 = local_20 + 1;
          uVar2 = local_38._Ptr;
          if (0xfff < uVar4) {
            uVar4 = local_20 + 0x28;
            uVar2 = *(undefined8 *)(local_38._Ptr + -8);
            if ((char *)0x1f < local_38._Ptr + (-8 - uVar2)) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          ::operator_delete((void *)uVar2,uVar4);
        }
      }
    }
    else {
      *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
      pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
      if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
        pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
      }
      internal::ArenaStringPtr::Set<>((ArenaStringPtr *)this,pbVar3,pAVar5);
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14fb787e0

/* public: virtual void __cdecl google::protobuf::BytesValue::Clear(void) __ptr64 */

void __thiscall google::protobuf::BytesValue::Clear(BytesValue *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  undefined8 *puVar2;
  BytesValue *this_01;
  uint uVar3;
  undefined8 *puVar4;
  
  if (((byte)this[0x10] & 1) != 0) {
    puVar2 = (undefined8 *)(*(ulonglong *)(this + 0x18) & 0xfffffffffffffffc);
    puVar4 = puVar2;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar4 = (undefined8 *)*puVar2;
    }
    puVar2[2] = 0;
    *(undefined1 *)puVar4 = 0;
  }
  *(undefined4 *)(this + 0x10) = 0;
  this_01 = this + 8;
  if (((byte)*this_01 & 1) == 0) {
    return;
  }
  if (((byte)*this_01 & 1) == 0) {
    this_00 = internal::InternalMetadata::
              mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>
                        ((InternalMetadata *)this_01);
  }
  else {
    this_00 = (UnknownFieldSet *)((*(ulonglong *)this_01 & 0xfffffffffffffffe) + 8);
  }
  uVar1 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar1 >> 2) & 1) == 0) {
    uVar3 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar1 & 3;
  }
  if (uVar3 != 0) {
    UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14fb78820

/* public: virtual unsigned __int64 __cdecl google::protobuf::BytesValue::ByteSizeLong(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::BytesValue::ByteSizeLong(BytesValue *this)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((byte)this[0x10] & 1) != 0) &&
     (lVar1 = *(longlong *)((*(ulonglong *)(this + 0x18) & 0xfffffffffffffffc) + 0x10), lVar1 != 0))
  {
    uVar2 = (uint)lVar1 | 1;
    if (__isa_available < 5) {
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 0x1f - iVar3;
    }
    else {
      iVar3 = LZCOUNT(uVar2);
    }
    _Var4 = (ulonglong)(iVar3 * -9 + 0x160U >> 6) + 1 + lVar1;
  }
  _Var4 = protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,(CachedSize *)(this + 0x14));
  return _Var4;
}

// _InternalSerialize @ 14fb78890

/* public: virtual unsigned char * __ptr64 __cdecl
   google::protobuf::BytesValue::_InternalSerialize(unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::BytesValue::_InternalSerialize
          (BytesValue *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  char *pcVar2;
  uchar *puVar3;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if (((byte)this[0x10] & 1) != 0) {
    pcVar2 = (char *)(*(ulonglong *)(this + 0x18) & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar2 + 0x10);
    if (*puVar1 != 0) {
      if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
        pcVar2 = *(char **)pcVar2;
      }
      local_18._Mydata = pcVar2;
      local_18._Mysize = *puVar1;
      param_1 = io::EpsCopyOutputStream::WriteStringMaybeAliased(param_2,1,&local_18,param_1);
    }
  }
  if (((byte)this[8] & 1) != 0) {
    puVar3 = internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((*(ulonglong *)(this + 8) & 0xfffffffffffffffe) + 8),
                        param_1,param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14fb78930

/* protected: virtual struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   google::protobuf::BytesValue::GetClassData(void)const __ptr64 */

ClassData * __thiscall google::protobuf::BytesValue::GetClassData(BytesValue *this)

{
  return (ClassData *)&BytesValue_class_data_;
}

// PlacementNew_ @ 14fb78950

/* protected: static void * __ptr64 __cdecl google::protobuf::BytesValue::PlacementNew_(void const *
   __ptr64,void * __ptr64,class google::protobuf::Arena * __ptr64) */

void * __cdecl
google::protobuf::BytesValue::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = vftable;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) = &internal::fixed_address_empty_string;
  return param_2;
}

// `scalar_deleting_destructor' @ 14fb78980

/* public: virtual void * __ptr64 __cdecl google::protobuf::BytesValue::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::BytesValue::_scalar_deleting_destructor_(BytesValue *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8));
  }
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)(this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// MergeImpl @ 14fb789e0

/* private: static void __cdecl google::protobuf::BoolValue::MergeImpl(class
   google::protobuf::MessageLite & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::BoolValue::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2[1]._padding_;
  if (((uVar2 & 1) != 0) && (cVar1 = (char)param_2[1]._internal_metadata_.ptr_, cVar1 != '\0')) {
    *(char *)&param_1[1]._internal_metadata_.ptr_ = cVar1;
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar2;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
    return;
  }
  return;
}

// Clear @ 14fb78a20

/* public: virtual void __cdecl google::protobuf::BoolValue::Clear(void) __ptr64 */

void __thiscall google::protobuf::BoolValue::Clear(BoolValue *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  BoolValue *this_01;
  uint uVar2;
  
  this[0x18] = (BoolValue)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  this_01 = this + 8;
  if (((byte)*this_01 & 1) == 0) {
    return;
  }
  if (((byte)*this_01 & 1) == 0) {
    this_00 = internal::InternalMetadata::
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
    UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14fb78a40

/* public: virtual unsigned __int64 __cdecl google::protobuf::BoolValue::ByteSizeLong(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::BoolValue::ByteSizeLong(BoolValue *this)

{
  __uint64 _Var1;
  
  _Var1 = 0;
  if ((((byte)this[0x10] & 1) != 0) && (this[0x18] != (BoolValue)0x0)) {
    _Var1 = 2;
  }
  _Var1 = protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var1,(CachedSize *)(this + 0x14));
  return _Var1;
}

// _InternalSerialize @ 14fb78a70

/* public: virtual unsigned char * __ptr64 __cdecl
   google::protobuf::BoolValue::_InternalSerialize(unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::BoolValue::_InternalSerialize
          (BoolValue *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  BoolValue BVar1;
  uchar *puVar2;
  
  if ((((byte)this[0x10] & 1) != 0) && (this[0x18] != (BoolValue)0x0)) {
    if (param_2->end_ <= param_1) {
      param_1 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    BVar1 = this[0x18];
    *param_1 = '\b';
    param_1[1] = BVar1 != (BoolValue)0x0;
    param_1 = param_1 + 2;
  }
  if (((byte)this[8] & 1) != 0) {
    puVar2 = internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((*(ulonglong *)(this + 8) & 0xfffffffffffffffe) + 8),
                        param_1,param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14fb78af0

/* protected: virtual struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   google::protobuf::BoolValue::GetClassData(void)const __ptr64 */

ClassData * __thiscall google::protobuf::BoolValue::GetClassData(BoolValue *this)

{
  return (ClassData *)&BoolValue_class_data_;
}

// PlacementNew_ @ 14fb78b10

/* protected: static void * __ptr64 __cdecl google::protobuf::BoolValue::PlacementNew_(void const *
   __ptr64,void * __ptr64,class google::protobuf::Arena * __ptr64) */

void * __cdecl
google::protobuf::BoolValue::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = vftable;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined1 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `vector_deleting_destructor' @ 14fb78b40

/* public: virtual void * __ptr64 __cdecl google::protobuf::BoolValue::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::BoolValue::_vector_deleting_destructor_(BoolValue *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// BoolValue @ 14fb78b90

/* protected: __cdecl google::protobuf::BoolValue::BoolValue(class google::protobuf::Arena *
   __ptr64) __ptr64 */

BoolValue * __thiscall google::protobuf::BoolValue::BoolValue(BoolValue *this,Arena *param_1)

{
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x18] = (BoolValue)0x0;
  return this;
}

// BoolValue @ 14fb78bc0

/* protected: __cdecl google::protobuf::BoolValue::BoolValue(class google::protobuf::Arena *
   __ptr64,class google::protobuf::BoolValue const & __ptr64) __ptr64 */

BoolValue * __thiscall
google::protobuf::BoolValue::BoolValue(BoolValue *this,Arena *param_1,BoolValue *param_2)

{
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 0x14);
  this[0x18] = param_2[0x18];
  if (((byte)param_2[8] & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8),
               (UnknownFieldSet *)((*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe) + 8));
  }
  return this;
}

// BytesValue @ 14fb78c20

/* protected: __cdecl google::protobuf::BytesValue::BytesValue(class google::protobuf::Arena *
   __ptr64) __ptr64 */

BytesValue * __thiscall google::protobuf::BytesValue::BytesValue(BytesValue *this,Arena *param_1)

{
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x10) = 0;
  *(GlobalEmptyString **)(this + 0x18) = &internal::fixed_address_empty_string;
  return this;
}

// BytesValue @ 14fb78c50

/* protected: __cdecl google::protobuf::BytesValue::BytesValue(class google::protobuf::Arena *
   __ptr64,class google::protobuf::BytesValue const & __ptr64) __ptr64 */

BytesValue * __thiscall
google::protobuf::BytesValue::BytesValue(BytesValue *this,Arena *param_1,BytesValue *param_2)

{
  TaggedStringPtr TVar1;
  
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  if (((byte)param_2[8] & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8),
               (UnknownFieldSet *)((*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe) + 8));
  }
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(this + 0x14) = 0;
  TVar1.ptr_ = *(void **)(param_2 + 0x18);
  if (((ulonglong)TVar1.ptr_ & 3) == 0) {
    *(void **)(this + 0x18) = TVar1.ptr_;
    return this;
  }
  TVar1 = internal::TaggedStringPtr::ForceCopy
                    ((TaggedStringPtr *)(param_2 + 0x18),(Arena *)&stack0x00000008);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)TVar1.ptr_;
  return this;
}

// DoubleValue @ 14fb78cf0

/* protected: __cdecl google::protobuf::DoubleValue::DoubleValue(class google::protobuf::Arena *
   __ptr64) __ptr64 */

DoubleValue * __thiscall
google::protobuf::DoubleValue::DoubleValue(DoubleValue *this,Arena *param_1)

{
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return this;
}

// DoubleValue @ 14fb78d20

/* protected: __cdecl google::protobuf::DoubleValue::DoubleValue(class google::protobuf::Arena *
   __ptr64,class google::protobuf::DoubleValue const & __ptr64) __ptr64 */

DoubleValue * __thiscall
google::protobuf::DoubleValue::DoubleValue(DoubleValue *this,Arena *param_1,DoubleValue *param_2)

{
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_2 + 0x18);
  if (((byte)param_2[8] & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8),
               (UnknownFieldSet *)((*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe) + 8));
  }
  return this;
}

// FloatValue @ 14fb78d80

/* protected: __cdecl google::protobuf::FloatValue::FloatValue(class google::protobuf::Arena *
   __ptr64) __ptr64 */

FloatValue * __thiscall google::protobuf::FloatValue::FloatValue(FloatValue *this,Arena *param_1)

{
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}

// FloatValue @ 14fb78db0

/* protected: __cdecl google::protobuf::FloatValue::FloatValue(class google::protobuf::Arena *
   __ptr64,class google::protobuf::FloatValue const & __ptr64) __ptr64 */

FloatValue * __thiscall
google::protobuf::FloatValue::FloatValue(FloatValue *this,Arena *param_1,FloatValue *param_2)

{
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_2 + 0x18);
  if (((byte)param_2[8] & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8),
               (UnknownFieldSet *)((*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe) + 8));
  }
  return this;
}

// Impl_ @ 14fb78e10

/* public: __cdecl google::protobuf::BoolValue::Impl_::Impl_(struct
   google::protobuf::BoolValue::Impl_ const & __ptr64) __ptr64 */

Impl_ * __thiscall google::protobuf::BoolValue::Impl_::Impl_(Impl_ *this,Impl_ *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  this[8] = param_1[8];
  return this;
}

// Impl_ @ 14fb78e30

/* public: __cdecl google::protobuf::BoolValue::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

Impl_ * __thiscall
google::protobuf::BoolValue::Impl_::Impl_(Impl_ *this,InternalVisibility param_1,Arena *param_2)

{
  *(undefined8 *)this = 0;
  return this;
}

// Impl_ @ 14fb78e40

/* public: __cdecl google::protobuf::BytesValue::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

Impl_ * __thiscall
google::protobuf::BytesValue::Impl_::Impl_(Impl_ *this,InternalVisibility param_1,Arena *param_2)

{
  *(undefined8 *)this = 0;
  *(GlobalEmptyString **)(this + 8) = &internal::fixed_address_empty_string;
  return this;
}

// Impl_ @ 14fb78e60

/* public: __cdecl google::protobuf::BytesValue::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64,struct
   google::protobuf::BytesValue::Impl_ const & __ptr64,class google::protobuf::BytesValue const &
   __ptr64) __ptr64 */

Impl_ * __thiscall
google::protobuf::BytesValue::Impl_::Impl_
          (Impl_ *this,InternalVisibility param_1,Arena *param_2,Impl_ *param_3,BytesValue *param_4)

{
  TaggedStringPtr TVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_3;
  *(undefined4 *)(this + 4) = 0;
  TVar1.ptr_ = *(void **)(param_3 + 8);
  if (((ulonglong)TVar1.ptr_ & 3) == 0) {
    *(void **)(this + 8) = TVar1.ptr_;
    return this;
  }
  TVar1 = internal::TaggedStringPtr::ForceCopy
                    ((TaggedStringPtr *)(param_3 + 8),(Arena *)&stack0x00000008);
  *(undefined8 *)(this + 8) = *(undefined8 *)TVar1.ptr_;
  return this;
}

// Impl_ @ 14fb78eb0

/* public: __cdecl google::protobuf::DoubleValue::Impl_::Impl_(struct
   google::protobuf::DoubleValue::Impl_ const & __ptr64) __ptr64 */

Impl_ * __thiscall google::protobuf::DoubleValue::Impl_::Impl_(Impl_ *this,Impl_ *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  return this;
}

// Impl_ @ 14fb78ed0

/* public: __cdecl google::protobuf::DoubleValue::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

Impl_ * __thiscall
google::protobuf::DoubleValue::Impl_::Impl_(Impl_ *this,InternalVisibility param_1,Arena *param_2)

{
  *(undefined8 *)this = 0;
  return this;
}

// Impl_ @ 14fb78ee0

/* public: __cdecl google::protobuf::FloatValue::Impl_::Impl_(struct
   google::protobuf::FloatValue::Impl_ const & __ptr64) __ptr64 */

Impl_ * __thiscall google::protobuf::FloatValue::Impl_::Impl_(Impl_ *this,Impl_ *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}

// Impl_ @ 14fb78f00

/* public: __cdecl google::protobuf::FloatValue::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

Impl_ * __thiscall
google::protobuf::FloatValue::Impl_::Impl_(Impl_ *this,InternalVisibility param_1,Arena *param_2)

{
  *(undefined8 *)this = 0;
  return this;
}

// Impl_ @ 14fb78f10

/* public: __cdecl google::protobuf::Int32Value::Impl_::Impl_(struct
   google::protobuf::Int32Value::Impl_ const & __ptr64) __ptr64 */

Impl_ * __thiscall google::protobuf::Int32Value::Impl_::Impl_(Impl_ *this,Impl_ *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}

// Impl_ @ 14fb78f30

/* public: __cdecl google::protobuf::Int32Value::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

Impl_ * __thiscall
google::protobuf::Int32Value::Impl_::Impl_(Impl_ *this,InternalVisibility param_1,Arena *param_2)

{
  *(undefined8 *)this = 0;
  return this;
}

// Impl_ @ 14fb78f40

/* public: __cdecl google::protobuf::Int64Value::Impl_::Impl_(struct
   google::protobuf::Int64Value::Impl_ const & __ptr64) __ptr64 */

Impl_ * __thiscall google::protobuf::Int64Value::Impl_::Impl_(Impl_ *this,Impl_ *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  return this;
}

// Impl_ @ 14fb78f60

/* public: __cdecl google::protobuf::Int64Value::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

Impl_ * __thiscall
google::protobuf::Int64Value::Impl_::Impl_(Impl_ *this,InternalVisibility param_1,Arena *param_2)

{
  *(undefined8 *)this = 0;
  return this;
}

// Impl_ @ 14fb78f70

/* public: __cdecl google::protobuf::StringValue::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

Impl_ * __thiscall
google::protobuf::StringValue::Impl_::Impl_(Impl_ *this,InternalVisibility param_1,Arena *param_2)

{
  *(undefined8 *)this = 0;
  *(GlobalEmptyString **)(this + 8) = &internal::fixed_address_empty_string;
  return this;
}

// Impl_ @ 14fb78f90

/* public: __cdecl google::protobuf::StringValue::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64,struct
   google::protobuf::StringValue::Impl_ const & __ptr64,class google::protobuf::StringValue const &
   __ptr64) __ptr64 */

Impl_ * __thiscall
google::protobuf::StringValue::Impl_::Impl_
          (Impl_ *this,InternalVisibility param_1,Arena *param_2,Impl_ *param_3,StringValue *param_4
          )

{
  TaggedStringPtr TVar1;
  
  *(undefined4 *)this = *(undefined4 *)param_3;
  *(undefined4 *)(this + 4) = 0;
  TVar1.ptr_ = *(void **)(param_3 + 8);
  if (((ulonglong)TVar1.ptr_ & 3) == 0) {
    *(void **)(this + 8) = TVar1.ptr_;
    return this;
  }
  TVar1 = internal::TaggedStringPtr::ForceCopy
                    ((TaggedStringPtr *)(param_3 + 8),(Arena *)&stack0x00000008);
  *(undefined8 *)(this + 8) = *(undefined8 *)TVar1.ptr_;
  return this;
}

// Impl_ @ 14fb78fe0

/* public: __cdecl google::protobuf::UInt32Value::Impl_::Impl_(struct
   google::protobuf::UInt32Value::Impl_ const & __ptr64) __ptr64 */

Impl_ * __thiscall google::protobuf::UInt32Value::Impl_::Impl_(Impl_ *this,Impl_ *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  return this;
}

// Impl_ @ 14fb79000

/* public: __cdecl google::protobuf::UInt32Value::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

Impl_ * __thiscall
google::protobuf::UInt32Value::Impl_::Impl_(Impl_ *this,InternalVisibility param_1,Arena *param_2)

{
  *(undefined8 *)this = 0;
  return this;
}

// Impl_ @ 14fb79010

/* public: __cdecl google::protobuf::UInt64Value::Impl_::Impl_(struct
   google::protobuf::UInt64Value::Impl_ const & __ptr64) __ptr64 */

Impl_ * __thiscall google::protobuf::UInt64Value::Impl_::Impl_(Impl_ *this,Impl_ *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  return this;
}

// Impl_ @ 14fb79030

/* public: __cdecl google::protobuf::UInt64Value::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

Impl_ * __thiscall
google::protobuf::UInt64Value::Impl_::Impl_(Impl_ *this,InternalVisibility param_1,Arena *param_2)

{
  *(undefined8 *)this = 0;
  return this;
}

// Int32Value @ 14fb79040

/* protected: __cdecl google::protobuf::Int32Value::Int32Value(class google::protobuf::Arena *
   __ptr64) __ptr64 */

Int32Value * __thiscall google::protobuf::Int32Value::Int32Value(Int32Value *this,Arena *param_1)

{
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}

// Int32Value @ 14fb79070

/* protected: __cdecl google::protobuf::Int32Value::Int32Value(class google::protobuf::Arena *
   __ptr64,class google::protobuf::Int32Value const & __ptr64) __ptr64 */

Int32Value * __thiscall
google::protobuf::Int32Value::Int32Value(Int32Value *this,Arena *param_1,Int32Value *param_2)

{
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_2 + 0x18);
  if (((byte)param_2[8] & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8),
               (UnknownFieldSet *)((*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe) + 8));
  }
  return this;
}

// Int64Value @ 14fb790d0

/* protected: __cdecl google::protobuf::Int64Value::Int64Value(class google::protobuf::Arena *
   __ptr64) __ptr64 */

Int64Value * __thiscall google::protobuf::Int64Value::Int64Value(Int64Value *this,Arena *param_1)

{
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return this;
}

// Int64Value @ 14fb79100

/* protected: __cdecl google::protobuf::Int64Value::Int64Value(class google::protobuf::Arena *
   __ptr64,class google::protobuf::Int64Value const & __ptr64) __ptr64 */

Int64Value * __thiscall
google::protobuf::Int64Value::Int64Value(Int64Value *this,Arena *param_1,Int64Value *param_2)

{
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_2 + 0x18);
  if (((byte)param_2[8] & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8),
               (UnknownFieldSet *)((*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe) + 8));
  }
  return this;
}

// StringValue @ 14fb79160

/* protected: __cdecl google::protobuf::StringValue::StringValue(class google::protobuf::Arena *
   __ptr64) __ptr64 */

StringValue * __thiscall
google::protobuf::StringValue::StringValue(StringValue *this,Arena *param_1)

{
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x10) = 0;
  *(GlobalEmptyString **)(this + 0x18) = &internal::fixed_address_empty_string;
  return this;
}

// StringValue @ 14fb79190

/* protected: __cdecl google::protobuf::StringValue::StringValue(class google::protobuf::Arena *
   __ptr64,class google::protobuf::StringValue const & __ptr64) __ptr64 */

StringValue * __thiscall
google::protobuf::StringValue::StringValue(StringValue *this,Arena *param_1,StringValue *param_2)

{
  TaggedStringPtr TVar1;
  
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  if (((byte)param_2[8] & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8),
               (UnknownFieldSet *)((*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe) + 8));
  }
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(this + 0x14) = 0;
  TVar1.ptr_ = *(void **)(param_2 + 0x18);
  if (((ulonglong)TVar1.ptr_ & 3) == 0) {
    *(void **)(this + 0x18) = TVar1.ptr_;
    return this;
  }
  TVar1 = internal::TaggedStringPtr::ForceCopy
                    ((TaggedStringPtr *)(param_2 + 0x18),(Arena *)&stack0x00000008);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)TVar1.ptr_;
  return this;
}

// UInt32Value @ 14fb79230

/* protected: __cdecl google::protobuf::UInt32Value::UInt32Value(class google::protobuf::Arena *
   __ptr64) __ptr64 */

UInt32Value * __thiscall
google::protobuf::UInt32Value::UInt32Value(UInt32Value *this,Arena *param_1)

{
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}

// UInt32Value @ 14fb79260

/* protected: __cdecl google::protobuf::UInt32Value::UInt32Value(class google::protobuf::Arena *
   __ptr64,class google::protobuf::UInt32Value const & __ptr64) __ptr64 */

UInt32Value * __thiscall
google::protobuf::UInt32Value::UInt32Value(UInt32Value *this,Arena *param_1,UInt32Value *param_2)

{
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_2 + 0x18);
  if (((byte)param_2[8] & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8),
               (UnknownFieldSet *)((*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe) + 8));
  }
  return this;
}

// UInt64Value @ 14fb792c0

/* protected: __cdecl google::protobuf::UInt64Value::UInt64Value(class google::protobuf::Arena *
   __ptr64) __ptr64 */

UInt64Value * __thiscall
google::protobuf::UInt64Value::UInt64Value(UInt64Value *this,Arena *param_1)

{
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return this;
}

// UInt64Value @ 14fb792f0

/* protected: __cdecl google::protobuf::UInt64Value::UInt64Value(class google::protobuf::Arena *
   __ptr64,class google::protobuf::UInt64Value const & __ptr64) __ptr64 */

UInt64Value * __thiscall
google::protobuf::UInt64Value::UInt64Value(UInt64Value *this,Arena *param_1,UInt64Value *param_2)

{
  *(Arena **)(this + 8) = param_1;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_2 + 0x18);
  if (((byte)param_2[8] & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8),
               (UnknownFieldSet *)((*(ulonglong *)(param_2 + 8) & 0xfffffffffffffffe) + 8));
  }
  return this;
}

// ~BoolValue @ 14fb79350

/* public: virtual __cdecl google::protobuf::BoolValue::~BoolValue(void) __ptr64 */

void __thiscall google::protobuf::BoolValue::~BoolValue(BoolValue *this)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8));
  }
  return;
}

// ~BoolValueDefaultTypeInternal @ 14fb79380

/* public: __cdecl
   google::protobuf::BoolValueDefaultTypeInternal::~BoolValueDefaultTypeInternal(void) __ptr64 */

void __thiscall
google::protobuf::BoolValueDefaultTypeInternal::~BoolValueDefaultTypeInternal
          (BoolValueDefaultTypeInternal *this)

{
  return;
}

// ~BytesValue @ 14fb79390

/* public: virtual __cdecl google::protobuf::BytesValue::~BytesValue(void) __ptr64 */

void __thiscall google::protobuf::BytesValue::~BytesValue(BytesValue *this)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8));
  }
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)(this + 0x18));
  return;
}

// ~BytesValueDefaultTypeInternal @ 14fb793d0

/* public: __cdecl
   google::protobuf::BytesValueDefaultTypeInternal::~BytesValueDefaultTypeInternal(void) __ptr64 */

void __thiscall
google::protobuf::BytesValueDefaultTypeInternal::~BytesValueDefaultTypeInternal
          (BytesValueDefaultTypeInternal *this)

{
  return;
}

// ~DoubleValue @ 14fb793e0

/* public: virtual __cdecl google::protobuf::DoubleValue::~DoubleValue(void) __ptr64 */

void __thiscall google::protobuf::DoubleValue::~DoubleValue(DoubleValue *this)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8));
  }
  return;
}

// ~DoubleValueDefaultTypeInternal @ 14fb79410

/* public: __cdecl
   google::protobuf::DoubleValueDefaultTypeInternal::~DoubleValueDefaultTypeInternal(void) __ptr64
    */

void __thiscall
google::protobuf::DoubleValueDefaultTypeInternal::~DoubleValueDefaultTypeInternal
          (DoubleValueDefaultTypeInternal *this)

{
  return;
}

// ~FloatValue @ 14fb79420

/* public: virtual __cdecl google::protobuf::FloatValue::~FloatValue(void) __ptr64 */

void __thiscall google::protobuf::FloatValue::~FloatValue(FloatValue *this)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8));
  }
  return;
}

// ~FloatValueDefaultTypeInternal @ 14fb79450

/* public: __cdecl
   google::protobuf::FloatValueDefaultTypeInternal::~FloatValueDefaultTypeInternal(void) __ptr64 */

void __thiscall
google::protobuf::FloatValueDefaultTypeInternal::~FloatValueDefaultTypeInternal
          (FloatValueDefaultTypeInternal *this)

{
  return;
}

// ~Int32Value @ 14fb79460

/* public: virtual __cdecl google::protobuf::Int32Value::~Int32Value(void) __ptr64 */

void __thiscall google::protobuf::Int32Value::~Int32Value(Int32Value *this)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8));
  }
  return;
}

// ~Int32ValueDefaultTypeInternal @ 14fb79490

/* public: __cdecl
   google::protobuf::Int32ValueDefaultTypeInternal::~Int32ValueDefaultTypeInternal(void) __ptr64 */

void __thiscall
google::protobuf::Int32ValueDefaultTypeInternal::~Int32ValueDefaultTypeInternal
          (Int32ValueDefaultTypeInternal *this)

{
  return;
}

// ~Int64Value @ 14fb794a0

/* public: virtual __cdecl google::protobuf::Int64Value::~Int64Value(void) __ptr64 */

void __thiscall google::protobuf::Int64Value::~Int64Value(Int64Value *this)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8));
  }
  return;
}

// ~Int64ValueDefaultTypeInternal @ 14fb794d0

/* public: __cdecl
   google::protobuf::Int64ValueDefaultTypeInternal::~Int64ValueDefaultTypeInternal(void) __ptr64 */

void __thiscall
google::protobuf::Int64ValueDefaultTypeInternal::~Int64ValueDefaultTypeInternal
          (Int64ValueDefaultTypeInternal *this)

{
  return;
}

// ~StringValue @ 14fb794e0

/* public: virtual __cdecl google::protobuf::StringValue::~StringValue(void) __ptr64 */

void __thiscall google::protobuf::StringValue::~StringValue(StringValue *this)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8));
  }
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)(this + 0x18));
  return;
}

// ~StringValueDefaultTypeInternal @ 14fb79520

/* public: __cdecl
   google::protobuf::StringValueDefaultTypeInternal::~StringValueDefaultTypeInternal(void) __ptr64
    */

void __thiscall
google::protobuf::StringValueDefaultTypeInternal::~StringValueDefaultTypeInternal
          (StringValueDefaultTypeInternal *this)

{
  return;
}

// ~UInt32Value @ 14fb79530

/* public: virtual __cdecl google::protobuf::UInt32Value::~UInt32Value(void) __ptr64 */

void __thiscall google::protobuf::UInt32Value::~UInt32Value(UInt32Value *this)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8));
  }
  return;
}

// ~UInt32ValueDefaultTypeInternal @ 14fb79560

/* public: __cdecl
   google::protobuf::UInt32ValueDefaultTypeInternal::~UInt32ValueDefaultTypeInternal(void) __ptr64
    */

void __thiscall
google::protobuf::UInt32ValueDefaultTypeInternal::~UInt32ValueDefaultTypeInternal
          (UInt32ValueDefaultTypeInternal *this)

{
  return;
}

// ~UInt64Value @ 14fb79570

/* public: virtual __cdecl google::protobuf::UInt64Value::~UInt64Value(void) __ptr64 */

void __thiscall google::protobuf::UInt64Value::~UInt64Value(UInt64Value *this)

{
  *(undefined ***)this = vftable;
  if (((byte)this[8] & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8));
  }
  return;
}

// ~UInt64ValueDefaultTypeInternal @ 14fb795a0

/* public: __cdecl
   google::protobuf::UInt64ValueDefaultTypeInternal::~UInt64ValueDefaultTypeInternal(void) __ptr64
    */

void __thiscall
google::protobuf::UInt64ValueDefaultTypeInternal::~UInt64ValueDefaultTypeInternal
          (UInt64ValueDefaultTypeInternal *this)

{
  return;
}

// CopyFrom @ 14fb795b0

/* public: void __cdecl google::protobuf::BoolValue::CopyFrom(class google::protobuf::BoolValue
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::BoolValue::CopyFrom(BoolValue *this,BoolValue *param_1)

{
  uint uVar1;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = *(uint *)(param_1 + 0x10);
    if (((uVar1 & 1) != 0) && (param_1[0x18] != (BoolValue)0x0)) {
      this[0x18] = param_1[0x18];
    }
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | uVar1;
    if (((byte)param_1[8] & 1) != 0) {
      internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)(this + 8),
                 (UnknownFieldSet *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 8));
    }
  }
  return;
}

// CopyFrom @ 14fb79610

/* public: void __cdecl google::protobuf::BytesValue::CopyFrom(class google::protobuf::BytesValue
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::BytesValue::CopyFrom(BytesValue *this,BytesValue *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14fb79650

/* public: void __cdecl google::protobuf::DoubleValue::CopyFrom(class google::protobuf::DoubleValue
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::DoubleValue::CopyFrom(DoubleValue *this,DoubleValue *param_1)

{
  uint uVar1;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = *(uint *)(param_1 + 0x10);
    if (((uVar1 & 1) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      *(longlong *)(this + 0x18) = *(longlong *)(param_1 + 0x18);
    }
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | uVar1;
    if (((byte)param_1[8] & 1) != 0) {
      internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)(this + 8),
                 (UnknownFieldSet *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 8));
    }
  }
  return;
}

// CopyFrom @ 14fb796c0

/* public: void __cdecl google::protobuf::FloatValue::CopyFrom(class google::protobuf::FloatValue
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::FloatValue::CopyFrom(FloatValue *this,FloatValue *param_1)

{
  uint uVar1;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = *(uint *)(param_1 + 0x10);
    if (((uVar1 & 1) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
      *(int *)(this + 0x18) = *(int *)(param_1 + 0x18);
    }
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | uVar1;
    if (((byte)param_1[8] & 1) != 0) {
      internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)(this + 8),
                 (UnknownFieldSet *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 8));
    }
  }
  return;
}

// CopyFrom @ 14fb79730

/* public: void __cdecl google::protobuf::Int32Value::CopyFrom(class google::protobuf::Int32Value
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::Int32Value::CopyFrom(Int32Value *this,Int32Value *param_1)

{
  uint uVar1;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = *(uint *)(param_1 + 0x10);
    if (((uVar1 & 1) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
      *(int *)(this + 0x18) = *(int *)(param_1 + 0x18);
    }
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | uVar1;
    if (((byte)param_1[8] & 1) != 0) {
      internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)(this + 8),
                 (UnknownFieldSet *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 8));
    }
  }
  return;
}

// CopyFrom @ 14fb79790

/* public: void __cdecl google::protobuf::Int64Value::CopyFrom(class google::protobuf::Int64Value
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::Int64Value::CopyFrom(Int64Value *this,Int64Value *param_1)

{
  uint uVar1;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = *(uint *)(param_1 + 0x10);
    if (((uVar1 & 1) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      *(longlong *)(this + 0x18) = *(longlong *)(param_1 + 0x18);
    }
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | uVar1;
    if (((byte)param_1[8] & 1) != 0) {
      internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)(this + 8),
                 (UnknownFieldSet *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 8));
    }
  }
  return;
}

// CopyFrom @ 14fb797f0

/* public: void __cdecl google::protobuf::StringValue::CopyFrom(class google::protobuf::StringValue
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::StringValue::CopyFrom(StringValue *this,StringValue *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14fb79830

/* public: void __cdecl google::protobuf::UInt32Value::CopyFrom(class google::protobuf::UInt32Value
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::UInt32Value::CopyFrom(UInt32Value *this,UInt32Value *param_1)

{
  uint uVar1;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = *(uint *)(param_1 + 0x10);
    if (((uVar1 & 1) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
      *(int *)(this + 0x18) = *(int *)(param_1 + 0x18);
    }
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | uVar1;
    if (((byte)param_1[8] & 1) != 0) {
      internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)(this + 8),
                 (UnknownFieldSet *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 8));
    }
  }
  return;
}

// CopyFrom @ 14fb79890

/* public: void __cdecl google::protobuf::UInt64Value::CopyFrom(class google::protobuf::UInt64Value
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::UInt64Value::CopyFrom(UInt64Value *this,UInt64Value *param_1)

{
  uint uVar1;
  
  if (param_1 != this) {
    Clear(this);
    uVar1 = *(uint *)(param_1 + 0x10);
    if (((uVar1 & 1) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      *(longlong *)(this + 0x18) = *(longlong *)(param_1 + 0x18);
    }
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | uVar1;
    if (((byte)param_1[8] & 1) != 0) {
      internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)(this + 8),
                 (UnknownFieldSet *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 8));
    }
  }
  return;
}

// GetMetadata @ 14fb798f0

/* public: struct google::protobuf::Metadata __cdecl
   google::protobuf::BoolValue::GetMetadata(void)const __ptr64 */

Metadata * __thiscall
google::protobuf::BoolValue::GetMetadata(BoolValue *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadataImpl(&local_18,(ClassDataFull *)&BoolValue_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14fb79930

/* public: struct google::protobuf::Metadata __cdecl
   google::protobuf::BytesValue::GetMetadata(void)const __ptr64 */

Metadata * __thiscall
google::protobuf::BytesValue::GetMetadata(BytesValue *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadataImpl(&local_18,(ClassDataFull *)&BytesValue_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14fb79970

/* public: struct google::protobuf::Metadata __cdecl
   google::protobuf::DoubleValue::GetMetadata(void)const __ptr64 */

Metadata * __thiscall
google::protobuf::DoubleValue::GetMetadata(DoubleValue *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadataImpl(&local_18,(ClassDataFull *)&DoubleValue_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14fb799b0

/* public: struct google::protobuf::Metadata __cdecl
   google::protobuf::FloatValue::GetMetadata(void)const __ptr64 */

Metadata * __thiscall
google::protobuf::FloatValue::GetMetadata(FloatValue *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadataImpl(&local_18,(ClassDataFull *)&FloatValue_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14fb799f0

/* public: struct google::protobuf::Metadata __cdecl
   google::protobuf::Int32Value::GetMetadata(void)const __ptr64 */

Metadata * __thiscall
google::protobuf::Int32Value::GetMetadata(Int32Value *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadataImpl(&local_18,(ClassDataFull *)&Int32Value_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14fb79a30

/* public: struct google::protobuf::Metadata __cdecl
   google::protobuf::Int64Value::GetMetadata(void)const __ptr64 */

Metadata * __thiscall
google::protobuf::Int64Value::GetMetadata(Int64Value *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadataImpl(&local_18,(ClassDataFull *)&Int64Value_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14fb79a70

/* public: struct google::protobuf::Metadata __cdecl
   google::protobuf::StringValue::GetMetadata(void)const __ptr64 */

Metadata * __thiscall
google::protobuf::StringValue::GetMetadata(StringValue *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadataImpl(&local_18,(ClassDataFull *)&StringValue_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14fb79ab0

/* public: struct google::protobuf::Metadata __cdecl
   google::protobuf::UInt32Value::GetMetadata(void)const __ptr64 */

Metadata * __thiscall
google::protobuf::UInt32Value::GetMetadata(UInt32Value *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadataImpl(&local_18,(ClassDataFull *)&UInt32Value_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14fb79af0

/* public: struct google::protobuf::Metadata __cdecl
   google::protobuf::UInt64Value::GetMetadata(void)const __ptr64 */

Metadata * __thiscall
google::protobuf::UInt64Value::GetMetadata(UInt64Value *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadataImpl(&local_18,(ClassDataFull *)&UInt64Value_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14fb79b30

/* private: void __cdecl google::protobuf::BoolValue::InternalSwap(class google::protobuf::BoolValue
   * __ptr64) __ptr64 */

void __thiscall google::protobuf::BoolValue::InternalSwap(BoolValue *this,BoolValue *param_1)

{
  BoolValue BVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar3;
  uVar2 = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  BVar1 = this[0x18];
  this[0x18] = param_1[0x18];
  param_1[0x18] = BVar1;
  return;
}

// InternalSwap @ 14fb79b70

/* private: void __cdecl google::protobuf::BytesValue::InternalSwap(class
   google::protobuf::BytesValue * __ptr64) __ptr64 */

void __thiscall google::protobuf::BytesValue::InternalSwap(BytesValue *this,BytesValue *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar1 = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x18) = uVar2;
  return;
}

// InternalSwap @ 14fb79bb0

/* private: void __cdecl google::protobuf::DoubleValue::InternalSwap(class
   google::protobuf::DoubleValue * __ptr64) __ptr64 */

void __thiscall google::protobuf::DoubleValue::InternalSwap(DoubleValue *this,DoubleValue *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar1 = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  return;
}

// InternalSwap @ 14fb79bf0

/* private: void __cdecl google::protobuf::FloatValue::InternalSwap(class
   google::protobuf::FloatValue * __ptr64) __ptr64 */

void __thiscall google::protobuf::FloatValue::InternalSwap(FloatValue *this,FloatValue *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar1 = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}

// InternalSwap @ 14fb79c30

/* private: void __cdecl google::protobuf::Int32Value::InternalSwap(class
   google::protobuf::Int32Value * __ptr64) __ptr64 */

void __thiscall google::protobuf::Int32Value::InternalSwap(Int32Value *this,Int32Value *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar1 = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}

// InternalSwap @ 14fb79c70

/* private: void __cdecl google::protobuf::Int64Value::InternalSwap(class
   google::protobuf::Int64Value * __ptr64) __ptr64 */

void __thiscall google::protobuf::Int64Value::InternalSwap(Int64Value *this,Int64Value *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar1 = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  return;
}

// InternalSwap @ 14fb79cb0

/* private: void __cdecl google::protobuf::StringValue::InternalSwap(class
   google::protobuf::StringValue * __ptr64) __ptr64 */

void __thiscall google::protobuf::StringValue::InternalSwap(StringValue *this,StringValue *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar1 = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x18) = uVar2;
  return;
}

// InternalSwap @ 14fb79cf0

/* private: void __cdecl google::protobuf::UInt32Value::InternalSwap(class
   google::protobuf::UInt32Value * __ptr64) __ptr64 */

void __thiscall google::protobuf::UInt32Value::InternalSwap(UInt32Value *this,UInt32Value *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar1 = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}

// InternalSwap @ 14fb79d30

/* private: void __cdecl google::protobuf::UInt64Value::InternalSwap(class
   google::protobuf::UInt64Value * __ptr64) __ptr64 */

void __thiscall google::protobuf::UInt64Value::InternalSwap(UInt64Value *this,UInt64Value *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar1 = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  return;
}

// MergeFrom @ 14fb79d70

/* public: void __cdecl google::protobuf::BoolValue::MergeFrom(class google::protobuf::BoolValue
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::BoolValue::MergeFrom(BoolValue *this,BoolValue *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (((uVar1 & 1) != 0) && (param_1[0x18] != (BoolValue)0x0)) {
    this[0x18] = param_1[0x18];
  }
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | uVar1;
  if (((byte)param_1[8] & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8),
               (UnknownFieldSet *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 8));
    return;
  }
  return;
}

// MergeFrom @ 14fb79db0

/* public: void __cdecl google::protobuf::BytesValue::MergeFrom(class google::protobuf::BytesValue
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::BytesValue::MergeFrom(BytesValue *this,BytesValue *param_1)

{
  MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  return;
}

// MergeFrom @ 14fb79dc0

/* public: void __cdecl google::protobuf::DoubleValue::MergeFrom(class google::protobuf::DoubleValue
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::DoubleValue::MergeFrom(DoubleValue *this,DoubleValue *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (((uVar1 & 1) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    *(longlong *)(this + 0x18) = *(longlong *)(param_1 + 0x18);
  }
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | uVar1;
  if (((byte)param_1[8] & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8),
               (UnknownFieldSet *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 8));
    return;
  }
  return;
}

// MergeFrom @ 14fb79e10

/* public: void __cdecl google::protobuf::FloatValue::MergeFrom(class google::protobuf::FloatValue
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::FloatValue::MergeFrom(FloatValue *this,FloatValue *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (((uVar1 & 1) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    *(int *)(this + 0x18) = *(int *)(param_1 + 0x18);
  }
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | uVar1;
  if (((byte)param_1[8] & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8),
               (UnknownFieldSet *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 8));
    return;
  }
  return;
}

// MergeFrom @ 14fb79e60

/* public: void __cdecl google::protobuf::Int32Value::MergeFrom(class google::protobuf::Int32Value
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::Int32Value::MergeFrom(Int32Value *this,Int32Value *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (((uVar1 & 1) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    *(int *)(this + 0x18) = *(int *)(param_1 + 0x18);
  }
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | uVar1;
  if (((byte)param_1[8] & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8),
               (UnknownFieldSet *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 8));
    return;
  }
  return;
}

// MergeFrom @ 14fb79ea0

/* public: void __cdecl google::protobuf::Int64Value::MergeFrom(class google::protobuf::Int64Value
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::Int64Value::MergeFrom(Int64Value *this,Int64Value *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (((uVar1 & 1) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    *(longlong *)(this + 0x18) = *(longlong *)(param_1 + 0x18);
  }
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | uVar1;
  if (((byte)param_1[8] & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8),
               (UnknownFieldSet *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 8));
    return;
  }
  return;
}

// MergeFrom @ 14fb79ee0

/* public: void __cdecl google::protobuf::StringValue::MergeFrom(class google::protobuf::StringValue
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::StringValue::MergeFrom(StringValue *this,StringValue *param_1)

{
  MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  return;
}

// MergeFrom @ 14fb79ef0

/* public: void __cdecl google::protobuf::UInt32Value::MergeFrom(class google::protobuf::UInt32Value
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::UInt32Value::MergeFrom(UInt32Value *this,UInt32Value *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (((uVar1 & 1) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    *(int *)(this + 0x18) = *(int *)(param_1 + 0x18);
  }
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | uVar1;
  if (((byte)param_1[8] & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8),
               (UnknownFieldSet *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 8));
    return;
  }
  return;
}

// MergeFrom @ 14fb79f30

/* public: void __cdecl google::protobuf::UInt64Value::MergeFrom(class google::protobuf::UInt64Value
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::UInt64Value::MergeFrom(UInt64Value *this,UInt64Value *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (((uVar1 & 1) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    *(longlong *)(this + 0x18) = *(longlong *)(param_1 + 0x18);
  }
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | uVar1;
  if (((byte)param_1[8] & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(this + 8),
               (UnknownFieldSet *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffffe) + 8));
    return;
  }
  return;
}

// SharedCtor @ 14fb79f70

/* private: void __cdecl google::protobuf::BoolValue::SharedCtor(class google::protobuf::Arena *
   __ptr64) __ptr64 */

void __thiscall google::protobuf::BoolValue::SharedCtor(BoolValue *this,Arena *param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  this[0x18] = (BoolValue)0x0;
  return;
}

// SharedCtor @ 14fb79f80

/* private: void __cdecl google::protobuf::BytesValue::SharedCtor(class google::protobuf::Arena *
   __ptr64) __ptr64 */

void __thiscall google::protobuf::BytesValue::SharedCtor(BytesValue *this,Arena *param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(GlobalEmptyString **)(this + 0x18) = &internal::fixed_address_empty_string;
  return;
}

// SharedCtor @ 14fb79fa0

/* private: void __cdecl google::protobuf::DoubleValue::SharedCtor(class google::protobuf::Arena *
   __ptr64) __ptr64 */

void __thiscall google::protobuf::DoubleValue::SharedCtor(DoubleValue *this,Arena *param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}

// SharedCtor @ 14fb79fc0

/* private: void __cdecl google::protobuf::FloatValue::SharedCtor(class google::protobuf::Arena *
   __ptr64) __ptr64 */

void __thiscall google::protobuf::FloatValue::SharedCtor(FloatValue *this,Arena *param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}

// SharedCtor @ 14fb79fd0

/* private: void __cdecl google::protobuf::Int32Value::SharedCtor(class google::protobuf::Arena *
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Int32Value::SharedCtor(Int32Value *this,Arena *param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}

// SharedCtor @ 14fb79fe0

/* private: void __cdecl google::protobuf::Int64Value::SharedCtor(class google::protobuf::Arena *
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Int64Value::SharedCtor(Int64Value *this,Arena *param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}

// SharedCtor @ 14fb7a000

/* private: void __cdecl google::protobuf::StringValue::SharedCtor(class google::protobuf::Arena *
   __ptr64) __ptr64 */

void __thiscall google::protobuf::StringValue::SharedCtor(StringValue *this,Arena *param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(GlobalEmptyString **)(this + 0x18) = &internal::fixed_address_empty_string;
  return;
}

// SharedCtor @ 14fb7a020

/* private: void __cdecl google::protobuf::UInt32Value::SharedCtor(class google::protobuf::Arena *
   __ptr64) __ptr64 */

void __thiscall google::protobuf::UInt32Value::SharedCtor(UInt32Value *this,Arena *param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}

// SharedCtor @ 14fb7a030

/* private: void __cdecl google::protobuf::UInt64Value::SharedCtor(class google::protobuf::Arena *
   __ptr64) __ptr64 */

void __thiscall google::protobuf::UInt64Value::SharedCtor(UInt64Value *this,Arena *param_1)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}

// SharedDtor @ 14fb7a050

/* private: static void __cdecl google::protobuf::BoolValue::SharedDtor(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::BoolValue::SharedDtor(MessageLite *param_1)

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

// SharedDtor @ 14fb7a070

/* private: static void __cdecl google::protobuf::BytesValue::SharedDtor(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::BytesValue::SharedDtor(MessageLite *param_1)

{
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_);
  }
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)&param_1[1]._internal_metadata_);
  return;
}

// SharedDtor @ 14fb7a0a0

/* private: static void __cdecl google::protobuf::DoubleValue::SharedDtor(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::DoubleValue::SharedDtor(MessageLite *param_1)

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

// SharedDtor @ 14fb7a0c0

/* private: static void __cdecl google::protobuf::FloatValue::SharedDtor(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::FloatValue::SharedDtor(MessageLite *param_1)

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

// SharedDtor @ 14fb7a0e0

/* private: static void __cdecl google::protobuf::Int32Value::SharedDtor(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::Int32Value::SharedDtor(MessageLite *param_1)

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

// SharedDtor @ 14fb7a100

/* private: static void __cdecl google::protobuf::Int64Value::SharedDtor(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::Int64Value::SharedDtor(MessageLite *param_1)

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

// SharedDtor @ 14fb7a120

/* private: static void __cdecl google::protobuf::StringValue::SharedDtor(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::StringValue::SharedDtor(MessageLite *param_1)

{
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_);
  }
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)&param_1[1]._internal_metadata_);
  return;
}

// SharedDtor @ 14fb7a150

/* private: static void __cdecl google::protobuf::UInt32Value::SharedDtor(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::UInt32Value::SharedDtor(MessageLite *param_1)

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

// SharedDtor @ 14fb7a170

/* private: static void __cdecl google::protobuf::UInt64Value::SharedDtor(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::UInt64Value::SharedDtor(MessageLite *param_1)

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

// VarintSize32PlusOne @ 14fb7a190

/* public: static unsigned __int64 __cdecl
   google::protobuf::io::CodedOutputStream::VarintSize32PlusOne(unsigned int) */

__uint64 __cdecl google::protobuf::io::CodedOutputStream::VarintSize32PlusOne(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 | 1;
  if (4 < __isa_available) {
    return (ulonglong)(LZCOUNT(uVar2) * -9 + 0x1a0U >> 6);
  }
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return (ulonglong)((0x1f - iVar1) * -9 + 0x1a0U >> 6);
}

// _internal_set_value @ 14fb7a1e0

/* private: void __cdecl google::protobuf::BytesValue::_internal_set_value(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::BytesValue::_internal_set_value
          (BytesValue *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1
          )

{
  Arena *pAVar1;
  
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  pAVar1 = (Arena *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
  if (((byte)this[8] & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set<>((ArenaStringPtr *)(this + 0x18),param_1,pAVar1);
  return;
}

// _internal_set_value @ 14fb7a210

/* private: void __cdecl google::protobuf::StringValue::_internal_set_value(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::StringValue::_internal_set_value
          (StringValue *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
  pAVar1 = (Arena *)(*(ulonglong *)(this + 8) & 0xfffffffffffffffe);
  if (((byte)this[8] & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set<>((ArenaStringPtr *)(this + 0x18),param_1,pAVar1);
  return;
}

// _internal_value @ 14fb7a240

/* private: bool __cdecl google::protobuf::BoolValue::_internal_value(void)const __ptr64 */

bool __thiscall google::protobuf::BoolValue::_internal_value(BoolValue *this)

{
  return (bool)this[0x18];
}

// _internal_value @ 14fb7a250

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64 __cdecl google::protobuf::BytesValue::_internal_value(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::BytesValue::_internal_value(BytesValue *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
         (*(ulonglong *)(this + 0x18) & 0xfffffffffffffffc);
}

// _internal_value @ 14fb7a260

/* private: double __cdecl google::protobuf::DoubleValue::_internal_value(void)const __ptr64 */

double __thiscall google::protobuf::DoubleValue::_internal_value(DoubleValue *this)

{
  return *(double *)(this + 0x18);
}

// _internal_value @ 14fb7a270

/* private: float __cdecl google::protobuf::FloatValue::_internal_value(void)const __ptr64 */

float __thiscall google::protobuf::FloatValue::_internal_value(FloatValue *this)

{
  return *(float *)(this + 0x18);
}

// _internal_value @ 14fb7a280

/* private: int __cdecl google::protobuf::Int32Value::_internal_value(void)const __ptr64 */

int __thiscall google::protobuf::Int32Value::_internal_value(Int32Value *this)

{
  return *(int *)(this + 0x18);
}

// _internal_value @ 14fb7a290

/* private: __int64 __cdecl google::protobuf::Int64Value::_internal_value(void)const __ptr64 */

__int64 __thiscall google::protobuf::Int64Value::_internal_value(Int64Value *this)

{
  return *(__int64 *)(this + 0x18);
}

// _internal_value @ 14fb7a2a0

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64 __cdecl google::protobuf::StringValue::_internal_value(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::StringValue::_internal_value(StringValue *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
         (*(ulonglong *)(this + 0x18) & 0xfffffffffffffffc);
}

// _internal_value @ 14fb7a2b0

/* private: unsigned int __cdecl google::protobuf::UInt32Value::_internal_value(void)const __ptr64
    */

uint __thiscall google::protobuf::UInt32Value::_internal_value(UInt32Value *this)

{
  return *(uint *)(this + 0x18);
}

// _internal_value @ 14fb7a2c0

/* private: unsigned __int64 __cdecl google::protobuf::UInt64Value::_internal_value(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::UInt64Value::_internal_value(UInt64Value *this)

{
  return *(__uint64 *)(this + 0x18);
}

// FUN_1504746f0 @ 1504746f0

void FUN_1504746f0(void)

{
  return;
}

// FUN_150474700 @ 150474700

void FUN_150474700(void)

{
  return;
}

// FUN_150474710 @ 150474710

void FUN_150474710(void)

{
  return;
}

// FUN_150474720 @ 150474720

void FUN_150474720(void)

{
  return;
}

// FUN_150474730 @ 150474730

void FUN_150474730(void)

{
  return;
}

// FUN_150474740 @ 150474740

void FUN_150474740(void)

{
  return;
}

// FUN_150474750 @ 150474750

void FUN_150474750(void)

{
  return;
}

// FUN_150474760 @ 150474760

void FUN_150474760(void)

{
  return;
}

// FUN_150474770 @ 150474770

void FUN_150474770(void)

{
  return;
}


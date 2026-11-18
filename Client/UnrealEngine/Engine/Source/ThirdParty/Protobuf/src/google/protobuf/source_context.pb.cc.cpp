// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 23

// FUN_141455f80 @ 141455f80

void FUN_141455f80(void)

{
  google::protobuf::internal::AddDescriptors
            ((DescriptorTable *)&descriptor_table_google_2fprotobuf_2fsource_5fcontext_2eproto);
  DAT_1553e5788 = 0;
  return;
}

// MergeImpl @ 14fb71b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: static void __cdecl google::protobuf::SourceContext::MergeImpl(class
   google::protobuf::MessageLite & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::SourceContext::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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

// Clear @ 14fb71c50

/* public: virtual void __cdecl google::protobuf::SourceContext::Clear(void) __ptr64 */

void __thiscall google::protobuf::SourceContext::Clear(SourceContext *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  undefined8 *puVar2;
  longlong *this_01;
  uint uVar3;
  undefined8 *puVar4;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    puVar2 = (undefined8 *)
             ((ulonglong)(this->_impl_).file_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar4 = puVar2;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar4 = (undefined8 *)*puVar2;
    }
    puVar2[2] = 0;
    *(undefined1 *)puVar4 = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  this_01 = &this->_padding_;
  if ((*this_01 & 1) == 0) {
    return;
  }
  if ((*this_01 & 1) == 0) {
    this_00 = internal::InternalMetadata::
              mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>
                        ((InternalMetadata *)this_01);
  }
  else {
    this_00 = (UnknownFieldSet *)((*this_01 & 0xfffffffffffffffeU) + 8);
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

// ByteSizeLong @ 14fb71c90

/* public: virtual unsigned __int64 __cdecl google::protobuf::SourceContext::ByteSizeLong(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::SourceContext::ByteSizeLong(SourceContext *this)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar1 = *(longlong *)
               (((ulonglong)(this->_impl_).file_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10)
     , lVar1 != 0)) {
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
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14fb71d00

/* public: virtual unsigned char * __ptr64 __cdecl
   google::protobuf::SourceContext::_InternalSerialize(unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::SourceContext::_InternalSerialize
          (SourceContext *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  size_t *psVar1;
  size_t _Size;
  uchar *puVar2;
  char *pcVar3;
  char *_Src;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    _Src = (char *)((ulonglong)(this->_impl_).file_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    psVar1 = (size_t *)(_Src + 0x10);
    if (*(longlong *)(_Src + 0x10) != 0) {
      pcVar3 = _Src;
      if (0xf < *(ulonglong *)(_Src + 0x18)) {
        pcVar3 = *(char **)_Src;
      }
      local_18._Mydata = "google.protobuf.SourceContext.file_name";
      local_18._Mysize = 0x27;
      internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(_Src + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(_Src + 0x18)) {
        _Src = *(char **)_Src;
      }
      _Size = *psVar1;
      local_18._Mydata = _Src;
      local_18._Mysize = _Size;
      if (((longlong)_Size < 0x80) &&
         ((longlong)_Size <= (longlong)(param_2->end_ + (0xe - (longlong)param_1)))) {
        *param_1 = '\n';
        param_1[1] = (uchar)_Size;
        memcpy(param_1 + 2,_Src,_Size);
        param_1 = param_1 + 2 + _Size;
      }
      else {
        param_1 = io::EpsCopyOutputStream::WriteStringMaybeAliasedOutline
                            (param_2,1,&local_18,param_1);
      }
    }
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar2 = internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar2;
}

// GetClassData @ 14fb71e50

/* protected: virtual struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   google::protobuf::SourceContext::GetClassData(void)const __ptr64 */

ClassData * __thiscall google::protobuf::SourceContext::GetClassData(SourceContext *this)

{
  return (ClassData *)&SourceContext_class_data_;
}

// PlacementNew_ @ 14fb71e70

/* protected: static void * __ptr64 __cdecl google::protobuf::SourceContext::PlacementNew_(void
   const * __ptr64,void * __ptr64,class google::protobuf::Arena * __ptr64) */

void * __cdecl
google::protobuf::SourceContext::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = vftable;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) = &internal::fixed_address_empty_string;
  return param_2;
}

// `scalar_deleting_destructor' @ 14fb71ea0

/* public: virtual void * __ptr64 __cdecl google::protobuf::SourceContext::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::SourceContext::_scalar_deleting_destructor_(SourceContext *this,uint param_1)

{
  this->_padding_ = (longlong)vftable;
  if ((this->_padding_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  internal::ArenaStringPtr::Destroy(&(this->_impl_).file_name_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Impl_ @ 14fb71f00

/* public: __cdecl google::protobuf::SourceContext::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

Impl_ * __thiscall
google::protobuf::SourceContext::Impl_::Impl_(Impl_ *this,InternalVisibility param_1,Arena *param_2)

{
  this->_has_bits_ = (uint  [1])0x0;
  this->_cached_size_ = (atomic<int>)0x0;
  (this->file_name_).tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  return this;
}

// Impl_ @ 14fb71f20

/* public: __cdecl google::protobuf::SourceContext::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64,struct
   google::protobuf::SourceContext::Impl_ const & __ptr64,class google::protobuf::SourceContext
   const & __ptr64) __ptr64 */

Impl_ * __thiscall
google::protobuf::SourceContext::Impl_::Impl_
          (Impl_ *this,InternalVisibility param_1,Arena *param_2,Impl_ *param_3,
          SourceContext *param_4)

{
  void *pvVar1;
  TaggedStringPtr TVar2;
  
  (this->_has_bits_).has_bits_[0] = (param_3->_has_bits_).has_bits_[0];
  (this->_cached_size_).atom_ = (atomic<int>)0x0;
  pvVar1 = (param_3->file_name_).tagged_ptr_.ptr_;
  if (((ulonglong)pvVar1 & 3) == 0) {
    (this->file_name_).tagged_ptr_.ptr_ = pvVar1;
    return this;
  }
  TVar2 = internal::TaggedStringPtr::ForceCopy
                    (&(param_3->file_name_).tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
  (this->file_name_).tagged_ptr_.ptr_ = *TVar2.ptr_;
  return this;
}

// SourceContext @ 14fb71f70

/* protected: __cdecl google::protobuf::SourceContext::SourceContext(class google::protobuf::Arena *
   __ptr64) __ptr64 */

SourceContext * __thiscall
google::protobuf::SourceContext::SourceContext(SourceContext *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)vftable;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).file_name_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  return this;
}

// SourceContext @ 14fb71fa0

/* protected: __cdecl google::protobuf::SourceContext::SourceContext(class google::protobuf::Arena *
   __ptr64,class google::protobuf::SourceContext const & __ptr64) __ptr64 */

SourceContext * __thiscall
google::protobuf::SourceContext::SourceContext
          (SourceContext *this,Arena *param_1,SourceContext *param_2)

{
  ArenaStringPtr *this_00;
  void *pvVar1;
  TaggedStringPtr TVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)vftable;
  if ((param_2->_padding_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).file_name_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar1 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar1 & 3) == 0) {
    (this->_impl_).file_name_.tagged_ptr_.ptr_ = pvVar1;
    return this;
  }
  TVar2 = internal::TaggedStringPtr::ForceCopy(&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
  (this->_impl_).file_name_.tagged_ptr_.ptr_ = *TVar2.ptr_;
  return this;
}

// ~SourceContext @ 14fb72040

/* public: virtual __cdecl google::protobuf::SourceContext::~SourceContext(void) __ptr64 */

void __thiscall google::protobuf::SourceContext::~SourceContext(SourceContext *this)

{
  this->_padding_ = (longlong)vftable;
  if ((this->_padding_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  internal::ArenaStringPtr::Destroy(&(this->_impl_).file_name_);
  return;
}

// ~SourceContextDefaultTypeInternal @ 14fb72080

/* public: __cdecl
   google::protobuf::SourceContextDefaultTypeInternal::~SourceContextDefaultTypeInternal(void)
   __ptr64 */

void __thiscall
google::protobuf::SourceContextDefaultTypeInternal::~SourceContextDefaultTypeInternal
          (SourceContextDefaultTypeInternal *this)

{
  return;
}

// CopyFrom @ 14fb72090

/* public: void __cdecl google::protobuf::SourceContext::CopyFrom(class
   google::protobuf::SourceContext const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::SourceContext::CopyFrom(SourceContext *this,SourceContext *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14fb720d0

/* public: struct google::protobuf::Metadata __cdecl
   google::protobuf::SourceContext::GetMetadata(void)const __ptr64 */

Metadata * __thiscall
google::protobuf::SourceContext::GetMetadata(SourceContext *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadataImpl(&local_18,(ClassDataFull *)&SourceContext_class_data_)
  ;
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14fb72110

/* private: void __cdecl google::protobuf::SourceContext::InternalSwap(class
   google::protobuf::SourceContext * __ptr64) __ptr64 */

void __thiscall
google::protobuf::SourceContext::InternalSwap(SourceContext *this,SourceContext *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pvVar3 = (param_1->_impl_).file_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).file_name_.tagged_ptr_.ptr_ = (this->_impl_).file_name_.tagged_ptr_.ptr_;
  (this->_impl_).file_name_.tagged_ptr_.ptr_ = pvVar3;
  return;
}

// MergeFrom @ 14fb72150

/* public: void __cdecl google::protobuf::SourceContext::MergeFrom(class
   google::protobuf::SourceContext const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::SourceContext::MergeFrom(SourceContext *this,SourceContext *param_1)

{
  MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  return;
}

// SharedCtor @ 14fb72160

/* private: void __cdecl google::protobuf::SourceContext::SharedCtor(class google::protobuf::Arena *
   __ptr64) __ptr64 */

void __thiscall google::protobuf::SourceContext::SharedCtor(SourceContext *this,Arena *param_1)

{
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).file_name_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  return;
}

// SharedDtor @ 14fb72180

/* private: static void __cdecl google::protobuf::SourceContext::SharedDtor(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::SourceContext::SharedDtor(MessageLite *param_1)

{
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_);
  }
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)&param_1[1]._internal_metadata_);
  return;
}

// _internal_file_name @ 14fb721b0

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64 __cdecl google::protobuf::SourceContext::_internal_file_name(void)const __ptr64
    */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::SourceContext::_internal_file_name(SourceContext *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
         ((ulonglong)(this->_impl_).file_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
}

// _internal_set_file_name @ 14fb721c0

/* private: void __cdecl google::protobuf::SourceContext::_internal_set_file_name(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::SourceContext::_internal_set_file_name
          (SourceContext *this,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set<>(&(this->_impl_).file_name_,param_1,pAVar1);
  return;
}

// FUN_150474690 @ 150474690

void FUN_150474690(void)

{
  return;
}


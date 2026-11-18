// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 27

// FUN_141455f30 @ 141455f30

void FUN_141455f30(void)

{
  google::protobuf::internal::AddDescriptors
            ((DescriptorTable *)&descriptor_table_google_2fprotobuf_2fany_2eproto);
  DAT_1553e5780 = 0;
  return;
}

// MergeImpl @ 14fb711e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: static void __cdecl google::protobuf::Any::MergeImpl(class google::protobuf::MessageLite
   & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::Any::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  MessageLite *this;
  uint uVar1;
  InternalMetadata *this_00;
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
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      this_00 = &param_1[1]._internal_metadata_;
      if ((pbVar3->_Mypair)._Myval2._Mysize == 0) {
        if ((this_00->ptr_ & 3) == 0) {
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
                    ((ArenaStringPtr *)this_00,
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
        internal::ArenaStringPtr::Set<>((ArenaStringPtr *)this_00,pbVar3,pAVar5);
      }
    }
    if ((uVar1 & 2) != 0) {
      pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._padding_ & 0xfffffffffffffffc);
      this = param_1 + 2;
      if ((pbVar3->_Mypair)._Myval2._Mysize == 0) {
        if (((ulonglong)((TaggedStringPtr *)&this->_padding_)->ptr_ & 3) == 0) {
          local_38._8_8_ = 0;
          local_28 = 0;
          local_20 = 0xf;
          local_38._Ptr = (char *)0x0;
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
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
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
        pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
        }
        internal::ArenaStringPtr::Set<>((ArenaStringPtr *)this,pbVar3,pAVar5);
      }
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

// Clear @ 14fb713e0

/* public: virtual void __cdecl google::protobuf::Any::Clear(void) __ptr64 */

void __thiscall google::protobuf::Any::Clear(Any *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  undefined8 *puVar2;
  longlong *this_01;
  uint uVar3;
  undefined8 *puVar4;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).type_url_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar4 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar4 = (undefined8 *)*puVar2;
      }
      puVar2[2] = 0;
      *(undefined1 *)puVar4 = 0;
    }
    if ((uVar3 & 2) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).value_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar4 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar4 = (undefined8 *)*puVar2;
      }
      puVar2[2] = 0;
      *(undefined1 *)puVar4 = 0;
    }
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

// ByteSizeLong @ 14fb71450

/* public: virtual unsigned __int64 __cdecl google::protobuf::Any::ByteSizeLong(void)const __ptr64
    */

__uint64 __thiscall google::protobuf::Any::ByteSizeLong(Any *this)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  __uint64 _Var5;
  
  _Var5 = 0;
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 3) != 0) {
    if (((uVar3 & 1) != 0) &&
       (lVar1 = *(longlong *)
                 (((ulonglong)(this->_impl_).type_url_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10
                 ), lVar1 != 0)) {
      uVar2 = (uint)lVar1 | 1;
      if (__isa_available < 5) {
        iVar4 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 0x1f - iVar4;
      }
      else {
        iVar4 = LZCOUNT(uVar2);
      }
      _Var5 = (ulonglong)(iVar4 * -9 + 0x160U >> 6) + 1 + lVar1;
    }
    if (((uVar3 & 2) != 0) &&
       (lVar1 = *(longlong *)
                 (((ulonglong)(this->_impl_).value_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
       lVar1 != 0)) {
      uVar3 = (uint)lVar1 | 1;
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
      _Var5 = _Var5 + 1 + (ulonglong)(iVar4 * -9 + 0x160U >> 6) + lVar1;
    }
  }
  _Var5 = protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14fb71510

/* public: virtual unsigned char * __ptr64 __cdecl
   google::protobuf::Any::_InternalSerialize(unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::Any::_InternalSerialize(Any *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  uchar *puVar2;
  char *pcVar3;
  char *pcVar4;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).type_url_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_28._Mydata = "google.protobuf.Any.type_url";
      local_28._Mysize = 0x1c;
      internal::WireFormatLite::VerifyUtf8String
                (pcVar3,(int)*(longlong *)(pcVar4 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar4;
      param_1 = io::EpsCopyOutputStream::WriteStringMaybeAliased(param_2,1,&local_28,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).value_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*puVar1 != 0) {
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar4 = *(char **)pcVar4;
      }
      local_28._Mydata = pcVar4;
      local_28._Mysize = *puVar1;
      param_1 = io::EpsCopyOutputStream::WriteStringMaybeAliased(param_2,2,&local_28,param_1);
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

// GetClassData @ 14fb71670

/* protected: virtual struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   google::protobuf::Any::GetClassData(void)const __ptr64 */

ClassData * __thiscall google::protobuf::Any::GetClassData(Any *this)

{
  return (ClassData *)&Any_class_data_;
}

// PlacementNew_ @ 14fb71690

/* protected: static void * __ptr64 __cdecl google::protobuf::Any::PlacementNew_(void const *
   __ptr64,void * __ptr64,class google::protobuf::Arena * __ptr64) */

void * __cdecl google::protobuf::Any::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = vftable;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) = &internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x20) = &internal::fixed_address_empty_string;
  return param_2;
}

// `vector_deleting_destructor' @ 14fb716c0

/* public: virtual void * __ptr64 __cdecl google::protobuf::Any::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall google::protobuf::Any::_vector_deleting_destructor_(Any *this,uint param_1)

{
  this->_padding_ = (longlong)vftable;
  if ((this->_padding_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  internal::ArenaStringPtr::Destroy(&(this->_impl_).type_url_);
  internal::ArenaStringPtr::Destroy(&(this->_impl_).value_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// Any @ 14fb71730

/* protected: __cdecl google::protobuf::Any::Any(class google::protobuf::Arena * __ptr64) __ptr64 */

Any * __thiscall google::protobuf::Any::Any(Any *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)vftable;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).type_url_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).value_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  return this;
}

// Any @ 14fb71760

/* protected: __cdecl google::protobuf::Any::Any(class google::protobuf::Arena * __ptr64,class
   google::protobuf::Any const & __ptr64) __ptr64 */

Any * __thiscall google::protobuf::Any::Any(Any *this,Arena *param_1,Any *param_2)

{
  ArenaStringPtr *pAVar1;
  TaggedStringPtr TVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)vftable;
  if ((param_2->_padding_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).type_url_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = internal::TaggedStringPtr::ForceCopy(&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  pAVar1 = &(param_2->_impl_).value_;
  (this->_impl_).type_url_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) == 0) {
    (this->_impl_).value_.tagged_ptr_.ptr_ = pvVar3;
    return this;
  }
  TVar2 = internal::TaggedStringPtr::ForceCopy(&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
  (this->_impl_).value_.tagged_ptr_.ptr_ = *TVar2.ptr_;
  return this;
}

// Impl_ @ 14fb71820

/* public: __cdecl google::protobuf::Any::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

Impl_ * __thiscall
google::protobuf::Any::Impl_::Impl_(Impl_ *this,InternalVisibility param_1,Arena *param_2)

{
  this->_has_bits_ = (uint  [1])0x0;
  this->_cached_size_ = (atomic<int>)0x0;
  (this->type_url_).tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->value_).tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  return this;
}

// Impl_ @ 14fb71840

/* public: __cdecl google::protobuf::Any::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64,struct
   google::protobuf::Any::Impl_ const & __ptr64,class google::protobuf::Any const & __ptr64) __ptr64
    */

Impl_ * __thiscall
google::protobuf::Any::Impl_::Impl_
          (Impl_ *this,InternalVisibility param_1,Arena *param_2,Impl_ *param_3,Any *param_4)

{
  TaggedStringPtr TVar1;
  void *pvVar2;
  
  (this->_has_bits_).has_bits_[0] = (param_3->_has_bits_).has_bits_[0];
  (this->_cached_size_).atom_ = (atomic<int>)0x0;
  pvVar2 = (param_3->type_url_).tagged_ptr_.ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = internal::TaggedStringPtr::ForceCopy
                      (&(param_3->type_url_).tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->type_url_).tagged_ptr_.ptr_ = pvVar2;
  pvVar2 = (param_3->value_).tagged_ptr_.ptr_;
  if (((ulonglong)pvVar2 & 3) == 0) {
    (this->value_).tagged_ptr_.ptr_ = pvVar2;
    return this;
  }
  TVar1 = internal::TaggedStringPtr::ForceCopy
                    (&(param_3->value_).tagged_ptr_,(Arena *)&stack0x00000020);
                    /* WARNING: Load size is inaccurate */
  (this->value_).tagged_ptr_.ptr_ = *TVar1.ptr_;
  return this;
}

// ~Any @ 14fb718d0

/* public: virtual __cdecl google::protobuf::Any::~Any(void) __ptr64 */

void __thiscall google::protobuf::Any::~Any(Any *this)

{
  this->_padding_ = (longlong)vftable;
  if ((this->_padding_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  internal::ArenaStringPtr::Destroy(&(this->_impl_).type_url_);
  internal::ArenaStringPtr::Destroy(&(this->_impl_).value_);
  return;
}

// ~AnyDefaultTypeInternal @ 14fb71910

/* public: __cdecl google::protobuf::AnyDefaultTypeInternal::~AnyDefaultTypeInternal(void) __ptr64
    */

void __thiscall
google::protobuf::AnyDefaultTypeInternal::~AnyDefaultTypeInternal(AnyDefaultTypeInternal *this)

{
  return;
}

// CopyFrom @ 14fb71920

/* public: void __cdecl google::protobuf::Any::CopyFrom(class google::protobuf::Any const & __ptr64)
   __ptr64 */

void __thiscall google::protobuf::Any::CopyFrom(Any *this,Any *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetAnyFieldDescriptors @ 14fb71960

/* public: static bool __cdecl google::protobuf::Any::GetAnyFieldDescriptors(class
   google::protobuf::Message const & __ptr64,class google::protobuf::FieldDescriptor const * __ptr64
   * __ptr64,class google::protobuf::FieldDescriptor const * __ptr64 * __ptr64) */

bool __cdecl
google::protobuf::Any::GetAnyFieldDescriptors
          (Message *param_1,FieldDescriptor **param_2,FieldDescriptor **param_3)

{
  bool bVar1;
  
  bVar1 = internal::GetAnyFieldDescriptors(param_1,param_2,param_3);
  return bVar1;
}

// GetMetadata @ 14fb71970

/* public: struct google::protobuf::Metadata __cdecl google::protobuf::Any::GetMetadata(void)const
   __ptr64 */

Metadata * __thiscall google::protobuf::Any::GetMetadata(Any *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadataImpl(&local_18,(ClassDataFull *)&Any_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14fb719b0

/* private: void __cdecl google::protobuf::Any::InternalSwap(class google::protobuf::Any * __ptr64)
   __ptr64 */

void __thiscall google::protobuf::Any::InternalSwap(Any *this,Any *param_1)

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
  pvVar3 = (param_1->_impl_).type_url_.tagged_ptr_.ptr_;
  (param_1->_impl_).type_url_.tagged_ptr_.ptr_ = (this->_impl_).type_url_.tagged_ptr_.ptr_;
  (this->_impl_).type_url_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).value_.tagged_ptr_.ptr_;
  (param_1->_impl_).value_.tagged_ptr_.ptr_ = (this->_impl_).value_.tagged_ptr_.ptr_;
  (this->_impl_).value_.tagged_ptr_.ptr_ = pvVar3;
  return;
}

// MergeFrom @ 14fb71a00

/* public: void __cdecl google::protobuf::Any::MergeFrom(class google::protobuf::Any const &
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Any::MergeFrom(Any *this,Any *param_1)

{
  MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  return;
}

// ParseAnyTypeUrl @ 14fb71a10

/* public: static bool __cdecl google::protobuf::Any::ParseAnyTypeUrl(class
   std::basic_string_view<char,struct std::char_traits<char> >,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64) */

bool __cdecl
google::protobuf::Any::ParseAnyTypeUrl
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  bool bVar1;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  bVar1 = internal::ParseAnyTypeUrl(&local_18,param_2);
  return bVar1;
}

// SharedCtor @ 14fb71a40

/* private: void __cdecl google::protobuf::Any::SharedCtor(class google::protobuf::Arena * __ptr64)
   __ptr64 */

void __thiscall google::protobuf::Any::SharedCtor(Any *this,Arena *param_1)

{
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).type_url_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).value_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  return;
}

// SharedDtor @ 14fb71a60

/* private: static void __cdecl google::protobuf::Any::SharedDtor(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::Any::SharedDtor(MessageLite *param_1)

{
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_);
  }
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)&param_1[1]._internal_metadata_);
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)(param_1 + 2));
  return;
}

// _internal_set_type_url @ 14fb71aa0

/* private: void __cdecl google::protobuf::Any::_internal_set_type_url(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::Any::_internal_set_type_url
          (Any *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set<>(&(this->_impl_).type_url_,param_1,pAVar1);
  return;
}

// _internal_set_value @ 14fb71ad0

/* private: void __cdecl google::protobuf::Any::_internal_set_value(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::Any::_internal_set_value
          (Any *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 2;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set<>(&(this->_impl_).value_,param_1,pAVar1);
  return;
}

// _internal_type_url @ 14fb71b00

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64 __cdecl google::protobuf::Any::_internal_type_url(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::Any::_internal_type_url(Any *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
         ((ulonglong)(this->_impl_).type_url_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
}

// _internal_value @ 14fb71b10

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64 __cdecl google::protobuf::Any::_internal_value(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::Any::_internal_value(Any *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
         ((ulonglong)(this->_impl_).value_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
}

// FUN_150474680 @ 150474680

void FUN_150474680(void)

{
  return;
}


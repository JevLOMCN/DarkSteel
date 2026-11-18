// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 30

// `dynamic_initializer_for_'_RequestBase_default_instance_'' @ 14129a6d0

void __cdecl _dynamic_initializer_for___RequestBase_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___RequestBase_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ResponseBase_default_instance_'' @ 14129a6f0

void __cdecl _dynamic_initializer_for___ResponseBase_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ResponseBase_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129a710

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table__5fapi_5fcommon_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c239250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ResponseBase::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  ulong64 uVar5;
  Arena *pAVar6;
  undefined1 auStackY_68 [32];
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar4->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar6);
          if (0xf < uStack_20) {
            uVar5 = uStack_20 + 1;
            uVar3 = local_38._Ptr;
            if (0xfff < uVar5) {
              uVar3 = *(undefined8 *)(local_38._Ptr + -8);
              uVar5 = uStack_20 + 0x28;
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar3,uVar5);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar4,pAVar6);
      }
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (int)param_2[2]._padding_, iVar2 != 0)) {
      *(int *)&param_1[2]._padding_ = iVar2;
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

// Clear @ 14c2393b0

void __thiscall ResponseBase::Clear(ResponseBase *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    puVar2 = (undefined8 *)
             ((ulonglong)(this->_impl_).error_message_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar2[2] = 0;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
  }
  (this->_impl_).error_code_ = 0;
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
    uVar3 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar1 & 3;
  }
  if (uVar3 != 0) {
    google::protobuf::UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14c2393f0

ulong64 __thiscall ResponseBase::ByteSizeLong(ResponseBase *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  __uint64 _Var6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((uVar1 & 3) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).error_message_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar5 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 0x1f - iVar5;
      }
      else {
        iVar5 = LZCOUNT(uVar3);
      }
      _Var6 = (ulonglong)(iVar5 * -9 + 0x160U >> 6) + 1 + lVar2;
    }
    if (((uVar1 & 2) != 0) && (iVar5 = (this->_impl_).error_code_, iVar5 != 0)) {
      uVar4 = (longlong)iVar5 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar5 = 0x3f - (int)lVar2;
      }
      else {
        iVar5 = (int)LZCOUNT(uVar4);
      }
      _Var6 = _Var6 + 1 + (ulonglong)(iVar5 * -9 + 0x280U >> 6);
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c2394b0

uchar * __thiscall
ResponseBase::_InternalSerialize(ResponseBase *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  size_t *psVar1;
  size_t _Size;
  ulonglong uVar2;
  uchar *puVar3;
  byte bVar4;
  char *pcVar5;
  char *_Src;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) && ((this->_impl_).error_code_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar2 = (ulonglong)(this->_impl_).error_code_;
    *param_1 = 8;
    while( true ) {
      param_1 = param_1 + 1;
      bVar4 = (byte)uVar2;
      if (uVar2 < 0x80) break;
      uVar2 = uVar2 >> 7;
      *param_1 = bVar4 | 0x80;
    }
    *param_1 = bVar4;
    param_1 = param_1 + 1;
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    _Src = (char *)((ulonglong)(this->_impl_).error_message_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    psVar1 = (size_t *)(_Src + 0x10);
    if (*(longlong *)(_Src + 0x10) != 0) {
      pcVar5 = _Src;
      if (0xf < *(ulonglong *)(_Src + 0x18)) {
        pcVar5 = *(char **)_Src;
      }
      local_18._Mysize = 0x1a;
      local_18._Mydata = "ResponseBase.error_message";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar5,(int)*(longlong *)(_Src + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(_Src + 0x18)) {
        _Src = *(char **)_Src;
      }
      _Size = *psVar1;
      if (((longlong)_Size < 0x80) &&
         ((longlong)_Size <= (longlong)(param_2->end_ + (0xe - (longlong)param_1)))) {
        *param_1 = 0x12;
        param_1[1] = (byte)_Size;
        memcpy(param_1 + 2,_Src,_Size);
        param_1 = param_1 + 2 + _Size;
      }
      else {
        local_18._Mydata = _Src;
        local_18._Mysize = _Size;
        param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliasedOutline
                            (param_2,2,&local_18,param_1);
      }
    }
  }
  if ((this->_padding_ & 1) != 0) {
    puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14c239640

ClassData * __thiscall ResponseBase::GetClassData(ResponseBase *this)

{
  return (ClassData *)&ResponseBase_class_data_;
}

// PlacementNew_ @ 14c239660

void * __cdecl ResponseBase::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ResponseBase__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// MergeImpl @ 14c239690

void __cdecl RequestBase::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  MessageLite *pMVar3;
  MessageLite *pMVar4;
  void *pvVar5;
  Arena *pAVar6;
  
  pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pMVar3 = (MessageLite *)param_1[1]._internal_metadata_.ptr_;
      pMVar4 = (MessageLite *)param_2[1]._internal_metadata_.ptr_;
      if (pMVar3 == (MessageLite *)0x0) {
        pvVar5 = google::protobuf::Arena::CopyConstruct<UniqueId>(pAVar6,pMVar4);
        param_1[1]._internal_metadata_.ptr_ = (long64)pvVar5;
      }
      else {
        UniqueId::MergeImpl(pMVar3,pMVar4);
      }
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (int)param_2[2]._padding_, iVar2 != 0)) {
      *(int *)&param_1[2]._padding_ = iVar2;
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

// Clear @ 14c239740

void __thiscall RequestBase::Clear(RequestBase *this)

{
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    UniqueId::Clear((this->_impl_).player_session_uid_);
  }
  (this->_impl_).increase_id_ = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c239790

ulong64 __thiscall RequestBase::ByteSizeLong(RequestBase *this)

{
  uint uVar1;
  longlong lVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  __uint64 _Var7;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var7 = 0;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = UniqueId::ByteSizeLong((this->_impl_).player_session_uid_);
      uVar5 = (uint)uVar3 | 1;
      if (__isa_available < 5) {
        iVar6 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 0x1f - iVar6;
      }
      else {
        iVar6 = LZCOUNT(uVar5);
      }
      _Var7 = (ulonglong)(iVar6 * -9 + 0x160U >> 6) + 1 + uVar3;
    }
    if (((uVar1 & 2) != 0) && (iVar6 = (this->_impl_).increase_id_, iVar6 != 0)) {
      uVar4 = (longlong)iVar6 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar6 = 0x3f - (int)lVar2;
      }
      else {
        iVar6 = (int)LZCOUNT(uVar4);
      }
      _Var7 = _Var7 + (iVar6 * -9 + 0x2c0U >> 6);
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c239860

uchar * __thiscall
RequestBase::_InternalSerialize(RequestBase *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  int iVar2;
  uchar *puVar3;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (1,(MessageLite *)(this->_impl_).player_session_uid_,
                         (int)(((this->_impl_).player_session_uid_)->_impl_)._cached_size_.atom_,
                         param_1,param_2);
  }
  if (((uVar1 & 2) != 0) && (iVar2 = (this->_impl_).increase_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar2,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar3;
  }
  return param_1;
}

// GetClassData @ 14c239900

ClassData * __thiscall RequestBase::GetClassData(RequestBase *this)

{
  return (ClassData *)&RequestBase_class_data_;
}

// PlacementNew_ @ 14c239920

void * __cdecl RequestBase::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7RequestBase__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// RequestBase @ 14c239950

RequestBase * __thiscall RequestBase::RequestBase(RequestBase *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RequestBase__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).player_session_uid_ = (UniqueId *)0x0;
  (this->_impl_).increase_id_ = 0;
  return this;
}

// RequestBase @ 14c239980

RequestBase * __thiscall
RequestBase::RequestBase(RequestBase *this,Arena *param_1,RequestBase *param_2)

{
  UniqueId *pUVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RequestBase__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pUVar1 = (UniqueId *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pUVar1 = google::protobuf::Arena::CopyConstruct<UniqueId>
                       (param_1,(param_2->_impl_).player_session_uid_);
  }
  (this->_impl_).player_session_uid_ = pUVar1;
  (this->_impl_).increase_id_ = (param_2->_impl_).increase_id_;
  return this;
}

// ResponseBase @ 14c239a10

ResponseBase * __thiscall ResponseBase::ResponseBase(ResponseBase *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ResponseBase__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).error_message_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).error_code_ = 0;
  return this;
}

// ResponseBase @ 14c239a40

ResponseBase * __thiscall
ResponseBase::ResponseBase(ResponseBase *this,Arena *param_1,ResponseBase *param_2)

{
  ArenaStringPtr *this_00;
  TaggedStringPtr TVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ResponseBase__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).error_message_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar2 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->_impl_).error_message_.tagged_ptr_.ptr_ = pvVar2;
  (this->_impl_).error_code_ = (param_2->_impl_).error_code_;
  return this;
}

// ~RequestBase @ 14c239ad0

void __thiscall RequestBase::~RequestBase(RequestBase *this)

{
  UniqueId *this_00;
  
  this->_padding_ = (longlong)&___7RequestBase__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  this_00 = (this->_impl_).player_session_uid_;
  if (this_00 != (UniqueId *)0x0) {
    UniqueId::~UniqueId(this_00);
    ::operator_delete(this_00,0x20);
    return;
  }
  return;
}

// ~ResponseBase @ 14c239b20

void __thiscall ResponseBase::~ResponseBase(ResponseBase *this)

{
  this->_padding_ = (longlong)&___7ResponseBase__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).error_message_);
  return;
}

// CopyFrom @ 14c239b60

void __thiscall RequestBase::CopyFrom(RequestBase *this,RequestBase *param_1)

{
  uint uVar1;
  int iVar2;
  UniqueId *pUVar3;
  UniqueId *pUVar4;
  Arena *pAVar5;
  
  if (param_1 != this) {
    Clear(this);
    pAVar5 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 3) != 0) {
      if ((uVar1 & 1) != 0) {
        pUVar4 = (this->_impl_).player_session_uid_;
        pUVar3 = (param_1->_impl_).player_session_uid_;
        if (pUVar4 == (UniqueId *)0x0) {
          pUVar4 = google::protobuf::Arena::CopyConstruct<UniqueId>(pAVar5,pUVar3);
          (this->_impl_).player_session_uid_ = pUVar4;
        }
        else {
          UniqueId::MergeImpl((MessageLite *)pUVar4,(MessageLite *)pUVar3);
        }
      }
      if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).increase_id_, iVar2 != 0)) {
        (this->_impl_).increase_id_ = iVar2;
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

// CopyFrom @ 14c239c20

void __thiscall ResponseBase::CopyFrom(ResponseBase *this,ResponseBase *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c239c60

Metadata * __thiscall RequestBase::GetMetadata(RequestBase *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&RequestBase_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c239ca0

Metadata * __thiscall ResponseBase::GetMetadata(ResponseBase *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&ResponseBase_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c239ce0

void __thiscall RequestBase::InternalSwap(RequestBase *this,RequestBase *param_1)

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
            (&(this->_impl_).player_session_uid_,&(this->_impl_).field_0x14,
             &(param_1->_impl_).player_session_uid_);
  return;
}

// InternalSwap @ 14c239d20

void __thiscall ResponseBase::InternalSwap(ResponseBase *this,ResponseBase *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  
  lVar3 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar3;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pvVar4 = (param_1->_impl_).error_message_.tagged_ptr_.ptr_;
  (param_1->_impl_).error_message_.tagged_ptr_.ptr_ = (this->_impl_).error_message_.tagged_ptr_.ptr_
  ;
  (this->_impl_).error_message_.tagged_ptr_.ptr_ = pvVar4;
  iVar2 = (this->_impl_).error_code_;
  (this->_impl_).error_code_ = (param_1->_impl_).error_code_;
  (param_1->_impl_).error_code_ = iVar2;
  return;
}

// clear_player_session_uid @ 14c239d70

void __thiscall RequestBase::clear_player_session_uid(RequestBase *this)

{
  UniqueId *this_00;
  
  this_00 = (this->_impl_).player_session_uid_;
  if (this_00 != (UniqueId *)0x0) {
    UniqueId::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffe;
  return;
}

// `dynamic_atexit_destructor_for_'_RequestBase_default_instance_'' @ 150443d00

void __cdecl _dynamic_atexit_destructor_for___RequestBase_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ResponseBase_default_instance_'' @ 150443d10

void __cdecl _dynamic_atexit_destructor_for___ResponseBase_default_instance___(void)

{
  return;
}


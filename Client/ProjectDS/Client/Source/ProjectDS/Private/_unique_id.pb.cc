// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// `dynamic_initializer_for_'_UniqueId_default_instance_'' @ 14129ad70

void __cdecl _dynamic_initializer_for___UniqueId_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___UniqueId_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129ad90

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table__5funique_5fid_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c240320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UniqueId::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  ulong64 uVar4;
  Arena *pAVar5;
  undefined1 auStackY_68 [32];
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 1) != 0) {
    pbVar3 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
    if ((pbVar3->_Mypair)._Myval2._Mysize == 0) {
      if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        local_38._8_8_ = 0;
        local_38._Ptr = (char *)0x0;
        local_28 = ___xmm_000000000000000f0000000000000000;
        uStack_20 = _UNK_15076add8;
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                   (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                   pAVar5);
        if (0xf < uStack_20) {
          uVar4 = uStack_20 + 1;
          uVar2 = local_38._Ptr;
          if (0xfff < uVar4) {
            uVar2 = *(undefined8 *)(local_38._Ptr + -8);
            uVar4 = uStack_20 + 0x28;
            if ((char *)0x1f < local_38._Ptr + (-8 - uVar2)) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
      google::protobuf::internal::ArenaStringPtr::Set<>
                ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar3,pAVar5);
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

// Clear @ 14c240460

void __thiscall UniqueId::Clear(UniqueId *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    puVar2 = (undefined8 *)((ulonglong)(this->_impl_).value_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar2[2] = 0;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
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

// ByteSizeLong @ 14c2404a0

ulong64 __thiscall UniqueId::ByteSizeLong(UniqueId *this)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar1 = *(longlong *)
               (((ulonglong)(this->_impl_).value_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
     lVar1 != 0)) {
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
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c240510

uchar * __thiscall
UniqueId::_InternalSerialize(UniqueId *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  size_t _Size;
  uchar *puVar1;
  char *_Src;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    _Src = (char *)((ulonglong)(this->_impl_).value_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    _Size = *(size_t *)(_Src + 0x10);
    if (_Size != 0) {
      if (0xf < *(ulonglong *)(_Src + 0x18)) {
        _Src = *(char **)_Src;
      }
      if (((longlong)_Size < 0x80) &&
         ((longlong)_Size <= (longlong)(param_2->end_ + (0xe - (longlong)param_1)))) {
        *param_1 = '\n';
        param_1[1] = (uchar)_Size;
        memcpy(param_1 + 2,_Src,_Size);
        param_1 = param_1 + 2 + _Size;
      }
      else {
        local_18._Mydata = _Src;
        local_18._Mysize = _Size;
        param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliasedOutline
                            (param_2,1,&local_18,param_1);
      }
    }
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar1;
}

// GetClassData @ 14c2405f0

ClassData * __thiscall UniqueId::GetClassData(UniqueId *this)

{
  return (ClassData *)&UniqueId_class_data_;
}

// PlacementNew_ @ 14c240610

void * __cdecl UniqueId::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7UniqueId__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  return param_2;
}

// UniqueId @ 14c240640

UniqueId * __thiscall UniqueId::UniqueId(UniqueId *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7UniqueId__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).value_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  return this;
}

// UniqueId @ 14c240670

UniqueId * __thiscall UniqueId::UniqueId(UniqueId *this,Arena *param_1,UniqueId *param_2)

{
  ArenaStringPtr *this_00;
  void *pvVar1;
  TaggedStringPtr TVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7UniqueId__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).value_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar1 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar1 & 3) == 0) {
    (this->_impl_).value_.tagged_ptr_.ptr_ = pvVar1;
    return this;
  }
  TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                    (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
  (this->_impl_).value_.tagged_ptr_.ptr_ = *TVar2.ptr_;
  return this;
}

// ~UniqueId @ 14c240710

void __thiscall UniqueId::~UniqueId(UniqueId *this)

{
  this->_padding_ = (longlong)&___7UniqueId__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).value_);
  return;
}

// CopyFrom @ 14c240750

void __thiscall UniqueId::CopyFrom(UniqueId *this,UniqueId *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c240790

Metadata * __thiscall UniqueId::GetMetadata(UniqueId *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&UniqueId_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c2407d0

void __thiscall UniqueId::InternalSwap(UniqueId *this,UniqueId *param_1)

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
  pvVar3 = (param_1->_impl_).value_.tagged_ptr_.ptr_;
  (param_1->_impl_).value_.tagged_ptr_.ptr_ = (this->_impl_).value_.tagged_ptr_.ptr_;
  (this->_impl_).value_.tagged_ptr_.ptr_ = pvVar3;
  return;
}

// `dynamic_atexit_destructor_for_'_UniqueId_default_instance_'' @ 150444110

void __cdecl _dynamic_atexit_destructor_for___UniqueId_default_instance___(void)

{
  return;
}


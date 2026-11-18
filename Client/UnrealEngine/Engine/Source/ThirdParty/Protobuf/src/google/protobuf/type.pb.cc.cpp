// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 208

// FUN_141455fd0 @ 141455fd0

void FUN_141455fd0(void)

{
  google::protobuf::internal::AddDescriptors
            ((DescriptorTable *)&descriptor_table_google_2fprotobuf_2ftype_2eproto);
  DAT_1553e57ac = 0;
  return;
}

// MergeImpl @ 14fb721f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: static void __cdecl google::protobuf::Option::MergeImpl(class
   google::protobuf::MessageLite & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::Option::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  byte bVar2;
  void *pvVar3;
  InternalMetadata *this;
  undefined8 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  ulong64 uVar6;
  Arena *pAVar7;
  Arena *pAVar8;
  undefined1 auStack_68 [40];
  _Bxty local_40;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  pAVar8 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar2 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar7 = pAVar8;
  if (bVar2 != 0) {
    pAVar7 = (Arena *)(pAVar8->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      this = &param_1[1]._internal_metadata_;
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((this->ptr_ & 3) == 0) {
          local_40._8_8_ = 0;
          local_30 = 0;
          local_28 = 0xf;
          local_40._Ptr = (char *)0x0;
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          if (bVar2 != 0) {
            pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
          }
          internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)this,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
                     pAVar8);
          if (0xf < local_28) {
            uVar6 = local_28 + 1;
            uVar4 = local_40._Ptr;
            if (0xfff < uVar6) {
              uVar6 = local_28 + 0x28;
              uVar4 = *(undefined8 *)(local_40._Ptr + -8);
              if ((char *)0x1f < local_40._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            ::operator_delete((void *)uVar4,uVar6);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        if (bVar2 != 0) {
          pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
        }
        internal::ArenaStringPtr::Set<>((ArenaStringPtr *)this,pbVar5,pAVar8);
      }
    }
    if ((uVar1 & 2) != 0) {
      if ((MessageLite *)param_1[2]._padding_ == (MessageLite *)0x0) {
        pvVar3 = Arena::CopyConstruct<google::protobuf::Any>
                           (pAVar7,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar3;
      }
      else {
        Any::MergeImpl((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
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

// Clear @ 14fb72350

/* public: virtual void __cdecl google::protobuf::Option::Clear(void) __ptr64 */

void __thiscall google::protobuf::Option::Clear(Option *this)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
      ;
      puVar3 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar3 = (undefined8 *)*puVar2;
      }
      puVar2[2] = 0;
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar1 & 2) != 0) {
      Any::Clear((this->_impl_).value_);
    }
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14fb723c0

/* public: virtual unsigned __int64 __cdecl google::protobuf::Option::ByteSizeLong(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::Option::ByteSizeLong(Option *this)

{
  ulong64 uVar1;
  __uint64 _Var2;
  uint uVar3;
  int iVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  __uint64 _Var6;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((uVar3 & 3) != 0) {
    if (((uVar3 & 1) != 0) &&
       (pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc),
       (pbVar5->_Mypair)._Myval2._Mysize != 0)) {
      uVar1 = internal::WireFormatLite::StringSize(pbVar5);
      _Var6 = uVar1 + 1;
    }
    if ((uVar3 & 2) != 0) {
      _Var2 = Any::ByteSizeLong((this->_impl_).value_);
      uVar3 = (uint)_Var2 | 1;
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
      _Var6 = _Var6 + 1 + (iVar4 * -9 + 0x160U >> 6) + _Var2;
    }
  }
  _Var6 = protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14fb72470

/* public: virtual unsigned char * __ptr64 __cdecl
   google::protobuf::Option::_InternalSerialize(unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::Option::_InternalSerialize
          (Option *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  uchar *puVar2;
  char *pcVar3;
  char *pcVar4;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar4 = (char *)((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar4 + 0x10);
    if (*(longlong *)(pcVar4 + 0x10) != 0) {
      pcVar3 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        pcVar3 = *(char **)pcVar4;
      }
      local_28._Mydata = "google.protobuf.Option.name";
      local_28._Mysize = 0x1b;
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
    param_1 = internal::WireFormatLite::InternalWriteMessage
                        (2,(MessageLite *)(this->_impl_).value_,
                         (int)(((this->_impl_).value_)->_impl_)._cached_size_.atom_,param_1,param_2)
    ;
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar2 = internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar2;
}

// GetClassData @ 14fb725a0

/* protected: virtual struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   google::protobuf::Option::GetClassData(void)const __ptr64 */

ClassData * __thiscall google::protobuf::Option::GetClassData(Option *this)

{
  return (ClassData *)&Option_class_data_;
}

// PlacementNew_ @ 14fb725c0

/* protected: static void * __ptr64 __cdecl google::protobuf::Option::PlacementNew_(void const *
   __ptr64,void * __ptr64,class google::protobuf::Arena * __ptr64) */

void * __cdecl google::protobuf::Option::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = vftable;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) = &internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14fb725f0

/* public: virtual void * __ptr64 __cdecl google::protobuf::Option::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall google::protobuf::Option::_scalar_deleting_destructor_(Option *this,uint param_1)

{
  Any *this_00;
  
  this->_padding_ = (longlong)vftable;
  if ((this->_padding_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  internal::ArenaStringPtr::Destroy(&(this->_impl_).name_);
  this_00 = (this->_impl_).value_;
  if (this_00 != (Any *)0x0) {
    Any::~Any(this_00);
    ::operator_delete(this_00,0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// MergeImpl @ 14fb72670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: static void __cdecl google::protobuf::Field::MergeImpl(class
   google::protobuf::MessageLite & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::Field::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  MessageLite *pMVar1;
  InternalMetadata *pIVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  ulong64 uVar8;
  Arena *pAVar9;
  undefined1 auStack_68 [32];
  _Bxty local_48;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((int)param_2[2]._padding_ != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&param_1[1]._internal_metadata_,
               (RepeatedPtrFieldBase *)&param_2[1]._internal_metadata_,
               Arena::CopyConstruct<google::protobuf::Option>);
  }
  uVar4 = (uint)param_2[1]._padding_;
  if ((char)uVar4 != '\0') {
    if ((uVar4 & 1) != 0) {
      pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[3]._padding_ & 0xfffffffffffffffc);
      pMVar1 = param_1 + 3;
      if ((pbVar7->_Mypair)._Myval2._Mysize == 0) {
        if (((ulonglong)((TaggedStringPtr *)&pMVar1->_padding_)->ptr_ & 3) == 0) {
          local_48._8_8_ = 0;
          local_38 = 0;
          local_30 = 0xf;
          local_48._Ptr = (char *)0x0;
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
          }
          internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)pMVar1,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48,
                     pAVar9);
          if (0xf < local_30) {
            uVar8 = local_30 + 1;
            uVar6 = local_48._Ptr;
            if (0xfff < uVar8) {
              uVar8 = local_30 + 0x28;
              uVar6 = *(undefined8 *)(local_48._Ptr + -8);
              if ((char *)0x1f < local_48._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            ::operator_delete((void *)uVar6,uVar8);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        internal::ArenaStringPtr::Set<>((ArenaStringPtr *)pMVar1,pbVar7,pAVar9);
      }
    }
    if ((uVar4 & 2) != 0) {
      pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[3]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      pIVar2 = &param_1[3]._internal_metadata_;
      if ((pbVar7->_Mypair)._Myval2._Mysize == 0) {
        if ((pIVar2->ptr_ & 3) == 0) {
          local_48._8_8_ = 0;
          local_38 = 0;
          local_30 = 0xf;
          local_48._Ptr = (char *)0x0;
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
          }
          internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)pIVar2,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48,
                     pAVar9);
          if (0xf < local_30) {
            uVar8 = local_30 + 1;
            uVar6 = local_48._Ptr;
            if (0xfff < uVar8) {
              uVar8 = local_30 + 0x28;
              uVar6 = *(undefined8 *)(local_48._Ptr + -8);
              if ((char *)0x1f < local_48._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            ::operator_delete((void *)uVar6,uVar8);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
        pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        internal::ArenaStringPtr::Set<>((ArenaStringPtr *)pIVar2,pbVar7,pAVar9);
      }
    }
    if ((uVar4 & 4) != 0) {
      pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[4]._padding_ & 0xfffffffffffffffc);
      pMVar1 = param_1 + 4;
      if ((pbVar7->_Mypair)._Myval2._Mysize == 0) {
        if (((ulonglong)((TaggedStringPtr *)&pMVar1->_padding_)->ptr_ & 3) == 0) {
          local_48._8_8_ = 0;
          local_38 = 0;
          local_30 = 0xf;
          local_48._Ptr = (char *)0x0;
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
          pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
          }
          internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)pMVar1,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48,
                     pAVar9);
          if (0xf < local_30) {
            uVar8 = local_30 + 1;
            uVar6 = local_48._Ptr;
            if (0xfff < uVar8) {
              uVar8 = local_30 + 0x28;
              uVar6 = *(undefined8 *)(local_48._Ptr + -8);
              if ((char *)0x1f < local_48._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            ::operator_delete((void *)uVar6,uVar8);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 4;
        pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        internal::ArenaStringPtr::Set<>((ArenaStringPtr *)pMVar1,pbVar7,pAVar9);
      }
    }
    if ((uVar4 & 8) != 0) {
      pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[4]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      pIVar2 = &param_1[4]._internal_metadata_;
      if ((pbVar7->_Mypair)._Myval2._Mysize == 0) {
        if ((pIVar2->ptr_ & 3) == 0) {
          local_48._8_8_ = 0;
          local_38 = 0;
          local_30 = 0xf;
          local_48._Ptr = (char *)0x0;
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 8;
          pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
          }
          internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)pIVar2,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48,
                     pAVar9);
          if (0xf < local_30) {
            uVar8 = local_30 + 1;
            uVar6 = local_48._Ptr;
            if (0xfff < uVar8) {
              uVar8 = local_30 + 0x28;
              uVar6 = *(undefined8 *)(local_48._Ptr + -8);
              if ((char *)0x1f < local_48._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            ::operator_delete((void *)uVar6,uVar8);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 8;
        pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        internal::ArenaStringPtr::Set<>((ArenaStringPtr *)pIVar2,pbVar7,pAVar9);
      }
    }
    if (((uVar4 & 0x10) != 0) && (iVar5 = (int)param_2[5]._padding_, iVar5 != 0)) {
      *(int *)&param_1[5]._padding_ = iVar5;
    }
    if (((uVar4 & 0x20) != 0) && (iVar5 = *(int *)((longlong)&param_2[5]._padding_ + 4), iVar5 != 0)
       ) {
      *(int *)((longlong)&param_1[5]._padding_ + 4) = iVar5;
    }
    if (((uVar4 & 0x40) != 0) && (iVar5 = (int)param_2[5]._internal_metadata_.ptr_, iVar5 != 0)) {
      *(int *)&param_1[5]._internal_metadata_.ptr_ = iVar5;
    }
    if (((char)uVar4 < '\0') &&
       (iVar5 = *(int *)((longlong)&param_2[5]._internal_metadata_.ptr_ + 4), iVar5 != 0)) {
      *(int *)((longlong)&param_1[5]._internal_metadata_.ptr_ + 4) = iVar5;
    }
  }
  if (((uVar4 >> 8 & 1) != 0) && (cVar3 = (char)param_2[6]._padding_, cVar3 != '\0')) {
    *(char *)&param_1[6]._padding_ = cVar3;
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar4;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14fb72a20

/* public: virtual void __cdecl google::protobuf::Field::Clear(void) __ptr64 */

void __thiscall google::protobuf::Field::Clear(Field *this)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (0 < *(int *)&(this->_impl_).options_.field_0x8) {
    internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).options_);
  }
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
      ;
      puVar3 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar3 = (undefined8 *)*puVar2;
      }
      puVar2[2] = 0;
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar1 & 2) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).type_url_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar3 = (undefined8 *)*puVar2;
      }
      puVar2[2] = 0;
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar1 & 4) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).json_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar3 = (undefined8 *)*puVar2;
      }
      puVar2[2] = 0;
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar1 & 8) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).default_value_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar3 = (undefined8 *)*puVar2;
      }
      puVar2[2] = 0;
      *(undefined1 *)puVar3 = 0;
    }
  }
  if ((uVar1 & 0xf0) != 0) {
    (this->_impl_).kind_ = 0;
    (this->_impl_).cardinality_ = 0;
    (this->_impl_).number_ = 0;
    (this->_impl_).oneof_index_ = 0;
  }
  (this->_impl_).packed_ = false;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14fb72b00

/* public: virtual unsigned __int64 __cdecl google::protobuf::Field::ByteSizeLong(void)const __ptr64
    */

__uint64 __thiscall google::protobuf::Field::ByteSizeLong(Field *this)

{
  Message *this_00;
  longlong lVar1;
  uint uVar2;
  ulong64 uVar3;
  __uint64 _Var4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  RepeatedPtrField<google::protobuf::Option> *pRVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  RepeatedPtrField<google::protobuf::Option> *pRVar11;
  __uint64 _Var12;
  ulonglong uVar13;
  
  uVar13 = (ulonglong)*(uint *)&(this->_impl_).options_.field_0x8;
  if ((~*(byte *)&(this->_impl_).options_ & 1) == 0) {
    pRVar11 = (RepeatedPtrField<google::protobuf::Option> *)
              (*(longlong *)&(this->_impl_).options_ + 7);
    pRVar9 = (RepeatedPtrField<google::protobuf::Option> *)
             (*(longlong *)&(this->_impl_).options_ + 7);
  }
  else {
    pRVar9 = &(this->_impl_).options_;
    pRVar11 = &(this->_impl_).options_;
  }
  iVar8 = *(int *)&(this->_impl_).options_.field_0x8;
  for (; pRVar11 !=
         (RepeatedPtrField<google::protobuf::Option> *)(&pRVar9->field_0x0 + (longlong)iVar8 * 8);
      pRVar11 = (RepeatedPtrField<google::protobuf::Option> *)&pRVar11->field_0x8) {
    this_00 = *(Message **)pRVar11;
    _Var12 = 0;
    uVar6 = *(uint *)(this_00 + 1);
    if ((uVar6 & 3) != 0) {
      if (((uVar6 & 1) != 0) &&
         (pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                    (*(ulonglong *)&this_00[1].field_0x8 & 0xfffffffffffffffc),
         (pbVar10->_Mypair)._Myval2._Mysize != 0)) {
        uVar3 = internal::WireFormatLite::StringSize(pbVar10);
        _Var12 = uVar3 + 1;
      }
      if ((uVar6 & 2) != 0) {
        _Var4 = Any::ByteSizeLong(*(Any **)(this_00 + 2));
        uVar6 = (uint)_Var4 | 1;
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
        _Var12 = _Var12 + 1 + (iVar7 * -9 + 0x160U >> 6) + _Var4;
      }
    }
    _Var12 = protobuf::Message::MaybeComputeUnknownFieldsSize
                       (this_00,_Var12,(CachedSize *)&this_00[1].field_0x4);
    uVar6 = (uint)_Var12 | 1;
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
    uVar13 = uVar13 + (iVar7 * -9 + 0x160U >> 6) + _Var12;
  }
  uVar6 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((char)uVar6 != '\0') {
    if (((uVar6 & 1) != 0) &&
       (lVar1 = *(longlong *)
                 (((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
       lVar1 != 0)) {
      uVar2 = (uint)lVar1 | 1;
      if (__isa_available < 5) {
        iVar8 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar8 = 0x1f - iVar8;
      }
      else {
        iVar8 = LZCOUNT(uVar2);
      }
      uVar13 = uVar13 + 1 + (ulonglong)(iVar8 * -9 + 0x160U >> 6) + lVar1;
    }
    if (((uVar6 & 2) != 0) &&
       (lVar1 = *(longlong *)
                 (((ulonglong)(this->_impl_).type_url_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10
                 ), lVar1 != 0)) {
      uVar2 = (uint)lVar1 | 1;
      if (__isa_available < 5) {
        iVar8 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar8 = 0x1f - iVar8;
      }
      else {
        iVar8 = LZCOUNT(uVar2);
      }
      uVar13 = uVar13 + 1 + (ulonglong)(iVar8 * -9 + 0x160U >> 6) + lVar1;
    }
    if (((uVar6 & 4) != 0) &&
       (lVar1 = *(longlong *)
                 (((ulonglong)(this->_impl_).json_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), lVar1 != 0)) {
      uVar2 = (uint)lVar1 | 1;
      if (__isa_available < 5) {
        iVar8 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar8 = 0x1f - iVar8;
      }
      else {
        iVar8 = LZCOUNT(uVar2);
      }
      uVar13 = uVar13 + 1 + (ulonglong)(iVar8 * -9 + 0x160U >> 6) + lVar1;
    }
    if (((uVar6 & 8) != 0) &&
       (lVar1 = *(longlong *)
                 (((ulonglong)(this->_impl_).default_value_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
                 0x10), lVar1 != 0)) {
      uVar2 = (uint)lVar1 | 1;
      if (__isa_available < 5) {
        iVar8 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar8 = 0x1f - iVar8;
      }
      else {
        iVar8 = LZCOUNT(uVar2);
      }
      uVar13 = uVar13 + 1 + (ulonglong)(iVar8 * -9 + 0x160U >> 6) + lVar1;
    }
    if (((uVar6 & 0x10) != 0) && (iVar8 = (this->_impl_).kind_, iVar8 != 0)) {
      uVar5 = (longlong)iVar8 | 1;
      if (__isa_available < 5) {
        lVar1 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar1;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar5);
      }
      uVar13 = uVar13 + 1 + (ulonglong)(iVar8 * -9 + 0x280U >> 6);
    }
    if (((uVar6 & 0x20) != 0) && (iVar8 = (this->_impl_).cardinality_, iVar8 != 0)) {
      uVar5 = (longlong)iVar8 | 1;
      if (__isa_available < 5) {
        lVar1 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar1;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar5);
      }
      uVar13 = uVar13 + 1 + (ulonglong)(iVar8 * -9 + 0x280U >> 6);
    }
    if (((uVar6 & 0x40) != 0) && (iVar8 = (this->_impl_).number_, iVar8 != 0)) {
      uVar5 = (longlong)iVar8 | 1;
      if (__isa_available < 5) {
        lVar1 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar1;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar5);
      }
      uVar13 = uVar13 + (iVar8 * -9 + 0x2c0U >> 6);
    }
    if (((char)uVar6 < '\0') && (iVar8 = (this->_impl_).oneof_index_, iVar8 != 0)) {
      uVar5 = (longlong)iVar8 | 1;
      if (__isa_available < 5) {
        lVar1 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar1;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar5);
      }
      uVar13 = uVar13 + (iVar8 * -9 + 0x2c0U >> 6);
    }
  }
  if (((uVar6 >> 8 & 1) != 0) && ((this->_impl_).packed_ != false)) {
    uVar13 = uVar13 + 2;
  }
  _Var12 = protobuf::Message::MaybeComputeUnknownFieldsSize
                     ((Message *)this,uVar13,&(this->_impl_)._cached_size_);
  return _Var12;
}

// _InternalSerialize @ 14fb72ec0

/* public: virtual unsigned char * __ptr64 __cdecl
   google::protobuf::Field::_InternalSerialize(unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::Field::_InternalSerialize(Field *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uchar *puVar7;
  byte bVar8;
  char *pcVar9;
  RepeatedPtrField<google::protobuf::Option> *pRVar10;
  char *pcVar11;
  uint uVar12;
  basic_string_view<char,std::char_traits<char>_> local_58;
  basic_string_view<char,std::char_traits<char>_> local_48;
  basic_string_view<char,std::char_traits<char>_> local_38;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  uVar12 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) && ((this->_impl_).kind_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar6 = (ulonglong)(this->_impl_).kind_;
    *param_1 = 8;
    while( true ) {
      pbVar5 = param_1 + 1;
      bVar8 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *pbVar5 = bVar8 | 0x80;
      param_1 = pbVar5;
    }
    *pbVar5 = bVar8;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) && ((this->_impl_).cardinality_ != 0))
  {
    if (param_2->end_ <= param_1) {
      param_1 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar6 = (ulonglong)(this->_impl_).cardinality_;
    *param_1 = 0x10;
    while( true ) {
      pbVar5 = param_1 + 1;
      bVar8 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *pbVar5 = bVar8 | 0x80;
      param_1 = pbVar5;
    }
    *pbVar5 = bVar8;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x40) != 0) &&
     (iVar3 = (this->_impl_).number_, iVar3 != 0)) {
    param_1 = internal::WireFormatLite::WriteInt32ToArrayWithField<3>(param_2,iVar3,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar11 = (char *)((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar11 + 0x10);
    if (*(longlong *)(pcVar11 + 0x10) != 0) {
      local_58._Mydata = "google.protobuf.Field.name";
      local_58._Mysize = 0x1a;
      pcVar9 = pcVar11;
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar9 = *(char **)pcVar11;
      }
      local_28._Mydata = "google.protobuf.Field.name";
      local_28._Mysize = 0x1a;
      internal::WireFormatLite::VerifyUtf8String
                (pcVar9,(int)*(longlong *)(pcVar11 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
      }
      local_58._Mysize = *puVar1;
      local_58._Mydata = pcVar11;
      local_28._Mydata = pcVar11;
      local_28._Mysize = local_58._Mysize;
      param_1 = io::EpsCopyOutputStream::WriteStringMaybeAliased(param_2,4,&local_28,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pcVar11 = (char *)((ulonglong)(this->_impl_).type_url_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar11 + 0x10);
    if (*(longlong *)(pcVar11 + 0x10) != 0) {
      local_58._Mydata = "google.protobuf.Field.type_url";
      local_58._Mysize = 0x1e;
      pcVar9 = pcVar11;
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar9 = *(char **)pcVar11;
      }
      local_28._Mydata = "google.protobuf.Field.type_url";
      local_28._Mysize = 0x1e;
      internal::WireFormatLite::VerifyUtf8String
                (pcVar9,(int)*(longlong *)(pcVar11 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
      }
      local_58._Mysize = *puVar1;
      local_58._Mydata = pcVar11;
      local_28._Mydata = pcVar11;
      local_28._Mysize = local_58._Mysize;
      param_1 = io::EpsCopyOutputStream::WriteStringMaybeAliased(param_2,6,&local_28,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x80) != 0) &&
     (iVar3 = (this->_impl_).oneof_index_, iVar3 != 0)) {
    param_1 = internal::WireFormatLite::WriteInt32ToArrayWithField<7>(param_2,iVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x100) != 0) && ((this->_impl_).packed_ != false))
  {
    if (param_2->end_ <= param_1) {
      param_1 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar2 = (this->_impl_).packed_;
    *param_1 = 0x40;
    param_1[1] = bVar2 != false;
    param_1 = param_1 + 2;
  }
  uVar4 = *(uint *)&(this->_impl_).options_.field_0x8;
  if (uVar4 != 0) {
    do {
      if ((~*(byte *)&(this->_impl_).options_ & 1) == 0) {
        pRVar10 = (RepeatedPtrField<google::protobuf::Option> *)
                  (*(longlong *)&(this->_impl_).options_ + 7 + (longlong)(int)uVar12 * 8);
      }
      else {
        pRVar10 = &(this->_impl_).options_;
      }
      param_1 = internal::WireFormatLite::InternalWriteMessage
                          (9,*(MessageLite **)pRVar10,
                           *(int *)((longlong)&(*(MessageLite **)pRVar10)[1]._padding_ + 4),param_1,
                           param_2);
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar4);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) {
    pcVar11 = (char *)((ulonglong)(this->_impl_).json_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar11 + 0x10);
    if (*(longlong *)(pcVar11 + 0x10) != 0) {
      pcVar9 = pcVar11;
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar9 = *(char **)pcVar11;
      }
      local_58._Mydata = "google.protobuf.Field.json_name";
      local_58._Mysize = 0x1f;
      internal::WireFormatLite::VerifyUtf8String
                (pcVar9,(int)*(longlong *)(pcVar11 + 0x10),SERIALIZE,&local_58);
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
      }
      local_48._Mysize = *puVar1;
      local_48._Mydata = pcVar11;
      param_1 = io::EpsCopyOutputStream::WriteStringMaybeAliased(param_2,10,&local_48,param_1);
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) {
    pcVar11 = (char *)((ulonglong)(this->_impl_).default_value_.tagged_ptr_.ptr_ &
                      0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar11 + 0x10);
    if (*(longlong *)(pcVar11 + 0x10) != 0) {
      pcVar9 = pcVar11;
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar9 = *(char **)pcVar11;
      }
      local_38._Mydata = "google.protobuf.Field.default_value";
      local_38._Mysize = 0x23;
      internal::WireFormatLite::VerifyUtf8String
                (pcVar9,(int)*(longlong *)(pcVar11 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar11 + 0x18)) {
        pcVar11 = *(char **)pcVar11;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar11;
      param_1 = io::EpsCopyOutputStream::WriteStringMaybeAliased(param_2,0xb,&local_28,param_1);
    }
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar7 = internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar7;
}

// GetClassData @ 14fb732f0

/* protected: virtual struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   google::protobuf::Field::GetClassData(void)const __ptr64 */

ClassData * __thiscall google::protobuf::Field::GetClassData(Field *this)

{
  return (ClassData *)&Field_class_data_;
}

// PlacementNew_ @ 14fb73310

/* protected: static void * __ptr64 __cdecl google::protobuf::Field::PlacementNew_(void const *
   __ptr64,void * __ptr64,class google::protobuf::Arena * __ptr64) */

void * __cdecl google::protobuf::Field::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = vftable;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(Arena **)((longlong)param_2 + 0x28) = param_3;
  *(GlobalEmptyString **)((longlong)param_2 + 0x30) = &internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x38) = &internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x40) = &internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x48) = &internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined1 *)((longlong)param_2 + 0x60) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14fb73370

/* public: virtual void * __ptr64 __cdecl google::protobuf::Field::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall google::protobuf::Field::_scalar_deleting_destructor_(Field *this,uint param_1)

{
  RepeatedPtrField<google::protobuf::Option> *this_00;
  
  this->_padding_ = (longlong)vftable;
  if ((this->_padding_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  internal::ArenaStringPtr::Destroy(&(this->_impl_).name_);
  internal::ArenaStringPtr::Destroy(&(this->_impl_).type_url_);
  internal::ArenaStringPtr::Destroy(&(this->_impl_).json_name_);
  internal::ArenaStringPtr::Destroy(&(this->_impl_).default_value_);
  this_00 = &(this->_impl_).options_;
  if (*(longlong *)&this_00->field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)this_00);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// MergeImpl @ 14fb73400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: static void __cdecl google::protobuf::EnumValue::MergeImpl(class
   google::protobuf::MessageLite & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::EnumValue::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  MessageLite *this;
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  ulong64 uVar5;
  Arena *pAVar6;
  undefined1 auStack_58 [32];
  _Bxty local_38;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  if ((int)param_2[2]._padding_ != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&param_1[1]._internal_metadata_,
               (RepeatedPtrFieldBase *)&param_2[1]._internal_metadata_,
               Arena::CopyConstruct<google::protobuf::Option>);
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[3]._padding_ & 0xfffffffffffffffc);
      this = param_1 + 3;
      if ((pbVar4->_Mypair)._Myval2._Mysize == 0) {
        if (((ulonglong)((TaggedStringPtr *)&this->_padding_)->ptr_ & 3) == 0) {
          local_38._8_8_ = 0;
          local_28 = 0;
          local_20 = 0xf;
          local_38._Ptr = (char *)0x0;
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
          }
          internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)this,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar6);
          if (0xf < local_20) {
            uVar5 = local_20 + 1;
            uVar3 = local_38._Ptr;
            if (0xfff < uVar5) {
              uVar5 = local_20 + 0x28;
              uVar3 = *(undefined8 *)(local_38._Ptr + -8);
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
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
        internal::ArenaStringPtr::Set<>((ArenaStringPtr *)this,pbVar4,pAVar6);
      }
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (int)param_2[3]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[3]._internal_metadata_.ptr_ = iVar2;
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

// Clear @ 14fb73560

/* public: virtual void __cdecl google::protobuf::EnumValue::Clear(void) __ptr64 */

void __thiscall google::protobuf::EnumValue::Clear(EnumValue *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (0 < *(int *)&(this->_impl_).options_.field_0x8) {
    internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).options_);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    puVar1 = (undefined8 *)((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar2 = puVar1;
    if (0xf < (ulonglong)puVar1[3]) {
      puVar2 = (undefined8 *)*puVar1;
    }
    puVar1[2] = 0;
    *(undefined1 *)puVar2 = 0;
  }
  (this->_impl_).number_ = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14fb735d0

/* public: virtual unsigned __int64 __cdecl google::protobuf::EnumValue::ByteSizeLong(void)const
   __ptr64 */

__uint64 __thiscall google::protobuf::EnumValue::ByteSizeLong(EnumValue *this)

{
  Message *this_00;
  longlong lVar1;
  uint uVar2;
  ulong64 uVar3;
  __uint64 _Var4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  RepeatedPtrField<google::protobuf::Option> *pRVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  RepeatedPtrField<google::protobuf::Option> *pRVar10;
  __uint64 _Var11;
  ulonglong uVar12;
  int iVar13;
  
  uVar12 = (ulonglong)*(uint *)&(this->_impl_).options_.field_0x8;
  if ((~*(byte *)&(this->_impl_).options_ & 1) == 0) {
    pRVar10 = (RepeatedPtrField<google::protobuf::Option> *)
              (*(longlong *)&(this->_impl_).options_ + 7);
    pRVar8 = (RepeatedPtrField<google::protobuf::Option> *)
             (*(longlong *)&(this->_impl_).options_ + 7);
  }
  else {
    pRVar8 = &(this->_impl_).options_;
    pRVar10 = &(this->_impl_).options_;
  }
  iVar13 = *(int *)&(this->_impl_).options_.field_0x8;
  for (; pRVar10 !=
         (RepeatedPtrField<google::protobuf::Option> *)(&pRVar8->field_0x0 + (longlong)iVar13 * 8);
      pRVar10 = (RepeatedPtrField<google::protobuf::Option> *)&pRVar10->field_0x8) {
    this_00 = *(Message **)pRVar10;
    _Var11 = 0;
    uVar6 = *(uint *)(this_00 + 1);
    if ((uVar6 & 3) != 0) {
      if (((uVar6 & 1) != 0) &&
         (pbVar9 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (*(ulonglong *)&this_00[1].field_0x8 & 0xfffffffffffffffc),
         (pbVar9->_Mypair)._Myval2._Mysize != 0)) {
        uVar3 = internal::WireFormatLite::StringSize(pbVar9);
        _Var11 = uVar3 + 1;
      }
      if ((uVar6 & 2) != 0) {
        _Var4 = Any::ByteSizeLong(*(Any **)(this_00 + 2));
        uVar6 = (uint)_Var4 | 1;
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
        _Var11 = _Var11 + 1 + (iVar7 * -9 + 0x160U >> 6) + _Var4;
      }
    }
    _Var11 = protobuf::Message::MaybeComputeUnknownFieldsSize
                       (this_00,_Var11,(CachedSize *)&this_00[1].field_0x4);
    uVar6 = (uint)_Var11 | 1;
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
    uVar12 = uVar12 + (iVar7 * -9 + 0x160U >> 6) + _Var11;
  }
  uVar6 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar6 & 3) != 0) {
    if (((uVar6 & 1) != 0) &&
       (lVar1 = *(longlong *)
                 (((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
       lVar1 != 0)) {
      uVar2 = (uint)lVar1 | 1;
      if (__isa_available < 5) {
        iVar13 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar13 == 0; iVar13 = iVar13 + -1) {
          }
        }
        iVar13 = 0x1f - iVar13;
      }
      else {
        iVar13 = LZCOUNT(uVar2);
      }
      uVar12 = uVar12 + 1 + (ulonglong)(iVar13 * -9 + 0x160U >> 6) + lVar1;
    }
    if (((uVar6 & 2) != 0) && (iVar13 = (this->_impl_).number_, iVar13 != 0)) {
      uVar5 = (longlong)iVar13 | 1;
      if (__isa_available < 5) {
        lVar1 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar13 = 0x3f - (int)lVar1;
      }
      else {
        iVar13 = (int)LZCOUNT(uVar5);
      }
      uVar12 = uVar12 + (iVar13 * -9 + 0x2c0U >> 6);
    }
  }
  _Var11 = protobuf::Message::MaybeComputeUnknownFieldsSize
                     ((Message *)this,uVar12,&(this->_impl_)._cached_size_);
  return _Var11;
}

// _InternalSerialize @ 14fb737f0

/* public: virtual unsigned char * __ptr64 __cdecl
   google::protobuf::EnumValue::_InternalSerialize(unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::EnumValue::_InternalSerialize
          (EnumValue *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  uint uVar3;
  uchar *puVar4;
  char *pcVar5;
  RepeatedPtrField<google::protobuf::Option> *pRVar6;
  char *pcVar7;
  uint uVar8;
  basic_string_view<char,std::char_traits<char>_> local_38;
  
  uVar8 = 0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar5 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar5 = *(char **)pcVar7;
      }
      local_38._Mydata = "google.protobuf.EnumValue.name";
      local_38._Mysize = 0x1e;
      internal::WireFormatLite::VerifyUtf8String
                (pcVar5,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar7;
      param_1 = io::EpsCopyOutputStream::WriteStringMaybeAliased(param_2,1,&local_38,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (iVar2 = (this->_impl_).number_, iVar2 != 0)) {
    param_1 = internal::WireFormatLite::WriteInt32ToArrayWithField<2>(param_2,iVar2,param_1);
  }
  uVar3 = *(uint *)&(this->_impl_).options_.field_0x8;
  if (uVar3 != 0) {
    do {
      if ((~*(byte *)&(this->_impl_).options_ & 1) == 0) {
        pRVar6 = (RepeatedPtrField<google::protobuf::Option> *)
                 (*(longlong *)&(this->_impl_).options_ + 7 + (longlong)(int)uVar8 * 8);
      }
      else {
        pRVar6 = &(this->_impl_).options_;
      }
      param_1 = internal::WireFormatLite::InternalWriteMessage
                          (3,*(MessageLite **)pRVar6,
                           *(int *)((longlong)&(*(MessageLite **)pRVar6)[1]._padding_ + 4),param_1,
                           param_2);
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar3);
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar4 = internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar4;
}

// GetClassData @ 14fb73970

/* protected: virtual struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   google::protobuf::EnumValue::GetClassData(void)const __ptr64 */

ClassData * __thiscall google::protobuf::EnumValue::GetClassData(EnumValue *this)

{
  return (ClassData *)&EnumValue_class_data_;
}

// PlacementNew_ @ 14fb73990

/* protected: static void * __ptr64 __cdecl google::protobuf::EnumValue::PlacementNew_(void const *
   __ptr64,void * __ptr64,class google::protobuf::Arena * __ptr64) */

void * __cdecl
google::protobuf::EnumValue::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = vftable;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(Arena **)((longlong)param_2 + 0x28) = param_3;
  *(GlobalEmptyString **)((longlong)param_2 + 0x30) = &internal::fixed_address_empty_string;
  *(undefined4 *)((longlong)param_2 + 0x38) = 0;
  return param_2;
}

// `vector_deleting_destructor' @ 14fb739e0

/* public: virtual void * __ptr64 __cdecl google::protobuf::EnumValue::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::EnumValue::_vector_deleting_destructor_(EnumValue *this,uint param_1)

{
  RepeatedPtrField<google::protobuf::Option> *this_00;
  
  this->_padding_ = (longlong)vftable;
  if ((this->_padding_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  internal::ArenaStringPtr::Destroy(&(this->_impl_).name_);
  this_00 = &(this->_impl_).options_;
  if (*(longlong *)&this_00->field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)this_00);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// MergeImpl @ 14fb73a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: static void __cdecl google::protobuf::Type::MergeImpl(class
   google::protobuf::MessageLite & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::Type::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  MessageLite *this;
  InternalMetadata *this_00;
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  ulong64 uVar6;
  Arena *pAVar7;
  Arena *pAVar8;
  undefined1 auStack_68 [40];
  _Bxty local_40;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  pAVar8 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
  }
  if ((int)param_2[2]._padding_ != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&param_1[1]._internal_metadata_,
               (RepeatedPtrFieldBase *)&param_2[1]._internal_metadata_,
               Arena::CopyConstruct<google::protobuf::Field>);
  }
  if ((int)param_2[3]._internal_metadata_.ptr_ != 0) {
    internal::RepeatedPtrFieldBase::
    MergeFrom<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ((RepeatedPtrFieldBase *)(param_1 + 3),(RepeatedPtrFieldBase *)(param_2 + 3));
  }
  if ((int)param_2[5]._padding_ != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&param_1[4]._internal_metadata_,
               (RepeatedPtrFieldBase *)&param_2[4]._internal_metadata_,
               Arena::CopyConstruct<google::protobuf::Option>);
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[6]._padding_ & 0xfffffffffffffffc);
      this = param_1 + 6;
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if (((ulonglong)((TaggedStringPtr *)&this->_padding_)->ptr_ & 3) == 0) {
          local_40._8_8_ = 0;
          local_30 = 0;
          local_28 = 0xf;
          local_40._Ptr = (char *)0x0;
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)this,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
                     pAVar7);
          if (0xf < local_28) {
            uVar6 = local_28 + 1;
            uVar4 = local_40._Ptr;
            if (0xfff < uVar6) {
              uVar6 = local_28 + 0x28;
              uVar4 = *(undefined8 *)(local_40._Ptr + -8);
              if ((char *)0x1f < local_40._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            ::operator_delete((void *)uVar4,uVar6);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        internal::ArenaStringPtr::Set<>((ArenaStringPtr *)this,pbVar5,pAVar7);
      }
    }
    if ((uVar1 & 2) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[6]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      this_00 = &param_1[6]._internal_metadata_;
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((this_00->ptr_ & 3) == 0) {
          local_40._8_8_ = 0;
          local_30 = 0;
          local_28 = 0xf;
          local_40._Ptr = (char *)0x0;
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)this_00,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
                     pAVar7);
          if (0xf < local_28) {
            uVar6 = local_28 + 1;
            uVar4 = local_40._Ptr;
            if (0xfff < uVar6) {
              uVar6 = local_28 + 0x28;
              uVar4 = *(undefined8 *)(local_40._Ptr + -8);
              if ((char *)0x1f < local_40._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            ::operator_delete((void *)uVar4,uVar6);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
        pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
        }
        internal::ArenaStringPtr::Set<>((ArenaStringPtr *)this_00,pbVar5,pAVar7);
      }
    }
    if ((uVar1 & 4) != 0) {
      if ((MessageLite *)param_1[7]._padding_ == (MessageLite *)0x0) {
        pvVar3 = Arena::CopyConstruct<google::protobuf::SourceContext>
                           (pAVar8,(MessageLite *)param_2[7]._padding_);
        param_1[7]._padding_ = (longlong)pvVar3;
      }
      else {
        SourceContext::MergeImpl
                  ((MessageLite *)param_1[7]._padding_,(MessageLite *)param_2[7]._padding_);
      }
    }
    if (((uVar1 & 8) != 0) && (iVar2 = (int)param_2[7]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[7]._internal_metadata_.ptr_ = iVar2;
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

// Clear @ 14fb73ce0

/* public: virtual void __cdecl google::protobuf::Type::Clear(void) __ptr64 */

void __thiscall google::protobuf::Type::Clear(Type *this)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (0 < *(int *)&(this->_impl_).fields_.field_0x8) {
    internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).fields_);
  }
  if (0 < *(int *)&(this->_impl_).oneofs_.field_0x8) {
    internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).oneofs_);
  }
  if (0 < *(int *)&(this->_impl_).options_.field_0x8) {
    internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).options_);
  }
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
      ;
      puVar3 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar3 = (undefined8 *)*puVar2;
      }
      puVar2[2] = 0;
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar1 & 2) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).edition_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar3 = (undefined8 *)*puVar2;
      }
      puVar2[2] = 0;
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar1 & 4) != 0) {
      SourceContext::Clear((this->_impl_).source_context_);
    }
  }
  (this->_impl_).syntax_ = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14fb73da0

/* public: virtual unsigned __int64 __cdecl google::protobuf::Type::ByteSizeLong(void)const __ptr64
    */

__uint64 __thiscall google::protobuf::Type::ByteSizeLong(Type *this)

{
  Message *this_00;
  uint uVar1;
  __uint64 _Var2;
  RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *pRVar3;
  ulong64 uVar4;
  __uint64 _Var5;
  uint uVar6;
  int iVar7;
  int iVar8;
  RepeatedPtrField<google::protobuf::Field> *pRVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  RepeatedPtrField<google::protobuf::Field> *pRVar11;
  ulonglong uVar12;
  RepeatedPtrField<google::protobuf::Option> *pRVar13;
  __uint64 _Var14;
  RepeatedPtrField<google::protobuf::Option> *pRVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  
  uVar17 = (ulonglong)*(uint *)&(this->_impl_).fields_.field_0x8;
  if ((~*(byte *)&(this->_impl_).fields_ & 1) == 0) {
    pRVar11 = (RepeatedPtrField<google::protobuf::Field> *)
              (*(longlong *)&(this->_impl_).fields_ + 7);
    pRVar9 = (RepeatedPtrField<google::protobuf::Field> *)(*(longlong *)&(this->_impl_).fields_ + 7)
    ;
  }
  else {
    pRVar9 = &(this->_impl_).fields_;
    pRVar11 = &(this->_impl_).fields_;
  }
  iVar8 = *(int *)&(this->_impl_).fields_.field_0x8;
  for (; pRVar11 !=
         (RepeatedPtrField<google::protobuf::Field> *)(&pRVar9->field_0x0 + (longlong)iVar8 * 8);
      pRVar11 = (RepeatedPtrField<google::protobuf::Field> *)&pRVar11->field_0x8) {
    _Var2 = Field::ByteSizeLong(*(Field **)pRVar11);
    uVar6 = (uint)_Var2 | 1;
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
    uVar17 = uVar17 + (iVar7 * -9 + 0x160U >> 6) + _Var2;
  }
  uVar6 = *(uint *)&(this->_impl_).oneofs_.field_0x8;
  uVar12 = (ulonglong)uVar6;
  lVar18 = uVar17 + uVar12;
  if (0 < (int)uVar6) {
    lVar16 = 0;
    do {
      if ((~*(byte *)&(this->_impl_).oneofs_ & 1) == 0) {
        pRVar3 = (RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                  *)(*(longlong *)&(this->_impl_).oneofs_ + 7 + lVar16);
      }
      else {
        pRVar3 = &(this->_impl_).oneofs_;
      }
      uVar6 = (uint)*(longlong *)(*(longlong *)pRVar3 + 0x10) | 1;
      if (__isa_available < 5) {
        iVar8 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar8 = 0x1f - iVar8;
      }
      else {
        iVar8 = LZCOUNT(uVar6);
      }
      lVar16 = lVar16 + 8;
      lVar18 = lVar18 + (ulonglong)(iVar8 * -9 + 0x160U >> 6) +
                        *(longlong *)(*(longlong *)pRVar3 + 0x10);
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  _Var2 = lVar18 + (ulonglong)*(uint *)&(this->_impl_).options_.field_0x8;
  if ((~*(byte *)&(this->_impl_).options_ & 1) == 0) {
    pRVar13 = (RepeatedPtrField<google::protobuf::Option> *)
              (*(longlong *)&(this->_impl_).options_ + 7);
    pRVar15 = (RepeatedPtrField<google::protobuf::Option> *)
              (*(longlong *)&(this->_impl_).options_ + 7);
  }
  else {
    pRVar15 = &(this->_impl_).options_;
    pRVar13 = &(this->_impl_).options_;
  }
  iVar8 = *(int *)&(this->_impl_).options_.field_0x8;
  for (; pRVar13 !=
         (RepeatedPtrField<google::protobuf::Option> *)(&pRVar15->field_0x0 + (longlong)iVar8 * 8);
      pRVar13 = (RepeatedPtrField<google::protobuf::Option> *)&pRVar13->field_0x8) {
    this_00 = *(Message **)pRVar13;
    _Var14 = 0;
    uVar6 = *(uint *)(this_00 + 1);
    if ((uVar6 & 3) != 0) {
      if (((uVar6 & 1) != 0) &&
         (pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                    (*(ulonglong *)&this_00[1].field_0x8 & 0xfffffffffffffffc),
         (pbVar10->_Mypair)._Myval2._Mysize != 0)) {
        uVar4 = internal::WireFormatLite::StringSize(pbVar10);
        _Var14 = uVar4 + 1;
      }
      if ((uVar6 & 2) != 0) {
        _Var5 = Any::ByteSizeLong(*(Any **)(this_00 + 2));
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
        _Var14 = _Var14 + 1 + (iVar7 * -9 + 0x160U >> 6) + _Var5;
      }
    }
    _Var14 = protobuf::Message::MaybeComputeUnknownFieldsSize
                       (this_00,_Var14,(CachedSize *)&this_00[1].field_0x4);
    uVar6 = (uint)_Var14 | 1;
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
    _Var2 = _Var2 + (iVar7 * -9 + 0x160U >> 6) + _Var14;
  }
  uVar6 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar6 & 0xf) != 0) {
    if (((uVar6 & 1) != 0) &&
       (lVar18 = *(longlong *)
                  (((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
       lVar18 != 0)) {
      uVar1 = (uint)lVar18 | 1;
      if (__isa_available < 5) {
        iVar8 = 0x1f;
        if (uVar1 != 0) {
          for (; uVar1 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar8 = 0x1f - iVar8;
      }
      else {
        iVar8 = LZCOUNT(uVar1);
      }
      _Var2 = _Var2 + 1 + (ulonglong)(iVar8 * -9 + 0x160U >> 6) + lVar18;
    }
    if (((uVar6 & 2) != 0) &&
       (lVar18 = *(longlong *)
                  (((ulonglong)(this->_impl_).edition_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10
                  ), lVar18 != 0)) {
      uVar1 = (uint)lVar18 | 1;
      if (__isa_available < 5) {
        iVar8 = 0x1f;
        if (uVar1 != 0) {
          for (; uVar1 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar8 = 0x1f - iVar8;
      }
      else {
        iVar8 = LZCOUNT(uVar1);
      }
      _Var2 = _Var2 + 1 + (ulonglong)(iVar8 * -9 + 0x160U >> 6) + lVar18;
    }
    if ((uVar6 & 4) != 0) {
      _Var14 = SourceContext::ByteSizeLong((this->_impl_).source_context_);
      uVar1 = (uint)_Var14 | 1;
      if (__isa_available < 5) {
        iVar8 = 0x1f;
        if (uVar1 != 0) {
          for (; uVar1 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar8 = 0x1f - iVar8;
      }
      else {
        iVar8 = LZCOUNT(uVar1);
      }
      _Var2 = _Var2 + 1 + (iVar8 * -9 + 0x160U >> 6) + _Var14;
    }
    if (((uVar6 & 8) != 0) && (iVar8 = (this->_impl_).syntax_, iVar8 != 0)) {
      uVar17 = (longlong)iVar8 | 1;
      if (__isa_available < 5) {
        lVar18 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar18;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar17);
      }
      _Var2 = _Var2 + 1 + (ulonglong)(iVar8 * -9 + 0x280U >> 6);
    }
  }
  _Var2 = protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var2,&(this->_impl_)._cached_size_);
  return _Var2;
}

// _InternalSerialize @ 14fb74130

/* public: virtual unsigned char * __ptr64 __cdecl
   google::protobuf::Type::_InternalSerialize(unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::Type::_InternalSerialize(Type *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  size_t *psVar1;
  uint uVar2;
  size_t _Size;
  ulonglong uVar3;
  uchar *puVar4;
  byte bVar5;
  char *pcVar6;
  RepeatedPtrField<google::protobuf::Field> *pRVar7;
  RepeatedPtrField<google::protobuf::Option> *pRVar8;
  char *pcVar9;
  RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *pRVar10;
  uint uVar11;
  ulonglong local_res8;
  basic_string_view<char,std::char_traits<char>_> local_78;
  char *local_68;
  size_t sStack_60;
  basic_string_view<char,std::char_traits<char>_> local_58;
  basic_string_view<char,std::char_traits<char>_> local_48 [2];
  ulonglong uVar12;
  
  uVar3 = 0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar9 = (char *)((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    psVar1 = (size_t *)(pcVar9 + 0x10);
    if (*(longlong *)(pcVar9 + 0x10) != 0) {
      local_78._Mydata = "google.protobuf.Type.name";
      local_78._Mysize = 0x19;
      pcVar6 = pcVar9;
      if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
        pcVar6 = *(char **)pcVar9;
      }
      local_48[0]._Mydata = "google.protobuf.Type.name";
      local_48[0]._Mysize = 0x19;
      internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar9 + 0x10),SERIALIZE,local_48);
      if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
        pcVar9 = *(char **)pcVar9;
      }
      local_78._Mysize = *psVar1;
      local_78._Mydata = pcVar9;
      local_48[0]._Mydata = pcVar9;
      local_48[0]._Mysize = local_78._Mysize;
      param_1 = io::EpsCopyOutputStream::WriteStringMaybeAliased(param_2,1,local_48,param_1);
    }
  }
  uVar2 = *(uint *)&(this->_impl_).fields_.field_0x8;
  uVar12 = uVar3;
  if (uVar2 != 0) {
    do {
      if ((~*(byte *)&(this->_impl_).fields_ & 1) == 0) {
        pRVar7 = (RepeatedPtrField<google::protobuf::Field> *)
                 (*(longlong *)&(this->_impl_).fields_ + 7 + (longlong)(int)uVar12 * 8);
      }
      else {
        pRVar7 = &(this->_impl_).fields_;
      }
      param_1 = internal::WireFormatLite::InternalWriteMessage
                          (2,*(MessageLite **)pRVar7,
                           *(int *)((longlong)&(*(MessageLite **)pRVar7)[1]._padding_ + 4),param_1,
                           param_2);
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 < uVar2);
  }
  uVar2 = *(uint *)&(this->_impl_).oneofs_.field_0x8;
  local_res8 = (ulonglong)uVar2;
  uVar12 = uVar3;
  if (0 < (int)uVar2) {
    do {
      if ((~*(byte *)&(this->_impl_).oneofs_ & 1) == 0) {
        pRVar10 = (RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                   *)(*(longlong *)&(this->_impl_).oneofs_ + 7 + uVar12);
      }
      else {
        pRVar10 = &(this->_impl_).oneofs_;
      }
      pcVar9 = *(char **)pRVar10;
      pcVar6 = pcVar9;
      if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
        pcVar6 = *(char **)pcVar9;
      }
      local_78._Mydata = "google.protobuf.Type.oneofs";
      local_78._Mysize = 0x1b;
      internal::WireFormatLite::VerifyUtf8String(pcVar6,*(int *)(pcVar9 + 0x10),SERIALIZE,&local_78)
      ;
      _Size = *(size_t *)(pcVar9 + 0x10);
      if (((longlong)_Size < 0x80) &&
         ((longlong)_Size <= (longlong)(param_2->end_ + (0xe - (longlong)param_1)))) {
        *param_1 = 0x1a;
        param_1[1] = (byte)_Size;
        if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
          pcVar9 = *(char **)pcVar9;
        }
        memcpy(param_1 + 2,pcVar9,_Size);
        param_1 = param_1 + 2 + _Size;
      }
      else {
        if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
          pcVar9 = *(char **)pcVar9;
        }
        local_78._Mydata = pcVar9;
        local_78._Mysize = _Size;
        local_68 = pcVar9;
        sStack_60 = _Size;
        param_1 = io::EpsCopyOutputStream::WriteStringOutline(param_2,3,&local_78,param_1);
      }
      local_res8 = local_res8 - 1;
      uVar12 = uVar12 + 8;
    } while (local_res8 != 0);
  }
  uVar2 = *(uint *)&(this->_impl_).options_.field_0x8;
  if (uVar2 != 0) {
    do {
      if ((~*(byte *)&(this->_impl_).options_ & 1) == 0) {
        pRVar8 = (RepeatedPtrField<google::protobuf::Option> *)
                 (*(longlong *)&(this->_impl_).options_ + 7 + (longlong)(int)uVar3 * 8);
      }
      else {
        pRVar8 = &(this->_impl_).options_;
      }
      param_1 = internal::WireFormatLite::InternalWriteMessage
                          (4,*(MessageLite **)pRVar8,
                           *(int *)((longlong)&(*(MessageLite **)pRVar8)[1]._padding_ + 4),param_1,
                           param_2);
      uVar11 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar11;
    } while (uVar11 < uVar2);
  }
  uVar2 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar2 & 4) != 0) {
    param_1 = internal::WireFormatLite::InternalWriteMessage
                        (5,(MessageLite *)(this->_impl_).source_context_,
                         (int)(((this->_impl_).source_context_)->_impl_)._cached_size_.atom_,param_1
                         ,param_2);
  }
  if (((uVar2 & 8) != 0) && ((this->_impl_).syntax_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar3 = (ulonglong)(this->_impl_).syntax_;
    *param_1 = 0x30;
    while( true ) {
      param_1 = param_1 + 1;
      bVar5 = (byte)uVar3;
      if (uVar3 < 0x80) break;
      uVar3 = uVar3 >> 7;
      *param_1 = bVar5 | 0x80;
    }
    *param_1 = bVar5;
    param_1 = param_1 + 1;
  }
  if ((uVar2 & 2) != 0) {
    pcVar9 = (char *)((ulonglong)(this->_impl_).edition_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    psVar1 = (size_t *)(pcVar9 + 0x10);
    if (*(longlong *)(pcVar9 + 0x10) != 0) {
      pcVar6 = pcVar9;
      if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
        pcVar6 = *(char **)pcVar9;
      }
      local_58._Mydata = "google.protobuf.Type.edition";
      local_58._Mysize = 0x1c;
      internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar9 + 0x10),SERIALIZE,&local_58);
      if (0xf < *(ulonglong *)(pcVar9 + 0x18)) {
        pcVar9 = *(char **)pcVar9;
      }
      local_48[0]._Mysize = *psVar1;
      local_48[0]._Mydata = pcVar9;
      param_1 = io::EpsCopyOutputStream::WriteStringMaybeAliased(param_2,7,local_48,param_1);
    }
  }
  if ((this->_padding_ & 1) != 0) {
    puVar4 = internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar4;
  }
  return param_1;
}

// GetClassData @ 14fb74520

/* protected: virtual struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   google::protobuf::Type::GetClassData(void)const __ptr64 */

ClassData * __thiscall google::protobuf::Type::GetClassData(Type *this)

{
  return (ClassData *)&Type_class_data_;
}

// PlacementNew_ @ 14fb74540

/* protected: static void * __ptr64 __cdecl google::protobuf::Type::PlacementNew_(void const *
   __ptr64,void * __ptr64,class google::protobuf::Arena * __ptr64) */

void * __cdecl google::protobuf::Type::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = vftable;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(Arena **)((longlong)param_2 + 0x28) = param_3;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(Arena **)((longlong)param_2 + 0x40) = param_3;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(Arena **)((longlong)param_2 + 0x58) = param_3;
  *(GlobalEmptyString **)((longlong)param_2 + 0x60) = &internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x68) = &internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined4 *)((longlong)param_2 + 0x78) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14fb745b0

/* public: virtual void * __ptr64 __cdecl google::protobuf::Type::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall google::protobuf::Type::_scalar_deleting_destructor_(Type *this,uint param_1)

{
  ~Type(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// MergeImpl @ 14fb745f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: static void __cdecl google::protobuf::Enum::MergeImpl(class
   google::protobuf::MessageLite & __ptr64,class google::protobuf::MessageLite const & __ptr64) */

void __cdecl google::protobuf::Enum::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  InternalMetadata *this;
  uint uVar1;
  int iVar2;
  MessageLite *pMVar3;
  MessageLite *pMVar4;
  void *pvVar5;
  undefined8 uVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  ulong64 uVar8;
  Arena *pAVar9;
  Arena *pAVar10;
  undefined1 auStack_68 [40];
  _Bxty local_40;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  pAVar10 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar10 = (Arena *)(pAVar10->impl_).tag_and_id_;
  }
  if ((int)param_2[2]._padding_ != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&param_1[1]._internal_metadata_,
               (RepeatedPtrFieldBase *)&param_2[1]._internal_metadata_,
               Arena::CopyConstruct<google::protobuf::EnumValue>);
  }
  if ((int)param_2[3]._internal_metadata_.ptr_ != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)(param_1 + 3),(RepeatedPtrFieldBase *)(param_2 + 3),
               Arena::CopyConstruct<google::protobuf::Option>);
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[4]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      this = &param_1[4]._internal_metadata_;
      if ((pbVar7->_Mypair)._Myval2._Mysize == 0) {
        if ((this->ptr_ & 3) == 0) {
          local_40._8_8_ = 0;
          local_30 = 0;
          local_28 = 0xf;
          local_40._Ptr = (char *)0x0;
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
          }
          internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)this,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
                     pAVar9);
          if (0xf < local_28) {
            uVar8 = local_28 + 1;
            uVar6 = local_40._Ptr;
            if (0xfff < uVar8) {
              uVar8 = local_28 + 0x28;
              uVar6 = *(undefined8 *)(local_40._Ptr + -8);
              if ((char *)0x1f < local_40._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            ::operator_delete((void *)uVar6,uVar8);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        internal::ArenaStringPtr::Set<>((ArenaStringPtr *)this,pbVar7,pAVar9);
      }
    }
    if ((uVar1 & 2) != 0) {
      pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[5]._padding_ & 0xfffffffffffffffc);
      pMVar3 = param_1 + 5;
      if ((pbVar7->_Mypair)._Myval2._Mysize == 0) {
        if (((ulonglong)((TaggedStringPtr *)&pMVar3->_padding_)->ptr_ & 3) == 0) {
          local_40._8_8_ = 0;
          local_30 = 0;
          local_28 = 0xf;
          local_40._Ptr = (char *)0x0;
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
          }
          internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)pMVar3,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
                     pAVar9);
          if (0xf < local_28) {
            uVar8 = local_28 + 1;
            uVar6 = local_40._Ptr;
            if (0xfff < uVar8) {
              uVar8 = local_28 + 0x28;
              uVar6 = *(undefined8 *)(local_40._Ptr + -8);
              if ((char *)0x1f < local_40._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            ::operator_delete((void *)uVar6,uVar8);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
        pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        internal::ArenaStringPtr::Set<>((ArenaStringPtr *)pMVar3,pbVar7,pAVar9);
      }
    }
    if ((uVar1 & 4) != 0) {
      pMVar3 = (MessageLite *)param_1[5]._internal_metadata_.ptr_;
      pMVar4 = (MessageLite *)param_2[5]._internal_metadata_.ptr_;
      if (pMVar3 == (MessageLite *)0x0) {
        pvVar5 = Arena::CopyConstruct<google::protobuf::SourceContext>(pAVar10,pMVar4);
        param_1[5]._internal_metadata_.ptr_ = (long64)pvVar5;
      }
      else {
        SourceContext::MergeImpl(pMVar3,pMVar4);
      }
    }
    if (((uVar1 & 8) != 0) && (iVar2 = (int)param_2[6]._padding_, iVar2 != 0)) {
      *(int *)&param_1[6]._padding_ = iVar2;
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

// Clear @ 14fb74870

/* public: virtual void __cdecl google::protobuf::Enum::Clear(void) __ptr64 */

void __thiscall google::protobuf::Enum::Clear(Enum *this)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (0 < *(int *)&(this->_impl_).enumvalue_.field_0x8) {
    internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).enumvalue_);
  }
  if (0 < *(int *)&(this->_impl_).options_.field_0x8) {
    internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).options_);
  }
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
      ;
      puVar3 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar3 = (undefined8 *)*puVar2;
      }
      puVar2[2] = 0;
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar1 & 2) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).edition_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar3 = (undefined8 *)*puVar2;
      }
      puVar2[2] = 0;
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar1 & 4) != 0) {
      SourceContext::Clear((this->_impl_).source_context_);
    }
  }
  (this->_impl_).syntax_ = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14fb74920

/* public: virtual unsigned __int64 __cdecl google::protobuf::Enum::ByteSizeLong(void)const __ptr64
    */

__uint64 __thiscall google::protobuf::Enum::ByteSizeLong(Enum *this)

{
  Message *this_00;
  longlong lVar1;
  uint uVar2;
  __uint64 _Var3;
  ulong64 uVar4;
  __uint64 _Var5;
  uint uVar6;
  int iVar7;
  int iVar8;
  RepeatedPtrField<google::protobuf::EnumValue> *pRVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  RepeatedPtrField<google::protobuf::EnumValue> *pRVar11;
  RepeatedPtrField<google::protobuf::Option> *pRVar12;
  __uint64 _Var13;
  RepeatedPtrField<google::protobuf::Option> *pRVar14;
  ulonglong uVar15;
  
  uVar15 = (ulonglong)*(uint *)&(this->_impl_).enumvalue_.field_0x8;
  if ((~*(byte *)&(this->_impl_).enumvalue_ & 1) == 0) {
    pRVar11 = (RepeatedPtrField<google::protobuf::EnumValue> *)
              (*(longlong *)&(this->_impl_).enumvalue_ + 7);
    pRVar9 = (RepeatedPtrField<google::protobuf::EnumValue> *)
             (*(longlong *)&(this->_impl_).enumvalue_ + 7);
  }
  else {
    pRVar9 = &(this->_impl_).enumvalue_;
    pRVar11 = &(this->_impl_).enumvalue_;
  }
  iVar8 = *(int *)&(this->_impl_).enumvalue_.field_0x8;
  for (; pRVar11 !=
         (RepeatedPtrField<google::protobuf::EnumValue> *)(&pRVar9->field_0x0 + (longlong)iVar8 * 8)
      ; pRVar11 = (RepeatedPtrField<google::protobuf::EnumValue> *)&pRVar11->field_0x8) {
    _Var3 = EnumValue::ByteSizeLong(*(EnumValue **)pRVar11);
    uVar6 = (uint)_Var3 | 1;
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
    uVar15 = uVar15 + (iVar7 * -9 + 0x160U >> 6) + _Var3;
  }
  _Var3 = uVar15 + *(uint *)&(this->_impl_).options_.field_0x8;
  if ((~*(byte *)&(this->_impl_).options_ & 1) == 0) {
    pRVar12 = (RepeatedPtrField<google::protobuf::Option> *)
              (*(longlong *)&(this->_impl_).options_ + 7);
    pRVar14 = (RepeatedPtrField<google::protobuf::Option> *)
              (*(longlong *)&(this->_impl_).options_ + 7);
  }
  else {
    pRVar14 = &(this->_impl_).options_;
    pRVar12 = &(this->_impl_).options_;
  }
  iVar8 = *(int *)&(this->_impl_).options_.field_0x8;
  for (; pRVar12 !=
         (RepeatedPtrField<google::protobuf::Option> *)(&pRVar14->field_0x0 + (longlong)iVar8 * 8);
      pRVar12 = (RepeatedPtrField<google::protobuf::Option> *)&pRVar12->field_0x8) {
    this_00 = *(Message **)pRVar12;
    _Var13 = 0;
    uVar6 = *(uint *)(this_00 + 1);
    if ((uVar6 & 3) != 0) {
      if (((uVar6 & 1) != 0) &&
         (pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                    (*(ulonglong *)&this_00[1].field_0x8 & 0xfffffffffffffffc),
         (pbVar10->_Mypair)._Myval2._Mysize != 0)) {
        uVar4 = internal::WireFormatLite::StringSize(pbVar10);
        _Var13 = uVar4 + 1;
      }
      if ((uVar6 & 2) != 0) {
        _Var5 = Any::ByteSizeLong(*(Any **)(this_00 + 2));
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
        _Var13 = _Var13 + 1 + (iVar7 * -9 + 0x160U >> 6) + _Var5;
      }
    }
    _Var13 = protobuf::Message::MaybeComputeUnknownFieldsSize
                       (this_00,_Var13,(CachedSize *)&this_00[1].field_0x4);
    uVar6 = (uint)_Var13 | 1;
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
    _Var3 = _Var3 + (iVar7 * -9 + 0x160U >> 6) + _Var13;
  }
  uVar6 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar6 & 0xf) != 0) {
    if (((uVar6 & 1) != 0) &&
       (lVar1 = *(longlong *)
                 (((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
       lVar1 != 0)) {
      uVar2 = (uint)lVar1 | 1;
      if (__isa_available < 5) {
        iVar8 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar8 = 0x1f - iVar8;
      }
      else {
        iVar8 = LZCOUNT(uVar2);
      }
      _Var3 = _Var3 + 1 + (ulonglong)(iVar8 * -9 + 0x160U >> 6) + lVar1;
    }
    if (((uVar6 & 2) != 0) &&
       (lVar1 = *(longlong *)
                 (((ulonglong)(this->_impl_).edition_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10)
       , lVar1 != 0)) {
      uVar2 = (uint)lVar1 | 1;
      if (__isa_available < 5) {
        iVar8 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar8 = 0x1f - iVar8;
      }
      else {
        iVar8 = LZCOUNT(uVar2);
      }
      _Var3 = _Var3 + 1 + (ulonglong)(iVar8 * -9 + 0x160U >> 6) + lVar1;
    }
    if ((uVar6 & 4) != 0) {
      _Var13 = SourceContext::ByteSizeLong((this->_impl_).source_context_);
      uVar2 = (uint)_Var13 | 1;
      if (__isa_available < 5) {
        iVar8 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        iVar8 = 0x1f - iVar8;
      }
      else {
        iVar8 = LZCOUNT(uVar2);
      }
      _Var3 = _Var3 + 1 + (iVar8 * -9 + 0x160U >> 6) + _Var13;
    }
    if (((uVar6 & 8) != 0) && (iVar8 = (this->_impl_).syntax_, iVar8 != 0)) {
      uVar15 = (longlong)iVar8 | 1;
      if (__isa_available < 5) {
        lVar1 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar8 = 0x3f - (int)lVar1;
      }
      else {
        iVar8 = (int)LZCOUNT(uVar15);
      }
      _Var3 = _Var3 + 1 + (ulonglong)(iVar8 * -9 + 0x280U >> 6);
    }
  }
  _Var3 = protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var3,&(this->_impl_)._cached_size_);
  return _Var3;
}

// _InternalSerialize @ 14fb74c40

/* public: virtual unsigned char * __ptr64 __cdecl
   google::protobuf::Enum::_InternalSerialize(unsigned char * __ptr64,class
   google::protobuf::io::EpsCopyOutputStream * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::Enum::_InternalSerialize(Enum *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  byte bVar5;
  char *pcVar6;
  RepeatedPtrField<google::protobuf::EnumValue> *pRVar7;
  RepeatedPtrField<google::protobuf::Option> *pRVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  basic_string_view<char,std::char_traits<char>_> local_48;
  basic_string_view<char,std::char_traits<char>_> local_38;
  
  uVar9 = 0;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar10 = (char *)((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar10 + 0x10);
    if (*(longlong *)(pcVar10 + 0x10) != 0) {
      local_48._Mydata = "google.protobuf.Enum.name";
      local_48._Mysize = 0x19;
      pcVar6 = pcVar10;
      if (0xf < *(ulonglong *)(pcVar10 + 0x18)) {
        pcVar6 = *(char **)pcVar10;
      }
      local_38._Mydata = "google.protobuf.Enum.name";
      local_38._Mysize = 0x19;
      internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar10 + 0x10),SERIALIZE,&local_38);
      if (0xf < *(ulonglong *)(pcVar10 + 0x18)) {
        pcVar10 = *(char **)pcVar10;
      }
      local_48._Mysize = *puVar1;
      local_48._Mydata = pcVar10;
      local_38._Mydata = pcVar10;
      local_38._Mysize = local_48._Mysize;
      param_1 = io::EpsCopyOutputStream::WriteStringMaybeAliased(param_2,1,&local_38,param_1);
    }
  }
  uVar2 = *(uint *)&(this->_impl_).enumvalue_.field_0x8;
  uVar11 = 0;
  if (uVar2 != 0) {
    do {
      if ((~*(byte *)&(this->_impl_).enumvalue_ & 1) == 0) {
        pRVar7 = (RepeatedPtrField<google::protobuf::EnumValue> *)
                 (*(longlong *)&(this->_impl_).enumvalue_ + 7 + (longlong)(int)uVar11 * 8);
      }
      else {
        pRVar7 = &(this->_impl_).enumvalue_;
      }
      param_1 = internal::WireFormatLite::InternalWriteMessage
                          (2,*(MessageLite **)pRVar7,
                           *(int *)((longlong)&(*(MessageLite **)pRVar7)[1]._padding_ + 4),param_1,
                           param_2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar2);
  }
  uVar2 = *(uint *)&(this->_impl_).options_.field_0x8;
  if (uVar2 != 0) {
    do {
      if ((~*(byte *)&(this->_impl_).options_ & 1) == 0) {
        pRVar8 = (RepeatedPtrField<google::protobuf::Option> *)
                 (*(longlong *)&(this->_impl_).options_ + 7 + (longlong)(int)uVar9 * 8);
      }
      else {
        pRVar8 = &(this->_impl_).options_;
      }
      param_1 = internal::WireFormatLite::InternalWriteMessage
                          (3,*(MessageLite **)pRVar8,
                           *(int *)((longlong)&(*(MessageLite **)pRVar8)[1]._padding_ + 4),param_1,
                           param_2);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  uVar9 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar9 & 4) != 0) {
    param_1 = internal::WireFormatLite::InternalWriteMessage
                        (4,(MessageLite *)(this->_impl_).source_context_,
                         (int)(((this->_impl_).source_context_)->_impl_)._cached_size_.atom_,param_1
                         ,param_2);
  }
  if (((uVar9 & 8) != 0) && ((this->_impl_).syntax_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar4 = (ulonglong)(this->_impl_).syntax_;
    *param_1 = 0x28;
    while( true ) {
      pbVar3 = param_1 + 1;
      bVar5 = (byte)uVar4;
      if (uVar4 < 0x80) break;
      uVar4 = uVar4 >> 7;
      *pbVar3 = bVar5 | 0x80;
      param_1 = pbVar3;
    }
    *pbVar3 = bVar5;
    param_1 = param_1 + 2;
  }
  if ((uVar9 & 2) != 0) {
    pcVar10 = (char *)((ulonglong)(this->_impl_).edition_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar10 + 0x10);
    if (*(longlong *)(pcVar10 + 0x10) != 0) {
      pcVar6 = pcVar10;
      if (0xf < *(ulonglong *)(pcVar10 + 0x18)) {
        pcVar6 = *(char **)pcVar10;
      }
      local_48._Mydata = "google.protobuf.Enum.edition";
      local_48._Mysize = 0x1c;
      internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar10 + 0x10),SERIALIZE,&local_48);
      if (0xf < *(ulonglong *)(pcVar10 + 0x18)) {
        pcVar10 = *(char **)pcVar10;
      }
      local_38._Mysize = *puVar1;
      local_38._Mydata = pcVar10;
      param_1 = io::EpsCopyOutputStream::WriteStringMaybeAliased(param_2,6,&local_38,param_1);
    }
  }
  if ((this->_padding_ & 1) != 0) {
    param_1 = internal::WireFormat::InternalSerializeUnknownFieldsToArray
                        ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                         param_2);
  }
  return param_1;
}

// GetClassData @ 14fb74ef0

/* protected: virtual struct google::protobuf::internal::ClassData const * __ptr64 __cdecl
   google::protobuf::Enum::GetClassData(void)const __ptr64 */

ClassData * __thiscall google::protobuf::Enum::GetClassData(Enum *this)

{
  return (ClassData *)&Enum_class_data_;
}

// PlacementNew_ @ 14fb74f10

/* protected: static void * __ptr64 __cdecl google::protobuf::Enum::PlacementNew_(void const *
   __ptr64,void * __ptr64,class google::protobuf::Arena * __ptr64) */

void * __cdecl google::protobuf::Enum::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = vftable;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(Arena **)((longlong)param_2 + 0x28) = param_3;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(Arena **)((longlong)param_2 + 0x40) = param_3;
  *(GlobalEmptyString **)((longlong)param_2 + 0x48) = &internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x50) = &internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined4 *)((longlong)param_2 + 0x60) = 0;
  return param_2;
}

// `vector_deleting_destructor' @ 14fb74f70

/* public: virtual void * __ptr64 __cdecl google::protobuf::Enum::`vector deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall google::protobuf::Enum::_vector_deleting_destructor_(Enum *this,uint param_1)

{
  ~Enum(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// RepeatedPtrIterator<google::protobuf::Field_const_><google::protobuf::Field,0> @ 14fb74fb0

/* public: __cdecl google::protobuf::internal::RepeatedPtrIterator<class google::protobuf::Field
   const >::RepeatedPtrIterator<class google::protobuf::Field const ><class
   google::protobuf::Field,0>(class google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::Field> const & __ptr64) __ptr64 */

RepeatedPtrIterator<google::protobuf::Field_const_> * __thiscall
google::protobuf::internal::RepeatedPtrIterator<google::protobuf::Field_const_>::
RepeatedPtrIterator<google::protobuf::Field_const_><google::protobuf::Field,0>
          (RepeatedPtrIterator<google::protobuf::Field_const_> *this,
          RepeatedPtrIterator<google::protobuf::Field> *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  return this;
}

// Clear<google::protobuf::internal::GenericTypeHandler<google::protobuf::EnumValue>_> @ 14fb74fc0

/* public: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::Clear<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::EnumValue> >(void) __ptr64
    */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
Clear<google::protobuf::internal::GenericTypeHandler<google::protobuf::EnumValue>_>
          (RepeatedPtrFieldBase *this)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  longlong lVar4;
  
  if (this->current_size_ < 1) {
    return;
  }
  piVar1 = &this->current_size_;
  if (((ulonglong)this->tagged_rep_or_elem_ & 1) != 0) {
    this = (RepeatedPtrFieldBase *)((longlong)this->tagged_rep_or_elem_ + 7);
  }
  iVar3 = *piVar1;
  lVar4 = 0;
  do {
    ppvVar2 = &this->tagged_rep_or_elem_ + lVar4;
    lVar4 = lVar4 + 1;
    (**(code **)(*(longlong *)*ppvVar2 + 8))();
  } while (lVar4 < iVar3);
  *piVar1 = 0;
  return;
}

// Clear<google::protobuf::internal::GenericTypeHandler<google::protobuf::Field>_> @ 14fb74fe0

/* public: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::Clear<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Field> >(void) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
Clear<google::protobuf::internal::GenericTypeHandler<google::protobuf::Field>_>
          (RepeatedPtrFieldBase *this)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  longlong lVar4;
  
  if (this->current_size_ < 1) {
    return;
  }
  piVar1 = &this->current_size_;
  if (((ulonglong)this->tagged_rep_or_elem_ & 1) != 0) {
    this = (RepeatedPtrFieldBase *)((longlong)this->tagged_rep_or_elem_ + 7);
  }
  iVar3 = *piVar1;
  lVar4 = 0;
  do {
    ppvVar2 = &this->tagged_rep_or_elem_ + lVar4;
    lVar4 = lVar4 + 1;
    (**(code **)(*(longlong *)*ppvVar2 + 8))();
  } while (lVar4 < iVar3);
  *piVar1 = 0;
  return;
}

// Clear<google::protobuf::internal::GenericTypeHandler<google::protobuf::Option>_> @ 14fb75000

/* public: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::Clear<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Option> >(void) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
Clear<google::protobuf::internal::GenericTypeHandler<google::protobuf::Option>_>
          (RepeatedPtrFieldBase *this)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  longlong lVar4;
  
  if (this->current_size_ < 1) {
    return;
  }
  piVar1 = &this->current_size_;
  if (((ulonglong)this->tagged_rep_or_elem_ & 1) != 0) {
    this = (RepeatedPtrFieldBase *)((longlong)this->tagged_rep_or_elem_ + 7);
  }
  iVar3 = *piVar1;
  lVar4 = 0;
  do {
    ppvVar2 = &this->tagged_rep_or_elem_ + lVar4;
    lVar4 = lVar4 + 1;
    (**(code **)(*(longlong *)*ppvVar2 + 8))();
  } while (lVar4 < iVar3);
  *piVar1 = 0;
  return;
}

// CopyConstruct<google::protobuf::Any> @ 14fb75020

/* private: static void * __ptr64 __cdecl google::protobuf::Arena::CopyConstruct<class
   google::protobuf::Any>(class google::protobuf::Arena * __ptr64,void const * __ptr64) */

void * __cdecl
google::protobuf::Arena::CopyConstruct<google::protobuf::Any>(Arena *param_1,void *param_2)

{
  Any *this;
  void *pvVar1;
  
  if (param_1 == (Arena *)0x0) {
    this = ::operator_new(0x28);
  }
  else {
    this = Allocate(param_1,0x28);
  }
  pvVar1 = (void *)Any::Any(this,param_1,param_2);
  return pvVar1;
}

// CopyConstruct<google::protobuf::Any> @ 14fb75070

/* protected: static class google::protobuf::Any * __ptr64 __cdecl
   google::protobuf::MessageLite::CopyConstruct<class google::protobuf::Any>(class
   google::protobuf::Arena * __ptr64,class google::protobuf::Any const & __ptr64) */

Any * __cdecl
google::protobuf::MessageLite::CopyConstruct<google::protobuf::Any>(Arena *param_1,Any *param_2)

{
  Any *pAVar1;
  
  pAVar1 = Arena::CopyConstruct<google::protobuf::Any>(param_1,param_2);
  return pAVar1;
}

// CopyConstruct<google::protobuf::EnumValue> @ 14fb75080

/* private: static void * __ptr64 __cdecl google::protobuf::Arena::CopyConstruct<class
   google::protobuf::EnumValue>(class google::protobuf::Arena * __ptr64,void const * __ptr64) */

void * __cdecl
google::protobuf::Arena::CopyConstruct<google::protobuf::EnumValue>(Arena *param_1,void *param_2)

{
  undefined8 *puVar1;
  TaggedStringPtr TVar2;
  void *pvVar3;
  
  if (param_1 == (Arena *)0x0) {
    puVar1 = ::operator_new(0x40);
  }
  else {
    puVar1 = Allocate(param_1,0x40);
  }
  ((InternalMetadata *)(puVar1 + 1))->ptr_ = (long64)param_1;
  *puVar1 = EnumValue::vftable;
  if ((*(byte *)((longlong)param_2 + 8) & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(puVar1 + 1),
               (UnknownFieldSet *)((*(ulonglong *)((longlong)param_2 + 8) & 0xfffffffffffffffe) + 8)
              );
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
  ((RepeatedPtrFieldBase *)(puVar1 + 3))->tagged_rep_or_elem_ = (void *)0x0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  if (*(int *)((longlong)param_2 + 0x20) != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)(puVar1 + 3),
               (RepeatedPtrFieldBase *)((longlong)param_2 + 0x18),
               CopyConstruct<google::protobuf::Option>);
  }
  pvVar3 = ((TaggedStringPtr *)((longlong)param_2 + 0x30))->ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = internal::TaggedStringPtr::ForceCopy
                      ((TaggedStringPtr *)((longlong)param_2 + 0x30),(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  puVar1[6] = pvVar3;
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)((longlong)param_2 + 0x38);
  return puVar1;
}

// CopyConstruct<google::protobuf::Field> @ 14fb75160

/* private: static void * __ptr64 __cdecl google::protobuf::Arena::CopyConstruct<class
   google::protobuf::Field>(class google::protobuf::Arena * __ptr64,void const * __ptr64) */

void * __cdecl
google::protobuf::Arena::CopyConstruct<google::protobuf::Field>(Arena *param_1,void *param_2)

{
  Field *this;
  void *pvVar1;
  
  if (param_1 == (Arena *)0x0) {
    this = ::operator_new(0x68);
  }
  else {
    this = Allocate(param_1,0x68);
  }
  pvVar1 = (void *)Field::Field(this,param_1,param_2);
  return pvVar1;
}

// CopyConstruct<google::protobuf::Option> @ 14fb751b0

/* private: static void * __ptr64 __cdecl google::protobuf::Arena::CopyConstruct<class
   google::protobuf::Option>(class google::protobuf::Arena * __ptr64,void const * __ptr64) */

void * __cdecl
google::protobuf::Arena::CopyConstruct<google::protobuf::Option>(Arena *param_1,void *param_2)

{
  undefined8 *puVar1;
  TaggedStringPtr TVar2;
  void *pvVar3;
  
  if (param_1 == (Arena *)0x0) {
    puVar1 = ::operator_new(0x28);
  }
  else {
    puVar1 = Allocate(param_1,0x28);
  }
  ((InternalMetadata *)(puVar1 + 1))->ptr_ = (long64)param_1;
  *puVar1 = Option::vftable;
  if ((*(byte *)((longlong)param_2 + 8) & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(puVar1 + 1),
               (UnknownFieldSet *)((*(ulonglong *)((longlong)param_2 + 8) & 0xfffffffffffffffe) + 8)
              );
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
  pvVar3 = ((TaggedStringPtr *)((longlong)param_2 + 0x18))->ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = internal::TaggedStringPtr::ForceCopy
                      ((TaggedStringPtr *)((longlong)param_2 + 0x18),(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  puVar1[3] = pvVar3;
  if ((*(byte *)(puVar1 + 2) & 2) != 0) {
    pvVar3 = CopyConstruct<google::protobuf::Any>(param_1,*(void **)((longlong)param_2 + 0x20));
    puVar1[4] = pvVar3;
    return puVar1;
  }
  puVar1[4] = 0;
  return puVar1;
}

// CopyConstruct<google::protobuf::SourceContext> @ 14fb75290

/* private: static void * __ptr64 __cdecl google::protobuf::Arena::CopyConstruct<class
   google::protobuf::SourceContext>(class google::protobuf::Arena * __ptr64,void const * __ptr64) */

void * __cdecl
google::protobuf::Arena::CopyConstruct<google::protobuf::SourceContext>
          (Arena *param_1,void *param_2)

{
  SourceContext *this;
  void *pvVar1;
  
  if (param_1 == (Arena *)0x0) {
    this = ::operator_new(0x20);
  }
  else {
    this = Allocate(param_1,0x20);
  }
  pvVar1 = (void *)SourceContext::SourceContext(this,param_1,param_2);
  return pvVar1;
}

// CopyConstruct<google::protobuf::SourceContext> @ 14fb752e0

/* protected: static class google::protobuf::SourceContext * __ptr64 __cdecl
   google::protobuf::MessageLite::CopyConstruct<class google::protobuf::SourceContext>(class
   google::protobuf::Arena * __ptr64,class google::protobuf::SourceContext const & __ptr64) */

SourceContext * __cdecl
google::protobuf::MessageLite::CopyConstruct<google::protobuf::SourceContext>
          (Arena *param_1,SourceContext *param_2)

{
  SourceContext *pSVar1;
  
  pSVar1 = Arena::CopyConstruct<google::protobuf::SourceContext>(param_1,param_2);
  return pSVar1;
}

// Get<google::protobuf::internal::GenericTypeHandler<google::protobuf::Field>_> @ 14fb752f0

/* public: class google::protobuf::Field const & __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::Get<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Field> >(int)const __ptr64
    */

Field * __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
Get<google::protobuf::internal::GenericTypeHandler<google::protobuf::Field>_>
          (RepeatedPtrFieldBase *this,int param_1)

{
  Field *pFVar1;
  
  pFVar1 = this->tagged_rep_or_elem_;
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
    pFVar1 = *(Field **)
              ((longlong)(&(pFVar1->_impl_)._has_bits_)[(longlong)param_1 * 2 + -3].has_bits_ + 3);
  }
  return pFVar1;
}

// Get<google::protobuf::internal::GenericTypeHandler<google::protobuf::Option>_> @ 14fb75310

/* public: class google::protobuf::Option const & __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::Get<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Option> >(int)const
   __ptr64 */

Option * __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
Get<google::protobuf::internal::GenericTypeHandler<google::protobuf::Option>_>
          (RepeatedPtrFieldBase *this,int param_1)

{
  Option *pOVar1;
  
  pOVar1 = this->tagged_rep_or_elem_;
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
    pOVar1 = *(Option **)
              ((longlong)(&(pOVar1->_impl_)._has_bits_)[(longlong)param_1 * 2 + -3].has_bits_ + 3);
  }
  return pOVar1;
}

// MergeFrom<google::protobuf::EnumValue> @ 14fb75330

/* public: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<class
   google::protobuf::EnumValue>(class google::protobuf::internal::RepeatedPtrFieldBase const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::EnumValue>
          (RepeatedPtrFieldBase *this,RepeatedPtrFieldBase *param_1)

{
  MergeFromConcreteMessage(this,param_1,Arena::CopyConstruct<google::protobuf::EnumValue>);
  return;
}

// MergeFrom<google::protobuf::Field> @ 14fb75350

/* public: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<class
   google::protobuf::Field>(class google::protobuf::internal::RepeatedPtrFieldBase const & __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::Field>
          (RepeatedPtrFieldBase *this,RepeatedPtrFieldBase *param_1)

{
  MergeFromConcreteMessage(this,param_1,Arena::CopyConstruct<google::protobuf::Field>);
  return;
}

// MergeFrom<google::protobuf::Option> @ 14fb75370

/* public: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<class
   google::protobuf::Option>(class google::protobuf::internal::RepeatedPtrFieldBase const & __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::Option>
          (RepeatedPtrFieldBase *this,RepeatedPtrFieldBase *param_1)

{
  MergeFromConcreteMessage(this,param_1,Arena::CopyConstruct<google::protobuf::Option>);
  return;
}

// MessageSize<google::protobuf::Any> @ 14fb75390

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::MessageSize<class google::protobuf::Any>(class
   google::protobuf::Any const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::MessageSize<google::protobuf::Any>(Any *param_1)

{
  __uint64 _Var1;
  uint uVar2;
  int iVar3;
  
  _Var1 = Any::ByteSizeLong(param_1);
  uVar2 = (uint)_Var1 | 1;
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
  return (iVar3 * -9 + 0x160U >> 6) + _Var1;
}

// MessageSize<google::protobuf::EnumValue> @ 14fb753e0

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::MessageSize<class google::protobuf::EnumValue>(class
   google::protobuf::EnumValue const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::MessageSize<google::protobuf::EnumValue>
          (EnumValue *param_1)

{
  __uint64 _Var1;
  uint uVar2;
  int iVar3;
  
  _Var1 = EnumValue::ByteSizeLong(param_1);
  uVar2 = (uint)_Var1 | 1;
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
  return (iVar3 * -9 + 0x160U >> 6) + _Var1;
}

// MessageSize<google::protobuf::Field> @ 14fb75430

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::MessageSize<class google::protobuf::Field>(class
   google::protobuf::Field const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::MessageSize<google::protobuf::Field>(Field *param_1)

{
  __uint64 _Var1;
  uint uVar2;
  int iVar3;
  
  _Var1 = Field::ByteSizeLong(param_1);
  uVar2 = (uint)_Var1 | 1;
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
  return (iVar3 * -9 + 0x160U >> 6) + _Var1;
}

// MessageSize<google::protobuf::Option> @ 14fb75480

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::MessageSize<class google::protobuf::Option>(class
   google::protobuf::Option const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::MessageSize<google::protobuf::Option>(Option *param_1)

{
  ulong64 uVar1;
  __uint64 _Var2;
  uint uVar3;
  int iVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  __uint64 _Var6;
  
  uVar3 = (param_1->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((uVar3 & 3) != 0) {
    if (((uVar3 & 1) != 0) &&
       (pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 ((ulonglong)(param_1->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc),
       (pbVar5->_Mypair)._Myval2._Mysize != 0)) {
      uVar1 = StringSize(pbVar5);
      _Var6 = uVar1 + 1;
    }
    if ((uVar3 & 2) != 0) {
      _Var2 = Any::ByteSizeLong((param_1->_impl_).value_);
      uVar3 = (uint)_Var2 | 1;
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
      _Var6 = _Var6 + 1 + (iVar4 * -9 + 0x160U >> 6) + _Var2;
    }
  }
  _Var6 = protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)param_1,_Var6,&(param_1->_impl_)._cached_size_);
  uVar3 = (uint)_Var6 | 1;
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
  return (iVar4 * -9 + 0x160U >> 6) + _Var6;
}

// MessageSize<google::protobuf::SourceContext> @ 14fb75570

/* public: static unsigned __int64 __cdecl
   google::protobuf::internal::WireFormatLite::MessageSize<class
   google::protobuf::SourceContext>(class google::protobuf::SourceContext const & __ptr64) */

__uint64 __cdecl
google::protobuf::internal::WireFormatLite::MessageSize<google::protobuf::SourceContext>
          (SourceContext *param_1)

{
  __uint64 _Var1;
  uint uVar2;
  int iVar3;
  
  _Var1 = SourceContext::ByteSizeLong(param_1);
  uVar2 = (uint)_Var1 | 1;
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
  return (iVar3 * -9 + 0x160U >> 6) + _Var1;
}

// cast<google::protobuf::internal::GenericTypeHandler<google::protobuf::Field>_> @ 14fb755c0

/* private: static class google::protobuf::Field const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::cast<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Field> >(void const *
   __ptr64) */

Field * __cdecl
google::protobuf::internal::RepeatedPtrFieldBase::
cast<google::protobuf::internal::GenericTypeHandler<google::protobuf::Field>_>(void *param_1)

{
  return param_1;
}

// cast<google::protobuf::internal::GenericTypeHandler<google::protobuf::Option>_> @ 14fb755d0

/* private: static class google::protobuf::Option const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::cast<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::Option> >(void const *
   __ptr64) */

Option * __cdecl
google::protobuf::internal::RepeatedPtrFieldBase::
cast<google::protobuf::internal::GenericTypeHandler<google::protobuf::Option>_>(void *param_1)

{
  return param_1;
}

// memswap<17> @ 14fb755e0

/* void __cdecl google::protobuf::internal::memswap<17>(char * __ptr64,char * __ptr64) */

void __cdecl google::protobuf::internal::memswap<17>(char *param_1,char *param_2)

{
  __std_swap_ranges_trivially_swappable_noalias(param_1,param_1 + 0x11,param_2);
  return;
}

// move<google::protobuf::Any*___ptr64&___ptr64> @ 14fb75600

/* class google::protobuf::Any * __ptr64 && __ptr64 __cdecl std::move<class google::protobuf::Any *
   __ptr64 & __ptr64>(class google::protobuf::Any * __ptr64 & __ptr64) */

Any ** __cdecl std::move<google::protobuf::Any*___ptr64&___ptr64>(Any **param_1)

{
  return param_1;
}

// swap<google::protobuf::Any*___ptr64,0> @ 14fb75610

/* void __cdecl std::swap<class google::protobuf::Any * __ptr64,0>(class google::protobuf::Any *
   __ptr64 & __ptr64,class google::protobuf::Any * __ptr64 & __ptr64) */

void __cdecl std::swap<google::protobuf::Any*___ptr64,0>(Any **param_1,Any **param_2)

{
  Any *pAVar1;
  
  pAVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = pAVar1;
  return;
}

// RepeatedPtrField<google::protobuf::EnumValue> @ 14fb75630

/* private: __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::EnumValue>::RepeatedPtrField<class google::protobuf::EnumValue>(class
   google::protobuf::Arena * __ptr64,class google::protobuf::RepeatedPtrField<class
   google::protobuf::EnumValue> const & __ptr64) __ptr64 */

RepeatedPtrField<google::protobuf::EnumValue> * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::EnumValue>::
RepeatedPtrField<google::protobuf::EnumValue>
          (RepeatedPtrField<google::protobuf::EnumValue> *this,Arena *param_1,
          RepeatedPtrField<class_google::protobuf::EnumValue> *param_2)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(Arena **)&this->field_0x10 = param_1;
  if (*(int *)(param_2 + 8) != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this,(RepeatedPtrFieldBase *)param_2,
               Arena::CopyConstruct<google::protobuf::EnumValue>);
  }
  return this;
}

// RepeatedPtrField<google::protobuf::EnumValue> @ 14fb75670

/* public: __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::EnumValue>::RepeatedPtrField<class google::protobuf::EnumValue>(class
   google::protobuf::Arena * __ptr64) __ptr64 */

RepeatedPtrField<google::protobuf::EnumValue> * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::EnumValue>::
RepeatedPtrField<google::protobuf::EnumValue>
          (RepeatedPtrField<google::protobuf::EnumValue> *this,Arena *param_1)

{
  *(Arena **)&this->field_0x10 = param_1;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return this;
}

// RepeatedPtrField<google::protobuf::EnumValue> @ 14fb75690

/* public: __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::EnumValue>::RepeatedPtrField<class google::protobuf::EnumValue>(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

RepeatedPtrField<google::protobuf::EnumValue> * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::EnumValue>::
RepeatedPtrField<google::protobuf::EnumValue>
          (RepeatedPtrField<google::protobuf::EnumValue> *this,InternalVisibility param_1,
          Arena *param_2)

{
  *(Arena **)&this->field_0x10 = param_2;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return this;
}

// RepeatedPtrField<google::protobuf::EnumValue> @ 14fb756b0

/* public: __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::EnumValue>::RepeatedPtrField<class google::protobuf::EnumValue>(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64,class
   google::protobuf::RepeatedPtrField<class google::protobuf::EnumValue> const & __ptr64) __ptr64 */

RepeatedPtrField<google::protobuf::EnumValue> * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::EnumValue>::
RepeatedPtrField<google::protobuf::EnumValue>
          (RepeatedPtrField<google::protobuf::EnumValue> *this,InternalVisibility param_1,
          Arena *param_2,RepeatedPtrField<class_google::protobuf::EnumValue> *param_3)

{
  *(Arena **)&this->field_0x10 = param_2;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  if (*(int *)(param_3 + 8) != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this,(RepeatedPtrFieldBase *)param_3,
               Arena::CopyConstruct<google::protobuf::EnumValue>);
  }
  return this;
}

// RepeatedPtrField<google::protobuf::Field> @ 14fb756f0

/* private: __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Field>::RepeatedPtrField<class google::protobuf::Field>(class
   google::protobuf::Arena * __ptr64,class google::protobuf::RepeatedPtrField<class
   google::protobuf::Field> const & __ptr64) __ptr64 */

RepeatedPtrField<google::protobuf::Field> * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Field>::
RepeatedPtrField<google::protobuf::Field>
          (RepeatedPtrField<google::protobuf::Field> *this,Arena *param_1,
          RepeatedPtrField<class_google::protobuf::Field> *param_2)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(Arena **)&this->field_0x10 = param_1;
  if (*(int *)(param_2 + 8) != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this,(RepeatedPtrFieldBase *)param_2,
               Arena::CopyConstruct<google::protobuf::Field>);
  }
  return this;
}

// RepeatedPtrField<google::protobuf::Field> @ 14fb75730

/* public: __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Field>::RepeatedPtrField<class google::protobuf::Field>(class
   google::protobuf::Arena * __ptr64) __ptr64 */

RepeatedPtrField<google::protobuf::Field> * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Field>::
RepeatedPtrField<google::protobuf::Field>
          (RepeatedPtrField<google::protobuf::Field> *this,Arena *param_1)

{
  *(Arena **)&this->field_0x10 = param_1;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return this;
}

// RepeatedPtrField<google::protobuf::Field> @ 14fb75750

/* public: __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Field>::RepeatedPtrField<class google::protobuf::Field>(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

RepeatedPtrField<google::protobuf::Field> * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Field>::
RepeatedPtrField<google::protobuf::Field>
          (RepeatedPtrField<google::protobuf::Field> *this,InternalVisibility param_1,Arena *param_2
          )

{
  *(Arena **)&this->field_0x10 = param_2;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return this;
}

// RepeatedPtrField<google::protobuf::Field> @ 14fb75770

/* public: __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Field>::RepeatedPtrField<class google::protobuf::Field>(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64,class
   google::protobuf::RepeatedPtrField<class google::protobuf::Field> const & __ptr64) __ptr64 */

RepeatedPtrField<google::protobuf::Field> * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Field>::
RepeatedPtrField<google::protobuf::Field>
          (RepeatedPtrField<google::protobuf::Field> *this,InternalVisibility param_1,Arena *param_2
          ,RepeatedPtrField<class_google::protobuf::Field> *param_3)

{
  *(Arena **)&this->field_0x10 = param_2;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  if (*(int *)(param_3 + 8) != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this,(RepeatedPtrFieldBase *)param_3,
               Arena::CopyConstruct<google::protobuf::Field>);
  }
  return this;
}

// RepeatedPtrField<google::protobuf::Option> @ 14fb757b0

/* private: __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Option>::RepeatedPtrField<class google::protobuf::Option>(class
   google::protobuf::Arena * __ptr64,class google::protobuf::RepeatedPtrField<class
   google::protobuf::Option> const & __ptr64) __ptr64 */

RepeatedPtrField<google::protobuf::Option> * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Option>::
RepeatedPtrField<google::protobuf::Option>
          (RepeatedPtrField<google::protobuf::Option> *this,Arena *param_1,
          RepeatedPtrField<class_google::protobuf::Option> *param_2)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(Arena **)&this->field_0x10 = param_1;
  if (*(int *)(param_2 + 8) != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this,(RepeatedPtrFieldBase *)param_2,
               Arena::CopyConstruct<google::protobuf::Option>);
  }
  return this;
}

// RepeatedPtrField<google::protobuf::Option> @ 14fb757f0

/* public: __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Option>::RepeatedPtrField<class google::protobuf::Option>(class
   google::protobuf::Arena * __ptr64) __ptr64 */

RepeatedPtrField<google::protobuf::Option> * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Option>::
RepeatedPtrField<google::protobuf::Option>
          (RepeatedPtrField<google::protobuf::Option> *this,Arena *param_1)

{
  *(Arena **)&this->field_0x10 = param_1;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return this;
}

// RepeatedPtrField<google::protobuf::Option> @ 14fb75810

/* public: __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Option>::RepeatedPtrField<class google::protobuf::Option>(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

RepeatedPtrField<google::protobuf::Option> * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Option>::
RepeatedPtrField<google::protobuf::Option>
          (RepeatedPtrField<google::protobuf::Option> *this,InternalVisibility param_1,
          Arena *param_2)

{
  *(Arena **)&this->field_0x10 = param_2;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return this;
}

// RepeatedPtrField<google::protobuf::Option> @ 14fb75830

/* public: __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Option>::RepeatedPtrField<class google::protobuf::Option>(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64,class
   google::protobuf::RepeatedPtrField<class google::protobuf::Option> const & __ptr64) __ptr64 */

RepeatedPtrField<google::protobuf::Option> * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Option>::
RepeatedPtrField<google::protobuf::Option>
          (RepeatedPtrField<google::protobuf::Option> *this,InternalVisibility param_1,
          Arena *param_2,RepeatedPtrField<class_google::protobuf::Option> *param_3)

{
  *(Arena **)&this->field_0x10 = param_2;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  if (*(int *)(param_3 + 8) != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this,(RepeatedPtrFieldBase *)param_3,
               Arena::CopyConstruct<google::protobuf::Option>);
  }
  return this;
}

// RepeatedPtrIterator<google::protobuf::Field> @ 14fb75870

/* public: __cdecl google::protobuf::internal::RepeatedPtrIterator<class
   google::protobuf::Field>::RepeatedPtrIterator<class google::protobuf::Field>(void * __ptr64 const
   * __ptr64) __ptr64 */

RepeatedPtrIterator<google::protobuf::Field> * __thiscall
google::protobuf::internal::RepeatedPtrIterator<google::protobuf::Field>::
RepeatedPtrIterator<google::protobuf::Field>
          (RepeatedPtrIterator<google::protobuf::Field> *this,void **param_1)

{
  *(void ***)this = param_1;
  return this;
}

// Enum @ 14fb75880

/* protected: __cdecl google::protobuf::Enum::Enum(class google::protobuf::Arena * __ptr64) __ptr64
    */

Enum * __thiscall google::protobuf::Enum::Enum(Enum *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)vftable;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->_impl_).enumvalue_ = 0;
  *(undefined8 *)&(this->_impl_).enumvalue_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).enumvalue_.field_0x10 = param_1;
  *(undefined8 *)&(this->_impl_).options_ = 0;
  *(undefined8 *)&(this->_impl_).options_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).options_.field_0x10 = param_1;
  (this->_impl_).name_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).edition_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).source_context_ = (SourceContext *)0x0;
  (this->_impl_).syntax_ = 0;
  return this;
}

// Enum @ 14fb758e0

/* protected: __cdecl google::protobuf::Enum::Enum(class google::protobuf::Arena * __ptr64,class
   google::protobuf::Enum const & __ptr64) __ptr64 */

Enum * __thiscall google::protobuf::Enum::Enum(Enum *this,Arena *param_1,Enum *param_2)

{
  RepeatedPtrField<google::protobuf::EnumValue> *this_00;
  RepeatedPtrField<google::protobuf::Option> *this_01;
  ArenaStringPtr *pAVar1;
  TaggedStringPtr TVar2;
  void *pvVar3;
  SourceContext *pSVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)vftable;
  if ((param_2->_padding_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pSVar4 = (SourceContext *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  this_00 = &(this->_impl_).enumvalue_;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).enumvalue_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).enumvalue_.field_0x10 = param_1;
  if (*(int *)&(param_2->_impl_).enumvalue_.field_0x8 != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this_00,(RepeatedPtrFieldBase *)&(param_2->_impl_).enumvalue_
               ,Arena::CopyConstruct<google::protobuf::EnumValue>);
  }
  this_01 = &(this->_impl_).options_;
  *(undefined8 *)&this_01->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).options_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).options_.field_0x10 = param_1;
  if (*(int *)&(param_2->_impl_).options_.field_0x8 != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this_01,(RepeatedPtrFieldBase *)&(param_2->_impl_).options_,
               Arena::CopyConstruct<google::protobuf::Option>);
  }
  pAVar1 = &(param_2->_impl_).name_;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = internal::TaggedStringPtr::ForceCopy(&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  (this->_impl_).name_.tagged_ptr_.ptr_ = pvVar3;
  pAVar1 = &(param_2->_impl_).edition_;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = internal::TaggedStringPtr::ForceCopy(&pAVar1->tagged_ptr_,(Arena *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  (this->_impl_).edition_.tagged_ptr_.ptr_ = pvVar3;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) {
    pSVar4 = Arena::CopyConstruct<google::protobuf::SourceContext>
                       (param_1,(param_2->_impl_).source_context_);
  }
  (this->_impl_).source_context_ = pSVar4;
  (this->_impl_).syntax_ = (param_2->_impl_).syntax_;
  return this;
}

// EnumValue @ 14fb759f0

/* protected: __cdecl google::protobuf::EnumValue::EnumValue(class google::protobuf::Arena *
   __ptr64) __ptr64 */

EnumValue * __thiscall google::protobuf::EnumValue::EnumValue(EnumValue *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)vftable;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->_impl_).options_ = 0;
  *(undefined8 *)&(this->_impl_).options_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).options_.field_0x10 = param_1;
  (this->_impl_).name_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).number_ = 0;
  return this;
}

// EnumValue @ 14fb75a40

/* protected: __cdecl google::protobuf::EnumValue::EnumValue(class google::protobuf::Arena *
   __ptr64,class google::protobuf::EnumValue const & __ptr64) __ptr64 */

EnumValue * __thiscall
google::protobuf::EnumValue::EnumValue(EnumValue *this,Arena *param_1,EnumValue *param_2)

{
  RepeatedPtrField<google::protobuf::Option> *this_00;
  ArenaStringPtr *this_01;
  TaggedStringPtr TVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)vftable;
  if ((param_2->_padding_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  this_00 = &(this->_impl_).options_;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).options_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).options_.field_0x10 = param_1;
  if (*(int *)&(param_2->_impl_).options_.field_0x8 != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this_00,(RepeatedPtrFieldBase *)&(param_2->_impl_).options_,
               Arena::CopyConstruct<google::protobuf::Option>);
  }
  this_01 = &(param_2->_impl_).name_;
  pvVar2 = (this_01->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = internal::TaggedStringPtr::ForceCopy(&this_01->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->_impl_).name_.tagged_ptr_.ptr_ = pvVar2;
  (this->_impl_).number_ = (param_2->_impl_).number_;
  return this;
}

// Field @ 14fb75b00

/* protected: __cdecl google::protobuf::Field::Field(class google::protobuf::Arena * __ptr64)
   __ptr64 */

Field * __thiscall google::protobuf::Field::Field(Field *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)vftable;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->_impl_).options_ = 0;
  *(undefined8 *)&(this->_impl_).options_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).options_.field_0x10 = param_1;
  (this->_impl_).name_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).type_url_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).json_name_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).default_value_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).kind_ = 0;
  (this->_impl_).cardinality_ = 0;
  (this->_impl_).number_ = 0;
  (this->_impl_).oneof_index_ = 0;
  (this->_impl_).packed_ = false;
  return this;
}

// Field @ 14fb75b60

/* protected: __cdecl google::protobuf::Field::Field(class google::protobuf::Arena * __ptr64,class
   google::protobuf::Field const & __ptr64) __ptr64 */

Field * __thiscall google::protobuf::Field::Field(Field *this,Arena *param_1,Field *param_2)

{
  RepeatedPtrField<google::protobuf::Option> *this_00;
  ArenaStringPtr *pAVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  TaggedStringPtr TVar5;
  void *pvVar6;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)vftable;
  if ((param_2->_padding_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  this_00 = &(this->_impl_).options_;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).options_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).options_.field_0x10 = param_1;
  if (*(int *)&(param_2->_impl_).options_.field_0x8 != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this_00,(RepeatedPtrFieldBase *)&(param_2->_impl_).options_,
               Arena::CopyConstruct<google::protobuf::Option>);
  }
  pAVar1 = &(param_2->_impl_).name_;
  pvVar6 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = internal::TaggedStringPtr::ForceCopy(&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  (this->_impl_).name_.tagged_ptr_.ptr_ = pvVar6;
  pAVar1 = &(param_2->_impl_).type_url_;
  pvVar6 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = internal::TaggedStringPtr::ForceCopy(&pAVar1->tagged_ptr_,(Arena *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  (this->_impl_).type_url_.tagged_ptr_.ptr_ = pvVar6;
  pAVar1 = &(param_2->_impl_).json_name_;
  pvVar6 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = internal::TaggedStringPtr::ForceCopy(&pAVar1->tagged_ptr_,(Arena *)&stack0x00000020);
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  (this->_impl_).json_name_.tagged_ptr_.ptr_ = pvVar6;
  pAVar1 = &(param_2->_impl_).default_value_;
  pvVar6 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0xffffffffffffffc8);
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  (this->_impl_).default_value_.tagged_ptr_.ptr_ = pvVar6;
  iVar2 = (param_2->_impl_).cardinality_;
  iVar3 = (param_2->_impl_).number_;
  iVar4 = (param_2->_impl_).oneof_index_;
  (this->_impl_).kind_ = (param_2->_impl_).kind_;
  (this->_impl_).cardinality_ = iVar2;
  (this->_impl_).number_ = iVar3;
  (this->_impl_).oneof_index_ = iVar4;
  (this->_impl_).packed_ = (param_2->_impl_).packed_;
  return this;
}

// Impl_ @ 14fb75c70

/* public: __cdecl google::protobuf::Enum::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

Impl_ * __thiscall
google::protobuf::Enum::Impl_::Impl_(Impl_ *this,InternalVisibility param_1,Arena *param_2)

{
  this->_has_bits_ = (uint  [1])0x0;
  this->_cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&this->enumvalue_ = 0;
  *(undefined8 *)&(this->enumvalue_).field_0x8 = 0;
  *(Arena **)&(this->enumvalue_).field_0x10 = param_2;
  *(undefined8 *)&this->options_ = 0;
  *(undefined8 *)&(this->options_).field_0x8 = 0;
  *(Arena **)&(this->options_).field_0x10 = param_2;
  (this->name_).tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->edition_).tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  return this;
}

// Impl_ @ 14fb75cb0

/* public: __cdecl google::protobuf::Enum::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64,struct
   google::protobuf::Enum::Impl_ const & __ptr64,class google::protobuf::Enum const & __ptr64)
   __ptr64 */

Impl_ * __thiscall
google::protobuf::Enum::Impl_::Impl_
          (Impl_ *this,InternalVisibility param_1,Arena *param_2,Impl_ *param_3,Enum *param_4)

{
  TaggedStringPtr TVar1;
  void *pvVar2;
  
  (this->_has_bits_).has_bits_[0] = (param_3->_has_bits_).has_bits_[0];
  (this->_cached_size_).atom_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->enumvalue_).field_0x0 = 0;
  *(undefined8 *)&(this->enumvalue_).field_0x8 = 0;
  *(Arena **)&(this->enumvalue_).field_0x10 = param_2;
  if (*(int *)&(param_3->enumvalue_).field_0x8 != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&this->enumvalue_,
               (RepeatedPtrFieldBase *)&param_3->enumvalue_,
               Arena::CopyConstruct<google::protobuf::EnumValue>);
  }
  *(undefined8 *)&(this->options_).field_0x0 = 0;
  *(undefined8 *)&(this->options_).field_0x8 = 0;
  *(Arena **)&(this->options_).field_0x10 = param_2;
  if (*(int *)&(param_3->options_).field_0x8 != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&this->options_,(RepeatedPtrFieldBase *)&param_3->options_,
               Arena::CopyConstruct<google::protobuf::Option>);
  }
  pvVar2 = (param_3->name_).tagged_ptr_.ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = internal::TaggedStringPtr::ForceCopy
                      (&(param_3->name_).tagged_ptr_,(Arena *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->name_).tagged_ptr_.ptr_ = pvVar2;
  pvVar2 = (param_3->edition_).tagged_ptr_.ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = internal::TaggedStringPtr::ForceCopy
                      (&(param_3->edition_).tagged_ptr_,(Arena *)&stack0x00000020);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->edition_).tagged_ptr_.ptr_ = pvVar2;
  return this;
}

// Impl_ @ 14fb75d80

/* public: __cdecl google::protobuf::EnumValue::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

Impl_ * __thiscall
google::protobuf::EnumValue::Impl_::Impl_(Impl_ *this,InternalVisibility param_1,Arena *param_2)

{
  this->_has_bits_ = (uint  [1])0x0;
  this->_cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&this->options_ = 0;
  *(undefined8 *)&(this->options_).field_0x8 = 0;
  *(Arena **)&(this->options_).field_0x10 = param_2;
  (this->name_).tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  return this;
}

// Impl_ @ 14fb75db0

/* public: __cdecl google::protobuf::EnumValue::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64,struct
   google::protobuf::EnumValue::Impl_ const & __ptr64,class google::protobuf::EnumValue const &
   __ptr64) __ptr64 */

Impl_ * __thiscall
google::protobuf::EnumValue::Impl_::Impl_
          (Impl_ *this,InternalVisibility param_1,Arena *param_2,Impl_ *param_3,EnumValue *param_4)

{
  TaggedStringPtr TVar1;
  void *pvVar2;
  
  (this->_has_bits_).has_bits_[0] = (param_3->_has_bits_).has_bits_[0];
  (this->_cached_size_).atom_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->options_).field_0x0 = 0;
  *(undefined8 *)&(this->options_).field_0x8 = 0;
  *(Arena **)&(this->options_).field_0x10 = param_2;
  if (*(int *)&(param_3->options_).field_0x8 != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&this->options_,(RepeatedPtrFieldBase *)&param_3->options_,
               Arena::CopyConstruct<google::protobuf::Option>);
  }
  pvVar2 = (param_3->name_).tagged_ptr_.ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = internal::TaggedStringPtr::ForceCopy
                      (&(param_3->name_).tagged_ptr_,(Arena *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->name_).tagged_ptr_.ptr_ = pvVar2;
  return this;
}

// Impl_ @ 14fb75e40

/* public: __cdecl google::protobuf::Field::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

Impl_ * __thiscall
google::protobuf::Field::Impl_::Impl_(Impl_ *this,InternalVisibility param_1,Arena *param_2)

{
  this->_has_bits_ = (uint  [1])0x0;
  this->_cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&this->options_ = 0;
  *(undefined8 *)&(this->options_).field_0x8 = 0;
  *(Arena **)&(this->options_).field_0x10 = param_2;
  (this->name_).tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->type_url_).tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->json_name_).tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->default_value_).tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  return this;
}

// Impl_ @ 14fb75e80

/* public: __cdecl google::protobuf::Field::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64,struct
   google::protobuf::Field::Impl_ const & __ptr64,class google::protobuf::Field const & __ptr64)
   __ptr64 */

Impl_ * __thiscall
google::protobuf::Field::Impl_::Impl_
          (Impl_ *this,InternalVisibility param_1,Arena *param_2,Impl_ *param_3,Field *param_4)

{
  TaggedStringPtr TVar1;
  void *pvVar2;
  undefined1 local_28 [16];
  
  (this->_has_bits_).has_bits_[0] = (param_3->_has_bits_).has_bits_[0];
  (this->_cached_size_).atom_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->options_).field_0x0 = 0;
  *(undefined8 *)&(this->options_).field_0x8 = 0;
  *(Arena **)&(this->options_).field_0x10 = param_2;
  if (*(int *)&(param_3->options_).field_0x8 != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&this->options_,(RepeatedPtrFieldBase *)&param_3->options_,
               Arena::CopyConstruct<google::protobuf::Option>);
  }
  pvVar2 = (param_3->name_).tagged_ptr_.ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = internal::TaggedStringPtr::ForceCopy
                      (&(param_3->name_).tagged_ptr_,(Arena *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->name_).tagged_ptr_.ptr_ = pvVar2;
  pvVar2 = (param_3->type_url_).tagged_ptr_.ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = internal::TaggedStringPtr::ForceCopy
                      (&(param_3->type_url_).tagged_ptr_,(Arena *)&stack0x00000020);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->type_url_).tagged_ptr_.ptr_ = pvVar2;
  pvVar2 = (param_3->json_name_).tagged_ptr_.ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = internal::TaggedStringPtr::ForceCopy
                      (&(param_3->json_name_).tagged_ptr_,(Arena *)local_28);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->json_name_).tagged_ptr_.ptr_ = pvVar2;
  pvVar2 = (param_3->default_value_).tagged_ptr_.ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = internal::TaggedStringPtr::ForceCopy
                      (&(param_3->default_value_).tagged_ptr_,(Arena *)(local_28 + 8));
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->default_value_).tagged_ptr_.ptr_ = pvVar2;
  return this;
}

// Impl_ @ 14fb75f60

/* public: __cdecl google::protobuf::Option::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

Impl_ * __thiscall
google::protobuf::Option::Impl_::Impl_(Impl_ *this,InternalVisibility param_1,Arena *param_2)

{
  this->_has_bits_ = (uint  [1])0x0;
  this->_cached_size_ = (atomic<int>)0x0;
  (this->name_).tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  return this;
}

// Impl_ @ 14fb75f80

/* public: __cdecl google::protobuf::Option::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64,struct
   google::protobuf::Option::Impl_ const & __ptr64,class google::protobuf::Option const & __ptr64)
   __ptr64 */

Impl_ * __thiscall
google::protobuf::Option::Impl_::Impl_
          (Impl_ *this,InternalVisibility param_1,Arena *param_2,Impl_ *param_3,Option *param_4)

{
  void *pvVar1;
  TaggedStringPtr TVar2;
  
  (this->_has_bits_).has_bits_[0] = (param_3->_has_bits_).has_bits_[0];
  (this->_cached_size_).atom_ = (atomic<int>)0x0;
  pvVar1 = (param_3->name_).tagged_ptr_.ptr_;
  if (((ulonglong)pvVar1 & 3) == 0) {
    (this->name_).tagged_ptr_.ptr_ = pvVar1;
    return this;
  }
  TVar2 = internal::TaggedStringPtr::ForceCopy
                    (&(param_3->name_).tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
  (this->name_).tagged_ptr_.ptr_ = *TVar2.ptr_;
  return this;
}

// Impl_ @ 14fb75fd0

/* public: __cdecl google::protobuf::Type::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64) __ptr64
    */

Impl_ * __thiscall
google::protobuf::Type::Impl_::Impl_(Impl_ *this,InternalVisibility param_1,Arena *param_2)

{
  this->_has_bits_ = (uint  [1])0x0;
  this->_cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&this->fields_ = 0;
  *(undefined8 *)&(this->fields_).field_0x8 = 0;
  *(Arena **)&(this->fields_).field_0x10 = param_2;
  *(undefined8 *)&this->oneofs_ = 0;
  *(undefined8 *)&(this->oneofs_).field_0x8 = 0;
  *(Arena **)&(this->oneofs_).field_0x10 = param_2;
  *(undefined8 *)&this->options_ = 0;
  *(undefined8 *)&(this->options_).field_0x8 = 0;
  *(Arena **)&(this->options_).field_0x10 = param_2;
  (this->name_).tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->edition_).tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  return this;
}

// Impl_ @ 14fb76020

/* public: __cdecl google::protobuf::Type::Impl_::Impl_(class
   google::protobuf::internal::InternalVisibility,class google::protobuf::Arena * __ptr64,struct
   google::protobuf::Type::Impl_ const & __ptr64,class google::protobuf::Type const & __ptr64)
   __ptr64 */

Impl_ * __thiscall
google::protobuf::Type::Impl_::Impl_
          (Impl_ *this,InternalVisibility param_1,Arena *param_2,Impl_ *param_3,Type *param_4)

{
  TaggedStringPtr TVar1;
  void *pvVar2;
  
  (this->_has_bits_).has_bits_[0] = (param_3->_has_bits_).has_bits_[0];
  (this->_cached_size_).atom_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->fields_).field_0x0 = 0;
  *(undefined8 *)&(this->fields_).field_0x8 = 0;
  *(Arena **)&(this->fields_).field_0x10 = param_2;
  if (*(int *)&(param_3->fields_).field_0x8 != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&this->fields_,(RepeatedPtrFieldBase *)&param_3->fields_,
               Arena::CopyConstruct<google::protobuf::Field>);
  }
  *(undefined8 *)&(this->oneofs_).field_0x0 = 0;
  *(undefined8 *)&(this->oneofs_).field_0x8 = 0;
  *(Arena **)&(this->oneofs_).field_0x10 = param_2;
  if (*(int *)&(param_3->oneofs_).field_0x8 != 0) {
    internal::RepeatedPtrFieldBase::
    MergeFrom<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ((RepeatedPtrFieldBase *)&this->oneofs_,(RepeatedPtrFieldBase *)&param_3->oneofs_);
  }
  *(undefined8 *)&(this->options_).field_0x0 = 0;
  *(undefined8 *)&(this->options_).field_0x8 = 0;
  *(Arena **)&(this->options_).field_0x10 = param_2;
  if (*(int *)&(param_3->options_).field_0x8 != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&this->options_,(RepeatedPtrFieldBase *)&param_3->options_,
               Arena::CopyConstruct<google::protobuf::Option>);
  }
  pvVar2 = (param_3->name_).tagged_ptr_.ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = internal::TaggedStringPtr::ForceCopy
                      (&(param_3->name_).tagged_ptr_,(Arena *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->name_).tagged_ptr_.ptr_ = pvVar2;
  pvVar2 = (param_3->edition_).tagged_ptr_.ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = internal::TaggedStringPtr::ForceCopy
                      (&(param_3->edition_).tagged_ptr_,(Arena *)&stack0x00000020);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->edition_).tagged_ptr_.ptr_ = pvVar2;
  return this;
}

// Option @ 14fb76110

/* protected: __cdecl google::protobuf::Option::Option(class google::protobuf::Arena * __ptr64)
   __ptr64 */

Option * __thiscall google::protobuf::Option::Option(Option *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)vftable;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).name_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).value_ = (Any *)0x0;
  return this;
}

// Option @ 14fb76140

/* protected: __cdecl google::protobuf::Option::Option(class google::protobuf::Arena * __ptr64,class
   google::protobuf::Option const & __ptr64) __ptr64 */

Option * __thiscall google::protobuf::Option::Option(Option *this,Arena *param_1,Option *param_2)

{
  ArenaStringPtr *this_00;
  TaggedStringPtr TVar1;
  void *pvVar2;
  Any *pAVar3;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)vftable;
  if ((param_2->_padding_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).name_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar2 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = internal::TaggedStringPtr::ForceCopy(&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->_impl_).name_.tagged_ptr_.ptr_ = pvVar2;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pAVar3 = Arena::CopyConstruct<google::protobuf::Any>(param_1,(param_2->_impl_).value_);
    (this->_impl_).value_ = pAVar3;
    return this;
  }
  (this->_impl_).value_ = (Any *)0x0;
  return this;
}

// Type @ 14fb76200

/* protected: __cdecl google::protobuf::Type::Type(class google::protobuf::Arena * __ptr64) __ptr64
    */

Type * __thiscall google::protobuf::Type::Type(Type *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)vftable;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->_impl_).fields_ = 0;
  *(undefined8 *)&(this->_impl_).fields_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).fields_.field_0x10 = param_1;
  *(undefined8 *)&(this->_impl_).oneofs_ = 0;
  *(undefined8 *)&(this->_impl_).oneofs_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).oneofs_.field_0x10 = param_1;
  *(undefined8 *)&(this->_impl_).options_ = 0;
  *(undefined8 *)&(this->_impl_).options_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).options_.field_0x10 = param_1;
  (this->_impl_).name_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).edition_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).source_context_ = (SourceContext *)0x0;
  (this->_impl_).syntax_ = 0;
  return this;
}

// Type @ 14fb76270

/* protected: __cdecl google::protobuf::Type::Type(class google::protobuf::Arena * __ptr64,class
   google::protobuf::Type const & __ptr64) __ptr64 */

Type * __thiscall google::protobuf::Type::Type(Type *this,Arena *param_1,Type *param_2)

{
  RepeatedPtrField<google::protobuf::Field> *this_00;
  RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this_01;
  RepeatedPtrField<google::protobuf::Option> *this_02;
  ArenaStringPtr *pAVar1;
  TaggedStringPtr TVar2;
  void *pvVar3;
  SourceContext *pSVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)vftable;
  if ((param_2->_padding_ & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pSVar4 = (SourceContext *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  this_00 = &(this->_impl_).fields_;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).fields_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).fields_.field_0x10 = param_1;
  if (*(int *)&(param_2->_impl_).fields_.field_0x8 != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this_00,(RepeatedPtrFieldBase *)&(param_2->_impl_).fields_,
               Arena::CopyConstruct<google::protobuf::Field>);
  }
  this_01 = &(this->_impl_).oneofs_;
  *(undefined8 *)&this_01->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).oneofs_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).oneofs_.field_0x10 = param_1;
  if (*(int *)&(param_2->_impl_).oneofs_.field_0x8 != 0) {
    internal::RepeatedPtrFieldBase::
    MergeFrom<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              ((RepeatedPtrFieldBase *)this_01,(RepeatedPtrFieldBase *)&(param_2->_impl_).oneofs_);
  }
  this_02 = &(this->_impl_).options_;
  *(undefined8 *)&this_02->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).options_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).options_.field_0x10 = param_1;
  if (*(int *)&(param_2->_impl_).options_.field_0x8 != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this_02,(RepeatedPtrFieldBase *)&(param_2->_impl_).options_,
               Arena::CopyConstruct<google::protobuf::Option>);
  }
  pAVar1 = &(param_2->_impl_).name_;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = internal::TaggedStringPtr::ForceCopy(&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  (this->_impl_).name_.tagged_ptr_.ptr_ = pvVar3;
  pAVar1 = &(param_2->_impl_).edition_;
  pvVar3 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = internal::TaggedStringPtr::ForceCopy(&pAVar1->tagged_ptr_,(Arena *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  (this->_impl_).edition_.tagged_ptr_.ptr_ = pvVar3;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) {
    pSVar4 = Arena::CopyConstruct<google::protobuf::SourceContext>
                       (param_1,(param_2->_impl_).source_context_);
  }
  (this->_impl_).source_context_ = pSVar4;
  (this->_impl_).syntax_ = (param_2->_impl_).syntax_;
  return this;
}

// ~RepeatedPtrField<google::protobuf::EnumValue> @ 14fb763a0

/* public: __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::EnumValue>::~RepeatedPtrField<class google::protobuf::EnumValue>(void) __ptr64
    */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::EnumValue>::
~RepeatedPtrField<google::protobuf::EnumValue>(RepeatedPtrField<google::protobuf::EnumValue> *this)

{
  if (*(longlong *)this != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)this);
  }
  return;
}

// ~RepeatedPtrField<google::protobuf::Field> @ 14fb763c0

/* public: __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Field>::~RepeatedPtrField<class google::protobuf::Field>(void) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Field>::
~RepeatedPtrField<google::protobuf::Field>(RepeatedPtrField<google::protobuf::Field> *this)

{
  if (*(longlong *)this != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)this);
  }
  return;
}

// ~RepeatedPtrField<google::protobuf::Option> @ 14fb763e0

/* public: __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Option>::~RepeatedPtrField<class google::protobuf::Option>(void) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Option>::
~RepeatedPtrField<google::protobuf::Option>(RepeatedPtrField<google::protobuf::Option> *this)

{
  if (*(longlong *)this != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)this);
  }
  return;
}

// ~Enum @ 14fb76400

/* public: virtual __cdecl google::protobuf::Enum::~Enum(void) __ptr64 */

void __thiscall google::protobuf::Enum::~Enum(Enum *this)

{
  RepeatedPtrField<google::protobuf::Option> *this_00;
  RepeatedPtrField<google::protobuf::EnumValue> *this_01;
  SourceContext *this_02;
  
  this->_padding_ = (longlong)vftable;
  if ((this->_padding_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  internal::ArenaStringPtr::Destroy(&(this->_impl_).name_);
  internal::ArenaStringPtr::Destroy(&(this->_impl_).edition_);
  this_02 = (this->_impl_).source_context_;
  if (this_02 != (SourceContext *)0x0) {
    SourceContext::~SourceContext(this_02);
    ::operator_delete(this_02,0x20);
  }
  this_00 = &(this->_impl_).options_;
  if (*(longlong *)&this_00->field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)this_00);
  }
  this_01 = &(this->_impl_).enumvalue_;
  if (*(longlong *)&this_01->field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)this_01);
  }
  return;
}

// ~EnumDefaultTypeInternal @ 14fb76490

/* public: __cdecl google::protobuf::EnumDefaultTypeInternal::~EnumDefaultTypeInternal(void) __ptr64
    */

void __thiscall
google::protobuf::EnumDefaultTypeInternal::~EnumDefaultTypeInternal(EnumDefaultTypeInternal *this)

{
  return;
}

// ~EnumValue @ 14fb764a0

/* public: virtual __cdecl google::protobuf::EnumValue::~EnumValue(void) __ptr64 */

void __thiscall google::protobuf::EnumValue::~EnumValue(EnumValue *this)

{
  RepeatedPtrField<google::protobuf::Option> *this_00;
  
  this->_padding_ = (longlong)vftable;
  if ((this->_padding_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  internal::ArenaStringPtr::Destroy(&(this->_impl_).name_);
  this_00 = &(this->_impl_).options_;
  if (*(longlong *)&this_00->field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)this_00);
  }
  return;
}

// ~EnumValueDefaultTypeInternal @ 14fb764f0

/* public: __cdecl
   google::protobuf::EnumValueDefaultTypeInternal::~EnumValueDefaultTypeInternal(void) __ptr64 */

void __thiscall
google::protobuf::EnumValueDefaultTypeInternal::~EnumValueDefaultTypeInternal
          (EnumValueDefaultTypeInternal *this)

{
  return;
}

// ~Field @ 14fb76500

/* public: virtual __cdecl google::protobuf::Field::~Field(void) __ptr64 */

void __thiscall google::protobuf::Field::~Field(Field *this)

{
  RepeatedPtrField<google::protobuf::Option> *this_00;
  
  this->_padding_ = (longlong)vftable;
  if ((this->_padding_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  internal::ArenaStringPtr::Destroy(&(this->_impl_).name_);
  internal::ArenaStringPtr::Destroy(&(this->_impl_).type_url_);
  internal::ArenaStringPtr::Destroy(&(this->_impl_).json_name_);
  internal::ArenaStringPtr::Destroy(&(this->_impl_).default_value_);
  this_00 = &(this->_impl_).options_;
  if (*(longlong *)&this_00->field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)this_00);
  }
  return;
}

// ~FieldDefaultTypeInternal @ 14fb76570

/* public: __cdecl google::protobuf::FieldDefaultTypeInternal::~FieldDefaultTypeInternal(void)
   __ptr64 */

void __thiscall
google::protobuf::FieldDefaultTypeInternal::~FieldDefaultTypeInternal
          (FieldDefaultTypeInternal *this)

{
  return;
}

// ~Impl_ @ 14fb76580

/* public: __cdecl google::protobuf::Enum::Impl_::~Impl_(void) __ptr64 */

void __thiscall google::protobuf::Enum::Impl_::~Impl_(Impl_ *this)

{
  if (*(longlong *)&(this->options_).field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)&this->options_);
  }
  if (*(longlong *)&(this->enumvalue_).field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)&this->enumvalue_);
  }
  return;
}

// ~Impl_ @ 14fb765c0

/* public: __cdecl google::protobuf::EnumValue::Impl_::~Impl_(void) __ptr64 */

void __thiscall google::protobuf::EnumValue::Impl_::~Impl_(Impl_ *this)

{
  if (*(longlong *)&(this->options_).field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)&this->options_);
  }
  return;
}

// ~Impl_ @ 14fb765e0

/* public: __cdecl google::protobuf::Field::Impl_::~Impl_(void) __ptr64 */

void __thiscall google::protobuf::Field::Impl_::~Impl_(Impl_ *this)

{
  if (*(longlong *)&(this->options_).field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)&this->options_);
  }
  return;
}

// ~Impl_ @ 14fb76600

/* public: __cdecl google::protobuf::Type::Impl_::~Impl_(void) __ptr64 */

void __thiscall google::protobuf::Type::Impl_::~Impl_(Impl_ *this)

{
  if (*(longlong *)&(this->options_).field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)&this->options_);
  }
  RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
  ~RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            (&this->oneofs_);
  if (*(longlong *)&(this->fields_).field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)&this->fields_);
  }
  return;
}

// ~Option @ 14fb76640

/* public: virtual __cdecl google::protobuf::Option::~Option(void) __ptr64 */

void __thiscall google::protobuf::Option::~Option(Option *this)

{
  Any *this_00;
  
  this->_padding_ = (longlong)vftable;
  if ((this->_padding_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  internal::ArenaStringPtr::Destroy(&(this->_impl_).name_);
  this_00 = (this->_impl_).value_;
  if (this_00 != (Any *)0x0) {
    Any::~Any(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// ~OptionDefaultTypeInternal @ 14fb766a0

/* public: __cdecl google::protobuf::OptionDefaultTypeInternal::~OptionDefaultTypeInternal(void)
   __ptr64 */

void __thiscall
google::protobuf::OptionDefaultTypeInternal::~OptionDefaultTypeInternal
          (OptionDefaultTypeInternal *this)

{
  return;
}

// ~Type @ 14fb766b0

/* public: virtual __cdecl google::protobuf::Type::~Type(void) __ptr64 */

void __thiscall google::protobuf::Type::~Type(Type *this)

{
  RepeatedPtrField<google::protobuf::Option> *this_00;
  RepeatedPtrField<google::protobuf::Field> *this_01;
  SourceContext *this_02;
  
  this->_padding_ = (longlong)vftable;
  if ((this->_padding_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  internal::ArenaStringPtr::Destroy(&(this->_impl_).name_);
  internal::ArenaStringPtr::Destroy(&(this->_impl_).edition_);
  this_02 = (this->_impl_).source_context_;
  if (this_02 != (SourceContext *)0x0) {
    SourceContext::~SourceContext(this_02);
    ::operator_delete(this_02,0x20);
  }
  this_00 = &(this->_impl_).options_;
  if (*(longlong *)&this_00->field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)this_00);
  }
  RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
  ~RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            (&(this->_impl_).oneofs_);
  this_01 = &(this->_impl_).fields_;
  if (*(longlong *)&this_01->field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)this_01);
  }
  return;
}

// ~TypeDefaultTypeInternal @ 14fb76740

/* public: __cdecl google::protobuf::TypeDefaultTypeInternal::~TypeDefaultTypeInternal(void) __ptr64
    */

void __thiscall
google::protobuf::TypeDefaultTypeInternal::~TypeDefaultTypeInternal(TypeDefaultTypeInternal *this)

{
  return;
}

// operator!= @ 14fb76750

/* bool __cdecl google::protobuf::internal::operator!=(class
   google::protobuf::internal::RepeatedPtrIterator<class google::protobuf::Field const > const &
   __ptr64,class google::protobuf::internal::RepeatedPtrIterator<class google::protobuf::Field const
   > const & __ptr64) */

bool __cdecl
google::protobuf::internal::operator!=
          (RepeatedPtrIterator<google::protobuf::Field_const_> *param_1,
          RepeatedPtrIterator<google::protobuf::Field_const_> *param_2)

{
  return *(longlong *)param_1 != *(longlong *)param_2;
}

// operator* @ 14fb76760

/* public: class google::protobuf::Field const & __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrIterator<class google::protobuf::Field const
   >::operator*(void)const __ptr64 */

Field * __thiscall
google::protobuf::internal::RepeatedPtrIterator<google::protobuf::Field_const_>::operator*
          (RepeatedPtrIterator<google::protobuf::Field_const_> *this)

{
  return (Field *)**(undefined8 **)this;
}

// operator++ @ 14fb76770

/* public: class google::protobuf::internal::RepeatedPtrIterator<class google::protobuf::Field const
   > & __ptr64 __cdecl google::protobuf::internal::RepeatedPtrIterator<class google::protobuf::Field
   const >::operator++(void) __ptr64 */

RepeatedPtrIterator<class_google::protobuf::Field_const_> * __thiscall
google::protobuf::internal::RepeatedPtrIterator<google::protobuf::Field_const_>::operator++
          (RepeatedPtrIterator<google::protobuf::Field_const_> *this)

{
  *(longlong *)this = *(longlong *)this + 8;
  return (RepeatedPtrIterator<class_google::protobuf::Field_const_> *)this;
}

// `scalar_deleting_destructor' @ 14fb76780

/* public: void * __ptr64 __cdecl google::protobuf::Enum::Impl_::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::Enum::Impl_::_scalar_deleting_destructor_(Impl_ *this,uint param_1)

{
  if (*(longlong *)&(this->options_).field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)&this->options_);
  }
  if (*(longlong *)&(this->enumvalue_).field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)&this->enumvalue_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14fb767e0

/* public: void * __ptr64 __cdecl google::protobuf::EnumValue::Impl_::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::EnumValue::Impl_::_scalar_deleting_destructor_(Impl_ *this,uint param_1)

{
  if (*(longlong *)&(this->options_).field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)&this->options_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14fb76830

/* public: void * __ptr64 __cdecl google::protobuf::Field::Impl_::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::Field::Impl_::_scalar_deleting_destructor_(Impl_ *this,uint param_1)

{
  if (*(longlong *)&(this->options_).field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)&this->options_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14fb76880

/* public: void * __ptr64 __cdecl google::protobuf::Type::Impl_::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
google::protobuf::Type::Impl_::_scalar_deleting_destructor_(Impl_ *this,uint param_1)

{
  if (*(longlong *)&(this->options_).field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)&this->options_);
  }
  RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
  ~RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            (&this->oneofs_);
  if (*(longlong *)&(this->fields_).field_0x0 != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)&this->fields_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// Clear @ 14fb768e0

/* public: void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::EnumValue>::Clear(void) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::EnumValue>::Clear
          (RepeatedPtrField<google::protobuf::EnumValue> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)&this->field_0x8 < 1) {
    return;
  }
  puVar1 = &this->field_0x8;
  if ((*(ulonglong *)this & 1) != 0) {
    this = (RepeatedPtrField<google::protobuf::EnumValue> *)(*(ulonglong *)this + 7);
  }
  iVar3 = *(int *)puVar1;
  lVar4 = 0;
  do {
    lVar2 = lVar4 * 8;
    lVar4 = lVar4 + 1;
    (**(code **)(**(longlong **)(&this->field_0x0 + lVar2) + 8))();
  } while (lVar4 < iVar3);
  *(undefined4 *)puVar1 = 0;
  return;
}

// Clear @ 14fb76900

/* public: void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Field>::Clear(void) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Field>::Clear
          (RepeatedPtrField<google::protobuf::Field> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)&this->field_0x8 < 1) {
    return;
  }
  puVar1 = &this->field_0x8;
  if ((*(ulonglong *)this & 1) != 0) {
    this = (RepeatedPtrField<google::protobuf::Field> *)(*(ulonglong *)this + 7);
  }
  iVar3 = *(int *)puVar1;
  lVar4 = 0;
  do {
    lVar2 = lVar4 * 8;
    lVar4 = lVar4 + 1;
    (**(code **)(**(longlong **)(&this->field_0x0 + lVar2) + 8))();
  } while (lVar4 < iVar3);
  *(undefined4 *)puVar1 = 0;
  return;
}

// Clear @ 14fb76920

/* public: void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Option>::Clear(void) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Option>::Clear
          (RepeatedPtrField<google::protobuf::Option> *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)&this->field_0x8 < 1) {
    return;
  }
  puVar1 = &this->field_0x8;
  if ((*(ulonglong *)this & 1) != 0) {
    this = (RepeatedPtrField<google::protobuf::Option> *)(*(ulonglong *)this + 7);
  }
  iVar3 = *(int *)puVar1;
  lVar4 = 0;
  do {
    lVar2 = lVar4 * 8;
    lVar4 = lVar4 + 1;
    (**(code **)(**(longlong **)(&this->field_0x0 + lVar2) + 8))();
  } while (lVar4 < iVar3);
  *(undefined4 *)puVar1 = 0;
  return;
}

// CopyFrom @ 14fb76940

/* public: void __cdecl google::protobuf::Enum::CopyFrom(class google::protobuf::Enum const &
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Enum::CopyFrom(Enum *this,Enum *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14fb76980

/* public: void __cdecl google::protobuf::EnumValue::CopyFrom(class google::protobuf::EnumValue
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::EnumValue::CopyFrom(EnumValue *this,EnumValue *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14fb769c0

/* public: void __cdecl google::protobuf::Field::CopyFrom(class google::protobuf::Field const &
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Field::CopyFrom(Field *this,Field *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14fb76a00

/* public: void __cdecl google::protobuf::Option::CopyFrom(class google::protobuf::Option const &
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Option::CopyFrom(Option *this,Option *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14fb76a40

/* public: void __cdecl google::protobuf::Type::CopyFrom(class google::protobuf::Type const &
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Type::CopyFrom(Type *this,Type *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// Field_Cardinality_descriptor @ 14fb76a80

/* class google::protobuf::EnumDescriptor const * __ptr64 __cdecl
   google::protobuf::Field_Cardinality_descriptor(void) */

EnumDescriptor * __cdecl google::protobuf::Field_Cardinality_descriptor(void)

{
  internal::AssignDescriptors((DescriptorTable *)&descriptor_table_google_2fprotobuf_2ftype_2eproto)
  ;
  return DAT_1553e5798;
}

// Field_Kind_descriptor @ 14fb76ab0

/* class google::protobuf::EnumDescriptor const * __ptr64 __cdecl
   google::protobuf::Field_Kind_descriptor(void) */

EnumDescriptor * __cdecl google::protobuf::Field_Kind_descriptor(void)

{
  internal::AssignDescriptors((DescriptorTable *)&descriptor_table_google_2fprotobuf_2ftype_2eproto)
  ;
  return DAT_1553e5790;
}

// Get @ 14fb76ae0

/* public: class google::protobuf::Field const & __ptr64 __cdecl
   google::protobuf::RepeatedPtrField<class google::protobuf::Field>::Get(int)const __ptr64 */

Field * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Field>::Get
          (RepeatedPtrField<google::protobuf::Field> *this,int param_1)

{
  Field *pFVar1;
  
  pFVar1 = *(Field **)this;
  if ((~*(byte *)this & 1) == 0) {
    pFVar1 = *(Field **)
              ((longlong)(&(pFVar1->_impl_)._has_bits_)[(longlong)param_1 * 2 + -3].has_bits_ + 3);
  }
  return pFVar1;
}

// Get @ 14fb76b00

/* public: class google::protobuf::Option const & __ptr64 __cdecl
   google::protobuf::RepeatedPtrField<class google::protobuf::Option>::Get(int)const __ptr64 */

Option * __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Option>::Get
          (RepeatedPtrField<google::protobuf::Option> *this,int param_1)

{
  Option *pOVar1;
  
  pOVar1 = *(Option **)this;
  if ((~*(byte *)this & 1) == 0) {
    pOVar1 = *(Option **)
              ((longlong)(&(pOVar1->_impl_)._has_bits_)[(longlong)param_1 * 2 + -3].has_bits_ + 3);
  }
  return pOVar1;
}

// GetCachedSize @ 14fb76b20

/* public: int __cdecl google::protobuf::Any::GetCachedSize(void)const __ptr64 */

int __thiscall google::protobuf::Any::GetCachedSize(Any *this)

{
  return (int)(this->_impl_)._cached_size_.atom_;
}

// GetCachedSize @ 14fb76b30

/* public: int __cdecl google::protobuf::EnumValue::GetCachedSize(void)const __ptr64 */

int __thiscall google::protobuf::EnumValue::GetCachedSize(EnumValue *this)

{
  return (int)(this->_impl_)._cached_size_.atom_;
}

// GetCachedSize @ 14fb76b40

/* public: int __cdecl google::protobuf::Field::GetCachedSize(void)const __ptr64 */

int __thiscall google::protobuf::Field::GetCachedSize(Field *this)

{
  return (int)(this->_impl_)._cached_size_.atom_;
}

// GetCachedSize @ 14fb76b50

/* public: int __cdecl google::protobuf::Option::GetCachedSize(void)const __ptr64 */

int __thiscall google::protobuf::Option::GetCachedSize(Option *this)

{
  return (int)(this->_impl_)._cached_size_.atom_;
}

// GetCachedSize @ 14fb76b60

/* public: int __cdecl google::protobuf::SourceContext::GetCachedSize(void)const __ptr64 */

int __thiscall google::protobuf::SourceContext::GetCachedSize(SourceContext *this)

{
  return (int)(this->_impl_)._cached_size_.atom_;
}

// GetMetadata @ 14fb76b70

/* public: struct google::protobuf::Metadata __cdecl google::protobuf::Enum::GetMetadata(void)const
   __ptr64 */

Metadata * __thiscall
google::protobuf::Enum::GetMetadata(Enum *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadataImpl(&local_18,(ClassDataFull *)&Enum_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14fb76bb0

/* public: struct google::protobuf::Metadata __cdecl
   google::protobuf::EnumValue::GetMetadata(void)const __ptr64 */

Metadata * __thiscall
google::protobuf::EnumValue::GetMetadata(EnumValue *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadataImpl(&local_18,(ClassDataFull *)&EnumValue_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14fb76bf0

/* public: struct google::protobuf::Metadata __cdecl google::protobuf::Field::GetMetadata(void)const
   __ptr64 */

Metadata * __thiscall
google::protobuf::Field::GetMetadata(Field *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadataImpl(&local_18,(ClassDataFull *)&Field_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14fb76c30

/* public: struct google::protobuf::Metadata __cdecl
   google::protobuf::Option::GetMetadata(void)const __ptr64 */

Metadata * __thiscall
google::protobuf::Option::GetMetadata(Option *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadataImpl(&local_18,(ClassDataFull *)&Option_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14fb76c70

/* public: struct google::protobuf::Metadata __cdecl google::protobuf::Type::GetMetadata(void)const
   __ptr64 */

Metadata * __thiscall
google::protobuf::Type::GetMetadata(Type *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = protobuf::Message::GetMetadataImpl(&local_18,(ClassDataFull *)&Type_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14fb76cb0

/* public: void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::EnumValue>::InternalSwap(class google::protobuf::RepeatedPtrField<class
   google::protobuf::EnumValue> * __ptr64) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::EnumValue>::InternalSwap
          (RepeatedPtrField<google::protobuf::EnumValue> *this,
          RepeatedPtrField<class_google::protobuf::EnumValue> *param_1)

{
  internal::memswap<16>((char *)this,(char *)param_1);
  return;
}

// InternalSwap @ 14fb76cc0

/* public: void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Field>::InternalSwap(class google::protobuf::RepeatedPtrField<class
   google::protobuf::Field> * __ptr64) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Field>::InternalSwap
          (RepeatedPtrField<google::protobuf::Field> *this,
          RepeatedPtrField<class_google::protobuf::Field> *param_1)

{
  internal::memswap<16>((char *)this,(char *)param_1);
  return;
}

// InternalSwap @ 14fb76cd0

/* public: void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Option>::InternalSwap(class google::protobuf::RepeatedPtrField<class
   google::protobuf::Option> * __ptr64) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Option>::InternalSwap
          (RepeatedPtrField<google::protobuf::Option> *this,
          RepeatedPtrField<class_google::protobuf::Option> *param_1)

{
  internal::memswap<16>((char *)this,(char *)param_1);
  return;
}

// InternalSwap @ 14fb76ce0

/* private: void __cdecl google::protobuf::Enum::InternalSwap(class google::protobuf::Enum *
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Enum::InternalSwap(Enum *this,Enum *param_1)

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
  internal::memswap<16>((char *)&(this->_impl_).enumvalue_,(char *)&(param_1->_impl_).enumvalue_);
  internal::memswap<16>((char *)&(this->_impl_).options_,(char *)&(param_1->_impl_).options_);
  pvVar3 = (param_1->_impl_).name_.tagged_ptr_.ptr_;
  (param_1->_impl_).name_.tagged_ptr_.ptr_ = (this->_impl_).name_.tagged_ptr_.ptr_;
  (this->_impl_).name_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).edition_.tagged_ptr_.ptr_;
  (param_1->_impl_).edition_.tagged_ptr_.ptr_ = (this->_impl_).edition_.tagged_ptr_.ptr_;
  (this->_impl_).edition_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).source_context_,&(this->_impl_).field_0x54,
             &(param_1->_impl_).source_context_);
  return;
}

// InternalSwap @ 14fb76d70

/* private: void __cdecl google::protobuf::EnumValue::InternalSwap(class google::protobuf::EnumValue
   * __ptr64) __ptr64 */

void __thiscall google::protobuf::EnumValue::InternalSwap(EnumValue *this,EnumValue *param_1)

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
  internal::memswap<16>((char *)&(this->_impl_).options_,(char *)&(param_1->_impl_).options_);
  pvVar4 = (param_1->_impl_).name_.tagged_ptr_.ptr_;
  (param_1->_impl_).name_.tagged_ptr_.ptr_ = (this->_impl_).name_.tagged_ptr_.ptr_;
  (this->_impl_).name_.tagged_ptr_.ptr_ = pvVar4;
  iVar2 = (this->_impl_).number_;
  (this->_impl_).number_ = (param_1->_impl_).number_;
  (param_1->_impl_).number_ = iVar2;
  return;
}

// InternalSwap @ 14fb76de0

/* private: void __cdecl google::protobuf::Field::InternalSwap(class google::protobuf::Field *
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Field::InternalSwap(Field *this,Field *param_1)

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
  internal::memswap<16>((char *)&(this->_impl_).options_,(char *)&(param_1->_impl_).options_);
  pvVar3 = (param_1->_impl_).name_.tagged_ptr_.ptr_;
  (param_1->_impl_).name_.tagged_ptr_.ptr_ = (this->_impl_).name_.tagged_ptr_.ptr_;
  (this->_impl_).name_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).type_url_.tagged_ptr_.ptr_;
  (param_1->_impl_).type_url_.tagged_ptr_.ptr_ = (this->_impl_).type_url_.tagged_ptr_.ptr_;
  (this->_impl_).type_url_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).json_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).json_name_.tagged_ptr_.ptr_ = (this->_impl_).json_name_.tagged_ptr_.ptr_;
  (this->_impl_).json_name_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).default_value_.tagged_ptr_.ptr_;
  (param_1->_impl_).default_value_.tagged_ptr_.ptr_ = (this->_impl_).default_value_.tagged_ptr_.ptr_
  ;
  (this->_impl_).default_value_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).kind_,&(this->_impl_).field_0x51,&(param_1->_impl_).kind_);
  return;
}

// InternalSwap @ 14fb76e80

/* private: void __cdecl google::protobuf::Option::InternalSwap(class google::protobuf::Option *
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Option::InternalSwap(Option *this,Option *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  Any *pAVar4;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pvVar3 = (param_1->_impl_).name_.tagged_ptr_.ptr_;
  (param_1->_impl_).name_.tagged_ptr_.ptr_ = (this->_impl_).name_.tagged_ptr_.ptr_;
  (this->_impl_).name_.tagged_ptr_.ptr_ = pvVar3;
  pAVar4 = (this->_impl_).value_;
  (this->_impl_).value_ = (param_1->_impl_).value_;
  (param_1->_impl_).value_ = pAVar4;
  return;
}

// InternalSwap @ 14fb76ed0

/* private: void __cdecl google::protobuf::Type::InternalSwap(class google::protobuf::Type *
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Type::InternalSwap(Type *this,Type *param_1)

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
  internal::memswap<16>((char *)&(this->_impl_).fields_,(char *)&(param_1->_impl_).fields_);
  internal::memswap<16>((char *)&(this->_impl_).oneofs_,(char *)&(param_1->_impl_).oneofs_);
  internal::memswap<16>((char *)&(this->_impl_).options_,(char *)&(param_1->_impl_).options_);
  pvVar3 = (param_1->_impl_).name_.tagged_ptr_.ptr_;
  (param_1->_impl_).name_.tagged_ptr_.ptr_ = (this->_impl_).name_.tagged_ptr_.ptr_;
  (this->_impl_).name_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).edition_.tagged_ptr_.ptr_;
  (param_1->_impl_).edition_.tagged_ptr_.ptr_ = (this->_impl_).edition_.tagged_ptr_.ptr_;
  (this->_impl_).edition_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).source_context_,&(this->_impl_).field_0x6c,
             &(param_1->_impl_).source_context_);
  return;
}

// MergeFrom @ 14fb76f70

/* public: void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::EnumValue>::MergeFrom(class google::protobuf::RepeatedPtrField<class
   google::protobuf::EnumValue> const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::EnumValue>::MergeFrom
          (RepeatedPtrField<google::protobuf::EnumValue> *this,
          RepeatedPtrField<class_google::protobuf::EnumValue> *param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this,(RepeatedPtrFieldBase *)param_1,
               Arena::CopyConstruct<google::protobuf::EnumValue>);
    return;
  }
  return;
}

// MergeFrom @ 14fb76f90

/* public: void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Field>::MergeFrom(class google::protobuf::RepeatedPtrField<class
   google::protobuf::Field> const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Field>::MergeFrom
          (RepeatedPtrField<google::protobuf::Field> *this,
          RepeatedPtrField<class_google::protobuf::Field> *param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this,(RepeatedPtrFieldBase *)param_1,
               Arena::CopyConstruct<google::protobuf::Field>);
    return;
  }
  return;
}

// MergeFrom @ 14fb76fb0

/* public: void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Option>::MergeFrom(class google::protobuf::RepeatedPtrField<class
   google::protobuf::Option> const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Option>::MergeFrom
          (RepeatedPtrField<google::protobuf::Option> *this,
          RepeatedPtrField<class_google::protobuf::Option> *param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this,(RepeatedPtrFieldBase *)param_1,
               Arena::CopyConstruct<google::protobuf::Option>);
    return;
  }
  return;
}

// MergeFrom @ 14fb76fd0

/* public: void __cdecl google::protobuf::Enum::MergeFrom(class google::protobuf::Enum const &
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Enum::MergeFrom(Enum *this,Enum *param_1)

{
  MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  return;
}

// MergeFrom @ 14fb76fe0

/* public: void __cdecl google::protobuf::EnumValue::MergeFrom(class google::protobuf::EnumValue
   const & __ptr64) __ptr64 */

void __thiscall google::protobuf::EnumValue::MergeFrom(EnumValue *this,EnumValue *param_1)

{
  MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  return;
}

// MergeFrom @ 14fb76ff0

/* public: void __cdecl google::protobuf::Field::MergeFrom(class google::protobuf::Field const &
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Field::MergeFrom(Field *this,Field *param_1)

{
  MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  return;
}

// MergeFrom @ 14fb77000

/* public: void __cdecl google::protobuf::Option::MergeFrom(class google::protobuf::Option const &
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Option::MergeFrom(Option *this,Option *param_1)

{
  MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  return;
}

// MergeFrom @ 14fb77010

/* public: void __cdecl google::protobuf::Type::MergeFrom(class google::protobuf::Type const &
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Type::MergeFrom(Type *this,Type *param_1)

{
  MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  return;
}

// SharedCtor @ 14fb77020

/* private: void __cdecl google::protobuf::Enum::SharedCtor(class google::protobuf::Arena * __ptr64)
   __ptr64 */

void __thiscall google::protobuf::Enum::SharedCtor(Enum *this,Arena *param_1)

{
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->_impl_).enumvalue_ = 0;
  *(undefined8 *)&(this->_impl_).enumvalue_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).enumvalue_.field_0x10 = param_1;
  *(undefined8 *)&(this->_impl_).options_ = 0;
  *(undefined8 *)&(this->_impl_).options_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).options_.field_0x10 = param_1;
  (this->_impl_).name_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).edition_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).source_context_ = (SourceContext *)0x0;
  (this->_impl_).syntax_ = 0;
  return;
}

// SharedCtor @ 14fb77070

/* private: void __cdecl google::protobuf::EnumValue::SharedCtor(class google::protobuf::Arena *
   __ptr64) __ptr64 */

void __thiscall google::protobuf::EnumValue::SharedCtor(EnumValue *this,Arena *param_1)

{
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->_impl_).options_ = 0;
  *(undefined8 *)&(this->_impl_).options_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).options_.field_0x10 = param_1;
  (this->_impl_).name_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).number_ = 0;
  return;
}

// SharedCtor @ 14fb770b0

/* private: void __cdecl google::protobuf::Field::SharedCtor(class google::protobuf::Arena *
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Field::SharedCtor(Field *this,Arena *param_1)

{
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->_impl_).options_ = 0;
  *(undefined8 *)&(this->_impl_).options_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).options_.field_0x10 = param_1;
  (this->_impl_).name_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).type_url_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).json_name_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).default_value_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).kind_ = 0;
  (this->_impl_).cardinality_ = 0;
  (this->_impl_).number_ = 0;
  (this->_impl_).oneof_index_ = 0;
  (this->_impl_).packed_ = false;
  return;
}

// SharedCtor @ 14fb77100

/* private: void __cdecl google::protobuf::Option::SharedCtor(class google::protobuf::Arena *
   __ptr64) __ptr64 */

void __thiscall google::protobuf::Option::SharedCtor(Option *this,Arena *param_1)

{
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).name_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).value_ = (Any *)0x0;
  return;
}

// SharedCtor @ 14fb77120

/* private: void __cdecl google::protobuf::Type::SharedCtor(class google::protobuf::Arena * __ptr64)
   __ptr64 */

void __thiscall google::protobuf::Type::SharedCtor(Type *this,Arena *param_1)

{
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->_impl_).fields_ = 0;
  *(undefined8 *)&(this->_impl_).fields_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).fields_.field_0x10 = param_1;
  *(undefined8 *)&(this->_impl_).oneofs_ = 0;
  *(undefined8 *)&(this->_impl_).oneofs_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).oneofs_.field_0x10 = param_1;
  *(undefined8 *)&(this->_impl_).options_ = 0;
  *(undefined8 *)&(this->_impl_).options_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).options_.field_0x10 = param_1;
  (this->_impl_).name_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).edition_.tagged_ptr_.ptr_ = &internal::fixed_address_empty_string;
  (this->_impl_).source_context_ = (SourceContext *)0x0;
  (this->_impl_).syntax_ = 0;
  return;
}

// SharedDtor @ 14fb77180

/* private: static void __cdecl google::protobuf::Enum::SharedDtor(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::Enum::SharedDtor(MessageLite *param_1)

{
  SourceContext *this;
  
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_);
  }
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)&param_1[4]._internal_metadata_);
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)(param_1 + 5));
  this = (SourceContext *)param_1[5]._internal_metadata_.ptr_;
  if (this != (SourceContext *)0x0) {
    SourceContext::~SourceContext(this);
    ::operator_delete(this,0x20);
  }
  if (((RepeatedPtrFieldBase *)(param_1 + 3))->tagged_rep_or_elem_ != (void *)0x0) {
    internal::RepeatedPtrFieldBase::DestroyProtos((RepeatedPtrFieldBase *)(param_1 + 3));
  }
  if (param_1[1]._internal_metadata_.ptr_ != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&param_1[1]._internal_metadata_);
  }
  return;
}

// SharedDtor @ 14fb77200

/* private: static void __cdecl google::protobuf::EnumValue::SharedDtor(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::EnumValue::SharedDtor(MessageLite *param_1)

{
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_);
  }
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)(param_1 + 3));
  if (param_1[1]._internal_metadata_.ptr_ != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&param_1[1]._internal_metadata_);
  }
  return;
}

// SharedDtor @ 14fb77240

/* private: static void __cdecl google::protobuf::Field::SharedDtor(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::Field::SharedDtor(MessageLite *param_1)

{
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_);
  }
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)(param_1 + 3));
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)&param_1[3]._internal_metadata_);
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)(param_1 + 4));
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)&param_1[4]._internal_metadata_);
  if (param_1[1]._internal_metadata_.ptr_ != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&param_1[1]._internal_metadata_);
  }
  return;
}

// SharedDtor @ 14fb772a0

/* private: static void __cdecl google::protobuf::Option::SharedDtor(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::Option::SharedDtor(MessageLite *param_1)

{
  Any *this;
  
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_);
  }
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)&param_1[1]._internal_metadata_);
  this = (Any *)param_1[2]._padding_;
  if (this != (Any *)0x0) {
    Any::~Any(this);
    ::operator_delete(this,0x28);
    return;
  }
  return;
}

// SharedDtor @ 14fb772f0

/* private: static void __cdecl google::protobuf::Type::SharedDtor(class
   google::protobuf::MessageLite & __ptr64) */

void __cdecl google::protobuf::Type::SharedDtor(MessageLite *param_1)

{
  SourceContext *this;
  
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    internal::InternalMetadata::DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_);
  }
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)(param_1 + 6));
  internal::ArenaStringPtr::Destroy((ArenaStringPtr *)&param_1[6]._internal_metadata_);
  this = (SourceContext *)param_1[7]._padding_;
  if (this != (SourceContext *)0x0) {
    SourceContext::~SourceContext(this);
    ::operator_delete(this,0x20);
  }
  if (param_1[4]._internal_metadata_.ptr_ != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&param_1[4]._internal_metadata_);
  }
  RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::
  ~RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            ((RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              *)(param_1 + 3));
  if (param_1[1]._internal_metadata_.ptr_ != 0) {
    internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&param_1[1]._internal_metadata_);
  }
  return;
}

// StaticValidityCheck @ 14fb77380

/* private: static void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::EnumValue>::StaticValidityCheck(void) */

void __cdecl
google::protobuf::RepeatedPtrField<google::protobuf::EnumValue>::StaticValidityCheck(void)

{
  return;
}

// StaticValidityCheck @ 14fb77390

/* private: static void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Field>::StaticValidityCheck(void) */

void __cdecl google::protobuf::RepeatedPtrField<google::protobuf::Field>::StaticValidityCheck(void)

{
  return;
}

// StaticValidityCheck @ 14fb773a0

/* private: static void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Option>::StaticValidityCheck(void) */

void __cdecl google::protobuf::RepeatedPtrField<google::protobuf::Option>::StaticValidityCheck(void)

{
  return;
}

// Syntax_descriptor @ 14fb773b0

/* class google::protobuf::EnumDescriptor const * __ptr64 __cdecl
   google::protobuf::Syntax_descriptor(void) */

EnumDescriptor * __cdecl google::protobuf::Syntax_descriptor(void)

{
  internal::AssignDescriptors((DescriptorTable *)&descriptor_table_google_2fprotobuf_2ftype_2eproto)
  ;
  return DAT_1553e57a0;
}

// _internal_edition @ 14fb773e0

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64 __cdecl google::protobuf::Enum::_internal_edition(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::Enum::_internal_edition(Enum *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
         ((ulonglong)(this->_impl_).edition_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
}

// _internal_edition @ 14fb773f0

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64 __cdecl google::protobuf::Type::_internal_edition(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::Type::_internal_edition(Type *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
         ((ulonglong)(this->_impl_).edition_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
}

// _internal_enumvalue_size @ 14fb77400

/* private: int __cdecl google::protobuf::Enum::_internal_enumvalue_size(void)const __ptr64 */

int __thiscall google::protobuf::Enum::_internal_enumvalue_size(Enum *this)

{
  return *(int *)&(this->_impl_).enumvalue_.field_0x8;
}

// _internal_name @ 14fb77410

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   const & __ptr64 __cdecl google::protobuf::Enum::_internal_name(void)const __ptr64 */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
google::protobuf::Enum::_internal_name(Enum *this)

{
  return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
         ((ulonglong)(this->_impl_).name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
}

// _internal_oneofs @ 14fb77420

/* private: class google::protobuf::RepeatedPtrField<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > > const & __ptr64 __cdecl
   google::protobuf::Type::_internal_oneofs(void)const __ptr64 */

RepeatedPtrField<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> * __thiscall
google::protobuf::Type::_internal_oneofs(Type *this)

{
  return &(this->_impl_).oneofs_;
}

// _internal_oneofs_size @ 14fb77430

/* private: int __cdecl google::protobuf::Type::_internal_oneofs_size(void)const __ptr64 */

int __thiscall google::protobuf::Type::_internal_oneofs_size(Type *this)

{
  return *(int *)&(this->_impl_).oneofs_.field_0x8;
}

// _internal_options @ 14fb77440

/* private: class google::protobuf::RepeatedPtrField<class google::protobuf::Option> const & __ptr64
   __cdecl google::protobuf::Enum::_internal_options(void)const __ptr64 */

RepeatedPtrField<google::protobuf::Option> * __thiscall
google::protobuf::Enum::_internal_options(Enum *this)

{
  return &(this->_impl_).options_;
}

// _internal_options @ 14fb77450

/* private: class google::protobuf::RepeatedPtrField<class google::protobuf::Option> const & __ptr64
   __cdecl google::protobuf::EnumValue::_internal_options(void)const __ptr64 */

RepeatedPtrField<google::protobuf::Option> * __thiscall
google::protobuf::EnumValue::_internal_options(EnumValue *this)

{
  return &(this->_impl_).options_;
}

// _internal_options @ 14fb77460

/* private: class google::protobuf::RepeatedPtrField<class google::protobuf::Option> const & __ptr64
   __cdecl google::protobuf::Field::_internal_options(void)const __ptr64 */

RepeatedPtrField<google::protobuf::Option> * __thiscall
google::protobuf::Field::_internal_options(Field *this)

{
  return &(this->_impl_).options_;
}

// _internal_options_size @ 14fb77470

/* private: int __cdecl google::protobuf::Enum::_internal_options_size(void)const __ptr64 */

int __thiscall google::protobuf::Enum::_internal_options_size(Enum *this)

{
  return *(int *)&(this->_impl_).options_.field_0x8;
}

// _internal_options_size @ 14fb77480

/* private: int __cdecl google::protobuf::EnumValue::_internal_options_size(void)const __ptr64 */

int __thiscall google::protobuf::EnumValue::_internal_options_size(EnumValue *this)

{
  return *(int *)&(this->_impl_).options_.field_0x8;
}

// _internal_options_size @ 14fb77490

/* private: int __cdecl google::protobuf::Field::_internal_options_size(void)const __ptr64 */

int __thiscall google::protobuf::Field::_internal_options_size(Field *this)

{
  return *(int *)&(this->_impl_).options_.field_0x8;
}

// _internal_options_size @ 14fb774a0

/* private: int __cdecl google::protobuf::Type::_internal_options_size(void)const __ptr64 */

int __thiscall google::protobuf::Type::_internal_options_size(Type *this)

{
  return *(int *)&(this->_impl_).options_.field_0x8;
}

// _internal_packed @ 14fb774b0

/* private: bool __cdecl google::protobuf::Field::_internal_packed(void)const __ptr64 */

bool __thiscall google::protobuf::Field::_internal_packed(Field *this)

{
  return (this->_impl_).packed_;
}

// _internal_set_default_value @ 14fb774c0

/* private: void __cdecl google::protobuf::Field::_internal_set_default_value(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::Field::_internal_set_default_value
          (Field *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 8;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set<>(&(this->_impl_).default_value_,param_1,pAVar1);
  return;
}

// _internal_set_edition @ 14fb774f0

/* private: void __cdecl google::protobuf::Enum::_internal_set_edition(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::Enum::_internal_set_edition
          (Enum *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 2;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set<>(&(this->_impl_).edition_,param_1,pAVar1);
  return;
}

// _internal_set_edition @ 14fb77520

/* private: void __cdecl google::protobuf::Type::_internal_set_edition(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::Type::_internal_set_edition
          (Type *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 2;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set<>(&(this->_impl_).edition_,param_1,pAVar1);
  return;
}

// _internal_set_json_name @ 14fb77550

/* private: void __cdecl google::protobuf::Field::_internal_set_json_name(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::Field::_internal_set_json_name
          (Field *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 4;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set<>(&(this->_impl_).json_name_,param_1,pAVar1);
  return;
}

// _internal_set_name @ 14fb77580

/* private: void __cdecl google::protobuf::Enum::_internal_set_name(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::Enum::_internal_set_name
          (Enum *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set<>(&(this->_impl_).name_,param_1,pAVar1);
  return;
}

// _internal_set_name @ 14fb775b0

/* private: void __cdecl google::protobuf::EnumValue::_internal_set_name(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::EnumValue::_internal_set_name
          (EnumValue *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set<>(&(this->_impl_).name_,param_1,pAVar1);
  return;
}

// _internal_set_name @ 14fb775e0

/* private: void __cdecl google::protobuf::Field::_internal_set_name(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::Field::_internal_set_name
          (Field *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set<>(&(this->_impl_).name_,param_1,pAVar1);
  return;
}

// _internal_set_name @ 14fb77610

/* private: void __cdecl google::protobuf::Option::_internal_set_name(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::Option::_internal_set_name
          (Option *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set<>(&(this->_impl_).name_,param_1,pAVar1);
  return;
}

// _internal_set_name @ 14fb77640

/* private: void __cdecl google::protobuf::Type::_internal_set_name(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::Type::_internal_set_name
          (Type *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 1;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set<>(&(this->_impl_).name_,param_1,pAVar1);
  return;
}

// _internal_set_type_url @ 14fb77670

/* private: void __cdecl google::protobuf::Field::_internal_set_type_url(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::Field::_internal_set_type_url
          (Field *this,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1)

{
  Arena *pAVar1;
  
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | 2;
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  internal::ArenaStringPtr::Set<>(&(this->_impl_).type_url_,param_1,pAVar1);
  return;
}

// begin @ 14fb776a0

/* public: class google::protobuf::internal::RepeatedPtrIterator<class google::protobuf::Field const
   > __cdecl google::protobuf::RepeatedPtrField<class google::protobuf::Field>::begin(void)const
   __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Field>::begin
          (RepeatedPtrField<google::protobuf::Field> *this)

{
  longlong *in_RDX;
  
  if ((~*(byte *)this & 1) != 0) {
    *in_RDX = (longlong)this;
    return;
  }
  *in_RDX = *(longlong *)this + 7;
  return;
}

// clear_source_context @ 14fb776d0

/* public: void __cdecl google::protobuf::Enum::clear_source_context(void) __ptr64 */

void __thiscall google::protobuf::Enum::clear_source_context(Enum *this)

{
  SourceContext *this_00;
  
  this_00 = (this->_impl_).source_context_;
  if (this_00 != (SourceContext *)0x0) {
    SourceContext::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffb;
  return;
}

// clear_source_context @ 14fb77700

/* public: void __cdecl google::protobuf::Type::clear_source_context(void) __ptr64 */

void __thiscall google::protobuf::Type::clear_source_context(Type *this)

{
  SourceContext *this_00;
  
  this_00 = (this->_impl_).source_context_;
  if (this_00 != (SourceContext *)0x0) {
    SourceContext::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffb;
  return;
}

// clear_value @ 14fb77730

/* public: void __cdecl google::protobuf::Option::clear_value(void) __ptr64 */

void __thiscall google::protobuf::Option::clear_value(Option *this)

{
  Any *this_00;
  
  this_00 = (this->_impl_).value_;
  if (this_00 != (Any *)0x0) {
    Any::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// empty @ 14fb77760

/* public: bool __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::EnumValue>::empty(void)const __ptr64 */

bool __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::EnumValue>::empty
          (RepeatedPtrField<google::protobuf::EnumValue> *this)

{
  return *(int *)&this->field_0x8 == 0;
}

// empty @ 14fb77770

/* public: bool __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Field>::empty(void)const __ptr64 */

bool __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Field>::empty
          (RepeatedPtrField<google::protobuf::Field> *this)

{
  return *(int *)&this->field_0x8 == 0;
}

// empty @ 14fb77780

/* public: bool __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::Option>::empty(void)const __ptr64 */

bool __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Option>::empty
          (RepeatedPtrField<google::protobuf::Option> *this)

{
  return *(int *)&this->field_0x8 == 0;
}

// end @ 14fb77790

/* public: class google::protobuf::internal::RepeatedPtrIterator<class google::protobuf::Field const
   > __cdecl google::protobuf::RepeatedPtrField<class google::protobuf::Field>::end(void)const
   __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::Field>::end
          (RepeatedPtrField<google::protobuf::Field> *this)

{
  longlong *in_RDX;
  
  if ((~*(byte *)this & 1) != 0) {
    *in_RDX = (longlong)(&this->field_0x0 + (longlong)*(int *)&this->field_0x8 * 8);
    return;
  }
  *in_RDX = *(longlong *)this + 7 + (longlong)*(int *)&this->field_0x8 * 8;
  return;
}

// FUN_1504746a0 @ 1504746a0

void FUN_1504746a0(void)

{
  return;
}

// FUN_1504746b0 @ 1504746b0

void FUN_1504746b0(void)

{
  return;
}

// FUN_1504746c0 @ 1504746c0

void FUN_1504746c0(void)

{
  return;
}

// FUN_1504746d0 @ 1504746d0

void FUN_1504746d0(void)

{
  return;
}

// FUN_1504746e0 @ 1504746e0

void FUN_1504746e0(void)

{
  return;
}


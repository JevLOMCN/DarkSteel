// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// `dynamic_initializer_for_'_SqlGAccountTable_default_instance_'' @ 14129ae50

void __cdecl ds_account::_dynamic_initializer_for___SqlGAccountTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlGAccountTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129ae70

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5faccount_2fsql_5fg_5faccount_5ftable_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c241420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ds_account::SqlGAccountTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  MessageLite *pMVar3;
  MessageLite *pMVar4;
  byte bVar5;
  void *pvVar6;
  undefined8 uVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  ulong64 uVar9;
  Arena *pAVar10;
  Arena *pAVar11;
  undefined1 auStackY_78 [32];
  _Bxty local_40;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  pAVar11 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar5 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar10 = pAVar11;
  if (bVar5 != 0) {
    pAVar10 = (Arena *)(pAVar11->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar8->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          local_40._8_8_ = 0;
          local_40._Ptr = (char *)0x0;
          local_30 = ___xmm_000000000000000f0000000000000000;
          uStack_28 = _UNK_15076add8;
          if (bVar5 != 0) {
            pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
                     pAVar11);
          if (0xf < uStack_28) {
            uVar9 = uStack_28 + 1;
            uVar7 = local_40._Ptr;
            if (0xfff < uVar9) {
              uVar7 = *(undefined8 *)(local_40._Ptr + -8);
              uVar9 = uStack_28 + 0x28;
              if ((char *)0x1f < local_40._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar7,uVar9);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        if (bVar5 != 0) {
          pAVar11 = (Arena *)(pAVar11->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar8,pAVar11);
      }
    }
    if ((uVar1 & 2) != 0) {
      if ((MessageLite *)param_1[2]._padding_ == (MessageLite *)0x0) {
        pvVar6 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                           (pAVar10,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar6;
      }
      else {
        google::protobuf::Timestamp::MergeImpl
                  ((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
      }
    }
    if ((uVar1 & 4) != 0) {
      pMVar3 = (MessageLite *)param_1[2]._internal_metadata_.ptr_;
      pMVar4 = (MessageLite *)param_2[2]._internal_metadata_.ptr_;
      if (pMVar3 == (MessageLite *)0x0) {
        pvVar6 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>(pAVar10,pMVar4)
        ;
        param_1[2]._internal_metadata_.ptr_ = (long64)pvVar6;
      }
      else {
        google::protobuf::Timestamp::MergeImpl(pMVar3,pMVar4);
      }
    }
    if (((uVar1 & 8) != 0) && (param_2[3]._padding_ != 0)) {
      param_1[3]._padding_ = param_2[3]._padding_;
    }
    if (((uVar1 & 0x10) != 0) && (iVar2 = (int)param_2[3]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[3]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 & 0x20) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[3]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[3]._internal_metadata_.ptr_ + 4) = iVar2;
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

// Clear @ 14c241600

void __thiscall ds_account::SqlGAccountTable::Clear(SqlGAccountTable *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).wn_pid_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).reg_time_);
    }
    if ((uVar1 & 4) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).update_time_);
    }
  }
  if ((uVar1 & 0x38) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).server_id_ = 0;
    (this->_impl_).authority_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c241690

ulong64 __thiscall ds_account::SqlGAccountTable::ByteSizeLong(SqlGAccountTable *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  __uint64 _Var4;
  ulonglong uVar5;
  ulong64 uVar6;
  int iVar7;
  __uint64 _Var8;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var8 = 0;
  if ((uVar1 & 0x3f) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).wn_pid_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
       lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar7 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar7 = 0x1f - iVar7;
      }
      else {
        iVar7 = LZCOUNT(uVar3);
      }
      _Var8 = (ulonglong)(iVar7 * -9 + 0x160U >> 6) + 1 + lVar2;
    }
    if ((uVar1 & 2) != 0) {
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).reg_time_);
      uVar3 = (uint)_Var4 | 1;
      if (__isa_available < 5) {
        iVar7 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar7 = 0x1f - iVar7;
      }
      else {
        iVar7 = LZCOUNT(uVar3);
      }
      _Var8 = _Var8 + 1 + (iVar7 * -9 + 0x160U >> 6) + _Var4;
    }
    if ((uVar1 & 4) != 0) {
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).update_time_);
      uVar3 = (uint)_Var4 | 1;
      if (__isa_available < 5) {
        iVar7 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar7 = 0x1f - iVar7;
      }
      else {
        iVar7 = LZCOUNT(uVar3);
      }
      _Var8 = _Var8 + 1 + (iVar7 * -9 + 0x160U >> 6) + _Var4;
    }
    if (((uVar1 & 8) != 0) && (uVar5 = (this->_impl_).player_uid_, uVar5 != 0)) {
      uVar5 = uVar5 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar7 = 0x3f - (int)lVar2;
      }
      else {
        iVar7 = (int)LZCOUNT(uVar5);
      }
      _Var8 = _Var8 + (iVar7 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 0x10) != 0) && (iVar7 = (this->_impl_).server_id_, iVar7 != 0)) {
      uVar6 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar7);
      _Var8 = _Var8 + uVar6;
    }
    if (((uVar1 & 0x20) != 0) && (iVar7 = (this->_impl_).authority_, iVar7 != 0)) {
      uVar6 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar7);
      _Var8 = _Var8 + uVar6;
    }
  }
  _Var8 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var8,&(this->_impl_)._cached_size_);
  return _Var8;
}

// _InternalSerialize @ 14c241830

uchar * __thiscall
ds_account::SqlGAccountTable::_InternalSerialize
          (SqlGAccountTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  size_t *psVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  size_t _Size;
  uchar *puVar5;
  char *pcVar6;
  char *_Src;
  Impl_ *pIVar7;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (lVar4 = (this->_impl_).player_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar4,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    _Src = (char *)((ulonglong)(this->_impl_).wn_pid_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    psVar1 = (size_t *)(_Src + 0x10);
    if (*(longlong *)(_Src + 0x10) != 0) {
      pcVar6 = _Src;
      if (0xf < *(ulonglong *)(_Src + 0x18)) {
        pcVar6 = *(char **)_Src;
      }
      local_28._Mysize = 0x22;
      local_28._Mydata = "ds_account.SqlGAccountTable.wn_pid";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(_Src + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(_Src + 0x18)) {
        _Src = *(char **)_Src;
      }
      _Size = *psVar1;
      if (((longlong)_Size < 0x80) &&
         ((longlong)_Size <= (longlong)(param_2->end_ + (0xe - (longlong)param_1)))) {
        *param_1 = '\x12';
        param_1[1] = (uchar)_Size;
        memcpy(param_1 + 2,_Src,_Size);
        param_1 = param_1 + 2 + _Size;
      }
      else {
        local_28._Mydata = _Src;
        local_28._Mysize = _Size;
        param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliasedOutline
                            (param_2,2,&local_28,param_1);
      }
    }
  }
  pIVar7 = &this->_impl_;
  if ((((pIVar7->_has_bits_).has_bits_[0] & 0x10) != 0) &&
     (iVar2 = (this->_impl_).server_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  if ((((pIVar7->_has_bits_).has_bits_[0] & 0x20) != 0) &&
     (iVar2 = (this->_impl_).authority_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar2,param_1);
  }
  uVar3 = (pIVar7->_has_bits_).has_bits_[0];
  if ((uVar3 & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (5,(MessageLite *)(this->_impl_).reg_time_,
                         (int)(((this->_impl_).reg_time_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((uVar3 & 4) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (6,(MessageLite *)(this->_impl_).update_time_,
                         (int)(((this->_impl_).update_time_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar5;
}

// GetClassData @ 14c241a00

ClassData * __thiscall ds_account::SqlGAccountTable::GetClassData(SqlGAccountTable *this)

{
  return (ClassData *)&SqlGAccountTable_class_data_;
}

// PlacementNew_ @ 14c241a20

void * __cdecl
ds_account::SqlGAccountTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlGAccountTable_ds_account__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  return param_2;
}

// SqlGAccountTable @ 14c241a60

SqlGAccountTable * __thiscall
ds_account::SqlGAccountTable::SqlGAccountTable(SqlGAccountTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlGAccountTable_ds_account__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).wn_pid_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).reg_time_ = (Timestamp *)0x0;
  (this->_impl_).update_time_ = (Timestamp *)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).server_id_ = 0;
  (this->_impl_).authority_ = 0;
  return this;
}

// SqlGAccountTable @ 14c241aa0

SqlGAccountTable * __thiscall
ds_account::SqlGAccountTable::SqlGAccountTable
          (SqlGAccountTable *this,Arena *param_1,SqlGAccountTable *param_2)

{
  ArenaStringPtr *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  TaggedStringPtr TVar4;
  void *pvVar5;
  Timestamp *pTVar6;
  Timestamp *pTVar7;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlGAccountTable_ds_account__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).wn_pid_;
  pTVar7 = (Timestamp *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar5 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar5 & 3) != 0) {
    TVar4 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar5 = *TVar4.ptr_;
  }
  (this->_impl_).wn_pid_.tagged_ptr_.ptr_ = pvVar5;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  pTVar6 = pTVar7;
  if ((uVar1 & 2) != 0) {
    pTVar6 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).reg_time_);
  }
  (this->_impl_).reg_time_ = pTVar6;
  if ((uVar1 & 4) != 0) {
    pTVar7 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).update_time_);
  }
  (this->_impl_).update_time_ = pTVar7;
  iVar2 = (param_2->_impl_).server_id_;
  iVar3 = (param_2->_impl_).authority_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).server_id_ = iVar2;
  (this->_impl_).authority_ = iVar3;
  return this;
}

// ~SqlGAccountTable @ 14c241b70

void __thiscall ds_account::SqlGAccountTable::~SqlGAccountTable(SqlGAccountTable *this)

{
  Timestamp *pTVar1;
  
  this->_padding_ = (longlong)&___7SqlGAccountTable_ds_account__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).wn_pid_);
  pTVar1 = (this->_impl_).reg_time_;
  if (pTVar1 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(pTVar1);
    ::operator_delete(pTVar1,0x28);
  }
  pTVar1 = (this->_impl_).update_time_;
  if (pTVar1 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(pTVar1);
    ::operator_delete(pTVar1,0x28);
  }
  return;
}

// CopyFrom @ 14c241bf0

void __thiscall
ds_account::SqlGAccountTable::CopyFrom(SqlGAccountTable *this,SqlGAccountTable *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c241c30

Metadata * __thiscall
ds_account::SqlGAccountTable::GetMetadata(SqlGAccountTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SqlGAccountTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c241c70

void __thiscall
ds_account::SqlGAccountTable::InternalSwap(SqlGAccountTable *this,SqlGAccountTable *param_1)

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
  pvVar3 = (param_1->_impl_).wn_pid_.tagged_ptr_.ptr_;
  (param_1->_impl_).wn_pid_.tagged_ptr_.ptr_ = (this->_impl_).wn_pid_.tagged_ptr_.ptr_;
  (this->_impl_).wn_pid_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).reg_time_,this + 1,&(param_1->_impl_).reg_time_);
  return;
}

// clear_reg_time @ 14c241cc0

void __thiscall ds_account::SqlGAccountTable::clear_reg_time(SqlGAccountTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).reg_time_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// clear_update_time @ 14c241cf0

void __thiscall ds_account::SqlGAccountTable::clear_update_time(SqlGAccountTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).update_time_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffb;
  return;
}

// `dynamic_atexit_destructor_for_'_SqlGAccountTable_default_instance_'' @ 150444150

void __cdecl ds_account::_dynamic_atexit_destructor_for___SqlGAccountTable_default_instance___(void)

{
  return;
}


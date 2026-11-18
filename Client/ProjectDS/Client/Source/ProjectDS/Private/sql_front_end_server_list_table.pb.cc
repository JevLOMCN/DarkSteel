// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// `dynamic_initializer_for_'_SqlFrontEndServerListTable_default_instance_'' @ 14129b0d0

void __cdecl
ds_config::_dynamic_initializer_for___SqlFrontEndServerListTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlFrontEndServerListTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129b0f0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fconfig_2fsql_5ffront_5fend_5fserver_5flist_5ftable_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c245940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ds_config::SqlFrontEndServerListTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  void *pvVar4;
  undefined8 uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  ulong64 uVar7;
  Arena *pAVar8;
  Arena *pAVar9;
  undefined1 auStackY_78 [32];
  _Bxty local_40;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_78;
  pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar3 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar8 = pAVar9;
  if (bVar3 != 0) {
    pAVar8 = (Arena *)(pAVar9->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar6->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          local_40._8_8_ = 0;
          local_40._Ptr = (char *)0x0;
          local_30 = ___xmm_000000000000000f0000000000000000;
          uStack_28 = _UNK_15076add8;
          if (bVar3 != 0) {
            pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
                     pAVar9);
          if (0xf < uStack_28) {
            uVar7 = uStack_28 + 1;
            uVar5 = local_40._Ptr;
            if (0xfff < uVar7) {
              uVar5 = *(undefined8 *)(local_40._Ptr + -8);
              uVar7 = uStack_28 + 0x28;
              if ((char *)0x1f < local_40._Ptr + (-8 - uVar5)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)uVar5,uVar7);
          }
        }
      }
      else {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        if (bVar3 != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar6,pAVar9);
      }
    }
    if ((uVar1 & 2) != 0) {
      if ((MessageLite *)param_1[2]._padding_ == (MessageLite *)0x0) {
        pvVar4 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                           (pAVar8,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pvVar4;
      }
      else {
        google::protobuf::Timestamp::MergeImpl
                  ((MessageLite *)param_1[2]._padding_,(MessageLite *)param_2[2]._padding_);
      }
    }
    if (((uVar1 & 4) != 0) && (iVar2 = (int)param_2[2]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 & 8) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[2]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[2]._internal_metadata_.ptr_ + 4) = iVar2;
    }
    if (((uVar1 & 0x10) != 0) && (iVar2 = (int)param_2[3]._padding_, iVar2 != 0)) {
      *(int *)&param_1[3]._padding_ = iVar2;
    }
    if (((uVar1 & 0x20) != 0) && (iVar2 = *(int *)((longlong)&param_2[3]._padding_ + 4), iVar2 != 0)
       ) {
      *(int *)((longlong)&param_1[3]._padding_ + 4) = iVar2;
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

// Clear @ 14c245b00

void __thiscall ds_config::SqlFrontEndServerListTable::Clear(SqlFrontEndServerListTable *this)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).address_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar1 & 2) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).server_refresh_dt_);
    }
  }
  if ((uVar1 & 0x3c) != 0) {
    (this->_impl_).region_index_ = 0;
    (this->_impl_).server_index_ = 0;
    (this->_impl_).players_ = 0;
    (this->_impl_).server_state_ = 0;
  }
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c245b80

ulong64 __thiscall
ds_config::SqlFrontEndServerListTable::ByteSizeLong(SqlFrontEndServerListTable *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  __uint64 _Var4;
  ulong64 uVar5;
  int iVar6;
  __uint64 _Var7;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var7 = 0;
  if ((uVar1 & 0x3f) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).address_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10)
       , lVar2 != 0)) {
      uVar3 = (uint)lVar2 | 1;
      if (__isa_available < 5) {
        iVar6 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 0x1f - iVar6;
      }
      else {
        iVar6 = LZCOUNT(uVar3);
      }
      _Var7 = (ulonglong)(iVar6 * -9 + 0x160U >> 6) + 1 + lVar2;
    }
    if ((uVar1 & 2) != 0) {
      _Var4 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).server_refresh_dt_);
      uVar3 = (uint)_Var4 | 1;
      if (__isa_available < 5) {
        iVar6 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 0x1f - iVar6;
      }
      else {
        iVar6 = LZCOUNT(uVar3);
      }
      _Var7 = _Var7 + 1 + (iVar6 * -9 + 0x160U >> 6) + _Var4;
    }
    if (((uVar1 & 4) != 0) && (iVar6 = (this->_impl_).region_index_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 & 8) != 0) && (iVar6 = (this->_impl_).server_index_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 & 0x10) != 0) && (iVar6 = (this->_impl_).players_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
    if (((uVar1 & 0x20) != 0) && (iVar6 = (this->_impl_).server_state_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var7 = _Var7 + uVar5;
    }
  }
  _Var7 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var7,&(this->_impl_)._cached_size_);
  return _Var7;
}

// _InternalSerialize @ 14c245cc0

uchar * __thiscall
ds_config::SqlFrontEndServerListTable::_InternalSerialize
          (SqlFrontEndServerListTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  size_t *psVar1;
  int iVar2;
  size_t _Size;
  uchar *puVar3;
  char *pcVar4;
  Impl_ *pIVar5;
  char *_Src;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar2 = (this->_impl_).region_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (iVar2 = (this->_impl_).server_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar2,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    _Src = (char *)((ulonglong)(this->_impl_).address_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    psVar1 = (size_t *)(_Src + 0x10);
    if (*(longlong *)(_Src + 0x10) != 0) {
      pcVar4 = _Src;
      if (0xf < *(ulonglong *)(_Src + 0x18)) {
        pcVar4 = *(char **)_Src;
      }
      local_28._Mysize = 0x2c;
      local_28._Mydata = "ds_config.SqlFrontEndServerListTable.address";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar4,(int)*(longlong *)(_Src + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(_Src + 0x18)) {
        _Src = *(char **)_Src;
      }
      _Size = *psVar1;
      if (((longlong)_Size < 0x80) &&
         ((longlong)_Size <= (longlong)(param_2->end_ + (0xe - (longlong)param_1)))) {
        *param_1 = '\x1a';
        param_1[1] = (uchar)_Size;
        memcpy(param_1 + 2,_Src,_Size);
        param_1 = param_1 + 2 + _Size;
      }
      else {
        local_28._Mydata = _Src;
        local_28._Mysize = _Size;
        param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliasedOutline
                            (param_2,3,&local_28,param_1);
      }
    }
  }
  pIVar5 = &this->_impl_;
  if ((((pIVar5->_has_bits_).has_bits_[0] & 0x10) != 0) &&
     (iVar2 = (this->_impl_).players_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<5>
                        (param_2,iVar2,param_1);
  }
  if ((((pIVar5->_has_bits_).has_bits_[0] & 0x20) != 0) &&
     (iVar2 = (this->_impl_).server_state_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<6>
                        (param_2,iVar2,param_1);
  }
  if (((pIVar5->_has_bits_).has_bits_[0] & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (7,(MessageLite *)(this->_impl_).server_refresh_dt_,
                         (int)(((this->_impl_).server_refresh_dt_)->_impl_)._cached_size_.atom_,
                         param_1,param_2);
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar3 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar3;
}

// GetClassData @ 14c245e90

ClassData * __thiscall
ds_config::SqlFrontEndServerListTable::GetClassData(SqlFrontEndServerListTable *this)

{
  return (ClassData *)&SqlFrontEndServerListTable_class_data_;
}

// PlacementNew_ @ 14c245eb0

void * __cdecl
ds_config::SqlFrontEndServerListTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlFrontEndServerListTable_ds_config__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c245ef0

void * __thiscall
ds_config::SqlFrontEndServerListTable::_scalar_deleting_destructor_
          (SqlFrontEndServerListTable *this,uint param_1)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7SqlFrontEndServerListTable_ds_config__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).address_);
  this_00 = (this->_impl_).server_refresh_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// SqlFrontEndServerListTable @ 14c245f70

SqlFrontEndServerListTable * __thiscall
ds_config::SqlFrontEndServerListTable::SqlFrontEndServerListTable
          (SqlFrontEndServerListTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlFrontEndServerListTable_ds_config__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).address_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string
  ;
  (this->_impl_).server_refresh_dt_ = (Timestamp *)0x0;
  (this->_impl_).region_index_ = 0;
  (this->_impl_).server_index_ = 0;
  (this->_impl_).players_ = 0;
  (this->_impl_).server_state_ = 0;
  return this;
}

// SqlFrontEndServerListTable @ 14c245fb0

SqlFrontEndServerListTable * __thiscall
ds_config::SqlFrontEndServerListTable::SqlFrontEndServerListTable
          (SqlFrontEndServerListTable *this,Arena *param_1,SqlFrontEndServerListTable *param_2)

{
  ArenaStringPtr *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  TaggedStringPtr TVar4;
  void *pvVar5;
  Timestamp *pTVar6;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlFrontEndServerListTable_ds_config__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).address_;
  pTVar6 = (Timestamp *)0x0;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar5 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar5 & 3) != 0) {
    TVar4 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar5 = *TVar4.ptr_;
  }
  (this->_impl_).address_.tagged_ptr_.ptr_ = pvVar5;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pTVar6 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).server_refresh_dt_);
  }
  (this->_impl_).server_refresh_dt_ = pTVar6;
  iVar1 = (param_2->_impl_).server_index_;
  iVar2 = (param_2->_impl_).players_;
  iVar3 = (param_2->_impl_).server_state_;
  (this->_impl_).region_index_ = (param_2->_impl_).region_index_;
  (this->_impl_).server_index_ = iVar1;
  (this->_impl_).players_ = iVar2;
  (this->_impl_).server_state_ = iVar3;
  return this;
}

// ~SqlFrontEndServerListTable @ 14c246060

void __thiscall
ds_config::SqlFrontEndServerListTable::~SqlFrontEndServerListTable(SqlFrontEndServerListTable *this)

{
  Timestamp *this_00;
  
  this->_padding_ = (longlong)&___7SqlFrontEndServerListTable_ds_config__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).address_);
  this_00 = (this->_impl_).server_refresh_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
    return;
  }
  return;
}

// CopyFrom @ 14c2460c0

void __thiscall
ds_config::SqlFrontEndServerListTable::CopyFrom
          (SqlFrontEndServerListTable *this,SqlFrontEndServerListTable *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c246100

Metadata * __thiscall
ds_config::SqlFrontEndServerListTable::GetMetadata
          (SqlFrontEndServerListTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&SqlFrontEndServerListTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c246140

void __thiscall
ds_config::SqlFrontEndServerListTable::InternalSwap
          (SqlFrontEndServerListTable *this,SqlFrontEndServerListTable *param_1)

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
  pvVar3 = (param_1->_impl_).address_.tagged_ptr_.ptr_;
  (param_1->_impl_).address_.tagged_ptr_.ptr_ = (this->_impl_).address_.tagged_ptr_.ptr_;
  (this->_impl_).address_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).server_refresh_dt_,this + 1,&(param_1->_impl_).server_refresh_dt_);
  return;
}

// clear_server_refresh_dt @ 14c246190

void __thiscall
ds_config::SqlFrontEndServerListTable::clear_server_refresh_dt(SqlFrontEndServerListTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).server_refresh_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// `dynamic_atexit_destructor_for_'_SqlFrontEndServerListTable_default_instance_'' @ 1504441d0

void __cdecl
ds_config::_dynamic_atexit_destructor_for___SqlFrontEndServerListTable_default_instance___(void)

{
  return;
}


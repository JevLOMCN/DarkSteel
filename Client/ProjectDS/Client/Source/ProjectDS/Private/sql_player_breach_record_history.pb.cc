// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// `dynamic_initializer_for_'_SqlPlayerBreachRecordHistoryTable_default_instance_'' @ 14129bc60

void __cdecl
ds_game::_dynamic_initializer_for___SqlPlayerBreachRecordHistoryTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlPlayerBreachRecordHistoryTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129bc80

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fgame_2fsql_5fplayer_5fbreach_5frecord_5fhistory_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c255880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ds_game::SqlPlayerBreachRecordHistoryTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  if ((uVar1 & 7) != 0) {
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
    if (((uVar1 & 2) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
    }
    if (((uVar1 & 4) != 0) && (iVar2 = (int)param_2[2]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar2;
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

// Clear @ 14c2559f0

void __thiscall
ds_game::SqlPlayerBreachRecordHistoryTable::Clear(SqlPlayerBreachRecordHistoryTable *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 1) != 0) {
    puVar2 = (undefined8 *)
             ((ulonglong)(this->_impl_).history_values_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar2[2] = 0;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
  }
  if ((uVar3 & 6) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).zone_id_ = 0;
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

// ByteSizeLong @ 14c255a40

ulong64 __thiscall
ds_game::SqlPlayerBreachRecordHistoryTable::ByteSizeLong(SqlPlayerBreachRecordHistoryTable *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  __uint64 _Var6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((uVar1 & 7) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).history_values_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
                 + 0x10), lVar2 != 0)) {
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
    if (((uVar1 & 2) != 0) && (uVar4 = (this->_impl_).player_uid_, uVar4 != 0)) {
      uVar4 = uVar4 | 1;
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
      _Var6 = _Var6 + (iVar5 * -9 + 0x2c0U >> 6);
    }
    if (((uVar1 & 4) != 0) && (iVar5 = (this->_impl_).zone_id_, iVar5 != 0)) {
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
      _Var6 = _Var6 + (iVar5 * -9 + 0x2c0U >> 6);
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c255b40

uchar * __thiscall
ds_game::SqlPlayerBreachRecordHistoryTable::_InternalSerialize
          (SqlPlayerBreachRecordHistoryTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  size_t *psVar1;
  int iVar2;
  longlong lVar3;
  size_t _Size;
  uchar *puVar4;
  char *pcVar5;
  char *_Src;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar3 = (this->_impl_).player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar2 = (this->_impl_).zone_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar2,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    _Src = (char *)((ulonglong)(this->_impl_).history_values_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
    ;
    psVar1 = (size_t *)(_Src + 0x10);
    if (*(longlong *)(_Src + 0x10) != 0) {
      pcVar5 = _Src;
      if (0xf < *(ulonglong *)(_Src + 0x18)) {
        pcVar5 = *(char **)_Src;
      }
      local_18._Mysize = 0x38;
      local_18._Mydata = "ds_game.SqlPlayerBreachRecordHistoryTable.history_values";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar5,(int)*(longlong *)(_Src + 0x10),SERIALIZE,&local_18);
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
        local_18._Mydata = _Src;
        local_18._Mysize = _Size;
        param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliasedOutline
                            (param_2,3,&local_18,param_1);
      }
    }
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar4 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar4;
}

// GetClassData @ 14c255cb0

ClassData * __thiscall
ds_game::SqlPlayerBreachRecordHistoryTable::GetClassData(SqlPlayerBreachRecordHistoryTable *this)

{
  return (ClassData *)&SqlPlayerBreachRecordHistoryTable_class_data_;
}

// PlacementNew_ @ 14c255cd0

void * __cdecl
ds_game::SqlPlayerBreachRecordHistoryTable::PlacementNew_
          (void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlPlayerBreachRecordHistoryTable_ds_game__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c255d10

void * __thiscall
ds_game::SqlPlayerBreachRecordHistoryTable::_scalar_deleting_destructor_
          (SqlPlayerBreachRecordHistoryTable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SqlPlayerBreachRecordHistoryTable_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).history_values_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// SqlPlayerBreachRecordHistoryTable @ 14c255d70

SqlPlayerBreachRecordHistoryTable * __thiscall
ds_game::SqlPlayerBreachRecordHistoryTable::SqlPlayerBreachRecordHistoryTable
          (SqlPlayerBreachRecordHistoryTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlPlayerBreachRecordHistoryTable_ds_game__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).history_values_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).zone_id_ = 0;
  return this;
}

// SqlPlayerBreachRecordHistoryTable @ 14c255db0

SqlPlayerBreachRecordHistoryTable * __thiscall
ds_game::SqlPlayerBreachRecordHistoryTable::SqlPlayerBreachRecordHistoryTable
          (SqlPlayerBreachRecordHistoryTable *this,Arena *param_1,
          SqlPlayerBreachRecordHistoryTable *param_2)

{
  ArenaStringPtr *this_00;
  TaggedStringPtr TVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlPlayerBreachRecordHistoryTable_ds_game__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).history_values_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar2 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->_impl_).history_values_.tagged_ptr_.ptr_ = pvVar2;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).zone_id_ = (param_2->_impl_).zone_id_;
  return this;
}

// ~SqlPlayerBreachRecordHistoryTable @ 14c255e50

void __thiscall
ds_game::SqlPlayerBreachRecordHistoryTable::~SqlPlayerBreachRecordHistoryTable
          (SqlPlayerBreachRecordHistoryTable *this)

{
  this->_padding_ = (longlong)&___7SqlPlayerBreachRecordHistoryTable_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).history_values_);
  return;
}

// CopyFrom @ 14c255e90

void __thiscall
ds_game::SqlPlayerBreachRecordHistoryTable::CopyFrom
          (SqlPlayerBreachRecordHistoryTable *this,SqlPlayerBreachRecordHistoryTable *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c255ed0

Metadata * __thiscall
ds_game::SqlPlayerBreachRecordHistoryTable::GetMetadata
          (SqlPlayerBreachRecordHistoryTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&SqlPlayerBreachRecordHistoryTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c255f10

void __thiscall
ds_game::SqlPlayerBreachRecordHistoryTable::InternalSwap
          (SqlPlayerBreachRecordHistoryTable *this,SqlPlayerBreachRecordHistoryTable *param_1)

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
  pvVar3 = (param_1->_impl_).history_values_.tagged_ptr_.ptr_;
  (param_1->_impl_).history_values_.tagged_ptr_.ptr_ =
       (this->_impl_).history_values_.tagged_ptr_.ptr_;
  (this->_impl_).history_values_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).player_uid_,&(this->_impl_).field_0x1c,&(param_1->_impl_).player_uid_);
  return;
}

// `dynamic_atexit_destructor_for_'_SqlPlayerBreachRecordHistoryTable_default_instance_'' @ 150444420

void __cdecl
ds_game::_dynamic_atexit_destructor_for___SqlPlayerBreachRecordHistoryTable_default_instance___
          (void)

{
  return;
}


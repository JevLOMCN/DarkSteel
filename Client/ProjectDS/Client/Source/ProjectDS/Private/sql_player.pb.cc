// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// `dynamic_initializer_for_'_SqlPlayerTable_default_instance_'' @ 14129bb70

void __cdecl ds_game::_dynamic_initializer_for___SqlPlayerTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlPlayerTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129bb90

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_ds_5fgame_2fsql_5fplayer_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c254180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ds_game::SqlPlayerTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  MessageLite *pMVar3;
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
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
  }
  google::protobuf::RepeatedField<int>::MergeFrom
            ((RepeatedField<int> *)&param_1[1]._internal_metadata_,
             (RepeatedField<int> *)&param_2[1]._internal_metadata_);
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar6 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[3]._padding_ & 0xfffffffffffffffc);
      if ((pbVar6->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[3]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar8 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_40._8_8_ = 0;
          local_40._Ptr = (char *)0x0;
          local_30 = ___xmm_000000000000000f0000000000000000;
          uStack_28 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 3),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_40,
                     pAVar8);
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
        pAVar8 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar8 = (Arena *)(pAVar8->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 3),pbVar6,pAVar8);
      }
    }
    if ((uVar1 & 2) != 0) {
      pMVar2 = (MessageLite *)param_1[3]._internal_metadata_.ptr_;
      pMVar3 = (MessageLite *)param_2[3]._internal_metadata_.ptr_;
      if (pMVar2 == (MessageLite *)0x0) {
        pvVar4 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>(pAVar9,pMVar3);
        param_1[3]._internal_metadata_.ptr_ = (long64)pvVar4;
      }
      else {
        google::protobuf::Timestamp::MergeImpl(pMVar2,pMVar3);
      }
    }
    if (((uVar1 & 4) != 0) && (param_2[4]._padding_ != 0)) {
      param_1[4]._padding_ = param_2[4]._padding_;
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

// Clear @ 14c254330

void __thiscall ds_game::SqlPlayerTable::Clear(SqlPlayerTable *this)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  uVar2 = (this->_impl_).update_types_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar2 & 4) == 0) {
    (this->_impl_).update_types_.soo_rep_.field0_0x0.long_rep.elements_int =
         uVar2 & 0xfffffffffffffff8;
  }
  else {
    (this->_impl_).update_types_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar3 = (undefined8 *)
               ((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar3[2] = 0;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      *(undefined1 *)puVar3 = 0;
    }
    if ((uVar1 & 2) != 0) {
      google::protobuf::Timestamp::Clear((this->_impl_).create_dt_);
    }
  }
  (this->_impl_).player_uid_ = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
  }
  return;
}

// ByteSizeLong @ 14c2543b0

ulong64 __thiscall ds_game::SqlPlayerTable::ByteSizeLong(SqlPlayerTable *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  __uint64 _Var4;
  __uint64 _Var5;
  ulonglong uVar6;
  int iVar7;
  
  _Var4 = google::protobuf::internal::WireFormatLite::EnumSizeWithPackedTagSize
                    (&(this->_impl_).update_types_,2,&(this->_impl_)._update_types_cached_byte_size_
                    );
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 7) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10
                 ), lVar2 != 0)) {
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
      _Var4 = _Var4 + 1 + (ulonglong)(iVar7 * -9 + 0x160U >> 6) + lVar2;
    }
    if ((uVar1 & 2) != 0) {
      _Var5 = google::protobuf::Timestamp::ByteSizeLong((this->_impl_).create_dt_);
      uVar3 = (uint)_Var5 | 1;
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
      _Var4 = _Var4 + 1 + (iVar7 * -9 + 0x160U >> 6) + _Var5;
    }
    if (((uVar1 & 4) != 0) && (uVar6 = (this->_impl_).player_uid_, uVar6 != 0)) {
      uVar6 = uVar6 | 1;
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar7 = 0x3f - (int)lVar2;
      }
      else {
        iVar7 = (int)LZCOUNT(uVar6);
      }
      _Var4 = _Var4 + (iVar7 * -9 + 0x2c0U >> 6);
    }
  }
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c254500

uchar * __thiscall
ds_game::SqlPlayerTable::_InternalSerialize
          (SqlPlayerTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  size_t *psVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  size_t _Size;
  uchar *puVar5;
  byte bVar6;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  ulonglong uVar10;
  byte *pbVar11;
  atomic<int> aVar12;
  char *_Src;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (lVar4 = (this->_impl_).player_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar4,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    _Src = (char *)((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    psVar1 = (size_t *)(_Src + 0x10);
    if (*(longlong *)(_Src + 0x10) != 0) {
      pcVar8 = _Src;
      if (0xf < *(ulonglong *)(_Src + 0x18)) {
        pcVar8 = *(char **)_Src;
      }
      local_28._Mysize = 0x1f;
      local_28._Mydata = "ds_game.SqlPlayerTable.nickname";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar8,(int)*(longlong *)(_Src + 0x10),SERIALIZE,&local_28);
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
        local_28._Mydata = _Src;
        local_28._Mysize = _Size;
        param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliasedOutline
                            (param_2,2,&local_28,param_1);
      }
    }
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                        (7,(MessageLite *)(this->_impl_).create_dt_,
                         (int)(((this->_impl_).create_dt_)->_impl_)._cached_size_.atom_,param_1,
                         param_2);
  }
  aVar12 = (this->_impl_)._update_types_cached_byte_size_.atom_;
  if (aVar12 != (atomic<int>)0x0) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar7 = 0x322;
    do {
      pbVar11 = param_1;
      bVar6 = (byte)uVar7;
      uVar7 = uVar7 >> 7;
      *pbVar11 = bVar6 | 0x80;
      param_1 = pbVar11 + 1;
    } while (0x7f < uVar7);
    pbVar11[1] = (byte)uVar7;
    pbVar11 = pbVar11 + 2;
    for (; 0x7f < (uint)aVar12; aVar12 = (atomic<int>)((uint)aVar12 >> 7)) {
      *pbVar11 = aVar12._0_1_ | 0x80;
      pbVar11 = pbVar11 + 1;
    }
    *pbVar11 = aVar12._0_1_;
    param_1 = pbVar11 + 1;
    uVar10 = (this->_impl_).update_types_.soo_rep_.field0_0x0.long_rep.elements_int;
    if ((uVar10 & 4) == 0) {
      piVar9 = &(this->_impl_).update_types_.soo_rep_.field0_0x0.long_rep.size;
      uVar7 = (uint)uVar10 & 3;
    }
    else {
      uVar7 = (this->_impl_).update_types_.soo_rep_.field0_0x0.long_rep.size;
      piVar9 = (int *)(uVar10 & 0xfffffffffffffff8);
    }
    piVar2 = piVar9 + (int)uVar7;
    do {
      if (param_2->end_ <= param_1) {
        param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
      }
      iVar3 = *piVar9;
      piVar9 = piVar9 + 1;
      for (uVar10 = (ulonglong)iVar3; 0x7f < uVar10; uVar10 = uVar10 >> 7) {
        *param_1 = (byte)uVar10 | 0x80;
        param_1 = param_1 + 1;
      }
      *param_1 = (byte)uVar10;
      param_1 = param_1 + 1;
    } while (piVar9 < piVar2);
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar5 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar5;
}

// GetClassData @ 14c254750

ClassData * __thiscall ds_game::SqlPlayerTable::GetClassData(SqlPlayerTable *this)

{
  return (ClassData *)&SqlPlayerTable_class_data_;
}

// PlacementNew_ @ 14c254770

void * __cdecl ds_game::SqlPlayerTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlPlayerTable_ds_game__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(Arena **)((longlong)param_2 + 0x18) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x30) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c2547b0

void * __thiscall
ds_game::SqlPlayerTable::_scalar_deleting_destructor_(SqlPlayerTable *this,uint param_1)

{
  ~SqlPlayerTable(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// SqlPlayerTable @ 14c2547f0

SqlPlayerTable * __thiscall
ds_game::SqlPlayerTable::SqlPlayerTable(SqlPlayerTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlPlayerTable_ds_game__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).update_types_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->_impl_).update_types_.soo_rep_.field0_0x0 + 8) = 0;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_)._update_types_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).create_dt_ = (Timestamp *)0x0;
  (this->_impl_).player_uid_ = 0;
  return this;
}

// SqlPlayerTable @ 14c254830

SqlPlayerTable * __thiscall
ds_game::SqlPlayerTable::SqlPlayerTable(SqlPlayerTable *this,Arena *param_1,SqlPlayerTable *param_2)

{
  ArenaStringPtr *this_00;
  TaggedStringPtr TVar1;
  void *pvVar2;
  Timestamp *pTVar3;
  InternalVisibility local_res8 [8];
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlPlayerTable_ds_game__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  pTVar3 = (Timestamp *)0x0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<int>::RepeatedField<int>
            (&(this->_impl_).update_types_,local_res8[0],param_1,&(param_2->_impl_).update_types_);
  this_00 = &(param_2->_impl_).nickname_;
  (this->_impl_)._update_types_cached_byte_size_.atom_ = (atomic<int>)0x0;
  pvVar2 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar2 & 3) != 0) {
    TVar1 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)local_res8);
                    /* WARNING: Load size is inaccurate */
    pvVar2 = *TVar1.ptr_;
  }
  (this->_impl_).nickname_.tagged_ptr_.ptr_ = pvVar2;
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pTVar3 = google::protobuf::Arena::CopyConstruct<google::protobuf::Timestamp>
                       (param_1,(param_2->_impl_).create_dt_);
  }
  (this->_impl_).create_dt_ = pTVar3;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  return this;
}

// ~SqlPlayerTable @ 14c254900

void __thiscall ds_game::SqlPlayerTable::~SqlPlayerTable(SqlPlayerTable *this)

{
  Timestamp *this_00;
  ulonglong uVar1;
  
  this->_padding_ = (longlong)&___7SqlPlayerTable_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  this_00 = (this->_impl_).create_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::~Timestamp(this_00);
    ::operator_delete(this_00,0x28);
  }
  uVar1 = (this->_impl_).update_types_.soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)(this->_impl_).update_types_.soo_rep_.field0_0x0.long_rep.capacity *
                      4 + 8);
  }
  return;
}

// CopyFrom @ 14c254990

void __thiscall ds_game::SqlPlayerTable::CopyFrom(SqlPlayerTable *this,SqlPlayerTable *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c2549d0

Metadata * __thiscall
ds_game::SqlPlayerTable::GetMetadata(SqlPlayerTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SqlPlayerTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c254a10

void __thiscall ds_game::SqlPlayerTable::InternalSwap(SqlPlayerTable *this,SqlPlayerTable *param_1)

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
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).update_types_,(char *)&(param_1->_impl_).update_types_);
  pvVar3 = (param_1->_impl_).nickname_.tagged_ptr_.ptr_;
  (param_1->_impl_).nickname_.tagged_ptr_.ptr_ = (this->_impl_).nickname_.tagged_ptr_.ptr_;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ = pvVar3;
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).create_dt_,(char *)&(param_1->_impl_).create_dt_);
  return;
}

// SqlPlayerUpdateType_descriptor @ 14c254a80

EnumDescriptor * __cdecl ds_game::SqlPlayerUpdateType_descriptor(void)

{
  google::protobuf::internal::AssignDescriptors(&descriptor_table_ds_5fgame_2fsql_5fplayer_2eproto);
  return file_level_enum_descriptors_ds_5fgame_2fsql_5fplayer_2eproto[0];
}

// clear_create_dt @ 14c254ab0

void __thiscall ds_game::SqlPlayerTable::clear_create_dt(SqlPlayerTable *this)

{
  Timestamp *this_00;
  
  this_00 = (this->_impl_).create_dt_;
  if (this_00 != (Timestamp *)0x0) {
    google::protobuf::Timestamp::Clear(this_00);
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] & 0xfffffffd;
  return;
}

// `dynamic_atexit_destructor_for_'_SqlPlayerTable_default_instance_'' @ 1504443f0

void __cdecl ds_game::_dynamic_atexit_destructor_for___SqlPlayerTable_default_instance___(void)

{
  return;
}


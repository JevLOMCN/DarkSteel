// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// `dynamic_initializer_for_'_SqlMountListTable_default_instance_'' @ 14129ba80

void __cdecl ds_game::_dynamic_initializer_for___SqlMountListTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlMountListTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129baa0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fgame_2fsql_5fmount_5flist_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c252db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl ds_game::SqlMountListTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  ulong64 uVar6;
  Arena *pAVar7;
  undefined1 auStackY_68 [32];
  _Bxty local_38;
  undefined8 local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  google::protobuf::RepeatedField<int>::MergeFrom
            ((RepeatedField<int> *)&param_1[1]._internal_metadata_,
             (RepeatedField<int> *)&param_2[1]._internal_metadata_);
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[3]._padding_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[3]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
          pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 3),
                     (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_38,
                     pAVar7);
          if (0xf < uStack_20) {
            uVar6 = uStack_20 + 1;
            uVar4 = local_38._Ptr;
            if (0xfff < uVar6) {
              uVar4 = *(undefined8 *)(local_38._Ptr + -8);
              uVar6 = uStack_20 + 0x28;
              if ((char *)0x1f < local_38._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
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
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 3),pbVar5,pAVar7);
      }
    }
    if (((uVar1 & 2) != 0) && (lVar3 = param_2[3]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[3]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar1 & 4) != 0) && (param_2[4]._padding_ != 0)) {
      param_1[4]._padding_ = param_2[4]._padding_;
    }
    if (((uVar1 & 8) != 0) && (iVar2 = (int)param_2[4]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[4]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 & 0x10) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[4]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[4]._internal_metadata_.ptr_ + 4) = iVar2;
    }
    if (((uVar1 & 0x20) != 0) && (iVar2 = (int)param_2[5]._padding_, iVar2 != 0)) {
      *(int *)&param_1[5]._padding_ = iVar2;
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

// Clear @ 14c252f60

void __thiscall ds_game::SqlMountListTable::Clear(SqlMountListTable *this)

{
  ulonglong uVar1;
  ulong64 uVar2;
  undefined8 *puVar3;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar4;
  
  uVar1 = (this->_impl_).equip_item_ids_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar1 & 4) == 0) {
    (this->_impl_).equip_item_ids_.soo_rep_.field0_0x0.long_rep.elements_int =
         uVar1 & 0xfffffffffffffff8;
  }
  else {
    (this->_impl_).equip_item_ids_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  uVar4 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar4 & 1) != 0) {
    puVar3 = (undefined8 *)
             ((ulonglong)(this->_impl_).mount_nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar3[2] = 0;
    if (0xf < (ulonglong)puVar3[3]) {
      puVar3 = (undefined8 *)*puVar3;
    }
    *(undefined1 *)puVar3 = 0;
  }
  if ((uVar4 & 0x3e) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).mount_uid_ = 0;
    (this->_impl_).mount_id_ = 0;
    (this->_impl_).hunger_ = 0;
    (this->_impl_).fatigue_ = 0;
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
  uVar2 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.elements_int;
  if ((~((byte)uVar2 >> 2) & 1) == 0) {
    uVar4 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar4 = (uint)uVar2 & 3;
  }
  if (uVar4 != 0) {
    google::protobuf::UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14c252fd0

ulong64 __thiscall ds_game::SqlMountListTable::ByteSizeLong(SqlMountListTable *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  __uint64 _Var4;
  ulong64 uVar5;
  int iVar6;
  
  _Var4 = google::protobuf::internal::WireFormatLite::Int32SizeWithPackedTagSize
                    (&(this->_impl_).equip_item_ids_,1,
                     &(this->_impl_)._equip_item_ids_cached_byte_size_);
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar1 & 0x3f) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).mount_nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
                 + 0x10), lVar2 != 0)) {
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
      _Var4 = _Var4 + 1 + (ulonglong)(iVar6 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 2) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var4 = _Var4 + uVar5;
    }
    if (((uVar1 & 4) != 0) && (lVar2 = (this->_impl_).mount_uid_, lVar2 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var4 = _Var4 + uVar5;
    }
    if (((uVar1 & 8) != 0) && (iVar6 = (this->_impl_).mount_id_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var4 = _Var4 + uVar5;
    }
    if (((uVar1 & 0x10) != 0) && (iVar6 = (this->_impl_).hunger_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var4 = _Var4 + uVar5;
    }
    if (((uVar1 & 0x20) != 0) && (iVar6 = (this->_impl_).fatigue_, iVar6 != 0)) {
      uVar5 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var4 = _Var4 + uVar5;
    }
  }
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c2530f0

uchar * __thiscall
ds_game::SqlMountListTable::_InternalSerialize
          (SqlMountListTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  size_t *psVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  size_t _Size;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  uchar *puVar8;
  char *pcVar9;
  int *piVar10;
  ulonglong uVar11;
  atomic<int> aVar12;
  char *_Src;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar4 = (this->_impl_).player_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar4,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (lVar4 = (this->_impl_).mount_uid_, lVar4 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar4,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (iVar3 = (this->_impl_).mount_id_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar3,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    _Src = (char *)((ulonglong)(this->_impl_).mount_nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
    ;
    psVar1 = (size_t *)(_Src + 0x10);
    if (*(longlong *)(_Src + 0x10) != 0) {
      pcVar9 = _Src;
      if (0xf < *(ulonglong *)(_Src + 0x18)) {
        pcVar9 = *(char **)_Src;
      }
      local_28._Mysize = 0x28;
      local_28._Mydata = "ds_game.SqlMountListTable.mount_nickname";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar9,(int)*(longlong *)(_Src + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(_Src + 0x18)) {
        _Src = *(char **)_Src;
      }
      _Size = *psVar1;
      if (((longlong)_Size < 0x80) &&
         ((longlong)_Size <= (longlong)(param_2->end_ + (0xe - (longlong)param_1)))) {
        *param_1 = 0x22;
        param_1[1] = (byte)_Size;
        memcpy(param_1 + 2,_Src,_Size);
        param_1 = param_1 + 2 + _Size;
      }
      else {
        local_28._Mydata = _Src;
        local_28._Mysize = _Size;
        param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliasedOutline
                            (param_2,4,&local_28,param_1);
      }
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (iVar3 = (this->_impl_).hunger_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<5>
                        (param_2,iVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (iVar3 = (this->_impl_).fatigue_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<6>
                        (param_2,iVar3,param_1);
  }
  aVar12 = (this->_impl_)._equip_item_ids_cached_byte_size_.atom_;
  if (0 < (int)aVar12) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    *param_1 = 0x3a;
    while( true ) {
      pbVar5 = param_1 + 1;
      bVar6 = aVar12._0_1_;
      if ((uint)aVar12 < 0x80) break;
      aVar12 = (atomic<int>)((uint)aVar12 >> 7);
      *pbVar5 = bVar6 | 0x80;
      param_1 = pbVar5;
    }
    *pbVar5 = bVar6;
    param_1 = param_1 + 2;
    uVar11 = (this->_impl_).equip_item_ids_.soo_rep_.field0_0x0.long_rep.elements_int;
    if ((uVar11 & 4) == 0) {
      piVar10 = &(this->_impl_).equip_item_ids_.soo_rep_.field0_0x0.long_rep.size;
      uVar7 = (uint)uVar11 & 3;
    }
    else {
      uVar7 = (this->_impl_).equip_item_ids_.soo_rep_.field0_0x0.long_rep.size;
      piVar10 = (int *)(uVar11 & 0xfffffffffffffff8);
    }
    piVar2 = piVar10 + (int)uVar7;
    do {
      if (param_2->end_ <= param_1) {
        param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
      }
      iVar3 = *piVar10;
      piVar10 = piVar10 + 1;
      for (uVar11 = (ulonglong)iVar3; 0x7f < uVar11; uVar11 = uVar11 >> 7) {
        *param_1 = (byte)uVar11 | 0x80;
        param_1 = param_1 + 1;
      }
      *param_1 = (byte)uVar11;
      param_1 = param_1 + 1;
    } while (piVar10 < piVar2);
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar8 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar8;
}

// GetClassData @ 14c253360

ClassData * __thiscall ds_game::SqlMountListTable::GetClassData(SqlMountListTable *this)

{
  return (ClassData *)&SqlMountListTable_class_data_;
}

// PlacementNew_ @ 14c253380

void * __cdecl ds_game::SqlMountListTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlMountListTable_ds_game__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(Arena **)((longlong)param_2 + 0x18) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x30) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c2533d0

void * __thiscall
ds_game::SqlMountListTable::_scalar_deleting_destructor_(SqlMountListTable *this,uint param_1)

{
  ulonglong uVar1;
  
  this->_padding_ = (longlong)&___7SqlMountListTable_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).mount_nickname_);
  uVar1 = (this->_impl_).equip_item_ids_.soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)(this->_impl_).equip_item_ids_.soo_rep_.field0_0x0.long_rep.capacity
                      * 4 + 8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// SqlMountListTable @ 14c253450

SqlMountListTable * __thiscall
ds_game::SqlMountListTable::SqlMountListTable(SqlMountListTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlMountListTable_ds_game__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).equip_item_ids_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->_impl_).equip_item_ids_.soo_rep_.field0_0x0 + 8) = 0;
  (this->_impl_).mount_nickname_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_)._equip_item_ids_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).mount_uid_ = 0;
  (this->_impl_).mount_id_ = 0;
  (this->_impl_).hunger_ = 0;
  (this->_impl_).fatigue_ = 0;
  return this;
}

// SqlMountListTable @ 14c2534a0

SqlMountListTable * __thiscall
ds_game::SqlMountListTable::SqlMountListTable
          (SqlMountListTable *this,Arena *param_1,SqlMountListTable *param_2)

{
  ArenaStringPtr *this_00;
  long64 lVar1;
  int iVar2;
  TaggedStringPtr TVar3;
  void *pvVar4;
  InternalVisibility local_res8 [8];
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlMountListTable_ds_game__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<int>::RepeatedField<int>
            (&(this->_impl_).equip_item_ids_,local_res8[0],param_1,
             &(param_2->_impl_).equip_item_ids_);
  this_00 = &(param_2->_impl_).mount_nickname_;
  (this->_impl_)._equip_item_ids_cached_byte_size_.atom_ = (atomic<int>)0x0;
  pvVar4 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)local_res8);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  (this->_impl_).mount_nickname_.tagged_ptr_.ptr_ = pvVar4;
  lVar1 = (param_2->_impl_).mount_uid_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).mount_uid_ = lVar1;
  iVar2 = (param_2->_impl_).hunger_;
  (this->_impl_).mount_id_ = (param_2->_impl_).mount_id_;
  (this->_impl_).hunger_ = iVar2;
  (this->_impl_).fatigue_ = (param_2->_impl_).fatigue_;
  return this;
}

// ~SqlMountListTable @ 14c253560

void __thiscall ds_game::SqlMountListTable::~SqlMountListTable(SqlMountListTable *this)

{
  ulonglong uVar1;
  
  this->_padding_ = (longlong)&___7SqlMountListTable_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).mount_nickname_);
  uVar1 = (this->_impl_).equip_item_ids_.soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)(this->_impl_).equip_item_ids_.soo_rep_.field0_0x0.long_rep.capacity
                      * 4 + 8);
    return;
  }
  return;
}

// CopyFrom @ 14c2535d0

void __thiscall
ds_game::SqlMountListTable::CopyFrom(SqlMountListTable *this,SqlMountListTable *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c253610

Metadata * __thiscall
ds_game::SqlMountListTable::GetMetadata(SqlMountListTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SqlMountListTable_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c253650

void __thiscall
ds_game::SqlMountListTable::InternalSwap(SqlMountListTable *this,SqlMountListTable *param_1)

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
            ((char *)&(this->_impl_).equip_item_ids_,(char *)&(param_1->_impl_).equip_item_ids_);
  pvVar3 = (param_1->_impl_).mount_nickname_.tagged_ptr_.ptr_;
  (param_1->_impl_).mount_nickname_.tagged_ptr_.ptr_ =
       (this->_impl_).mount_nickname_.tagged_ptr_.ptr_;
  (this->_impl_).mount_nickname_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).player_uid_,&(this->_impl_).field_0x44,&(param_1->_impl_).player_uid_);
  return;
}

// `dynamic_atexit_destructor_for_'_SqlMountListTable_default_instance_'' @ 1504443c0

void __cdecl ds_game::_dynamic_atexit_destructor_for___SqlMountListTable_default_instance___(void)

{
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// `dynamic_initializer_for_'_SqlDailyQuestPoolTable_default_instance_'' @ 14129b580

void __cdecl ds_game::_dynamic_initializer_for___SqlDailyQuestPoolTable_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SqlDailyQuestPoolTable_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 14129b5a0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors
            (&descriptor_table_ds_5fgame_2fsql_5fdaily_5fquest_5fpool_5ftable_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c24bdb0

void __cdecl ds_game::SqlDailyQuestPoolTable::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  
  google::protobuf::RepeatedField<int>::MergeFrom
            ((RepeatedField<int> *)&param_1[1]._internal_metadata_,
             (RepeatedField<int> *)&param_2[1]._internal_metadata_);
  google::protobuf::RepeatedField<bool>::MergeFrom
            ((RepeatedField<bool> *)(param_1 + 3),(RepeatedField<bool> *)(param_2 + 3));
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 7) != 0) {
    if (((uVar1 & 1) != 0) && (param_2[4]._padding_ != 0)) {
      param_1[4]._padding_ = param_2[4]._padding_;
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (int)param_2[4]._internal_metadata_.ptr_, iVar2 != 0)) {
      *(int *)&param_1[4]._internal_metadata_.ptr_ = iVar2;
    }
    if (((uVar1 & 4) != 0) &&
       (iVar2 = *(int *)((longlong)&param_2[4]._internal_metadata_.ptr_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[4]._internal_metadata_.ptr_ + 4) = iVar2;
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

// Clear @ 14c24be40

void __thiscall ds_game::SqlDailyQuestPoolTable::Clear(SqlDailyQuestPoolTable *this)

{
  ulonglong uVar1;
  ulong64 uVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar1 = (this->_impl_).quest_id_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar1 & 4) == 0) {
    (this->_impl_).quest_id_.soo_rep_.field0_0x0.long_rep.elements_int = uVar1 & 0xfffffffffffffff8;
  }
  else {
    (this->_impl_).quest_id_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  uVar1 = (this->_impl_).is_complete_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar1 & 4) == 0) {
    (this->_impl_).is_complete_.soo_rep_.field0_0x0.long_rep.elements_int =
         uVar1 & 0xfffffffffffffff8;
  }
  else {
    (this->_impl_).is_complete_.soo_rep_.field0_0x0.long_rep.size = 0;
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 7) != 0) {
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).pool_index_ = 0;
    (this->_impl_).suggest_id_ = 0;
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
    uVar3 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar3 = (uint)uVar2 & 3;
  }
  if (uVar3 != 0) {
    google::protobuf::UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14c24bea0

ulong64 __thiscall ds_game::SqlDailyQuestPoolTable::ByteSizeLong(SqlDailyQuestPoolTable *this)

{
  longlong lVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  ulong64 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  _Var2 = google::protobuf::internal::WireFormatLite::Int32SizeWithPackedTagSize
                    (&(this->_impl_).quest_id_,1,&(this->_impl_)._quest_id_cached_byte_size_);
  uVar7 = (this->_impl_).is_complete_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar7 & 4) == 0) {
    uVar5 = (uint)uVar7 & 3;
  }
  else {
    uVar5 = (this->_impl_).is_complete_.soo_rep_.field0_0x0.long_rep.size;
  }
  uVar7 = (ulonglong)uVar5;
  if (uVar5 != 0) {
    uVar3 = (longlong)(int)uVar5 | 1;
    if (__isa_available < 5) {
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 0x3f - (int)lVar1;
    }
    else {
      iVar6 = (int)LZCOUNT(uVar3);
    }
    uVar7 = uVar7 + 1 + (ulonglong)(iVar6 * -9 + 0x280U >> 6);
  }
  uVar5 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var2 = _Var2 + uVar7;
  if ((uVar5 & 7) != 0) {
    if (((uVar5 & 1) != 0) && (uVar7 = (this->_impl_).player_uid_, uVar7 != 0)) {
      uVar7 = uVar7 | 1;
      if (__isa_available < 5) {
        lVar1 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar6 = 0x3f - (int)lVar1;
      }
      else {
        iVar6 = (int)LZCOUNT(uVar7);
      }
      _Var2 = _Var2 + (iVar6 * -9 + 0x2c0U >> 6);
    }
    if (((uVar5 & 2) != 0) && (iVar6 = (this->_impl_).pool_index_, iVar6 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var2 = _Var2 + uVar4;
    }
    if (((uVar5 & 4) != 0) && (iVar6 = (this->_impl_).suggest_id_, iVar6 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar6);
      _Var2 = _Var2 + uVar4;
    }
  }
  _Var2 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var2,&(this->_impl_)._cached_size_);
  return _Var2;
}

// _InternalSerialize @ 14c24bfc0

uchar * __thiscall
ds_game::SqlDailyQuestPoolTable::_InternalSerialize
          (SqlDailyQuestPoolTable *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  int *piVar5;
  uchar *puVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  atomic<int> aVar10;
  uint uVar11;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar3 = (this->_impl_).player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<1>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (iVar2 = (this->_impl_).pool_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar2 = (this->_impl_).suggest_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<3>
                        (param_2,iVar2,param_1);
  }
  aVar10 = (this->_impl_)._quest_id_cached_byte_size_.atom_;
  if (0 < (int)aVar10) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    *param_1 = 0x2a;
    while( true ) {
      param_1 = param_1 + 1;
      bVar7 = aVar10._0_1_;
      if ((uint)aVar10 < 0x80) break;
      aVar10 = (atomic<int>)((uint)aVar10 >> 7);
      *param_1 = bVar7 | 0x80;
    }
    *param_1 = bVar7;
    param_1 = param_1 + 1;
    uVar9 = (this->_impl_).quest_id_.soo_rep_.field0_0x0.long_rep.elements_int;
    piVar5 = (int *)(uVar9 & 0xfffffffffffffff8);
    if ((uVar9 & 4) == 0) {
      uVar11 = (uint)uVar9 & 3;
      piVar5 = &(this->_impl_).quest_id_.soo_rep_.field0_0x0.long_rep.size;
    }
    else {
      uVar11 = (this->_impl_).quest_id_.soo_rep_.field0_0x0.long_rep.size;
    }
    piVar1 = piVar5 + (int)uVar11;
    do {
      if (param_2->end_ <= param_1) {
        param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
      }
      iVar2 = *piVar5;
      piVar5 = piVar5 + 1;
      for (uVar9 = (ulonglong)iVar2; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
        *param_1 = (byte)uVar9 | 0x80;
        param_1 = param_1 + 1;
      }
      *param_1 = (byte)uVar9;
      param_1 = param_1 + 1;
    } while (piVar5 < piVar1);
  }
  uVar9 = (this->_impl_).is_complete_.soo_rep_.field0_0x0.long_rep.elements_int;
  if ((uVar9 & 4) == 0) {
    uVar11 = (uint)uVar9 & 3;
  }
  else {
    uVar11 = (this->_impl_).is_complete_.soo_rep_.field0_0x0.long_rep.size;
  }
  if (0 < (int)uVar11) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar9 = (this->_impl_).is_complete_.soo_rep_.field0_0x0.long_rep.elements_int;
    piVar5 = &(this->_impl_).is_complete_.soo_rep_.field0_0x0.long_rep.size;
    if ((uVar9 & 4) == 0) {
      uVar11 = (uint)uVar9 & 3;
    }
    else {
      uVar11 = *piVar5;
    }
    *param_1 = 0x32;
    uVar9 = (ulonglong)uVar11;
    uVar8 = uVar11;
    while( true ) {
      pbVar4 = param_1 + 1;
      bVar7 = (byte)uVar9;
      if (uVar8 < 0x80) break;
      uVar9 = uVar9 >> 7;
      *pbVar4 = bVar7 | 0x80;
      uVar8 = (uint)uVar9;
      param_1 = pbVar4;
    }
    *pbVar4 = bVar7;
    pbVar4 = param_1 + 2;
    uVar9 = (this->_impl_).is_complete_.soo_rep_.field0_0x0.long_rep.elements_int;
    if ((uVar9 & 4) != 0) {
      piVar5 = (int *)(uVar9 & 0xfffffffffffffff8);
    }
    if ((longlong)param_2->end_ - (longlong)pbVar4 < (longlong)(int)uVar11) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteRawFallback
                          (param_2,piVar5,uVar11,pbVar4);
    }
    else {
      memcpy(pbVar4,piVar5,(ulonglong)uVar11);
      param_1 = pbVar4 + (int)uVar11;
    }
  }
  if ((this->_padding_ & 1) != 0) {
    puVar6 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar6;
  }
  return param_1;
}

// GetClassData @ 14c24c1f0

ClassData * __thiscall ds_game::SqlDailyQuestPoolTable::GetClassData(SqlDailyQuestPoolTable *this)

{
  return (ClassData *)&SqlDailyQuestPoolTable_class_data_;
}

// PlacementNew_ @ 14c24c210

void * __cdecl
ds_game::SqlDailyQuestPoolTable::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SqlDailyQuestPoolTable_ds_game__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(Arena **)((longlong)param_2 + 0x18) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x20) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(Arena **)((longlong)param_2 + 0x30) = param_3;
  *(undefined1 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c24c250

void * __thiscall
ds_game::SqlDailyQuestPoolTable::_scalar_deleting_destructor_
          (SqlDailyQuestPoolTable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SqlDailyQuestPoolTable_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  Impl_::~Impl_(&this->_impl_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// _Copy_memmove_n<bool_const_*,bool_*> @ 14c24c2b0

bool * __cdecl
std::_Copy_memmove_n<bool_const_*,bool_*>(bool *param_1,ulong64 param_2,bool *param_3)

{
  memmove(param_3,param_1,param_2);
  return param_3 + param_2;
}

// _Copy_memmove_tail<bool_*> @ 14c24c2f0

bool * __cdecl
std::_Copy_memmove_tail<bool_*>(char *param_1,bool *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return param_2 + param_3;
}

// uninitialized_copy_n<bool_const_*,int,bool_*> @ 14c24c320

bool * __cdecl
std::uninitialized_copy_n<bool_const_*,int,bool_*>(bool *param_1,int param_2,bool *param_3)

{
  if (param_2 < 1) {
    return param_3;
  }
  memmove(param_3,param_1,(longlong)param_2);
  return param_3 + param_2;
}

// RepeatedField<bool> @ 14c24c370

RepeatedField<bool> * __thiscall
google::protobuf::RepeatedField<bool>::RepeatedField<bool>
          (RepeatedField<bool> *this,InternalVisibility param_1,Arena *param_2,
          RepeatedField<bool> *param_3)

{
  ulonglong uVar1;
  void *_Src;
  uint uVar2;
  int *_Dst;
  
  (this->soo_rep_).field0_0x0.long_rep.elements_int = (ulong64)param_2;
  _Dst = &(this->soo_rep_).field0_0x0.long_rep.size;
  *(undefined1 *)_Dst = 0;
  uVar1 = (param_3->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((uVar1 & 4) == 0) {
    uVar2 = (uint)uVar1 & 3;
  }
  else {
    uVar2 = (param_3->soo_rep_).field0_0x0.long_rep.size;
  }
  if (uVar2 != 0) {
    if ((int)uVar2 < 4) {
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (this->soo_rep_).field0_0x0.long_rep.elements_int | (longlong)(int)uVar2;
    }
    else {
      Grow(this,true,0,uVar2);
      *_Dst = uVar2;
      _Dst = (int *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    if ((uVar1 & 4) == 0) {
      _Src = (void *)((longlong)&(param_3->soo_rep_).field0_0x0 + 8);
    }
    else {
      _Src = (void *)((param_3->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    if (0 < (int)uVar2) {
      memmove(_Dst,_Src,(longlong)(int)uVar2);
    }
  }
  return this;
}

// SqlDailyQuestPoolTable @ 14c24c430

SqlDailyQuestPoolTable * __thiscall
ds_game::SqlDailyQuestPoolTable::SqlDailyQuestPoolTable(SqlDailyQuestPoolTable *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlDailyQuestPoolTable_ds_game__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).quest_id_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->_impl_).quest_id_.soo_rep_.field0_0x0 + 8) = 0;
  (this->_impl_)._quest_id_cached_byte_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_).is_complete_.soo_rep_.field0_0x0.long_rep.elements_int = (ulong64)param_1;
  *(undefined1 *)((longlong)&(this->_impl_).is_complete_.soo_rep_.field0_0x0 + 8) = 0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).pool_index_ = 0;
  (this->_impl_).suggest_id_ = 0;
  return this;
}

// SqlDailyQuestPoolTable @ 14c24c470

SqlDailyQuestPoolTable * __thiscall
ds_game::SqlDailyQuestPoolTable::SqlDailyQuestPoolTable
          (SqlDailyQuestPoolTable *this,Arena *param_1,SqlDailyQuestPoolTable *param_2)

{
  int iVar1;
  int iVar2;
  InternalVisibility local_res8;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SqlDailyQuestPoolTable_ds_game__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<int>::RepeatedField<int>
            (&(this->_impl_).quest_id_,local_res8,param_1,&(param_2->_impl_).quest_id_);
  (this->_impl_)._quest_id_cached_byte_size_.atom_ = (atomic<int>)0x0;
  google::protobuf::RepeatedField<bool>::RepeatedField<bool>
            (&(this->_impl_).is_complete_,local_res8,param_1,&(param_2->_impl_).is_complete_);
  iVar1 = (param_2->_impl_).pool_index_;
  iVar2 = (param_2->_impl_).suggest_id_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).pool_index_ = iVar1;
  (this->_impl_).suggest_id_ = iVar2;
  return this;
}

// ~RepeatedField<bool> @ 14c24c520

void __thiscall
google::protobuf::RepeatedField<bool>::~RepeatedField<bool>(RepeatedField<bool> *this)

{
  ulonglong uVar1;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((uVar1 & 4) != 0) {
    uVar1 = uVar1 & 0xfffffffffffffff8;
    if (*(longlong *)(uVar1 - 8) == 0) {
      ::operator_delete((void *)(uVar1 - 8),
                        (longlong)(this->soo_rep_).field0_0x0.long_rep.capacity + 8);
      return;
    }
  }
  return;
}

// ~Impl_ @ 14c24c550

void __thiscall ds_game::SqlDailyQuestPoolTable::Impl_::~Impl_(Impl_ *this)

{
  ulonglong uVar1;
  
  uVar1 = (this->is_complete_).soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)(this->is_complete_).soo_rep_.field0_0x0.long_rep.capacity + 8);
  }
  uVar1 = (this->quest_id_).soo_rep_.field0_0x0.long_rep.elements_int;
  if (((uVar1 & 4) != 0) && (uVar1 = uVar1 & 0xfffffffffffffff8, *(longlong *)(uVar1 - 8) == 0)) {
    ::operator_delete((void *)(uVar1 - 8),
                      (longlong)(this->quest_id_).soo_rep_.field0_0x0.long_rep.capacity * 4 + 8);
    return;
  }
  return;
}

// ~SqlDailyQuestPoolTable @ 14c24c5c0

void __thiscall
ds_game::SqlDailyQuestPoolTable::~SqlDailyQuestPoolTable(SqlDailyQuestPoolTable *this)

{
  this->_padding_ = (longlong)&___7SqlDailyQuestPoolTable_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  Impl_::~Impl_(&this->_impl_);
  return;
}

// CopyFrom @ 14c24c600

void __thiscall
ds_game::SqlDailyQuestPoolTable::CopyFrom
          (SqlDailyQuestPoolTable *this,SqlDailyQuestPoolTable *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != this) {
    Clear(this);
    google::protobuf::RepeatedField<int>::MergeFrom
              (&(this->_impl_).quest_id_,&(param_1->_impl_).quest_id_);
    google::protobuf::RepeatedField<bool>::MergeFrom
              (&(this->_impl_).is_complete_,&(param_1->_impl_).is_complete_);
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar1 & 7) != 0) {
      if (((uVar1 & 1) != 0) && (lVar3 = (param_1->_impl_).player_uid_, lVar3 != 0)) {
        (this->_impl_).player_uid_ = lVar3;
      }
      if (((uVar1 & 2) != 0) && (iVar2 = (param_1->_impl_).pool_index_, iVar2 != 0)) {
        (this->_impl_).pool_index_ = iVar2;
      }
      if (((uVar1 & 4) != 0) && (iVar2 = (param_1->_impl_).suggest_id_, iVar2 != 0)) {
        (this->_impl_).suggest_id_ = iVar2;
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

// GetMetadata @ 14c24c6a0

Metadata * __thiscall
ds_game::SqlDailyQuestPoolTable::GetMetadata
          (SqlDailyQuestPoolTable *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SqlDailyQuestPoolTable_class_data_)
  ;
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// Grow @ 14c24c6e0

void __thiscall
google::protobuf::RepeatedField<bool>::Grow
          (RepeatedField<bool> *this,bool param_1,int param_2,int param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *_Src;
  Arena *this_00;
  int iVar4;
  ulong64 uVar5;
  
  iVar4 = 3;
  if (!param_1) {
    iVar4 = (this->soo_rep_).field0_0x0.long_rep.capacity;
  }
  uVar2 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  this_00 = (Arena *)(uVar2 & 0xfffffffffffffff8);
  if ((uVar2 & 4) != 0) {
    this_00 = (Arena *)this_00[-1].impl_.first_arena_.cached_blocks_;
  }
  if (param_3 < 8) {
    iVar4 = 8;
  }
  else if (iVar4 < 0x3ffffffc) {
    if (iVar4 < 8) {
      iVar4 = 0;
    }
    iVar4 = iVar4 * 2 + 8;
    if (iVar4 < param_3) {
      iVar4 = param_3;
    }
  }
  else {
    iVar4 = 0x7fffffff;
  }
  uVar2 = (ulonglong)iVar4;
  if (this_00 == (Arena *)0x0) {
    if (0x7fffffff < uVar2) {
      iVar4 = 0x7fffffff;
    }
    puVar3 = ::operator_new(uVar2 + 8);
  }
  else {
    puVar3 = Arena::AllocateForArray(this_00,uVar2 + 0xf & 0xfffffffffffffff8);
  }
  *puVar3 = this_00;
  if (0 < param_2) {
    if (param_1) {
      _Src = (void *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
    }
    else {
      _Src = (void *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    memcpy(puVar3 + 1,_Src,(longlong)param_2);
  }
  piVar1 = &(this->soo_rep_).field0_0x0.long_rep.capacity;
  if (param_1) {
    (this->soo_rep_).field0_0x0.long_rep.size = *(uint *)&(this->soo_rep_).field0_0x0 & 3;
  }
  else {
    uVar2 = (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
    uVar5 = (longlong)*piVar1 + 8;
    if (*(Arena **)(uVar2 - 8) == (Arena *)0x0) {
      ::operator_delete((void *)(uVar2 - 8),uVar5);
    }
    else {
      Arena::ReturnArrayMemory(*(Arena **)(uVar2 - 8),(void *)(uVar2 - 8),uVar5);
    }
  }
  *piVar1 = iVar4;
  (this->soo_rep_).field0_0x0.long_rep.elements_int = (ulonglong)(puVar3 + 1) | 4;
  return;
}

// GrowNoAnnotate @ 14c24c6f0

void __thiscall
google::protobuf::RepeatedField<bool>::GrowNoAnnotate
          (RepeatedField<bool> *this,bool param_1,int param_2,int param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *_Src;
  Arena *this_00;
  int iVar4;
  ulong64 uVar5;
  
  iVar4 = 3;
  if (!param_1) {
    iVar4 = (this->soo_rep_).field0_0x0.long_rep.capacity;
  }
  uVar2 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  this_00 = (Arena *)(uVar2 & 0xfffffffffffffff8);
  if ((uVar2 & 4) != 0) {
    this_00 = (Arena *)this_00[-1].impl_.first_arena_.cached_blocks_;
  }
  if (param_3 < 8) {
    iVar4 = 8;
  }
  else if (iVar4 < 0x3ffffffc) {
    if (iVar4 < 8) {
      iVar4 = 0;
    }
    iVar4 = iVar4 * 2 + 8;
    if (iVar4 < param_3) {
      iVar4 = param_3;
    }
  }
  else {
    iVar4 = 0x7fffffff;
  }
  uVar2 = (ulonglong)iVar4;
  if (this_00 == (Arena *)0x0) {
    if (0x7fffffff < uVar2) {
      iVar4 = 0x7fffffff;
    }
    puVar3 = ::operator_new(uVar2 + 8);
  }
  else {
    puVar3 = Arena::AllocateForArray(this_00,uVar2 + 0xf & 0xfffffffffffffff8);
  }
  *puVar3 = this_00;
  if (0 < param_2) {
    if (param_1) {
      _Src = (void *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
    }
    else {
      _Src = (void *)((this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    memcpy(puVar3 + 1,_Src,(longlong)param_2);
  }
  piVar1 = &(this->soo_rep_).field0_0x0.long_rep.capacity;
  if (param_1) {
    (this->soo_rep_).field0_0x0.long_rep.size = *(uint *)&(this->soo_rep_).field0_0x0 & 3;
  }
  else {
    uVar2 = (this->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8;
    uVar5 = (longlong)*piVar1 + 8;
    if (*(Arena **)(uVar2 - 8) == (Arena *)0x0) {
      ::operator_delete((void *)(uVar2 - 8),uVar5);
    }
    else {
      Arena::ReturnArrayMemory(*(Arena **)(uVar2 - 8),(void *)(uVar2 - 8),uVar5);
    }
  }
  *piVar1 = iVar4;
  (this->soo_rep_).field0_0x0.long_rep.elements_int = (ulonglong)(puVar3 + 1) | 4;
  return;
}

// InternalSwap @ 14c24c830

void __thiscall
ds_game::SqlDailyQuestPoolTable::InternalSwap
          (SqlDailyQuestPoolTable *this,SqlDailyQuestPoolTable *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).quest_id_,(char *)&(param_1->_impl_).quest_id_);
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).is_complete_,(char *)&(param_1->_impl_).is_complete_);
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).player_uid_,(char *)&(param_1->_impl_).player_uid_);
  return;
}

// MergeFrom @ 14c24c8a0

void __thiscall
google::protobuf::RepeatedField<bool>::MergeFrom
          (RepeatedField<bool> *this,RepeatedField<bool> *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  void *_Src;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  uVar2 = (param_1->soo_rep_).field0_0x0.long_rep.elements_int;
  if ((uVar2 & 4) == 0) {
    uVar5 = (uint)uVar2 & 3;
  }
  else {
    uVar5 = (param_1->soo_rep_).field0_0x0.long_rep.size;
  }
  if (uVar5 != 0) {
    uVar3 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
    uVar7 = (uint)uVar3 & 3;
    if ((uVar3 & 4) == 0) {
      iVar4 = 3;
      uVar1 = uVar7;
    }
    else {
      uVar1 = (this->soo_rep_).field0_0x0.long_rep.size;
      iVar4 = (this->soo_rep_).field0_0x0.long_rep.capacity;
    }
    iVar6 = uVar1 + uVar5;
    if (iVar4 < iVar6) {
      if ((uVar3 & 4) != 0) {
        uVar7 = (this->soo_rep_).field0_0x0.long_rep.size;
      }
      Grow(this,(uVar3 & 4) == 0,uVar7,iVar6);
    }
    uVar3 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
    if ((uVar3 & 4) == 0) {
      puVar8 = (undefined1 *)((longlong)&(this->soo_rep_).field0_0x0 + 8);
      uVar7 = (uint)uVar3 & 3;
      (this->soo_rep_).field0_0x0.long_rep.elements_int =
           (longlong)iVar6 | uVar3 & 0xfffffffffffffff8;
    }
    else {
      uVar7 = (this->soo_rep_).field0_0x0.long_rep.size;
      puVar8 = (undefined1 *)(uVar3 & 0xfffffffffffffff8);
      (this->soo_rep_).field0_0x0.long_rep.size = iVar6;
    }
    if ((uVar2 & 4) == 0) {
      _Src = (void *)((longlong)&(param_1->soo_rep_).field0_0x0 + 8);
    }
    else {
      _Src = (void *)((param_1->soo_rep_).field0_0x0.long_rep.elements_int & 0xfffffffffffffff8);
    }
    if (0 < (int)uVar5) {
      memmove(puVar8 + (int)uVar7,_Src,(longlong)(int)uVar5);
    }
  }
  return;
}

// Reserve @ 14c24c990

void __thiscall
google::protobuf::RepeatedField<bool>::Reserve(RepeatedField<bool> *this,int param_1)

{
  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = (this->soo_rep_).field0_0x0.long_rep.elements_int;
  iVar2 = 3;
  bVar3 = (uVar1 & 4) == 0;
  if ((uVar1 & 4) != 0) {
    iVar2 = (this->soo_rep_).field0_0x0.long_rep.capacity;
  }
  if (iVar2 < param_1) {
    if ((uVar1 & 4) == 0) {
      Grow(this,bVar3,(uint)uVar1 & 3,param_1);
      return;
    }
    Grow(this,bVar3,(this->soo_rep_).field0_0x0.long_rep.size,param_1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_SqlDailyQuestPoolTable_default_instance_'' @ 1504442c0

void __cdecl
ds_game::_dynamic_atexit_destructor_for___SqlDailyQuestPoolTable_default_instance___(void)

{
  return;
}


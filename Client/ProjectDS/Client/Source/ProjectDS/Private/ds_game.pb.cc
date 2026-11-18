// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 172

// `dynamic_initializer_for_'_DbWorkItem_default_instance_'' @ 1412920b0

void __cdecl ds_game::_dynamic_initializer_for___DbWorkItem_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___DbWorkItem_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 1412920d0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_ds_5fgame_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// MergeImpl @ 14c148b40

void __cdecl ds_game::DbWorkItem::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  InternalMetadata *this;
  uint uVar1;
  int iVar2;
  int iVar3;
  MessageLite *pMVar4;
  Arena *pAVar5;
  
  this = &param_1->_internal_metadata_;
  pAVar5 = (Arena *)(this->ptr_ & 0xfffffffffffffffe);
  if ((this->ptr_ & 1) != 0) {
    pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if (((uVar1 & 1) != 0) && (iVar2 = (int)param_2[1]._internal_metadata_.ptr_, iVar2 != 0)) {
    *(int *)&param_1[1]._internal_metadata_.ptr_ = iVar2;
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  iVar2 = (int)param_2[2]._internal_metadata_.ptr_;
  if (iVar2 != 0) {
    iVar3 = (int)param_1[2]._internal_metadata_.ptr_;
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        clear_Item((DbWorkItem *)param_1);
      }
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar2;
    }
    switch(iVar2) {
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xe:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x1f:
    case 0x20:
    case 0x22:
    case 0x29:
    case 0x35:
    case 0x36:
    case 0x38:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x47:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
    case 0x66:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
      if (iVar3 == iVar2) {
        google::protobuf::Message::MergeFrom
                  ((Message *)param_1[2]._padding_,(Message *)param_2[2]._padding_);
      }
      else {
        pMVar4 = google::protobuf::MessageLite::CopyConstruct
                           (pAVar5,(MessageLite *)param_2[2]._padding_);
        param_1[2]._padding_ = (longlong)pMVar4;
      }
    }
  }
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (this,(UnknownFieldSet *)
                    (((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8));
    return;
  }
  return;
}

// Clear @ 14c148cb0

void __thiscall ds_game::DbWorkItem::Clear(DbWorkItem *this)

{
  (this->_impl_).dirty_flag_ = 0;
  clear_Item(this);
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c148cf0

ulong64 __thiscall ds_game::DbWorkItem::ByteSizeLong(DbWorkItem *this)

{
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  longlong lVar4;
  __uint64 _Var5;
  
  _Var5 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar1 = (this->_impl_).dirty_flag_, iVar1 != 0)) {
    uVar2 = (longlong)iVar1 | 1;
    if (__isa_available < 5) {
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar1 = 0x3f - (int)lVar4;
    }
    else {
      iVar1 = (int)LZCOUNT(uVar2);
    }
    _Var5 = (ulonglong)(iVar1 * -9 + 0x280U >> 6) + 2;
  }
  switch((this->_impl_)._oneof_case_[0]) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xe:
    uVar3 = google::protobuf::internal::WireFormatLite::MessageSize<google::protobuf::Message>
                      ((this->_impl_).Item_.characterlevel_);
    lVar4 = uVar3 + 1;
    break;
  default:
    goto switchD_14c148d64_caseD_8;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x1f:
  case 0x20:
  case 0x22:
  case 0x29:
  case 0x35:
  case 0x36:
  case 0x38:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x47:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 0x66:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
    uVar3 = google::protobuf::internal::WireFormatLite::MessageSize<google::protobuf::Message>
                      ((this->_impl_).Item_.characterlevel_);
    lVar4 = uVar3 + 2;
  }
  _Var5 = _Var5 + lVar4;
switchD_14c148d64_caseD_8:
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var5,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c148e20

uchar * __thiscall
ds_game::DbWorkItem::_InternalSerialize
          (DbWorkItem *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  uchar *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  
  switch((this->_impl_)._oneof_case_[0]) {
  case 3:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 3;
    break;
  case 4:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 4;
    break;
  case 5:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 5;
    break;
  case 6:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 6;
    break;
  case 7:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 7;
    break;
  default:
    goto switchD_14c148e62_caseD_8;
  case 9:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 9;
    break;
  case 10:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 10;
    break;
  case 0xb:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0xb;
    break;
  case 0xc:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0xc;
    break;
  case 0xe:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0xe;
    break;
  case 0x10:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x10;
    break;
  case 0x11:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x11;
    break;
  case 0x12:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x12;
    break;
  case 0x1f:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x1f;
    break;
  case 0x20:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x20;
    break;
  case 0x22:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x22;
    break;
  case 0x29:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x29;
    break;
  case 0x35:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x35;
    break;
  case 0x36:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x36;
    break;
  case 0x38:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x38;
    break;
  case 0x3a:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x3a;
    break;
  case 0x3b:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x3b;
    break;
  case 0x3c:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x3c;
    break;
  case 0x3d:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x3d;
    break;
  case 0x47:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x47;
    break;
  case 0x51:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x51;
    break;
  case 0x52:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x52;
    break;
  case 0x53:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x53;
    break;
  case 0x54:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x54;
    break;
  case 0x55:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x55;
    break;
  case 0x56:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x56;
    break;
  case 0x57:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x57;
    break;
  case 0x58:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x58;
    break;
  case 0x59:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x59;
    break;
  case 0x5a:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x5a;
    break;
  case 0x5b:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x5b;
    break;
  case 0x5c:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x5c;
    break;
  case 0x5d:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x5d;
    break;
  case 0x5e:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x5e;
    break;
  case 0x5f:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x5f;
    break;
  case 0x60:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x60;
    break;
  case 0x61:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x61;
    break;
  case 0x62:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x62;
    break;
  case 0x66:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x66;
    break;
  case 0x68:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x68;
    break;
  case 0x69:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x69;
    break;
  case 0x6a:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x6a;
    break;
  case 0x6b:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x6b;
    break;
  case 0x6c:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x6c;
    break;
  case 0x6d:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x6d;
    break;
  case 0x6e:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x6e;
    break;
  case 0x6f:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x6f;
    break;
  case 0x70:
    iVar1 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).Item_.characterlevel_);
    iVar4 = 0x70;
  }
  param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                      (iVar4,(MessageLite *)(this->_impl_).Item_.characterlevel_,iVar1,param_1,
                       param_2);
switchD_14c148e62_caseD_8:
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).dirty_flag_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar6 = (ulonglong)(this->_impl_).dirty_flag_;
    uVar5 = 8000;
    do {
      pbVar7 = param_1;
      bVar3 = (byte)uVar5;
      uVar5 = uVar5 >> 7;
      *pbVar7 = bVar3 | 0x80;
      param_1 = pbVar7 + 1;
    } while (0x7f < uVar5);
    pbVar7[1] = (byte)uVar5;
    pbVar7 = pbVar7 + 2;
    for (; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
      *pbVar7 = (byte)uVar6 | 0x80;
      pbVar7 = pbVar7 + 1;
    }
    *pbVar7 = (byte)uVar6;
    param_1 = pbVar7 + 1;
  }
  if ((this->_padding_ & 1) != 0) {
    puVar2 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar2;
  }
  return param_1;
}

// GetClassData @ 14c149460

ClassData * __thiscall ds_game::DbWorkItem::GetClassData(DbWorkItem *this)

{
  return (ClassData *)&DbWorkItem_class_data_;
}

// PlacementNew_ @ 14c149480

void * __cdecl ds_game::DbWorkItem::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7DbWorkItem_ds_game__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c1494b0

void * __thiscall ds_game::DbWorkItem::_scalar_deleting_destructor_(DbWorkItem *this,uint param_1)

{
  this->_padding_ = (longlong)&___7DbWorkItem_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((this->_impl_)._oneof_case_[0] != 0) {
    clear_Item(this);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// GetOwnedMessage<ds_game::SqlAchievementGroupTable> @ 14c149510

SqlAchievementGroupTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlAchievementGroupTable>
          (Arena *param_1,SqlAchievementGroupTable *param_2,Arena *param_3)

{
  SqlAchievementGroupTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlAchievementGroupTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlAchievementGroupTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlActionFunctionTable> @ 14c149520

SqlActionFunctionTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlActionFunctionTable>
          (Arena *param_1,SqlActionFunctionTable *param_2,Arena *param_3)

{
  SqlActionFunctionTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlActionFunctionTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlActionFunctionTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlCharacterBuffTable> @ 14c149530

SqlCharacterBuffTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlCharacterBuffTable>
          (Arena *param_1,SqlCharacterBuffTable *param_2,Arena *param_3)

{
  SqlCharacterBuffTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlCharacterBuffTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlCharacterBuffTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlCharacterLevelTable> @ 14c149540

SqlCharacterLevelTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlCharacterLevelTable>
          (Arena *param_1,SqlCharacterLevelTable *param_2,Arena *param_3)

{
  SqlCharacterLevelTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlCharacterLevelTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlCharacterLevelTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlCharacterSkinTable> @ 14c149550

SqlCharacterSkinTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlCharacterSkinTable>
          (Arena *param_1,SqlCharacterSkinTable *param_2,Arena *param_3)

{
  SqlCharacterSkinTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlCharacterSkinTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlCharacterSkinTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlCharacterStatusTable> @ 14c149560

SqlCharacterStatusTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlCharacterStatusTable>
          (Arena *param_1,SqlCharacterStatusTable *param_2,Arena *param_3)

{
  SqlCharacterStatusTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlCharacterStatusTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlCharacterStatusTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlCombatPowerTable> @ 14c149570

SqlCombatPowerTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlCombatPowerTable>
          (Arena *param_1,SqlCombatPowerTable *param_2,Arena *param_3)

{
  SqlCombatPowerTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlCombatPowerTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlCombatPowerTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlCoolTimeTable> @ 14c149580

SqlCoolTimeTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlCoolTimeTable>
          (Arena *param_1,SqlCoolTimeTable *param_2,Arena *param_3)

{
  SqlCoolTimeTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlCoolTimeTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlCoolTimeTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlDailyQuestPoolTable> @ 14c149590

SqlDailyQuestPoolTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlDailyQuestPoolTable>
          (Arena *param_1,SqlDailyQuestPoolTable *param_2,Arena *param_3)

{
  SqlDailyQuestPoolTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlDailyQuestPoolTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlDailyQuestPoolTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlDailyQuestTable> @ 14c1495a0

SqlDailyQuestTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlDailyQuestTable>
          (Arena *param_1,SqlDailyQuestTable *param_2,Arena *param_3)

{
  SqlDailyQuestTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlDailyQuestTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlDailyQuestTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlEquipmentTable> @ 14c1495b0

SqlEquipmentTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlEquipmentTable>
          (Arena *param_1,SqlEquipmentTable *param_2,Arena *param_3)

{
  SqlEquipmentTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlEquipmentTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlEquipmentTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlGPlayerTable> @ 14c1495c0

SqlGPlayerTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlGPlayerTable>
          (Arena *param_1,SqlGPlayerTable *param_2,Arena *param_3)

{
  SqlGPlayerTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlGPlayerTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlGPlayerTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlHaloPointTable> @ 14c1495d0

SqlHaloPointTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlHaloPointTable>
          (Arena *param_1,SqlHaloPointTable *param_2,Arena *param_3)

{
  SqlHaloPointTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlHaloPointTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlHaloPointTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlInstanceQuestTable> @ 14c1495e0

SqlInstanceQuestTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlInstanceQuestTable>
          (Arena *param_1,SqlInstanceQuestTable *param_2,Arena *param_3)

{
  SqlInstanceQuestTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlInstanceQuestTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlInstanceQuestTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlInvenExtendInfoTable> @ 14c1495f0

SqlInvenExtendInfoTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlInvenExtendInfoTable>
          (Arena *param_1,SqlInvenExtendInfoTable *param_2,Arena *param_3)

{
  SqlInvenExtendInfoTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlInvenExtendInfoTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlInvenExtendInfoTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlLearnedSkillTable> @ 14c149600

SqlLearnedSkillTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlLearnedSkillTable>
          (Arena *param_1,SqlLearnedSkillTable *param_2,Arena *param_3)

{
  SqlLearnedSkillTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlLearnedSkillTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlLearnedSkillTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlLocalQuestTable> @ 14c149610

SqlLocalQuestTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlLocalQuestTable>
          (Arena *param_1,SqlLocalQuestTable *param_2,Arena *param_3)

{
  SqlLocalQuestTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlLocalQuestTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlLocalQuestTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlMainQuestTable> @ 14c149620

SqlMainQuestTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlMainQuestTable>
          (Arena *param_1,SqlMainQuestTable *param_2,Arena *param_3)

{
  SqlMainQuestTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlMainQuestTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlMainQuestTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlMoneyTable> @ 14c149630

SqlMoneyTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlMoneyTable>
          (Arena *param_1,SqlMoneyTable *param_2,Arena *param_3)

{
  SqlMoneyTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlMoneyTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlMoneyTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlMonthlyQuestTable> @ 14c149640

SqlMonthlyQuestTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlMonthlyQuestTable>
          (Arena *param_1,SqlMonthlyQuestTable *param_2,Arena *param_3)

{
  SqlMonthlyQuestTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlMonthlyQuestTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlMonthlyQuestTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlMountInvenInfoTable> @ 14c149650

SqlMountInvenInfoTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlMountInvenInfoTable>
          (Arena *param_1,SqlMountInvenInfoTable *param_2,Arena *param_3)

{
  SqlMountInvenInfoTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlMountInvenInfoTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlMountInvenInfoTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlMountListTable> @ 14c149660

SqlMountListTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlMountListTable>
          (Arena *param_1,SqlMountListTable *param_2,Arena *param_3)

{
  SqlMountListTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlMountListTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlMountListTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlMountLostTable> @ 14c149670

SqlMountLostTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlMountLostTable>
          (Arena *param_1,SqlMountLostTable *param_2,Arena *param_3)

{
  SqlMountLostTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlMountLostTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlMountLostTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlNpcRelationTable> @ 14c149680

SqlNpcRelationTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlNpcRelationTable>
          (Arena *param_1,SqlNpcRelationTable *param_2,Arena *param_3)

{
  SqlNpcRelationTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlNpcRelationTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlNpcRelationTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlPlayerActionPointTable> @ 14c149690

SqlPlayerActionPointTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlPlayerActionPointTable>
          (Arena *param_1,SqlPlayerActionPointTable *param_2,Arena *param_3)

{
  SqlPlayerActionPointTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlPlayerActionPointTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlPlayerActionPointTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlPlayerBreachRecordHistoryTable> @ 14c1496a0

SqlPlayerBreachRecordHistoryTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlPlayerBreachRecordHistoryTable>
          (Arena *param_1,SqlPlayerBreachRecordHistoryTable *param_2,Arena *param_3)

{
  SqlPlayerBreachRecordHistoryTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlPlayerBreachRecordHistoryTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlPlayerBreachRecordHistoryTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlPlayerBreachRecordTable> @ 14c1496b0

SqlPlayerBreachRecordTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlPlayerBreachRecordTable>
          (Arena *param_1,SqlPlayerBreachRecordTable *param_2,Arena *param_3)

{
  SqlPlayerBreachRecordTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlPlayerBreachRecordTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlPlayerBreachRecordTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlPlayerConnectionDt> @ 14c1496c0

SqlPlayerConnectionDt * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlPlayerConnectionDt>
          (Arena *param_1,SqlPlayerConnectionDt *param_2,Arena *param_3)

{
  SqlPlayerConnectionDt *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlPlayerConnectionDt *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlPlayerConnectionDt *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlPlayerDungeonRecordTable> @ 14c1496d0

SqlPlayerDungeonRecordTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlPlayerDungeonRecordTable>
          (Arena *param_1,SqlPlayerDungeonRecordTable *param_2,Arena *param_3)

{
  SqlPlayerDungeonRecordTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlPlayerDungeonRecordTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlPlayerDungeonRecordTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlPlayerFusionSlotTable> @ 14c1496e0

SqlPlayerFusionSlotTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlPlayerFusionSlotTable>
          (Arena *param_1,SqlPlayerFusionSlotTable *param_2,Arena *param_3)

{
  SqlPlayerFusionSlotTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlPlayerFusionSlotTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlPlayerFusionSlotTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlPlayerGradeTable> @ 14c1496f0

SqlPlayerGradeTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlPlayerGradeTable>
          (Arena *param_1,SqlPlayerGradeTable *param_2,Arena *param_3)

{
  SqlPlayerGradeTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlPlayerGradeTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlPlayerGradeTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlPlayerIconEquipTable> @ 14c149700

SqlPlayerIconEquipTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlPlayerIconEquipTable>
          (Arena *param_1,SqlPlayerIconEquipTable *param_2,Arena *param_3)

{
  SqlPlayerIconEquipTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlPlayerIconEquipTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlPlayerIconEquipTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlPlayerIconTable> @ 14c149710

SqlPlayerIconTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlPlayerIconTable>
          (Arena *param_1,SqlPlayerIconTable *param_2,Arena *param_3)

{
  SqlPlayerIconTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlPlayerIconTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlPlayerIconTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlPositionTable> @ 14c149720

SqlPositionTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlPositionTable>
          (Arena *param_1,SqlPositionTable *param_2,Arena *param_3)

{
  SqlPositionTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlPositionTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlPositionTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlPvpTable> @ 14c149730

SqlPvpTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlPvpTable>
          (Arena *param_1,SqlPvpTable *param_2,Arena *param_3)

{
  SqlPvpTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlPvpTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlPvpTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlQuestCompleteTable> @ 14c149740

SqlQuestCompleteTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlQuestCompleteTable>
          (Arena *param_1,SqlQuestCompleteTable *param_2,Arena *param_3)

{
  SqlQuestCompleteTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlQuestCompleteTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlQuestCompleteTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlQuestMiscTable> @ 14c149750

SqlQuestMiscTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlQuestMiscTable>
          (Arena *param_1,SqlQuestMiscTable *param_2,Arena *param_3)

{
  SqlQuestMiscTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlQuestMiscTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlQuestMiscTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlQuestTrackingTable> @ 14c149760

SqlQuestTrackingTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlQuestTrackingTable>
          (Arena *param_1,SqlQuestTrackingTable *param_2,Arena *param_3)

{
  SqlQuestTrackingTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlQuestTrackingTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlQuestTrackingTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlQuickSlotTable> @ 14c149770

SqlQuickSlotTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlQuickSlotTable>
          (Arena *param_1,SqlQuickSlotTable *param_2,Arena *param_3)

{
  SqlQuickSlotTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlQuickSlotTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlQuickSlotTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlRepeatQuestCompleteTable> @ 14c149780

SqlRepeatQuestCompleteTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlRepeatQuestCompleteTable>
          (Arena *param_1,SqlRepeatQuestCompleteTable *param_2,Arena *param_3)

{
  SqlRepeatQuestCompleteTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlRepeatQuestCompleteTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlRepeatQuestCompleteTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlRepeatQuestTable> @ 14c149790

SqlRepeatQuestTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlRepeatQuestTable>
          (Arena *param_1,SqlRepeatQuestTable *param_2,Arena *param_3)

{
  SqlRepeatQuestTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlRepeatQuestTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlRepeatQuestTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlResurrectTable> @ 14c1497a0

SqlResurrectTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlResurrectTable>
          (Arena *param_1,SqlResurrectTable *param_2,Arena *param_3)

{
  SqlResurrectTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlResurrectTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlResurrectTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlReturnHomeTable> @ 14c1497b0

SqlReturnHomeTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlReturnHomeTable>
          (Arena *param_1,SqlReturnHomeTable *param_2,Arena *param_3)

{
  SqlReturnHomeTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlReturnHomeTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlReturnHomeTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlRingCommandTable> @ 14c1497c0

SqlRingCommandTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlRingCommandTable>
          (Arena *param_1,SqlRingCommandTable *param_2,Arena *param_3)

{
  SqlRingCommandTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlRingCommandTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlRingCommandTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlShopBuyLimitTable> @ 14c1497d0

SqlShopBuyLimitTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlShopBuyLimitTable>
          (Arena *param_1,SqlShopBuyLimitTable *param_2,Arena *param_3)

{
  SqlShopBuyLimitTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlShopBuyLimitTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlShopBuyLimitTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlTimeScheduleTable> @ 14c1497e0

SqlTimeScheduleTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlTimeScheduleTable>
          (Arena *param_1,SqlTimeScheduleTable *param_2,Arena *param_3)

{
  SqlTimeScheduleTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlTimeScheduleTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlTimeScheduleTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlWaitCompleteTable> @ 14c1497f0

SqlWaitCompleteTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlWaitCompleteTable>
          (Arena *param_1,SqlWaitCompleteTable *param_2,Arena *param_3)

{
  SqlWaitCompleteTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlWaitCompleteTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlWaitCompleteTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlWarpDeviceTable> @ 14c149800

SqlWarpDeviceTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlWarpDeviceTable>
          (Arena *param_1,SqlWarpDeviceTable *param_2,Arena *param_3)

{
  SqlWarpDeviceTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlWarpDeviceTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlWarpDeviceTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<ds_game::SqlWeeklyQuestTable> @ 14c149810

SqlWeeklyQuestTable * __cdecl
google::protobuf::internal::GetOwnedMessage<ds_game::SqlWeeklyQuestTable>
          (Arena *param_1,SqlWeeklyQuestTable *param_2,Arena *param_3)

{
  SqlWeeklyQuestTable *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SqlWeeklyQuestTable *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SqlWeeklyQuestTable *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// DbWorkItem @ 14c149820

DbWorkItem * __thiscall ds_game::DbWorkItem::DbWorkItem(DbWorkItem *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7DbWorkItem_ds_game__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = 0;
  (this->_impl_).dirty_flag_ = 0;
  return this;
}

// DbWorkItem @ 14c149850

DbWorkItem * __thiscall
ds_game::DbWorkItem::DbWorkItem(DbWorkItem *this,Arena *param_1,DbWorkItem *param_2)

{
  MessageLite *pMVar1;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7DbWorkItem_ds_game__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  (this->_impl_)._oneof_case_[0] = (param_2->_impl_)._oneof_case_[0];
  (this->_impl_).dirty_flag_ = (param_2->_impl_).dirty_flag_;
  switch((this->_impl_)._oneof_case_[0]) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x1f:
  case 0x20:
  case 0x22:
  case 0x29:
  case 0x35:
  case 0x36:
  case 0x38:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x47:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 0x66:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
    pMVar1 = google::protobuf::MessageLite::CopyConstruct
                       (param_1,(MessageLite *)(param_2->_impl_).Item_.characterlevel_);
    (this->_impl_).Item_.characterlevel_ = (Message *)pMVar1;
  }
  return this;
}

// ~DbWorkItem @ 14c149980

void __thiscall ds_game::DbWorkItem::~DbWorkItem(DbWorkItem *this)

{
  this->_padding_ = (longlong)&___7DbWorkItem_ds_game__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((this->_impl_)._oneof_case_[0] != 0) {
    clear_Item(this);
    return;
  }
  return;
}

// CopyFrom @ 14c1499c0

void __thiscall ds_game::DbWorkItem::CopyFrom(DbWorkItem *this,DbWorkItem *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// GetMetadata @ 14c149a00

Metadata * __thiscall
ds_game::DbWorkItem::GetMetadata(DbWorkItem *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&DbWorkItem_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c149a40

void __thiscall ds_game::DbWorkItem::InternalSwap(DbWorkItem *this,DbWorkItem *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ItemUnion IVar4;
  
  lVar3 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar3;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  iVar2 = (this->_impl_).dirty_flag_;
  (this->_impl_).dirty_flag_ = (param_1->_impl_).dirty_flag_;
  (param_1->_impl_).dirty_flag_ = iVar2;
  IVar4 = (this->_impl_).Item_;
  (this->_impl_).Item_ = (param_1->_impl_).Item_;
  (param_1->_impl_).Item_ = IVar4;
  uVar1 = (this->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = (param_1->_impl_)._oneof_case_[0];
  (param_1->_impl_)._oneof_case_[0] = uVar1;
  return;
}

// clear_Item @ 14c149aa0

void __thiscall ds_game::DbWorkItem::clear_Item(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  switch((this->_impl_)._oneof_case_[0]) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x1f:
  case 0x20:
  case 0x22:
  case 0x29:
  case 0x35:
  case 0x36:
  case 0x38:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x47:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 0x66:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// clear_achievementgroup @ 14c149b90

void __thiscall ds_game::DbWorkItem::clear_achievementgroup(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x5e) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_actionfunction @ 14c149be0

void __thiscall ds_game::DbWorkItem::clear_actionfunction(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x5b) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_actionpoint @ 14c149c30

void __thiscall ds_game::DbWorkItem::clear_actionpoint(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x51) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_breachrecord @ 14c149c80

void __thiscall ds_game::DbWorkItem::clear_breachrecord(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x6a) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_breachrecordhistory @ 14c149cd0

void __thiscall ds_game::DbWorkItem::clear_breachrecordhistory(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x70) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_buff @ 14c149d20

void __thiscall ds_game::DbWorkItem::clear_buff(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x20) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_characterlevel @ 14c149d70

void __thiscall ds_game::DbWorkItem::clear_characterlevel(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 3) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_combatpower @ 14c149dc0

void __thiscall ds_game::DbWorkItem::clear_combatpower(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x3a) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_cooltime @ 14c149e10

void __thiscall ds_game::DbWorkItem::clear_cooltime(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x36) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_dailyquest @ 14c149e60

void __thiscall ds_game::DbWorkItem::clear_dailyquest(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x57) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_dailyquestpool @ 14c149eb0

void __thiscall ds_game::DbWorkItem::clear_dailyquestpool(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x58) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_dungeonrecord @ 14c149f00

void __thiscall ds_game::DbWorkItem::clear_dungeonrecord(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x54) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_equipment @ 14c149f50

void __thiscall ds_game::DbWorkItem::clear_equipment(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0xc) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_gplayer @ 14c149fa0

void __thiscall ds_game::DbWorkItem::clear_gplayer(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 6) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_halopoint @ 14c149ff0

void __thiscall ds_game::DbWorkItem::clear_halopoint(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x6b) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_instancequest @ 14c14a040

void __thiscall ds_game::DbWorkItem::clear_instancequest(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x62) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_invenextendinfo @ 14c14a090

void __thiscall ds_game::DbWorkItem::clear_invenextendinfo(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x52) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_itemequipment @ 14c14a0e0

void __thiscall ds_game::DbWorkItem::clear_itemequipment(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 10) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_itemstackable @ 14c14a130

void __thiscall ds_game::DbWorkItem::clear_itemstackable(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0xb) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_learnedskill @ 14c14a180

void __thiscall ds_game::DbWorkItem::clear_learnedskill(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x12) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_localquest @ 14c14a1d0

void __thiscall ds_game::DbWorkItem::clear_localquest(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x56) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_mainquest @ 14c14a220

void __thiscall ds_game::DbWorkItem::clear_mainquest(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x55) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_money @ 14c14a270

void __thiscall ds_game::DbWorkItem::clear_money(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 9) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_monthlyquest @ 14c14a2c0

void __thiscall ds_game::DbWorkItem::clear_monthlyquest(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x61) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_mountinveninfo @ 14c14a310

void __thiscall ds_game::DbWorkItem::clear_mountinveninfo(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x6c) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_mountlist @ 14c14a360

void __thiscall ds_game::DbWorkItem::clear_mountlist(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x6d) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_mountlost @ 14c14a3b0

void __thiscall ds_game::DbWorkItem::clear_mountlost(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x6f) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_npcrelation @ 14c14a400

void __thiscall ds_game::DbWorkItem::clear_npcrelation(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x5f) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_playerconnectiondt @ 14c14a450

void __thiscall ds_game::DbWorkItem::clear_playerconnectiondt(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x66) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_playerfusionslot @ 14c14a4a0

void __thiscall ds_game::DbWorkItem::clear_playerfusionslot(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0xe) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_playergrade @ 14c14a4f0

void __thiscall ds_game::DbWorkItem::clear_playergrade(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 7) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_playericon @ 14c14a540

void __thiscall ds_game::DbWorkItem::clear_playericon(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x59) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_playericonequip @ 14c14a590

void __thiscall ds_game::DbWorkItem::clear_playericonequip(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x5a) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_playerskill @ 14c14a5e0

void __thiscall ds_game::DbWorkItem::clear_playerskill(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x10) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_position @ 14c14a630

void __thiscall ds_game::DbWorkItem::clear_position(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 4) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_pvp @ 14c14a680

void __thiscall ds_game::DbWorkItem::clear_pvp(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x38) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_questcomplete @ 14c14a6d0

void __thiscall ds_game::DbWorkItem::clear_questcomplete(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x29) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_questmisc @ 14c14a720

void __thiscall ds_game::DbWorkItem::clear_questmisc(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x5d) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_questtracking @ 14c14a770

void __thiscall ds_game::DbWorkItem::clear_questtracking(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x53) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_quickslot @ 14c14a7c0

void __thiscall ds_game::DbWorkItem::clear_quickslot(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x47) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_repeatquest @ 14c14a810

void __thiscall ds_game::DbWorkItem::clear_repeatquest(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x68) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_repeatquestcomplete @ 14c14a860

void __thiscall ds_game::DbWorkItem::clear_repeatquestcomplete(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x69) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_resurrect @ 14c14a8b0

void __thiscall ds_game::DbWorkItem::clear_resurrect(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 5) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_returnhome @ 14c14a900

void __thiscall ds_game::DbWorkItem::clear_returnhome(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x6e) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_ringcommand @ 14c14a950

void __thiscall ds_game::DbWorkItem::clear_ringcommand(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x5c) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_shopbuylimit @ 14c14a9a0

void __thiscall ds_game::DbWorkItem::clear_shopbuylimit(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x3d) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_skin @ 14c14a9f0

void __thiscall ds_game::DbWorkItem::clear_skin(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x22) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_status @ 14c14aa40

void __thiscall ds_game::DbWorkItem::clear_status(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x1f) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_timeschedule @ 14c14aa90

void __thiscall ds_game::DbWorkItem::clear_timeschedule(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x3b) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_waitcomplete @ 14c14aae0

void __thiscall ds_game::DbWorkItem::clear_waitcomplete(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x3c) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_warpdevice @ 14c14ab30

void __thiscall ds_game::DbWorkItem::clear_warpdevice(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x35) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_weaponskillslot @ 14c14ab80

void __thiscall ds_game::DbWorkItem::clear_weaponskillslot(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x11) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// clear_weeklyquest @ 14c14abd0

void __thiscall ds_game::DbWorkItem::clear_weeklyquest(DbWorkItem *this)

{
  Message *pMVar1;
  undefined8 *puVar2;
  
  if ((this->_impl_)._oneof_case_[0] == 0x60) {
    puVar2 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar2 = (undefined8 *)*puVar2;
    }
    if ((puVar2 == (undefined8 *)0x0) &&
       (pMVar1 = (this->_impl_).Item_.characterlevel_, pMVar1 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar1)(pMVar1,1);
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// set_allocated_achievementgroup @ 14c14ac20

void __thiscall
ds_game::DbWorkItem::set_allocated_achievementgroup
          (DbWorkItem *this,SqlAchievementGroupTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlAchievementGroupTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlAchievementGroupTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x5e;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_actionfunction @ 14c14aca0

void __thiscall
ds_game::DbWorkItem::set_allocated_actionfunction(DbWorkItem *this,SqlActionFunctionTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlActionFunctionTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlActionFunctionTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x5b;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_actionpoint @ 14c14ad20

void __thiscall
ds_game::DbWorkItem::set_allocated_actionpoint(DbWorkItem *this,SqlPlayerActionPointTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlPlayerActionPointTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlPlayerActionPointTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x51;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_breachrecord @ 14c14ada0

void __thiscall
ds_game::DbWorkItem::set_allocated_breachrecord
          (DbWorkItem *this,SqlPlayerBreachRecordTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlPlayerBreachRecordTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlPlayerBreachRecordTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x6a;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_breachrecordhistory @ 14c14ae20

void __thiscall
ds_game::DbWorkItem::set_allocated_breachrecordhistory
          (DbWorkItem *this,SqlPlayerBreachRecordHistoryTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlPlayerBreachRecordHistoryTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlPlayerBreachRecordHistoryTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x70;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_buff @ 14c14aea0

void __thiscall
ds_game::DbWorkItem::set_allocated_buff(DbWorkItem *this,SqlCharacterBuffTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlCharacterBuffTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlCharacterBuffTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x20;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_characterlevel @ 14c14af20

void __thiscall
ds_game::DbWorkItem::set_allocated_characterlevel(DbWorkItem *this,SqlCharacterLevelTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlCharacterLevelTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlCharacterLevelTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 3;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_combatpower @ 14c14afa0

void __thiscall
ds_game::DbWorkItem::set_allocated_combatpower(DbWorkItem *this,SqlCombatPowerTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlCombatPowerTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlCombatPowerTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x3a;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_cooltime @ 14c14b020

void __thiscall
ds_game::DbWorkItem::set_allocated_cooltime(DbWorkItem *this,SqlCoolTimeTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlCoolTimeTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlCoolTimeTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x36;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_dailyquest @ 14c14b0a0

void __thiscall
ds_game::DbWorkItem::set_allocated_dailyquest(DbWorkItem *this,SqlDailyQuestTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlDailyQuestTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlDailyQuestTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x57;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_dailyquestpool @ 14c14b120

void __thiscall
ds_game::DbWorkItem::set_allocated_dailyquestpool(DbWorkItem *this,SqlDailyQuestPoolTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlDailyQuestPoolTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlDailyQuestPoolTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x58;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_dungeonrecord @ 14c14b1a0

void __thiscall
ds_game::DbWorkItem::set_allocated_dungeonrecord
          (DbWorkItem *this,SqlPlayerDungeonRecordTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlPlayerDungeonRecordTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlPlayerDungeonRecordTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x54;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_equipment @ 14c14b220

void __thiscall
ds_game::DbWorkItem::set_allocated_equipment(DbWorkItem *this,SqlEquipmentTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlEquipmentTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlEquipmentTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0xc;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_gplayer @ 14c14b2a0

void __thiscall
ds_game::DbWorkItem::set_allocated_gplayer(DbWorkItem *this,SqlGPlayerTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlGPlayerTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlGPlayerTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 6;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_halopoint @ 14c14b320

void __thiscall
ds_game::DbWorkItem::set_allocated_halopoint(DbWorkItem *this,SqlHaloPointTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlHaloPointTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlHaloPointTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x6b;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_instancequest @ 14c14b3a0

void __thiscall
ds_game::DbWorkItem::set_allocated_instancequest(DbWorkItem *this,SqlInstanceQuestTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlInstanceQuestTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlInstanceQuestTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x62;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_invenextendinfo @ 14c14b420

void __thiscall
ds_game::DbWorkItem::set_allocated_invenextendinfo
          (DbWorkItem *this,SqlInvenExtendInfoTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlInvenExtendInfoTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlInvenExtendInfoTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x52;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_itemequipment @ 14c14b4a0

void __thiscall
ds_game::DbWorkItem::set_allocated_itemequipment(DbWorkItem *this,SqlItemEquipmentTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlItemEquipmentTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlItemEquipmentTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 10;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_itemstackable @ 14c14b520

void __thiscall
ds_game::DbWorkItem::set_allocated_itemstackable(DbWorkItem *this,SqlItemStackableTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlItemStackableTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlItemStackableTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0xb;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_learnedskill @ 14c14b5a0

void __thiscall
ds_game::DbWorkItem::set_allocated_learnedskill(DbWorkItem *this,SqlLearnedSkillTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlLearnedSkillTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlLearnedSkillTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x12;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_localquest @ 14c14b620

void __thiscall
ds_game::DbWorkItem::set_allocated_localquest(DbWorkItem *this,SqlLocalQuestTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlLocalQuestTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlLocalQuestTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x56;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_mainquest @ 14c14b6a0

void __thiscall
ds_game::DbWorkItem::set_allocated_mainquest(DbWorkItem *this,SqlMainQuestTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlMainQuestTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlMainQuestTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x55;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_money @ 14c14b720

void __thiscall ds_game::DbWorkItem::set_allocated_money(DbWorkItem *this,SqlMoneyTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlMoneyTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlMoneyTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 9;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_monthlyquest @ 14c14b7a0

void __thiscall
ds_game::DbWorkItem::set_allocated_monthlyquest(DbWorkItem *this,SqlMonthlyQuestTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlMonthlyQuestTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlMonthlyQuestTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x61;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_mountinveninfo @ 14c14b820

void __thiscall
ds_game::DbWorkItem::set_allocated_mountinveninfo(DbWorkItem *this,SqlMountInvenInfoTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlMountInvenInfoTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlMountInvenInfoTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x6c;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_mountlist @ 14c14b8a0

void __thiscall
ds_game::DbWorkItem::set_allocated_mountlist(DbWorkItem *this,SqlMountListTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlMountListTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlMountListTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x6d;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_mountlost @ 14c14b920

void __thiscall
ds_game::DbWorkItem::set_allocated_mountlost(DbWorkItem *this,SqlMountLostTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlMountLostTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlMountLostTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x6f;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_npcrelation @ 14c14b9a0

void __thiscall
ds_game::DbWorkItem::set_allocated_npcrelation(DbWorkItem *this,SqlNpcRelationTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlNpcRelationTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlNpcRelationTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x5f;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_playerconnectiondt @ 14c14ba20

void __thiscall
ds_game::DbWorkItem::set_allocated_playerconnectiondt
          (DbWorkItem *this,SqlPlayerConnectionDt *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlPlayerConnectionDt *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlPlayerConnectionDt *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x66;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_playerfusionslot @ 14c14baa0

void __thiscall
ds_game::DbWorkItem::set_allocated_playerfusionslot
          (DbWorkItem *this,SqlPlayerFusionSlotTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlPlayerFusionSlotTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlPlayerFusionSlotTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0xe;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_playergrade @ 14c14bb20

void __thiscall
ds_game::DbWorkItem::set_allocated_playergrade(DbWorkItem *this,SqlPlayerGradeTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlPlayerGradeTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlPlayerGradeTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 7;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_playericon @ 14c14bba0

void __thiscall
ds_game::DbWorkItem::set_allocated_playericon(DbWorkItem *this,SqlPlayerIconTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlPlayerIconTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlPlayerIconTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x59;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_playericonequip @ 14c14bc20

void __thiscall
ds_game::DbWorkItem::set_allocated_playericonequip
          (DbWorkItem *this,SqlPlayerIconEquipTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlPlayerIconEquipTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlPlayerIconEquipTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x5a;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_playerskill @ 14c14bca0

void __thiscall
ds_game::DbWorkItem::set_allocated_playerskill(DbWorkItem *this,SqlPlayerSkillTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlPlayerSkillTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlPlayerSkillTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x10;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_position @ 14c14bd20

void __thiscall
ds_game::DbWorkItem::set_allocated_position(DbWorkItem *this,SqlPositionTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlPositionTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlPositionTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 4;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_pvp @ 14c14bda0

void __thiscall ds_game::DbWorkItem::set_allocated_pvp(DbWorkItem *this,SqlPvpTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlPvpTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlPvpTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x38;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_questcomplete @ 14c14be20

void __thiscall
ds_game::DbWorkItem::set_allocated_questcomplete(DbWorkItem *this,SqlQuestCompleteTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlQuestCompleteTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlQuestCompleteTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x29;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_questmisc @ 14c14bea0

void __thiscall
ds_game::DbWorkItem::set_allocated_questmisc(DbWorkItem *this,SqlQuestMiscTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlQuestMiscTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlQuestMiscTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x5d;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_questtracking @ 14c14bf20

void __thiscall
ds_game::DbWorkItem::set_allocated_questtracking(DbWorkItem *this,SqlQuestTrackingTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlQuestTrackingTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlQuestTrackingTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x53;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_quickslot @ 14c14bfa0

void __thiscall
ds_game::DbWorkItem::set_allocated_quickslot(DbWorkItem *this,SqlQuickSlotTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlQuickSlotTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlQuickSlotTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x47;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_repeatquest @ 14c14c020

void __thiscall
ds_game::DbWorkItem::set_allocated_repeatquest(DbWorkItem *this,SqlRepeatQuestTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlRepeatQuestTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlRepeatQuestTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x68;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_repeatquestcomplete @ 14c14c0a0

void __thiscall
ds_game::DbWorkItem::set_allocated_repeatquestcomplete
          (DbWorkItem *this,SqlRepeatQuestCompleteTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlRepeatQuestCompleteTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlRepeatQuestCompleteTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x69;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_resurrect @ 14c14c120

void __thiscall
ds_game::DbWorkItem::set_allocated_resurrect(DbWorkItem *this,SqlResurrectTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlResurrectTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlResurrectTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 5;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_returnhome @ 14c14c1a0

void __thiscall
ds_game::DbWorkItem::set_allocated_returnhome(DbWorkItem *this,SqlReturnHomeTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlReturnHomeTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlReturnHomeTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x6e;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_ringcommand @ 14c14c220

void __thiscall
ds_game::DbWorkItem::set_allocated_ringcommand(DbWorkItem *this,SqlRingCommandTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlRingCommandTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlRingCommandTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x5c;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_shopbuylimit @ 14c14c2a0

void __thiscall
ds_game::DbWorkItem::set_allocated_shopbuylimit(DbWorkItem *this,SqlShopBuyLimitTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlShopBuyLimitTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlShopBuyLimitTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x3d;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_skin @ 14c14c320

void __thiscall
ds_game::DbWorkItem::set_allocated_skin(DbWorkItem *this,SqlCharacterSkinTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlCharacterSkinTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlCharacterSkinTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x22;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_status @ 14c14c3a0

void __thiscall
ds_game::DbWorkItem::set_allocated_status(DbWorkItem *this,SqlCharacterStatusTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlCharacterStatusTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlCharacterStatusTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x1f;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_timeschedule @ 14c14c420

void __thiscall
ds_game::DbWorkItem::set_allocated_timeschedule(DbWorkItem *this,SqlTimeScheduleTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlTimeScheduleTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlTimeScheduleTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x3b;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_waitcomplete @ 14c14c4a0

void __thiscall
ds_game::DbWorkItem::set_allocated_waitcomplete(DbWorkItem *this,SqlWaitCompleteTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlWaitCompleteTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlWaitCompleteTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x3c;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_warpdevice @ 14c14c520

void __thiscall
ds_game::DbWorkItem::set_allocated_warpdevice(DbWorkItem *this,SqlWarpDeviceTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlWarpDeviceTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlWarpDeviceTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x35;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_weaponskillslot @ 14c14c5a0

void __thiscall
ds_game::DbWorkItem::set_allocated_weaponskillslot
          (DbWorkItem *this,SqlWeaponSkillSlotTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlWeaponSkillSlotTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlWeaponSkillSlotTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x11;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// set_allocated_weeklyquest @ 14c14c620

void __thiscall
ds_game::DbWorkItem::set_allocated_weeklyquest(DbWorkItem *this,SqlWeeklyQuestTable *param_1)

{
  Arena *pAVar1;
  Arena *pAVar2;
  
  pAVar1 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  if ((this->_padding_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  clear_Item(this);
  if (param_1 != (SqlWeeklyQuestTable *)0x0) {
    pAVar2 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar2 = (Arena *)(pAVar2->impl_).tag_and_id_;
    }
    if (pAVar1 != pAVar2) {
      param_1 = (SqlWeeklyQuestTable *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar1,(MessageLite *)param_1,pAVar2);
    }
    (this->_impl_)._oneof_case_[0] = 0x60;
    (this->_impl_).Item_.characterlevel_ = (Message *)param_1;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_DbWorkItem_default_instance_'' @ 150441910

void __cdecl ds_game::_dynamic_atexit_destructor_for___DbWorkItem_default_instance___(void)

{
  return;
}


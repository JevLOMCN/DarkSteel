// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 104

// `dynamic_initializer_for_'_RankingData_default_instance_'' @ 141295b90

void __cdecl rank::_dynamic_initializer_for___RankingData_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___RankingData_default_instance___);
  return;
}

// `dynamic_initializer_for_'_RankingList_default_instance_'' @ 141295bb0

void __cdecl rank::_dynamic_initializer_for___RankingList_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___RankingList_default_instance___);
  return;
}

// `dynamic_initializer_for_'_SendRawRankDataRequest_default_instance_'' @ 141295bd0

void __cdecl rank::_dynamic_initializer_for___SendRawRankDataRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___SendRawRankDataRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ServiceBusRankResponse_default_instance_'' @ 141295bf0

void __cdecl rank::_dynamic_initializer_for___ServiceBusRankResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ServiceBusRankResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ServiceBusRankRewardRequest_default_instance_'' @ 141295c10

void __cdecl rank::_dynamic_initializer_for___ServiceBusRankRewardRequest_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ServiceBusRankRewardRequest_default_instance___);
  return;
}

// `dynamic_initializer_for_'_ServiceBusRankRewardResponse_default_instance_'' @ 141295c30

void __cdecl rank::_dynamic_initializer_for___ServiceBusRankRewardResponse_default_instance___(void)

{
  atexit(_dynamic_atexit_destructor_for___ServiceBusRankRewardResponse_default_instance___);
  return;
}

// `dynamic_initializer_for_'_static_init2_'' @ 141295c50

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_rank_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// `scalar_deleting_destructor' @ 14c196bf0

void * __thiscall
rank::SendRawRankDataRequest::_scalar_deleting_destructor_
          (SendRawRankDataRequest *this,uint param_1)

{
  this->_padding_ = (longlong)&___7SendRawRankDataRequest_rank__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if (*(longlong *)&(this->_impl_).raw_data_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).raw_data_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// MergeImpl @ 14c196c50

void __cdecl rank::RankingList::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  if ((int)param_2[1]._internal_metadata_.ptr_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)(param_1 + 1),(RepeatedPtrFieldBase *)(param_2 + 1),
               google::protobuf::Arena::CopyConstruct<rank::RankingData>);
  }
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c196cb0

void __thiscall rank::RankingList::Clear(RankingList *this)

{
  if (0 < *(int *)&(this->_impl_).rank_.field_0x8) {
    google::protobuf::internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&this->_impl_);
  }
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c196cf0

ulong64 __thiscall rank::RankingList::ByteSizeLong(RankingList *this)

{
  uint uVar1;
  ulonglong uVar2;
  RepeatedPtrField<rank::RankingData> *pRVar3;
  ulong64 uVar4;
  uint uVar5;
  int iVar6;
  Impl_ *pIVar7;
  __uint64 _Var8;
  
  uVar2 = *(ulonglong *)&(this->_impl_).rank_;
  pIVar7 = &this->_impl_;
  uVar1 = *(uint *)&(this->_impl_).rank_.field_0x8;
  _Var8 = (__uint64)uVar1;
  if ((uVar2 & 1) != 0) {
    pIVar7 = (Impl_ *)(uVar2 + 7);
  }
  pRVar3 = &pIVar7->rank_;
  for (; pIVar7 != (Impl_ *)(&pRVar3->field_0x0 + (longlong)(int)uVar1 * 8);
      pIVar7 = (Impl_ *)&(pIVar7->rank_).field_0x8) {
    uVar4 = RankingData::ByteSizeLong(*(RankingData **)&pIVar7->rank_);
    uVar5 = (uint)uVar4 | 1;
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
    _Var8 = _Var8 + (iVar6 * -9 + 0x160U >> 6) + uVar4;
  }
  _Var8 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var8,&(this->_impl_)._cached_size_);
  return _Var8;
}

// _InternalSerialize @ 14c196da0

uchar * __thiscall
rank::RankingList::_InternalSerialize(RankingList *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  uint uVar1;
  MessageLite *pMVar2;
  uint uVar3;
  
  uVar1 = *(uint *)&(this->_impl_).rank_.field_0x8;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      pMVar2 = *(MessageLite **)&(this->_impl_).rank_;
      if (((ulonglong)pMVar2 & 1) != 0) {
        pMVar2 = *(MessageLite **)((longlong)&pMVar2->_padding_ + (longlong)(int)uVar3 * 8 + 7);
      }
      param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                          (1,pMVar2,*(int *)((longlong)&pMVar2[1]._padding_ + 4),param_1,param_2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  if ((this->_padding_ & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                        ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                         param_2);
  }
  return param_1;
}

// GetClassData @ 14c196e30

ClassData * __thiscall rank::RankingList::GetClassData(RankingList *this)

{
  return (ClassData *)&RankingList_class_data_;
}

// PlacementNew_ @ 14c196e50

void * __cdecl rank::RankingList::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7RankingList_rank__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  *(Arena **)((longlong)param_2 + 0x20) = param_3;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c196e80

void * __thiscall rank::RankingList::_scalar_deleting_destructor_(RankingList *this,uint param_1)

{
  this->_padding_ = (longlong)&___7RankingList_rank__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if (*(longlong *)&(this->_impl_).rank_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&this->_impl_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// MergeImpl @ 14c196ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rank::ServiceBusRankResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  MessageLite *pMVar5;
  undefined8 uVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  ulong64 uVar8;
  Arena *pAVar9;
  Arena *pAVar10;
  bool bVar11;
  undefined1 auStackY_88 [32];
  _Bxty local_58;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_88;
  pAVar9 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  bVar4 = (byte)(param_1->_internal_metadata_).ptr_ & 1;
  pAVar10 = pAVar9;
  if (bVar4 != 0) {
    pAVar10 = (Arena *)(pAVar9->impl_).tag_and_id_;
  }
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 1) != 0) {
    pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
    if ((pbVar7->_Mypair)._Myval2._Mysize == 0) {
      if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
        local_58._8_8_ = 0;
        local_58._Ptr = (char *)0x0;
        local_48 = ___xmm_000000000000000f0000000000000000;
        uStack_40 = _UNK_15076add8;
        if (bVar4 != 0) {
          pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
                   (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_58,
                   pAVar9);
        if (0xf < uStack_40) {
          uVar8 = uStack_40 + 1;
          uVar6 = local_58._Ptr;
          if (0xfff < uVar8) {
            uVar6 = *(undefined8 *)(local_58._Ptr + -8);
            uVar8 = uStack_40 + 0x28;
            if ((char *)0x1f < local_58._Ptr + (-8 - uVar6)) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
          ::operator_delete((void *)uVar6,uVar8);
        }
      }
    }
    else {
      *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 1;
      if (bVar4 != 0) {
        pAVar9 = (Arena *)(pAVar9->impl_).tag_and_id_;
      }
      google::protobuf::internal::ArenaStringPtr::Set<>
                ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar7,pAVar9);
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar1;
  iVar2 = (int)param_2[2]._internal_metadata_.ptr_;
  if (iVar2 != 0) {
    iVar3 = (int)param_1[2]._internal_metadata_.ptr_;
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        clear_item((ServiceBusRankResponse *)param_1);
      }
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar2;
    }
    if (iVar2 == 1) {
      bVar11 = iVar3 == 1;
    }
    else if (iVar2 == 2) {
      bVar11 = iVar3 == 2;
    }
    else {
      if (iVar2 != 3) goto LAB_14c197047;
      bVar11 = iVar3 == 3;
    }
    if (bVar11) {
      google::protobuf::Message::MergeFrom
                ((Message *)param_1[2]._padding_,(Message *)param_2[2]._padding_);
    }
    else {
      pMVar5 = google::protobuf::MessageLite::CopyConstruct
                         (pAVar10,(MessageLite *)param_2[2]._padding_);
      param_1[2]._padding_ = (longlong)pMVar5;
    }
  }
LAB_14c197047:
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c197090

void __thiscall rank::ServiceBusRankResponse::Clear(ServiceBusRankResponse *this)

{
  uint uVar1;
  Message *pMVar2;
  undefined8 *puVar3;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    puVar3 = (undefined8 *)
             ((ulonglong)(this->_impl_).server_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar3[2] = 0;
    if (0xf < (ulonglong)puVar3[3]) {
      puVar3 = (undefined8 *)*puVar3;
    }
    *(undefined1 *)puVar3 = 0;
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    puVar3 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar3 = (undefined8 *)*puVar3;
    }
    if ((puVar3 == (undefined8 *)0x0) &&
       (pMVar2 = (this->_impl_).item_.servicebusrankrewardreq_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c197130

ulong64 __thiscall rank::ServiceBusRankResponse::ByteSizeLong(ServiceBusRankResponse *this)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  __uint64 _Var4;
  
  _Var4 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (lVar2 = *(longlong *)
               (((ulonglong)(this->_impl_).server_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) +
               0x10), lVar2 != 0)) {
    uVar1 = (uint)lVar2 | 1;
    if (__isa_available < 5) {
      iVar3 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 0x1f - iVar3;
    }
    else {
      iVar3 = LZCOUNT(uVar1);
    }
    _Var4 = (ulonglong)(iVar3 * -9 + 0x160U >> 6) + 2 + lVar2;
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    lVar2 = (**(code **)(*(longlong *)(this->_impl_).item_.servicebusrankrewardreq_ + 0x10))();
    uVar1 = (uint)lVar2 | 1;
    if (__isa_available < 5) {
      iVar3 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 0x1f - iVar3;
    }
    else {
      iVar3 = LZCOUNT(uVar1);
    }
    _Var4 = _Var4 + 1 + (ulonglong)(iVar3 * -9 + 0x160U >> 6) + lVar2;
  }
  _Var4 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var4,&(this->_impl_)._cached_size_);
  return _Var4;
}

// _InternalSerialize @ 14c197210

uchar * __thiscall
rank::ServiceBusRankResponse::_InternalSerialize
          (ServiceBusRankResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  uint uVar2;
  int iVar3;
  uchar *puVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  uVar2 = (this->_impl_)._oneof_case_[0];
  if (uVar2 == 1) {
    iVar3 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).item_.servicebusrankrewardreq_);
    iVar5 = 1;
  }
  else if (uVar2 == 2) {
    iVar3 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).item_.servicebusrankrewardreq_);
    iVar5 = 2;
  }
  else {
    if (uVar2 != 3) goto LAB_14c19727f;
    iVar3 = google::protobuf::MessageLite::GetCachedSize
                      ((MessageLite *)(this->_impl_).item_.servicebusrankrewardreq_);
    iVar5 = 3;
  }
  param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                      (iVar5,(MessageLite *)(this->_impl_).item_.servicebusrankrewardreq_,iVar3,
                       param_1,param_2);
LAB_14c19727f:
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar7 = (char *)((ulonglong)(this->_impl_).server_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar7 + 0x10);
    if (*(longlong *)(pcVar7 + 0x10) != 0) {
      pcVar6 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar6 = *(char **)pcVar7;
      }
      local_18._Mysize = 0x27;
      local_18._Mydata = "rank.ServiceBusRankResponse.server_name";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar6,(int)*(longlong *)(pcVar7 + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar7 = *(char **)pcVar7;
      }
      local_18._Mysize = *puVar1;
      local_18._Mydata = pcVar7;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,100,&local_18,param_1);
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

// GetClassData @ 14c197360

ClassData * __thiscall rank::ServiceBusRankResponse::GetClassData(ServiceBusRankResponse *this)

{
  return (ClassData *)&ServiceBusRankResponse_class_data_;
}

// PlacementNew_ @ 14c197380

void * __cdecl
rank::ServiceBusRankResponse::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ServiceBusRankResponse_rank__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined4 *)((longlong)param_2 + 0x28) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c1973b0

void * __thiscall
rank::ServiceBusRankResponse::_scalar_deleting_destructor_
          (ServiceBusRankResponse *this,uint param_1)

{
  ~ServiceBusRankResponse(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// MergeImpl @ 14c1973f0

void __cdecl
rank::ServiceBusRankRewardResponse::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 0x1f) != 0) {
    if (((uVar2 & 1) != 0) && (lVar3 = param_2[1]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[1]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar2 & 2) != 0) && (param_2[2]._padding_ != 0)) {
      param_1[2]._padding_ = param_2[2]._padding_;
    }
    if (((uVar2 & 4) != 0) && (lVar3 = param_2[2]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[2]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar2 & 8) != 0) && (param_2[3]._padding_ != 0)) {
      param_1[3]._padding_ = param_2[3]._padding_;
    }
    if (((uVar2 & 0x10) != 0) && (cVar1 = (char)param_2[3]._internal_metadata_.ptr_, cVar1 != '\0'))
    {
      *(char *)&param_1[3]._internal_metadata_.ptr_ = cVar1;
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar2;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
    return;
  }
  return;
}

// Clear @ 14c197480

void __thiscall rank::ServiceBusRankRewardResponse::Clear(ServiceBusRankRewardResponse *this)

{
  ulong64 uVar1;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar2;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 0x1f) != 0) {
    (this->_impl_).entity_id_ = 0;
    (this->_impl_).current_score_ = 0;
    (this->_impl_).current_rank_ = 0;
    (this->_impl_).total_rank_count_ = 0;
    (this->_impl_).is_fail_ = false;
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
    uVar2 = (this_00->fields_).soo_rep_.field0_0x0.long_rep.size;
  }
  else {
    uVar2 = (uint)uVar1 & 3;
  }
  if (uVar2 != 0) {
    google::protobuf::UnknownFieldSet::ClearFallback(this_00);
    return;
  }
  return;
}

// ByteSizeLong @ 14c1974b0

ulong64 __thiscall
rank::ServiceBusRankRewardResponse::ByteSizeLong(ServiceBusRankRewardResponse *this)

{
  uint uVar1;
  longlong lVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  __uint64 _Var5;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  uVar3 = 0;
  if ((uVar1 & 0x1f) != 0) {
    if (((uVar1 & 1) != 0) && (uVar4 = (this->_impl_).entity_id_, uVar4 != 0)) {
      uVar3 = google::protobuf::internal::WireFormatLite::UInt64SizePlusOne(uVar4);
    }
    if (((uVar1 & 2) != 0) && (lVar2 = (this->_impl_).current_score_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      uVar3 = uVar3 + uVar4;
    }
    if (((uVar1 & 4) != 0) && (lVar2 = (this->_impl_).current_rank_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      uVar3 = uVar3 + uVar4;
    }
    if (((uVar1 & 8) != 0) && (lVar2 = (this->_impl_).total_rank_count_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      uVar3 = uVar3 + uVar4;
    }
    if (((uVar1 & 0x10) != 0) && ((this->_impl_).is_fail_ != false)) {
      uVar3 = uVar3 + 2;
    }
  }
  _Var5 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar3,&(this->_impl_)._cached_size_);
  return _Var5;
}

// _InternalSerialize @ 14c197560

uchar * __thiscall
rank::ServiceBusRankRewardResponse::_InternalSerialize
          (ServiceBusRankRewardResponse *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  bool bVar1;
  longlong lVar2;
  byte *pbVar3;
  uchar *puVar4;
  byte bVar5;
  ulonglong uVar6;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) && ((this->_impl_).entity_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar6 = (this->_impl_).entity_id_;
    *param_1 = 8;
    while( true ) {
      pbVar3 = param_1 + 1;
      bVar5 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *pbVar3 = bVar5 | 0x80;
      param_1 = pbVar3;
    }
    *pbVar3 = bVar5;
    param_1 = param_1 + 2;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (lVar2 = (this->_impl_).current_score_, lVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<2>
                        (param_2,lVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (lVar2 = (this->_impl_).current_rank_, lVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<3>
                        (param_2,lVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     (lVar2 = (this->_impl_).total_rank_count_, lVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<4>
                        (param_2,lVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) && ((this->_impl_).is_fail_ != false))
  {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    bVar1 = (this->_impl_).is_fail_;
    *param_1 = 0x28;
    param_1[1] = bVar1 != false;
    param_1 = param_1 + 2;
  }
  if ((this->_padding_ & 1) == 0) {
    return param_1;
  }
  puVar4 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                     ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                      param_2);
  return puVar4;
}

// GetClassData @ 14c197690

ClassData * __thiscall
rank::ServiceBusRankRewardResponse::GetClassData(ServiceBusRankRewardResponse *this)

{
  return (ClassData *)&ServiceBusRankRewardResponse_class_data_;
}

// PlacementNew_ @ 14c1976b0

void * __cdecl
rank::ServiceBusRankRewardResponse::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ServiceBusRankRewardResponse_rank__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined1 *)((longlong)param_2 + 0x38) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c1976e0

void * __thiscall
rank::ServiceBusRankRewardResponse::_scalar_deleting_destructor_
          (ServiceBusRankRewardResponse *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ServiceBusRankRewardResponse_rank__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// MergeImpl @ 14c197730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rank::ServiceBusRankRewardRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

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
  uVar1 = (uint)param_2[1]._padding_;
  if ((uVar1 & 0x7f) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[1]._internal_metadata_.ptr_ & 0xfffffffffffffffc);
      if ((pbVar5->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[1]._internal_metadata_.ptr_ & 3) == 0) {
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
                    ((ArenaStringPtr *)&param_1[1]._internal_metadata_,
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
                  ((ArenaStringPtr *)&param_1[1]._internal_metadata_,pbVar5,pAVar7);
      }
    }
    if (((uVar1 & 2) != 0) && (iVar2 = (int)param_2[2]._padding_, iVar2 != 0)) {
      *(int *)&param_1[2]._padding_ = iVar2;
    }
    if (((uVar1 & 4) != 0) && (iVar2 = *(int *)((longlong)&param_2[2]._padding_ + 4), iVar2 != 0)) {
      *(int *)((longlong)&param_1[2]._padding_ + 4) = iVar2;
    }
    if (((uVar1 & 8) != 0) && (lVar3 = param_2[2]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[2]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar1 & 0x10) != 0) && (param_2[3]._padding_ != 0)) {
      param_1[3]._padding_ = param_2[3]._padding_;
    }
    if (((uVar1 & 0x20) != 0) && (lVar3 = param_2[3]._internal_metadata_.ptr_, lVar3 != 0)) {
      param_1[3]._internal_metadata_.ptr_ = lVar3;
    }
    if (((uVar1 & 0x40) != 0) && (iVar2 = (int)param_2[4]._padding_, iVar2 != 0)) {
      *(int *)&param_1[4]._padding_ = iVar2;
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

// Clear @ 14c1978f0

void __thiscall rank::ServiceBusRankRewardRequest::Clear(ServiceBusRankRewardRequest *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 1) != 0) {
    puVar2 = (undefined8 *)((ulonglong)(this->_impl_).period_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
    ;
    puVar2[2] = 0;
    if (0xf < (ulonglong)puVar2[3]) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
  }
  if ((uVar3 & 0x7e) != 0) {
    (this->_impl_).world_id_ = 0;
    (this->_impl_).game_server_index_ = 0;
    (this->_impl_).entity_id_ = 0;
    (this->_impl_).player_uid_ = 0;
    (this->_impl_).unique_param_ = 0;
    (this->_impl_).rank_type_ = 0;
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

// ByteSizeLong @ 14c197950

ulong64 __thiscall
rank::ServiceBusRankRewardRequest::ByteSizeLong(ServiceBusRankRewardRequest *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulong64 uVar4;
  int iVar5;
  __uint64 _Var6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((uVar1 & 0x7f) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).period_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
       lVar2 != 0)) {
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
    if (((uVar1 & 2) != 0) && (iVar5 = (this->_impl_).world_id_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 4) != 0) && (iVar5 = (this->_impl_).game_server_index_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 8) != 0) && (uVar4 = (this->_impl_).entity_id_, uVar4 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::UInt64SizePlusOne(uVar4);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 0x10) != 0) && (lVar2 = (this->_impl_).player_uid_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 0x20) != 0) && (lVar2 = (this->_impl_).unique_param_, lVar2 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int64SizePlusOne(lVar2);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 0x40) != 0) && (iVar5 = (this->_impl_).rank_type_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c197a70

uchar * __thiscall
rank::ServiceBusRankRewardRequest::_InternalSerialize
          (ServiceBusRankRewardRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  longlong lVar3;
  uchar *puVar4;
  byte bVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) &&
     (iVar2 = (this->_impl_).world_id_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar2 = (this->_impl_).game_server_index_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) && ((this->_impl_).entity_id_ != 0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    uVar6 = (this->_impl_).entity_id_;
    *param_1 = 0x18;
    while( true ) {
      param_1 = param_1 + 1;
      bVar5 = (byte)uVar6;
      if (uVar6 < 0x80) break;
      uVar6 = uVar6 >> 7;
      *param_1 = bVar5 | 0x80;
    }
    *param_1 = bVar5;
    param_1 = param_1 + 1;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (lVar3 = (this->_impl_).player_uid_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<4>
                        (param_2,lVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x40) != 0) &&
     (iVar2 = (this->_impl_).rank_type_, iVar2 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<5>
                        (param_2,iVar2,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (lVar3 = (this->_impl_).unique_param_, lVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<6>
                        (param_2,lVar3,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar8 = (char *)((ulonglong)(this->_impl_).period_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar8 + 0x10);
    if (*(longlong *)(pcVar8 + 0x10) != 0) {
      pcVar7 = pcVar8;
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar7 = *(char **)pcVar8;
      }
      local_18._Mysize = 0x27;
      local_18._Mydata = "rank.ServiceBusRankRewardRequest.period";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar7,(int)*(longlong *)(pcVar8 + 0x10),SERIALIZE,&local_18);
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar8 = *(char **)pcVar8;
      }
      local_18._Mysize = *puVar1;
      local_18._Mydata = pcVar8;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,7,&local_18,param_1);
    }
  }
  if ((this->_padding_ & 1) != 0) {
    puVar4 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar4;
  }
  return param_1;
}

// GetClassData @ 14c197c50

ClassData * __thiscall
rank::ServiceBusRankRewardRequest::GetClassData(ServiceBusRankRewardRequest *this)

{
  return (ClassData *)&ServiceBusRankRewardRequest_class_data_;
}

// PlacementNew_ @ 14c197c70

void * __cdecl
rank::ServiceBusRankRewardRequest::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7ServiceBusRankRewardRequest_rank__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined4 *)((longlong)param_2 + 0x40) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c197cb0

void * __thiscall
rank::ServiceBusRankRewardRequest::_scalar_deleting_destructor_
          (ServiceBusRankRewardRequest *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ServiceBusRankRewardRequest_rank__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).period_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// MergeImpl @ 14c197d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rank::RankingData::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  int iVar1;
  uint uVar2;
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
  uVar2 = (uint)param_2[1]._padding_;
  if ((uVar2 & 0x3f) != 0) {
    if ((uVar2 & 1) != 0) {
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
    if ((uVar2 & 2) != 0) {
      pbVar4 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_2[2]._padding_ & 0xfffffffffffffffc);
      if ((pbVar4->_Mypair)._Myval2._Mysize == 0) {
        if ((param_1[2]._padding_ & 3) == 0) {
          *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
          pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
          local_38._8_8_ = 0;
          local_38._Ptr = (char *)0x0;
          local_28 = ___xmm_000000000000000f0000000000000000;
          uStack_20 = _UNK_15076add8;
          if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
            pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
          }
          google::protobuf::internal::ArenaStringPtr::Set<>
                    ((ArenaStringPtr *)(param_1 + 2),
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
        *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | 2;
        pAVar6 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
        if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
          pAVar6 = (Arena *)(pAVar6->impl_).tag_and_id_;
        }
        google::protobuf::internal::ArenaStringPtr::Set<>
                  ((ArenaStringPtr *)(param_1 + 2),pbVar4,pAVar6);
      }
    }
    if (((uVar2 & 4) != 0) && (iVar1 = (int)param_2[2]._internal_metadata_.ptr_, iVar1 != 0)) {
      *(int *)&param_1[2]._internal_metadata_.ptr_ = iVar1;
    }
    if (((uVar2 & 8) != 0) &&
       (iVar1 = *(int *)((longlong)&param_2[2]._internal_metadata_.ptr_ + 4), iVar1 != 0)) {
      *(int *)((longlong)&param_1[2]._internal_metadata_.ptr_ + 4) = iVar1;
    }
    if (((uVar2 & 0x10) != 0) && (iVar1 = (int)param_2[3]._padding_, iVar1 != 0)) {
      *(int *)&param_1[3]._padding_ = iVar1;
    }
    if (((uVar2 & 0x20) != 0) && (iVar1 = *(int *)((longlong)&param_2[3]._padding_ + 4), iVar1 != 0)
       ) {
      *(int *)((longlong)&param_1[3]._padding_ + 4) = iVar1;
    }
  }
  *(uint *)&param_1[1]._padding_ = (uint)param_1[1]._padding_ | uVar2;
  if (((param_2->_internal_metadata_).ptr_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              (&param_1->_internal_metadata_,
               (UnknownFieldSet *)(((param_2->_internal_metadata_).ptr_ & 0xfffffffffffffffeU) + 8))
    ;
  }
  return;
}

// Clear @ 14c197f80

void __thiscall rank::RankingData::Clear(RankingData *this)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  UnknownFieldSet *this_00;
  longlong *this_01;
  uint uVar3;
  
  uVar3 = (this->_impl_)._has_bits_.has_bits_[0];
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      puVar2 = (undefined8 *)
               ((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
    if ((uVar3 & 2) != 0) {
      puVar2 = (undefined8 *)((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
      puVar2[2] = 0;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar2 = (undefined8 *)*puVar2;
      }
      *(undefined1 *)puVar2 = 0;
    }
  }
  if ((uVar3 & 0x3c) != 0) {
    (this->_impl_).main_char_level_ = 0;
    (this->_impl_).main_char_combat_power_ = 0.0;
    (this->_impl_).world_id_ = 0;
    (this->_impl_).region_index_ = 0;
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

// ByteSizeLong @ 14c197ff0

ulong64 __thiscall rank::RankingData::ByteSizeLong(RankingData *this)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulong64 uVar4;
  int iVar5;
  __uint64 _Var6;
  
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  _Var6 = 0;
  if ((uVar1 & 0x3f) != 0) {
    if (((uVar1 & 1) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10
                 ), lVar2 != 0)) {
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
    if (((uVar1 & 2) != 0) &&
       (lVar2 = *(longlong *)
                 (((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc) + 0x10),
       lVar2 != 0)) {
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
      _Var6 = _Var6 + 1 + (ulonglong)(iVar5 * -9 + 0x160U >> 6) + lVar2;
    }
    if (((uVar1 & 4) != 0) && (iVar5 = (this->_impl_).main_char_level_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 8) != 0) && ((this->_impl_).main_char_combat_power_ != 0.0)) {
      _Var6 = _Var6 + 5;
    }
    if (((uVar1 & 0x10) != 0) && (iVar5 = (this->_impl_).world_id_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
    if (((uVar1 & 0x20) != 0) && (iVar5 = (this->_impl_).region_index_, iVar5 != 0)) {
      uVar4 = google::protobuf::internal::WireFormatLite::Int32SizePlusOne(iVar5);
      _Var6 = _Var6 + uVar4;
    }
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,_Var6,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c198120

uchar * __thiscall
rank::RankingData::_InternalSerialize(RankingData *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  ulong64 *puVar1;
  float fVar2;
  int iVar3;
  uchar *puVar4;
  char *pcVar5;
  char *pcVar6;
  basic_string_view<char,std::char_traits<char>_> local_28;
  
  if (((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) {
    pcVar6 = (char *)((ulonglong)(this->_impl_).nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar6 + 0x10);
    if (*(longlong *)(pcVar6 + 0x10) != 0) {
      pcVar5 = pcVar6;
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar5 = *(char **)pcVar6;
      }
      local_28._Mysize = 0x19;
      local_28._Mydata = "rank.RankingData.nickname";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar5,(int)*(longlong *)(pcVar6 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar6 = *(char **)pcVar6;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar6;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,1,&local_28,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 4) != 0) &&
     (iVar3 = (this->_impl_).main_char_level_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<2>
                        (param_2,iVar3,param_1);
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 8) != 0) &&
     ((this->_impl_).main_char_combat_power_ != 0.0)) {
    if (param_2->end_ <= param_1) {
      param_1 = google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(param_2,param_1);
    }
    fVar2 = (this->_impl_).main_char_combat_power_;
    *param_1 = '\x1d';
    *(float *)(param_1 + 1) = fVar2;
    param_1 = param_1 + 5;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x10) != 0) &&
     (iVar3 = (this->_impl_).world_id_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<4>
                        (param_2,iVar3,param_1);
  }
  if (((this->_impl_)._has_bits_.has_bits_[0] & 2) != 0) {
    pcVar6 = (char *)((ulonglong)(this->_impl_).id_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
    puVar1 = (ulong64 *)(pcVar6 + 0x10);
    if (*(longlong *)(pcVar6 + 0x10) != 0) {
      pcVar5 = pcVar6;
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar5 = *(char **)pcVar6;
      }
      local_28._Mysize = 0x13;
      local_28._Mydata = "rank.RankingData.id";
      google::protobuf::internal::WireFormatLite::VerifyUtf8String
                (pcVar5,(int)*(longlong *)(pcVar6 + 0x10),SERIALIZE,&local_28);
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar6 = *(char **)pcVar6;
      }
      local_28._Mysize = *puVar1;
      local_28._Mydata = pcVar6;
      param_1 = google::protobuf::io::EpsCopyOutputStream::WriteStringMaybeAliased
                          (param_2,5,&local_28,param_1);
    }
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 0x20) != 0) &&
     (iVar3 = (this->_impl_).region_index_, iVar3 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<6>
                        (param_2,iVar3,param_1);
  }
  if ((this->_padding_ & 1) != 0) {
    puVar4 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                       ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                        param_2);
    return puVar4;
  }
  return param_1;
}

// GetClassData @ 14c198310

ClassData * __thiscall rank::RankingData::GetClassData(RankingData *this)

{
  return (ClassData *)&RankingData_class_data_;
}

// PlacementNew_ @ 14c198330

void * __cdecl rank::RankingData::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7RankingData_rank__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(GlobalEmptyString **)((longlong)param_2 + 0x18) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(GlobalEmptyString **)((longlong)param_2 + 0x20) =
       &google::protobuf::internal::fixed_address_empty_string;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// `scalar_deleting_destructor' @ 14c198370

void * __thiscall rank::RankingData::_scalar_deleting_destructor_(RankingData *this,uint param_1)

{
  this->_padding_ = (longlong)&___7RankingData_rank__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).id_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// MergeImpl @ 14c1983d0

void __cdecl rank::SendRawRankDataRequest::MergeImpl(MessageLite *param_1,MessageLite *param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((int)param_2[2]._padding_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&param_1[1]._internal_metadata_,
               (RepeatedPtrFieldBase *)&param_2[1]._internal_metadata_,
               google::protobuf::Arena::CopyConstruct<ds_rank::SqlRawRankTable>);
  }
  uVar1 = (uint)param_2[1]._padding_;
  if (((uVar1 & 1) != 0) && (iVar2 = (int)param_2[3]._padding_, iVar2 != 0)) {
    *(int *)&param_1[3]._padding_ = iVar2;
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

// Clear @ 14c198440

void __thiscall rank::SendRawRankDataRequest::Clear(SendRawRankDataRequest *this)

{
  if (0 < *(int *)&(this->_impl_).raw_data_.field_0x8) {
    google::protobuf::internal::RepeatedPtrFieldBase::
    ClearNonEmpty<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
              ((RepeatedPtrFieldBase *)&(this->_impl_).raw_data_);
  }
  (this->_impl_).world_id_ = 0;
  (this->_impl_)._has_bits_.has_bits_[0] = 0;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoClear<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_);
    return;
  }
  return;
}

// ByteSizeLong @ 14c198490

ulong64 __thiscall rank::SendRawRankDataRequest::ByteSizeLong(SendRawRankDataRequest *this)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  __uint64 _Var6;
  uint uVar7;
  int iVar8;
  RepeatedPtrField<ds_rank::SqlRawRankTable> *pRVar9;
  ulonglong uVar10;
  
  uVar5 = *(ulonglong *)&(this->_impl_).raw_data_;
  pRVar9 = &(this->_impl_).raw_data_;
  uVar1 = *(uint *)&(this->_impl_).raw_data_.field_0x8;
  uVar10 = (ulonglong)uVar1;
  if ((uVar5 & 1) != 0) {
    pRVar9 = (RepeatedPtrField<ds_rank::SqlRawRankTable> *)(uVar5 + 7);
  }
  puVar3 = (undefined8 *)&pRVar9->field_0x0;
  for (; pRVar9 != (RepeatedPtrField<ds_rank::SqlRawRankTable> *)(puVar3 + (int)uVar1);
      pRVar9 = (RepeatedPtrField<ds_rank::SqlRawRankTable> *)&pRVar9->field_0x8) {
    uVar4 = ds_rank::SqlRawRankTable::ByteSizeLong(*(SqlRawRankTable **)pRVar9);
    uVar7 = (uint)uVar4 | 1;
    if (__isa_available < 5) {
      iVar8 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      iVar8 = 0x1f - iVar8;
    }
    else {
      iVar8 = LZCOUNT(uVar7);
    }
    uVar10 = uVar10 + (iVar8 * -9 + 0x160U >> 6) + uVar4;
  }
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar8 = (this->_impl_).world_id_, iVar8 != 0)) {
    uVar5 = (longlong)iVar8 | 1;
    if (__isa_available < 5) {
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 0x3f - (int)lVar2;
    }
    else {
      iVar8 = (int)LZCOUNT(uVar5);
    }
    uVar10 = uVar10 + (iVar8 * -9 + 0x2c0U >> 6);
  }
  _Var6 = google::protobuf::Message::MaybeComputeUnknownFieldsSize
                    ((Message *)this,uVar10,&(this->_impl_)._cached_size_);
  return _Var6;
}

// _InternalSerialize @ 14c198590

uchar * __thiscall
rank::SendRawRankDataRequest::_InternalSerialize
          (SendRawRankDataRequest *this,uchar *param_1,EpsCopyOutputStream *param_2)

{
  int iVar1;
  uint uVar2;
  MessageLite *pMVar3;
  uint uVar4;
  
  uVar4 = 0;
  if ((((this->_impl_)._has_bits_.has_bits_[0] & 1) != 0) &&
     (iVar1 = (this->_impl_).world_id_, iVar1 != 0)) {
    param_1 = google::protobuf::internal::WireFormatLite::WriteInt32ToArrayWithField<1>
                        (param_2,iVar1,param_1);
  }
  uVar2 = *(uint *)&(this->_impl_).raw_data_.field_0x8;
  if (uVar2 != 0) {
    do {
      pMVar3 = *(MessageLite **)&(this->_impl_).raw_data_;
      if (((ulonglong)pMVar3 & 1) != 0) {
        pMVar3 = *(MessageLite **)((longlong)&pMVar3->_padding_ + (longlong)(int)uVar4 * 8 + 7);
      }
      param_1 = google::protobuf::internal::WireFormatLite::InternalWriteMessage
                          (2,pMVar3,*(int *)((longlong)&pMVar3[1]._padding_ + 4),param_1,param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if ((this->_padding_ & 1) != 0) {
    param_1 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray
                        ((UnknownFieldSet *)((this->_padding_ & 0xfffffffffffffffeU) + 8),param_1,
                         param_2);
  }
  return param_1;
}

// GetClassData @ 14c198640

ClassData * __thiscall rank::SendRawRankDataRequest::GetClassData(SendRawRankDataRequest *this)

{
  return (ClassData *)&SendRawRankDataRequest_class_data_;
}

// PlacementNew_ @ 14c198660

void * __cdecl
rank::SendRawRankDataRequest::PlacementNew_(void *param_1,void *param_2,Arena *param_3)

{
  *(Arena **)((longlong)param_2 + 8) = param_3;
  *(undefined ***)param_2 = &___7SendRawRankDataRequest_rank__6B_;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(Arena **)((longlong)param_2 + 0x28) = param_3;
  *(undefined4 *)((longlong)param_2 + 0x30) = 0;
  return param_2;
}

// CopyConstruct<rank::RankingData> @ 14c198690

void * __cdecl
google::protobuf::Arena::CopyConstruct<rank::RankingData>(Arena *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  TaggedStringPtr TVar3;
  void *pvVar4;
  
  if (param_1 == (Arena *)0x0) {
    puVar2 = ::operator_new(0x38);
  }
  else {
    puVar2 = Allocate(param_1,0x38);
  }
  puVar2[1] = param_1;
  *puVar2 = &___7RankingData_rank__6B_;
  if ((*(byte *)((longlong)param_2 + 8) & 1) != 0) {
    internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)(puVar2 + 1),
               (UnknownFieldSet *)((*(ulonglong *)((longlong)param_2 + 8) & 0xfffffffffffffffe) + 8)
              );
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
  pvVar4 = ((TaggedStringPtr *)((longlong)param_2 + 0x18))->ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = internal::TaggedStringPtr::ForceCopy
                      ((TaggedStringPtr *)((longlong)param_2 + 0x18),(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  puVar2[3] = pvVar4;
  pvVar4 = ((TaggedStringPtr *)((longlong)param_2 + 0x20))->ptr_;
  if (((ulonglong)pvVar4 & 3) != 0) {
    TVar3 = internal::TaggedStringPtr::ForceCopy
                      ((TaggedStringPtr *)((longlong)param_2 + 0x20),(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar4 = *TVar3.ptr_;
  }
  puVar2[4] = pvVar4;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x30);
  puVar2[5] = *(undefined8 *)((longlong)param_2 + 0x28);
  puVar2[6] = uVar1;
  return puVar2;
}

// CopyConstruct<ds_rank::SqlRawRankTable> @ 14c198760

void * __cdecl
google::protobuf::Arena::CopyConstruct<ds_rank::SqlRawRankTable>(Arena *param_1,void *param_2)

{
  SqlRawRankTable *pSVar1;
  
  if (param_1 == (Arena *)0x0) {
    pSVar1 = ::operator_new(0x50);
  }
  else {
    pSVar1 = Allocate(param_1,0x50);
  }
  pSVar1 = ds_rank::SqlRawRankTable::SqlRawRankTable(pSVar1,param_1,param_2);
  return pSVar1;
}

// GetOwnedMessage<rank::SendRawRankDataRequest> @ 14c1987b0

SendRawRankDataRequest * __cdecl
google::protobuf::internal::GetOwnedMessage<rank::SendRawRankDataRequest>
          (Arena *param_1,SendRawRankDataRequest *param_2,Arena *param_3)

{
  SendRawRankDataRequest *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (SendRawRankDataRequest *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (SendRawRankDataRequest *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<rank::ServiceBusRankRewardRequest> @ 14c1987c0

ServiceBusRankRewardRequest * __cdecl
google::protobuf::internal::GetOwnedMessage<rank::ServiceBusRankRewardRequest>
          (Arena *param_1,ServiceBusRankRewardRequest *param_2,Arena *param_3)

{
  ServiceBusRankRewardRequest *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (ServiceBusRankRewardRequest *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (ServiceBusRankRewardRequest *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// GetOwnedMessage<rank::ServiceBusRankRewardResponse> @ 14c1987d0

ServiceBusRankRewardResponse * __cdecl
google::protobuf::internal::GetOwnedMessage<rank::ServiceBusRankRewardResponse>
          (Arena *param_1,ServiceBusRankRewardResponse *param_2,Arena *param_3)

{
  ServiceBusRankRewardResponse *this;
  
  if ((param_1 != (Arena *)0x0) && (param_3 == (Arena *)0x0)) {
    if (param_2 != (ServiceBusRankRewardResponse *)0x0) {
      ThreadSafeArena::AddCleanup
                (&param_1->impl_,param_2,arena_delete_object<google::protobuf::MessageLite>);
    }
    return param_2;
  }
  this = (ServiceBusRankRewardResponse *)MessageLite::New((MessageLite *)param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom((MessageLite *)this,(MessageLite *)param_2);
  return this;
}

// WriteInt64ToArrayWithField<6> @ 14c1987e0

uchar * __cdecl
google::protobuf::internal::WireFormatLite::WriteInt64ToArrayWithField<6>
          (EpsCopyOutputStream *param_1,long64 param_2,uchar *param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  if (param_1->end_ <= param_3) {
    param_3 = io::EpsCopyOutputStream::EnsureSpaceFallback(param_1,param_3);
  }
  *param_3 = 0x30;
  while( true ) {
    pbVar1 = param_3 + 1;
    bVar2 = (byte)param_2;
    if ((ulonglong)param_2 < 0x80) break;
    param_2 = (ulonglong)param_2 >> 7;
    *pbVar1 = bVar2 | 0x80;
    param_3 = pbVar1;
  }
  *pbVar1 = bVar2;
  return param_3 + 2;
}

// RankingData @ 14c198840

RankingData * __thiscall rank::RankingData::RankingData(RankingData *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RankingData_rank__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).id_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).main_char_level_ = 0;
  (this->_impl_).main_char_combat_power_ = 0.0;
  (this->_impl_).world_id_ = 0;
  (this->_impl_).region_index_ = 0;
  return this;
}

// RankingData @ 14c198880

RankingData * __thiscall
rank::RankingData::RankingData(RankingData *this,Arena *param_1,RankingData *param_2)

{
  ArenaStringPtr *pAVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  TaggedStringPtr TVar5;
  void *pvVar6;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RankingData_rank__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  pAVar1 = &(param_2->_impl_).nickname_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar6 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  pAVar1 = &(param_2->_impl_).id_;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ = pvVar6;
  pvVar6 = (pAVar1->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar6 & 3) != 0) {
    TVar5 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&pAVar1->tagged_ptr_,(Arena *)&stack0x00000010);
                    /* WARNING: Load size is inaccurate */
    pvVar6 = *TVar5.ptr_;
  }
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar6;
  fVar2 = (param_2->_impl_).main_char_combat_power_;
  iVar3 = (param_2->_impl_).world_id_;
  iVar4 = (param_2->_impl_).region_index_;
  (this->_impl_).main_char_level_ = (param_2->_impl_).main_char_level_;
  (this->_impl_).main_char_combat_power_ = fVar2;
  (this->_impl_).world_id_ = iVar3;
  (this->_impl_).region_index_ = iVar4;
  return this;
}

// RankingList @ 14c198930

RankingList * __thiscall rank::RankingList::RankingList(RankingList *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RankingList_rank__6B_;
  *(undefined8 *)&(this->_impl_).rank_ = 0;
  *(undefined8 *)&(this->_impl_).rank_.field_0x8 = 0;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  *(Arena **)&(this->_impl_).rank_.field_0x10 = param_1;
  return this;
}

// RankingList @ 14c198960

RankingList * __thiscall
rank::RankingList::RankingList(RankingList *this,Arena *param_1,RankingList *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7RankingList_rank__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  *(Arena **)&(this->_impl_).rank_.field_0x10 = param_1;
  *(undefined8 *)&(this->_impl_).rank_ = 0;
  *(undefined8 *)&(this->_impl_).rank_.field_0x8 = 0;
  if (*(int *)&(param_2->_impl_).rank_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)&this->_impl_,(RepeatedPtrFieldBase *)&param_2->_impl_,
               google::protobuf::Arena::CopyConstruct<rank::RankingData>);
  }
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  return this;
}

// SendRawRankDataRequest @ 14c1989f0

SendRawRankDataRequest * __thiscall
rank::SendRawRankDataRequest::SendRawRankDataRequest(SendRawRankDataRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SendRawRankDataRequest_rank__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  *(undefined8 *)&(this->_impl_).raw_data_ = 0;
  *(undefined8 *)&(this->_impl_).raw_data_.field_0x8 = 0;
  *(Arena **)&(this->_impl_).raw_data_.field_0x10 = param_1;
  (this->_impl_).world_id_ = 0;
  return this;
}

// SendRawRankDataRequest @ 14c198a20

SendRawRankDataRequest * __thiscall
rank::SendRawRankDataRequest::SendRawRankDataRequest
          (SendRawRankDataRequest *this,Arena *param_1,SendRawRankDataRequest *param_2)

{
  RepeatedPtrField<ds_rank::SqlRawRankTable> *this_00;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7SendRawRankDataRequest_rank__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(this->_impl_).raw_data_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  *(Arena **)&(this->_impl_).raw_data_.field_0x10 = param_1;
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->_impl_).raw_data_.field_0x8 = 0;
  if (*(int *)&(param_2->_impl_).raw_data_.field_0x8 != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
              ((RepeatedPtrFieldBase *)this_00,(RepeatedPtrFieldBase *)&(param_2->_impl_).raw_data_,
               google::protobuf::Arena::CopyConstruct<ds_rank::SqlRawRankTable>);
  }
  (this->_impl_).world_id_ = (param_2->_impl_).world_id_;
  return this;
}

// ServiceBusRankResponse @ 14c198ab0

ServiceBusRankResponse * __thiscall
rank::ServiceBusRankResponse::ServiceBusRankResponse(ServiceBusRankResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusRankResponse_rank__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).server_name_.tagged_ptr_.ptr_ =
       &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_)._oneof_case_[0] = 0;
  return this;
}

// ServiceBusRankResponse @ 14c198ae0

ServiceBusRankResponse * __thiscall
rank::ServiceBusRankResponse::ServiceBusRankResponse
          (ServiceBusRankResponse *this,Arena *param_1,ServiceBusRankResponse *param_2)

{
  ArenaStringPtr *this_00;
  uint uVar1;
  TaggedStringPtr TVar2;
  void *pvVar3;
  MessageLite *pMVar4;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusRankResponse_rank__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).server_name_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar3 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar3 & 3) != 0) {
    TVar2 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar3 = *TVar2.ptr_;
  }
  (this->_impl_).server_name_.tagged_ptr_.ptr_ = pvVar3;
  uVar1 = (param_2->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = uVar1;
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    pMVar4 = google::protobuf::MessageLite::CopyConstruct
                       (param_1,(MessageLite *)(param_2->_impl_).item_.servicebusrankrewardreq_);
    (this->_impl_).item_.servicebusrankrewardreq_ = (Message *)pMVar4;
  }
  return this;
}

// ServiceBusRankRewardRequest @ 14c198b90

ServiceBusRankRewardRequest * __thiscall
rank::ServiceBusRankRewardRequest::ServiceBusRankRewardRequest
          (ServiceBusRankRewardRequest *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusRankRewardRequest_rank__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).period_.tagged_ptr_.ptr_ = &google::protobuf::internal::fixed_address_empty_string;
  (this->_impl_).world_id_ = 0;
  (this->_impl_).game_server_index_ = 0;
  (this->_impl_).entity_id_ = 0;
  (this->_impl_).player_uid_ = 0;
  (this->_impl_).unique_param_ = 0;
  (this->_impl_).rank_type_ = 0;
  return this;
}

// ServiceBusRankRewardRequest @ 14c198bd0

ServiceBusRankRewardRequest * __thiscall
rank::ServiceBusRankRewardRequest::ServiceBusRankRewardRequest
          (ServiceBusRankRewardRequest *this,Arena *param_1,ServiceBusRankRewardRequest *param_2)

{
  ArenaStringPtr *this_00;
  ulong64 uVar1;
  long64 lVar2;
  int iVar3;
  TaggedStringPtr TVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusRankRewardRequest_rank__6B_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  this_00 = &(param_2->_impl_).period_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (atomic<int>)0x0;
  pvVar5 = (this_00->tagged_ptr_).ptr_;
  if (((ulonglong)pvVar5 & 3) != 0) {
    TVar4 = google::protobuf::internal::TaggedStringPtr::ForceCopy
                      (&this_00->tagged_ptr_,(Arena *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    pvVar5 = *TVar4.ptr_;
  }
  (this->_impl_).period_.tagged_ptr_.ptr_ = pvVar5;
  iVar3 = (param_2->_impl_).game_server_index_;
  uVar1 = (param_2->_impl_).entity_id_;
  (this->_impl_).world_id_ = (param_2->_impl_).world_id_;
  (this->_impl_).game_server_index_ = iVar3;
  (this->_impl_).entity_id_ = uVar1;
  lVar2 = (param_2->_impl_).unique_param_;
  (this->_impl_).player_uid_ = (param_2->_impl_).player_uid_;
  (this->_impl_).unique_param_ = lVar2;
  (this->_impl_).rank_type_ = (param_2->_impl_).rank_type_;
  return this;
}

// ServiceBusRankRewardResponse @ 14c198c70

ServiceBusRankRewardResponse * __thiscall
rank::ServiceBusRankRewardResponse::ServiceBusRankRewardResponse
          (ServiceBusRankRewardResponse *this,Arena *param_1)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusRankRewardResponse_rank__6B_;
  (this->_impl_)._has_bits_ = (uint  [1])0x0;
  (this->_impl_)._cached_size_ = (atomic<int>)0x0;
  (this->_impl_).entity_id_ = 0;
  (this->_impl_).current_score_ = 0;
  (this->_impl_).current_rank_ = 0;
  (this->_impl_).total_rank_count_ = 0;
  (this->_impl_).is_fail_ = false;
  return this;
}

// ServiceBusRankRewardResponse @ 14c198ca0

ServiceBusRankRewardResponse * __thiscall
rank::ServiceBusRankRewardResponse::ServiceBusRankRewardResponse
          (ServiceBusRankRewardResponse *this,Arena *param_1,ServiceBusRankRewardResponse *param_2)

{
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7ServiceBusRankRewardResponse_rank__6B_;
  (this->_impl_)._has_bits_.has_bits_[0] = (param_2->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._cached_size_.atom_ = (param_2->_impl_)._cached_size_.atom_;
  (this->_impl_).entity_id_ = (param_2->_impl_).entity_id_;
  (this->_impl_).current_score_ = (param_2->_impl_).current_score_;
  (this->_impl_).current_rank_ = (param_2->_impl_).current_rank_;
  (this->_impl_).total_rank_count_ = (param_2->_impl_).total_rank_count_;
  (this->_impl_).is_fail_ = (param_2->_impl_).is_fail_;
  if ((param_2->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
              ((InternalMetadata *)&this->_padding_,
               (UnknownFieldSet *)((param_2->_padding_ & 0xfffffffffffffffeU) + 8));
  }
  return this;
}

// ~RepeatedPtrField<rank::RankingData> @ 14c198d20

void __thiscall
google::protobuf::RepeatedPtrField<rank::RankingData>::~RepeatedPtrField<rank::RankingData>
          (RepeatedPtrField<rank::RankingData> *this)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  RepeatedPtrField<rank::RankingData> *pRVar4;
  
  if (*(longlong *)this == 0) {
    return;
  }
  lVar3 = 0;
  if (*(longlong *)&this->field_0x10 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  if ((~*(byte *)this & 1) == 0) {
    uVar2 = *(uint *)(*(longlong *)this + -1);
    pRVar4 = (RepeatedPtrField<rank::RankingData> *)(*(longlong *)this + 7);
  }
  else {
    uVar2 = (uint)(*(longlong *)this != 0);
    pRVar4 = this;
  }
  if (0 < (int)uVar2) {
    do {
      puVar1 = *(undefined8 **)(&pRVar4->field_0x0 + lVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar2);
  }
  if ((~*(byte *)this & 1) == 0) {
    ::operator_delete((void *)(*(longlong *)this + -1),
                      (longlong)(*(int *)&this->field_0xc + 1) * 8 + 8);
  }
  *(undefined8 *)this = 0;
  return;
}

// ~RepeatedPtrField<ds_rank::SqlRawRankTable> @ 14c198d40

void __thiscall
google::protobuf::RepeatedPtrField<ds_rank::SqlRawRankTable>::
~RepeatedPtrField<ds_rank::SqlRawRankTable>(RepeatedPtrField<ds_rank::SqlRawRankTable> *this)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  RepeatedPtrField<ds_rank::SqlRawRankTable> *pRVar4;
  
  if (*(longlong *)this == 0) {
    return;
  }
  lVar3 = 0;
  if (*(longlong *)&this->field_0x10 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  if ((~*(byte *)this & 1) == 0) {
    uVar2 = *(uint *)(*(longlong *)this + -1);
    pRVar4 = (RepeatedPtrField<ds_rank::SqlRawRankTable> *)(*(longlong *)this + 7);
  }
  else {
    uVar2 = (uint)(*(longlong *)this != 0);
    pRVar4 = this;
  }
  if (0 < (int)uVar2) {
    do {
      puVar1 = *(undefined8 **)(&pRVar4->field_0x0 + lVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar2);
  }
  if ((~*(byte *)this & 1) == 0) {
    ::operator_delete((void *)(*(longlong *)this + -1),
                      (longlong)(*(int *)&this->field_0xc + 1) * 8 + 8);
  }
  *(undefined8 *)this = 0;
  return;
}

// ~RankingData @ 14c198d60

void __thiscall rank::RankingData::~RankingData(RankingData *this)

{
  this->_padding_ = (longlong)&___7RankingData_rank__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).nickname_);
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).id_);
  return;
}

// ~RankingList @ 14c198da0

void __thiscall rank::RankingList::~RankingList(RankingList *this)

{
  this->_padding_ = (longlong)&___7RankingList_rank__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if (*(longlong *)&(this->_impl_).rank_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&this->_impl_);
    return;
  }
  return;
}

// ~SendRawRankDataRequest @ 14c198df0

void __thiscall rank::SendRawRankDataRequest::~SendRawRankDataRequest(SendRawRankDataRequest *this)

{
  this->_padding_ = (longlong)&___7SendRawRankDataRequest_rank__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  if (*(longlong *)&(this->_impl_).raw_data_ != 0) {
    google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos
              ((RepeatedPtrFieldBase *)&(this->_impl_).raw_data_);
    return;
  }
  return;
}

// ~ServiceBusRankResponse @ 14c198e40

void __thiscall rank::ServiceBusRankResponse::~ServiceBusRankResponse(ServiceBusRankResponse *this)

{
  uint uVar1;
  Message *pMVar2;
  undefined8 *puVar3;
  
  this->_padding_ = (longlong)&___7ServiceBusRankResponse_rank__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).server_name_);
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (uVar1 != 0) {
    if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
      puVar3 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
      if ((this->_padding_ & 1) != 0) {
        puVar3 = (undefined8 *)*puVar3;
      }
      if ((puVar3 == (undefined8 *)0x0) &&
         (pMVar2 = (this->_impl_).item_.servicebusrankrewardreq_, pMVar2 != (Message *)0x0)) {
        (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
      }
    }
    (this->_impl_)._oneof_case_[0] = 0;
  }
  return;
}

// ~ServiceBusRankRewardRequest @ 14c198ed0

void __thiscall
rank::ServiceBusRankRewardRequest::~ServiceBusRankRewardRequest(ServiceBusRankRewardRequest *this)

{
  this->_padding_ = (longlong)&___7ServiceBusRankRewardRequest_rank__6B_;
  if ((this->_padding_ & 1) != 0) {
    google::protobuf::internal::InternalMetadata::
    DeleteOutOfLineHelper<google::protobuf::UnknownFieldSet>((InternalMetadata *)&this->_padding_);
  }
  google::protobuf::internal::ArenaStringPtr::Destroy(&(this->_impl_).period_);
  return;
}

// ~ServiceBusRankRewardResponse @ 14c198f10

void __thiscall
rank::ServiceBusRankRewardResponse::~ServiceBusRankRewardResponse
          (ServiceBusRankRewardResponse *this)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&___7ServiceBusRankRewardResponse_rank__6B_;
  plVar1 = &this->_padding_;
  if ((*plVar1 & 1) == 0) {
    return;
  }
  pvVar4 = (void *)(*plVar1 & 0xfffffffffffffffe);
  if (pvVar4 != (void *)0x0) {
    if ((~((byte)*(undefined8 *)((longlong)pvVar4 + 8) >> 2) & 1) == 0) {
      uVar3 = *(uint *)((longlong)pvVar4 + 0x10);
    }
    else {
      uVar3 = (uint)*(undefined8 *)((longlong)pvVar4 + 8) & 3;
    }
    if (uVar3 != 0) {
      google::protobuf::UnknownFieldSet::ClearFallback((UnknownFieldSet *)((longlong)pvVar4 + 8));
    }
    if ((~((byte)*(ulonglong *)((longlong)pvVar4 + 8) >> 2) & 1) == 0) {
      plVar2 = (longlong *)((*(ulonglong *)((longlong)pvVar4 + 8) & 0xfffffffffffffff8) - 0x10);
      if (*plVar2 == 0) {
        ::operator_delete(plVar2,((longlong)*(int *)((longlong)pvVar4 + 0x14) + 1) * 0x10);
      }
    }
    ::operator_delete(pvVar4,0x18);
    *plVar1 = 0;
    return;
  }
  *plVar1 = 0;
  return;
}

// CopyFrom @ 14c198f30

void __thiscall rank::RankingData::CopyFrom(RankingData *this,RankingData *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c198f70

void __thiscall rank::RankingList::CopyFrom(RankingList *this,RankingList *param_1)

{
  if (param_1 != this) {
    Clear(this);
    if (*(int *)&(param_1->_impl_).rank_.field_0x8 != 0) {
      google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
                ((RepeatedPtrFieldBase *)&this->_impl_,(RepeatedPtrFieldBase *)&param_1->_impl_,
                 google::protobuf::Arena::CopyConstruct<rank::RankingData>);
    }
    if ((param_1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&this->_padding_,
                 (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    }
  }
  return;
}

// CopyFrom @ 14c198fd0

void __thiscall
rank::SendRawRankDataRequest::CopyFrom(SendRawRankDataRequest *this,SendRawRankDataRequest *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != this) {
    Clear(this);
    if (*(int *)&(param_1->_impl_).raw_data_.field_0x8 != 0) {
      google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
                ((RepeatedPtrFieldBase *)&(this->_impl_).raw_data_,
                 (RepeatedPtrFieldBase *)&(param_1->_impl_).raw_data_,
                 google::protobuf::Arena::CopyConstruct<ds_rank::SqlRawRankTable>);
    }
    uVar1 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if (((uVar1 & 1) != 0) && (iVar2 = (param_1->_impl_).world_id_, iVar2 != 0)) {
      (this->_impl_).world_id_ = iVar2;
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

// CopyFrom @ 14c199050

void __thiscall
rank::ServiceBusRankResponse::CopyFrom(ServiceBusRankResponse *this,ServiceBusRankResponse *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c199090

void __thiscall
rank::ServiceBusRankRewardRequest::CopyFrom
          (ServiceBusRankRewardRequest *this,ServiceBusRankRewardRequest *param_1)

{
  if (param_1 != this) {
    Clear(this);
    MergeImpl((MessageLite *)this,(MessageLite *)param_1);
  }
  return;
}

// CopyFrom @ 14c1990d0

void __thiscall
rank::ServiceBusRankRewardResponse::CopyFrom
          (ServiceBusRankRewardResponse *this,ServiceBusRankRewardResponse *param_1)

{
  bool bVar1;
  uint uVar2;
  ulong64 uVar3;
  longlong lVar4;
  
  if (param_1 != this) {
    Clear(this);
    uVar2 = (param_1->_impl_)._has_bits_.has_bits_[0];
    if ((uVar2 & 0x1f) != 0) {
      if (((uVar2 & 1) != 0) && (uVar3 = (param_1->_impl_).entity_id_, uVar3 != 0)) {
        (this->_impl_).entity_id_ = uVar3;
      }
      if (((uVar2 & 2) != 0) && (lVar4 = (param_1->_impl_).current_score_, lVar4 != 0)) {
        (this->_impl_).current_score_ = lVar4;
      }
      if (((uVar2 & 4) != 0) && (lVar4 = (param_1->_impl_).current_rank_, lVar4 != 0)) {
        (this->_impl_).current_rank_ = lVar4;
      }
      if (((uVar2 & 8) != 0) && (lVar4 = (param_1->_impl_).total_rank_count_, lVar4 != 0)) {
        (this->_impl_).total_rank_count_ = lVar4;
      }
      if (((uVar2 & 0x10) != 0) && (bVar1 = (param_1->_impl_).is_fail_, bVar1 != false)) {
        (this->_impl_).is_fail_ = bVar1;
      }
    }
    (this->_impl_)._has_bits_.has_bits_[0] = (this->_impl_)._has_bits_.has_bits_[0] | uVar2;
    if ((param_1->_padding_ & 1) != 0) {
      google::protobuf::internal::InternalMetadata::DoMergeFrom<google::protobuf::UnknownFieldSet>
                ((InternalMetadata *)&this->_padding_,
                 (UnknownFieldSet *)((param_1->_padding_ & 0xfffffffffffffffeU) + 8));
    }
  }
  return;
}

// GetMetadata @ 14c199180

Metadata * __thiscall
rank::RankingData::GetMetadata(RankingData *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&RankingData_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c1991c0

Metadata * __thiscall
rank::RankingList::GetMetadata(RankingList *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&RankingList_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c199200

Metadata * __thiscall
rank::SendRawRankDataRequest::GetMetadata
          (SendRawRankDataRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&SendRawRankDataRequest_class_data_)
  ;
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c199240

Metadata * __thiscall
rank::ServiceBusRankResponse::GetMetadata
          (ServiceBusRankResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl(&local_18,&ServiceBusRankResponse_class_data_)
  ;
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c199280

Metadata * __thiscall
rank::ServiceBusRankRewardRequest::GetMetadata
          (ServiceBusRankRewardRequest *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&ServiceBusRankRewardRequest_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// GetMetadata @ 14c1992c0

Metadata * __thiscall
rank::ServiceBusRankRewardResponse::GetMetadata
          (ServiceBusRankRewardResponse *this,Metadata *__return_storage_ptr__)

{
  Reflection *pRVar1;
  Metadata *pMVar2;
  Metadata local_18;
  
  pMVar2 = google::protobuf::Message::GetMetadataImpl
                     (&local_18,&ServiceBusRankRewardResponse_class_data_);
  pRVar1 = pMVar2->reflection;
  __return_storage_ptr__->descriptor = pMVar2->descriptor;
  __return_storage_ptr__->reflection = pRVar1;
  return __return_storage_ptr__;
}

// InternalSwap @ 14c199300

void __thiscall rank::RankingData::InternalSwap(RankingData *this,RankingData *param_1)

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
  pvVar3 = (param_1->_impl_).nickname_.tagged_ptr_.ptr_;
  (param_1->_impl_).nickname_.tagged_ptr_.ptr_ = (this->_impl_).nickname_.tagged_ptr_.ptr_;
  (this->_impl_).nickname_.tagged_ptr_.ptr_ = pvVar3;
  pvVar3 = (param_1->_impl_).id_.tagged_ptr_.ptr_;
  (param_1->_impl_).id_.tagged_ptr_.ptr_ = (this->_impl_).id_.tagged_ptr_.ptr_;
  (this->_impl_).id_.tagged_ptr_.ptr_ = pvVar3;
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).main_char_level_,(char *)&(param_1->_impl_).main_char_level_);
  return;
}

// InternalSwap @ 14c199360

void __thiscall rank::RankingList::InternalSwap(RankingList *this,RankingList *param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar1;
  google::protobuf::internal::memswap<16>((char *)&this->_impl_,(char *)&param_1->_impl_);
  return;
}

// InternalSwap @ 14c199390

void __thiscall
rank::SendRawRankDataRequest::InternalSwap
          (SendRawRankDataRequest *this,SendRawRankDataRequest *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar3;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  google::protobuf::internal::memswap<16>
            ((char *)&(this->_impl_).raw_data_,(char *)&(param_1->_impl_).raw_data_);
  iVar2 = (this->_impl_).world_id_;
  (this->_impl_).world_id_ = (param_1->_impl_).world_id_;
  (param_1->_impl_).world_id_ = iVar2;
  return;
}

// InternalSwap @ 14c1993f0

void __thiscall
rank::ServiceBusRankResponse::InternalSwap
          (ServiceBusRankResponse *this,ServiceBusRankResponse *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  ItemUnion IVar4;
  
  lVar2 = this->_padding_;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = lVar2;
  uVar1 = (this->_impl_)._has_bits_.has_bits_[0];
  (this->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0];
  (param_1->_impl_)._has_bits_.has_bits_[0] = uVar1;
  pvVar3 = (param_1->_impl_).server_name_.tagged_ptr_.ptr_;
  (param_1->_impl_).server_name_.tagged_ptr_.ptr_ = (this->_impl_).server_name_.tagged_ptr_.ptr_;
  (this->_impl_).server_name_.tagged_ptr_.ptr_ = pvVar3;
  IVar4 = (this->_impl_).item_;
  (this->_impl_).item_ = (param_1->_impl_).item_;
  (param_1->_impl_).item_ = IVar4;
  uVar1 = (this->_impl_)._oneof_case_[0];
  (this->_impl_)._oneof_case_[0] = (param_1->_impl_)._oneof_case_[0];
  (param_1->_impl_)._oneof_case_[0] = uVar1;
  return;
}

// InternalSwap @ 14c199450

void __thiscall
rank::ServiceBusRankRewardRequest::InternalSwap
          (ServiceBusRankRewardRequest *this,ServiceBusRankRewardRequest *param_1)

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
  pvVar3 = (param_1->_impl_).period_.tagged_ptr_.ptr_;
  (param_1->_impl_).period_.tagged_ptr_.ptr_ = (this->_impl_).period_.tagged_ptr_.ptr_;
  (this->_impl_).period_.tagged_ptr_.ptr_ = pvVar3;
  __std_swap_ranges_trivially_swappable_noalias
            (&(this->_impl_).world_id_,&(this->_impl_).field_0x34,&(param_1->_impl_).world_id_);
  return;
}

// InternalSwap @ 14c1994a0

void __thiscall
rank::ServiceBusRankRewardResponse::InternalSwap
          (ServiceBusRankRewardResponse *this,ServiceBusRankRewardResponse *param_1)

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
            (&(this->_impl_).entity_id_,&(this->_impl_).field_0x29,&(param_1->_impl_).entity_id_);
  return;
}

// clear_item @ 14c1994e0

void __thiscall rank::ServiceBusRankResponse::clear_item(ServiceBusRankResponse *this)

{
  uint uVar1;
  Message *pMVar2;
  undefined8 *puVar3;
  
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    puVar3 = (undefined8 *)(this->_padding_ & 0xfffffffffffffffe);
    if ((this->_padding_ & 1) != 0) {
      puVar3 = (undefined8 *)*puVar3;
    }
    if ((puVar3 == (undefined8 *)0x0) &&
       (pMVar2 = (this->_impl_).item_.servicebusrankrewardreq_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  return;
}

// clear_raw_data @ 14c199540

void __thiscall rank::SendRawRankDataRequest::clear_raw_data(SendRawRankDataRequest *this)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  RepeatedPtrField<ds_rank::SqlRawRankTable> *pRVar5;
  
  pRVar5 = &(this->_impl_).raw_data_;
  if (*(int *)&(this->_impl_).raw_data_.field_0x8 < 1) {
    return;
  }
  puVar1 = &(this->_impl_).raw_data_.field_0x8;
  if ((*(ulonglong *)pRVar5 & 1) != 0) {
    pRVar5 = (RepeatedPtrField<ds_rank::SqlRawRankTable> *)(*(ulonglong *)pRVar5 + 7);
  }
  iVar2 = *(int *)puVar1;
  lVar4 = 0;
  do {
    lVar3 = lVar4 * 8;
    lVar4 = lVar4 + 1;
    (**(code **)(**(longlong **)(&pRVar5->field_0x0 + lVar3) + 8))();
  } while (lVar4 < iVar2);
  *(undefined4 *)puVar1 = 0;
  return;
}

// set_allocated_sendrawrankdatareq @ 14c199560

void __thiscall
rank::ServiceBusRankResponse::set_allocated_sendrawrankdatareq
          (ServiceBusRankResponse *this,SendRawRankDataRequest *param_1)

{
  uint uVar1;
  Message *pMVar2;
  Arena *pAVar3;
  Arena *pAVar4;
  byte bVar5;
  
  pAVar4 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar5 = (byte)this->_padding_ & 1;
  pAVar3 = pAVar4;
  if (bVar5 != 0) {
    pAVar3 = (Arena *)(pAVar4->impl_).tag_and_id_;
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    if (bVar5 != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if ((pAVar4 == (Arena *)0x0) &&
       (pMVar2 = (this->_impl_).item_.servicebusrankrewardreq_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (SendRawRankDataRequest *)0x0) {
    pAVar4 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if (pAVar3 != pAVar4) {
      param_1 = (SendRawRankDataRequest *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar3,(MessageLite *)param_1,pAVar4);
    }
    (this->_impl_)._oneof_case_[0] = 3;
    (this->_impl_).item_.servicebusrankrewardreq_ = (Message *)param_1;
  }
  return;
}

// set_allocated_servicebusrankrewardreq @ 14c199620

void __thiscall
rank::ServiceBusRankResponse::set_allocated_servicebusrankrewardreq
          (ServiceBusRankResponse *this,ServiceBusRankRewardRequest *param_1)

{
  uint uVar1;
  Message *pMVar2;
  Arena *pAVar3;
  Arena *pAVar4;
  byte bVar5;
  
  pAVar4 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar5 = (byte)this->_padding_ & 1;
  pAVar3 = pAVar4;
  if (bVar5 != 0) {
    pAVar3 = (Arena *)(pAVar4->impl_).tag_and_id_;
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    if (bVar5 != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if ((pAVar4 == (Arena *)0x0) &&
       (pMVar2 = (this->_impl_).item_.servicebusrankrewardreq_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (ServiceBusRankRewardRequest *)0x0) {
    pAVar4 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if (pAVar3 != pAVar4) {
      param_1 = (ServiceBusRankRewardRequest *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar3,(MessageLite *)param_1,pAVar4);
    }
    (this->_impl_)._oneof_case_[0] = 1;
    (this->_impl_).item_.servicebusrankrewardreq_ = (Message *)param_1;
  }
  return;
}

// set_allocated_servicebusrankrewardres @ 14c1996e0

void __thiscall
rank::ServiceBusRankResponse::set_allocated_servicebusrankrewardres
          (ServiceBusRankResponse *this,ServiceBusRankRewardResponse *param_1)

{
  uint uVar1;
  Message *pMVar2;
  Arena *pAVar3;
  Arena *pAVar4;
  byte bVar5;
  
  pAVar4 = (Arena *)(this->_padding_ & 0xfffffffffffffffe);
  bVar5 = (byte)this->_padding_ & 1;
  pAVar3 = pAVar4;
  if (bVar5 != 0) {
    pAVar3 = (Arena *)(pAVar4->impl_).tag_and_id_;
  }
  uVar1 = (this->_impl_)._oneof_case_[0];
  if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
    if (bVar5 != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if ((pAVar4 == (Arena *)0x0) &&
       (pMVar2 = (this->_impl_).item_.servicebusrankrewardreq_, pMVar2 != (Message *)0x0)) {
      (*(code *)**(undefined8 **)pMVar2)(pMVar2,1);
    }
  }
  (this->_impl_)._oneof_case_[0] = 0;
  if (param_1 != (ServiceBusRankRewardResponse *)0x0) {
    pAVar4 = (Arena *)(param_1->_padding_ & 0xfffffffffffffffe);
    if ((param_1->_padding_ & 1) != 0) {
      pAVar4 = (Arena *)(pAVar4->impl_).tag_and_id_;
    }
    if (pAVar3 != pAVar4) {
      param_1 = (ServiceBusRankRewardResponse *)
                google::protobuf::internal::GetOwnedMessageInternal
                          (pAVar3,(MessageLite *)param_1,pAVar4);
    }
    (this->_impl_)._oneof_case_[0] = 2;
    (this->_impl_).item_.servicebusrankrewardreq_ = (Message *)param_1;
  }
  return;
}

// `dynamic_atexit_destructor_for_'_RankingData_default_instance_'' @ 1504422d0

void __cdecl rank::_dynamic_atexit_destructor_for___RankingData_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_RankingList_default_instance_'' @ 1504422e0

void __cdecl rank::_dynamic_atexit_destructor_for___RankingList_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_SendRawRankDataRequest_default_instance_'' @ 1504422f0

void __cdecl rank::_dynamic_atexit_destructor_for___SendRawRankDataRequest_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ServiceBusRankResponse_default_instance_'' @ 150442300

void __cdecl rank::_dynamic_atexit_destructor_for___ServiceBusRankResponse_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ServiceBusRankRewardRequest_default_instance_'' @ 150442310

void __cdecl
rank::_dynamic_atexit_destructor_for___ServiceBusRankRewardRequest_default_instance___(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_ServiceBusRankRewardResponse_default_instance_'' @ 150442320

void __cdecl
rank::_dynamic_atexit_destructor_for___ServiceBusRankRewardResponse_default_instance___(void)

{
  return;
}


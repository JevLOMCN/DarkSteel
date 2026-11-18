// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 13

// FFastArrayReplicationFragmentBase @ 144228dd0

FFastArrayReplicationFragmentBase * __thiscall
UE::Net::Private::FFastArrayReplicationFragmentBase::FFastArrayReplicationFragmentBase
          (FFastArrayReplicationFragmentBase *this,EReplicationFragmentTraits param_1,
          UObject *param_2,FReplicationStateDescriptor *param_3,bool param_4)

{
  TUniquePtr<UE::Net::FPropertyReplicationState,TDefaultDelete<UE::Net::FPropertyReplicationState>_>
  *pTVar1;
  longlong *plVar2;
  FNetSerializer *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FFastArrayReplicationFragmentBase *pFVar7;
  FPropertyReplicationState *pFVar8;
  FPropertyReplicationState *this_00;
  FPropertyReplicationState *pFVar9;
  undefined1 local_res10 [8];
  undefined8 local_38 [2];
  
  *(EReplicationFragmentTraits *)&this->_padding_ = param_1;
  this->_padding_ = (longlong)&___7FFastArrayReplicationFragmentBase_Private_Net_UE__6B_;
  (this->ReplicationStateDescriptor).Reference = param_3;
  if (param_3 != (FReplicationStateDescriptor *)0x0) {
    FReplicationStateDescriptor::AddRef(param_3);
  }
  pFVar9 = (FPropertyReplicationState *)0x0;
  this->Owner = param_2;
  pTVar1 = &this->ReplicationState;
  pTVar1->Ptr = (FPropertyReplicationState *)0x0;
  if (((param_3->Traits & IsFastArrayReplicationState) == None) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAnyFlags(InDescriptor->Traits, EReplicationStateTraits::IsFastArrayReplicationState)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\FastArrayReplicationFragment.cpp"
                         ,0x22,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FFastArrayReplicationFragmentBase *)(*pcVar4)();
    return pFVar7;
  }
  if (((param_3->Traits & IsNativeFastArrayReplicationState) != None) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!EnumHasAnyFlags(InDescriptor->Traits, EReplicationStateTraits::IsNativeFastArrayReplicationState)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\FastArrayReplicationFragment.cpp"
                         ,0x23,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FFastArrayReplicationFragmentBase *)(*pcVar4)();
    return pFVar7;
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x10;
  if ((param_1 & CanReplicate) != None) {
    pFVar8 = ::operator_new(0x18);
    this_00 = pFVar9;
    if (pFVar8 != (FPropertyReplicationState *)0x0) {
      this_00 = FPropertyReplicationState::FPropertyReplicationState(pFVar8,param_3);
    }
    if (pTVar1 == (TUniquePtr<UE::Net::FPropertyReplicationState,TDefaultDelete<UE::Net::FPropertyReplicationState>_>
                   *)local_38) {
      if (this_00 == (FPropertyReplicationState *)0x0) goto LAB_144228efa;
      FPropertyReplicationState::~FPropertyReplicationState(this_00);
    }
    else {
      pFVar8 = pTVar1->Ptr;
      pTVar1->Ptr = this_00;
      if (pFVar8 == (FPropertyReplicationState *)0x0) goto LAB_144228efa;
      FPropertyReplicationState::~FPropertyReplicationState(pFVar8);
      this_00 = pFVar8;
    }
    ::operator_delete(this_00,0x18);
  }
LAB_144228efa:
  if ((param_1 & CanReceive) != None) {
    if ((param_3->Traits & HasRepNotifies) != None) {
      if (((param_3->Traits & KeepPreviousState) != None) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\FastArrayReplicationFragment.cpp"
                             ,0x34,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FFastArrayReplicationFragmentBase *)(*pcVar4)();
        return pFVar7;
      }
      *(uint *)&this->_padding_ = (uint)this->_padding_ | 2;
    }
    *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x100;
  }
  uVar6 = (uint)this->_padding_;
  if ((param_1 & CanReplicate) != None) {
    uVar6 = uVar6 | 0x80;
    *(uint *)&this->_padding_ = uVar6;
  }
  if ((param_3->Traits & HasObjectReference) != None) {
    uVar6 = uVar6 | 0x2000;
  }
  *(uint *)&this->_padding_ = uVar6 | 0x5000;
  plVar2 = (longlong *)
           ((this->ReplicationStateDescriptor).Reference)->MemberSerializerDescriptors->
           SerializerConfig[1]._padding_;
  pFVar3 = *(FNetSerializer **)plVar2[2];
  while (pFVar3 != &FArrayPropertyNetSerializerNetSerializerInfo::Serializer) {
    pFVar9 = (FPropertyReplicationState *)(ulonglong)((int)pFVar9 + 1);
    pFVar3 = (FNetSerializer *)((longlong *)plVar2[2])[(longlong)pFVar9 * 2];
  }
  this->WrappedArrayOffsetRelativeFastArraySerializerProperty =
       (ulonglong)*(uint *)(*plVar2 + (longlong)pFVar9 * 8);
  if ((param_4) && (*(short *)((longlong)plVar2 + 0x7c) != 1)) {
    `UE::Net::Private::FFastArrayReplicationFragmentBase::FFastArrayReplicationFragmentBase'::__l2::
    <lambda_1>::operator()(local_res10);
  }
  return this;
}

// ~FFastArrayReplicationFragmentBase @ 14422b040

void __thiscall
UE::Net::Private::FFastArrayReplicationFragmentBase::~FFastArrayReplicationFragmentBase
          (FFastArrayReplicationFragmentBase *this)

{
  FPropertyReplicationState *this_00;
  FReplicationStateDescriptor *this_01;
  
  this->_padding_ = (longlong)&___7FFastArrayReplicationFragmentBase_Private_Net_UE__6B_;
  this_00 = (this->ReplicationState).Ptr;
  if (this_00 != (FPropertyReplicationState *)0x0) {
    FPropertyReplicationState::~FPropertyReplicationState(this_00);
    ::operator_delete(this_00,0x18);
  }
  this_01 = (this->ReplicationStateDescriptor).Reference;
  if (this_01 != (FReplicationStateDescriptor *)0x0) {
    FReplicationStateDescriptor::Release(this_01);
  }
  this->_padding_ = (longlong)&___7FReplicationFragment_Net_UE__6B_;
  return;
}

// CollectOwner @ 144233da0

void __thiscall
UE::Net::Private::FFastArrayReplicationFragmentBase::CollectOwner
          (FFastArrayReplicationFragmentBase *this,FReplicationStateOwnerCollector *param_1)

{
  uint uVar1;
  
  uVar1 = param_1->OwnerCount;
  if ((uVar1 < param_1->MaxOwnerCount) &&
     ((uVar1 == 0 || (param_1->Owners[uVar1 - 1] != this->Owner)))) {
    param_1->Owners[uVar1] = this->Owner;
    param_1->OwnerCount = param_1->OwnerCount + 1;
  }
  return;
}

// GetArrayElementDescriptor @ 14423af00

FReplicationStateDescriptor * __thiscall
UE::Net::Private::FFastArrayReplicationFragmentBase::GetArrayElementDescriptor
          (FFastArrayReplicationFragmentBase *this)

{
  longlong *plVar1;
  FNetSerializer *pFVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  plVar1 = *(longlong **)
            (((this->ReplicationStateDescriptor).Reference)->MemberSerializerDescriptors->
             SerializerConfig[1]._padding_ + 0x10);
  pFVar2 = (FNetSerializer *)*plVar1;
  while (pFVar2 != &FArrayPropertyNetSerializerNetSerializerInfo::Serializer) {
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    pFVar2 = (FNetSerializer *)plVar1[(ulonglong)uVar3 * 2];
  }
  return *(FReplicationStateDescriptor **)
          (*(longlong *)(*(longlong *)(*(longlong *)(plVar1[uVar4 * 2 + 1] + 0x38) + 0x10) + 8) +
          0x10);
}

// GetFastArrayPropertyStructDescriptor @ 14423c030

FReplicationStateDescriptor * __thiscall
UE::Net::Private::FFastArrayReplicationFragmentBase::GetFastArrayPropertyStructDescriptor
          (FFastArrayReplicationFragmentBase *this)

{
  return (FReplicationStateDescriptor *)
         ((this->ReplicationStateDescriptor).Reference)->MemberSerializerDescriptors->
         SerializerConfig[1]._padding_;
}

// InternalCompareArrayElement @ 144242210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Net::Private::FFastArrayReplicationFragmentBase::InternalCompareArrayElement
          (FReplicationStateDescriptor *param_1,void *param_2,void *param_3)

{
  ushort uVar1;
  FReplicationStateMemberDescriptor *pFVar2;
  FReplicationStateMemberPropertyDescriptor *pFVar3;
  FReplicationStateMemberSerializerDescriptor *pFVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  FProperty **ppFVar12;
  undefined1 auStack_408 [32];
  FNetIsEqualArgs FStack_3e8;
  FNetRefHandle_u_0 FStack_3b8;
  undefined8 uStack_3b0;
  undefined8 auStack_3a0 [95];
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStack_408;
  ppFVar12 = param_1->MemberProperties;
  uVar10 = 0;
  pFVar2 = param_1->MemberDescriptors;
  pFVar3 = param_1->MemberPropertyDescriptors;
  if ((param_1->Traits & IsDerivedFromStructWithCustomSerializer) != None) {
    pFVar4 = param_1->MemberSerializerDescriptors;
    uVar10 = 1;
    puVar7 = auStack_3a0;
    FStack_3b8.Value = 0;
    uStack_3b0 = 0;
    lVar6 = 0x20;
    do {
      *puVar7 = 0;
      puVar7 = puVar7 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uVar8 = (ulonglong)pFVar2->ExternalMemberOffset;
    FStack_3e8._padding_ = (longlong)pFVar4->SerializerConfig;
    uStack_58 = uStack_58 & 0xfffffffc;
    FStack_3e8.Source0 = uVar8 + (longlong)param_2;
    uStack_a8 = 0;
    FStack_3e8.Source1 = uVar8 + (longlong)param_3;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_5c = 0xffffffff;
    FStack_3e8._padding_ = 0;
    FStack_3e8._padding_._0_4_ = 0;
    FStack_3e8.bStateIsQuantized = false;
    bVar5 = (*pFVar4->Serializer->IsEqual)((FNetSerializationContext *)&FStack_3b8._s_0,&FStack_3e8)
    ;
    if (!bVar5) {
      return false;
    }
  }
  uVar1 = param_1->MemberCount;
  if ((uint)uVar10 < (uint)uVar1) {
    ppFVar12 = ppFVar12 + uVar10;
    puVar11 = &pFVar3[uVar10].ArrayIndex;
    do {
      lVar6 = (longlong)
              (int)((uint)*puVar11 * (*ppFVar12)->ElementSize + (*ppFVar12)->Offset_Internal);
      bVar5 = InternalCompareMember
                        (param_1,(uint)uVar10,(void *)(lVar6 + (longlong)param_2),
                         (void *)(lVar6 + (longlong)param_3));
      if (!bVar5) {
        return false;
      }
      uVar9 = (uint)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      ppFVar12 = ppFVar12 + 1;
      puVar11 = puVar11 + 8;
    } while (uVar9 < uVar1);
  }
  return true;
}

// InternalCopyArrayElement @ 144242230

void __cdecl
UE::Net::Private::FFastArrayReplicationFragmentBase::InternalCopyArrayElement
          (FReplicationStateDescriptor *param_1,void *param_2,void *param_3)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  ushort *puVar4;
  FProperty **ppFVar5;
  bool bVar6;
  
  bVar6 = (param_1->Traits & IsDerivedFromStructWithCustomSerializer) != None;
  if (bVar6) {
    UScriptStruct::CopyScriptStruct(param_1->BaseStruct,param_2,param_3,1);
  }
  uVar3 = (uint)bVar6;
  uVar1 = param_1->MemberCount;
  if (uVar3 < uVar1) {
    ppFVar5 = param_1->MemberProperties + uVar3;
    puVar4 = &param_1->MemberPropertyDescriptors[uVar3].ArrayIndex;
    do {
      lVar2 = (longlong)(int)((uint)*puVar4 * (*ppFVar5)->ElementSize + (*ppFVar5)->Offset_Internal)
      ;
      InternalCopyPropertyValue
                (param_1,uVar3,(void *)(lVar2 + (longlong)param_2),
                 (void *)(lVar2 + (longlong)param_3));
      uVar3 = uVar3 + 1;
      ppFVar5 = ppFVar5 + 1;
      puVar4 = puVar4 + 8;
    } while (uVar3 < uVar1);
  }
  return;
}

// InternalDequantizeExtraProperties @ 144242250

void __cdecl
UE::Net::Private::FFastArrayReplicationFragmentBase::InternalDequantizeExtraProperties
          (FNetSerializationContext *param_1,uchar *param_2,uchar *param_3,
          FReplicationStateDescriptor *param_4)

{
  ushort uVar1;
  FNetSerializer *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FReplicationStateMemberDescriptor *pFVar6;
  uint uVar7;
  FReplicationStateMemberSerializerDescriptor *pFVar8;
  FNetDequantizeArgs local_58;
  
  pFVar8 = param_4->MemberSerializerDescriptors;
  uVar7 = 0;
  pFVar2 = pFVar8->Serializer;
  while (pFVar2 != &FArrayPropertyNetSerializerNetSerializerInfo::Serializer) {
    uVar7 = uVar7 + 1;
    pFVar2 = pFVar8[uVar7].Serializer;
  }
  uVar1 = param_4->MemberCount;
  pFVar6 = param_4->MemberDescriptors;
  if ((uVar1 <= uVar7) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayMemberIndex < MemberCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\FastArrayReplicationFragment.cpp"
                         ,0xbf,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar5 != uVar7) {
        local_58._padding_ = (longlong)pFVar8->SerializerConfig;
        local_58.Target = (ulong64)(param_2 + pFVar6->ExternalMemberOffset);
        local_58._padding_._0_4_ = 0;
        local_58.Source = (ulong64)(param_3 + pFVar6->InternalMemberOffset);
        local_58._padding_ = 0;
        (*pFVar8->Serializer->Dequantize)(param_1,&local_58);
      }
      uVar5 = uVar5 + 1;
      pFVar6 = pFVar6 + 1;
      pFVar8 = pFVar8 + 1;
    } while (uVar5 < uVar1);
  }
  return;
}

// InternalDequantizeFastArray @ 144242360

void __cdecl
UE::Net::Private::FFastArrayReplicationFragmentBase::InternalDequantizeFastArray
          (FNetSerializationContext *param_1,uchar *param_2,uchar *param_3,
          FReplicationStateDescriptor *param_4)

{
  FReplicationStateMemberSerializerDescriptor *pFVar1;
  FReplicationStateMemberDescriptor *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  FNetDequantizeArgs local_48;
  
  pFVar1 = param_4->MemberSerializerDescriptors;
  pFVar2 = param_4->MemberDescriptors;
  uVar5 = 0;
  if (pFVar1->Serializer != &FArrayPropertyNetSerializerNetSerializerInfo::Serializer) {
    do {
      uVar5 = (ulonglong)((int)uVar5 + 1);
    } while (pFVar1[uVar5].Serializer != &FArrayPropertyNetSerializerNetSerializerInfo::Serializer);
  }
  if (((uint)param_4->MemberCount <= (uint)uVar5) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayMemberIndex < MemberCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\FastArrayReplicationFragment.cpp"
                         ,0x8b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_48._padding_ = 0;
  local_48._padding_._0_4_ = 0;
  local_48._padding_ = (longlong)pFVar1[uVar5].SerializerConfig;
  local_48.Target = (ulong64)(param_2 + pFVar2[uVar5].ExternalMemberOffset);
  local_48.Source = (ulong64)(param_3 + pFVar2[uVar5].InternalMemberOffset);
  (*(pFVar1[uVar5].Serializer)->Dequantize)(param_1,&local_48);
  return;
}

// InternalPartialDequantizeFastArray @ 144242540

void __cdecl
UE::Net::Private::FFastArrayReplicationFragmentBase::InternalPartialDequantizeFastArray
          (FReplicationStateApplyContext *param_1,uchar *param_2,uchar *param_3,
          FReplicationStateDescriptor *param_4)

{
  FReplicationStateMemberSerializerDescriptor *pFVar1;
  FReplicationStateMemberDescriptor *pFVar2;
  FReplicationStateMemberChangeMaskDescriptor *pFVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  FNetBitArrayView local_58;
  FNetDequantizeArgs local_48;
  
  pFVar1 = param_4->MemberSerializerDescriptors;
  pFVar2 = param_4->MemberDescriptors;
  uVar6 = 0;
  if (pFVar1->Serializer != &FArrayPropertyNetSerializerNetSerializerInfo::Serializer) {
    do {
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while (pFVar1[uVar6].Serializer != &FArrayPropertyNetSerializerNetSerializerInfo::Serializer);
  }
  if (((uint)param_4->MemberCount <= (uint)uVar6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayMemberIndex < MemberCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\FastArrayReplicationFragment.cpp"
                         ,0xa1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = param_1->Descriptor->MemberChangeMaskDescriptors;
  FNetBitArrayView::FNetBitArrayView
            (&local_58,(param_1->StateBufferData)._s_1.ChangeMaskData,
             (uint)param_1->Descriptor->ChangeMaskBitCount);
  param_1->NetSerializationContext->ChangeMask = &local_58;
  local_48._padding_._0_4_ = 0;
  local_48._padding_ = (longlong)pFVar1[uVar6].SerializerConfig;
  local_48.Target = (ulong64)(param_2 + pFVar2[uVar6].ExternalMemberOffset);
  local_48.Source = (ulong64)(param_3 + pFVar2[uVar6].InternalMemberOffset);
  local_48._padding_._4_4_ = (uint)pFVar3->BitCount;
  local_48._padding_._0_4_ = (uint)pFVar3->BitOffset;
  (*(pFVar1[uVar6].Serializer)->Dequantize)(param_1->NetSerializationContext,&local_48);
  return;
}

// Register @ 14424b3d0

void __thiscall
UE::Net::Private::FFastArrayReplicationFragmentBase::Register
          (FFastArrayReplicationFragmentBase *this,FFragmentRegistrationContext *param_1,
          EReplicationFragmentTraits param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  FPropertyReplicationState *pFVar3;
  ForElementType<UE::Net::FReplicationFragmentInfo> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForElementType<UE::Net::FReplicationFragmentInfo> FVar8;
  FReplicationStateDescriptor *local_28;
  uchar *puStack_20;
  FFastArrayReplicationFragmentBase *local_18;
  
  *(EReplicationFragmentTraits *)&this->_padding_ =
       (EReplicationFragmentTraits)this->_padding_ | param_2;
  pFVar3 = (this->ReplicationState).Ptr;
  puStack_20 = (uchar *)0x0;
  if (pFVar3 != (FPropertyReplicationState *)0x0) {
    puStack_20 = pFVar3->StateBuffer;
  }
  local_28 = (this->ReplicationStateDescriptor).Reference;
  FVar4 = (param_1->Fragments).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<UE::Net::FReplicationFragmentInfo>)param_1;
  if (FVar4 != (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
    FVar8 = FVar4;
  }
  local_18 = this;
  if ((ulonglong)FVar8 <= &local_28) {
    FVar8 = (ForElementType<UE::Net::FReplicationFragmentInfo>)param_1;
    if (FVar4 != (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
      FVar8 = FVar4;
    }
    if ((&local_28 <
         (FReplicationStateDescriptor **)
         ((longlong)FVar8 + (longlong)(param_1->Fragments).ArrayMax * 0x18)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (param_1->Fragments).ArrayNum;
  piVar1 = &(param_1->Fragments).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationFragmentInfo>_>
                      (0x818,(ForElementType<UE::Net::FReplicationFragmentInfo> *)param_1,piVar1);
  }
  (param_1->Fragments).ArrayNum = iVar7 + 1;
  FVar4 = (param_1->Fragments).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<UE::Net::FReplicationFragmentInfo>)0x0) {
    param_1 = (FFragmentRegistrationContext *)FVar4;
  }
  puVar2 = (undefined8 *)((longlong)param_1 + (longlong)iVar7 * 0x18);
  *puVar2 = local_28;
  puVar2[1] = puStack_20;
  *(FFastArrayReplicationFragmentBase **)
   ((uchar *)((longlong)param_1 + 0x10) + (longlong)iVar7 * 0x18) = local_18;
  return;
}

// ToString @ 144254950

void __cdecl
UE::Net::Private::FFastArrayReplicationFragmentBase::ToString
          (TStringBuilderBase<wchar_t> *param_1,uchar *param_2,FReplicationStateDescriptor *param_3)

{
  ushort uVar1;
  FProperty **ppFVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar7;
  FString local_58;
  FString local_48;
  ulonglong uVar6;
  
  ppFVar2 = param_3->MemberProperties;
  uVar1 = param_3->MemberCount;
  TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"FFastArrayReplicationState %s\n");
  uVar6 = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  uVar7 = uVar6;
  if (uVar1 != 0) {
    do {
      plVar3 = *(longlong **)(uVar7 + (longlong)ppFVar2);
      (**(code **)(*plVar3 + 0xe0))
                (plVar3,&local_58,
                 param_2 + *(uint *)((longlong)&param_3->MemberDescriptors->ExternalMemberOffset +
                                    uVar7),0,0,0,0x2000,0);
      bVar4 = IsThisNotNull(plVar3,"FField::GetName");
      if (bVar4) {
        ::FName::ToString((FName *)(plVar3 + 4),&local_48);
      }
      else {
        ::FString::FString(&local_48,L"None");
      }
      TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"%u - %s : %s\n");
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      ::FString::Reset(&local_58,0);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar7 = uVar7 + 8;
    } while (uVar5 < uVar1);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1504b2e10

bool __thiscall
`UE::Net::Private::FFastArrayReplicationFragmentBase::FFastArrayReplicationFragmentBase'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2732730563361243051>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2732730563361243051>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


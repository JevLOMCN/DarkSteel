// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 4

// RegisterAttribute<int_[0],0> @ 144391c90

TMeshAttributesRef<int,TArrayAttribute<int>_> __thiscall
FAttributesSetBase::RegisterAttribute<int_[0],0>
          (FAttributesSetBase *this,FName param_1,int param_2,int *param_3,
          EMeshAttributeFlags param_4)

{
  int iVar1;
  FMeshAttributeArraySetBase *pFVar2;
  longlong lVar3;
  TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> *pTVar4;
  FName FVar5;
  uint uVar6;
  FAttributesSetEntry *pFVar7;
  TMeshUnboundedAttributeArraySet<int> *this_00;
  longlong lVar8;
  TMeshUnboundedAttributeArraySet<int> *pTVar9;
  uint in_register_00000084;
  TPairInitializer<FName_const_&,FAttributesSetEntry_&&> local_res8;
  FName local_res18;
  undefined4 in_stack_0000002c;
  EMeshAttributeFlags in_stack_00000030;
  FName *local_38;
  FAttributesSetEntry **local_30;
  
  local_res18.Number = in_register_00000084;
  local_res18.ComparisonIndex.Value = param_2;
  pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)this,local_res18);
  FVar5 = local_res18;
  if (pFVar7 != (FAttributesSetEntry *)0x0) {
    pFVar2 = (pFVar7->Ptr).Ptr;
    if ((pFVar2->Type == 4) && (pFVar2->Extent == 0)) {
      (**(code **)(pFVar2->_padding_ + 0x70))(pFVar2,(ulonglong)param_3 & 0xffffffff);
      ((pFVar7->Ptr).Ptr)->Flags = in_stack_00000030;
      *(FMeshAttributeArraySetBase **)param_1 = (pFVar7->Ptr).Ptr;
      return (TMeshAttributesRef<int,TArrayAttribute<int>_>)param_1;
    }
    local_res8.Key = (FName *)local_res18;
    if (*(int *)&(this->Map).field_0x8 != *(int *)&(this->Map).field_0x34) {
      uVar6 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                           *)this,FVar5.Number + uVar6,(FName *)&local_res8);
    }
  }
  iVar1 = this->NumElements;
  pTVar9 = (TMeshUnboundedAttributeArraySet<int> *)0x0;
  local_res8.Value = (FAttributesSetEntry *)0x0;
  this_00 = ::operator_new(0x48);
  if (this_00 != (TMeshUnboundedAttributeArraySet<int> *)0x0) {
    *(EMeshAttributeFlags *)((longlong)&this_00->_padding_ + 4) = in_stack_00000030;
    this_00->_padding_ = 4;
    *(int *)&this_00->_padding_ = iVar1;
    this_00->_padding_ = (longlong)&___7__TMeshUnboundedAttributeArraySet_H__6B_;
    (this_00->ArrayForChannels).AllocatorInstance.SecondaryData =
         (ForElementType<TAttributeArrayContainer<int>_>)0x0;
    (this_00->ArrayForChannels).ArrayNum = 0;
    (this_00->ArrayForChannels).ArrayMax = 1;
    this_00->DefaultValue = *(int *)CONCAT44(in_stack_0000002c,param_4);
    TMeshUnboundedAttributeArraySet<int>::SetNumChannels(this_00,(int)param_3);
    pTVar9 = this_00;
  }
  pFVar7 = local_res8.Value;
  if (local_res8.Value != (FAttributesSetEntry *)0x0) {
    pTVar4 = &(local_res8.Value)->Ptr;
    local_res8.Value = (FAttributesSetEntry *)pTVar9;
    (*(code *)pTVar4->Ptr->_padding_)(pFVar7,1);
    pTVar9 = (TMeshUnboundedAttributeArraySet<int> *)local_res8.Value;
  }
  local_res8.Value = (FAttributesSetEntry *)pTVar9;
  local_38 = &local_res18;
  local_30 = &local_res8.Value;
  TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FAttributesSetEntry_&&>_>
            ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_38);
  lVar8 = (longlong)(int)local_res8.Key._0_4_;
  lVar3 = *(longlong *)&this->Map;
  if ((TMeshUnboundedAttributeArraySet<int> *)local_res8.Value !=
      (TMeshUnboundedAttributeArraySet<int> *)0x0) {
    (*(code *)**(undefined8 **)&(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  *(undefined8 *)param_1 = *(undefined8 *)(lVar3 + lVar8 * 0x18 + 8);
  return (TMeshAttributesRef<int,TArrayAttribute<int>_>)param_1;
}

// RegisterAttribute<int,0> @ 144391e20

TMeshAttributesRef<int,int> __thiscall
FAttributesSetBase::RegisterAttribute<int,0>
          (FAttributesSetBase *this,FName param_1,int param_2,int *param_3,
          EMeshAttributeFlags param_4)

{
  int iVar1;
  FMeshAttributeArraySetBase *pFVar2;
  longlong lVar3;
  TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> *pTVar4;
  FName FVar5;
  uint uVar6;
  FAttributesSetEntry *pFVar7;
  TMeshAttributeArraySet<int> *this_00;
  longlong lVar8;
  uint in_register_00000084;
  TPairInitializer<FName_const_&,FAttributesSetEntry_&&> local_res8;
  FName local_res18 [2];
  undefined4 in_stack_0000002c;
  EMeshAttributeFlags in_stack_00000030;
  FName *local_38;
  FAttributesSetEntry **local_30;
  
  local_res18[0].Number = in_register_00000084;
  local_res18[0].ComparisonIndex.Value = param_2;
  pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)this,local_res18[0]);
  FVar5 = local_res18[0];
  if (pFVar7 != (FAttributesSetEntry *)0x0) {
    pFVar2 = (pFVar7->Ptr).Ptr;
    if ((pFVar2->Type == 4) && (pFVar2->Extent == 1)) {
      (**(code **)(pFVar2->_padding_ + 0x70))(pFVar2,(ulonglong)param_3 & 0xffffffff);
      ((pFVar7->Ptr).Ptr)->Flags = in_stack_00000030;
      *(FMeshAttributeArraySetBase **)param_1 = (pFVar7->Ptr).Ptr;
      return (TMeshAttributesRef<int,int>)param_1;
    }
    local_res8.Key = (FName *)local_res18[0];
    if (*(int *)&(this->Map).field_0x8 != *(int *)&(this->Map).field_0x34) {
      uVar6 = ::GetTypeHash(local_res18[0].ComparisonIndex.Value);
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                           *)this,FVar5.Number + uVar6,(FName *)&local_res8);
    }
  }
  iVar1 = this->NumElements;
  local_res8.Value = (FAttributesSetEntry *)0x0;
  this_00 = ::operator_new(0x48);
  if (this_00 == (TMeshAttributeArraySet<int> *)0x0) {
    this_00 = (TMeshAttributeArraySet<int> *)0x0;
  }
  else {
    *(EMeshAttributeFlags *)((longlong)&this_00->_padding_ + 4) = in_stack_00000030;
    *(undefined4 *)&this_00->_padding_ = 4;
    *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 1;
    *(int *)&this_00->_padding_ = iVar1;
    this_00->_padding_ = (longlong)&___7__TMeshAttributeArraySet_H__6B_;
    (this_00->ArrayForChannels).AllocatorInstance.SecondaryData =
         (ForElementType<TMeshAttributeArrayBase<int>_>)0x0;
    (this_00->ArrayForChannels).ArrayNum = 0;
    (this_00->ArrayForChannels).ArrayMax = 1;
    this_00->DefaultValue = *(int *)CONCAT44(in_stack_0000002c,param_4);
    TMeshAttributeArraySet<int>::SetNumChannels(this_00,(int)param_3);
  }
  pFVar7 = local_res8.Value;
  if (local_res8.Value != (FAttributesSetEntry *)0x0) {
    pTVar4 = &(local_res8.Value)->Ptr;
    local_res8.Value = (FAttributesSetEntry *)this_00;
    (*(code *)pTVar4->Ptr->_padding_)(pFVar7,1);
    this_00 = (TMeshAttributeArraySet<int> *)local_res8.Value;
  }
  local_res8.Value = (FAttributesSetEntry *)this_00;
  local_38 = local_res18;
  local_30 = &local_res8.Value;
  TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FAttributesSetEntry_&&>_>
            ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_38);
  lVar8 = (longlong)(int)local_res8.Key._0_4_;
  lVar3 = *(longlong *)&this->Map;
  if ((TMeshAttributeArraySet<int> *)local_res8.Value != (TMeshAttributeArraySet<int> *)0x0) {
    (*(code *)**(undefined8 **)&(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  *(undefined8 *)param_1 = *(undefined8 *)(lVar3 + lVar8 * 0x18 + 8);
  return (TMeshAttributesRef<int,int>)param_1;
}

// RegisterAttribute<UE::Math::TVector4<float>,0> @ 144391fc0

TMeshAttributesRef<int,UE::Math::TVector4<float>_> __thiscall
FAttributesSetBase::RegisterAttribute<UE::Math::TVector4<float>,0>
          (FAttributesSetBase *this,FName param_1,int param_2,TVector4<float> *param_3,
          EMeshAttributeFlags param_4)

{
  int iVar1;
  FMeshAttributeArraySetBase *pFVar2;
  longlong lVar3;
  undefined8 uVar4;
  TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> *pTVar5;
  FName FVar6;
  uint uVar7;
  FAttributesSetEntry *pFVar8;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this_00;
  longlong lVar9;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *pTVar10;
  uint in_register_00000084;
  TPairInitializer<FName_const_&,FAttributesSetEntry_&&> local_res8;
  FName local_res18;
  undefined4 in_stack_0000002c;
  EMeshAttributeFlags in_stack_00000030;
  FName *local_38;
  FAttributesSetEntry **local_30;
  
  local_res18.Number = in_register_00000084;
  local_res18.ComparisonIndex.Value = param_2;
  pFVar8 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)this,local_res18);
  FVar6 = local_res18;
  if (pFVar8 != (FAttributesSetEntry *)0x0) {
    pFVar2 = (pFVar8->Ptr).Ptr;
    if ((pFVar2->Type == 0) && (pFVar2->Extent == 1)) {
      (**(code **)(pFVar2->_padding_ + 0x70))(pFVar2,(ulonglong)param_3 & 0xffffffff);
      ((pFVar8->Ptr).Ptr)->Flags = in_stack_00000030;
      *(FMeshAttributeArraySetBase **)param_1 = (pFVar8->Ptr).Ptr;
      return (TMeshAttributesRef<int,UE::Math::TVector4<float>_>)param_1;
    }
    local_res8.Key = (FName *)local_res18;
    if (*(int *)&(this->Map).field_0x8 != *(int *)&(this->Map).field_0x34) {
      uVar7 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                           *)this,FVar6.Number + uVar7,(FName *)&local_res8);
    }
  }
  iVar1 = this->NumElements;
  pTVar10 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0;
  local_res8.Value = (FAttributesSetEntry *)0x0;
  this_00 = ::operator_new(0x50);
  if (this_00 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
    *(EMeshAttributeFlags *)((longlong)&this_00->_padding_ + 4) = in_stack_00000030;
    *(undefined4 *)&this_00->_padding_ = 0;
    *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 1;
    *(int *)&this_00->_padding_ = iVar1;
    this_00->_padding_ = (longlong)&___7__TMeshAttributeArraySet_U__TVector4_M_Math_UE____6B_;
    (this_00->ArrayForChannels).AllocatorInstance.SecondaryData =
         (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0;
    (this_00->ArrayForChannels).ArrayNum = 0;
    (this_00->ArrayForChannels).ArrayMax = 1;
    uVar4 = ((undefined8 *)CONCAT44(in_stack_0000002c,param_4))[1];
    *(undefined8 *)&(this_00->DefaultValue).field0_0x0 =
         *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    *(undefined8 *)((longlong)&(this_00->DefaultValue).field0_0x0 + 8) = uVar4;
    TMeshAttributeArraySet<UE::Math::TVector4<float>_>::SetNumChannels(this_00,(int)param_3);
    pTVar10 = this_00;
  }
  pFVar8 = local_res8.Value;
  if (local_res8.Value != (FAttributesSetEntry *)0x0) {
    pTVar5 = &(local_res8.Value)->Ptr;
    local_res8.Value = (FAttributesSetEntry *)pTVar10;
    (*(code *)pTVar5->Ptr->_padding_)(pFVar8,1);
    pTVar10 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)local_res8.Value;
  }
  local_res8.Value = (FAttributesSetEntry *)pTVar10;
  local_38 = &local_res18;
  local_30 = &local_res8.Value;
  TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FAttributesSetEntry_&&>_>
            ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_38);
  lVar9 = (longlong)(int)local_res8.Key._0_4_;
  lVar3 = *(longlong *)&this->Map;
  if ((TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)local_res8.Value !=
      (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
    (*(code *)**(undefined8 **)&(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  *(undefined8 *)param_1 = *(undefined8 *)(lVar3 + lVar9 * 0x18 + 8);
  return (TMeshAttributesRef<int,UE::Math::TVector4<float>_>)param_1;
}

// UnregisterAttribute @ 1443b0cb0

void __thiscall FAttributesSetBase::UnregisterAttribute(FAttributesSetBase *this,FName param_1)

{
  uint uVar1;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->Map).field_0x8 != *(int *)&(this->Map).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                         *)this,local_res10.Number + uVar1,&local_res8);
  }
  return;
}


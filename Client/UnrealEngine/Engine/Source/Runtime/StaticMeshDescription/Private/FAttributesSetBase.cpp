// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 1

// RegisterAttribute<FName,0> @ 14436a0d0

TMeshAttributesRef<int,FName> __thiscall
FAttributesSetBase::RegisterAttribute<FName,0>
          (FAttributesSetBase *this,FName param_1,int param_2,FName *param_3,
          EMeshAttributeFlags param_4)

{
  int iVar1;
  longlong *plVar2;
  TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> *pTVar3;
  FAttributesSetEntry *pFVar4;
  FName FVar5;
  uint uVar6;
  TTuple<FName,FAttributesSetEntry> *pTVar7;
  TMeshAttributeArraySet<FName> *pTVar8;
  longlong lVar9;
  longlong lVar10;
  TMeshAttributeArraySet<FName> *pTVar11;
  uint in_register_00000084;
  TPairInitializer<FName_const_&,FAttributesSetEntry_&&> local_res8;
  FName local_res18;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  FName *local_38;
  FAttributesSetEntry **local_30;
  
  local_res18.Number = in_register_00000084;
  local_res18.ComparisonIndex.Value = param_2;
  pTVar7 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)this,local_res18);
  FVar5 = local_res18;
  pTVar11 = (TMeshAttributeArraySet<FName> *)0x0;
  pTVar8 = (TMeshAttributeArraySet<FName> *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar8 = pTVar11;
  }
  if (pTVar8 != (TMeshAttributeArraySet<FName> *)0x0) {
    plVar2 = (longlong *)pTVar8->_padding_;
    if (((int)plVar2[1] == 6) && (*(int *)((longlong)plVar2 + 0xc) == 1)) {
      (**(code **)(*plVar2 + 0x70))(plVar2,(ulonglong)param_3 & 0xffffffff);
      *(undefined4 *)(pTVar8->_padding_ + 0x14) = in_stack_00000030;
      lVar10 = pTVar8->_padding_;
      goto LAB_14436a241;
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
  local_res8.Value = (FAttributesSetEntry *)0x0;
  pTVar8 = ::operator_new(0x48);
  if (pTVar8 != (TMeshAttributeArraySet<FName> *)0x0) {
    *(undefined4 *)((longlong)&pTVar8->_padding_ + 4) = in_stack_00000030;
    *(undefined4 *)&pTVar8->_padding_ = 6;
    *(undefined4 *)((longlong)&pTVar8->_padding_ + 4) = 1;
    *(int *)&pTVar8->_padding_ = iVar1;
    pTVar8->_padding_ = (longlong)&___7__TMeshAttributeArraySet_VFName____6B_;
    (pTVar8->ArrayForChannels).AllocatorInstance.SecondaryData =
         (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0;
    (pTVar8->ArrayForChannels).ArrayNum = 0;
    (pTVar8->ArrayForChannels).ArrayMax = 1;
    pTVar8->DefaultValue = *(FName *)CONCAT44(in_stack_0000002c,param_4);
    TMeshAttributeArraySet<FName>::SetNumChannels(pTVar8,(int)param_3);
    pTVar11 = pTVar8;
  }
  pFVar4 = local_res8.Value;
  if (local_res8.Value != (FAttributesSetEntry *)0x0) {
    pTVar3 = &(local_res8.Value)->Ptr;
    local_res8.Value = (FAttributesSetEntry *)pTVar11;
    (*(code *)pTVar3->Ptr->_padding_)(pFVar4,1);
    pTVar11 = (TMeshAttributeArraySet<FName> *)local_res8.Value;
  }
  local_res8.Value = (FAttributesSetEntry *)pTVar11;
  local_38 = &local_res18;
  local_30 = &local_res8.Value;
  TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FAttributesSetEntry_&&>_>
            ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_38);
  lVar9 = (longlong)(int)local_res8.Key._0_4_;
  lVar10 = *(longlong *)&this->Map;
  if ((TMeshAttributeArraySet<FName> *)local_res8.Value != (TMeshAttributeArraySet<FName> *)0x0) {
    (*(code *)**(undefined8 **)&(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  lVar10 = *(longlong *)(lVar10 + lVar9 * 0x18 + 8);
LAB_14436a241:
  *(longlong *)param_1 = lVar10;
  return (TMeshAttributesRef<int,FName>)param_1;
}


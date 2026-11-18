// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 13

// RegisterAttribute<UE::Math::TVector2<float>,0> @ 14364c800

TMeshAttributesRef<int,UE::Math::TVector2<float>_> __thiscall
FAttributesSetBase::RegisterAttribute<UE::Math::TVector2<float>,0>
          (FAttributesSetBase *this,FName param_1,int param_2,TVector2<float> *param_3,
          EMeshAttributeFlags param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  FAttributesSetEntry FVar4;
  TTuple<FName,FAttributesSetEntry> *pTVar5;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar6;
  FAttributesSetEntry FVar7;
  uint in_register_00000084;
  FAttributesSetEntry local_res8;
  FName local_res10;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  
  local_res10.Number = in_register_00000084;
  local_res10.ComparisonIndex.Value = param_2;
  pTVar5 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)this,local_res10);
  FVar7.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       (FMeshAttributeArraySetBase *)0x0;
  pTVar6 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar6 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)FVar7.Ptr.Ptr;
  }
  if (pTVar6 != (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) {
    plVar2 = (longlong *)pTVar6->_padding_;
    if (((int)plVar2[1] == 2) && (*(int *)((longlong)plVar2 + 0xc) == 1)) {
      (**(code **)(*plVar2 + 0x70))(plVar2,(ulonglong)param_3 & 0xffffffff);
      *(undefined4 *)(pTVar6->_padding_ + 0x14) = in_stack_00000030;
      goto LAB_14364c91d;
    }
    TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
    ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              *)this,local_res10);
  }
  iVar1 = this->NumElements;
  local_res8.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       (FMeshAttributeArraySetBase *)0x0;
  pTVar6 = ::operator_new(0x48);
  if (pTVar6 != (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) {
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = in_stack_00000030;
    *(undefined4 *)&pTVar6->_padding_ = 2;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 1;
    *(int *)&pTVar6->_padding_ = iVar1;
    pTVar6->_padding_ = (longlong)&___7__TMeshAttributeArraySet_U__TVector2_M_Math_UE____6B_;
    (pTVar6->ArrayForChannels).AllocatorInstance.SecondaryData =
         (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0;
    (pTVar6->ArrayForChannels).ArrayNum = 0;
    (pTVar6->ArrayForChannels).ArrayMax = 1;
    (pTVar6->DefaultValue).field0_0x0 = *(TVector2<float>_u_0 *)CONCAT44(in_stack_0000002c,param_4);
    TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels(pTVar6,(int)param_3);
    FVar7.Ptr.Ptr =
         (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
         (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)pTVar6;
  }
  FVar4.Ptr.Ptr = local_res8.Ptr.Ptr;
  if (local_res8.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
    puVar3 = *(undefined8 **)local_res8.Ptr.Ptr;
    local_res8.Ptr.Ptr = FVar7.Ptr.Ptr;
    (*(code *)*puVar3)(FVar4.Ptr.Ptr,1);
    FVar7.Ptr.Ptr = local_res8.Ptr.Ptr;
  }
  local_res8.Ptr.Ptr = FVar7.Ptr.Ptr;
  pTVar6 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)
           TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Emplace<FName_const_&,FAttributesSetEntry>
                     ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                       *)this,&local_res10,&local_res8);
  if (local_res8.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
    (*(code *)**(undefined8 **)local_res8.Ptr.Ptr)(local_res8.Ptr.Ptr,1);
  }
LAB_14364c91d:
  *(longlong *)param_1 = pTVar6->_padding_;
  return (TMeshAttributesRef<int,UE::Math::TVector2<float>_>)param_1;
}

// RegisterAttribute<UE::Math::TVector<float>,0> @ 14364c940

TMeshAttributesRef<int,UE::Math::TVector<float>_> __thiscall
FAttributesSetBase::RegisterAttribute<UE::Math::TVector<float>,0>
          (FAttributesSetBase *this,FName param_1,int param_2,TVector<float> *param_3,
          EMeshAttributeFlags param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  FAttributesSetEntry FVar4;
  TTuple<FName,FAttributesSetEntry> *pTVar5;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar6;
  FAttributesSetEntry FVar7;
  uint in_register_00000084;
  FAttributesSetEntry local_res8;
  FName local_res10;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  
  local_res10.Number = in_register_00000084;
  local_res10.ComparisonIndex.Value = param_2;
  pTVar5 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)this,local_res10);
  FVar7.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       (FMeshAttributeArraySetBase *)0x0;
  pTVar6 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar6 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)FVar7.Ptr.Ptr;
  }
  if (pTVar6 != (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
    plVar2 = (longlong *)pTVar6->_padding_;
    if (((int)plVar2[1] == 1) && (*(int *)((longlong)plVar2 + 0xc) == 1)) {
      (**(code **)(*plVar2 + 0x70))(plVar2,(ulonglong)param_3 & 0xffffffff);
      *(undefined4 *)(pTVar6->_padding_ + 0x14) = in_stack_00000030;
      goto LAB_14364ca65;
    }
    TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
    ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              *)this,local_res10);
  }
  iVar1 = this->NumElements;
  local_res8.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       (FMeshAttributeArraySetBase *)0x0;
  pTVar6 = ::operator_new(0x50);
  if (pTVar6 != (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = in_stack_00000030;
    *(undefined4 *)&pTVar6->_padding_ = 1;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 1;
    *(int *)&pTVar6->_padding_ = iVar1;
    (pTVar6->ArrayForChannels).AllocatorInstance.SecondaryData =
         (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0;
    pTVar6->_padding_ = (longlong)&___7__TMeshAttributeArraySet_U__TVector_M_Math_UE____6B_;
    (pTVar6->ArrayForChannels).ArrayNum = 0;
    (pTVar6->ArrayForChannels).ArrayMax = 1;
    *(undefined8 *)&(pTVar6->DefaultValue).field0_0x0 =
         *(undefined8 *)CONCAT44(in_stack_0000002c,param_4);
    (pTVar6->DefaultValue).field0_0x0._s_0.Z =
         *(float *)((undefined8 *)CONCAT44(in_stack_0000002c,param_4) + 1);
    TMeshAttributeArraySet<UE::Math::TVector<float>_>::SetNumChannels(pTVar6,(int)param_3);
    FVar7.Ptr.Ptr =
         (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
         (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)pTVar6;
  }
  FVar4.Ptr.Ptr = local_res8.Ptr.Ptr;
  if (local_res8.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
    puVar3 = *(undefined8 **)local_res8.Ptr.Ptr;
    local_res8.Ptr.Ptr = FVar7.Ptr.Ptr;
    (*(code *)*puVar3)(FVar4.Ptr.Ptr,1);
    FVar7.Ptr.Ptr = local_res8.Ptr.Ptr;
  }
  local_res8.Ptr.Ptr = FVar7.Ptr.Ptr;
  pTVar6 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
           TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Emplace<FName_const_&,FAttributesSetEntry>
                     ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                       *)this,&local_res10,&local_res8);
  if (local_res8.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
    (*(code *)**(undefined8 **)local_res8.Ptr.Ptr)(local_res8.Ptr.Ptr,1);
  }
LAB_14364ca65:
  *(longlong *)param_1 = pTVar6->_padding_;
  return (TMeshAttributesRef<int,UE::Math::TVector<float>_>)param_1;
}

// RegisterIndexAttribute<FEdgeID_[3],0> @ 14364ca80

TMeshAttributesRef<int,TArrayView<FEdgeID,int>_> * __thiscall
FAttributesSetBase::RegisterIndexAttribute<FEdgeID_[3],0>
          (FAttributesSetBase *this,
          TMeshAttributesRef<int,TArrayView<FEdgeID,int>_> *__return_storage_ptr__,FName param_1,
          int param_2,EMeshAttributeFlags param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  FAttributesSetEntry FVar4;
  TTuple<FName,FAttributesSetEntry> *pTVar5;
  TMeshAttributeArraySet<int> *pTVar6;
  FAttributesSetEntry FVar7;
  FAttributesSetEntry local_res8;
  FName local_res10;
  
  local_res10 = param_1;
  pTVar5 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)this,param_1);
  FVar7.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       (FMeshAttributeArraySetBase *)0x0;
  pTVar6 = (TMeshAttributeArraySet<int> *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar6 = (TMeshAttributeArraySet<int> *)FVar7.Ptr.Ptr;
  }
  if (pTVar6 != (TMeshAttributeArraySet<int> *)0x0) {
    plVar2 = (longlong *)pTVar6->_padding_;
    if (((int)plVar2[1] == 4) && (*(int *)((longlong)plVar2 + 0xc) == 3)) {
      (**(code **)(*plVar2 + 0x70))(plVar2,param_2);
      *(EMeshAttributeFlags *)(pTVar6->_padding_ + 0x14) = param_3 | IndexReference;
      goto LAB_14364cb9d;
    }
    TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
    ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              *)this,local_res10);
  }
  iVar1 = this->NumElements;
  local_res8.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       (FMeshAttributeArraySetBase *)0x0;
  pTVar6 = ::operator_new(0x48);
  if (pTVar6 != (TMeshAttributeArraySet<int> *)0x0) {
    *(undefined4 *)&pTVar6->_padding_ = 4;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 3;
    *(int *)&pTVar6->_padding_ = iVar1;
    *(EMeshAttributeFlags *)((longlong)&pTVar6->_padding_ + 4) = param_3 | IndexReference;
    (pTVar6->ArrayForChannels).AllocatorInstance.SecondaryData =
         (ForElementType<TMeshAttributeArrayBase<int>_>)0x0;
    pTVar6->_padding_ = (longlong)&___7__TMeshAttributeArraySet_H__6B_;
    (pTVar6->ArrayForChannels).ArrayNum = 0;
    (pTVar6->ArrayForChannels).ArrayMax = 1;
    pTVar6->DefaultValue = -1;
    TMeshAttributeArraySet<int>::SetNumChannels(pTVar6,param_2);
    FVar7.Ptr.Ptr =
         (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
         (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)pTVar6;
  }
  FVar4.Ptr.Ptr = local_res8.Ptr.Ptr;
  if (local_res8.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
    puVar3 = *(undefined8 **)local_res8.Ptr.Ptr;
    local_res8.Ptr.Ptr = FVar7.Ptr.Ptr;
    (*(code *)*puVar3)(FVar4.Ptr.Ptr,1);
    FVar7.Ptr.Ptr = local_res8.Ptr.Ptr;
  }
  local_res8.Ptr.Ptr = FVar7.Ptr.Ptr;
  pTVar6 = (TMeshAttributeArraySet<int> *)
           TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Emplace<FName_const_&,FAttributesSetEntry>
                     ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                       *)this,&local_res10,&local_res8);
  if (local_res8.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
    (*(code *)**(undefined8 **)local_res8.Ptr.Ptr)(local_res8.Ptr.Ptr,1);
  }
LAB_14364cb9d:
  __return_storage_ptr__->ArrayPtr = (FMeshAttributeArraySetBase *)pTVar6->_padding_;
  __return_storage_ptr__->Extent = 3;
  return __return_storage_ptr__;
}

// RegisterIndexAttribute<FUVID_[3],0> @ 14364cbd0

TMeshAttributesRef<int,TArrayView<FUVID,int>_> * __thiscall
FAttributesSetBase::RegisterIndexAttribute<FUVID_[3],0>
          (FAttributesSetBase *this,
          TMeshAttributesRef<int,TArrayView<FUVID,int>_> *__return_storage_ptr__,FName param_1,
          int param_2,EMeshAttributeFlags param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  FAttributesSetEntry FVar4;
  TTuple<FName,FAttributesSetEntry> *pTVar5;
  TMeshAttributeArraySet<int> *pTVar6;
  FAttributesSetEntry FVar7;
  FAttributesSetEntry local_res8;
  FName local_res10;
  
  local_res10 = param_1;
  pTVar5 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)this,param_1);
  FVar7.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       (FMeshAttributeArraySetBase *)0x0;
  pTVar6 = (TMeshAttributeArraySet<int> *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar6 = (TMeshAttributeArraySet<int> *)FVar7.Ptr.Ptr;
  }
  if (pTVar6 != (TMeshAttributeArraySet<int> *)0x0) {
    plVar2 = (longlong *)pTVar6->_padding_;
    if (((int)plVar2[1] == 4) && (*(int *)((longlong)plVar2 + 0xc) == 3)) {
      (**(code **)(*plVar2 + 0x70))(plVar2,param_2);
      *(EMeshAttributeFlags *)(pTVar6->_padding_ + 0x14) = param_3 | IndexReference;
      goto LAB_14364cced;
    }
    TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
    ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              *)this,local_res10);
  }
  iVar1 = this->NumElements;
  local_res8.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       (FMeshAttributeArraySetBase *)0x0;
  pTVar6 = ::operator_new(0x48);
  if (pTVar6 != (TMeshAttributeArraySet<int> *)0x0) {
    *(undefined4 *)&pTVar6->_padding_ = 4;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 3;
    *(int *)&pTVar6->_padding_ = iVar1;
    *(EMeshAttributeFlags *)((longlong)&pTVar6->_padding_ + 4) = param_3 | IndexReference;
    (pTVar6->ArrayForChannels).AllocatorInstance.SecondaryData =
         (ForElementType<TMeshAttributeArrayBase<int>_>)0x0;
    pTVar6->_padding_ = (longlong)&___7__TMeshAttributeArraySet_H__6B_;
    (pTVar6->ArrayForChannels).ArrayNum = 0;
    (pTVar6->ArrayForChannels).ArrayMax = 1;
    pTVar6->DefaultValue = -1;
    TMeshAttributeArraySet<int>::SetNumChannels(pTVar6,param_2);
    FVar7.Ptr.Ptr =
         (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
         (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)pTVar6;
  }
  FVar4.Ptr.Ptr = local_res8.Ptr.Ptr;
  if (local_res8.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
    puVar3 = *(undefined8 **)local_res8.Ptr.Ptr;
    local_res8.Ptr.Ptr = FVar7.Ptr.Ptr;
    (*(code *)*puVar3)(FVar4.Ptr.Ptr,1);
    FVar7.Ptr.Ptr = local_res8.Ptr.Ptr;
  }
  local_res8.Ptr.Ptr = FVar7.Ptr.Ptr;
  pTVar6 = (TMeshAttributeArraySet<int> *)
           TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Emplace<FName_const_&,FAttributesSetEntry>
                     ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                       *)this,&local_res10,&local_res8);
  if (local_res8.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
    (*(code *)**(undefined8 **)local_res8.Ptr.Ptr)(local_res8.Ptr.Ptr,1);
  }
LAB_14364cced:
  __return_storage_ptr__->ArrayPtr = (FMeshAttributeArraySetBase *)pTVar6->_padding_;
  __return_storage_ptr__->Extent = 3;
  return __return_storage_ptr__;
}

// RegisterIndexAttribute<FVertexID_[3],0> @ 14364cd20

TMeshAttributesRef<int,TArrayView<FVertexID,int>_> * __thiscall
FAttributesSetBase::RegisterIndexAttribute<FVertexID_[3],0>
          (FAttributesSetBase *this,
          TMeshAttributesRef<int,TArrayView<FVertexID,int>_> *__return_storage_ptr__,FName param_1,
          int param_2,EMeshAttributeFlags param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  FAttributesSetEntry FVar4;
  TTuple<FName,FAttributesSetEntry> *pTVar5;
  TMeshAttributeArraySet<int> *pTVar6;
  FAttributesSetEntry FVar7;
  FAttributesSetEntry local_res8;
  FName local_res10;
  
  local_res10 = param_1;
  pTVar5 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)this,param_1);
  FVar7.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       (FMeshAttributeArraySetBase *)0x0;
  pTVar6 = (TMeshAttributeArraySet<int> *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar6 = (TMeshAttributeArraySet<int> *)FVar7.Ptr.Ptr;
  }
  if (pTVar6 != (TMeshAttributeArraySet<int> *)0x0) {
    plVar2 = (longlong *)pTVar6->_padding_;
    if (((int)plVar2[1] == 4) && (*(int *)((longlong)plVar2 + 0xc) == 3)) {
      (**(code **)(*plVar2 + 0x70))(plVar2,param_2);
      *(EMeshAttributeFlags *)(pTVar6->_padding_ + 0x14) = param_3 | IndexReference;
      goto LAB_14364ce3d;
    }
    TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
    ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              *)this,local_res10);
  }
  iVar1 = this->NumElements;
  local_res8.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       (FMeshAttributeArraySetBase *)0x0;
  pTVar6 = ::operator_new(0x48);
  if (pTVar6 != (TMeshAttributeArraySet<int> *)0x0) {
    *(undefined4 *)&pTVar6->_padding_ = 4;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 3;
    *(int *)&pTVar6->_padding_ = iVar1;
    *(EMeshAttributeFlags *)((longlong)&pTVar6->_padding_ + 4) = param_3 | IndexReference;
    (pTVar6->ArrayForChannels).AllocatorInstance.SecondaryData =
         (ForElementType<TMeshAttributeArrayBase<int>_>)0x0;
    pTVar6->_padding_ = (longlong)&___7__TMeshAttributeArraySet_H__6B_;
    (pTVar6->ArrayForChannels).ArrayNum = 0;
    (pTVar6->ArrayForChannels).ArrayMax = 1;
    pTVar6->DefaultValue = -1;
    TMeshAttributeArraySet<int>::SetNumChannels(pTVar6,param_2);
    FVar7.Ptr.Ptr =
         (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
         (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)pTVar6;
  }
  FVar4.Ptr.Ptr = local_res8.Ptr.Ptr;
  if (local_res8.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
    puVar3 = *(undefined8 **)local_res8.Ptr.Ptr;
    local_res8.Ptr.Ptr = FVar7.Ptr.Ptr;
    (*(code *)*puVar3)(FVar4.Ptr.Ptr,1);
    FVar7.Ptr.Ptr = local_res8.Ptr.Ptr;
  }
  local_res8.Ptr.Ptr = FVar7.Ptr.Ptr;
  pTVar6 = (TMeshAttributeArraySet<int> *)
           TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Emplace<FName_const_&,FAttributesSetEntry>
                     ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                       *)this,&local_res10,&local_res8);
  if (local_res8.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
    (*(code *)**(undefined8 **)local_res8.Ptr.Ptr)(local_res8.Ptr.Ptr,1);
  }
LAB_14364ce3d:
  __return_storage_ptr__->ArrayPtr = (FMeshAttributeArraySetBase *)pTVar6->_padding_;
  __return_storage_ptr__->Extent = 3;
  return __return_storage_ptr__;
}

// RegisterIndexAttribute<FPolygonGroupID,0> @ 14364ce70

TMeshAttributesRef<int,FPolygonGroupID> __thiscall
FAttributesSetBase::RegisterIndexAttribute<FPolygonGroupID,0>
          (FAttributesSetBase *this,FName param_1,int param_2,EMeshAttributeFlags param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  FAttributesSetEntry FVar4;
  TTuple<FName,FAttributesSetEntry> *pTVar5;
  TMeshAttributeArraySet<int> *pTVar6;
  FAttributesSetEntry FVar7;
  uint in_register_00000084;
  FAttributesSetEntry local_res8;
  FName local_res10;
  uint in_stack_00000028;
  
  local_res10.Number = in_register_00000084;
  local_res10.ComparisonIndex.Value = param_2;
  pTVar5 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)this,local_res10);
  FVar7.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       (FMeshAttributeArraySetBase *)0x0;
  pTVar6 = (TMeshAttributeArraySet<int> *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar6 = (TMeshAttributeArraySet<int> *)FVar7.Ptr.Ptr;
  }
  if (pTVar6 != (TMeshAttributeArraySet<int> *)0x0) {
    plVar2 = (longlong *)pTVar6->_padding_;
    if (((int)plVar2[1] == 4) && (*(int *)((longlong)plVar2 + 0xc) == 1)) {
      (**(code **)(*plVar2 + 0x70))(plVar2,param_3);
      *(uint *)(pTVar6->_padding_ + 0x14) = in_stack_00000028 | 0x10;
      goto LAB_14364cf8d;
    }
    TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
    ::Remove((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              *)this,local_res10);
  }
  iVar1 = this->NumElements;
  local_res8.Ptr.Ptr =
       (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
       (FMeshAttributeArraySetBase *)0x0;
  pTVar6 = ::operator_new(0x48);
  if (pTVar6 != (TMeshAttributeArraySet<int> *)0x0) {
    *(undefined4 *)&pTVar6->_padding_ = 4;
    *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 1;
    *(int *)&pTVar6->_padding_ = iVar1;
    *(uint *)((longlong)&pTVar6->_padding_ + 4) = in_stack_00000028 | 0x10;
    (pTVar6->ArrayForChannels).AllocatorInstance.SecondaryData =
         (ForElementType<TMeshAttributeArrayBase<int>_>)0x0;
    pTVar6->_padding_ = (longlong)&___7__TMeshAttributeArraySet_H__6B_;
    (pTVar6->ArrayForChannels).ArrayNum = 0;
    (pTVar6->ArrayForChannels).ArrayMax = 1;
    pTVar6->DefaultValue = -1;
    TMeshAttributeArraySet<int>::SetNumChannels(pTVar6,param_3);
    FVar7.Ptr.Ptr =
         (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)
         (TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_>)pTVar6;
  }
  FVar4.Ptr.Ptr = local_res8.Ptr.Ptr;
  if (local_res8.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
    puVar3 = *(undefined8 **)local_res8.Ptr.Ptr;
    local_res8.Ptr.Ptr = FVar7.Ptr.Ptr;
    (*(code *)*puVar3)(FVar4.Ptr.Ptr,1);
    FVar7.Ptr.Ptr = local_res8.Ptr.Ptr;
  }
  local_res8.Ptr.Ptr = FVar7.Ptr.Ptr;
  pTVar6 = (TMeshAttributeArraySet<int> *)
           TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Emplace<FName_const_&,FAttributesSetEntry>
                     ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                       *)this,&local_res10,&local_res8);
  if (local_res8.Ptr.Ptr != (FMeshAttributeArraySetBase *)0x0) {
    (*(code *)**(undefined8 **)local_res8.Ptr.Ptr)(local_res8.Ptr.Ptr,1);
  }
LAB_14364cf8d:
  *(longlong *)param_1 = pTVar6->_padding_;
  return (TMeshAttributesRef<int,FPolygonGroupID>)param_1;
}

// AppendAttributesFrom @ 143660720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAttributesSetBase::AppendAttributesFrom(FAttributesSetBase *this,FAttributesSetBase *param_1)

{
  FName *this_00;
  ulonglong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FString local_68 [2];
  undefined4 local_3c;
  
  if ((param_1->NumElements != this->NumElements) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OtherAttributesSet.NumElements == NumElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshAttributeArray.cpp"
                         ,0x86,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = *(int *)&(param_1->Map).field_0x28;
  puVar2 = &(param_1->Map).field_0x10;
  iVar11 = 0;
  uVar5 = 1;
  iVar13 = 0;
  iVar6 = 0;
  if (iVar7 != 0) {
    puVar14 = *(uint **)&(param_1->Map).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar2;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar6 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1436607ed;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar5 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar6 = iVar13 + -1 + local_res10;
    if (iVar7 < iVar6) {
      iVar6 = iVar7;
    }
  }
LAB_1436607ed:
  uVar10 = *(uint *)&(param_1->Map).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar5,iVar11);
  TStack_90.CurrentBitIndex = iVar6;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_90._28_4_ = local_3c;
  TStack_90.BaseBitIndex = iVar13;
  uStack_70 = CONCAT44(uStack_9c,
                       *(int *)&(param_1->Map).field_0x8 - *(int *)&(param_1->Map).field_0x34);
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar10 < 0) || (iVar7 < (int)uVar10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = *(uint *)&(param_1->Map).field_0x28;
  if (uVar10 != uVar5) {
    puVar12 = *(undefined1 **)&(param_1->Map).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar2;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1436608f0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar15;
    if ((int)uVar5 < (int)uVar10) {
      uVar10 = uVar5;
    }
  }
LAB_1436608f0:
  do {
    if (*(int *)&(param_1->Map).field_0x8 - *(int *)&(param_1->Map).field_0x34 != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_90.CurrentBitIndex == uVar10) &&
       (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) {
      return;
    }
    lVar8 = *(longlong *)(*(longlong *)&param_1->Map + (longlong)TStack_90.CurrentBitIndex * 0x18);
    this_00 = (FName *)(*(longlong *)&param_1->Map + (longlong)TStack_90.CurrentBitIndex * 0x18);
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar8);
    if (*(int *)&(this->Map).field_0x8 != *(int *)&(this->Map).field_0x34) {
      puVar12 = *(undefined1 **)&(this->Map).field_0x40;
      puVar9 = &(this->Map).field_0x38;
      if (puVar12 != (undefined1 *)0x0) {
        puVar9 = puVar12;
      }
      iVar7 = *(int *)(puVar9 + (ulonglong)
                                (*(int *)&(this->Map).field_0x48 - 1U &
                                (int)((ulonglong)lVar8 >> 0x20) + uVar5) * 4);
      if (iVar7 != -1) {
        do {
          if (*(longlong *)(*(longlong *)&this->Map + (longlong)iVar7 * 0x18) == lVar8) {
            if (4 < (byte)LogMeshDescription._0_1_) {
              ::FName::ToString(this_00,local_68);
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
              if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
              }
            }
            goto LAB_143660995;
          }
          iVar7 = *(int *)(*(longlong *)&this->Map + 0x10 + (longlong)iVar7 * 0x18);
        } while (iVar7 != -1);
      }
    }
    TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
    ::Emplace<FName_const_&,FAttributesSetEntry_const_&>
              ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                *)this,this_00,(FAttributesSetEntry *)(this_00 + 1));
LAB_143660995:
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  } while( true );
}

// HasAttribute @ 1436766b0

bool __thiscall FAttributesSetBase::HasAttribute(FAttributesSetBase *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Map).field_0x8 != *(int *)&(this->Map).field_0x34) {
    puVar3 = *(undefined1 **)&(this->Map).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->Map).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->Map).field_0x48 - 1U & param_1.Number + uVar1) * 4);
    if (iVar2 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->Map + (longlong)iVar2 * 0x18) == param_1)
        goto LAB_14367671c;
        iVar2 = *(int *)(*(longlong *)&this->Map + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14367671c:
  return iVar2 != -1;
}

// Initialize @ 143678d80

void __thiscall FAttributesSetBase::Initialize(FAttributesSetBase *this,int param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res10 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  this->NumElements = param_1;
  iVar3 = *(int *)&(this->Map).field_0x28;
  puVar1 = &(this->Map).field_0x10;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Map).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_143678e1d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_143678e1d:
  uVar11 = *(uint *)&(this->Map).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->Map).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->Map).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_143678f20;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_143678f20:
  while( true ) {
    if (*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              (*(longlong *)&this->Map + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    (**(code **)(*plVar4 + 0x20))(plVar4,param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Insert @ 14367ab10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAttributesSetBase::Insert(FAttributesSetBase *this,int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  FName *this_00;
  FName *this_01;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  code *pcVar7;
  FAttributesSetBase *pFVar8;
  bool bVar9;
  FString *pFVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined1 local_res18 [8];
  uint local_res20;
  int local_178 [2];
  FAttributesSetBase *local_170;
  int iStack_168;
  uint uStack_164;
  undefined1 *local_160;
  undefined4 uStack_158;
  int iStack_154;
  int local_150;
  int iStack_148;
  undefined4 uStack_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  FAttributesSetBase *local_130;
  int iStack_128;
  uint uStack_124;
  undefined1 *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  FAttributesSetBase *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FAttributesSetBase *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  FString local_a0;
  FString local_90;
  FString local_80 [2];
  undefined4 local_54;
  
  piVar1 = &this->NumElements;
  puVar2 = &(this->Map).field_0x10;
  uStack_164 = 1;
  iVar4 = param_1 + 1;
  if (param_1 + 1 < *piVar1) {
    iVar4 = *piVar1;
  }
  iStack_168 = 0;
  *piVar1 = iVar4;
  iVar4 = *(int *)&(this->Map).field_0x28;
  local_150 = 0;
  iStack_154 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->Map).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_168;
      local_150 = local_150 + 0x20;
      iStack_168 = iStack_168 + 1;
      iStack_154 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_168) goto LAB_14367abbe;
      uVar14 = puVar17[lVar11 + 1];
    }
    uStack_164 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uStack_164 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_140 = (int)lVar11;
    iStack_154 = local_150 + -1 + local_140;
    if (iVar4 < iStack_154) {
      iStack_154 = iVar4;
    }
  }
LAB_14367abbe:
  uVar14 = *(uint *)&(this->Map).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_148 = *(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34;
  TStack_c8._padding_ = CONCAT44(uStack_164,iStack_168);
  uStack_158 = 0xffffffff;
  TStack_c8.CurrentBitIndex = iStack_154;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = local_150;
  uStack_a8 = CONCAT44(uStack_144,iStack_148);
  local_res10[0] = param_1;
  local_res20 = uVar14;
  local_170 = this;
  local_160 = puVar2;
  local_d0 = this;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->Map).field_0x28;
  if (uVar14 != uVar5) {
    puVar15 = *(undefined1 **)&(this->Map).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar5;
      local_res20 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14367acf0;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_13c = (int)lVar11;
    uVar14 = local_13c + -1 + uVar13;
    local_res20 = uVar14;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
      local_res20 = uVar5;
    }
  }
LAB_14367acf0:
  do {
    pFVar8 = local_d0;
    if (*(int *)&(local_d0->Map).field_0x8 - *(int *)&(local_d0->Map).field_0x34 != (int)uStack_a8)
    {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_c8.CurrentBitIndex == uVar14) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pFVar8 == this)) {
      return;
    }
    lVar11 = *(longlong *)&pFVar8->Map;
    this_00 = (FName *)(lVar11 + (longlong)TStack_c8.CurrentBitIndex * 0x18);
    plVar6 = *(longlong **)(lVar11 + 8 + (longlong)TStack_c8.CurrentBitIndex * 0x18);
    (**(code **)(*plVar6 + 0x10))(plVar6,local_res10[0]);
    if (*(int *)((longlong)this_00[1] + 0x10) != this->NumElements) {
      if (((1 < (byte)LogMeshDescription._0_1_) &&
          (UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord>
                     ((FLogCategoryBase *)&LogMeshDescription,
                      &`public:_void___cdecl_FAttributesSetBase::Insert(int)___ptr64'::__l14::
                       LOG_Static), 1 < (byte)LogMeshDescription._0_1_)) &&
         ((UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,int_&>
                     ((FLogCategoryBase *)&LogMeshDescription,
                      &`public:_void___cdecl_FAttributesSetBase::Insert(int)___ptr64'::__l28::
                       LOG_Static,&this->NumElements), 1 < (byte)LogMeshDescription._0_1_ &&
          (UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,int_const_&>
                     ((FLogCategoryBase *)&LogMeshDescription,
                      &`public:_void___cdecl_FAttributesSetBase::Insert(int)___ptr64'::__l42::
                       LOG_Static,local_res10), 1 < (byte)LogMeshDescription._0_1_)))) {
        pFVar10 = ::FName::ToString(this_00,&local_a0);
        UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FString>
                  ((FLogCategoryBase *)&LogMeshDescription,
                   &`public:_void___cdecl_FAttributesSetBase::Insert(int)___ptr64'::__l56::
                    LOG_Static,pFVar10);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      iVar4 = *(int *)&(this->Map).field_0x28;
      iStack_128 = 0;
      local_110 = 0;
      uStack_124 = 1;
      iStack_114 = 0;
      if (iVar4 != 0) {
        puVar17 = *(uint **)&(this->Map).field_0x20;
        puVar18 = (uint *)puVar2;
        if (puVar17 != (uint *)0x0) {
          puVar18 = puVar17;
        }
        uVar14 = *puVar18;
        while (uVar14 == 0) {
          lVar11 = (longlong)iStack_128;
          local_110 = local_110 + 0x20;
          iStack_128 = iStack_128 + 1;
          iStack_114 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_128)
          goto LAB_14367ae6d;
          uVar14 = puVar18[lVar11 + 1];
        }
        uStack_124 = -uVar14 & uVar14;
        uVar3 = (ulonglong)uStack_124 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_138 = (int)lVar11;
        iStack_114 = local_110 + -1 + local_138;
        if (iVar4 < iStack_114) {
          iStack_114 = iVar4;
        }
      }
LAB_14367ae6d:
      uVar14 = *(uint *)&(this->Map).field_0x28;
      iStack_10c = iStack_154;
      uVar13 = uVar14 & 0xffffffe0;
      iStack_108 = *(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34;
      TStack_f8._padding_ = CONCAT44(uStack_124,iStack_128);
      uStack_118 = 0xffffffff;
      TStack_f8.CurrentBitIndex = iStack_114;
      TStack_f8.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar14 >> 5;
      TStack_f8._28_4_ = iStack_154;
      TStack_f8.BaseBitIndex = local_110;
      uStack_d8 = CONCAT44(uStack_104,iStack_108);
      local_130 = this;
      local_120 = puVar2;
      local_100 = this;
      TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar5 = *(uint *)&(this->Map).field_0x28;
      if (uVar14 != uVar5) {
        puVar15 = *(undefined1 **)&(this->Map).field_0x20;
        puVar16 = puVar2;
        if (puVar15 != (undefined1 *)0x0) {
          puVar16 = puVar15;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
        while (uVar14 == 0) {
          lVar11 = (longlong)iVar12;
          uVar13 = uVar13 + 0x20;
          iVar12 = iVar12 + 1;
          uVar14 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14367af70;
          uVar14 = *(uint *)(puVar16 + lVar11 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_134 = (int)lVar11;
        uVar14 = local_134 + -1 + uVar13;
        if ((int)uVar5 < (int)uVar14) {
          uVar14 = uVar5;
        }
      }
LAB_14367af70:
      while( true ) {
        pFVar8 = local_100;
        if (*(int *)&(local_100->Map).field_0x8 - *(int *)&(local_100->Map).field_0x34 !=
            (int)uStack_d8) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_f8.CurrentBitIndex == uVar14) &&
            (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pFVar8 == this)
           ) break;
        this_01 = (FName *)(*(longlong *)&pFVar8->Map + (longlong)TStack_f8.CurrentBitIndex * 0x18);
        if (1 < (byte)LogMeshDescription._0_1_) {
          local_178[0] = *(int *)((longlong)this_01[1] + 0x10);
          pFVar10 = ::FName::ToString(this_01,&local_90);
          UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FString,int>
                    ((FLogCategoryBase *)&LogMeshDescription,
                     &`public:_void___cdecl_FAttributesSetBase::Insert(int)___ptr64'::__l74::
                      LOG_Static,pFVar10,local_178);
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
        }
        TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
      }
      ::FName::ToString(this_00,local_80);
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                         ,0x6f6,L"NumElements mismatch in FAttributesSetBase::Insert: %s: %i != %i")
      ;
      if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
      }
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
    uVar14 = local_res20;
  } while( true );
}

// Remap @ 143683430

void __thiscall
FAttributesSetBase::Remap
          (FAttributesSetBase *this,TSparseArray<int,FDefaultSparseArrayAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  TSparseArray<int,FDefaultSparseArrayAllocator> *pTVar6;
  FAttributesSetBase *pFVar7;
  bool bVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  TSparseArray<int,FDefaultSparseArrayAllocator> *local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  int local_130;
  uint uStack_12c;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  uint local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_100;
  int local_e0;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  FAttributesSetBase *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  FAttributesSetBase *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  puVar1 = &param_1->field_0x10;
  this->NumElements = 0;
  iVar16 = *(int *)&param_1->field_0x28;
  local_130 = 0;
  local_110 = 1;
  uStack_12c = 1;
  iStack_11c = 0;
  iStack_118 = 0;
  if (iVar16 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar15 = *puVar14;
    iStack_118 = 0;
    local_130 = 0;
    while (uVar15 == 0) {
      iStack_118 = iStack_118 + 0x20;
      lVar10 = (longlong)local_130;
      local_130 = local_130 + 1;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < local_130) goto LAB_14368350e;
      uVar15 = puVar14[lVar10 + 1];
    }
    uStack_12c = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_12c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_d8 = (int)lVar10;
    iStack_11c = local_d8 + -1 + iStack_118;
    if (iVar16 < iStack_11c) {
LAB_14368350e:
      iStack_11c = iVar16;
    }
  }
  local_res20 = *(uint *)&param_1->field_0x28;
  local_e0 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  local_100._padding_ = CONCAT44(uStack_12c,local_130);
  local_100.CurrentBitIndex = iStack_11c;
  local_100.UnvisitedBitMask = 0xffffffff;
  local_100._28_4_ = uStack_114;
  local_100.BaseBitIndex = iStack_118;
  iVar16 = (int)local_res20 >> 5;
  uVar15 = local_res20 & 0xffffffe0;
  bVar9 = (byte)local_res20;
  local_res10 = param_1;
  local_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)local_res20 < 0) || (*(int *)&param_1->field_0x28 < (int)local_res20)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar6 = local_res10;
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar17 = local_res20;
  if (local_res20 != uVar12) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar17 = -1 << (bVar9 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar16 * 4);
    while (uVar17 == 0) {
      lVar10 = (longlong)iVar16;
      uVar15 = uVar15 + 0x20;
      iVar16 = iVar16 + 1;
      local_res20 = uVar12;
      uVar17 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
      goto LAB_143683621;
      uVar17 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_d4 = (int)lVar10;
    local_res20 = local_d4 + -1 + uVar15;
    uVar17 = local_res20;
    if ((int)uVar12 < (int)local_res20) {
      local_res20 = uVar12;
      uVar17 = uVar12;
    }
  }
LAB_143683621:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != local_e0) {
      local_res8[0] = 0;
      `TSparseArray<int,FDefaultSparseArrayAllocator>::TRangedForConstIterator::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (((local_100.CurrentBitIndex == uVar17) &&
        (local_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (param_1 == pTVar6))
    break;
    iVar16 = *(int *)(*(longlong *)param_1 + (longlong)local_100.CurrentBitIndex * 8) + 1;
    if (iVar16 < this->NumElements) {
      iVar16 = this->NumElements;
    }
    local_100.UnvisitedBitMask = local_100.UnvisitedBitMask & ~local_100._padding_._4_4_;
    this->NumElements = iVar16;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_100);
  }
  iVar16 = *(int *)&(this->Map).field_0x28;
  puVar1 = &(this->Map).field_0x10;
  iStack_c0 = 0;
  local_a8 = 0;
  iStack_ac = 0;
  if (iVar16 != 0) {
    puVar14 = *(uint **)&(this->Map).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar15 = *puVar14;
    while (uVar15 == 0) {
      lVar10 = (longlong)iStack_c0;
      local_a8 = local_a8 + 0x20;
      iStack_c0 = iStack_c0 + 1;
      iStack_ac = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_143683700;
      uVar15 = puVar14[lVar10 + 1];
    }
    local_110 = -uVar15 & uVar15;
    uVar2 = (ulonglong)local_110 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_d0 = (int)lVar10;
    iStack_ac = local_d0 + -1 + local_a8;
    if (iVar16 < iStack_ac) {
      iStack_ac = iVar16;
    }
  }
LAB_143683700:
  uVar15 = *(uint *)&(this->Map).field_0x28;
  uStack_bc = local_110;
  uStack_a4 = local_4c;
  iStack_a0 = *(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34;
  uStack_b0 = 0xffffffff;
  uVar12 = uVar15 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(local_110,iStack_c0);
  TStack_90.CurrentBitIndex = iStack_ac;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar15 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = local_a8;
  uStack_70 = CONCAT44(uStack_9c,iStack_a0);
  local_c8 = this;
  local_b8 = puVar1;
  local_98 = this;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar16 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar17 = *(uint *)&(this->Map).field_0x28;
  if (uVar15 != uVar17) {
    puVar13 = *(undefined1 **)&(this->Map).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar15 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_143683800;
      uVar15 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_cc = (int)lVar10;
    uVar15 = local_cc + -1 + uVar12;
    if ((int)uVar17 < (int)uVar15) {
      uVar15 = uVar17;
    }
  }
LAB_143683800:
  while( true ) {
    pFVar7 = local_98;
    if (*(int *)&(local_98->Map).field_0x8 - *(int *)&(local_98->Map).field_0x34 != (int)uStack_70)
    {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_90.CurrentBitIndex == uVar15) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar7 == this))
    break;
    lVar3 = *(longlong *)&pFVar7->Map;
    lVar10 = lVar3 + (longlong)TStack_90.CurrentBitIndex * 0x18;
    iVar16 = (**(code **)(**(longlong **)(lVar3 + 8 + (longlong)TStack_90.CurrentBitIndex * 0x18) +
                         0x68))();
    if (((0 < iVar16) &&
        (plVar4 = *(longlong **)(lVar10 + 8), (**(code **)(*plVar4 + 0x40))(plVar4,pTVar6),
        *(int *)(*(longlong *)(lVar10 + 8) + 0x10) != this->NumElements)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("MapEntry.Value->GetNumElements() == NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshAttributeArray.cpp"
                           ,0x7e,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  return;
}

// Remove @ 143685b20

void __thiscall FAttributesSetBase::Remove(FAttributesSetBase *this,int param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->Map).field_0x28;
  puVar1 = &(this->Map).field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Map).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_143685bbd;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_143685bbd:
  uVar11 = *(uint *)&(this->Map).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->Map).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->Map).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_143685cc0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_143685cc0:
  while( true ) {
    if (*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              (*(longlong *)&this->Map + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    (**(code **)(*plVar4 + 0x18))(plVar4,param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// SetNumElements @ 143694f40

void __thiscall FAttributesSetBase::SetNumElements(FAttributesSetBase *this,int param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res10 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar12 = 0;
  this->NumElements = param_1;
  iVar3 = *(int *)&(this->Map).field_0x28;
  puVar1 = &(this->Map).field_0x10;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Map).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_143694fdd;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_143694fdd:
  uVar11 = *(uint *)&(this->Map).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->Map).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->Map).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1436950e0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_1436950e0:
  while( true ) {
    if (*(int *)&(this->Map).field_0x8 - *(int *)&(this->Map).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              (*(longlong *)&this->Map + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    (**(code **)(*plVar4 + 0x28))(plVar4,param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}


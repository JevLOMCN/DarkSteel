// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8dc8c0

UScriptStruct * __cdecl FCollectionTransformSelectionCustomDataflowNode_v2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_v2.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_v2.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_v2
                         ,(UObject *)pUVar1,L"CollectionTransformSelectionCustomDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_v2.
         OuterSingleton;
}

// GetType @ 14e8dca20

FName __thiscall
FCollectionTransformSelectionCustomDataflowNode_v2::GetType
          (FCollectionTransformSelectionCustomDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionTransformSelectionCustomDataflowNode_v2");
  return in_RDX;
}

// IsA @ 14e8dca50

bool __thiscall
FCollectionTransformSelectionCustomDataflowNode_v2::IsA
          (FCollectionTransformSelectionCustomDataflowNode_v2 *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FCollectionTransformSelectionCustomDataflowNode_v2");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8dcab8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8dcab8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8dcad6;
      }
    }
  }
  bVar5 = true;
LAB_14e8dcad6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8dcb10

FStructOnScope * __thiscall
FCollectionTransformSelectionCustomDataflowNode_v2::NewStructOnScope
          (FCollectionTransformSelectionCustomDataflowNode_v2 *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_v2.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_v2.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_v2
                           ,(UObject *)pUVar2,L"CollectionTransformSelectionCustomDataflowNode_v2");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_v2
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8dcb90

void __thiscall
FCollectionTransformSelectionCustomDataflowNode_v2::SerializeInternal
          (FCollectionTransformSelectionCustomDataflowNode_v2 *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_v2.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_v2.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_v2
                         ,(UObject *)pUVar1,L"CollectionTransformSelectionCustomDataflowNode_v2");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_v2.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_v2.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8dcc0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8dcc20

FName __thiscall
FCollectionTransformSelectionCustomDataflowNode_v2::GetDisplayName
          (FCollectionTransformSelectionCustomDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionTransformSelectCustom");
  return in_RDX;
}

// GetCategory @ 14e8dcca0

FName __thiscall
FCollectionTransformSelectionCustomDataflowNode_v2::GetCategory
          (FCollectionTransformSelectionCustomDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Transform");
  return in_RDX;
}

// GetTags @ 14e8dccd0

FString * __thiscall
FCollectionTransformSelectionCustomDataflowNode_v2::GetTags
          (FCollectionTransformSelectionCustomDataflowNode_v2 *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8dcd40

UScriptStruct * __thiscall
FCollectionTransformSelectionCustomDataflowNode_v2::TypedScriptStruct
          (FCollectionTransformSelectionCustomDataflowNode_v2 *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_v2.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_v2.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_v2
                         ,(UObject *)pUVar1,L"CollectionTransformSelectionCustomDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode_v2.
         OuterSingleton;
}

// Evaluate @ 14e8dd1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionTransformSelectionCustomDataflowNode_v2::Evaluate
          (FCollectionTransformSelectionCustomDataflowNode_v2 *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FDataflowTransformSelection *pFVar1;
  FScriptContainerElement *_Src;
  FName FVar2;
  void *_Src_00;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  FManagedArrayCollection *pFVar6;
  FDataflowInput *pFVar7;
  FString *pFVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStackY_f8 [32];
  FConnectionReference local_b8;
  FConnectionReference local_a0;
  FString local_88;
  uint local_78 [2];
  FDataflowSelection local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar1 = &this->TransformSelection;
  pFVar6 = &this->Collection;
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowTransformSelection *)puVar5 == pFVar1) {
    pFVar6 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar6);
    FVar2 = FTransformCollection::TransformGroup;
    uVar4 = ::GetTypeHash(FTransformCollection::TransformGroup.ComparisonIndex.Value);
    if (*(int *)&(pFVar6->GroupInfo).field_0x8 != *(int *)&(pFVar6->GroupInfo).field_0x34) {
      puVar5 = *(undefined1 **)&(pFVar6->GroupInfo).field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(pFVar6->GroupInfo).field_0x38;
      }
      iVar10 = *(int *)(puVar5 + (ulonglong)
                                 (*(int *)&(pFVar6->GroupInfo).field_0x48 - 1U &
                                 FVar2.Number + uVar4) * 4);
      if (iVar10 != -1) {
        do {
          if (*(FName *)(*(longlong *)&pFVar6->GroupInfo + (longlong)iVar10 * 0x14) == FVar2) {
            if (iVar10 != -1) {
              local_70.GroupName = FDataflowTransformSelection::TransformGroupName;
              local_70.SelectionArray.AllocatorInstance.SecondaryData =
                   (ForElementType<unsigned_int>)0x0;
              local_70.SelectionArray.NumBits = 0;
              local_70.SelectionArray.MaxBits = 0x80;
              FDataflowSelection::InitializeFromCollection(&local_70,pFVar6,false);
              local_b8.Reference = &this->BoneIndices;
              local_b8.Index = -1;
              local_b8.ContainerReference = (void *)0x0;
              pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_b8);
              pFVar8 = FDataflowInput::GetValue<FString>(pFVar7,param_1,local_b8.Reference);
              local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_88.Data.ArrayNum = (pFVar8->Data).ArrayNum;
              lVar9 = (longlong)local_88.Data.ArrayNum;
              _Src = (pFVar8->Data).AllocatorInstance.Data;
              if (local_88.Data.ArrayNum == 0) {
                local_88.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_88,
                           local_88.Data.ArrayNum,&local_88.Data.ArrayMax);
                memcpy(local_88.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
              }
              local_a0.Reference = (void *)0x0;
              local_a0.Index = 0;
              local_a0._12_4_ = 0;
              bVar3 = UE::Dataflow::Private::ParseIndicesStr
                                (&local_88,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_a0,
                                 local_78);
              _Src_00 = local_a0.Reference;
              if (bVar3) {
                lVar9 = (longlong)local_a0.Index;
                local_b8.Reference = (FString *)0x0;
                local_b8.Index = local_a0.Index;
                if (local_a0.Index == 0) {
                  local_b8._12_4_ = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,local_a0.Index,0,(ForAnyElementType *)&local_b8,local_a0.Index,
                             (int *)&local_b8.field_0xc);
                  memcpy(local_b8.Reference,_Src_00,lVar9 << 2);
                }
                FDataflowSelection::SetSelected
                          (&local_70,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_b8);
              }
              FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_70,
                         pFVar1);
              if (local_a0.Reference != (void *)0x0) {
                FMemory::Free(local_a0.Reference);
              }
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
              goto LAB_14e8dd2a6;
            }
            break;
          }
          iVar10 = *(int *)(*(longlong *)&pFVar6->GroupInfo + 0xc + (longlong)iVar10 * 0x14);
        } while (iVar10 != -1);
      }
    }
    local_70.GroupName = FDataflowTransformSelection::TransformGroupName;
    local_70.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_70.SelectionArray.NumBits = 0;
    local_70.SelectionArray.MaxBits = 0x80;
    FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
              ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_70,pFVar1);
LAB_14e8dd2a6:
    if (local_70.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_70.SelectionArray.AllocatorInstance.SecondaryData);
    }
  }
  else {
    puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FManagedArrayCollection *)puVar5 == pFVar6) {
      local_a0.ContainerReference = (void *)0x0;
      local_a0.Index = -1;
      local_a0.Reference = pFVar6;
      pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_a0);
      if (pFVar7->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,local_a0.Reference,pFVar6);
      }
      else {
        local_b8.Index = -1;
        local_b8.ContainerReference = (void *)0x0;
        local_b8.Reference = pFVar6;
        FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_a0,&local_b8);
      }
    }
  }
  return;
}

// FCollectionTransformSelectionCustomDataflowNode_v2 @ 14e917d20

FCollectionTransformSelectionCustomDataflowNode_v2 * __thiscall
FCollectionTransformSelectionCustomDataflowNode_v2::
FCollectionTransformSelectionCustomDataflowNode_v2
          (FCollectionTransformSelectionCustomDataflowNode_v2 *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *pFVar3;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionCustomDataflowNode_v2__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->TransformSelection;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  (this->BoneIndices).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIndices).Data.ArrayNum = 0;
  (this->BoneIndices).Data.ArrayMax = 0;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->BoneIndices;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  local_38.Reference = this_00;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = pFVar1;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_58);
  }
  return this;
}

// FCollectionTransformSelectionCustomDataflowNode_v2 @ 14e917e90

FCollectionTransformSelectionCustomDataflowNode_v2 * __thiscall
FCollectionTransformSelectionCustomDataflowNode_v2::
FCollectionTransformSelectionCustomDataflowNode_v2
          (FCollectionTransformSelectionCustomDataflowNode_v2 *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionCustomDataflowNode_v2__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->BoneIndices).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIndices).Data.ArrayNum = 0;
  (this->BoneIndices).Data.ArrayMax = 0;
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  return this;
}


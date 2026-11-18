// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8de9f0

UScriptStruct * __cdecl FCollectionTransformSelectionFromIndexArrayDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionFromIndexArrayDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionFromIndexArrayDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionFromIndexArrayDataflowNode
                         ,(UObject *)pUVar1,
                         L"CollectionTransformSelectionFromIndexArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionFromIndexArrayDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8dea30

FName __thiscall
FCollectionTransformSelectionFromIndexArrayDataflowNode::GetType
          (FCollectionTransformSelectionFromIndexArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionTransformSelectionFromIndexArrayDataflowNode");
  return in_RDX;
}

// IsA @ 14e8deab0

bool __thiscall
FCollectionTransformSelectionFromIndexArrayDataflowNode::IsA
          (FCollectionTransformSelectionFromIndexArrayDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionTransformSelectionFromIndexArrayDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8deb18;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8deb18:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8deb36;
      }
    }
  }
  bVar5 = true;
LAB_14e8deb36:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8deb70

FStructOnScope * __thiscall
FCollectionTransformSelectionFromIndexArrayDataflowNode::NewStructOnScope
          (FCollectionTransformSelectionFromIndexArrayDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionFromIndexArrayDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionFromIndexArrayDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionFromIndexArrayDataflowNode
                           ,(UObject *)pUVar2,
                           L"CollectionTransformSelectionFromIndexArrayDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionFromIndexArrayDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8debf0

void __thiscall
FCollectionTransformSelectionFromIndexArrayDataflowNode::SerializeInternal
          (FCollectionTransformSelectionFromIndexArrayDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionFromIndexArrayDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionFromIndexArrayDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionFromIndexArrayDataflowNode
                         ,(UObject *)pUVar1,
                         L"CollectionTransformSelectionFromIndexArrayDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionFromIndexArrayDataflowNode
             .OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionFromIndexArrayDataflowNode
             .OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8dec6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8dec80

FName __thiscall
FCollectionTransformSelectionFromIndexArrayDataflowNode::GetDisplayName
          (FCollectionTransformSelectionFromIndexArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionTransformSelectionFromIndexArray");
  return in_RDX;
}

// GetCategory @ 14e8decf0

FName __thiscall
FCollectionTransformSelectionFromIndexArrayDataflowNode::GetCategory
          (FCollectionTransformSelectionFromIndexArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Array");
  return in_RDX;
}

// GetTags @ 14e8ded30

FString * __thiscall
FCollectionTransformSelectionFromIndexArrayDataflowNode::GetTags
          (FCollectionTransformSelectionFromIndexArrayDataflowNode *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8ded60

UScriptStruct * __thiscall
FCollectionTransformSelectionFromIndexArrayDataflowNode::TypedScriptStruct
          (FCollectionTransformSelectionFromIndexArrayDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionFromIndexArrayDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionFromIndexArrayDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionFromIndexArrayDataflowNode
                         ,(UObject *)pUVar1,
                         L"CollectionTransformSelectionFromIndexArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionFromIndexArrayDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e8df0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionTransformSelectionFromIndexArrayDataflowNode::Evaluate
          (FCollectionTransformSelectionFromIndexArrayDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FDataflowTransformSelection *pFVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  int iVar4;
  FName FVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  FManagedArrayCollection *pFVar9;
  FDataflowInput *pFVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  ForElementType<unsigned_int> FVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  FConnectionReference local_b0;
  undefined1 local_98 [24];
  void *local_80;
  undefined4 local_78;
  undefined4 local_74;
  FDataflowSelection local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar1 = &this->TransformSelection;
  pFVar9 = &this->Collection;
  puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowTransformSelection *)puVar8 == pFVar1) {
    pFVar9 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar9);
    FVar5 = FTransformCollection::TransformGroup;
    uVar6 = ::GetTypeHash(FTransformCollection::TransformGroup.ComparisonIndex.Value);
    if (*(int *)&(pFVar9->GroupInfo).field_0x8 != *(int *)&(pFVar9->GroupInfo).field_0x34) {
      puVar8 = *(undefined1 **)&(pFVar9->GroupInfo).field_0x40;
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &(pFVar9->GroupInfo).field_0x38;
      }
      iVar14 = *(int *)(puVar8 + (ulonglong)
                                 (*(int *)&(pFVar9->GroupInfo).field_0x48 - 1U &
                                 FVar5.Number + uVar6) * 4);
      if (iVar14 != -1) {
        do {
          if (*(FName *)(*(longlong *)&pFVar9->GroupInfo + (longlong)iVar14 * 0x14) == FVar5) {
            if (iVar14 != -1) {
              local_98._0_8_ = &this->BoneIndices;
              local_98._16_8_ = (void *)0x0;
              local_98._8_4_ = -1;
              pFVar10 = FDataflowNode::FindInput
                                  ((FDataflowNode *)this,(FConnectionReference *)local_98);
              pTVar11 = FDataflowInput::GetValue<TArray<int,TSizedDefaultAllocator<32>_>_>
                                  (pFVar10,param_1,
                                   (TArray<int,TSizedDefaultAllocator<32>_> *)local_98._0_8_);
              local_70.GroupName = FDataflowTransformSelection::TransformGroupName;
              local_70.SelectionArray.AllocatorInstance.SecondaryData =
                   (ForElementType<unsigned_int>)0x0;
              local_70.SelectionArray.NumBits = 0;
              local_70.SelectionArray.MaxBits = 0x80;
              FDataflowSelection::InitializeFromCollection(&local_70,pFVar9,false);
              pFVar13 = (pTVar11->AllocatorInstance).Data;
              iVar14 = pTVar11->ArrayNum;
              pFVar2 = pFVar13 + (longlong)iVar14 * 4;
              while( true ) {
                if (pTVar11->ArrayNum != iVar14) {
                  `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_b8);
                }
                if (pFVar13 == pFVar2) break;
                iVar4 = *(int *)pFVar13;
                if ((iVar4 < 0) || (local_70.SelectionArray.NumBits <= iVar4)) {
                  ::FString::PrintfImpl
                            ((FString *)&local_b0,
                             L"Index %d is not a valid vertex index for transform group size %d.");
                  UE::Dataflow::FContext::Error
                            (param_1,(FString *)&local_b0,(FDataflowNode *)this,
                             (FDataflowOutput *)0x0);
                  if (local_b0.Reference != (void *)0x0) {
                    FMemory::Free(local_b0.Reference);
                  }
                  pFVar13 = pFVar13 + 4;
                }
                else {
                  FVar12 = (ForElementType<unsigned_int>)&local_70.SelectionArray;
                  if (local_70.SelectionArray.AllocatorInstance.SecondaryData !=
                      (ForElementType<unsigned_int>)0x0) {
                    FVar12 = local_70.SelectionArray.AllocatorInstance.SecondaryData;
                  }
                  iVar7 = iVar4;
                  if (iVar4 < 0) {
                    iVar7 = iVar4 + 0x1f;
                  }
                  puVar3 = (uint *)((longlong)FVar12 + (longlong)(iVar7 >> 5) * 4);
                  *puVar3 = *puVar3 | 1 << ((byte)iVar4 & 0x1f);
                  pFVar13 = pFVar13 + 4;
                }
              }
              FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_70,
                         pFVar1);
              if (local_70.SelectionArray.AllocatorInstance.SecondaryData ==
                  (ForElementType<unsigned_int>)0x0) {
                return;
              }
              FMemory::Free((void *)local_70.SelectionArray.AllocatorInstance.SecondaryData);
              return;
            }
            break;
          }
          iVar14 = *(int *)(*(longlong *)&pFVar9->GroupInfo + 0xc + (longlong)iVar14 * 0x14);
        } while (iVar14 != -1);
      }
    }
    local_98._0_4_ = FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
    local_98._4_4_ = FDataflowTransformSelection::TransformGroupName.Number;
    local_80 = (void *)0x0;
    local_78 = 0;
    local_74 = 0x80;
    FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
              ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)local_98,pFVar1);
    if (local_80 != (void *)0x0) {
      FMemory::Free(local_80);
    }
  }
  else {
    puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FManagedArrayCollection *)puVar8 == pFVar9) {
      local_b0.ContainerReference = (void *)0x0;
      local_b0.Index = -1;
      local_b0.Reference = pFVar9;
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_b0);
      if (pFVar10->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,local_b0.Reference,pFVar9);
      }
      else {
        local_98._8_4_ = -1;
        local_98._16_8_ = (void *)0x0;
        local_98._0_8_ = pFVar9;
        FDataflowNode::ForwardInput
                  ((FDataflowNode *)this,param_1,&local_b0,(FConnectionReference *)local_98);
      }
    }
  }
  return;
}

// FCollectionTransformSelectionFromIndexArrayDataflowNode @ 14e917f00

FCollectionTransformSelectionFromIndexArrayDataflowNode * __thiscall
FCollectionTransformSelectionFromIndexArrayDataflowNode::
FCollectionTransformSelectionFromIndexArrayDataflowNode
          (FCollectionTransformSelectionFromIndexArrayDataflowNode *this,FNodeParameters *param_1,
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
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionFromIndexArrayDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->TransformSelection;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  (this->BoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIndices).ArrayNum = 0;
  (this->BoneIndices).ArrayMax = 0;
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

// FCollectionTransformSelectionFromIndexArrayDataflowNode @ 14e918070

FCollectionTransformSelectionFromIndexArrayDataflowNode * __thiscall
FCollectionTransformSelectionFromIndexArrayDataflowNode::
FCollectionTransformSelectionFromIndexArrayDataflowNode
          (FCollectionTransformSelectionFromIndexArrayDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionFromIndexArrayDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->BoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIndices).ArrayNum = 0;
  (this->BoneIndices).ArrayMax = 0;
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  return this;
}


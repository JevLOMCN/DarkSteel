// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8d8000

UScriptStruct * __cdecl FCollectionTransformSelectionCustomDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode
                           ,(UObject *)pUVar1,L"CollectionTransformSelectionCustomDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8d81b0

FName __thiscall
FCollectionTransformSelectionCustomDataflowNode::GetType
          (FCollectionTransformSelectionCustomDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionTransformSelectionCustomDataflowNode");
  return in_RDX;
}

// IsA @ 14e8d81e0

bool __thiscall
FCollectionTransformSelectionCustomDataflowNode::IsA
          (FCollectionTransformSelectionCustomDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionTransformSelectionCustomDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8d8248;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8d8248:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8d8266;
      }
    }
  }
  bVar5 = true;
LAB_14e8d8266:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8d82a0

FStructOnScope * __thiscall
FCollectionTransformSelectionCustomDataflowNode::NewStructOnScope
          (FCollectionTransformSelectionCustomDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode
                           ,(UObject *)pUVar2,L"CollectionTransformSelectionCustomDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8d8e10

void __thiscall
FCollectionTransformSelectionCustomDataflowNode::SerializeInternal
          (FCollectionTransformSelectionCustomDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode
                           ,(UObject *)pUVar1,L"CollectionTransformSelectionCustomDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8d8e8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8d8ea0

FName __thiscall
FCollectionTransformSelectionCustomDataflowNode::GetDisplayName
          (FCollectionTransformSelectionCustomDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionTransformSelectCustom");
  return in_RDX;
}

// GetCategory @ 14e8d8fa0

FName __thiscall
FCollectionTransformSelectionCustomDataflowNode::GetCategory
          (FCollectionTransformSelectionCustomDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Transform");
  return in_RDX;
}

// GetTags @ 14e8d9040

FString * __thiscall
FCollectionTransformSelectionCustomDataflowNode::GetTags
          (FCollectionTransformSelectionCustomDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8d9070

UScriptStruct * __thiscall
FCollectionTransformSelectionCustomDataflowNode::TypedScriptStruct
          (FCollectionTransformSelectionCustomDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode
                           ,(UObject *)pUVar1,L"CollectionTransformSelectionCustomDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionCustomDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e8d96b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionTransformSelectionCustomDataflowNode::Evaluate
          (FCollectionTransformSelectionCustomDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  uint *puVar1;
  void *_Src;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  FManagedArrayCollection *pFVar8;
  FDataflowInput *pFVar9;
  FString *pFVar10;
  ulonglong uVar11;
  ForAnyElementType _Str;
  ulonglong uVar12;
  ForElementType<unsigned_int> FVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_118 [32];
  undefined1 local_d8 [8];
  FString local_d0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_c0;
  uint local_b0;
  FConnectionReference local_a8;
  undefined1 local_90 [24];
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  FDataflowSelection local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar8 = &this->Collection;
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowTransformSelection *)puVar7 == &this->TransformSelection) {
    pFVar8 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar8);
    FVar2 = FTransformCollection::TransformGroup;
    uVar4 = ::GetTypeHash(FTransformCollection::TransformGroup.ComparisonIndex.Value);
    if (*(int *)&(pFVar8->GroupInfo).field_0x8 != *(int *)&(pFVar8->GroupInfo).field_0x34) {
      puVar7 = *(undefined1 **)&(pFVar8->GroupInfo).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(pFVar8->GroupInfo).field_0x38;
      }
      iVar5 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(pFVar8->GroupInfo).field_0x48 - 1U & FVar2.Number + uVar4
                                ) * 4);
      if (iVar5 != -1) {
        do {
          if (*(FName *)(*(longlong *)&pFVar8->GroupInfo + (longlong)iVar5 * 0x14) == FVar2) {
            if (iVar5 != -1) {
              local_68.GroupName = FDataflowTransformSelection::TransformGroupName;
              local_68.SelectionArray.AllocatorInstance.SecondaryData =
                   (ForElementType<unsigned_int>)0x0;
              local_68.SelectionArray.NumBits = 0;
              local_68.SelectionArray.MaxBits = 0x80;
              FDataflowSelection::InitializeFromCollection(&local_68,pFVar8,false);
              local_90._0_8_ = &this->BoneIndicies;
              local_90._8_4_ = -1;
              local_90._16_8_ = (void *)0x0;
              pFVar9 = FDataflowNode::FindInput
                                 ((FDataflowNode *)this,(FConnectionReference *)local_90);
              pFVar10 = FDataflowInput::GetValue<FString>(pFVar9,param_1,(FString *)local_90._0_8_);
              local_a8.Reference = (void *)0x0;
              local_a8.Index = (pFVar10->Data).ArrayNum;
              lVar14 = (longlong)local_a8.Index;
              pFVar16 = (pFVar10->Data).AllocatorInstance.Data;
              if (local_a8.Index == 0) {
                local_a8._12_4_ = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_a8.Index,0,(ForAnyElementType *)&local_a8,local_a8.Index,
                           (int *)&local_a8.field_0xc);
                memcpy(local_a8.Reference,pFVar16,lVar14 * 2);
              }
              local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_c0.ArrayNum = 0;
              local_c0.ArrayMax = 0;
              ::FString::ParseIntoArray((FString *)&local_a8,&local_c0,L" ",true);
              uVar11 = (ulonglong)local_c0.ArrayNum;
              pFVar16 = local_c0.AllocatorInstance.Data + uVar11 * 0x10;
              local_b0 = local_c0.ArrayNum;
              uVar12 = uVar11;
              FVar15.Data = local_c0.AllocatorInstance.Data;
              while( true ) {
                if ((int)uVar11 != (int)uVar12) {
                  `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (local_d8);
                }
                if (FVar15.Data == pFVar16) break;
                local_d0.Data.ArrayNum = *(int *)(FVar15.Data + 8);
                lVar14 = (longlong)local_d0.Data.ArrayNum;
                _Src = *(void **)FVar15.Data;
                local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                if (local_d0.Data.ArrayNum == 0) {
                  local_d0.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_d0.Data.ArrayNum,0,(ForAnyElementType *)&local_d0,
                             local_d0.Data.ArrayNum,&local_d0.Data.ArrayMax);
                  memcpy(local_d0.Data.AllocatorInstance.Data,_Src,lVar14 * 2);
                }
                bVar3 = ::FString::IsNumeric(&local_d0);
                if (bVar3) {
                  _Str.Data = (FScriptContainerElement *)L"";
                  if (local_d0.Data.ArrayNum != 0) {
                    _Str.Data = local_d0.Data.AllocatorInstance.Data;
                  }
                  iVar5 = _wtoi((wchar_t *)_Str.Data);
                  if ((iVar5 < 0) || (local_68.SelectionArray.NumBits <= iVar5)) {
                    ::FString::PrintfImpl
                              ((FString *)local_90,
                               L"Index %d is not a valid vertex index for transform group size %d.")
                    ;
                    UE::Dataflow::FContext::Error
                              (param_1,(FString *)local_90,(FDataflowNode *)this,
                               (FDataflowOutput *)0x0);
                    if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0)
                    {
                      FMemory::Free((void *)local_90._0_8_);
                    }
                  }
                  else {
                    FVar13 = (ForElementType<unsigned_int>)&local_68.SelectionArray;
                    if (local_68.SelectionArray.AllocatorInstance.SecondaryData !=
                        (ForElementType<unsigned_int>)0x0) {
                      FVar13 = local_68.SelectionArray.AllocatorInstance.SecondaryData;
                    }
                    iVar6 = iVar5;
                    if (iVar5 < 0) {
                      iVar6 = iVar5 + 0x1f;
                    }
                    puVar1 = (uint *)((longlong)FVar13 + (longlong)(iVar6 >> 5) * 4);
                    *puVar1 = *puVar1 | 1 << ((byte)iVar5 & 0x1f);
                  }
                }
                if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                }
                uVar11 = local_c0._8_8_ & 0xffffffff;
                FVar15.Data = FVar15.Data + 0x10;
                uVar12 = (ulonglong)local_b0;
              }
              FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_68,
                         &this->TransformSelection);
              DestructItems<FString,int>
                        ((FString *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
              if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0.AllocatorInstance.Data);
              }
              if (local_a8.Reference != (void *)0x0) {
                FMemory::Free(local_a8.Reference);
              }
              if (local_68.SelectionArray.AllocatorInstance.SecondaryData ==
                  (ForElementType<unsigned_int>)0x0) {
                return;
              }
              FMemory::Free((void *)local_68.SelectionArray.AllocatorInstance.SecondaryData);
              return;
            }
            break;
          }
          iVar5 = *(int *)(*(longlong *)&pFVar8->GroupInfo + 0xc + (longlong)iVar5 * 0x14);
        } while (iVar5 != -1);
      }
    }
    local_90._0_4_ = FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
    local_90._4_4_ = FDataflowTransformSelection::TransformGroupName.Number;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
              ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)local_90,
               &this->TransformSelection);
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
  }
  else {
    puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FManagedArrayCollection *)puVar7 == pFVar8) {
      local_90._16_8_ = (void *)0x0;
      local_90._8_4_ = -1;
      local_90._0_8_ = pFVar8;
      pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_90);
      if (pFVar9->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)local_90._0_8_,pFVar8);
      }
      else {
        local_a8.Index = -1;
        local_a8.ContainerReference = (void *)0x0;
        local_a8.Reference = pFVar8;
        FDataflowNode::ForwardInput
                  ((FDataflowNode *)this,param_1,(FConnectionReference *)local_90,&local_a8);
      }
    }
  }
  return;
}

// FCollectionTransformSelectionCustomDataflowNode @ 14e917b40

FCollectionTransformSelectionCustomDataflowNode * __thiscall
FCollectionTransformSelectionCustomDataflowNode::FCollectionTransformSelectionCustomDataflowNode
          (FCollectionTransformSelectionCustomDataflowNode *this,FNodeParameters *param_1,
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
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionCustomDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->TransformSelection;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  (this->BoneIndicies).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIndicies).Data.ArrayNum = 0;
  (this->BoneIndicies).Data.ArrayMax = 0;
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
  local_58.Reference = &this->BoneIndicies;
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

// FCollectionTransformSelectionCustomDataflowNode @ 14e917cb0

FCollectionTransformSelectionCustomDataflowNode * __thiscall
FCollectionTransformSelectionCustomDataflowNode::FCollectionTransformSelectionCustomDataflowNode
          (FCollectionTransformSelectionCustomDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionCustomDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->BoneIndicies).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIndicies).Data.ArrayNum = 0;
  (this->BoneIndicies).Data.ArrayMax = 0;
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  return this;
}


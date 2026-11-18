// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e86e6b0

UScriptStruct * __cdecl FCollectionSelectionByAttrDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectionByAttrDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectionByAttrDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionByAttrDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectionByAttrDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionSelectionByAttrDataflowNode.OuterSingleton;
}

// GetType @ 14e86ee50

FName __thiscall
FCollectionSelectionByAttrDataflowNode::GetType(FCollectionSelectionByAttrDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionSelectionByAttrDataflowNode");
  return in_RDX;
}

// IsA @ 14e86ee80

bool __thiscall
FCollectionSelectionByAttrDataflowNode::IsA
          (FCollectionSelectionByAttrDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionSelectionByAttrDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e86eee8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e86eee8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e86ef06;
      }
    }
  }
  bVar5 = true;
LAB_14e86ef06:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e86ef40

FStructOnScope * __thiscall
FCollectionSelectionByAttrDataflowNode::NewStructOnScope
          (FCollectionSelectionByAttrDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionSelectionByAttrDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionSelectionByAttrDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionByAttrDataflowNode,
                           (UObject *)pUVar2,L"CollectionSelectionByAttrDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionSelectionByAttrDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e86efc0

void __thiscall
FCollectionSelectionByAttrDataflowNode::SerializeInternal
          (FCollectionSelectionByAttrDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectionByAttrDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectionByAttrDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionByAttrDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectionByAttrDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionSelectionByAttrDataflowNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionSelectionByAttrDataflowNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e86f03d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e86f0e0

FName __thiscall
FCollectionSelectionByAttrDataflowNode::GetDisplayName(FCollectionSelectionByAttrDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionSelectByAttr");
  return in_RDX;
}

// GetCategory @ 14e86f110

FName __thiscall
FCollectionSelectionByAttrDataflowNode::GetCategory(FCollectionSelectionByAttrDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|All");
  return in_RDX;
}

// GetTags @ 14e86f140

FString * __thiscall
FCollectionSelectionByAttrDataflowNode::GetTags
          (FCollectionSelectionByAttrDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e86f170

UScriptStruct * __thiscall
FCollectionSelectionByAttrDataflowNode::TypedScriptStruct
          (FCollectionSelectionByAttrDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectionByAttrDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectionByAttrDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionByAttrDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectionByAttrDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionSelectionByAttrDataflowNode.OuterSingleton;
}

// Evaluate @ 14e86f500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionSelectionByAttrDataflowNode::Evaluate
          (FCollectionSelectionByAttrDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowVertexSelection *pFVar1;
  ESelectionByAttrOperation EVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  FManagedArrayCollection *pFVar8;
  FDataflowInput *pFVar9;
  FCollectionAttributeKey *pFVar10;
  FName *pFVar11;
  FString *pFVar12;
  FName FVar13;
  ForElementType<unsigned_int> FVar14;
  int iVar15;
  undefined1 auStackY_1c8 [32];
  FName local_198;
  FConnectionReference local_190;
  FString local_178;
  FString local_168;
  FDataflowSelection local_158;
  FDataflowSelection local_130;
  FDataflowSelection local_108;
  FDataflowSelection local_e0;
  FDataflowSelection local_b8;
  FDataflowSelection local_90;
  FDataflowSelection local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar1 = &this->VertexSelection;
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((((FDataflowVertexSelection *)puVar7 == pFVar1) ||
       (puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
       (FDataflowFaceSelection *)puVar7 == &this->FaceSelection)) ||
      (puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (FDataflowTransformSelection *)puVar7 == &this->TransformSelection)) ||
     ((puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (FDataflowGeometrySelection *)puVar7 == &this->GeometrySelection ||
      (puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (FDataflowMaterialSelection *)puVar7 == &this->MaterialSelection)))) {
    pFVar8 = FDataflowNode::GetValue<FManagedArrayCollection>
                       ((FDataflowNode *)this,param_1,&this->Collection);
    local_190.Index = -1;
    local_190.ContainerReference = (void *)0x0;
    local_190.Reference = &this->AttributeKey;
    pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_190);
    pFVar10 = FDataflowInput::GetValue<FCollectionAttributeKey>(pFVar9,param_1,local_190.Reference);
    ::FString::FString(&local_178,&pFVar10->Attribute);
    ::FString::FString(&local_168,&pFVar10->Group);
    UE::Dataflow::Private::GetAttributeFromEnumAsName((ESelectionByAttrGroup)&local_198);
    iVar6 = (this->Attribute).Data.ArrayNum;
    iVar15 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar15 = 0;
    }
    pFVar11 = ::FName::FName((FName *)&local_190,iVar15,
                             (wchar_t *)(this->Attribute).Data.AllocatorInstance.Data,FNAME_Add);
    FVar13 = *pFVar11;
    local_190.Index = -1;
    local_190.ContainerReference = (void *)0x0;
    local_190.Reference = &this->AttributeKey;
    pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_190);
    if (pFVar9->Connection != (FDataflowOutput *)0x0) {
      iVar6 = local_168.Data.ArrayNum + -1;
      if (local_168.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar11 = ::FName::FName((FName *)&local_190,iVar6,
                               (wchar_t *)local_168.Data.AllocatorInstance.Data,FNAME_Add);
      local_198 = *pFVar11;
      iVar6 = local_178.Data.ArrayNum + -1;
      if (local_178.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar11 = ::FName::FName((FName *)&local_190,iVar6,
                               (wchar_t *)local_178.Data.AllocatorInstance.Data,FNAME_Add);
      FVar13 = *pFVar11;
    }
    FVar3 = local_198;
    uVar5 = ::GetTypeHash(local_198.ComparisonIndex.Value);
    if (*(int *)&(pFVar8->GroupInfo).field_0x8 != *(int *)&(pFVar8->GroupInfo).field_0x34) {
      puVar7 = *(undefined1 **)&(pFVar8->GroupInfo).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(pFVar8->GroupInfo).field_0x38;
      }
      iVar6 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(pFVar8->GroupInfo).field_0x48 - 1U & FVar3.Number + uVar5
                                ) * 4);
      if (iVar6 != -1) {
        do {
          if (*(FName *)(*(longlong *)&pFVar8->GroupInfo + (longlong)iVar6 * 0x14) == FVar3) {
            bVar4 = FManagedArrayCollection::HasAttribute(pFVar8,FVar13,local_198);
            if (bVar4) {
              iVar6 = FManagedArrayCollection::NumElements(pFVar8,local_198);
              local_130.GroupName.ComparisonIndex.Value = 0;
              local_130.GroupName.Number = 0;
              local_130.SelectionArray.AllocatorInstance.SecondaryData =
                   (ForElementType<unsigned_int>)0x0;
              local_130.SelectionArray.NumBits = 0;
              local_130.SelectionArray.MaxBits = 0x80;
              FDataflowSelection::Initialize(&local_130,iVar6,false);
              EVar2 = this->Operation;
              pFVar12 = ::FString::FString((FString *)&local_190,&this->Value);
              CreateSelectionFromAttr(pFVar8,local_198,FVar13,pFVar12,EVar2,&local_130);
              local_158.GroupName = FDataflowVertexSelection::VerticesGroupName;
              local_158.SelectionArray.AllocatorInstance.SecondaryData =
                   (ForElementType<unsigned_int>)0x0;
              local_158.SelectionArray.NumBits = 0;
              local_158.SelectionArray.MaxBits = 0x80;
              FVar13 = UE::Dataflow::Private::GetAttributeFromEnumAsName
                                 ((ESelectionByAttrGroup)&local_190);
              if (local_198 == *(FName *)FVar13) {
                FDataflowSelection::Initialize(&local_158,&local_130);
              }
              FDataflowNode::SetValue<FDataflowVertexSelection,FDataflowVertexSelection>
                        ((FDataflowNode *)this,param_1,(FDataflowVertexSelection *)&local_158,pFVar1
                        );
              local_68.GroupName = FDataflowFaceSelection::FacesGroupName;
              local_68.SelectionArray.AllocatorInstance.SecondaryData =
                   (ForElementType<unsigned_int>)0x0;
              local_68.SelectionArray.NumBits = 0;
              local_68.SelectionArray.MaxBits = 0x80;
              FVar13 = UE::Dataflow::Private::GetAttributeFromEnumAsName
                                 ((ESelectionByAttrGroup)&local_190);
              if (local_198 == *(FName *)FVar13) {
                FDataflowSelection::Initialize(&local_68,&local_130);
              }
              FDataflowNode::SetValue<FDataflowFaceSelection,FDataflowFaceSelection>
                        ((FDataflowNode *)this,param_1,(FDataflowFaceSelection *)&local_68,
                         &this->FaceSelection);
              local_90.GroupName = FDataflowTransformSelection::TransformGroupName;
              local_90.SelectionArray.AllocatorInstance.SecondaryData =
                   (ForElementType<unsigned_int>)0x0;
              local_90.SelectionArray.NumBits = 0;
              local_90.SelectionArray.MaxBits = 0x80;
              FVar13 = UE::Dataflow::Private::GetAttributeFromEnumAsName
                                 ((ESelectionByAttrGroup)&local_190);
              if (local_198 == *(FName *)FVar13) {
                FDataflowSelection::Initialize(&local_90,&local_130);
              }
              FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_90,
                         &this->TransformSelection);
              local_b8.GroupName = FDataflowGeometrySelection::GeometryGroupName;
              local_b8.SelectionArray.AllocatorInstance.SecondaryData =
                   (ForElementType<unsigned_int>)0x0;
              local_b8.SelectionArray.NumBits = 0;
              local_b8.SelectionArray.MaxBits = 0x80;
              FVar13 = UE::Dataflow::Private::GetAttributeFromEnumAsName
                                 ((ESelectionByAttrGroup)&local_190);
              if (local_198 == *(FName *)FVar13) {
                FDataflowSelection::Initialize(&local_b8,&local_130);
              }
              FDataflowNode::SetValue<FDataflowGeometrySelection,FDataflowGeometrySelection>
                        ((FDataflowNode *)this,param_1,(FDataflowGeometrySelection *)&local_b8,
                         &this->GeometrySelection);
              local_e0.GroupName = FDataflowMaterialSelection::MaterialGroupName;
              local_e0.SelectionArray.AllocatorInstance.SecondaryData =
                   (ForElementType<unsigned_int>)0x0;
              local_e0.SelectionArray.NumBits = 0;
              local_e0.SelectionArray.MaxBits = 0x80;
              FVar13 = UE::Dataflow::Private::GetAttributeFromEnumAsName
                                 ((ESelectionByAttrGroup)&local_190);
              if (local_198 == *(FName *)FVar13) {
                FDataflowSelection::Initialize(&local_e0,&local_130);
              }
              FDataflowNode::SetValue<FDataflowMaterialSelection,FDataflowMaterialSelection>
                        ((FDataflowNode *)this,param_1,(FDataflowMaterialSelection *)&local_e0,
                         &this->MaterialSelection);
              local_108.GroupName = FDataflowCurveSelection::CurveGroupName;
              local_108.SelectionArray.AllocatorInstance.SecondaryData =
                   (ForElementType<unsigned_int>)0x0;
              local_108.SelectionArray.NumBits = 0;
              local_108.SelectionArray.MaxBits = 0x80;
              FVar13 = UE::Dataflow::Private::GetAttributeFromEnumAsName
                                 ((ESelectionByAttrGroup)&local_190);
              if (local_198 == *(FName *)FVar13) {
                FDataflowSelection::Initialize(&local_108,&local_130);
              }
              FDataflowNode::SetValue<FDataflowCurveSelection,FDataflowCurveSelection>
                        ((FDataflowNode *)this,param_1,(FDataflowCurveSelection *)&local_108,
                         &this->CurveSelection);
              if (local_108.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_108.SelectionArray.AllocatorInstance.SecondaryData);
              }
              if (local_e0.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_e0.SelectionArray.AllocatorInstance.SecondaryData);
              }
              if (local_b8.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_b8.SelectionArray.AllocatorInstance.SecondaryData);
              }
              if (local_90.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_90.SelectionArray.AllocatorInstance.SecondaryData);
              }
              if (local_68.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_68.SelectionArray.AllocatorInstance.SecondaryData);
              }
              FVar14 = local_130.SelectionArray.AllocatorInstance.SecondaryData;
              if (local_158.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_158.SelectionArray.AllocatorInstance.SecondaryData);
                FVar14 = local_130.SelectionArray.AllocatorInstance.SecondaryData;
              }
              goto LAB_14e86f8fb;
            }
            break;
          }
          iVar6 = *(int *)(*(longlong *)&pFVar8->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
        } while (iVar6 != -1);
      }
    }
    local_158.GroupName = FDataflowVertexSelection::VerticesGroupName;
    local_158.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_158.SelectionArray.NumBits = 0;
    local_158.SelectionArray.MaxBits = 0x80;
    FDataflowNode::SetValue<FDataflowVertexSelection,FDataflowVertexSelection>
              ((FDataflowNode *)this,param_1,(FDataflowVertexSelection *)&local_158,pFVar1);
    if (local_158.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_158.SelectionArray.AllocatorInstance.SecondaryData);
    }
    local_158.GroupName = FDataflowFaceSelection::FacesGroupName;
    local_158.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_158.SelectionArray.NumBits = 0;
    local_158.SelectionArray.MaxBits = 0x80;
    FDataflowNode::SetValue<FDataflowFaceSelection,FDataflowFaceSelection>
              ((FDataflowNode *)this,param_1,(FDataflowFaceSelection *)&local_158,
               &this->FaceSelection);
    if (local_158.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_158.SelectionArray.AllocatorInstance.SecondaryData);
    }
    local_158.GroupName = FDataflowTransformSelection::TransformGroupName;
    local_158.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_158.SelectionArray.NumBits = 0;
    local_158.SelectionArray.MaxBits = 0x80;
    FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
              ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_158,
               &this->TransformSelection);
    if (local_158.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_158.SelectionArray.AllocatorInstance.SecondaryData);
    }
    local_158.GroupName = FDataflowGeometrySelection::GeometryGroupName;
    local_158.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_158.SelectionArray.NumBits = 0;
    local_158.SelectionArray.MaxBits = 0x80;
    FDataflowNode::SetValue<FDataflowGeometrySelection,FDataflowGeometrySelection>
              ((FDataflowNode *)this,param_1,(FDataflowGeometrySelection *)&local_158,
               &this->GeometrySelection);
    if (local_158.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_158.SelectionArray.AllocatorInstance.SecondaryData);
    }
    local_158.GroupName = FDataflowMaterialSelection::MaterialGroupName;
    local_158.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_158.SelectionArray.NumBits = 0;
    local_158.SelectionArray.MaxBits = 0x80;
    FDataflowNode::SetValue<FDataflowMaterialSelection,FDataflowMaterialSelection>
              ((FDataflowNode *)this,param_1,(FDataflowMaterialSelection *)&local_158,
               &this->MaterialSelection);
    if (local_158.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_158.SelectionArray.AllocatorInstance.SecondaryData);
    }
    local_158.GroupName = FDataflowCurveSelection::CurveGroupName;
    local_158.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_158.SelectionArray.NumBits = 0;
    local_158.SelectionArray.MaxBits = 0x80;
    FDataflowNode::SetValue<FDataflowCurveSelection,FDataflowCurveSelection>
              ((FDataflowNode *)this,param_1,(FDataflowCurveSelection *)&local_158,
               &this->CurveSelection);
    FVar14 = local_158.SelectionArray.AllocatorInstance.SecondaryData;
LAB_14e86f8fb:
    if (FVar14 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar14);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar8 = &this->Collection;
    puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FManagedArrayCollection *)puVar7 == pFVar8) {
      local_190.ContainerReference = (void *)0x0;
      local_190.Index = -1;
      local_190.Reference = pFVar8;
      FDataflowNode::SafeForwardInput<FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,&local_190,pFVar8);
    }
  }
  return;
}

// FCollectionSelectionByAttrDataflowNode @ 14e915420

FCollectionSelectionByAttrDataflowNode * __thiscall
FCollectionSelectionByAttrDataflowNode::FCollectionSelectionByAttrDataflowNode
          (FCollectionSelectionByAttrDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowVertexSelection *pFVar1;
  FDataflowFaceSelection *pFVar2;
  FDataflowTransformSelection *pFVar3;
  FDataflowGeometrySelection *pFVar4;
  uint uVar5;
  FDataflowOutput *pFVar6;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FCollectionSelectionByAttrDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  ::FString::FString(&(this->AttributeKey).Attribute,"");
  ::FString::FString(&(this->AttributeKey).Group,"");
  this->Group = Faces;
  ::FString::FString(&this->Attribute,"Internal");
  this->Operation = Equal;
  ::FString::FString(&this->Value,"true");
  pFVar1 = &this->VertexSelection;
  uVar5 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&pFVar1->field_0x0 = FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar5;
  pFVar2 = &this->FaceSelection;
  *(undefined8 *)&(this->VertexSelection).field_0x18 = 0;
  pFVar3 = &this->TransformSelection;
  *(undefined4 *)&(this->VertexSelection).field_0x20 = 0;
  pFVar4 = &this->GeometrySelection;
  *(undefined4 *)&(this->VertexSelection).field_0x24 = 0x80;
  uVar5 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&pFVar2->field_0x0 = FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar2->field_0x4 = uVar5;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
  uVar5 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar3->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar3->field_0x4 = uVar5;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  uVar5 = FDataflowGeometrySelection::GeometryGroupName.Number;
  *(uint *)&pFVar4->field_0x0 = FDataflowGeometrySelection::GeometryGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar4->field_0x4 = uVar5;
  *(undefined8 *)&(this->GeometrySelection).field_0x18 = 0;
  *(undefined4 *)&(this->GeometrySelection).field_0x20 = 0;
  *(undefined4 *)&(this->GeometrySelection).field_0x24 = 0x80;
  uVar5 = FDataflowMaterialSelection::MaterialGroupName.Number;
  *(uint *)&(this->MaterialSelection).field_0x0 =
       FDataflowMaterialSelection::MaterialGroupName.ComparisonIndex.Value;
  *(uint *)&(this->MaterialSelection).field_0x4 = uVar5;
  *(undefined8 *)&(this->MaterialSelection).field_0x18 = 0;
  *(undefined4 *)&(this->MaterialSelection).field_0x20 = 0;
  *(undefined4 *)&(this->MaterialSelection).field_0x24 = 0x80;
  uVar5 = FDataflowCurveSelection::CurveGroupName.Number;
  *(uint *)&(this->CurveSelection).field_0x0 =
       FDataflowCurveSelection::CurveGroupName.ComparisonIndex.Value;
  *(uint *)&(this->CurveSelection).field_0x4 = uVar5;
  *(undefined8 *)&(this->CurveSelection).field_0x18 = 0;
  *(undefined4 *)&(this->CurveSelection).field_0x20 = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  *(undefined4 *)&(this->CurveSelection).field_0x24 = 0x80;
  local_68.Index = -1;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_68.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->AttributeKey;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  pFVar6 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar6,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = pFVar1;
  pFVar6 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar6,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = pFVar2;
  pFVar6 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar6,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = pFVar3;
  pFVar6 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar6,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = pFVar4;
  pFVar6 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar6,&local_68);
  }
  local_48.Reference = &this->MaterialSelection;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pFVar6 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar6,&local_68);
  }
  local_48.Reference = &this->CurveSelection;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pFVar6 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar6,&local_68);
  }
  return this;
}

// FCollectionSelectionByAttrDataflowNode @ 14e915800

FCollectionSelectionByAttrDataflowNode * __thiscall
FCollectionSelectionByAttrDataflowNode::FCollectionSelectionByAttrDataflowNode
          (FCollectionSelectionByAttrDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCollectionSelectionByAttrDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  ::FString::FString(&(this->AttributeKey).Attribute,"");
  ::FString::FString(&(this->AttributeKey).Group,"");
  this->Group = Faces;
  ::FString::FString(&this->Attribute,"Internal");
  this->Operation = Equal;
  ::FString::FString(&this->Value,"true");
  uVar1 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&(this->VertexSelection).field_0x0 =
       FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->VertexSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->VertexSelection).field_0x18 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x20 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x24 = 0x80;
  uVar1 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&(this->FaceSelection).field_0x0 =
       FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->FaceSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  uVar1 = FDataflowGeometrySelection::GeometryGroupName.Number;
  *(uint *)&(this->GeometrySelection).field_0x0 =
       FDataflowGeometrySelection::GeometryGroupName.ComparisonIndex.Value;
  *(uint *)&(this->GeometrySelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->GeometrySelection).field_0x18 = 0;
  *(undefined4 *)&(this->GeometrySelection).field_0x20 = 0;
  *(undefined4 *)&(this->GeometrySelection).field_0x24 = 0x80;
  uVar1 = FDataflowMaterialSelection::MaterialGroupName.Number;
  *(uint *)&(this->MaterialSelection).field_0x0 =
       FDataflowMaterialSelection::MaterialGroupName.ComparisonIndex.Value;
  *(uint *)&(this->MaterialSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->MaterialSelection).field_0x18 = 0;
  *(undefined4 *)&(this->MaterialSelection).field_0x20 = 0;
  *(undefined4 *)&(this->MaterialSelection).field_0x24 = 0x80;
  uVar1 = FDataflowCurveSelection::CurveGroupName.Number;
  *(uint *)&(this->CurveSelection).field_0x0 =
       FDataflowCurveSelection::CurveGroupName.ComparisonIndex.Value;
  *(uint *)&(this->CurveSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->CurveSelection).field_0x18 = 0;
  *(undefined4 *)&(this->CurveSelection).field_0x20 = 0;
  *(undefined4 *)&(this->CurveSelection).field_0x24 = 0x80;
  return this;
}

// ~FCollectionSelectionByAttrDataflowNode @ 14e9330f0

void __thiscall
FCollectionSelectionByAttrDataflowNode::~FCollectionSelectionByAttrDataflowNode
          (FCollectionSelectionByAttrDataflowNode *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  pvVar1 = *(void **)&(this->CurveSelection).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->MaterialSelection).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->GeometrySelection).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->TransformSelection).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->FaceSelection).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->VertexSelection).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->Value).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Attribute).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AttributeKey).Group.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AttributeKey).Attribute.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}


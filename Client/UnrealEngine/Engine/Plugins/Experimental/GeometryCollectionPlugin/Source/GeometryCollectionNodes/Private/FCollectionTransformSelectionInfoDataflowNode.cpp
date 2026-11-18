// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8cbfc0

UScriptStruct * __cdecl FCollectionTransformSelectionInfoDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode,
                         (UObject *)pUVar1,L"CollectionTransformSelectionInfoDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8cc4c0

FName __thiscall
FCollectionTransformSelectionInfoDataflowNode::GetType
          (FCollectionTransformSelectionInfoDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionTransformSelectionInfoDataflowNode");
  return in_RDX;
}

// IsA @ 14e8cc570

bool __thiscall
FCollectionTransformSelectionInfoDataflowNode::IsA
          (FCollectionTransformSelectionInfoDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionTransformSelectionInfoDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8cc5d8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8cc5d8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8cc5f6;
      }
    }
  }
  bVar5 = true;
LAB_14e8cc5f6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8cc630

FStructOnScope * __thiscall
FCollectionTransformSelectionInfoDataflowNode::NewStructOnScope
          (FCollectionTransformSelectionInfoDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode.OuterSingleton
           = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode
                             ,(UObject *)pUVar2,L"CollectionTransformSelectionInfoDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8cc920

void __thiscall
FCollectionTransformSelectionInfoDataflowNode::SerializeInternal
          (FCollectionTransformSelectionInfoDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode,
                         (UObject *)pUVar1,L"CollectionTransformSelectionInfoDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8cc99d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8cc9b0

FName __thiscall
FCollectionTransformSelectionInfoDataflowNode::GetDisplayName
          (FCollectionTransformSelectionInfoDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionTransformSelectionInfo");
  return in_RDX;
}

// GetCategory @ 14e8cc9e0

FName __thiscall
FCollectionTransformSelectionInfoDataflowNode::GetCategory
          (FCollectionTransformSelectionInfoDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Transform");
  return in_RDX;
}

// GetTags @ 14e8cca10

FString * __thiscall
FCollectionTransformSelectionInfoDataflowNode::GetTags
          (FCollectionTransformSelectionInfoDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8cca40

UScriptStruct * __thiscall
FCollectionTransformSelectionInfoDataflowNode::TypedScriptStruct
          (FCollectionTransformSelectionInfoDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode,
                         (UObject *)pUVar1,L"CollectionTransformSelectionInfoDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionInfoDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e8cd270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCollectionTransformSelectionInfoDataflowNode::Evaluate
          (FCollectionTransformSelectionInfoDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FName FVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  FDataflowTransformSelection *pFVar8;
  FManagedArrayCollection *this_00;
  FName *pFVar9;
  TManagedArray<int> *pTVar10;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar11;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar12;
  TManagedArray<FString> *pTVar13;
  int iVar14;
  FName local_res8;
  FContext *local_res10;
  FName local_res18;
  FName local_res20;
  FName local_98;
  FName local_90;
  FName local_88;
  FString local_80;
  FString local_70;
  FName local_60;
  FName local_58;
  
  local_res10 = param_1;
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FString *)puVar7 == &this->String) {
    pFVar8 = FDataflowNode::GetValue<FDataflowTransformSelection>
                       ((FDataflowNode *)this,param_1,&this->TransformSelection);
    this_00 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,&this->Collection);
    iVar14 = 0;
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.Data.ArrayNum = 0;
    local_80.Data.ArrayMax = 0;
    ::FString::AppendfImpl(&local_80,L"\n----------------------------------------\n");
    ::FString::AppendfImpl(&local_80,L"Number of Elements: %d\n");
    FVar1 = FTransformCollection::TransformGroup;
    uVar5 = ::GetTypeHash(FTransformCollection::TransformGroup.ComparisonIndex.Value);
    FVar3 = FTransformCollection::TransformGroup;
    if (*(int *)&(this_00->GroupInfo).field_0x8 != *(int *)&(this_00->GroupInfo).field_0x34) {
      puVar7 = *(undefined1 **)&(this_00->GroupInfo).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this_00->GroupInfo).field_0x38;
      }
      iVar6 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(this_00->GroupInfo).field_0x48 - 1U &
                                FVar1.Number + uVar5) * 4);
      if (iVar6 != -1) {
        do {
          if (*(FName *)(*(longlong *)&this_00->GroupInfo + (longlong)iVar6 * 0x14) == FVar1) {
            pFVar9 = ::FName::FName(&local_res8,"Parent");
            bVar4 = FManagedArrayCollection::HasAttribute(this_00,*pFVar9,FVar3);
            FVar1 = FTransformCollection::TransformGroup;
            if (bVar4) {
              pFVar9 = ::FName::FName(&local_res18,"Children");
              bVar4 = FManagedArrayCollection::HasAttribute(this_00,*pFVar9,FVar1);
              FVar1 = FTransformCollection::TransformGroup;
              if (bVar4) {
                pFVar9 = ::FName::FName(&local_res20,"BoneName");
                bVar4 = FManagedArrayCollection::HasAttribute(this_00,*pFVar9,FVar1);
                if (bVar4) {
                  iVar14 = *(int *)&pFVar8->field_0x20;
                  iVar6 = FManagedArrayCollection::NumElements
                                    (this_00,FTransformCollection::TransformGroup);
                  FVar1 = FTransformCollection::TransformGroup;
                  if (iVar14 == iVar6) {
                    pFVar9 = ::FName::FName(&local_98,"Parent");
                    pTVar10 = FManagedArrayCollection::GetAttribute<int>(this_00,*pFVar9,FVar1);
                    FVar1 = FTransformCollection::TransformGroup;
                    pFVar9 = ::FName::FName(&local_90,"Children");
                    pTVar11 = FManagedArrayCollection::
                              GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                                        (this_00,*pFVar9,FVar1);
                    FVar3 = FTransformCollection::TransformGroup;
                    pFVar9 = ::FName::FName(&local_88,"BoneName");
                    FVar1 = *pFVar9;
                    bVar4 = FManagedArrayCollection::HasAttribute(this_00,FVar1,FVar3);
                    if ((!bVar4) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("HasAttribute(Name, Group)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                           ,0x185,L""), bVar4)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    local_58 = FVar3;
                    local_60 = FVar1;
                    pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                                      *)&this_00->Map,(TTuple<FName,FName> *)&local_60);
                    if ((pTVar12 ==
                         (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Pair != nullptr",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                           ,0x27b,L""), bVar4)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pTVar13 = FManagedArrayCollection::FValueType::GetTypedPtr<FString>
                                        ((FValueType *)&pTVar12->field_0x10);
                    BuildHierarchicalOutput(pTVar10,pTVar11,pTVar13,pFVar8,&local_80);
                  }
                  else {
                    ::FString::FString(&local_70,"TransformSelection doesn\'t match the Collection."
                                      );
                    if (1 < (byte)LogTemp._0_1_) {
                      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
                    }
                    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_70.Data.AllocatorInstance.Data);
                    }
                  }
                  goto LAB_14e8cd41c;
                }
              }
            }
            break;
          }
          iVar6 = *(int *)(*(longlong *)&this_00->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
        } while (iVar6 != -1);
      }
    }
    if (0 < *(int *)&pFVar8->field_0x20) {
      do {
        if (((iVar14 < 0) || (*(int *)&pFVar8->field_0x20 <= iVar14)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        ::FString::AppendfImpl(&local_80,L"%4d: %s\n");
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)&pFVar8->field_0x20);
    }
LAB_14e8cd41c:
    ::FString::AppendfImpl(&local_80,L"----------------------------------------\n");
    FDataflowNode::SetValue<FString,FString>
              ((FDataflowNode *)this,local_res10,&local_80,&this->String);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FCollectionTransformSelectionInfoDataflowNode @ 14e9186d0

FCollectionTransformSelectionInfoDataflowNode * __thiscall
FCollectionTransformSelectionInfoDataflowNode::FCollectionTransformSelectionInfoDataflowNode
          (FCollectionTransformSelectionInfoDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FDataflowTransformSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  pFVar1 = &this->TransformSelection;
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionInfoDataflowNode__6B_;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->String).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->String).Data.ArrayNum = 0;
  (this->String).Data.ArrayMax = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Collection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->String;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

// FCollectionTransformSelectionInfoDataflowNode @ 14e918800

FCollectionTransformSelectionInfoDataflowNode * __thiscall
FCollectionTransformSelectionInfoDataflowNode::FCollectionTransformSelectionInfoDataflowNode
          (FCollectionTransformSelectionInfoDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionInfoDataflowNode__6B_;
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->String).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->String).Data.ArrayNum = 0;
  (this->String).Data.ArrayMax = 0;
  return this;
}


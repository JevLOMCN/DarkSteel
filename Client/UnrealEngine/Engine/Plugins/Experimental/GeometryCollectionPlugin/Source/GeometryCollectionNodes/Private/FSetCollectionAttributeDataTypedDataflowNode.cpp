// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e8290d0

UScriptStruct * __cdecl FSetCollectionAttributeDataTypedDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetCollectionAttributeDataTypedDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetCollectionAttributeDataTypedDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetCollectionAttributeDataTypedDataflowNode,
                         (UObject *)pUVar1,L"SetCollectionAttributeDataTypedDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetCollectionAttributeDataTypedDataflowNode.
         OuterSingleton;
}

// GetType @ 14e829660

FName __thiscall
FSetCollectionAttributeDataTypedDataflowNode::GetType
          (FSetCollectionAttributeDataTypedDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSetCollectionAttributeDataTypedDataflowNode");
  return in_RDX;
}

// IsA @ 14e829710

bool __thiscall
FSetCollectionAttributeDataTypedDataflowNode::IsA
          (FSetCollectionAttributeDataTypedDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSetCollectionAttributeDataTypedDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e829778;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e829778:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e829796;
      }
    }
  }
  bVar5 = true;
LAB_14e829796:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e829860

FStructOnScope * __thiscall
FSetCollectionAttributeDataTypedDataflowNode::NewStructOnScope
          (FSetCollectionAttributeDataTypedDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSetCollectionAttributeDataTypedDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSetCollectionAttributeDataTypedDataflowNode.OuterSingleton
           = GetStaticStruct(Z_Construct_UScriptStruct_FSetCollectionAttributeDataTypedDataflowNode,
                             (UObject *)pUVar2,L"SetCollectionAttributeDataTypedDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSetCollectionAttributeDataTypedDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e829950

void __thiscall
FSetCollectionAttributeDataTypedDataflowNode::SerializeInternal
          (FSetCollectionAttributeDataTypedDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetCollectionAttributeDataTypedDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetCollectionAttributeDataTypedDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetCollectionAttributeDataTypedDataflowNode,
                         (UObject *)pUVar1,L"SetCollectionAttributeDataTypedDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSetCollectionAttributeDataTypedDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSetCollectionAttributeDataTypedDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8299cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e829a10

FName __thiscall
FSetCollectionAttributeDataTypedDataflowNode::GetDisplayName
          (FSetCollectionAttributeDataTypedDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SetCollectionAttributeDataTyped");
  return in_RDX;
}

// GetCategory @ 14e829a80

FName __thiscall
FSetCollectionAttributeDataTypedDataflowNode::GetCategory
          (FSetCollectionAttributeDataTypedDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e829af0

FString * __thiscall
FSetCollectionAttributeDataTypedDataflowNode::GetTags
          (FSetCollectionAttributeDataTypedDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e829b60

UScriptStruct * __thiscall
FSetCollectionAttributeDataTypedDataflowNode::TypedScriptStruct
          (FSetCollectionAttributeDataTypedDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetCollectionAttributeDataTypedDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetCollectionAttributeDataTypedDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetCollectionAttributeDataTypedDataflowNode,
                         (UObject *)pUVar1,L"SetCollectionAttributeDataTypedDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetCollectionAttributeDataTypedDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e82a3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FSetCollectionAttributeDataTypedDataflowNode::Evaluate
          (FSetCollectionAttributeDataTypedDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  EStandardGroupNameEnum EVar3;
  FScriptContainerElement *pFVar4;
  FManagedArrayBase *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FName FVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  FManagedArrayCollection *pFVar15;
  FString *pFVar16;
  FString *pFVar17;
  FDataflowInput *pFVar18;
  FCollectionAttributeKey *pFVar19;
  FName *pFVar20;
  FName FVar21;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar22;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar23;
  TManagedArray<float> *pTVar24;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar25;
  TManagedArray<UE::Math::TVector<float>_> *pTVar26;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar27;
  TManagedArray<UE::Math::TVector<double>_> *pTVar28;
  wchar_t *pwVar29;
  uint uVar30;
  uint uVar31;
  FValueType *pFVar32;
  FValueType *pFVar33;
  undefined1 auStackY_318 [32];
  FName local_2e8;
  FName local_2e0;
  FString local_2d8;
  FContext *local_2c8;
  undefined8 local_2c0;
  FName local_2b8;
  FString local_2b0;
  FString local_2a0;
  FName local_290;
  FName local_288;
  FName local_280;
  FName local_278;
  FName local_270;
  FName local_268;
  FConnectionReference local_260;
  FConnectionReference local_248;
  FConnectionReference local_230;
  FConnectionReference local_218;
  FCollectionAttributeKey local_200;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  undefined1 local_1c8 [8];
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  undefined1 local_118 [160];
  int local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_2c8 = param_1;
  puVar14 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar14 == &this->Collection) {
    pFVar15 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,&this->Collection);
    FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)local_118,pFVar15);
    EVar3 = this->GroupName;
    pFVar32 = (FValueType *)0x0;
    if (EVar3 == Dataflow_EStandardGroupNameEnum_Custom) {
      if ((this->CustomGroupName).Data.ArrayNum == 0) {
        pwVar29 = L"";
      }
      else {
        pwVar29 = (wchar_t *)(this->CustomGroupName).Data.AllocatorInstance.Data;
      }
      pFVar20 = ::FName::FName(&local_1e0,pwVar29);
      local_2b8 = *pFVar20;
    }
    else {
      local_2c0 = 0;
      if (EVar3 == Dataflow_EStandardGroupNameEnum_Transform) {
        local_2b8 = FTransformCollection::TransformGroup;
      }
      else if (EVar3 == Dataflow_EStandardGroupNameEnum_Geometry) {
        local_2b8 = FGeometryCollection::GeometryGroup;
      }
      else if (EVar3 == Dataflow_EStandardGroupNameEnum_Faces) {
        local_2b8 = FGeometryCollection::FacesGroup;
      }
      else if (EVar3 == Dataflow_EStandardGroupNameEnum_Vertices) {
        local_2b8 = FGeometryCollection::VerticesGroup;
      }
      else if (EVar3 == Dataflow_EStandardGroupNameEnum_Material) {
        local_2b8 = FGeometryCollection::MaterialGroup;
      }
      else {
        local_2b8.ComparisonIndex.Value = 0;
        local_2b8.Number = 0;
        if (EVar3 == Dataflow_EStandardGroupNameEnum_Breaking) {
          local_2b8 = FGeometryCollection::BreakingGroup;
        }
      }
    }
    pFVar16 = ::FName::ToString(&local_2b8,&local_140);
    pFVar17 = ::FString::FString(&local_130,&this->AttrName);
    ::FString::FString(&local_200.Attribute,pFVar17);
    ::FString::FString(&local_200.Group,pFVar16);
    pFVar4 = (pFVar17->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar16->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    local_260.Reference = &this->AttributeKey;
    local_260.Index = -1;
    local_260.ContainerReference = (void *)0x0;
    pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_260);
    pFVar19 = FDataflowInput::GetValue<FCollectionAttributeKey>(pFVar18,param_1,&local_200);
    ::FString::FString(&local_2b0,&pFVar19->Attribute);
    ::FString::FString(&local_2a0,&pFVar19->Group);
    iVar13 = local_2a0.Data.ArrayNum + -1;
    if (local_2a0.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    pFVar20 = ::FName::FName(&local_1d8,iVar13,(wchar_t *)local_2a0.Data.AllocatorInstance.Data,
                             FNAME_Add);
    local_2e8 = *pFVar20;
    iVar13 = local_2b0.Data.ArrayNum + -1;
    if (local_2b0.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    pFVar20 = ::FName::FName(&local_1d0,iVar13,(wchar_t *)local_2b0.Data.AllocatorInstance.Data,
                             FNAME_Add);
    local_2e0 = *pFVar20;
    uVar12 = ::FName::GetStringLength(&local_2e8);
    if ((uVar12 != 0) &&
       (uVar12 = ::FName::GetStringLength(&local_2e0), FVar21 = local_2e8, uVar12 != 0)) {
      uVar12 = ::GetTypeHash(local_2e8.ComparisonIndex.Value);
      if (local_118._96_4_ != local_118._140_4_) {
        puVar14 = (undefined1 *)
                  ((longlong)&((FManagedArrayCollection *)local_118)->GroupInfo + 0x38);
        if ((undefined1 *)local_118._152_8_ != (undefined1 *)0x0) {
          puVar14 = (undefined1 *)local_118._152_8_;
        }
        for (iVar13 = *(int *)(puVar14 + (ulonglong)(local_78 - 1U & FVar21.Number + uVar12) * 4);
            iVar13 != -1; iVar13 = *(int *)(local_118._88_8_ + 0xc + (longlong)iVar13 * 0x14)) {
          if (*(FName *)(local_118._88_8_ + (longlong)iVar13 * 0x14) == FVar21) {
            bVar11 = FManagedArrayCollection::HasAttribute
                               ((FManagedArrayCollection *)local_118,local_2e0,local_2e8);
            if (bVar11) {
              FManagedArrayCollection::GetAttributeType
                        ((FManagedArrayCollection *)local_118,local_2e0,local_2e8);
              FVar21 = ::`anonymous_namespace'::GetArrayTypeString((EManagedArrayType)local_1c8);
              ::FName::ToString((FName *)FVar21,&local_2d8);
              pFVar16 = ::FString::FString(&local_1c0,"Bool");
              iVar13 = (pFVar16->Data).ArrayNum;
              if (local_2d8.Data.ArrayNum == iVar13) {
                if (local_2d8.Data.ArrayNum < 2) {
                  bVar11 = true;
                }
                else {
                  iVar13 = FGenericPlatformStricmp::Stricmp
                                     ((wchar_t *)local_2d8.Data.AllocatorInstance.Data,
                                      (wchar_t *)(pFVar16->Data).AllocatorInstance.Data);
                  bVar11 = iVar13 == 0;
                }
              }
              else {
                bVar11 = iVar13 + local_2d8.Data.ArrayNum == 1;
              }
              if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
              }
              if (bVar11) {
                SetAttributeData<bool>
                          ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)local_118,
                           &this->BoolAttributeData,local_2e0,local_2e8);
              }
              else {
                pFVar16 = ::FString::FString(&local_1b0,"Float");
                iVar13 = (pFVar16->Data).ArrayNum;
                if (local_2d8.Data.ArrayNum == iVar13) {
                  if (local_2d8.Data.ArrayNum < 2) {
                    bVar11 = true;
                  }
                  else {
                    iVar13 = FGenericPlatformStricmp::Stricmp
                                       ((wchar_t *)local_2d8.Data.AllocatorInstance.Data,
                                        (wchar_t *)(pFVar16->Data).AllocatorInstance.Data);
                    bVar11 = iVar13 == 0;
                  }
                }
                else {
                  bVar11 = iVar13 + local_2d8.Data.ArrayNum == 1;
                }
                if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
                }
                FVar10 = local_2e0;
                FVar21 = local_2e8;
                uVar12 = 0;
                if (bVar11) {
                  local_248.Index = -1;
                  local_248.ContainerReference = (void *)0x0;
                  local_248.Reference = &this->FloatAttributeData;
                  pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_248);
                  if (pFVar18->Connection != (FDataflowOutput *)0x0) {
                    pTVar22 = FDataflowNode::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
                                        ((FDataflowNode *)this,param_1,&this->FloatAttributeData);
                    local_290 = FVar10;
                    local_288 = FVar21;
                    pTVar23 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                                      *)&((FManagedArrayCollection *)local_118)->Map,
                                     (TTuple<FName,FName> *)&local_290);
                    pFVar33 = (FValueType *)&pTVar23->field_0x10;
                    if (pTVar23 ==
                        (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
                      pFVar33 = pFVar32;
                    }
                    if ((pFVar33 != (FValueType *)0x0) && (pFVar33->ArrayType == FFloatType)) {
                      FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar33);
                      pFVar5 = pFVar33->ManagedArray;
                      if ((pFVar5 == (FManagedArrayBase *)0x0) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("TypedManagedArray != nullptr",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                              ,0x319,L""), bVar11)) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      pFVar5->bIsDirty = true;
                      pTVar24 = FManagedArrayCollection::ModifyAttribute<float>
                                          ((FManagedArrayCollection *)local_118,FVar10,FVar21);
                      iVar13 = (**(code **)(*(longlong *)pTVar24 + 0x60))(pTVar24);
                      if ((pTVar22->ArrayNum == iVar13) &&
                         (iVar13 = (**(code **)(*(longlong *)pTVar24 + 0x60))(pTVar24),
                         pFVar33 = pFVar32, 0 < iVar13)) {
                        do {
                          uVar30 = (uint)pFVar32;
                          uVar31 = uVar12;
                          if ((int)uVar30 < pTVar22->ArrayNum) {
                            uVar31 = ~uVar30 >> 0x1f;
                          }
                          if ((uVar31 == 0) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar11)) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          uVar1 = *(undefined4 *)
                                   (&pFVar33->ArrayType +
                                   (longlong)(pTVar22->AllocatorInstance).Data);
                          uVar31 = uVar12;
                          if ((int)uVar30 < *(int *)&pTVar24->field_0x18) {
                            uVar31 = ~uVar30 >> 0x1f;
                          }
                          if ((uVar31 == 0) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar11)) {
                            pcVar7 = (code *)swi(3);
                            (*pcVar7)();
                            return;
                          }
                          pFVar32 = (FValueType *)(ulonglong)(uVar30 + 1);
                          *(undefined4 *)(&pFVar33->ArrayType + *(longlong *)&pTVar24->field_0x10) =
                               uVar1;
                          iVar13 = (**(code **)(*(longlong *)pTVar24 + 0x60))(pTVar24);
                          pFVar33 = (FValueType *)&pFVar33->GroupIndexDependency;
                          param_1 = local_2c8;
                        } while ((int)(uVar30 + 1) < iVar13);
                      }
                    }
                  }
                }
                else {
                  pFVar16 = ::FString::FString(&local_1a0,"Double");
                  iVar13 = (pFVar16->Data).ArrayNum;
                  if (local_2d8.Data.ArrayNum == iVar13) {
                    if (local_2d8.Data.ArrayNum < 2) {
                      bVar11 = true;
                    }
                    else {
                      iVar13 = FGenericPlatformStricmp::Stricmp
                                         ((wchar_t *)local_2d8.Data.AllocatorInstance.Data,
                                          (wchar_t *)(pFVar16->Data).AllocatorInstance.Data);
                      bVar11 = iVar13 == 0;
                    }
                  }
                  else {
                    bVar11 = iVar13 + local_2d8.Data.ArrayNum == 1;
                  }
                  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
                  }
                  if (bVar11) {
                    SetAttributeData<double>
                              ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)local_118,
                               &this->DoubleAttributeData,local_2e0,local_2e8);
                  }
                  else {
                    pFVar16 = ::FString::FString(&local_190,"Int32");
                    iVar13 = (pFVar16->Data).ArrayNum;
                    if (local_2d8.Data.ArrayNum == iVar13) {
                      if (local_2d8.Data.ArrayNum < 2) {
                        bVar11 = true;
                      }
                      else {
                        iVar13 = FGenericPlatformStricmp::Stricmp
                                           ((wchar_t *)local_2d8.Data.AllocatorInstance.Data,
                                            (wchar_t *)(pFVar16->Data).AllocatorInstance.Data);
                        bVar11 = iVar13 == 0;
                      }
                    }
                    else {
                      bVar11 = iVar13 + local_2d8.Data.ArrayNum == 1;
                    }
                    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_190.Data.AllocatorInstance.Data);
                    }
                    if (bVar11) {
                      SetAttributeData<int>
                                ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)local_118,
                                 &this->Int32AttributeData,local_2e0,local_2e8);
                    }
                    else {
                      pFVar16 = ::FString::FString(&local_180,"String");
                      iVar13 = (pFVar16->Data).ArrayNum;
                      if (local_2d8.Data.ArrayNum == iVar13) {
                        if (local_2d8.Data.ArrayNum < 2) {
                          bVar11 = true;
                        }
                        else {
                          iVar13 = FGenericPlatformStricmp::Stricmp
                                             ((wchar_t *)local_2d8.Data.AllocatorInstance.Data,
                                              (wchar_t *)(pFVar16->Data).AllocatorInstance.Data);
                          bVar11 = iVar13 == 0;
                        }
                      }
                      else {
                        bVar11 = iVar13 + local_2d8.Data.ArrayNum == 1;
                      }
                      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_180.Data.AllocatorInstance.Data);
                      }
                      if (bVar11) {
                        SetAttributeData<FString>
                                  ((FDataflowNode *)this,param_1,
                                   (FManagedArrayCollection *)local_118,&this->StringAttributeData,
                                   local_2e0,local_2e8);
                      }
                      else {
                        pFVar16 = ::FString::FString(&local_170,"Vector");
                        iVar13 = (pFVar16->Data).ArrayNum;
                        if (local_2d8.Data.ArrayNum == iVar13) {
                          if (local_2d8.Data.ArrayNum < 2) {
                            bVar11 = true;
                          }
                          else {
                            iVar13 = FGenericPlatformStricmp::Stricmp
                                               ((wchar_t *)local_2d8.Data.AllocatorInstance.Data,
                                                (wchar_t *)(pFVar16->Data).AllocatorInstance.Data);
                            bVar11 = iVar13 == 0;
                          }
                        }
                        else {
                          bVar11 = iVar13 + local_2d8.Data.ArrayNum == 1;
                        }
                        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_170.Data.AllocatorInstance.Data);
                        }
                        FVar10 = local_2e0;
                        FVar21 = local_2e8;
                        if (bVar11) {
                          local_230.Index = -1;
                          local_230.ContainerReference = (void *)0x0;
                          local_230.Reference = &this->Vector3fAttributeData;
                          pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_230);
                          if (pFVar18->Connection != (FDataflowOutput *)0x0) {
                            pTVar25 = FDataflowNode::
                                      GetValue<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                                                ((FDataflowNode *)this,param_1,
                                                 &this->Vector3fAttributeData);
                            local_280 = FVar10;
                            local_278 = FVar21;
                            pTVar23 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                                      ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                                              *)&((FManagedArrayCollection *)local_118)->Map,
                                             (TTuple<FName,FName> *)&local_280);
                            pFVar33 = (FValueType *)&pTVar23->field_0x10;
                            if (pTVar23 ==
                                (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)
                                0x0) {
                              pFVar33 = pFVar32;
                            }
                            if ((pFVar33 != (FValueType *)0x0) &&
                               (pFVar33->ArrayType == FVectorType)) {
                              FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar33);
                              pFVar5 = pFVar33->ManagedArray;
                              if ((pFVar5 == (FManagedArrayBase *)0x0) &&
                                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("TypedManagedArray != nullptr",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                                  ,0x319,L""), bVar11)) {
                                pcVar7 = (code *)swi(3);
                                (*pcVar7)();
                                return;
                              }
                              pFVar5->bIsDirty = true;
                              pTVar26 = FManagedArrayCollection::
                                        ModifyAttribute<UE::Math::TVector<float>_>
                                                  ((FManagedArrayCollection *)local_118,FVar10,
                                                   FVar21);
                              iVar13 = (**(code **)(*(longlong *)pTVar26 + 0x60))(pTVar26);
                              param_1 = local_2c8;
                              if ((pTVar25->ArrayNum == iVar13) &&
                                 (iVar13 = (**(code **)(*(longlong *)pTVar26 + 0x60))(pTVar26),
                                 pFVar33 = pFVar32, param_1 = local_2c8, 0 < iVar13)) {
                                do {
                                  uVar31 = (uint)pFVar32;
                                  uVar12 = 0;
                                  if ((int)uVar31 < pTVar25->ArrayNum) {
                                    uVar12 = ~uVar31 >> 0x1f;
                                  }
                                  if ((uVar12 == 0) &&
                                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar11)) {
                                    pcVar7 = (code *)swi(3);
                                    (*pcVar7)();
                                    return;
                                  }
                                  pFVar4 = (pTVar25->AllocatorInstance).Data;
                                  uVar2 = *(undefined8 *)(&pFVar33->ArrayType + (longlong)pFVar4);
                                  uVar1 = *(undefined4 *)
                                           (pFVar4 + 4 +
                                           (longlong)
                                           &(pFVar33->GroupIndexDependency).ComparisonIndex);
                                  uVar12 = 0;
                                  if ((int)uVar31 < *(int *)&pTVar26->field_0x18) {
                                    uVar12 = ~uVar31 >> 0x1f;
                                  }
                                  if ((uVar12 == 0) &&
                                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar11)) {
                                    pcVar7 = (code *)swi(3);
                                    (*pcVar7)();
                                    return;
                                  }
                                  lVar6 = *(longlong *)&pTVar26->field_0x10;
                                  pFVar32 = (FValueType *)(ulonglong)(uVar31 + 1);
                                  *(undefined8 *)(&pFVar33->ArrayType + lVar6) = uVar2;
                                  *(undefined4 *)
                                   ((longlong)&(pFVar33->GroupIndexDependency).Number + lVar6) =
                                       uVar1;
                                  iVar13 = (**(code **)(*(longlong *)pTVar26 + 0x60))(pTVar26);
                                  pFVar33 = (FValueType *)&pFVar33->bPersistent;
                                  param_1 = local_2c8;
                                } while ((int)(uVar31 + 1) < iVar13);
                              }
                            }
                          }
                        }
                        else {
                          pFVar16 = ::FString::FString(&local_160,"Vector3d");
                          iVar13 = (pFVar16->Data).ArrayNum;
                          if (local_2d8.Data.ArrayNum == iVar13) {
                            if (local_2d8.Data.ArrayNum < 2) {
                              bVar11 = true;
                            }
                            else {
                              iVar13 = FGenericPlatformStricmp::Stricmp
                                                 ((wchar_t *)local_2d8.Data.AllocatorInstance.Data,
                                                  (wchar_t *)(pFVar16->Data).AllocatorInstance.Data)
                              ;
                              bVar11 = iVar13 == 0;
                            }
                          }
                          else {
                            bVar11 = iVar13 + local_2d8.Data.ArrayNum == 1;
                          }
                          if (local_160.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_160.Data.AllocatorInstance.Data);
                          }
                          FVar10 = local_2e0;
                          FVar21 = local_2e8;
                          if (bVar11) {
                            local_218.Index = -1;
                            local_218.ContainerReference = (void *)0x0;
                            local_218.Reference = &this->Vector3dAttributeData;
                            pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_218);
                            if (pFVar18->Connection != (FDataflowOutput *)0x0) {
                              pTVar27 = FDataflowNode::
                                        GetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                                                  ((FDataflowNode *)this,param_1,
                                                   &this->Vector3dAttributeData);
                              local_270 = FVar10;
                              local_268 = FVar21;
                              pTVar23 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                                        ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                                                *)&((FManagedArrayCollection *)local_118)->Map,
                                               (TTuple<FName,FName> *)&local_270);
                              pFVar33 = (FValueType *)&pTVar23->field_0x10;
                              if (pTVar23 ==
                                  (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *
                                  )0x0) {
                                pFVar33 = pFVar32;
                              }
                              if ((pFVar33 != (FValueType *)0x0) &&
                                 (pFVar33->ArrayType == FVector3dType)) {
                                FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar33);
                                pFVar5 = pFVar33->ManagedArray;
                                if ((pFVar5 == (FManagedArrayBase *)0x0) &&
                                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("TypedManagedArray != nullptr",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                                  ,0x319,L""), bVar11)) {
                                  pcVar7 = (code *)swi(3);
                                  (*pcVar7)();
                                  return;
                                }
                                pFVar5->bIsDirty = true;
                                pTVar28 = FManagedArrayCollection::
                                          ModifyAttribute<UE::Math::TVector<double>_>
                                                    ((FManagedArrayCollection *)local_118,FVar10,
                                                     FVar21);
                                iVar13 = (**(code **)(*(longlong *)pTVar28 + 0x60))(pTVar28);
                                param_1 = local_2c8;
                                if ((pTVar27->ArrayNum == iVar13) &&
                                   (iVar13 = (**(code **)(*(longlong *)pTVar28 + 0x60))(pTVar28),
                                   pFVar33 = pFVar32, param_1 = local_2c8, 0 < iVar13)) {
                                  do {
                                    uVar30 = (uint)pFVar32;
                                    uVar31 = uVar12;
                                    if ((int)uVar30 < pTVar27->ArrayNum) {
                                      uVar31 = ~uVar30 >> 0x1f;
                                    }
                                    if ((uVar31 == 0) &&
                                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                           ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar11)) {
                                      pcVar7 = (code *)swi(3);
                                      (*pcVar7)();
                                      return;
                                    }
                                    pFVar4 = (pTVar27->AllocatorInstance).Data;
                                    uVar8 = *(undefined8 *)(&pFVar33->ArrayType + (longlong)pFVar4);
                                    uVar9 = *(undefined8 *)
                                             (&pFVar33->ArrayType + (longlong)pFVar4 + 8);
                                    uVar2 = *(undefined8 *)
                                             (pFVar4 + (longlong)
                                                       &(pFVar33->SharedManagedArray).Object);
                                    uVar31 = uVar12;
                                    if ((int)uVar30 < *(int *)&pTVar28->field_0x18) {
                                      uVar31 = ~uVar30 >> 0x1f;
                                    }
                                    if ((uVar31 == 0) &&
                                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                           ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar11)) {
                                      pcVar7 = (code *)swi(3);
                                      (*pcVar7)();
                                      return;
                                    }
                                    lVar6 = *(longlong *)&pTVar28->field_0x10;
                                    pFVar32 = (FValueType *)(ulonglong)(uVar30 + 1);
                                    *(undefined8 *)(&pFVar33->ArrayType + lVar6) = uVar8;
                                    *(undefined8 *)(&pFVar33->ArrayType + lVar6 + 8) = uVar9;
                                    *(undefined8 *)
                                     ((longlong)&(pFVar33->SharedManagedArray).Object + lVar6) =
                                         uVar2;
                                    iVar13 = (**(code **)(*(longlong *)pTVar28 + 0x60))(pTVar28);
                                    pFVar33 = (FValueType *)
                                              &(pFVar33->SharedManagedArray).SharedReferenceCount;
                                    param_1 = local_2c8;
                                  } while ((int)(uVar30 + 1) < iVar13);
                                }
                              }
                            }
                          }
                          else {
                            pFVar16 = ::FString::FString(&local_150,"LinearColor");
                            iVar13 = (pFVar16->Data).ArrayNum;
                            if (local_2d8.Data.ArrayNum == iVar13) {
                              if (local_2d8.Data.ArrayNum < 2) {
                                bVar11 = true;
                              }
                              else {
                                iVar13 = FGenericPlatformStricmp::Stricmp
                                                   ((wchar_t *)local_2d8.Data.AllocatorInstance.Data
                                                    ,(wchar_t *)
                                                     (pFVar16->Data).AllocatorInstance.Data);
                                bVar11 = iVar13 == 0;
                              }
                            }
                            else {
                              bVar11 = iVar13 + local_2d8.Data.ArrayNum == 1;
                            }
                            if (local_150.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_150.Data.AllocatorInstance.Data);
                            }
                            if (bVar11) {
                              SetAttributeData<FLinearColor>
                                        ((FDataflowNode *)this,param_1,
                                         (FManagedArrayCollection *)local_118,
                                         &this->LinearColorAttributeData,local_2e0,local_2e8);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
              }
            }
            break;
          }
        }
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)local_118,&this->Collection)
    ;
    if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    }
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
    if (local_200.Group.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Group.Data.AllocatorInstance.Data);
    }
    if (local_200.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Attribute.Data.AllocatorInstance.Data);
    }
    FManagedArrayCollection::~FManagedArrayCollection((FManagedArrayCollection *)local_118);
  }
  return;
}

// FSetCollectionAttributeDataTypedDataflowNode @ 14e92b1f0

FSetCollectionAttributeDataTypedDataflowNode * __thiscall
FSetCollectionAttributeDataTypedDataflowNode::FSetCollectionAttributeDataTypedDataflowNode
          (FSetCollectionAttributeDataTypedDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FName this_00;
  FDataflowOutput *this_01;
  FName local_res8;
  FName local_res18 [2];
  FConnectionReference local_78;
  FConnectionReference local_58;
  
  local_78.Reference = *(void **)param_2;
  local_78.Index = param_2->C;
  local_78._12_4_ = param_2->D;
  local_res8 = (FName)this;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_78);
  this->_padding_ = (longlong)&___7FSetCollectionAttributeDataTypedDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  ::FString::FString(&(this->AttributeKey).Attribute,"");
  ::FString::FString(&(this->AttributeKey).Group,"");
  this->GroupName = Dataflow_EStandardGroupNameEnum_Transform;
  ::FString::FString(&this->CustomGroupName,"");
  ::FString::FString(&this->AttrName,"");
  local_78.Index = -1;
  (this->BoolAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoolAttributeData).ArrayNum = 0;
  (this->BoolAttributeData).ArrayMax = 0;
  (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x3a0))
  ->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)local_res8 + 0x3a8) = 0;
  (((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x3b0))->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)local_res8 + 0x3b8) = 0;
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  (this->FloatAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatAttributeData).ArrayNum = 0;
  (this->FloatAttributeData).ArrayMax = 0;
  (this->Vector3fAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector3fAttributeData).ArrayNum = 0;
  (this->Vector3fAttributeData).ArrayMax = 0;
  (this->DoubleAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DoubleAttributeData).ArrayNum = 0;
  (this->DoubleAttributeData).ArrayMax = 0;
  (this->Int32AttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Int32AttributeData).ArrayNum = 0;
  (this->Int32AttributeData).ArrayMax = 0;
  (this->StringAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringAttributeData).ArrayNum = 0;
  (this->StringAttributeData).ArrayMax = 0;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->AttributeKey;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->BoolAttributeData;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->FloatAttributeData;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->DoubleAttributeData;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->Int32AttributeData;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->StringAttributeData;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->Vector3fAttributeData;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Reference = (void *)((longlong)this_00 + 0x3a0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Reference = (void *)((longlong)this_00 + 0x3b0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Reference = (void *)((longlong)this_00 + 0x248);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = local_78.Reference;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_78);
  }
  return (FSetCollectionAttributeDataTypedDataflowNode *)this_00;
}

// FSetCollectionAttributeDataTypedDataflowNode @ 14e92b4f0

FSetCollectionAttributeDataTypedDataflowNode * __thiscall
FSetCollectionAttributeDataTypedDataflowNode::FSetCollectionAttributeDataTypedDataflowNode
          (FSetCollectionAttributeDataTypedDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FSetCollectionAttributeDataTypedDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  ::FString::FString(&(this->AttributeKey).Attribute,"");
  ::FString::FString(&(this->AttributeKey).Group,"");
  this->GroupName = Dataflow_EStandardGroupNameEnum_Transform;
  ::FString::FString(&this->CustomGroupName,"");
  ::FString::FString(&this->AttrName,"");
  (this->BoolAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoolAttributeData).ArrayNum = 0;
  (this->BoolAttributeData).ArrayMax = 0;
  (this->FloatAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatAttributeData).ArrayNum = 0;
  (this->FloatAttributeData).ArrayMax = 0;
  (this->DoubleAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DoubleAttributeData).ArrayNum = 0;
  (this->DoubleAttributeData).ArrayMax = 0;
  (this->Int32AttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Int32AttributeData).ArrayNum = 0;
  (this->Int32AttributeData).ArrayMax = 0;
  (this->StringAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringAttributeData).ArrayNum = 0;
  (this->StringAttributeData).ArrayMax = 0;
  (this->Vector3fAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector3fAttributeData).ArrayNum = 0;
  (this->Vector3fAttributeData).ArrayMax = 0;
  (this->Vector3dAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector3dAttributeData).ArrayNum = 0;
  (this->Vector3dAttributeData).ArrayMax = 0;
  (this->LinearColorAttributeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinearColorAttributeData).ArrayNum = 0;
  (this->LinearColorAttributeData).ArrayMax = 0;
  return this;
}

// ~FSetCollectionAttributeDataTypedDataflowNode @ 14e933aa0

void __thiscall
FSetCollectionAttributeDataTypedDataflowNode::~FSetCollectionAttributeDataTypedDataflowNode
          (FSetCollectionAttributeDataTypedDataflowNode *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->LinearColorAttributeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vector3dAttributeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vector3fAttributeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->StringAttributeData).AllocatorInstance.Data,
             (this->StringAttributeData).ArrayNum);
  pFVar1 = (this->StringAttributeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Int32AttributeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DoubleAttributeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FloatAttributeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoolAttributeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttrName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomGroupName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttributeKey).Group.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AttributeKey).Attribute.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}


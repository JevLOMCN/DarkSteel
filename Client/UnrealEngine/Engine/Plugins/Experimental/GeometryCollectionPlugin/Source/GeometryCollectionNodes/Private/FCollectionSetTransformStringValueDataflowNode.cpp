// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e87d190

UScriptStruct * __cdecl FCollectionSetTransformStringValueDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSetTransformStringValueDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSetTransformStringValueDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSetTransformStringValueDataflowNode,
                           (UObject *)pUVar1,L"CollectionSetTransformStringValueDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionSetTransformStringValueDataflowNode.
         OuterSingleton;
}

// GetType @ 14e87d1d0

FName __thiscall
FCollectionSetTransformStringValueDataflowNode::GetType
          (FCollectionSetTransformStringValueDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionSetTransformStringValueDataflowNode");
  return in_RDX;
}

// IsA @ 14e87d200

bool __thiscall
FCollectionSetTransformStringValueDataflowNode::IsA
          (FCollectionSetTransformStringValueDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionSetTransformStringValueDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e87d268;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e87d268:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e87d286;
      }
    }
  }
  bVar5 = true;
LAB_14e87d286:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e87d2c0

FStructOnScope * __thiscall
FCollectionSetTransformStringValueDataflowNode::NewStructOnScope
          (FCollectionSetTransformStringValueDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionSetTransformStringValueDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionSetTransformStringValueDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSetTransformStringValueDataflowNode,
                           (UObject *)pUVar2,L"CollectionSetTransformStringValueDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionSetTransformStringValueDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e87d390

void __thiscall
FCollectionSetTransformStringValueDataflowNode::SerializeInternal
          (FCollectionSetTransformStringValueDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSetTransformStringValueDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSetTransformStringValueDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSetTransformStringValueDataflowNode,
                           (UObject *)pUVar1,L"CollectionSetTransformStringValueDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionSetTransformStringValueDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionSetTransformStringValueDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e87d40d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e87d420

FName __thiscall
FCollectionSetTransformStringValueDataflowNode::GetDisplayName
          (FCollectionSetTransformStringValueDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionSetTransformString");
  return in_RDX;
}

// GetCategory @ 14e87d450

FName __thiscall
FCollectionSetTransformStringValueDataflowNode::GetCategory
          (FCollectionSetTransformStringValueDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Transform");
  return in_RDX;
}

// GetTags @ 14e87d480

FString * __thiscall
FCollectionSetTransformStringValueDataflowNode::GetTags
          (FCollectionSetTransformStringValueDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Bone Name Attribute");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e87d4b0

UScriptStruct * __thiscall
FCollectionSetTransformStringValueDataflowNode::TypedScriptStruct
          (FCollectionSetTransformStringValueDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSetTransformStringValueDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSetTransformStringValueDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSetTransformStringValueDataflowNode,
                           (UObject *)pUVar1,L"CollectionSetTransformStringValueDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionSetTransformStringValueDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e87d650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionSetTransformStringValueDataflowNode::Evaluate
          (FCollectionSetTransformStringValueDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  uint *puVar1;
  FScriptContainerElement *_Src;
  FManagedArrayBase *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  FManagedArrayCollection *pFVar8;
  FDataflowInput *pFVar9;
  FString *pFVar10;
  FDataflowTransformSelection *pFVar11;
  FString *this_00;
  FName *pFVar12;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar15;
  int iVar16;
  void *_Src_00;
  ForAnyElementType FVar17;
  uint uVar18;
  longlong lVar19;
  FValueType *pFVar20;
  FValueType *pFVar21;
  EManagedArrayType *pEVar22;
  uint uVar23;
  FValueType *pFVar24;
  FValueType *pFVar25;
  undefined1 auStackY_298 [32];
  FString local_258;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_248;
  FString local_238;
  TArray<int,TSizedDefaultAllocator<32>_> local_228;
  longlong local_218;
  FCollectionSetTransformStringValueDataflowNode *local_210;
  FContext *local_208;
  FString local_200;
  FConnectionReference local_1f0;
  FConnectionReference local_1d8;
  FName local_1c0;
  FName local_1b8;
  FConnectionReference local_1b0;
  FName local_198;
  FString local_190;
  FStringFormatArg local_178;
  FStringFormatArg local_158;
  FString local_138;
  FDataflowSelection local_128;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_210 = this;
  local_208 = param_1;
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar7 == &this->Collection) {
    pFVar8 = FDataflowNode::GetValue<FManagedArrayCollection>
                       ((FDataflowNode *)this,param_1,&this->Collection);
    FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar8);
    local_1f0.Reference = &this->TextToSet;
    local_1f0.Index = -1;
    pFVar21 = (FValueType *)0x0;
    local_1f0.ContainerReference = (void *)0x0;
    pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1f0);
    pFVar10 = FDataflowInput::GetValue<FString>(pFVar9,param_1,local_1f0.Reference);
    local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_238.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    lVar19 = (longlong)local_238.Data.ArrayNum;
    _Src = (pFVar10->Data).AllocatorInstance.Data;
    if (local_238.Data.ArrayNum == 0) {
      local_238.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_238.Data.ArrayNum,0,(ForAnyElementType *)&local_238,
                 local_238.Data.ArrayNum,&local_238.Data.ArrayMax);
      memcpy(local_238.Data.AllocatorInstance.Data,_Src,lVar19 * 2);
    }
    local_1d8.Reference = &this->Attribute;
    local_1d8.Index = -1;
    local_1d8.ContainerReference = (void *)0x0;
    pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1d8);
    pFVar10 = FDataflowInput::GetValue<FString>(pFVar9,param_1,local_1d8.Reference);
    pFVar11 = FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,&this->TransformSelection);
    local_128.GroupName.ComparisonIndex.Value = *(uint *)&pFVar11->field_0x0;
    local_128.GroupName.Number = *(uint *)&pFVar11->field_0x4;
    local_128.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_128.SelectionArray.MaxBits = 0;
    local_128.SelectionArray.NumBits = 0;
    uVar14 = *(int *)&pFVar11->field_0x20 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar14) {
      local_128.SelectionArray.MaxBits = 0x80;
      if (0x80 < (int)uVar14) {
        local_128.SelectionArray.MaxBits = uVar14;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_128.SelectionArray,0);
    }
    local_128.SelectionArray.NumBits = *(int *)&pFVar11->field_0x20;
    if (local_128.SelectionArray.NumBits != 0) {
      _Src_00 = *(void **)&pFVar11->field_0x18;
      if (*(void **)&pFVar11->field_0x18 == (void *)0x0) {
        _Src_00 = &pFVar11->field_0x8;
      }
      FVar15 = (ForElementType<unsigned_int>)&local_128.SelectionArray;
      if (local_128.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_128.SelectionArray.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar15,_Src_00,(ulonglong)(local_128.SelectionArray.NumBits + 0x1fU >> 5) << 2)
      ;
    }
    local_1b0.Index = -1;
    local_1b0.ContainerReference = (void *)0x0;
    local_1b0.Reference = &this->TransformSelection;
    pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1b0);
    if (pFVar9->Connection == (FDataflowOutput *)0x0) {
      local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_228.ArrayNum = 0;
      local_228.ArrayMax = 0;
      FDataflowSelection::InitFromArray(&local_128,&local_f8,&local_228);
      if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.AllocatorInstance.Data);
      }
      FVar15 = (ForElementType<unsigned_int>)&local_128.SelectionArray;
      if (local_128.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_128.SelectionArray.AllocatorInstance.SecondaryData;
      }
      iVar6 = (int)(local_128.SelectionArray.NumBits + 0x1fU +
                   ((int)(local_128.SelectionArray.NumBits + 0x1fU) >> 0x1f & 0x1fU)) >> 5;
      uVar14 = local_128.SelectionArray.NumBits & 0x8000001f;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffffe0) + 1;
      }
      uVar18 = 0xffffffff >> ((byte)(0x20 - uVar14) & 0x1f);
      if (0x1f < (int)(0x20 - uVar14)) {
        uVar18 = 0xffffffff;
      }
      uVar14 = 0xffffffff;
      if (iVar6 == 1) {
        uVar14 = uVar18;
      }
      pFVar20 = pFVar21;
      if (0 < iVar6) {
        do {
          puVar1 = (uint *)((longlong)FVar15 + (longlong)pFVar20 * 4);
          uVar23 = *(uint *)((longlong)FVar15 + (longlong)pFVar20 * 4) & uVar14;
          if (uVar14 == 0xffffffff) {
            uVar23 = *puVar1;
          }
          uVar14 = ~uVar23;
          if ((uint)pFVar20 == iVar6 - 1U) {
            uVar14 = ~uVar23 & uVar18;
          }
          uVar23 = (uint)pFVar20 + 1;
          *puVar1 = uVar14;
          uVar14 = 0xffffffff;
          if (uVar23 == iVar6 - 1U) {
            uVar14 = uVar18;
          }
          pFVar20 = (FValueType *)(ulonglong)uVar23;
        } while ((int)uVar23 < iVar6);
      }
    }
    uVar14 = 1;
    this_00 = ::FString::Replace(&local_238,&local_190,L"{Current}",L"{0}",IgnoreCase);
    ::FString::Replace(this_00,&local_200,L"{Index}",L"{1}",IgnoreCase);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    FVar4 = FTransformCollection::TransformGroup;
    iVar6 = (pFVar10->Data).ArrayNum;
    iVar16 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar16 = 0;
    }
    pFVar12 = ::FName::FName(&local_198,iVar16,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                             FNAME_Add);
    local_1b8 = FVar4;
    local_1c0 = *pFVar12;
    pTVar13 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&local_f8.Map,(TTuple<FName,FName> *)&local_1c0);
    pFVar20 = (FValueType *)&pTVar13->field_0x10;
    if (pTVar13 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pFVar20 = pFVar21;
    }
    if ((pFVar20 != (FValueType *)0x0) && (pFVar20->ArrayType == FStringType)) {
      FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar20);
      pFVar2 = pFVar20->ManagedArray;
      if ((pFVar2 == (FManagedArrayBase *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedManagedArray != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x319,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2->bIsDirty = true;
      if (pFVar2 != (FManagedArrayBase *)0x0) {
        iVar6 = (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2);
        local_218 = (longlong)iVar6;
        pFVar20 = pFVar21;
        pFVar24 = pFVar21;
        pFVar25 = pFVar21;
        if (0 < local_218) {
          do {
            uVar18 = (uint)pFVar21;
            if ((((int)uVar18 < 0) || (local_128.SelectionArray.NumBits <= (int)uVar18)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar15 = (ForElementType<unsigned_int>)&local_128.SelectionArray;
            if (local_128.SelectionArray.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar15 = local_128.SelectionArray.AllocatorInstance.SecondaryData;
            }
            uVar23 = uVar18;
            if ((int)uVar18 < 0) {
              uVar23 = uVar18 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar15 + (longlong)((int)uVar23 >> 5) * 4) & uVar14) != 0) {
              uVar23 = 0;
              if ((int)uVar18 < *(int *)&pFVar2[1].bIsDirty) {
                uVar23 = ~uVar18 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar10 = ::FString::FString(&local_138,
                                           (FString *)(&pFVar20->ArrayType + pFVar2[1]._padding_));
              FStringFormatArg::FStringFormatArg(&local_178,pFVar10);
              FStringFormatArg::FStringFormatArg(&local_158,(int)pFVar24);
              local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_248.ArrayNum = 2;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,2,0,&local_248.AllocatorInstance,2,&local_248.ArrayMax);
              ConstructItems<FStringFormatArg,FStringFormatArg,int>
                        (local_248.AllocatorInstance.Data,&local_178,2);
              FVar17.Data = (FScriptContainerElement *)L"";
              if (local_200.Data.ArrayNum != 0) {
                FVar17.Data = local_200.Data.AllocatorInstance.Data;
              }
              ::FString::FormatImpl(&local_258,(wchar_t *)FVar17.Data,&local_248);
              uVar23 = 0;
              if ((int)uVar18 < *(int *)&pFVar2[1].bIsDirty) {
                uVar23 = ~uVar18 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pEVar22 = &pFVar20->ArrayType + pFVar2[1]._padding_;
              if ((FString *)pEVar22 != &local_258) {
                if (*(void **)pEVar22 != (void *)0x0) {
                  FMemory::Free(*(void **)pEVar22);
                }
                *(FScriptContainerElement **)pEVar22 = local_258.Data.AllocatorInstance.Data;
                local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                *(int *)(pEVar22 + 8) = local_258.Data.ArrayNum;
                *(int *)(pEVar22 + 0xc) = local_258.Data.ArrayMax;
                local_258.Data.ArrayNum = 0;
                local_258.Data.ArrayMax = 0;
              }
              if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_258.Data.AllocatorInstance.Data);
              }
              DestructItems<FStringFormatArg,int>
                        ((FStringFormatArg *)local_248.AllocatorInstance.Data,local_248.ArrayNum);
              if ((FStringFormatArg *)local_248.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
                FMemory::Free(local_248.AllocatorInstance.Data);
              }
              if (local_158.StringValue.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.StringValue.Data.AllocatorInstance.Data);
              }
              if (local_178.StringValue.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.StringValue.Data.AllocatorInstance.Data);
              }
              pFVar24 = (FValueType *)(ulonglong)((int)pFVar24 + 1);
            }
            pFVar21 = (FValueType *)(ulonglong)(uVar18 + 1);
            uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
            pFVar25 = (FValueType *)&pFVar25->field_0x1;
            pFVar20 = (FValueType *)&pFVar20->SharedManagedArray;
            this = local_210;
          } while ((longlong)pFVar25 < local_218);
        }
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,local_208,&local_f8,&this->Collection);
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    if (local_128.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_128.SelectionArray.AllocatorInstance.SecondaryData);
    }
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  }
  return;
}

// FCollectionSetTransformStringValueDataflowNode @ 14e9163d0

FCollectionSetTransformStringValueDataflowNode * __thiscall
FCollectionSetTransformStringValueDataflowNode::FCollectionSetTransformStringValueDataflowNode
          (FCollectionSetTransformStringValueDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  byte *pbVar1;
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar2;
  uint uVar3;
  FDataflowInput *pFVar4;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FCollectionSetTransformStringValueDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar2 = &this->TransformSelection;
  uVar3 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar2->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar2->field_0x4 = uVar3;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  ::FString::FString(&this->Attribute,"BoneName");
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->TextToSet).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextToSet).Data.ArrayNum = 0;
  (this->TextToSet).Data.ArrayMax = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->TextToSet;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Attribute;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_68);
  }
  return this;
}

// FCollectionSetTransformStringValueDataflowNode @ 14e916560

FCollectionSetTransformStringValueDataflowNode * __thiscall
FCollectionSetTransformStringValueDataflowNode::FCollectionSetTransformStringValueDataflowNode
          (FCollectionSetTransformStringValueDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCollectionSetTransformStringValueDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  ::FString::FString(&this->Attribute,"BoneName");
  (this->TextToSet).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextToSet).Data.ArrayNum = 0;
  (this->TextToSet).Data.ArrayMax = 0;
  return this;
}


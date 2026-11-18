// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e889bc0

UScriptStruct * __cdecl FAppendCollectionAssetsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAppendCollectionAssetsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAppendCollectionAssetsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAppendCollectionAssetsDataflowNode,
                         (UObject *)pUVar1,L"AppendCollectionAssetsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAppendCollectionAssetsDataflowNode.OuterSingleton;
}

// GetType @ 14e889c00

FName __thiscall
FAppendCollectionAssetsDataflowNode::GetType(FAppendCollectionAssetsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FAppendCollectionAssetsDataflowNode");
  return in_RDX;
}

// IsA @ 14e889d50

bool __thiscall
FAppendCollectionAssetsDataflowNode::IsA(FAppendCollectionAssetsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FAppendCollectionAssetsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e889db8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e889db8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e889dd6;
      }
    }
  }
  bVar5 = true;
LAB_14e889dd6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e889e10

FStructOnScope * __thiscall
FAppendCollectionAssetsDataflowNode::NewStructOnScope(FAppendCollectionAssetsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAppendCollectionAssetsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FAppendCollectionAssetsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAppendCollectionAssetsDataflowNode,
                           (UObject *)pUVar2,L"AppendCollectionAssetsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FAppendCollectionAssetsDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e889e90

void __thiscall
FAppendCollectionAssetsDataflowNode::SerializeInternal
          (FAppendCollectionAssetsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAppendCollectionAssetsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAppendCollectionAssetsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAppendCollectionAssetsDataflowNode,
                         (UObject *)pUVar1,L"AppendCollectionAssetsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FAppendCollectionAssetsDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FAppendCollectionAssetsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e889f0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e889f20

FName __thiscall
FAppendCollectionAssetsDataflowNode::GetDisplayName(FAppendCollectionAssetsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"AppendCollections");
  return in_RDX;
}

// GetCategory @ 14e889f50

FName __thiscall
FAppendCollectionAssetsDataflowNode::GetCategory(FAppendCollectionAssetsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection");
  return in_RDX;
}

// GetTags @ 14e88a030

FString * __thiscall
FAppendCollectionAssetsDataflowNode::GetTags
          (FAppendCollectionAssetsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e88a060

UScriptStruct * __thiscall
FAppendCollectionAssetsDataflowNode::TypedScriptStruct(FAppendCollectionAssetsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAppendCollectionAssetsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAppendCollectionAssetsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAppendCollectionAssetsDataflowNode,
                         (UObject *)pUVar1,L"AppendCollectionAssetsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAppendCollectionAssetsDataflowNode.OuterSingleton;
}

// Evaluate @ 14e88a100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAppendCollectionAssetsDataflowNode::Evaluate
          (FAppendCollectionAssetsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int *piVar2;
  ulonglong uVar3;
  FString *pFVar4;
  code *pcVar5;
  FName FVar6;
  FContext *pFVar7;
  FAppendCollectionAssetsDataflowNode *this_00;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  FManagedArrayCollection *pFVar14;
  FName *pFVar15;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar16;
  TManagedArray<FString> *pTVar17;
  FValueType *pFVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  FManagedArrayBase *pFVar23;
  uint uVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  longlong lVar26;
  longlong *plVar27;
  undefined1 auStackY_2a8 [32];
  undefined1 local_268 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_260;
  longlong local_250;
  uint local_248;
  uint local_244;
  TArray<FString,TSizedDefaultAllocator<32>_> local_240;
  longlong local_230;
  int local_228;
  int local_224;
  FManagedArrayBase *local_220;
  FManagedArrayCollection *local_218;
  FContext *local_210;
  FAppendCollectionAssetsDataflowNode *local_208;
  FManagedArrayCollection *local_200;
  longlong *local_1f8;
  uint uStack_1f0;
  uint uStack_1ec;
  TBitArray<FDefaultBitArrayAllocator> *local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  uint local_1d8;
  undefined4 uStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  longlong *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  undefined8 uStack_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128 [4];
  undefined4 local_104;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pFVar14 = &this->Collection1;
  local_218 = pFVar14;
  local_210 = param_1;
  local_208 = this;
  puVar13 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar13 == pFVar14) {
    pFVar14 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,pFVar14);
    FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar14);
    pFVar14 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,&this->Collection2);
    FVar6 = FGeometryCollection::GeometryGroup;
    local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_240.ArrayNum = 0;
    local_240.ArrayMax = 0;
    local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.ArrayNum = 0;
    local_260.ArrayMax = 0;
    local_200 = pFVar14;
    pFVar15 = ::FName::FName(&local_148,"Guid");
    local_190 = FVar6;
    local_198 = *pFVar15;
    pTVar16 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&local_f8.Map,(TTuple<FName,FName> *)&local_198);
    pFVar18 = (FValueType *)&pTVar16->field_0x10;
    if (pTVar16 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pFVar18 = (FValueType *)0x0;
    }
    if ((pFVar18 != (FValueType *)0x0) &&
       (pTVar17 = FManagedArrayCollection::FValueType::ModifyTypedPtr<FString>(pFVar18),
       pTVar17 != (TManagedArray<FString> *)0x0)) {
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                (&local_240,(TArray<FString,TSizedDefaultAllocator<32>_> *)&pTVar17->field_0x10);
    }
    FManagedArrayCollection::Append(&local_f8,pFVar14);
    iVar10 = FManagedArrayCollection::NumElements(pFVar14,FGeometryCollection::GeometryGroup);
    uVar11 = FManagedArrayCollection::NumElements(pFVar14,FTransformCollection::TransformGroup);
    lVar26 = (longlong)(int)uVar11;
    local_244 = uVar11;
    iVar12 = FManagedArrayCollection::NumElements(&local_f8,FTransformCollection::TransformGroup);
    FVar6 = FTransformCollection::TransformGroup;
    lVar22 = (longlong)iVar12;
    pFVar15 = ::FName::FName(&local_140,"TransformToGeometryIndex");
    local_180 = FVar6;
    local_188 = *pFVar15;
    pTVar16 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&local_f8.Map,(TTuple<FName,FName> *)&local_188);
    pFVar18 = (FValueType *)&pTVar16->field_0x10;
    if (pTVar16 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pFVar18 = (FValueType *)0x0;
    }
    if ((pFVar18 != (FValueType *)0x0) && (pFVar18->ArrayType == FInt32Type)) {
      FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar18);
      pFVar23 = pFVar18->ManagedArray;
      if ((pFVar23 == (FManagedArrayBase *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedManagedArray != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x319,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar23->bIsDirty = true;
      lVar19 = lVar26;
      uVar24 = uVar11;
      if (pFVar23 != (FManagedArrayBase *)0x0) {
        for (; lVar19 < lVar22; lVar19 = lVar19 + 1) {
          uVar21 = 0;
          if ((int)uVar24 < *(int *)&pFVar23[1].bIsDirty) {
            uVar21 = ~uVar24 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(int *)(pFVar23[1]._padding_ + lVar19 * 4) != -1) {
            uVar21 = 0;
            if ((int)uVar24 < *(int *)&pFVar23[1].bIsDirty) {
              uVar21 = ~uVar24 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            piVar2 = (int *)(pFVar23[1]._padding_ + lVar19 * 4);
            *piVar2 = *piVar2 + iVar10;
          }
          uVar24 = uVar24 + 1;
        }
      }
    }
    FVar6 = FTransformCollection::TransformGroup;
    pFVar15 = ::FName::FName(&local_138,"Parent");
    local_170 = FVar6;
    local_178 = *pFVar15;
    pTVar16 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&local_f8.Map,(TTuple<FName,FName> *)&local_178);
    pFVar18 = (FValueType *)&pTVar16->field_0x10;
    if (pTVar16 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pFVar18 = (FValueType *)0x0;
    }
    if ((pFVar18 != (FValueType *)0x0) && (pFVar18->ArrayType == FInt32Type)) {
      FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar18);
      pFVar23 = pFVar18->ManagedArray;
      if ((pFVar23 == (FManagedArrayBase *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedManagedArray != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x319,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar23->bIsDirty = true;
      lVar19 = lVar26;
      uVar24 = uVar11;
      if (pFVar23 != (FManagedArrayBase *)0x0) {
        for (; lVar19 < lVar22; lVar19 = lVar19 + 1) {
          uVar21 = 0;
          if ((int)uVar24 < *(int *)&pFVar23[1].bIsDirty) {
            uVar21 = ~uVar24 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(int *)(pFVar23[1]._padding_ + lVar19 * 4) != -1) {
            uVar21 = 0;
            if ((int)uVar24 < *(int *)&pFVar23[1].bIsDirty) {
              uVar21 = ~uVar24 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            piVar2 = (int *)(pFVar23[1]._padding_ + lVar19 * 4);
            *piVar2 = *piVar2 + uVar11;
          }
          uVar24 = uVar24 + 1;
        }
      }
    }
    FVar6 = FTransformCollection::TransformGroup;
    pFVar15 = ::FName::FName(&local_130,"Children");
    local_160 = FVar6;
    local_168 = *pFVar15;
    pTVar16 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&local_f8.Map,(TTuple<FName,FName> *)&local_168);
    pFVar18 = (FValueType *)&pTVar16->field_0x10;
    if (pTVar16 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pFVar18 = (FValueType *)0x0;
    }
    if ((pFVar18 != (FValueType *)0x0) && (pFVar18->ArrayType == FIntArrayType)) {
      FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar18);
      pFVar23 = pFVar18->ManagedArray;
      local_220 = pFVar23;
      if ((pFVar23 == (FManagedArrayBase *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedManagedArray != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                             ,0x319,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar23->bIsDirty = true;
      if ((pFVar23 != (FManagedArrayBase *)0x0) && (local_248 = uVar11, lVar26 < lVar22)) {
        lVar19 = lVar26 * 0x50;
        local_250 = lVar22 - lVar26;
        do {
          uVar24 = 0;
          uVar21 = uVar24;
          if ((int)uVar11 < *(int *)&pFVar23[1].bIsDirty) {
            uVar21 = ~uVar11 >> 0x1f;
          }
          local_248 = uVar11;
          local_230 = lVar19;
          if ((uVar21 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          plVar27 = (longlong *)(pFVar23[1]._padding_ + lVar19);
          uStack_1ec = 1;
          uVar11 = *(uint *)(plVar27 + 5);
          pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar27 + 2);
          local_1d8 = 0;
          uStack_1dc = local_1d8;
          if (uVar11 != 0) {
            pTVar25 = pTVar1;
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar27[4] !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar25 = (TBitArray<FDefaultBitArrayAllocator> *)plVar27[4];
            }
            uVar21 = *(uint *)(pTVar25->AllocatorInstance).InlineData;
            local_1d8 = 0;
            uVar24 = 0;
            while (uVar21 == 0) {
              lVar22 = (longlong)(int)uVar24;
              local_1d8 = local_1d8 + 0x20;
              uVar24 = uVar24 + 1;
              uStack_1dc = uVar11;
              if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
              goto LAB_14e88a6dd;
              uVar21 = *(uint *)((pTVar25->AllocatorInstance).InlineData + lVar22 * 4 + 4);
            }
            uStack_1ec = -uVar21 & uVar21;
            uVar3 = (ulonglong)uStack_1ec * 2 + 1;
            lVar22 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            local_228 = (int)lVar22;
            uStack_1dc = (local_1d8 - 1) + local_228;
            if ((int)uVar11 < (int)uStack_1dc) {
              uStack_1dc = uVar11;
            }
          }
LAB_14e88a6dd:
          uVar21 = *(uint *)(plVar27 + 5);
          uStack_1d4 = local_104;
          uVar20 = uVar21 & 0xffffffe0;
          iStack_1d0 = (int)plVar27[1] - *(int *)((longlong)plVar27 + 0x34);
          TStack_1c0._padding_ = CONCAT44(uStack_1ec,uVar24);
          uStack_1e0 = 0xffffffff;
          TStack_1c0.CurrentBitIndex = uStack_1dc;
          TStack_1c0.UnvisitedBitMask = 0xffffffff;
          iVar10 = (int)uVar21 >> 5;
          TStack_1c0._28_4_ = local_104;
          TStack_1c0.BaseBitIndex = local_1d8;
          uStack_1a0 = CONCAT44(uStack_1cc,iStack_1d0);
          local_1f8 = plVar27;
          uStack_1f0 = uVar24;
          local_1e8 = pTVar1;
          local_1c8 = plVar27;
          TStack_1c0.Array = pTVar1;
          if ((((int)uVar21 < 0) || ((int)uVar11 < (int)uVar21)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar24 = local_244;
          uVar11 = *(uint *)(plVar27 + 5);
          if (uVar21 != uVar11) {
            pTVar25 = pTVar1;
            if ((TBitArray<FDefaultBitArrayAllocator> *)plVar27[4] !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar25 = (TBitArray<FDefaultBitArrayAllocator> *)plVar27[4];
            }
            uVar21 = -1 << ((byte)uVar21 & 0x1f) &
                     *(uint *)((pTVar25->AllocatorInstance).InlineData + (longlong)iVar10 * 4);
            while (uVar21 == 0) {
              lVar22 = (longlong)iVar10;
              uVar20 = uVar20 + 0x20;
              iVar10 = iVar10 + 1;
              uVar21 = uVar11;
              if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
              goto LAB_14e88a7f0;
              uVar21 = *(uint *)((pTVar25->AllocatorInstance).InlineData + lVar22 * 4 + 4);
            }
            uVar3 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
            lVar22 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            local_224 = (int)lVar22;
            uVar21 = local_224 + -1 + uVar20;
            if ((int)uVar11 < (int)uVar21) {
              uVar21 = uVar11;
            }
          }
LAB_14e88a7f0:
          while( true ) {
            plVar8 = local_1c8;
            if ((int)local_1c8[1] - *(int *)((longlong)local_1c8 + 0x34) != (int)uStack_1a0) {
              local_268[0] = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_268);
            }
            if (((TStack_1c0.CurrentBitIndex == uVar21) && (TStack_1c0.Array == pTVar1)) &&
               (plVar8 == plVar27)) break;
            lVar22 = *plVar8;
            iVar10 = *(int *)(lVar22 + (longlong)TStack_1c0.CurrentBitIndex * 0xc);
            if (iVar10 != -1) {
              *(uint *)(lVar22 + (longlong)TStack_1c0.CurrentBitIndex * 0xc) = iVar10 + uVar24;
            }
            TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
          }
          uVar11 = local_248 + 1;
          lVar19 = local_230 + 0x50;
          local_250 = local_250 + -1;
          pFVar23 = local_220;
          local_248 = uVar11;
          local_230 = lVar19;
        } while (local_250 != 0);
      }
    }
    this_00 = local_208;
    pFVar7 = local_210;
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)local_208,local_210,&local_f8,local_218);
    FVar6 = FGeometryCollection::GeometryGroup;
    pFVar15 = ::FName::FName(local_128,"Guid");
    local_150 = FVar6;
    local_158 = *pFVar15;
    pTVar16 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&local_200->Map,(TTuple<FName,FName> *)&local_158);
    pFVar18 = (FValueType *)&pTVar16->field_0x10;
    if (pTVar16 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pFVar18 = (FValueType *)0x0;
    }
    if (((pFVar18 != (FValueType *)0x0) &&
        (pTVar17 = FManagedArrayCollection::FValueType::GetTypedPtr<FString>(pFVar18),
        pTVar17 != (TManagedArray<FString> *)0x0)) &&
       (&local_260 != (TArray<FString,TSizedDefaultAllocator<32>_> *)&pTVar17->field_0x10)) {
      DestructItems<FString,int>((FString *)local_260.AllocatorInstance.Data,local_260.ArrayNum);
      iVar10 = *(int *)&pTVar17->field_0x18;
      pFVar4 = *(FString **)&pTVar17->field_0x10;
      local_260.ArrayNum = iVar10;
      if ((iVar10 == 0) && (local_260.ArrayMax == 0)) {
        local_260.ArrayNum = 0;
        local_260.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar10,local_260.ArrayMax,&local_260.AllocatorInstance,iVar10,
                   &local_260.ArrayMax);
        ConstructItems<FString,FString,int>(local_260.AllocatorInstance.Data,pFVar4,iVar10);
      }
    }
    FDataflowNode::
    SetValue<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this_00,pFVar7,&local_240,&this_00->GeometryGroupGuidsOut1);
    FDataflowNode::
    SetValue<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this_00,pFVar7,&local_260,&this_00->GeometryGroupGuidsOut2);
    DestructItems<FString,int>((FString *)local_260.AllocatorInstance.Data,local_260.ArrayNum);
    if (local_260.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_240.AllocatorInstance.Data,local_240.ArrayNum);
    if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.AllocatorInstance.Data);
    }
    FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  }
  return;
}

// FAppendCollectionAssetsDataflowNode @ 14e910640

FAppendCollectionAssetsDataflowNode * __thiscall
FAppendCollectionAssetsDataflowNode::FAppendCollectionAssetsDataflowNode
          (FAppendCollectionAssetsDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection1;
  this->_padding_ = (longlong)&___7FAppendCollectionAssetsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection2);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->GeometryGroupGuidsOut1).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometryGroupGuidsOut1).ArrayNum = 0;
  (this->GeometryGroupGuidsOut1).ArrayMax = 0;
  (this->GeometryGroupGuidsOut2).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometryGroupGuidsOut2).ArrayNum = 0;
  (this->GeometryGroupGuidsOut2).ArrayMax = 0;
  local_68.ContainerReference = (void *)0x0;
  local_68.Index = -1;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Collection2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->GeometryGroupGuidsOut1;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->GeometryGroupGuidsOut2;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  return this;
}

// ~FAppendCollectionAssetsDataflowNode @ 14e932f00

void __thiscall
FAppendCollectionAssetsDataflowNode::~FAppendCollectionAssetsDataflowNode
          (FAppendCollectionAssetsDataflowNode *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->GeometryGroupGuidsOut2).AllocatorInstance.Data,
             (this->GeometryGroupGuidsOut2).ArrayNum);
  pFVar1 = (this->GeometryGroupGuidsOut2).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->GeometryGroupGuidsOut1).AllocatorInstance.Data,
             (this->GeometryGroupGuidsOut1).ArrayNum);
  pFVar1 = (this->GeometryGroupGuidsOut1).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection2);
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection1);
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e850950

UScriptStruct * __cdecl FTriangleBoundaryIndicesNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTriangleBoundaryIndicesNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FTriangleBoundaryIndicesNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode,(UObject *)pUVar1,
                         L"TriangleBoundaryIndicesNode");
  }
  return Z_Registration_Info_UScriptStruct_FTriangleBoundaryIndicesNode.OuterSingleton;
}

// GetType @ 14e850f00

FName __thiscall FTriangleBoundaryIndicesNode::GetType(FTriangleBoundaryIndicesNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FTriangleBoundaryIndicesNode");
  return in_RDX;
}

// IsA @ 14e850fb0

bool __thiscall FTriangleBoundaryIndicesNode::IsA(FTriangleBoundaryIndicesNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FTriangleBoundaryIndicesNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e851018;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e851018:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e851036;
      }
    }
  }
  bVar5 = true;
LAB_14e851036:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e851070

FStructOnScope * __thiscall
FTriangleBoundaryIndicesNode::NewStructOnScope(FTriangleBoundaryIndicesNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FTriangleBoundaryIndicesNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FTriangleBoundaryIndicesNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode,(UObject *)pUVar2,
                           L"TriangleBoundaryIndicesNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FTriangleBoundaryIndicesNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e851180

void __thiscall
FTriangleBoundaryIndicesNode::SerializeInternal
          (FTriangleBoundaryIndicesNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTriangleBoundaryIndicesNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FTriangleBoundaryIndicesNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode,(UObject *)pUVar1,
                         L"TriangleBoundaryIndicesNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FTriangleBoundaryIndicesNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FTriangleBoundaryIndicesNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8511fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e851210

FName __thiscall FTriangleBoundaryIndicesNode::GetDisplayName(FTriangleBoundaryIndicesNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"TriangleBoundaryIndices");
  return in_RDX;
}

// GetCategory @ 14e851300

FName __thiscall FTriangleBoundaryIndicesNode::GetCategory(FTriangleBoundaryIndicesNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Flesh|Experimental");
  return in_RDX;
}

// GetTags @ 14e8513b0

FString * __thiscall
FTriangleBoundaryIndicesNode::GetTags
          (FTriangleBoundaryIndicesNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e851420

UScriptStruct * __thiscall
FTriangleBoundaryIndicesNode::TypedScriptStruct(FTriangleBoundaryIndicesNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTriangleBoundaryIndicesNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FTriangleBoundaryIndicesNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode,(UObject *)pUVar1,
                         L"TriangleBoundaryIndicesNode");
  }
  return Z_Registration_Info_UScriptStruct_FTriangleBoundaryIndicesNode.OuterSingleton;
}

// Evaluate @ 14e851730

void __thiscall
FTriangleBoundaryIndicesNode::Evaluate
          (FTriangleBoundaryIndicesNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  FManagedArrayCollection *this_00;
  FName *pFVar11;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar12;
  TManagedArray<int> *pTVar13;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar14;
  TManagedArray<int> *pTVar15;
  TManagedArray<int> *pTVar16;
  longlong lVar17;
  FValueType *pFVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  FValueType *pFVar23;
  uint local_res18;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_e8;
  longlong local_d8;
  TManagedArray<int> *local_d0;
  TManagedArray<int> *local_c8;
  TManagedArray<int> *local_c0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_80;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  local_b8 = &this->BoundaryIndicesOut;
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)puVar10 == &this->BoundaryIndicesOut) {
    this_00 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,&this->Collection);
    pFVar23 = (FValueType *)0x0;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    pFVar11 = ::FName::FName(&local_70,"TriangleMesh");
    FVar4 = *pFVar11;
    pFVar11 = ::FName::FName(&local_68,"ObjectIndices");
    local_b0 = *pFVar11;
    local_a8 = FVar4;
    pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&this_00->Map,(TTuple<FName,FName> *)&local_b0);
    pFVar18 = (FValueType *)&pTVar12->field_0x10;
    if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      pFVar18 = pFVar23;
    }
    if ((pFVar18 != (FValueType *)0x0) &&
       (pTVar13 = FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar18),
       FVar4 = FGeometryCollection::FacesGroup, local_c0 = pTVar13,
       pTVar13 != (TManagedArray<int> *)0x0)) {
      pFVar11 = ::FName::FName(&local_60,"Indices");
      local_98 = FVar4;
      local_a0 = *pFVar11;
      pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                        *)&this_00->Map,(TTuple<FName,FName> *)&local_a0);
      pFVar18 = (FValueType *)&pTVar12->field_0x10;
      if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
        pFVar18 = pFVar23;
      }
      if ((pFVar18 != (FValueType *)0x0) &&
         (pTVar14 = FManagedArrayCollection::FValueType::GetTypedPtr<UE::Math::TIntVector3<int>_>
                              (pFVar18), FVar4 = FGeometryCollection::GeometryGroup,
         pTVar14 != (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0)) {
        pFVar11 = ::FName::FName(&local_58,"FaceStart");
        local_88 = FVar4;
        local_90 = *pFVar11;
        pTVar12 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                          *)&this_00->Map,(TTuple<FName,FName> *)&local_90);
        pFVar18 = (FValueType *)&pTVar12->field_0x10;
        if (pTVar12 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
          pFVar18 = pFVar23;
        }
        if ((pFVar18 != (FValueType *)0x0) &&
           (pTVar15 = FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar18),
           FVar4 = FGeometryCollection::GeometryGroup, local_c8 = pTVar15,
           pTVar15 != (TManagedArray<int> *)0x0)) {
          pFVar11 = ::FName::FName(local_50,"FaceCount");
          pTVar16 = FManagedArrayCollection::FindAttribute<int>(this_00,*pFVar11,FVar4);
          local_d0 = pTVar16;
          if (pTVar16 != (TManagedArray<int> *)0x0) {
            local_res18 = 0;
            iVar7 = (**(code **)(*(longlong *)pTVar13 + 0x60))(pTVar13);
            if (0 < iVar7) {
              lVar20 = 0;
              local_d8 = 0;
              do {
                uVar8 = 0;
                if ((int)local_res18 < *(int *)&pTVar13->field_0x18) {
                  uVar8 = ~local_res18 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar8 = *(uint *)(lVar20 + *(longlong *)&pTVar13->field_0x10);
                uVar19 = 0;
                if ((int)uVar8 < *(int *)&pTVar15->field_0x18) {
                  uVar19 = ~uVar8 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar7 = *(int *)((longlong)(int)uVar8 * 4 + *(longlong *)&pTVar15->field_0x10);
                uVar22 = (ulonglong)iVar7;
                uVar19 = 0;
                if ((int)uVar8 < *(int *)&pTVar16->field_0x18) {
                  uVar19 = ~uVar8 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar9 = *(int *)((longlong)(int)uVar8 * 4 + *(longlong *)&pTVar16->field_0x10) +
                        iVar7;
                if (iVar7 < iVar9) {
                  lVar20 = uVar22 * 0xc;
                  do {
                    uVar21 = (uint)uVar22;
                    uVar19 = ~uVar21 >> 0x1f;
                    uVar8 = 0;
                    if ((int)uVar21 < *(int *)&pTVar14->field_0x18) {
                      uVar8 = uVar19;
                    }
                    if ((uVar8 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    uVar1 = *(undefined4 *)(*(longlong *)&pTVar14->field_0x10 + 8 + lVar20);
                    uVar8 = 0;
                    if ((int)uVar21 < *(int *)&pTVar14->field_0x18) {
                      uVar8 = uVar19;
                    }
                    if ((uVar8 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    uVar2 = *(undefined4 *)(*(longlong *)&pTVar14->field_0x10 + 4 + lVar20);
                    uVar8 = 0;
                    if ((int)uVar21 < *(int *)&pTVar14->field_0x18) {
                      uVar8 = uVar19;
                    }
                    if ((uVar8 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    uVar3 = *(undefined4 *)(lVar20 + *(longlong *)&pTVar14->field_0x10);
                    iVar7 = local_e8.ArrayNum;
                    if (local_e8.ArrayNum == local_e8.ArrayMax) {
                      iVar7 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x40c,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
                    }
                    uVar22 = (ulonglong)(uVar21 + 1);
                    local_e8.ArrayNum = iVar7 + 1;
                    lVar17 = (longlong)iVar7;
                    lVar20 = lVar20 + 0xc;
                    *(undefined4 *)(local_e8.AllocatorInstance.Data + lVar17 * 0xc) = uVar3;
                    *(undefined4 *)(local_e8.AllocatorInstance.Data + lVar17 * 0xc + 4) = uVar2;
                    *(undefined4 *)(local_e8.AllocatorInstance.Data + lVar17 * 0xc + 8) = uVar1;
                    pTVar15 = local_c8;
                    pTVar16 = local_d0;
                  } while ((int)(uVar21 + 1) < iVar9);
                }
                pTVar13 = local_c0;
                local_res18 = local_res18 + 1;
                lVar20 = local_d8 + 4;
                local_d8 = lVar20;
                iVar7 = (**(code **)(*(longlong *)local_c0 + 0x60))(local_c0);
              } while ((int)local_res18 < iVar7);
            }
          }
        }
      }
    }
    Chaos::Utilities::ComputeBoundaryNodes(&local_80,&local_e8);
    FDataflowNode::
    SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_80,local_b8);
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
  }
  return;
}

// FTriangleBoundaryIndicesNode @ 14e92f9a0

FTriangleBoundaryIndicesNode * __thiscall
FTriangleBoundaryIndicesNode::FTriangleBoundaryIndicesNode
          (FTriangleBoundaryIndicesNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->_padding_ = (longlong)&___7FTriangleBoundaryIndicesNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->BoundaryIndicesOut).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundaryIndicesOut).ArrayNum = 0;
  (this->BoundaryIndicesOut).ArrayMax = 0;
  local_48.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.Reference = &this->Collection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->BoundaryIndicesOut;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}


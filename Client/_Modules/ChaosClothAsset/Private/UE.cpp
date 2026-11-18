// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 25

// AddUniquePrefixedAttribute<UE::Math::TVector<float>_> @ 14db26740

FName __cdecl
UE::Chaos::ClothAsset::Private::AddUniquePrefixedAttribute<UE::Math::TVector<float>_>
          (FName *param_1,FName *param_2,TManagedArray<FName> *param_3,
          TSharedRef<FManagedArrayCollection,1> *param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  FName *pFVar5;
  bool bVar6;
  int iVar7;
  FName FVar8;
  FManagedArrayCollection *pFVar9;
  int iVar10;
  undefined1 local_res8 [8];
  FName *local_res10;
  undefined8 local_res18;
  undefined8 *in_stack_00000028;
  undefined2 local_50;
  undefined2 uStack_4e;
  FConstructionParameters local_48;
  
  iVar10 = 0;
  local_res10 = param_2;
  if (param_4 != (TSharedRef<FManagedArrayCollection,1> *)0x0) {
    pFVar9 = param_4[1].Object;
    iVar1 = *(int *)&param_4[1].SharedReferenceCount.ReferenceController;
    plVar4 = &pFVar9->_padding_;
    while( true ) {
      if (*(int *)&param_4[1].SharedReferenceCount.ReferenceController != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar9 == (FManagedArrayCollection *)(plVar4 + iVar1)) break;
      lVar2 = pFVar9->_padding_;
      iVar7 = iVar10;
      if (lVar2 != 0) {
        if ((int)lVar2 == *(int *)param_3) {
          iVar7 = (int)((ulonglong)lVar2 >> 0x20);
          if (iVar7 < iVar10) {
            iVar7 = iVar10;
          }
        }
        else {
          bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3774622486147104534>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                             ,0xea,"NamesHaveMatchingPrefix(ExistingAttr, AttributePrefix)");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            FVar8 = (FName)(*pcVar3)();
            return FVar8;
          }
        }
      }
      iVar10 = iVar7;
      pFVar9 = (FManagedArrayCollection *)&pFVar9->Map;
    }
  }
  pFVar5 = local_res10;
  (param_1->ComparisonIndex).Value = *(uint *)param_3;
  param_1->Number = iVar10 + 1;
  bVar6 = FManagedArrayCollection::HasAttribute
                    ((FManagedArrayCollection *)*in_stack_00000028,*param_1,*local_res10);
  if ((bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Collection->HasAttribute(NewAttributeName, Group)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                         ,0xf2,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    FVar8 = (FName)(*pcVar3)();
    return FVar8;
  }
  local_res18 = 0;
  local_48.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_48.GroupIndexDependency.Number = 0;
  local_48.Saved = true;
  local_48.bAllowCircularDependency = false;
  local_48._10_2_ = uStack_4e;
  FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
            ((FManagedArrayCollection *)*in_stack_00000028,*param_1,*pFVar5,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)in_stack_00000028[1]);
  return (FName)param_1;
}

// AddUniquePrefixedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14db268e0

FName __cdecl
UE::Chaos::ClothAsset::Private::AddUniquePrefixedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FName *param_1,FName *param_2,TManagedArray<FName> *param_3,
          TSharedRef<FManagedArrayCollection,1> *param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  FName *pFVar5;
  bool bVar6;
  int iVar7;
  FName FVar8;
  FManagedArrayCollection *pFVar9;
  int iVar10;
  undefined1 local_res8 [8];
  FName *local_res10;
  undefined8 local_res18;
  undefined8 *in_stack_00000028;
  undefined2 local_50;
  undefined2 uStack_4e;
  FConstructionParameters local_48;
  
  iVar10 = 0;
  local_res10 = param_2;
  if (param_4 != (TSharedRef<FManagedArrayCollection,1> *)0x0) {
    pFVar9 = param_4[1].Object;
    iVar1 = *(int *)&param_4[1].SharedReferenceCount.ReferenceController;
    plVar4 = &pFVar9->_padding_;
    while( true ) {
      if (*(int *)&param_4[1].SharedReferenceCount.ReferenceController != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar9 == (FManagedArrayCollection *)(plVar4 + iVar1)) break;
      lVar2 = pFVar9->_padding_;
      iVar7 = iVar10;
      if (lVar2 != 0) {
        if ((int)lVar2 == *(int *)param_3) {
          iVar7 = (int)((ulonglong)lVar2 >> 0x20);
          if (iVar7 < iVar10) {
            iVar7 = iVar10;
          }
        }
        else {
          bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3774622486147104534>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                             ,0xea,"NamesHaveMatchingPrefix(ExistingAttr, AttributePrefix)");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            FVar8 = (FName)(*pcVar3)();
            return FVar8;
          }
        }
      }
      iVar10 = iVar7;
      pFVar9 = (FManagedArrayCollection *)&pFVar9->Map;
    }
  }
  pFVar5 = local_res10;
  (param_1->ComparisonIndex).Value = *(uint *)param_3;
  param_1->Number = iVar10 + 1;
  bVar6 = FManagedArrayCollection::HasAttribute
                    ((FManagedArrayCollection *)*in_stack_00000028,*param_1,*local_res10);
  if ((bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Collection->HasAttribute(NewAttributeName, Group)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                         ,0xf2,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    FVar8 = (FName)(*pcVar3)();
    return FVar8;
  }
  local_res18 = 0;
  local_48.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_48.GroupIndexDependency.Number = 0;
  local_48.Saved = true;
  local_48.bAllowCircularDependency = false;
  local_48._10_2_ = uStack_4e;
  FManagedArrayCollection::AddAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
            ((FManagedArrayCollection *)*in_stack_00000028,*param_1,*pFVar5,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)in_stack_00000028[1]);
  return (FName)param_1;
}

// AddUniquePrefixedAttribute<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14db26a80

FName __cdecl
UE::Chaos::ClothAsset::Private::
AddUniquePrefixedAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
          (FName *param_1,FName *param_2,TManagedArray<FName> *param_3,
          TSharedRef<FManagedArrayCollection,1> *param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  FName *pFVar5;
  bool bVar6;
  int iVar7;
  FName FVar8;
  FManagedArrayCollection *pFVar9;
  int iVar10;
  undefined1 local_res8 [8];
  FName *local_res10;
  undefined8 local_res18;
  undefined8 *in_stack_00000028;
  undefined2 local_50;
  undefined2 uStack_4e;
  FConstructionParameters local_48;
  
  iVar10 = 0;
  local_res10 = param_2;
  if (param_4 != (TSharedRef<FManagedArrayCollection,1> *)0x0) {
    pFVar9 = param_4[1].Object;
    iVar1 = *(int *)&param_4[1].SharedReferenceCount.ReferenceController;
    plVar4 = &pFVar9->_padding_;
    while( true ) {
      if (*(int *)&param_4[1].SharedReferenceCount.ReferenceController != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar9 == (FManagedArrayCollection *)(plVar4 + iVar1)) break;
      lVar2 = pFVar9->_padding_;
      iVar7 = iVar10;
      if (lVar2 != 0) {
        if ((int)lVar2 == *(int *)param_3) {
          iVar7 = (int)((ulonglong)lVar2 >> 0x20);
          if (iVar7 < iVar10) {
            iVar7 = iVar10;
          }
        }
        else {
          bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3774622486147104534>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                             ,0xea,"NamesHaveMatchingPrefix(ExistingAttr, AttributePrefix)");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            FVar8 = (FName)(*pcVar3)();
            return FVar8;
          }
        }
      }
      iVar10 = iVar7;
      pFVar9 = (FManagedArrayCollection *)&pFVar9->Map;
    }
  }
  pFVar5 = local_res10;
  (param_1->ComparisonIndex).Value = *(uint *)param_3;
  param_1->Number = iVar10 + 1;
  bVar6 = FManagedArrayCollection::HasAttribute
                    ((FManagedArrayCollection *)*in_stack_00000028,*param_1,*local_res10);
  if ((bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Collection->HasAttribute(NewAttributeName, Group)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                         ,0xf2,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    FVar8 = (FName)(*pcVar3)();
    return FVar8;
  }
  local_res18 = 0;
  local_48.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_48.GroupIndexDependency.Number = 0;
  local_48.Saved = true;
  local_48.bAllowCircularDependency = false;
  local_48._10_2_ = uStack_4e;
  FManagedArrayCollection::AddAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
            ((FManagedArrayCollection *)*in_stack_00000028,*param_1,*pFVar5,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)in_stack_00000028[1]);
  return (FName)param_1;
}

// SplitCopyVertexData<float> @ 14db35cc0

void __cdecl
UE::Chaos::ClothAsset::Private::SplitCopyVertexData<float>
          (TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,TArrayView<float,int> *param_2)

{
  ulonglong uVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  longlong lVar16;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  iVar3 = *(int *)&param_1->field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iVar13 = 0;
  iVar14 = 0;
  uVar7 = 1;
  TStack_60.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)TStack_60.Array;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      TStack_60.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14db35d5d;
      uVar11 = puVar15[lVar10 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    TStack_60.CurrentBitIndex = (int)lVar10 + -1 + iVar14;
    if (iVar3 < TStack_60.CurrentBitIndex) {
      TStack_60.CurrentBitIndex = iVar3;
    }
  }
LAB_14db35d5d:
  TStack_60._padding_ = CONCAT44(uVar7,iVar13);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = iVar14;
  if (TStack_60.CurrentBitIndex < iVar3) {
    do {
      uVar7 = *(uint *)((longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)param_1);
      uVar11 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar11 = ~uVar7 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pfVar4 = param_2->DataPtr;
      uVar11 = 1;
      lVar10 = *(longlong *)param_1;
      if (1 < *(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 + lVar10)) {
        lVar16 = 0xa8;
        do {
          lVar12 = (longlong)TStack_60.CurrentBitIndex;
          fVar2 = pfVar4[(int)uVar7];
          uVar8 = 0;
          if ((int)uVar11 < *(int *)(lVar12 * 0x20 + 0x10 + lVar10)) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar8 = *(uint *)(lVar16 + *(longlong *)(lVar12 * 0x20 + 8 + lVar10));
          uVar9 = 0;
          if ((int)uVar8 < param_2->ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar11 = uVar11 + 1;
          lVar16 = lVar16 + 0xa8;
          param_2->DataPtr[(int)uVar8] = fVar2;
          lVar10 = *(longlong *)param_1;
        } while ((int)uVar11 < *(int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 + lVar10))
        ;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return;
}

// SplitCopyVertexData<UE::Math::TVector<float>_> @ 14db35f80

void __cdecl
UE::Chaos::ClothAsset::Private::SplitCopyVertexData<UE::Math::TVector<float>_>
          (TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,TArrayView<UE::Math::TVector<float>,int> *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  TVector<float> *pTVar5;
  TVector<float> *pTVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  iVar3 = *(int *)&param_1->field_0x28;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iVar15 = 0;
  iVar16 = 0;
  uVar9 = 1;
  TStack_50.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)TStack_50.Array;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar15;
      iVar16 = iVar16 + 0x20;
      iVar15 = iVar15 + 1;
      TStack_50.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14db3601d;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar9 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    TStack_50.CurrentBitIndex = (int)lVar12 + -1 + iVar16;
    if (iVar3 < TStack_50.CurrentBitIndex) {
      TStack_50.CurrentBitIndex = iVar3;
    }
  }
LAB_14db3601d:
  TStack_50._padding_ = CONCAT44(uVar9,iVar15);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = TStack_50.CurrentBitIndex;
  TStack_50.BaseBitIndex = iVar16;
  if (TStack_50.CurrentBitIndex < iVar3) {
    do {
      uVar9 = *(uint *)((longlong)TStack_50.CurrentBitIndex * 0x20 + *(longlong *)param_1);
      uVar14 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar14 = ~uVar9 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar5 = param_2->DataPtr;
      uVar14 = 1;
      lVar12 = *(longlong *)param_1;
      if (1 < *(int *)((longlong)TStack_50.CurrentBitIndex * 0x20 + 0x10 + lVar12)) {
        lVar13 = 0xa8;
        do {
          uVar2 = *(undefined8 *)&pTVar5[(int)uVar9].field0_0x0;
          fVar4 = pTVar5[(int)uVar9].field0_0x0._s_0.Z;
          lVar12 = (longlong)TStack_50.CurrentBitIndex * 0x20 + lVar12;
          uVar10 = 0;
          if ((int)uVar14 < *(int *)(lVar12 + 0x10)) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar10 = *(uint *)(lVar13 + *(longlong *)(lVar12 + 8));
          uVar11 = 0;
          if ((int)uVar10 < param_2->ArrayNum) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar6 = param_2->DataPtr;
          uVar14 = uVar14 + 1;
          lVar13 = lVar13 + 0xa8;
          *(undefined8 *)&pTVar6[(int)uVar10].field0_0x0 = uVar2;
          pTVar6[(int)uVar10].field0_0x0._s_0.Z = fVar4;
          lVar12 = *(longlong *)param_1;
        } while ((int)uVar14 < *(int *)((longlong)TStack_50.CurrentBitIndex * 0x20 + 0x10 + lVar12))
        ;
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return;
}

// SplitCopyVertexData<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14db36240

void __cdecl
UE::Chaos::ClothAsset::Private::SplitCopyVertexData<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *param_2)

{
  ulonglong uVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  iVar2 = *(int *)&param_1->field_0x28;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iVar11 = 0;
  iVar12 = 0;
  uVar6 = 1;
  TStack_50.CurrentBitIndex = 0;
  if (iVar2 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)TStack_50.Array;
    }
    uVar10 = *puVar13;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_50.CurrentBitIndex = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14db362dd;
      uVar10 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_50.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar2 < TStack_50.CurrentBitIndex) {
      TStack_50.CurrentBitIndex = iVar2;
    }
  }
LAB_14db362dd:
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = TStack_50.CurrentBitIndex;
  TStack_50.BaseBitIndex = iVar12;
  if (TStack_50.CurrentBitIndex < iVar2) {
    do {
      uVar6 = *(uint *)((longlong)TStack_50.CurrentBitIndex * 0x20 + *(longlong *)param_1);
      uVar10 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar10 = ~uVar6 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = 1;
      pTVar15 = param_2->DataPtr + (int)uVar6;
      lVar8 = *(longlong *)param_1;
      if (1 < *(int *)((longlong)TStack_50.CurrentBitIndex * 0x20 + 0x10 + lVar8)) {
        lVar14 = 0xa8;
        do {
          lVar8 = (longlong)TStack_50.CurrentBitIndex * 0x20 + lVar8;
          uVar6 = 0;
          if ((int)uVar10 < *(int *)(lVar8 + 0x10)) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
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
          uVar6 = *(uint *)(lVar14 + *(longlong *)(lVar8 + 8));
          uVar7 = 0;
          if ((int)uVar6 < param_2->ArrayNum) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar9 = param_2->DataPtr + (int)uVar6;
          if (pTVar9 != pTVar15) {
            iVar2 = pTVar15->ArrayNum;
            piVar4 = &pTVar9->ArrayMax;
            _Src = (pTVar15->AllocatorInstance).Data;
            pTVar9->ArrayNum = iVar2;
            if ((iVar2 == 0) && (*piVar4 == 0)) {
              *piVar4 = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar2,*piVar4,&pTVar9->AllocatorInstance,iVar2,piVar4);
              if (iVar2 != 0) {
                memcpy((pTVar9->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
              }
            }
          }
          uVar10 = uVar10 + 1;
          lVar14 = lVar14 + 0xa8;
          lVar8 = *(longlong *)param_1;
        } while ((int)uVar10 < *(int *)((longlong)TStack_50.CurrentBitIndex * 0x20 + 0x10 + lVar8));
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return;
}

// SplitCopyVertexData<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14db36550

void __cdecl
UE::Chaos::ClothAsset::Private::SplitCopyVertexData<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *param_2)

{
  ulonglong uVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  int *piVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  iVar2 = *(int *)&param_1->field_0x28;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iVar11 = 0;
  iVar12 = 0;
  uVar6 = 1;
  TStack_50.CurrentBitIndex = 0;
  if (iVar2 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)TStack_50.Array;
    }
    uVar10 = *puVar13;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_50.CurrentBitIndex = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14db365ed;
      uVar10 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_50.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar2 < TStack_50.CurrentBitIndex) {
      TStack_50.CurrentBitIndex = iVar2;
    }
  }
LAB_14db365ed:
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = TStack_50.CurrentBitIndex;
  TStack_50.BaseBitIndex = iVar12;
  if (TStack_50.CurrentBitIndex < iVar2) {
    do {
      uVar6 = *(uint *)((longlong)TStack_50.CurrentBitIndex * 0x20 + *(longlong *)param_1);
      uVar10 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar10 = ~uVar6 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = 1;
      pTVar15 = param_2->DataPtr + (int)uVar6;
      lVar8 = *(longlong *)param_1;
      if (1 < *(int *)((longlong)TStack_50.CurrentBitIndex * 0x20 + 0x10 + lVar8)) {
        lVar14 = 0xa8;
        do {
          lVar8 = (longlong)TStack_50.CurrentBitIndex * 0x20 + lVar8;
          uVar6 = 0;
          if ((int)uVar10 < *(int *)(lVar8 + 0x10)) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
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
          uVar6 = *(uint *)(lVar14 + *(longlong *)(lVar8 + 8));
          uVar7 = 0;
          if ((int)uVar6 < param_2->ArrayNum) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar9 = param_2->DataPtr + (int)uVar6;
          if (pTVar9 != pTVar15) {
            iVar2 = pTVar15->ArrayNum;
            piVar4 = &pTVar9->ArrayMax;
            _Src = (pTVar15->AllocatorInstance).Data;
            pTVar9->ArrayNum = iVar2;
            if ((iVar2 == 0) && (*piVar4 == 0)) {
              *piVar4 = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar2,*piVar4,&pTVar9->AllocatorInstance,iVar2,piVar4);
              if (iVar2 != 0) {
                memcpy((pTVar9->AllocatorInstance).Data,_Src,(longlong)iVar2 << 2);
              }
            }
          }
          uVar10 = uVar10 + 1;
          lVar14 = lVar14 + 0xa8;
          lVar8 = *(longlong *)param_1;
        } while ((int)uVar10 < *(int *)((longlong)TStack_50.CurrentBitIndex * 0x20 + 0x10 + lVar8));
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return;
}

// WeldByWeightedAverage<float> @ 14db36860

void __cdecl
UE::Chaos::ClothAsset::Private::WeldByWeightedAverage<float>
          (TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
           *param_1,TArrayView<float,int> *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ForElementType<unsigned_int> FVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  ForElementType<unsigned_int> FVar16;
  longlong lVar17;
  float fVar18;
  undefined1 local_res8 [8];
  undefined4 uStack_10c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  int local_e0;
  longlong *local_d8;
  longlong *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  undefined4 local_84;
  undefined4 local_64;
  
  iVar13 = *(int *)&param_1->field_0x28;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iVar11 = 0;
  iVar14 = 0;
  uVar5 = 1;
  TStack_100.CurrentBitIndex = 0;
  if (iVar13 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)TStack_100.Array;
    }
    uVar7 = *puVar15;
    while (uVar7 == 0) {
      lVar9 = (longlong)iVar11;
      iVar14 = iVar14 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_100.CurrentBitIndex = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14db36900;
      uVar7 = puVar15[lVar9 + 1];
    }
    uVar5 = -uVar7 & uVar7;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_100.CurrentBitIndex = iVar14 + -1 + (int)lVar9;
    if (iVar13 < TStack_100.CurrentBitIndex) {
      TStack_100.CurrentBitIndex = iVar13;
    }
  }
LAB_14db36900:
  TStack_100._padding_ = CONCAT44(uVar5,iVar11);
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._28_4_ = local_84;
  TStack_100.BaseBitIndex = iVar14;
  if (TStack_100.CurrentBitIndex < iVar13) {
    do {
      iVar13 = 0;
      fVar18 = 0.0;
      uVar6 = 1;
      lVar17 = (longlong)TStack_100.CurrentBitIndex * 0x60;
      lVar9 = *(longlong *)param_1;
      FVar16 = (ForElementType<unsigned_int>)(lVar9 + 0x18 + lVar17);
      local_d8 = (longlong *)(lVar9 + 8 + lVar17);
      iVar11 = 0;
      uVar5 = *(int *)((longlong)FVar16 + 0x18);
      uVar7 = 0;
      if (uVar5 != 0) {
        FVar12 = FVar16;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar16 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar12 = *(ForElementType<unsigned_int> *)((longlong)FVar16 + 0x10);
        }
        uVar7 = *(uint *)FVar12;
        while (uVar7 == 0) {
          lVar10 = (longlong)iVar11;
          iVar13 = iVar13 + 0x20;
          iVar11 = iVar11 + 1;
          uVar7 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
          goto LAB_14db36a30;
          uVar7 = ((uint *)((longlong)FVar12 + 4))[lVar10];
        }
        uVar6 = -uVar7 & uVar7;
        uVar1 = (ulonglong)uVar6 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar7 = iVar13 + -1 + (int)lVar10;
        if ((int)uVar5 < (int)uVar7) {
          uVar7 = uVar5;
        }
      }
LAB_14db36a30:
      local_d0 = (longlong *)(lVar9 + 8 + lVar17);
      uVar8 = *(uint *)(lVar17 + 0x30 + lVar9);
      TStack_c8._padding_ = CONCAT44(uVar6,iVar11);
      uVar6 = uVar8 & 0xffffffe0;
      TStack_c8.CurrentBitIndex = uVar7;
      TStack_c8.UnvisitedBitMask = 0xffffffff;
      iVar11 = (int)uVar8 >> 5;
      TStack_c8._28_4_ = local_64;
      TStack_c8.BaseBitIndex = iVar13;
      uStack_a8 = CONCAT44(uStack_10c,
                           *(int *)(lVar17 + 0x10 + lVar9) - *(int *)(lVar17 + 0x3c + lVar9));
      TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar16;
      if ((((int)uVar8 < 0) || ((int)uVar5 < (int)uVar8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = *(uint *)((longlong)FVar16 + 0x18);
      iVar13 = 0;
      if (uVar8 != uVar5) {
        FVar12 = FVar16;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar16 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar12 = *(ForElementType<unsigned_int> *)((longlong)FVar16 + 0x10);
        }
        uVar7 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)((longlong)FVar12 + (longlong)iVar11 * 4);
        while (uVar7 == 0) {
          lVar9 = (longlong)iVar11;
          uVar6 = uVar6 + 0x20;
          iVar11 = iVar11 + 1;
          uVar8 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
          goto LAB_14db36b50;
          uVar7 = ((uint *)((longlong)FVar12 + 4))[lVar9];
        }
        uVar1 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_e0 = (int)lVar9;
        uVar8 = local_e0 + -1 + uVar6;
        iVar13 = 0;
        if ((int)uVar5 < (int)uVar8) {
          uVar8 = uVar5;
        }
      }
LAB_14db36b50:
      while( true ) {
        plVar3 = local_d0;
        if ((int)local_d0[1] - *(int *)((longlong)local_d0 + 0x34) != (int)uStack_a8) {
          local_res8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        lVar9 = (longlong)TStack_c8.CurrentBitIndex;
        if (((TStack_c8.CurrentBitIndex == uVar8) &&
            ((ForElementType<unsigned_int>)TStack_c8.Array == FVar16)) && (plVar3 == local_d8))
        break;
        lVar17 = *plVar3;
        uVar5 = *(uint *)(lVar17 + lVar9 * 0x10);
        uVar7 = 0;
        if ((int)uVar5 < param_2->ArrayNum) {
          uVar7 = ~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar11 = *(int *)(lVar17 + 4 + lVar9 * 0x10);
        TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
        fVar18 = fVar18 + (float)iVar11 * param_2->DataPtr[(int)uVar5];
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
        iVar13 = iVar13 + iVar11;
      }
      if ((iVar13 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("SourceCount > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                             ,0x8c,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = *(uint *)((longlong)TStack_100.CurrentBitIndex * 0x60 + *(longlong *)param_1);
      uVar7 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      param_2->DataPtr[(int)uVar5] = fVar18 / (float)iVar13;
      TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
    } while (TStack_100.CurrentBitIndex < (TStack_100.Array)->NumBits);
  }
  return;
}

// WeldByWeightedAverage<UE::Math::TVector<float>_> @ 14db36d10

void __cdecl
UE::Chaos::ClothAsset::Private::WeldByWeightedAverage<UE::Math::TVector<float>_>
          (TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
           *param_1,TArrayView<UE::Math::TVector<float>,int> *param_2)

{
  ulonglong uVar1;
  TVector<float> *pTVar2;
  code *pcVar3;
  float fVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ForElementType<unsigned_int> FVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  longlong lVar18;
  ForElementType<unsigned_int> FVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 local_res8 [8];
  undefined4 uStack_15c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  int local_130;
  longlong *local_128;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  undefined4 local_d4;
  undefined4 local_b4;
  
  fVar4 = __real_3f800000;
  iVar15 = *(int *)&param_1->field_0x28;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iVar13 = 0;
  iVar16 = 0;
  uVar7 = 1;
  TStack_150.CurrentBitIndex = 0;
  if (iVar15 != 0) {
    puVar17 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)TStack_150.Array;
    }
    uVar9 = *puVar17;
    while (uVar9 == 0) {
      lVar11 = (longlong)iVar13;
      iVar16 = iVar16 + 0x20;
      iVar13 = iVar13 + 1;
      TStack_150.CurrentBitIndex = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14db36db0;
      uVar9 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    TStack_150.CurrentBitIndex = iVar16 + -1 + (int)lVar11;
    if (iVar15 < TStack_150.CurrentBitIndex) {
      TStack_150.CurrentBitIndex = iVar15;
    }
  }
LAB_14db36db0:
  TStack_150._padding_ = CONCAT44(uVar7,iVar13);
  TStack_150.UnvisitedBitMask = 0xffffffff;
  TStack_150._28_4_ = local_d4;
  TStack_150.BaseBitIndex = iVar16;
  if (TStack_150.CurrentBitIndex < iVar15) {
    do {
      iVar15 = 0;
      fVar21 = 0.0;
      fVar22 = 0.0;
      fVar23 = 0.0;
      uVar8 = 1;
      lVar18 = (longlong)TStack_150.CurrentBitIndex * 0x60;
      lVar11 = *(longlong *)param_1;
      FVar19 = (ForElementType<unsigned_int>)(lVar11 + 0x18 + lVar18);
      local_128 = (longlong *)(lVar11 + 8 + lVar18);
      iVar13 = 0;
      uVar7 = *(int *)((longlong)FVar19 + 0x18);
      uVar9 = 0;
      if (uVar7 != 0) {
        FVar14 = FVar19;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar19 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar14 = *(ForElementType<unsigned_int> *)((longlong)FVar19 + 0x10);
        }
        uVar9 = *(uint *)FVar14;
        while (uVar9 == 0) {
          lVar12 = (longlong)iVar13;
          iVar15 = iVar15 + 0x20;
          iVar13 = iVar13 + 1;
          uVar9 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14db36f10;
          uVar9 = ((uint *)((longlong)FVar14 + 4))[lVar12];
        }
        uVar8 = -uVar9 & uVar9;
        uVar1 = (ulonglong)uVar8 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar9 = iVar15 + -1 + (int)lVar12;
        if ((int)uVar7 < (int)uVar9) {
          uVar9 = uVar7;
        }
      }
LAB_14db36f10:
      local_120 = (longlong *)(lVar11 + 8 + lVar18);
      uVar10 = *(uint *)(lVar18 + 0x30 + lVar11);
      TStack_118._padding_ = CONCAT44(uVar8,iVar13);
      uVar8 = uVar10 & 0xffffffe0;
      TStack_118.CurrentBitIndex = uVar9;
      TStack_118.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar10 >> 5;
      TStack_118._28_4_ = local_b4;
      TStack_118.BaseBitIndex = iVar15;
      uStack_f8 = CONCAT44(uStack_15c,
                           *(int *)(lVar18 + 0x10 + lVar11) - *(int *)(lVar18 + 0x3c + lVar11));
      TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar19;
      if ((((int)uVar10 < 0) || ((int)uVar7 < (int)uVar10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = *(uint *)((longlong)FVar19 + 0x18);
      iVar15 = 0;
      if (uVar10 != uVar7) {
        FVar14 = FVar19;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar19 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar14 = *(ForElementType<unsigned_int> *)((longlong)FVar19 + 0x10);
        }
        uVar9 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)((longlong)FVar14 + (longlong)iVar13 * 4);
        while (uVar9 == 0) {
          lVar11 = (longlong)iVar13;
          uVar8 = uVar8 + 0x20;
          iVar13 = iVar13 + 1;
          uVar10 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14db37030;
          uVar9 = ((uint *)((longlong)FVar14 + 4))[lVar11];
        }
        uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_130 = (int)lVar11;
        uVar10 = local_130 + -1 + uVar8;
        iVar15 = 0;
        if ((int)uVar7 < (int)uVar10) {
          uVar10 = uVar7;
        }
      }
LAB_14db37030:
      while( true ) {
        plVar5 = local_120;
        if ((int)local_120[1] - *(int *)((longlong)local_120 + 0x34) != (int)uStack_f8) {
          local_res8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        lVar11 = (longlong)TStack_118.CurrentBitIndex;
        if (((TStack_118.CurrentBitIndex == uVar10) &&
            ((ForElementType<unsigned_int>)TStack_118.Array == FVar19)) && (plVar5 == local_128))
        break;
        lVar18 = *plVar5;
        uVar7 = *(uint *)(lVar18 + lVar11 * 0x10);
        uVar9 = 0;
        if ((int)uVar7 < param_2->ArrayNum) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar2 = param_2->DataPtr;
        iVar13 = *(int *)(lVar18 + 4 + lVar11 * 0x10);
        fVar20 = (float)iVar13;
        fVar21 = fVar21 + fVar20 * pTVar2[(int)uVar7].field0_0x0._s_0.X;
        fVar22 = fVar22 + fVar20 * pTVar2[(int)uVar7].field0_0x0._s_0.Y;
        TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
        fVar23 = fVar23 + fVar20 * pTVar2[(int)uVar7].field0_0x0._s_0.Z;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
        iVar15 = iVar15 + iVar13;
      }
      if ((iVar15 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("SourceCount > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                             ,0x8c,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar20 = fVar4 / (float)iVar15;
      uVar7 = *(uint *)((longlong)TStack_150.CurrentBitIndex * 0x60 + *(longlong *)param_1);
      uVar9 = 0;
      if ((int)uVar7 < param_2->ArrayNum) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = param_2->DataPtr;
      pTVar2[(int)uVar7].field0_0x0._s_0.X = fVar20 * fVar21;
      pTVar2[(int)uVar7].field0_0x0._s_0.Y = fVar20 * fVar22;
      pTVar2[(int)uVar7].field0_0x0._s_0.Z = fVar20 * fVar23;
      TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
    } while (TStack_150.CurrentBitIndex < (TStack_150.Array)->NumBits);
  }
  return;
}

// operator() @ 14db3c5a0

int __thiscall
`UE::Chaos::ClothAsset::Private::SimMeshBuilder::BuildIslandsFromDynamicMeshUVs'::__l18::<lambda_1>
::operator()(void *this,int param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint local_res18 [4];
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  plVar1 = *(longlong **)((longlong)this + 0x10);
  lVar11 = (longlong)param_1;
  uVar8 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  local_res18[0] = param_2;
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    iVar9 = (*pcVar5)();
    return iVar9;
  }
  lVar2 = *plVar1;
  if (*(int *)(lVar2 + lVar11 * 4) == -1) {
    lVar3 = *(longlong *)((longlong)this + 8);
    uVar10 = (ulonglong)(local_res18[0] & 0x1ff);
    lVar4 = *(longlong *)
             (*(longlong *)(**(longlong **)((longlong)this + 0x18) + 0x10) +
             (ulonglong)(local_res18[0] >> 9) * 8);
    local_38 = (float)*(double *)(lVar4 + 0x10 + uVar10 * 0x18);
    fStack_3c = (float)*(double *)(lVar4 + 8 + uVar10 * 0x18);
    local_40 = (float)*(double *)(lVar4 + uVar10 * 0x18);
    if (((*(float **)(lVar3 + 0x20) <= &local_40) &&
        (&local_40 < *(float **)(lVar3 + 0x20) + (longlong)*(int *)(lVar3 + 0x2c) * 3)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar9 = (*pcVar5)();
      return iVar9;
    }
    iVar9 = *(int *)(lVar3 + 0x28);
    if (iVar9 == *(int *)(lVar3 + 0x2c)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)(lVar3 + 0x20),(int *)(lVar3 + 0x2c));
    }
    fVar6 = __real_3f800000;
    lVar4 = *(longlong *)(lVar3 + 0x20);
    *(int *)(lVar3 + 0x28) = iVar9 + 1;
    *(ulonglong *)(lVar4 + (longlong)iVar9 * 0xc) = CONCAT44(fStack_3c,local_40);
    *(float *)(lVar4 + 8 + (longlong)iVar9 * 0xc) = local_38;
    *(int *)(lVar2 + lVar11 * 4) = iVar9;
    lVar3 = *(longlong *)((longlong)this + 8);
    fStack_44 = (fVar6 - *(float *)(*(longlong *)
                                     (*(longlong *)(*(longlong *)this + 0x48) +
                                     (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) +
                                   (ulonglong)(param_1 * 2 + 1U & 0x1ff) * 4)) *
                (*(float **)((longlong)this + 0x20))[1];
    local_48 = (fVar6 - *(float *)(*(longlong *)
                                    (*(longlong *)(*(longlong *)this + 0x48) +
                                    (ulonglong)((param_1 & 0x7fffffffU) >> 8) * 8) +
                                  (ulonglong)(param_1 * 2 & 0x1ff) * 4)) *
               **(float **)((longlong)this + 0x20);
    if (((*(float **)(lVar3 + 0x10) <= &local_48) &&
        (&local_48 < *(float **)(lVar3 + 0x10) + (longlong)*(int *)(lVar3 + 0x1c) * 2)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar9 = (*pcVar5)();
      return iVar9;
    }
    iVar9 = *(int *)(lVar3 + 0x18);
    if (iVar9 == *(int *)(lVar3 + 0x1c)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)(lVar3 + 0x10),(int *)(lVar3 + 0x1c));
    }
    *(int *)(lVar3 + 0x18) = iVar9 + 1;
    *(ulonglong *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar9 * 8) = CONCAT44(fStack_44,local_48)
    ;
    lVar3 = *(longlong *)((longlong)this + 0x28);
    if (lVar3 != 0) {
      uVar8 = param_3 * 3;
      lVar4 = *(longlong *)((longlong)this + 8);
      local_34 = *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar8 >> 9) * 8) +
                  (ulonglong)(uVar8 & 0x1ff) * 4);
      uStack_30 = *(undefined4 *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                   (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
      local_2c = *(undefined4 *)
                  (*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                  (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
      if (((*(undefined4 **)(lVar4 + 0x30) <= &local_34) &&
          (&local_34 < *(undefined4 **)(lVar4 + 0x30) + (longlong)*(int *)(lVar4 + 0x3c) * 3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar9 = (*pcVar5)();
        return iVar9;
      }
      iVar9 = *(int *)(lVar4 + 0x38);
      if (iVar9 == *(int *)(lVar4 + 0x3c)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)(lVar4 + 0x30),(int *)(lVar4 + 0x3c));
      }
      *(int *)(lVar4 + 0x38) = iVar9 + 1;
      lVar3 = *(longlong *)(lVar4 + 0x30);
      *(ulonglong *)(lVar3 + (longlong)iVar9 * 0xc) = CONCAT44(uStack_30,local_34);
      *(undefined4 *)(lVar3 + 8 + (longlong)iVar9 * 0xc) = local_2c;
    }
    lVar3 = *(longlong *)((longlong)this + 8);
    if (((*(uint **)(lVar3 + 0x40) <= local_res18) &&
        (local_res18 < *(uint **)(lVar3 + 0x40) + *(int *)(lVar3 + 0x4c))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      iVar9 = (*pcVar5)();
      return iVar9;
    }
    iVar9 = *(int *)(lVar3 + 0x48);
    if (iVar9 == *(int *)(lVar3 + 0x4c)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)(lVar3 + 0x40),(int *)(lVar3 + 0x4c));
    }
    *(int *)(lVar3 + 0x48) = iVar9 + 1;
    *(uint *)(*(longlong *)(lVar3 + 0x40) + (longlong)iVar9 * 4) = local_res18[0];
    iVar9 = *(int *)(lVar2 + lVar11 * 4);
  }
  else {
    iVar9 = *(int *)(lVar2 + lVar11 * 4);
  }
  return iVar9;
}

// AddSeam @ 14db3d810

void __cdecl
UE::Chaos::ClothAsset::Private::SimMeshBuilder::AddSeam
          (FCollectionClothFacade *param_1,FSeam *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FConstClothCollection *pFVar5;
  code *pcVar6;
  FSeam *pFVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  longlong lVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  TReferenceControllerBase<1> *local_res10;
  int local_res18;
  TReferenceControllerBase<1> *local_res20;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  int local_108;
  uint uStack_104;
  undefined1 *puStack_100;
  undefined4 local_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  undefined8 uStack_c8;
  int local_c0;
  undefined4 uStack_bc;
  undefined **local_b8;
  FConstClothCollection *local_b0;
  TReferenceControllerBase<1> *local_a8;
  int local_a0;
  FSeam *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<UE::Math::TIntVector2<int>_const_,int> local_58;
  
  pTVar4 = *(TReferenceControllerBase<1> **)&param_1->field_0x10;
  pFVar5 = *(FConstClothCollection **)&param_1->field_0x8;
  iVar10 = (param_2->Patterns).field0_0x0._s_0.X;
  local_res10 = pTVar4;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar8 = FConstClothCollection::IsValid(pFVar5,None);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClothCollection->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                         ,0x71,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((iVar10 < 0) ||
      (iVar9 = FManagedArrayCollection::NumElements
                         ((pFVar5->ManagedArrayCollection).Object,ClothCollectionGroup::SimPatterns)
      , iVar9 <= iVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PatternIndex >= 0 && PatternIndex < ClothCollection->GetNumElements(ClothCollectionGroup::SimPatterns)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                         ,0x72,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res10);
  iVar10 = FConstClothCollection::GetElementsOffset(pFVar5->SimVertices2DStart,0,iVar10);
  local_res10 = (TReferenceControllerBase<1> *)CONCAT44(local_res10._4_4_,iVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar4 = *(TReferenceControllerBase<1> **)&param_1->field_0x10;
  iVar10 = (param_2->Patterns).field0_0x0._s_0.Y;
  pFVar5 = *(FConstClothCollection **)&param_1->field_0x8;
  local_res20 = pTVar4;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar8 = FConstClothCollection::IsValid(pFVar5,None);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClothCollection->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                         ,0x71,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((iVar10 < 0) ||
      (iVar9 = FManagedArrayCollection::NumElements
                         ((pFVar5->ManagedArrayCollection).Object,ClothCollectionGroup::SimPatterns)
      , iVar9 <= iVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PatternIndex >= 0 && PatternIndex < ClothCollection->GetNumElements(ClothCollectionGroup::SimPatterns)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                         ,0x72,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res20);
  iVar10 = FConstClothCollection::GetElementsOffset(pFVar5->SimVertices2DStart,0,iVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar9 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&param_1->field_0x8,
                     ClothCollectionGroup::Seams);
  FCollectionClothFacade::SetNumSeams(param_1,iVar9 + 1);
  pTVar4 = *(TReferenceControllerBase<1> **)&param_1->field_0x10;
  pFVar5 = *(FConstClothCollection **)&param_1->field_0x8;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b0 = pFVar5;
  local_a8 = pTVar4;
  local_a0 = iVar9;
  bVar8 = FConstClothCollection::IsValid(pFVar5,None);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClothCollection->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                         ,0x28a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((iVar9 < 0) ||
      (iVar11 = FManagedArrayCollection::NumElements
                          ((pFVar5->ManagedArrayCollection).Object,ClothCollectionGroup::Seams),
      iVar11 <= iVar9)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SeamIndex >= 0 && SeamIndex < ClothCollection->GetNumElements(ClothCollectionGroup::Seams)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                         ,0x28b,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  local_b8 = &___7FCollectionClothSeamFacade_ClothAsset_Chaos_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  uVar15 = *(int *)&(param_2->Stitches).Elements.field_0x8 -
           *(int *)&(param_2->Stitches).Elements.field_0x34;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_10c = 0;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  local_110 = 0;
  if (0 < (int)uVar15) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar15,&local_118,0,&local_10c);
  }
  iVar9 = *(int *)&(param_2->Stitches).Elements.field_0x28;
  pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Stitches).Elements.field_0x10;
  local_108 = 0;
  uStack_104 = 1;
  iStack_f4 = 0;
  iStack_f0 = 0;
  if (iVar9 != 0) {
    puVar16 = *(uint **)&(param_2->Stitches).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)pTVar14;
    }
    uVar15 = *puVar16;
    iStack_f0 = 0;
    local_108 = 0;
    while (uVar15 == 0) {
      lVar13 = (longlong)local_108;
      iStack_f0 = iStack_f0 + 0x20;
      local_108 = local_108 + 1;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < local_108) goto LAB_14db3dbbf;
      uVar15 = puVar16[lVar13 + 1];
    }
    uStack_104 = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_104 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res18 = (int)lVar13;
    iStack_f4 = local_res18 + -1 + iStack_f0;
    if (iVar9 < iStack_f4) {
LAB_14db3dbbf:
      iStack_f4 = iVar9;
    }
  }
  local_f8 = 0xffffffff;
  iVar11 = *(int *)&(param_2->Stitches).Elements.field_0x28;
  TStack_90._padding_ = CONCAT44(uStack_104,local_108);
  bVar12 = (byte)iVar11 & 0x1f;
  local_c0 = *(int *)&(param_2->Stitches).Elements.field_0x8 -
             *(int *)&(param_2->Stitches).Elements.field_0x34;
  TStack_90.CurrentBitIndex = iStack_f4;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  uStack_c8._4_4_ = uStack_ec;
  uStack_c8._0_4_ = iStack_f0;
  local_e8.UnvisitedBitMask = -1 << bVar12;
  local_e8._padding_ = CONCAT44(1 << bVar12,iVar11 >> 5);
  local_e8._24_8_ = CONCAT44(iStack_f4,iVar11) & 0xffffffffffffffe0;
  uStack_70 = CONCAT44(uStack_bc,local_c0);
  puStack_100 = (undefined1 *)pTVar14;
  local_e8.Array = pTVar14;
  local_98 = param_2;
  TStack_90.Array = pTVar14;
  TStack_90._24_8_ = uStack_c8;
  local_e8.CurrentBitIndex = iVar11;
  if (((iVar11 < 0) || (iVar9 < iVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (iVar11 != *(int *)&(param_2->Stitches).Elements.field_0x28) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e8);
    pTVar14 = local_e8.Array;
    iVar11 = local_e8.CurrentBitIndex;
  }
  iVar9 = (int)local_res10;
  while( true ) {
    pFVar7 = local_98;
    if (*(int *)&(local_98->Stitches).Elements.field_0x8 -
        *(int *)&(local_98->Stitches).Elements.field_0x34 != (int)uStack_70) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<UE::Math::TIntVector2<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    iVar2 = local_110;
    if (((TStack_90.CurrentBitIndex == iVar11) && (TStack_90.Array == pTVar14)) &&
       (pFVar7 == param_2)) break;
    lVar13 = *(longlong *)&(pFVar7->Stitches).Elements;
    iVar2 = *(int *)(lVar13 + 4 + (longlong)TStack_90.CurrentBitIndex * 0x10);
    iVar3 = *(int *)(lVar13 + (longlong)TStack_90.CurrentBitIndex * 0x10);
    if (local_110 == local_10c) {
      local_110 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_118,&local_10c);
    }
    lVar13 = (longlong)local_110;
    local_110 = local_110 + 1;
    *(int *)(local_118.Data + lVar13 * 8) = iVar3 + iVar9;
    *(int *)(local_118.Data + lVar13 * 8 + 4) = iVar2 + iVar10;
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  local_68 = local_118.Data;
  if ((local_110 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iStack_60 = iVar2;
  local_58._12_4_ = uStack_5c;
  local_58.ArrayNum = iVar2;
  local_58.DataPtr = (TIntVector2<int> *)local_68;
  FCollectionClothSeamFacade::Initialize((FCollectionClothSeamFacade *)&local_b8,&local_58);
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a8);
  return;
}

// BuildIslandsFromDynamicMeshUVs @ 14db445a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::Private::SimMeshBuilder::BuildIslandsFromDynamicMeshUVs
          (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_1,
          TVector2<float> *param_2,bool param_3,
          TArray<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,TSizedDefaultAllocator<32>_>
          *param_4)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  FIsland *pFVar5;
  longlong lVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ForAnyElementType FVar20;
  undefined8 *puVar21;
  int iVar22;
  ulonglong uVar23;
  ForElementType<unsigned_int> FVar24;
  uint uVar25;
  int *piVar26;
  longlong lVar27;
  undefined1 auStackY_238 [32];
  undefined1 local_1e8 [4];
  uint local_1e4;
  ForAnyElementType local_1e0;
  uint local_1d8;
  uint uStack_1d4;
  undefined4 local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  uint local_1c0 [2];
  longlong local_1b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1b0;
  TDynamicMeshOverlay<float,2> *local_1a0;
  uint local_198;
  uint local_194;
  longlong local_190;
  undefined8 *local_188;
  uint local_180;
  uint uStack_17c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_178;
  undefined4 local_170;
  uint uStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  int local_158;
  int local_150 [4];
  undefined4 local_140;
  int local_13c;
  int local_138;
  int local_134;
  FScriptContainerElement *local_130;
  TVector2<float> *local_128;
  longlong local_120;
  TArray<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,TSizedDefaultAllocator<32>_>
  *local_118;
  int *local_110;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_100;
  undefined8 *local_d8;
  TDynamicMeshOverlay<float,2> *local_c8;
  FScriptContainerElement *local_c0;
  ForAnyElementType *local_b8;
  longlong *local_b0;
  TVector2<float> *local_a8;
  longlong local_a0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1b8 = *(longlong *)param_1;
  local_1a0 = (TDynamicMeshOverlay<float,2> *)param_1;
  local_128 = param_2;
  local_118 = param_4;
  if ((local_1b8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothGeometryTools.cpp"
                         ,0x125,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar20.Data = (FScriptContainerElement *)0x0;
  pFVar14 = FVar20.Data;
  if (*(FScriptContainerElement **)(local_1b8 + 0x208) != (FScriptContainerElement *)0x0) {
    pFVar14 = *(FScriptContainerElement **)(local_1b8 + 0x208);
  }
  if (((param_3) && (pFVar14 != (FScriptContainerElement *)0x0)) && (0 < *(int *)(pFVar14 + 0x38)))
  {
    local_190 = **(longlong **)(pFVar14 + 0x30);
  }
  else {
    local_190 = 0;
  }
  piVar26 = &param_4->ArrayMax;
  pFVar5 = (FIsland *)(param_4->AllocatorInstance).Data;
  local_110 = piVar26;
  if (*piVar26 < 0) {
    DestructItems<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,int>
              (pFVar5,param_4->ArrayNum);
    param_4->ArrayNum = 0;
    if (*piVar26 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&param_4->AllocatorInstance,0,piVar26);
    }
  }
  else {
    DestructItems<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,int>
              (pFVar5,param_4->ArrayNum);
    param_4->ArrayNum = 0;
  }
  uVar17 = *(uint *)(local_1b8 + 0x170);
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (uVar17 != 0) {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar17);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98,uVar17);
    if (uVar17 < 4) {
      uVar17 = 1;
    }
    else {
      uVar23 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
      lVar27 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      local_140 = (undefined4)lVar27;
      uVar17 = 1 << ((byte)lVar27 & 0x1f);
    }
    if ((local_50 == 0) || ((int)local_50 < (int)uVar17)) {
      local_50 = uVar17;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar17 != 0) {
        uVar25 = uVar17;
        if (uVar17 < 2) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar25 = 0;
            goto LAB_14db44787;
          }
        }
        else {
LAB_14db44787:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar25,4)
          ;
        }
        if (0 < (int)uVar17) {
          uVar23 = (ulonglong)uVar17;
          pFVar14 = FVar20.Data;
          do {
            FVar13.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar13.Data = local_58.Data;
            }
            uVar11 = (longlong)(int)uVar17 - 1U & (ulonglong)pFVar14;
            pFVar14 = pFVar14 + 1;
            *(undefined4 *)(FVar13.Data + uVar11 * 4) = 0xffffffff;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
      if (local_50 != 0) {
        pTStack_178 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        local_180 = 0;
        uStack_17c = 1;
        uStack_16c = 0;
        uStack_168 = 0;
        pFVar14 = FVar20.Data;
        if (local_70 != 0) {
          FVar24 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar24 = local_78;
          }
          uVar17 = *(uint *)FVar24;
          pFVar15 = FVar20.Data;
          while (uVar17 == 0) {
            uStack_168 = (int)pFVar15 + 0x20;
            pFVar15 = (FScriptContainerElement *)(ulonglong)uStack_168;
            iVar10 = (int)pFVar14;
            local_180 = iVar10 + 1;
            pFVar14 = (FScriptContainerElement *)(ulonglong)local_180;
            if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_180)
            goto LAB_14db4489d;
            uVar17 = ((uint *)((longlong)FVar24 + 4))[iVar10];
          }
          uStack_17c = -uVar17 & uVar17;
          uVar23 = (ulonglong)uStack_17c * 2 + 1;
          lVar27 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          local_13c = (int)lVar27;
          uStack_16c = (uStack_168 - 1) + local_13c;
          pFVar14 = (FScriptContainerElement *)(ulonglong)uStack_16c;
          if ((int)local_70 < (int)uStack_16c) {
LAB_14db4489d:
            pFVar14 = (FScriptContainerElement *)(ulonglong)local_70;
            uStack_16c = local_70;
          }
        }
        local_170 = 0xffffffff;
        local_108 = (longlong *)local_98;
        local_100._padding_ = CONCAT44(uStack_17c,local_180);
        local_100.CurrentBitIndex = uStack_16c;
        local_100.UnvisitedBitMask = 0xffffffff;
        local_100._28_4_ = uStack_164;
        local_100.BaseBitIndex = uStack_168;
        local_100.Array = pTStack_178;
        if ((int)pFVar14 < (int)local_70) {
          do {
            iVar10 = (int)pFVar14;
            uVar17 = local_50 - 1 & *(uint *)(*local_108 + (longlong)iVar10 * 0xc);
            lVar27 = *local_108 + (longlong)iVar10 * 0xc;
            *(uint *)(lVar27 + 8) = uVar17;
            FVar13.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar13.Data = local_58.Data;
            }
            uVar23 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar17;
            *(undefined4 *)(lVar27 + 4) = *(undefined4 *)(FVar13.Data + uVar23 * 4);
            *(int *)(FVar13.Data + uVar23 * 4) = iVar10;
            local_100.UnvisitedBitMask = local_100.UnvisitedBitMask & ~local_100._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_100);
            pFVar14 = (FScriptContainerElement *)(ulonglong)(uint)local_100.CurrentBitIndex;
          } while (local_100.CurrentBitIndex < (local_100.Array)->NumBits);
        }
      }
    }
  }
  local_1e0.Data = (FScriptContainerElement *)0x0;
  local_1d8 = 0;
  uStack_1d4 = 0;
  uVar17 = *(int *)(local_1b8 + 0x144) + *(int *)(local_1b8 + 0x140) * 0x200;
  local_120 = local_1b8;
  local_1e4 = 0;
  pFVar14 = FVar20.Data;
  if ((uVar17 != 0) &&
     (pFVar14 = (FScriptContainerElement *)0x0,
     0xfffd < (ushort)(*(short *)**(undefined8 **)(local_1b8 + 0x148) - 1U))) {
    pFVar14 = (FScriptContainerElement *)&DAT_00000001;
    local_1e4 = 1;
    uVar25 = 1;
    if ((int)uVar17 < 2) goto LAB_14db449f2;
    do {
      sVar2 = *(short *)((*(undefined8 **)(local_1b8 + 0x148))[(ulonglong)pFVar14 >> 9] +
                        (ulonglong)((uint)pFVar14 & 0x1ff) * 2);
      if ((sVar2 != 0) && (sVar2 != -1)) break;
      uVar25 = (uint)pFVar14 + 1;
      pFVar14 = (FScriptContainerElement *)(ulonglong)uVar25;
    } while ((int)uVar25 < (int)uVar17);
    local_1e4 = (uint)pFVar14;
  }
  uVar25 = (uint)pFVar14;
LAB_14db449f2:
  lVar27 = local_1b8;
  FVar13.Data = local_58.Data;
  local_194 = uVar17;
  if (uVar25 == uVar17) {
LAB_14db45136:
    if (FVar20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar20.Data);
      FVar13.Data = local_58.Data;
    }
    local_50 = 0;
    if (FVar13.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar13.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    return;
  }
LAB_14db44a00:
  local_1c0[0] = (uint)pFVar14;
  if (local_98._8_4_ != local_64) {
    pFVar15 = local_60;
    if (FVar13.Data != (FScriptContainerElement *)0x0) {
      pFVar15 = FVar13.Data;
    }
    for (iVar10 = *(int *)(pFVar15 + ((ulonglong)(local_50 - 1) & (ulonglong)pFVar14) * 4);
        iVar10 != -1; iVar10 = *(int *)(local_98._0_8_ + (longlong)iVar10 * 0xc + 4)) {
      uVar25 = local_1c0[0];
      if (*(uint *)(local_98._0_8_ + (longlong)iVar10 * 0xc) == local_1c0[0]) goto LAB_14db450cc;
    }
  }
  iVar10 = param_4->ArrayNum;
  if (iVar10 == *piVar26) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&param_4->AllocatorInstance,piVar26);
  }
  param_4->ArrayNum = iVar10 + 1;
  local_130 = (param_4->AllocatorInstance).Data + (longlong)iVar10 * 0x50;
  DefaultConstructItems<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,int>(local_130,1);
  uVar17 = (((TDynamicMeshOverlay<float,2> *)param_1)->ElementsRefCounts).RefCounts.CurBlock * 0x200
           + (((TDynamicMeshOverlay<float,2> *)param_1)->ElementsRefCounts).RefCounts.CurBlockUsed;
  local_1d0 = 0xffffffff;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  local_1d8 = 0;
  if (uStack_1d4 != uVar17) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,&local_1e0,0,(int *)&uStack_1d4);
  }
  if (0 < (int)uVar17) {
    uVar23 = (ulonglong)uVar17;
    do {
      if (((local_1e0.Data <= (FScriptContainerElement *)&local_1d0) &&
          ((FScriptContainerElement *)&local_1d0 < local_1e0.Data + (longlong)(int)uStack_1d4 * 4))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_1d8 == uStack_1d4) {
        local_1d8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_1e0,(int *)&uStack_1d4);
      }
      uVar17 = local_1d8 + 1;
      *(undefined4 *)(local_1e0.Data + (longlong)(int)local_1d8 * 4) = local_1d0;
      uVar23 = uVar23 - 1;
      local_1d8 = uVar17;
    } while (uVar23 != 0);
    pFVar14 = (FScriptContainerElement *)(ulonglong)local_1c0[0];
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,&local_138,
             (bool *)local_1c0);
  local_188 = ::operator_new(0x10);
  if (local_188 == (undefined8 *)0x0) {
    local_188 = (undefined8 *)0x0;
    local_d8 = local_188;
  }
  else {
    *local_188 = 0;
    local_188[1] = 0;
    *local_188 = 0;
    local_d8 = local_188;
  }
  do {
    pFVar8 = local_130;
    uVar23 = (ulonglong)((uint)pFVar14 & 0x1ff);
    lVar27 = *(longlong *)(*(longlong *)(local_1b8 + 0x130) + ((ulonglong)pFVar14 >> 9) * 8);
    pFVar15 = (((TDynamicMeshOverlay<float,2> *)param_1)->ElementTriangles).Blocks.AllocatorInstance
              .Data;
    local_160 = *(undefined8 *)(lVar27 + uVar23 * 0xc);
    iVar10 = *(int *)(lVar27 + 8 + uVar23 * 0xc);
    uVar17 = (uint)pFVar14 * 3;
    lVar27 = (ulonglong)(uVar17 & 0x1ff) * 4;
    local_150[0] = *(int *)(lVar27 + *(longlong *)(pFVar15 + (ulonglong)(uVar17 >> 9) * 8));
    uVar16 = (ulonglong)(uVar17 + 1 & 0x1ff);
    uVar23 = (ulonglong)(uVar17 + 1 >> 9);
    iVar3 = *(int *)(*(longlong *)(pFVar15 + uVar23 * 8) + uVar16 * 4);
    uVar11 = (ulonglong)(uVar17 + 2 >> 9);
    lVar1 = (ulonglong)(uVar17 + 2 & 0x1ff) * 4;
    iVar4 = *(int *)(lVar1 + *(longlong *)(pFVar15 + uVar11 * 8));
    if (local_190 == 0) {
      iVar18 = -1;
      iVar19 = -1;
      iVar22 = -1;
    }
    else {
      lVar6 = *(longlong *)(local_190 + 0x78);
      iVar22 = *(int *)(lVar27 + *(longlong *)((ulonglong)(uVar17 >> 9) * 8 + lVar6));
      iVar18 = *(int *)(*(longlong *)(uVar23 * 8 + lVar6) + uVar16 * 4);
      iVar19 = *(int *)(lVar1 + *(longlong *)(uVar11 * 8 + lVar6));
    }
    local_c8 = local_1a0;
    local_b8 = &local_1e0;
    local_b0 = &local_1b8;
    local_a0 = local_190;
    local_a8 = local_128;
    local_c0 = local_130;
    local_158 = iVar10;
    local_150[1] = iVar3;
    local_150[2] = iVar4;
    local_1cc = `UE::Chaos::ClothAsset::Private::SimMeshBuilder::BuildIslandsFromDynamicMeshUVs'::
                __l18::<lambda_1>::operator()(&local_c8,local_150[0],(int)local_160,iVar22);
    local_1c8 = `UE::Chaos::ClothAsset::Private::SimMeshBuilder::BuildIslandsFromDynamicMeshUVs'::
                __l18::<lambda_1>::operator()(&local_c8,iVar3,local_160._4_4_,iVar18);
    local_1c4 = `UE::Chaos::ClothAsset::Private::SimMeshBuilder::BuildIslandsFromDynamicMeshUVs'::
                __l18::<lambda_1>::operator()(&local_c8,iVar4,iVar10,iVar19);
    pFVar14 = pFVar8 + 0xc;
    if (((*(int **)&pFVar8->field_0x0 <= &local_1cc) &&
        (&local_1cc < *(int **)&pFVar8->field_0x0 + *(int *)pFVar14)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = *(int *)&pFVar8[8].field_0x0;
    if (iVar10 == *(int *)pFVar14) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar8,(int *)pFVar14);
    }
    *(int *)&pFVar8[8].field_0x0 = iVar10 + 1;
    *(int *)(*(longlong *)&pFVar8->field_0x0 + (longlong)iVar10 * 4) = local_1cc;
    if (((*(int **)&pFVar8->field_0x0 <= &local_1c8) &&
        (&local_1c8 < *(int **)&pFVar8->field_0x0 + *(int *)pFVar14)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = *(int *)&pFVar8[8].field_0x0;
    if (iVar10 == *(int *)pFVar14) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar8,(int *)pFVar14);
    }
    *(int *)&pFVar8[8].field_0x0 = iVar10 + 1;
    *(int *)(*(longlong *)&pFVar8->field_0x0 + (longlong)iVar10 * 4) = local_1c8;
    if (((*(int **)&pFVar8->field_0x0 <= &local_1c4) &&
        (&local_1c4 < *(int **)&pFVar8->field_0x0 + *(int *)pFVar14)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = *(int *)&pFVar8[8].field_0x0;
    if (iVar10 == *(int *)pFVar14) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar8,(int *)pFVar14);
    }
    *(int *)&pFVar8[8].field_0x0 = iVar10 + 1;
    lVar27 = 0;
    *(int *)(*(longlong *)&pFVar8->field_0x0 + (longlong)iVar10 * 4) = local_1c4;
    local_1b0.ArrayMax = 0;
    local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    do {
      local_1b0.ArrayNum = 0;
      if ((local_1b0.ArrayMax < 0) && (local_1b0.ArrayMax != 0)) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_1b0.AllocatorInstance,0,&local_1b0.ArrayMax);
      }
      UE::Geometry::TDynamicMeshOverlay<float,2>::GetElementTriangles
                (local_1a0,local_150[lVar27],&local_1b0);
      iVar10 = local_1b0.ArrayNum;
      pFVar14 = local_1b0.AllocatorInstance.Data + (longlong)local_1b0.ArrayNum * 4;
      FVar20.Data = local_1b0.AllocatorInstance.Data;
      while( true ) {
        if (local_1b0.ArrayNum != iVar10) {
          local_1e8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1e8);
        }
        if (FVar20.Data == pFVar14) break;
        uVar17 = *(uint *)FVar20.Data;
        local_198 = uVar17;
        if (local_98._8_4_ != local_64) {
          FVar13.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar13.Data = local_58.Data;
          }
          for (iVar3 = *(int *)(FVar13.Data + (ulonglong)(local_50 - 1 & uVar17) * 4); iVar3 != -1;
              iVar3 = *(int *)(local_98._0_8_ + (longlong)iVar3 * 0xc + 4)) {
            if (*(uint *)(local_98._0_8_ + (longlong)iVar3 * 0xc) == uVar17) goto LAB_14db45036;
          }
        }
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,&local_134,
                   (bool *)&local_198);
        puVar12 = ::operator_new(0x10);
        if (puVar12 != (undefined8 *)0x0) {
          *puVar12 = 0;
          *(uint *)(puVar12 + 1) = uVar17;
          *local_d8 = puVar12;
          local_d8 = puVar12;
        }
LAB_14db45036:
        FVar20.Data = FVar20.Data + 4;
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 < 3);
    if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.AllocatorInstance.Data);
    }
    puVar21 = local_188;
    puVar12 = (undefined8 *)*local_188;
    if (puVar12 == (undefined8 *)0x0) break;
    pFVar14 = (FScriptContainerElement *)(ulonglong)*(uint *)(puVar12 + 1);
    *(undefined4 *)(puVar12 + 1) = 0;
    local_188 = puVar12;
    ::operator_delete(puVar21,0x10);
    param_1 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)local_1a0;
  } while( true );
  do {
    puVar12 = (undefined8 *)*puVar21;
    ::operator_delete(puVar21,0x10);
    lVar27 = local_120;
    puVar21 = puVar12;
    FVar13.Data = local_58.Data;
    FVar20.Data = local_1e0.Data;
    piVar26 = local_110;
    param_4 = local_118;
    param_1 = (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)local_1a0;
    uVar17 = local_194;
    uVar25 = local_1e4;
  } while (puVar12 != (undefined8 *)0x0);
LAB_14db450cc:
  local_1e4 = uVar25 + 1;
  pFVar14 = (FScriptContainerElement *)(ulonglong)local_1e4;
  if ((int)local_1e4 < (int)uVar17) {
    do {
      lVar6 = (ulonglong)((uint)pFVar14 & 0x1ff) * 2;
      lVar1 = *(longlong *)(((ulonglong)pFVar14 >> 9) * 8 + *(longlong *)(lVar27 + 0x148));
      if ((*(short *)(lVar6 + lVar1) != 0) && (*(short *)(lVar6 + lVar1) != -1)) break;
      uVar25 = (uint)pFVar14 + 1;
      pFVar14 = (FScriptContainerElement *)(ulonglong)uVar25;
    } while ((int)uVar25 < (int)uVar17);
    local_1e4 = (uint)pFVar14;
  }
  if (local_1e4 == uVar17) goto LAB_14db45136;
  goto LAB_14db44a00;
}

// BuildSeams @ 14db451c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::Private::SimMeshBuilder::BuildSeams
          (TArray<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,TSizedDefaultAllocator<32>_>
           *param_1,FDynamicMesh3 *param_2,int param_3,
          TArray<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FSeam,TSizedDefaultAllocator<32>_>
          *param_4)

{
  FSeam *pFVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  TArray<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FSeam,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined4 *puVar8;
  uint *puVar9;
  TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar10;
  void *pvVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar16;
  ulonglong uVar17;
  uint *puVar18;
  FScriptContainerElement *pFVar19;
  uint *puVar20;
  ForElementType<FSetElementId> FVar21;
  uint uVar22;
  longlong lVar23;
  undefined8 *puVar24;
  uint uVar25;
  uint uVar26;
  undefined1 *puVar27;
  ForElementType<unsigned_int> FVar28;
  undefined4 *puVar29;
  TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar30;
  ForElementType<unsigned_int> FVar31;
  FScriptContainerElement *pFVar32;
  TBitArray<FDefaultBitArrayAllocator> *pTVar33;
  undefined1 auStackY_338 [32];
  undefined1 local_2e8;
  undefined1 local_2e7;
  undefined1 local_2e6;
  undefined1 local_2e5;
  uint local_2e4;
  uint local_2e0;
  uint local_2dc;
  uint local_2d8;
  uint local_2d4;
  uint *local_2d0;
  ForAnyElementType local_2c8;
  int local_2c0 [3];
  uint local_2b4;
  int local_2b0;
  int iStack_2ac;
  longlong local_2a8;
  TBitArray<FDefaultBitArrayAllocator> *local_2a0;
  uint local_298 [2];
  TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_290;
  longlong local_288;
  TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_280;
  uint uStack_278;
  uint uStack_274;
  ForElementType<unsigned_int> local_270;
  undefined4 uStack_268;
  uint uStack_264;
  uint local_260;
  undefined4 uStack_25c;
  int iStack_258;
  undefined4 uStack_254;
  undefined4 local_250;
  uint uStack_24c;
  uint *local_248;
  TArray<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FSeam,TSizedDefaultAllocator<32>_>
  *local_240;
  undefined4 local_238;
  int local_234;
  int local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 *local_218;
  uint *local_210;
  uint *local_208;
  FScriptContainerElement *local_200;
  ForElementType<unsigned_int> local_1f8;
  TArray<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,TSizedDefaultAllocator<32>_>
  *local_1f0;
  int local_1e8;
  int local_1e4;
  TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  FSparseArrayAllocationInfo local_180;
  FSparseArrayAllocationInfo local_170;
  FNonManifoldMappingSupport local_160 [2];
  undefined4 local_134;
  undefined4 local_114;
  undefined1 local_108 [32];
  ForElementType<unsigned_int> local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined1 local_d0 [8];
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  TIntVector2<int>_u_0 local_b8 [2];
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 local_70 [8];
  ForElementType<FSetElementId> local_68;
  int local_60;
  TIntVector2<int>_u_0 local_58 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_338;
  pFVar1 = (FSeam *)(param_4->AllocatorInstance).Data;
  local_2c0[2] = param_3;
  local_240 = param_4;
  local_1f0 = param_1;
  if (param_4->ArrayMax < 0) {
    DestructItems<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FSeam,int>
              (pFVar1,param_4->ArrayNum);
    param_4->ArrayNum = 0;
    if (param_4->ArrayMax != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
    }
  }
  else {
    DestructItems<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FSeam,int>
              (pFVar1,param_4->ArrayNum);
    param_4->ArrayNum = 0;
  }
  UE::Geometry::FNonManifoldMappingSupport::FNonManifoldMappingSupport(local_160,param_2);
  uVar26 = param_1->ArrayNum;
  local_2c8.Data = (FScriptContainerElement *)0x0;
  local_2c0[0] = 0;
  local_2c0[1] = 0;
  if ((int)uVar26 < 1) {
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
    }
  }
  else {
    iVar13 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x50,8,uVar26,&local_2c8,local_2c0,local_2c0 + 1);
    DefaultConstructItems<TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,int>
              (local_2c8.Data + (longlong)iVar13 * 0x50,uVar26);
  }
  iVar13 = param_1->ArrayNum;
  local_2d4 = 0;
  if (0 < iVar13) {
    local_288 = 0;
    do {
      lVar23 = local_288;
      uVar25 = local_2d4;
      uVar26 = 0;
      uVar22 = ~local_2d4;
      uVar14 = uVar26;
      if ((int)local_2d4 < iVar13) {
        uVar14 = uVar22 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar32 = (param_1->AllocatorInstance).Data;
      lVar23 = lVar23 * 0x50;
      uVar14 = uVar26;
      if ((int)uVar25 < local_2c0[0]) {
        uVar14 = uVar22 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar30 = (TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *)(local_2c8.Data + lVar23);
      local_290 = pTVar30;
      TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Reserve(pTVar30,*(int *)(pFVar32 + lVar23 + 0x48));
      local_2e0 = 0;
      if (0 < *(int *)(pFVar32 + lVar23 + 0x48)) {
        do {
          uVar14 = local_2e0;
          uVar22 = uVar26;
          if ((int)local_2e0 < *(int *)(pFVar32 + lVar23 + 0x48)) {
            uVar22 = ~local_2e0 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_298[0] = UE::Geometry::FNonManifoldMappingSupport::GetOriginalNonManifoldVertexID
                                   (local_160,
                                    *(int *)(*(longlong *)(pFVar32 + lVar23 + 0x40) +
                                            (longlong)(int)uVar14 * 4));
          pTVar16 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindOrAddImpl<int_const_&>
                              ((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                *)pTVar30,local_298[0],(int *)local_298);
          pFVar19 = (pTVar16->AllocatorInstance).Data;
          if (((pFVar19 <= (FScriptContainerElement *)&local_2e0) &&
              ((FScriptContainerElement *)&local_2e0 < pFVar19 + (longlong)pTVar16->ArrayMax * 4))
             && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar13 = pTVar16->ArrayNum;
          if (iVar13 == pTVar16->ArrayMax) {
            iVar13 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar16->AllocatorInstance,&pTVar16->ArrayMax);
          }
          pTVar16->ArrayNum = iVar13 + 1;
          *(uint *)((pTVar16->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_2e0;
          local_2e0 = local_2e0 + 1;
        } while ((int)local_2e0 < *(int *)(pFVar32 + lVar23 + 0x48));
      }
      local_58[0]._0_4_ = local_2c0[2] + uVar25;
      local_a8._0_8_ = (FScriptContainerElement *)0x0;
      pTVar33 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar30->Elements).field_0x10;
      uStack_274 = 1;
      local_a8._8_8_ = 0;
      local_88 = (ForElementType<unsigned_int>)0x0;
      local_80 = 0;
      local_7c = 0x80;
      local_78 = -1;
      local_74 = 0;
      local_68 = (ForElementType<FSetElementId>)0x0;
      local_60 = 0;
      uVar25 = *(uint *)&(pTVar30->Elements).field_0x28;
      uStack_264 = uVar26;
      local_260 = uVar26;
      if (uVar25 != 0) {
        puVar18 = *(uint **)&(pTVar30->Elements).field_0x20;
        puVar20 = (uint *)pTVar33;
        if (puVar18 != (uint *)0x0) {
          puVar20 = puVar18;
        }
        uVar14 = *puVar20;
        local_260 = 0;
        uVar26 = 0;
        while (uVar14 == 0) {
          lVar23 = (longlong)(int)uVar26;
          local_260 = local_260 + 0x20;
          uVar26 = uVar26 + 1;
          uStack_264 = uVar25;
          if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar26)
          goto LAB_14db455bd;
          uVar14 = puVar20[lVar23 + 1];
        }
        uStack_274 = -uVar14 & uVar14;
        uVar17 = (ulonglong)uStack_274 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        local_234 = (int)lVar23;
        uStack_264 = (local_260 - 1) + local_234;
        if ((int)uVar25 < (int)uStack_264) {
          uStack_264 = uVar25;
        }
      }
LAB_14db455bd:
      uVar14 = *(uint *)&(pTVar30->Elements).field_0x28;
      uStack_25c = local_134;
      uVar22 = uVar14 & 0xffffffe0;
      iStack_258 = *(int *)&(pTVar30->Elements).field_0x8 - *(int *)&(pTVar30->Elements).field_0x34;
      TStack_1d8._padding_ = CONCAT44(uStack_274,uVar26);
      uStack_268 = 0xffffffff;
      TStack_1d8.CurrentBitIndex = uStack_264;
      TStack_1d8.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar14 >> 5;
      TStack_1d8._28_4_ = local_134;
      TStack_1d8.BaseBitIndex = local_260;
      uStack_1b8 = CONCAT44(uStack_254,iStack_258);
      local_2e4 = uVar14;
      local_2a0 = pTVar33;
      local_280 = pTVar30;
      uStack_278 = uVar26;
      local_270 = (ForElementType<unsigned_int>)pTVar33;
      local_1e0 = pTVar30;
      TStack_1d8.Array = pTVar33;
      local_58[0]._4_4_ = local_58[0]._0_4_;
      if ((((int)uVar14 < 0) || ((int)uVar25 < (int)uVar14)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar26 = *(uint *)&(pTVar30->Elements).field_0x28;
      if (uVar14 != uVar26) {
        puVar2 = *(undefined1 **)&(pTVar30->Elements).field_0x20;
        puVar27 = (undefined1 *)pTVar33;
        if (puVar2 != (undefined1 *)0x0) {
          puVar27 = puVar2;
        }
        uVar25 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar13 * 4);
        while (uVar25 == 0) {
          lVar23 = (longlong)iVar13;
          uVar22 = uVar22 + 0x20;
          iVar13 = iVar13 + 1;
          uVar14 = uVar26;
          local_2e4 = uVar26;
          if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14db456e0;
          uVar25 = *(uint *)(puVar27 + lVar23 * 4 + 4);
        }
        uVar17 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
        lVar23 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        local_230 = (int)lVar23;
        uVar14 = local_230 + -1 + uVar22;
        local_2e4 = uVar14;
        if ((int)uVar26 < (int)uVar14) {
          uVar14 = uVar26;
          local_2e4 = uVar26;
        }
      }
LAB_14db456e0:
      while( true ) {
        pTVar10 = local_1e0;
        if (*(int *)&(local_1e0->Elements).field_0x8 - *(int *)&(local_1e0->Elements).field_0x34 !=
            (int)uStack_1b8) {
          local_2e8 = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2e8);
        }
        pTVar7 = local_240;
        if (((TStack_1d8.CurrentBitIndex == uVar14) && (TStack_1d8.Array == pTVar33)) &&
           (pTVar10 == pTVar30)) break;
        local_2dc = 0;
        lVar23 = (longlong)TStack_1d8.CurrentBitIndex * 0x20 + *(longlong *)&pTVar10->Elements;
        iVar13 = *(int *)(lVar23 + 0x10);
        if (0 < iVar13 + -1) {
          local_2a8 = 0;
          do {
            uVar26 = local_2dc + 1;
            if ((int)uVar26 < iVar13) {
              puVar18 = (uint *)(local_2a8 + 4);
              local_2d8 = ~local_2dc >> 0x1f;
              do {
                lVar5 = local_2a8;
                uVar14 = local_2d8;
                uVar25 = local_2dc;
                puVar24 = (undefined8 *)0x0;
                uVar22 = 0;
                if ((int)uVar26 < *(int *)(lVar23 + 0x10)) {
                  uVar22 = ~uVar26 >> 0x1f;
                }
                local_2d0 = puVar18;
                if ((uVar22 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar13 = *(int *)((longlong)puVar18 + *(longlong *)(lVar23 + 8));
                uVar22 = 0;
                if ((int)uVar25 < *(int *)(lVar23 + 0x10)) {
                  uVar22 = uVar14;
                }
                if ((uVar22 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iStack_2ac = *(int *)(lVar5 + *(longlong *)(lVar23 + 8));
                local_2b0 = iVar13;
                if (iStack_2ac < iVar13) {
                  local_2b0 = iStack_2ac;
                  iStack_2ac = iVar13;
                }
                if (local_74 == 0) {
                  iVar15 = Core::Private::
                           ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x10,4,1,(ForAnyElementType *)local_a8,(int *)(local_a8 + 8),
                                      (int *)(local_a8 + 0xc));
                  TBitArray<FDefaultBitArrayAllocator>::Add
                            ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),false);
                  iVar13 = local_78;
                }
                else {
                  iVar13 = *(int *)(local_a8._0_8_ + (longlong)local_78 * 0x10 + 4);
                  local_74 = local_74 + -1;
                  iVar15 = local_78;
                  if (local_74 != 0) {
                    *(undefined4 *)(local_a8._0_8_ + (longlong)iVar13 * 0x10) = 0xffffffff;
                  }
                }
                local_78 = iVar13;
                TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)local_a8,&local_170,iVar15);
                iVar13 = local_170.Index;
                if (local_170.Pointer != (undefined8 *)0x0) {
                  *(ulonglong *)local_170.Pointer = CONCAT44(iStack_2ac,local_2b0);
                  *(undefined4 *)((longlong)local_170.Pointer + 8) = 0xffffffff;
                  puVar24 = local_170.Pointer;
                }
                local_228 = *puVar24;
                uVar25 = (*FCrc::MemCrc32Func)(&local_228,8,0);
                if ((local_a8._8_4_ - local_74 != 1) &&
                   (uVar3 = *puVar24, local_a8._8_4_ != local_74)) {
                  FVar21 = (ForElementType<FSetElementId>)local_70;
                  if (local_68 != (ForElementType<FSetElementId>)0x0) {
                    FVar21 = local_68;
                  }
                  for (iVar15 = *(int *)((longlong)FVar21 + (ulonglong)(local_60 - 1U & uVar25) * 4)
                      ; iVar15 != -1;
                      iVar15 = *(int *)((FScriptContainerElement *)
                                        (local_a8._0_8_ + (longlong)iVar15 * 0x10) + 8)) {
                    uVar4 = *(undefined8 *)(local_a8._0_8_ + (longlong)iVar15 * 0x10);
                    if (((int)uVar4 == (int)uVar3) &&
                       ((int)((ulonglong)uVar4 >> 0x20) == (int)((ulonglong)uVar3 >> 0x20))) {
                      if (iVar15 != -1) {
                        *(undefined8 *)(local_a8._0_8_ + (longlong)iVar15 * 0x10) = uVar3;
                        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ::RemoveAtUninitialized
                                  ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                    *)local_a8,iVar13,1);
                        goto LAB_14db45a7b;
                      }
                      break;
                    }
                  }
                }
                uVar14 = local_a8._8_4_ - local_74;
                if (uVar14 < 4) {
                  iVar15 = 1;
                }
                else {
                  uVar17 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
                  lVar5 = 0x3f;
                  if (uVar17 != 0) {
                    for (; uVar17 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                    }
                  }
                  local_22c = (undefined4)lVar5;
                  iVar15 = 1 << ((byte)lVar5 & 0x1f);
                }
                if (((int)uVar14 < 1) || (iVar15 <= local_60)) {
                  uVar25 = local_60 - 1U & uVar25;
                  *(uint *)((longlong)puVar24 + 0xc) = uVar25;
                  FVar21 = (ForElementType<FSetElementId>)local_70;
                  if (local_68 != (ForElementType<FSetElementId>)0x0) {
                    FVar21 = local_68;
                  }
                  uVar17 = (longlong)local_60 - 1U & (longlong)(int)uVar25;
                  *(undefined4 *)(puVar24 + 1) = *(undefined4 *)((longlong)FVar21 + uVar17 * 4);
                  *(int *)((longlong)FVar21 + uVar17 * 4) = iVar13;
                }
                else {
                  local_60 = iVar15;
                  TSet<UE::Math::TIntVector2<int>,DefaultKeyFuncs<UE::Math::TIntVector2<int>,0>,FDefaultSetAllocator>
                  ::Rehash((TSet<UE::Math::TIntVector2<int>,DefaultKeyFuncs<UE::Math::TIntVector2<int>,0>,FDefaultSetAllocator>
                            *)local_a8);
                }
LAB_14db45a7b:
                uVar26 = uVar26 + 1;
                iVar13 = *(int *)(lVar23 + 0x10);
                puVar18 = local_2d0 + 1;
                local_2d0 = puVar18;
              } while ((int)uVar26 < iVar13);
            }
            local_2dc = local_2dc + 1;
            local_2a8 = local_2a8 + 4;
            pTVar33 = local_2a0;
            uVar14 = local_2e4;
          } while ((int)local_2dc < iVar13 + -1);
        }
        TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
        pTVar30 = local_290;
      }
      if (local_a8._8_4_ != local_74) {
        iVar13 = local_240->ArrayNum;
        if (iVar13 == local_240->ArrayMax) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x858,&local_240->AllocatorInstance,&local_240->ArrayMax);
        }
        pTVar7->ArrayNum = iVar13 + 1;
        FSeam::FSeam((FSeam *)((pTVar7->AllocatorInstance).Data + (longlong)iVar13 * 0x58),
                     (FSeam *)local_a8);
      }
      local_2d8 = 0;
      local_2a0 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
      if (0 < local_288) {
        FVar31 = (ForElementType<unsigned_int>)&(pTVar30->Elements).field_0x10;
        local_1f8 = FVar31;
        do {
          pTVar33 = local_2a0;
          uVar25 = local_2d8;
          uVar26 = 0;
          uVar14 = uVar26;
          if ((int)local_2d8 < local_2c0[0]) {
            uVar14 = ~local_2d8 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar30 = local_290;
          pFVar32 = local_2c8.Data + (longlong)pTVar33 * 0x50;
          uStack_274 = 1;
          local_108._0_8_ = (FScriptContainerElement *)0x0;
          local_b8[0]._0_4_ = uVar25 + local_2c0[2];
          local_108._8_8_ = 0;
          local_b8[0]._4_4_ = local_2d4 + local_2c0[2];
          local_e8 = (ForElementType<unsigned_int>)0x0;
          local_e0 = 0;
          local_dc = 0x80;
          local_d8 = -1;
          local_d4 = 0;
          local_c8 = (ForElementType<FSetElementId>)0x0;
          local_c0 = 0;
          uVar25 = *(uint *)&(local_290->Elements).field_0x28;
          uStack_264 = uVar26;
          local_260 = uVar26;
          if (uVar25 != 0) {
            FVar28 = FVar31;
            if (*(ForElementType<unsigned_int> *)((longlong)FVar31 + 0x10) !=
                (ForElementType<unsigned_int>)0x0) {
              FVar28 = *(ForElementType<unsigned_int> *)((longlong)FVar31 + 0x10);
            }
            uVar14 = *(uint *)FVar28;
            local_260 = 0;
            uVar26 = 0;
            while (uVar14 == 0) {
              lVar23 = (longlong)(int)uVar26;
              local_260 = local_260 + 0x20;
              uVar26 = uVar26 + 1;
              uStack_264 = uVar25;
              if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar26)
              goto LAB_14db45c8d;
              uVar14 = ((uint *)((longlong)FVar28 + 4))[lVar23];
            }
            uStack_274 = -uVar14 & uVar14;
            uVar17 = (ulonglong)uStack_274 * 2 + 1;
            lVar23 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            local_1e8 = (int)lVar23;
            uStack_264 = (local_260 - 1) + local_1e8;
            if ((int)uVar25 < (int)uStack_264) {
              uStack_264 = uVar25;
            }
          }
LAB_14db45c8d:
          uStack_25c = local_114;
          uVar14 = uVar25 & 0xffffffe0;
          iStack_258 = *(int *)&(local_290->Elements).field_0x8 -
                       *(int *)&(local_290->Elements).field_0x34;
          local_280 = local_290;
          TStack_1a8._padding_ = CONCAT44(uStack_274,uVar26);
          uStack_268 = 0xffffffff;
          TStack_1a8.CurrentBitIndex = uStack_264;
          TStack_1a8.UnvisitedBitMask = 0xffffffff;
          local_1b0 = local_290;
          iVar13 = (int)uVar25 >> 5;
          TStack_1a8._28_4_ = local_114;
          TStack_1a8.BaseBitIndex = local_260;
          uStack_188 = CONCAT44(uStack_254,iStack_258);
          local_2e4 = uVar25;
          uStack_278 = uVar26;
          local_270 = FVar31;
          local_200 = pFVar32;
          TStack_1a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar31;
          if (((int)uVar25 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar26 = *(uint *)&(pTVar30->Elements).field_0x28;
          if (uVar25 != uVar26) {
            FVar28 = FVar31;
            if (*(ForElementType<unsigned_int> *)((longlong)FVar31 + 0x10) !=
                (ForElementType<unsigned_int>)0x0) {
              FVar28 = *(ForElementType<unsigned_int> *)((longlong)FVar31 + 0x10);
            }
            uVar25 = -1 << ((byte)uVar25 & 0x1f) &
                     *(uint *)((longlong)FVar28 + (longlong)iVar13 * 4);
            while (uVar25 == 0) {
              lVar23 = (longlong)iVar13;
              uVar14 = uVar14 + 0x20;
              iVar13 = iVar13 + 1;
              uVar25 = uVar26;
              local_2e4 = uVar26;
              if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
              goto LAB_14db45db3;
              uVar25 = ((uint *)((longlong)FVar28 + 4))[lVar23];
            }
            uVar17 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
            lVar23 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            local_1e4 = (int)lVar23;
            uVar25 = local_1e4 + -1 + uVar14;
            local_2e4 = uVar25;
            if ((int)uVar26 < (int)uVar25) {
              uVar25 = uVar26;
              local_2e4 = uVar26;
            }
          }
LAB_14db45db3:
          while( true ) {
            pTVar10 = local_1b0;
            if (*(int *)&(local_1b0->Elements).field_0x8 - *(int *)&(local_1b0->Elements).field_0x34
                != (int)uStack_188) {
              local_2e7 = 0;
              `TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2e7);
            }
            pTVar7 = local_240;
            if (((TStack_1a8.CurrentBitIndex == uVar25) &&
                ((ForElementType<unsigned_int>)TStack_1a8.Array == FVar31)) && (pTVar10 == pTVar30))
            break;
            local_208 = (uint *)((longlong)TStack_1a8.CurrentBitIndex * 0x20 +
                                *(longlong *)&pTVar10->Elements);
            if (*(int *)(pFVar32 + 8) != *(int *)(pFVar32 + 0x34)) {
              pFVar19 = pFVar32 + 0x38;
              if (*(FScriptContainerElement **)(pFVar32 + 0x40) != (FScriptContainerElement *)0x0) {
                pFVar19 = *(FScriptContainerElement **)(pFVar32 + 0x40);
              }
              uVar26 = *(uint *)(pFVar19 +
                                (ulonglong)(*(int *)(pFVar32 + 0x48) - 1U & *local_208) * 4);
              if (uVar26 != 0xffffffff) {
                do {
                  puVar18 = (uint *)((longlong)(int)uVar26 * 0x20 + *(longlong *)pFVar32);
                  if (*puVar18 == *local_208) {
                    puVar20 = puVar18 + 2;
                    if (puVar18 == (uint *)0x0) {
                      puVar20 = (uint *)0x0;
                    }
                    local_2d0 = puVar20;
                    if (puVar20 != (uint *)0x0) {
                      local_2b4 = local_208[4];
                      uVar17 = (ulonglong)(int)local_2b4;
                      puVar18 = *(uint **)(local_208 + 2);
                      local_210 = puVar18 + uVar17;
                      while( true ) {
                        puVar9 = local_210;
                        local_248 = puVar18;
                        if (local_208[4] != (uint)uVar17) {
                          local_2e6 = 0;
                          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>
                          ::operator()(&local_2e6);
                          puVar20 = local_2d0;
                        }
                        pTVar30 = local_290;
                        FVar31 = local_1f8;
                        pFVar32 = local_200;
                        uVar25 = local_2e4;
                        if (puVar18 == puVar9) break;
                        puVar29 = *(undefined4 **)puVar20;
                        uVar26 = puVar20[2];
                        local_2dc = *puVar18;
                        local_218 = puVar29 + (int)uVar26;
                        while( true ) {
                          puVar8 = local_218;
                          if (puVar20[2] != uVar26) {
                            local_2e5 = 0;
                            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::
                            <lambda_1>::operator()(&local_2e5);
                            puVar20 = local_2d0;
                          }
                          if (puVar29 == puVar8) break;
                          local_250 = *puVar29;
                          uStack_24c = local_2dc;
                          if (local_d4 == 0) {
                            iVar15 = Core::Private::
                                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x10,4,1,(ForAnyElementType *)local_108,
                                                (int *)(local_108 + 8),(int *)(local_108 + 0xc));
                            TBitArray<FDefaultBitArrayAllocator>::Add
                                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),
                                       false);
                            iVar13 = local_d8;
                          }
                          else {
                            iVar13 = *(int *)(local_108._0_8_ + (longlong)local_d8 * 0x10 + 4);
                            local_d4 = local_d4 + -1;
                            iVar15 = local_d8;
                            if (local_d4 != 0) {
                              *(undefined4 *)(local_108._0_8_ + (longlong)iVar13 * 0x10) =
                                   0xffffffff;
                            }
                          }
                          local_d8 = iVar13;
                          TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                           *)local_108,&local_180,iVar15);
                          pvVar11 = local_180.Pointer;
                          iVar13 = local_180.Index;
                          if (local_180.Pointer != (undefined8 *)0x0) {
                            *(ulonglong *)local_180.Pointer = CONCAT44(uStack_24c,local_250);
                            *(undefined4 *)((longlong)local_180.Pointer + 8) = 0xffffffff;
                          }
                          local_220 = *(undefined8 *)local_180.Pointer;
                          uVar25 = (*FCrc::MemCrc32Func)(&local_220,8,0);
                          if ((local_108._8_4_ - local_d4 != 1) &&
                             (uVar3 = *(undefined8 *)pvVar11, local_108._8_4_ != local_d4)) {
                            FVar21 = (ForElementType<FSetElementId>)local_d0;
                            if (local_c8 != (ForElementType<FSetElementId>)0x0) {
                              FVar21 = local_c8;
                            }
                            for (iVar15 = *(int *)((longlong)FVar21 +
                                                  (ulonglong)(local_c0 - 1U & uVar25) * 4);
                                iVar15 != -1;
                                iVar15 = *(int *)((FScriptContainerElement *)
                                                  (local_108._0_8_ + (longlong)iVar15 * 0x10) + 8))
                            {
                              uVar4 = *(undefined8 *)(local_108._0_8_ + (longlong)iVar15 * 0x10);
                              if (((int)uVar4 == (int)uVar3) &&
                                 ((int)((ulonglong)uVar4 >> 0x20) == (int)((ulonglong)uVar3 >> 0x20)
                                 )) {
                                if (iVar15 != -1) {
                                  *(undefined8 *)(local_108._0_8_ + (longlong)iVar15 * 0x10) = uVar3
                                  ;
                                  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                  ::RemoveAtUninitialized
                                            ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                              *)local_108,iVar13,1);
                                  goto LAB_14db4614f;
                                }
                                break;
                              }
                            }
                          }
                          uVar14 = local_108._8_4_ - local_d4;
                          if (uVar14 < 4) {
                            iVar15 = 1;
                          }
                          else {
                            uVar17 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
                            lVar23 = 0x3f;
                            if (uVar17 != 0) {
                              for (; uVar17 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                              }
                            }
                            local_238 = (undefined4)lVar23;
                            iVar15 = 1 << ((byte)lVar23 & 0x1f);
                          }
                          if (((int)uVar14 < 1) || (iVar15 <= local_c0)) {
                            uVar25 = local_c0 - 1U & uVar25;
                            *(uint *)((longlong)pvVar11 + 0xc) = uVar25;
                            FVar21 = (ForElementType<FSetElementId>)local_d0;
                            if (local_c8 != (ForElementType<FSetElementId>)0x0) {
                              FVar21 = local_c8;
                            }
                            uVar17 = (longlong)local_c0 - 1U & (longlong)(int)uVar25;
                            *(undefined4 *)((longlong)pvVar11 + 8) =
                                 *(undefined4 *)((longlong)FVar21 + uVar17 * 4);
                            *(int *)((longlong)FVar21 + uVar17 * 4) = iVar13;
LAB_14db4614f:
                            puVar29 = puVar29 + 1;
                            puVar20 = local_2d0;
                          }
                          else {
                            local_c0 = iVar15;
                            TSet<UE::Math::TIntVector2<int>,DefaultKeyFuncs<UE::Math::TIntVector2<int>,0>,FDefaultSetAllocator>
                            ::Rehash((TSet<UE::Math::TIntVector2<int>,DefaultKeyFuncs<UE::Math::TIntVector2<int>,0>,FDefaultSetAllocator>
                                      *)local_108);
                            puVar29 = puVar29 + 1;
                            puVar20 = local_2d0;
                          }
                        }
                        uVar17 = (ulonglong)local_2b4;
                        puVar18 = local_248 + 1;
                      }
                    }
                    break;
                  }
                  uVar26 = puVar18[6];
                } while (uVar26 != 0xffffffff);
              }
            }
            TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
          }
          if (local_108._8_4_ != local_d4) {
            iVar13 = local_240->ArrayNum;
            if (iVar13 == local_240->ArrayMax) {
              iVar13 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x858,&local_240->AllocatorInstance,&local_240->ArrayMax);
            }
            pTVar7->ArrayNum = iVar13 + 1;
            FSeam::FSeam((FSeam *)((pTVar7->AllocatorInstance).Data + (longlong)iVar13 * 0x58),
                         (FSeam *)local_108);
          }
          local_c0 = 0;
          if (local_c8 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_c8);
          }
          TSparseArray<TSparseSetElement<UE::Math::TIntVector2<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<UE::Math::TIntVector2<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<UE::Math::TIntVector2<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_108);
          local_2d8 = local_2d8 + 1;
          local_2a0 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_2a0 + 1);
        } while ((longlong)local_2a0 < local_288);
      }
      lVar23 = local_288;
      local_60 = 0;
      if (local_68 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_68);
      }
      TSparseArray<TSparseSetElement<UE::Math::TIntVector2<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UE::Math::TIntVector2<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<UE::Math::TIntVector2<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      local_288 = lVar23 + 1;
      local_2d4 = local_2d4 + 1;
      iVar13 = local_1f0->ArrayNum;
      param_1 = local_1f0;
    } while ((int)local_2d4 < iVar13);
  }
  DestructItems<TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,int>
            ((TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
              *)local_2c8.Data,local_2c0[0]);
  if ((TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
       *)local_2c8.Data !=
      (TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
       *)0x0) {
    FMemory::Free(local_2c8.Data);
  }
  return;
}

// BuildStitchGroupsForVertex3D @ 14db48fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_> * __cdecl
UE::Chaos::ClothAsset::Private::BuildStitchGroupsForVertex3D
          (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArrayView<UE::Math::TIntVector2<int>,int> *param_3,int param_4,bool *param_5)

{
  int *piVar1;
  TIntVector2<int> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_> *pTVar10
  ;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar11;
  ulonglong uVar12;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  undefined1 auStackY_198 [32];
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166 [2];
  uint local_164;
  TArrayView<UE::Math::TIntVector2<int>,int> *local_160;
  bool *local_158;
  FScriptContainerElement *local_150;
  uint local_148;
  int local_140;
  int local_13c;
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
  *local_138;
  FScriptContainerElement *local_130;
  TArray<int,TSizedDefaultAllocator<32>_> *local_128;
  int local_11c;
  int local_118 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_110;
  initializer_list<int> local_108;
  initializer_list<int> local_f8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_e8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  *param_5 = false;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_148 = param_1->ArrayNum;
  uVar12 = (ulonglong)(int)local_148;
  pFVar20 = (param_1->AllocatorInstance).Data;
  local_158 = param_5;
  local_150 = pFVar20 + uVar12 * 4;
  pFVar14 = local_150;
  local_160 = param_3;
  local_138 = __return_storage_ptr__;
  local_128 = param_2;
  local_110 = param_1;
LAB_14db49030:
  do {
    local_130 = pFVar20;
    if (local_110->ArrayNum != (int)uVar12) {
      local_168 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_168);
    }
    if (pFVar20 == pFVar14) {
      pFVar14 = (local_128->AllocatorInstance).Data;
      iVar7 = local_128->ArrayNum;
      pFVar20 = pFVar14 + (longlong)iVar7 * 4;
      do {
        while( true ) {
          if (local_128->ArrayNum != iVar7) {
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_167);
          }
          if (pFVar14 == pFVar20) {
            return __return_storage_ptr__;
          }
          uVar17 = *(uint *)pFVar14;
          if (uVar17 != 0xffffffff) break;
LAB_14db49736:
          pFVar14 = pFVar14 + 4;
        }
        pFVar16 = (__return_storage_ptr__->AllocatorInstance).Data;
        iVar9 = __return_storage_ptr__->ArrayNum;
        pFVar18 = pFVar16 + (longlong)iVar9 * 0x50;
        while( true ) {
          if (local_138->ArrayNum != iVar9) {
            `TCheckedPointerIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_166);
          }
          if (pFVar16 == pFVar18) break;
          if (*(int *)(pFVar16 + 8) != *(int *)(pFVar16 + 0x34)) {
            pFVar15 = *(FScriptContainerElement **)(pFVar16 + 0x40);
            if (pFVar15 == (FScriptContainerElement *)0x0) {
              pFVar15 = pFVar16 + 0x38;
            }
            iVar8 = *(int *)(pFVar15 + (ulonglong)(*(int *)(pFVar16 + 0x48) - 1U & uVar17) * 4);
            if (iVar8 != -1) {
              do {
                __return_storage_ptr__ = local_138;
                if (*(uint *)(*(longlong *)pFVar16 + (longlong)iVar8 * 0xc) == uVar17)
                goto LAB_14db49736;
                iVar8 = *(int *)(*(longlong *)pFVar16 + 4 + (longlong)iVar8 * 0xc);
              } while (iVar8 != -1);
            }
          }
          pFVar16 = pFVar16 + 0x50;
        }
        local_f8._First = (int *)&local_164;
        local_f8._Last = (int *)&local_160;
        local_164 = uVar17;
        pTVar11 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&local_98,&local_f8);
        __return_storage_ptr__ = local_138;
        iVar9 = local_138->ArrayNum;
        if (iVar9 == local_138->ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&local_138->AllocatorInstance,&local_138->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar9 + 1;
        pTVar13 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                  ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 0x50);
        *(undefined8 *)&pTVar13->Elements = 0;
        *(undefined8 *)&(pTVar13->Elements).field_0x8 = 0;
        *(undefined8 *)&(pTVar13->Elements).field_0x20 = 0;
        *(undefined4 *)&(pTVar13->Elements).field_0x28 = 0;
        *(undefined4 *)&(pTVar13->Elements).field_0x2c = 0x80;
        *(undefined4 *)&(pTVar13->Elements).field_0x30 = 0xffffffff;
        *(undefined4 *)&(pTVar13->Elements).field_0x34 = 0;
        (pTVar13->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
        pTVar13->HashSize = 0;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(pTVar13,pTVar11);
        local_98.HashSize = 0;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_98.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_98.Elements);
        pFVar14 = pFVar14 + 4;
      } while( true );
    }
    uVar17 = *(uint *)pFVar20;
    if ((uVar17 == param_4) || (uVar17 == 0xffffffff)) {
LAB_14db495a5:
      pFVar20 = local_130 + 4;
      uVar12 = (ulonglong)local_148;
      goto LAB_14db49030;
    }
    uVar19 = 0;
    if ((int)uVar17 < param_3->ArrayNum) {
      uVar19 = ~uVar17 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                 *)(*pcVar3)();
      return pTVar10;
    }
    pTVar2 = param_3->DataPtr + (int)uVar17;
    if ((param_3->DataPtr[(int)uVar17].field0_0x0._s_0.X == -1) ||
       ((pTVar2->field0_0x0)._s_0.Y == -1)) {
      *param_5 = true;
      goto LAB_14db495a5;
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    uVar19 = 0;
    uVar17 = 0xffffffff;
    if (iVar7 < 1) {
LAB_14db4943e:
      if (uVar17 == 0xffffffff) {
        local_140 = (pTVar2->field0_0x0)._s_0.X;
        local_13c = (pTVar2->field0_0x0)._s_0.Y;
        local_108._First = &local_140;
        local_108._Last = (int *)&local_138;
        pTVar11 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>(&local_e8,&local_108);
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == __return_storage_ptr__->ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        pTVar13 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                  ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x50);
        *(undefined8 *)&pTVar13->Elements = 0;
        *(undefined8 *)&(pTVar13->Elements).field_0x8 = 0;
        *(undefined8 *)&(pTVar13->Elements).field_0x20 = 0;
        *(undefined4 *)&(pTVar13->Elements).field_0x28 = 0;
        *(undefined4 *)&(pTVar13->Elements).field_0x2c = 0x80;
        *(undefined4 *)&(pTVar13->Elements).field_0x30 = 0xffffffff;
        *(undefined4 *)&(pTVar13->Elements).field_0x34 = 0;
        (pTVar13->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
        pTVar13->HashSize = 0;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(pTVar13,pTVar11);
        local_e8.HashSize = 0;
        if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_e8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_e8.Elements);
        pFVar20 = local_130 + 4;
        uVar12 = (ulonglong)local_148;
        param_5 = local_158;
        param_3 = local_160;
        pFVar14 = local_150;
      }
      else {
        uVar19 = 0;
        if ((int)uVar17 < __return_storage_ptr__->ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar3)();
          return pTVar10;
        }
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                   ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x50)
                   ,local_118,(bool *)pTVar2);
        pFVar20 = local_130 + 4;
        uVar12 = (ulonglong)local_148;
        param_5 = local_158;
        param_3 = local_160;
        pFVar14 = local_150;
      }
    }
    else {
      lVar21 = 0;
      uVar6 = 0xffffffff;
      do {
        uVar5 = 0;
        if ((int)uVar19 < iVar7) {
          uVar5 = ~uVar19 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar3)();
          return pTVar10;
        }
        uVar5 = (pTVar2->field0_0x0)._s_0.X;
        pFVar20 = (__return_storage_ptr__->AllocatorInstance).Data + lVar21;
        if (*(int *)(pFVar20 + 8) != *(int *)(pFVar20 + 0x34)) {
          pFVar14 = pFVar20 + 0x38;
          if (*(FScriptContainerElement **)(pFVar20 + 0x40) != (FScriptContainerElement *)0x0) {
            pFVar14 = *(FScriptContainerElement **)(pFVar20 + 0x40);
          }
          iVar7 = *(int *)(pFVar14 + (ulonglong)(*(int *)(pFVar20 + 0x48) - 1U & uVar5) * 4);
          if (iVar7 != -1) {
            do {
              if (*(uint *)(*(longlong *)pFVar20 + (longlong)iVar7 * 0xc) == uVar5)
              goto LAB_14db4918c;
              iVar7 = *(int *)(*(longlong *)pFVar20 + 4 + (longlong)iVar7 * 0xc);
            } while (iVar7 != -1);
          }
        }
        iVar7 = -1;
LAB_14db4918c:
        uVar5 = uVar19;
        if (iVar7 == -1) {
          uVar5 = uVar6;
        }
        uVar6 = 0;
        if ((int)uVar19 < __return_storage_ptr__->ArrayNum) {
          uVar6 = ~uVar19 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar3)();
          return pTVar10;
        }
        piVar1 = &(pTVar2->field0_0x0)._s_0.Y;
        uVar6 = *piVar1;
        pFVar20 = (__return_storage_ptr__->AllocatorInstance).Data + lVar21;
        if (*(int *)(pFVar20 + 8) != *(int *)(pFVar20 + 0x34)) {
          pFVar14 = pFVar20 + 0x38;
          if (*(FScriptContainerElement **)(pFVar20 + 0x40) != (FScriptContainerElement *)0x0) {
            pFVar14 = *(FScriptContainerElement **)(pFVar20 + 0x40);
          }
          iVar7 = *(int *)(pFVar14 + (ulonglong)(*(int *)(pFVar20 + 0x48) - 1U & uVar6) * 4);
          if (iVar7 != -1) {
            do {
              if (*(uint *)(*(longlong *)pFVar20 + (longlong)iVar7 * 0xc) == uVar6) {
                uVar17 = uVar19;
                if ((uVar5 != 0xffffffff) && (uVar19 != 0xffffffff)) goto LAB_14db49261;
                break;
              }
              iVar7 = *(int *)(*(longlong *)pFVar20 + 4 + (longlong)iVar7 * 0xc);
            } while (iVar7 != -1);
          }
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        uVar19 = uVar19 + 1;
        lVar21 = lVar21 + 0x50;
        uVar6 = uVar5;
      } while ((int)uVar19 < iVar7);
      uVar19 = uVar17;
      if (uVar5 == 0xffffffff) goto LAB_14db4943e;
LAB_14db49261:
      if (uVar19 == 0xffffffff) {
        uVar17 = 0;
        if ((int)uVar5 < __return_storage_ptr__->ArrayNum) {
          uVar17 = ~uVar5 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar3)();
          return pTVar10;
        }
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                   ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x50),
                   &local_11c,(bool *)piVar1);
        pFVar20 = local_130 + 4;
        uVar12 = (ulonglong)local_148;
        param_5 = local_158;
        param_3 = local_160;
        pFVar14 = local_150;
      }
      else {
        uVar17 = 0;
        if ((int)uVar5 < __return_storage_ptr__->ArrayNum) {
          uVar17 = ~uVar5 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar3)();
          return pTVar10;
        }
        pFVar20 = (__return_storage_ptr__->AllocatorInstance).Data;
        uVar17 = 0;
        if ((int)uVar19 < __return_storage_ptr__->ArrayNum) {
          uVar17 = ~uVar19 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar3)();
          return pTVar10;
        }
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                   (pFVar20 + (longlong)(int)uVar5 * 0x50),
                   (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                   ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x50)
                  );
        uVar17 = 0;
        if ((int)uVar19 < __return_storage_ptr__->ArrayNum) {
          uVar17 = ~uVar19 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                     *)(*pcVar3)();
          return pTVar10;
        }
        TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(__return_storage_ptr__,uVar19);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&__return_storage_ptr__->AllocatorInstance,
                   __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
        pFVar20 = local_130 + 4;
        uVar12 = (ulonglong)local_148;
        param_5 = local_158;
        param_3 = local_160;
        pFVar14 = local_150;
      }
    }
  } while( true );
}

// GenerateRemainderStitchesAfterCleanup @ 14db56ef0

TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> * __cdecl
UE::Chaos::ClothAsset::Private::GenerateRemainderStitchesAfterCleanup
          (TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  if (1 < param_1->ArrayNum) {
    uVar15 = param_1->ArrayNum - 1;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if (0 < (int)uVar15) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar15,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    pFVar18 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8;
    if ((param_1->ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar11;
    }
    pFVar4 = (param_1->AllocatorInstance).Data;
    iVar12 = 0;
    iVar7 = *(int *)(pFVar4 + 0x28);
    iVar16 = 0;
    iVar8 = 0;
    if (iVar7 != 0) {
      pFVar17 = *(FScriptContainerElement **)(pFVar4 + 0x20);
      if (*(FScriptContainerElement **)(pFVar4 + 0x20) == (FScriptContainerElement *)0x0) {
        pFVar17 = pFVar4 + 0x10;
      }
      uVar15 = *(uint *)pFVar17;
      while (uVar15 == 0) {
        lVar13 = (longlong)iVar12;
        iVar16 = iVar16 + 0x20;
        iVar12 = iVar12 + 1;
        iVar8 = iVar7;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14db5703d;
        uVar15 = *(uint *)(pFVar17 + (lVar13 + 1) * 4);
      }
      uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = iVar16 + -1 + (int)lVar13;
      if (iVar7 < iVar8) {
        iVar8 = iVar7;
      }
    }
LAB_14db5703d:
    uVar15 = 1;
    *(undefined4 *)pFVar18 = *(undefined4 *)(*(longlong *)pFVar4 + (longlong)iVar8 * 0xc);
    iVar7 = param_1->ArrayNum;
    if (1 < iVar7) {
      lVar13 = 0x50;
      do {
        uVar9 = 0;
        if ((int)uVar15 < iVar7) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar11;
        }
        pFVar4 = (param_1->AllocatorInstance).Data;
        iVar7 = 0;
        iVar12 = 0;
        pFVar17 = pFVar4 + lVar13 + 0x10;
        uVar9 = *(uint *)(pFVar17 + 0x18);
        uVar10 = 0;
        if (uVar9 != 0) {
          if (*(FScriptContainerElement **)(pFVar17 + 0x10) != (FScriptContainerElement *)0x0) {
            pFVar17 = *(FScriptContainerElement **)(pFVar17 + 0x10);
          }
          uVar10 = *(uint *)pFVar17;
          while (uVar10 == 0) {
            lVar14 = (longlong)iVar7;
            iVar12 = iVar12 + 0x20;
            iVar7 = iVar7 + 1;
            uVar10 = uVar9;
            if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
            goto LAB_14db57130;
            uVar10 = *(uint *)(pFVar17 + (lVar14 + 1) * 4);
          }
          uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uVar10 = iVar12 + -1 + (int)lVar14;
          if ((int)uVar9 < (int)uVar10) {
            uVar10 = uVar9;
          }
        }
LAB_14db57130:
        uVar3 = *(undefined4 *)(*(longlong *)(pFVar4 + lVar13) + (longlong)(int)uVar10 * 0xc);
        *(undefined4 *)(pFVar18 + 4) = uVar3;
        if ((int)uVar15 < param_1->ArrayNum + -1) {
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == *piVar1) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          pFVar18 = (__return_storage_ptr__->AllocatorInstance).Data;
          *(undefined4 *)(pFVar18 + (longlong)iVar7 * 8) = uVar3;
          pFVar18 = pFVar18 + (longlong)iVar7 * 8;
        }
        iVar7 = param_1->ArrayNum;
        uVar15 = uVar15 + 1;
        lVar13 = lVar13 + 0x50;
      } while ((int)uVar15 < iVar7);
    }
  }
  return __return_storage_ptr__;
}

// SplitTethers @ 14db700d0

void __cdecl
UE::Chaos::ClothAsset::Private::SplitTethers
          (TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *param_2,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  FScriptContainerElement *pFVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint *puVar13;
  FScriptContainerElement *pFVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 local_res20 [8];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  uint local_a4;
  uint local_a0;
  longlong local_98;
  longlong local_90;
  uint *local_88;
  longlong local_80;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_78;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_68 [2];
  
  if ((param_2->ArrayNum != param_3->ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TetherKinematicIndices.Num() == TetherReferenceLengths.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                         ,0x18e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_a0 = 0;
  if (0 < param_2->ArrayNum) {
    local_98 = 0;
    local_80 = (longlong)param_2->ArrayNum;
    do {
      lVar10 = local_98;
      uVar17 = local_a0;
      uVar12 = ~local_a0;
      uVar6 = 0;
      if ((int)local_a0 < param_2->ArrayNum) {
        uVar6 = uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar15 = param_2->DataPtr + lVar10;
      uVar6 = 0;
      if ((int)uVar17 < param_3->ArrayNum) {
        uVar6 = uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar16 = param_3->DataPtr + lVar10;
      if ((pTVar15->ArrayNum != pTVar16->ArrayNum) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Indices.Num() == Lengths.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                             ,0x195,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar17 = pTVar15->ArrayNum - 1;
      local_a4 = uVar17;
      if (-1 < (int)uVar17) {
        lVar19 = (longlong)(int)uVar17 * 4;
        do {
          uVar12 = ~uVar17 >> 0x1f;
          uVar6 = 0;
          if ((int)uVar17 < pTVar15->ArrayNum) {
            uVar6 = uVar12;
          }
          local_a4 = uVar17;
          local_90 = lVar19;
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(int *)((pTVar15->AllocatorInstance).Data + lVar19) == -1) {
            uVar6 = 0;
            if ((int)uVar17 < pTVar15->ArrayNum) {
              uVar6 = uVar12;
            }
            if ((uVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar8 = (pTVar15->AllocatorInstance).Data;
            iVar4 = ~uVar17 + pTVar15->ArrayNum;
            if (1 < iVar4) {
              iVar4 = 1;
            }
            if (iVar4 != 0) {
              memmove(pFVar8 + (ulonglong)uVar17 * 4,
                      pFVar8 + (longlong)(pTVar15->ArrayNum - iVar4) * 4,(longlong)iVar4 << 2);
            }
            pTVar15->ArrayNum = pTVar15->ArrayNum + -1;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,&pTVar15->AllocatorInstance,pTVar15->ArrayNum,&pTVar15->ArrayMax);
            uVar6 = 0;
            if ((int)uVar17 < pTVar16->ArrayNum) {
              uVar6 = uVar12;
            }
            if ((uVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar8 = (pTVar16->AllocatorInstance).Data;
            iVar4 = ~uVar17 + pTVar16->ArrayNum;
            if (1 < iVar4) {
              iVar4 = 1;
            }
            if (iVar4 != 0) {
              memmove(pFVar8 + (ulonglong)uVar17 * 4,
                      pFVar8 + (longlong)(pTVar16->ArrayNum - iVar4) * 4,(longlong)iVar4 << 2);
            }
            pTVar16->ArrayNum = pTVar16->ArrayNum + -1;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,&pTVar16->AllocatorInstance,pTVar16->ArrayNum,&pTVar16->ArrayMax);
          }
          else {
            uVar6 = 0;
            if ((int)uVar17 < pTVar15->ArrayNum) {
              uVar6 = uVar12;
            }
            if ((uVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar6 = *(uint *)((pTVar15->AllocatorInstance).Data + lVar19);
            if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
              puVar9 = &param_1->field_0x38;
              if (*(undefined1 **)&param_1->field_0x40 != (undefined1 *)0x0) {
                puVar9 = *(undefined1 **)&param_1->field_0x40;
              }
              uVar12 = *(uint *)(puVar9 + (ulonglong)(*(int *)&param_1->field_0x48 - 1U & uVar6) * 4
                                );
              if (uVar12 != 0xffffffff) {
                do {
                  puVar7 = (uint *)((longlong)(int)uVar12 * 0x20 + *(longlong *)param_1);
                  if (*puVar7 == uVar6) {
                    puVar13 = puVar7 + 2;
                    if (puVar7 == (uint *)0x0) {
                      puVar13 = (uint *)0x0;
                    }
                    local_88 = puVar13;
                    if (puVar13 != (uint *)0x0) {
                      if (((int)puVar13[2] < 2) &&
                         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                            ("SplittingGroup->Num() > 1",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                                             ,0x1a3,L""), bVar3)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      uVar6 = pTVar15->ArrayNum + -1 + puVar13[2];
                      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
                        Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
                      }
                      if (pTVar15->ArrayMax < (int)uVar6) {
                        Core::Private::
                        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (4,4,uVar6,&pTVar15->AllocatorInstance,pTVar15->ArrayNum,
                                   &pTVar15->ArrayMax);
                      }
                      uVar6 = pTVar15->ArrayNum + -1 + puVar13[2];
                      if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
                        Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
                      }
                      if (pTVar16->ArrayMax < (int)uVar6) {
                        Core::Private::
                        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (4,4,uVar6,&pTVar16->AllocatorInstance,pTVar16->ArrayNum,
                                   &pTVar16->ArrayMax);
                      }
                      uVar6 = 0;
                      if ((int)uVar17 < pTVar16->ArrayNum) {
                        uVar6 = ~uVar17 >> 0x1f;
                      }
                      if ((uVar6 == 0) &&
                         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar3)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      uVar12 = 1;
                      uVar6 = puVar13[2];
                      local_a8 = *(undefined4 *)((pTVar16->AllocatorInstance).Data + lVar19);
                      if (1 < (int)uVar6) {
                        lVar10 = 0xa8;
                        do {
                          uVar17 = 0;
                          if ((int)uVar12 < (int)uVar6) {
                            uVar17 = ~uVar12 >> 0x1f;
                          }
                          if ((uVar17 == 0) &&
                             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar3)) {
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          pFVar8 = (pTVar15->AllocatorInstance).Data;
                          pFVar14 = (FScriptContainerElement *)(*(longlong *)puVar13 + lVar10);
                          if (((pFVar8 <= pFVar14) &&
                              (pFVar14 < pFVar8 + (longlong)pTVar15->ArrayMax * 4)) &&
                             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar3)) {
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          iVar4 = pTVar15->ArrayNum;
                          if (iVar4 == pTVar15->ArrayMax) {
                            iVar4 = Core::Private::
                                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                              (0x404,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax)
                            ;
                          }
                          pTVar15->ArrayNum = iVar4 + 1;
                          *(undefined4 *)((pTVar15->AllocatorInstance).Data + (longlong)iVar4 * 4) =
                               *(undefined4 *)pFVar14;
                          pFVar8 = (pTVar16->AllocatorInstance).Data;
                          if (((pFVar8 <= (FScriptContainerElement *)&local_a8) &&
                              ((FScriptContainerElement *)&local_a8 <
                               pFVar8 + (longlong)pTVar16->ArrayMax * 4)) &&
                             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar3)) {
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          iVar4 = pTVar16->ArrayNum;
                          if (iVar4 == pTVar16->ArrayMax) {
                            iVar4 = Core::Private::
                                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                              (0x404,&pTVar16->AllocatorInstance,&pTVar16->ArrayMax)
                            ;
                          }
                          uVar12 = uVar12 + 1;
                          pTVar16->ArrayNum = iVar4 + 1;
                          lVar10 = lVar10 + 0xa8;
                          *(undefined4 *)((pTVar16->AllocatorInstance).Data + (longlong)iVar4 * 4) =
                               local_a8;
                          uVar6 = local_88[2];
                          puVar13 = local_88;
                          lVar19 = local_90;
                          uVar17 = local_a4;
                        } while ((int)uVar12 < (int)uVar6);
                      }
                    }
                    break;
                  }
                  uVar12 = puVar7[6];
                } while (uVar12 != 0xffffffff);
              }
            }
          }
          uVar17 = uVar17 - 1;
          lVar19 = lVar19 + -4;
          lVar10 = local_98;
          local_a4 = uVar17;
          local_90 = lVar19;
        } while (-1 < (int)uVar17);
      }
      if (4 < pTVar15->ArrayNum) {
        uVar11 = 0;
        local_b8.Data = (FScriptContainerElement *)0x0;
        local_b0 = 0;
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,pTVar15->ArrayNum,&local_b8,0,(int *)((longlong)&local_b0 + 4));
        iVar4 = pTVar15->ArrayNum;
        uVar18 = uVar11;
        if (0 < iVar4) {
          do {
            uVar6 = (uint)uVar11;
            uVar17 = 0;
            if ((int)uVar6 < iVar4) {
              uVar17 = ~uVar6 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar8 = (pTVar15->AllocatorInstance).Data;
            uVar17 = 0;
            if ((int)uVar6 < pTVar16->ArrayNum) {
              uVar17 = ~uVar6 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar14 = (pTVar16->AllocatorInstance).Data;
            iVar4 = (int)local_b0;
            if ((int)local_b0 == local_b0._4_4_) {
              iVar4 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&local_b8,(int *)((longlong)&local_b0 + 4));
            }
            local_b0 = CONCAT44(local_b0._4_4_,iVar4 + 1);
            uVar11 = (ulonglong)(uVar6 + 1);
            *(undefined4 *)(local_b8.Data + (longlong)iVar4 * 8) =
                 *(undefined4 *)(pFVar14 + uVar18 * 4);
            *(undefined4 *)(local_b8.Data + (longlong)iVar4 * 8 + 4) =
                 *(undefined4 *)(pFVar8 + uVar18 * 4);
            iVar4 = pTVar15->ArrayNum;
            uVar18 = uVar18 + 1;
          } while ((int)(uVar6 + 1) < iVar4);
        }
        AlgoImpl::
        IntroSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,_UE::Chaos::ClothAsset::Private::SplitTethers_::__l38::<lambda_1>_>_>
                  ((TTuple<float,int> *)local_b8.Data,(int)local_b0,SUB81(param_2,0),
                   (<lambda_1> *)local_res20);
        iVar4 = pTVar15->ArrayNum;
        if (iVar4 < 4) {
          iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,4 - iVar4,&pTVar15->AllocatorInstance,&pTVar15->ArrayNum,
                             &pTVar15->ArrayMax);
          memset((pTVar15->AllocatorInstance).Data + (longlong)iVar5 * 4,0,
                 (longlong)(4 - iVar4) << 2);
        }
        else if (4 < iVar4) {
          iVar4 = iVar4 + -4;
          if (iVar4 < 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          else if (iVar4 == 0) goto LAB_14db709e5;
          pFVar8 = (pTVar15->AllocatorInstance).Data + 0x10;
          iVar5 = (pTVar15->ArrayNum - iVar4) + -4;
          if (iVar5 != 0) {
            memmove(pFVar8,pFVar8 + (longlong)iVar4 * 4,(longlong)iVar5 << 2);
          }
          iVar4 = pTVar15->ArrayNum - iVar4;
          pTVar15->ArrayNum = iVar4;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar15->AllocatorInstance,iVar4,&pTVar15->ArrayMax);
        }
LAB_14db709e5:
        iVar4 = pTVar16->ArrayNum;
        if (iVar4 < 4) {
          iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,4 - iVar4,&pTVar16->AllocatorInstance,&pTVar16->ArrayNum,
                             &pTVar16->ArrayMax);
          memset((pTVar16->AllocatorInstance).Data + (longlong)iVar5 * 4,0,
                 (longlong)(4 - iVar4) << 2);
        }
        else if (4 < iVar4) {
          iVar4 = iVar4 + -4;
          if (iVar4 < 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          else if (iVar4 == 0) goto LAB_14db70acd;
          pFVar8 = (pTVar16->AllocatorInstance).Data + 0x10;
          iVar5 = (pTVar16->ArrayNum - iVar4) + -4;
          if (iVar5 != 0) {
            memmove(pFVar8,pFVar8 + (longlong)iVar4 * 4,(longlong)iVar5 << 2);
          }
          iVar4 = pTVar16->ArrayNum - iVar4;
          pTVar16->ArrayNum = iVar4;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar16->AllocatorInstance,iVar4,&pTVar16->ArrayMax);
        }
LAB_14db70acd:
        if (((int)local_b0 < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = *(undefined4 *)(local_b8.Data + 4);
        if ((pTVar15->ArrayNum < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)(pTVar15->AllocatorInstance).Data = uVar1;
        if (((int)local_b0 < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = *(undefined4 *)local_b8.Data;
        if ((pTVar16->ArrayNum < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)(pTVar16->AllocatorInstance).Data = uVar1;
        if (((int)local_b0 < 2) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = *(undefined4 *)(local_b8.Data + 0xc);
        if ((pTVar15->ArrayNum < 2) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)((pTVar15->AllocatorInstance).Data + 4) = uVar1;
        if (((int)local_b0 < 2) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = *(undefined4 *)(local_b8.Data + 8);
        if ((pTVar16->ArrayNum < 2) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)((pTVar16->AllocatorInstance).Data + 4) = uVar1;
        if (((int)local_b0 < 3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = *(undefined4 *)(local_b8.Data + 0x14);
        if ((pTVar15->ArrayNum < 3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)((pTVar15->AllocatorInstance).Data + 8) = uVar1;
        if (((int)local_b0 < 3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = *(undefined4 *)(local_b8.Data + 0x10);
        if ((pTVar16->ArrayNum < 3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)((pTVar16->AllocatorInstance).Data + 8) = uVar1;
        if (((int)local_b0 < 4) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = *(undefined4 *)(local_b8.Data + 0x1c);
        if ((pTVar15->ArrayNum < 4) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)((pTVar15->AllocatorInstance).Data + 0xc) = uVar1;
        if (((int)local_b0 < 4) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = *(undefined4 *)(local_b8.Data + 0x18);
        if ((pTVar16->ArrayNum < 4) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)((pTVar16->AllocatorInstance).Data + 0xc) = uVar1;
        lVar10 = local_98;
        if ((TTuple<float,int> *)local_b8.Data != (TTuple<float,int> *)0x0) {
          FMemory::Free(local_b8.Data);
          lVar10 = local_98;
        }
      }
      local_98 = lVar10 + 1;
      local_a0 = local_a0 + 1;
    } while (local_98 < local_80);
  }
  local_78.DataPtr = param_2->DataPtr;
  local_78.ArrayNum = param_2->ArrayNum;
  local_78._12_4_ = *(undefined4 *)&param_2->field_0xc;
  SplitCopyVertexData<TArray<int,TSizedDefaultAllocator<32>_>_>(param_1,&local_78);
  local_68[0].DataPtr = param_3->DataPtr;
  local_68[0].ArrayNum = param_3->ArrayNum;
  local_68[0]._12_4_ = *(undefined4 *)&param_3->field_0xc;
  SplitCopyVertexData<TArray<float,TSizedDefaultAllocator<32>_>_>(param_1,local_68);
  return;
}

// UnwrapDynamicMesh @ 14db71ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Chaos::ClothAsset::Private::SimMeshBuilder::UnwrapDynamicMesh
          (FDynamicMesh3 *param_1,bool param_2,
          TArray<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,TSizedDefaultAllocator<32>_>
          *param_3)

{
  double *pdVar1;
  short sVar2;
  int iVar3;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  TArray<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,TSizedDefaultAllocator<32>_>
  *pTVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  ForElementType<FSetElementId> FVar21;
  ForElementType<FSetElementId> FVar22;
  FDynamicMeshAttributeSet *pFVar23;
  TVector2<float>_u_0 *pTVar24;
  longlong lVar25;
  ulonglong uVar26;
  FDynamicMeshAttributeSet *pFVar27;
  longlong lVar28;
  undefined8 *puVar29;
  FDynamicMeshAttributeSet *pFVar30;
  FScriptContainerElement *pFVar31;
  float fVar32;
  float fVar33;
  FScriptContainerElement *pFVar34;
  float *pfVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStack_398 [32];
  TVector2<float>_u_0 *local_378;
  TVector2<float>_u_0 *local_370;
  longlong local_368;
  longlong local_360;
  undefined8 local_358;
  undefined1 local_348 [8];
  undefined1 local_340 [8];
  float local_338;
  undefined1 local_334 [8];
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  TVector2<float>_u_0 local_318;
  float local_310;
  float local_30c;
  int local_308;
  TVector2<float>_u_0 local_304;
  undefined8 local_2f8;
  undefined8 local_2f0;
  FDynamicMeshAttributeSet *local_2e8;
  TVector2<float>_u_0 local_2e0;
  undefined4 local_2d8;
  TVector2<float>_u_0 local_2d0;
  float local_2c8;
  TVector2<float>_u_0 local_2c0;
  float local_2b8;
  TVector2<float>_u_0 local_2b0;
  undefined4 local_2a8;
  TVector2<float>_u_0 local_2a0;
  float local_298;
  TVector2<float>_u_0 local_290;
  undefined4 local_288;
  FDynamicMesh3 *local_280;
  undefined8 *local_278;
  float local_270;
  undefined8 local_26c;
  float local_264;
  float local_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float local_250;
  float fStack_24c;
  float local_248 [6];
  ulonglong local_230;
  undefined4 local_228;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  TArray<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,TSizedDefaultAllocator<32>_>
  *local_1e0;
  FScriptContainerElement *local_1d8;
  FScriptContainerElement *local_1d0;
  int local_1c8;
  int local_1c4;
  undefined4 local_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 *local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  undefined1 local_138 [40];
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  undefined1 local_100 [8];
  ForElementType<FSetElementId> local_f8;
  uint local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_398;
  pFVar30 = (param_1->AttributeSet).Ptr;
  pFVar23 = (FDynamicMeshAttributeSet *)0x0;
  pFVar27 = pFVar23;
  if (pFVar30 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar27 = pFVar30;
  }
  pFVar30 = pFVar23;
  if (((param_2) && (pFVar27 != (FDynamicMeshAttributeSet *)0x0)) &&
     (0 < (pFVar27->NormalLayers).Array.ArrayNum)) {
    pFVar30 = *(FDynamicMeshAttributeSet **)(pFVar27->NormalLayers).Array.AllocatorInstance.Data;
  }
  local_2e8 = pFVar30;
  local_280 = param_1;
  local_1e0 = param_3;
  TArray<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,TSizedDefaultAllocator<32>_>::Reset
            (param_3,0);
  uVar14 = (param_1->TriangleRefCounts).UsedCount;
  local_138._0_8_ = (FScriptContainerElement *)0x0;
  local_138._8_8_ = 0;
  local_138._32_8_ = (ForElementType<unsigned_int>)0x0;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = -1;
  local_104 = 0;
  local_f8 = (ForElementType<FSetElementId>)0x0;
  local_f0 = 0;
  pFVar27 = pFVar23;
  if (uVar14 != 0) {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_138,uVar14);
    if (uVar14 < 4) {
      uVar14 = 1;
    }
    else {
      uVar26 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
      lVar25 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_1c0 = (int)lVar25;
      uVar14 = 1 << ((byte)lVar25 & 0x1f);
    }
    if ((local_f0 == 0) || ((int)local_f0 < (int)uVar14)) {
      local_f0 = uVar14;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138);
    }
    pFVar27 = (FDynamicMeshAttributeSet *)(ulonglong)local_f0;
  }
  fVar11 = __real_38d1b717;
  fVar10 = __real_322bcc77;
  fVar33 = (float)((param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
                  (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200);
  local_328 = 0.0;
  if ((fVar33 != 0.0) &&
     (pFVar34 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     pFVar23 = (FDynamicMeshAttributeSet *)0x0, 0xfffd < (ushort)(**(short **)pFVar34 - 1U))) {
    pFVar23 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    local_328 = 1.4013e-45;
    fVar16 = 1.4013e-45;
    if ((int)fVar33 < 2) goto LAB_14db71c8f;
    do {
      sVar2 = *(short *)(*(longlong *)(pFVar34 + ((ulonglong)pFVar23 >> 9) * 8) +
                        (ulonglong)((uint)pFVar23 & 0x1ff) * 2);
      if ((sVar2 != 0) && (sVar2 != -1)) break;
      uVar14 = (uint)pFVar23 + 1;
      pFVar23 = (FDynamicMeshAttributeSet *)(ulonglong)uVar14;
    } while ((int)uVar14 < (int)fVar33);
    local_328 = SUB84(pFVar23,0);
  }
  fVar16 = SUB84(pFVar23,0);
LAB_14db71c8f:
  pFVar34 = (FScriptContainerElement *)local_138._0_8_;
  FVar22 = local_f8;
  local_270 = fVar33;
  if (fVar16 == fVar33) {
LAB_14db73556:
    local_f0 = 0;
    if (FVar22 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar22);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_138);
    return;
  }
LAB_14db71d10:
  pTVar12 = local_1e0;
  local_30c = SUB84(pFVar23,0);
  fVar16 = local_30c;
  if (local_138._8_4_ != local_104) {
    FVar21 = (ForElementType<FSetElementId>)local_100;
    if (FVar22 != (ForElementType<FSetElementId>)0x0) {
      FVar21 = FVar22;
    }
    for (iVar15 = *(int *)((longlong)FVar21 +
                          ((ulonglong)((int)pFVar27 - 1) & (ulonglong)pFVar23) * 4); iVar15 != -1;
        iVar15 = *(int *)(pFVar34 + (longlong)iVar15 * 0xc + 4)) {
      if (*(float *)(pFVar34 + (longlong)iVar15 * 0xc) == local_30c) goto LAB_14db734ae;
    }
  }
  lVar25 = *(longlong *)
            ((param_1->Triangles).Blocks.AllocatorInstance.Data + ((ulonglong)pFVar23 >> 9) * 8);
  local_230 = *(ulonglong *)(lVar25 + (ulonglong)((uint)local_30c & 0x1ff) * 0xc);
  local_228 = *(undefined4 *)(lVar25 + 8 + (ulonglong)((uint)local_30c & 0x1ff) * 0xc);
  uVar26 = local_230;
  if (pFVar30 == (FDynamicMeshAttributeSet *)0x0) {
    fVar32 = -NAN;
    local_338 = -NAN;
  }
  else {
    lVar25 = *(longlong *)&(pFVar30->SkinWeightAttributes).field_0x8;
    uVar14 = (int)local_30c * 3;
    fVar32 = *(float *)(*(longlong *)(lVar25 + (ulonglong)(uVar14 >> 9) * 8) +
                       (ulonglong)(uVar14 & 0x1ff) * 4);
    local_338 = *(float *)(*(longlong *)(lVar25 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                          (ulonglong)(uVar14 + 1 & 0x1ff) * 4);
  }
  fVar36 = local_338;
  pFVar31 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
  local_334._0_4_ = (float)local_230;
  local_334._4_4_ = (undefined4)(local_230 >> 0x20);
  lVar25 = *(longlong *)(pFVar31 + (ulonglong)((uint)(float)local_230 >> 9) * 8);
  pdVar1 = (double *)(lVar25 + (ulonglong)((uint)(float)local_230 & 0x1ff) * 0x18);
  local_168 = *pdVar1;
  dStack_160 = pdVar1[1];
  local_158 = *(double *)(lVar25 + 0x10 + (ulonglong)((uint)(float)local_230 & 0x1ff) * 0x18);
  local_2c0._s_0.X = (float)local_168;
  local_2c0._s_0.Y = (float)dStack_160;
  local_2b8 = (float)local_158;
  lVar25 = *(longlong *)(pFVar31 + (local_230 >> 0x29) * 8);
  pdVar1 = (double *)(lVar25 + (ulonglong)(local_334._4_4_ & 0x1ff) * 0x18);
  local_150 = *pdVar1;
  dStack_148 = pdVar1[1];
  local_140 = *(double *)(lVar25 + 0x10 + (ulonglong)(local_334._4_4_ & 0x1ff) * 0x18);
  local_2d0._s_0.X = (float)local_150;
  local_2d0._s_0.Y = (float)dStack_148;
  local_2c8 = (float)local_140;
  fVar40 = (local_2d0._s_0.Y - local_2c0._s_0.Y) * (local_2d0._s_0.Y - local_2c0._s_0.Y) +
           (local_2d0._s_0.X - local_2c0._s_0.X) * (local_2d0._s_0.X - local_2c0._s_0.X) +
           (local_2c8 - local_2b8) * (local_2c8 - local_2b8);
  local_324 = fVar32;
  local_230 = uVar26;
  if (fVar11 < fVar40) {
    iVar15 = local_1e0->ArrayNum;
    if (iVar15 == local_1e0->ArrayMax) {
      iVar15 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&local_1e0->AllocatorInstance,&local_1e0->ArrayMax);
    }
    pTVar12->ArrayNum = iVar15 + 1;
    pFVar34 = (pTVar12->AllocatorInstance).Data + (longlong)iVar15 * 0x50;
    local_1d8 = pFVar34;
    DefaultConstructItems<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,int>(pFVar34,1);
    pTVar24 = *(TVector2<float>_u_0 **)&pFVar34[0x20].field_0x0;
    if ((pTVar24 <= &local_2c0) &&
       (&local_2c0 <
        (TVector2<float>_u_0 *)((longlong)pTVar24 + (longlong)*(int *)(pFVar34 + 0x2c) * 0xc))) {
      local_360 = (longlong)*(int *)&pFVar34[0x28].field_0x0;
      local_358 = 0xc;
      local_378 = &local_2c0;
      local_370 = pTVar24;
      local_368 = (longlong)*(int *)(pFVar34 + 0x2c);
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar13) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar15 = *(int *)&pFVar34[0x28].field_0x0;
    if (iVar15 == *(int *)(pFVar34 + 0x2c)) {
      iVar15 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,(ForAnyElementType *)(pFVar34 + 0x20),(int *)(pFVar34 + 0x2c));
    }
    *(int *)&pFVar34[0x28].field_0x0 = iVar15 + 1;
    lVar25 = *(longlong *)&pFVar34[0x20].field_0x0;
    *(ulonglong *)(lVar25 + (longlong)iVar15 * 0xc) = CONCAT44(local_2c0._s_0.Y,local_2c0._s_0.X);
    *(float *)(lVar25 + (longlong)iVar15 * 0xc + 8) = local_2b8;
    pTVar24 = *(TVector2<float>_u_0 **)&pFVar34[0x20].field_0x0;
    if ((pTVar24 <= &local_2d0) &&
       (&local_2d0 <
        (TVector2<float>_u_0 *)((longlong)pTVar24 + (longlong)*(int *)(pFVar34 + 0x2c) * 0xc))) {
      local_360 = (longlong)*(int *)&pFVar34[0x28].field_0x0;
      local_358 = 0xc;
      local_378 = &local_2d0;
      local_370 = pTVar24;
      local_368 = (longlong)*(int *)(pFVar34 + 0x2c);
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar13) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar15 = *(int *)&pFVar34[0x28].field_0x0;
    if (iVar15 == *(int *)(pFVar34 + 0x2c)) {
      iVar15 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,(ForAnyElementType *)(pFVar34 + 0x20),(int *)(pFVar34 + 0x2c));
    }
    *(int *)&pFVar34[0x28].field_0x0 = iVar15 + 1;
    lVar25 = *(longlong *)&pFVar34[0x20].field_0x0;
    *(ulonglong *)(lVar25 + (longlong)iVar15 * 0xc) = CONCAT44(local_2d0._s_0.Y,local_2d0._s_0.X);
    *(float *)(lVar25 + (longlong)iVar15 * 0xc + 8) = local_2c8;
    if (pFVar30 != (FDynamicMeshAttributeSet *)0x0) {
      pTVar4 = (pFVar30->MaterialIDAttrib).Ptr;
      uVar14 = (int)fVar32 * 3;
      local_2e0._s_0.X =
           *(float *)(*(longlong *)(&pTVar4->field_0x0 + (ulonglong)(uVar14 >> 9) * 8) +
                     (ulonglong)(uVar14 & 0x1ff) * 4);
      local_2e0._s_0.Y =
           *(float *)(*(longlong *)(&pTVar4->field_0x0 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                     (ulonglong)(uVar14 + 1 & 0x1ff) * 4);
      pTVar24 = *(TVector2<float>_u_0 **)&pFVar34[0x30].field_0x0;
      local_2d8 = *(undefined4 *)
                   (*(longlong *)(&pTVar4->field_0x0 + (ulonglong)(uVar14 + 2 >> 9) * 8) +
                   (ulonglong)(uVar14 + 2 & 0x1ff) * 4);
      if ((pTVar24 <= &local_2e0) &&
         (&local_2e0 <
          (TVector2<float>_u_0 *)((longlong)pTVar24 + (longlong)*(int *)(pFVar34 + 0x3c) * 0xc))) {
        local_360 = (longlong)*(int *)&pFVar34[0x38].field_0x0;
        local_358 = 0xc;
        local_378 = &local_2e0;
        local_370 = pTVar24;
        local_368 = (longlong)*(int *)(pFVar34 + 0x3c);
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar13) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar15 = *(int *)&pFVar34[0x38].field_0x0;
      if (iVar15 == *(int *)(pFVar34 + 0x3c)) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,(ForAnyElementType *)(pFVar34 + 0x30),(int *)(pFVar34 + 0x3c));
      }
      *(int *)&pFVar34[0x38].field_0x0 = iVar15 + 1;
      lVar25 = *(longlong *)&pFVar34[0x30].field_0x0;
      *(ulonglong *)(lVar25 + (longlong)iVar15 * 0xc) = CONCAT44(local_2e0._s_0.Y,local_2e0._s_0.X);
      *(undefined4 *)(lVar25 + (longlong)iVar15 * 0xc + 8) = local_2d8;
      uVar14 = (int)fVar36 * 3;
      pTVar4 = (pFVar30->MaterialIDAttrib).Ptr;
      local_2b0._s_0.X =
           *(float *)(*(longlong *)(&pTVar4->field_0x0 + (ulonglong)(uVar14 >> 9) * 8) +
                     (ulonglong)(uVar14 & 0x1ff) * 4);
      local_2b0._s_0.Y =
           *(float *)(*(longlong *)(&pTVar4->field_0x0 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                     (ulonglong)(uVar14 + 1 & 0x1ff) * 4);
      pTVar24 = *(TVector2<float>_u_0 **)&pFVar34[0x30].field_0x0;
      local_2a8 = *(undefined4 *)
                   (*(longlong *)(&pTVar4->field_0x0 + (ulonglong)(uVar14 + 2 >> 9) * 8) +
                   (ulonglong)(uVar14 + 2 & 0x1ff) * 4);
      if ((pTVar24 <= &local_2b0) &&
         (&local_2b0 <
          (TVector2<float>_u_0 *)((longlong)pTVar24 + (longlong)*(int *)(pFVar34 + 0x3c) * 0xc))) {
        local_360 = (longlong)*(int *)&pFVar34[0x38].field_0x0;
        local_358 = 0xc;
        local_378 = &local_2b0;
        local_370 = pTVar24;
        local_368 = (longlong)*(int *)(pFVar34 + 0x3c);
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar13) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar15 = *(int *)&pFVar34[0x38].field_0x0;
      if (iVar15 == *(int *)(pFVar34 + 0x3c)) {
        iVar15 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,(ForAnyElementType *)(pFVar34 + 0x30),(int *)(pFVar34 + 0x3c));
      }
      *(int *)&pFVar34[0x38].field_0x0 = iVar15 + 1;
      lVar25 = *(longlong *)&pFVar34[0x30].field_0x0;
      *(ulonglong *)(lVar25 + (longlong)iVar15 * 0xc) = CONCAT44(local_2b0._s_0.Y,local_2b0._s_0.X);
      *(undefined4 *)(lVar25 + (longlong)iVar15 * 0xc + 8) = local_2a8;
    }
    pTVar24 = *(TVector2<float>_u_0 **)&pFVar34[0x40].field_0x0;
    if ((pTVar24 <= (TVector2<float>_u_0 *)local_334) &&
       ((FScriptContainerElement *)local_334 <
        (FScriptContainerElement *)((longlong)pTVar24 + (longlong)*(int *)(pFVar34 + 0x4c) * 4))) {
      local_360 = (longlong)*(int *)&pFVar34[0x48].field_0x0;
      local_358 = 4;
      local_378 = (TVector2<float>_u_0 *)local_334;
      local_370 = pTVar24;
      local_368 = (longlong)*(int *)(pFVar34 + 0x4c);
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar13) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar15 = *(int *)&pFVar34[0x48].field_0x0;
    if (iVar15 == *(int *)(pFVar34 + 0x4c)) {
      iVar15 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)(pFVar34 + 0x40),(int *)(pFVar34 + 0x4c));
    }
    *(int *)&pFVar34[0x48].field_0x0 = iVar15 + 1;
    *(undefined4 *)(*(longlong *)&pFVar34[0x40].field_0x0 + (longlong)iVar15 * 4) = local_334._0_4_;
    pTVar24 = *(TVector2<float>_u_0 **)&pFVar34[0x40].field_0x0;
    if ((pTVar24 <= (TVector2<float>_u_0 *)(local_334 + 4)) &&
       ((FScriptContainerElement *)(local_334 + 4) <
        (FScriptContainerElement *)((longlong)pTVar24 + (longlong)*(int *)(pFVar34 + 0x4c) * 4))) {
      local_360 = (longlong)*(int *)&pFVar34[0x48].field_0x0;
      local_358 = 4;
      local_378 = (TVector2<float>_u_0 *)(local_334 + 4);
      local_370 = pTVar24;
      local_368 = (longlong)*(int *)(pFVar34 + 0x4c);
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar13) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar15 = *(int *)&pFVar34[0x48].field_0x0;
    if (iVar15 == *(int *)(pFVar34 + 0x4c)) {
      iVar15 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)(pFVar34 + 0x40),(int *)(pFVar34 + 0x4c));
    }
    *(int *)&pFVar34[0x48].field_0x0 = iVar15 + 1;
    pFVar31 = pFVar34 + 0x10;
    *(undefined4 *)(*(longlong *)&pFVar34[0x40].field_0x0 + (longlong)iVar15 * 4) = local_334._4_4_;
    pTVar24 = *(TVector2<float>_u_0 **)&pFVar31->field_0x0;
    local_1d0 = pFVar31;
    if ((pTVar24 < (TVector2<float>_u_0 *)
                   ((longlong)&UE::Math::TVector2<float>::ZeroVector.field0_0x0 + 1)) &&
       (&UE::Math::TVector2<float>::ZeroVector < pTVar24 + *(int *)(pFVar34 + 0x1c))) {
      local_360 = (longlong)*(int *)&pFVar34[0x18].field_0x0;
      local_358 = 8;
      local_378 = &UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_370 = pTVar24;
      local_368 = (longlong)*(int *)(pFVar34 + 0x1c);
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar13) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    fVar33 = *(float *)&pFVar34[0x18].field_0x0;
    if (fVar33 == *(float *)(pFVar34 + 0x1c)) {
      fVar33 = (float)Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,(ForAnyElementType *)pFVar31,(int *)(pFVar34 + 0x1c));
    }
    *(uint *)&pFVar34[0x18].field_0x0 = (int)fVar33 + 1;
    local_304._s_0.X = SQRT(fVar40);
    local_304._s_0.Y = 0.0;
    ((TVector2<float>_u_0 *)
    (*(FScriptContainerElement **)&pFVar31->field_0x0 + (longlong)(int)fVar33 * 8))->_s_0 =
         (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pTVar24 = *(TVector2<float>_u_0 **)&pFVar31->field_0x0;
    if ((pTVar24 <= &local_304) && (&local_304 < pTVar24 + *(int *)(pFVar34 + 0x1c))) {
      local_360 = (longlong)*(int *)&pFVar34[0x18].field_0x0;
      local_358 = 8;
      local_378 = &local_304;
      local_370 = pTVar24;
      local_368 = (longlong)*(int *)(pFVar34 + 0x1c);
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar13) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    fVar16 = *(float *)&pFVar34[0x18].field_0x0;
    if (fVar16 == *(float *)(pFVar34 + 0x1c)) {
      fVar16 = (float)Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,(ForAnyElementType *)pFVar31,(int *)(pFVar34 + 0x1c));
    }
    fVar36 = (float)local_334._4_4_;
    fVar32 = (float)local_334._0_4_;
    *(uint *)&pFVar34[0x18].field_0x0 = (int)fVar16 + 1;
    uVar14 = 0xffffffff;
    local_32c = local_30c;
    local_1b8 = local_30c;
    *(ulonglong *)(*(FScriptContainerElement **)&pFVar31->field_0x0 + (longlong)(int)fVar16 * 8) =
         CONCAT44(local_304._s_0.Y,local_304._s_0.X);
    local_310 = (float)local_334._0_4_;
    fStack_1b4 = (float)local_334._0_4_;
    local_320 = (float)local_334._4_4_;
    fStack_1b0 = (float)local_334._4_4_;
    fStack_1ac = fVar33;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138,&local_1c4,
               (bool *)&local_30c);
    local_278 = ::operator_new(0x28);
    if (local_278 == (undefined8 *)0x0) {
      local_278 = (undefined8 *)0x0;
    }
    else {
      *local_278 = 0;
      local_278[1] = 0;
      local_278[2] = 0;
      local_278[3] = 0;
      local_278[4] = 0;
      *local_278 = 0;
      *(undefined8 *)((longlong)local_278 + 0xc) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)local_278 + 0x14) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)local_278 + 0x1c) = 0xffffffffffffffff;
    }
    local_178 = local_278;
    do {
      lVar25 = *(longlong *)
                ((local_280->Triangles).Blocks.AllocatorInstance.Data +
                (ulonglong)((uint)local_32c >> 9) * 8);
      local_26c = *(undefined8 *)(lVar25 + (ulonglong)((uint)local_1b8 & 0x1ff) * 0xc);
      local_264 = *(float *)(lVar25 + 8 + (ulonglong)((uint)local_1b8 & 0x1ff) * 0xc);
      fVar40 = (float)((ulonglong)local_26c >> 0x20);
      if ((float)local_26c == fVar32) {
        local_340._4_4_ = fVar40;
        if (fVar40 == fVar36) {
          local_340._4_4_ = local_264;
        }
      }
      else {
        local_340._4_4_ = (float)local_26c;
        if (fVar40 == fVar32) {
          if ((float)local_26c == fVar36) {
            local_340._4_4_ = local_264;
          }
        }
        else if ((float)local_26c == fVar36) {
          local_340._4_4_ = fVar40;
        }
      }
      if (local_2e8 == (FDynamicMeshAttributeSet *)0x0) {
        fVar32 = -NAN;
      }
      else {
        lVar25 = *(longlong *)&(local_2e8->SkinWeightAttributes).field_0x8;
        uVar17 = (int)local_32c * 3;
        fVar32 = *(float *)(*(longlong *)(lVar25 + (ulonglong)(uVar17 >> 9) * 8) +
                           (ulonglong)(uVar17 & 0x1ff) * 4);
        fVar40 = *(float *)(*(longlong *)(lVar25 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                           (ulonglong)(uVar17 + 1 & 0x1ff) * 4);
        fVar39 = *(float *)(*(longlong *)(lVar25 + (ulonglong)(uVar17 + 2 >> 9) * 8) +
                           (ulonglong)(uVar17 + 2 & 0x1ff) * 4);
        if (fVar32 == local_324) {
          fVar32 = fVar39;
          if (fVar40 != local_338) {
            fVar32 = fVar40;
          }
        }
        else if (fVar40 == local_324) {
          if (fVar32 == local_338) {
            fVar32 = fVar39;
          }
        }
        else if (fVar32 == local_338) {
          fVar32 = fVar40;
        }
      }
      pFVar5 = (local_280->Vertices).Blocks.AllocatorInstance.Data;
      uVar26 = (ulonglong)((uint)local_310 & 0x1ff);
      lVar25 = *(longlong *)(pFVar5 + (ulonglong)((uint)local_310 >> 9) * 8);
      uVar18 = (ulonglong)((uint)fStack_1b0 & 0x1ff);
      lVar28 = *(longlong *)(pFVar5 + (ulonglong)((uint)fVar36 >> 9) * 8);
      uVar19 = (ulonglong)(local_340._4_4_ & 0x1ff);
      lVar6 = *(longlong *)(pFVar5 + (ulonglong)((uint)local_340._4_4_ >> 9) * 8);
      local_2a0._s_0.X = (float)*(double *)(lVar6 + uVar19 * 0x18);
      uVar17 = 0;
      if ((int)fVar33 < *(int *)&pFVar31[8].field_0x0) {
        uVar17 = ~(uint)fVar33 >> 0x1f;
      }
      local_2a0._s_0.Y = (float)*(double *)(lVar6 + 8 + uVar19 * 0x18);
      fVar40 = local_2a0._s_0.X - (float)*(double *)(lVar25 + uVar26 * 0x18);
      fVar46 = local_2a0._s_0.X - (float)*(double *)(lVar28 + uVar18 * 0x18);
      fVar45 = local_2a0._s_0.Y - (float)*(double *)(lVar25 + 8 + uVar26 * 0x18);
      local_298 = (float)*(double *)(lVar6 + 0x10 + uVar19 * 0x18);
      fVar42 = local_298 - (float)*(double *)(lVar28 + 0x10 + uVar18 * 0x18);
      fVar39 = local_2a0._s_0.Y - (float)*(double *)(lVar28 + 8 + uVar18 * 0x18);
      fVar36 = local_298 - (float)*(double *)(lVar25 + 0x10 + uVar26 * 0x18);
      fVar45 = fVar45 * fVar45 + fVar40 * fVar40 + fVar36 * fVar36;
      fVar39 = fVar46 * fVar46 + fVar39 * fVar39 + fVar42 * fVar42;
      fVar40 = SQRT(fVar45);
      fVar36 = SQRT(fVar39);
      local_348._4_4_ = fVar33;
      local_340._0_4_ = fVar16;
      if (uVar17 == 0) {
        local_378 = (TVector2<float>_u_0 *)(longlong)(int)fVar33;
        local_370 = (TVector2<float>_u_0 *)(longlong)*(int *)&pFVar31[8].field_0x0;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      lVar25 = *(longlong *)&pFVar31->field_0x0;
      lVar28 = (longlong)(int)fVar33;
      pTVar24 = (TVector2<float>_u_0 *)(longlong)(int)local_340._0_4_;
      uVar17 = 0;
      if ((int)local_340._0_4_ < *(int *)&pFVar31[8].field_0x0) {
        uVar17 = (uint)~local_340._0_4_ >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (local_378 = pTVar24,
         local_370 = (TVector2<float>_u_0 *)(longlong)*(int *)&pFVar31[8].field_0x0,
         bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      fVar33 = *(float *)(lVar25 + lVar28 * 8);
      fVar16 = *(float *)(lVar25 + lVar28 * 8 + 4);
      fVar42 = *(float *)(*(longlong *)&pFVar31->field_0x0 + (longlong)pTVar24 * 8);
      fVar46 = *(float *)(*(longlong *)&pFVar31->field_0x0 + (longlong)pTVar24 * 8 + 4);
      fVar44 = fVar33 - fVar42;
      fVar43 = fVar16 - fVar46;
      fVar37 = fVar44 * fVar44 + fVar43 * fVar43;
      fVar38 = SQRT(fVar37);
      if (fVar10 <= fVar38) {
        if ((fVar36 + fVar40 < fVar38) ||
           (fVar38 < (float)((uint)(fVar40 - fVar36) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
          fVar42 = fVar42 - fVar33;
          fVar46 = fVar46 - fVar16;
          fVar36 = fVar46 * fVar46 + fVar42 * fVar42;
          if (fVar36 <= fVar10) {
            fVar36 = 0.0;
            fVar42 = 0.0;
          }
          else {
            fVar36 = __real_3f800000 / SQRT(fVar36);
            fVar42 = fVar36 * fVar42;
            fVar36 = fVar36 * fVar46;
          }
          local_250 = fVar33 - fVar42 * fVar40;
          fStack_24c = fVar16 - fVar40 * fVar36;
          local_318._s_0.Y = fStack_24c;
          local_318._s_0.X = local_250;
        }
        else {
          fVar41 = __real_3f800000 / fVar38;
          fVar36 = ((fVar37 - fVar39) + fVar45) * (__real_3f000000 / fVar38);
          local_258 = (fVar42 - fVar33) * fVar36 * fVar41 + fVar33;
          fStack_254 = (fVar46 - fVar16) * fVar36 * fVar41 + fVar16;
          local_2f8._4_4_ = fStack_254;
          local_2f8._0_4_ = local_258;
          local_318 = local_2f8;
          local_2f0 = local_2f8;
          if (fVar10 <= (float)((uint)(fVar36 - fVar40) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
            fVar36 = SQRT(fVar45 - fVar36 * fVar36);
            fVar40 = fVar36 * fVar43 * fVar41;
            fVar36 = (float)((uint)(fVar44 * fVar36 * fVar41) ^
                            __xmm_80000000800000008000000080000000);
            local_2f0._4_4_ = fStack_254 + fVar36;
            local_2f0._0_4_ = local_258 + fVar40;
            local_2f8._4_4_ = fStack_254 - fVar36;
            local_2f8._0_4_ = local_258 - fVar40;
            local_318 = local_2f8;
            if (0.0 < (fVar16 - (float)local_2f0._4_4_) * fVar44 -
                      (fVar33 - (float)(undefined4)local_2f0) * fVar43) {
              local_318 = local_2f0;
            }
          }
        }
      }
      else {
        if ((uVar14 == 0xffffffff) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("CrossEdgePoint != INDEX_NONE",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothGeometryTools.cpp"
                                ,0xc6,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar17 = 0;
        if ((int)uVar14 < *(int *)&pFVar31[8].field_0x0) {
          uVar17 = ~uVar14 >> 0x1f;
        }
        if (uVar17 == 0) {
          local_378 = (TVector2<float>_u_0 *)(longlong)(int)uVar14;
          local_370 = (TVector2<float>_u_0 *)(longlong)*(int *)&pFVar31[8].field_0x0;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        local_260 = *(float *)(lVar25 + lVar28 * 8);
        fStack_25c = *(float *)(lVar25 + lVar28 * 8 + 4);
        fVar16 = *(float *)(*(longlong *)&pFVar31->field_0x0 + (longlong)(int)uVar14 * 8) -
                 local_260;
        fVar36 = *(float *)(*(longlong *)&pFVar31->field_0x0 + (longlong)(int)uVar14 * 8 + 4) -
                 fStack_25c;
        fVar33 = fVar36 * fVar36 + fVar16 * fVar16;
        if (fVar33 <= fVar10) {
          fVar33 = 0.0;
          fVar16 = 0.0;
        }
        else {
          fVar33 = __real_3f800000 / SQRT(fVar33);
          fVar16 = fVar33 * fVar16;
          fVar33 = fVar33 * fVar36;
        }
        local_260 = local_260 - fVar16 * fVar40;
        fStack_25c = fStack_25c - fVar40 * fVar33;
        local_318._s_0.Y = fStack_25c;
        local_318._s_0.X = local_260;
      }
      fVar33 = 0.0;
      local_348._0_4_ = -NAN;
      if (*(int *)&pFVar34[0x18].field_0x0 < 1) {
LAB_14db72c7f:
        pTVar24 = *(TVector2<float>_u_0 **)&pFVar31->field_0x0;
        if ((pTVar24 <= &local_318) && (&local_318 < pTVar24 + *(int *)(pFVar31 + 0xc))) {
          local_360 = (longlong)*(int *)&pFVar31[8].field_0x0;
          local_358 = 8;
          local_378 = &local_318;
          local_370 = pTVar24;
          local_368 = (longlong)*(int *)(pFVar31 + 0xc);
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar13) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        fVar33 = *(float *)&pFVar31[8].field_0x0;
        if (fVar33 == *(float *)(pFVar31 + 0xc)) {
          fVar33 = (float)Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x408,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 0xc));
        }
        *(uint *)&pFVar31[8].field_0x0 = (int)fVar33 + 1;
        *(TVector2<float>_u_0 *)(*(longlong *)&pFVar31->field_0x0 + (longlong)(int)fVar33 * 8) =
             local_318;
        pTVar24 = *(TVector2<float>_u_0 **)&pFVar34[0x20].field_0x0;
        local_348._0_4_ = fVar33;
        if ((pTVar24 <= &local_2a0) &&
           (&local_2a0 <
            (TVector2<float>_u_0 *)((longlong)pTVar24 + (longlong)*(int *)(pFVar34 + 0x2c) * 0xc)))
        {
          local_360 = (longlong)*(int *)&pFVar34[0x28].field_0x0;
          local_358 = 0xc;
          local_378 = &local_2a0;
          local_370 = pTVar24;
          local_368 = (longlong)*(int *)(pFVar34 + 0x2c);
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar13) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar15 = *(int *)&pFVar34[0x28].field_0x0;
        if (iVar15 == *(int *)(pFVar34 + 0x2c)) {
          iVar15 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,(ForAnyElementType *)(pFVar34 + 0x20),(int *)(pFVar34 + 0x2c));
        }
        *(int *)&pFVar34[0x28].field_0x0 = iVar15 + 1;
        lVar25 = *(longlong *)&pFVar34[0x20].field_0x0;
        *(ulonglong *)(lVar25 + (longlong)iVar15 * 0xc) =
             CONCAT44(local_2a0._s_0.Y,local_2a0._s_0.X);
        *(float *)(lVar25 + (longlong)iVar15 * 0xc + 8) = local_298;
        if (local_2e8 != (FDynamicMeshAttributeSet *)0x0) {
          pTVar4 = (local_2e8->MaterialIDAttrib).Ptr;
          uVar14 = (int)fVar32 * 3;
          local_290._s_0.X =
               *(float *)(*(longlong *)(&pTVar4->field_0x0 + (ulonglong)(uVar14 >> 9) * 8) +
                         (ulonglong)(uVar14 & 0x1ff) * 4);
          local_290._s_0.Y =
               *(float *)(*(longlong *)(&pTVar4->field_0x0 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                         (ulonglong)(uVar14 + 1 & 0x1ff) * 4);
          pTVar24 = *(TVector2<float>_u_0 **)&pFVar34[0x30].field_0x0;
          local_288 = *(undefined4 *)
                       (*(longlong *)(&pTVar4->field_0x0 + (ulonglong)(uVar14 + 2 >> 9) * 8) +
                       (ulonglong)(uVar14 + 2 & 0x1ff) * 4);
          if ((pTVar24 <= &local_290) &&
             (&local_290 <
              (TVector2<float>_u_0 *)((longlong)pTVar24 + (longlong)*(int *)(pFVar34 + 0x3c) * 0xc))
             ) {
            local_360 = (longlong)*(int *)&pFVar34[0x38].field_0x0;
            local_358 = 0xc;
            local_378 = &local_290;
            local_370 = pTVar24;
            local_368 = (longlong)*(int *)(pFVar34 + 0x3c);
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          iVar15 = *(int *)&pFVar34[0x38].field_0x0;
          if (iVar15 == *(int *)(pFVar34 + 0x3c)) {
            iVar15 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,(ForAnyElementType *)(pFVar34 + 0x30),(int *)(pFVar34 + 0x3c))
            ;
          }
          *(int *)&pFVar34[0x38].field_0x0 = iVar15 + 1;
          lVar25 = *(longlong *)&pFVar34[0x30].field_0x0;
          *(ulonglong *)(lVar25 + (longlong)iVar15 * 0xc) =
               CONCAT44(local_290._s_0.Y,local_290._s_0.X);
          *(undefined4 *)(lVar25 + (longlong)iVar15 * 0xc + 8) = local_288;
        }
        pTVar24 = *(TVector2<float>_u_0 **)&pFVar34[0x40].field_0x0;
        if ((pTVar24 <= (TVector2<float>_u_0 *)(local_340 + 4)) &&
           ((FScriptContainerElement *)(local_340 + 4) <
            (FScriptContainerElement *)((longlong)pTVar24 + (longlong)*(int *)(pFVar34 + 0x4c) * 4))
           ) {
          local_360 = (longlong)*(int *)&pFVar34[0x48].field_0x0;
          local_358 = 4;
          local_378 = (TVector2<float>_u_0 *)(local_340 + 4);
          local_370 = pTVar24;
          local_368 = (longlong)*(int *)(pFVar34 + 0x4c);
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar13) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar15 = *(int *)&pFVar34[0x48].field_0x0;
        if (iVar15 == *(int *)(pFVar34 + 0x4c)) {
          iVar15 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)(pFVar34 + 0x40),(int *)(pFVar34 + 0x4c));
        }
        *(int *)&pFVar34[0x48].field_0x0 = iVar15 + 1;
        *(undefined4 *)(*(longlong *)&pFVar34[0x40].field_0x0 + (longlong)iVar15 * 4) =
             local_340._4_4_;
      }
      else {
        lVar25 = 0;
        lVar28 = 0;
        do {
          uVar14 = 0;
          if ((int)fVar33 < *(int *)&pFVar34[0x48].field_0x0) {
            uVar14 = ~(uint)fVar33 >> 0x1f;
          }
          if (uVar14 == 0) {
            local_378 = (TVector2<float>_u_0 *)(longlong)(int)fVar33;
            local_370 = (TVector2<float>_u_0 *)(longlong)*(int *)&pFVar34[0x48].field_0x0;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          if (*(float *)(*(longlong *)&pFVar34[0x40].field_0x0 + lVar28) == (float)local_340._4_4_)
          {
            uVar14 = 0;
            if ((int)fVar33 < *(int *)&pFVar31[8].field_0x0) {
              uVar14 = ~(uint)fVar33 >> 0x1f;
            }
            if (uVar14 == 0) {
              local_378 = (TVector2<float>_u_0 *)(longlong)(int)fVar33;
              local_370 = (TVector2<float>_u_0 *)(longlong)*(int *)&pFVar31[8].field_0x0;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            fVar36 = local_318._s_0.Y - *(float *)(*(longlong *)&pFVar31->field_0x0 + lVar25 + 4);
            fVar40 = local_318._s_0.X - *(float *)(*(longlong *)&pFVar31->field_0x0 + lVar25);
            fVar16 = fVar33;
            if (fVar36 * fVar36 + fVar40 * fVar40 <= fVar11) break;
          }
          fVar33 = (float)((int)fVar33 + 1);
          lVar28 = lVar28 + 4;
          lVar25 = lVar25 + 8;
          fVar16 = (float)local_348._0_4_;
        } while ((int)fVar33 < *(int *)&pFVar34[0x18].field_0x0);
        local_348._0_4_ = fVar16;
        if ((float)local_348._0_4_ == -NAN) goto LAB_14db72c7f;
      }
      if (((local_348._4_4_ != local_340._0_4_) && (local_340._0_4_ != local_348._0_4_)) &&
         (local_348._0_4_ != local_348._4_4_)) {
        pTVar24 = *(TVector2<float>_u_0 **)&pFVar34->field_0x0;
        if ((pTVar24 <= (TVector2<float>_u_0 *)(local_348 + 4)) &&
           ((FScriptContainerElement *)(local_348 + 4) <
            (FScriptContainerElement *)((longlong)pTVar24 + (longlong)*(int *)(pFVar34 + 0xc) * 4)))
        {
          local_360 = (longlong)*(int *)&pFVar34[8].field_0x0;
          local_358 = 4;
          local_378 = (TVector2<float>_u_0 *)(local_348 + 4);
          local_370 = pTVar24;
          local_368 = (longlong)*(int *)(pFVar34 + 0xc);
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar13) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar15 = *(int *)&pFVar34[8].field_0x0;
        if (iVar15 == *(int *)(pFVar34 + 0xc)) {
          iVar15 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar34,(int *)(pFVar34 + 0xc));
        }
        *(int *)&pFVar34[8].field_0x0 = iVar15 + 1;
        *(undefined4 *)(*(longlong *)&pFVar34->field_0x0 + (longlong)iVar15 * 4) = local_348._4_4_;
        pTVar24 = *(TVector2<float>_u_0 **)&pFVar34->field_0x0;
        if ((pTVar24 <= (TVector2<float>_u_0 *)local_340) &&
           ((FScriptContainerElement *)local_340 <
            (FScriptContainerElement *)((longlong)pTVar24 + (longlong)*(int *)(pFVar34 + 0xc) * 4)))
        {
          local_360 = (longlong)*(int *)&pFVar34[8].field_0x0;
          local_358 = 4;
          local_378 = (TVector2<float>_u_0 *)local_340;
          local_370 = pTVar24;
          local_368 = (longlong)*(int *)(pFVar34 + 0xc);
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar13) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar15 = *(int *)&pFVar34[8].field_0x0;
        if (iVar15 == *(int *)(pFVar34 + 0xc)) {
          iVar15 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar34,(int *)(pFVar34 + 0xc));
        }
        *(int *)&pFVar34[8].field_0x0 = iVar15 + 1;
        *(undefined4 *)(*(longlong *)&pFVar34->field_0x0 + (longlong)iVar15 * 4) = local_340._0_4_;
        pTVar24 = *(TVector2<float>_u_0 **)&pFVar34->field_0x0;
        if ((pTVar24 <= (TVector2<float>_u_0 *)local_348) &&
           ((FScriptContainerElement *)local_348 <
            (FScriptContainerElement *)((longlong)pTVar24 + (longlong)*(int *)(pFVar34 + 0xc) * 4)))
        {
          local_360 = (longlong)*(int *)&pFVar34[8].field_0x0;
          local_358 = 4;
          local_378 = (TVector2<float>_u_0 *)local_348;
          local_370 = pTVar24;
          local_368 = (longlong)*(int *)(pFVar34 + 0xc);
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar13) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar15 = *(int *)&pFVar34[8].field_0x0;
        if (iVar15 == *(int *)(pFVar34 + 0xc)) {
          iVar15 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar34,(int *)(pFVar34 + 0xc));
        }
        *(int *)&pFVar34[8].field_0x0 = iVar15 + 1;
        *(undefined4 *)(*(longlong *)&pFVar34->field_0x0 + (longlong)iVar15 * 4) = local_348._0_4_;
      }
      pfVar35 = &local_204;
      lVar25 = 0;
      local_248[2] = (float)local_340._4_4_;
      local_248[5] = (float)local_340._4_4_;
      local_208 = (float)local_340._0_4_;
      local_1f8 = (float)local_340._0_4_;
      local_1e8 = (float)local_340._0_4_;
      local_200 = (float)local_348._0_4_;
      local_1fc = (float)local_348._0_4_;
      local_1ec = (float)local_348._0_4_;
      local_220 = local_338;
      local_214 = local_338;
      local_248[0] = local_320;
      local_248[1] = local_310;
      local_248[3] = local_320;
      local_248[4] = local_310;
      local_204 = (float)local_348._4_4_;
      local_1f4 = (float)local_348._4_4_;
      local_1f0 = (float)local_348._4_4_;
      local_21c = local_324;
      local_218 = fVar32;
      local_210 = local_324;
      local_20c = fVar32;
      param_1 = local_280;
      fVar33 = local_32c;
      do {
        uVar14 = UE::Geometry::FDynamicMesh3::FindEdgeFromTri
                           (param_1,*(int *)((longlong)local_248 + lVar25),
                            *(int *)((longlong)local_248 + lVar25 + 4),(int)fVar33);
        uVar26 = *(ulonglong *)
                  (*(longlong *)
                    ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8)
                   + 8 + (ulonglong)(uVar14 & 0x1ff) * 0x10);
        if ((float)uVar26 == fVar33) {
          uVar26 = uVar26 >> 0x20;
LAB_14db73269:
          iVar15 = (int)uVar26;
          local_308 = iVar15;
          if (iVar15 != -1) {
            if (local_138._8_4_ != local_104) {
              FVar22 = (ForElementType<FSetElementId>)local_100;
              if (local_f8 != (ForElementType<FSetElementId>)0x0) {
                FVar22 = local_f8;
              }
              for (iVar3 = *(int *)((longlong)FVar22 +
                                   ((ulonglong)(local_f0 - 1) & uVar26 & 0xffffffff) * 4);
                  iVar3 != -1; iVar3 = *(int *)(local_138._0_8_ + (longlong)iVar3 * 0xc + 4)) {
                if (*(int *)(local_138._0_8_ + (longlong)iVar3 * 0xc) == iVar15) goto LAB_14db73357;
              }
            }
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138,&local_1c8
                       ,(bool *)&local_308);
            local_320 = pfVar35[1];
            uVar7 = *(undefined8 *)((longlong)local_248 + lVar25);
            fVar16 = pfVar35[-1];
            fVar32 = *pfVar35;
            uVar8 = *(undefined8 *)((longlong)&local_220 + lVar25);
            puVar20 = ::operator_new(0x28);
            puVar29 = local_178;
            param_1 = local_280;
            fVar33 = local_32c;
            if (puVar20 != (undefined8 *)0x0) {
              *puVar20 = 0;
              *(int *)(puVar20 + 1) = iVar15;
              *(undefined8 *)((longlong)puVar20 + 0xc) = uVar7;
              *(float *)((longlong)puVar20 + 0x14) = fVar16;
              *(float *)(puVar20 + 3) = fVar32;
              *(undefined8 *)((longlong)puVar20 + 0x1c) = uVar8;
              *(float *)((longlong)puVar20 + 0x24) = local_320;
              local_178 = puVar20;
              *puVar29 = puVar20;
            }
          }
        }
        else {
          if ((float)(uVar26 >> 0x20) == fVar33) goto LAB_14db73269;
          local_308 = -1;
        }
LAB_14db73357:
        puVar29 = local_278;
        lVar25 = lVar25 + 8;
        pfVar35 = pfVar35 + 3;
      } while (lVar25 < 0x18);
      puVar20 = (undefined8 *)*local_278;
      if (puVar20 == (undefined8 *)0x0) goto LAB_14db73470;
      fVar40 = *(float *)(puVar20 + 1);
      fVar32 = *(float *)((longlong)puVar20 + 0xc);
      fVar36 = *(float *)(puVar20 + 2);
      fVar33 = *(float *)((longlong)puVar20 + 0x14);
      local_198 = 0;
      fVar16 = *(float *)(puVar20 + 3);
      fVar39 = *(float *)((longlong)puVar20 + 0x1c);
      fVar42 = *(float *)(puVar20 + 4);
      uVar14 = *(uint *)((longlong)puVar20 + 0x24);
      uStack_17c = 0;
      uStack_194 = (undefined4)___xmm_ffffffffffffffffffffffffffffffff;
      uStack_190 = (undefined4)((ulonglong)___xmm_ffffffffffffffffffffffffffffffff >> 0x20);
      uStack_18c = (undefined4)_UNK_15060db28;
      uStack_188 = (undefined4)((ulonglong)_UNK_15060db28 >> 0x20);
      uStack_184 = 0xffffffff;
      uStack_180 = 0xffffffff;
      puVar20[1] = ___xmm_ffffffffffffffffffffffffffffffff << 0x20;
      puVar20[2] = CONCAT44(uStack_18c,uStack_190);
      puVar20[3] = CONCAT44(0xffffffff,uStack_188);
      puVar20[4] = 0xffffffff;
      local_278 = puVar20;
      local_1b8 = fVar40;
      fStack_1b4 = fVar32;
      fStack_1b0 = fVar36;
      fStack_1ac = fVar33;
      ::operator_delete(puVar29,0x28);
      pFVar31 = local_1d0;
      pFVar34 = local_1d8;
      local_338 = fVar42;
      local_32c = fVar40;
      local_324 = fVar39;
      local_320 = fVar36;
      local_310 = fVar32;
    } while( true );
  }
  goto LAB_14db734ae;
LAB_14db73470:
  do {
    puVar20 = (undefined8 *)*puVar29;
    ::operator_delete(puVar29,0x28);
    puVar29 = puVar20;
  } while (puVar20 != (undefined8 *)0x0);
  pFVar27 = (FDynamicMeshAttributeSet *)(ulonglong)local_f0;
  pFVar34 = (FScriptContainerElement *)local_138._0_8_;
  FVar22 = local_f8;
  pFVar30 = local_2e8;
  fVar33 = local_270;
  fVar16 = local_328;
LAB_14db734ae:
  local_328 = (float)((int)fVar16 + 1);
  pFVar23 = (FDynamicMeshAttributeSet *)(ulonglong)(uint)local_328;
  if ((int)local_328 < (int)fVar33) {
    do {
      uVar26 = (ulonglong)((uint)pFVar23 & 0x1ff);
      lVar25 = *(longlong *)
                ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                ((ulonglong)pFVar23 >> 9) * 8);
      if ((*(short *)(lVar25 + uVar26 * 2) != 0) && (*(short *)(lVar25 + uVar26 * 2) != -1)) break;
      uVar14 = (uint)pFVar23 + 1;
      pFVar23 = (FDynamicMeshAttributeSet *)(ulonglong)uVar14;
    } while ((int)uVar14 < (int)fVar33);
    local_328 = SUB84(pFVar23,0);
  }
  if (local_328 == fVar33) goto LAB_14db73556;
  goto LAB_14db71d10;
}

// UpdateSeamStitchLookupsAfterSplitting @ 14db735b0

void __cdecl
UE::Chaos::ClothAsset::Private::UpdateSeamStitchLookupsAfterSplitting
          (TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,TArrayView<int,int> *param_2,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  ForElementType<unsigned_int> FVar17;
  uint uVar18;
  ForElementType<unsigned_int> FVar19;
  undefined1 local_res8 [8];
  TArrayView<int,int> *local_res10;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *local_res18;
  undefined1 local_res20 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_148;
  uint local_138;
  TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  ForElementType<unsigned_int> local_100;
  int local_f8;
  int local_f4;
  undefined8 *local_f0;
  uint *local_e8;
  TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
  *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  ForElementType<unsigned_int> local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  uint local_98;
  undefined4 uStack_94;
  undefined4 local_6c;
  undefined4 local_4c;
  
  uVar18 = *(uint *)&param_1->field_0x28;
  TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iVar13 = 0;
  uVar5 = 1;
  TStack_128.BaseBitIndex = iVar13;
  TStack_128.CurrentBitIndex = 0;
  if (uVar18 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)TStack_128.Array;
    }
    uVar6 = *puVar16;
    TStack_128.BaseBitIndex = 0;
    iVar13 = 0;
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar13;
      TStack_128.BaseBitIndex = TStack_128.BaseBitIndex + 0x20;
      iVar13 = iVar13 + 1;
      TStack_128.CurrentBitIndex = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14db7365d;
      uVar6 = puVar16[lVar8 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar9 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_f8 = (int)lVar8;
    TStack_128.CurrentBitIndex = local_f8 + -1 + TStack_128.BaseBitIndex;
    if ((int)uVar18 < TStack_128.CurrentBitIndex) {
      TStack_128.CurrentBitIndex = uVar18;
    }
  }
LAB_14db7365d:
  TStack_128._padding_ = CONCAT44(uVar5,iVar13);
  TStack_128.UnvisitedBitMask = 0xffffffff;
  TStack_128._28_4_ = local_6c;
  TStack_d8._padding_ = TStack_128._padding_;
  TStack_d8.BaseBitIndex = TStack_128.BaseBitIndex;
  TStack_d8._28_4_ = local_6c;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  local_res10 = param_2;
  local_res18 = param_3;
  local_130 = param_1;
  local_e0 = param_1;
  TStack_d8.Array = TStack_128.Array;
  TStack_d8.CurrentBitIndex = TStack_128.CurrentBitIndex;
  if (TStack_128.CurrentBitIndex < (int)uVar18) {
    do {
      local_f0 = (undefined8 *)
                 (*(longlong *)local_e0 + 8 + (longlong)TStack_d8.CurrentBitIndex * 0x20);
      local_138 = *(uint *)(local_f0 + 1);
      uVar9 = (ulonglong)(int)local_138;
      puVar16 = (uint *)*local_f0;
      FVar19 = (ForElementType<unsigned_int>)(puVar16 + 0x1a);
      local_e8 = puVar16 + uVar9 * 0x2a;
      while( true ) {
        puVar3 = local_e8;
        uVar12 = 0;
        uVar18 = 0;
        local_100 = FVar19;
        if (*(int *)(local_f0 + 1) != (int)uVar9) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UE::Chaos::ClothAsset::Private::FSplittingGroup_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (puVar16 == puVar3) break;
        uVar5 = 0;
        uVar6 = *(int *)((longlong)FVar19 + -8) - *(uint *)((longlong)FVar19 + 0x24);
        local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_148.ArrayNum = 0;
        local_148.ArrayMax = 0;
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
        }
        uVar9 = uVar12;
        if (0 < (int)uVar6) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar6,&local_148.AllocatorInstance,0,&local_148.ArrayMax);
          uVar9 = local_148._8_8_ & 0xffffffff;
        }
        uVar6 = *(int *)((longlong)FVar19 + 0x18);
        uStack_ac = 1;
        uVar14 = uVar12;
        uStack_b0 = uVar5;
        local_98 = uVar5;
        if (uVar6 != 0) {
          uVar14 = (ulonglong)uVar6;
          FVar17 = FVar19;
          if (*(ForElementType<unsigned_int> *)((longlong)FVar19 + 0x10) !=
              (ForElementType<unsigned_int>)0x0) {
            FVar17 = *(ForElementType<unsigned_int> *)((longlong)FVar19 + 0x10);
          }
          uVar7 = *(uint *)FVar17;
          uVar15 = uVar12;
          local_98 = uVar18;
          uStack_b0 = uVar18;
          while (uVar7 == 0) {
            iVar13 = (int)uVar12;
            local_98 = (int)uVar15 + 0x20;
            uVar15 = (ulonglong)local_98;
            uStack_b0 = iVar13 + 1;
            uVar12 = (ulonglong)uStack_b0;
            if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_b0)
            goto LAB_14db737ce;
            uVar7 = ((uint *)((longlong)FVar17 + 4))[iVar13];
          }
          uStack_ac = -uVar7 & uVar7;
          uVar12 = (ulonglong)uStack_ac * 2 + 1;
          lVar8 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          local_f4 = (int)lVar8;
          uVar7 = local_f4 + -1 + local_98;
          if ((int)uVar6 < (int)uVar7) {
            uVar7 = uVar6;
          }
          uVar14 = (ulonglong)uVar7;
        }
LAB_14db737ce:
        local_130 = (TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
                     *)((longlong)FVar19 + -0x10);
        uStack_a0 = 0xffffffff;
        uStack_9c = (uint)uVar14;
        uStack_94 = local_4c;
        TStack_128._padding_ = CONCAT44(uStack_ac,uStack_b0);
        TStack_128.UnvisitedBitMask = 0xffffffff;
        TStack_128._28_4_ = local_4c;
        TStack_128.BaseBitIndex = local_98;
        TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar19;
        local_b8 = local_130;
        local_a8 = FVar19;
        TStack_128.CurrentBitIndex = uStack_9c;
        if ((int)uStack_9c < (int)uVar6) {
          while( true ) {
            pFVar1 = (FScriptContainerElement *)
                     (*(longlong *)local_130 + (longlong)(int)uVar14 * 0xc);
            iVar13 = (int)uVar9;
            if ((local_148.AllocatorInstance.Data <= pFVar1) &&
               (pFVar1 < local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 4)) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar13 = local_148.ArrayNum;
            }
            if (iVar13 == local_148.ArrayMax) {
              iVar13 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_148.AllocatorInstance,&local_148.ArrayMax);
            }
            local_148.ArrayNum = iVar13 + 1;
            *(undefined4 *)(local_148.AllocatorInstance.Data + (longlong)iVar13 * 4) =
                 *(undefined4 *)pFVar1;
            TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
            uVar14 = (ulonglong)(uint)TStack_128.CurrentBitIndex;
            if ((int)*(uint *)((longlong)TStack_128.Array + 0x18) <= TStack_128.CurrentBitIndex)
            break;
            uVar9 = local_148._8_8_ & 0xffffffff;
          }
        }
        uVar6 = *puVar16;
        iVar13 = param_3->ArrayNum;
        if ((int)uVar6 < iVar13) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar10 = param_3->DataPtr + (int)uVar6;
        if (pTVar10 != &local_148) {
          pFVar1 = (pTVar10->AllocatorInstance).Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (pTVar10->AllocatorInstance).Data = local_148.AllocatorInstance.Data;
          local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pTVar10->ArrayNum = local_148.ArrayNum;
          pTVar10->ArrayMax = local_148.ArrayMax;
          local_148.ArrayNum = 0;
          local_148.ArrayMax = 0;
        }
        if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.AllocatorInstance.Data);
        }
        uVar5 = *puVar16;
        if ((int)uVar5 < iVar13) {
          uVar18 = ~uVar5 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar10 = param_3->DataPtr + (int)uVar5;
        pFVar11 = (pTVar10->AllocatorInstance).Data;
        iVar13 = pTVar10->ArrayNum;
        pFVar1 = pFVar11 + (longlong)iVar13 * 4;
        while( true ) {
          if (pTVar10->ArrayNum != iVar13) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (pFVar11 == pFVar1) break;
          uVar18 = *(uint *)pFVar11;
          uVar5 = *puVar16;
          uVar6 = 0;
          if ((int)uVar18 < local_res10->ArrayNum) {
            uVar6 = ~uVar18 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar11 = pFVar11 + 4;
          local_res10->DataPtr[(int)uVar18] = uVar5;
        }
        puVar16 = puVar16 + 0x2a;
        FVar19 = (ForElementType<unsigned_int>)((longlong)local_100 + 0xa8);
        uVar9 = (ulonglong)local_138;
        param_3 = local_res18;
      }
      TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    } while (TStack_d8.CurrentBitIndex < (TStack_d8.Array)->NumBits);
  }
  return;
}

// UpdateSimIndicesAfterSplitting @ 14db73b00

void __cdecl
UE::Chaos::ClothAsset::Private::UpdateSimIndicesAfterSplitting
          (TArrayView<UE::Math::TIntVector3<int>_const_,int> *param_1,
          TArrayView<int_const_,int> *param_2,TArrayView<UE::Math::TIntVector3<int>,int> *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((param_1->ArrayNum != param_3->ArrayNum) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SimIndices2D.Num() == SimIndices3D.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                         ,0x1cc,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = 0;
  if (0 < param_3->ArrayNum) {
    lVar8 = 0;
    do {
      uVar7 = ~uVar5 >> 0x1f;
      uVar3 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar3 = uVar7;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)((longlong)&param_1->DataPtr->field0_0x0 + lVar8) == -1) {
        iVar6 = -1;
      }
      else {
        uVar3 = 0;
        if ((int)uVar5 < param_1->ArrayNum) {
          uVar3 = uVar7;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar3 = *(uint *)((longlong)&param_1->DataPtr->field0_0x0 + lVar8);
        uVar4 = 0;
        if ((int)uVar3 < param_2->ArrayNum) {
          uVar4 = ~uVar3 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar6 = param_2->DataPtr[(int)uVar3];
      }
      uVar3 = 0;
      if ((int)uVar5 < param_3->ArrayNum) {
        uVar3 = uVar7;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(int *)((longlong)&param_3->DataPtr->field0_0x0 + lVar8) = iVar6;
      uVar3 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar3 = uVar7;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)((longlong)&param_1->DataPtr->field0_0x0 + lVar8 + 4) == -1) {
        iVar6 = -1;
      }
      else {
        uVar3 = 0;
        if ((int)uVar5 < param_1->ArrayNum) {
          uVar3 = uVar7;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar3 = *(uint *)((longlong)&param_1->DataPtr->field0_0x0 + lVar8 + 4);
        uVar4 = 0;
        if ((int)uVar3 < param_2->ArrayNum) {
          uVar4 = ~uVar3 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar6 = param_2->DataPtr[(int)uVar3];
      }
      uVar3 = 0;
      if ((int)uVar5 < param_3->ArrayNum) {
        uVar3 = uVar7;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(int *)((longlong)&param_3->DataPtr->field0_0x0 + lVar8 + 4) = iVar6;
      uVar3 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar3 = uVar7;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(int *)((longlong)&param_1->DataPtr->field0_0x0 + lVar8 + 8) == -1) {
        iVar6 = -1;
      }
      else {
        uVar3 = 0;
        if ((int)uVar5 < param_1->ArrayNum) {
          uVar3 = uVar7;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar3 = *(uint *)((longlong)&param_1->DataPtr->field0_0x0 + lVar8 + 8);
        uVar4 = 0;
        if ((int)uVar3 < param_2->ArrayNum) {
          uVar4 = ~uVar3 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar6 = param_2->DataPtr[(int)uVar3];
      }
      uVar3 = 0;
      if ((int)uVar5 < param_3->ArrayNum) {
        uVar3 = uVar7;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = uVar5 + 1;
      *(int *)((longlong)&param_3->DataPtr->field0_0x0 + lVar8 + 8) = iVar6;
      lVar8 = lVar8 + 0xc;
    } while ((int)uVar5 < param_3->ArrayNum);
  }
  return;
}

// UpdateSplittingGroup @ 14db73f70

void __cdecl
UE::Chaos::ClothAsset::Private::UpdateSplittingGroup
          (TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>
           *param_1,int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArrayView<UE::Math::TIntVector2<int>_const_,int> *param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5)

{
  TIntVector2<int> *pTVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76 [2];
  uint local_74;
  uint local_70;
  uint local_6c;
  FScriptContainerElement *local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48 [2];
  FScriptContainerElement *local_40;
  
  pFVar16 = (param_3->AllocatorInstance).Data;
  local_70 = param_3->ArrayNum;
  uVar8 = (ulonglong)(int)local_70;
  local_40 = pFVar16 + uVar8 * 4;
LAB_14db73fa8:
  pFVar9 = local_40;
  local_68 = pFVar16;
  if (param_3->ArrayNum != (int)uVar8) {
    local_78 = 0;
    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_78)
    ;
  }
  if (pFVar16 == pFVar9) {
    uVar11 = param_5->ArrayNum;
    uVar8 = (ulonglong)(int)uVar11;
    pFVar9 = (param_5->AllocatorInstance).Data;
    pFVar16 = pFVar9 + uVar8 * 4;
    do {
      if (param_5->ArrayNum != (int)uVar8) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_77);
      }
      if (pFVar9 == pFVar16) {
        return;
      }
      uVar17 = *(uint *)pFVar9;
      local_6c = uVar17;
      if (uVar17 != 0xffffffff) {
        pFVar15 = (param_1->AllocatorInstance).Data;
        iVar6 = param_1->ArrayNum;
        pFVar13 = pFVar15 + 0x10;
        pFVar14 = pFVar15 + (longlong)iVar6 * 0xa8;
        while( true ) {
          if (param_1->ArrayNum != iVar6) {
            `TCheckedPointerIterator<UE::Chaos::ClothAsset::Private::FSplittingGroup,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_76);
          }
          if (pFVar15 == pFVar14) break;
          if (*(int *)pFVar13 != *(int *)(pFVar13 + 0x2c)) {
            pFVar10 = *(FScriptContainerElement **)(pFVar13 + 0x38);
            if (pFVar10 == (FScriptContainerElement *)0x0) {
              pFVar10 = pFVar13 + 0x30;
            }
            iVar7 = *(int *)(pFVar10 + (ulonglong)(*(int *)(pFVar13 + 0x40) - 1U & uVar17) * 4);
            if (iVar7 != -1) {
              do {
                if (*(uint *)(*(longlong *)(pFVar13 + -8) + (longlong)iVar7 * 0xc) == uVar17)
                goto LAB_14db7444e;
                iVar7 = *(int *)(*(longlong *)(pFVar13 + -8) + 4 + (longlong)iVar7 * 0xc);
              } while (iVar7 != -1);
            }
          }
          pFVar15 = pFVar15 + 0xa8;
          pFVar13 = pFVar13 + 0xa8;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == param_1->ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x8a8,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar6 + 1;
        pFVar13 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0xa8;
        DefaultConstructItems<UE::Chaos::ClothAsset::Private::FSplittingGroup,int>(pFVar13,1);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pFVar13 + 8),local_48,
                   (bool *)&local_6c);
      }
LAB_14db7444e:
      uVar8 = (ulonglong)uVar11;
      pFVar9 = pFVar9 + 4;
    } while( true );
  }
  local_74 = *(uint *)pFVar16;
  lVar12 = (longlong)(int)local_74;
  if (local_74 != 0xffffffff) {
    uVar11 = 0;
    if ((int)local_74 < param_4->ArrayNum) {
      uVar11 = ~local_74 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar17 = 0xffffffff;
    iVar6 = param_1->ArrayNum;
    pTVar1 = param_4->DataPtr + lVar12;
    uVar11 = 0;
    if (0 < iVar6) {
      lVar12 = 0;
LAB_14db74040:
      uVar5 = 0;
      if ((int)uVar11 < iVar6) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar16 = (param_1->AllocatorInstance).Data;
      uVar5 = (pTVar1->field0_0x0)._s_0.X;
      uVar3 = uVar17;
      if (*(int *)(pFVar16 + lVar12 + 0x10) != *(int *)(pFVar16 + lVar12 + 0x3c)) {
        pFVar9 = pFVar16 + lVar12 + 0x40;
        if (*(FScriptContainerElement **)(pFVar16 + lVar12 + 0x48) != (FScriptContainerElement *)0x0
           ) {
          pFVar9 = *(FScriptContainerElement **)(pFVar16 + lVar12 + 0x48);
        }
        iVar6 = *(int *)(pFVar9 + (ulonglong)(*(int *)(pFVar16 + lVar12 + 0x50) - 1U & uVar5) * 4);
        if (iVar6 != -1) {
          do {
            if (*(uint *)(*(longlong *)(pFVar16 + lVar12 + 8) + (longlong)iVar6 * 0xc) == uVar5) {
              if (iVar6 != -1) goto LAB_14db74137;
              break;
            }
            iVar6 = *(int *)(*(longlong *)(pFVar16 + lVar12 + 8) + 4 + (longlong)iVar6 * 0xc);
          } while (iVar6 != -1);
        }
        uVar5 = (pTVar1->field0_0x0)._s_0.Y;
        pFVar9 = pFVar16 + lVar12 + 0x40;
        if (*(FScriptContainerElement **)(pFVar16 + lVar12 + 0x48) != (FScriptContainerElement *)0x0
           ) {
          pFVar9 = *(FScriptContainerElement **)(pFVar16 + lVar12 + 0x48);
        }
        iVar6 = *(int *)(pFVar9 + (ulonglong)(*(int *)(pFVar16 + lVar12 + 0x50) - 1U & uVar5) * 4);
        if (iVar6 != -1) {
          do {
            if (*(uint *)(*(longlong *)(pFVar16 + lVar12 + 8) + (longlong)iVar6 * 0xc) == uVar5)
            goto LAB_14db74137;
            iVar6 = *(int *)(*(longlong *)(pFVar16 + lVar12 + 8) + 4 + (longlong)iVar6 * 0xc);
          } while (iVar6 != -1);
        }
      }
      goto LAB_14db74183;
    }
    goto LAB_14db741a2;
  }
  goto LAB_14db7422f;
LAB_14db74137:
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pFVar16 + lVar12 + 8),
             &local_60,(bool *)pTVar1);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pFVar16 + lVar12 + 8),
             &local_5c,(bool *)((longlong)&pTVar1->field0_0x0 + 4));
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pFVar16 + lVar12 + 0x58),
             &local_58,(bool *)&local_74);
  uVar3 = uVar11;
  if (uVar17 != 0xffffffff) {
    uVar11 = 0;
    if ((int)uVar17 < param_1->ArrayNum) {
      uVar11 = ~uVar17 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = (param_1->AllocatorInstance).Data;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pFVar16 + lVar12 + 0x58),
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               (pFVar9 + (longlong)(int)uVar17 * 0xa8 + 0x58));
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pFVar16 + lVar12 + 8),
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               (pFVar9 + (longlong)(int)uVar17 * 0xa8 + 8));
    uVar11 = 0;
    if ((int)uVar17 < param_1->ArrayNum) {
      uVar11 = ~uVar17 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>::
    RemoveAtSwapImpl(param_1,uVar17);
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa8,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
    goto LAB_14db7422f;
  }
LAB_14db74183:
  uVar17 = uVar3;
  iVar6 = param_1->ArrayNum;
  uVar11 = uVar11 + 1;
  lVar12 = lVar12 + 0xa8;
  if (iVar6 <= (int)uVar11) goto code_r0x00014db74198;
  goto LAB_14db74040;
code_r0x00014db74198:
  if (uVar17 == 0xffffffff) {
LAB_14db741a2:
    iVar6 = param_1->ArrayNum;
    if (iVar6 == param_1->ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8a8,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar6;
    }
    param_1->ArrayNum = iVar6 + 1;
    pFVar16 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0xa8;
    DefaultConstructItems<UE::Chaos::ClothAsset::Private::FSplittingGroup,int>(pFVar16,1);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pFVar16 + 8),&local_54,
               (bool *)pTVar1);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pFVar16 + 8),&local_50,
               (bool *)((longlong)&pTVar1->field0_0x0 + 4));
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pFVar16 + 0x58),&local_4c,
               (bool *)&local_74);
  }
LAB_14db7422f:
  pFVar16 = local_68 + 4;
  uVar8 = (ulonglong)local_70;
  goto LAB_14db73fa8;
}

// UpdateVertexLookupsAfterSplitting @ 14db74480

void __cdecl
UE::Chaos::ClothAsset::Private::UpdateVertexLookupsAfterSplitting
          (TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
           *param_1,TArrayView<int,int> *param_2,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  ForElementType<unsigned_int> FVar17;
  uint uVar18;
  ForElementType<unsigned_int> FVar19;
  undefined1 local_res8 [8];
  TArrayView<int,int> *local_res10;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *local_res18;
  undefined1 local_res20 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_148;
  uint local_138;
  TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  ForElementType<unsigned_int> local_100;
  int local_f8;
  int local_f4;
  undefined8 *local_f0;
  uint *local_e8;
  TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
  *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  ForElementType<unsigned_int> local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  uint local_98;
  undefined4 uStack_94;
  undefined4 local_6c;
  undefined4 local_4c;
  
  uVar18 = *(uint *)&param_1->field_0x28;
  TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iVar13 = 0;
  uVar5 = 1;
  TStack_128.BaseBitIndex = iVar13;
  TStack_128.CurrentBitIndex = 0;
  if (uVar18 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)TStack_128.Array;
    }
    uVar6 = *puVar16;
    TStack_128.BaseBitIndex = 0;
    iVar13 = 0;
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar13;
      TStack_128.BaseBitIndex = TStack_128.BaseBitIndex + 0x20;
      iVar13 = iVar13 + 1;
      TStack_128.CurrentBitIndex = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14db7452d;
      uVar6 = puVar16[lVar8 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar9 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_f8 = (int)lVar8;
    TStack_128.CurrentBitIndex = local_f8 + -1 + TStack_128.BaseBitIndex;
    if ((int)uVar18 < TStack_128.CurrentBitIndex) {
      TStack_128.CurrentBitIndex = uVar18;
    }
  }
LAB_14db7452d:
  TStack_128._padding_ = CONCAT44(uVar5,iVar13);
  TStack_128.UnvisitedBitMask = 0xffffffff;
  TStack_128._28_4_ = local_6c;
  TStack_d8._padding_ = TStack_128._padding_;
  TStack_d8.BaseBitIndex = TStack_128.BaseBitIndex;
  TStack_d8._28_4_ = local_6c;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  local_res10 = param_2;
  local_res18 = param_3;
  local_130 = param_1;
  local_e0 = param_1;
  TStack_d8.Array = TStack_128.Array;
  TStack_d8.CurrentBitIndex = TStack_128.CurrentBitIndex;
  if (TStack_128.CurrentBitIndex < (int)uVar18) {
    do {
      local_f0 = (undefined8 *)
                 (*(longlong *)local_e0 + 8 + (longlong)TStack_d8.CurrentBitIndex * 0x20);
      local_138 = *(uint *)(local_f0 + 1);
      uVar9 = (ulonglong)(int)local_138;
      puVar16 = (uint *)*local_f0;
      FVar19 = (ForElementType<unsigned_int>)(puVar16 + 6);
      local_e8 = puVar16 + uVar9 * 0x2a;
      while( true ) {
        puVar3 = local_e8;
        uVar12 = 0;
        uVar18 = 0;
        local_100 = FVar19;
        if (*(int *)(local_f0 + 1) != (int)uVar9) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UE::Chaos::ClothAsset::Private::FSplittingGroup_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (puVar16 == puVar3) break;
        uVar5 = 0;
        uVar6 = *(int *)((longlong)FVar19 + -8) - *(uint *)((longlong)FVar19 + 0x24);
        local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_148.ArrayNum = 0;
        local_148.ArrayMax = 0;
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
        }
        uVar9 = uVar12;
        if (0 < (int)uVar6) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar6,&local_148.AllocatorInstance,0,&local_148.ArrayMax);
          uVar9 = local_148._8_8_ & 0xffffffff;
        }
        uVar6 = *(int *)((longlong)FVar19 + 0x18);
        uStack_ac = 1;
        uVar14 = uVar12;
        uStack_b0 = uVar5;
        local_98 = uVar5;
        if (uVar6 != 0) {
          uVar14 = (ulonglong)uVar6;
          FVar17 = FVar19;
          if (*(ForElementType<unsigned_int> *)((longlong)FVar19 + 0x10) !=
              (ForElementType<unsigned_int>)0x0) {
            FVar17 = *(ForElementType<unsigned_int> *)((longlong)FVar19 + 0x10);
          }
          uVar7 = *(uint *)FVar17;
          uVar15 = uVar12;
          local_98 = uVar18;
          uStack_b0 = uVar18;
          while (uVar7 == 0) {
            iVar13 = (int)uVar12;
            local_98 = (int)uVar15 + 0x20;
            uVar15 = (ulonglong)local_98;
            uStack_b0 = iVar13 + 1;
            uVar12 = (ulonglong)uStack_b0;
            if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_b0)
            goto LAB_14db7469e;
            uVar7 = ((uint *)((longlong)FVar17 + 4))[iVar13];
          }
          uStack_ac = -uVar7 & uVar7;
          uVar12 = (ulonglong)uStack_ac * 2 + 1;
          lVar8 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          local_f4 = (int)lVar8;
          uVar7 = local_f4 + -1 + local_98;
          if ((int)uVar6 < (int)uVar7) {
            uVar7 = uVar6;
          }
          uVar14 = (ulonglong)uVar7;
        }
LAB_14db7469e:
        local_130 = (TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>
                     *)((longlong)FVar19 + -0x10);
        uStack_a0 = 0xffffffff;
        uStack_9c = (uint)uVar14;
        uStack_94 = local_4c;
        TStack_128._padding_ = CONCAT44(uStack_ac,uStack_b0);
        TStack_128.UnvisitedBitMask = 0xffffffff;
        TStack_128._28_4_ = local_4c;
        TStack_128.BaseBitIndex = local_98;
        TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar19;
        local_b8 = local_130;
        local_a8 = FVar19;
        TStack_128.CurrentBitIndex = uStack_9c;
        if ((int)uStack_9c < (int)uVar6) {
          while( true ) {
            pFVar1 = (FScriptContainerElement *)
                     (*(longlong *)local_130 + (longlong)(int)uVar14 * 0xc);
            iVar13 = (int)uVar9;
            if ((local_148.AllocatorInstance.Data <= pFVar1) &&
               (pFVar1 < local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 4)) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar13 = local_148.ArrayNum;
            }
            if (iVar13 == local_148.ArrayMax) {
              iVar13 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_148.AllocatorInstance,&local_148.ArrayMax);
            }
            local_148.ArrayNum = iVar13 + 1;
            *(undefined4 *)(local_148.AllocatorInstance.Data + (longlong)iVar13 * 4) =
                 *(undefined4 *)pFVar1;
            TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
            uVar14 = (ulonglong)(uint)TStack_128.CurrentBitIndex;
            if ((int)*(uint *)((longlong)TStack_128.Array + 0x18) <= TStack_128.CurrentBitIndex)
            break;
            uVar9 = local_148._8_8_ & 0xffffffff;
          }
        }
        uVar6 = *puVar16;
        iVar13 = param_3->ArrayNum;
        if ((int)uVar6 < iVar13) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar10 = param_3->DataPtr + (int)uVar6;
        if (pTVar10 != &local_148) {
          pFVar1 = (pTVar10->AllocatorInstance).Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (pTVar10->AllocatorInstance).Data = local_148.AllocatorInstance.Data;
          local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pTVar10->ArrayNum = local_148.ArrayNum;
          pTVar10->ArrayMax = local_148.ArrayMax;
          local_148.ArrayNum = 0;
          local_148.ArrayMax = 0;
        }
        if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.AllocatorInstance.Data);
        }
        uVar5 = *puVar16;
        if ((int)uVar5 < iVar13) {
          uVar18 = ~uVar5 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar10 = param_3->DataPtr + (int)uVar5;
        pFVar11 = (pTVar10->AllocatorInstance).Data;
        iVar13 = pTVar10->ArrayNum;
        pFVar1 = pFVar11 + (longlong)iVar13 * 4;
        while( true ) {
          if (pTVar10->ArrayNum != iVar13) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (pFVar11 == pFVar1) break;
          uVar18 = *(uint *)pFVar11;
          uVar5 = *puVar16;
          uVar6 = 0;
          if ((int)uVar18 < local_res10->ArrayNum) {
            uVar6 = ~uVar18 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar11 = pFVar11 + 4;
          local_res10->DataPtr[(int)uVar18] = uVar5;
        }
        puVar16 = puVar16 + 0x2a;
        FVar19 = (ForElementType<unsigned_int>)((longlong)local_100 + 0xa8);
        uVar9 = (ulonglong)local_138;
        param_3 = local_res18;
      }
      TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    } while (TStack_d8.CurrentBitIndex < (TStack_d8.Array)->NumBits);
  }
  return;
}

// UpdateWeldingLookups @ 14db749d0

void __cdecl
UE::Chaos::ClothAsset::Private::UpdateWeldingLookups
          (TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
           *param_1,TArrayView<int,int> *param_2,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *param_3)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  uint *puVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  uint local_138;
  uint local_134;
  TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
  *local_130;
  int iStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
  *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  int local_d8;
  int local_d4;
  int local_d0;
  TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
  *local_c8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_c0;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  undefined4 local_64;
  undefined4 local_44;
  
  iVar3 = *(int *)&param_1->field_0x28;
  local_120 = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iStack_128 = 0;
  local_110 = 0;
  uStack_124 = 1;
  iStack_114 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)local_120;
    }
    uVar4 = *puVar17;
    while (uVar4 == 0) {
      lVar9 = (longlong)iStack_128;
      local_110 = local_110 + 0x20;
      iStack_128 = iStack_128 + 1;
      iStack_114 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_128) goto LAB_14db74a6d;
      uVar4 = puVar17[lVar9 + 1];
    }
    uStack_124 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uStack_124 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_d8 = (int)lVar9;
    iStack_114 = local_110 + -1 + local_d8;
    if (iVar3 < iStack_114) {
      iStack_114 = iVar3;
    }
  }
LAB_14db74a6d:
  uStack_118 = 0xffffffff;
  uStack_10c = local_64;
  TStack_f8._padding_ = CONCAT44(uStack_124,iStack_128);
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  TStack_f8._28_4_ = local_64;
  TStack_f8.BaseBitIndex = local_110;
  local_130 = param_1;
  local_100 = param_1;
  TStack_f8.Array = local_120;
  TStack_f8.CurrentBitIndex = iStack_114;
  if (iStack_114 < iVar3) {
    do {
      pTVar6 = local_100;
      uVar4 = *(uint *)((longlong)TStack_f8.CurrentBitIndex * 0x60 + *(longlong *)local_100);
      uVar12 = 0;
      if ((int)uVar4 < param_3->ArrayNum) {
        uVar12 = ~uVar4 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iStack_128 = 0;
      local_110 = 0;
      local_c0 = param_3->DataPtr + (int)uVar4;
      uStack_124 = 1;
      lVar9 = (longlong)TStack_f8.CurrentBitIndex * 0x60 + *(longlong *)pTVar6;
      iVar3 = *(int *)(lVar9 + 0x30);
      pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar9 + 0x18);
      local_130 = (TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
                   *)(lVar9 + 8);
      iStack_114 = 0;
      if (iVar3 != 0) {
        pTVar16 = pTVar18;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar9 + 0x28) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar9 + 0x28);
        }
        uVar12 = *(uint *)(pTVar16->AllocatorInstance).InlineData;
        while (uVar12 == 0) {
          lVar10 = (longlong)iStack_128;
          local_110 = local_110 + 0x20;
          iStack_128 = iStack_128 + 1;
          iStack_114 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_128)
          goto LAB_14db74bdd;
          uVar12 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar10 * 4 + 4);
        }
        uStack_124 = -uVar12 & uVar12;
        uVar2 = (ulonglong)uStack_124 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_d4 = (int)lVar10;
        iStack_114 = local_110 + -1 + local_d4;
        if (iVar3 < iStack_114) {
          iStack_114 = iVar3;
        }
      }
LAB_14db74bdd:
      uStack_10c = local_44;
      iStack_108 = *(int *)(lVar9 + 0x10) - *(int *)(lVar9 + 0x3c);
      local_138 = *(uint *)(lVar9 + 0x30);
      TStack_a8._padding_ = CONCAT44(uStack_124,iStack_128);
      uStack_118 = 0xffffffff;
      uVar12 = local_138 & 0xffffffe0;
      TStack_a8.CurrentBitIndex = iStack_114;
      TStack_a8.UnvisitedBitMask = 0xffffffff;
      iVar11 = (int)local_138 >> 5;
      TStack_a8._28_4_ = local_44;
      TStack_a8.BaseBitIndex = local_110;
      uStack_88 = CONCAT44(uStack_104,iStack_108);
      local_120 = pTVar18;
      local_c8 = local_130;
      local_b8 = pTVar18;
      local_b0 = local_130;
      TStack_a8.Array = pTVar18;
      if ((((int)local_138 < 0) || (iVar3 < (int)local_138)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = *(uint *)(lVar9 + 0x30);
      if (local_138 != uVar8) {
        pTVar16 = pTVar18;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar9 + 0x28) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar9 + 0x28);
        }
        uVar14 = -1 << ((byte)local_138 & 0x1f) &
                 *(uint *)((pTVar16->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
        while (uVar14 == 0) {
          lVar9 = (longlong)iVar11;
          uVar12 = uVar12 + 0x20;
          iVar11 = iVar11 + 1;
          local_138 = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
          goto LAB_14db74d00;
          uVar14 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar9 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_d0 = (int)lVar9;
        local_138 = local_d0 + -1 + uVar12;
        if ((int)uVar8 < (int)local_138) {
          local_138 = uVar8;
        }
      }
LAB_14db74d00:
      while( true ) {
        pTVar6 = local_b0;
        if (*(int *)&local_b0->field_0x8 - *(int *)&local_b0->field_0x34 != (int)uStack_88) {
          local_res8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_a8.CurrentBitIndex == local_138) && (TStack_a8.Array == pTVar18)) &&
           (pTVar6 == local_c8)) break;
        uVar12 = *(uint *)(*(longlong *)pTVar6 + (longlong)TStack_a8.CurrentBitIndex * 0x10);
        uVar8 = 0;
        if ((int)uVar12 < param_3->ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar13 = param_3->DataPtr + (int)uVar12;
        pFVar15 = (pTVar13->AllocatorInstance).Data;
        iVar3 = pTVar13->ArrayNum;
        pFVar1 = pFVar15 + (longlong)iVar3 * 4;
        while( true ) {
          if (pTVar13->ArrayNum != iVar3) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res20);
          }
          if (pFVar15 == pFVar1) break;
          local_134 = *(uint *)pFVar15;
          lVar9 = (longlong)(int)local_134;
          if (local_134 != 0xffffffff) {
            uVar12 = 0;
            if ((int)local_134 < param_2->ArrayNum) {
              uVar12 = ~local_134 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            param_2->DataPtr[lVar9] = uVar4;
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                      (local_c0,(int *)&local_134);
          }
          pFVar15 = pFVar15 + 4;
        }
        TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
        pTVar18 = local_b8;
      }
      TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
    } while (TStack_f8.CurrentBitIndex < (TStack_f8.Array)->NumBits);
  }
  return;
}

// UpdateWeldingMap @ 14db74ea0

void __cdecl
UE::Chaos::ClothAsset::Private::UpdateWeldingMap
          (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_1,
          TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
          *param_2,int param_3,int param_4,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *param_5)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar7;
  int *piVar8;
  longlong lVar9;
  uint *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *pTVar14;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  ForElementType<FSetElementId> FVar18;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *pTVar19;
  uint uVar20;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar21;
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_168;
  undefined1 local_164;
  undefined1 local_163 [3];
  uint local_160;
  TKeyInitializer<int_const_&> local_15c;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  undefined1 *local_140;
  longlong *local_138;
  int *local_130;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_128;
  undefined1 local_120 [16];
  TPairInitializer<int_&&,int_&&> local_110;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  uint *local_a0;
  uint *local_98;
  uint *local_90;
  uint *local_88;
  uint *local_80;
  uint *local_78;
  undefined4 local_54;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar15;
  
  pTVar14 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)0x0
  ;
  uVar16 = param_4;
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar11 = *(undefined1 **)&param_1->field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &param_1->field_0x38;
    }
    iVar13 = *(int *)(puVar11 + (ulonglong)(*(int *)&param_1->field_0x48 - 1U & param_3) * 4);
    if (iVar13 != -1) {
      do {
        piVar8 = (int *)((longlong)iVar13 * 0x10 + *(longlong *)param_1);
        if (*piVar8 == param_3) {
          if (iVar13 != -1) {
            pTVar19 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                       *)(piVar8 + 1);
            if (piVar8 == (int *)0x0) {
              pTVar19 = pTVar14;
            }
            if (pTVar19 !=
                (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *
                )0x0) {
              local_168 = *(uint *)&pTVar19->Elements;
              goto LAB_14db74f56;
            }
          }
          break;
        }
        iVar13 = piVar8[2];
      } while (iVar13 != -1);
    }
  }
  local_168 = param_3;
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
LAB_14db74f56:
    puVar11 = *(undefined1 **)&param_1->field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &param_1->field_0x38;
    }
    iVar13 = *(int *)(puVar11 + (ulonglong)(*(int *)&param_1->field_0x48 - 1U & param_4) * 4);
    if (iVar13 != -1) {
      do {
        piVar8 = (int *)((longlong)iVar13 * 0x10 + *(longlong *)param_1);
        if (*piVar8 == param_4) {
          pTVar19 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)(piVar8 + 1);
          if (piVar8 == (int *)0x0) {
            pTVar19 = pTVar14;
          }
          if (pTVar19 !=
              (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
              0x0) {
            uVar16 = *(uint *)&pTVar19->Elements;
          }
          break;
        }
        iVar13 = piVar8[2];
      } while (iVar13 != -1);
    }
  }
  if (local_168 != uVar16) {
    uVar12 = uVar16;
    uVar20 = param_3;
    if ((int)uVar16 < (int)local_168) {
      uVar12 = local_168;
      uVar20 = param_4;
      param_4 = param_3;
      local_168 = uVar16;
    }
    local_140 = &param_2->field_0x38;
    local_138 = (longlong *)&param_2->field_0x40;
    local_130 = (int *)&param_2->field_0x48;
    local_res20[0] = param_4;
    local_160 = uVar12;
    if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
      puVar11 = (undefined1 *)*local_138;
      if ((undefined1 *)*local_138 == (undefined1 *)0x0) {
        puVar11 = local_140;
      }
      uVar16 = *(uint *)(puVar11 + (ulonglong)(*local_130 - 1U & local_168) * 4);
      if (uVar16 != 0xffffffff) {
        do {
          puVar10 = (uint *)((longlong)(int)uVar16 * 0x60 + *(longlong *)param_2);
          if (*puVar10 == local_168) {
            if (uVar16 != 0xffffffff) {
              pTVar19 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                         *)(puVar10 + 2);
              if (puVar10 == (uint *)0x0) {
                pTVar19 = pTVar14;
              }
              local_128 = pTVar19;
              if (pTVar19 !=
                  (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                   *)0x0) goto LAB_14db751f0;
              local_128 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                           *)0x0;
            }
            break;
          }
          uVar16 = puVar10[0x16];
        } while (uVar16 != 0xffffffff);
      }
    }
    if ((local_168 != uVar20) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Key0 == Index0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                           ,0x44,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar6 = TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int>::operator[]
                       (param_5,uVar20);
    pFVar17 = (pTVar6->AllocatorInstance).Data;
    iVar13 = pTVar6->ArrayNum;
    pFVar1 = pFVar17 + (longlong)iVar13 * 4;
    while( true ) {
      uVar16 = (uint)pTVar14;
      if (pTVar6->ArrayNum != iVar13) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar17 == pFVar1) break;
      uVar5 = uVar16 + 1;
      if (*(int *)pFVar17 == -1) {
        uVar5 = uVar16;
      }
      pFVar17 = pFVar17 + 4;
      pTVar14 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *
                )(ulonglong)uVar5;
    }
    if (((int)uVar16 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Weight0 > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                           ,0x46,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_110.Value = (int *)&local_168;
    TSet<TTuple<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<int_const_&>_>
              ((TSet<TTuple<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>,FDefaultSetAllocator>
                *)param_2,&local_15c,(bool *)&local_110.Value);
    local_a0 = &local_150;
    pTVar19 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
              (*(longlong *)param_2 + 8 + (longlong)(int)local_15c.Key * 0x60);
    local_98 = &local_14c;
    local_150 = uVar20;
    local_14c = uVar16;
    local_128 = pTVar19;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,int_&&>_>
              (pTVar19,(TPairInitializer<int_&&,int_&&> *)local_120,(bool *)&local_a0);
LAB_14db751f0:
    pTVar15 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)0x0;
    pTVar7 = pTVar15;
    if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
      puVar11 = (undefined1 *)*local_138;
      if ((undefined1 *)*local_138 == (undefined1 *)0x0) {
        puVar11 = local_140;
      }
      iVar13 = *(int *)(puVar11 + (ulonglong)(*local_130 - 1U & uVar12) * 4);
      if (iVar13 != -1) {
        do {
          pTVar7 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                   ((longlong)iVar13 * 0x60 + *(longlong *)param_2);
          if (*(uint *)pTVar7 == uVar12) break;
          iVar13 = *(int *)&pTVar7[1].field_0x8;
          pTVar7 = pTVar15;
        } while (iVar13 != -1);
      }
    }
    pTVar21 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
              &pTVar7->field_0x8;
    if (pTVar7 == (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)0x0)
    {
      pTVar21 = pTVar15;
    }
    if (pTVar21 == (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)0x0
       ) {
      if ((uVar12 != local_res20[0]) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Key1 == Index1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                             ,0x60,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar6 = TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int>::operator[]
                         (param_5,local_res20[0]);
      pFVar17 = (pTVar6->AllocatorInstance).Data;
      iVar13 = pTVar6->ArrayNum;
      pFVar1 = pFVar17 + (longlong)iVar13 * 4;
      while( true ) {
        uVar16 = (uint)pTVar15;
        if (pTVar6->ArrayNum != iVar13) {
          local_163[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_163);
        }
        if (pFVar17 == pFVar1) break;
        uVar12 = uVar16 + 1;
        if (*(int *)pFVar17 == -1) {
          uVar12 = uVar16;
        }
        pFVar17 = pFVar17 + 4;
        pTVar15 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                  (ulonglong)uVar12;
      }
      if (((int)uVar16 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Weight1 > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                             ,0x62,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_90 = local_res20;
      local_88 = &local_168;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)param_1,(TPairInitializer<int_const_&,int_const_&> *)(local_120 + 0xc),
                 (bool *)&local_90);
      local_148 = local_res20[0];
      local_80 = &local_148;
      local_78 = &local_144;
      local_144 = uVar16;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_&&,int_&&>_>(pTVar19,&local_110,(bool *)&local_80);
    }
    else {
      uVar16 = *(uint *)&pTVar21->field_0x28;
      local_f0 = &pTVar21->field_0x10;
      uStack_f4 = 1;
      local_e0 = 0;
      uStack_e4 = local_e0;
      if (uVar16 != 0) {
        puVar10 = *(uint **)&pTVar21->field_0x20;
        if (*(uint **)&pTVar21->field_0x20 == (uint *)0x0) {
          puVar10 = (uint *)local_f0;
        }
        uVar12 = *puVar10;
        pTVar7 = pTVar15;
        while (local_e0 = (uint)pTVar7, uVar12 == 0) {
          iVar13 = (int)pTVar15;
          local_e0 = local_e0 + 0x20;
          pTVar7 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                   (ulonglong)local_e0;
          uVar12 = iVar13 + 1;
          pTVar15 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                    (ulonglong)uVar12;
          uStack_e4 = uVar16;
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
          goto LAB_14db752ce;
          uVar12 = puVar10[(longlong)iVar13 + 1];
        }
        uStack_f4 = -uVar12 & uVar12;
        uVar2 = (ulonglong)uStack_f4 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_120._4_4_ = (undefined4)lVar9;
        uStack_e4 = (local_e0 - 1) + local_120._4_4_;
        if ((int)uVar16 < (int)uStack_e4) {
          uStack_e4 = uVar16;
        }
      }
LAB_14db752ce:
      uVar12 = *(uint *)&pTVar21->field_0x28;
      uStack_dc = local_54;
      iStack_d8 = *(int *)&pTVar21->field_0x8 - *(int *)&pTVar21->field_0x34;
      uStack_f8 = SUB84(pTVar15,0);
      uStack_e8 = 0xffffffff;
      uVar20 = uVar12 & 0xffffffe0;
      TStack_c8._padding_ = CONCAT44(uStack_f4,uStack_f8);
      TStack_c8.CurrentBitIndex = uStack_e4;
      TStack_c8.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar12 >> 5;
      TStack_c8._28_4_ = local_54;
      TStack_c8.BaseBitIndex = local_e0;
      uStack_a8 = CONCAT44(uStack_d4,iStack_d8);
      local_100 = pTVar21;
      local_d0 = pTVar21;
      TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f0;
      if ((((int)uVar12 < 0) || ((int)uVar16 < (int)uVar12)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar16 = *(uint *)&pTVar21->field_0x28;
      if (uVar12 != uVar16) {
        puVar11 = *(undefined1 **)&pTVar21->field_0x20;
        if (*(undefined1 **)&pTVar21->field_0x20 == (undefined1 *)0x0) {
          puVar11 = &pTVar21->field_0x10;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar13 * 4);
        while (uVar12 == 0) {
          lVar9 = (longlong)iVar13;
          uVar20 = uVar20 + 0x20;
          iVar13 = iVar13 + 1;
          uVar12 = uVar16;
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14db753d0;
          uVar12 = *(uint *)(puVar11 + lVar9 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_120._8_4_ = (undefined4)lVar9;
        uVar12 = (uVar20 - 1) + local_120._8_4_;
        if ((int)uVar16 < (int)uVar12) {
          uVar12 = uVar16;
        }
      }
LAB_14db753d0:
      while( true ) {
        pTVar15 = local_d0;
        if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
          local_164 = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_164);
        }
        pTVar14 = local_128;
        uVar16 = local_168;
        if (((TStack_c8.CurrentBitIndex == uVar12) &&
            (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&pTVar21->field_0x10)) &&
           (pTVar15 == pTVar21)) break;
        puVar10 = (uint *)((longlong)TStack_c8.CurrentBitIndex * 0x10 + *(longlong *)pTVar15);
        puVar10 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                          ::FindOrAddImpl<int_const_&>
                                    ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                      *)param_1,*puVar10,(int *)puVar10);
        *puVar10 = uVar16;
        TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
      }
      TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
      Append<FDefaultSetAllocator>
                ((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                 local_128,pTVar21);
      uVar16 = local_160;
      local_15c.Key._4_4_ = local_160;
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        TSet<TTuple<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>,FDefaultSetAllocator>
                           *)param_2,local_160,(int *)((longlong)&local_15c.Key + 4));
      }
      if (*(int *)&(pTVar14->Elements).field_0x8 != *(int *)&(pTVar14->Elements).field_0x34) {
        FVar18 = (pTVar14->Hash).SecondaryData;
        uVar12 = pTVar14->HashSize - 1;
        if (FVar18 == (ForElementType<FSetElementId>)0x0) {
          FVar18 = (ForElementType<FSetElementId>)&pTVar14->Hash;
        }
        iVar13 = *(int *)((longlong)FVar18 + (ulonglong)(uVar12 & local_168) * 4);
        if (iVar13 != -1) {
          lVar9 = *(longlong *)&pTVar14->Elements;
LAB_14db754b0:
          if (*(uint *)(lVar9 + (longlong)iVar13 * 0x10) != local_168) goto code_r0x00014db754bb;
          for (iVar13 = *(int *)((longlong)FVar18 + (ulonglong)(uVar16 & uVar12) * 4); iVar13 != -1;
              iVar13 = *(int *)(lVar9 + 8 + (longlong)iVar13 * 0x10)) {
            if (*(uint *)(lVar9 + (longlong)iVar13 * 0x10) == uVar16) {
              return;
            }
          }
        }
      }
LAB_14db754f7:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("WeldingGroup0->Contains(Key0) && WeldingGroup0->Contains(Key1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                         ,0x5b,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
code_r0x00014db754bb:
  iVar13 = *(int *)(lVar9 + 8 + (longlong)iVar13 * 0x10);
  if (iVar13 == -1) goto LAB_14db754f7;
  goto LAB_14db754b0;
}

// WeldNormals @ 14db75f30

void __cdecl
UE::Chaos::ClothAsset::Private::WeldNormals
          (TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
           *param_1,TArrayView<UE::Math::TVector<float>,int> *param_2)

{
  ulonglong uVar1;
  TVector<float> *pTVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ForElementType<unsigned_int> FVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  longlong *plVar20;
  longlong lVar21;
  ForElementType<unsigned_int> FVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined1 local_res8 [8];
  undefined4 uStack_13c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  int local_110;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  undefined4 local_bc;
  undefined4 local_9c;
  
  fVar5 = __real_3f800000;
  fVar4 = __real_322bcc77;
  iVar17 = *(int *)&param_1->field_0x28;
  TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iVar15 = 0;
  iVar18 = 0;
  uVar8 = 1;
  TStack_130.CurrentBitIndex = 0;
  if (iVar17 != 0) {
    puVar19 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)TStack_130.Array;
    }
    uVar10 = *puVar19;
    while (uVar10 == 0) {
      lVar12 = (longlong)iVar15;
      iVar18 = iVar18 + 0x20;
      iVar15 = iVar15 + 1;
      TStack_130.CurrentBitIndex = iVar17;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14db75fd0;
      uVar10 = puVar19[lVar12 + 1];
    }
    uVar8 = -uVar10 & uVar10;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    TStack_130.CurrentBitIndex = iVar18 + -1 + (int)lVar12;
    if (iVar17 < TStack_130.CurrentBitIndex) {
      TStack_130.CurrentBitIndex = iVar17;
    }
  }
LAB_14db75fd0:
  TStack_130._padding_ = CONCAT44(uVar8,iVar15);
  TStack_130.UnvisitedBitMask = 0xffffffff;
  TStack_130._28_4_ = local_bc;
  TStack_130.BaseBitIndex = iVar18;
  if (TStack_130.CurrentBitIndex < iVar17) {
    do {
      iVar18 = 0;
      iVar17 = 0;
      fVar24 = 0.0;
      fVar26 = 0.0;
      fVar28 = 0.0;
      uVar9 = 1;
      lVar21 = (longlong)TStack_130.CurrentBitIndex * 0x60;
      lVar12 = *(longlong *)param_1;
      FVar22 = (ForElementType<unsigned_int>)(lVar12 + 0x18 + lVar21);
      plVar20 = (longlong *)(lVar12 + 8 + lVar21);
      uVar8 = *(int *)((longlong)FVar22 + 0x18);
      uVar10 = 0;
      if (uVar8 != 0) {
        FVar16 = FVar22;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar22 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar16 = *(ForElementType<unsigned_int> *)((longlong)FVar22 + 0x10);
        }
        uVar10 = *(uint *)FVar16;
        while (uVar10 == 0) {
          lVar13 = (longlong)iVar18;
          iVar17 = iVar17 + 0x20;
          iVar18 = iVar18 + 1;
          uVar10 = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_14db76130;
          uVar10 = ((uint *)((longlong)FVar16 + 4))[lVar13];
        }
        uVar9 = -uVar10 & uVar10;
        uVar1 = (ulonglong)uVar9 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar10 = iVar17 + -1 + (int)lVar13;
        if ((int)uVar8 < (int)uVar10) {
          uVar10 = uVar8;
        }
      }
LAB_14db76130:
      uVar11 = *(uint *)(lVar21 + 0x30 + lVar12);
      uVar14 = uVar11 & 0xffffffe0;
      TStack_100._padding_ = CONCAT44(uVar9,iVar18);
      TStack_100.CurrentBitIndex = uVar10;
      TStack_100.UnvisitedBitMask = 0xffffffff;
      iVar18 = (int)uVar11 >> 5;
      TStack_100._28_4_ = local_9c;
      TStack_100.BaseBitIndex = iVar17;
      uStack_e0 = CONCAT44(uStack_13c,
                           *(int *)(lVar21 + 0x10 + lVar12) - *(int *)(lVar21 + 0x3c + lVar12));
      local_108 = plVar20;
      TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar22;
      if ((((int)uVar11 < 0) || ((int)uVar8 < (int)uVar11)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar8 = *(uint *)((longlong)FVar22 + 0x18);
      if (uVar11 != uVar8) {
        FVar16 = FVar22;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar22 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar16 = *(ForElementType<unsigned_int> *)((longlong)FVar22 + 0x10);
        }
        uVar10 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar18 * 4);
        while (uVar10 == 0) {
          lVar12 = (longlong)iVar18;
          uVar14 = uVar14 + 0x20;
          iVar18 = iVar18 + 1;
          uVar11 = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_14db76240;
          uVar10 = ((uint *)((longlong)FVar16 + 4))[lVar12];
        }
        uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_110 = (int)lVar12;
        uVar11 = local_110 + -1 + uVar14;
        if ((int)uVar8 < (int)uVar11) {
          uVar11 = uVar8;
        }
      }
LAB_14db76240:
      while( true ) {
        plVar6 = local_108;
        if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
          local_res8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        lVar12 = (longlong)TStack_100.CurrentBitIndex;
        if (((TStack_100.CurrentBitIndex == uVar11) &&
            ((ForElementType<unsigned_int>)TStack_100.Array == FVar22)) && (plVar6 == plVar20))
        break;
        lVar21 = *plVar6;
        uVar8 = *(uint *)(lVar21 + lVar12 * 0x10);
        uVar10 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar2 = param_2->DataPtr;
        fVar23 = (float)*(int *)(lVar21 + 4 + lVar12 * 0x10);
        fVar24 = fVar24 + fVar23 * pTVar2[(int)uVar8].field0_0x0._s_0.X;
        TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
        fVar26 = fVar26 + fVar23 * pTVar2[(int)uVar8].field0_0x0._s_0.Y;
        fVar28 = fVar28 + fVar23 * pTVar2[(int)uVar8].field0_0x0._s_0.Z;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
      }
      fVar23 = fVar24 * fVar24 + fVar26 * fVar26 + fVar28 * fVar28;
      uVar25 = fVar24;
      uVar27 = fVar26;
      uVar29 = fVar28;
      if ((fVar23 != fVar5) &&
         (uVar25 = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.X,
         uVar27 = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Y,
         uVar29 = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z, fVar4 <= fVar23)) {
        fVar23 = __real_3f800000 / SQRT(fVar23);
        uVar25 = fVar23 * fVar24;
        uVar27 = fVar23 * fVar26;
        uVar29 = fVar23 * fVar28;
      }
      uVar8 = *(uint *)((longlong)TStack_130.CurrentBitIndex * 0x60 + *(longlong *)param_1);
      uVar10 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = param_2->DataPtr;
      TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
      *(ulonglong *)&pTVar2[(int)uVar8].field0_0x0 = CONCAT44(uVar27,uVar25);
      pTVar2[(int)uVar8].field0_0x0._s_0.Z = (float)uVar29;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
    } while (TStack_130.CurrentBitIndex < (TStack_130.Array)->NumBits);
  }
  return;
}

// WeldTethers @ 14db76490

void __cdecl
UE::Chaos::ClothAsset::Private::WeldTethers
          (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_1,
          TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
          *param_2,TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *param_3,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint *puVar18;
  FScriptContainerElement *pFVar19;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar20;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar21;
  uint uVar22;
  <lambda_1> local_res18;
  uint local_a8;
  longlong local_90;
  longlong local_88;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_78;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_68 [2];
  ulonglong uVar23;
  
  if ((param_3->ArrayNum != param_4->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TetherKinematicIndices.Num() == TetherReferenceLengths.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                         ,0xe2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = param_3->ArrayNum;
  local_a8 = 0;
  if (0 < (longlong)iVar3) {
    local_88 = 0;
    do {
      uVar22 = 0;
      if ((int)local_a8 < param_3->ArrayNum) {
        uVar22 = ~local_a8 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar20 = param_3->DataPtr + local_88;
      uVar22 = 0;
      if ((int)local_a8 < param_4->ArrayNum) {
        uVar22 = ~local_a8 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar21 = param_4->DataPtr + local_88;
      if ((pTVar20->ArrayNum != pTVar21->ArrayNum) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Indices.Num() == Lengths.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                             ,0xe9,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar22 = pTVar20->ArrayNum - 1;
      if (-1 < (int)uVar22) {
        lVar17 = (longlong)(int)uVar22;
        local_90 = lVar17 * 4;
LAB_14db76630:
        uVar23 = (ulonglong)uVar22;
        uVar13 = ~uVar22 >> 0x1f;
        uVar15 = 0;
        if ((int)uVar22 < pTVar20->ArrayNum) {
          uVar15 = uVar13;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(int *)((pTVar20->AllocatorInstance).Data + local_90) == -1) {
          uVar15 = 0;
          if ((int)uVar22 < pTVar20->ArrayNum) {
            uVar15 = uVar13;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (pTVar20->AllocatorInstance).Data;
          iVar7 = ~uVar22 + pTVar20->ArrayNum;
          if (1 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            memmove(pFVar4 + uVar23 * 4,pFVar4 + (longlong)(pTVar20->ArrayNum - iVar7) * 4,
                    (longlong)iVar7 << 2);
          }
          pTVar20->ArrayNum = pTVar20->ArrayNum + -1;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar20->AllocatorInstance,pTVar20->ArrayNum,&pTVar20->ArrayMax);
          uVar15 = 0;
          if ((int)uVar22 < pTVar21->ArrayNum) {
            uVar15 = uVar13;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (pTVar21->AllocatorInstance).Data;
          iVar7 = ~uVar22 + pTVar21->ArrayNum;
          if (1 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            memmove(pFVar4 + uVar23 * 4,pFVar4 + (longlong)(pTVar21->ArrayNum - iVar7) * 4,
                    (longlong)iVar7 << 2);
          }
          pTVar21->ArrayNum = pTVar21->ArrayNum + -1;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar21->AllocatorInstance,pTVar21->ArrayNum,&pTVar21->ArrayMax);
        }
        else {
          uVar15 = 0;
          if ((int)uVar22 < pTVar20->ArrayNum) {
            uVar15 = uVar13;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar15 = *(uint *)((pTVar20->AllocatorInstance).Data + lVar17 * 4);
          uVar16 = (ulonglong)uVar15;
          if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
            puVar11 = &param_1->field_0x38;
            if (*(undefined1 **)&param_1->field_0x40 != (undefined1 *)0x0) {
              puVar11 = *(undefined1 **)&param_1->field_0x40;
            }
            uVar13 = *(uint *)(puVar11 + (ulonglong)(*(int *)&param_1->field_0x48 - 1U & uVar15) * 4
                              );
            if (uVar13 != 0xffffffff) {
              do {
                puVar10 = (uint *)((longlong)(int)uVar13 * 0x10 + *(longlong *)param_1);
                if (*puVar10 == uVar15) {
                  puVar14 = puVar10 + 1;
                  if (puVar10 == (uint *)0x0) {
                    puVar14 = (uint *)0x0;
                  }
                  if (puVar14 != (uint *)0x0) {
                    uVar16 = (ulonglong)*puVar14;
                  }
                  break;
                }
                uVar13 = puVar10[2];
              } while (uVar13 != 0xffffffff);
            }
          }
          uVar15 = 0;
          if ((int)uVar22 < pTVar20->ArrayNum) {
            uVar15 = ~uVar22 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar10 = (uint *)0x0;
          pFVar4 = (pTVar20->AllocatorInstance).Data;
          uVar15 = (uint)uVar16;
          if (uVar15 != *(uint *)(pFVar4 + lVar17 * 4)) {
            for (pFVar19 = pFVar4; pFVar19 != pFVar4 + (longlong)pTVar20->ArrayNum * 4;
                pFVar19 = pFVar19 + 4) {
              if (*(uint *)pFVar19 == uVar15) {
                uVar13 = (uint)((longlong)pFVar19 - (longlong)pFVar4 >> 2);
                if (uVar13 != 0xffffffff) {
                  puVar14 = puVar10;
                  if (*(int *)&param_2->field_0x8 == *(int *)&param_2->field_0x34)
                  goto LAB_14db76a60;
                  puVar11 = &param_2->field_0x38;
                  if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
                    puVar11 = *(undefined1 **)&param_2->field_0x40;
                  }
                  uVar8 = *(uint *)(puVar11 + (*(int *)&param_2->field_0x48 - 1 & uVar16) * 4);
                  if (uVar8 == 0xffffffff) goto LAB_14db76a60;
                  goto LAB_14db76a40;
                }
                break;
              }
            }
            uVar13 = 0;
            if ((int)uVar22 < pTVar20->ArrayNum) {
              uVar13 = ~uVar22 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(uint *)((pTVar20->AllocatorInstance).Data + lVar17 * 4) = uVar15;
          }
        }
        goto LAB_14db76946;
      }
LAB_14db7696c:
      local_a8 = local_a8 + 1;
      local_88 = local_88 + 1;
    } while (local_88 < iVar3);
  }
  local_78.DataPtr = param_4->DataPtr;
  local_78.ArrayNum = param_4->ArrayNum;
  local_78._12_4_ = *(undefined4 *)&param_4->field_0xc;
  local_res18 = SUB81(param_3,0);
  local_68[0].DataPtr = param_3->DataPtr;
  local_68[0].ArrayNum = param_3->ArrayNum;
  local_68[0]._12_4_ = *(undefined4 *)&param_3->field_0xc;
  WeldIndexAndFloatArrays<0,4,_UE::Chaos::ClothAsset::Private::WeldTethers_::__l2::<lambda_1>_>
            (param_2,local_68,&local_78,local_res18);
  return;
  while (uVar8 = puVar14[0x16], puVar14 = puVar10, uVar8 != 0xffffffff) {
LAB_14db76a40:
    puVar14 = (uint *)((longlong)(int)uVar8 * 0x60 + *(longlong *)param_2);
    if (*puVar14 == uVar15) {
      if (puVar14 != (uint *)0x0) goto LAB_14db76a86;
      break;
    }
  }
LAB_14db76a60:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14db76a86:
  puVar10 = (uint *)0x0;
  uVar8 = 0;
  if ((int)uVar22 < pTVar20->ArrayNum) {
    uVar8 = ~uVar22 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)((pTVar20->AllocatorInstance).Data + lVar17 * 4);
  puVar18 = puVar10;
  if (puVar14[4] != puVar14[0xf]) {
    puVar12 = puVar14 + 0x10;
    if (*(uint **)(puVar14 + 0x12) != (uint *)0x0) {
      puVar12 = *(uint **)(puVar14 + 0x12);
    }
    uVar9 = puVar12[puVar14[0x14] - 1 & uVar8];
    if (uVar9 != 0xffffffff) {
      do {
        puVar18 = (uint *)((longlong)(int)uVar9 * 0x10 + *(longlong *)(puVar14 + 2));
        if (*puVar18 == uVar8) {
          if (puVar18 != (uint *)0x0) goto LAB_14db76b54;
          break;
        }
        uVar9 = puVar18[2];
        puVar18 = puVar10;
      } while (uVar9 != 0xffffffff);
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14db76b54:
  uVar8 = puVar18[1];
  puVar18 = puVar10;
  if (puVar14[4] != puVar14[0xf]) {
    puVar12 = puVar14 + 0x10;
    if (*(uint **)(puVar14 + 0x12) != (uint *)0x0) {
      puVar12 = *(uint **)(puVar14 + 0x12);
    }
    uVar9 = puVar12[puVar14[0x14] - 1 & uVar16];
    if (uVar9 != 0xffffffff) {
      do {
        puVar18 = (uint *)((longlong)(int)uVar9 * 0x10 + *(longlong *)(puVar14 + 2));
        if (*puVar18 == uVar15) {
          if (puVar18 != (uint *)0x0) goto LAB_14db76bd3;
          break;
        }
        uVar9 = puVar18[2];
        puVar18 = puVar10;
      } while (uVar9 != 0xffffffff);
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14db76bd3:
  uVar15 = puVar18[1];
  if (((int)(uVar15 + uVar8) < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("WeightOrig + WeightMapped > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                         ,0x103,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = 0;
  if ((int)uVar22 < pTVar21->ArrayNum) {
    uVar9 = ~uVar22 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (pTVar21->AllocatorInstance).Data;
  uVar9 = 0;
  if ((int)uVar13 < pTVar21->ArrayNum) {
    uVar9 = ~uVar13 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar1 = *(float *)((pTVar21->AllocatorInstance).Data + (longlong)(int)uVar13 * 4);
  fVar2 = *(float *)(pFVar4 + lVar17 * 4);
  uVar9 = 0;
  if ((int)uVar13 < pTVar21->ArrayNum) {
    uVar9 = ~uVar13 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(float *)((pTVar21->AllocatorInstance).Data + (longlong)(int)uVar13 * 4) =
       ((float)(int)uVar15 * fVar1 + (float)(int)uVar8 * fVar2) / (float)(int)(uVar15 + uVar8);
  uVar15 = 0;
  if ((int)uVar22 < pTVar20->ArrayNum) {
    uVar15 = ~uVar22 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (pTVar20->AllocatorInstance).Data;
  iVar7 = ~uVar22 + pTVar20->ArrayNum;
  if (1 < iVar7) {
    iVar7 = 1;
  }
  if (iVar7 != 0) {
    memmove(pFVar4 + uVar23 * 4,pFVar4 + (longlong)(pTVar20->ArrayNum - iVar7) * 4,
            (longlong)iVar7 << 2);
  }
  pTVar20->ArrayNum = pTVar20->ArrayNum + -1;
  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&pTVar20->AllocatorInstance,pTVar20->ArrayNum,&pTVar20->ArrayMax);
  uVar15 = 0;
  if ((int)uVar22 < pTVar21->ArrayNum) {
    uVar15 = ~uVar22 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (pTVar21->AllocatorInstance).Data;
  iVar7 = pTVar21->ArrayNum + ~uVar22;
  if (1 < iVar7) {
    iVar7 = 1;
  }
  if (iVar7 != 0) {
    memmove(pFVar4 + uVar23 * 4,pFVar4 + (longlong)(pTVar21->ArrayNum - iVar7) * 4,
            (longlong)iVar7 << 2);
  }
  pTVar21->ArrayNum = pTVar21->ArrayNum + -1;
  Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&pTVar21->AllocatorInstance,pTVar21->ArrayNum,&pTVar21->ArrayMax);
LAB_14db76946:
  local_90 = local_90 + -4;
  lVar17 = lVar17 + -1;
  uVar22 = uVar22 - 1;
  if ((int)uVar22 < 0) goto LAB_14db7696c;
  goto LAB_14db76630;
}


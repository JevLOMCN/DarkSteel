// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 13

// FCollectionClothSimAccessoryMeshFacade @ 14db3b130

FCollectionClothSimAccessoryMeshFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshFacade::
FCollectionClothSimAccessoryMeshFacade
          (FCollectionClothSimAccessoryMeshFacade *this,
          TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = (FConstClothCollection *)param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FCollectionClothSimAccessoryMeshConstFacade::FCollectionClothSimAccessoryMeshConstFacade
            ((FCollectionClothSimAccessoryMeshConstFacade *)this,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  *(undefined ***)this = &___7FCollectionClothSimAccessoryMeshFacade_ClothAsset_Chaos_UE__6B_;
  return this;
}

// ~FCollectionClothSimAccessoryMeshFacade @ 14db3bbc0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshFacade::
~FCollectionClothSimAccessoryMeshFacade(FCollectionClothSimAccessoryMeshFacade *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  return;
}

// ClearDynamicAttributes @ 14db4e530

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshFacade::ClearDynamicAttributes
          (FCollectionClothSimAccessoryMeshFacade *this)

{
  uint uVar1;
  undefined8 *puVar2;
  TReferenceControllerBase<1> *pTVar3;
  FManagedArrayCollection *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  FName FVar9;
  uint uVar10;
  
  puVar2 = *(undefined8 **)&this->field_0x8;
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FVar9 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshPosition3DAttribute
                    ((FCollectionClothSimAccessoryMeshConstFacade *)this);
  if (*(uint *)FVar9 !=
      ClothCollectionAttribute::SimAccessoryMeshPosition3DPrefix.ComparisonIndex.Value) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private::NamesHaveMatchingPrefix(AttributeName, ClothCollectionAttribute::SimAccessoryMeshPosition3DPrefix)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                       ,0x51b,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar4 = (FManagedArrayCollection *)*puVar2;
  pTVar5 = (TReferenceControllerBase<1> *)puVar2[1];
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  FManagedArrayCollection::RemoveAttribute
            (pFVar4,*(FName *)FVar9,ClothCollectionGroup::SimVertices3D);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  puVar2 = *(undefined8 **)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FVar9 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshNormalAttribute
                    ((FCollectionClothSimAccessoryMeshConstFacade *)this);
  if (*(uint *)FVar9 != ClothCollectionAttribute::SimAccessoryMeshNormalPrefix.ComparisonIndex.Value
     ) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private::NamesHaveMatchingPrefix(AttributeName, ClothCollectionAttribute::SimAccessoryMeshNormalPrefix)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                       ,0x521,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar4 = (FManagedArrayCollection *)*puVar2;
  pTVar5 = (TReferenceControllerBase<1> *)puVar2[1];
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  FManagedArrayCollection::RemoveAttribute
            (pFVar4,*(FName *)FVar9,ClothCollectionGroup::SimVertices3D);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  puVar2 = *(undefined8 **)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FVar9 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshBoneIndicesAttribute
                    ((FCollectionClothSimAccessoryMeshConstFacade *)this);
  if (*(uint *)FVar9 !=
      ClothCollectionAttribute::SimAccessoryMeshBoneIndicesPrefix.ComparisonIndex.Value) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private::NamesHaveMatchingPrefix(AttributeName, ClothCollectionAttribute::SimAccessoryMeshBoneIndicesPrefix)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                       ,0x527,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar4 = (FManagedArrayCollection *)*puVar2;
  pTVar5 = (TReferenceControllerBase<1> *)puVar2[1];
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  FManagedArrayCollection::RemoveAttribute
            (pFVar4,*(FName *)FVar9,ClothCollectionGroup::SimVertices3D);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  puVar2 = *(undefined8 **)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FVar9 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshBoneWeightsAttribute
                    ((FCollectionClothSimAccessoryMeshConstFacade *)this);
  if (*(uint *)FVar9 !=
      ClothCollectionAttribute::SimAccessoryMeshBoneWeightsPrefix.ComparisonIndex.Value) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private::NamesHaveMatchingPrefix(AttributeName, ClothCollectionAttribute::SimAccessoryMeshBoneWeightsPrefix)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                       ,0x52d,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar4 = (FManagedArrayCollection *)*puVar2;
  pTVar5 = (TReferenceControllerBase<1> *)puVar2[1];
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  FManagedArrayCollection::RemoveAttribute
            (pFVar4,*(FName *)FVar9,ClothCollectionGroup::SimVertices3D);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar6 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar1 = *(uint *)&this->field_0x18;
  lVar6 = *(longlong *)(lVar6 + 0x268);
  uVar10 = 0;
  if ((int)uVar1 < *(int *)(lVar6 + 0x18)) {
    uVar10 = ~uVar1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  *(undefined8 *)(*(longlong *)(lVar6 + 0x10) + (longlong)(int)uVar1 * 8) = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar6 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar1 = *(uint *)&this->field_0x18;
  lVar6 = *(longlong *)(lVar6 + 0x270);
  uVar10 = 0;
  if ((int)uVar1 < *(int *)(lVar6 + 0x18)) {
    uVar10 = ~uVar1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  *(undefined8 *)(*(longlong *)(lVar6 + 0x10) + (longlong)(int)uVar1 * 8) = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar6 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar1 = *(uint *)&this->field_0x18;
  lVar6 = *(longlong *)(lVar6 + 0x278);
  uVar10 = 0;
  if ((int)uVar1 < *(int *)(lVar6 + 0x18)) {
    uVar10 = ~uVar1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  *(undefined8 *)(*(longlong *)(lVar6 + 0x10) + (longlong)(int)uVar1 * 8) = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar6 = *(longlong *)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar1 = *(uint *)&this->field_0x18;
  lVar6 = *(longlong *)(lVar6 + 0x280);
  uVar10 = 0;
  if ((int)uVar1 < *(int *)(lVar6 + 0x18)) {
    uVar10 = ~uVar1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  *(undefined8 *)(*(longlong *)(lVar6 + 0x10) + (longlong)(int)uVar1 * 8) = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GenerateDynamicAttributesIfNecessary @ 14db55cd0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshFacade::GenerateDynamicAttributesIfNecessary
          (FCollectionClothSimAccessoryMeshFacade *this)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  FConstClothCollection *pFVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined8 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  FManagedArrayCollection *pFVar9;
  longlong lVar10;
  code *pcVar11;
  FNameEntryId FVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  TManagedArray<UE::Math::TVector<float>_> *pTVar17;
  FName FVar18;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar19;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar20;
  FName FVar21;
  longlong *plVar22;
  FName FVar23;
  undefined1 *puVar24;
  FName FVar25;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  TReferenceControllerBase<1> *local_res20;
  undefined2 local_e8;
  undefined2 uStack_e6;
  undefined2 local_dc;
  undefined2 uStack_da;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8 [2];
  FConstructionParameters local_98;
  FConstructionParameters local_88;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  
  pFVar4 = *(FConstClothCollection **)&this->field_0x8;
  if (pFVar4->SimAccessoryMeshPosition3DAttribute == (TManagedArray<FName> *)0x0) {
LAB_14db55d8b:
    local_c8.ComparisonIndex.Value = 0;
    local_c8.Number = 0;
  }
  else {
    iVar14 = FManagedArrayCollection::NumElements
                       ((pFVar4->ManagedArrayCollection).Object,
                        ClothCollectionGroup::SimAccessoryMeshes);
    uVar2 = *(uint *)&this->field_0x18;
    if (iVar14 <= (int)uVar2) goto LAB_14db55d8b;
    lVar5 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x268);
    uVar15 = 0;
    if ((int)uVar2 < *(int *)(lVar5 + 0x18)) {
      uVar15 = ~uVar2 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_c8 = *(FName *)(*(longlong *)(lVar5 + 0x10) + (longlong)(int)uVar2 * 8);
  }
  pTVar17 = FConstClothCollection::GetSimAccessoryMeshPosition3D(pFVar4,&local_c8);
  if (pTVar17 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    puVar7 = *(undefined8 **)&this->field_0x8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    local_78 = *puVar7;
    local_70 = puVar7[1];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    ClothAsset::Private::AddUniquePrefixedAttribute<UE::Math::TVector<float>_>
              (&local_c0,&ClothCollectionGroup::SimVertices3D,
               (TManagedArray<FName> *)&ClothCollectionAttribute::SimAccessoryMeshPosition3DPrefix,
               (TSharedRef<FManagedArrayCollection,1> *)puVar7[0x4d]);
    pTVar8 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    lVar5 = *(longlong *)&this->field_0x8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    uVar2 = *(uint *)&this->field_0x18;
    lVar5 = *(longlong *)(lVar5 + 0x268);
    uVar15 = 0;
    if ((int)uVar2 < *(int *)(lVar5 + 0x18)) {
      uVar15 = ~uVar2 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    *(FName *)(*(longlong *)(lVar5 + 0x10) + (longlong)(int)uVar2 * 8) = local_c0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  puVar24 = &this->field_0x8;
  pFVar4 = *(FConstClothCollection **)puVar24;
  if (pFVar4->SimAccessoryMeshNormalAttribute == (TManagedArray<FName> *)0x0) {
LAB_14db55f2c:
    local_b8.ComparisonIndex.Value = 0;
    local_b8.Number = 0;
  }
  else {
    iVar14 = FManagedArrayCollection::NumElements
                       ((pFVar4->ManagedArrayCollection).Object,
                        ClothCollectionGroup::SimAccessoryMeshes);
    uVar2 = *(uint *)&this->field_0x18;
    if (iVar14 <= (int)uVar2) goto LAB_14db55f2c;
    lVar5 = *(longlong *)(*(longlong *)puVar24 + 0x270);
    uVar15 = 0;
    if ((int)uVar2 < *(int *)(lVar5 + 0x18)) {
      uVar15 = ~uVar2 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_b8 = *(FName *)(*(longlong *)(lVar5 + 0x10) + (longlong)(int)uVar2 * 8);
  }
  pTVar17 = FConstClothCollection::GetSimAccessoryMeshNormal(pFVar4,&local_b8);
  if (pTVar17 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    puVar7 = *(undefined8 **)puVar24;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    local_68 = *puVar7;
    local_60 = puVar7[1];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    ClothAsset::Private::AddUniquePrefixedAttribute<UE::Math::TVector<float>_>
              (&local_b0,&ClothCollectionGroup::SimVertices3D,
               (TManagedArray<FName> *)&ClothCollectionAttribute::SimAccessoryMeshNormalPrefix,
               (TSharedRef<FManagedArrayCollection,1> *)puVar7[0x4e]);
    pTVar8 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    local_res20 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    uVar2 = *(uint *)&this->field_0x18;
    local_res20 = *(TReferenceControllerBase<1> **)((longlong)local_res20 + 0x270);
    uVar15 = 0;
    if ((int)uVar2 < (int)local_res20[1].SharedReferenceCount) {
      uVar15 = ~uVar2 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    *(FName *)(local_res20[1]._padding_ + (longlong)(int)uVar2 * 8) = local_b0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  pFVar4 = *(FConstClothCollection **)&this->field_0x8;
  FVar18 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshBoneIndicesAttribute
                     ((FCollectionClothSimAccessoryMeshConstFacade *)this);
  pTVar19 = FConstClothCollection::GetSimAccessoryMeshBoneIndices(pFVar4,(FName *)FVar18);
  if (pTVar19 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    local_res20 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    puVar7 = *(undefined8 **)&this->field_0x8;
    if (local_res20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_res20->SharedReferenceCount = (atomic<int>)((int)local_res20->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      local_res20->SharedReferenceCount = (atomic<int>)((int)local_res20->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res20)
    ;
    pTVar6 = (TReferenceControllerBase<1> *)puVar7[1];
    pFVar9 = (FManagedArrayCollection *)*puVar7;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    lVar5 = puVar7[0x4f];
    iVar14 = 0;
    if (lVar5 != 0) {
      plVar22 = *(longlong **)(lVar5 + 0x10);
      iVar3 = *(int *)(lVar5 + 0x18);
      plVar1 = plVar22 + iVar3;
      while( true ) {
        if (*(int *)(lVar5 + 0x18) != iVar3) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (plVar22 == plVar1) break;
        lVar10 = *plVar22;
        iVar16 = iVar14;
        if (lVar10 != 0) {
          if ((uint)lVar10 ==
              ClothCollectionAttribute::SimAccessoryMeshBoneIndicesPrefix.ComparisonIndex.Value) {
            iVar16 = (int)((ulonglong)lVar10 >> 0x20);
            if (iVar16 < iVar14) {
              iVar16 = iVar14;
            }
          }
          else {
            bVar13 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_3774622486147104534>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                                ,0xea,"NamesHaveMatchingPrefix(ExistingAttr, AttributePrefix)");
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
        }
        iVar14 = iVar16;
        plVar22 = plVar22 + 1;
      }
    }
    FVar12.Value = ClothCollectionAttribute::SimAccessoryMeshBoneIndicesPrefix.ComparisonIndex.Value
    ;
    FVar18.Number = iVar14 + 1U;
    FVar18.ComparisonIndex.Value =
         ClothCollectionAttribute::SimAccessoryMeshBoneIndicesPrefix.ComparisonIndex.Value;
    bVar13 = FManagedArrayCollection::HasAttribute
                       (pFVar9,FVar18,ClothCollectionGroup::SimVertices3D);
    if ((bVar13) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Collection->HasAttribute(NewAttributeName, Group)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                            ,0xf2,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    FVar25.Number = iVar14 + 1U;
    FVar25.ComparisonIndex.Value = FVar12.Value;
    local_98.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_98.GroupIndexDependency.Number = 0;
    local_98.Saved = true;
    local_98.bAllowCircularDependency = false;
    local_98._10_2_ = uStack_e6;
    FManagedArrayCollection::AddAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
              (pFVar9,FVar25,ClothCollectionGroup::SimVertices3D,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    pTVar8 = local_res20;
    pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    lVar5 = *(longlong *)&this->field_0x8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    uVar2 = *(uint *)&this->field_0x18;
    lVar5 = *(longlong *)(lVar5 + 0x278);
    uVar15 = 0;
    if ((int)uVar2 < *(int *)(lVar5 + 0x18)) {
      uVar15 = ~uVar2 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    *(FName *)(*(longlong *)(lVar5 + 0x10) + (longlong)(int)uVar2 * 8) = FVar25;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  puVar24 = &this->field_0x8;
  pFVar4 = *(FConstClothCollection **)puVar24;
  if (pFVar4->SimAccessoryMeshBoneWeightsAttribute != (TManagedArray<FName> *)0x0) {
    iVar14 = FManagedArrayCollection::NumElements
                       ((pFVar4->ManagedArrayCollection).Object,
                        ClothCollectionGroup::SimAccessoryMeshes);
    uVar2 = *(uint *)&this->field_0x18;
    if ((int)uVar2 < iVar14) {
      lVar5 = *(longlong *)(*(longlong *)puVar24 + 0x280);
      uVar15 = 0;
      if ((int)uVar2 < *(int *)(lVar5 + 0x18)) {
        uVar15 = ~uVar2 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_a8[0] = *(FName *)(*(longlong *)(lVar5 + 0x10) + (longlong)(int)uVar2 * 8);
      goto LAB_14db562f2;
    }
  }
  local_a8[0].ComparisonIndex.Value = 0;
  local_a8[0].Number = 0;
LAB_14db562f2:
  pTVar20 = FConstClothCollection::GetSimAccessoryMeshBoneWeights(pFVar4,local_a8);
  if (pTVar20 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    puVar7 = *(undefined8 **)puVar24;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    local_res20 = (TReferenceControllerBase<1> *)puVar7[1];
    pFVar9 = (FManagedArrayCollection *)*puVar7;
    if (local_res20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_res20->SharedReferenceCount = (atomic<int>)((int)local_res20->SharedReferenceCount + 1);
      UNLOCK();
    }
    lVar5 = puVar7[0x50];
    iVar14 = 0;
    if (lVar5 != 0) {
      plVar22 = *(longlong **)(lVar5 + 0x10);
      iVar3 = *(int *)(lVar5 + 0x18);
      plVar1 = plVar22 + iVar3;
      while( true ) {
        if (*(int *)(lVar5 + 0x18) != iVar3) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (plVar22 == plVar1) break;
        lVar10 = *plVar22;
        iVar16 = iVar14;
        if (lVar10 != 0) {
          if ((uint)lVar10 ==
              ClothCollectionAttribute::SimAccessoryMeshBoneWeightsPrefix.ComparisonIndex.Value) {
            iVar16 = (int)((ulonglong)lVar10 >> 0x20);
            if (iVar16 < iVar14) {
              iVar16 = iVar14;
            }
          }
          else {
            bVar13 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_3774622486147104534>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                                ,0xea,"NamesHaveMatchingPrefix(ExistingAttr, AttributePrefix)");
            if (bVar13) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
        }
        iVar14 = iVar16;
        plVar22 = plVar22 + 1;
      }
    }
    pTVar8 = local_res20;
    FVar12.Value = ClothCollectionAttribute::SimAccessoryMeshBoneWeightsPrefix.ComparisonIndex.Value
    ;
    FVar21.Number = iVar14 + 1U;
    FVar21.ComparisonIndex.Value =
         ClothCollectionAttribute::SimAccessoryMeshBoneWeightsPrefix.ComparisonIndex.Value;
    bVar13 = FManagedArrayCollection::HasAttribute
                       (pFVar9,FVar21,ClothCollectionGroup::SimVertices3D);
    if ((bVar13) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Collection->HasAttribute(NewAttributeName, Group)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                            ,0xf2,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    FVar23.Number = iVar14 + 1U;
    FVar23.ComparisonIndex.Value = FVar12.Value;
    local_88.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_88.GroupIndexDependency.Number = 0;
    local_88.Saved = true;
    local_88.bAllowCircularDependency = false;
    local_88._10_2_ = uStack_da;
    FManagedArrayCollection::AddAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
              (pFVar9,FVar23,ClothCollectionGroup::SimVertices3D,&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    pTVar8 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    lVar5 = *(longlong *)&this->field_0x8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    uVar2 = *(uint *)&this->field_0x18;
    lVar5 = *(longlong *)(lVar5 + 0x280);
    uVar15 = 0;
    if ((int)uVar2 < *(int *)(lVar5 + 0x18)) {
      uVar15 = ~uVar2 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    *(FName *)(*(longlong *)(lVar5 + 0x10) + (longlong)(int)uVar2 * 8) = FVar23;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return;
}

// GetClothCollection @ 14db57660

TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshFacade::GetClothCollection
          (FCollectionClothSimAccessoryMeshFacade *this,
          TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> *__return_storage_ptr__)

{
  FClothCollection *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = *(FClothCollection **)&this->field_0x8;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pFVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetSimAccessoryMeshBoneIndices @ 14db5d250

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshBoneIndices
          (FCollectionClothSimAccessoryMeshFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FConstClothCollection *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName FVar6;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FVar6 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshBoneIndicesAttribute
                    ((FCollectionClothSimAccessoryMeshConstFacade *)this);
  pTVar7 = FConstClothCollection::GetSimAccessoryMeshBoneIndices(this_00,(FName *)FVar6);
  if (pTVar7 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar5 = (**(code **)(*(longlong *)pTVar7 + 0x60))(pTVar7);
    __return_storage_ptr__->DataPtr =
         *(TArray<int,TSizedDefaultAllocator<32>_> **)&pTVar7->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar5;
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *)(*pcVar3)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimAccessoryMeshBoneWeights @ 14db5d750

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshBoneWeights
          (FCollectionClothSimAccessoryMeshFacade *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FConstClothCollection *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName FVar6;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FVar6 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshBoneWeightsAttribute
                    ((FCollectionClothSimAccessoryMeshConstFacade *)this);
  pTVar7 = FConstClothCollection::GetSimAccessoryMeshBoneWeights(this_00,(FName *)FVar6);
  if (pTVar7 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar5 = (**(code **)(*(longlong *)pTVar7 + 0x60))(pTVar7);
    __return_storage_ptr__->DataPtr =
         *(TArray<float,TSizedDefaultAllocator<32>_> **)&pTVar7->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar5;
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *)(*pcVar3)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimAccessoryMeshNormal @ 14db5de50

TArrayView<UE::Math::TVector<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshNormal
          (FCollectionClothSimAccessoryMeshFacade *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FConstClothCollection *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName FVar6;
  TManagedArray<UE::Math::TVector<float>_> *pTVar7;
  TArrayView<UE::Math::TVector<float>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FVar6 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshNormalAttribute
                    ((FCollectionClothSimAccessoryMeshConstFacade *)this);
  pTVar7 = FConstClothCollection::GetSimAccessoryMeshNormal(this_00,(FName *)FVar6);
  if (pTVar7 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar5 = (**(code **)(*(longlong *)pTVar7 + 0x60))(pTVar7);
    __return_storage_ptr__->DataPtr = *(TVector<float> **)&pTVar7->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar5;
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar3)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimAccessoryMeshPosition3D @ 14db5e350

TArrayView<UE::Math::TVector<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshPosition3D
          (FCollectionClothSimAccessoryMeshFacade *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FConstClothCollection *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName FVar6;
  TManagedArray<UE::Math::TVector<float>_> *pTVar7;
  TArrayView<UE::Math::TVector<float>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FVar6 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshPosition3DAttribute
                    ((FCollectionClothSimAccessoryMeshConstFacade *)this);
  pTVar7 = FConstClothCollection::GetSimAccessoryMeshPosition3D(this_00,(FName *)FVar6);
  if (pTVar7 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar5 = (**(code **)(*(longlong *)pTVar7 + 0x60))(pTVar7);
    __return_storage_ptr__->DataPtr = *(TVector<float> **)&pTVar7->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar5;
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar3)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// Initialize @ 14db64760

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshFacade::Initialize
          (FCollectionClothSimAccessoryMeshFacade *this,
          FCollectionClothSimAccessoryMeshConstFacade *param_1)

{
  FName FVar1;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar2;
  TArrayView<UE::Math::TVector<float>,int> *pTVar3;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar4;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar5;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *pTVar6;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *pTVar7;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_28;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_18;
  
  GenerateDynamicAttributesIfNecessary(this);
  FVar1 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshName(param_1);
  SetSimAccessoryMeshName(this,(FName *)FVar1);
  pTVar2 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshPosition3D
                     (param_1,(TArrayView<UE::Math::TVector<float>_const_,int> *)&local_28);
  pTVar3 = GetSimAccessoryMeshPosition3D(this,(TArrayView<UE::Math::TVector<float>,int> *)&local_18)
  ;
  FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar3,pTVar2);
  pTVar2 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshNormal
                     (param_1,(TArrayView<UE::Math::TVector<float>_const_,int> *)&local_18);
  pTVar3 = GetSimAccessoryMeshNormal(this,(TArrayView<UE::Math::TVector<float>,int> *)&local_28);
  FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar3,pTVar2);
  pTVar4 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshBoneIndices
                     (param_1,&local_18);
  pTVar5 = GetSimAccessoryMeshBoneIndices(this,&local_28);
  FConstClothCollection::CopyArrayViewData<TArray<int,TSizedDefaultAllocator<32>_>_>(pTVar5,pTVar4);
  pTVar6 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshBoneWeights
                     (param_1,(TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *)
                              &local_18);
  pTVar7 = GetSimAccessoryMeshBoneWeights
                     (this,(TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *)&local_28);
  FConstClothCollection::CopyArrayViewData<TArray<float,TSizedDefaultAllocator<32>_>_>
            (pTVar7,pTVar6);
  return;
}

// Initialize @ 14db64850

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshFacade::Initialize
          (FCollectionClothSimAccessoryMeshFacade *this,FName *param_1,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_2,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_3,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *param_4,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArrayView<UE::Math::TVector<float>,int> *pTVar4;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar5;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *pTVar6;
  TArrayView<UE::Math::TVector<float>,int> local_58;
  TArrayView<UE::Math::TVector<float>,int> local_48;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_38;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_28;
  
  iVar3 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::SimVertices3D);
  if (param_2->ArrayNum != iVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Positions.Num() == NumExpectedVertices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimAccessoryMeshFacade.cpp"
                       ,0x5a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_3->ArrayNum != iVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Normals.Num() == NumExpectedVertices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimAccessoryMeshFacade.cpp"
                       ,0x5b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_4->ArrayNum != iVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BoneIndices.Num() == NumExpectedVertices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimAccessoryMeshFacade.cpp"
                       ,0x5c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_5->ArrayNum != iVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BoneWeights.Num() == NumExpectedVertices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimAccessoryMeshFacade.cpp"
                       ,0x5d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GenerateDynamicAttributesIfNecessary(this);
  SetSimAccessoryMeshName(this,param_1);
  pTVar4 = GetSimAccessoryMeshPosition3D(this,&local_58);
  FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar4,param_2);
  pTVar4 = GetSimAccessoryMeshNormal(this,&local_48);
  FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar4,param_3);
  pTVar5 = GetSimAccessoryMeshBoneIndices(this,&local_38);
  FConstClothCollection::CopyArrayViewData<TArray<int,TSizedDefaultAllocator<32>_>_>(pTVar5,param_4)
  ;
  pTVar6 = GetSimAccessoryMeshBoneWeights(this,&local_28);
  FConstClothCollection::CopyArrayViewData<TArray<float,TSizedDefaultAllocator<32>_>_>
            (pTVar6,param_5);
  return;
}

// Reset @ 14db6b6b0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshFacade::Reset
          (FCollectionClothSimAccessoryMeshFacade *this)

{
  FName local_res10 [3];
  
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  SetSimAccessoryMeshName(this,local_res10);
  ClearDynamicAttributes(this);
  return;
}

// SetSimAccessoryMeshName @ 14db6fad0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshFacade::SetSimAccessoryMeshName
          (FCollectionClothSimAccessoryMeshFacade *this,FName *param_1)

{
  uint uVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  lVar2 = *(longlong *)&this->field_0x8;
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  FVar4 = *param_1;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  uVar1 = *(uint *)&this->field_0x18;
  lVar2 = *(longlong *)(lVar2 + 0x260);
  uVar7 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(FName *)(*(longlong *)(lVar2 + 0x10) + (longlong)(int)uVar1 * 8) = FVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}


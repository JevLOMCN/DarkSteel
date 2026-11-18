// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// FGeometryCollectionConvexPropertiesInterface @ 1440127b0

FGeometryCollectionConvexPropertiesInterface * __thiscall
FGeometryCollectionConvexPropertiesInterface::FGeometryCollectionConvexPropertiesInterface
          (FGeometryCollectionConvexPropertiesInterface *this,FManagedArrayCollection *param_1)

{
  *(FManagedArrayCollection **)&this->field_0x8 = param_1;
  *(undefined ***)this = &___7FGeometryCollectionConvexPropertiesInterface__6B_;
  return this;
}

// CleanInterfaceForCook @ 144023760

void __thiscall
FGeometryCollectionConvexPropertiesInterface::CleanInterfaceForCook
          (FGeometryCollectionConvexPropertiesInterface *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144023763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// GetConvexProperties @ 14403eff0

FConvexCreationProperties * __thiscall
FGeometryCollectionConvexPropertiesInterface::GetConvexProperties
          (FGeometryCollectionConvexPropertiesInterface *this,
          FConvexCreationProperties *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TManagedArray<int> *pTVar6;
  TManagedArray<bool> *pTVar7;
  TManagedArray<float> *pTVar8;
  TManagedArray<float> *pTVar9;
  TManagedArray<float> *pTVar10;
  TManagedArray<float> *pTVar11;
  FConvexCreationProperties *pFVar12;
  uint uVar13;
  int *piVar14;
  longlong lVar15;
  undefined1 *puVar16;
  uint uVar17;
  
  GetDefaultProperty(this,__return_storage_ptr__);
  pTVar6 = FManagedArrayCollection::GetAttribute<int>
                     (*(FManagedArrayCollection **)&this->field_0x8,ConvexIndexAttribute,
                      ConvexPropertiesGroup);
  piVar1 = *(int **)&pTVar6->field_0x10;
  piVar14 = piVar1;
  if (piVar1 != piVar1 + *(int *)&pTVar6->field_0x18) {
    while (*piVar14 != param_1) {
      piVar14 = piVar14 + 1;
      if (piVar14 == piVar1 + *(int *)&pTVar6->field_0x18) {
        return __return_storage_ptr__;
      }
    }
    uVar13 = (uint)((longlong)piVar14 - (longlong)piVar1 >> 2);
    if (-1 < (int)uVar13) {
      iVar4 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
      if ((int)uVar13 < iVar4) {
        pTVar7 = FManagedArrayCollection::GetAttribute<bool>
                           (*(FManagedArrayCollection **)&this->field_0x8,ConvexEnable,
                            ConvexPropertiesGroup);
        pTVar8 = FManagedArrayCollection::GetAttribute<float>
                           (*(FManagedArrayCollection **)&this->field_0x8,
                            ConvexFractionRemoveAttribute,ConvexPropertiesGroup);
        pTVar9 = FManagedArrayCollection::GetAttribute<float>
                           (*(FManagedArrayCollection **)&this->field_0x8,
                            ConvexSimplificationThresholdAttribute,ConvexPropertiesGroup);
        pTVar10 = FManagedArrayCollection::GetAttribute<float>
                            (*(FManagedArrayCollection **)&this->field_0x8,
                             ConvexCanExceedFractionAttribute,ConvexPropertiesGroup);
        pTVar6 = FManagedArrayCollection::GetAttribute<int>
                           (*(FManagedArrayCollection **)&this->field_0x8,
                            ConvexRemoveOverlapsMethodAttribute,ConvexPropertiesGroup);
        pTVar11 = FManagedArrayCollection::GetAttribute<float>
                            (*(FManagedArrayCollection **)&this->field_0x8,
                             ConvexRemoveOverlapsShrinkAttribute,ConvexPropertiesGroup);
        if (*(int *)&pTVar7->field_0x28 <= (int)uVar13) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar12 = (FConvexCreationProperties *)(*pcVar2)();
            return pFVar12;
          }
        }
        puVar16 = *(undefined1 **)&pTVar7->field_0x20;
        if (*(undefined1 **)&pTVar7->field_0x20 == (undefined1 *)0x0) {
          puVar16 = &pTVar7->field_0x10;
        }
        uVar17 = ~uVar13 >> 0x1f;
        __return_storage_ptr__->Enable =
             (*(uint *)(puVar16 + (longlong)((int)(uVar13 + ((int)uVar13 >> 0x1f & 0x1fU)) >> 5) * 4
                       ) >> (uVar13 & 0x1f) & 1) != 0;
        uVar5 = 0;
        if ((int)uVar13 < *(int *)&pTVar8->field_0x18) {
          uVar5 = uVar17;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar12 = (FConvexCreationProperties *)(*pcVar2)();
            return pFVar12;
          }
        }
        lVar15 = (longlong)(int)uVar13;
        __return_storage_ptr__->FractionRemove =
             *(float *)(*(longlong *)&pTVar8->field_0x10 + lVar15 * 4);
        uVar5 = 0;
        if ((int)uVar13 < *(int *)&pTVar9->field_0x18) {
          uVar5 = uVar17;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar12 = (FConvexCreationProperties *)(*pcVar2)();
            return pFVar12;
          }
        }
        __return_storage_ptr__->SimplificationThreshold =
             *(float *)(*(longlong *)&pTVar9->field_0x10 + lVar15 * 4);
        uVar5 = 0;
        if ((int)uVar13 < *(int *)&pTVar10->field_0x18) {
          uVar5 = uVar17;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar12 = (FConvexCreationProperties *)(*pcVar2)();
            return pFVar12;
          }
        }
        __return_storage_ptr__->CanExceedFraction =
             *(float *)(*(longlong *)&pTVar10->field_0x10 + lVar15 * 4);
        uVar5 = 0;
        if ((int)uVar13 < *(int *)&pTVar6->field_0x18) {
          uVar5 = uVar17;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar12 = (FConvexCreationProperties *)(*pcVar2)();
            return pFVar12;
          }
        }
        __return_storage_ptr__->RemoveOverlaps =
             *(EConvexOverlapRemoval *)(*(longlong *)&pTVar6->field_0x10 + lVar15 * 4);
        uVar5 = 0;
        if ((int)uVar13 < *(int *)&pTVar11->field_0x18) {
          uVar5 = uVar17;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar12 = (FConvexCreationProperties *)(*pcVar2)();
            return pFVar12;
          }
        }
        __return_storage_ptr__->OverlapRemovalShrinkPercent =
             *(float *)(*(longlong *)&pTVar11->field_0x10 + lVar15 * 4);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetDefaultProperty @ 14403f460

FConvexCreationProperties * __thiscall
FGeometryCollectionConvexPropertiesInterface::GetDefaultProperty
          (FGeometryCollectionConvexPropertiesInterface *this,
          FConvexCreationProperties *__return_storage_ptr__)

{
  FManagedArrayCollection *this_00;
  int *piVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TManagedArray<int> *pTVar7;
  TManagedArray<bool> *pTVar8;
  TManagedArray<float> *pTVar9;
  TManagedArray<float> *pTVar10;
  TManagedArray<float> *pTVar11;
  TManagedArray<int> *pTVar12;
  TManagedArray<float> *pTVar13;
  FConvexCreationProperties *pFVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 *puVar19;
  
  FVar3 = ConvexPropertiesGroup;
  __return_storage_ptr__->Enable = true;
  this_00 = *(FManagedArrayCollection **)&this->field_0x8;
  __return_storage_ptr__->FractionRemove = 0.5;
  __return_storage_ptr__->SimplificationThreshold = 10.0;
  __return_storage_ptr__->CanExceedFraction = 0.5;
  __return_storage_ptr__->RemoveOverlaps = All;
  __return_storage_ptr__->OverlapRemovalShrinkPercent = 0.0;
  pTVar7 = FManagedArrayCollection::GetAttribute<int>(this_00,ConvexIndexAttribute,FVar3);
  piVar15 = *(int **)&pTVar7->field_0x10;
  piVar1 = piVar15 + *(int *)&pTVar7->field_0x18;
  if (piVar15 != piVar1) {
    while (*piVar15 != -1) {
      piVar15 = piVar15 + 1;
      if (piVar15 == piVar1) {
        return __return_storage_ptr__;
      }
    }
    pTVar8 = FManagedArrayCollection::GetAttribute<bool>
                       (*(FManagedArrayCollection **)&this->field_0x8,ConvexEnable,
                        ConvexPropertiesGroup);
    pTVar9 = FManagedArrayCollection::GetAttribute<float>
                       (*(FManagedArrayCollection **)&this->field_0x8,ConvexFractionRemoveAttribute,
                        ConvexPropertiesGroup);
    pTVar10 = FManagedArrayCollection::GetAttribute<float>
                        (*(FManagedArrayCollection **)&this->field_0x8,
                         ConvexSimplificationThresholdAttribute,ConvexPropertiesGroup);
    pTVar11 = FManagedArrayCollection::GetAttribute<float>
                        (*(FManagedArrayCollection **)&this->field_0x8,
                         ConvexCanExceedFractionAttribute,ConvexPropertiesGroup);
    pTVar12 = FManagedArrayCollection::GetAttribute<int>
                        (*(FManagedArrayCollection **)&this->field_0x8,
                         ConvexRemoveOverlapsMethodAttribute,ConvexPropertiesGroup);
    pTVar13 = FManagedArrayCollection::GetAttribute<float>
                        (*(FManagedArrayCollection **)&this->field_0x8,
                         ConvexRemoveOverlapsShrinkAttribute,ConvexPropertiesGroup);
    piVar1 = *(int **)&pTVar7->field_0x10;
    for (piVar15 = piVar1; piVar15 != piVar1 + *(int *)&pTVar7->field_0x18; piVar15 = piVar15 + 1) {
      if (*piVar15 == -1) {
        uVar16 = (uint)((longlong)piVar15 - (longlong)piVar1 >> 2);
        if ((int)uVar16 < 0) {
          return __return_storage_ptr__;
        }
        iVar5 = (**(code **)(*(longlong *)pTVar7 + 0x60))(pTVar7);
        if (iVar5 <= (int)uVar16) {
          return __return_storage_ptr__;
        }
        if ((*(int *)&pTVar8->field_0x28 <= (int)uVar16) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar14 = (FConvexCreationProperties *)(*pcVar2)();
          return pFVar14;
        }
        puVar19 = *(undefined1 **)&pTVar8->field_0x20;
        if (*(undefined1 **)&pTVar8->field_0x20 == (undefined1 *)0x0) {
          puVar19 = &pTVar8->field_0x10;
        }
        uVar17 = ~uVar16 >> 0x1f;
        __return_storage_ptr__->Enable =
             (*(uint *)(puVar19 + (longlong)((int)(uVar16 + ((int)uVar16 >> 0x1f & 0x1fU)) >> 5) * 4
                       ) >> (uVar16 & 0x1f) & 1) != 0;
        uVar6 = 0;
        if ((int)uVar16 < *(int *)&pTVar9->field_0x18) {
          uVar6 = uVar17;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar14 = (FConvexCreationProperties *)(*pcVar2)();
          return pFVar14;
        }
        lVar18 = (longlong)(int)uVar16;
        __return_storage_ptr__->FractionRemove =
             *(float *)(*(longlong *)&pTVar9->field_0x10 + lVar18 * 4);
        uVar6 = 0;
        if ((int)uVar16 < *(int *)&pTVar10->field_0x18) {
          uVar6 = uVar17;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar14 = (FConvexCreationProperties *)(*pcVar2)();
          return pFVar14;
        }
        __return_storage_ptr__->SimplificationThreshold =
             *(float *)(*(longlong *)&pTVar10->field_0x10 + lVar18 * 4);
        uVar6 = 0;
        if ((int)uVar16 < *(int *)&pTVar11->field_0x18) {
          uVar6 = uVar17;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar14 = (FConvexCreationProperties *)(*pcVar2)();
          return pFVar14;
        }
        __return_storage_ptr__->CanExceedFraction =
             *(float *)(*(longlong *)&pTVar11->field_0x10 + lVar18 * 4);
        uVar6 = 0;
        if ((int)uVar16 < *(int *)&pTVar12->field_0x18) {
          uVar6 = uVar17;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar14 = (FConvexCreationProperties *)(*pcVar2)();
          return pFVar14;
        }
        iVar5 = *(int *)&pTVar13->field_0x18;
        __return_storage_ptr__->RemoveOverlaps =
             *(EConvexOverlapRemoval *)(*(longlong *)&pTVar12->field_0x10 + lVar18 * 4);
        uVar6 = 0;
        if ((int)uVar16 < iVar5) {
          uVar6 = uVar17;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar14 = (FConvexCreationProperties *)(*pcVar2)();
          return pFVar14;
        }
        __return_storage_ptr__->OverlapRemovalShrinkPercent =
             *(float *)(*(longlong *)&pTVar13->field_0x10 + lVar18 * 4);
        return __return_storage_ptr__;
      }
    }
  }
  return __return_storage_ptr__;
}

// InitializeInterface @ 144045460

void __thiscall
FGeometryCollectionConvexPropertiesInterface::InitializeInterface
          (FGeometryCollectionConvexPropertiesInterface *this)

{
  int *piVar1;
  longlong lVar2;
  FManagedArrayCollection *pFVar3;
  code *pcVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  TManagedArray<int> *pTVar11;
  longlong lVar12;
  int *piVar13;
  undefined2 local_120;
  undefined2 uStack_11e;
  undefined2 local_110;
  undefined2 uStack_10e;
  undefined2 local_104;
  undefined2 uStack_102;
  undefined2 local_f8;
  undefined2 uStack_f6;
  undefined2 local_ec;
  undefined2 uStack_ea;
  undefined2 local_e0;
  undefined2 uStack_de;
  undefined2 local_d4;
  undefined2 uStack_d2;
  FConvexCreationProperties local_c8;
  FConstructionParameters local_a8;
  FConstructionParameters local_98;
  FConstructionParameters local_88;
  FConstructionParameters local_78;
  FConstructionParameters local_68;
  FConstructionParameters local_58;
  FConstructionParameters local_48 [2];
  
  FVar5 = ConvexPropertiesGroup;
  lVar2 = *(longlong *)&this->field_0x8;
  uVar8 = ::GetTypeHash(ConvexPropertiesGroup.ComparisonIndex.Value);
  if (*(int *)(lVar2 + 0x60) != *(int *)(lVar2 + 0x8c)) {
    lVar12 = *(longlong *)(lVar2 + 0x98);
    if (*(longlong *)(lVar2 + 0x98) == 0) {
      lVar12 = lVar2 + 0x90;
    }
    iVar9 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar2 + 0xa0) - 1U & FVar5.Number + uVar8) * 4);
    if (iVar9 != -1) {
      do {
        if (*(FName *)(*(longlong *)(lVar2 + 0x58) + (longlong)iVar9 * 0x14) == FVar5)
        goto LAB_1440454f5;
        iVar9 = *(int *)(*(longlong *)(lVar2 + 0x58) + 0xc + (longlong)iVar9 * 0x14);
      } while (iVar9 != -1);
    }
  }
  FManagedArrayCollection::AddGroup
            (*(FManagedArrayCollection **)&this->field_0x8,ConvexPropertiesGroup);
LAB_1440454f5:
  bVar7 = FManagedArrayCollection::HasAttribute
                    (*(FManagedArrayCollection **)&this->field_0x8,ConvexIndexAttribute,
                     ConvexPropertiesGroup);
  FVar6 = ConvexIndexAttribute;
  FVar5 = ConvexPropertiesGroup;
  if (!bVar7) {
    pFVar3 = *(FManagedArrayCollection **)&this->field_0x8;
    local_a8.GroupIndexDependency = FTransformCollection::TransformGroup;
    local_a8.Saved = true;
    local_a8.bAllowCircularDependency = false;
    local_a8._10_2_ = uStack_11e;
    bVar7 = FManagedArrayCollection::HasAttribute(pFVar3,ConvexIndexAttribute,ConvexPropertiesGroup)
    ;
    if (!bVar7) {
      FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar3,FVar6,FVar5,&local_a8);
    }
    FManagedArrayCollection::ModifyAttribute<int>(pFVar3,FVar6,FVar5);
  }
  bVar7 = FManagedArrayCollection::HasAttribute
                    (*(FManagedArrayCollection **)&this->field_0x8,ConvexEnable,
                     ConvexPropertiesGroup);
  FVar6 = ConvexEnable;
  FVar5 = ConvexPropertiesGroup;
  if (!bVar7) {
    pFVar3 = *(FManagedArrayCollection **)&this->field_0x8;
    local_98.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_98.GroupIndexDependency.Number = 0;
    local_98.Saved = true;
    local_98.bAllowCircularDependency = false;
    local_98._10_2_ = uStack_10e;
    bVar7 = FManagedArrayCollection::HasAttribute(pFVar3,ConvexEnable,ConvexPropertiesGroup);
    if (!bVar7) {
      FManagedArrayCollection::AddNewAttributeImpl<bool>(pFVar3,FVar6,FVar5,&local_98);
    }
    FManagedArrayCollection::ModifyAttribute<bool>(pFVar3,FVar6,FVar5);
  }
  bVar7 = FManagedArrayCollection::HasAttribute
                    (*(FManagedArrayCollection **)&this->field_0x8,ConvexFractionRemoveAttribute,
                     ConvexPropertiesGroup);
  FVar6 = ConvexFractionRemoveAttribute;
  FVar5 = ConvexPropertiesGroup;
  if (!bVar7) {
    pFVar3 = *(FManagedArrayCollection **)&this->field_0x8;
    local_88.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_88.GroupIndexDependency.Number = 0;
    local_88.Saved = true;
    local_88.bAllowCircularDependency = false;
    local_88._10_2_ = uStack_102;
    bVar7 = FManagedArrayCollection::HasAttribute
                      (pFVar3,ConvexFractionRemoveAttribute,ConvexPropertiesGroup);
    if (!bVar7) {
      FManagedArrayCollection::AddNewAttributeImpl<float>(pFVar3,FVar6,FVar5,&local_88);
    }
    FManagedArrayCollection::ModifyAttribute<float>(pFVar3,FVar6,FVar5);
  }
  bVar7 = FManagedArrayCollection::HasAttribute
                    (*(FManagedArrayCollection **)&this->field_0x8,
                     ConvexSimplificationThresholdAttribute,ConvexPropertiesGroup);
  FVar6 = ConvexSimplificationThresholdAttribute;
  FVar5 = ConvexPropertiesGroup;
  if (!bVar7) {
    pFVar3 = *(FManagedArrayCollection **)&this->field_0x8;
    local_78.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_78.GroupIndexDependency.Number = 0;
    local_78.Saved = true;
    local_78.bAllowCircularDependency = false;
    local_78._10_2_ = uStack_f6;
    bVar7 = FManagedArrayCollection::HasAttribute
                      (pFVar3,ConvexSimplificationThresholdAttribute,ConvexPropertiesGroup);
    if (!bVar7) {
      FManagedArrayCollection::AddNewAttributeImpl<float>(pFVar3,FVar6,FVar5,&local_78);
    }
    FManagedArrayCollection::ModifyAttribute<float>(pFVar3,FVar6,FVar5);
  }
  bVar7 = FManagedArrayCollection::HasAttribute
                    (*(FManagedArrayCollection **)&this->field_0x8,ConvexCanExceedFractionAttribute,
                     ConvexPropertiesGroup);
  FVar6 = ConvexCanExceedFractionAttribute;
  FVar5 = ConvexPropertiesGroup;
  if (!bVar7) {
    pFVar3 = *(FManagedArrayCollection **)&this->field_0x8;
    local_68.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_68.GroupIndexDependency.Number = 0;
    local_68.Saved = true;
    local_68.bAllowCircularDependency = false;
    local_68._10_2_ = uStack_ea;
    bVar7 = FManagedArrayCollection::HasAttribute
                      (pFVar3,ConvexCanExceedFractionAttribute,ConvexPropertiesGroup);
    if (!bVar7) {
      FManagedArrayCollection::AddNewAttributeImpl<float>(pFVar3,FVar6,FVar5,&local_68);
    }
    FManagedArrayCollection::ModifyAttribute<float>(pFVar3,FVar6,FVar5);
  }
  bVar7 = FManagedArrayCollection::HasAttribute
                    (*(FManagedArrayCollection **)&this->field_0x8,
                     ConvexRemoveOverlapsMethodAttribute,ConvexPropertiesGroup);
  FVar6 = ConvexRemoveOverlapsMethodAttribute;
  FVar5 = ConvexPropertiesGroup;
  if (!bVar7) {
    pFVar3 = *(FManagedArrayCollection **)&this->field_0x8;
    local_58.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_58.GroupIndexDependency.Number = 0;
    local_58.Saved = true;
    local_58.bAllowCircularDependency = false;
    local_58._10_2_ = uStack_de;
    bVar7 = FManagedArrayCollection::HasAttribute
                      (pFVar3,ConvexRemoveOverlapsMethodAttribute,ConvexPropertiesGroup);
    if (!bVar7) {
      FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar3,FVar6,FVar5,&local_58);
    }
    FManagedArrayCollection::ModifyAttribute<int>(pFVar3,FVar6,FVar5);
  }
  bVar7 = FManagedArrayCollection::HasAttribute
                    (*(FManagedArrayCollection **)&this->field_0x8,
                     ConvexRemoveOverlapsShrinkAttribute,ConvexPropertiesGroup);
  FVar6 = ConvexRemoveOverlapsShrinkAttribute;
  FVar5 = ConvexPropertiesGroup;
  if (!bVar7) {
    pFVar3 = *(FManagedArrayCollection **)&this->field_0x8;
    local_48[0].GroupIndexDependency.ComparisonIndex.Value = 0;
    local_48[0].GroupIndexDependency.Number = 0;
    local_48[0].Saved = true;
    local_48[0].bAllowCircularDependency = false;
    local_48[0]._10_2_ = uStack_d2;
    bVar7 = FManagedArrayCollection::HasAttribute
                      (pFVar3,ConvexRemoveOverlapsShrinkAttribute,ConvexPropertiesGroup);
    if (!bVar7) {
      FManagedArrayCollection::AddNewAttributeImpl<float>(pFVar3,FVar6,FVar5,local_48);
    }
    FManagedArrayCollection::ModifyAttribute<float>(pFVar3,FVar6,FVar5);
  }
  local_c8.Enable = true;
  local_c8.FractionRemove = 0.5;
  local_c8.SimplificationThreshold = 10.0;
  local_c8.CanExceedFraction = 0.5;
  local_c8.RemoveOverlaps = All;
  local_c8.OverlapRemovalShrinkPercent = 0.0;
  pTVar11 = FManagedArrayCollection::ModifyAttribute<int>
                      (*(FManagedArrayCollection **)&this->field_0x8,ConvexIndexAttribute,
                       ConvexPropertiesGroup);
  iVar9 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
  if (iVar9 != 0) {
    piVar13 = *(int **)&pTVar11->field_0x10;
    piVar1 = piVar13 + *(int *)&pTVar11->field_0x18;
    for (; piVar13 != piVar1; piVar13 = piVar13 + 1) {
      if (*piVar13 == -1) {
        return;
      }
    }
  }
  uVar10 = FManagedArrayCollection::AddElements
                     (*(FManagedArrayCollection **)&this->field_0x8,1,ConvexPropertiesGroup);
  uVar8 = 0;
  if ((int)uVar10 < *(int *)&pTVar11->field_0x18) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(*(longlong *)&pTVar11->field_0x10 + (longlong)(int)uVar10 * 4) = 0xffffffff;
  SetConvexProperties(this,&local_c8,-1);
  return;
}

// RemoveInterfaceAttributes @ 14404fa00

void __thiscall
FGeometryCollectionConvexPropertiesInterface::RemoveInterfaceAttributes
          (FGeometryCollectionConvexPropertiesInterface *this)

{
  FManagedArrayCollection::RemoveGroup
            (*(FManagedArrayCollection **)&this->field_0x8,ConvexPropertiesGroup);
  return;
}

// SetConvexProperties @ 144051140

void __thiscall
FGeometryCollectionConvexPropertiesInterface::SetConvexProperties
          (FGeometryCollectionConvexPropertiesInterface *this,FConvexCreationProperties *param_1,
          int param_2)

{
  longlong lVar1;
  float fVar2;
  EConvexOverlapRemoval EVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TManagedArray<int> *pTVar10;
  TManagedArray<bool> *pTVar11;
  TManagedArray<float> *pTVar12;
  TManagedArray<float> *pTVar13;
  TManagedArray<float> *pTVar14;
  TManagedArray<int> *pTVar15;
  TManagedArray<float> *pTVar16;
  int *piVar17;
  longlong lVar18;
  int *piVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint uVar22;
  
  pTVar10 = FManagedArrayCollection::ModifyAttribute<int>
                      (*(FManagedArrayCollection **)&this->field_0x8,ConvexIndexAttribute,
                       ConvexPropertiesGroup);
  pTVar11 = FManagedArrayCollection::ModifyAttribute<bool>
                      (*(FManagedArrayCollection **)&this->field_0x8,ConvexEnable,
                       ConvexPropertiesGroup);
  pTVar12 = FManagedArrayCollection::ModifyAttribute<float>
                      (*(FManagedArrayCollection **)&this->field_0x8,ConvexFractionRemoveAttribute,
                       ConvexPropertiesGroup);
  pTVar13 = FManagedArrayCollection::ModifyAttribute<float>
                      (*(FManagedArrayCollection **)&this->field_0x8,
                       ConvexSimplificationThresholdAttribute,ConvexPropertiesGroup);
  pTVar14 = FManagedArrayCollection::ModifyAttribute<float>
                      (*(FManagedArrayCollection **)&this->field_0x8,
                       ConvexCanExceedFractionAttribute,ConvexPropertiesGroup);
  pTVar15 = FManagedArrayCollection::ModifyAttribute<int>
                      (*(FManagedArrayCollection **)&this->field_0x8,
                       ConvexRemoveOverlapsMethodAttribute,ConvexPropertiesGroup);
  pTVar16 = FManagedArrayCollection::ModifyAttribute<float>
                      (*(FManagedArrayCollection **)&this->field_0x8,
                       ConvexRemoveOverlapsShrinkAttribute,ConvexPropertiesGroup);
  piVar4 = *(int **)&pTVar10->field_0x10;
  for (piVar17 = piVar4; piVar17 != piVar4 + *(int *)&pTVar10->field_0x18; piVar17 = piVar17 + 1) {
    piVar19 = piVar4;
    if (*piVar17 == param_2) goto LAB_144051382;
  }
  uVar8 = FManagedArrayCollection::AddElements
                    (*(FManagedArrayCollection **)&this->field_0x8,1,ConvexPropertiesGroup);
  goto LAB_144051268;
  while (piVar19 = piVar19 + 1, piVar19 != piVar4 + *(int *)&pTVar10->field_0x18) {
LAB_144051382:
    if (*piVar19 == param_2) {
      uVar8 = (uint)((longlong)piVar19 - (longlong)piVar4 >> 2);
      goto LAB_144051268;
    }
  }
  uVar8 = 0xffffffff;
LAB_144051268:
  if ((-1 < (int)uVar8) &&
     (iVar9 = (**(code **)(*(longlong *)pTVar10 + 0x60))(pTVar10), (int)uVar8 < iVar9)) {
    uVar22 = ~uVar8 >> 0x1f;
    uVar20 = 0;
    if ((int)uVar8 < *(int *)&pTVar10->field_0x18) {
      uVar20 = uVar22;
    }
    if ((uVar20 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar1 = (longlong)(int)uVar8 * 4;
    *(int *)(lVar1 + *(longlong *)&pTVar10->field_0x10) = param_2;
    bVar6 = param_1->Enable;
    if ((*(int *)&pTVar11->field_0x28 <= (int)uVar8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar21 = *(undefined1 **)&pTVar11->field_0x20;
    if (*(undefined1 **)&pTVar11->field_0x20 == (undefined1 *)0x0) {
      puVar21 = &pTVar11->field_0x10;
    }
    uVar20 = 1 << ((byte)uVar8 & 0x1f);
    lVar18 = (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5);
    if (bVar6 == false) {
      uVar20 = ~uVar20 & *(uint *)(puVar21 + lVar18 * 4);
    }
    else {
      uVar20 = uVar20 | *(uint *)(puVar21 + lVar18 * 4);
    }
    *(uint *)(puVar21 + lVar18 * 4) = uVar20;
    fVar2 = param_1->FractionRemove;
    uVar20 = 0;
    if ((int)uVar8 < *(int *)&pTVar12->field_0x18) {
      uVar20 = uVar22;
    }
    if ((uVar20 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(float *)(lVar1 + *(longlong *)&pTVar12->field_0x10) = fVar2;
    fVar2 = param_1->SimplificationThreshold;
    uVar20 = 0;
    if ((int)uVar8 < *(int *)&pTVar13->field_0x18) {
      uVar20 = uVar22;
    }
    if ((uVar20 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(float *)(lVar1 + *(longlong *)&pTVar13->field_0x10) = fVar2;
    fVar2 = param_1->CanExceedFraction;
    uVar20 = 0;
    if ((int)uVar8 < *(int *)&pTVar14->field_0x18) {
      uVar20 = uVar22;
    }
    if ((uVar20 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(float *)(lVar1 + *(longlong *)&pTVar14->field_0x10) = fVar2;
    EVar3 = param_1->RemoveOverlaps;
    uVar20 = 0;
    if ((int)uVar8 < *(int *)&pTVar15->field_0x18) {
      uVar20 = uVar22;
    }
    if ((uVar20 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(EConvexOverlapRemoval *)(lVar1 + *(longlong *)&pTVar15->field_0x10) = EVar3;
    fVar2 = param_1->OverlapRemovalShrinkPercent;
    uVar20 = 0;
    if ((int)uVar8 < *(int *)&pTVar16->field_0x18) {
      uVar20 = uVar22;
    }
    if ((uVar20 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(float *)(lVar1 + *(longlong *)&pTVar16->field_0x10) = fVar2;
  }
  return;
}

// SetDefaultProperty @ 144051590

void __thiscall
FGeometryCollectionConvexPropertiesInterface::SetDefaultProperty
          (FGeometryCollectionConvexPropertiesInterface *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TManagedArray<int> *pTVar6;
  uint uVar7;
  int *piVar8;
  FConvexCreationProperties local_28;
  
  local_28.Enable = true;
  local_28.FractionRemove = 0.5;
  local_28.SimplificationThreshold = 10.0;
  local_28.CanExceedFraction = 0.5;
  local_28.RemoveOverlaps = All;
  local_28.OverlapRemovalShrinkPercent = 0.0;
  pTVar6 = FManagedArrayCollection::ModifyAttribute<int>
                     (*(FManagedArrayCollection **)&this->field_0x8,ConvexIndexAttribute,
                      ConvexPropertiesGroup);
  iVar4 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
  if (iVar4 != 0) {
    piVar8 = *(int **)&pTVar6->field_0x10;
    piVar1 = piVar8 + *(int *)&pTVar6->field_0x18;
    for (; piVar8 != piVar1; piVar8 = piVar8 + 1) {
      if (*piVar8 == -1) {
        return;
      }
    }
  }
  uVar5 = FManagedArrayCollection::AddElements
                    (*(FManagedArrayCollection **)&this->field_0x8,1,ConvexPropertiesGroup);
  uVar7 = 0;
  if ((int)uVar5 < *(int *)&pTVar6->field_0x18) {
    uVar7 = ~uVar5 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined4 *)(*(longlong *)&pTVar6->field_0x10 + (longlong)(int)uVar5 * 4) = 0xffffffff;
  SetConvexProperties(this,&local_28,-1);
  return;
}


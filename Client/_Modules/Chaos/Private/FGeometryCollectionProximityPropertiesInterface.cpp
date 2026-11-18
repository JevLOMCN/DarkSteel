// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// FGeometryCollectionProximityPropertiesInterface @ 1440678a0

FGeometryCollectionProximityPropertiesInterface * __thiscall
FGeometryCollectionProximityPropertiesInterface::FGeometryCollectionProximityPropertiesInterface
          (FGeometryCollectionProximityPropertiesInterface *this,FGeometryCollection *param_1)

{
  *(FGeometryCollection **)&this->field_0x8 = param_1;
  *(undefined ***)this = &___7FGeometryCollectionProximityPropertiesInterface__6B_;
  return this;
}

// CleanInterfaceForCook @ 14407f560

void __thiscall
FGeometryCollectionProximityPropertiesInterface::CleanInterfaceForCook
          (FGeometryCollectionProximityPropertiesInterface *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014407f563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x10))();
  return;
}

// GetProximityProperties @ 14408d2e0

FProximityProperties * __thiscall
FGeometryCollectionProximityPropertiesInterface::GetProximityProperties
          (FGeometryCollectionProximityPropertiesInterface *this,
          FProximityProperties *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  FManagedArrayCollection *this_00;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar7;
  FProximityProperties *pFVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  TManagedArray<unsigned_char> *pTVar10;
  TManagedArray<int> *pTVar11;
  TManagedArray<float> *pTVar12;
  TManagedArray<unsigned_char> *pTVar13;
  TManagedArray<float> *pTVar14;
  byte *pbVar15;
  int *piVar16;
  FName local_38;
  FName local_30;
  
  __return_storage_ptr__->DistanceThreshold = 1.0;
  __return_storage_ptr__->RequireContactAmount = 0.0;
  lVar2 = *(longlong *)&this->field_0x8;
  __return_storage_ptr__->Method = Precise;
  __return_storage_ptr__->ContactMethod = MinOverlapInProjectionToMajorAxes;
  __return_storage_ptr__->ContactAreaMethod = None;
  __return_storage_ptr__->bUseAsConnectionGraph = false;
  pTVar7 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                   *)(lVar2 + 0x58),ProximityPropertiesGroup);
  FVar5 = ProximityAsConnectionGraph;
  FVar4 = ProximityPropertiesGroup;
  piVar16 = (int *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    piVar16 = (int *)0x0;
  }
  if ((piVar16 != (int *)0x0) && (0 < *piVar16)) {
    this_00 = *(FManagedArrayCollection **)&this->field_0x8;
    bVar6 = FManagedArrayCollection::HasAttribute
                      (this_00,ProximityAsConnectionGraph,ProximityPropertiesGroup);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("HasAttribute(Name, Group)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x185,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FProximityProperties *)(*pcVar3)();
        return pFVar8;
      }
    }
    local_38 = FVar5;
    local_30 = FVar4;
    pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                     *)&this_00->Map,(TTuple<FName,FName> *)&local_38);
    if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FProximityProperties *)(*pcVar3)();
        return pFVar8;
      }
    }
    if (pTVar9->field_0x10 != '\x06') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSameType<T>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x303,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FProximityProperties *)(*pcVar3)();
        return pFVar8;
      }
    }
    lVar2 = *(longlong *)&pTVar9->field_0x30;
    if (lVar2 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FProximityProperties *)(*pcVar3)();
        return pFVar8;
      }
    }
    pTVar10 = FManagedArrayCollection::GetAttribute<unsigned_char>
                        (*(FManagedArrayCollection **)&this->field_0x8,
                         ProximityConnectionGraphContactAreaMethod,ProximityPropertiesGroup);
    pTVar11 = FManagedArrayCollection::GetAttribute<int>
                        (*(FManagedArrayCollection **)&this->field_0x8,ProximityDetectionMethod,
                         ProximityPropertiesGroup);
    pTVar12 = FManagedArrayCollection::GetAttribute<float>
                        (*(FManagedArrayCollection **)&this->field_0x8,ProximityDistanceThreshold,
                         ProximityPropertiesGroup);
    pTVar13 = FManagedArrayCollection::GetAttribute<unsigned_char>
                        (*(FManagedArrayCollection **)&this->field_0x8,ProximityContactMethod,
                         ProximityPropertiesGroup);
    pTVar14 = FManagedArrayCollection::GetAttribute<float>
                        (*(FManagedArrayCollection **)&this->field_0x8,ProximityRequireContactAmount
                         ,ProximityPropertiesGroup);
    if (*(int *)(lVar2 + 0x28) < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FProximityProperties *)(*pcVar3)();
        return pFVar8;
      }
    }
    pbVar15 = *(byte **)(lVar2 + 0x20);
    if (*(byte **)(lVar2 + 0x20) == (byte *)0x0) {
      pbVar15 = (byte *)(lVar2 + 0x10);
    }
    __return_storage_ptr__->bUseAsConnectionGraph = (bool)(*pbVar15 & 1);
    if (*(int *)&pTVar10->field_0x18 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FProximityProperties *)(*pcVar3)();
        return pFVar8;
      }
    }
    iVar1 = *(int *)&pTVar12->field_0x18;
    __return_storage_ptr__->ContactAreaMethod = **(EConnectionContactMethod **)&pTVar10->field_0x10;
    if (iVar1 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FProximityProperties *)(*pcVar3)();
        return pFVar8;
      }
    }
    iVar1 = *(int *)&pTVar11->field_0x18;
    __return_storage_ptr__->DistanceThreshold = **(float **)&pTVar12->field_0x10;
    if (iVar1 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FProximityProperties *)(*pcVar3)();
        return pFVar8;
      }
    }
    iVar1 = *(int *)&pTVar13->field_0x18;
    __return_storage_ptr__->Method = **(EProximityMethod **)&pTVar11->field_0x10;
    if (iVar1 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FProximityProperties *)(*pcVar3)();
        return pFVar8;
      }
    }
    iVar1 = *(int *)&pTVar14->field_0x18;
    __return_storage_ptr__->ContactMethod = **(EProximityContactMethod **)&pTVar13->field_0x10;
    if (iVar1 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FProximityProperties *)(*pcVar3)();
        return pFVar8;
      }
    }
    __return_storage_ptr__->RequireContactAmount = **(float **)&pTVar14->field_0x10;
  }
  return __return_storage_ptr__;
}

// InitializeInterface @ 1440918d0

void __thiscall
FGeometryCollectionProximityPropertiesInterface::InitializeInterface
          (FGeometryCollectionProximityPropertiesInterface *this)

{
  longlong lVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined2 local_30;
  undefined2 uStack_2e;
  FConstructionParameters local_28;
  
  FVar3 = ProximityPropertiesGroup;
  lVar1 = *(longlong *)&this->field_0x8;
  uVar6 = ::GetTypeHash(ProximityPropertiesGroup.ComparisonIndex.Value);
  if (*(int *)(lVar1 + 0x60) != *(int *)(lVar1 + 0x8c)) {
    lVar8 = *(longlong *)(lVar1 + 0x98);
    if (*(longlong *)(lVar1 + 0x98) == 0) {
      lVar8 = lVar1 + 0x90;
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar1 + 0xa0) - 1U & FVar3.Number + uVar6) * 4);
    if (iVar7 != -1) {
      do {
        if (*(FName *)(*(longlong *)(lVar1 + 0x58) + (longlong)iVar7 * 0x14) == FVar3)
        goto LAB_144091965;
        iVar7 = *(int *)(*(longlong *)(lVar1 + 0x58) + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup
            (*(FManagedArrayCollection **)&this->field_0x8,ProximityPropertiesGroup);
LAB_144091965:
  bVar5 = FManagedArrayCollection::HasAttribute
                    (*(FManagedArrayCollection **)&this->field_0x8,ProximityDetectionMethod,
                     ProximityPropertiesGroup);
  FVar4 = ProximityDetectionMethod;
  FVar3 = ProximityPropertiesGroup;
  if (!bVar5) {
    pFVar2 = *(FManagedArrayCollection **)&this->field_0x8;
    local_30._0_1_ = true;
    local_30._1_1_ = false;
    local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_28.GroupIndexDependency.Number = 0;
    local_28.Saved = true;
    local_28.bAllowCircularDependency = false;
    local_28._10_2_ = uStack_2e;
    bVar5 = FManagedArrayCollection::HasAttribute
                      (pFVar2,ProximityDetectionMethod,ProximityPropertiesGroup);
    if (!bVar5) {
      FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar2,FVar4,FVar3,&local_28);
    }
    FManagedArrayCollection::ModifyAttribute<int>(pFVar2,FVar4,FVar3);
  }
  bVar5 = FManagedArrayCollection::HasAttribute
                    (*(FManagedArrayCollection **)&this->field_0x8,ProximityDistanceThreshold,
                     ProximityPropertiesGroup);
  FVar4 = ProximityDistanceThreshold;
  FVar3 = ProximityPropertiesGroup;
  if (!bVar5) {
    pFVar2 = *(FManagedArrayCollection **)&this->field_0x8;
    local_30._0_1_ = true;
    local_30._1_1_ = false;
    local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_28.GroupIndexDependency.Number = 0;
    local_28.Saved = true;
    local_28.bAllowCircularDependency = false;
    local_28._10_2_ = uStack_2e;
    bVar5 = FManagedArrayCollection::HasAttribute
                      (pFVar2,ProximityDistanceThreshold,ProximityPropertiesGroup);
    if (!bVar5) {
      FManagedArrayCollection::AddNewAttributeImpl<float>(pFVar2,FVar4,FVar3,&local_28);
    }
    FManagedArrayCollection::ModifyAttribute<float>(pFVar2,FVar4,FVar3);
  }
  bVar5 = FManagedArrayCollection::HasAttribute
                    (*(FManagedArrayCollection **)&this->field_0x8,ProximityAsConnectionGraph,
                     ProximityPropertiesGroup);
  FVar4 = ProximityAsConnectionGraph;
  FVar3 = ProximityPropertiesGroup;
  if (!bVar5) {
    pFVar2 = *(FManagedArrayCollection **)&this->field_0x8;
    local_30._0_1_ = true;
    local_30._1_1_ = false;
    local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_28.GroupIndexDependency.Number = 0;
    local_28.Saved = true;
    local_28.bAllowCircularDependency = false;
    local_28._10_2_ = uStack_2e;
    bVar5 = FManagedArrayCollection::HasAttribute
                      (pFVar2,ProximityAsConnectionGraph,ProximityPropertiesGroup);
    if (!bVar5) {
      FManagedArrayCollection::AddNewAttributeImpl<bool>(pFVar2,FVar4,FVar3,&local_28);
    }
    FManagedArrayCollection::ModifyAttribute<bool>(pFVar2,FVar4,FVar3);
  }
  bVar5 = FManagedArrayCollection::HasAttribute
                    (*(FManagedArrayCollection **)&this->field_0x8,ProximityContactMethod,
                     ProximityPropertiesGroup);
  FVar4 = ProximityContactMethod;
  FVar3 = ProximityPropertiesGroup;
  if (!bVar5) {
    pFVar2 = *(FManagedArrayCollection **)&this->field_0x8;
    local_30._0_1_ = true;
    local_30._1_1_ = false;
    local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_28.GroupIndexDependency.Number = 0;
    local_28.Saved = true;
    local_28.bAllowCircularDependency = false;
    local_28._10_2_ = uStack_2e;
    bVar5 = FManagedArrayCollection::HasAttribute
                      (pFVar2,ProximityContactMethod,ProximityPropertiesGroup);
    if (!bVar5) {
      FManagedArrayCollection::AddNewAttributeImpl<unsigned_char>(pFVar2,FVar4,FVar3,&local_28);
    }
    FManagedArrayCollection::ModifyAttribute<unsigned_char>(pFVar2,FVar4,FVar3);
  }
  bVar5 = FManagedArrayCollection::HasAttribute
                    (*(FManagedArrayCollection **)&this->field_0x8,ProximityRequireContactAmount,
                     ProximityPropertiesGroup);
  FVar4 = ProximityRequireContactAmount;
  FVar3 = ProximityPropertiesGroup;
  if (!bVar5) {
    pFVar2 = *(FManagedArrayCollection **)&this->field_0x8;
    local_30._0_1_ = true;
    local_30._1_1_ = false;
    local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_28.GroupIndexDependency.Number = 0;
    local_28.Saved = true;
    local_28.bAllowCircularDependency = false;
    local_28._10_2_ = uStack_2e;
    bVar5 = FManagedArrayCollection::HasAttribute
                      (pFVar2,ProximityRequireContactAmount,ProximityPropertiesGroup);
    if (!bVar5) {
      FManagedArrayCollection::AddNewAttributeImpl<float>(pFVar2,FVar4,FVar3,&local_28);
    }
    FManagedArrayCollection::ModifyAttribute<float>(pFVar2,FVar4,FVar3);
  }
  bVar5 = FManagedArrayCollection::HasAttribute
                    (*(FManagedArrayCollection **)&this->field_0x8,
                     ProximityConnectionGraphContactAreaMethod,ProximityPropertiesGroup);
  FVar4 = ProximityConnectionGraphContactAreaMethod;
  FVar3 = ProximityPropertiesGroup;
  if (!bVar5) {
    pFVar2 = *(FManagedArrayCollection **)&this->field_0x8;
    local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_28.GroupIndexDependency.Number = 0;
    local_28.Saved = true;
    local_28.bAllowCircularDependency = false;
    local_28._10_2_ = uStack_2e;
    bVar5 = FManagedArrayCollection::HasAttribute
                      (pFVar2,ProximityConnectionGraphContactAreaMethod,ProximityPropertiesGroup);
    if (!bVar5) {
      FManagedArrayCollection::AddNewAttributeImpl<unsigned_char>(pFVar2,FVar4,FVar3,&local_28);
    }
    FManagedArrayCollection::ModifyAttribute<unsigned_char>(pFVar2,FVar4,FVar3);
  }
  return;
}

// RemoveInterfaceAttributes @ 1440aa510

void __thiscall
FGeometryCollectionProximityPropertiesInterface::RemoveInterfaceAttributes
          (FGeometryCollectionProximityPropertiesInterface *this)

{
  FManagedArrayCollection::RemoveGroup
            (*(FManagedArrayCollection **)&this->field_0x8,ProximityPropertiesGroup);
  return;
}

// SetProximityProperties @ 1440b3ff0

void __thiscall
FGeometryCollectionProximityPropertiesInterface::SetProximityProperties
          (FGeometryCollectionProximityPropertiesInterface *this,FProximityProperties *param_1)

{
  float fVar1;
  EConnectionContactMethod EVar2;
  EProximityContactMethod EVar3;
  EProximityMethod EVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar12;
  TManagedArray<bool> *pTVar13;
  TManagedArray<unsigned_char> *pTVar14;
  TManagedArray<int> *pTVar15;
  TManagedArray<float> *pTVar16;
  TManagedArray<unsigned_char> *pTVar17;
  TManagedArray<float> *pTVar18;
  int *piVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  undefined1 *puVar24;
  
  pTVar12 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                    *)(*(longlong *)&this->field_0x8 + 0x58),ProximityPropertiesGroup);
  FVar6 = ProximityPropertiesGroup;
  piVar19 = (int *)&pTVar12->field_0x8;
  if (pTVar12 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    piVar19 = (int *)0x0;
  }
  if ((piVar19 == (int *)0x0) || (uVar9 = 0, *piVar19 < 1)) {
    lVar21 = *(longlong *)&this->field_0x8;
    uVar9 = ::GetTypeHash(ProximityPropertiesGroup.ComparisonIndex.Value);
    if (*(int *)(lVar21 + 0x60) != *(int *)(lVar21 + 0x8c)) {
      lVar20 = *(longlong *)(lVar21 + 0x98);
      if (*(longlong *)(lVar21 + 0x98) == 0) {
        lVar20 = lVar21 + 0x90;
      }
      iVar10 = *(int *)(lVar20 + (ulonglong)(*(int *)(lVar21 + 0xa0) - 1U & uVar9 + FVar6.Number) *
                                 4);
      if (iVar10 != -1) {
        do {
          if (*(FName *)(*(longlong *)(lVar21 + 0x58) + (longlong)iVar10 * 0x14) == FVar6)
          goto LAB_1440b40ea;
          iVar10 = *(int *)(*(longlong *)(lVar21 + 0x58) + 0xc + (longlong)iVar10 * 0x14);
        } while (iVar10 != -1);
      }
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3523082112934608795>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\GeometryCollectionProximityPropertiesInterface.cpp"
                       ,0x65,"ManagedCollection->HasGroup(ProximityPropertiesGroup)");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (*(code *)**(undefined8 **)this)(this);
LAB_1440b40ea:
    uVar9 = FManagedArrayCollection::AddElements
                      (*(FManagedArrayCollection **)&this->field_0x8,1,ProximityPropertiesGroup);
  }
  pTVar13 = FManagedArrayCollection::ModifyAttribute<bool>
                      (*(FManagedArrayCollection **)&this->field_0x8,ProximityAsConnectionGraph,
                       ProximityPropertiesGroup);
  pTVar14 = FManagedArrayCollection::ModifyAttribute<unsigned_char>
                      (*(FManagedArrayCollection **)&this->field_0x8,
                       ProximityConnectionGraphContactAreaMethod,ProximityPropertiesGroup);
  pTVar15 = FManagedArrayCollection::ModifyAttribute<int>
                      (*(FManagedArrayCollection **)&this->field_0x8,ProximityDetectionMethod,
                       ProximityPropertiesGroup);
  pTVar16 = FManagedArrayCollection::ModifyAttribute<float>
                      (*(FManagedArrayCollection **)&this->field_0x8,ProximityDistanceThreshold,
                       ProximityPropertiesGroup);
  pTVar17 = FManagedArrayCollection::ModifyAttribute<unsigned_char>
                      (*(FManagedArrayCollection **)&this->field_0x8,ProximityContactMethod,
                       ProximityPropertiesGroup);
  pTVar18 = FManagedArrayCollection::ModifyAttribute<float>
                      (*(FManagedArrayCollection **)&this->field_0x8,ProximityRequireContactAmount,
                       ProximityPropertiesGroup);
  bVar7 = param_1->bUseAsConnectionGraph;
  if (((int)uVar9 < 0) || (*(int *)&pTVar13->field_0x28 <= (int)uVar9)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar24 = *(undefined1 **)&pTVar13->field_0x20;
  if (*(undefined1 **)&pTVar13->field_0x20 == (undefined1 *)0x0) {
    puVar24 = &pTVar13->field_0x10;
  }
  uVar22 = 1 << ((byte)uVar9 & 0x1f);
  lVar21 = (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5);
  if (bVar7 == false) {
    uVar22 = ~uVar22 & *(uint *)(puVar24 + lVar21 * 4);
  }
  else {
    uVar22 = uVar22 | *(uint *)(puVar24 + lVar21 * 4);
  }
  *(uint *)(puVar24 + lVar21 * 4) = uVar22;
  EVar2 = param_1->ContactAreaMethod;
  uVar23 = ~uVar9 >> 0x1f;
  uVar22 = 0;
  if ((int)uVar9 < *(int *)&pTVar14->field_0x18) {
    uVar22 = uVar23;
  }
  if (uVar22 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar21 = (longlong)(int)uVar9;
  *(EConnectionContactMethod *)(lVar21 + *(longlong *)&pTVar14->field_0x10) = EVar2;
  fVar1 = param_1->DistanceThreshold;
  uVar11 = 0;
  uVar22 = uVar11;
  if ((int)uVar9 < *(int *)&pTVar16->field_0x18) {
    uVar22 = uVar23;
  }
  if (uVar22 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(float *)(*(longlong *)&pTVar16->field_0x10 + lVar21 * 4) = fVar1;
  EVar4 = param_1->Method;
  uVar22 = uVar11;
  if ((int)uVar9 < *(int *)&pTVar15->field_0x18) {
    uVar22 = uVar23;
  }
  if (uVar22 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(EProximityMethod *)(*(longlong *)&pTVar15->field_0x10 + lVar21 * 4) = EVar4;
  EVar3 = param_1->ContactMethod;
  uVar22 = uVar11;
  if ((int)uVar9 < *(int *)&pTVar17->field_0x18) {
    uVar22 = uVar23;
  }
  if (uVar22 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(EProximityContactMethod *)(lVar21 + *(longlong *)&pTVar17->field_0x10) = EVar3;
  fVar1 = param_1->RequireContactAmount;
  if ((int)uVar9 < *(int *)&pTVar18->field_0x18) {
    uVar11 = uVar23;
  }
  if (uVar11 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(float *)(*(longlong *)&pTVar18->field_0x10 + lVar21 * 4) = fVar1;
  return;
}


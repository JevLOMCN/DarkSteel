// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 28

// FindOrAddUserDefinedAttribute<int> @ 14db29f10

TManagedArray<int> * __thiscall
UE::Chaos::ClothAsset::FClothCollection::FindOrAddUserDefinedAttribute<int>
          (FClothCollection *this,FName *param_1,FName *param_2,FName *param_3)

{
  uint *puVar1;
  FName FVar2;
  FName FVar3;
  FManagedArrayCollection *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  FValueType *pFVar10;
  TManagedArray<int> *pTVar11;
  FName *pFVar12;
  uint *puVar13;
  FName *pFVar14;
  longlong lVar15;
  FValueType *pFVar16;
  undefined2 local_50;
  undefined2 uStack_4e;
  FConstructionParameters local_48;
  FName local_38;
  FName local_30;
  
  FVar2 = *param_2;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  pFVar16 = (FValueType *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar15 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar15 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar8 = *(uint *)(lVar15 + (ulonglong)
                               (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar8) * 4);
    while (uVar8 != 0xffffffff) {
      pFVar12 = (FName *)((longlong)(int)uVar8 * 0x20 +
                         ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar12 == FVar2) {
        pFVar10 = (FValueType *)(pFVar12 + 1);
        if (pFVar12 == (FName *)0x0) {
          pFVar10 = pFVar16;
        }
        if (pFVar10 != (FValueType *)0x0) {
          puVar13 = *(uint **)pFVar10;
          puVar1 = puVar13 + (longlong)(int)(pFVar10->GroupIndexDependency).Number * 2;
          if (puVar13 != puVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *puVar13) {
                return (TManagedArray<int> *)0x0;
              }
              puVar13 = puVar13 + 2;
            } while (puVar13 != puVar1);
          }
        }
        break;
      }
      uVar8 = pFVar12[3].ComparisonIndex.Value;
    }
  }
  FVar2 = *param_2;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar15 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar15 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar8 = *(uint *)(lVar15 + (ulonglong)
                               (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar8) * 4);
    while (uVar8 != 0xffffffff) {
      pFVar12 = (FName *)((longlong)(int)uVar8 * 0x20 +
                         ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar12 == FVar2) {
        pFVar10 = (FValueType *)(pFVar12 + 1);
        if (pFVar12 == (FName *)0x0) {
          pFVar10 = pFVar16;
        }
        if (pFVar10 != (FValueType *)0x0) {
          pFVar14 = *(FName **)pFVar10;
          pFVar12 = pFVar14 + (int)(pFVar10->GroupIndexDependency).Number;
          if (pFVar14 == pFVar12) goto LAB_14db2a122;
          while (*pFVar14 != *param_1) {
            pFVar14 = pFVar14 + 1;
            if (pFVar14 == pFVar12) {
LAB_14db2a122:
              pFVar4 = *(FManagedArrayCollection **)this;
              pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x8;
              if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_48.GroupIndexDependency = *param_3;
              FVar2 = *param_2;
              FVar3 = *param_1;
              local_48.Saved = true;
              local_48.bAllowCircularDependency = false;
              local_48._10_2_ = uStack_4e;
              bVar7 = FManagedArrayCollection::HasAttribute(pFVar4,FVar3,FVar2);
              if (!bVar7) {
                FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar4,FVar3,FVar2,&local_48);
              }
              local_38 = FVar3;
              local_30 = FVar2;
              pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                       ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                               *)&pFVar4->Map,(TTuple<FName,FName> *)&local_38);
              pFVar10 = (FValueType *)&pTVar9->field_0x10;
              if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0)
              {
                pFVar10 = pFVar16;
              }
              if ((pFVar10 != (FValueType *)0x0) && (pFVar10->ArrayType == FInt32Type)) {
                FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
                pFVar16 = (FValueType *)pFVar10->ManagedArray;
                if ((pFVar16 == (FValueType *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("TypedManagedArray != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                       ,0x319,L""), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  pTVar11 = (TManagedArray<int> *)(*pcVar6)();
                  return pTVar11;
                }
                *(undefined1 *)&(pFVar16->GroupIndexDependency).Number = 1;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar5);
              return (TManagedArray<int> *)pFVar16;
            }
          }
        }
        break;
      }
      uVar8 = pFVar12[3].ComparisonIndex.Value;
    }
  }
  FVar2 = *param_2;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar15 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar15 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar8 = *(uint *)(lVar15 + (ulonglong)
                               (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar8) * 4);
    while (uVar8 != 0xffffffff) {
      pFVar12 = (FName *)((longlong)(int)uVar8 * 0x20 +
                         ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar12 == FVar2) {
        pFVar10 = (FValueType *)(pFVar12 + 1);
        if (pFVar12 == (FName *)0x0) {
          pFVar10 = pFVar16;
        }
        if (pFVar10 == (FValueType *)0x0) {
          return (TManagedArray<int> *)0x0;
        }
        pFVar14 = *(FName **)pFVar10;
        pFVar12 = pFVar14 + (int)(pFVar10->GroupIndexDependency).Number;
        if (pFVar14 == pFVar12) {
          return (TManagedArray<int> *)0x0;
        }
        do {
          if (*pFVar14 == *param_1) {
            pFVar4 = *(FManagedArrayCollection **)this;
            pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x8;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar11 = FManagedArrayCollection::FindAttributeTyped<int>(pFVar4,*param_1,*param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            return pTVar11;
          }
          pFVar14 = pFVar14 + 1;
        } while (pFVar14 != pFVar12);
        return (TManagedArray<int> *)0x0;
      }
      uVar8 = pFVar12[3].ComparisonIndex.Value;
    }
  }
  return (TManagedArray<int> *)0x0;
}

// FindOrAddUserDefinedAttribute<float> @ 14db2a290

TManagedArray<float> * __thiscall
UE::Chaos::ClothAsset::FClothCollection::FindOrAddUserDefinedAttribute<float>
          (FClothCollection *this,FName *param_1,FName *param_2,FName *param_3)

{
  uint *puVar1;
  FName FVar2;
  FName FVar3;
  FManagedArrayCollection *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  FValueType *pFVar10;
  TManagedArray<float> *pTVar11;
  FName *pFVar12;
  uint *puVar13;
  FName *pFVar14;
  longlong lVar15;
  FValueType *pFVar16;
  undefined2 local_50;
  undefined2 uStack_4e;
  FConstructionParameters local_48;
  FName local_38;
  FName local_30;
  
  FVar2 = *param_2;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  pFVar16 = (FValueType *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar15 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar15 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar8 = *(uint *)(lVar15 + (ulonglong)
                               (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar8) * 4);
    while (uVar8 != 0xffffffff) {
      pFVar12 = (FName *)((longlong)(int)uVar8 * 0x20 +
                         ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar12 == FVar2) {
        pFVar10 = (FValueType *)(pFVar12 + 1);
        if (pFVar12 == (FName *)0x0) {
          pFVar10 = pFVar16;
        }
        if (pFVar10 != (FValueType *)0x0) {
          puVar13 = *(uint **)pFVar10;
          puVar1 = puVar13 + (longlong)(int)(pFVar10->GroupIndexDependency).Number * 2;
          if (puVar13 != puVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *puVar13) {
                return (TManagedArray<float> *)0x0;
              }
              puVar13 = puVar13 + 2;
            } while (puVar13 != puVar1);
          }
        }
        break;
      }
      uVar8 = pFVar12[3].ComparisonIndex.Value;
    }
  }
  FVar2 = *param_2;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar15 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar15 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar8 = *(uint *)(lVar15 + (ulonglong)
                               (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar8) * 4);
    while (uVar8 != 0xffffffff) {
      pFVar12 = (FName *)((longlong)(int)uVar8 * 0x20 +
                         ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar12 == FVar2) {
        pFVar10 = (FValueType *)(pFVar12 + 1);
        if (pFVar12 == (FName *)0x0) {
          pFVar10 = pFVar16;
        }
        if (pFVar10 != (FValueType *)0x0) {
          pFVar14 = *(FName **)pFVar10;
          pFVar12 = pFVar14 + (int)(pFVar10->GroupIndexDependency).Number;
          if (pFVar14 == pFVar12) goto LAB_14db2a4a2;
          while (*pFVar14 != *param_1) {
            pFVar14 = pFVar14 + 1;
            if (pFVar14 == pFVar12) {
LAB_14db2a4a2:
              pFVar4 = *(FManagedArrayCollection **)this;
              pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x8;
              if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_48.GroupIndexDependency = *param_3;
              FVar2 = *param_2;
              FVar3 = *param_1;
              local_48.Saved = true;
              local_48.bAllowCircularDependency = false;
              local_48._10_2_ = uStack_4e;
              bVar7 = FManagedArrayCollection::HasAttribute(pFVar4,FVar3,FVar2);
              if (!bVar7) {
                FManagedArrayCollection::AddNewAttributeImpl<float>(pFVar4,FVar3,FVar2,&local_48);
              }
              local_38 = FVar3;
              local_30 = FVar2;
              pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                       ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                               *)&pFVar4->Map,(TTuple<FName,FName> *)&local_38);
              pFVar10 = (FValueType *)&pTVar9->field_0x10;
              if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0)
              {
                pFVar10 = pFVar16;
              }
              if ((pFVar10 != (FValueType *)0x0) && (pFVar10->ArrayType == FFloatType)) {
                FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
                pFVar16 = (FValueType *)pFVar10->ManagedArray;
                if ((pFVar16 == (FValueType *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("TypedManagedArray != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                       ,0x319,L""), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  pTVar11 = (TManagedArray<float> *)(*pcVar6)();
                  return pTVar11;
                }
                *(undefined1 *)&(pFVar16->GroupIndexDependency).Number = 1;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar5);
              return (TManagedArray<float> *)pFVar16;
            }
          }
        }
        break;
      }
      uVar8 = pFVar12[3].ComparisonIndex.Value;
    }
  }
  FVar2 = *param_2;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar15 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar15 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar8 = *(uint *)(lVar15 + (ulonglong)
                               (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar8) * 4);
    while (uVar8 != 0xffffffff) {
      pFVar12 = (FName *)((longlong)(int)uVar8 * 0x20 +
                         ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar12 == FVar2) {
        pFVar10 = (FValueType *)(pFVar12 + 1);
        if (pFVar12 == (FName *)0x0) {
          pFVar10 = pFVar16;
        }
        if (pFVar10 == (FValueType *)0x0) {
          return (TManagedArray<float> *)0x0;
        }
        pFVar14 = *(FName **)pFVar10;
        pFVar12 = pFVar14 + (int)(pFVar10->GroupIndexDependency).Number;
        if (pFVar14 == pFVar12) {
          return (TManagedArray<float> *)0x0;
        }
        do {
          if (*pFVar14 == *param_1) {
            pFVar4 = *(FManagedArrayCollection **)this;
            pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x8;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar11 = FManagedArrayCollection::FindAttributeTyped<float>(pFVar4,*param_1,*param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            return pTVar11;
          }
          pFVar14 = pFVar14 + 1;
        } while (pFVar14 != pFVar12);
        return (TManagedArray<float> *)0x0;
      }
      uVar8 = pFVar12[3].ComparisonIndex.Value;
    }
  }
  return (TManagedArray<float> *)0x0;
}

// FindOrAddUserDefinedAttribute<UE::Math::TVector<float>_> @ 14db2a610

TManagedArray<UE::Math::TVector<float>_> * __thiscall
UE::Chaos::ClothAsset::FClothCollection::FindOrAddUserDefinedAttribute<UE::Math::TVector<float>_>
          (FClothCollection *this,FName *param_1,FName *param_2,FName *param_3)

{
  uint *puVar1;
  FName FVar2;
  FName FVar3;
  FManagedArrayCollection *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  FValueType *pFVar10;
  TManagedArray<UE::Math::TVector<float>_> *pTVar11;
  FName *pFVar12;
  uint *puVar13;
  FName *pFVar14;
  longlong lVar15;
  FValueType *pFVar16;
  undefined2 local_50;
  undefined2 uStack_4e;
  FConstructionParameters local_48;
  FName local_38;
  FName local_30;
  
  FVar2 = *param_2;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  pFVar16 = (FValueType *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar15 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar15 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar8 = *(uint *)(lVar15 + (ulonglong)
                               (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar8) * 4);
    while (uVar8 != 0xffffffff) {
      pFVar12 = (FName *)((longlong)(int)uVar8 * 0x20 +
                         ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar12 == FVar2) {
        pFVar10 = (FValueType *)(pFVar12 + 1);
        if (pFVar12 == (FName *)0x0) {
          pFVar10 = pFVar16;
        }
        if (pFVar10 != (FValueType *)0x0) {
          puVar13 = *(uint **)pFVar10;
          puVar1 = puVar13 + (longlong)(int)(pFVar10->GroupIndexDependency).Number * 2;
          if (puVar13 != puVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *puVar13) {
                return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
              }
              puVar13 = puVar13 + 2;
            } while (puVar13 != puVar1);
          }
        }
        break;
      }
      uVar8 = pFVar12[3].ComparisonIndex.Value;
    }
  }
  FVar2 = *param_2;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar15 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar15 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar8 = *(uint *)(lVar15 + (ulonglong)
                               (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar8) * 4);
    while (uVar8 != 0xffffffff) {
      pFVar12 = (FName *)((longlong)(int)uVar8 * 0x20 +
                         ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar12 == FVar2) {
        pFVar10 = (FValueType *)(pFVar12 + 1);
        if (pFVar12 == (FName *)0x0) {
          pFVar10 = pFVar16;
        }
        if (pFVar10 != (FValueType *)0x0) {
          pFVar14 = *(FName **)pFVar10;
          pFVar12 = pFVar14 + (int)(pFVar10->GroupIndexDependency).Number;
          if (pFVar14 == pFVar12) goto LAB_14db2a822;
          while (*pFVar14 != *param_1) {
            pFVar14 = pFVar14 + 1;
            if (pFVar14 == pFVar12) {
LAB_14db2a822:
              pFVar4 = *(FManagedArrayCollection **)this;
              pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x8;
              if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_48.GroupIndexDependency = *param_3;
              FVar2 = *param_2;
              FVar3 = *param_1;
              local_48.Saved = true;
              local_48.bAllowCircularDependency = false;
              local_48._10_2_ = uStack_4e;
              bVar7 = FManagedArrayCollection::HasAttribute(pFVar4,FVar3,FVar2);
              if (!bVar7) {
                FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<float>_>
                          (pFVar4,FVar3,FVar2,&local_48);
              }
              local_38 = FVar3;
              local_30 = FVar2;
              pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                       ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                               *)&pFVar4->Map,(TTuple<FName,FName> *)&local_38);
              pFVar10 = (FValueType *)&pTVar9->field_0x10;
              if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0)
              {
                pFVar10 = pFVar16;
              }
              if ((pFVar10 != (FValueType *)0x0) && (pFVar10->ArrayType == FVectorType)) {
                FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
                pFVar16 = (FValueType *)pFVar10->ManagedArray;
                if ((pFVar16 == (FValueType *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("TypedManagedArray != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                       ,0x319,L""), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  pTVar11 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar6)();
                  return pTVar11;
                }
                *(undefined1 *)&(pFVar16->GroupIndexDependency).Number = 1;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar5);
              return (TManagedArray<UE::Math::TVector<float>_> *)pFVar16;
            }
          }
        }
        break;
      }
      uVar8 = pFVar12[3].ComparisonIndex.Value;
    }
  }
  FVar2 = *param_2;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar15 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar15 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar8 = *(uint *)(lVar15 + (ulonglong)
                               (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar8) * 4);
    while (uVar8 != 0xffffffff) {
      pFVar12 = (FName *)((longlong)(int)uVar8 * 0x20 +
                         ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar12 == FVar2) {
        pFVar10 = (FValueType *)(pFVar12 + 1);
        if (pFVar12 == (FName *)0x0) {
          pFVar10 = pFVar16;
        }
        if (pFVar10 == (FValueType *)0x0) {
          return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
        }
        pFVar14 = *(FName **)pFVar10;
        pFVar12 = pFVar14 + (int)(pFVar10->GroupIndexDependency).Number;
        if (pFVar14 == pFVar12) {
          return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
        }
        do {
          if (*pFVar14 == *param_1) {
            pFVar4 = *(FManagedArrayCollection **)this;
            pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x8;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar11 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                                (pFVar4,*param_1,*param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            return pTVar11;
          }
          pFVar14 = pFVar14 + 1;
        } while (pFVar14 != pFVar12);
        return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
      }
      uVar8 = pFVar12[3].ComparisonIndex.Value;
    }
  }
  return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
}

// FindOrAddUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14db2a990

TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Chaos::ClothAsset::FClothCollection::
FindOrAddUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FClothCollection *this,FName *param_1,FName *param_2,FName *param_3)

{
  uint *puVar1;
  FName FVar2;
  FName FVar3;
  FManagedArrayCollection *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  FValueType *pFVar10;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar11;
  FName *pFVar12;
  uint *puVar13;
  FName *pFVar14;
  longlong lVar15;
  FValueType *pFVar16;
  undefined2 local_50;
  undefined2 uStack_4e;
  FConstructionParameters local_48;
  FName local_38;
  FName local_30;
  
  FVar2 = *param_2;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  pFVar16 = (FValueType *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar15 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar15 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar8 = *(uint *)(lVar15 + (ulonglong)
                               (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar8) * 4);
    while (uVar8 != 0xffffffff) {
      pFVar12 = (FName *)((longlong)(int)uVar8 * 0x20 +
                         ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar12 == FVar2) {
        pFVar10 = (FValueType *)(pFVar12 + 1);
        if (pFVar12 == (FName *)0x0) {
          pFVar10 = pFVar16;
        }
        if (pFVar10 != (FValueType *)0x0) {
          puVar13 = *(uint **)pFVar10;
          puVar1 = puVar13 + (longlong)(int)(pFVar10->GroupIndexDependency).Number * 2;
          if (puVar13 != puVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *puVar13) {
                return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
              }
              puVar13 = puVar13 + 2;
            } while (puVar13 != puVar1);
          }
        }
        break;
      }
      uVar8 = pFVar12[3].ComparisonIndex.Value;
    }
  }
  FVar2 = *param_2;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar15 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar15 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar8 = *(uint *)(lVar15 + (ulonglong)
                               (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar8) * 4);
    while (uVar8 != 0xffffffff) {
      pFVar12 = (FName *)((longlong)(int)uVar8 * 0x20 +
                         ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar12 == FVar2) {
        pFVar10 = (FValueType *)(pFVar12 + 1);
        if (pFVar12 == (FName *)0x0) {
          pFVar10 = pFVar16;
        }
        if (pFVar10 != (FValueType *)0x0) {
          pFVar14 = *(FName **)pFVar10;
          pFVar12 = pFVar14 + (int)(pFVar10->GroupIndexDependency).Number;
          if (pFVar14 == pFVar12) goto LAB_14db2aba2;
          while (*pFVar14 != *param_1) {
            pFVar14 = pFVar14 + 1;
            if (pFVar14 == pFVar12) {
LAB_14db2aba2:
              pFVar4 = *(FManagedArrayCollection **)this;
              pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x8;
              if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_48.GroupIndexDependency = *param_3;
              FVar2 = *param_2;
              FVar3 = *param_1;
              local_48.Saved = true;
              local_48.bAllowCircularDependency = false;
              local_48._10_2_ = uStack_4e;
              bVar7 = FManagedArrayCollection::HasAttribute(pFVar4,FVar3,FVar2);
              if (!bVar7) {
                FManagedArrayCollection::
                AddNewAttributeImpl<TArray<int,TSizedDefaultAllocator<32>_>_>
                          (pFVar4,FVar3,FVar2,&local_48);
              }
              local_38 = FVar3;
              local_30 = FVar2;
              pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                       ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                               *)&pFVar4->Map,(TTuple<FName,FName> *)&local_38);
              pFVar10 = (FValueType *)&pTVar9->field_0x10;
              if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0)
              {
                pFVar10 = pFVar16;
              }
              if ((pFVar10 != (FValueType *)0x0) && (pFVar10->ArrayType == FInt32ArrayType)) {
                FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
                pFVar16 = (FValueType *)pFVar10->ManagedArray;
                if ((pFVar16 == (FValueType *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("TypedManagedArray != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                       ,0x319,L""), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  pTVar11 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar6)();
                  return pTVar11;
                }
                *(undefined1 *)&(pFVar16->GroupIndexDependency).Number = 1;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar5);
              return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar16;
            }
          }
        }
        break;
      }
      uVar8 = pFVar12[3].ComparisonIndex.Value;
    }
  }
  FVar2 = *param_2;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar15 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar15 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar8 = *(uint *)(lVar15 + (ulonglong)
                               (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar8) * 4);
    while (uVar8 != 0xffffffff) {
      pFVar12 = (FName *)((longlong)(int)uVar8 * 0x20 +
                         ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar12 == FVar2) {
        pFVar10 = (FValueType *)(pFVar12 + 1);
        if (pFVar12 == (FName *)0x0) {
          pFVar10 = pFVar16;
        }
        if (pFVar10 == (FValueType *)0x0) {
          return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
        }
        pFVar14 = *(FName **)pFVar10;
        pFVar12 = pFVar14 + (int)(pFVar10->GroupIndexDependency).Number;
        if (pFVar14 == pFVar12) {
          return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
        }
        do {
          if (*pFVar14 == *param_1) {
            pFVar4 = *(FManagedArrayCollection **)this;
            pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x8;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar11 = FManagedArrayCollection::
                      FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
                                (pFVar4,*param_1,*param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            return pTVar11;
          }
          pFVar14 = pFVar14 + 1;
        } while (pFVar14 != pFVar12);
        return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
      }
      uVar8 = pFVar12[3].ComparisonIndex.Value;
    }
  }
  return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
}

// FindOrAddUserDefinedAttribute<bool> @ 14db2ad10

TManagedArray<bool> * __thiscall
UE::Chaos::ClothAsset::FClothCollection::FindOrAddUserDefinedAttribute<bool>
          (FClothCollection *this,FName *param_1,FName *param_2,FName *param_3)

{
  uint *puVar1;
  FName FVar2;
  FName FVar3;
  FManagedArrayCollection *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  TManagedArray<bool> *pTVar10;
  TManagedArray<bool> *pTVar11;
  FName *pFVar12;
  uint *puVar13;
  FName *pFVar14;
  longlong lVar15;
  undefined2 local_50;
  undefined2 uStack_4e;
  FConstructionParameters local_48;
  FName local_38;
  FName local_30;
  
  FVar2 = *param_2;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  pTVar11 = (TManagedArray<bool> *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar15 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar15 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar8 = *(uint *)(lVar15 + (ulonglong)
                               (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar8) * 4);
    while (uVar8 != 0xffffffff) {
      pFVar12 = (FName *)((longlong)(int)uVar8 * 0x20 +
                         ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar12 == FVar2) {
        pTVar10 = (TManagedArray<bool> *)(pFVar12 + 1);
        if (pFVar12 == (FName *)0x0) {
          pTVar10 = pTVar11;
        }
        if (pTVar10 != (TManagedArray<bool> *)0x0) {
          puVar13 = *(uint **)pTVar10;
          puVar1 = puVar13 + (longlong)*(int *)&pTVar10->field_0x8 * 2;
          if (puVar13 != puVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *puVar13) {
                return (TManagedArray<bool> *)0x0;
              }
              puVar13 = puVar13 + 2;
            } while (puVar13 != puVar1);
          }
        }
        break;
      }
      uVar8 = pFVar12[3].ComparisonIndex.Value;
    }
  }
  FVar2 = *param_2;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar15 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar15 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar8 = *(uint *)(lVar15 + (ulonglong)
                               (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar8) * 4);
    while (uVar8 != 0xffffffff) {
      pFVar12 = (FName *)((longlong)(int)uVar8 * 0x20 +
                         ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar12 == FVar2) {
        pTVar10 = (TManagedArray<bool> *)(pFVar12 + 1);
        if (pFVar12 == (FName *)0x0) {
          pTVar10 = pTVar11;
        }
        if (pTVar10 != (TManagedArray<bool> *)0x0) {
          pFVar14 = *(FName **)pTVar10;
          pFVar12 = pFVar14 + *(int *)&pTVar10->field_0x8;
          if (pFVar14 == pFVar12) goto LAB_14db2af22;
          while (*pFVar14 != *param_1) {
            pFVar14 = pFVar14 + 1;
            if (pFVar14 == pFVar12) {
LAB_14db2af22:
              pFVar4 = *(FManagedArrayCollection **)this;
              pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x8;
              if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_48.GroupIndexDependency = *param_3;
              FVar2 = *param_2;
              FVar3 = *param_1;
              local_48.Saved = true;
              local_48.bAllowCircularDependency = false;
              local_48._10_2_ = uStack_4e;
              bVar7 = FManagedArrayCollection::HasAttribute(pFVar4,FVar3,FVar2);
              if (!bVar7) {
                FManagedArrayCollection::AddNewAttributeImpl<bool>(pFVar4,FVar3,FVar2,&local_48);
              }
              local_38 = FVar3;
              local_30 = FVar2;
              pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                       ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                               *)&pFVar4->Map,(TTuple<FName,FName> *)&local_38);
              pTVar10 = (TManagedArray<bool> *)&pTVar9->field_0x10;
              if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0)
              {
                pTVar10 = pTVar11;
              }
              if ((pTVar10 != (TManagedArray<bool> *)0x0) && (*(char *)pTVar10 == '\x06')) {
                FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)pTVar10);
                pTVar11 = *(TManagedArray<bool> **)&pTVar10->field_0x20;
                if ((pTVar11 == (TManagedArray<bool> *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("TypedManagedArray != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                       ,0x319,L""), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  pTVar11 = (TManagedArray<bool> *)(*pcVar6)();
                  return pTVar11;
                }
                pTVar11->field_0x8 = 1;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar5);
              return pTVar11;
            }
          }
        }
        break;
      }
      uVar8 = pFVar12[3].ComparisonIndex.Value;
    }
  }
  FVar2 = *param_2;
  uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar15 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar15 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar8 = *(uint *)(lVar15 + (ulonglong)
                               (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                               FVar2.Number + uVar8) * 4);
    while (uVar8 != 0xffffffff) {
      pFVar12 = (FName *)((longlong)(int)uVar8 * 0x20 +
                         ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar12 == FVar2) {
        pTVar10 = (TManagedArray<bool> *)(pFVar12 + 1);
        if (pFVar12 == (FName *)0x0) {
          pTVar10 = pTVar11;
        }
        if (pTVar10 == (TManagedArray<bool> *)0x0) {
          return (TManagedArray<bool> *)0x0;
        }
        pFVar14 = *(FName **)pTVar10;
        pFVar12 = pFVar14 + *(int *)&pTVar10->field_0x8;
        if (pFVar14 == pFVar12) {
          return (TManagedArray<bool> *)0x0;
        }
        do {
          if (*pFVar14 == *param_1) {
            pFVar4 = *(FManagedArrayCollection **)this;
            pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x8;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar11 = FManagedArrayCollection::FindAttributeTyped<bool>(pFVar4,*param_1,*param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            return pTVar11;
          }
          pFVar14 = pFVar14 + 1;
        } while (pFVar14 != pFVar12);
        return (TManagedArray<bool> *)0x0;
      }
      uVar8 = pFVar12[3].ComparisonIndex.Value;
    }
  }
  return (TManagedArray<bool> *)0x0;
}

// GetUserDefinedAttribute<int> @ 14db2db80

TManagedArray<int> * __thiscall
UE::Chaos::ClothAsset::FClothCollection::GetUserDefinedAttribute<int>
          (FClothCollection *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  FManagedArrayCollection *this_00;
  TReferenceControllerBase<1> *pTVar2;
  uint uVar3;
  TManagedArray<int> *pTVar4;
  FName *pFVar5;
  FName *pFVar6;
  FName FVar7;
  longlong lVar8;
  FName *pFVar9;
  
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar9 = (FName *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar8 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar8 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar8 + (ulonglong)
                              (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar6 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar6 == FVar1) {
        pFVar5 = pFVar6 + 1;
        if (pFVar6 == (FName *)0x0) {
          pFVar5 = pFVar9;
        }
        if (pFVar5 != (FName *)0x0) {
          FVar7 = *pFVar5;
          FVar1 = (FName)((longlong)FVar7 + (longlong)(int)pFVar5[1].ComparisonIndex.Value * 8);
          if (FVar7 != FVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *(uint *)FVar7) {
                return (TManagedArray<int> *)0x0;
              }
              FVar7 = (FName)((longlong)FVar7 + 8);
            } while (FVar7 != FVar1);
          }
        }
        break;
      }
      uVar3 = pFVar6[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar8 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar8 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar8 + (ulonglong)
                              (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar6 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar6 == FVar1) {
        pFVar5 = pFVar6 + 1;
        if (pFVar6 == (FName *)0x0) {
          pFVar5 = pFVar9;
        }
        if (pFVar5 != (FName *)0x0) {
          FVar7 = *pFVar5;
          FVar1 = (FName)((longlong)FVar7 + (longlong)(int)pFVar5[1].ComparisonIndex.Value * 8);
          if (FVar7 == FVar1) goto LAB_14db2dd85;
          goto LAB_14db2dd73;
        }
        break;
      }
      uVar3 = pFVar6[3].ComparisonIndex.Value;
    }
  }
LAB_14db2dccb:
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar8 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar8 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar8 + (ulonglong)
                              (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar6 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar6 == FVar1) {
        pFVar5 = pFVar6 + 1;
        if (pFVar6 == (FName *)0x0) {
          pFVar5 = pFVar9;
        }
        if (pFVar5 == (FName *)0x0) {
          return (TManagedArray<int> *)0x0;
        }
        FVar7 = *pFVar5;
        FVar1 = (FName)((longlong)FVar7 + (longlong)(int)pFVar5[1].ComparisonIndex.Value * 8);
        if (FVar7 == FVar1) {
          return (TManagedArray<int> *)0x0;
        }
        while (*(FName *)FVar7 != *param_1) {
          FVar7 = (FName)((longlong)FVar7 + 8);
          if (FVar7 == FVar1) {
            return (TManagedArray<int> *)0x0;
          }
        }
        goto LAB_14db2dd85;
      }
      uVar3 = pFVar6[3].ComparisonIndex.Value;
    }
  }
  return (TManagedArray<int> *)0x0;
  while (FVar7 = (FName)((longlong)FVar7 + 8), FVar7 != FVar1) {
LAB_14db2dd73:
    if (*(FName *)FVar7 == *param_1) goto LAB_14db2dccb;
  }
LAB_14db2dd85:
  this_00 = *(FManagedArrayCollection **)this;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>(this_00,*param_1,*param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return pTVar4;
}

// GetUserDefinedAttribute<float> @ 14db2e220

TManagedArray<float> * __thiscall
UE::Chaos::ClothAsset::FClothCollection::GetUserDefinedAttribute<float>
          (FClothCollection *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  FManagedArrayCollection *this_00;
  TReferenceControllerBase<1> *pTVar2;
  uint uVar3;
  TManagedArray<float> *pTVar4;
  FName *pFVar5;
  FName *pFVar6;
  FName FVar7;
  longlong lVar8;
  FName *pFVar9;
  
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar9 = (FName *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar8 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar8 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar8 + (ulonglong)
                              (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar6 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar6 == FVar1) {
        pFVar5 = pFVar6 + 1;
        if (pFVar6 == (FName *)0x0) {
          pFVar5 = pFVar9;
        }
        if (pFVar5 != (FName *)0x0) {
          FVar7 = *pFVar5;
          FVar1 = (FName)((longlong)FVar7 + (longlong)(int)pFVar5[1].ComparisonIndex.Value * 8);
          if (FVar7 != FVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *(uint *)FVar7) {
                return (TManagedArray<float> *)0x0;
              }
              FVar7 = (FName)((longlong)FVar7 + 8);
            } while (FVar7 != FVar1);
          }
        }
        break;
      }
      uVar3 = pFVar6[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar8 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar8 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar8 + (ulonglong)
                              (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar6 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar6 == FVar1) {
        pFVar5 = pFVar6 + 1;
        if (pFVar6 == (FName *)0x0) {
          pFVar5 = pFVar9;
        }
        if (pFVar5 != (FName *)0x0) {
          FVar7 = *pFVar5;
          FVar1 = (FName)((longlong)FVar7 + (longlong)(int)pFVar5[1].ComparisonIndex.Value * 8);
          if (FVar7 == FVar1) goto LAB_14db2e425;
          goto LAB_14db2e413;
        }
        break;
      }
      uVar3 = pFVar6[3].ComparisonIndex.Value;
    }
  }
LAB_14db2e36b:
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar8 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar8 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar8 + (ulonglong)
                              (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar6 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar6 == FVar1) {
        pFVar5 = pFVar6 + 1;
        if (pFVar6 == (FName *)0x0) {
          pFVar5 = pFVar9;
        }
        if (pFVar5 == (FName *)0x0) {
          return (TManagedArray<float> *)0x0;
        }
        FVar7 = *pFVar5;
        FVar1 = (FName)((longlong)FVar7 + (longlong)(int)pFVar5[1].ComparisonIndex.Value * 8);
        if (FVar7 == FVar1) {
          return (TManagedArray<float> *)0x0;
        }
        while (*(FName *)FVar7 != *param_1) {
          FVar7 = (FName)((longlong)FVar7 + 8);
          if (FVar7 == FVar1) {
            return (TManagedArray<float> *)0x0;
          }
        }
        goto LAB_14db2e425;
      }
      uVar3 = pFVar6[3].ComparisonIndex.Value;
    }
  }
  return (TManagedArray<float> *)0x0;
  while (FVar7 = (FName)((longlong)FVar7 + 8), FVar7 != FVar1) {
LAB_14db2e413:
    if (*(FName *)FVar7 == *param_1) goto LAB_14db2e36b;
  }
LAB_14db2e425:
  this_00 = *(FManagedArrayCollection **)this;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<float>(this_00,*param_1,*param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return pTVar4;
}

// GetUserDefinedAttribute<UE::Math::TVector<float>_> @ 14db2e8c0

TManagedArray<UE::Math::TVector<float>_> * __thiscall
UE::Chaos::ClothAsset::FClothCollection::GetUserDefinedAttribute<UE::Math::TVector<float>_>
          (FClothCollection *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  FManagedArrayCollection *this_00;
  TReferenceControllerBase<1> *pTVar2;
  uint uVar3;
  TManagedArray<UE::Math::TVector<float>_> *pTVar4;
  FName *pFVar5;
  FName *pFVar6;
  FName FVar7;
  longlong lVar8;
  FName *pFVar9;
  
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar9 = (FName *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar8 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar8 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar8 + (ulonglong)
                              (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar6 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar6 == FVar1) {
        pFVar5 = pFVar6 + 1;
        if (pFVar6 == (FName *)0x0) {
          pFVar5 = pFVar9;
        }
        if (pFVar5 != (FName *)0x0) {
          FVar7 = *pFVar5;
          FVar1 = (FName)((longlong)FVar7 + (longlong)(int)pFVar5[1].ComparisonIndex.Value * 8);
          if (FVar7 != FVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *(uint *)FVar7) {
                return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
              }
              FVar7 = (FName)((longlong)FVar7 + 8);
            } while (FVar7 != FVar1);
          }
        }
        break;
      }
      uVar3 = pFVar6[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar8 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar8 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar8 + (ulonglong)
                              (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar6 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar6 == FVar1) {
        pFVar5 = pFVar6 + 1;
        if (pFVar6 == (FName *)0x0) {
          pFVar5 = pFVar9;
        }
        if (pFVar5 != (FName *)0x0) {
          FVar7 = *pFVar5;
          FVar1 = (FName)((longlong)FVar7 + (longlong)(int)pFVar5[1].ComparisonIndex.Value * 8);
          if (FVar7 == FVar1) goto LAB_14db2eac5;
          goto LAB_14db2eab3;
        }
        break;
      }
      uVar3 = pFVar6[3].ComparisonIndex.Value;
    }
  }
LAB_14db2ea0b:
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar8 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar8 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar8 + (ulonglong)
                              (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar6 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar6 == FVar1) {
        pFVar5 = pFVar6 + 1;
        if (pFVar6 == (FName *)0x0) {
          pFVar5 = pFVar9;
        }
        if (pFVar5 == (FName *)0x0) {
          return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
        }
        FVar7 = *pFVar5;
        FVar1 = (FName)((longlong)FVar7 + (longlong)(int)pFVar5[1].ComparisonIndex.Value * 8);
        if (FVar7 == FVar1) {
          return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
        }
        while (*(FName *)FVar7 != *param_1) {
          FVar7 = (FName)((longlong)FVar7 + 8);
          if (FVar7 == FVar1) {
            return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
          }
        }
        goto LAB_14db2eac5;
      }
      uVar3 = pFVar6[3].ComparisonIndex.Value;
    }
  }
  return (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  while (FVar7 = (FName)((longlong)FVar7 + 8), FVar7 != FVar1) {
LAB_14db2eab3:
    if (*(FName *)FVar7 == *param_1) goto LAB_14db2ea0b;
  }
LAB_14db2eac5:
  this_00 = *(FManagedArrayCollection **)this;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                     (this_00,*param_1,*param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return pTVar4;
}

// GetUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14db2ef60

TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
UE::Chaos::ClothAsset::FClothCollection::
GetUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FClothCollection *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  FManagedArrayCollection *this_00;
  TReferenceControllerBase<1> *pTVar2;
  uint uVar3;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  FName *pFVar5;
  FName *pFVar6;
  FName FVar7;
  longlong lVar8;
  FName *pFVar9;
  
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar9 = (FName *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar8 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar8 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar8 + (ulonglong)
                              (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar6 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar6 == FVar1) {
        pFVar5 = pFVar6 + 1;
        if (pFVar6 == (FName *)0x0) {
          pFVar5 = pFVar9;
        }
        if (pFVar5 != (FName *)0x0) {
          FVar7 = *pFVar5;
          FVar1 = (FName)((longlong)FVar7 + (longlong)(int)pFVar5[1].ComparisonIndex.Value * 8);
          if (FVar7 != FVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *(uint *)FVar7) {
                return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
              }
              FVar7 = (FName)((longlong)FVar7 + 8);
            } while (FVar7 != FVar1);
          }
        }
        break;
      }
      uVar3 = pFVar6[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar8 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar8 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar8 + (ulonglong)
                              (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar6 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar6 == FVar1) {
        pFVar5 = pFVar6 + 1;
        if (pFVar6 == (FName *)0x0) {
          pFVar5 = pFVar9;
        }
        if (pFVar5 != (FName *)0x0) {
          FVar7 = *pFVar5;
          FVar1 = (FName)((longlong)FVar7 + (longlong)(int)pFVar5[1].ComparisonIndex.Value * 8);
          if (FVar7 == FVar1) goto LAB_14db2f165;
          goto LAB_14db2f153;
        }
        break;
      }
      uVar3 = pFVar6[3].ComparisonIndex.Value;
    }
  }
LAB_14db2f0ab:
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar8 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar8 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar8 + (ulonglong)
                              (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar6 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar6 == FVar1) {
        pFVar5 = pFVar6 + 1;
        if (pFVar6 == (FName *)0x0) {
          pFVar5 = pFVar9;
        }
        if (pFVar5 == (FName *)0x0) {
          return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
        }
        FVar7 = *pFVar5;
        FVar1 = (FName)((longlong)FVar7 + (longlong)(int)pFVar5[1].ComparisonIndex.Value * 8);
        if (FVar7 == FVar1) {
          return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
        }
        while (*(FName *)FVar7 != *param_1) {
          FVar7 = (FName)((longlong)FVar7 + 8);
          if (FVar7 == FVar1) {
            return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
          }
        }
        goto LAB_14db2f165;
      }
      uVar3 = pFVar6[3].ComparisonIndex.Value;
    }
  }
  return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  while (FVar7 = (FName)((longlong)FVar7 + 8), FVar7 != FVar1) {
LAB_14db2f153:
    if (*(FName *)FVar7 == *param_1) goto LAB_14db2f0ab;
  }
LAB_14db2f165:
  this_00 = *(FManagedArrayCollection **)this;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
                     (this_00,*param_1,*param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return pTVar4;
}

// GetUserDefinedAttribute<bool> @ 14db2f600

TManagedArray<bool> * __thiscall
UE::Chaos::ClothAsset::FClothCollection::GetUserDefinedAttribute<bool>
          (FClothCollection *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  FManagedArrayCollection *this_00;
  TReferenceControllerBase<1> *pTVar2;
  uint uVar3;
  TManagedArray<bool> *pTVar4;
  FName *pFVar5;
  FName *pFVar6;
  FName FVar7;
  longlong lVar8;
  FName *pFVar9;
  
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar9 = (FName *)0x0;
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar8 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar8 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar8 + (ulonglong)
                              (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar6 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar6 == FVar1) {
        pFVar5 = pFVar6 + 1;
        if (pFVar6 == (FName *)0x0) {
          pFVar5 = pFVar9;
        }
        if (pFVar5 != (FName *)0x0) {
          FVar7 = *pFVar5;
          FVar1 = (FName)((longlong)FVar7 + (longlong)(int)pFVar5[1].ComparisonIndex.Value * 8);
          if (FVar7 != FVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *(uint *)FVar7) {
                return (TManagedArray<bool> *)0x0;
              }
              FVar7 = (FName)((longlong)FVar7 + 8);
            } while (FVar7 != FVar1);
          }
        }
        break;
      }
      uVar3 = pFVar6[3].ComparisonIndex.Value;
    }
  }
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    lVar8 = 0x155376318;
    if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
      lVar8 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar8 + (ulonglong)
                              (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar6 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::FixedAttributeNamesMap._0_8_);
      if (*pFVar6 == FVar1) {
        pFVar5 = pFVar6 + 1;
        if (pFVar6 == (FName *)0x0) {
          pFVar5 = pFVar9;
        }
        if (pFVar5 != (FName *)0x0) {
          FVar7 = *pFVar5;
          FVar1 = (FName)((longlong)FVar7 + (longlong)(int)pFVar5[1].ComparisonIndex.Value * 8);
          if (FVar7 == FVar1) goto LAB_14db2f805;
          goto LAB_14db2f7f3;
        }
        break;
      }
      uVar3 = pFVar6[3].ComparisonIndex.Value;
    }
  }
LAB_14db2f74b:
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::UserAccessibleAttributeNamesMap._8_4_ !=
      ClothAsset::Private::UserAccessibleAttributeNamesMap._52_4_) {
    lVar8 = 0x1553763b8;
    if (ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_ != 0) {
      lVar8 = ClothAsset::Private::UserAccessibleAttributeNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar8 + (ulonglong)
                              (ClothAsset::Private::UserAccessibleAttributeNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar6 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::UserAccessibleAttributeNamesMap._0_8_);
      if (*pFVar6 == FVar1) {
        pFVar5 = pFVar6 + 1;
        if (pFVar6 == (FName *)0x0) {
          pFVar5 = pFVar9;
        }
        if (pFVar5 == (FName *)0x0) {
          return (TManagedArray<bool> *)0x0;
        }
        FVar7 = *pFVar5;
        FVar1 = (FName)((longlong)FVar7 + (longlong)(int)pFVar5[1].ComparisonIndex.Value * 8);
        if (FVar7 == FVar1) {
          return (TManagedArray<bool> *)0x0;
        }
        while (*(FName *)FVar7 != *param_1) {
          FVar7 = (FName)((longlong)FVar7 + 8);
          if (FVar7 == FVar1) {
            return (TManagedArray<bool> *)0x0;
          }
        }
        goto LAB_14db2f805;
      }
      uVar3 = pFVar6[3].ComparisonIndex.Value;
    }
  }
  return (TManagedArray<bool> *)0x0;
  while (FVar7 = (FName)((longlong)FVar7 + 8), FVar7 != FVar1) {
LAB_14db2f7f3:
    if (*(FName *)FVar7 == *param_1) goto LAB_14db2f74b;
  }
LAB_14db2f805:
  this_00 = *(FManagedArrayCollection **)this;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<bool>(this_00,*param_1,*param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return pTVar4;
}

// FClothCollection @ 14db3a960

FClothCollection * __thiscall
UE::Chaos::ClothAsset::FClothCollection::FClothCollection
          (FClothCollection *this,TSharedRef<FManagedArrayCollection,1> *param_1)

{
  FConstClothCollection::FConstClothCollection<FManagedArrayCollection>
            ((FConstClothCollection *)this,param_1,(TProtectedInit)0x0);
  return this;
}

// operator() @ 14db3c330

void __thiscall
`UE::Chaos::ClothAsset::FClothCollection::PostSerialize'::__l5::<lambda_1>::operator()
          (void *this,TManagedArray<FString> *param_1,TManagedArray<FSoftObjectPath> *param_2)

{
  FName *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  FSoftObjectPath local_48;
  
  pcVar2 = *(code **)(*(longlong *)param_2 + 0x60);
  iVar5 = (**(code **)(*(longlong *)param_1 + 0x60))(param_1);
  iVar6 = (*pcVar2)(param_2);
  if ((iVar5 != iVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StringArray.Num() == SoftObjectPathArray.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                         ,0x2c3,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar9 = 0;
  iVar5 = (**(code **)(*(longlong *)param_1 + 0x60))(param_1);
  if (0 < iVar5) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      uVar11 = ~uVar9 >> 0x1f;
      uVar7 = 0;
      uVar8 = uVar7;
      if ((int)uVar9 < *(int *)&param_1->field_0x18) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_48.AssetPath.PackageName.Number = 0;
      local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_48.AssetPath.AssetName.Number = 0;
      local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.SubPathString.Data.ArrayNum = 0;
      local_48.SubPathString.Data.ArrayMax = 0;
      local_58.DataPtr = *(wchar_t **)(*(longlong *)&param_1->field_0x10 + lVar13);
      iVar5 = *(int *)(*(longlong *)&param_1->field_0x10 + 8 + lVar13);
      uVar8 = iVar5 - 1;
      if (iVar5 == 0) {
        uVar8 = uVar7;
      }
      local_58._12_4_ = uStack_5c;
      local_58.Size = uVar8;
      FSoftObjectPath::SetPath(&local_48,&local_58);
      if ((int)uVar9 < *(int *)&param_2->field_0x18) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar3 = *(longlong *)&param_2->field_0x10;
      pFVar1 = (FName *)(lVar12 + lVar3);
      *pFVar1 = local_48.AssetPath.PackageName;
      pFVar1[1] = local_48.AssetPath.AssetName;
      puVar10 = (undefined8 *)(lVar3 + 0x10 + lVar12);
      if ((FUtf8String *)puVar10 != &local_48.SubPathString) {
        if ((void *)*puVar10 != (void *)0x0) {
          FMemory::Free((void *)*puVar10);
        }
        *puVar10 = local_48.SubPathString.Data.AllocatorInstance.Data;
        local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(puVar10 + 1) = local_48.SubPathString.Data.ArrayNum;
        *(int *)((longlong)puVar10 + 0xc) = local_48.SubPathString.Data.ArrayMax;
        local_48.SubPathString.Data.ArrayNum = 0;
        local_48.SubPathString.Data.ArrayMax = 0;
      }
      if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
      }
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&param_2->field_0x18) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FSoftObjectPath::PreSavePath
                ((FSoftObjectPath *)(*(longlong *)&param_2->field_0x10 + lVar12),(bool *)0x0);
      uVar9 = uVar9 + 1;
      lVar13 = lVar13 + 0x10;
      lVar12 = lVar12 + 0x20;
      iVar5 = (**(code **)(*(longlong *)param_1 + 0x60))(param_1);
    } while ((int)uVar9 < iVar5);
  }
  return;
}

// AddSimAccessoryMeshBoneIndices @ 14db3de10

FName __thiscall
UE::Chaos::ClothAsset::FClothCollection::AddSimAccessoryMeshBoneIndices(FClothCollection *this)

{
  longlong *plVar1;
  int iVar2;
  FManagedArrayCollection *this_00;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  int iVar8;
  FName FVar9;
  FName in_RDX;
  longlong *plVar10;
  int iVar11;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  TReferenceControllerBase<1> *local_res18;
  undefined2 local_50;
  undefined2 uStack_4e;
  FConstructionParameters local_48;
  
  local_res18 = *(TReferenceControllerBase<1> **)&this->field_0x8;
  this_00 = *(FManagedArrayCollection **)this;
  if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_res18->SharedReferenceCount = (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
    UNLOCK();
  }
  lVar3 = *(longlong *)&this->field_0x278;
  iVar11 = 0;
  if (lVar3 != 0) {
    plVar10 = *(longlong **)(lVar3 + 0x10);
    iVar2 = *(int *)(lVar3 + 0x18);
    plVar1 = plVar10 + iVar2;
    while( true ) {
      if (*(int *)(lVar3 + 0x18) != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (plVar10 == plVar1) break;
      lVar4 = *plVar10;
      iVar8 = iVar11;
      if (lVar4 != 0) {
        if ((uint)lVar4 ==
            ClothCollectionAttribute::SimAccessoryMeshBoneIndicesPrefix.ComparisonIndex.Value) {
          iVar8 = (int)((ulonglong)lVar4 >> 0x20);
          if (iVar8 < iVar11) {
            iVar8 = iVar11;
          }
        }
        else {
          bVar7 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3774622486147104534>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                             ,0xea,"NamesHaveMatchingPrefix(ExistingAttr, AttributePrefix)");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            FVar9 = (FName)(*pcVar5)();
            return FVar9;
          }
        }
      }
      iVar11 = iVar8;
      plVar10 = plVar10 + 1;
    }
  }
  pTVar6 = local_res18;
  *(uint *)in_RDX =
       ClothCollectionAttribute::SimAccessoryMeshBoneIndicesPrefix.ComparisonIndex.Value;
  *(uint *)((longlong)in_RDX + 4) = iVar11 + 1;
  bVar7 = FManagedArrayCollection::HasAttribute
                    (this_00,*(FName *)in_RDX,ClothCollectionGroup::SimVertices3D);
  if ((bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Collection->HasAttribute(NewAttributeName, Group)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                         ,0xf2,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    FVar9 = (FName)(*pcVar5)();
    return FVar9;
  }
  local_res10 = 0;
  local_48.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_48.GroupIndexDependency.Number = 0;
  local_48.Saved = true;
  local_48.bAllowCircularDependency = false;
  local_48._10_2_ = uStack_4e;
  FManagedArrayCollection::AddAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
            (this_00,*(FName *)in_RDX,ClothCollectionGroup::SimVertices3D,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return in_RDX;
}

// AddSimAccessoryMeshBoneWeights @ 14db3dfc0

FName __thiscall
UE::Chaos::ClothAsset::FClothCollection::AddSimAccessoryMeshBoneWeights(FClothCollection *this)

{
  longlong *plVar1;
  int iVar2;
  FManagedArrayCollection *this_00;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  int iVar8;
  FName FVar9;
  FName in_RDX;
  longlong *plVar10;
  int iVar11;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  TReferenceControllerBase<1> *local_res18;
  undefined2 local_50;
  undefined2 uStack_4e;
  FConstructionParameters local_48;
  
  local_res18 = *(TReferenceControllerBase<1> **)&this->field_0x8;
  this_00 = *(FManagedArrayCollection **)this;
  if (local_res18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_res18->SharedReferenceCount = (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
    UNLOCK();
  }
  lVar3 = *(longlong *)&this->field_0x280;
  iVar11 = 0;
  if (lVar3 != 0) {
    plVar10 = *(longlong **)(lVar3 + 0x10);
    iVar2 = *(int *)(lVar3 + 0x18);
    plVar1 = plVar10 + iVar2;
    while( true ) {
      if (*(int *)(lVar3 + 0x18) != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (plVar10 == plVar1) break;
      lVar4 = *plVar10;
      iVar8 = iVar11;
      if (lVar4 != 0) {
        if ((uint)lVar4 ==
            ClothCollectionAttribute::SimAccessoryMeshBoneWeightsPrefix.ComparisonIndex.Value) {
          iVar8 = (int)((ulonglong)lVar4 >> 0x20);
          if (iVar8 < iVar11) {
            iVar8 = iVar11;
          }
        }
        else {
          bVar7 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3774622486147104534>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                             ,0xea,"NamesHaveMatchingPrefix(ExistingAttr, AttributePrefix)");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            FVar9 = (FName)(*pcVar5)();
            return FVar9;
          }
        }
      }
      iVar11 = iVar8;
      plVar10 = plVar10 + 1;
    }
  }
  pTVar6 = local_res18;
  *(uint *)in_RDX =
       ClothCollectionAttribute::SimAccessoryMeshBoneWeightsPrefix.ComparisonIndex.Value;
  *(uint *)((longlong)in_RDX + 4) = iVar11 + 1;
  bVar7 = FManagedArrayCollection::HasAttribute
                    (this_00,*(FName *)in_RDX,ClothCollectionGroup::SimVertices3D);
  if ((bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Collection->HasAttribute(NewAttributeName, Group)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                         ,0xf2,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    FVar9 = (FName)(*pcVar5)();
    return FVar9;
  }
  local_res10 = 0;
  local_48.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_48.GroupIndexDependency.Number = 0;
  local_48.Saved = true;
  local_48.bAllowCircularDependency = false;
  local_48._10_2_ = uStack_4e;
  FManagedArrayCollection::AddAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
            (this_00,*(FName *)in_RDX,ClothCollectionGroup::SimVertices3D,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return in_RDX;
}

// AddSimAccessoryMeshNormal @ 14db3e170

FName __thiscall
UE::Chaos::ClothAsset::FClothCollection::AddSimAccessoryMeshNormal(FClothCollection *this)

{
  int *piVar1;
  FName in_RDX;
  
  if (*(longlong *)&this->field_0x8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x8 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  ClothAsset::Private::AddUniquePrefixedAttribute<UE::Math::TVector<float>_>
            ((FName *)in_RDX,&ClothCollectionGroup::SimVertices3D,
             (TManagedArray<FName> *)&ClothCollectionAttribute::SimAccessoryMeshNormalPrefix,
             *(TSharedRef<FManagedArrayCollection,1> **)&this->field_0x270);
  return in_RDX;
}

// AddSimAccessoryMeshPosition3D @ 14db3e1d0

FName __thiscall
UE::Chaos::ClothAsset::FClothCollection::AddSimAccessoryMeshPosition3D(FClothCollection *this)

{
  int *piVar1;
  FName in_RDX;
  
  if (*(longlong *)&this->field_0x8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x8 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  ClothAsset::Private::AddUniquePrefixedAttribute<UE::Math::TVector<float>_>
            ((FName *)in_RDX,&ClothCollectionGroup::SimVertices3D,
             (TManagedArray<FName> *)&ClothCollectionAttribute::SimAccessoryMeshPosition3DPrefix,
             *(TSharedRef<FManagedArrayCollection,1> **)&this->field_0x268);
  return in_RDX;
}

// DefineSchema @ 14db52350

void __thiscall
UE::Chaos::ClothAsset::FClothCollection::DefineSchema
          (FClothCollection *this,EClothCollectionExtendedSchemas param_1)

{
  FManagedArrayCollection *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  FManagedArrayBase *pFVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  FName FVar15;
  bool bVar16;
  TManagedArray<FString> *pTVar17;
  TManagedArray<int> *pTVar18;
  TManagedArray<UE::Math::TVector<float>_> *pTVar19;
  TManagedArray<FName> *pTVar20;
  TManagedArray<FSoftObjectPath> *pTVar21;
  TSharedRef<FManagedArrayCollection,1> *pTVar22;
  TManagedArray<float> *pTVar23;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar24;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar25;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar26;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar27;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar28;
  FValueType *pFVar29;
  TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> *pTVar30;
  TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> *pTVar31;
  undefined2 local_e00;
  undefined2 uStack_dfe;
  undefined2 local_df0;
  undefined2 uStack_dee;
  undefined2 local_de0;
  undefined2 uStack_dde;
  undefined2 local_dd0;
  undefined2 uStack_dce;
  undefined2 local_dc0;
  undefined2 uStack_dbe;
  undefined2 local_da0;
  undefined2 uStack_d9e;
  undefined2 local_d90;
  undefined2 uStack_d8e;
  undefined2 local_d84;
  undefined2 uStack_d82;
  undefined2 local_d78;
  undefined2 uStack_d76;
  undefined2 local_d6c;
  undefined2 uStack_d6a;
  undefined2 local_d60;
  undefined2 uStack_d5e;
  undefined2 local_d54;
  undefined2 uStack_d52;
  undefined2 local_d48;
  undefined2 uStack_d46;
  undefined2 local_d3c;
  undefined2 uStack_d3a;
  undefined2 local_d30;
  undefined2 uStack_d2e;
  undefined2 local_d24;
  undefined2 uStack_d22;
  undefined2 local_d18;
  undefined2 uStack_d16;
  undefined2 local_d0c;
  undefined2 uStack_d0a;
  undefined2 local_d00;
  undefined2 uStack_cfe;
  undefined2 local_cf4;
  undefined2 uStack_cf2;
  undefined2 local_ce8;
  undefined2 uStack_ce6;
  undefined2 local_cdc;
  undefined2 uStack_cda;
  undefined2 local_cd0;
  undefined2 uStack_cce;
  undefined2 local_cc0;
  undefined2 uStack_cbe;
  undefined2 local_cb0;
  undefined2 uStack_cae;
  undefined2 local_ca4;
  undefined2 uStack_ca2;
  undefined2 local_c98;
  undefined2 uStack_c96;
  undefined2 local_c8c;
  undefined2 uStack_c8a;
  undefined2 local_c80;
  undefined2 uStack_c7e;
  undefined2 local_c74;
  undefined2 uStack_c72;
  undefined2 local_c68;
  undefined2 uStack_c66;
  undefined2 local_c5c;
  undefined2 uStack_c5a;
  undefined2 local_c50;
  undefined2 uStack_c4e;
  undefined2 local_c44;
  undefined2 uStack_c42;
  undefined2 local_c38;
  undefined2 uStack_c36;
  FConstructionParameters local_a28;
  FConstructionParameters local_a18;
  FConstructionParameters local_a08;
  FConstructionParameters local_9f8;
  FConstructionParameters local_9e8;
  FConstructionParameters local_9d8;
  FConstructionParameters local_9c8;
  FConstructionParameters local_9b8;
  FConstructionParameters local_9a8;
  FConstructionParameters local_998;
  FConstructionParameters local_988;
  FConstructionParameters local_978;
  FConstructionParameters local_968;
  FConstructionParameters local_958;
  FConstructionParameters local_948;
  FConstructionParameters local_938;
  FConstructionParameters local_928;
  FConstructionParameters local_918;
  FConstructionParameters local_908;
  FConstructionParameters local_8f8;
  FConstructionParameters local_8e8;
  FConstructionParameters local_8d8;
  FConstructionParameters local_8c8;
  FConstructionParameters local_8b8;
  FConstructionParameters local_8a8;
  FConstructionParameters local_898;
  FConstructionParameters local_888;
  FConstructionParameters local_878;
  FConstructionParameters local_868;
  FConstructionParameters local_858;
  FConstructionParameters local_848;
  FConstructionParameters local_838;
  FConstructionParameters local_828;
  FConstructionParameters local_818;
  FConstructionParameters local_808;
  FConstructionParameters local_7f8;
  FConstructionParameters local_7e8;
  FConstructionParameters local_7d8;
  FConstructionParameters local_7c8;
  FConstructionParameters local_7b8;
  FConstructionParameters local_7a8;
  FConstructionParameters local_798;
  FConstructionParameters local_788;
  FConstructionParameters local_778;
  FConstructionParameters local_768;
  FConstructionParameters local_758;
  FConstructionParameters local_748;
  FConstructionParameters local_738;
  FConstructionParameters local_728;
  FConstructionParameters local_718;
  FConstructionParameters local_708;
  FConstructionParameters local_6f8;
  FConstructionParameters local_6e8;
  FConstructionParameters local_6d8;
  FConstructionParameters local_6c8;
  FConstructionParameters local_6b8;
  FConstructionParameters local_6a8;
  FConstructionParameters local_698;
  FConstructionParameters local_688;
  FConstructionParameters local_678;
  FConstructionParameters local_668;
  FConstructionParameters local_658;
  FConstructionParameters local_648;
  FConstructionParameters local_638;
  FConstructionParameters local_628;
  FConstructionParameters local_618;
  FConstructionParameters local_608;
  FConstructionParameters local_5f8;
  FConstructionParameters local_5e8;
  FConstructionParameters local_5d8;
  FConstructionParameters local_5c8;
  FConstructionParameters local_5b8;
  FConstructionParameters local_5a8;
  FConstructionParameters local_598;
  FConstructionParameters local_588;
  FConstructionParameters local_578;
  FConstructionParameters local_568;
  FConstructionParameters local_558;
  FConstructionParameters local_548;
  FConstructionParameters local_538;
  FConstructionParameters local_528;
  FConstructionParameters local_518;
  FConstructionParameters local_508;
  FConstructionParameters local_4f8;
  FConstructionParameters local_4e8;
  FConstructionParameters local_4d8;
  FConstructionParameters local_4c8;
  FConstructionParameters local_4b8;
  FName local_4a8;
  FName local_4a0;
  FName local_498;
  FName local_490;
  FName local_488;
  FName local_480;
  TSharedRef<FManagedArrayCollection,1> local_478;
  TSharedRef<FManagedArrayCollection,1> local_468;
  TSharedRef<FManagedArrayCollection,1> local_458;
  TSharedRef<FManagedArrayCollection,1> local_448;
  TSharedRef<FManagedArrayCollection,1> local_438;
  TSharedRef<FManagedArrayCollection,1> local_428;
  TSharedRef<FManagedArrayCollection,1> local_418;
  TSharedRef<FManagedArrayCollection,1> local_408;
  TSharedRef<FManagedArrayCollection,1> local_3f8;
  TSharedRef<FManagedArrayCollection,1> local_3e8;
  TSharedRef<FManagedArrayCollection,1> local_3d8;
  TSharedRef<FManagedArrayCollection,1> local_3c8;
  TSharedRef<FManagedArrayCollection,1> local_3b8;
  TSharedRef<FManagedArrayCollection,1> local_3a8;
  TSharedRef<FManagedArrayCollection,1> local_398;
  TSharedRef<FManagedArrayCollection,1> local_388;
  TSharedRef<FManagedArrayCollection,1> local_378;
  TSharedRef<FManagedArrayCollection,1> local_368;
  TSharedRef<FManagedArrayCollection,1> local_358;
  TSharedRef<FManagedArrayCollection,1> local_348;
  TSharedRef<FManagedArrayCollection,1> local_338;
  TSharedRef<FManagedArrayCollection,1> local_328;
  TSharedRef<FManagedArrayCollection,1> local_318;
  TSharedRef<FManagedArrayCollection,1> local_308;
  TSharedRef<FManagedArrayCollection,1> local_2f8;
  TSharedRef<FManagedArrayCollection,1> local_2e8;
  TSharedRef<FManagedArrayCollection,1> local_2d8;
  TSharedRef<FManagedArrayCollection,1> local_2c8;
  TSharedRef<FManagedArrayCollection,1> local_2b8;
  TSharedRef<FManagedArrayCollection,1> local_2a8;
  TSharedRef<FManagedArrayCollection,1> local_298;
  TSharedRef<FManagedArrayCollection,1> local_288;
  TSharedRef<FManagedArrayCollection,1> local_278;
  TSharedRef<FManagedArrayCollection,1> local_268;
  TSharedRef<FManagedArrayCollection,1> local_258;
  TSharedRef<FManagedArrayCollection,1> local_248;
  TSharedRef<FManagedArrayCollection,1> local_238;
  TSharedRef<FManagedArrayCollection,1> local_228;
  TSharedRef<FManagedArrayCollection,1> local_218;
  TSharedRef<FManagedArrayCollection,1> local_208;
  TSharedRef<FManagedArrayCollection,1> local_1f8;
  undefined2 local_1de;
  undefined2 local_1d2;
  undefined2 local_1c6;
  undefined2 local_1ba;
  undefined2 local_1ae;
  undefined2 local_1a2;
  undefined2 local_196;
  undefined2 local_18a;
  undefined2 local_17e;
  undefined2 local_172;
  undefined2 local_166;
  undefined2 local_15a;
  undefined2 local_14e;
  undefined2 local_142;
  undefined2 local_136;
  undefined2 local_12a;
  undefined2 local_11e;
  undefined2 local_112;
  undefined2 local_106;
  undefined2 local_fa;
  undefined2 local_ee;
  undefined2 local_e2;
  undefined2 local_d6;
  undefined2 local_ca;
  undefined2 local_be;
  undefined2 local_b2;
  undefined2 local_a6;
  undefined2 local_9a;
  undefined2 local_8e;
  undefined2 local_82;
  undefined2 local_76;
  undefined2 local_6a;
  undefined2 local_5e;
  undefined2 local_52;
  undefined2 local_46;
  
  FVar14 = ClothCollectionGroup::SimMorphTargetVertices;
  FVar13 = ClothCollectionGroup::Fabrics;
  FVar12 = ClothCollectionGroup::RenderVertices;
  FVar11 = ClothCollectionGroup::RenderFaces;
  FVar10 = ClothCollectionGroup::SimVertices3D;
  FVar9 = ClothCollectionGroup::SimVertices2D;
  FVar8 = ClothCollectionGroup::SimFaces;
  FVar6 = ClothCollectionGroup::SeamStitches;
  pFVar1 = *(FManagedArrayCollection **)this;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
  if ((param_1 & CookedOnly) == None) {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_968.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_968.GroupIndexDependency.Number = 0;
    local_968.Saved = true;
    local_968.bAllowCircularDependency = false;
    local_968._10_2_ = uStack_d16;
    pTVar21 = FManagedArrayCollection::AddAttribute<FSoftObjectPath>
                        (pFVar1,ClothCollectionAttribute::PhysicsAssetSoftObjectPathName,
                         ClothCollectionGroup::Lods,&local_968);
    *(TManagedArray<FSoftObjectPath> **)&this->field_0x10 = pTVar21;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_958.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_958.GroupIndexDependency.Number = 0;
    local_958.Saved = true;
    local_958.bAllowCircularDependency = false;
    local_958._10_2_ = uStack_d0a;
    pTVar21 = FManagedArrayCollection::AddAttribute<FSoftObjectPath>
                        (pFVar1,ClothCollectionAttribute::SkeletalMeshSoftObjectPathName,
                         ClothCollectionGroup::Lods,&local_958);
    *(TManagedArray<FSoftObjectPath> **)&this->field_0x18 = pTVar21;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_948.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_948.GroupIndexDependency.Number = 0;
    local_948.Saved = true;
    local_948.bAllowCircularDependency = false;
    local_948._10_2_ = uStack_cfe;
    pTVar20 = FManagedArrayCollection::AddAttribute<FName>
                        (pFVar1,ClothCollectionAttribute::ReferenceBoneName,
                         ClothCollectionGroup::Lods,&local_948);
    *(TManagedArray<FName> **)&this->field_0x30 = pTVar20;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if ((param_1 & Solvers) != None) {
      pTVar22 = GetManagedArrayCollection(this,&local_248);
      local_938.Saved = true;
      local_938.bAllowCircularDependency = false;
      local_938._10_2_ = uStack_cf2;
      local_938.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_938.GroupIndexDependency.Number = 0;
      pTVar19 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                          (pTVar22->Object,ClothCollectionAttribute::SolverGravity,
                           ClothCollectionGroup::Solvers,&local_938);
      *(TManagedArray<UE::Math::TVector<float>_> **)&this->field_0x38 = pTVar19;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_248.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_298);
      local_928.Saved = true;
      local_928.bAllowCircularDependency = false;
      local_928._10_2_ = uStack_ce6;
      local_928.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_928.GroupIndexDependency.Number = 0;
      pTVar23 = FManagedArrayCollection::AddAttribute<float>
                          (pTVar22->Object,ClothCollectionAttribute::SolverAirDamping,
                           ClothCollectionGroup::Solvers,&local_928);
      *(TManagedArray<float> **)&this->field_0x40 = pTVar23;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_298.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_228);
      local_918.Saved = true;
      local_918.bAllowCircularDependency = false;
      local_918._10_2_ = uStack_cda;
      local_918.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_918.GroupIndexDependency.Number = 0;
      pTVar18 = FManagedArrayCollection::AddAttribute<int>
                          (pTVar22->Object,ClothCollectionAttribute::SolverSubSteps,
                           ClothCollectionGroup::Solvers,&local_918);
      *(TManagedArray<int> **)&this->field_0x48 = pTVar18;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_228.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_218);
      local_908.Saved = true;
      local_908.bAllowCircularDependency = false;
      local_908._10_2_ = uStack_cce;
      local_908.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_908.GroupIndexDependency.Number = 0;
      pTVar23 = FManagedArrayCollection::AddAttribute<float>
                          (pTVar22->Object,ClothCollectionAttribute::SolverTimeStep,
                           ClothCollectionGroup::Solvers,&local_908);
      *(TManagedArray<float> **)&this->field_0x50 = pTVar23;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_218.SharedReferenceCount.ReferenceController);
    }
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_8f8.GroupIndexDependency = FVar6;
    local_8f8.Saved = true;
    local_8f8.bAllowCircularDependency = true;
    local_8f8._10_2_ = uStack_dde;
    pTVar18 = FManagedArrayCollection::AddAttribute<int>
                        (pFVar1,ClothCollectionAttribute::SeamStitchStart,
                         ClothCollectionGroup::Seams,&local_8f8);
    *(TManagedArray<int> **)&this->field_0xa8 = pTVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_8e8.GroupIndexDependency = FVar6;
    local_8e8.Saved = true;
    local_8e8.bAllowCircularDependency = true;
    local_8e8._10_2_ = uStack_dde;
    pTVar18 = FManagedArrayCollection::AddAttribute<int>
                        (pFVar1,ClothCollectionAttribute::SeamStitchEnd,ClothCollectionGroup::Seams,
                         &local_8e8);
    *(TManagedArray<int> **)&this->field_0xb0 = pTVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar15 = ClothCollectionAttribute::SeamStitch2DEndIndices;
    FVar7 = ClothCollectionGroup::SeamStitches;
    local_8d8.GroupIndexDependency = FVar9;
    local_8d8.Saved = true;
    local_8d8.bAllowCircularDependency = true;
    local_8d8._10_2_ = uStack_dce;
    bVar16 = FManagedArrayCollection::HasAttribute
                       (pFVar1,ClothCollectionAttribute::SeamStitch2DEndIndices,
                        ClothCollectionGroup::SeamStitches);
    if (!bVar16) {
      FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<int>_>
                (pFVar1,FVar15,FVar7,&local_8d8);
    }
    bVar16 = FManagedArrayCollection::HasAttribute(pFVar1,FVar15,FVar7);
    if ((!bVar16) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("HasAttribute(Name, Group)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x164,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_488 = FVar15;
    local_480 = FVar7;
    pTVar24 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&pFVar1->Map,(TTuple<FName,FName> *)&local_488);
    if ((pTVar24 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pTVar24->field_0x10 != '#') &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSameType<T>()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x315,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)&pTVar24->field_0x10);
    lVar3 = *(longlong *)&pTVar24->field_0x30;
    if ((lVar3 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypedManagedArray != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x319,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined1 *)(lVar3 + 8) = 1;
    *(longlong *)&this->field_0xb8 = lVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_8c8.GroupIndexDependency = FVar10;
    local_8c8.Saved = true;
    local_8c8.bAllowCircularDependency = true;
    local_8c8._10_2_ = uStack_dfe;
    pTVar18 = FManagedArrayCollection::AddAttribute<int>
                        (pFVar1,ClothCollectionAttribute::SeamStitch3DIndex,
                         ClothCollectionGroup::SeamStitches,&local_8c8);
    *(TManagedArray<int> **)&this->field_0xc0 = pTVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_8b8.GroupIndexDependency = FVar9;
    local_8b8.Saved = true;
    local_8b8.bAllowCircularDependency = true;
    local_8b8._10_2_ = uStack_dce;
    pTVar18 = FManagedArrayCollection::AddAttribute<int>
                        (pFVar1,ClothCollectionAttribute::SimVertices2DStart,
                         ClothCollectionGroup::SimPatterns,&local_8b8);
    *(TManagedArray<int> **)&this->field_0xc8 = pTVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_8a8.GroupIndexDependency = FVar9;
    local_8a8.Saved = true;
    local_8a8.bAllowCircularDependency = true;
    local_8a8._10_2_ = uStack_dce;
    pTVar18 = FManagedArrayCollection::AddAttribute<int>
                        (pFVar1,ClothCollectionAttribute::SimVertices2DEnd,
                         ClothCollectionGroup::SimPatterns,&local_8a8);
    *(TManagedArray<int> **)&this->field_0xd0 = pTVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_898.GroupIndexDependency = FVar8;
    local_898.Saved = true;
    local_898.bAllowCircularDependency = true;
    local_898._10_2_ = uStack_dbe;
    pTVar18 = FManagedArrayCollection::AddAttribute<int>
                        (pFVar1,ClothCollectionAttribute::SimFacesStart,
                         ClothCollectionGroup::SimPatterns,&local_898);
    *(TManagedArray<int> **)&this->field_0xd8 = pTVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_888.GroupIndexDependency = FVar8;
    local_888.Saved = true;
    local_888.bAllowCircularDependency = true;
    local_888._10_2_ = uStack_dbe;
    pTVar18 = FManagedArrayCollection::AddAttribute<int>
                        (pFVar1,ClothCollectionAttribute::SimFacesEnd,
                         ClothCollectionGroup::SimPatterns,&local_888);
    *(TManagedArray<int> **)&this->field_0xe0 = pTVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_878.GroupIndexDependency = FVar13;
    local_878.Saved = true;
    local_878.bAllowCircularDependency = true;
    local_878._10_2_ = uStack_d9e;
    pTVar18 = FManagedArrayCollection::AddAttribute<int>
                        (pFVar1,ClothCollectionAttribute::SimPatternFabric,
                         ClothCollectionGroup::SimPatterns,&local_878);
    *(TManagedArray<int> **)&this->field_0xe8 = pTVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_868.GroupIndexDependency = FVar12;
    local_868.Saved = true;
    local_868.bAllowCircularDependency = true;
    local_868._10_2_ = uStack_cbe;
    pTVar18 = FManagedArrayCollection::AddAttribute<int>
                        (pFVar1,ClothCollectionAttribute::RenderVerticesStart,
                         ClothCollectionGroup::RenderPatterns,&local_868);
    *(TManagedArray<int> **)&this->field_0xf0 = pTVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_858.GroupIndexDependency = FVar12;
    local_858.Saved = true;
    local_858.bAllowCircularDependency = true;
    local_858._10_2_ = uStack_cbe;
    pTVar18 = FManagedArrayCollection::AddAttribute<int>
                        (pFVar1,ClothCollectionAttribute::RenderVerticesEnd,
                         ClothCollectionGroup::RenderPatterns,&local_858);
    *(TManagedArray<int> **)&this->field_0xf8 = pTVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_848.GroupIndexDependency = FVar11;
    local_848.Saved = true;
    local_848.bAllowCircularDependency = true;
    local_848._10_2_ = uStack_dee;
    pTVar18 = FManagedArrayCollection::AddAttribute<int>
                        (pFVar1,ClothCollectionAttribute::RenderFacesStart,
                         ClothCollectionGroup::RenderPatterns,&local_848);
    *(TManagedArray<int> **)&this->field_0x100 = pTVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_838.GroupIndexDependency = FVar11;
    local_838.Saved = true;
    local_838.bAllowCircularDependency = true;
    local_838._10_2_ = uStack_dee;
    pTVar18 = FManagedArrayCollection::AddAttribute<int>
                        (pFVar1,ClothCollectionAttribute::RenderFacesEnd,
                         ClothCollectionGroup::RenderPatterns,&local_838);
    *(TManagedArray<int> **)&this->field_0x108 = pTVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_828.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_828.GroupIndexDependency.Number = 0;
    local_828.Saved = true;
    local_828.bAllowCircularDependency = false;
    local_828._10_2_ = uStack_cae;
    pTVar21 = FManagedArrayCollection::AddAttribute<FSoftObjectPath>
                        (pFVar1,ClothCollectionAttribute::RenderMaterialSoftObjectPathName,
                         ClothCollectionGroup::RenderPatterns,&local_828);
    *(TManagedArray<FSoftObjectPath> **)&this->field_0x118 = pTVar21;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if ((param_1 & Fabrics) != None) {
      pTVar22 = GetManagedArrayCollection(this,&local_208);
      local_818.Saved = true;
      local_818.bAllowCircularDependency = false;
      local_818._10_2_ = uStack_ca2;
      local_818.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_818.GroupIndexDependency.Number = 0;
      pTVar19 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                          (pTVar22->Object,ClothCollectionAttribute::FabricBendingStiffness,
                           ClothCollectionGroup::Fabrics,&local_818);
      *(TManagedArray<UE::Math::TVector<float>_> **)&this->field_0x58 = pTVar19;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_208.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_1f8);
      local_808.Saved = true;
      local_808.bAllowCircularDependency = false;
      local_808._10_2_ = uStack_c96;
      local_808.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_808.GroupIndexDependency.Number = 0;
      pTVar19 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                          (pTVar22->Object,ClothCollectionAttribute::FabricBucklingStiffness,
                           ClothCollectionGroup::Fabrics,&local_808);
      *(TManagedArray<UE::Math::TVector<float>_> **)&this->field_0x60 = pTVar19;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f8.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_478);
      local_7f8.Saved = true;
      local_7f8.bAllowCircularDependency = false;
      local_7f8._10_2_ = uStack_c8a;
      local_7f8.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_7f8.GroupIndexDependency.Number = 0;
      pTVar19 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                          (pTVar22->Object,ClothCollectionAttribute::FabricStretchStiffness,
                           ClothCollectionGroup::Fabrics,&local_7f8);
      *(TManagedArray<UE::Math::TVector<float>_> **)&this->field_0x68 = pTVar19;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_478.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_3b8);
      local_7e8.Saved = true;
      local_7e8.bAllowCircularDependency = false;
      local_7e8._10_2_ = uStack_c7e;
      local_7e8.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_7e8.GroupIndexDependency.Number = 0;
      pTVar23 = FManagedArrayCollection::AddAttribute<float>
                          (pTVar22->Object,ClothCollectionAttribute::FabricBucklingRatio,
                           ClothCollectionGroup::Fabrics,&local_7e8);
      *(TManagedArray<float> **)&this->field_0x70 = pTVar23;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3b8.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_458);
      local_7d8.Saved = true;
      local_7d8.bAllowCircularDependency = false;
      local_7d8._10_2_ = uStack_c72;
      local_7d8.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_7d8.GroupIndexDependency.Number = 0;
      pTVar23 = FManagedArrayCollection::AddAttribute<float>
                          (pTVar22->Object,ClothCollectionAttribute::FabricDensity,
                           ClothCollectionGroup::Fabrics,&local_7d8);
      *(TManagedArray<float> **)&this->field_0x78 = pTVar23;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_458.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_448);
      local_7c8.Saved = true;
      local_7c8.bAllowCircularDependency = false;
      local_7c8._10_2_ = uStack_c66;
      local_7c8.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_7c8.GroupIndexDependency.Number = 0;
      pTVar23 = FManagedArrayCollection::AddAttribute<float>
                          (pTVar22->Object,ClothCollectionAttribute::FabricFriction,
                           ClothCollectionGroup::Fabrics,&local_7c8);
      *(TManagedArray<float> **)&this->field_0x80 = pTVar23;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_448.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_3e8);
      local_7b8.Saved = true;
      local_7b8.bAllowCircularDependency = false;
      local_7b8._10_2_ = uStack_c5a;
      local_7b8.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_7b8.GroupIndexDependency.Number = 0;
      pTVar23 = FManagedArrayCollection::AddAttribute<float>
                          (pTVar22->Object,ClothCollectionAttribute::FabricDamping,
                           ClothCollectionGroup::Fabrics,&local_7b8);
      *(TManagedArray<float> **)&this->field_0x88 = pTVar23;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3e8.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_438);
      local_7a8.Saved = true;
      local_7a8.bAllowCircularDependency = false;
      local_7a8._10_2_ = uStack_c4e;
      local_7a8.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_7a8.GroupIndexDependency.Number = 0;
      pTVar23 = FManagedArrayCollection::AddAttribute<float>
                          (pTVar22->Object,ClothCollectionAttribute::FabricPressure,
                           ClothCollectionGroup::Fabrics,&local_7a8);
      *(TManagedArray<float> **)&this->field_0x90 = pTVar23;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_438.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_428);
      local_798.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_798.GroupIndexDependency.Number = 0;
      local_798.Saved = true;
      local_798.bAllowCircularDependency = false;
      local_798._10_2_ = uStack_c42;
      pTVar18 = FManagedArrayCollection::AddAttribute<int>
                          (pTVar22->Object,ClothCollectionAttribute::FabricLayer,
                           ClothCollectionGroup::Fabrics,&local_798);
      *(TManagedArray<int> **)&this->field_0x98 = pTVar18;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_428.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_418);
      local_788.Saved = true;
      local_788.bAllowCircularDependency = false;
      local_788._10_2_ = local_1de;
      local_788.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_788.GroupIndexDependency.Number = 0;
      pTVar23 = FManagedArrayCollection::AddAttribute<float>
                          (pTVar22->Object,ClothCollectionAttribute::FabricCollisionThickness,
                           ClothCollectionGroup::Fabrics,&local_788);
      *(TManagedArray<float> **)&this->field_0xa0 = pTVar23;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_418.SharedReferenceCount.ReferenceController);
    }
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_778.GroupIndexDependency = FVar9;
    local_778.Saved = true;
    local_778.bAllowCircularDependency = true;
    local_778._10_2_ = uStack_dce;
    pTVar25 = FManagedArrayCollection::AddAttribute<UE::Math::TIntVector3<int>_>
                        (pFVar1,ClothCollectionAttribute::SimIndices2D,
                         ClothCollectionGroup::SimFaces,&local_778);
    *(TManagedArray<UE::Math::TIntVector3<int>_> **)&this->field_0x128 = pTVar25;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_768.GroupIndexDependency = FVar10;
    local_768.Saved = true;
    local_768.bAllowCircularDependency = true;
    local_768._10_2_ = uStack_dfe;
    pTVar25 = FManagedArrayCollection::AddAttribute<UE::Math::TIntVector3<int>_>
                        (pFVar1,ClothCollectionAttribute::SimIndices3D,
                         ClothCollectionGroup::SimFaces,&local_768);
    *(TManagedArray<UE::Math::TIntVector3<int>_> **)&this->field_0x130 = pTVar25;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar11 = ClothCollectionAttribute::SimPosition2D;
    FVar8 = ClothCollectionGroup::SimVertices2D;
    local_758.Saved = true;
    local_758.bAllowCircularDependency = false;
    local_758._10_2_ = local_1d2;
    local_758.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_758.GroupIndexDependency.Number = 0;
    bVar16 = FManagedArrayCollection::HasAttribute
                       (pFVar1,ClothCollectionAttribute::SimPosition2D,
                        ClothCollectionGroup::SimVertices2D);
    if (!bVar16) {
      FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector2<float>_>
                (pFVar1,FVar11,FVar8,&local_758);
    }
    pTVar26 = FManagedArrayCollection::ModifyAttribute<UE::Math::TVector2<float>_>
                        (pFVar1,FVar11,FVar8);
    *(TManagedArray<UE::Math::TVector2<float>_> **)&this->field_0x138 = pTVar26;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_748.GroupIndexDependency = FVar10;
    local_748.Saved = true;
    local_748.bAllowCircularDependency = true;
    local_748._10_2_ = uStack_dfe;
    pTVar18 = FManagedArrayCollection::AddAttribute<int>
                        (pFVar1,ClothCollectionAttribute::SimVertex3DLookup,
                         ClothCollectionGroup::SimVertices2D,&local_748);
    *(TManagedArray<int> **)&this->field_0x140 = pTVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    bVar16 = EnumHasAnyFlags<enum_UE::Chaos::ClothAsset::EClothCollectionExtendedSchemas>
                       (param_1,Import);
    if (bVar16) {
      pTVar22 = GetManagedArrayCollection(this,&local_408);
      local_738.Saved = true;
      local_738.bAllowCircularDependency = false;
      local_738._10_2_ = local_1c6;
      local_738.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_738.GroupIndexDependency.Number = 0;
      pTVar18 = FManagedArrayCollection::AddAttribute<int>
                          (pTVar22->Object,ClothCollectionAttribute::SimImportVertexID,
                           ClothCollectionGroup::SimVertices2D,&local_738);
      *(TManagedArray<int> **)&this->field_0x148 = pTVar18;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_408.SharedReferenceCount.ReferenceController);
    }
    pTVar22 = GetManagedArrayCollection(this,&local_3f8);
    local_728.Saved = true;
    local_728.bAllowCircularDependency = false;
    local_728._10_2_ = local_1ba;
    local_728.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_728.GroupIndexDependency.Number = 0;
    pTVar19 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                        (pTVar22->Object,ClothCollectionAttribute::SimPosition3D,
                         ClothCollectionGroup::SimVertices3D,&local_728);
    *(TManagedArray<UE::Math::TVector<float>_> **)&this->field_0x150 = pTVar19;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3f8.SharedReferenceCount.ReferenceController);
    pTVar22 = GetManagedArrayCollection(this,&local_3d8);
    local_718.Saved = true;
    local_718.bAllowCircularDependency = false;
    local_718._10_2_ = local_1ae;
    local_718.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_718.GroupIndexDependency.Number = 0;
    pTVar19 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                        (pTVar22->Object,ClothCollectionAttribute::SimNormal,
                         ClothCollectionGroup::SimVertices3D,&local_718);
    *(TManagedArray<UE::Math::TVector<float>_> **)&this->field_0x158 = pTVar19;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3d8.SharedReferenceCount.ReferenceController);
    pTVar22 = GetManagedArrayCollection(this,&local_3c8);
    local_708.Saved = true;
    local_708.bAllowCircularDependency = false;
    local_708._10_2_ = local_1a2;
    local_708.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_708.GroupIndexDependency.Number = 0;
    pTVar27 = FManagedArrayCollection::AddAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                        (pTVar22->Object,ClothCollectionAttribute::SimBoneIndices,
                         ClothCollectionGroup::SimVertices3D,&local_708);
    *(TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> **)&this->field_0x160 = pTVar27;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3c8.SharedReferenceCount.ReferenceController);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_6f8.Saved = true;
    local_6f8.bAllowCircularDependency = false;
    local_6f8._10_2_ = local_196;
    local_6f8.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_6f8.GroupIndexDependency.Number = 0;
    pTVar28 = FManagedArrayCollection::AddAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                        (pFVar1,ClothCollectionAttribute::SimBoneWeights,
                         ClothCollectionGroup::SimVertices3D,&local_6f8);
    *(TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> **)&this->field_0x168 = pTVar28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_6e8.GroupIndexDependency = FVar10;
    local_6e8.Saved = true;
    local_6e8.bAllowCircularDependency = true;
    local_6e8._10_2_ = uStack_dfe;
    pTVar27 = FManagedArrayCollection::AddAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                        (pFVar1,ClothCollectionAttribute::TetherKinematicIndex,
                         ClothCollectionGroup::SimVertices3D,&local_6e8);
    *(TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> **)&this->field_0x170 = pTVar27;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_6d8.Saved = true;
    local_6d8.bAllowCircularDependency = false;
    local_6d8._10_2_ = local_18a;
    local_6d8.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_6d8.GroupIndexDependency.Number = 0;
    pTVar28 = FManagedArrayCollection::AddAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                        (pFVar1,ClothCollectionAttribute::TetherReferenceLength,
                         ClothCollectionGroup::SimVertices3D,&local_6d8);
    *(TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> **)&this->field_0x178 = pTVar28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_6c8.GroupIndexDependency = FVar9;
    local_6c8.Saved = true;
    local_6c8.bAllowCircularDependency = true;
    local_6c8._10_2_ = uStack_dce;
    pTVar27 = FManagedArrayCollection::AddAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                        (pFVar1,ClothCollectionAttribute::SimVertex2DLookup,
                         ClothCollectionGroup::SimVertices3D,&local_6c8);
    *(TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> **)&this->field_0x180 = pTVar27;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_6b8.GroupIndexDependency = FVar6;
    local_6b8.Saved = true;
    local_6b8.bAllowCircularDependency = true;
    local_6b8._10_2_ = uStack_dde;
    pTVar27 = FManagedArrayCollection::AddAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                        (pFVar1,ClothCollectionAttribute::SeamStitchLookup,
                         ClothCollectionGroup::SimVertices3D,&local_6b8);
    *(TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> **)&this->field_0x188 = pTVar27;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if ((param_1 & SimMorphTargets) != None) {
      pTVar22 = GetManagedArrayCollection(this,&local_3a8);
      local_6a8.Saved = true;
      local_6a8.bAllowCircularDependency = false;
      local_6a8._10_2_ = local_17e;
      local_6a8.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_6a8.GroupIndexDependency.Number = 0;
      pTVar17 = FManagedArrayCollection::AddAttribute<FString>
                          (pTVar22->Object,ClothCollectionAttribute::SimMorphTargetName,
                           ClothCollectionGroup::SimMorphTargets,&local_6a8);
      *(TManagedArray<FString> **)&this->field_0x1a0 = pTVar17;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3a8.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_398);
      local_698.GroupIndexDependency = FVar14;
      local_698.Saved = true;
      local_698.bAllowCircularDependency = true;
      local_698._10_2_ = uStack_c36;
      pTVar18 = FManagedArrayCollection::AddAttribute<int>
                          (pTVar22->Object,ClothCollectionAttribute::SimMorphTargetVerticesStart,
                           ClothCollectionGroup::SimMorphTargets,&local_698);
      *(TManagedArray<int> **)&this->field_0x1a8 = pTVar18;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_398.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_388);
      local_688.GroupIndexDependency = FVar14;
      local_688.Saved = true;
      local_688.bAllowCircularDependency = true;
      local_688._10_2_ = uStack_c36;
      pTVar18 = FManagedArrayCollection::AddAttribute<int>
                          (pTVar22->Object,ClothCollectionAttribute::SimMorphTargetVerticesEnd,
                           ClothCollectionGroup::SimMorphTargets,&local_688);
      *(TManagedArray<int> **)&this->field_0x1b0 = pTVar18;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_388.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_378);
      local_678.Saved = true;
      local_678.bAllowCircularDependency = false;
      local_678._10_2_ = local_52;
      local_678.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_678.GroupIndexDependency.Number = 0;
      pTVar19 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                          (pTVar22->Object,ClothCollectionAttribute::SimMorphTargetPositionDelta,
                           ClothCollectionGroup::SimMorphTargetVertices,&local_678);
      *(TManagedArray<UE::Math::TVector<float>_> **)&this->field_0x1b8 = pTVar19;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_378.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_368);
      local_668.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_668.GroupIndexDependency.Number = 0;
      local_668.Saved = true;
      local_668.bAllowCircularDependency = false;
      local_668._10_2_ = local_172;
      pTVar19 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                          (pTVar22->Object,ClothCollectionAttribute::SimMorphTargetTangentZDelta,
                           ClothCollectionGroup::SimMorphTargetVertices,&local_668);
      *(TManagedArray<UE::Math::TVector<float>_> **)&this->field_0x1c0 = pTVar19;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_368.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_358);
      local_658.GroupIndexDependency = FVar10;
      local_658.Saved = true;
      local_658.bAllowCircularDependency = true;
      local_658._10_2_ = uStack_dfe;
      pTVar18 = FManagedArrayCollection::AddAttribute<int>
                          (pTVar22->Object,ClothCollectionAttribute::SimMorphTargetSimVertex3DIndex,
                           ClothCollectionGroup::SimMorphTargetVertices,&local_658);
      *(TManagedArray<int> **)&this->field_0x1c8 = pTVar18;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_358.SharedReferenceCount.ReferenceController);
    }
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_648.GroupIndexDependency = FVar12;
    local_648.Saved = true;
    local_648.bAllowCircularDependency = true;
    local_648._10_2_ = uStack_cbe;
    pTVar25 = FManagedArrayCollection::AddAttribute<UE::Math::TIntVector3<int>_>
                        (pFVar1,ClothCollectionAttribute::RenderIndices,
                         ClothCollectionGroup::RenderFaces,&local_648);
    *(TManagedArray<UE::Math::TIntVector3<int>_> **)&this->field_0x1d0 = pTVar25;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_638.Saved = true;
    local_638.bAllowCircularDependency = false;
    local_638._10_2_ = local_166;
    local_638.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_638.GroupIndexDependency.Number = 0;
    pTVar19 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                        (pFVar1,ClothCollectionAttribute::RenderPosition,
                         ClothCollectionGroup::RenderVertices,&local_638);
    *(TManagedArray<UE::Math::TVector<float>_> **)&this->field_0x1d8 = pTVar19;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_628.Saved = true;
    local_628.bAllowCircularDependency = false;
    local_628._10_2_ = local_46;
    local_628.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_628.GroupIndexDependency.Number = 0;
    pTVar19 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                        (pFVar1,ClothCollectionAttribute::RenderNormal,
                         ClothCollectionGroup::RenderVertices,&local_628);
    *(TManagedArray<UE::Math::TVector<float>_> **)&this->field_0x1e0 = pTVar19;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_618.Saved = true;
    local_618.bAllowCircularDependency = false;
    local_618._10_2_ = local_15a;
    local_618.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_618.GroupIndexDependency.Number = 0;
    pTVar19 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                        (pFVar1,ClothCollectionAttribute::RenderTangentU,
                         ClothCollectionGroup::RenderVertices,&local_618);
    *(TManagedArray<UE::Math::TVector<float>_> **)&this->field_0x1e8 = pTVar19;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_608.Saved = true;
    local_608.bAllowCircularDependency = false;
    local_608._10_2_ = local_14e;
    local_608.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_608.GroupIndexDependency.Number = 0;
    pTVar19 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                        (pFVar1,ClothCollectionAttribute::RenderTangentV,
                         ClothCollectionGroup::RenderVertices,&local_608);
    *(TManagedArray<UE::Math::TVector<float>_> **)&this->field_0x1f0 = pTVar19;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar8 = ClothCollectionAttribute::RenderUVs;
    FVar6 = ClothCollectionGroup::RenderVertices;
    local_5f8.Saved = true;
    local_5f8.bAllowCircularDependency = false;
    local_5f8._10_2_ = local_142;
    local_5f8.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_5f8.GroupIndexDependency.Number = 0;
    bVar16 = FManagedArrayCollection::HasAttribute
                       (pFVar1,ClothCollectionAttribute::RenderUVs,
                        ClothCollectionGroup::RenderVertices);
    if (!bVar16) {
      FManagedArrayCollection::
      AddNewAttributeImpl<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                (pFVar1,FVar8,FVar6,&local_5f8);
    }
    bVar16 = FManagedArrayCollection::HasAttribute(pFVar1,FVar8,FVar6);
    if ((!bVar16) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("HasAttribute(Name, Group)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x164,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_4a8 = FVar8;
    local_4a0 = FVar6;
    pFVar29 = TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
              ::FindChecked((TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
                             *)&pFVar1->Map,(TTuple<FName,FName> *)&local_4a8);
    if ((pFVar29->ArrayType != FVector2DArrayType) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSameType<T>()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x315,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar29);
    pFVar4 = pFVar29->ManagedArray;
    if ((pFVar4 == (FManagedArrayBase *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypedManagedArray != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x319,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4->bIsDirty = true;
    *(FManagedArrayBase **)&this->field_0x1f8 = pFVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar8 = ClothCollectionAttribute::RenderColor;
    FVar6 = ClothCollectionGroup::RenderVertices;
    local_5e8.Saved = true;
    local_5e8.bAllowCircularDependency = false;
    local_5e8._10_2_ = local_136;
    local_5e8.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_5e8.GroupIndexDependency.Number = 0;
    bVar16 = FManagedArrayCollection::HasAttribute
                       (pFVar1,ClothCollectionAttribute::RenderColor,
                        ClothCollectionGroup::RenderVertices);
    if (!bVar16) {
      FManagedArrayCollection::AddNewAttributeImpl<FLinearColor>(pFVar1,FVar8,FVar6,&local_5e8);
    }
    bVar16 = FManagedArrayCollection::HasAttribute(pFVar1,FVar8,FVar6);
    if ((!bVar16) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("HasAttribute(Name, Group)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x164,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_498 = FVar8;
    local_490 = FVar6;
    pFVar29 = TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
              ::FindChecked((TMapBase<TTuple<FName,FName>,FManagedArrayCollection::FValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>_>
                             *)&pFVar1->Map,(TTuple<FName,FName> *)&local_498);
    if ((pFVar29->ArrayType != FLinearColorType) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSameType<T>()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x315,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar29);
    pFVar4 = pFVar29->ManagedArray;
    if ((pFVar4 == (FManagedArrayBase *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypedManagedArray != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x319,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4->bIsDirty = true;
    *(FManagedArrayBase **)&this->field_0x200 = pFVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_5d8.Saved = true;
    local_5d8.bAllowCircularDependency = false;
    local_5d8._10_2_ = local_12a;
    local_5d8.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_5d8.GroupIndexDependency.Number = 0;
    pTVar27 = FManagedArrayCollection::AddAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                        (pFVar1,ClothCollectionAttribute::RenderBoneIndices,
                         ClothCollectionGroup::RenderVertices,&local_5d8);
    *(TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> **)&this->field_0x208 = pTVar27;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_5c8.Saved = true;
    local_5c8.bAllowCircularDependency = false;
    local_5c8._10_2_ = local_11e;
    local_5c8.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_5c8.GroupIndexDependency.Number = 0;
    pTVar28 = FManagedArrayCollection::AddAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                        (pFVar1,ClothCollectionAttribute::RenderBoneWeights,
                         ClothCollectionGroup::RenderVertices,&local_5c8);
    *(TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> **)&this->field_0x210 = pTVar28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if ((param_1 & RenderDeformer) != None) {
      pTVar22 = GetManagedArrayCollection(this,&local_348);
      local_5b8.Saved = true;
      local_5b8.bAllowCircularDependency = false;
      local_5b8._10_2_ = local_112;
      local_5b8.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_5b8.GroupIndexDependency.Number = 0;
      pTVar18 = FManagedArrayCollection::AddAttribute<int>
                          (pTVar22->Object,ClothCollectionAttribute::RenderDeformerNumInfluences,
                           ClothCollectionGroup::RenderPatterns,&local_5b8);
      *(TManagedArray<int> **)&this->field_0x110 = pTVar18;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_348.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_338);
      local_5a8.Saved = true;
      local_5a8.bAllowCircularDependency = false;
      local_5a8._10_2_ = local_106;
      local_5a8.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_5a8.GroupIndexDependency.Number = 0;
      pTVar30 = FManagedArrayCollection::
                AddAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                          (pTVar22->Object,
                           ClothCollectionAttribute::RenderDeformerPositionBaryCoordsAndDist,
                           ClothCollectionGroup::RenderVertices,&local_5a8);
      *(TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> **)
       &this->field_0x218 = pTVar30;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_338.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_328);
      local_598.Saved = true;
      local_598.bAllowCircularDependency = false;
      local_598._10_2_ = local_fa;
      local_598.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_598.GroupIndexDependency.Number = 0;
      pTVar30 = FManagedArrayCollection::
                AddAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                          (pTVar22->Object,
                           ClothCollectionAttribute::RenderDeformerNormalBaryCoordsAndDist,
                           ClothCollectionGroup::RenderVertices,&local_598);
      *(TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> **)
       &this->field_0x220 = pTVar30;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_328.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_318);
      local_588.Saved = true;
      local_588.bAllowCircularDependency = false;
      local_588._10_2_ = local_ee;
      local_588.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_588.GroupIndexDependency.Number = 0;
      pTVar30 = FManagedArrayCollection::
                AddAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                          (pTVar22->Object,
                           ClothCollectionAttribute::RenderDeformerTangentBaryCoordsAndDist,
                           ClothCollectionGroup::RenderVertices,&local_588);
      *(TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> **)
       &this->field_0x228 = pTVar30;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_318.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_308);
      local_578.Saved = true;
      local_578.bAllowCircularDependency = true;
      local_578._10_2_ = uStack_dfe;
      local_578.GroupIndexDependency = FVar10;
      pTVar31 = FManagedArrayCollection::
                AddAttribute<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                          (pTVar22->Object,ClothCollectionAttribute::RenderDeformerSimIndices3D,
                           ClothCollectionGroup::RenderVertices,&local_578);
      *(TManagedArray<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> **)
       &this->field_0x230 = pTVar31;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_308.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_2f8);
      local_568.Saved = true;
      local_568.bAllowCircularDependency = false;
      local_568._10_2_ = local_e2;
      local_568.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_568.GroupIndexDependency.Number = 0;
      pTVar28 = FManagedArrayCollection::AddAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                          (pTVar22->Object,ClothCollectionAttribute::RenderDeformerWeight,
                           ClothCollectionGroup::RenderVertices,&local_568);
      *(TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> **)&this->field_0x238 = pTVar28;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2f8.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_2e8);
      local_558.Saved = true;
      local_558.bAllowCircularDependency = false;
      local_558._10_2_ = local_d6;
      local_558.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_558.GroupIndexDependency.Number = 0;
      pTVar23 = FManagedArrayCollection::AddAttribute<float>
                          (pTVar22->Object,ClothCollectionAttribute::RenderDeformerSkinningBlend,
                           ClothCollectionGroup::RenderVertices,&local_558);
      *(TManagedArray<float> **)&this->field_0x240 = pTVar23;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2e8.SharedReferenceCount.ReferenceController);
    }
    if ((param_1 & Resizing) != None) {
      pTVar22 = GetManagedArrayCollection(this,&local_238);
      local_548.Saved = true;
      local_548.bAllowCircularDependency = false;
      local_548._10_2_ = local_ca;
      local_548.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_548.GroupIndexDependency.Number = 0;
      pTVar23 = FManagedArrayCollection::AddAttribute<float>
                          (pTVar22->Object,ClothCollectionAttribute::SimCustomResizingBlend,
                           ClothCollectionGroup::SimVertices3D,&local_548);
      *(TManagedArray<float> **)&this->field_0x190 = pTVar23;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_238.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_2d8);
      local_538.Saved = true;
      local_538.bAllowCircularDependency = false;
      local_538._10_2_ = local_be;
      local_538.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_538.GroupIndexDependency.Number = 0;
      pTVar19 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                          (pTVar22->Object,ClothCollectionAttribute::PreResizedSimPosition3D,
                           ClothCollectionGroup::SimVertices3D,&local_538);
      *(TManagedArray<UE::Math::TVector<float>_> **)&this->field_0x198 = pTVar19;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2d8.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_2c8);
      local_528.Saved = true;
      local_528.bAllowCircularDependency = false;
      local_528._10_2_ = local_b2;
      local_528.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_528.GroupIndexDependency.Number = 0;
      pTVar23 = FManagedArrayCollection::AddAttribute<float>
                          (pTVar22->Object,ClothCollectionAttribute::RenderCustomResizingBlend,
                           ClothCollectionGroup::RenderVertices,&local_528);
      *(TManagedArray<float> **)&this->field_0x248 = pTVar23;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2c8.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_2b8);
      local_518.Saved = true;
      local_518.bAllowCircularDependency = false;
      local_518._10_2_ = local_a6;
      local_518.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_518.GroupIndexDependency.Number = 0;
      pTVar17 = FManagedArrayCollection::AddAttribute<FString>
                          (pTVar22->Object,ClothCollectionAttribute::CustomResizingRegionSet,
                           ClothCollectionGroup::CustomResizingRegions,&local_518);
      *(TManagedArray<FString> **)&this->field_0x250 = pTVar17;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2b8.SharedReferenceCount.ReferenceController);
      pTVar22 = GetManagedArrayCollection(this,&local_2a8);
      local_508.Saved = true;
      local_508.bAllowCircularDependency = false;
      local_508._10_2_ = local_9a;
      local_508.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_508.GroupIndexDependency.Number = 0;
      pTVar18 = FManagedArrayCollection::AddAttribute<int>
                          (pTVar22->Object,ClothCollectionAttribute::CustomResizingRegionType,
                           ClothCollectionGroup::CustomResizingRegions,&local_508);
      *(TManagedArray<int> **)&this->field_0x258 = pTVar18;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2a8.SharedReferenceCount.ReferenceController);
    }
    if (-1 < (char)param_1) {
      return;
    }
    pTVar22 = GetManagedArrayCollection(this,&local_288);
    local_4f8.Saved = true;
    local_4f8.bAllowCircularDependency = false;
    local_4f8._10_2_ = local_5e;
    local_4f8.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_4f8.GroupIndexDependency.Number = 0;
    pTVar20 = FManagedArrayCollection::AddAttribute<FName>
                        (pTVar22->Object,ClothCollectionAttribute::SimAccessoryMeshName,
                         ClothCollectionGroup::SimAccessoryMeshes,&local_4f8);
    *(TManagedArray<FName> **)&this->field_0x260 = pTVar20;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_288.SharedReferenceCount.ReferenceController);
    pTVar22 = GetManagedArrayCollection(this,&local_278);
    local_4e8.Saved = true;
    local_4e8.bAllowCircularDependency = false;
    local_4e8._10_2_ = local_8e;
    local_4e8.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_4e8.GroupIndexDependency.Number = 0;
    pTVar20 = FManagedArrayCollection::AddAttribute<FName>
                        (pTVar22->Object,
                         ClothCollectionAttribute::SimAccessoryMeshPosition3DAttribute,
                         ClothCollectionGroup::SimAccessoryMeshes,&local_4e8);
    *(TManagedArray<FName> **)&this->field_0x268 = pTVar20;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_278.SharedReferenceCount.ReferenceController);
    pTVar22 = GetManagedArrayCollection(this,&local_268);
    local_4d8.Saved = true;
    local_4d8.bAllowCircularDependency = false;
    local_4d8._10_2_ = local_82;
    local_4d8.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_4d8.GroupIndexDependency.Number = 0;
    pTVar20 = FManagedArrayCollection::AddAttribute<FName>
                        (pTVar22->Object,ClothCollectionAttribute::SimAccessoryMeshNormalAttribute,
                         ClothCollectionGroup::SimAccessoryMeshes,&local_4d8);
    *(TManagedArray<FName> **)&this->field_0x270 = pTVar20;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_268.SharedReferenceCount.ReferenceController);
    pTVar22 = GetManagedArrayCollection(this,&local_258);
    local_4c8.Saved = true;
    local_4c8.bAllowCircularDependency = false;
    local_4c8._10_2_ = local_76;
    local_4c8.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_4c8.GroupIndexDependency.Number = 0;
    pTVar20 = FManagedArrayCollection::AddAttribute<FName>
                        (pTVar22->Object,
                         ClothCollectionAttribute::SimAccessoryMeshBoneIndicesAttribute,
                         ClothCollectionGroup::SimAccessoryMeshes,&local_4c8);
    *(TManagedArray<FName> **)&this->field_0x278 = pTVar20;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_258.SharedReferenceCount.ReferenceController);
    pTVar22 = GetManagedArrayCollection(this,&local_468);
    local_4b8.Saved = true;
    local_4b8.bAllowCircularDependency = false;
    local_4b8._10_2_ = local_6a;
    local_4b8.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_4b8.GroupIndexDependency.Number = 0;
    pTVar20 = FManagedArrayCollection::AddAttribute<FName>
                        (pTVar22->Object,
                         ClothCollectionAttribute::SimAccessoryMeshBoneWeightsAttribute,
                         ClothCollectionGroup::SimAccessoryMeshes,&local_4b8);
  }
  else {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a28.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_a28.GroupIndexDependency.Number = 0;
    local_a28.Saved = true;
    local_a28.bAllowCircularDependency = false;
    local_a28._10_2_ = uStack_d8e;
    pTVar17 = FManagedArrayCollection::AddAttribute<FString>
                        (pFVar1,ClothCollectionAttribute::SimMorphTargetName,
                         ClothCollectionGroup::SimMorphTargets,&local_a28);
    *(TManagedArray<FString> **)&this->field_0x1a0 = pTVar17;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a18.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_a18.GroupIndexDependency.Number = 0;
    local_a18.Saved = true;
    local_a18.bAllowCircularDependency = false;
    local_a18._10_2_ = uStack_d82;
    pTVar18 = FManagedArrayCollection::AddAttribute<int>
                        (pFVar1,ClothCollectionAttribute::SimMorphTargetVerticesStart,
                         ClothCollectionGroup::SimMorphTargets,&local_a18);
    *(TManagedArray<int> **)&this->field_0x1a8 = pTVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a08.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_a08.GroupIndexDependency.Number = 0;
    local_a08.Saved = true;
    local_a08.bAllowCircularDependency = false;
    local_a08._10_2_ = uStack_d76;
    pTVar18 = FManagedArrayCollection::AddAttribute<int>
                        (pFVar1,ClothCollectionAttribute::SimMorphTargetVerticesEnd,
                         ClothCollectionGroup::SimMorphTargets,&local_a08);
    *(TManagedArray<int> **)&this->field_0x1b0 = pTVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9f8.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_9f8.GroupIndexDependency.Number = 0;
    local_9f8.Saved = true;
    local_9f8.bAllowCircularDependency = false;
    local_9f8._10_2_ = uStack_d6a;
    pTVar19 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                        (pFVar1,ClothCollectionAttribute::SimMorphTargetPositionDelta,
                         ClothCollectionGroup::SimMorphTargetVertices,&local_9f8);
    *(TManagedArray<UE::Math::TVector<float>_> **)&this->field_0x1b8 = pTVar19;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9e8.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_9e8.GroupIndexDependency.Number = 0;
    local_9e8.Saved = true;
    local_9e8.bAllowCircularDependency = false;
    local_9e8._10_2_ = uStack_d5e;
    pTVar19 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                        (pFVar1,ClothCollectionAttribute::SimMorphTargetTangentZDelta,
                         ClothCollectionGroup::SimMorphTargetVertices,&local_9e8);
    *(TManagedArray<UE::Math::TVector<float>_> **)&this->field_0x1c0 = pTVar19;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9d8.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_9d8.GroupIndexDependency.Number = 0;
    local_9d8.Saved = true;
    local_9d8.bAllowCircularDependency = false;
    local_9d8._10_2_ = uStack_d52;
    pTVar18 = FManagedArrayCollection::AddAttribute<int>
                        (pFVar1,ClothCollectionAttribute::SimMorphTargetSimVertex3DIndex,
                         ClothCollectionGroup::SimMorphTargetVertices,&local_9d8);
    *(TManagedArray<int> **)&this->field_0x1c8 = pTVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9c8.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_9c8.GroupIndexDependency.Number = 0;
    local_9c8.Saved = true;
    local_9c8.bAllowCircularDependency = false;
    local_9c8._10_2_ = uStack_d46;
    pTVar19 = FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
                        (pFVar1,ClothCollectionAttribute::PreResizedSimPosition3D,
                         ClothCollectionGroup::SimVertices3D,&local_9c8);
    *(TManagedArray<UE::Math::TVector<float>_> **)&this->field_0x198 = pTVar19;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9b8.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_9b8.GroupIndexDependency.Number = 0;
    local_9b8.Saved = true;
    local_9b8.bAllowCircularDependency = false;
    local_9b8._10_2_ = uStack_d3a;
    pTVar20 = FManagedArrayCollection::AddAttribute<FName>
                        (pFVar1,ClothCollectionAttribute::SimAccessoryMeshName,
                         ClothCollectionGroup::SimAccessoryMeshes,&local_9b8);
    *(TManagedArray<FName> **)&this->field_0x260 = pTVar20;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9a8.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_9a8.GroupIndexDependency.Number = 0;
    local_9a8.Saved = true;
    local_9a8.bAllowCircularDependency = false;
    local_9a8._10_2_ = uStack_d2e;
    pTVar20 = FManagedArrayCollection::AddAttribute<FName>
                        (pFVar1,ClothCollectionAttribute::SimAccessoryMeshPosition3DAttribute,
                         ClothCollectionGroup::SimAccessoryMeshes,&local_9a8);
    *(TManagedArray<FName> **)&this->field_0x268 = pTVar20;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_998.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_998.GroupIndexDependency.Number = 0;
    local_998.Saved = true;
    local_998.bAllowCircularDependency = false;
    local_998._10_2_ = uStack_d22;
    pTVar20 = FManagedArrayCollection::AddAttribute<FName>
                        (pFVar1,ClothCollectionAttribute::SimAccessoryMeshNormalAttribute,
                         ClothCollectionGroup::SimAccessoryMeshes,&local_998);
    *(TManagedArray<FName> **)&this->field_0x270 = pTVar20;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_988.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_988.GroupIndexDependency.Number = 0;
    local_988.Saved = true;
    local_988.bAllowCircularDependency = false;
    local_988._10_2_ = uStack_dce;
    pTVar20 = FManagedArrayCollection::AddAttribute<FName>
                        (pFVar1,ClothCollectionAttribute::SimAccessoryMeshBoneIndicesAttribute,
                         ClothCollectionGroup::SimAccessoryMeshes,&local_988);
    *(TManagedArray<FName> **)&this->field_0x278 = pTVar20;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    local_468.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&this->field_0x8;
    pFVar1 = *(FManagedArrayCollection **)this;
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_978.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_978.GroupIndexDependency.Number = 0;
    local_978.Saved = true;
    local_978.bAllowCircularDependency = false;
    local_978._10_2_ = uStack_dde;
    pTVar20 = FManagedArrayCollection::AddAttribute<FName>
                        (pFVar1,ClothCollectionAttribute::SimAccessoryMeshBoneWeightsAttribute,
                         ClothCollectionGroup::SimAccessoryMeshes,&local_978);
  }
  *(TManagedArray<FName> **)&this->field_0x280 = pTVar20;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_468.SharedReferenceCount.ReferenceController);
  return;
}

// GetManagedArrayCollection @ 14db58000

TSharedRef<FManagedArrayCollection,1> * __thiscall
UE::Chaos::ClothAsset::FClothCollection::GetManagedArrayCollection
          (FClothCollection *this,TSharedRef<FManagedArrayCollection,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = *(FManagedArrayCollection **)this;
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x8;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// PostSerialize @ 14db662a0

void __thiscall
UE::Chaos::ClothAsset::FClothCollection::PostSerialize(FClothCollection *this,FArchive *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  FManagedArrayCollection *pFVar3;
  TManagedArray<FString> *pTVar4;
  TManagedArray<FSoftObjectPath> *pTVar5;
  TManagedArray<FName> *pTVar6;
  undefined8 local_res10;
  undefined2 local_30;
  undefined2 uStack_2e;
  FConstructionParameters local_28;
  
  if ((param_1->field_0x28 & 1) != 0) {
    pTVar4 = FManagedArrayCollection::FindAttributeTyped<FString>
                       (*(FManagedArrayCollection **)this,
                        ClothCollectionAttribute::PhysicsAssetPathName,ClothCollectionGroup::Lods);
    puVar1 = &this->field_0x8;
    if (pTVar4 != (TManagedArray<FString> *)0x0) {
      if (*(longlong *)&this->field_0x10 == 0) {
        pTVar2 = *(TReferenceControllerBase<1> **)puVar1;
        pFVar3 = *(FManagedArrayCollection **)this;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_30._0_1_ = true;
        local_30._1_1_ = false;
        local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
        local_28.GroupIndexDependency.Number = 0;
        local_res10 = 0;
        local_28.Saved = true;
        local_28.bAllowCircularDependency = false;
        local_28._10_2_ = uStack_2e;
        pTVar5 = FManagedArrayCollection::AddAttribute<FSoftObjectPath>
                           (pFVar3,ClothCollectionAttribute::PhysicsAssetSoftObjectPathName,
                            ClothCollectionGroup::Lods,&local_28);
        *(TManagedArray<FSoftObjectPath> **)&this->field_0x10 = pTVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      `UE::Chaos::ClothAsset::FClothCollection::PostSerialize'::__l5::<lambda_1>::operator()
                (&local_res10,pTVar4,*(TManagedArray<FSoftObjectPath> **)&this->field_0x10);
      pTVar2 = *(TReferenceControllerBase<1> **)puVar1;
      pFVar3 = *(FManagedArrayCollection **)this;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      FManagedArrayCollection::RemoveAttribute
                (pFVar3,ClothCollectionAttribute::PhysicsAssetPathName,ClothCollectionGroup::Lods);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    pTVar4 = FManagedArrayCollection::FindAttributeTyped<FString>
                       (*(FManagedArrayCollection **)this,
                        ClothCollectionAttribute::SkeletalMeshPathName,ClothCollectionGroup::Lods);
    if (pTVar4 != (TManagedArray<FString> *)0x0) {
      if (*(longlong *)&this->field_0x18 == 0) {
        pTVar2 = *(TReferenceControllerBase<1> **)puVar1;
        pFVar3 = *(FManagedArrayCollection **)this;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_30._0_1_ = true;
        local_30._1_1_ = false;
        local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
        local_28.GroupIndexDependency.Number = 0;
        local_res10 = 0;
        local_28.Saved = true;
        local_28.bAllowCircularDependency = false;
        local_28._10_2_ = uStack_2e;
        pTVar5 = FManagedArrayCollection::AddAttribute<FSoftObjectPath>
                           (pFVar3,ClothCollectionAttribute::SkeletalMeshSoftObjectPathName,
                            ClothCollectionGroup::Lods,&local_28);
        *(TManagedArray<FSoftObjectPath> **)&this->field_0x18 = pTVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      `UE::Chaos::ClothAsset::FClothCollection::PostSerialize'::__l5::<lambda_1>::operator()
                (&local_res10,pTVar4,*(TManagedArray<FSoftObjectPath> **)&this->field_0x18);
      pTVar2 = *(TReferenceControllerBase<1> **)puVar1;
      pFVar3 = *(FManagedArrayCollection **)this;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      FManagedArrayCollection::RemoveAttribute
                (pFVar3,ClothCollectionAttribute::SkeletalMeshPathName,ClothCollectionGroup::Lods);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    pTVar4 = FManagedArrayCollection::FindAttributeTyped<FString>
                       (*(FManagedArrayCollection **)this,
                        ClothCollectionAttribute::RenderMaterialPathName,
                        ClothCollectionGroup::RenderPatterns);
    if (pTVar4 != (TManagedArray<FString> *)0x0) {
      if (*(longlong *)&this->field_0x118 == 0) {
        pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
        pFVar3 = *(FManagedArrayCollection **)this;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_30._0_1_ = true;
        local_30._1_1_ = false;
        local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
        local_28.GroupIndexDependency.Number = 0;
        local_res10 = 0;
        local_28.Saved = true;
        local_28.bAllowCircularDependency = false;
        local_28._10_2_ = uStack_2e;
        pTVar5 = FManagedArrayCollection::AddAttribute<FSoftObjectPath>
                           (pFVar3,ClothCollectionAttribute::RenderMaterialSoftObjectPathName,
                            ClothCollectionGroup::RenderPatterns,&local_28);
        *(TManagedArray<FSoftObjectPath> **)&this->field_0x118 = pTVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      `UE::Chaos::ClothAsset::FClothCollection::PostSerialize'::__l5::<lambda_1>::operator()
                (&local_res10,pTVar4,*(TManagedArray<FSoftObjectPath> **)&this->field_0x118);
      pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
      pFVar3 = *(FManagedArrayCollection **)this;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      FManagedArrayCollection::RemoveAttribute
                (pFVar3,ClothCollectionAttribute::RenderMaterialPathName,
                 ClothCollectionGroup::RenderPatterns);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    if (((*(longlong *)&this->field_0x10 != 0) && (*(longlong *)&this->field_0x18 != 0)) &&
       (*(longlong *)&this->field_0x30 == 0)) {
      pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
      pFVar3 = *(FManagedArrayCollection **)this;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
      local_28.GroupIndexDependency.Number = 0;
      local_res10 = 0;
      local_28.Saved = true;
      local_28.bAllowCircularDependency = false;
      local_28._10_2_ = uStack_2e;
      pTVar6 = FManagedArrayCollection::AddAttribute<FName>
                         (pFVar3,ClothCollectionAttribute::ReferenceBoneName,
                          ClothCollectionGroup::Lods,&local_28);
      *(TManagedArray<FName> **)&this->field_0x30 = pTVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
  return;
}

// RemoveElements @ 14db68070

void __thiscall
UE::Chaos::ClothAsset::FClothCollection::RemoveElements
          (FClothCollection *this,FName *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x8;
  plVar2 = *(longlong **)this;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar2 + 0x28))(plVar2,param_1,param_2,0x101);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// RemoveElements @ 14db680b0

void __thiscall
UE::Chaos::ClothAsset::FClothCollection::RemoveElements
          (FClothCollection *this,FName *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TManagedArray<int> *param_3,TManagedArray<int> *param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if (param_2->ArrayNum != 0) {
    if ((((param_3 == (TManagedArray<int> *)0x0) || (param_5 < 0)) ||
        (*(int *)&param_3->field_0x18 <= param_5)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartArray && StartArray->GetConstArray().IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                           ,0x365,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((((param_4 == (TManagedArray<int> *)0x0) || (param_5 < 0)) ||
        (*(int *)&param_4->field_0x18 <= param_5)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("EndArray && EndArray->GetConstArray().IsValidIndex(ArrayIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                           ,0x366,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = 0;
    if (param_5 < *(int *)&param_3->field_0x18) {
      uVar8 = (uint)~param_5 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    piVar1 = (int *)(*(longlong *)&param_3->field_0x10 + (longlong)param_5 * 4);
    uVar8 = 0;
    if (param_5 < *(int *)&param_4->field_0x18) {
      uVar8 = (uint)~param_5 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    piVar2 = (int *)(*(longlong *)&param_4->field_0x10 + (longlong)param_5 * 4);
    if (((*piVar1 == -1) || (*piVar2 == -1)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Start != INDEX_NONE && End != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                           ,0x36a,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar3 = *piVar1;
    iVar9 = (*piVar2 - iVar3) + 1;
    if ((param_2->ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((*(int *)(param_2->AllocatorInstance).Data < *piVar1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SortedDeletionList[0] >= Start",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                           ,0x36f,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar10 = param_2->ArrayNum - 1;
    uVar8 = 0;
    if ((int)uVar10 < param_2->ArrayNum) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((*piVar2 < *(int *)((param_2->AllocatorInstance).Data + (longlong)param_2->ArrayNum * 4 + -4
                           )) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SortedDeletionList.Last() <= End",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                           ,0x370,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((iVar9 < param_2->ArrayNum) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("OrigNumElements >= SortedDeletionList.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                           ,0x371,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    plVar5 = *(longlong **)this;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    (**(code **)(*plVar5 + 0x28))(plVar5,param_1,param_2,0x101);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (param_2->ArrayNum == iVar9) {
      *piVar2 = -1;
      *piVar1 = -1;
    }
    else {
      iVar9 = (iVar3 - param_2->ArrayNum) + -1 + iVar9;
      if (((*piVar1 != iVar3) && (*piVar1 != -1)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Start == OrigStart || Start == INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                             ,0x37d,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((*piVar2 != iVar9) && (*piVar2 != -1)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("End == NewEnd || End == INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                             ,0x37e,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *piVar1 = iVar3;
      *piVar2 = iVar9;
    }
  }
  return;
}

// RemoveSimAccessoryMeshBoneIndices @ 14db68eb0

void __thiscall
UE::Chaos::ClothAsset::FClothCollection::RemoveSimAccessoryMeshBoneIndices
          (FClothCollection *this,FName *param_1)

{
  FManagedArrayCollection *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_1->ComparisonIndex).Value !=
      ClothCollectionAttribute::SimAccessoryMeshBoneIndicesPrefix.ComparisonIndex.Value) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private::NamesHaveMatchingPrefix(AttributeName, ClothCollectionAttribute::SimAccessoryMeshBoneIndicesPrefix)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                       ,0x527,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = *(FManagedArrayCollection **)this;
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FManagedArrayCollection::RemoveAttribute(this_00,*param_1,ClothCollectionGroup::SimVertices3D);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// RemoveSimAccessoryMeshBoneWeights @ 14db68f30

void __thiscall
UE::Chaos::ClothAsset::FClothCollection::RemoveSimAccessoryMeshBoneWeights
          (FClothCollection *this,FName *param_1)

{
  FManagedArrayCollection *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_1->ComparisonIndex).Value !=
      ClothCollectionAttribute::SimAccessoryMeshBoneWeightsPrefix.ComparisonIndex.Value) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private::NamesHaveMatchingPrefix(AttributeName, ClothCollectionAttribute::SimAccessoryMeshBoneWeightsPrefix)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                       ,0x52d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = *(FManagedArrayCollection **)this;
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FManagedArrayCollection::RemoveAttribute(this_00,*param_1,ClothCollectionGroup::SimVertices3D);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// RemoveSimAccessoryMeshNormal @ 14db68fb0

void __thiscall
UE::Chaos::ClothAsset::FClothCollection::RemoveSimAccessoryMeshNormal
          (FClothCollection *this,FName *param_1)

{
  FManagedArrayCollection *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_1->ComparisonIndex).Value !=
      ClothCollectionAttribute::SimAccessoryMeshNormalPrefix.ComparisonIndex.Value) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private::NamesHaveMatchingPrefix(AttributeName, ClothCollectionAttribute::SimAccessoryMeshNormalPrefix)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                       ,0x521,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = *(FManagedArrayCollection **)this;
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FManagedArrayCollection::RemoveAttribute(this_00,*param_1,ClothCollectionGroup::SimVertices3D);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// RemoveSimAccessoryMeshPosition3D @ 14db69030

void __thiscall
UE::Chaos::ClothAsset::FClothCollection::RemoveSimAccessoryMeshPosition3D
          (FClothCollection *this,FName *param_1)

{
  FManagedArrayCollection *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_1->ComparisonIndex).Value !=
      ClothCollectionAttribute::SimAccessoryMeshPosition3DPrefix.ComparisonIndex.Value) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Private::NamesHaveMatchingPrefix(AttributeName, ClothCollectionAttribute::SimAccessoryMeshPosition3DPrefix)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                       ,0x51b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = *(FManagedArrayCollection **)this;
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FManagedArrayCollection::RemoveAttribute(this_00,*param_1,ClothCollectionGroup::SimVertices3D);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// RemoveUserDefinedAttribute @ 14db6a080

void __thiscall
UE::Chaos::ClothAsset::FClothCollection::RemoveUserDefinedAttribute
          (FClothCollection *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FManagedArrayCollection *this_00;
  uint uVar3;
  FName *pFVar4;
  FName *pFVar5;
  FName FVar6;
  longlong lVar7;
  FName *pFVar8;
  
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributeNamesMap._8_4_ ==
      ClothAsset::Private::FixedAttributeNamesMap._52_4_) {
    return;
  }
  lVar7 = 0x155376318;
  if (ClothAsset::Private::FixedAttributeNamesMap._64_8_ != 0) {
    lVar7 = ClothAsset::Private::FixedAttributeNamesMap._64_8_;
  }
  uVar3 = *(uint *)(lVar7 + (ulonglong)
                            (ClothAsset::Private::FixedAttributeNamesMap._72_4_ - 1 &
                            FVar1.Number + uVar3) * 4);
  if (uVar3 == 0xffffffff) {
    return;
  }
  while (pFVar5 = (FName *)((longlong)(int)uVar3 * 0x20 +
                           ClothAsset::Private::FixedAttributeNamesMap._0_8_), *pFVar5 != FVar1) {
    uVar3 = pFVar5[3].ComparisonIndex.Value;
    if (uVar3 == 0xffffffff) {
      return;
    }
  }
  pFVar8 = pFVar5 + 1;
  if (pFVar5 == (FName *)0x0) {
    pFVar8 = (FName *)0x0;
  }
  if (pFVar8 == (FName *)0x0) {
    return;
  }
  FVar1 = *param_2;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (ClothAsset::Private::FixedAttributePrefixNamesMap._8_4_ !=
      ClothAsset::Private::FixedAttributePrefixNamesMap._52_4_) {
    lVar7 = 0x155376368;
    if (ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_ != 0) {
      lVar7 = ClothAsset::Private::FixedAttributePrefixNamesMap._64_8_;
    }
    uVar3 = *(uint *)(lVar7 + (ulonglong)
                              (ClothAsset::Private::FixedAttributePrefixNamesMap._72_4_ - 1 &
                              FVar1.Number + uVar3) * 4);
    while (uVar3 != 0xffffffff) {
      pFVar5 = (FName *)((longlong)(int)uVar3 * 0x20 +
                        ClothAsset::Private::FixedAttributePrefixNamesMap._0_8_);
      if (*pFVar5 == FVar1) {
        pFVar4 = pFVar5 + 1;
        if (pFVar5 == (FName *)0x0) {
          pFVar4 = (FName *)0x0;
        }
        if (pFVar4 != (FName *)0x0) {
          FVar6 = *pFVar4;
          FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar4[1].ComparisonIndex.Value * 8);
          if (FVar6 != FVar1) {
            do {
              if ((param_1->ComparisonIndex).Value == *(uint *)FVar6) {
                return;
              }
              FVar6 = (FName)((longlong)FVar6 + 8);
            } while (FVar6 != FVar1);
          }
        }
        break;
      }
      uVar3 = pFVar5[3].ComparisonIndex.Value;
    }
  }
  FVar6 = *pFVar8;
  FVar1 = (FName)((longlong)FVar6 + (longlong)(int)pFVar8[1].ComparisonIndex.Value * 8);
  if (FVar6 != FVar1) {
    do {
      if (*(FName *)FVar6 == *param_1) {
        return;
      }
      FVar6 = (FName)((longlong)FVar6 + 8);
    } while (FVar6 != FVar1);
  }
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x8;
  this_00 = *(FManagedArrayCollection **)this;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  FManagedArrayCollection::RemoveAttribute(this_00,*param_1,*param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// SetNumElements @ 14db6d9b0

int __thiscall
UE::Chaos::ClothAsset::FClothCollection::SetNumElements
          (FClothCollection *this,int param_1,FName *param_2,TManagedArray<int> *param_3,
          TManagedArray<int> *param_4,int param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  FManagedArrayCollection *this_00;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  
  if ((param_1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                         ,0x31e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  uVar9 = (ulonglong)param_5;
  if ((((param_3 == (TManagedArray<int> *)0x0) || (param_5 < 0)) ||
      (*(int *)&param_3->field_0x18 <= param_5)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartArray && StartArray->GetConstArray().IsValidIndex(ArrayIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                         ,800,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if ((((param_4 == (TManagedArray<int> *)0x0) || (param_5 < 0)) ||
      (*(int *)&param_4->field_0x18 <= param_5)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EndArray && EndArray->GetConstArray().IsValidIndex(ArrayIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                         ,0x321,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = 0;
  uVar6 = 0;
  if (param_5 < *(int *)&param_3->field_0x18) {
    uVar6 = (uint)~param_5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  lVar10 = uVar9 * 4;
  piVar12 = (int *)(*(longlong *)&param_3->field_0x10 + lVar10);
  uVar6 = 0;
  if (param_5 < *(int *)&param_4->field_0x18) {
    uVar6 = (uint)~param_5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  piVar11 = (int *)(*(longlong *)&param_4->field_0x10 + lVar10);
  if (((*piVar12 == -1) && (*piVar11 != -1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Start != INDEX_NONE || End == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                         ,0x325,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar7 = *piVar12;
  if (iVar7 != -1) {
    iVar5 = (*piVar11 - iVar7) + 1;
  }
  iVar13 = param_1 - iVar5;
  if (iVar13 == 0) {
    return iVar7;
  }
  if (iVar13 < 1) {
    pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    plVar2 = *(longlong **)this;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2,-iVar13,iVar7 + param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (param_1 != 0) {
      *piVar11 = iVar7 + param_1 + -1;
      goto LAB_14db6dcd2;
    }
    iVar5 = -1;
    *piVar12 = -1;
  }
  else {
    while (-1 < param_5) {
      uVar8 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar8 < *(int *)&param_4->field_0x18) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      if (*(int *)(lVar10 + *(longlong *)&param_4->field_0x10) != -1) {
        uVar6 = 0;
        if ((int)uVar8 < *(int *)&param_4->field_0x18) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
        iVar7 = *(int *)(*(longlong *)&param_4->field_0x10 + (uVar9 & 0xffffffff) * 4);
        goto LAB_14db6dbe5;
      }
      lVar10 = lVar10 + -4;
      param_5 = uVar8 - 1;
      uVar9 = (ulonglong)(uint)param_5;
    }
    iVar7 = -1;
LAB_14db6dbe5:
    pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    this_00 = *(FManagedArrayCollection **)this;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    FManagedArrayCollection::InsertElements(this_00,iVar13,iVar7 + 1,*param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (iVar5 == 0) {
      *piVar12 = iVar7 + 1;
    }
    iVar5 = param_1 + -1 + *piVar12;
  }
  *piVar11 = iVar5;
LAB_14db6dcd2:
  return *piVar12;
}

// SetNumElements @ 14db6dd00

void __thiscall
UE::Chaos::ClothAsset::FClothCollection::SetNumElements
          (FClothCollection *this,int param_1,FName *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FManagedArrayCollection *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.cpp"
                       ,0x30b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x8;
  pFVar2 = *(FManagedArrayCollection **)this;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar5 = FManagedArrayCollection::NumElements(pFVar2,*param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar5 = param_1 - iVar5;
  if (iVar5 != 0) {
    pFVar2 = *(FManagedArrayCollection **)this;
    pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x8;
    if (iVar5 < 1) {
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,param_2,-iVar5,param_1);
    }
    else {
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      FManagedArrayCollection::AddElements(pFVar2,iVar5,*param_2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}


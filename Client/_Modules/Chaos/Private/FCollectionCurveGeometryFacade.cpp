// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// FCollectionCurveGeometryFacade @ 143f865c0

FCollectionCurveGeometryFacade * __thiscall
GeometryCollection::Facades::FCollectionCurveGeometryFacade::FCollectionCurveGeometryFacade
          (FCollectionCurveGeometryFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FCollectionCurveGeometryFacade *pFVar4;
  TManagedArray<UE::Math::TVector<float>_> *pTVar5;
  TManagedArray<int> *pTVar6;
  FValueType *pFVar7;
  FValueType *pFVar8;
  FValueType *pFVar9;
  TManagedArray<float> *pTVar10;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  
  this->ConstCollection = param_1;
  this->Collection = param_1;
  pFVar9 = (FValueType *)0x0;
  (this->PointRestOrientations).ConstCollection = param_1;
  (this->PointRestOrientations).Collection = param_1;
  (this->PointRestOrientations).Name = PointRestOrientationsAttribute;
  (this->PointRestOrientations).Group = PointsGroup;
  (this->PointRestOrientations).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PointRestOrientations).DefaultGroupDependency.Number = 0;
  local_78 = PointRestOrientationsAttribute;
  local_70 = PointsGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_78);
  pFVar8 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar8 = pFVar9;
  }
  pFVar7 = pFVar9;
  if ((pFVar8 != (FValueType *)0x0) && (pFVar8->ArrayType == FQuatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar8);
    pFVar7 = (FValueType *)pFVar8->ManagedArray;
    if ((pFVar7 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCollectionCurveGeometryFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar7->GroupIndexDependency).Number = 1;
  }
  (this->PointRestOrientations).AttributeArray = (TManagedArray<UE::Math::TQuat<float>_> *)pFVar7;
  (this->PointRestOrientations).ConstAttributeArray =
       (TManagedArray<UE::Math::TQuat<float>_> *)pFVar7;
  (this->PointRestPositions).ConstCollection = param_1;
  (this->PointRestPositions).Collection = param_1;
  (this->PointRestPositions).Name = PointRestPositionsAttribute;
  (this->PointRestPositions).Group = PointsGroup;
  (this->PointRestPositions).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PointRestPositions).DefaultGroupDependency.Number = 0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                     (param_1,PointRestPositionsAttribute,PointsGroup);
  (this->PointRestPositions).AttributeArray = pTVar5;
  (this->PointRestPositions).ConstAttributeArray = pTVar5;
  (this->CurvePointOffsets).ConstCollection = param_1;
  (this->CurvePointOffsets).Collection = param_1;
  (this->CurvePointOffsets).Name = CurvePointOffsetsAttribute;
  (this->CurvePointOffsets).Group = CurvesGroup;
  (this->CurvePointOffsets).DefaultGroupDependency.ComparisonIndex = 0;
  (this->CurvePointOffsets).DefaultGroupDependency.Number = 0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,CurvePointOffsetsAttribute,CurvesGroup);
  (this->CurvePointOffsets).AttributeArray = pTVar6;
  (this->CurvePointOffsets).ConstAttributeArray = pTVar6;
  (this->GeometryCurveOffsets).ConstCollection = param_1;
  (this->GeometryCurveOffsets).Collection = param_1;
  (this->GeometryCurveOffsets).Name = GeometryCurveOffsetsAttribute;
  (this->GeometryCurveOffsets).Group = FGeometryCollection::GeometryGroup;
  (this->GeometryCurveOffsets).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GeometryCurveOffsets).DefaultGroupDependency.Number = 0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,GeometryCurveOffsetsAttribute,FGeometryCollection::GeometryGroup);
  (this->GeometryCurveOffsets).AttributeArray = pTVar6;
  (this->GeometryCurveOffsets).ConstAttributeArray = pTVar6;
  (this->PointCurveIndices).ConstCollection = param_1;
  (this->PointCurveIndices).Collection = param_1;
  (this->PointCurveIndices).Name = PointCurveIndicesAttribute;
  (this->PointCurveIndices).Group = PointsGroup;
  (this->PointCurveIndices).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PointCurveIndices).DefaultGroupDependency.Number = 0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,PointCurveIndicesAttribute,PointsGroup);
  (this->PointCurveIndices).AttributeArray = pTVar6;
  (this->PointCurveIndices).ConstAttributeArray = pTVar6;
  (this->CurveGeometryIndices).ConstCollection = param_1;
  (this->CurveGeometryIndices).Collection = param_1;
  (this->CurveGeometryIndices).Name = CurveGeometryIndicesAttribute;
  (this->CurveGeometryIndices).Group = CurvesGroup;
  (this->CurveGeometryIndices).DefaultGroupDependency.ComparisonIndex = 0;
  (this->CurveGeometryIndices).DefaultGroupDependency.Number = 0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,CurveGeometryIndicesAttribute,CurvesGroup);
  (this->CurveGeometryIndices).AttributeArray = pTVar6;
  (this->CurveGeometryIndices).ConstAttributeArray = pTVar6;
  (this->GeometryGroupNames).ConstCollection = param_1;
  (this->GeometryGroupNames).Collection = param_1;
  (this->GeometryGroupNames).Name = GeometryGroupNamesAttribute;
  (this->GeometryGroupNames).Group = FGeometryCollection::GeometryGroup;
  (this->GeometryGroupNames).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GeometryGroupNames).DefaultGroupDependency.Number = 0;
  local_68 = GeometryGroupNamesAttribute;
  local_60 = FGeometryCollection::GeometryGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_68);
  pFVar8 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar8 = pFVar9;
  }
  if ((pFVar8 != (FValueType *)0x0) && (pFVar8->ArrayType == FStringType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar8);
    pFVar9 = (FValueType *)pFVar8->ManagedArray;
    if ((pFVar9 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCollectionCurveGeometryFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar9->GroupIndexDependency).Number = 1;
  }
  (this->GeometryGroupNames).AttributeArray = (TManagedArray<FString> *)pFVar9;
  (this->GeometryGroupNames).ConstAttributeArray = (TManagedArray<FString> *)pFVar9;
  (this->GeometryCurveThickness).ConstCollection = param_1;
  (this->GeometryCurveThickness).Collection = param_1;
  (this->GeometryCurveThickness).Name = GeometryCurveThicknessAttribute;
  (this->GeometryCurveThickness).Group = FGeometryCollection::GeometryGroup;
  (this->GeometryCurveThickness).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GeometryCurveThickness).DefaultGroupDependency.Number = 0;
  local_58 = GeometryCurveThicknessAttribute;
  local_50 = FGeometryCollection::GeometryGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  pFVar9 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar9 = (FValueType *)0x0;
  }
  if ((pFVar9 == (FValueType *)0x0) || (pFVar9->ArrayType != FFloatType)) {
    pTVar10 = (TManagedArray<float> *)0x0;
  }
  else {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar9);
    pTVar10 = (TManagedArray<float> *)pFVar9->ManagedArray;
    if ((pTVar10 == (TManagedArray<float> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCollectionCurveGeometryFacade *)(*pcVar1)();
      return pFVar4;
    }
    pTVar10->field_0x8 = 1;
  }
  (this->GeometryCurveThickness).AttributeArray = pTVar10;
  (this->GeometryCurveThickness).ConstAttributeArray = pTVar10;
  (this->CurveSourceIndices).ConstCollection = param_1;
  (this->CurveSourceIndices).Collection = param_1;
  (this->CurveSourceIndices).Name = CurveSourceIndicesAttribute;
  (this->CurveSourceIndices).Group = CurvesGroup;
  (this->CurveSourceIndices).DefaultGroupDependency.ComparisonIndex = 0;
  (this->CurveSourceIndices).DefaultGroupDependency.Number = 0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,CurveSourceIndicesAttribute,CurvesGroup);
  (this->CurveSourceIndices).AttributeArray = pTVar6;
  (this->CurveSourceIndices).ConstAttributeArray = pTVar6;
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionCurveFacade.cpp"
                         ,0x42,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FCollectionCurveGeometryFacade *)(*pcVar1)();
    return pFVar4;
  }
  TManagedArrayAccessor<UE::Math::TQuat<float>_>::Add
            (&this->PointRestOrientations,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            (&this->PointRestPositions,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->CurvePointOffsets,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->GeometryCurveOffsets,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->PointCurveIndices,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->CurveGeometryIndices,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<FString>::Add(&this->GeometryGroupNames,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->GeometryCurveThickness,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->CurveSourceIndices,MakePersistent,(FName)0x0);
  return this;
}

// FCollectionCurveGeometryFacade @ 143f86b10

FCollectionCurveGeometryFacade * __thiscall
GeometryCollection::Facades::FCollectionCurveGeometryFacade::FCollectionCurveGeometryFacade
          (FCollectionCurveGeometryFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FCollectionCurveGeometryFacade *pFVar4;
  TManagedArray<int> *pTVar5;
  TManagedArray<FString> *pTVar6;
  char *pcVar7;
  TManagedArray<UE::Math::TQuat<float>_> *pTVar8;
  TManagedArray<UE::Math::TVector<float>_> *pTVar9;
  TManagedArray<float> *pTVar10;
  char *pcVar11;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  
  this->ConstCollection = param_1;
  pcVar11 = (char *)0x0;
  this->Collection = (FManagedArrayCollection *)0x0;
  (this->PointRestOrientations).ConstCollection = param_1;
  (this->PointRestOrientations).Collection = (FManagedArrayCollection *)0x0;
  (this->PointRestOrientations).Name = PointRestOrientationsAttribute;
  (this->PointRestOrientations).Group = PointsGroup;
  (this->PointRestOrientations).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PointRestOrientations).DefaultGroupDependency.Number = 0;
  (this->PointRestOrientations).AttributeArray = (TManagedArray<UE::Math::TQuat<float>_> *)0x0;
  local_60 = PointRestOrientationsAttribute;
  local_58 = PointsGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_60);
  pcVar7 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar7 = pcVar11;
  }
  if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\n')) {
    pTVar8 = (TManagedArray<UE::Math::TQuat<float>_> *)0x0;
  }
  else {
    pTVar8 = *(TManagedArray<UE::Math::TQuat<float>_> **)(pcVar7 + 0x20);
    if (pTVar8 == (TManagedArray<UE::Math::TQuat<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FCollectionCurveGeometryFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->PointRestOrientations).ConstAttributeArray = pTVar8;
  (this->PointRestPositions).ConstCollection = param_1;
  (this->PointRestPositions).Collection = (FManagedArrayCollection *)0x0;
  (this->PointRestPositions).Name = PointRestPositionsAttribute;
  (this->PointRestPositions).Group = PointsGroup;
  (this->PointRestPositions).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PointRestPositions).DefaultGroupDependency.Number = 0;
  (this->PointRestPositions).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_50 = PointRestPositionsAttribute;
  local_48 = PointsGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_50);
  pcVar7 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar7 = pcVar11;
  }
  if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\x01')) {
    pTVar9 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  else {
    pTVar9 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar7 + 0x20);
    if (pTVar9 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FCollectionCurveGeometryFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->PointRestPositions).ConstAttributeArray = pTVar9;
  (this->CurvePointOffsets).ConstCollection = param_1;
  (this->CurvePointOffsets).Collection = (FManagedArrayCollection *)0x0;
  (this->CurvePointOffsets).Name = CurvePointOffsetsAttribute;
  (this->CurvePointOffsets).Group = CurvesGroup;
  (this->CurvePointOffsets).DefaultGroupDependency.ComparisonIndex = 0;
  (this->CurvePointOffsets).DefaultGroupDependency.Number = 0;
  (this->CurvePointOffsets).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,CurvePointOffsetsAttribute,CurvesGroup);
  (this->CurvePointOffsets).ConstAttributeArray = pTVar5;
  (this->GeometryCurveOffsets).ConstCollection = param_1;
  (this->GeometryCurveOffsets).Collection = (FManagedArrayCollection *)0x0;
  (this->GeometryCurveOffsets).Name = GeometryCurveOffsetsAttribute;
  (this->GeometryCurveOffsets).Group = FGeometryCollection::GeometryGroup;
  (this->GeometryCurveOffsets).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GeometryCurveOffsets).DefaultGroupDependency.Number = 0;
  (this->GeometryCurveOffsets).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,GeometryCurveOffsetsAttribute,FGeometryCollection::GeometryGroup);
  (this->GeometryCurveOffsets).ConstAttributeArray = pTVar5;
  (this->PointCurveIndices).ConstCollection = param_1;
  (this->PointCurveIndices).Collection = (FManagedArrayCollection *)0x0;
  (this->PointCurveIndices).Name = PointCurveIndicesAttribute;
  (this->PointCurveIndices).Group = PointsGroup;
  (this->PointCurveIndices).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PointCurveIndices).DefaultGroupDependency.Number = 0;
  (this->PointCurveIndices).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,PointCurveIndicesAttribute,PointsGroup);
  (this->PointCurveIndices).ConstAttributeArray = pTVar5;
  (this->CurveGeometryIndices).ConstCollection = param_1;
  (this->CurveGeometryIndices).Collection = (FManagedArrayCollection *)0x0;
  (this->CurveGeometryIndices).Name = CurveGeometryIndicesAttribute;
  (this->CurveGeometryIndices).Group = CurvesGroup;
  (this->CurveGeometryIndices).DefaultGroupDependency.ComparisonIndex = 0;
  (this->CurveGeometryIndices).DefaultGroupDependency.Number = 0;
  (this->CurveGeometryIndices).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,CurveGeometryIndicesAttribute,CurvesGroup);
  (this->CurveGeometryIndices).ConstAttributeArray = pTVar5;
  (this->GeometryGroupNames).ConstCollection = param_1;
  (this->GeometryGroupNames).Collection = (FManagedArrayCollection *)0x0;
  (this->GeometryGroupNames).Name = GeometryGroupNamesAttribute;
  (this->GeometryGroupNames).Group = FGeometryCollection::GeometryGroup;
  (this->GeometryGroupNames).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GeometryGroupNames).DefaultGroupDependency.Number = 0;
  (this->GeometryGroupNames).AttributeArray = (TManagedArray<FString> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<FString>
                     (param_1,GeometryGroupNamesAttribute,FGeometryCollection::GeometryGroup);
  (this->GeometryGroupNames).ConstAttributeArray = pTVar6;
  (this->GeometryCurveThickness).ConstCollection = param_1;
  (this->GeometryCurveThickness).Collection = (FManagedArrayCollection *)0x0;
  (this->GeometryCurveThickness).Name = GeometryCurveThicknessAttribute;
  (this->GeometryCurveThickness).Group = FGeometryCollection::GeometryGroup;
  (this->GeometryCurveThickness).AttributeArray = (TManagedArray<float> *)0x0;
  (this->GeometryCurveThickness).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GeometryCurveThickness).DefaultGroupDependency.Number = 0;
  local_40 = GeometryCurveThicknessAttribute;
  local_38 = FGeometryCollection::GeometryGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_40);
  pcVar7 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar7 = pcVar11;
  }
  if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\t')) {
    pTVar10 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar10 = *(TManagedArray<float> **)(pcVar7 + 0x20);
    if (pTVar10 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FCollectionCurveGeometryFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->GeometryCurveThickness).ConstAttributeArray = pTVar10;
  (this->CurveSourceIndices).ConstCollection = param_1;
  (this->CurveSourceIndices).Collection = (FManagedArrayCollection *)0x0;
  (this->CurveSourceIndices).Name = CurveSourceIndicesAttribute;
  (this->CurveSourceIndices).Group = CurvesGroup;
  (this->CurveSourceIndices).DefaultGroupDependency.ComparisonIndex = 0;
  (this->CurveSourceIndices).DefaultGroupDependency.Number = 0;
  (this->CurveSourceIndices).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,CurveSourceIndicesAttribute,CurvesGroup);
  (this->CurveSourceIndices).ConstAttributeArray = pTVar5;
  return this;
}

// BuildGeometryCollection @ 143f9d240

void __thiscall
GeometryCollection::Facades::FCollectionCurveGeometryFacade::BuildGeometryCollection
          (FCollectionCurveGeometryFacade *this)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  FManagedArrayCollection *pFVar7;
  TManagedArray<int> *pTVar8;
  TManagedArray<FString> *pTVar9;
  FScriptContainerElement *_Src;
  TManagedArray<float> *pTVar10;
  TManagedArray<UE::Math::TQuat<float>_> *pTVar11;
  TManagedArray<UE::Math::TVector<float>_> *pTVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  code *pcVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  float fVar20;
  __m128 _Var21;
  __m128 _Var22;
  __m128 _Var23;
  FName FVar24;
  FName FVar25;
  TManagedArray<FLinearColor> *pTVar26;
  TManagedArray<int> *pTVar27;
  TManagedArray<FString> *pTVar28;
  TManagedArray<float> *pTVar29;
  TManagedArray<bool> *pTVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  bool bVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  TManagedArray<UE::Math::TVector<float>_> *pTVar38;
  TManagedArrayBase<UE::Math::TVector<float>_> *this_00;
  TManagedArrayBase<UE::Math::TVector<float>_> *this_01;
  TManagedArray<int> *pTVar39;
  TManagedArray<UE::Math::TBox<double>_> *pTVar40;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar41;
  longlong lVar42;
  ForAnyElementType *pFVar43;
  longlong lVar44;
  uint uVar45;
  longlong lVar46;
  undefined1 *puVar47;
  uint uVar48;
  ulonglong uVar49;
  ForAnyElementType *pFVar50;
  uint uVar51;
  undefined1 *puVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  uint local_248;
  uint local_244;
  uint local_23c;
  longlong local_238;
  longlong local_230;
  ulonglong local_208;
  TVector<float>_u_0 local_1f8;
  int local_1e8;
  TManagedArray<UE::Math::TVector<float>_> *local_1e0;
  TManagedArray<UE::Math::TIntVector3<int>_> *local_1d8;
  TVector<float>_u_0 local_1d0;
  TManagedArray<FLinearColor> *local_1c0;
  TManagedArray<int> *local_1b8;
  TManagedArray<int> *local_1b0;
  longlong local_1a8;
  TVector<float>_u_0 local_198;
  TVector<float>_u_0 local_188;
  FLinearColor_u_0 local_178;
  TManagedArray<FString> *local_168;
  TManagedArray<int> *local_160;
  TManagedArray<int> *local_158;
  TManagedArray<float> *local_150;
  TManagedArray<float> *local_148;
  longlong local_140;
  TManagedArray<bool> *local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  TManagedArray<int> *local_118;
  TManagedArray<int> *local_110;
  longlong local_108;
  TManagedArray<int> *local_100;
  TVector<float>_u_0 local_f8;
  TVector<float>_u_0 local_ec;
  TManagedArray<FLinearColor> *local_e0;
  FLinearColor_u_0 local_d8;
  FName local_c8;
  FName local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined4 uStack_87;
  undefined2 uStack_83;
  undefined1 uStack_81;
  
  if (this->Collection != (FManagedArrayCollection *)0x0) {
    FGeometryCollection::DefineGeometrySchema(this->Collection);
    FManagedArrayCollection::EmptyGroup(this->Collection,FTransformCollection::TransformGroup);
    FVar24 = FTransformCollection::TransformGroup;
    pTVar39 = (this->GeometryCurveOffsets).ConstAttributeArray;
    pFVar7 = this->Collection;
    if (pTVar39 == (TManagedArray<int> *)0x0) {
      iVar34 = FManagedArrayCollection::NumElements
                         ((this->GeometryCurveOffsets).ConstCollection,
                          (this->GeometryCurveOffsets).Group);
    }
    else {
      iVar34 = (**(code **)(*(longlong *)pTVar39 + 0x60))();
    }
    FManagedArrayCollection::AddElements(pFVar7,iVar34,FVar24);
    FManagedArrayCollection::EmptyGroup(this->Collection,FGeometryCollection::VerticesGroup);
    FVar24 = FGeometryCollection::VerticesGroup;
    pTVar38 = (this->PointRestPositions).ConstAttributeArray;
    pFVar7 = this->Collection;
    if (pTVar38 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      iVar34 = FManagedArrayCollection::NumElements
                         ((this->PointRestPositions).ConstCollection,
                          (this->PointRestPositions).Group);
    }
    else {
      iVar34 = (**(code **)(*(longlong *)pTVar38 + 0x60))();
    }
    FManagedArrayCollection::AddElements(pFVar7,iVar34 * 2,FVar24);
    FManagedArrayCollection::EmptyGroup(this->Collection,FGeometryCollection::FacesGroup);
    FVar24 = FGeometryCollection::FacesGroup;
    pTVar39 = (this->CurvePointOffsets).ConstAttributeArray;
    pFVar7 = this->Collection;
    if (pTVar39 == (TManagedArray<int> *)0x0) {
      iVar34 = FManagedArrayCollection::NumElements
                         ((this->CurvePointOffsets).ConstCollection,(this->CurvePointOffsets).Group)
      ;
    }
    else {
      iVar34 = (**(code **)(*(longlong *)pTVar39 + 0x60))();
    }
    pTVar38 = (this->PointRestPositions).ConstAttributeArray;
    if (pTVar38 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      iVar35 = FManagedArrayCollection::NumElements
                         ((this->PointRestPositions).ConstCollection,
                          (this->PointRestPositions).Group);
    }
    else {
      iVar35 = (**(code **)(*(longlong *)pTVar38 + 0x60))();
    }
    FManagedArrayCollection::AddElements(pFVar7,(iVar35 - iVar34) * 2,FVar24);
    FManagedArrayCollection::EmptyGroup(this->Collection,FGeometryCollection::MaterialGroup);
    pTVar38 = FManagedArrayCollection::ModifyAttribute<UE::Math::TVector<float>_>
                        (this->Collection,FGeometryCollection::VertexPositionAttribute,
                         FGeometryCollection::VerticesGroup);
    local_1e0 = FManagedArrayCollection::ModifyAttribute<UE::Math::TVector<float>_>
                          (this->Collection,FGeometryCollection::VertexNormalAttribute,
                           FGeometryCollection::VerticesGroup);
    this_00 = (TManagedArrayBase<UE::Math::TVector<float>_> *)
              FManagedArrayCollection::ModifyAttribute<UE::Math::TVector<float>_>
                        (this->Collection,FGeometryCollection::VertexTangentUAttribute,
                         FGeometryCollection::VerticesGroup);
    this_01 = (TManagedArrayBase<UE::Math::TVector<float>_> *)
              FManagedArrayCollection::ModifyAttribute<UE::Math::TVector<float>_>
                        (this->Collection,FGeometryCollection::VertexTangentVAttribute,
                         FGeometryCollection::VerticesGroup);
    local_1c0 = FManagedArrayCollection::ModifyAttribute<FLinearColor>
                          (this->Collection,FGeometryCollection::ColorAttribute,
                           FGeometryCollection::VerticesGroup);
    pTVar39 = FManagedArrayCollection::ModifyAttribute<int>
                        (this->Collection,FGeometryCollection::VertexBoneMapAttribute,
                         FGeometryCollection::VerticesGroup);
    local_1d8 = FManagedArrayCollection::ModifyAttribute<UE::Math::TIntVector3<int>_>
                          (this->Collection,FGeometryCollection::FaceIndicesAttribute,
                           FGeometryCollection::FacesGroup);
    local_138 = FManagedArrayCollection::ModifyAttribute<bool>
                          (this->Collection,FGeometryCollection::FaceVisibleAttribute,
                           FGeometryCollection::FacesGroup);
    local_118 = FManagedArrayCollection::ModifyAttribute<int>
                          (this->Collection,FGeometryCollection::TransformIndexAttribute,
                           FGeometryCollection::GeometryGroup);
    pTVar40 = FManagedArrayCollection::ModifyAttribute<UE::Math::TBox<double>_>
                        (this->Collection,FGeometryCollection::BoundingBoxAttribute,
                         FGeometryCollection::GeometryGroup);
    local_160 = FManagedArrayCollection::ModifyAttribute<int>
                          (this->Collection,FGeometryCollection::VertexStartAttribute,
                           FGeometryCollection::GeometryGroup);
    local_1b8 = FManagedArrayCollection::ModifyAttribute<int>
                          (this->Collection,FGeometryCollection::VertexCountAttribute,
                           FGeometryCollection::GeometryGroup);
    local_158 = FManagedArrayCollection::ModifyAttribute<int>
                          (this->Collection,FGeometryCollection::FaceStartAttribute,
                           FGeometryCollection::GeometryGroup);
    local_1b0 = FManagedArrayCollection::ModifyAttribute<int>
                          (this->Collection,FGeometryCollection::FaceCountAttribute,
                           FGeometryCollection::GeometryGroup);
    local_150 = FManagedArrayCollection::ModifyAttribute<float>
                          (this->Collection,FGeometryCollection::InnerRadiusAttribute,
                           FGeometryCollection::GeometryGroup);
    local_148 = FManagedArrayCollection::ModifyAttribute<float>
                          (this->Collection,FGeometryCollection::OuterRadiusAttribute,
                           FGeometryCollection::GeometryGroup);
    local_110 = FManagedArrayCollection::ModifyAttribute<int>
                          (this->Collection,FTransformCollection::GeometryIndexAttribute,
                           FTransformCollection::TransformGroup);
    FVar25 = FTransformCollection::TransformAttribute;
    FVar24 = FTransformCollection::TransformGroup;
    pFVar7 = this->Collection;
    bVar33 = FManagedArrayCollection::HasAttribute
                       (pFVar7,FTransformCollection::TransformAttribute,
                        FTransformCollection::TransformGroup);
    if ((!bVar33) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("HasAttribute(Name, Group)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x164,L""), bVar33)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    local_c8 = FVar25;
    local_c0 = FVar24;
    pTVar41 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                      *)&pFVar7->Map,(TTuple<FName,FName> *)&local_c8);
    if ((pTVar41 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L""), bVar33)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    if ((pTVar41->field_0x10 != ',') &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSameType<T>()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x315,L""), bVar33)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)&pTVar41->field_0x10);
    lVar46 = *(longlong *)&pTVar41->field_0x30;
    local_108 = lVar46;
    if ((lVar46 == 0) &&
       (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypedManagedArray != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                            ,0x319,L""), bVar33)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    *(undefined1 *)(lVar46 + 8) = 1;
    local_168 = FManagedArrayCollection::ModifyAttribute<FString>
                          (this->Collection,FTransformCollection::BoneNameAttribute,
                           FTransformCollection::TransformGroup);
    local_e0 = FManagedArrayCollection::ModifyAttribute<FLinearColor>
                         (this->Collection,FTransformCollection::BoneColorAttribute,
                          FTransformCollection::TransformGroup);
    local_100 = FManagedArrayCollection::ModifyAttribute<int>
                          (this->Collection,FTransformCollection::ParentAttribute,
                           FTransformCollection::TransformGroup);
    pTVar8 = (this->GeometryCurveOffsets).ConstAttributeArray;
    if (pTVar8 == (TManagedArray<int> *)0x0) {
      iVar34 = FManagedArrayCollection::NumElements
                         ((this->GeometryCurveOffsets).ConstCollection,
                          (this->GeometryCurveOffsets).Group);
    }
    else {
      iVar34 = (**(code **)(*(longlong *)pTVar8 + 0x60))();
    }
    local_f8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_f8._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    TManagedArrayBase<UE::Math::TVector<float>_>::Fill(this_00,(TVector<float> *)&local_f8._s_0);
    local_ec._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_ec._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    TManagedArrayBase<UE::Math::TVector<float>_>::Fill(this_01,(TVector<float> *)&local_ec._s_0);
    fVar20 = __real_43119f81;
    local_120 = (longlong)iVar34;
    local_244 = 0;
    local_23c = 0;
    local_248 = 0;
    if (0 < iVar34) {
      local_230 = 0;
      local_1a8 = 0;
      do {
        lVar46 = local_1a8;
        local_178._s_0.G = 0.75;
        local_178._s_0.B = 1.0;
        local_178._s_0.A = 1.0;
        local_178._s_0.R = (float)(int)local_248 * fVar20;
        FLinearColor::HSVToLinearRGB((FLinearColor *)&local_178._s_0,(FLinearColor *)&local_d8._s_0)
        ;
        uStack_87 = 0;
        uStack_83 = 0;
        uVar48 = ~local_248 >> 0x1f;
        uStack_81 = 0;
        local_88 = 0;
        uVar37 = 0;
        if ((int)local_248 < *(int *)&pTVar40->field_0x18) {
          uVar37 = uVar48;
        }
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pTVar8 = local_118;
        lVar44 = *(longlong *)&pTVar40->field_0x10;
        lVar42 = local_230 * 0x38;
        *(undefined8 *)(lVar44 + lVar42) = 0;
        ((undefined8 *)(lVar44 + lVar42))[1] = 0;
        puVar2 = (undefined8 *)(lVar44 + 0x10 + lVar42);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(lVar44 + 0x20 + lVar42);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(lVar44 + 0x30 + lVar42) = 0;
        uVar37 = 0;
        if ((int)local_248 < *(int *)&local_118->field_0x18) {
          uVar37 = uVar48;
        }
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pTVar27 = local_110;
        *(uint *)(lVar46 + *(longlong *)&pTVar8->field_0x10) = local_248;
        uVar37 = 0;
        if ((int)local_248 < *(int *)&local_110->field_0x18) {
          uVar37 = uVar48;
        }
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        lVar46 = local_108;
        *(uint *)(*(longlong *)&pTVar27->field_0x10 + local_230 * 4) = local_248;
        _Var23 = UE::Math::TTransform<float>::Identity.Scale3D;
        _Var22 = UE::Math::TTransform<float>::Identity.Translation;
        _Var21 = UE::Math::TTransform<float>::Identity.Rotation;
        uVar37 = 0;
        if ((int)local_248 < *(int *)(local_108 + 0x18)) {
          uVar37 = uVar48;
        }
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pTVar8 = local_100;
        lVar46 = *(longlong *)(lVar46 + 0x10);
        *(__m128 *)(lVar46 + local_230 * 0x30) = _Var21;
        *(__m128 *)(lVar46 + 0x10 + local_230 * 0x30) = _Var22;
        *(__m128 *)(lVar46 + 0x20 + local_230 * 0x30) = _Var23;
        uVar37 = 0;
        if ((int)local_248 < *(int *)&local_100->field_0x18) {
          uVar37 = uVar48;
        }
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uVar19 = local_d8._8_8_;
        uVar6 = local_d8._0_8_;
        pTVar26 = local_e0;
        *(undefined4 *)(*(longlong *)&pTVar8->field_0x10 + local_230 * 4) = 0xffffffff;
        uVar37 = 0;
        if ((int)local_248 < *(int *)&local_e0->field_0x18) {
          uVar37 = uVar48;
        }
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        lVar46 = local_230 * 0x10;
        puVar2 = (undefined8 *)(lVar46 + *(longlong *)&pTVar26->field_0x10);
        *puVar2 = uVar6;
        puVar2[1] = uVar19;
        if (((this->GeometryGroupNames).ConstAttributeArray == (TManagedArray<FString> *)0x0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                ,0x60,L""), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pTVar9 = (this->GeometryGroupNames).ConstAttributeArray;
        uVar37 = 0;
        if ((int)local_248 < *(int *)&pTVar9->field_0x18) {
          uVar37 = uVar48;
        }
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pTVar28 = local_168;
        pFVar50 = (ForAnyElementType *)(*(longlong *)&pTVar9->field_0x10 + lVar46);
        uVar37 = 0;
        if ((int)local_248 < *(int *)&local_168->field_0x18) {
          uVar37 = uVar48;
        }
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pFVar43 = (ForAnyElementType *)(*(longlong *)&pTVar28->field_0x10 + lVar46);
        if (pFVar43 != pFVar50) {
          iVar34 = *(int *)&pFVar50[1].Data;
          piVar1 = (int *)((longlong)&pFVar43[1].Data + 4);
          _Src = pFVar50->Data;
          iVar35 = *piVar1;
          *(int *)&pFVar43[1].Data = iVar34;
          if ((iVar34 == 0) && (iVar35 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar34,iVar35,pFVar43,iVar34,piVar1);
            if (iVar34 != 0) {
              memcpy(pFVar43->Data,_Src,(longlong)iVar34 * 2);
            }
          }
        }
        pTVar8 = local_160;
        uVar37 = 0;
        if ((int)local_248 < *(int *)&local_160->field_0x18) {
          uVar37 = uVar48;
        }
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pTVar27 = local_158;
        *(uint *)(*(longlong *)&pTVar8->field_0x10 + local_230 * 4) = local_244 * 2;
        uVar37 = 0;
        if ((int)local_248 < *(int *)&local_158->field_0x18) {
          uVar37 = uVar48;
        }
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pTVar8 = local_1b8;
        *(uint *)(*(longlong *)&pTVar27->field_0x10 + local_230 * 4) = (local_244 - local_23c) * 2;
        uVar37 = 0;
        if ((int)local_248 < *(int *)&local_1b8->field_0x18) {
          uVar37 = uVar48;
        }
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pTVar27 = local_1b0;
        *(undefined4 *)(*(longlong *)&pTVar8->field_0x10 + local_230 * 4) = 0;
        uVar37 = 0;
        if ((int)local_248 < *(int *)&local_1b0->field_0x18) {
          uVar37 = uVar48;
        }
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        *(undefined4 *)(*(longlong *)&pTVar27->field_0x10 + local_230 * 4) = 0;
        if (((this->GeometryCurveThickness).ConstAttributeArray == (TManagedArray<float> *)0x0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                ,0x60,L""), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pTVar10 = (this->GeometryCurveThickness).ConstAttributeArray;
        uVar37 = 0;
        if ((int)local_248 < *(int *)&pTVar10->field_0x18) {
          uVar37 = uVar48;
        }
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pTVar29 = local_150;
        uVar3 = *(undefined4 *)(*(longlong *)&pTVar10->field_0x10 + local_230 * 4);
        uVar37 = 0;
        if ((int)local_248 < *(int *)&local_150->field_0x18) {
          uVar37 = uVar48;
        }
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        *(undefined4 *)(*(longlong *)&pTVar29->field_0x10 + local_230 * 4) = uVar3;
        if (((this->GeometryCurveThickness).ConstAttributeArray == (TManagedArray<float> *)0x0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                ,0x60,L""), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pTVar10 = (this->GeometryCurveThickness).ConstAttributeArray;
        uVar37 = 0;
        if ((int)local_248 < *(int *)&pTVar10->field_0x18) {
          uVar37 = uVar48;
        }
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pTVar29 = local_148;
        uVar3 = *(undefined4 *)(*(longlong *)&pTVar10->field_0x10 + local_230 * 4);
        uVar37 = 0;
        if ((int)local_248 < *(int *)&local_148->field_0x18) {
          uVar37 = uVar48;
        }
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        *(undefined4 *)(*(longlong *)&pTVar29->field_0x10 + local_230 * 4) = uVar3;
        if (((this->GeometryCurveOffsets).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                ,0x60,L""), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pTVar8 = (this->GeometryCurveOffsets).ConstAttributeArray;
        uVar37 = 0;
        if ((int)local_248 < *(int *)&pTVar8->field_0x18) {
          uVar37 = uVar48;
        }
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uVar49 = (ulonglong)(int)local_23c;
        local_128 = (longlong)*(int *)(*(longlong *)&pTVar8->field_0x10 + local_230 * 4);
        local_208 = uVar49;
        if ((longlong)uVar49 < local_128) {
          do {
            uVar37 = (uint)uVar49;
            if (((this->CurvePointOffsets).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                    ,0x60,L""), bVar33)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            pTVar8 = (this->CurvePointOffsets).ConstAttributeArray;
            uVar36 = 0;
            if ((int)uVar37 < *(int *)&pTVar8->field_0x18) {
              uVar36 = ~uVar37 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            iVar34 = *(int *)(*(longlong *)&pTVar8->field_0x10 + local_208 * 4);
            local_130 = (longlong)iVar34;
            lVar46 = (longlong)(int)local_244;
            if (lVar46 < local_130) {
              local_1e8 = iVar34 + -1;
              local_238 = lVar46 * 2;
              do {
                uVar37 = local_244 * 2;
                if (((this->PointRestOrientations).ConstAttributeArray ==
                     (TManagedArray<UE::Math::TQuat<float>_> *)0x0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x60,L""), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                pTVar11 = (this->PointRestOrientations).ConstAttributeArray;
                uVar51 = ~local_244 >> 0x1f;
                uVar36 = 0;
                if ((int)local_244 < *(int *)&pTVar11->field_0x18) {
                  uVar36 = uVar51;
                }
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                local_198._0_8_ = 0x3f800000;
                local_140 = lVar46 * 0x10;
                local_198._s_0.Z = 0.0;
                UE::Math::TQuat<float>::RotateVector
                          ((TQuat<float> *)(local_140 + *(longlong *)&pTVar11->field_0x10),
                           (TVector<float> *)&local_1f8._s_0,(TVector<float> *)&local_198._s_0);
                if (((this->PointRestPositions).ConstAttributeArray ==
                     (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x60,L""), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                pTVar12 = (this->PointRestPositions).ConstAttributeArray;
                uVar36 = 0;
                if ((int)local_244 < *(int *)&pTVar12->field_0x18) {
                  uVar36 = uVar51;
                }
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                lVar44 = *(longlong *)&pTVar12->field_0x10;
                if (((this->GeometryCurveThickness).ConstAttributeArray ==
                     (TManagedArray<float> *)0x0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x60,L""), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                pTVar10 = (this->GeometryCurveThickness).ConstAttributeArray;
                uVar36 = 0;
                if ((int)local_248 < *(int *)&pTVar10->field_0x18) {
                  uVar36 = uVar48;
                }
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                uVar45 = ~uVar37 >> 0x1f;
                fVar58 = *(float *)(*(longlong *)&pTVar10->field_0x10 + local_230 * 4);
                fVar59 = fVar58 * local_1f8._s_0.X;
                fVar60 = fVar58 * local_1f8._s_0.Y;
                fVar58 = fVar58 * local_1f8._s_0.Z;
                fVar4 = *(float *)(lVar44 + lVar46 * 0xc);
                fVar5 = *(float *)(lVar44 + 4 + lVar46 * 0xc);
                fVar57 = *(float *)(lVar44 + 8 + lVar46 * 0xc);
                uVar36 = 0;
                if ((int)uVar37 < *(int *)&pTVar38->field_0x18) {
                  uVar36 = uVar45;
                }
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                lVar44 = *(longlong *)&pTVar38->field_0x10;
                *(float *)(lVar44 + local_238 * 0xc) = fVar59 + fVar4;
                *(float *)(lVar44 + 4 + local_238 * 0xc) = fVar60 + fVar5;
                *(float *)(lVar44 + 8 + local_238 * 0xc) = fVar58 + fVar57;
                if (((this->PointRestPositions).ConstAttributeArray ==
                     (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x60,L""), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                pTVar12 = (this->PointRestPositions).ConstAttributeArray;
                uVar36 = 0;
                if ((int)local_244 < *(int *)&pTVar12->field_0x18) {
                  uVar36 = uVar51;
                }
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                lVar44 = *(longlong *)&pTVar12->field_0x10;
                if (((this->GeometryCurveThickness).ConstAttributeArray ==
                     (TManagedArray<float> *)0x0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x60,L""), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                pTVar10 = (this->GeometryCurveThickness).ConstAttributeArray;
                uVar36 = 0;
                if ((int)local_248 < *(int *)&pTVar10->field_0x18) {
                  uVar36 = uVar48;
                }
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                fVar58 = *(float *)(lVar44 + lVar46 * 0xc);
                fVar4 = *(float *)(lVar44 + 4 + lVar46 * 0xc);
                fVar5 = *(float *)(lVar44 + 8 + lVar46 * 0xc);
                fVar57 = *(float *)(*(longlong *)&pTVar10->field_0x10 + local_230 * 4);
                fVar59 = fVar57 * local_1f8._s_0.X;
                lVar44 = local_238 + 1;
                fVar60 = fVar57 * local_1f8._s_0.Y;
                fVar57 = fVar57 * local_1f8._s_0.Z;
                uVar36 = 0;
                if ((int)(uVar37 + 1) < *(int *)&pTVar38->field_0x18) {
                  uVar36 = uVar45;
                }
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                lVar13 = *(longlong *)&pTVar38->field_0x10;
                *(float *)(lVar13 + lVar44 * 0xc) = fVar58 - fVar59;
                *(float *)(lVar13 + 4 + lVar44 * 0xc) = fVar4 - fVar60;
                *(float *)(lVar13 + 8 + lVar44 * 0xc) = fVar5 - fVar57;
                if (((this->PointRestOrientations).ConstAttributeArray ==
                     (TManagedArray<UE::Math::TQuat<float>_> *)0x0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                        ,0x60,L""), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                pTVar11 = (this->PointRestOrientations).ConstAttributeArray;
                uVar36 = 0;
                if ((int)local_244 < *(int *)&pTVar11->field_0x18) {
                  uVar36 = uVar51;
                }
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                local_188._0_8_ = 0;
                local_188._s_0.Z = 1.0;
                UE::Math::TQuat<float>::RotateVector
                          ((TQuat<float> *)(local_140 + *(longlong *)&pTVar11->field_0x10),
                           (TVector<float> *)&local_1d0._s_0,(TVector<float> *)&local_188._s_0);
                uVar3 = local_1d0._s_0.Z;
                uVar6 = local_1d0._0_8_;
                pTVar12 = local_1e0;
                uVar36 = 0;
                if ((int)uVar37 < *(int *)&local_1e0->field_0x18) {
                  uVar36 = uVar45;
                }
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                lVar13 = *(longlong *)&pTVar12->field_0x10;
                *(undefined8 *)(lVar13 + local_238 * 0xc) = uVar6;
                *(undefined4 *)(lVar13 + 8 + local_238 * 0xc) = uVar3;
                iVar34 = uVar37 + 1;
                uVar36 = 0;
                if (iVar34 < *(int *)&local_1e0->field_0x18) {
                  uVar36 = uVar45;
                }
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                uVar31 = local_d8._8_8_;
                uVar19 = local_d8._0_8_;
                pTVar26 = local_1c0;
                lVar13 = *(longlong *)&local_1e0->field_0x10;
                *(undefined8 *)(lVar13 + lVar44 * 0xc) = uVar6;
                *(undefined4 *)(lVar13 + 8 + lVar44 * 0xc) = uVar3;
                uVar36 = 0;
                if ((int)uVar37 < *(int *)&local_1c0->field_0x18) {
                  uVar36 = uVar45;
                }
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                uVar32 = local_d8._8_8_;
                uVar6 = local_d8._0_8_;
                puVar2 = (undefined8 *)(*(longlong *)&pTVar26->field_0x10 + local_238 * 0x10);
                *puVar2 = uVar19;
                puVar2[1] = uVar31;
                uVar36 = 0;
                if (iVar34 < *(int *)&pTVar26->field_0x18) {
                  uVar36 = uVar45;
                }
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                puVar2 = (undefined8 *)
                         (*(longlong *)&local_1c0->field_0x10 + (local_238 + 1) * 0x10);
                *puVar2 = uVar6;
                puVar2[1] = uVar32;
                uVar36 = 0;
                if ((int)uVar37 < *(int *)&pTVar39->field_0x18) {
                  uVar36 = uVar45;
                }
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                *(uint *)(*(longlong *)&pTVar39->field_0x10 + local_238 * 4) = local_248;
                uVar36 = 0;
                if (iVar34 < *(int *)&pTVar39->field_0x18) {
                  uVar36 = uVar45;
                }
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                *(uint *)(*(longlong *)&pTVar39->field_0x10 + 4 + local_238 * 4) = local_248;
                uVar36 = 0;
                if ((int)uVar37 < *(int *)&pTVar38->field_0x18) {
                  uVar36 = uVar45;
                }
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                lVar13 = *(longlong *)&pTVar38->field_0x10;
                dVar17 = (double)*(float *)(lVar13 + local_238 * 0xc);
                uVar36 = 0;
                if ((int)local_248 < *(int *)&pTVar40->field_0x18) {
                  uVar36 = uVar48;
                }
                dVar55 = (double)*(float *)(lVar13 + 4 + local_238 * 0xc);
                dVar18 = (double)*(float *)(lVar13 + 8 + local_238 * 0xc);
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                lVar13 = *(longlong *)&pTVar40->field_0x10;
                if (*(char *)(lVar42 + 0x30 + lVar13) == '\0') {
                  *(double *)(lVar42 + 0x18 + lVar13) = dVar17;
                  *(double *)(lVar42 + 0x20 + lVar13) = dVar55;
                  *(double *)(lVar42 + 0x28 + lVar13) = dVar18;
                  puVar2 = (undefined8 *)(lVar42 + 0x18 + lVar13);
                  uVar19 = puVar2[1];
                  *(undefined1 *)(lVar42 + 0x30 + lVar13) = 1;
                  uVar6 = *(undefined8 *)(lVar42 + 0x28 + lVar13);
                  *(undefined8 *)(lVar42 + lVar13) = *puVar2;
                  ((undefined8 *)(lVar42 + lVar13))[1] = uVar19;
                  *(undefined8 *)(lVar42 + 0x10 + lVar13) = uVar6;
                }
                else {
                  dVar54 = *(double *)(lVar42 + 8 + lVar13);
                  dVar53 = *(double *)(lVar42 + lVar13);
                  if (dVar17 <= *(double *)(lVar42 + lVar13)) {
                    dVar53 = dVar17;
                  }
                  if (dVar55 <= dVar54) {
                    dVar54 = dVar55;
                  }
                  *(double *)(lVar42 + lVar13) = dVar53;
                  dVar53 = *(double *)(lVar42 + 0x10 + lVar13);
                  dVar56 = dVar18;
                  if (dVar53 <= dVar18) {
                    dVar56 = dVar53;
                  }
                  *(double *)(lVar42 + 8 + lVar13) = dVar54;
                  dVar54 = *(double *)(lVar42 + 0x18 + lVar13);
                  if (dVar54 <= dVar17) {
                    dVar54 = dVar17;
                  }
                  *(double *)(lVar42 + 0x10 + lVar13) = dVar56;
                  dVar17 = *(double *)(lVar42 + 0x20 + lVar13);
                  if (dVar17 <= dVar55) {
                    dVar17 = dVar55;
                  }
                  *(double *)(lVar42 + 0x18 + lVar13) = dVar54;
                  dVar55 = *(double *)(lVar42 + 0x28 + lVar13);
                  if (dVar55 <= dVar18) {
                    dVar55 = dVar18;
                  }
                  *(double *)(lVar42 + 0x20 + lVar13) = dVar17;
                  *(double *)(lVar42 + 0x28 + lVar13) = dVar55;
                }
                uVar36 = 0;
                if (iVar34 < *(int *)&pTVar38->field_0x18) {
                  uVar36 = uVar45;
                }
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                lVar13 = *(longlong *)&pTVar38->field_0x10;
                dVar17 = (double)*(float *)(lVar13 + lVar44 * 0xc);
                uVar36 = 0;
                if ((int)local_248 < *(int *)&pTVar40->field_0x18) {
                  uVar36 = uVar48;
                }
                dVar55 = (double)*(float *)(lVar13 + 4 + lVar44 * 0xc);
                dVar18 = (double)*(float *)(lVar13 + 8 + lVar44 * 0xc);
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                pTVar8 = local_1b8;
                lVar44 = *(longlong *)&pTVar40->field_0x10;
                if (*(char *)(lVar42 + 0x30 + lVar44) == '\0') {
                  *(double *)(lVar42 + 0x18 + lVar44) = dVar17;
                  *(double *)(lVar42 + 0x20 + lVar44) = dVar55;
                  *(double *)(lVar42 + 0x28 + lVar44) = dVar18;
                  puVar2 = (undefined8 *)(lVar42 + 0x18 + lVar44);
                  uVar19 = puVar2[1];
                  *(undefined1 *)(lVar42 + 0x30 + lVar44) = 1;
                  uVar6 = *(undefined8 *)(lVar42 + 0x28 + lVar44);
                  *(undefined8 *)(lVar42 + lVar44) = *puVar2;
                  ((undefined8 *)(lVar42 + lVar44))[1] = uVar19;
                  *(undefined8 *)(lVar42 + 0x10 + lVar44) = uVar6;
                }
                else {
                  dVar54 = dVar17;
                  if (*(double *)(lVar42 + lVar44) <= dVar17) {
                    dVar54 = *(double *)(lVar42 + lVar44);
                  }
                  dVar53 = *(double *)(lVar42 + 8 + lVar44);
                  dVar56 = dVar55;
                  if (dVar53 <= dVar55) {
                    dVar56 = dVar53;
                  }
                  dVar53 = *(double *)(lVar42 + 0x18 + lVar44);
                  if (dVar17 <= dVar53) {
                    dVar17 = dVar53;
                  }
                  dVar53 = *(double *)(lVar42 + 0x20 + lVar44);
                  if (dVar55 <= dVar53) {
                    dVar55 = dVar53;
                  }
                  *(double *)(lVar42 + lVar44) = dVar54;
                  dVar54 = *(double *)(lVar42 + 0x10 + lVar44);
                  dVar53 = dVar18;
                  if (dVar54 <= dVar18) {
                    dVar53 = dVar54;
                  }
                  dVar54 = *(double *)(lVar42 + 0x28 + lVar44);
                  if (dVar18 <= dVar54) {
                    dVar18 = dVar54;
                  }
                  *(double *)(lVar42 + 8 + lVar44) = dVar56;
                  *(double *)(lVar42 + 0x18 + lVar44) = dVar17;
                  *(double *)(lVar42 + 0x20 + lVar44) = dVar55;
                  *(double *)(lVar42 + 0x10 + lVar44) = dVar53;
                  *(double *)(lVar42 + 0x28 + lVar44) = dVar18;
                }
                uVar36 = 0;
                if ((int)local_248 < *(int *)&local_1b8->field_0x18) {
                  uVar36 = uVar48;
                }
                if ((uVar36 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                piVar1 = (int *)(*(longlong *)&pTVar8->field_0x10 + local_230 * 4);
                *piVar1 = *piVar1 + 2;
                if ((int)local_244 < local_1e8) {
                  lVar44 = lVar46 - local_208;
                  uVar36 = (local_244 - local_23c) * 2;
                  uVar51 = 0;
                  if ((int)uVar36 < *(int *)&local_1d8->field_0x18) {
                    uVar51 = ~uVar36 >> 0x1f;
                  }
                  if ((uVar51 == 0) &&
                     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar33)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  uVar45 = uVar36 + 1;
                  lVar13 = *(longlong *)&local_1d8->field_0x10;
                  *(uint *)(lVar13 + lVar44 * 0x18) = uVar37;
                  *(uint *)(lVar13 + 4 + lVar44 * 0x18) = uVar37 + 1;
                  *(uint *)(lVar13 + 8 + lVar44 * 0x18) = uVar37 + 3;
                  uVar51 = 0;
                  if ((int)uVar45 < *(int *)&local_1d8->field_0x18) {
                    uVar51 = ~uVar45 >> 0x1f;
                  }
                  if ((uVar51 == 0) &&
                     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar33)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  pTVar30 = local_138;
                  lVar13 = *(longlong *)&local_1d8->field_0x10;
                  *(uint *)(lVar13 + 0xc + lVar44 * 0x18) = uVar37;
                  *(uint *)(lVar13 + 0x10 + lVar44 * 0x18) = uVar37 + 3;
                  puVar52 = &local_138->field_0x10;
                  *(uint *)(lVar13 + 0x14 + lVar44 * 0x18) = uVar37 + 2;
                  puVar15 = &local_138->field_0x28;
                  if ((((int)uVar36 < 0) || (*(int *)puVar15 <= (int)uVar36)) &&
                     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index>=0 && Index<NumBits",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x5be,L""), bVar33)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  puVar14 = *(undefined1 **)&pTVar30->field_0x20;
                  puVar47 = puVar52;
                  if (puVar14 != (undefined1 *)0x0) {
                    puVar47 = puVar14;
                  }
                  uVar37 = uVar36;
                  if ((int)uVar36 < 0) {
                    uVar37 = uVar36 + 0x1f;
                  }
                  *(uint *)(puVar47 + (longlong)((int)uVar37 >> 5) * 4) =
                       *(uint *)(puVar47 + (longlong)((int)uVar37 >> 5) * 4) |
                       1 << ((byte)uVar36 & 0x1f);
                  if ((((int)uVar45 < 0) || (*(int *)puVar15 <= (int)uVar45)) &&
                     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index>=0 && Index<NumBits",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x5be,L""), bVar33)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  pTVar8 = local_1b0;
                  puVar15 = *(undefined1 **)&pTVar30->field_0x20;
                  if (puVar15 != (undefined1 *)0x0) {
                    puVar52 = puVar15;
                  }
                  uVar37 = uVar45;
                  if ((int)uVar45 < 0) {
                    uVar37 = uVar36 + 0x20;
                  }
                  *(uint *)(puVar52 + (longlong)((int)uVar37 >> 5) * 4) =
                       *(uint *)(puVar52 + (longlong)((int)uVar37 >> 5) * 4) |
                       1 << ((byte)uVar45 & 0x1f);
                  uVar37 = 0;
                  if ((int)local_248 < *(int *)&local_1b0->field_0x18) {
                    uVar37 = ~local_248 >> 0x1f;
                  }
                  if ((uVar37 == 0) &&
                     (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar33)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  piVar1 = (int *)(*(longlong *)&pTVar8->field_0x10 + local_230 * 4);
                  *piVar1 = *piVar1 + 2;
                }
                local_244 = local_244 + 1;
                local_238 = local_238 + 2;
                lVar46 = lVar46 + 1;
                uVar37 = local_23c;
              } while (lVar46 < local_130);
            }
            if (((this->CurvePointOffsets).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                    ,0x60,L""), bVar33)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            pTVar8 = (this->CurvePointOffsets).ConstAttributeArray;
            uVar36 = 0;
            if ((int)uVar37 < *(int *)&pTVar8->field_0x18) {
              uVar36 = ~uVar37 >> 0x1f;
            }
            if ((uVar36 == 0) &&
               (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar33)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            local_23c = uVar37 + 1;
            uVar49 = (ulonglong)local_23c;
            local_244 = *(uint *)(*(longlong *)&pTVar8->field_0x10 + local_208 * 4);
            local_208 = local_208 + 1;
          } while ((longlong)local_208 < local_128);
        }
        if (((this->GeometryCurveOffsets).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                ,0x60,L""), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pTVar8 = (this->GeometryCurveOffsets).ConstAttributeArray;
        uVar37 = 0;
        if ((int)local_248 < *(int *)&pTVar8->field_0x18) {
          uVar37 = ~local_248 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar33)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        local_248 = local_248 + 1;
        local_23c = *(uint *)(*(longlong *)&pTVar8->field_0x10 + local_230 * 4);
        local_230 = local_230 + 1;
        local_1a8 = local_1a8 + 4;
      } while (local_230 < local_120);
    }
  }
  return;
}

// DefineSchema @ 143fa90c0

void __thiscall
GeometryCollection::Facades::FCollectionCurveGeometryFacade::DefineSchema
          (FCollectionCurveGeometryFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionCurveFacade.cpp"
                       ,0x42,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TManagedArrayAccessor<UE::Math::TQuat<float>_>::Add
            (&this->PointRestOrientations,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            (&this->PointRestPositions,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->CurvePointOffsets,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->GeometryCurveOffsets,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->PointCurveIndices,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->CurveGeometryIndices,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<FString>::Add(&this->GeometryGroupNames,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->GeometryCurveThickness,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->CurveSourceIndices,MakePersistent,(FName)0x0);
  return;
}

// InitCurvesCollection @ 143fb65b0

void __thiscall
GeometryCollection::Facades::FCollectionCurveGeometryFacade::InitCurvesCollection
          (FCollectionCurveGeometryFacade *this,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5,
          TArray<int,TSizedDefaultAllocator<32>_> *param_6)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TManagedArray<int> *pTVar3;
  TManagedArray<UE::Math::TVector<float>_> *pTVar4;
  TManagedArray<FString> *pTVar5;
  TManagedArray<float> *pTVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined1 local_res8 [8];
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined1 local_f4 [4];
  undefined **local_f0;
  undefined1 local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  undefined **local_d0;
  undefined1 local_c8;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined1 local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  undefined **local_90;
  undefined1 local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined1 local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined1 local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  
  if (this->Collection != (FManagedArrayCollection *)0x0) {
    FManagedArrayCollection::EmptyGroup(this->Collection,CurvesGroup);
    FManagedArrayCollection::AddElements(this->Collection,param_2->ArrayNum,CurvesGroup);
    FManagedArrayCollection::EmptyGroup(this->Collection,FGeometryCollection::GeometryGroup);
    FManagedArrayCollection::AddElements
              (this->Collection,param_3->ArrayNum,FGeometryCollection::GeometryGroup);
    FManagedArrayCollection::EmptyGroup(this->Collection,PointsGroup);
    FManagedArrayCollection::AddElements(this->Collection,param_1->ArrayNum,PointsGroup);
    iVar1 = param_3->ArrayNum;
    pFVar2 = (param_3->AllocatorInstance).Data;
    local_c8 = 0;
    local_d0 = &___7__TManagedArrayBase_H__6B_;
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8 = CONCAT44(local_b8._4_4_,iVar1);
    if (iVar1 == 0) {
      local_b8 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,0,&local_c0,iVar1,(int *)((longlong)&local_b8 + 4));
      memcpy(local_c0.Data,pFVar2,(longlong)iVar1 << 2);
    }
    local_d0 = &___7__TManagedArray_H__6B_;
    if (((this->GeometryCurveOffsets).AttributeArray == (TManagedArray<int> *)0x0) ||
       ((this->GeometryCurveOffsets).Collection == (FManagedArrayCollection *)0x0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    ((this->GeometryCurveOffsets).AttributeArray)->field_0x8 = 1;
    pTVar3 = (this->GeometryCurveOffsets).AttributeArray;
    if ((*(int *)&pTVar3->field_0x18 != 0) && (*(int *)&pTVar3->field_0x18 != (int)local_b8)) {
      local_res8[0] = 0;
      `TManagedArrayBase<int>::operator='::__l2::<lambda_1>::operator()(local_res8);
    }
    puVar9 = &pTVar3->field_0x10;
    if ((ForAnyElementType *)puVar9 != &local_c0) {
      if (*(void **)puVar9 != (void *)0x0) {
        FMemory::Free(*(void **)puVar9);
      }
      *(FScriptContainerElement **)puVar9 = local_c0.Data;
      local_c0.Data = (FScriptContainerElement *)0x0;
      *(int *)&pTVar3->field_0x18 = (int)local_b8;
      *(undefined4 *)&pTVar3->field_0x1c = local_b8._4_4_;
      local_b8 = 0;
    }
    local_d0 = &___7__TManagedArrayBase_H__6B_;
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
    local_d0 = &___7FManagedArrayBase__6B_;
    UpdateCurveGeometryIndices(this);
    iVar1 = param_2->ArrayNum;
    pFVar2 = (param_2->AllocatorInstance).Data;
    local_a8 = 0;
    local_b0 = &___7__TManagedArrayBase_H__6B_;
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98 = CONCAT44(local_98._4_4_,iVar1);
    if (iVar1 == 0) {
      local_98 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,0,&local_a0,iVar1,(int *)((longlong)&local_98 + 4));
      memcpy(local_a0.Data,pFVar2,(longlong)iVar1 << 2);
    }
    local_b0 = &___7__TManagedArray_H__6B_;
    if (((this->CurvePointOffsets).AttributeArray == (TManagedArray<int> *)0x0) ||
       ((this->CurvePointOffsets).Collection == (FManagedArrayCollection *)0x0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    ((this->CurvePointOffsets).AttributeArray)->field_0x8 = 1;
    pTVar3 = (this->CurvePointOffsets).AttributeArray;
    if ((*(int *)&pTVar3->field_0x18 != 0) && (*(int *)&pTVar3->field_0x18 != (int)local_98)) {
      local_f8 = 0;
      `TManagedArrayBase<int>::operator='::__l2::<lambda_1>::operator()(&local_f8);
    }
    puVar9 = &pTVar3->field_0x10;
    if ((ForAnyElementType *)puVar9 != &local_a0) {
      if (*(void **)puVar9 != (void *)0x0) {
        FMemory::Free(*(void **)puVar9);
      }
      *(FScriptContainerElement **)puVar9 = local_a0.Data;
      local_a0.Data = (FScriptContainerElement *)0x0;
      *(int *)&pTVar3->field_0x18 = (int)local_98;
      *(undefined4 *)&pTVar3->field_0x1c = local_98._4_4_;
      local_98 = 0;
    }
    local_b0 = &___7__TManagedArrayBase_H__6B_;
    if (local_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data);
    }
    local_b0 = &___7FManagedArrayBase__6B_;
    UpdatePointCurveIndices(this);
    iVar1 = param_1->ArrayNum;
    pFVar2 = (param_1->AllocatorInstance).Data;
    local_88 = 0;
    local_90 = &___7__TManagedArrayBase_U__TVector_M_Math_UE____6B_;
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78 = CONCAT44(local_78._4_4_,iVar1);
    if (iVar1 == 0) {
      local_78 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar1,0,&local_80,iVar1,(int *)((longlong)&local_78 + 4));
      memcpy(local_80.Data,pFVar2,(longlong)iVar1 * 0xc);
    }
    local_90 = &___7__TManagedArray_U__TVector_M_Math_UE____6B_;
    if (((this->PointRestPositions).AttributeArray ==
         (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
       ((this->PointRestPositions).Collection == (FManagedArrayCollection *)0x0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    ((this->PointRestPositions).AttributeArray)->field_0x8 = 1;
    pTVar4 = (this->PointRestPositions).AttributeArray;
    if ((*(int *)&pTVar4->field_0x18 != 0) && (*(int *)&pTVar4->field_0x18 != (int)local_78)) {
      local_f7 = 0;
      `TManagedArrayBase<UE::Math::TVector<float>_>::operator='::__l2::<lambda_1>::operator()
                (&local_f7);
    }
    puVar9 = &pTVar4->field_0x10;
    if ((ForAnyElementType *)puVar9 != &local_80) {
      if (*(void **)puVar9 != (void *)0x0) {
        FMemory::Free(*(void **)puVar9);
      }
      *(FScriptContainerElement **)puVar9 = local_80.Data;
      local_80.Data = (FScriptContainerElement *)0x0;
      *(int *)&pTVar4->field_0x18 = (int)local_78;
      *(undefined4 *)&pTVar4->field_0x1c = local_78._4_4_;
      local_78 = 0;
    }
    local_90 = &___7__TManagedArrayBase_U__TVector_M_Math_UE____6B_;
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
    local_90 = &___7FManagedArrayBase__6B_;
    UpdatePointRestOrientations(this);
    local_e8 = 0;
    local_f0 = &___7__TManagedArrayBase_VFString____6B_;
    local_e0.Data = (FScriptContainerElement *)0x0;
    iVar1 = param_4->ArrayNum;
    pFVar2 = (param_4->AllocatorInstance).Data;
    local_d8 = CONCAT44(local_d8._4_4_,iVar1);
    if (iVar1 == 0) {
      local_d8 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,&local_e0,iVar1,(int *)((longlong)&local_d8 + 4));
      ConstructItems<FString,FString,int>(local_e0.Data,(FString *)pFVar2,iVar1);
    }
    local_f0 = &___7__TManagedArray_VFString____6B_;
    if (((this->GeometryGroupNames).AttributeArray == (TManagedArray<FString> *)0x0) ||
       ((this->GeometryGroupNames).Collection == (FManagedArrayCollection *)0x0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    ((this->GeometryGroupNames).AttributeArray)->field_0x8 = 1;
    pTVar5 = (this->GeometryGroupNames).AttributeArray;
    if ((*(int *)&pTVar5->field_0x18 != 0) && (*(int *)&pTVar5->field_0x18 != (int)local_d8)) {
      local_f6 = 0;
      `TManagedArrayBase<FString>::operator='::__l2::<lambda_1>::operator()(&local_f6);
    }
    puVar9 = &pTVar5->field_0x10;
    if ((ForAnyElementType *)puVar9 != &local_e0) {
      DestructItems<FString,int>(*(FString **)puVar9,*(int *)&pTVar5->field_0x18);
      if (*(void **)puVar9 != (void *)0x0) {
        FMemory::Free(*(void **)puVar9);
      }
      *(FScriptContainerElement **)puVar9 = local_e0.Data;
      local_e0.Data = (FScriptContainerElement *)0x0;
      *(int *)&pTVar5->field_0x18 = (int)local_d8;
      *(undefined4 *)&pTVar5->field_0x1c = local_d8._4_4_;
      local_d8 = 0;
    }
    local_f0 = &___7__TManagedArrayBase_VFString____6B_;
    DestructItems<FString,int>((FString *)local_e0.Data,(int)local_d8);
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
    local_f0 = &___7FManagedArrayBase__6B_;
    local_68 = 0;
    local_70 = &___7__TManagedArrayBase_M__6B_;
    iVar1 = param_5->ArrayNum;
    pFVar2 = (param_5->AllocatorInstance).Data;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = CONCAT44(local_58._4_4_,iVar1);
    if (iVar1 == 0) {
      local_58 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,0,&local_60,iVar1,(int *)((longlong)&local_58 + 4));
      memcpy(local_60.Data,pFVar2,(longlong)iVar1 << 2);
    }
    local_70 = &___7__TManagedArray_M__6B_;
    if (((this->GeometryCurveThickness).AttributeArray == (TManagedArray<float> *)0x0) ||
       ((this->GeometryCurveThickness).Collection == (FManagedArrayCollection *)0x0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    ((this->GeometryCurveThickness).AttributeArray)->field_0x8 = 1;
    pTVar6 = (this->GeometryCurveThickness).AttributeArray;
    if ((*(int *)&pTVar6->field_0x18 != 0) && (*(int *)&pTVar6->field_0x18 != (int)local_58)) {
      local_f5 = 0;
      `TManagedArrayBase<float>::operator='::__l2::<lambda_1>::operator()(&local_f5);
    }
    puVar9 = &pTVar6->field_0x10;
    if ((ForAnyElementType *)puVar9 != &local_60) {
      if (*(void **)puVar9 != (void *)0x0) {
        FMemory::Free(*(void **)puVar9);
      }
      *(FScriptContainerElement **)puVar9 = local_60.Data;
      local_60.Data = (FScriptContainerElement *)0x0;
      *(int *)&pTVar6->field_0x18 = (int)local_58;
      *(undefined4 *)&pTVar6->field_0x1c = local_58._4_4_;
      local_58 = 0;
    }
    local_70 = &___7__TManagedArrayBase_M__6B_;
    if (local_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data);
    }
    local_70 = &___7FManagedArrayBase__6B_;
    local_48 = 0;
    iVar1 = param_6->ArrayNum;
    pFVar2 = (param_6->AllocatorInstance).Data;
    local_50 = &___7__TManagedArrayBase_H__6B_;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = CONCAT44(local_38._4_4_,iVar1);
    if (iVar1 == 0) {
      local_38 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,0,&local_40,iVar1,(int *)((longlong)&local_38 + 4));
      memcpy(local_40.Data,pFVar2,(longlong)iVar1 << 2);
    }
    local_50 = &___7__TManagedArray_H__6B_;
    if (((this->CurveSourceIndices).AttributeArray == (TManagedArray<int> *)0x0) ||
       ((this->CurveSourceIndices).Collection == (FManagedArrayCollection *)0x0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    ((this->CurveSourceIndices).AttributeArray)->field_0x8 = 1;
    pTVar3 = (this->CurveSourceIndices).AttributeArray;
    if ((*(int *)&pTVar3->field_0x18 != 0) && (*(int *)&pTVar3->field_0x18 != (int)local_38)) {
      `TManagedArrayBase<int>::operator='::__l2::<lambda_1>::operator()(local_f4);
    }
    puVar9 = &pTVar3->field_0x10;
    if ((ForAnyElementType *)puVar9 != &local_40) {
      if (*(void **)puVar9 != (void *)0x0) {
        FMemory::Free(*(void **)puVar9);
      }
      *(FScriptContainerElement **)puVar9 = local_40.Data;
      local_40.Data = (FScriptContainerElement *)0x0;
      *(int *)&pTVar3->field_0x18 = (int)local_38;
      *(undefined4 *)&pTVar3->field_0x1c = local_38._4_4_;
      local_38 = 0;
    }
    local_50 = &___7__TManagedArrayBase_H__6B_;
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    BuildGeometryCollection(this);
  }
  return;
}

// IsValid @ 143fb7af0

bool __thiscall
GeometryCollection::Facades::FCollectionCurveGeometryFacade::IsValid
          (FCollectionCurveGeometryFacade *this)

{
  if (((((((this->PointRestOrientations).ConstAttributeArray !=
           (TManagedArray<UE::Math::TQuat<float>_> *)0x0) &&
         ((this->PointRestPositions).ConstAttributeArray !=
          (TManagedArray<UE::Math::TVector<float>_> *)0x0)) &&
        ((this->CurvePointOffsets).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
       (((this->GeometryCurveOffsets).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
        ((this->PointCurveIndices).ConstAttributeArray != (TManagedArray<int> *)0x0)))) &&
      (((this->CurveGeometryIndices).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
       (((this->GeometryGroupNames).ConstAttributeArray != (TManagedArray<FString> *)0x0 &&
        ((this->GeometryCurveThickness).ConstAttributeArray != (TManagedArray<float> *)0x0)))))) &&
     ((this->CurveSourceIndices).ConstAttributeArray != (TManagedArray<int> *)0x0)) {
    return true;
  }
  return false;
}

// UpdateCurveGeometryIndices @ 143fcd010

void __thiscall
GeometryCollection::Facades::FCollectionCurveGeometryFacade::UpdateCurveGeometryIndices
          (FCollectionCurveGeometryFacade *this)

{
  int iVar1;
  TManagedArray<int> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  
  pTVar2 = (this->GeometryCurveOffsets).ConstAttributeArray;
  if (pTVar2 == (TManagedArray<int> *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((this->GeometryCurveOffsets).ConstCollection,
                       (this->GeometryCurveOffsets).Group);
  }
  else {
    iVar5 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
  }
  uVar7 = 0;
  uVar10 = 0;
  if (0 < (longlong)iVar5) {
    lVar9 = 0;
    do {
      if (((this->GeometryCurveOffsets).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x60,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (this->GeometryCurveOffsets).ConstAttributeArray;
      uVar6 = 0;
      if ((int)uVar10 < *(int *)&pTVar2->field_0x18) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = *(int *)(*(longlong *)&pTVar2->field_0x10 + lVar9 * 4);
      for (lVar8 = (longlong)(int)uVar7; lVar8 < iVar1; lVar8 = lVar8 + 1) {
        if ((((this->CurveGeometryIndices).AttributeArray == (TManagedArray<int> *)0x0) ||
            ((this->CurveGeometryIndices).Collection == (FManagedArrayCollection *)0x0)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("AttributeArray != nullptr && !IsConst()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x7c,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ((this->CurveGeometryIndices).AttributeArray)->field_0x8 = 1;
        pTVar2 = (this->CurveGeometryIndices).AttributeArray;
        uVar6 = 0;
        if ((int)uVar7 < *(int *)&pTVar2->field_0x18) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = uVar7 + 1;
        *(uint *)(*(longlong *)&pTVar2->field_0x10 + lVar8 * 4) = uVar10;
      }
      if (((this->GeometryCurveOffsets).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x60,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (this->GeometryCurveOffsets).ConstAttributeArray;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&pTVar2->field_0x18) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = uVar10 + 1;
      uVar7 = *(uint *)(*(longlong *)&pTVar2->field_0x10 + lVar9 * 4);
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar5);
  }
  return;
}

// UpdatePointCurveIndices @ 143fce340

void __thiscall
GeometryCollection::Facades::FCollectionCurveGeometryFacade::UpdatePointCurveIndices
          (FCollectionCurveGeometryFacade *this)

{
  int iVar1;
  TManagedArray<int> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  
  pTVar2 = (this->CurvePointOffsets).ConstAttributeArray;
  if (pTVar2 == (TManagedArray<int> *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((this->CurvePointOffsets).ConstCollection,(this->CurvePointOffsets).Group);
  }
  else {
    iVar5 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
  }
  uVar7 = 0;
  uVar10 = 0;
  if (0 < (longlong)iVar5) {
    lVar9 = 0;
    do {
      if (((this->CurvePointOffsets).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x60,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (this->CurvePointOffsets).ConstAttributeArray;
      uVar6 = 0;
      if ((int)uVar10 < *(int *)&pTVar2->field_0x18) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = *(int *)(*(longlong *)&pTVar2->field_0x10 + lVar9 * 4);
      for (lVar8 = (longlong)(int)uVar7; lVar8 < iVar1; lVar8 = lVar8 + 1) {
        if ((((this->PointCurveIndices).AttributeArray == (TManagedArray<int> *)0x0) ||
            ((this->PointCurveIndices).Collection == (FManagedArrayCollection *)0x0)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("AttributeArray != nullptr && !IsConst()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x7c,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ((this->PointCurveIndices).AttributeArray)->field_0x8 = 1;
        pTVar2 = (this->PointCurveIndices).AttributeArray;
        uVar6 = 0;
        if ((int)uVar7 < *(int *)&pTVar2->field_0x18) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = uVar7 + 1;
        *(uint *)(*(longlong *)&pTVar2->field_0x10 + lVar8 * 4) = uVar10;
      }
      if (((this->CurvePointOffsets).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x60,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar2 = (this->CurvePointOffsets).ConstAttributeArray;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&pTVar2->field_0x18) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = uVar10 + 1;
      uVar7 = *(uint *)(*(longlong *)&pTVar2->field_0x10 + lVar9 * 4);
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar5);
  }
  return;
}

// UpdatePointRestOrientations @ 143fce5b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
GeometryCollection::Facades::FCollectionCurveGeometryFacade::UpdatePointRestOrientations
          (FCollectionCurveGeometryFacade *this)

{
  uint uVar1;
  TManagedArray<int> *pTVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
  longlong lVar4;
  longlong lVar5;
  TManagedArray<UE::Math::TQuat<float>_> *pTVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  TQuat<float> *pTVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar33 [16];
  TQuat<float> TVar34;
  int local_res8;
  uint local_res10;
  longlong local_f0;
  longlong local_e8;
  TVector<float>_u_0 local_d8;
  TVector<float>_u_0 local_c8;
  float local_b8;
  float fStack_b4;
  float local_b0;
  TQuat<float> local_a8 [6];
  
  pTVar2 = (this->CurvePointOffsets).ConstAttributeArray;
  if (pTVar2 == (TManagedArray<int> *)0x0) {
    iVar15 = FManagedArrayCollection::NumElements
                       ((this->CurvePointOffsets).ConstCollection,(this->CurvePointOffsets).Group);
  }
  else {
    iVar15 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
  }
  fVar13 = _UNK_1506895dc;
  fVar12 = _UNK_1506895d8;
  fVar11 = _UNK_1506895d4;
  fVar10 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
  fVar9 = __real_3f800000;
  fVar8 = __real_322bcc77;
  local_res8 = 0;
  uVar21 = 0;
  local_res10 = 0;
  if (0 < iVar15) {
    local_e8 = 0;
    do {
      TVar34 = UE::Math::TQuat<float>::Identity;
      fVar25 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      fVar26 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      local_d8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_c8._0_8_ = 0;
      local_c8._s_0.Z = 1.0;
      local_d8._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      if ((this->CurvePointOffsets).ConstAttributeArray == (TManagedArray<int> *)0x0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x60,L"");
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar25 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        fVar26 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      }
      pTVar2 = (this->CurvePointOffsets).ConstAttributeArray;
      uVar19 = 0;
      if ((int)local_res10 < *(int *)&pTVar2->field_0x18) {
        uVar19 = ~local_res10 >> 0x1f;
      }
      if (uVar19 == 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar25 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        fVar26 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      }
      iVar16 = *(int *)(*(longlong *)&pTVar2->field_0x10 + local_e8 * 4) + ~uVar21;
      local_f0 = (longlong)iVar16;
      if (0 < local_f0) {
        lVar22 = (longlong)local_res8 << 4;
        lVar20 = (longlong)(int)uVar21 * 0xc;
        uVar19 = uVar21;
        while( true ) {
          local_c8._0_8_ = local_d8._0_8_;
          local_c8._s_0.Z = local_d8._s_0.Z;
          if ((this->PointRestPositions).ConstAttributeArray ==
              (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                ,0x60,L"");
            if (bVar14) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar25 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            fVar26 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                            0x20);
          }
          pTVar3 = (this->PointRestPositions).ConstAttributeArray;
          uVar1 = uVar19 + 1;
          uVar17 = 0;
          if ((int)uVar1 < *(int *)&pTVar3->field_0x18) {
            uVar17 = ~uVar1 >> 0x1f;
          }
          if (uVar17 == 0) {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar25 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            fVar26 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                            0x20);
          }
          lVar4 = *(longlong *)&pTVar3->field_0x10;
          if ((this->PointRestPositions).ConstAttributeArray ==
              (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                ,0x60,L"");
            if (bVar14) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar25 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            fVar26 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                            0x20);
          }
          pTVar3 = (this->PointRestPositions).ConstAttributeArray;
          uVar17 = 0;
          if ((int)uVar19 < *(int *)&pTVar3->field_0x18) {
            uVar17 = ~uVar19 >> 0x1f;
          }
          if (uVar17 == 0) {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar25 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            fVar26 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                            0x20);
          }
          lVar5 = *(longlong *)&pTVar3->field_0x10;
          fVar31 = *(float *)(lVar20 + 0xc + lVar4) - *(float *)(lVar20 + lVar5);
          fVar32 = *(float *)(lVar20 + 0x10 + lVar4) - *(float *)(lVar20 + 4 + lVar5);
          local_b0 = *(float *)(lVar20 + 0x14 + lVar4) - *(float *)(lVar20 + 8 + lVar5);
          fVar29 = fVar32 * fVar32 + fVar31 * fVar31 + local_b0 * local_b0;
          fVar27 = fVar31;
          fVar28 = fVar32;
          local_d8._s_0.Z = local_b0;
          if ((fVar29 != fVar9) &&
             (fVar27 = fVar25, fVar28 = fVar26,
             local_d8._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
             fVar8 <= fVar29)) {
            fVar25 = fVar9 / SQRT(fVar29);
            fVar27 = fVar31 * fVar25;
            fVar28 = fVar32 * fVar25;
            local_d8._s_0.Z = fVar25 * local_b0;
          }
          _local_b8 = CONCAT44(fVar32,fVar31);
          local_d8._0_8_ = CONCAT44(fVar28,fVar27);
          pTVar18 = UE::Math::TQuat<float>::FindBetweenNormals
                              (local_a8,(TVector<float> *)&local_c8._s_0,
                               (TVector<float> *)&local_d8._s_0);
          fVar30 = TVar34.X;
          fVar35 = TVar34.Y;
          fVar36 = TVar34.Z;
          fVar37 = TVar34.W;
          fVar25 = pTVar18->X;
          fVar26 = pTVar18->Y;
          fVar27 = pTVar18->Z;
          fVar28 = pTVar18->W;
          fVar29 = fVar37 * fVar25 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[0] +
                   fVar28 * fVar30 +
                   fVar36 * fVar26 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[0] +
                   fVar35 * fVar27 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[0];
          fVar31 = fVar36 * fVar25 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[1] +
                   fVar28 * fVar35 +
                   fVar37 * fVar26 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[1] +
                   fVar30 * fVar27 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[1];
          fVar32 = fVar35 * fVar25 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[2] +
                   fVar28 * fVar36 +
                   fVar30 * fVar26 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[2] +
                   fVar37 * fVar27 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[2];
          fVar30 = fVar30 * fVar25 * GlobalVectorConstants::QMULTI_SIGN_MASK0.m128_f32[3] +
                   fVar28 * fVar37 +
                   fVar35 * fVar26 * GlobalVectorConstants::QMULTI_SIGN_MASK1.m128_f32[3] +
                   fVar36 * fVar27 * GlobalVectorConstants::QMULTI_SIGN_MASK2.m128_f32[3];
          fVar25 = fVar31 * fVar31 + fVar29 * fVar29;
          fVar26 = fVar29 * fVar29 + fVar31 * fVar31;
          fVar27 = fVar30 * fVar30 + fVar32 * fVar32;
          fVar28 = fVar32 * fVar32 + fVar30 * fVar30;
          auVar23._0_4_ = fVar27 + fVar25;
          auVar23._4_4_ = fVar28 + fVar26;
          auVar23._8_4_ = fVar25 + fVar27;
          auVar23._12_4_ = fVar26 + fVar28;
          auVar24 = sqrtps(auVar23,auVar23);
          auVar24 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar24);
          auVar33._0_4_ = (uint)(auVar24._0_4_ * fVar29) & -(uint)(fVar10 <= auVar23._0_4_);
          auVar33._4_4_ = (uint)(auVar24._4_4_ * fVar31) & -(uint)(fVar11 <= auVar23._4_4_);
          auVar33._8_4_ = (uint)(auVar24._8_4_ * fVar32) & -(uint)(fVar12 <= auVar23._8_4_);
          auVar33._12_4_ = (uint)(auVar24._12_4_ * fVar30) & -(uint)(fVar13 <= auVar23._12_4_);
          auVar24._4_4_ =
               ~-(uint)(fVar11 <= auVar23._4_4_) & GlobalVectorConstants::Float0001.m128_u32[1];
          auVar24._0_4_ =
               ~-(uint)(fVar10 <= auVar23._0_4_) & GlobalVectorConstants::Float0001.m128_u32[0];
          auVar24._8_4_ =
               ~-(uint)(fVar12 <= auVar23._8_4_) & GlobalVectorConstants::Float0001.m128_u32[2];
          auVar24._12_4_ =
               ~-(uint)(fVar13 <= auVar23._12_4_) & GlobalVectorConstants::Float0001.m128_u32[3];
          TVar34 = (TQuat<float>)(auVar33 | auVar24);
          if ((((this->PointRestOrientations).AttributeArray ==
                (TManagedArray<UE::Math::TQuat<float>_> *)0x0) ||
              ((this->PointRestOrientations).Collection == (FManagedArrayCollection *)0x0)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AttributeArray != nullptr && !IsConst()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                  ,0x7c,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar19 = (local_res8 - uVar21) + uVar19;
          ((this->PointRestOrientations).AttributeArray)->field_0x8 = 1;
          pTVar6 = (this->PointRestOrientations).AttributeArray;
          uVar17 = 0;
          if ((int)uVar19 < *(int *)&pTVar6->field_0x18) {
            uVar17 = ~uVar19 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(TQuat<float> *)(lVar22 + *(longlong *)&pTVar6->field_0x10) = TVar34;
          lVar22 = lVar22 + 0x10;
          local_f0 = local_f0 + -1;
          if (local_f0 == 0) break;
          fVar25 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          fVar26 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20)
          ;
          lVar20 = lVar20 + 0xc;
          uVar19 = uVar1;
        }
      }
      uVar21 = iVar16 + local_res8;
      if ((((this->PointRestOrientations).AttributeArray ==
            (TManagedArray<UE::Math::TQuat<float>_> *)0x0) ||
          ((this->PointRestOrientations).Collection == (FManagedArrayCollection *)0x0)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("AttributeArray != nullptr && !IsConst()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x7c,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      ((this->PointRestOrientations).AttributeArray)->field_0x8 = 1;
      pTVar6 = (this->PointRestOrientations).AttributeArray;
      uVar19 = 0;
      if ((int)uVar21 < *(int *)&pTVar6->field_0x18) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_res8 = uVar21 + 1;
      *(TQuat<float> *)(*(longlong *)&pTVar6->field_0x10 + (longlong)(int)uVar21 * 0x10) = TVar34;
      if (((this->CurvePointOffsets).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x60,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar2 = (this->CurvePointOffsets).ConstAttributeArray;
      uVar21 = 0;
      if ((int)local_res10 < *(int *)&pTVar2->field_0x18) {
        uVar21 = ~local_res10 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_res10 = local_res10 + 1;
      uVar21 = *(uint *)(*(longlong *)&pTVar2->field_0x10 + local_e8 * 4);
      local_e8 = local_e8 + 1;
    } while (local_e8 < iVar15);
  }
  return;
}


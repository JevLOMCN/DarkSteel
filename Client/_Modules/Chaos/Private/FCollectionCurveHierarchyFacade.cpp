// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// FCollectionCurveHierarchyFacade @ 143f86f80

FCollectionCurveHierarchyFacade * __thiscall
GeometryCollection::Facades::FCollectionCurveHierarchyFacade::FCollectionCurveHierarchyFacade
          (FCollectionCurveHierarchyFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
  FCollectionCurveHierarchyFacade *pFVar4;
  
  this->ConstCollection = param_1;
  this->Collection = param_1;
  (this->CurveParentIndices).ConstCollection = param_1;
  (this->CurveParentIndices).Collection = param_1;
  (this->CurveParentIndices).Name = CurveParentIndicesAttribute;
  (this->CurveParentIndices).Group = FCollectionCurveGeometryFacade::CurvesGroup;
  (this->CurveParentIndices).DefaultGroupDependency.ComparisonIndex = 0;
  (this->CurveParentIndices).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,CurveParentIndicesAttribute,
                      FCollectionCurveGeometryFacade::CurvesGroup);
  (this->CurveParentIndices).AttributeArray = pTVar3;
  (this->CurveParentIndices).ConstAttributeArray = pTVar3;
  (this->CurveLodIndices).ConstCollection = param_1;
  (this->CurveLodIndices).Collection = param_1;
  (this->CurveLodIndices).Name = CurveLodIndicesAttribute;
  (this->CurveLodIndices).Group = FCollectionCurveGeometryFacade::CurvesGroup;
  (this->CurveLodIndices).DefaultGroupDependency.ComparisonIndex = 0;
  (this->CurveLodIndices).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,CurveLodIndicesAttribute,FCollectionCurveGeometryFacade::CurvesGroup);
  (this->CurveLodIndices).AttributeArray = pTVar3;
  (this->CurveLodIndices).ConstAttributeArray = pTVar3;
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionCurveFacade.cpp"
                       ,0x13e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCollectionCurveHierarchyFacade *)(*pcVar1)();
      return pFVar4;
    }
  }
  TManagedArrayAccessor<int>::Add(&this->CurveParentIndices,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->CurveLodIndices,MakePersistent,(FName)0x0);
  return this;
}

// FCollectionCurveHierarchyFacade @ 143f87090

FCollectionCurveHierarchyFacade * __thiscall
GeometryCollection::Facades::FCollectionCurveHierarchyFacade::FCollectionCurveHierarchyFacade
          (FCollectionCurveHierarchyFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<int> *pTVar1;
  
  this->ConstCollection = param_1;
  this->Collection = (FManagedArrayCollection *)0x0;
  (this->CurveParentIndices).ConstCollection = param_1;
  (this->CurveParentIndices).Collection = (FManagedArrayCollection *)0x0;
  (this->CurveParentIndices).Name = CurveParentIndicesAttribute;
  (this->CurveParentIndices).Group = FCollectionCurveGeometryFacade::CurvesGroup;
  (this->CurveParentIndices).DefaultGroupDependency.ComparisonIndex = 0;
  (this->CurveParentIndices).DefaultGroupDependency.Number = 0;
  (this->CurveParentIndices).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar1 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,CurveParentIndicesAttribute,
                      FCollectionCurveGeometryFacade::CurvesGroup);
  (this->CurveParentIndices).ConstAttributeArray = pTVar1;
  (this->CurveLodIndices).ConstCollection = param_1;
  (this->CurveLodIndices).Collection = (FManagedArrayCollection *)0x0;
  (this->CurveLodIndices).Name = CurveLodIndicesAttribute;
  (this->CurveLodIndices).Group = FCollectionCurveGeometryFacade::CurvesGroup;
  (this->CurveLodIndices).DefaultGroupDependency.ComparisonIndex = 0;
  (this->CurveLodIndices).DefaultGroupDependency.Number = 0;
  (this->CurveLodIndices).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar1 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,CurveLodIndicesAttribute,FCollectionCurveGeometryFacade::CurvesGroup);
  (this->CurveLodIndices).ConstAttributeArray = pTVar1;
  return this;
}

// DefineSchema @ 143fa91d0

void __thiscall
GeometryCollection::Facades::FCollectionCurveHierarchyFacade::DefineSchema
          (FCollectionCurveHierarchyFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionCurveFacade.cpp"
                       ,0x13e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TManagedArrayAccessor<int>::Add(&this->CurveParentIndices,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->CurveLodIndices,MakePersistent,(FName)0x0);
  return;
}

// IsValid @ 143fb7b50

bool __thiscall
GeometryCollection::Facades::FCollectionCurveHierarchyFacade::IsValid
          (FCollectionCurveHierarchyFacade *this)

{
  if (((this->CurveParentIndices).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
     ((this->CurveLodIndices).ConstAttributeArray != (TManagedArray<int> *)0x0)) {
    return true;
  }
  return false;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// FTetrahedralMetrics @ 143fd5520

FTetrahedralMetrics * __thiscall
GeometryCollection::Facades::FTetrahedralMetrics::FTetrahedralMetrics
          (FTetrahedralMetrics *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FTetrahedralMetrics *pFVar4;
  FValueType *pFVar5;
  FValueType *pFVar6;
  FValueType *pFVar7;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  
  this->_padding_ = (longlong)&___7FTetrahedralMetrics_Facades_GeometryCollection__6B_;
  pFVar7 = (FValueType *)0x0;
  ::FName::FName(&local_68,"Tetrahedral");
  (this->SignedVolumeAttribute).ConstCollection = param_1;
  (this->SignedVolumeAttribute).Collection = param_1;
  (this->SignedVolumeAttribute).Name = SignedVolumeAttributeName;
  (this->SignedVolumeAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SignedVolumeAttribute).DefaultGroupDependency.Number = 0;
  (this->SignedVolumeAttribute).Group = local_68;
  local_58 = SignedVolumeAttributeName;
  local_50 = local_68;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  pFVar5 = pFVar7;
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar5 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTetrahedralMetrics *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->SignedVolumeAttribute).AttributeArray = (TManagedArray<float> *)pFVar5;
  (this->SignedVolumeAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar5;
  ::FName::FName(&local_60,"Tetrahedral");
  (this->AspectRatioAttribute).ConstCollection = param_1;
  (this->AspectRatioAttribute).Collection = param_1;
  (this->AspectRatioAttribute).Name = AspectRatioAttributeName;
  (this->AspectRatioAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->AspectRatioAttribute).DefaultGroupDependency.Number = 0;
  (this->AspectRatioAttribute).Group = local_60;
  local_48 = AspectRatioAttributeName;
  local_40 = local_60;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar7 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar7 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTetrahedralMetrics *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar7->GroupIndexDependency).Number = 1;
  }
  (this->AspectRatioAttribute).AttributeArray = (TManagedArray<float> *)pFVar7;
  (this->AspectRatioAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar7;
  if (((this->SignedVolumeAttribute).Collection == (FManagedArrayCollection *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTetrahedralMetricsFacade.cpp"
                         ,0x20,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FTetrahedralMetrics *)(*pcVar1)();
    return pFVar4;
  }
  TManagedArrayAccessor<float>::Add(&this->SignedVolumeAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->AspectRatioAttribute,MakePersistent,(FName)0x0);
  return this;
}

// FTetrahedralMetrics @ 143fd5730

FTetrahedralMetrics * __thiscall
GeometryCollection::Facades::FTetrahedralMetrics::FTetrahedralMetrics
          (FTetrahedralMetrics *this,FManagedArrayCollection *param_1)

{
  TManagedArray<float> *pTVar1;
  FName local_res10;
  
  this->_padding_ = (longlong)&___7FTetrahedralMetrics_Facades_GeometryCollection__6B_;
  ::FName::FName(&local_res10,"Tetrahedral");
  (this->SignedVolumeAttribute).ConstCollection = param_1;
  (this->SignedVolumeAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->SignedVolumeAttribute).Name = SignedVolumeAttributeName;
  (this->SignedVolumeAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SignedVolumeAttribute).DefaultGroupDependency.Number = 0;
  (this->SignedVolumeAttribute).Group = local_res10;
  (this->SignedVolumeAttribute).AttributeArray = (TManagedArray<float> *)0x0;
  pTVar1 = FManagedArrayCollection::FindAttributeTyped<float>
                     (param_1,SignedVolumeAttributeName,local_res10);
  (this->SignedVolumeAttribute).ConstAttributeArray = pTVar1;
  ::FName::FName(&local_res10,"Tetrahedral");
  (this->AspectRatioAttribute).ConstCollection = param_1;
  (this->AspectRatioAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->AspectRatioAttribute).Name = AspectRatioAttributeName;
  (this->AspectRatioAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->AspectRatioAttribute).DefaultGroupDependency.Number = 0;
  (this->AspectRatioAttribute).Group = local_res10;
  (this->AspectRatioAttribute).AttributeArray = (TManagedArray<float> *)0x0;
  pTVar1 = FManagedArrayCollection::FindAttributeTyped<float>
                     (param_1,AspectRatioAttributeName,local_res10);
  (this->AspectRatioAttribute).ConstAttributeArray = pTVar1;
  return this;
}

// ~FTetrahedralMetrics @ 143fd7950

void __thiscall
GeometryCollection::Facades::FTetrahedralMetrics::~FTetrahedralMetrics(FTetrahedralMetrics *this)

{
  this->_padding_ = (longlong)&___7FTetrahedralMetrics_Facades_GeometryCollection__6B_;
  return;
}

// DefineSchema @ 143fe7f60

void __thiscall
GeometryCollection::Facades::FTetrahedralMetrics::DefineSchema(FTetrahedralMetrics *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SignedVolumeAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTetrahedralMetricsFacade.cpp"
                       ,0x20,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TManagedArrayAccessor<float>::Add(&this->SignedVolumeAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->AspectRatioAttribute,MakePersistent,(FName)0x0);
  return;
}

// IsValid @ 143fefda0

bool __thiscall GeometryCollection::Facades::FTetrahedralMetrics::IsValid(FTetrahedralMetrics *this)

{
  if (((this->SignedVolumeAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0) &&
     ((this->AspectRatioAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) {
    return true;
  }
  return false;
}


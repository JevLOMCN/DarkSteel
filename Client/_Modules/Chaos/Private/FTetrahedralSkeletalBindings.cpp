// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// FTetrahedralSkeletalBindings @ 143fd5810

FTetrahedralSkeletalBindings * __thiscall
GeometryCollection::Facades::FTetrahedralSkeletalBindings::FTetrahedralSkeletalBindings
          (FTetrahedralSkeletalBindings *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FTetrahedralSkeletalBindings *pFVar4;
  FValueType *pFVar5;
  FValueType *pFVar6;
  FValueType *pFVar7;
  TManagedArray<int> *pTVar8;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar9;
  TManagedArray<UE::Math::TVector<float>_> *pTVar10;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  
  this->_padding_ = (longlong)&___7FTetrahedralSkeletalBindings_Facades_GeometryCollection__6B_;
  pFVar7 = (FValueType *)0x0;
  (this->MeshIdAttribute).ConstCollection = param_1;
  (this->MeshIdAttribute).Collection = param_1;
  (this->MeshIdAttribute).Name = MeshIdAttributeName;
  (this->MeshIdAttribute).Group = MeshBindingsIdGroupName;
  (this->MeshIdAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MeshIdAttribute).DefaultGroupDependency.Number = 0;
  local_b8 = MeshIdAttributeName;
  local_b0 = MeshBindingsIdGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_b8);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  pFVar5 = pFVar7;
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FStringType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar5 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTetrahedralSkeletalBindings *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->MeshIdAttribute).AttributeArray = (TManagedArray<FString> *)pFVar5;
  (this->MeshIdAttribute).ConstAttributeArray = (TManagedArray<FString> *)pFVar5;
  (this->MeshGroupIndexAttribute).ConstCollection = param_1;
  (this->MeshGroupIndexAttribute).Collection = param_1;
  (this->MeshGroupIndexAttribute).Name = MeshIndexAttributeName;
  (this->MeshGroupIndexAttribute).Group = MeshBindingsGroupName;
  (this->MeshGroupIndexAttribute).DefaultGroupDependency = MeshBindingsIdGroupName;
  local_a8 = MeshIndexAttributeName;
  local_a0 = MeshBindingsGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_a8);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  pFVar5 = pFVar7;
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FInt32Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar5 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTetrahedralSkeletalBindings *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->MeshGroupIndexAttribute).AttributeArray = (TManagedArray<int> *)pFVar5;
  (this->MeshGroupIndexAttribute).ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  ::FName::FName(&local_d8,"Tetrahedral");
  (this->TetrahedronIndexAttribute).ConstCollection = param_1;
  (this->TetrahedronIndexAttribute).Collection = param_1;
  (this->TetrahedronIndexAttribute).Name = TetrahedronIndexAttributeName;
  (this->TetrahedronIndexAttribute).Group = MeshBindingsGroupName;
  (this->TetrahedronIndexAttribute).DefaultGroupDependency = local_d8;
  local_98 = TetrahedronIndexAttributeName;
  local_90 = MeshBindingsGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_98);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  pFVar5 = pFVar7;
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FInt32Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar5 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTetrahedralSkeletalBindings *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->TetrahedronIndexAttribute).AttributeArray = (TManagedArray<int> *)pFVar5;
  (this->TetrahedronIndexAttribute).ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  (this->WeightsAttribute).ConstCollection = param_1;
  (this->WeightsAttribute).Collection = param_1;
  (this->WeightsAttribute).Name = WeightsAttributeName;
  (this->WeightsAttribute).Group = MeshBindingsGroupName;
  (this->WeightsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->WeightsAttribute).DefaultGroupDependency.Number = 0;
  local_88 = WeightsAttributeName;
  local_80 = MeshBindingsGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_88);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FVector4fType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar7 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar7 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTetrahedralSkeletalBindings *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar7->GroupIndexDependency).Number = 1;
  }
  (this->WeightsAttribute).AttributeArray = (TManagedArray<UE::Math::TVector4<float>_> *)pFVar7;
  (this->WeightsAttribute).ConstAttributeArray = (TManagedArray<UE::Math::TVector4<float>_> *)pFVar7
  ;
  (this->SkeletalIndexAttribute).ConstCollection = param_1;
  (this->SkeletalIndexAttribute).Collection = param_1;
  (this->SkeletalIndexAttribute).Name = SkeletalIndexAttributeName;
  (this->SkeletalIndexAttribute).Group = MeshBindingsGroupName;
  (this->SkeletalIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SkeletalIndexAttribute).DefaultGroupDependency.Number = 0;
  local_78 = SkeletalIndexAttributeName;
  local_70 = MeshBindingsGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_78);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = (FValueType *)0x0;
  }
  if ((pFVar7 == (FValueType *)0x0) || (pFVar7->ArrayType != FInt32Type)) {
    pTVar8 = (TManagedArray<int> *)0x0;
  }
  else {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pTVar8 = (TManagedArray<int> *)pFVar7->ManagedArray;
    if ((pTVar8 == (TManagedArray<int> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTetrahedralSkeletalBindings *)(*pcVar1)();
      return pFVar4;
    }
    pTVar8->field_0x8 = 1;
  }
  (this->SkeletalIndexAttribute).AttributeArray = pTVar8;
  (this->SkeletalIndexAttribute).ConstAttributeArray = pTVar8;
  ::FName::FName(&local_c8,"Tetrahedral");
  ::FName::FName(&local_d0,"Tetrahedron");
  (this->TetrahedronAttribute).Name = local_d0;
  (this->TetrahedronAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TetrahedronAttribute).DefaultGroupDependency.Number = 0;
  local_68 = local_d0;
  (this->TetrahedronAttribute).ConstCollection = param_1;
  (this->TetrahedronAttribute).Collection = param_1;
  (this->TetrahedronAttribute).Group = local_c8;
  local_60 = local_c8;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_68);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = (FValueType *)0x0;
  }
  if ((pFVar7 == (FValueType *)0x0) || (pFVar7->ArrayType != FIntVector4Type)) {
    pTVar9 = (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0;
  }
  else {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pTVar9 = (TManagedArray<UE::Math::TIntVector4<int>_> *)pFVar7->ManagedArray;
    if ((pTVar9 == (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTetrahedralSkeletalBindings *)(*pcVar1)();
      return pFVar4;
    }
    pTVar9->field_0x8 = 1;
  }
  (this->TetrahedronAttribute).AttributeArray = pTVar9;
  (this->TetrahedronAttribute).ConstAttributeArray = pTVar9;
  ::FName::FName(&local_c0,"Vertex");
  (this->VerticesAttribute).Name = local_c0;
  (this->VerticesAttribute).ConstCollection = param_1;
  (this->VerticesAttribute).Collection = param_1;
  (this->VerticesAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VerticesAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VerticesAttribute).DefaultGroupDependency.Number = 0;
  local_58 = local_c0;
  local_50 = FGeometryCollection::VerticesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = (FValueType *)0x0;
  }
  if ((pFVar7 == (FValueType *)0x0) || (pFVar7->ArrayType != FVectorType)) {
    pTVar10 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  else {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pTVar10 = (TManagedArray<UE::Math::TVector<float>_> *)pFVar7->ManagedArray;
    if ((pTVar10 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTetrahedralSkeletalBindings *)(*pcVar1)();
      return pFVar4;
    }
    pTVar10->field_0x8 = 1;
  }
  (this->VerticesAttribute).AttributeArray = pTVar10;
  (this->VerticesAttribute).ConstAttributeArray = pTVar10;
  if (((this->MeshIdAttribute).Collection == (FManagedArrayCollection *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTetrahedralSkeletalBindingsFacade.cpp"
                         ,0x34,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FTetrahedralSkeletalBindings *)(*pcVar1)();
    return pFVar4;
  }
  TManagedArrayAccessor<FString>::Add(&this->MeshIdAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->MeshGroupIndexAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->TetrahedronIndexAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TVector4<float>_>::Add
            (&this->WeightsAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->SkeletalIndexAttribute,MakePersistent,(FName)0x0);
  return this;
}

// FTetrahedralSkeletalBindings @ 143fd5e20

FTetrahedralSkeletalBindings * __thiscall
GeometryCollection::Facades::FTetrahedralSkeletalBindings::FTetrahedralSkeletalBindings
          (FTetrahedralSkeletalBindings *this,FManagedArrayCollection *param_1)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FTetrahedralSkeletalBindings *pFVar5;
  TManagedArray<int> *pTVar6;
  char *pcVar7;
  TManagedArray<FString> *pTVar8;
  TManagedArray<UE::Math::TVector4<float>_> *pTVar9;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar10;
  char *pcVar11;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  
  pcVar11 = (char *)0x0;
  this->_padding_ = (longlong)&___7FTetrahedralSkeletalBindings_Facades_GeometryCollection__6B_;
  (this->MeshIdAttribute).ConstCollection = param_1;
  (this->MeshIdAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->MeshIdAttribute).Name = MeshIdAttributeName;
  (this->MeshIdAttribute).Group = MeshBindingsIdGroupName;
  (this->MeshIdAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MeshIdAttribute).DefaultGroupDependency.Number = 0;
  (this->MeshIdAttribute).AttributeArray = (TManagedArray<FString> *)0x0;
  local_70 = MeshIdAttributeName;
  local_68 = MeshBindingsIdGroupName;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_70);
  pcVar7 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar7 = pcVar11;
  }
  if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\b')) {
    pTVar8 = (TManagedArray<FString> *)0x0;
  }
  else {
    pTVar8 = *(TManagedArray<FString> **)(pcVar7 + 0x20);
    if (pTVar8 == (TManagedArray<FString> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FTetrahedralSkeletalBindings *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  (this->MeshIdAttribute).ConstAttributeArray = pTVar8;
  (this->MeshGroupIndexAttribute).ConstCollection = param_1;
  (this->MeshGroupIndexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->MeshGroupIndexAttribute).Name = MeshIndexAttributeName;
  (this->MeshGroupIndexAttribute).Group = MeshBindingsGroupName;
  (this->MeshGroupIndexAttribute).DefaultGroupDependency = MeshBindingsIdGroupName;
  (this->MeshGroupIndexAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,MeshIndexAttributeName,MeshBindingsGroupName);
  (this->MeshGroupIndexAttribute).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_90,"Tetrahedral");
  (this->TetrahedronIndexAttribute).ConstCollection = param_1;
  (this->TetrahedronIndexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->TetrahedronIndexAttribute).Name = TetrahedronIndexAttributeName;
  (this->TetrahedronIndexAttribute).Group = MeshBindingsGroupName;
  (this->TetrahedronIndexAttribute).DefaultGroupDependency = local_90;
  (this->TetrahedronIndexAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,TetrahedronIndexAttributeName,MeshBindingsGroupName);
  (this->TetrahedronIndexAttribute).ConstAttributeArray = pTVar6;
  (this->WeightsAttribute).ConstCollection = param_1;
  (this->WeightsAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->WeightsAttribute).Name = WeightsAttributeName;
  (this->WeightsAttribute).Group = MeshBindingsGroupName;
  (this->WeightsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->WeightsAttribute).DefaultGroupDependency.Number = 0;
  (this->WeightsAttribute).AttributeArray = (TManagedArray<UE::Math::TVector4<float>_> *)0x0;
  local_60 = WeightsAttributeName;
  local_58 = MeshBindingsGroupName;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_60);
  pcVar7 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar7 = pcVar11;
  }
  if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\'')) {
    pTVar9 = (TManagedArray<UE::Math::TVector4<float>_> *)0x0;
  }
  else {
    pTVar9 = *(TManagedArray<UE::Math::TVector4<float>_> **)(pcVar7 + 0x20);
    if (pTVar9 == (TManagedArray<UE::Math::TVector4<float>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FTetrahedralSkeletalBindings *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  (this->WeightsAttribute).ConstAttributeArray = pTVar9;
  (this->SkeletalIndexAttribute).ConstCollection = param_1;
  (this->SkeletalIndexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->SkeletalIndexAttribute).Name = SkeletalIndexAttributeName;
  (this->SkeletalIndexAttribute).Group = MeshBindingsGroupName;
  (this->SkeletalIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SkeletalIndexAttribute).DefaultGroupDependency.Number = 0;
  (this->SkeletalIndexAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,SkeletalIndexAttributeName,MeshBindingsGroupName);
  (this->SkeletalIndexAttribute).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_80,"Tetrahedral");
  ::FName::FName(&local_88,"Tetrahedron");
  (this->TetrahedronAttribute).Name = local_88;
  (this->TetrahedronAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TetrahedronAttribute).DefaultGroupDependency.Number = 0;
  local_50 = local_88;
  (this->TetrahedronAttribute).ConstCollection = param_1;
  (this->TetrahedronAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->TetrahedronAttribute).Group = local_80;
  (this->TetrahedronAttribute).AttributeArray = (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0;
  local_48 = local_80;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_50);
  pcVar7 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar7 = pcVar11;
  }
  if ((pcVar7 == (char *)0x0) || (*pcVar7 != '!')) {
    pTVar10 = (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0;
  }
  else {
    pTVar10 = *(TManagedArray<UE::Math::TIntVector4<int>_> **)(pcVar7 + 0x20);
    if (pTVar10 == (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FTetrahedralSkeletalBindings *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  (this->TetrahedronAttribute).ConstAttributeArray = pTVar10;
  ::FName::FName(&local_78,"Vertex");
  (this->VerticesAttribute).Name = local_78;
  (this->VerticesAttribute).ConstCollection = param_1;
  (this->VerticesAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VerticesAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VerticesAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VerticesAttribute).DefaultGroupDependency.Number = 0;
  (this->VerticesAttribute).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_40 = local_78;
  local_38 = FGeometryCollection::VerticesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_40);
  pcVar7 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar7 = pcVar11;
  }
  if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\x01')) {
    (this->VerticesAttribute).ConstAttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  else {
    pTVar1 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar7 + 0x20);
    if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FTetrahedralSkeletalBindings *)(*pcVar2)();
        return pFVar5;
      }
    }
    (this->VerticesAttribute).ConstAttributeArray = pTVar1;
  }
  return this;
}

// ~FTetrahedralSkeletalBindings @ 143fd7970

void __thiscall
GeometryCollection::Facades::FTetrahedralSkeletalBindings::~FTetrahedralSkeletalBindings
          (FTetrahedralSkeletalBindings *this)

{
  this->_padding_ = (longlong)&___7FTetrahedralSkeletalBindings_Facades_GeometryCollection__6B_;
  return;
}

// CalculateBindings @ 143fdfb10

bool __thiscall
GeometryCollection::Facades::FTetrahedralSkeletalBindings::CalculateBindings
          (FTetrahedralSkeletalBindings *this,FString *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined8 uVar1;
  TManagedArrayBase<FString> *this_00;
  TManagedArray<UE::Math::TVector4<float>_> *pTVar2;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar3;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  undefined1 uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  TManagedArray<int> *pTVar25;
  TManagedArray<int> *pTVar26;
  TManagedArray<int> *pTVar27;
  uint uVar28;
  longlong lVar29;
  int *piVar30;
  uint uVar31;
  longlong lVar32;
  double dVar33;
  double dVar34;
  longlong local_1a8;
  double local_198;
  double local_188;
  
  this_00 = (TManagedArrayBase<FString> *)(this->MeshIdAttribute).ConstAttributeArray;
  if (((((this_00 == (TManagedArrayBase<FString> *)0x0) ||
        ((this->MeshGroupIndexAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0)) ||
       ((this->TetrahedronIndexAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0)) ||
      (((this->WeightsAttribute).ConstAttributeArray ==
        (TManagedArray<UE::Math::TVector4<float>_> *)0x0 ||
       ((this->SkeletalIndexAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0)))) ||
     (((this->TetrahedronAttribute).ConstAttributeArray ==
       (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0 ||
      ((this->VerticesAttribute).ConstAttributeArray ==
       (TManagedArray<UE::Math::TVector<float>_> *)0x0)))) {
    return false;
  }
  if (param_2->ArrayNum != 0) {
    iVar21 = TManagedArrayBase<FString>::Find(this_00,param_1);
    if (iVar21 == -1) {
      return false;
    }
    pTVar25 = TManagedArrayAccessor<int>::Get(&this->MeshGroupIndexAttribute);
    pTVar26 = TManagedArrayAccessor<int>::Get(&this->TetrahedronIndexAttribute);
    if (((this->WeightsAttribute).ConstAttributeArray ==
         (TManagedArray<UE::Math::TVector4<float>_> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x67,L""), bVar19)) {
      pcVar6 = (code *)swi(3);
      uVar20 = (*pcVar6)();
      return (bool)uVar20;
    }
    pTVar2 = (this->WeightsAttribute).ConstAttributeArray;
    pTVar27 = TManagedArrayAccessor<int>::Get(&this->SkeletalIndexAttribute);
    if (((this->TetrahedronAttribute).ConstAttributeArray ==
         (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x67,L""), bVar19)) {
      pcVar6 = (code *)swi(3);
      uVar20 = (*pcVar6)();
      return (bool)uVar20;
    }
    pTVar3 = (this->TetrahedronAttribute).ConstAttributeArray;
    (**(code **)(*(longlong *)pTVar25 + 0x60))(pTVar25);
    uVar31 = 0;
    iVar22 = (**(code **)(*(longlong *)pTVar25 + 0x60))(pTVar25);
    if (0 < iVar22) {
      lVar29 = 0;
      local_1a8 = 0;
      do {
        uVar28 = ~uVar31 >> 0x1f;
        uVar23 = 0;
        if ((int)uVar31 < *(int *)&pTVar25->field_0x18) {
          uVar23 = uVar28;
        }
        if ((uVar23 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar6 = (code *)swi(3);
          uVar20 = (*pcVar6)();
          return (bool)uVar20;
        }
        if (*(int *)(*(longlong *)&pTVar25->field_0x10 + lVar29 * 4) == iVar21) {
          uVar23 = 0;
          if ((int)uVar31 < *(int *)&pTVar26->field_0x18) {
            uVar23 = uVar28;
          }
          if ((uVar23 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar6 = (code *)swi(3);
            uVar20 = (*pcVar6)();
            return (bool)uVar20;
          }
          uVar23 = *(uint *)(*(longlong *)&pTVar26->field_0x10 + lVar29 * 4);
          if (-1 < (int)uVar23) {
            pTVar4 = (this->TetrahedronAttribute).ConstAttributeArray;
            if (pTVar4 == (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) {
              iVar22 = FManagedArrayCollection::NumElements
                                 ((this->TetrahedronAttribute).ConstCollection,
                                  (this->TetrahedronAttribute).Group);
            }
            else {
              iVar22 = (**(code **)(*(longlong *)pTVar4 + 0x60))();
            }
            if ((int)uVar23 < iVar22) {
              uVar24 = 0;
              if ((int)uVar23 < *(int *)&pTVar3->field_0x18) {
                uVar24 = ~uVar23 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar6 = (code *)swi(3);
                uVar20 = (*pcVar6)();
                return (bool)uVar20;
              }
              piVar30 = (int *)((longlong)(int)uVar23 * 0x10 + *(longlong *)&pTVar3->field_0x10);
              uVar23 = 0;
              if ((int)uVar31 < *(int *)&pTVar27->field_0x18) {
                uVar23 = uVar28;
              }
              if ((uVar23 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar6 = (code *)swi(3);
                uVar20 = (*pcVar6)();
                return (bool)uVar20;
              }
              uVar23 = *(uint *)(*(longlong *)&pTVar27->field_0x10 + lVar29 * 4);
              lVar32 = (longlong)(int)uVar23;
              if ((-1 < (int)uVar23) && ((int)uVar23 < param_3->ArrayNum)) {
                uVar24 = 0;
                if ((int)uVar31 < *(int *)&pTVar2->field_0x18) {
                  uVar24 = uVar28;
                }
                if ((uVar24 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar6 = (code *)swi(3);
                  uVar20 = (*pcVar6)();
                  return (bool)uVar20;
                }
                dVar7 = (double)*(float *)(local_1a8 + 0xc + *(longlong *)&pTVar2->field_0x10);
                uVar24 = 0;
                if ((int)uVar31 < *(int *)&pTVar2->field_0x18) {
                  uVar24 = uVar28;
                }
                if ((uVar24 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar6 = (code *)swi(3);
                  uVar20 = (*pcVar6)();
                  return (bool)uVar20;
                }
                dVar8 = (double)*(float *)(local_1a8 + 8 + *(longlong *)&pTVar2->field_0x10);
                uVar24 = 0;
                if ((int)uVar31 < *(int *)&pTVar2->field_0x18) {
                  uVar24 = uVar28;
                }
                if ((uVar24 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar6 = (code *)swi(3);
                  uVar20 = (*pcVar6)();
                  return (bool)uVar20;
                }
                dVar9 = (double)*(float *)(local_1a8 + 4 + *(longlong *)&pTVar2->field_0x10);
                uVar24 = 0;
                if ((int)uVar31 < *(int *)&pTVar2->field_0x18) {
                  uVar24 = uVar28;
                }
                if ((uVar24 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar6 = (code *)swi(3);
                  uVar20 = (*pcVar6)();
                  return (bool)uVar20;
                }
                iVar22 = *piVar30;
                dVar17 = (double)*(float *)(local_1a8 + *(longlong *)&pTVar2->field_0x10);
                if ((iVar22 < 0) || (param_2->ArrayNum <= iVar22)) {
                  local_198 = 0.0;
                  local_188 = 0.0;
                  dVar18 = 0.0;
                }
                else {
                  if ((iVar22 < 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar6 = (code *)swi(3);
                    uVar20 = (*pcVar6)();
                    return (bool)uVar20;
                  }
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  uVar1 = *(undefined8 *)(pFVar5 + (longlong)iVar22 * 0xc);
                  dVar18 = (double)*(float *)(pFVar5 + (longlong)iVar22 * 0xc + 8);
                  local_198 = (double)(float)((ulonglong)uVar1 >> 0x20);
                  local_188 = (double)(float)uVar1;
                }
                if ((*piVar30 < 0) || (param_2->ArrayNum <= *piVar30)) {
                  dVar14 = 0.0;
                  dVar15 = 0.0;
                  dVar16 = 0.0;
                }
                else {
                  uVar28 = piVar30[1];
                  uVar24 = 0;
                  if ((int)uVar28 < param_2->ArrayNum) {
                    uVar24 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar24 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar6 = (code *)swi(3);
                    uVar20 = (*pcVar6)();
                    return (bool)uVar20;
                  }
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  uVar1 = *(undefined8 *)(pFVar5 + (longlong)(int)uVar28 * 0xc);
                  dVar15 = (double)(float)((ulonglong)uVar1 >> 0x20);
                  dVar14 = (double)*(float *)(pFVar5 + (longlong)(int)uVar28 * 0xc + 8);
                  dVar16 = (double)(float)uVar1;
                }
                if ((*piVar30 < 0) || (param_2->ArrayNum <= *piVar30)) {
                  dVar12 = 0.0;
                  dVar13 = 0.0;
                  dVar11 = 0.0;
                }
                else {
                  uVar28 = piVar30[2];
                  uVar24 = 0;
                  if ((int)uVar28 < param_2->ArrayNum) {
                    uVar24 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar24 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar6 = (code *)swi(3);
                    uVar20 = (*pcVar6)();
                    return (bool)uVar20;
                  }
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  uVar1 = *(undefined8 *)(pFVar5 + (longlong)(int)uVar28 * 0xc);
                  dVar13 = (double)(float)((ulonglong)uVar1 >> 0x20);
                  dVar12 = (double)*(float *)(pFVar5 + (longlong)(int)uVar28 * 0xc + 8);
                  dVar11 = (double)(float)uVar1;
                }
                if ((*piVar30 < 0) || (param_2->ArrayNum <= *piVar30)) {
                  dVar10 = 0.0;
                  dVar34 = 0.0;
                  dVar33 = 0.0;
                }
                else {
                  uVar28 = piVar30[3];
                  uVar24 = 0;
                  if ((int)uVar28 < param_2->ArrayNum) {
                    uVar24 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar24 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar6 = (code *)swi(3);
                    uVar20 = (*pcVar6)();
                    return (bool)uVar20;
                  }
                  pFVar5 = (param_2->AllocatorInstance).Data;
                  uVar1 = *(undefined8 *)(pFVar5 + (longlong)(int)uVar28 * 0xc);
                  dVar34 = (double)*(float *)(pFVar5 + (longlong)(int)uVar28 * 0xc + 8);
                  dVar10 = (double)(float)((ulonglong)uVar1 >> 0x20);
                  dVar33 = (double)(float)uVar1;
                }
                uVar28 = 0;
                if ((int)uVar23 < param_3->ArrayNum) {
                  uVar28 = ~uVar23 >> 0x1f;
                }
                if ((uVar28 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar6 = (code *)swi(3);
                  uVar20 = (*pcVar6)();
                  return (bool)uVar20;
                }
                pFVar5 = (param_3->AllocatorInstance).Data;
                *(double *)(pFVar5 + lVar32 * 0x18) =
                     dVar17 * local_188 + dVar16 * dVar9 + dVar33 * dVar7 + dVar11 * dVar8;
                *(double *)(pFVar5 + lVar32 * 0x18 + 8) =
                     dVar17 * local_198 + dVar15 * dVar9 + dVar10 * dVar7 + dVar13 * dVar8;
                *(double *)(pFVar5 + lVar32 * 0x18 + 0x10) =
                     dVar17 * dVar18 + dVar14 * dVar9 + dVar34 * dVar7 + dVar12 * dVar8;
                if ((param_4 != (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) &&
                   ((int)uVar23 < param_4->ArrayNum)) {
                  if (((int)uVar23 < 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar6 = (code *)swi(3);
                    uVar20 = (*pcVar6)();
                    return (bool)uVar20;
                  }
                  (param_4->AllocatorInstance).Data[lVar32] = (FScriptContainerElement)0x1;
                }
              }
            }
          }
        }
        uVar31 = uVar31 + 1;
        local_1a8 = local_1a8 + 0x10;
        lVar29 = lVar29 + 1;
        iVar22 = (**(code **)(*(longlong *)pTVar25 + 0x60))(pTVar25);
      } while ((int)uVar31 < iVar22);
    }
  }
  return true;
}

// DefineSchema @ 143fe7fe0

void __thiscall
GeometryCollection::Facades::FTetrahedralSkeletalBindings::DefineSchema
          (FTetrahedralSkeletalBindings *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->MeshIdAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTetrahedralSkeletalBindingsFacade.cpp"
                       ,0x34,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TManagedArrayAccessor<FString>::Add(&this->MeshIdAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->MeshGroupIndexAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->TetrahedronIndexAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TVector4<float>_>::Add
            (&this->WeightsAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->SkeletalIndexAttribute,MakePersistent,(FName)0x0);
  return;
}

// GenerateMeshGroupName @ 143fe9100

FString * __cdecl
GeometryCollection::Facades::FTetrahedralSkeletalBindings::GenerateMeshGroupName
          (FString *__return_storage_ptr__,int param_1,FName *param_2,int param_3)

{
  FString local_18;
  
  ::FName::ToString(param_2,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"v1:%d:%s:%d");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IsValid @ 143fefdc0

bool __thiscall
GeometryCollection::Facades::FTetrahedralSkeletalBindings::IsValid
          (FTetrahedralSkeletalBindings *this)

{
  if (((((this->MeshIdAttribute).ConstAttributeArray != (TManagedArray<FString> *)0x0) &&
       ((this->MeshGroupIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
      ((this->TetrahedronIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
     ((((this->WeightsAttribute).ConstAttributeArray !=
        (TManagedArray<UE::Math::TVector4<float>_> *)0x0 &&
       ((this->SkeletalIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
      (((this->TetrahedronAttribute).ConstAttributeArray !=
        (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0 &&
       ((this->VerticesAttribute).ConstAttributeArray !=
        (TManagedArray<UE::Math::TVector<float>_> *)0x0)))))) {
    return true;
  }
  return false;
}

// SetBindings @ 144001840

void __thiscall
GeometryCollection::Facades::FTetrahedralSkeletalBindings::SetBindings
          (FTetrahedralSkeletalBindings *this,FString *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  TManagedArray<UE::Math::TVector4<float>_> *pTVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  TManagedArrayBase<FString> *this_00;
  TManagedArray<int> *pTVar15;
  TManagedArray<int> *pTVar16;
  TManagedArray<int> *pTVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  longlong local_88;
  
  if (((this->MeshIdAttribute).Collection == (FManagedArrayCollection *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTetrahedralSkeletalBindingsFacade.cpp"
                          ,0x4b,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar13 = param_2->ArrayNum;
  if (((iVar13 != 0) && (iVar13 == param_3->ArrayNum)) && (iVar13 == param_4->ArrayNum)) {
    this_00 = (TManagedArrayBase<FString> *)
              TManagedArrayAccessor<FString>::Modify(&this->MeshIdAttribute);
    pTVar15 = TManagedArrayAccessor<int>::Modify(&this->MeshGroupIndexAttribute);
    pTVar16 = TManagedArrayAccessor<int>::Modify(&this->TetrahedronIndexAttribute);
    if ((((this->WeightsAttribute).AttributeArray ==
          (TManagedArray<UE::Math::TVector4<float>_> *)0x0) ||
        ((this->WeightsAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("AttributeArray!=nullptr && !IsConst()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x74,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    ((this->WeightsAttribute).AttributeArray)->field_0x8 = 1;
    pTVar5 = (this->WeightsAttribute).AttributeArray;
    pTVar17 = TManagedArrayAccessor<int>::Modify(&this->SkeletalIndexAttribute);
    uVar11 = TManagedArrayBase<FString>::Find(this_00,param_1);
    if (uVar11 == 0xffffffff) {
      uVar11 = TManagedArrayAccessor<FString>::AddElements(&this->MeshIdAttribute,1);
    }
    uVar12 = 0;
    if ((int)uVar11 < (this_00->Array).ArrayNum) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    ::FString::operator=
              ((FString *)((this_00->Array).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10),
               param_1);
    iVar13 = param_2->ArrayNum;
    if (((this->MeshGroupIndexAttribute).Collection == (FManagedArrayCollection *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!IsConst()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x41,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar12 = FManagedArrayCollection::AddElements
                       ((this->MeshGroupIndexAttribute).Collection,iVar13,
                        (this->MeshGroupIndexAttribute).Group);
    uVar22 = (ulonglong)(int)uVar12;
    iVar13 = iVar13 + uVar12;
    if ((int)uVar12 < iVar13) {
      local_88 = uVar22 << 4;
      lVar21 = uVar22 * 4;
      lVar18 = uVar22 * -0x10;
      lVar3 = uVar22 * -4;
      uVar19 = uVar12;
      do {
        uVar20 = ~uVar19 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar19 < *(int *)&pTVar15->field_0x18) {
          uVar14 = uVar20;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar25 = uVar19 - (int)uVar22;
        *(uint *)(lVar21 + *(longlong *)&pTVar15->field_0x10) = uVar11;
        uVar24 = ~uVar25 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar25 < param_2->ArrayNum) {
          uVar14 = uVar24;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar23 = lVar3 + lVar21;
        uVar4 = *(undefined4 *)((param_2->AllocatorInstance).Data + lVar23);
        uVar14 = 0;
        if ((int)uVar19 < *(int *)&pTVar16->field_0x18) {
          uVar14 = uVar20;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)(lVar21 + *(longlong *)&pTVar16->field_0x10) = uVar4;
        uVar14 = 0;
        if ((int)uVar25 < param_3->ArrayNum) {
          uVar14 = uVar24;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar1 = (param_3->AllocatorInstance).Data + local_88 + lVar18;
        uVar4 = *(undefined4 *)pFVar1;
        uVar7 = *(undefined4 *)(pFVar1 + 4);
        uVar8 = *(undefined4 *)(pFVar1 + 8);
        uVar9 = *(undefined4 *)(pFVar1 + 0xc);
        uVar14 = 0;
        if ((int)uVar19 < *(int *)&pTVar5->field_0x18) {
          uVar14 = uVar20;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar2 = (undefined4 *)(local_88 + *(longlong *)&pTVar5->field_0x10);
        *puVar2 = uVar4;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        uVar14 = 0;
        if ((int)uVar25 < param_4->ArrayNum) {
          uVar14 = uVar24;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar4 = *(undefined4 *)((param_4->AllocatorInstance).Data + lVar23);
        uVar14 = 0;
        if ((int)uVar19 < *(int *)&pTVar17->field_0x18) {
          uVar14 = uVar20;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar19 = uVar19 + 1;
        local_88 = local_88 + 0x10;
        uVar22 = (ulonglong)uVar12;
        *(undefined4 *)(lVar21 + *(longlong *)&pTVar17->field_0x10) = uVar4;
        lVar21 = lVar21 + 4;
      } while ((int)uVar19 < iVar13);
    }
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// FTetrahedralFacade @ 143fd4d10

FTetrahedralFacade * __thiscall
GeometryCollection::Facades::FTetrahedralFacade::FTetrahedralFacade
          (FTetrahedralFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FTetrahedralFacade *pFVar4;
  FValueType *pFVar5;
  FValueType *pFVar6;
  FValueType *pFVar7;
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
  FName local_48;
  
  this->ConstCollection = param_1;
  this->Collection = param_1;
  this->_padding_ = (longlong)&___7FTetrahedralFacade_Facades_GeometryCollection__6B_;
  pFVar7 = (FValueType *)0x0;
  ::FName::FName(&local_d0,"Tetrahedral");
  ::FName::FName(&local_d8,"Tetrahedron");
  (this->Tetrahedron).Name = local_d8;
  (this->Tetrahedron).DefaultGroupDependency.ComparisonIndex = 0;
  (this->Tetrahedron).DefaultGroupDependency.Number = 0;
  local_a0 = local_d8;
  (this->Tetrahedron).ConstCollection = param_1;
  (this->Tetrahedron).Collection = param_1;
  (this->Tetrahedron).Group = local_d0;
  local_98 = local_d0;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_a0);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  pFVar5 = pFVar7;
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FIntVector4Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar5 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTetrahedralFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->Tetrahedron).AttributeArray = (TManagedArray<UE::Math::TIntVector4<int>_> *)pFVar5;
  (this->Tetrahedron).ConstAttributeArray = (TManagedArray<UE::Math::TIntVector4<int>_> *)pFVar5;
  ::FName::FName(&local_c8,"TetrahedronStart");
  (this->TetrahedronStart).Name = local_c8;
  (this->TetrahedronStart).ConstCollection = param_1;
  (this->TetrahedronStart).Collection = param_1;
  (this->TetrahedronStart).Group = FGeometryCollection::GeometryGroup;
  (this->TetrahedronStart).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TetrahedronStart).DefaultGroupDependency.Number = 0;
  local_90 = local_c8;
  local_88 = FGeometryCollection::GeometryGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_90);
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
      pFVar4 = (FTetrahedralFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->TetrahedronStart).AttributeArray = (TManagedArray<int> *)pFVar5;
  (this->TetrahedronStart).ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  ::FName::FName(&local_c0,"TetrahedronCount");
  (this->TetrahedronCount).Name = local_c0;
  (this->TetrahedronCount).ConstCollection = param_1;
  (this->TetrahedronCount).Collection = param_1;
  (this->TetrahedronCount).Group = FGeometryCollection::GeometryGroup;
  (this->TetrahedronCount).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TetrahedronCount).DefaultGroupDependency.Number = 0;
  local_80 = local_c0;
  local_78 = FGeometryCollection::GeometryGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_80);
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
      pFVar4 = (FTetrahedralFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->TetrahedronCount).AttributeArray = (TManagedArray<int> *)pFVar5;
  (this->TetrahedronCount).ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  ::FName::FName(&local_b8,"VertexStart");
  (this->VertexStart).Name = local_b8;
  (this->VertexStart).ConstCollection = param_1;
  (this->VertexStart).Collection = param_1;
  (this->VertexStart).Group = FGeometryCollection::GeometryGroup;
  (this->VertexStart).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexStart).DefaultGroupDependency.Number = 0;
  local_70 = local_b8;
  local_68 = FGeometryCollection::GeometryGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_70);
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
      pFVar4 = (FTetrahedralFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->VertexStart).AttributeArray = (TManagedArray<int> *)pFVar5;
  (this->VertexStart).ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  ::FName::FName(&local_b0,"VertexCount");
  (this->VertexCount).Name = local_b0;
  (this->VertexCount).ConstCollection = param_1;
  (this->VertexCount).Collection = param_1;
  (this->VertexCount).Group = FGeometryCollection::GeometryGroup;
  (this->VertexCount).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexCount).DefaultGroupDependency.Number = 0;
  local_60 = local_b0;
  local_58 = FGeometryCollection::GeometryGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_60);
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
      pFVar4 = (FTetrahedralFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->VertexCount).AttributeArray = (TManagedArray<int> *)pFVar5;
  (this->VertexCount).ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  ::FName::FName(&local_a8,"Vertex");
  (this->Vertex).Name = local_a8;
  (this->Vertex).ConstCollection = param_1;
  (this->Vertex).Collection = param_1;
  (this->Vertex).Group = FGeometryCollection::VerticesGroup;
  (this->Vertex).DefaultGroupDependency.ComparisonIndex = 0;
  (this->Vertex).DefaultGroupDependency.Number = 0;
  local_50 = local_a8;
  local_48 = FGeometryCollection::VerticesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_50);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FVectorType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar7 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar7 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTetrahedralFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar7->GroupIndexDependency).Number = 1;
  }
  (this->Vertex).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)pFVar7;
  (this->Vertex).ConstAttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)pFVar7;
  return this;
}

// FTetrahedralFacade @ 143fd51d0

FTetrahedralFacade * __thiscall
GeometryCollection::Facades::FTetrahedralFacade::FTetrahedralFacade
          (FTetrahedralFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FTetrahedralFacade *pFVar5;
  TManagedArray<int> *pTVar6;
  char *pcVar7;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar8;
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
  
  this->ConstCollection = param_1;
  this->_padding_ = (longlong)&___7FTetrahedralFacade_Facades_GeometryCollection__6B_;
  this->Collection = (FManagedArrayCollection *)0x0;
  ::FName::FName(&local_80,"Tetrahedral");
  ::FName::FName(&local_88,"Tetrahedron");
  (this->Tetrahedron).Name = local_88;
  (this->Tetrahedron).DefaultGroupDependency.ComparisonIndex = 0;
  (this->Tetrahedron).DefaultGroupDependency.Number = 0;
  local_50 = local_88;
  (this->Tetrahedron).ConstCollection = param_1;
  (this->Tetrahedron).Collection = (FManagedArrayCollection *)0x0;
  (this->Tetrahedron).Group = local_80;
  (this->Tetrahedron).AttributeArray = (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0;
  local_48 = local_80;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_50);
  pcVar7 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar7 = (char *)0x0;
  }
  if ((pcVar7 == (char *)0x0) || (*pcVar7 != '!')) {
    pTVar8 = (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0;
  }
  else {
    pTVar8 = *(TManagedArray<UE::Math::TIntVector4<int>_> **)(pcVar7 + 0x20);
    if (pTVar8 == (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FTetrahedralFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  (this->Tetrahedron).ConstAttributeArray = pTVar8;
  ::FName::FName(&local_78,"TetrahedronStart");
  (this->TetrahedronStart).Name = local_78;
  (this->TetrahedronStart).ConstCollection = param_1;
  (this->TetrahedronStart).Collection = (FManagedArrayCollection *)0x0;
  (this->TetrahedronStart).Group = FGeometryCollection::GeometryGroup;
  (this->TetrahedronStart).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TetrahedronStart).DefaultGroupDependency.Number = 0;
  (this->TetrahedronStart).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_78,FGeometryCollection::GeometryGroup);
  (this->TetrahedronStart).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_70,"TetrahedronCount");
  (this->TetrahedronCount).Name = local_70;
  (this->TetrahedronCount).ConstCollection = param_1;
  (this->TetrahedronCount).Collection = (FManagedArrayCollection *)0x0;
  (this->TetrahedronCount).Group = FGeometryCollection::GeometryGroup;
  (this->TetrahedronCount).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TetrahedronCount).DefaultGroupDependency.Number = 0;
  (this->TetrahedronCount).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_70,FGeometryCollection::GeometryGroup);
  (this->TetrahedronCount).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_68,"VertexStart");
  (this->VertexStart).Name = local_68;
  (this->VertexStart).ConstCollection = param_1;
  (this->VertexStart).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexStart).Group = FGeometryCollection::GeometryGroup;
  (this->VertexStart).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexStart).DefaultGroupDependency.Number = 0;
  (this->VertexStart).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_68,FGeometryCollection::GeometryGroup);
  (this->VertexStart).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_60,"VertexCount");
  (this->VertexCount).Name = local_60;
  (this->VertexCount).ConstCollection = param_1;
  (this->VertexCount).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexCount).Group = FGeometryCollection::GeometryGroup;
  (this->VertexCount).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexCount).DefaultGroupDependency.Number = 0;
  (this->VertexCount).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_60,FGeometryCollection::GeometryGroup);
  (this->VertexCount).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_58,"Vertex");
  (this->Vertex).Name = local_58;
  (this->Vertex).ConstCollection = param_1;
  (this->Vertex).Collection = (FManagedArrayCollection *)0x0;
  (this->Vertex).Group = FGeometryCollection::VerticesGroup;
  (this->Vertex).DefaultGroupDependency.ComparisonIndex = 0;
  (this->Vertex).DefaultGroupDependency.Number = 0;
  (this->Vertex).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_40 = local_58;
  local_38 = FGeometryCollection::VerticesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_40);
  pcVar7 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar7 = (char *)0x0;
  }
  if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\x01')) {
    (this->Vertex).ConstAttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
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
        pFVar5 = (FTetrahedralFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
    (this->Vertex).ConstAttributeArray = pTVar1;
  }
  return this;
}

// ~FTetrahedralFacade @ 143fd7930

void __thiscall
GeometryCollection::Facades::FTetrahedralFacade::~FTetrahedralFacade(FTetrahedralFacade *this)

{
  this->_padding_ = (longlong)&___7FTetrahedralFacade_Facades_GeometryCollection__6B_;
  return;
}

// operator() @ 143fd7af0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
`GeometryCollection::Facades::FTetrahedralFacade::Intersection'::__l2::<lambda_1>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  longlong *plVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  uint local_28 [4];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_28[0] = 0;
  while( true ) {
    lVar10 = *(longlong *)this;
    plVar1 = *(longlong **)(lVar10 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
      iVar7 = FManagedArrayCollection::NumElements
                        (*(FManagedArrayCollection **)(lVar10 + 0x88),*(FName *)(lVar10 + 0xa0));
    }
    else {
      iVar7 = (**(code **)(*plVar1 + 0x60))(plVar1);
    }
    uVar5 = local_28[0];
    lVar10 = (longlong)(int)local_28[0];
    if (iVar7 <= (int)local_28[0]) break;
    lVar2 = *(longlong *)this;
    if (*(longlong *)(lVar2 + 0xb8) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x60,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0xb8);
    uVar8 = 0;
    if ((int)uVar5 < *(int *)(lVar2 + 0x18)) {
      uVar8 = ~uVar5 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
    }
    if (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + lVar10 * 4)) {
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
         ((FScriptContainerElement *)local_28 <
          pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
           local_28[0];
    }
    local_28[0] = local_28[0] + 1;
  }
  return __return_storage_ptr__;
}

// DefineSchema @ 143fe7f50

void __thiscall
GeometryCollection::Facades::FTetrahedralFacade::DefineSchema(FTetrahedralFacade *this)

{
  return;
}

// Intersection @ 143fee3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143fef25d) */

bool __thiscall
GeometryCollection::Facades::FTetrahedralFacade::Intersection
          (FTetrahedralFacade *this,TArrayView<Chaos::TVector<float,3>_const_,int> *param_1,
          TArrayView<Chaos::TVector<float,3>_const_,int> *param_2,
          TArray<GeometryCollection::Facades::TetrahedralParticleEmbedding,TSizedDefaultAllocator<32>_>
          *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  TManagedArray<int> *pTVar3;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar4;
  undefined8 uVar5;
  TVector<float,3> *pTVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  FTetrahedralFacade *pFVar15;
  bool bVar16;
  undefined1 uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  ForAnyElementType FVar30;
  ulonglong uVar31;
  FScriptContainerElement *pFVar32;
  longlong lVar33;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  undefined1 auStackY_438 [32];
  uint local_3e8;
  undefined1 local_3e4;
  char local_3e3;
  ulonglong local_3e0;
  TArray<Chaos::TTetrahedron<double>_*,TSizedDefaultAllocator<32>_> local_3d8;
  ForAnyElementType local_3c8;
  int local_3c0 [2];
  ForAnyElementType local_3b8;
  uint local_3b0;
  int local_3ac;
  TArray<int,TSizedDefaultAllocator<32>_> local_3a8;
  uint local_398;
  uint local_394;
  uint local_390;
  ForAnyElementType local_388;
  undefined8 local_380;
  TArrayView<Chaos::TVector<float,3>_const_,int> *local_378;
  uint local_370;
  uint local_36c;
  TArray<GeometryCollection::Facades::TetrahedralParticleEmbedding,TSizedDefaultAllocator<32>_>
  *local_368;
  ForAnyElementType local_360;
  int local_358;
  int local_354;
  undefined8 local_350;
  undefined8 uStack_348;
  TArrayView<Chaos::TVector<float,3>_const_,int> *local_340;
  longlong local_338;
  FScriptContainerElement *local_330;
  FTetrahedralFacade *local_328;
  TArray<int,TSizedDefaultAllocator<32>_> local_320;
  FTetrahedralFacade *local_310;
  FScriptContainerElement *local_308;
  TArray<Chaos::TTriangle<double>,TSizedDefaultAllocator<32>_> local_300;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  undefined1 local_268 [16];
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  undefined1 local_238 [16];
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined1 local_1c8 [104];
  void *local_160;
  undefined4 local_158;
  ForAnyElementType local_150;
  ForAnyElementType local_138;
  int local_130;
  ForAnyElementType local_128;
  int local_120;
  _RTL_CRITICAL_SECTION local_118;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_438;
  local_378 = param_1;
  local_368 = param_3;
  local_340 = param_2;
  local_328 = this;
  local_310 = this;
  `GeometryCollection::Facades::FTetrahedralFacade::Intersection'::__l2::<lambda_1>::operator()
            (&local_310,&local_320);
  dVar14 = __real_3ff0000000000000;
  local_36c = local_320.ArrayNum;
  uVar23 = (ulonglong)(int)local_36c;
  local_308 = local_320.AllocatorInstance.Data + uVar23 * 4;
  FVar30.Data = local_320.AllocatorInstance.Data;
  do {
    pFVar32 = local_308;
    local_330 = FVar30.Data;
    if (local_320.ArrayNum != (int)uVar23) {
      local_3e4 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_3e4);
    }
    if (FVar30.Data == pFVar32) {
      if (local_320.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.AllocatorInstance.Data);
      }
      return 0 < param_3->ArrayNum;
    }
    uVar26 = *(uint *)FVar30.Data;
    local_370 = uVar26;
    if (((this->TetrahedronStart).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x60,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      uVar17 = (*pcVar7)();
      return (bool)uVar17;
    }
    pTVar3 = (this->TetrahedronStart).ConstAttributeArray;
    uVar25 = ~uVar26 >> 0x1f;
    uVar28 = 0;
    if ((int)uVar26 < *(int *)&pTVar3->field_0x18) {
      uVar28 = uVar25;
    }
    if ((uVar28 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar7 = (code *)swi(3);
      uVar17 = (*pcVar7)();
      return (bool)uVar17;
    }
    uVar28 = *(uint *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar26 * 4);
    if (((this->TetrahedronCount).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x60,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      uVar17 = (*pcVar7)();
      return (bool)uVar17;
    }
    pTVar3 = (this->TetrahedronCount).ConstAttributeArray;
    uVar18 = 0;
    if ((int)uVar26 < *(int *)&pTVar3->field_0x18) {
      uVar18 = uVar25;
    }
    if ((uVar18 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar7 = (code *)swi(3);
      uVar17 = (*pcVar7)();
      return (bool)uVar17;
    }
    uVar18 = *(uint *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar26 * 4);
    if (((this->VertexStart).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x60,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      uVar17 = (*pcVar7)();
      return (bool)uVar17;
    }
    uVar22 = 0;
    if ((int)uVar26 < *(int *)&((this->VertexStart).ConstAttributeArray)->field_0x18) {
      uVar22 = uVar25;
    }
    if ((uVar22 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar7 = (code *)swi(3);
      uVar17 = (*pcVar7)();
      return (bool)uVar17;
    }
    uVar23 = 0;
    iVar20 = 0;
    local_3c8.Data = (FScriptContainerElement *)0x0;
    local_3c0[0] = 0;
    local_3c0[1] = 0;
    local_3d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.ArrayNum = 0;
    local_3d8.ArrayMax = 0;
    if ((int)uVar18 < 1) {
      if ((int)uVar18 < 0) goto LAB_143fef3d5;
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,uVar18,&local_3c8,local_3c0,local_3c0 + 1);
      iVar20 = local_3d8.ArrayNum;
    }
    if (iVar20 < (int)uVar18) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar18 - iVar20,&local_3d8.AllocatorInstance,&local_3d8.ArrayNum,
                 &local_3d8.ArrayMax);
    }
    else {
      if ((int)uVar18 < 0) {
LAB_143fef3d5:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      if ((int)uVar18 < iVar20) {
        uVar26 = iVar20 - uVar18;
        if ((int)(uVar18 | uVar26) < 0) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             );
          if (bVar16) {
            pcVar7 = (code *)swi(3);
            uVar17 = (*pcVar7)();
            return (bool)uVar17;
          }
          iVar20 = local_3d8.ArrayNum;
        }
        if (uVar26 != 0) {
          iVar19 = (iVar20 - uVar26) - uVar18;
          if (iVar19 != 0) {
            memmove(local_3d8.AllocatorInstance.Data + (longlong)(int)uVar18 * 8,
                    local_3d8.AllocatorInstance.Data + (longlong)(int)uVar18 * 8 +
                    (longlong)(int)uVar26 * 8,(longlong)iVar19 << 3);
            iVar20 = local_3d8.ArrayNum;
          }
          local_3d8.ArrayNum = iVar20 - uVar26;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&local_3d8.AllocatorInstance,iVar20 - uVar26,&local_3d8.ArrayMax);
        }
      }
    }
    if (0 < (int)uVar18) {
      local_338 = 0;
      uVar31 = (ulonglong)(int)uVar28;
      lVar33 = uVar31 << 4;
      uVar24 = uVar23;
      local_3e0 = uVar31;
      do {
        pFVar15 = local_328;
        if (((local_328->Tetrahedron).ConstAttributeArray ==
             (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                ,0x60,L""), bVar16)) {
          pcVar7 = (code *)swi(3);
          uVar17 = (*pcVar7)();
          return (bool)uVar17;
        }
        pTVar4 = (pFVar15->Tetrahedron).ConstAttributeArray;
        uVar26 = (uint)uVar24;
        uVar22 = uVar26 + (int)uVar31;
        uVar25 = 0;
        if ((int)uVar22 < *(int *)&pTVar4->field_0x18) {
          uVar25 = ~uVar22 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          uVar17 = (*pcVar7)();
          return (bool)uVar17;
        }
        lVar21 = *(longlong *)&pTVar4->field_0x10;
        uVar5 = *(undefined8 *)(lVar21 + 8 + lVar33);
        puVar1 = (undefined8 *)(lVar21 + lVar33);
        local_350 = *puVar1;
        uStack_348 = puVar1[1];
        uVar22 = (uint)((ulonglong)uVar5 >> 0x20);
        uVar25 = 0;
        if ((int)uVar22 < local_340->ArrayNum) {
          uVar25 = ~uVar22 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          uVar17 = (*pcVar7)();
          return (bool)uVar17;
        }
        pTVar34 = local_340;
        uVar2 = *(undefined8 *)&local_340->DataPtr[(int)uVar22].field_0x4;
        dVar12 = (double)(float)uVar2;
        dVar13 = (double)(float)((ulonglong)uVar2 >> 0x20);
        uVar39 = SUB84(dVar13,0);
        uVar40 = (undefined4)((ulonglong)dVar13 >> 0x20);
        uVar27 = (uint)uVar5;
        uVar25 = 0;
        if ((int)uVar27 < local_340->ArrayNum) {
          uVar25 = ~uVar27 >> 0x1f;
        }
        dVar13 = (double)*(float *)(local_340->DataPtr + (int)uVar22);
        if ((uVar25 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          uVar17 = (*pcVar7)();
          return (bool)uVar17;
        }
        uVar25 = local_350._4_4_;
        pTVar6 = pTVar34->DataPtr;
        fVar35 = *(float *)(pTVar6 + (int)uVar27);
        fVar38 = *(float *)&pTVar6[(int)uVar27].field_0x4;
        fVar41 = *(float *)&pTVar6[(int)uVar27].field_0x8;
        uVar22 = 0;
        if ((int)local_350._4_4_ < pTVar34->ArrayNum) {
          uVar22 = ~local_350._4_4_ >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          uVar17 = (*pcVar7)();
          return (bool)uVar17;
        }
        uVar22 = (uint)local_350;
        uVar5 = *(undefined8 *)&pTVar34->DataPtr[(int)uVar25].field_0x4;
        dVar9 = (double)(float)uVar5;
        dVar10 = (double)(float)((ulonglong)uVar5 >> 0x20);
        uVar36 = SUB84(dVar10,0);
        uVar37 = (undefined4)((ulonglong)dVar10 >> 0x20);
        uVar27 = 0;
        if ((int)(uint)local_350 < pTVar34->ArrayNum) {
          uVar27 = ~(uint)local_350 >> 0x1f;
        }
        dVar10 = (double)*(float *)(pTVar34->DataPtr + (int)uVar25);
        if ((uVar27 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          uVar17 = (*pcVar7)();
          return (bool)uVar17;
        }
        lVar21 = (longlong)(int)uVar22;
        uVar22 = ~uVar26 >> 0x1f;
        pTVar6 = pTVar34->DataPtr;
        local_268._8_4_ = uVar36;
        local_268._0_8_ = dVar9;
        local_268._12_4_ = uVar37;
        local_288 = (double)*(float *)(pTVar6 + lVar21);
        dStack_280 = (double)*(float *)&pTVar6[lVar21].field_0x4;
        local_278 = (double)*(float *)&pTVar6[lVar21].field_0x8;
        uVar25 = 0;
        if ((int)uVar26 < local_3c0[0]) {
          uVar25 = uVar22;
        }
        local_238._8_4_ = uVar39;
        local_238._0_8_ = dVar12;
        local_238._12_4_ = uVar40;
        dStack_270 = dVar10;
        local_258 = (double)fVar35;
        dStack_250 = (double)fVar38;
        local_248 = (double)fVar41;
        dStack_240 = dVar13;
        if ((uVar25 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          uVar17 = (*pcVar7)();
          return (bool)uVar17;
        }
        *(double *)(local_3c8.Data + uVar23) = local_288;
        *(double *)(local_3c8.Data + uVar23 + 8) = dStack_280;
        *(double *)(local_3c8.Data + uVar23 + 0x10) = local_278;
        *(double *)(local_3c8.Data + uVar23 + 0x10 + 8) = dStack_270;
        auVar8._8_4_ = uVar36;
        auVar8._0_8_ = dVar9;
        auVar8._12_4_ = uVar37;
        *(undefined1 (*) [16])(local_3c8.Data + uVar23 + 0x20) = auVar8;
        *(double *)(local_3c8.Data + uVar23 + 0x30) = local_258;
        *(double *)(local_3c8.Data + uVar23 + 0x30 + 8) = dStack_250;
        *(double *)(local_3c8.Data + uVar23 + 0x40) = local_248;
        *(double *)(local_3c8.Data + uVar23 + 0x40 + 8) = dStack_240;
        auVar11._8_4_ = uVar39;
        auVar11._0_8_ = dVar12;
        auVar11._12_4_ = uVar40;
        *(undefined1 (*) [16])(local_3c8.Data + uVar23 + 0x50) = auVar11;
        uVar25 = 0;
        if ((int)uVar26 < local_3c0[0]) {
          uVar25 = uVar22;
        }
        if ((uVar25 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          uVar17 = (*pcVar7)();
          return (bool)uVar17;
        }
        pFVar32 = local_3c8.Data + uVar23;
        uVar25 = 0;
        if ((int)uVar26 < local_3d8.ArrayNum) {
          uVar25 = uVar22;
        }
        if ((uVar25 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          uVar17 = (*pcVar7)();
          return (bool)uVar17;
        }
        uVar24 = (ulonglong)(uVar26 + 1);
        uVar23 = uVar23 + 0x60;
        lVar33 = lVar33 + 0x10;
        *(FScriptContainerElement **)(local_3d8.AllocatorInstance.Data + local_338) = pFVar32;
        local_338 = local_338 + 8;
        uVar31 = (ulonglong)uVar28;
        param_3 = local_368;
      } while ((int)(uVar26 + 1) < (int)uVar18);
    }
    Chaos::
    TBoundingVolumeHierarchy<TArray<Chaos::TTetrahedron<double>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
    ::
    TBoundingVolumeHierarchy<TArray<Chaos::TTetrahedron<double>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
              ((TBoundingVolumeHierarchy<TArray<Chaos::TTetrahedron<double>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                *)local_1c8,&local_3d8,0xc,false,0.0);
    local_3e8 = 0;
    iVar20 = local_378->ArrayNum;
    if (0 < iVar20) {
      local_3e0 = 0;
      pTVar34 = local_378;
      do {
        uVar23 = local_3e0;
        uVar26 = 0;
        if ((int)local_3e8 < iVar20) {
          uVar26 = ~local_3e8 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          uVar17 = (*pcVar7)();
          return (bool)uVar17;
        }
        uVar5 = local_1c8._24_8_;
        pTVar6 = pTVar34->DataPtr;
        local_2f0 = (double)*(float *)(&pTVar6->field_0x0 + uVar23);
        local_2e8 = (double)*(float *)(&pTVar6->field_0x4 + uVar23);
        local_2e0 = (double)*(float *)(&pTVar6->field_0x8 + uVar23);
        if (local_130 == 0) {
          lVar33 = (longlong)(int)local_1c8._32_4_;
          local_3b8.Data = (FScriptContainerElement *)0x0;
          local_3b0 = local_1c8._32_4_;
          if (local_1c8._32_4_ == 0) {
            local_3ac = 0;
            uVar24 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_1c8._32_4_,0,&local_3b8,local_1c8._32_4_,&local_3ac);
            memcpy(local_3b8.Data,(void *)uVar5,lVar33 << 2);
            uVar24 = (ulonglong)local_3b0;
          }
        }
        else {
          if ((local_130 < 1) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            uVar17 = (*pcVar7)();
            return (bool)uVar17;
          }
          Chaos::
          TBoundingVolumeHierarchy<TArray<Chaos::TTetrahedron<double>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
          ::FindAllIntersectionsHelper
                    ((TBoundingVolumeHierarchy<TArray<Chaos::TTetrahedron<double>_*,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,double,3>
                      *)local_1c8,&local_3a8,(TBVHNode<double,3> *)local_138.Data,
                     (TVector<double,3> *)&local_2f0);
          lVar33 = (longlong)(int)local_1c8._32_4_;
          if (local_1c8._32_4_ != 0) {
            iVar20 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,local_1c8._32_4_,&local_3a8.AllocatorInstance,
                                &local_3a8.ArrayNum,&local_3a8.ArrayMax);
            memcpy(local_3a8.AllocatorInstance.Data + (longlong)iVar20 * 4,(void *)local_1c8._24_8_,
                   lVar33 << 2);
          }
          local_3b0 = local_3a8.ArrayNum;
          uVar24 = local_3a8._8_8_ & 0xffffffff;
          local_3b8.Data = local_3a8.AllocatorInstance.Data;
          local_3ac = local_3a8.ArrayMax;
          local_3a8.ArrayNum = 0;
          local_3a8.ArrayMax = 0;
          local_3a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        uVar29 = 0;
        uVar31 = uVar29;
        if (0 < (int)uVar24) {
          do {
            uVar28 = (uint)uVar29;
            uVar26 = 0;
            if ((int)uVar28 < (int)uVar24) {
              uVar26 = ~uVar28 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar7 = (code *)swi(3);
              uVar17 = (*pcVar7)();
              return (bool)uVar17;
            }
            uVar26 = *(uint *)(local_3b8.Data + uVar31);
            uVar25 = 0;
            if ((int)uVar26 < local_3c0[0]) {
              uVar25 = ~uVar26 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar7 = (code *)swi(3);
              uVar17 = (*pcVar7)();
              return (bool)uVar17;
            }
            local_2d8 = (double)*(float *)(&pTVar6->field_0x0 + uVar23);
            lVar33 = (longlong)(int)uVar26 * 0x60;
            local_2d0 = (double)*(float *)(&pTVar6->field_0x4 + uVar23);
            local_2c8 = (double)*(float *)(&pTVar6->field_0x8 + uVar23);
            Chaos::TTetrahedron<double>::GetTriangles
                      ((TTetrahedron<double> *)(local_3c8.Data + lVar33),&local_300);
            local_3e3 = Chaos::TTetrahedron<double>::Outside
                                  (&local_300,(TVector<double,3> *)&local_2d8,0.0);
            if (local_300.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_300.AllocatorInstance.Data);
            }
            if (local_3e3 == '\0') {
              uVar28 = 0;
              if ((int)uVar26 < local_3c0[0]) {
                uVar28 = ~uVar26 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar7 = (code *)swi(3);
                uVar17 = (*pcVar7)();
                return (bool)uVar17;
              }
              uVar23 = local_3e0;
              local_220 = *(double *)(local_3c8.Data + lVar33 + 0x48);
              local_200 = *(double *)(local_3c8.Data + lVar33 + 0x50);
              local_1f0 = *(double *)(local_3c8.Data + lVar33 + 0x58);
              local_2c0 = (double)*(float *)(&pTVar6->field_0x0 + local_3e0) - local_220;
              local_2b8 = (double)*(float *)(&pTVar6->field_0x4 + local_3e0) - local_200;
              local_228 = *(double *)(local_3c8.Data + lVar33) - local_220;
              local_2b0 = (double)*(float *)(&pTVar6->field_0x8 + local_3e0) - local_1f0;
              local_218 = *(double *)(local_3c8.Data + lVar33 + 0x30) - local_220;
              local_220 = *(double *)(local_3c8.Data + lVar33 + 0x18) - local_220;
              local_208 = *(double *)(local_3c8.Data + lVar33 + 0x20) - local_200;
              local_210 = *(double *)(local_3c8.Data + lVar33 + 8) - local_200;
              local_1f8 = *(double *)(local_3c8.Data + lVar33 + 0x10) - local_1f0;
              local_200 = *(double *)(local_3c8.Data + lVar33 + 0x38) - local_200;
              local_1e8 = *(double *)(local_3c8.Data + lVar33 + 0x40) - local_1f0;
              local_1f0 = *(double *)(local_3c8.Data + lVar33 + 0x28) - local_1f0;
              Chaos::RowMaj3x3RobustSolveLinearSystem<double,Chaos::TVector<double,3>_>
                        ((TVector<double,3> *)&local_2a8,&local_228,(TVector<double,3> *)&local_2c0)
              ;
              local_360.Data = (FScriptContainerElement *)0x0;
              local_358 = 4;
              fVar42 = (float)local_2a8;
              fVar35 = (float)local_2a0;
              fVar38 = (float)(((dVar14 - local_2a8) - local_2a0) - local_298);
              fVar41 = (float)local_298;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,4,0,&local_360,4,&local_354);
              FVar30.Data = local_360.Data;
              *(float *)local_360.Data = fVar42;
              *(float *)(local_360.Data + 4) = fVar35;
              *(float *)(local_360.Data + 8) = fVar41;
              *(float *)(local_360.Data + 0xc) = fVar38;
              lVar33 = (longlong)local_358;
              local_398 = local_3e8;
              local_388.Data = (FScriptContainerElement *)0x0;
              local_394 = local_370;
              local_380 = CONCAT44(local_380._4_4_,local_358);
              local_390 = uVar26;
              local_1d8 = fVar42;
              fStack_1d4 = fVar35;
              fStack_1d0 = fVar41;
              fStack_1cc = fVar38;
              if (local_358 == 0) {
                local_380 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_358,0,&local_388,local_358,(int *)((longlong)&local_380 + 4));
                memcpy(local_388.Data,FVar30.Data,lVar33 << 2);
              }
              if (local_360.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_360.Data);
              }
              param_3 = local_368;
              pFVar32 = (local_368->AllocatorInstance).Data;
              if (((pFVar32 <= (FScriptContainerElement *)&local_398) &&
                  ((FScriptContainerElement *)&local_398 <
                   pFVar32 + (longlong)local_368->ArrayMax * 0x20)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar16)) {
                pcVar7 = (code *)swi(3);
                uVar17 = (*pcVar7)();
                return (bool)uVar17;
              }
              iVar20 = param_3->ArrayNum;
              if (iVar20 == param_3->ArrayMax) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x820,&param_3->AllocatorInstance,&param_3->ArrayMax);
              }
              param_3->ArrayNum = iVar20 + 1;
              pFVar32 = (param_3->AllocatorInstance).Data;
              lVar33 = (longlong)iVar20 * 0x20;
              *(uint *)(pFVar32 + lVar33) = local_398;
              *(uint *)(pFVar32 + lVar33 + 4) = local_394;
              *(uint *)(pFVar32 + lVar33 + 8) = local_390;
              *(undefined8 *)(pFVar32 + lVar33 + 0x10) = 0;
              *(FScriptContainerElement **)(pFVar32 + lVar33 + 0x10) = local_388.Data;
              local_388.Data = (FScriptContainerElement *)0x0;
              *(undefined4 *)(pFVar32 + lVar33 + 0x18) = (undefined4)local_380;
              *(undefined4 *)(pFVar32 + lVar33 + 0x1c) = local_380._4_4_;
              local_380 = 0;
              pTVar34 = local_378;
              break;
            }
            uVar24 = (ulonglong)local_3b0;
            uVar29 = (ulonglong)(uVar28 + 1);
            uVar23 = local_3e0;
            pTVar34 = local_378;
            param_3 = local_368;
            uVar31 = uVar31 + 4;
          } while ((int)(uVar28 + 1) < (int)local_3b0);
        }
        if (local_3b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.Data);
        }
        iVar20 = pTVar34->ArrayNum;
        local_3e8 = local_3e8 + 1;
        local_3e0 = uVar23 + 0xc;
      } while ((int)local_3e8 < iVar20);
    }
    DeleteCriticalSection(&local_118);
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_128.Data,local_120);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_128.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_128.Data);
    }
    DestructItems<Chaos::TBVHNode<double,3>,int>((TBVHNode<double,3> *)local_138.Data,local_130);
    if ((TBVHNode<double,3> *)local_138.Data != (TBVHNode<double,3> *)0x0) {
      FMemory::Free(local_138.Data);
    }
    if (local_150.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data);
    }
    local_158 = 0;
    if (local_160 != (void *)0x0) {
      FMemory::Free(local_160);
    }
    TSparseArray<TSparseSetElement<TTuple<int,Chaos::TAABB<double,3>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,Chaos::TAABB<double,3>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,Chaos::TAABB<double,3>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_1c8 + 0x28));
    if ((FScriptContainerElement *)local_1c8._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1c8._24_8_);
    }
    if (local_3d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.AllocatorInstance.Data);
    }
    if (local_3c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data);
    }
    FVar30.Data = local_330 + 4;
    uVar23 = (ulonglong)local_36c;
    this = local_328;
  } while( true );
}

// IsValid @ 143fefd50

bool __thiscall GeometryCollection::Facades::FTetrahedralFacade::IsValid(FTetrahedralFacade *this)

{
  if (((((this->Tetrahedron).ConstAttributeArray !=
         (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) &&
       ((this->TetrahedronStart).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
      ((this->TetrahedronCount).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
     ((((this->VertexStart).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
       ((this->VertexCount).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
      ((this->Vertex).ConstAttributeArray != (TManagedArray<UE::Math::TVector<float>_> *)0x0)))) {
    return true;
  }
  return false;
}


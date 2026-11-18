// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// FCollectionMeshFacade @ 143f876c0

FCollectionMeshFacade * __thiscall
GeometryCollection::Facades::FCollectionMeshFacade::FCollectionMeshFacade
          (FCollectionMeshFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
  TManagedArray<UE::Math::TVector<float>_> *pTVar4;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar5;
  FCollectionMeshFacade *pFVar6;
  TManagedArray<bool> *pTVar7;
  FValueType *pFVar8;
  FValueType *pFVar9;
  FValueType *pFVar10;
  FName local_e0;
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
  FName local_40;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)param_1;
  pFVar10 = (FValueType *)0x0;
  ::FName::FName(&local_e0,"TransformToGeometryIndex");
  (this->TransformToGeometryIndexAttribute).Name = local_e0;
  (this->TransformToGeometryIndexAttribute).ConstCollection = param_1;
  (this->TransformToGeometryIndexAttribute).Collection = param_1;
  (this->TransformToGeometryIndexAttribute).Group = FTransformCollection::TransformGroup;
  (this->TransformToGeometryIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TransformToGeometryIndexAttribute).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_e0,FTransformCollection::TransformGroup);
  (this->TransformToGeometryIndexAttribute).AttributeArray = pTVar3;
  (this->TransformToGeometryIndexAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_d8,"TransformIndex");
  (this->TransformIndexAttribute).Name = local_d8;
  (this->TransformIndexAttribute).ConstCollection = param_1;
  (this->TransformIndexAttribute).Collection = param_1;
  (this->TransformIndexAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->TransformIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TransformIndexAttribute).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_d8,FGeometryCollection::GeometryGroup);
  (this->TransformIndexAttribute).AttributeArray = pTVar3;
  (this->TransformIndexAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_d0,"Vertex");
  (this->VertexAttribute).Name = local_d0;
  (this->VertexAttribute).ConstCollection = param_1;
  (this->VertexAttribute).Collection = param_1;
  (this->VertexAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VertexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexAttribute).DefaultGroupDependency.Number = 0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                     (param_1,local_d0,FGeometryCollection::VerticesGroup);
  (this->VertexAttribute).AttributeArray = pTVar4;
  (this->VertexAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_c8,"TangentU");
  (this->TangentUAttribute).Name = local_c8;
  (this->TangentUAttribute).ConstCollection = param_1;
  (this->TangentUAttribute).Collection = param_1;
  (this->TangentUAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->TangentUAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TangentUAttribute).DefaultGroupDependency.Number = 0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                     (param_1,local_c8,FGeometryCollection::VerticesGroup);
  (this->TangentUAttribute).AttributeArray = pTVar4;
  (this->TangentUAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_c0,"TangentV");
  (this->TangentVAttribute).Name = local_c0;
  (this->TangentVAttribute).ConstCollection = param_1;
  (this->TangentVAttribute).Collection = param_1;
  (this->TangentVAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->TangentVAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TangentVAttribute).DefaultGroupDependency.Number = 0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                     (param_1,local_c0,FGeometryCollection::VerticesGroup);
  (this->TangentVAttribute).AttributeArray = pTVar4;
  (this->TangentVAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_b8,"Normal");
  (this->NormalAttribute).Name = local_b8;
  (this->NormalAttribute).ConstCollection = param_1;
  (this->NormalAttribute).Collection = param_1;
  (this->NormalAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->NormalAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->NormalAttribute).DefaultGroupDependency.Number = 0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                     (param_1,local_b8,FGeometryCollection::VerticesGroup);
  (this->NormalAttribute).AttributeArray = pTVar4;
  (this->NormalAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_b0,"Color");
  (this->ColorAttribute).Name = local_b0;
  (this->ColorAttribute).ConstCollection = param_1;
  (this->ColorAttribute).Collection = param_1;
  (this->ColorAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->ColorAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ColorAttribute).DefaultGroupDependency.Number = 0;
  local_58 = local_b0;
  local_50 = FGeometryCollection::VerticesGroup;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  pFVar9 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar9 = pFVar10;
  }
  pFVar8 = pFVar10;
  if ((pFVar9 != (FValueType *)0x0) && (pFVar9->ArrayType == FLinearColorType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar9);
    pFVar8 = (FValueType *)pFVar9->ManagedArray;
    if ((pFVar8 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FCollectionMeshFacade *)(*pcVar1)();
      return pFVar6;
    }
    *(undefined1 *)&(pFVar8->GroupIndexDependency).Number = 1;
  }
  (this->ColorAttribute).AttributeArray = (TManagedArray<FLinearColor> *)pFVar8;
  (this->ColorAttribute).ConstAttributeArray = (TManagedArray<FLinearColor> *)pFVar8;
  ::FName::FName(&local_a8,"BoneMap");
  (this->BoneMapAttribute).Name = local_a8;
  (this->BoneMapAttribute).ConstCollection = param_1;
  (this->BoneMapAttribute).Collection = param_1;
  (this->BoneMapAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->BoneMapAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneMapAttribute).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_a8,FGeometryCollection::VerticesGroup);
  (this->BoneMapAttribute).AttributeArray = pTVar3;
  (this->BoneMapAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_a0,"VertexStart");
  (this->VertexStartAttribute).Name = local_a0;
  (this->VertexStartAttribute).ConstCollection = param_1;
  (this->VertexStartAttribute).Collection = param_1;
  (this->VertexStartAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->VertexStartAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexStartAttribute).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_a0,FGeometryCollection::GeometryGroup);
  (this->VertexStartAttribute).AttributeArray = pTVar3;
  (this->VertexStartAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_98,"VertexCount");
  (this->VertexCountAttribute).Name = local_98;
  (this->VertexCountAttribute).ConstCollection = param_1;
  (this->VertexCountAttribute).Collection = param_1;
  (this->VertexCountAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->VertexCountAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexCountAttribute).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_98,FGeometryCollection::GeometryGroup);
  (this->VertexCountAttribute).AttributeArray = pTVar3;
  (this->VertexCountAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_90,"Indices");
  (this->IndicesAttribute).Name = local_90;
  (this->IndicesAttribute).ConstCollection = param_1;
  (this->IndicesAttribute).Collection = param_1;
  (this->IndicesAttribute).Group = FGeometryCollection::FacesGroup;
  (this->IndicesAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->IndicesAttribute).DefaultGroupDependency.Number = 0;
  local_48 = local_90;
  local_40 = FGeometryCollection::FacesGroup;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
  pFVar9 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar9 = pFVar10;
  }
  if ((pFVar9 != (FValueType *)0x0) && (pFVar9->ArrayType == FIntVectorType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar9);
    pFVar10 = (FValueType *)pFVar9->ManagedArray;
    if ((pFVar10 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FCollectionMeshFacade *)(*pcVar1)();
      return pFVar6;
    }
    *(undefined1 *)&(pFVar10->GroupIndexDependency).Number = 1;
  }
  (this->IndicesAttribute).AttributeArray = (TManagedArray<UE::Math::TIntVector3<int>_> *)pFVar10;
  (this->IndicesAttribute).ConstAttributeArray =
       (TManagedArray<UE::Math::TIntVector3<int>_> *)pFVar10;
  ::FName::FName(&local_88,"Visible");
  (this->VisibleAttribute).Name = local_88;
  (this->VisibleAttribute).ConstCollection = param_1;
  (this->VisibleAttribute).Collection = param_1;
  (this->VisibleAttribute).Group = FGeometryCollection::FacesGroup;
  (this->VisibleAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VisibleAttribute).DefaultGroupDependency.Number = 0;
  pTVar7 = FManagedArrayCollection::FindAttributeTyped<bool>
                     (param_1,local_88,FGeometryCollection::FacesGroup);
  (this->VisibleAttribute).AttributeArray = pTVar7;
  (this->VisibleAttribute).ConstAttributeArray = pTVar7;
  ::FName::FName(&local_80,"MaterialIndex");
  (this->MaterialIndexAttribute).Name = local_80;
  (this->MaterialIndexAttribute).ConstCollection = param_1;
  (this->MaterialIndexAttribute).Collection = param_1;
  (this->MaterialIndexAttribute).Group = FGeometryCollection::FacesGroup;
  (this->MaterialIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MaterialIndexAttribute).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_80,FGeometryCollection::FacesGroup);
  (this->MaterialIndexAttribute).AttributeArray = pTVar3;
  (this->MaterialIndexAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_78,"MaterialID");
  (this->MaterialIDAttribute).Name = local_78;
  (this->MaterialIDAttribute).ConstCollection = param_1;
  (this->MaterialIDAttribute).Collection = param_1;
  (this->MaterialIDAttribute).Group = FGeometryCollection::FacesGroup;
  (this->MaterialIDAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MaterialIDAttribute).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_78,FGeometryCollection::FacesGroup);
  (this->MaterialIDAttribute).AttributeArray = pTVar3;
  (this->MaterialIDAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_70,"Internal");
  (this->InternalAttribute).Name = local_70;
  (this->InternalAttribute).ConstCollection = param_1;
  (this->InternalAttribute).Collection = param_1;
  (this->InternalAttribute).Group = FGeometryCollection::FacesGroup;
  (this->InternalAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->InternalAttribute).DefaultGroupDependency.Number = 0;
  pTVar7 = FManagedArrayCollection::FindAttributeTyped<bool>
                     (param_1,local_70,FGeometryCollection::FacesGroup);
  (this->InternalAttribute).AttributeArray = pTVar7;
  (this->InternalAttribute).ConstAttributeArray = pTVar7;
  ::FName::FName(&local_68,"FaceStart");
  (this->FaceStartAttribute).Name = local_68;
  (this->FaceStartAttribute).ConstCollection = param_1;
  (this->FaceStartAttribute).Collection = param_1;
  (this->FaceStartAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->FaceStartAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FaceStartAttribute).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_68,FGeometryCollection::GeometryGroup);
  (this->FaceStartAttribute).AttributeArray = pTVar3;
  (this->FaceStartAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_60,"FaceCount");
  (this->FaceCountAttribute).Name = local_60;
  (this->FaceCountAttribute).ConstCollection = param_1;
  (this->FaceCountAttribute).Collection = param_1;
  (this->FaceCountAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->FaceCountAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FaceCountAttribute).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_60,FGeometryCollection::GeometryGroup);
  (this->FaceCountAttribute).AttributeArray = pTVar3;
  (this->FaceCountAttribute).ConstAttributeArray = pTVar3;
  return this;
}

// FCollectionMeshFacade @ 143f87e30

FCollectionMeshFacade * __thiscall
GeometryCollection::Facades::FCollectionMeshFacade::FCollectionMeshFacade
          (FCollectionMeshFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FCollectionMeshFacade *pFVar5;
  char *pcVar6;
  TManagedArray<UE::Math::TVector<float>_> *pTVar7;
  TManagedArray<FLinearColor> *pTVar8;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar9;
  TManagedArray<bool> *pTVar10;
  char *pcVar11;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
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
  FName local_40;
  
  this->_padding_ = (longlong)param_1;
  pcVar11 = (char *)0x0;
  this->_padding_ = 0;
  ::FName::FName(&local_140,"TransformToGeometryIndex");
  (this->TransformToGeometryIndexAttribute).Name = local_140;
  (this->TransformToGeometryIndexAttribute).ConstCollection = param_1;
  (this->TransformToGeometryIndexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->TransformToGeometryIndexAttribute).Group = FTransformCollection::TransformGroup;
  (this->TransformToGeometryIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TransformToGeometryIndexAttribute).DefaultGroupDependency.Number = 0;
  (this->TransformToGeometryIndexAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_140,FTransformCollection::TransformGroup);
  (this->TransformToGeometryIndexAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_138,"TransformIndex");
  (this->TransformIndexAttribute).Name = local_138;
  (this->TransformIndexAttribute).ConstCollection = param_1;
  (this->TransformIndexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->TransformIndexAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->TransformIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TransformIndexAttribute).DefaultGroupDependency.Number = 0;
  (this->TransformIndexAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_138,FGeometryCollection::GeometryGroup);
  (this->TransformIndexAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_130,"Vertex");
  (this->VertexAttribute).Name = local_130;
  (this->VertexAttribute).ConstCollection = param_1;
  (this->VertexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VertexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexAttribute).DefaultGroupDependency.Number = 0;
  (this->VertexAttribute).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_b8 = local_130;
  local_b0 = FGeometryCollection::VerticesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_b8);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar11;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\x01')) {
    pTVar7 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  else {
    pTVar7 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar6 + 0x20);
    if (pTVar7 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FCollectionMeshFacade *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  (this->VertexAttribute).ConstAttributeArray = pTVar7;
  ::FName::FName(&local_128,"TangentU");
  (this->TangentUAttribute).Name = local_128;
  (this->TangentUAttribute).ConstCollection = param_1;
  (this->TangentUAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->TangentUAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->TangentUAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TangentUAttribute).DefaultGroupDependency.Number = 0;
  (this->TangentUAttribute).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_a8 = local_128;
  local_a0 = FGeometryCollection::VerticesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_a8);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar11;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\x01')) {
    pTVar7 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  else {
    pTVar7 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar6 + 0x20);
    if (pTVar7 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FCollectionMeshFacade *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  (this->TangentUAttribute).ConstAttributeArray = pTVar7;
  ::FName::FName(&local_120,"TangentV");
  (this->TangentVAttribute).Name = local_120;
  (this->TangentVAttribute).ConstCollection = param_1;
  (this->TangentVAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->TangentVAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->TangentVAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TangentVAttribute).DefaultGroupDependency.Number = 0;
  (this->TangentVAttribute).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_98 = local_120;
  local_90 = FGeometryCollection::VerticesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_98);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar11;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\x01')) {
    pTVar7 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  else {
    pTVar7 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar6 + 0x20);
    if (pTVar7 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FCollectionMeshFacade *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  (this->TangentVAttribute).ConstAttributeArray = pTVar7;
  ::FName::FName(&local_118,"Normal");
  (this->NormalAttribute).Name = local_118;
  (this->NormalAttribute).ConstCollection = param_1;
  (this->NormalAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->NormalAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->NormalAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->NormalAttribute).DefaultGroupDependency.Number = 0;
  (this->NormalAttribute).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_88 = local_118;
  local_80 = FGeometryCollection::VerticesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_88);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar11;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\x01')) {
    pTVar7 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  else {
    pTVar7 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar6 + 0x20);
    if (pTVar7 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FCollectionMeshFacade *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  (this->NormalAttribute).ConstAttributeArray = pTVar7;
  ::FName::FName(&local_110,"Color");
  (this->ColorAttribute).Name = local_110;
  (this->ColorAttribute).ConstCollection = param_1;
  (this->ColorAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ColorAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->ColorAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ColorAttribute).DefaultGroupDependency.Number = 0;
  (this->ColorAttribute).AttributeArray = (TManagedArray<FLinearColor> *)0x0;
  local_78 = local_110;
  local_70 = FGeometryCollection::VerticesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_78);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar11;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\x04')) {
    pTVar8 = (TManagedArray<FLinearColor> *)0x0;
  }
  else {
    pTVar8 = *(TManagedArray<FLinearColor> **)(pcVar6 + 0x20);
    if (pTVar8 == (TManagedArray<FLinearColor> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FCollectionMeshFacade *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  (this->ColorAttribute).ConstAttributeArray = pTVar8;
  ::FName::FName(&local_108,"BoneMap");
  (this->BoneMapAttribute).Name = local_108;
  (this->BoneMapAttribute).ConstCollection = param_1;
  (this->BoneMapAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->BoneMapAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->BoneMapAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneMapAttribute).DefaultGroupDependency.Number = 0;
  (this->BoneMapAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_108,FGeometryCollection::VerticesGroup);
  (this->BoneMapAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_100,"VertexStart");
  (this->VertexStartAttribute).Name = local_100;
  (this->VertexStartAttribute).ConstCollection = param_1;
  (this->VertexStartAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexStartAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->VertexStartAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexStartAttribute).DefaultGroupDependency.Number = 0;
  (this->VertexStartAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_100,FGeometryCollection::GeometryGroup);
  (this->VertexStartAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_f8,"VertexCount");
  (this->VertexCountAttribute).Name = local_f8;
  (this->VertexCountAttribute).ConstCollection = param_1;
  (this->VertexCountAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexCountAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->VertexCountAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexCountAttribute).DefaultGroupDependency.Number = 0;
  (this->VertexCountAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_f8,FGeometryCollection::GeometryGroup);
  (this->VertexCountAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_f0,"Indices");
  (this->IndicesAttribute).Name = local_f0;
  (this->IndicesAttribute).ConstCollection = param_1;
  (this->IndicesAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->IndicesAttribute).Group = FGeometryCollection::FacesGroup;
  (this->IndicesAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->IndicesAttribute).DefaultGroupDependency.Number = 0;
  (this->IndicesAttribute).AttributeArray = (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0;
  local_68 = local_f0;
  local_60 = FGeometryCollection::FacesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_68);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar11;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\x02')) {
    pTVar9 = (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0;
  }
  else {
    pTVar9 = *(TManagedArray<UE::Math::TIntVector3<int>_> **)(pcVar6 + 0x20);
    if (pTVar9 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FCollectionMeshFacade *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  (this->IndicesAttribute).ConstAttributeArray = pTVar9;
  ::FName::FName(&local_e8,"Visible");
  (this->VisibleAttribute).Name = local_e8;
  (this->VisibleAttribute).ConstCollection = param_1;
  (this->VisibleAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VisibleAttribute).Group = FGeometryCollection::FacesGroup;
  (this->VisibleAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VisibleAttribute).DefaultGroupDependency.Number = 0;
  (this->VisibleAttribute).AttributeArray = (TManagedArray<bool> *)0x0;
  local_58 = local_e8;
  local_50 = FGeometryCollection::FacesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar11;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\x06')) {
    pTVar10 = (TManagedArray<bool> *)0x0;
  }
  else {
    pTVar10 = *(TManagedArray<bool> **)(pcVar6 + 0x20);
    if (pTVar10 == (TManagedArray<bool> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FCollectionMeshFacade *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  (this->VisibleAttribute).ConstAttributeArray = pTVar10;
  ::FName::FName(&local_e0,"MaterialIndex");
  (this->MaterialIndexAttribute).Name = local_e0;
  (this->MaterialIndexAttribute).ConstCollection = param_1;
  (this->MaterialIndexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->MaterialIndexAttribute).Group = FGeometryCollection::FacesGroup;
  (this->MaterialIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MaterialIndexAttribute).DefaultGroupDependency.Number = 0;
  (this->MaterialIndexAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_e0,FGeometryCollection::FacesGroup);
  (this->MaterialIndexAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_d8,"MaterialID");
  (this->MaterialIDAttribute).Name = local_d8;
  (this->MaterialIDAttribute).ConstCollection = param_1;
  (this->MaterialIDAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->MaterialIDAttribute).Group = FGeometryCollection::FacesGroup;
  (this->MaterialIDAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MaterialIDAttribute).DefaultGroupDependency.Number = 0;
  (this->MaterialIDAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_d8,FGeometryCollection::FacesGroup);
  (this->MaterialIDAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_d0,"Internal");
  (this->InternalAttribute).Name = local_d0;
  (this->InternalAttribute).ConstCollection = param_1;
  (this->InternalAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->InternalAttribute).Group = FGeometryCollection::FacesGroup;
  (this->InternalAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->InternalAttribute).DefaultGroupDependency.Number = 0;
  (this->InternalAttribute).AttributeArray = (TManagedArray<bool> *)0x0;
  local_48 = local_d0;
  local_40 = FGeometryCollection::FacesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = pcVar11;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\x06')) {
    pTVar10 = (TManagedArray<bool> *)0x0;
  }
  else {
    pTVar10 = *(TManagedArray<bool> **)(pcVar6 + 0x20);
    if (pTVar10 == (TManagedArray<bool> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FCollectionMeshFacade *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  (this->InternalAttribute).ConstAttributeArray = pTVar10;
  ::FName::FName(&local_c8,"FaceStart");
  (this->FaceStartAttribute).Name = local_c8;
  (this->FaceStartAttribute).ConstCollection = param_1;
  (this->FaceStartAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->FaceStartAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->FaceStartAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FaceStartAttribute).DefaultGroupDependency.Number = 0;
  (this->FaceStartAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_c8,FGeometryCollection::GeometryGroup);
  (this->FaceStartAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_c0,"FaceCount");
  (this->FaceCountAttribute).Name = local_c0;
  (this->FaceCountAttribute).ConstCollection = param_1;
  (this->FaceCountAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->FaceCountAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->FaceCountAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FaceCountAttribute).DefaultGroupDependency.Number = 0;
  (this->FaceCountAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_c0,FGeometryCollection::GeometryGroup);
  (this->FaceCountAttribute).ConstAttributeArray = pTVar3;
  return this;
}

// BakeTransform @ 143f9c820

void __thiscall
GeometryCollection::Facades::FCollectionMeshFacade::BakeTransform
          (FCollectionMeshFacade *this,int param_1,TTransform<double> *param_2)

{
  double dVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  TManagedArray<int> *pTVar14;
  TManagedArray<UE::Math::TVector<float>_> *pTVar15;
  TManagedArray<int> *pTVar16;
  TManagedArray<int> *pTVar17;
  TManagedArray<UE::Math::TVector<float>_> *pTVar18;
  TManagedArray<UE::Math::TVector<float>_> *pTVar19;
  TManagedArray<UE::Math::TVector<float>_> *pTVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined4 uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  
  pTVar14 = TManagedArrayAccessor<int>::Get(&this->TransformToGeometryIndexAttribute);
  pTVar15 = TManagedArrayAccessor<UE::Math::TVector<float>_>::Modify(&this->VertexAttribute);
  pTVar16 = TManagedArrayAccessor<int>::Get(&this->VertexStartAttribute);
  pTVar17 = TManagedArrayAccessor<int>::Get(&this->VertexCountAttribute);
  pTVar18 = TManagedArrayAccessor<UE::Math::TVector<float>_>::Modify(&this->NormalAttribute);
  pTVar19 = TManagedArrayAccessor<UE::Math::TVector<float>_>::Modify(&this->TangentUAttribute);
  pTVar20 = TManagedArrayAccessor<UE::Math::TVector<float>_>::Modify(&this->TangentVAttribute);
  uVar21 = 0;
  if (param_1 < *(int *)&pTVar14->field_0x18) {
    uVar21 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar21 = *(uint *)(*(longlong *)&pTVar14->field_0x10 + (longlong)param_1 * 4);
  uVar24 = 0;
  if ((int)uVar21 < *(int *)&pTVar16->field_0x18) {
    uVar24 = ~uVar21 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar21 = *(uint *)(*(longlong *)&pTVar16->field_0x10 + (longlong)(int)uVar21 * 4);
  lVar22 = (longlong)(int)uVar21 * 0xc;
  uVar24 = uVar21;
  while( true ) {
    uVar13 = 0;
    if (param_1 < *(int *)&pTVar14->field_0x18) {
      uVar13 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar13 = *(uint *)(*(longlong *)&pTVar14->field_0x10 + (longlong)param_1 * 4);
    uVar23 = 0;
    if ((int)uVar13 < *(int *)&pTVar17->field_0x18) {
      uVar23 = ~uVar13 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(int *)(*(longlong *)&pTVar17->field_0x10 + (longlong)(int)uVar13 * 4) <=
        (int)(uVar24 - uVar21)) {
      return;
    }
    uVar23 = ~uVar24 >> 0x1f;
    uVar13 = 0;
    if ((int)uVar24 < *(int *)&pTVar15->field_0x18) {
      uVar13 = uVar23;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    auVar49 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    dVar7 = (param_2->Rotation).ZW.m128d_f64[1];
    lVar2 = *(longlong *)&pTVar15->field_0x10;
    uVar13 = 0;
    if ((int)uVar24 < *(int *)&pTVar15->field_0x18) {
      uVar13 = uVar23;
    }
    auVar25 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    auVar33 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
    dVar36 = auVar33._0_8_;
    dVar10 = (double)*(float *)(lVar2 + 8 + lVar22) * (param_2->Scale3D).ZW.m128d_f64[0];
    dVar11 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
    auVar43 = blendpd(auVar25,auVar33,2);
    dVar37 = (double)*(float *)(lVar2 + lVar22) * (param_2->Scale3D).XY.m128d_f64[0];
    dVar6 = (double)*(float *)(lVar2 + 4 + lVar22) * (param_2->Scale3D).XY.m128d_f64[1];
    uVar58 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar59._8_4_ = SUB84(dVar6,0);
    auVar59._0_8_ = dVar37;
    auVar59._12_4_ = uVar58;
    auVar60._0_8_ = auVar59._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar37;
    auVar60._8_8_ = dVar10 * auVar25._8_8_ - dVar36 * dVar6;
    auVar48._8_4_ = SUB84(dVar6,0);
    auVar48._0_8_ = dVar37;
    auVar48._12_4_ = uVar58;
    auVar25._8_4_ = SUB84(dVar11,0);
    auVar25._0_8_ = dVar10;
    auVar25._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar25 = blendpd(auVar48,auVar25,2);
    auVar45._0_8_ = auVar25._0_8_ * dVar36 - auVar43._0_8_ * dVar10;
    auVar45._8_8_ = auVar25._8_8_ * auVar33._8_8_ - auVar43._8_8_ * dVar11;
    auVar25 = blendpd(auVar60,auVar45,2);
    dVar4 = auVar60._8_8_ + auVar60._8_8_;
    dVar5 = auVar45._0_8_ + auVar45._0_8_;
    uVar58 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar61._0_8_ = auVar25._0_8_ + auVar25._0_8_;
    auVar61._8_8_ = auVar25._8_8_ + auVar25._8_8_;
    auVar50._8_4_ = SUB84(dVar5,0);
    auVar50._0_8_ = dVar4;
    auVar50._12_4_ = uVar58;
    auVar43._8_4_ = SUB84(dVar5,0);
    auVar43._0_8_ = dVar4;
    auVar43._12_4_ = uVar58;
    auVar25 = blendpd(auVar43,auVar61,2);
    auVar51._0_8_ = auVar50._8_8_ * auVar49._0_8_ - auVar49._8_8_ * dVar4;
    auVar51._8_8_ = auVar61._0_8_ * auVar49._8_8_ - dVar36 * dVar5;
    auVar48 = blendpd(auVar49,auVar33,2);
    auVar49._8_4_ = SUB84(auVar51._8_8_,0);
    auVar49._0_8_ = auVar51._0_8_;
    auVar49._12_4_ = (int)((ulonglong)auVar51._8_8_ >> 0x20);
    auVar44._0_8_ = auVar25._0_8_ * dVar36 - auVar48._0_8_ * auVar61._0_8_;
    auVar44._8_8_ = auVar25._8_8_ * auVar33._8_8_ - auVar48._8_8_ * auVar61._8_8_;
    auVar25 = blendpd(auVar51,auVar44,2);
    dVar11 = (param_2->Translation).XY.m128d_f64[0];
    dVar1 = (param_2->Translation).XY.m128d_f64[1];
    dVar36 = (param_2->Translation).ZW.m128d_f64[0];
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar2 = *(longlong *)&pTVar15->field_0x10;
    *(float *)(lVar22 + lVar2) = (float)(dVar4 * dVar7 + dVar37 + auVar49._8_8_ + dVar11);
    *(float *)(lVar22 + 4 + lVar2) = (float)(dVar5 * dVar7 + dVar6 + auVar44._0_8_ + dVar1);
    *(float *)(lVar22 + 8 + lVar2) =
         (float)(auVar61._0_8_ * dVar7 + dVar10 + auVar25._0_8_ + dVar36);
    uVar13 = 0;
    if ((int)uVar24 < *(int *)&pTVar18->field_0x18) {
      uVar13 = uVar23;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    auVar49 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    dVar7 = (param_2->Rotation).ZW.m128d_f64[1];
    lVar2 = *(longlong *)&pTVar18->field_0x10;
    uVar13 = 0;
    if ((int)uVar24 < *(int *)&pTVar18->field_0x18) {
      uVar13 = uVar23;
    }
    auVar25 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    auVar33 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
    dVar37 = auVar33._0_8_;
    dVar5 = (double)*(float *)(lVar22 + 8 + lVar2) * (param_2->Scale3D).ZW.m128d_f64[0];
    dVar11 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
    auVar48 = blendpd(auVar25,auVar33,2);
    dVar1 = (double)*(float *)(lVar22 + lVar2) * (param_2->Scale3D).XY.m128d_f64[0];
    dVar4 = (double)*(float *)(lVar22 + 4 + lVar2) * (param_2->Scale3D).XY.m128d_f64[1];
    uVar58 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar62._8_4_ = SUB84(dVar4,0);
    auVar62._0_8_ = dVar1;
    auVar62._12_4_ = uVar58;
    auVar63._0_8_ = auVar62._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar1;
    auVar63._8_8_ = dVar5 * auVar25._8_8_ - dVar37 * dVar4;
    auVar26._8_4_ = SUB84(dVar4,0);
    auVar26._0_8_ = dVar1;
    auVar26._12_4_ = uVar58;
    auVar8._8_4_ = SUB84(dVar11,0);
    auVar8._0_8_ = dVar5;
    auVar8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar25 = blendpd(auVar26,auVar8,2);
    auVar27._0_8_ = auVar25._0_8_ * dVar37 - auVar48._0_8_ * dVar5;
    auVar27._8_8_ = auVar25._8_8_ * auVar33._8_8_ - auVar48._8_8_ * dVar11;
    auVar25 = blendpd(auVar63,auVar27,2);
    dVar11 = auVar63._8_8_ + auVar63._8_8_;
    dVar36 = auVar27._0_8_ + auVar27._0_8_;
    uVar58 = (undefined4)((ulonglong)dVar36 >> 0x20);
    auVar64._0_8_ = auVar25._0_8_ + auVar25._0_8_;
    auVar64._8_8_ = auVar25._8_8_ + auVar25._8_8_;
    auVar52._8_4_ = SUB84(dVar36,0);
    auVar52._0_8_ = dVar11;
    auVar52._12_4_ = uVar58;
    auVar38._8_4_ = SUB84(dVar36,0);
    auVar38._0_8_ = dVar11;
    auVar38._12_4_ = uVar58;
    auVar25 = blendpd(auVar38,auVar64,2);
    auVar53._0_8_ = auVar52._8_8_ * auVar49._0_8_ - auVar49._8_8_ * dVar11;
    auVar53._8_8_ = auVar64._0_8_ * auVar49._8_8_ - dVar37 * dVar36;
    auVar49 = blendpd(auVar49,auVar33,2);
    auVar28._8_4_ = SUB84(auVar53._8_8_,0);
    auVar28._0_8_ = auVar53._0_8_;
    auVar28._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
    auVar39._0_8_ = auVar25._0_8_ * dVar37 - auVar49._0_8_ * auVar64._0_8_;
    auVar39._8_8_ = auVar25._8_8_ * auVar33._8_8_ - auVar49._8_8_ * auVar64._8_8_;
    auVar49 = blendpd(auVar53,auVar39,2);
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar2 = *(longlong *)&pTVar18->field_0x10;
    *(float *)(lVar2 + lVar22) = (float)(dVar11 * dVar7 + dVar1 + auVar28._8_8_);
    *(float *)(lVar2 + 4 + lVar22) = (float)(dVar36 * dVar7 + dVar4 + auVar39._0_8_);
    *(float *)(lVar2 + 8 + lVar22) = (float)(auVar64._0_8_ * dVar7 + dVar5 + auVar49._0_8_);
    uVar13 = 0;
    if ((int)uVar24 < *(int *)&pTVar19->field_0x18) {
      uVar13 = uVar23;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    auVar49 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    dVar7 = (param_2->Rotation).ZW.m128d_f64[1];
    lVar2 = *(longlong *)&pTVar19->field_0x10;
    uVar13 = 0;
    if ((int)uVar24 < *(int *)&pTVar19->field_0x18) {
      uVar13 = uVar23;
    }
    auVar25 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    auVar33 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
    dVar37 = auVar33._0_8_;
    dVar5 = (double)*(float *)(lVar2 + 8 + lVar22) * (param_2->Scale3D).ZW.m128d_f64[0];
    dVar11 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
    auVar48 = blendpd(auVar25,auVar33,2);
    dVar1 = (double)*(float *)(lVar2 + lVar22) * (param_2->Scale3D).XY.m128d_f64[0];
    dVar4 = (double)*(float *)(lVar2 + 4 + lVar22) * (param_2->Scale3D).XY.m128d_f64[1];
    uVar58 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar65._8_4_ = SUB84(dVar4,0);
    auVar65._0_8_ = dVar1;
    auVar65._12_4_ = uVar58;
    auVar66._0_8_ = auVar65._8_8_ * auVar25._0_8_ - auVar25._8_8_ * dVar1;
    auVar66._8_8_ = dVar5 * auVar25._8_8_ - dVar37 * dVar4;
    auVar29._8_4_ = SUB84(dVar4,0);
    auVar29._0_8_ = dVar1;
    auVar29._12_4_ = uVar58;
    auVar9._8_4_ = SUB84(dVar11,0);
    auVar9._0_8_ = dVar5;
    auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar25 = blendpd(auVar29,auVar9,2);
    auVar30._0_8_ = auVar25._0_8_ * dVar37 - auVar48._0_8_ * dVar5;
    auVar30._8_8_ = auVar25._8_8_ * auVar33._8_8_ - auVar48._8_8_ * dVar11;
    auVar25 = blendpd(auVar66,auVar30,2);
    dVar11 = auVar66._8_8_ + auVar66._8_8_;
    dVar36 = auVar30._0_8_ + auVar30._0_8_;
    uVar58 = (undefined4)((ulonglong)dVar36 >> 0x20);
    auVar67._0_8_ = auVar25._0_8_ + auVar25._0_8_;
    auVar67._8_8_ = auVar25._8_8_ + auVar25._8_8_;
    auVar54._8_4_ = SUB84(dVar36,0);
    auVar54._0_8_ = dVar11;
    auVar54._12_4_ = uVar58;
    auVar40._8_4_ = SUB84(dVar36,0);
    auVar40._0_8_ = dVar11;
    auVar40._12_4_ = uVar58;
    auVar25 = blendpd(auVar40,auVar67,2);
    auVar55._0_8_ = auVar54._8_8_ * auVar49._0_8_ - auVar49._8_8_ * dVar11;
    auVar55._8_8_ = auVar67._0_8_ * auVar49._8_8_ - dVar37 * dVar36;
    auVar49 = blendpd(auVar49,auVar33,2);
    auVar31._8_4_ = SUB84(auVar55._8_8_,0);
    auVar31._0_8_ = auVar55._0_8_;
    auVar31._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
    auVar41._0_8_ = auVar25._0_8_ * dVar37 - auVar49._0_8_ * auVar67._0_8_;
    auVar41._8_8_ = auVar25._8_8_ * auVar33._8_8_ - auVar49._8_8_ * auVar67._8_8_;
    auVar49 = blendpd(auVar55,auVar41,2);
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar2 = *(longlong *)&pTVar19->field_0x10;
    *(float *)(lVar2 + lVar22) = (float)(dVar11 * dVar7 + dVar1 + auVar31._8_8_);
    *(float *)(lVar2 + 4 + lVar22) = (float)(dVar36 * dVar7 + dVar4 + auVar41._0_8_);
    *(float *)(lVar2 + 8 + lVar22) = (float)(auVar67._0_8_ * dVar7 + dVar5 + auVar49._0_8_);
    uVar13 = 0;
    if ((int)uVar24 < *(int *)&pTVar20->field_0x18) {
      uVar13 = uVar23;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) break;
    lVar2 = *(longlong *)&pTVar20->field_0x10;
    auVar49 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    auVar25 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
    uVar13 = 0;
    if ((int)uVar24 < *(int *)&pTVar20->field_0x18) {
      uVar13 = uVar23;
    }
    auVar33 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    dVar5 = auVar25._8_8_;
    auVar48 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
    dVar37 = auVar48._0_8_;
    dVar4 = (double)*(float *)(lVar2 + 8 + lVar22) * (param_2->Scale3D).ZW.m128d_f64[0];
    dVar7 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
    auVar45 = blendpd(auVar33,auVar48,2);
    dVar36 = (double)*(float *)(lVar2 + lVar22) * (param_2->Scale3D).XY.m128d_f64[0];
    dVar1 = (double)*(float *)(lVar2 + 4 + lVar22) * (param_2->Scale3D).XY.m128d_f64[1];
    uVar58 = (undefined4)((ulonglong)dVar1 >> 0x20);
    auVar68._8_4_ = SUB84(dVar1,0);
    auVar68._0_8_ = dVar36;
    auVar68._12_4_ = uVar58;
    auVar69._0_8_ = auVar68._8_8_ * auVar33._0_8_ - auVar33._8_8_ * dVar36;
    auVar69._8_8_ = dVar4 * auVar33._8_8_ - dVar37 * dVar1;
    auVar32._8_4_ = SUB84(dVar1,0);
    auVar32._0_8_ = dVar36;
    auVar32._12_4_ = uVar58;
    auVar33._8_4_ = SUB84(dVar7,0);
    auVar33._0_8_ = dVar4;
    auVar33._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar33 = blendpd(auVar32,auVar33,2);
    auVar34._0_8_ = auVar33._0_8_ * dVar37 - auVar45._0_8_ * dVar4;
    auVar34._8_8_ = auVar33._8_8_ * auVar48._8_8_ - auVar45._8_8_ * dVar7;
    auVar33 = blendpd(auVar69,auVar34,2);
    auVar70._0_8_ = auVar33._0_8_ + auVar33._0_8_;
    auVar70._8_8_ = auVar33._8_8_ + auVar33._8_8_;
    dVar7 = auVar69._8_8_ + auVar69._8_8_;
    dVar11 = auVar34._0_8_ + auVar34._0_8_;
    uVar58 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar56._8_4_ = SUB84(dVar11,0);
    auVar56._0_8_ = dVar7;
    auVar56._12_4_ = uVar58;
    auVar46._8_4_ = SUB84(dVar11,0);
    auVar46._0_8_ = dVar7;
    auVar46._12_4_ = uVar58;
    auVar45 = blendpd(auVar49,auVar48,2);
    auVar33 = blendpd(auVar46,auVar70,2);
    auVar42._8_4_ = auVar25._8_4_;
    auVar42._0_8_ = dVar5;
    auVar42._12_4_ = auVar25._12_4_;
    auVar57._0_8_ = auVar56._8_8_ * auVar49._0_8_ - auVar49._8_8_ * dVar7;
    auVar57._8_8_ = auVar70._0_8_ * auVar49._8_8_ - dVar37 * dVar11;
    auVar35._8_4_ = SUB84(auVar57._8_8_,0);
    auVar35._0_8_ = auVar57._0_8_;
    auVar35._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
    auVar47._0_8_ = auVar33._0_8_ * dVar37 - auVar45._0_8_ * auVar70._0_8_;
    auVar47._8_8_ = auVar33._8_8_ * auVar48._8_8_ - auVar45._8_8_ * auVar70._8_8_;
    auVar49 = blendpd(auVar57,auVar47,2);
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar2 = *(longlong *)&pTVar20->field_0x10;
    uVar24 = uVar24 + 1;
    *(float *)(lVar2 + lVar22) = (float)(dVar5 * dVar7 + dVar36 + auVar35._8_8_);
    *(float *)(lVar2 + 4 + lVar22) = (float)(auVar42._8_8_ * dVar11 + dVar1 + auVar47._0_8_);
    *(float *)(lVar2 + 8 + lVar22) = (float)(dVar5 * auVar70._0_8_ + dVar4 + auVar49._0_8_);
    lVar22 = lVar22 + 0xc;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// DefineSchema @ 143fa92f0

void __thiscall
GeometryCollection::Facades::FCollectionMeshFacade::DefineSchema(FCollectionMeshFacade *this)

{
  UV::DefineUVSchema((FManagedArrayCollection *)this->_padding_);
  TManagedArrayAccessor<int>::Add
            (&this->TransformToGeometryIndexAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->TransformIndexAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            (&this->VertexAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            (&this->TangentUAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            (&this->TangentVAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            (&this->NormalAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<FLinearColor>::Add(&this->ColorAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->BoneMapAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->VertexStartAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->VertexCountAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::Add
            (&this->IndicesAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<bool>::Add(&this->VisibleAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->MaterialIndexAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->MaterialIDAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<bool>::Add(&this->InternalAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->FaceStartAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->FaceCountAttribute,MakePersistent,(FName)0x0);
  return;
}

// GetFaceIndices @ 143fb0460

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionMeshFacade::GetFaceIndices
          (FCollectionMeshFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  TManagedArray<int> *pTVar2;
  TManagedArray<int> *pTVar3;
  TManagedArray<int> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  int local_48 [4];
  
  if (((this->TransformToGeometryIndexAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0)
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x67,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar11;
  }
  pTVar2 = (this->TransformToGeometryIndexAttribute).ConstAttributeArray;
  if (((this->FaceStartAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar11;
  }
  pTVar3 = (this->FaceStartAttribute).ConstAttributeArray;
  if (((this->FaceCountAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar11;
  }
  pTVar4 = (this->FaceCountAttribute).ConstAttributeArray;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar8 = 0;
  if (param_1 < *(int *)&pTVar2->field_0x18) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar11;
  }
  uVar8 = *(uint *)((longlong)param_1 * 4 + *(longlong *)&pTVar2->field_0x10);
  uVar9 = 0;
  if ((int)uVar8 < *(int *)&pTVar3->field_0x18) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar11;
  }
  iVar12 = 0;
  iVar1 = *(int *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar8 * 4);
  while( true ) {
    uVar8 = 0;
    if (param_1 < *(int *)&pTVar2->field_0x18) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar11;
    }
    uVar8 = *(uint *)((longlong)param_1 * 4 + *(longlong *)&pTVar2->field_0x10);
    uVar9 = 0;
    if ((int)uVar8 < *(int *)&pTVar4->field_0x18) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar11;
    }
    if (*(int *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)uVar8 * 4) <= iVar12) {
      return __return_storage_ptr__;
    }
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_48[0] = iVar1 + iVar12;
    if (((pFVar5 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 <
         pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) break;
    iVar10 = __return_storage_ptr__->ArrayNum;
    if (iVar10 == __return_storage_ptr__->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&__return_storage_ptr__->AllocatorInstance,
                          &__return_storage_ptr__->ArrayMax);
    }
    iVar12 = iVar12 + 1;
    __return_storage_ptr__->ArrayNum = iVar10 + 1;
    *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_48[0];
  }
  pcVar6 = (code *)swi(3);
  pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
  return pTVar11;
}

// GetGeometryGroupIndexArray @ 143fb0770

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionMeshFacade::GetGeometryGroupIndexArray
          (FCollectionMeshFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  TManagedArray<int> *pTVar2;
  TManagedArray<int> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int local_res8 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (((this->VertexAttribute).ConstAttributeArray ==
       (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  pTVar1 = (this->VertexAttribute).ConstAttributeArray;
  if (((this->VertexStartAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  pTVar2 = (this->VertexStartAttribute).ConstAttributeArray;
  if (((this->VertexCountAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  pTVar3 = (this->VertexCountAttribute).ConstAttributeArray;
  iVar6 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  local_res8[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(__return_storage_ptr__,local_res8,iVar6);
  uVar9 = 0;
  iVar6 = (**(code **)(*(longlong *)pTVar2 + 0x60))(pTVar2);
  if (0 < iVar6) {
    lVar11 = 0;
    do {
      iVar6 = 0;
      while( true ) {
        uVar7 = 0;
        if ((int)uVar9 < *(int *)&pTVar3->field_0x18) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        if (*(int *)(lVar11 + *(longlong *)&pTVar3->field_0x10) <= iVar6) break;
        uVar7 = 0;
        if ((int)uVar9 < *(int *)&pTVar2->field_0x18) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        uVar10 = *(int *)(lVar11 + *(longlong *)&pTVar2->field_0x10) + iVar6;
        uVar7 = 0;
        if ((int)uVar10 < __return_storage_ptr__->ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
        iVar6 = iVar6 + 1;
        *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar10 * 4) =
             uVar9;
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 4;
      iVar6 = (**(code **)(*(longlong *)pTVar2 + 0x60))(pTVar2);
    } while ((int)uVar9 < iVar6);
  }
  return __return_storage_ptr__;
}

// GetVertexIndices @ 143fb38e0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionMeshFacade::GetVertexIndices
          (FCollectionMeshFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  TManagedArray<int> *pTVar2;
  TManagedArray<int> *pTVar3;
  TManagedArray<int> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  int local_48 [4];
  
  if (((this->TransformToGeometryIndexAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0)
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x67,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar11;
  }
  pTVar2 = (this->TransformToGeometryIndexAttribute).ConstAttributeArray;
  if (((this->VertexStartAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar11;
  }
  pTVar3 = (this->VertexStartAttribute).ConstAttributeArray;
  if (((this->VertexCountAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar11;
  }
  pTVar4 = (this->VertexCountAttribute).ConstAttributeArray;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar8 = 0;
  if (param_1 < *(int *)&pTVar2->field_0x18) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar11;
  }
  uVar8 = *(uint *)((longlong)param_1 * 4 + *(longlong *)&pTVar2->field_0x10);
  uVar9 = 0;
  if ((int)uVar8 < *(int *)&pTVar3->field_0x18) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar11;
  }
  iVar12 = 0;
  iVar1 = *(int *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar8 * 4);
  while( true ) {
    uVar8 = 0;
    if (param_1 < *(int *)&pTVar2->field_0x18) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar11;
    }
    uVar8 = *(uint *)((longlong)param_1 * 4 + *(longlong *)&pTVar2->field_0x10);
    uVar9 = 0;
    if ((int)uVar8 < *(int *)&pTVar4->field_0x18) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
      return pTVar11;
    }
    if (*(int *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)uVar8 * 4) <= iVar12) {
      return __return_storage_ptr__;
    }
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_48[0] = iVar1 + iVar12;
    if (((pFVar5 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 <
         pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) break;
    iVar10 = __return_storage_ptr__->ArrayNum;
    if (iVar10 == __return_storage_ptr__->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&__return_storage_ptr__->AllocatorInstance,
                          &__return_storage_ptr__->ArrayMax);
    }
    iVar12 = iVar12 + 1;
    __return_storage_ptr__->ArrayNum = iVar10 + 1;
    *(int *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_48[0];
  }
  pcVar6 = (code *)swi(3);
  pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
  return pTVar11;
}

// GetVertexPositions @ 143fb3bf0

TArrayView<UE::Math::TVector<float>_const_,int> * __thiscall
GeometryCollection::Facades::FCollectionMeshFacade::GetVertexPositions
          (FCollectionMeshFacade *this,
          TArrayView<UE::Math::TVector<float>_const_,int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  TManagedArray<int> *pTVar2;
  TManagedArray<int> *pTVar3;
  TManagedArray<int> *pTVar4;
  TManagedArray<UE::Math::TVector<float>_> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar11;
  
  if (((this->TransformToGeometryIndexAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0)
     && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x67,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar11 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar7)();
    return pTVar11;
  }
  pTVar2 = (this->TransformToGeometryIndexAttribute).ConstAttributeArray;
  if (((this->VertexStartAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar11 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar7)();
    return pTVar11;
  }
  pTVar3 = (this->VertexStartAttribute).ConstAttributeArray;
  if (((this->VertexCountAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar11 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar7)();
    return pTVar11;
  }
  pTVar4 = (this->VertexCountAttribute).ConstAttributeArray;
  if (((this->VertexAttribute).ConstAttributeArray ==
       (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar11 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar7)();
    return pTVar11;
  }
  pTVar5 = (this->VertexAttribute).ConstAttributeArray;
  uVar9 = 0;
  if (param_1 < *(int *)&pTVar2->field_0x18) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar11 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar7)();
    return pTVar11;
  }
  uVar9 = *(uint *)((longlong)param_1 * 4 + *(longlong *)&pTVar2->field_0x10);
  uVar10 = 0;
  if ((int)uVar9 < *(int *)&pTVar4->field_0x18) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar11 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar7)();
    return pTVar11;
  }
  iVar1 = *(int *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)uVar9 * 4);
  uVar9 = 0;
  if (param_1 < *(int *)&pTVar2->field_0x18) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar11 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar7)();
    return pTVar11;
  }
  uVar9 = *(uint *)((longlong)param_1 * 4 + *(longlong *)&pTVar2->field_0x10);
  uVar10 = 0;
  if ((int)uVar9 < *(int *)&pTVar3->field_0x18) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar11 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar7)();
    return pTVar11;
  }
  lVar6 = *(longlong *)&pTVar3->field_0x10;
  __return_storage_ptr__->ArrayNum = iVar1;
  __return_storage_ptr__->DataPtr =
       (TVector<float> *)
       (*(longlong *)&pTVar5->field_0x10 +
       (longlong)*(int *)(lVar6 + (longlong)(int)uVar9 * 4) * 0xc);
  if ((iVar1 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar11 = (TArrayView<UE::Math::TVector<float>_const_,int> *)(*pcVar7)();
    return pTVar11;
  }
  return __return_storage_ptr__;
}

// IsValid @ 143fb7bb0

bool __thiscall
GeometryCollection::Facades::FCollectionMeshFacade::IsValid(FCollectionMeshFacade *this)

{
  bool bVar1;
  
  bVar1 = UV::HasValidUVs((FManagedArrayCollection *)this->_padding_);
  if (((((((bVar1) &&
          ((this->TransformToGeometryIndexAttribute).ConstAttributeArray !=
           (TManagedArray<int> *)0x0)) &&
         ((this->TransformIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
        (((this->VertexAttribute).ConstAttributeArray !=
          (TManagedArray<UE::Math::TVector<float>_> *)0x0 &&
         ((this->TangentUAttribute).ConstAttributeArray !=
          (TManagedArray<UE::Math::TVector<float>_> *)0x0)))) &&
       (((this->TangentVAttribute).ConstAttributeArray !=
         (TManagedArray<UE::Math::TVector<float>_> *)0x0 &&
        (((this->NormalAttribute).ConstAttributeArray !=
          (TManagedArray<UE::Math::TVector<float>_> *)0x0 &&
         ((this->ColorAttribute).ConstAttributeArray != (TManagedArray<FLinearColor> *)0x0)))))) &&
      ((this->BoneMapAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
     ((((((this->VertexStartAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
         ((this->VertexCountAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
        ((this->IndicesAttribute).ConstAttributeArray !=
         (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0)) &&
       ((((this->VisibleAttribute).ConstAttributeArray != (TManagedArray<bool> *)0x0 &&
         ((this->MaterialIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
        (((this->MaterialIDAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
         (((this->InternalAttribute).ConstAttributeArray != (TManagedArray<bool> *)0x0 &&
          ((this->FaceStartAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)))))))) &&
      ((this->FaceCountAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)))) {
    return true;
  }
  return false;
}


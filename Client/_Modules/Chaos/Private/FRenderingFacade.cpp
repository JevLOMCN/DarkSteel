// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 28

// FRenderingFacade @ 143f8ba30

FRenderingFacade * __thiscall
GeometryCollection::Facades::FRenderingFacade::FRenderingFacade
          (FRenderingFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
  TManagedArray<int> *pTVar4;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar5;
  FRenderingFacade *pFVar6;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FValueType *pFVar9;
  FValueType *pFVar10;
  FValueType *pFVar11;
  FName local_158;
  FName local_150;
  FName local_148;
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
  
  this->ConstCollection = param_1;
  this->Collection = param_1;
  pFVar11 = (FValueType *)0x0;
  ::FName::FName(&local_158,"Vertex");
  (this->VertexAttribute).Name = local_158;
  (this->VertexAttribute).ConstCollection = param_1;
  (this->VertexAttribute).Collection = param_1;
  (this->VertexAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VertexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexAttribute).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                     (param_1,local_158,FGeometryCollection::VerticesGroup);
  (this->VertexAttribute).AttributeArray = pTVar3;
  (this->VertexAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_150,"GeometryIndex");
  (this->VertexToGeometryIndexAttribute).Name = local_150;
  (this->VertexToGeometryIndexAttribute).ConstCollection = param_1;
  (this->VertexToGeometryIndexAttribute).Collection = param_1;
  (this->VertexToGeometryIndexAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VertexToGeometryIndexAttribute).DefaultGroupDependency = FGeometryCollection::GeometryGroup
  ;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_150,FGeometryCollection::VerticesGroup);
  (this->VertexToGeometryIndexAttribute).AttributeArray = pTVar4;
  (this->VertexToGeometryIndexAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_148,"SelectionState");
  (this->VertexSelectionAttribute).Name = local_148;
  (this->VertexSelectionAttribute).ConstCollection = param_1;
  (this->VertexSelectionAttribute).Collection = param_1;
  (this->VertexSelectionAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VertexSelectionAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexSelectionAttribute).DefaultGroupDependency.Number = 0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_148,FGeometryCollection::VerticesGroup);
  (this->VertexSelectionAttribute).AttributeArray = pTVar4;
  (this->VertexSelectionAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_140,"HitIndex");
  (this->VertexHitProxyIndexAttribute).Name = local_140;
  (this->VertexHitProxyIndexAttribute).ConstCollection = param_1;
  (this->VertexHitProxyIndexAttribute).Collection = param_1;
  (this->VertexHitProxyIndexAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VertexHitProxyIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexHitProxyIndexAttribute).DefaultGroupDependency.Number = 0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_140,FGeometryCollection::VerticesGroup);
  (this->VertexHitProxyIndexAttribute).AttributeArray = pTVar4;
  (this->VertexHitProxyIndexAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_138,"Normal");
  (this->VertexNormalAttribute).Name = local_138;
  (this->VertexNormalAttribute).ConstCollection = param_1;
  (this->VertexNormalAttribute).Collection = param_1;
  (this->VertexNormalAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VertexNormalAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexNormalAttribute).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                     (param_1,local_138,FGeometryCollection::VerticesGroup);
  (this->VertexNormalAttribute).AttributeArray = pTVar3;
  (this->VertexNormalAttribute).ConstAttributeArray = pTVar3;
  ::FName::FName(&local_130,"Color");
  (this->VertexColorAttribute).Name = local_130;
  (this->VertexColorAttribute).ConstCollection = param_1;
  (this->VertexColorAttribute).Collection = param_1;
  (this->VertexColorAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VertexColorAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexColorAttribute).DefaultGroupDependency.Number = 0;
  local_b0 = local_130;
  local_a8 = FGeometryCollection::VerticesGroup;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_b0);
  pFVar10 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar10 = pFVar11;
  }
  pFVar9 = pFVar11;
  if ((pFVar10 != (FValueType *)0x0) && (pFVar10->ArrayType == FLinearColorType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
    pFVar9 = (FValueType *)pFVar10->ManagedArray;
    if ((pFVar9 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FRenderingFacade *)(*pcVar1)();
      return pFVar6;
    }
    *(undefined1 *)&(pFVar9->GroupIndexDependency).Number = 1;
  }
  (this->VertexColorAttribute).AttributeArray = (TManagedArray<FLinearColor> *)pFVar9;
  (this->VertexColorAttribute).ConstAttributeArray = (TManagedArray<FLinearColor> *)pFVar9;
  ::FName::FName(&local_128,"UV");
  (this->VertexUVAttribute).Name = local_128;
  (this->VertexUVAttribute).ConstCollection = param_1;
  (this->VertexUVAttribute).Collection = param_1;
  (this->VertexUVAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VertexUVAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexUVAttribute).DefaultGroupDependency.Number = 0;
  local_a0 = local_128;
  local_98 = FGeometryCollection::VerticesGroup;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_a0);
  pFVar10 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar10 = pFVar11;
  }
  pFVar9 = pFVar11;
  if ((pFVar10 != (FValueType *)0x0) && (pFVar10->ArrayType == FVector2DArrayType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
    pFVar9 = (FValueType *)pFVar10->ManagedArray;
    if ((pFVar9 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FRenderingFacade *)(*pcVar1)();
      return pFVar6;
    }
    *(undefined1 *)&(pFVar9->GroupIndexDependency).Number = 1;
  }
  (this->VertexUVAttribute).AttributeArray =
       (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)pFVar9;
  (this->VertexUVAttribute).ConstAttributeArray =
       (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)pFVar9;
  ::FName::FName(&local_120,"Indices");
  (this->IndicesAttribute).Name = local_120;
  (this->IndicesAttribute).ConstCollection = param_1;
  (this->IndicesAttribute).Collection = param_1;
  (this->IndicesAttribute).Group = FGeometryCollection::FacesGroup;
  (this->IndicesAttribute).DefaultGroupDependency = FGeometryCollection::VerticesGroup;
  local_90 = local_120;
  local_88 = FGeometryCollection::FacesGroup;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_90);
  pFVar10 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar10 = pFVar11;
  }
  pFVar9 = pFVar11;
  if ((pFVar10 != (FValueType *)0x0) && (pFVar10->ArrayType == FIntVectorType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
    pFVar9 = (FValueType *)pFVar10->ManagedArray;
    if ((pFVar9 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FRenderingFacade *)(*pcVar1)();
      return pFVar6;
    }
    *(undefined1 *)&(pFVar9->GroupIndexDependency).Number = 1;
  }
  (this->IndicesAttribute).AttributeArray = (TManagedArray<UE::Math::TIntVector3<int>_> *)pFVar9;
  (this->IndicesAttribute).ConstAttributeArray =
       (TManagedArray<UE::Math::TIntVector3<int>_> *)pFVar9;
  ::FName::FName(&local_118,"MaterialID");
  (this->MaterialIDAttribute).Name = local_118;
  (this->MaterialIDAttribute).ConstCollection = param_1;
  (this->MaterialIDAttribute).Collection = param_1;
  (this->MaterialIDAttribute).Group = FGeometryCollection::FacesGroup;
  (this->MaterialIDAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MaterialIDAttribute).DefaultGroupDependency.Number = 0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_118,FGeometryCollection::FacesGroup);
  (this->MaterialIDAttribute).AttributeArray = pTVar4;
  (this->MaterialIDAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_110,"Sections");
  (this->TriangleSectionAttribute).Name = local_110;
  (this->TriangleSectionAttribute).ConstCollection = param_1;
  (this->TriangleSectionAttribute).Collection = param_1;
  (this->TriangleSectionAttribute).Group = FGeometryCollection::MaterialGroup;
  (this->TriangleSectionAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TriangleSectionAttribute).DefaultGroupDependency.Number = 0;
  local_80 = local_110;
  local_78 = FGeometryCollection::MaterialGroup;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_80);
  pFVar10 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar10 = pFVar11;
  }
  pFVar9 = pFVar11;
  if ((pFVar10 != (FValueType *)0x0) && (pFVar10->ArrayType == FMeshSectionType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
    pFVar9 = (FValueType *)pFVar10->ManagedArray;
    if ((pFVar9 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FRenderingFacade *)(*pcVar1)();
      return pFVar6;
    }
    *(undefined1 *)&(pFVar9->GroupIndexDependency).Number = 1;
  }
  (this->TriangleSectionAttribute).AttributeArray =
       (TManagedArray<FGeometryCollectionSection> *)pFVar9;
  (this->TriangleSectionAttribute).ConstAttributeArray =
       (TManagedArray<FGeometryCollectionSection> *)pFVar9;
  ::FName::FName(&local_108,"MaterialPath");
  (this->MaterialPathAttribute).Name = local_108;
  (this->MaterialPathAttribute).ConstCollection = param_1;
  (this->MaterialPathAttribute).Collection = param_1;
  (this->MaterialPathAttribute).Group = FGeometryCollection::MaterialGroup;
  (this->MaterialPathAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MaterialPathAttribute).DefaultGroupDependency.Number = 0;
  local_70 = local_108;
  local_68 = FGeometryCollection::MaterialGroup;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_70);
  pFVar10 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar10 = pFVar11;
  }
  pFVar9 = pFVar11;
  if ((pFVar10 != (FValueType *)0x0) && (pFVar10->ArrayType == FStringType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
    pFVar9 = (FValueType *)pFVar10->ManagedArray;
    if ((pFVar9 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FRenderingFacade *)(*pcVar1)();
      return pFVar6;
    }
    *(undefined1 *)&(pFVar9->GroupIndexDependency).Number = 1;
  }
  (this->MaterialPathAttribute).AttributeArray = (TManagedArray<FString> *)pFVar9;
  (this->MaterialPathAttribute).ConstAttributeArray = (TManagedArray<FString> *)pFVar9;
  ::FName::FName(&local_100,"Name");
  (this->GeometryNameAttribute).Name = local_100;
  (this->GeometryNameAttribute).ConstCollection = param_1;
  (this->GeometryNameAttribute).Collection = param_1;
  (this->GeometryNameAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->GeometryNameAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GeometryNameAttribute).DefaultGroupDependency.Number = 0;
  local_60 = local_100;
  local_58 = FGeometryCollection::GeometryGroup;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_60);
  pFVar10 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar10 = pFVar11;
  }
  pFVar9 = pFVar11;
  if ((pFVar10 != (FValueType *)0x0) && (pFVar10->ArrayType == FStringType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
    pFVar9 = (FValueType *)pFVar10->ManagedArray;
    if ((pFVar9 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FRenderingFacade *)(*pcVar1)();
      return pFVar6;
    }
    *(undefined1 *)&(pFVar9->GroupIndexDependency).Number = 1;
  }
  (this->GeometryNameAttribute).AttributeArray = (TManagedArray<FString> *)pFVar9;
  (this->GeometryNameAttribute).ConstAttributeArray = (TManagedArray<FString> *)pFVar9;
  ::FName::FName(&local_f8,"Transform");
  (this->GeometryTransformAttribute).Name = local_f8;
  (this->GeometryTransformAttribute).ConstCollection = param_1;
  (this->GeometryTransformAttribute).Collection = param_1;
  (this->GeometryTransformAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->GeometryTransformAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GeometryTransformAttribute).DefaultGroupDependency.Number = 0;
  local_50 = local_f8;
  local_48 = FGeometryCollection::GeometryGroup;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_50);
  pFVar10 = (FValueType *)&pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar10 = pFVar11;
  }
  if ((pFVar10 != (FValueType *)0x0) && (pFVar10->ArrayType == FTransformType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar10);
    pFVar11 = (FValueType *)pFVar10->ManagedArray;
    if ((pFVar11 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FRenderingFacade *)(*pcVar1)();
      return pFVar6;
    }
    *(undefined1 *)&(pFVar11->GroupIndexDependency).Number = 1;
  }
  (this->GeometryTransformAttribute).AttributeArray =
       (TManagedArray<UE::Math::TTransform<double>_> *)pFVar11;
  (this->GeometryTransformAttribute).ConstAttributeArray =
       (TManagedArray<UE::Math::TTransform<double>_> *)pFVar11;
  ::FName::FName(&local_f0,"HitIndex");
  (this->GeometryHitProxyIndexAttribute).Name = local_f0;
  (this->GeometryHitProxyIndexAttribute).ConstCollection = param_1;
  (this->GeometryHitProxyIndexAttribute).Collection = param_1;
  (this->GeometryHitProxyIndexAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->GeometryHitProxyIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GeometryHitProxyIndexAttribute).DefaultGroupDependency.Number = 0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_f0,FGeometryCollection::GeometryGroup);
  (this->GeometryHitProxyIndexAttribute).AttributeArray = pTVar4;
  (this->GeometryHitProxyIndexAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_e8,"VertexStart");
  (this->VertexStartAttribute).Name = local_e8;
  (this->VertexStartAttribute).ConstCollection = param_1;
  (this->VertexStartAttribute).Collection = param_1;
  (this->VertexStartAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->VertexStartAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexStartAttribute).DefaultGroupDependency.Number = 0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_e8,FGeometryCollection::GeometryGroup);
  (this->VertexStartAttribute).AttributeArray = pTVar4;
  (this->VertexStartAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_e0,"VertexCount");
  (this->VertexCountAttribute).Name = local_e0;
  (this->VertexCountAttribute).ConstCollection = param_1;
  (this->VertexCountAttribute).Collection = param_1;
  (this->VertexCountAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->VertexCountAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexCountAttribute).DefaultGroupDependency.Number = 0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_e0,FGeometryCollection::GeometryGroup);
  (this->VertexCountAttribute).AttributeArray = pTVar4;
  (this->VertexCountAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_d8,"IndicesStart");
  (this->IndicesStartAttribute).Name = local_d8;
  (this->IndicesStartAttribute).ConstCollection = param_1;
  (this->IndicesStartAttribute).Collection = param_1;
  (this->IndicesStartAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->IndicesStartAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->IndicesStartAttribute).DefaultGroupDependency.Number = 0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_d8,FGeometryCollection::GeometryGroup);
  (this->IndicesStartAttribute).AttributeArray = pTVar4;
  (this->IndicesStartAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_d0,"IndicesCount");
  (this->IndicesCountAttribute).Name = local_d0;
  (this->IndicesCountAttribute).ConstCollection = param_1;
  (this->IndicesCountAttribute).Collection = param_1;
  (this->IndicesCountAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->IndicesCountAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->IndicesCountAttribute).DefaultGroupDependency.Number = 0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_d0,FGeometryCollection::GeometryGroup);
  (this->IndicesCountAttribute).AttributeArray = pTVar4;
  (this->IndicesCountAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_c8,"MaterialsStart");
  (this->MaterialStartAttribute).Name = local_c8;
  (this->MaterialStartAttribute).ConstCollection = param_1;
  (this->MaterialStartAttribute).Collection = param_1;
  (this->MaterialStartAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->MaterialStartAttribute).DefaultGroupDependency = FGeometryCollection::MaterialGroup;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_c8,FGeometryCollection::GeometryGroup);
  (this->MaterialStartAttribute).AttributeArray = pTVar4;
  (this->MaterialStartAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_c0,"MaterialsCount");
  (this->MaterialCountAttribute).Name = local_c0;
  (this->MaterialCountAttribute).ConstCollection = param_1;
  (this->MaterialCountAttribute).Collection = param_1;
  (this->MaterialCountAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->MaterialCountAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MaterialCountAttribute).DefaultGroupDependency.Number = 0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_c0,FGeometryCollection::GeometryGroup);
  (this->MaterialCountAttribute).AttributeArray = pTVar4;
  (this->MaterialCountAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_b8,"SelectionState");
  (this->GeometrySelectionAttribute).Name = local_b8;
  (this->GeometrySelectionAttribute).ConstCollection = param_1;
  (this->GeometrySelectionAttribute).Collection = param_1;
  (this->GeometrySelectionAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->GeometrySelectionAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GeometrySelectionAttribute).DefaultGroupDependency.Number = 0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_b8,FGeometryCollection::GeometryGroup);
  (this->GeometrySelectionAttribute).AttributeArray = pTVar4;
  (this->GeometrySelectionAttribute).ConstAttributeArray = pTVar4;
  (this->BoneWeightsAttribute).ConstCollection = param_1;
  (this->BoneWeightsAttribute).Collection = param_1;
  (this->BoneWeightsAttribute).Name = FVertexBoneWeightsFacade::BoneWeightsAttributeName;
  (this->BoneWeightsAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->BoneWeightsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneWeightsAttribute).DefaultGroupDependency.Number = 0;
  pTVar7 = FManagedArrayCollection::FindAttributeTyped<TArray<float,TSizedDefaultAllocator<32>_>_>
                     (param_1,FVertexBoneWeightsFacade::BoneWeightsAttributeName,
                      FGeometryCollection::VerticesGroup);
  (this->BoneWeightsAttribute).AttributeArray = pTVar7;
  (this->BoneWeightsAttribute).ConstAttributeArray = pTVar7;
  (this->BoneIndicesAttribute).ConstCollection = param_1;
  (this->BoneIndicesAttribute).Collection = param_1;
  (this->BoneIndicesAttribute).Name = FVertexBoneWeightsFacade::BoneIndicesAttributeName;
  (this->BoneIndicesAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->BoneIndicesAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneIndicesAttribute).DefaultGroupDependency.Number = 0;
  pTVar8 = FManagedArrayCollection::FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
                     (param_1,FVertexBoneWeightsFacade::BoneIndicesAttributeName,
                      FGeometryCollection::VerticesGroup);
  (this->BoneIndicesAttribute).AttributeArray = pTVar8;
  (this->BoneIndicesAttribute).ConstAttributeArray = pTVar8;
  return this;
}

// FRenderingFacade @ 143f8c5f0

FRenderingFacade * __thiscall
GeometryCollection::Facades::FRenderingFacade::FRenderingFacade
          (FRenderingFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FRenderingFacade *pFVar5;
  TManagedArray<int> *pTVar6;
  TManagedArray<FString> *pTVar7;
  char *pcVar8;
  TManagedArray<UE::Math::TVector<float>_> *pTVar9;
  TManagedArray<FLinearColor> *pTVar10;
  TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *pTVar11;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar12;
  TManagedArray<FGeometryCollectionSection> *pTVar13;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar14;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar15;
  char *pcVar16;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
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
  
  this->ConstCollection = param_1;
  pcVar16 = (char *)0x0;
  this->Collection = (FManagedArrayCollection *)0x0;
  ::FName::FName(&local_178,"Vertex");
  (this->VertexAttribute).Name = local_178;
  (this->VertexAttribute).ConstCollection = param_1;
  (this->VertexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VertexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexAttribute).DefaultGroupDependency.Number = 0;
  (this->VertexAttribute).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_d0 = local_178;
  local_c8 = FGeometryCollection::VerticesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_d0);
  pcVar8 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar16;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\x01')) {
    pTVar9 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  else {
    pTVar9 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar8 + 0x20);
    if (pTVar9 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRenderingFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  (this->VertexAttribute).ConstAttributeArray = pTVar9;
  ::FName::FName(&local_170,"GeometryIndex");
  (this->VertexToGeometryIndexAttribute).Name = local_170;
  (this->VertexToGeometryIndexAttribute).ConstCollection = param_1;
  (this->VertexToGeometryIndexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexToGeometryIndexAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VertexToGeometryIndexAttribute).DefaultGroupDependency = FGeometryCollection::GeometryGroup
  ;
  (this->VertexToGeometryIndexAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_170,FGeometryCollection::VerticesGroup);
  (this->VertexToGeometryIndexAttribute).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_168,"SelectionState");
  (this->VertexSelectionAttribute).Name = local_168;
  (this->VertexSelectionAttribute).ConstCollection = param_1;
  (this->VertexSelectionAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexSelectionAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VertexSelectionAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexSelectionAttribute).DefaultGroupDependency.Number = 0;
  (this->VertexSelectionAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_168,FGeometryCollection::VerticesGroup);
  (this->VertexSelectionAttribute).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_160,"HitIndex");
  (this->VertexHitProxyIndexAttribute).Name = local_160;
  (this->VertexHitProxyIndexAttribute).ConstCollection = param_1;
  (this->VertexHitProxyIndexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexHitProxyIndexAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VertexHitProxyIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexHitProxyIndexAttribute).DefaultGroupDependency.Number = 0;
  (this->VertexHitProxyIndexAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_160,FGeometryCollection::VerticesGroup);
  (this->VertexHitProxyIndexAttribute).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_158,"Normal");
  (this->VertexNormalAttribute).Name = local_158;
  (this->VertexNormalAttribute).ConstCollection = param_1;
  (this->VertexNormalAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexNormalAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VertexNormalAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexNormalAttribute).DefaultGroupDependency.Number = 0;
  (this->VertexNormalAttribute).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_c0 = local_158;
  local_b8 = FGeometryCollection::VerticesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_c0);
  pcVar8 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar16;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\x01')) {
    pTVar9 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  else {
    pTVar9 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar8 + 0x20);
    if (pTVar9 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRenderingFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  (this->VertexNormalAttribute).ConstAttributeArray = pTVar9;
  ::FName::FName(&local_150,"Color");
  (this->VertexColorAttribute).Name = local_150;
  (this->VertexColorAttribute).ConstCollection = param_1;
  (this->VertexColorAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexColorAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VertexColorAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexColorAttribute).DefaultGroupDependency.Number = 0;
  (this->VertexColorAttribute).AttributeArray = (TManagedArray<FLinearColor> *)0x0;
  local_b0 = local_150;
  local_a8 = FGeometryCollection::VerticesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_b0);
  pcVar8 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar16;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\x04')) {
    pTVar10 = (TManagedArray<FLinearColor> *)0x0;
  }
  else {
    pTVar10 = *(TManagedArray<FLinearColor> **)(pcVar8 + 0x20);
    if (pTVar10 == (TManagedArray<FLinearColor> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRenderingFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  (this->VertexColorAttribute).ConstAttributeArray = pTVar10;
  ::FName::FName(&local_148,"UV");
  (this->VertexUVAttribute).Name = local_148;
  (this->VertexUVAttribute).ConstCollection = param_1;
  (this->VertexUVAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexUVAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->VertexUVAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexUVAttribute).DefaultGroupDependency.Number = 0;
  (this->VertexUVAttribute).AttributeArray =
       (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_a0 = local_148;
  local_98 = FGeometryCollection::VerticesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_a0);
  pcVar8 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar16;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\x1f')) {
    pTVar11 = (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar11 = *(TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> **)
               (pcVar8 + 0x20);
    if (pTVar11 ==
        (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRenderingFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  (this->VertexUVAttribute).ConstAttributeArray = pTVar11;
  ::FName::FName(&local_140,"Indices");
  (this->IndicesAttribute).Name = local_140;
  (this->IndicesAttribute).ConstCollection = param_1;
  (this->IndicesAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->IndicesAttribute).Group = FGeometryCollection::FacesGroup;
  (this->IndicesAttribute).DefaultGroupDependency = FGeometryCollection::VerticesGroup;
  (this->IndicesAttribute).AttributeArray = (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0;
  local_90 = local_140;
  local_88 = FGeometryCollection::FacesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_90);
  pcVar8 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar16;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\x02')) {
    pTVar12 = (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0;
  }
  else {
    pTVar12 = *(TManagedArray<UE::Math::TIntVector3<int>_> **)(pcVar8 + 0x20);
    if (pTVar12 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRenderingFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  (this->IndicesAttribute).ConstAttributeArray = pTVar12;
  ::FName::FName(&local_138,"MaterialID");
  (this->MaterialIDAttribute).Name = local_138;
  (this->MaterialIDAttribute).ConstCollection = param_1;
  (this->MaterialIDAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->MaterialIDAttribute).Group = FGeometryCollection::FacesGroup;
  (this->MaterialIDAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MaterialIDAttribute).DefaultGroupDependency.Number = 0;
  (this->MaterialIDAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_138,FGeometryCollection::FacesGroup);
  (this->MaterialIDAttribute).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_130,"Sections");
  (this->TriangleSectionAttribute).Name = local_130;
  (this->TriangleSectionAttribute).ConstCollection = param_1;
  (this->TriangleSectionAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->TriangleSectionAttribute).Group = FGeometryCollection::MaterialGroup;
  (this->TriangleSectionAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TriangleSectionAttribute).DefaultGroupDependency.Number = 0;
  (this->TriangleSectionAttribute).AttributeArray = (TManagedArray<FGeometryCollectionSection> *)0x0
  ;
  local_80 = local_130;
  local_78 = FGeometryCollection::MaterialGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_80);
  pcVar8 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar16;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\f')) {
    pTVar13 = (TManagedArray<FGeometryCollectionSection> *)0x0;
  }
  else {
    pTVar13 = *(TManagedArray<FGeometryCollectionSection> **)(pcVar8 + 0x20);
    if (pTVar13 == (TManagedArray<FGeometryCollectionSection> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRenderingFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  (this->TriangleSectionAttribute).ConstAttributeArray = pTVar13;
  ::FName::FName(&local_128,"MaterialPath");
  (this->MaterialPathAttribute).Name = local_128;
  (this->MaterialPathAttribute).ConstCollection = param_1;
  (this->MaterialPathAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->MaterialPathAttribute).Group = FGeometryCollection::MaterialGroup;
  (this->MaterialPathAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MaterialPathAttribute).DefaultGroupDependency.Number = 0;
  (this->MaterialPathAttribute).AttributeArray = (TManagedArray<FString> *)0x0;
  pTVar7 = FManagedArrayCollection::FindAttributeTyped<FString>
                     (param_1,local_128,FGeometryCollection::MaterialGroup);
  (this->MaterialPathAttribute).ConstAttributeArray = pTVar7;
  ::FName::FName(&local_120,"Name");
  (this->GeometryNameAttribute).Name = local_120;
  (this->GeometryNameAttribute).ConstCollection = param_1;
  (this->GeometryNameAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->GeometryNameAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->GeometryNameAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GeometryNameAttribute).DefaultGroupDependency.Number = 0;
  (this->GeometryNameAttribute).AttributeArray = (TManagedArray<FString> *)0x0;
  pTVar7 = FManagedArrayCollection::FindAttributeTyped<FString>
                     (param_1,local_120,FGeometryCollection::GeometryGroup);
  (this->GeometryNameAttribute).ConstAttributeArray = pTVar7;
  ::FName::FName(&local_118,"Transform");
  (this->GeometryTransformAttribute).Name = local_118;
  (this->GeometryTransformAttribute).ConstCollection = param_1;
  (this->GeometryTransformAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->GeometryTransformAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->GeometryTransformAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GeometryTransformAttribute).DefaultGroupDependency.Number = 0;
  (this->GeometryTransformAttribute).AttributeArray =
       (TManagedArray<UE::Math::TTransform<double>_> *)0x0;
  local_70 = local_118;
  local_68 = FGeometryCollection::GeometryGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_70);
  pcVar8 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar16;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '\a')) {
    pTVar14 = (TManagedArray<UE::Math::TTransform<double>_> *)0x0;
  }
  else {
    pTVar14 = *(TManagedArray<UE::Math::TTransform<double>_> **)(pcVar8 + 0x20);
    if (pTVar14 == (TManagedArray<UE::Math::TTransform<double>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRenderingFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  (this->GeometryTransformAttribute).ConstAttributeArray = pTVar14;
  ::FName::FName(&local_110,"HitIndex");
  (this->GeometryHitProxyIndexAttribute).Name = local_110;
  (this->GeometryHitProxyIndexAttribute).ConstCollection = param_1;
  (this->GeometryHitProxyIndexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->GeometryHitProxyIndexAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->GeometryHitProxyIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GeometryHitProxyIndexAttribute).DefaultGroupDependency.Number = 0;
  (this->GeometryHitProxyIndexAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_110,FGeometryCollection::GeometryGroup);
  (this->GeometryHitProxyIndexAttribute).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_108,"VertexStart");
  (this->VertexStartAttribute).Name = local_108;
  (this->VertexStartAttribute).ConstCollection = param_1;
  (this->VertexStartAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexStartAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->VertexStartAttribute).DefaultGroupDependency = FGeometryCollection::VerticesGroup;
  (this->VertexStartAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_108,FGeometryCollection::GeometryGroup);
  (this->VertexStartAttribute).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_100,"VertexCount");
  (this->VertexCountAttribute).Name = local_100;
  (this->VertexCountAttribute).ConstCollection = param_1;
  (this->VertexCountAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexCountAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->VertexCountAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexCountAttribute).DefaultGroupDependency.Number = 0;
  (this->VertexCountAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_100,FGeometryCollection::GeometryGroup);
  (this->VertexCountAttribute).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_f8,"IndicesStart");
  (this->IndicesStartAttribute).Name = local_f8;
  (this->IndicesStartAttribute).ConstCollection = param_1;
  (this->IndicesStartAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->IndicesStartAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->IndicesStartAttribute).DefaultGroupDependency = FGeometryCollection::FacesGroup;
  (this->IndicesStartAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_f8,FGeometryCollection::GeometryGroup);
  (this->IndicesStartAttribute).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_f0,"IndicesCount");
  (this->IndicesCountAttribute).Name = local_f0;
  (this->IndicesCountAttribute).ConstCollection = param_1;
  (this->IndicesCountAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->IndicesCountAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->IndicesCountAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->IndicesCountAttribute).DefaultGroupDependency.Number = 0;
  (this->IndicesCountAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_f0,FGeometryCollection::GeometryGroup);
  (this->IndicesCountAttribute).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_e8,"MaterialsStart");
  (this->MaterialStartAttribute).Name = local_e8;
  (this->MaterialStartAttribute).ConstCollection = param_1;
  (this->MaterialStartAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->MaterialStartAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->MaterialStartAttribute).DefaultGroupDependency = FGeometryCollection::MaterialGroup;
  (this->MaterialStartAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_e8,FGeometryCollection::GeometryGroup);
  (this->MaterialStartAttribute).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_e0,"MaterialsCount");
  (this->MaterialCountAttribute).Name = local_e0;
  (this->MaterialCountAttribute).ConstCollection = param_1;
  (this->MaterialCountAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->MaterialCountAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->MaterialCountAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->MaterialCountAttribute).DefaultGroupDependency.Number = 0;
  (this->MaterialCountAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_e0,FGeometryCollection::GeometryGroup);
  (this->MaterialCountAttribute).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_d8,"SelectionState");
  (this->GeometrySelectionAttribute).Name = local_d8;
  (this->GeometrySelectionAttribute).ConstCollection = param_1;
  (this->GeometrySelectionAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->GeometrySelectionAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->GeometrySelectionAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GeometrySelectionAttribute).DefaultGroupDependency.Number = 0;
  (this->GeometrySelectionAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_d8,FGeometryCollection::GeometryGroup);
  (this->GeometrySelectionAttribute).ConstAttributeArray = pTVar6;
  (this->BoneWeightsAttribute).ConstCollection = param_1;
  (this->BoneWeightsAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->BoneWeightsAttribute).Name = FVertexBoneWeightsFacade::BoneWeightsAttributeName;
  (this->BoneWeightsAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->BoneWeightsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneWeightsAttribute).DefaultGroupDependency.Number = 0;
  (this->BoneWeightsAttribute).AttributeArray =
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_60 = FVertexBoneWeightsFacade::BoneWeightsAttributeName;
  local_58 = FGeometryCollection::VerticesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_60);
  pcVar8 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar16;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '&')) {
    pTVar15 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar15 = *(TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> **)(pcVar8 + 0x20);
    if (pTVar15 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRenderingFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  (this->BoneWeightsAttribute).ConstAttributeArray = pTVar15;
  (this->BoneIndicesAttribute).ConstCollection = param_1;
  (this->BoneIndicesAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->BoneIndicesAttribute).Name = FVertexBoneWeightsFacade::BoneIndicesAttributeName;
  (this->BoneIndicesAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->BoneIndicesAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneIndicesAttribute).DefaultGroupDependency.Number = 0;
  (this->BoneIndicesAttribute).AttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_50 = FVertexBoneWeightsFacade::BoneIndicesAttributeName;
  local_48 = FGeometryCollection::VerticesGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_50);
  pcVar8 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar8 = pcVar16;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 != '%')) {
    (this->BoneIndicesAttribute).ConstAttributeArray =
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar1 = *(TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> **)(pcVar8 + 0x20);
    if (pTVar1 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRenderingFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
    (this->BoneIndicesAttribute).ConstAttributeArray = pTVar1;
  }
  return this;
}

// AddBox @ 143f93bd0

void __thiscall
GeometryCollection::Facades::FRenderingFacade::AddBox(FRenderingFacade *this,TBox<double> *param_1)

{
  TVector<float>_u_0 local_28;
  TVector<float>_u_0 local_1c [2];
  
  local_28._s_0.X = (float)(param_1->Max).field0_0x0._s_0.X;
  local_28._s_0.Y = (float)(param_1->Max).field0_0x0._s_0.Y;
  local_28._s_0.Z = (float)(param_1->Max).field0_0x0._s_0.Z;
  local_1c[0]._0_4_ = (undefined4)(param_1->Min).field0_0x0._s_0.X;
  local_1c[0]._4_4_ = (undefined4)(param_1->Min).field0_0x0._s_0.Y;
  local_1c[0]._8_4_ = (undefined4)(param_1->Min).field0_0x0._s_0.Z;
  AddBox(this,(TVector<float> *)&local_1c[0]._s_0,(TVector<float> *)&local_28._s_0);
  return;
}

// AddBox @ 143f93c50

void __thiscall
GeometryCollection::Facades::FRenderingFacade::AddBox
          (FRenderingFacade *this,TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  undefined8 uVar5;
  FLinearColor FVar6;
  undefined4 uVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_e8;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_d8;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_c8;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float fStack_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float fStack_60;
  float local_5c;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_58 [5];
  
  local_ac = (param_2->field0_0x0)._s_0.X;
  fStack_9c = (param_2->field0_0x0)._s_0.Y;
  local_80 = (param_2->field0_0x0)._s_0.Z;
  uVar9 = 0;
  fVar1 = (param_1->field0_0x0)._s_0.X;
  fVar2 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = (param_1->field0_0x0)._s_0.Z;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  local_b8 = fVar1;
  fStack_b4 = fVar2;
  local_b0 = fVar3;
  fStack_a8 = fVar2;
  local_a4 = fVar3;
  local_a0 = local_ac;
  local_98 = fVar3;
  local_94 = fVar1;
  fStack_90 = fStack_9c;
  local_8c = fVar3;
  local_88 = fVar1;
  fStack_84 = fVar2;
  local_7c = local_ac;
  fStack_78 = fVar2;
  local_74 = local_80;
  local_70 = local_ac;
  fStack_6c = fStack_9c;
  local_68 = local_80;
  local_64 = fVar1;
  fStack_60 = fStack_9c;
  local_5c = local_80;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,0x18,&local_e8.AllocatorInstance,&local_e8.ArrayNum,&local_e8.ArrayMax);
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,0x18,&local_d8.AllocatorInstance,&local_d8.ArrayNum,&local_d8.ArrayMax);
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,0xc,&local_c8.AllocatorInstance,&local_c8.ArrayNum,&local_c8.ArrayMax);
  if ((local_e8.ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(float *)local_e8.AllocatorInstance.Data = fVar1;
  *(float *)(local_e8.AllocatorInstance.Data + 4) = fVar2;
  *(float *)(local_e8.AllocatorInstance.Data + 8) = fVar3;
  uVar7 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  uVar5 = CONCAT44(UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y,
                   UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X);
  if ((local_d8.ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)local_d8.AllocatorInstance.Data = uVar5;
  *(undefined4 *)(local_d8.AllocatorInstance.Data + 8) = uVar7;
  if ((local_e8.ArrayNum < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0xc) = CONCAT44(fStack_a8,local_ac);
  *(float *)(local_e8.AllocatorInstance.Data + 0x14) = local_a4;
  uVar7 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  uVar5 = CONCAT44(UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y,
                   UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X);
  if ((local_d8.ArrayNum < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(local_d8.AllocatorInstance.Data + 0xc) = uVar5;
  *(undefined4 *)(local_d8.AllocatorInstance.Data + 0x14) = uVar7;
  if ((local_e8.ArrayNum < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0x18) = CONCAT44(fStack_9c,local_a0);
  *(float *)(local_e8.AllocatorInstance.Data + 0x20) = local_98;
  uVar7 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  uVar5 = CONCAT44(UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y,
                   UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X);
  if ((local_d8.ArrayNum < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(local_d8.AllocatorInstance.Data + 0x18) = uVar5;
  *(undefined4 *)(local_d8.AllocatorInstance.Data + 0x20) = uVar7;
  if ((local_e8.ArrayNum < 4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0x24) = CONCAT44(fStack_90,local_94);
  *(float *)(local_e8.AllocatorInstance.Data + 0x2c) = local_8c;
  uVar7 = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  uVar5 = CONCAT44(UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y,
                   UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X);
  if ((local_d8.ArrayNum < 4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(local_d8.AllocatorInstance.Data + 0x24) = uVar5;
  *(undefined4 *)(local_d8.AllocatorInstance.Data + 0x2c) = uVar7;
  if ((local_c8.ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)local_c8.AllocatorInstance.Data = 0;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 4) = 1;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 8) = 3;
  if ((local_c8.ArrayNum < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0xc) = 1;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x10) = 2;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x14) = 3;
  if ((local_e8.ArrayNum < 5) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar14 = __xmm_80000000800000008000000080000000;
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0x30) = CONCAT44(fStack_84,local_88);
  *(float *)(local_e8.AllocatorInstance.Data + 0x38) = local_80;
  uVar11 = (uint)UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X ^ uVar14;
  uVar12 = (uint)UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y ^ uVar14;
  uVar13 = (uint)UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z ^ uVar14;
  if ((local_d8.ArrayNum < 5) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(uint *)(local_d8.AllocatorInstance.Data + 0x30) = uVar11;
  *(uint *)(local_d8.AllocatorInstance.Data + 0x34) = uVar12;
  *(uint *)(local_d8.AllocatorInstance.Data + 0x38) = uVar13;
  if ((local_e8.ArrayNum < 6) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0x3c) = CONCAT44(fStack_78,local_7c);
  *(float *)(local_e8.AllocatorInstance.Data + 0x44) = local_74;
  uVar11 = (uint)UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X ^ uVar14;
  uVar12 = (uint)UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y ^ uVar14;
  uVar13 = (uint)UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z ^ uVar14;
  if ((local_d8.ArrayNum < 6) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(uint *)(local_d8.AllocatorInstance.Data + 0x3c) = uVar11;
  *(uint *)(local_d8.AllocatorInstance.Data + 0x40) = uVar12;
  *(uint *)(local_d8.AllocatorInstance.Data + 0x44) = uVar13;
  if ((local_e8.ArrayNum < 7) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0x48) = CONCAT44(fStack_6c,local_70);
  *(float *)(local_e8.AllocatorInstance.Data + 0x50) = local_68;
  uVar11 = (uint)UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X ^ uVar14;
  uVar12 = (uint)UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y ^ uVar14;
  uVar13 = (uint)UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z ^ uVar14;
  if ((local_d8.ArrayNum < 7) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(uint *)(local_d8.AllocatorInstance.Data + 0x48) = uVar11;
  *(uint *)(local_d8.AllocatorInstance.Data + 0x4c) = uVar12;
  *(uint *)(local_d8.AllocatorInstance.Data + 0x50) = uVar13;
  if ((local_e8.ArrayNum < 8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0x54) = CONCAT44(fStack_60,local_64);
  *(float *)(local_e8.AllocatorInstance.Data + 0x5c) = local_5c;
  uVar11 = (uint)UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.X ^ uVar14;
  uVar12 = (uint)UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Y ^ uVar14;
  uVar13 = (uint)UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z ^ uVar14;
  if ((local_d8.ArrayNum < 8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(uint *)(local_d8.AllocatorInstance.Data + 0x54) = uVar11;
  *(uint *)(local_d8.AllocatorInstance.Data + 0x58) = uVar12;
  *(uint *)(local_d8.AllocatorInstance.Data + 0x5c) = uVar13;
  if ((local_c8.ArrayNum < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x18) = 5;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x1c) = 4;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x20) = 7;
  if ((local_c8.ArrayNum < 4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x24) = 5;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x28) = 7;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x2c) = 6;
  if ((local_e8.ArrayNum < 9) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0x60) = CONCAT44(fStack_a8,local_ac);
  *(float *)(local_e8.AllocatorInstance.Data + 0x68) = local_a4;
  uVar7 = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  uVar5 = CONCAT44(UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Y,
                   UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.X);
  if ((local_d8.ArrayNum < 9) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(local_d8.AllocatorInstance.Data + 0x60) = uVar5;
  *(undefined4 *)(local_d8.AllocatorInstance.Data + 0x68) = uVar7;
  if ((local_e8.ArrayNum < 10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0x6c) = CONCAT44(fStack_9c,local_a0);
  *(float *)(local_e8.AllocatorInstance.Data + 0x74) = local_98;
  uVar7 = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  uVar5 = CONCAT44(UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Y,
                   UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.X);
  if ((local_d8.ArrayNum < 10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(local_d8.AllocatorInstance.Data + 0x6c) = uVar5;
  *(undefined4 *)(local_d8.AllocatorInstance.Data + 0x74) = uVar7;
  if ((local_e8.ArrayNum < 0xb) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0x78) = CONCAT44(fStack_6c,local_70);
  *(float *)(local_e8.AllocatorInstance.Data + 0x80) = local_68;
  uVar7 = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  uVar5 = CONCAT44(UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Y,
                   UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.X);
  if ((local_d8.ArrayNum < 0xb) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(local_d8.AllocatorInstance.Data + 0x78) = uVar5;
  *(undefined4 *)(local_d8.AllocatorInstance.Data + 0x80) = uVar7;
  if ((local_e8.ArrayNum < 0xc) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0x84) = CONCAT44(fStack_78,local_7c);
  *(float *)(local_e8.AllocatorInstance.Data + 0x8c) = local_74;
  uVar7 = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  uVar5 = CONCAT44(UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Y,
                   UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.X);
  if ((local_d8.ArrayNum < 0xc) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(local_d8.AllocatorInstance.Data + 0x84) = uVar5;
  *(undefined4 *)(local_d8.AllocatorInstance.Data + 0x8c) = uVar7;
  if ((local_c8.ArrayNum < 5) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x30) = 8;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x34) = 0xb;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x38) = 10;
  if ((local_c8.ArrayNum < 6) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x3c) = 8;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x40) = 10;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x44) = 9;
  if ((local_e8.ArrayNum < 0xd) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0x90) = CONCAT44(fStack_b4,local_b8);
  *(float *)(local_e8.AllocatorInstance.Data + 0x98) = local_b0;
  uVar11 = (uint)UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.X ^ uVar14;
  uVar12 = (uint)UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Y ^ uVar14;
  uVar13 = (uint)UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z ^ uVar14;
  if ((local_d8.ArrayNum < 0xd) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(uint *)(local_d8.AllocatorInstance.Data + 0x90) = uVar11;
  *(uint *)(local_d8.AllocatorInstance.Data + 0x94) = uVar12;
  *(uint *)(local_d8.AllocatorInstance.Data + 0x98) = uVar13;
  if ((local_e8.ArrayNum < 0xe) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0x9c) = CONCAT44(fStack_90,local_94);
  *(float *)(local_e8.AllocatorInstance.Data + 0xa4) = local_8c;
  uVar11 = (uint)UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.X ^ uVar14;
  uVar12 = (uint)UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Y ^ uVar14;
  uVar13 = (uint)UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z ^ uVar14;
  if ((local_d8.ArrayNum < 0xe) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(uint *)(local_d8.AllocatorInstance.Data + 0x9c) = uVar11;
  *(uint *)(local_d8.AllocatorInstance.Data + 0xa0) = uVar12;
  *(uint *)(local_d8.AllocatorInstance.Data + 0xa4) = uVar13;
  if ((local_e8.ArrayNum < 0xf) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0xa8) = CONCAT44(fStack_60,local_64);
  *(float *)(local_e8.AllocatorInstance.Data + 0xb0) = local_5c;
  uVar11 = (uint)UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.X ^ uVar14;
  uVar12 = (uint)UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Y ^ uVar14;
  uVar13 = (uint)UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z ^ uVar14;
  if ((local_d8.ArrayNum < 0xf) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(uint *)(local_d8.AllocatorInstance.Data + 0xa8) = uVar11;
  *(uint *)(local_d8.AllocatorInstance.Data + 0xac) = uVar12;
  *(uint *)(local_d8.AllocatorInstance.Data + 0xb0) = uVar13;
  if ((local_e8.ArrayNum < 0x10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0xb4) = CONCAT44(fStack_84,local_88);
  *(float *)(local_e8.AllocatorInstance.Data + 0xbc) = local_80;
  uVar11 = (uint)UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.X ^ uVar14;
  uVar12 = (uint)UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Y ^ uVar14;
  uVar13 = (uint)UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z ^ uVar14;
  if ((local_d8.ArrayNum < 0x10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(uint *)(local_d8.AllocatorInstance.Data + 0xb4) = uVar11;
  *(uint *)(local_d8.AllocatorInstance.Data + 0xb8) = uVar12;
  *(uint *)(local_d8.AllocatorInstance.Data + 0xbc) = uVar13;
  if ((local_c8.ArrayNum < 7) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x48) = 0xc;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x4c) = 0xd;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x50) = 0xe;
  if ((local_c8.ArrayNum < 8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x54) = 0xc;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x58) = 0xe;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x5c) = 0xf;
  if ((local_e8.ArrayNum < 0x11) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0xc0) = CONCAT44(fStack_90,local_94);
  *(float *)(local_e8.AllocatorInstance.Data + 200) = local_8c;
  uVar7 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  uVar5 = CONCAT44(UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y,
                   UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X);
  if ((local_d8.ArrayNum < 0x11) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(local_d8.AllocatorInstance.Data + 0xc0) = uVar5;
  *(undefined4 *)(local_d8.AllocatorInstance.Data + 200) = uVar7;
  if ((local_e8.ArrayNum < 0x12) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0xcc) = CONCAT44(fStack_9c,local_a0);
  *(float *)(local_e8.AllocatorInstance.Data + 0xd4) = local_98;
  uVar7 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  uVar5 = CONCAT44(UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y,
                   UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X);
  if ((local_d8.ArrayNum < 0x12) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(local_d8.AllocatorInstance.Data + 0xcc) = uVar5;
  *(undefined4 *)(local_d8.AllocatorInstance.Data + 0xd4) = uVar7;
  if ((local_e8.ArrayNum < 0x13) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0xd8) = CONCAT44(fStack_6c,local_70);
  *(float *)(local_e8.AllocatorInstance.Data + 0xe0) = local_68;
  uVar7 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  uVar5 = CONCAT44(UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y,
                   UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X);
  if ((local_d8.ArrayNum < 0x13) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(local_d8.AllocatorInstance.Data + 0xd8) = uVar5;
  *(undefined4 *)(local_d8.AllocatorInstance.Data + 0xe0) = uVar7;
  if ((local_e8.ArrayNum < 0x14) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0xe4) = CONCAT44(fStack_60,local_64);
  *(float *)(local_e8.AllocatorInstance.Data + 0xec) = local_5c;
  uVar7 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  uVar5 = CONCAT44(UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y,
                   UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X);
  if ((local_d8.ArrayNum < 0x14) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(local_d8.AllocatorInstance.Data + 0xe4) = uVar5;
  *(undefined4 *)(local_d8.AllocatorInstance.Data + 0xec) = uVar7;
  if ((local_c8.ArrayNum < 9) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x60) = 0x10;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 100) = 0x11;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x68) = 0x12;
  if ((local_c8.ArrayNum < 10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x6c) = 0x10;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x70) = 0x12;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x74) = 0x13;
  if ((local_e8.ArrayNum < 0x15) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0xf0) = CONCAT44(fStack_a8,local_ac);
  *(float *)(local_e8.AllocatorInstance.Data + 0xf8) = local_a4;
  uVar11 = (uint)UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X ^ uVar14;
  uVar12 = (uint)UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y ^ uVar14;
  uVar13 = (uint)UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z ^ uVar14;
  if ((local_d8.ArrayNum < 0x15) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(uint *)(local_d8.AllocatorInstance.Data + 0xf0) = uVar11;
  *(uint *)(local_d8.AllocatorInstance.Data + 0xf4) = uVar12;
  *(uint *)(local_d8.AllocatorInstance.Data + 0xf8) = uVar13;
  if ((local_e8.ArrayNum < 0x16) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0xfc) = CONCAT44(fStack_b4,local_b8);
  *(float *)(local_e8.AllocatorInstance.Data + 0x104) = local_b0;
  uVar11 = (uint)UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X ^ uVar14;
  uVar12 = (uint)UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y ^ uVar14;
  uVar13 = (uint)UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z ^ uVar14;
  if ((local_d8.ArrayNum < 0x16) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(uint *)(local_d8.AllocatorInstance.Data + 0xfc) = uVar11;
  *(uint *)(local_d8.AllocatorInstance.Data + 0x100) = uVar12;
  *(uint *)(local_d8.AllocatorInstance.Data + 0x104) = uVar13;
  if ((local_e8.ArrayNum < 0x17) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0x108) = CONCAT44(fStack_84,local_88);
  *(float *)(local_e8.AllocatorInstance.Data + 0x110) = local_80;
  uVar11 = (uint)UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X ^ uVar14;
  uVar12 = (uint)UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y ^ uVar14;
  uVar13 = (uint)UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z ^ uVar14;
  if ((local_d8.ArrayNum < 0x17) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(uint *)(local_d8.AllocatorInstance.Data + 0x108) = uVar11;
  *(uint *)(local_d8.AllocatorInstance.Data + 0x10c) = uVar12;
  *(uint *)(local_d8.AllocatorInstance.Data + 0x110) = uVar13;
  if ((local_e8.ArrayNum < 0x18) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(ulonglong *)(local_e8.AllocatorInstance.Data + 0x114) = CONCAT44(fStack_78,local_7c);
  *(float *)(local_e8.AllocatorInstance.Data + 0x11c) = local_74;
  uVar11 = (uint)UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X ^ uVar14;
  uVar12 = (uint)UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y ^ uVar14;
  uVar14 = (uint)UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z ^ uVar14;
  if ((local_d8.ArrayNum < 0x18) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(uint *)(local_d8.AllocatorInstance.Data + 0x114) = uVar11;
  *(uint *)(local_d8.AllocatorInstance.Data + 0x118) = uVar12;
  *(uint *)(local_d8.AllocatorInstance.Data + 0x11c) = uVar14;
  if ((local_c8.ArrayNum < 0xb) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x78) = 0x14;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x7c) = 0x15;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x80) = 0x16;
  if ((local_c8.ArrayNum < 0xc) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x84) = 0x14;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x88) = 0x16;
  *(undefined4 *)(local_c8.AllocatorInstance.Data + 0x8c) = 0x17;
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,local_e8.ArrayNum,&local_58[0].AllocatorInstance,&local_58[0].ArrayNum,
             &local_58[0].ArrayMax);
  uVar10 = uVar9;
  if (0 < local_58[0].ArrayNum) {
    do {
      FVar6.field0_0x0 = FLinearColor::White.field0_0x0;
      uVar11 = (uint)uVar9;
      uVar14 = 0;
      if ((int)uVar11 < local_58[0].ArrayNum) {
        uVar14 = ~uVar11 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = (ulonglong)(uVar11 + 1);
      ((FLinearColor_u_0 *)(local_58[0].AllocatorInstance.Data + uVar10))->_s_0 =
           (FLinearColor_u_0_s_0)FVar6.field0_0x0;
      uVar10 = uVar10 + 0x10;
    } while ((int)(uVar11 + 1) < local_58[0].ArrayNum);
  }
  AddSurface(this,&local_e8,&local_c8,&local_d8,local_58);
  if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return;
}

// AddBoxes @ 143f955c0

void __thiscall
GeometryCollection::Facades::FRenderingFacade::AddBoxes
          (FRenderingFacade *this,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  TVector<float>_u_0 local_28;
  TVector<float>_u_0 local_1c;
  
  iVar7 = param_1->ArrayNum;
  uVar5 = 0;
  if (0 < iVar7) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < iVar7) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      local_28._s_0.X = (float)*(double *)(pFVar1 + lVar6 + 0x18);
      local_28._s_0.Y = (float)*(double *)(pFVar1 + lVar6 + 0x20);
      local_28._s_0.Z = (float)*(double *)(pFVar1 + lVar6 + 0x28);
      local_1c._s_0.X = (float)*(double *)(pFVar1 + lVar6);
      local_1c._s_0.Y = (float)*(double *)(pFVar1 + lVar6 + 8);
      local_1c._s_0.Z = (float)*(double *)(pFVar1 + lVar6 + 0x10);
      AddBox(this,(TVector<float> *)&local_1c._s_0,(TVector<float> *)&local_28._s_0);
      iVar7 = param_1->ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x38;
    } while ((int)uVar5 < iVar7);
  }
  return;
}

// AddCapsule @ 143f956e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GeometryCollection::Facades::FRenderingFacade::AddCapsule
          (FRenderingFacade *this,float param_1,float param_2,FLinearColor *param_3,int param_4)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  double *pdVar11;
  ForAnyElementType FVar12;
  int iVar13;
  int iVar14;
  undefined1 local_res10 [8];
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_138;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_128;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_118;
  float local_108;
  float fStack_104;
  float local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined1 local_e8 [16];
  ulonglong local_d8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_c0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_a0;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_90;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_80;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_70;
  TArray<int,TSizedDefaultAllocator<32>_> local_60;
  undefined1 local_50;
  double local_48;
  double local_40;
  int local_38;
  int local_34;
  int local_30;
  bool local_2c;
  
  if (param_2 <= __real_322bcc77) {
    param_2 = __real_322bcc77;
  }
  local_38 = 5;
  local_e8._8_8_ = (double *)0x0;
  local_d8 = 0;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8._0_8_ = &___7FCapsuleGenerator_Geometry_UE__6B_;
  if (param_1 <= __real_322bcc77) {
    param_1 = __real_322bcc77;
  }
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  local_48 = (double)param_2;
  iVar8 = param_4;
  if (param_4 < 3) {
    iVar8 = 3;
  }
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = 3;
  if (3 < iVar8) {
    iVar6 = iVar8;
  }
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_40 = (double)param_1;
  iVar8 = iVar6 * 8 + 2;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  iVar13 = iVar6 << 4;
  iVar14 = iVar6 * 10 + 8;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  local_50 = 0;
  local_30 = 0;
  local_2c = false;
  local_34 = iVar6;
  if (0 < iVar8) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(local_e8 + 8),iVar8
               ,Default);
  }
  if (0 < iVar6 << 4) {
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum(&local_90,iVar13,Default);
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum(&local_80,iVar13,Default);
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum(&local_70,iVar13,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_60,iVar13,Default);
  }
  if (0 < iVar14) {
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNum(&local_d0,iVar14,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_c0,iVar14,Default);
  }
  if (0 < iVar8) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum(&local_b0,iVar8,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_a0,iVar8,Default);
  }
  UE::Geometry::FCapsuleGenerator::GenerateVertices((FCapsuleGenerator *)local_e8);
  UE::Geometry::FCapsuleGenerator::GenerateUVVertices((FCapsuleGenerator *)local_e8);
  UE::Geometry::FCapsuleGenerator::OutputEquatorialTriangles((FCapsuleGenerator *)local_e8);
  UE::Geometry::FCapsuleGenerator::OutputPolarTriangles((FCapsuleGenerator *)local_e8);
  uVar9 = local_d8 & 0xffffffff;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  if ((int)local_d8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar9);
  }
  iVar8 = 0;
  iVar6 = 0;
  if (0 < (int)local_d8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,(int)local_d8,&local_118.AllocatorInstance,0,&local_118.ArrayMax);
    uVar9 = local_d8 & 0xffffffff;
    iVar8 = local_128.ArrayMax;
    iVar6 = local_128.ArrayNum;
  }
  iVar13 = (int)uVar9;
  if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar9);
  }
  if (iVar8 < iVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar13,&local_128.AllocatorInstance,iVar6,&local_128.ArrayMax);
    uVar9 = local_d8 & 0xffffffff;
  }
  if (local_90.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_90._8_8_ & 0xffffffff);
  }
  if (local_138.ArrayMax < local_90.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_90.ArrayNum,&local_138.AllocatorInstance,local_138.ArrayNum,
               &local_138.ArrayMax);
    uVar9 = local_d8 & 0xffffffff;
  }
  iVar8 = (int)uVar9;
  pdVar1 = (double *)(local_e8._8_8_ + (longlong)iVar8 * 3 * 8);
  pdVar11 = (double *)local_e8._8_8_;
  while( true ) {
    if ((int)uVar9 != iVar8) {
      param_4 = param_4 & 0xffffff00;
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&param_4);
    }
    if (pdVar11 == pdVar1) {
      iVar8 = local_90.ArrayNum;
      uVar10 = (ulonglong)local_90.ArrayNum;
      pFVar2 = local_90.AllocatorInstance.Data + uVar10 * 0xc;
      FVar12.Data = local_90.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar10 != iVar8) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (FVar12.Data == pFVar2) break;
        local_fc = *(undefined4 *)FVar12.Data;
        uStack_f8 = *(undefined4 *)(FVar12.Data + 4);
        local_f4 = *(undefined4 *)(FVar12.Data + 8);
        if (((local_138.AllocatorInstance.Data <= (FScriptContainerElement *)&local_fc) &&
            ((FScriptContainerElement *)&local_fc <
             local_138.AllocatorInstance.Data + (longlong)local_138.ArrayMax * 0xc)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = local_138.ArrayNum;
        if (local_138.ArrayNum == local_138.ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&local_138.AllocatorInstance,&local_138.ArrayMax);
        }
        local_138.ArrayNum = iVar6 + 1;
        FVar12.Data = FVar12.Data + 0xc;
        *(ulonglong *)(local_138.AllocatorInstance.Data + (longlong)iVar6 * 0xc) =
             CONCAT44(uStack_f8,local_fc);
        *(undefined4 *)(local_138.AllocatorInstance.Data + (longlong)iVar6 * 0xc + 8) = local_f4;
        uVar10 = local_90._8_8_ & 0xffffffff;
      }
      AddSurface(this,&local_118,&local_138,&local_b0,&local_128);
      if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
      if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.AllocatorInstance.Data);
      }
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      local_e8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
      if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.AllocatorInstance.Data);
      }
      if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
      if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
      }
      if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
      if ((double *)local_e8._8_8_ != (double *)0x0) {
        FMemory::Free((void *)local_e8._8_8_);
      }
      return;
    }
    local_108 = (float)*pdVar11;
    fStack_104 = (float)pdVar11[1];
    local_100 = (float)pdVar11[2];
    if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_108) &&
        ((FScriptContainerElement *)&local_108 <
         local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 0xc)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_118.ArrayNum == local_118.ArrayMax) {
      local_118.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_118.AllocatorInstance,&local_118.ArrayMax);
    }
    lVar7 = (longlong)local_118.ArrayNum;
    local_118.ArrayNum = local_118.ArrayNum + 1;
    *(ulonglong *)(local_118.AllocatorInstance.Data + lVar7 * 0xc) = CONCAT44(fStack_104,local_108);
    *(float *)(local_118.AllocatorInstance.Data + lVar7 * 0xc + 8) = local_100;
    if (((local_128.AllocatorInstance.Data <= param_3) &&
        (param_3 < local_128.AllocatorInstance.Data + (longlong)local_128.ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar6 = local_128.ArrayNum;
    if (local_128.ArrayNum == local_128.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&local_128.AllocatorInstance,&local_128.ArrayMax);
    }
    uVar4 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    local_128.ArrayNum = iVar6 + 1;
    pdVar11 = pdVar11 + 3;
    *(undefined8 *)(local_128.AllocatorInstance.Data + (longlong)iVar6 * 0x10) =
         *(undefined8 *)&param_3->field0_0x0;
    *(undefined8 *)(local_128.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) = uVar4;
    uVar9 = local_d8 & 0xffffffff;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// AddFaces @ 143f95de0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
GeometryCollection::Facades::FRenderingFacade::AddFaces
          (FRenderingFacade *this,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_148;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_140;
  undefined8 local_130;
  uint local_128;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_120;
  int local_110;
  int local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  longlong local_f8;
  longlong local_f0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_e8;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_d8;
  longlong local_c8;
  uint local_c0;
  uint local_bc;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRenderingFacade.cpp"
                          ,699,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar11 = IsValid(this);
  if (bVar11) {
    iVar17 = param_2->ArrayNum;
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar16 = iVar17 * 3;
    local_d8.ArrayNum = 0;
    local_d8.ArrayMax = 0;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ArrayNum = 0;
    local_140.ArrayMax = 0;
    local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.ArrayNum = 0;
    local_120.ArrayMax = 0;
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_d8,uVar16,Default);
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_e8,uVar16,Default);
    if (local_140.ArrayNum < (int)uVar16) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,uVar16 - local_140.ArrayNum,&local_140.AllocatorInstance,&local_140.ArrayNum
                 ,&local_140.ArrayMax);
    }
    else {
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if ((int)uVar16 < local_140.ArrayNum) {
        uVar15 = local_140.ArrayNum + iVar17 * -3;
        if ((int)(uVar15 | uVar16) < 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             );
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (uVar15 != 0) {
          iVar12 = (local_140.ArrayNum - uVar15) + iVar17 * -3;
          iVar17 = local_140.ArrayNum;
          if (iVar12 != 0) {
            memmove(local_140.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10,
                    local_140.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10 +
                    (longlong)(int)uVar15 * 0x10,(longlong)iVar12 << 4);
            iVar17 = local_140.ArrayNum;
          }
          local_140.ArrayNum = iVar17 - uVar15;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,&local_140.AllocatorInstance,iVar17 - uVar15,&local_140.ArrayMax);
        }
      }
    }
    uVar16 = param_2->ArrayNum;
    if (local_120.ArrayNum < (int)uVar16) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar16 - local_120.ArrayNum,&local_120.AllocatorInstance,&local_120.ArrayNum,
                 &local_120.ArrayMax);
    }
    else {
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if ((int)uVar16 < local_120.ArrayNum) {
        uVar15 = local_120.ArrayNum - uVar16;
        if ((int)(uVar16 | uVar15) < 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             );
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (uVar15 != 0) {
          iVar12 = (local_120.ArrayNum - uVar16) - uVar15;
          iVar17 = local_120.ArrayNum;
          if (iVar12 != 0) {
            memmove(local_120.AllocatorInstance.Data + (longlong)(int)uVar16 * 0xc,
                    local_120.AllocatorInstance.Data + (longlong)(int)uVar16 * 0xc +
                    (longlong)(int)uVar15 * 0xc,(longlong)iVar12 * 0xc);
            iVar17 = local_120.ArrayNum;
          }
          local_120.ArrayNum = iVar17 - uVar15;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,&local_120.AllocatorInstance,iVar17 - uVar15,&local_120.ArrayMax);
        }
      }
    }
    fVar10 = __real_3f800000;
    fVar9 = __real_322bcc77;
    iVar17 = param_2->ArrayNum;
    local_100 = 0;
    if (0 < iVar17) {
      uVar16 = 2;
      local_a8 = 0;
      lVar14 = 0x18;
      local_f0 = 0x20;
      local_110 = 0;
      local_10c = 1;
      do {
        lVar20 = local_a8;
        local_bc = ~local_100 >> 0x1f;
        uVar15 = 0;
        if ((int)local_100 < iVar17) {
          uVar15 = local_bc;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (param_2->AllocatorInstance).Data;
        local_130 = *(undefined8 *)(pFVar5 + lVar20);
        local_128 = *(uint *)(pFVar5 + lVar20 + 8);
        uVar13 = (uint)((ulonglong)local_130 >> 0x20);
        local_108 = ~uVar13 >> 0x1f;
        uVar15 = 0;
        if ((int)uVar13 < param_1->ArrayNum) {
          uVar15 = local_108;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (param_1->AllocatorInstance).Data;
        uVar18 = ~(uint)local_130 >> 0x1f;
        local_f8 = (longlong)(int)uVar13;
        uVar15 = 0;
        if ((int)(uint)local_130 < param_1->ArrayNum) {
          uVar15 = uVar18;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (param_1->AllocatorInstance).Data;
        lVar20 = (longlong)(int)(uint)local_130;
        fVar25 = *(float *)(pFVar5 + local_f8 * 0xc);
        fVar26 = *(float *)(pFVar5 + local_f8 * 0xc + 4);
        fVar22 = *(float *)(pFVar5 + local_f8 * 0xc + 8);
        fVar1 = *(float *)(pFVar6 + lVar20 * 0xc);
        fVar2 = *(float *)(pFVar6 + lVar20 * 0xc + 4);
        fVar23 = *(float *)(pFVar6 + lVar20 * 0xc + 8);
        local_104 = ~local_128 >> 0x1f;
        uVar15 = 0;
        if ((int)local_128 < param_1->ArrayNum) {
          uVar15 = local_104;
        }
        local_b0 = lVar20;
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_b8 = (longlong)(int)local_128;
        pFVar5 = (param_1->AllocatorInstance).Data;
        local_c8 = local_b8 * 3;
        uVar15 = 0;
        if ((int)(uint)local_130 < param_1->ArrayNum) {
          uVar15 = uVar18;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (param_1->AllocatorInstance).Data;
        fVar24 = (*(float *)(pFVar5 + local_c8 * 4) - *(float *)(pFVar6 + lVar20 * 0xc)) *
                 (fVar22 - fVar23) -
                 (*(float *)(pFVar5 + local_c8 * 4 + 8) - *(float *)(pFVar6 + lVar20 * 0xc + 8)) *
                 (fVar25 - fVar1);
        fVar23 = (*(float *)(pFVar5 + local_c8 * 4 + 8) - *(float *)(pFVar6 + lVar20 * 0xc + 8)) *
                 (fVar26 - fVar2) -
                 (*(float *)(pFVar5 + local_c8 * 4 + 4) - *(float *)(pFVar6 + lVar20 * 0xc + 4)) *
                 (fVar22 - fVar23);
        local_98 = (*(float *)(pFVar5 + local_c8 * 4 + 4) - *(float *)(pFVar6 + lVar20 * 0xc + 4)) *
                   (fVar25 - fVar1) -
                   (*(float *)(pFVar5 + local_c8 * 4) - *(float *)(pFVar6 + lVar20 * 0xc)) *
                   (fVar26 - fVar2);
        fVar22 = fVar24 * fVar24 + fVar23 * fVar23 + local_98 * local_98;
        fVar25 = fVar23;
        fVar26 = fVar24;
        local_148 = local_98;
        if (fVar22 != fVar10) {
          if (fVar9 <= fVar22) {
            fVar22 = __real_3f800000 / SQRT(fVar22);
            fVar25 = fVar23 * fVar22;
            fVar26 = fVar24 * fVar22;
            local_148 = local_98 * fVar22;
          }
          else {
            local_148 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            fVar25 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            fVar26 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                            0x20);
          }
        }
        _local_a0 = CONCAT44(fVar24,fVar23);
        uVar15 = 0;
        if ((int)(uint)local_130 < param_1->ArrayNum) {
          uVar15 = uVar18;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (param_1->AllocatorInstance).Data;
        uVar3 = *(undefined8 *)(pFVar5 + lVar20 * 0xc);
        uVar4 = *(undefined4 *)(pFVar5 + lVar20 * 0xc + 8);
        uVar13 = ~(uVar16 - 2) >> 0x1f;
        uVar15 = 0;
        if (local_110 < local_d8.ArrayNum) {
          uVar15 = uVar13;
        }
        local_c0 = uVar13;
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined8 *)(local_d8.AllocatorInstance.Data + lVar14 + -0x18) = uVar3;
        *(undefined4 *)(local_d8.AllocatorInstance.Data + lVar14 + -0x10) = uVar4;
        uVar15 = 0;
        if (local_130._4_4_ < param_1->ArrayNum) {
          uVar15 = local_108;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (param_1->AllocatorInstance).Data;
        uVar19 = ~(uVar16 - 1) >> 0x1f;
        uVar3 = *(undefined8 *)(pFVar5 + local_f8 * 0xc);
        uVar4 = *(undefined4 *)(pFVar5 + local_f8 * 0xc + 8);
        uVar15 = 0;
        if (local_10c < local_d8.ArrayNum) {
          uVar15 = uVar19;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined8 *)(local_d8.AllocatorInstance.Data + lVar14 + -0xc) = uVar3;
        *(undefined4 *)(local_d8.AllocatorInstance.Data + lVar14 + -4) = uVar4;
        uVar15 = 0;
        if ((int)local_128 < param_1->ArrayNum) {
          uVar15 = local_104;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (param_1->AllocatorInstance).Data;
        uVar21 = ~uVar16 >> 0x1f;
        uVar3 = *(undefined8 *)(pFVar5 + local_c8 * 4);
        local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(pFVar5 + local_c8 * 4 + 8));
        uVar15 = 0;
        if ((int)uVar16 < local_d8.ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined8 *)(local_d8.AllocatorInstance.Data + lVar14) = uVar3;
        *(undefined4 *)(local_d8.AllocatorInstance.Data + lVar14 + 8) = (undefined4)local_c8;
        uVar15 = 0;
        if ((int)(uVar16 - 2) < local_e8.ArrayNum) {
          uVar15 = uVar13;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar17 = uVar16 - 1;
        *(ulonglong *)(local_e8.AllocatorInstance.Data + lVar14 + -0x18) = CONCAT44(fVar26,fVar25);
        *(float *)(local_e8.AllocatorInstance.Data + lVar14 + -0x10) = local_148;
        uVar15 = 0;
        if (iVar17 < local_e8.ArrayNum) {
          uVar15 = uVar19;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(ulonglong *)(local_e8.AllocatorInstance.Data + lVar14 + -0xc) = CONCAT44(fVar26,fVar25);
        *(float *)(local_e8.AllocatorInstance.Data + lVar14 + -4) = local_148;
        uVar15 = 0;
        if ((int)uVar16 < local_e8.ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar20 = local_b0;
        *(ulonglong *)(local_e8.AllocatorInstance.Data + lVar14) = CONCAT44(fVar26,fVar25);
        *(float *)(local_e8.AllocatorInstance.Data + lVar14 + 8) = local_148;
        uVar15 = 0;
        if ((int)(uint)local_130 < param_3->ArrayNum) {
          uVar15 = uVar18;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (param_3->AllocatorInstance).Data + lVar20 * 0x10;
        uVar3 = *(undefined8 *)pFVar5;
        uVar8 = *(undefined8 *)(pFVar5 + 8);
        uVar15 = 0;
        if ((int)(uVar16 - 2) < local_140.ArrayNum) {
          uVar15 = local_c0;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined8 *)(local_140.AllocatorInstance.Data + local_f0 + -0x20) = uVar3;
        *(undefined8 *)(local_140.AllocatorInstance.Data + local_f0 + -0x20 + 8) = uVar8;
        uVar15 = 0;
        if (local_130._4_4_ < param_3->ArrayNum) {
          uVar15 = local_108;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (param_3->AllocatorInstance).Data + local_f8 * 0x10;
        uVar3 = *(undefined8 *)pFVar5;
        uVar8 = *(undefined8 *)(pFVar5 + 8);
        uVar15 = 0;
        if (iVar17 < local_140.ArrayNum) {
          uVar15 = uVar19;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined8 *)(local_140.AllocatorInstance.Data + local_f0 + -0x10) = uVar3;
        *(undefined8 *)(local_140.AllocatorInstance.Data + local_f0 + -0x10 + 8) = uVar8;
        uVar15 = 0;
        if ((int)local_128 < param_3->ArrayNum) {
          uVar15 = local_104;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (param_3->AllocatorInstance).Data + local_b8 * 0x10;
        uVar3 = *(undefined8 *)pFVar5;
        uVar8 = *(undefined8 *)(pFVar5 + 8);
        uVar15 = 0;
        if ((int)uVar16 < local_140.ArrayNum) {
          uVar15 = uVar21;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar15 = local_100;
        *(undefined8 *)(local_140.AllocatorInstance.Data + local_f0) = uVar3;
        *(undefined8 *)(local_140.AllocatorInstance.Data + local_f0 + 8) = uVar8;
        uVar13 = 0;
        if ((int)local_100 < local_120.ArrayNum) {
          uVar13 = local_bc;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_100 = uVar15 + 1;
        lVar14 = lVar14 + 0x24;
        local_f0 = local_f0 + 0x30;
        local_110 = local_110 + 3;
        local_10c = local_10c + 3;
        *(uint *)(local_120.AllocatorInstance.Data + local_a8) = uVar16 - 2;
        *(int *)(local_120.AllocatorInstance.Data + local_a8 + 4) = iVar17;
        *(uint *)(local_120.AllocatorInstance.Data + local_a8 + 8) = uVar16;
        uVar16 = uVar16 + 3;
        local_a8 = local_a8 + 0xc;
        iVar17 = param_2->ArrayNum;
      } while ((int)local_100 < iVar17);
    }
    AddSurface(this,&local_d8,&local_120,&local_e8,&local_140);
    if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.AllocatorInstance.Data);
    }
    if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.AllocatorInstance.Data);
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
  }
  return;
}

// AddPoint @ 143f96e60

void __thiscall
GeometryCollection::Facades::FRenderingFacade::AddPoint
          (FRenderingFacade *this,TVector<float> *param_1)

{
  FManagedArrayCollection **ppFVar1;
  TManagedArray<UE::Math::TVector<float>_> *pTVar2;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  TArrayView<UE::Math::TIntVector3<int>,int> local_28;
  TArrayView<UE::Math::TVector<float>,int> local_18;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRenderingFacade.cpp"
                       ,0xba,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = IsValid(this);
  if (bVar5) {
    if (((this->VertexAttribute).AttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0)
       || ((this->VertexAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    ppFVar1 = &(this->IndicesAttribute).Collection;
    ((this->VertexAttribute).AttributeArray)->field_0x8 = 1;
    pTVar2 = (this->VertexAttribute).AttributeArray;
    if (((this->IndicesAttribute).AttributeArray ==
         (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) ||
       (*ppFVar1 == (FManagedArrayCollection *)0x0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    ((this->IndicesAttribute).AttributeArray)->field_0x8 = 1;
    pTVar3 = (this->IndicesAttribute).AttributeArray;
    if (*ppFVar1 == (FManagedArrayCollection *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x41,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = FManagedArrayCollection::AddElements(*ppFVar1,9,(this->IndicesAttribute).Group);
    if ((this->VertexAttribute).Collection == (FManagedArrayCollection *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x41,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = FManagedArrayCollection::AddElements
                      ((this->VertexAttribute).Collection,0xf,(this->VertexAttribute).Group);
    local_28.ArrayNum = 9;
    local_18.ArrayNum = 0xf;
    local_28.DataPtr =
         (TIntVector3<int> *)(*(longlong *)&pTVar3->field_0x10 + (longlong)iVar6 * 0xc);
    local_18.DataPtr = (TVector<float> *)(*(longlong *)&pTVar2->field_0x10 + (longlong)iVar7 * 0xc);
    AddPointGeometryHelper(param_1,&local_18,iVar7,&local_28);
  }
  return;
}

// AddPoints @ 143f97820

void __thiscall
GeometryCollection::Facades::FRenderingFacade::AddPoints
          (FRenderingFacade *this,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  TManagedArray<UE::Math::TVector<float>_> *pTVar9;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  TArrayView<UE::Math::TIntVector3<int>,int> local_38;
  TArrayView<UE::Math::TVector<float>,int> local_28;
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRenderingFacade.cpp"
                         ,0xcd,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar5 = IsValid(this);
  if ((bVar5) && (param_1->ArrayNum != 0)) {
    pTVar9 = TManagedArrayAccessor<UE::Math::TVector<float>_>::Modify(&this->VertexAttribute);
    pTVar10 = TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::Modify(&this->IndicesAttribute);
    iVar6 = TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::AddElements
                      (&this->IndicesAttribute,param_1->ArrayNum * 9);
    iVar7 = TManagedArrayAccessor<UE::Math::TVector<float>_>::AddElements
                      (&this->VertexAttribute,param_1->ArrayNum * 0xf);
    iVar11 = param_1->ArrayNum;
    uVar12 = 0;
    if (0 < iVar11) {
      uVar4 = local_28._12_4_;
      iVar13 = 0;
      do {
        lVar1 = *(longlong *)&pTVar10->field_0x10;
        lVar2 = *(longlong *)&pTVar9->field_0x10;
        uVar8 = 0;
        if ((int)uVar12 < iVar11) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_38._12_4_ = uVar4;
        local_38.ArrayNum = 9;
        local_28._12_4_ = uVar4;
        local_28.ArrayNum = 0xf;
        local_38.DataPtr = (TIntVector3<int> *)(lVar1 + ((longlong)iVar13 + (longlong)iVar6) * 0xc);
        local_28.DataPtr = (TVector<float> *)(lVar2 + (longlong)iVar7 * 0xc);
        AddPointGeometryHelper
                  ((TVector<float> *)
                   ((param_1->AllocatorInstance).Data + (longlong)(int)uVar12 * 0xc),&local_28,iVar7
                   ,&local_38);
        iVar11 = param_1->ArrayNum;
        uVar12 = uVar12 + 1;
        iVar13 = iVar13 + 9;
        iVar7 = iVar7 + 0xf;
      } while ((int)uVar12 < iVar11);
    }
  }
  return;
}

// AddSphere @ 143f98ac0

void __thiscall
GeometryCollection::Facades::FRenderingFacade::AddSphere
          (FRenderingFacade *this,TSphere<double> *param_1,FLinearColor *param_2)

{
  TVector<float>_u_0 local_18 [2];
  
  local_18[0]._0_4_ = (undefined4)(param_1->Center).field0_0x0._s_0.X;
  local_18[0]._4_4_ = (undefined4)(param_1->Center).field0_0x0._s_0.Y;
  local_18[0]._8_4_ = (undefined4)(param_1->Center).field0_0x0._s_0.Z;
  AddSphere(this,(TVector<float> *)&local_18[0]._s_0,(float)param_1->W,param_2);
  return;
}

// AddSphere @ 143f98b20

void __thiscall
GeometryCollection::Facades::FRenderingFacade::AddSphere
          (FRenderingFacade *this,TVector<float> *param_1,float param_2,FLinearColor *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  float local_98;
  float fStack_94;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_88;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_78;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_68;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_58 [3];
  
  uVar9 = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,0x1a,&local_78.AllocatorInstance,&local_78.ArrayNum,&local_78.ArrayMax);
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,0x1a,&local_58[0].AllocatorInstance,&local_58[0].ArrayNum,&local_58[0].ArrayMax);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,0x30,&local_88.AllocatorInstance,&local_88.ArrayNum,&local_88.ArrayMax);
  if ((local_78.ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)local_78.AllocatorInstance.Data = 0;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 8) = 0x3f800000;
  if ((local_78.ArrayNum < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(local_78.AllocatorInstance.Data + 0xc) = 0;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x14) = 0xbf800000;
  if ((local_78.ArrayNum < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(local_78.AllocatorInstance.Data + 0x18) = 0x3f3504f7;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x20) = 0x3f3504f7;
  if ((local_78.ArrayNum < 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x24) = 0x3f000000;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x28) = 0xbf000000;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x2c) = 0x3f3504f7;
  if ((local_78.ArrayNum < 5) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x30) = 0;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x34) = 0xbf3504f7;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x38) = 0x3f3504f7;
  if ((local_78.ArrayNum < 6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x3c) = 0xbf000000;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x40) = 0xbf000000;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x44) = 0x3f3504f7;
  if ((local_78.ArrayNum < 7) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x48) = 0xbf3504f7;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x4c) = 0;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x50) = 0x3f3504f7;
  if ((local_78.ArrayNum < 8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x54) = 0xbf000000;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x58) = 0x3f000000;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x5c) = 0x3f3504f7;
  if ((local_78.ArrayNum < 9) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x60) = 0;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 100) = 0x3f3504f7;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x68) = 0x3f3504f7;
  if ((local_78.ArrayNum < 10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x6c) = 0x3f000000;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x70) = 0x3f000000;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x74) = 0x3f3504f7;
  if ((local_78.ArrayNum < 0xb) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(local_78.AllocatorInstance.Data + 0x78) = 0x3f800000;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x80) = 0;
  if ((local_78.ArrayNum < 0xc) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x84) = 0x3f3504f7;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x88) = 0xbf3504f7;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x8c) = 0;
  if ((local_78.ArrayNum < 0xd) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x90) = 0;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x94) = 0xbf800000;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x98) = 0;
  if ((local_78.ArrayNum < 0xe) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x9c) = 0xbf3504f7;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0xa0) = 0xbf3504f7;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0xa4) = 0;
  if ((local_78.ArrayNum < 0xf) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0xa8) = 0xbf800000;
  *(undefined8 *)(local_78.AllocatorInstance.Data + 0xac) = 0;
  if ((local_78.ArrayNum < 0x10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0xb4) = 0xbf3504f7;
  *(undefined8 *)(local_78.AllocatorInstance.Data + 0xb8) = 0x3f3504f7;
  if ((local_78.ArrayNum < 0x11) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0xc0) = 0;
  *(undefined8 *)(local_78.AllocatorInstance.Data + 0xc4) = 0x3f800000;
  if ((local_78.ArrayNum < 0x12) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0xcc) = 0x3f3504f7;
  *(undefined8 *)(local_78.AllocatorInstance.Data + 0xd0) = 0x3f3504f7;
  if ((local_78.ArrayNum < 0x13) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined8 *)(local_78.AllocatorInstance.Data + 0xd8) = 0x3f3504f7;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0xe0) = 0xbf3504f7;
  if ((local_78.ArrayNum < 0x14) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0xe4) = 0x3f000000;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0xe8) = 0xbf000000;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0xec) = 0xbf3504f7;
  if ((local_78.ArrayNum < 0x15) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0xf0) = 0;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0xf4) = 0xbf3504f7;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0xf8) = 0xbf3504f7;
  if ((local_78.ArrayNum < 0x16) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0xfc) = 0xbf000000;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x100) = 0xbf000000;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x104) = 0xbf3504f7;
  if ((local_78.ArrayNum < 0x17) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x108) = 0xbf3504f7;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x10c) = 0;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x110) = 0xbf3504f7;
  if ((local_78.ArrayNum < 0x18) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x114) = 0xbf000000;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x118) = 0x3f000000;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x11c) = 0xbf3504f7;
  if ((local_78.ArrayNum < 0x19) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x120) = 0;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x124) = 0x3f3504f7;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x128) = 0xbf3504f7;
  if ((local_78.ArrayNum < 0x1a) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_78.AllocatorInstance.Data + 300) = 0x3f000000;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x130) = 0x3f000000;
  *(undefined4 *)(local_78.AllocatorInstance.Data + 0x134) = 0xbf3504f7;
  uVar11 = uVar9;
  do {
    iVar10 = (int)uVar11;
    if ((local_78.ArrayNum <= iVar10) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar1 = *(undefined8 *)(local_78.AllocatorInstance.Data + uVar9);
    uVar2 = *(undefined4 *)(local_78.AllocatorInstance.Data + uVar9 + 8);
    if ((local_58[0].ArrayNum <= iVar10) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined8 *)(local_58[0].AllocatorInstance.Data + uVar9) = uVar1;
    *(undefined4 *)(local_58[0].AllocatorInstance.Data + uVar9 + 8) = uVar2;
    if ((local_78.ArrayNum <= iVar10) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(float *)(local_78.AllocatorInstance.Data + uVar9) =
         param_2 * *(float *)(local_78.AllocatorInstance.Data + uVar9);
    *(float *)(local_78.AllocatorInstance.Data + uVar9 + 4) =
         param_2 * *(float *)(local_78.AllocatorInstance.Data + uVar9 + 4);
    *(float *)(local_78.AllocatorInstance.Data + uVar9 + 8) =
         param_2 * *(float *)(local_78.AllocatorInstance.Data + uVar9 + 8);
    uVar1 = *(undefined8 *)&param_1->field0_0x0;
    fVar3 = (param_1->field0_0x0)._s_0.Z;
    if ((local_78.ArrayNum <= iVar10) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar11 = (ulonglong)(iVar10 + 1U);
    local_98 = (float)uVar1;
    fStack_94 = (float)((ulonglong)uVar1 >> 0x20);
    *(float *)(local_78.AllocatorInstance.Data + uVar9) =
         local_98 + *(float *)(local_78.AllocatorInstance.Data + uVar9);
    *(float *)(local_78.AllocatorInstance.Data + uVar9 + 4) =
         fStack_94 + *(float *)(local_78.AllocatorInstance.Data + uVar9 + 4);
    *(float *)(local_78.AllocatorInstance.Data + uVar9 + 8) =
         fVar3 + *(float *)(local_78.AllocatorInstance.Data + uVar9 + 8);
    uVar9 = uVar9 + 0xc;
  } while ((int)(iVar10 + 1U) < 0x1a);
  lVar12 = 0;
  if ((local_88.ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)local_88.AllocatorInstance.Data = 0;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 4) = 2;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 8) = 3;
  if ((local_88.ArrayNum < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xc) = 0;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x10) = 3;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x14) = 4;
  if ((local_88.ArrayNum < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x18) = 0;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1c) = 4;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x20) = 5;
  if ((local_88.ArrayNum < 4) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x24) = 0;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x28) = 5;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x2c) = 6;
  if ((local_88.ArrayNum < 5) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x30) = 0;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x34) = 6;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x38) = 7;
  if ((local_88.ArrayNum < 6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x3c) = 0;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x40) = 7;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x44) = 8;
  if ((local_88.ArrayNum < 7) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x48) = 0;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x4c) = 8;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x50) = 9;
  if ((local_88.ArrayNum < 8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x54) = 0;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x58) = 9;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x5c) = 2;
  if ((local_88.ArrayNum < 9) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x60) = 2;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 100) = 10;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x68) = 0xb;
  if ((local_88.ArrayNum < 10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x6c) = 2;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x70) = 0xb;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x74) = 3;
  if ((local_88.ArrayNum < 0xb) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x78) = 3;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x7c) = 0xb;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x80) = 0xc;
  if ((local_88.ArrayNum < 0xc) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x84) = 3;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x88) = 0xc;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x8c) = 4;
  if ((local_88.ArrayNum < 0xd) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x90) = 4;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x94) = 0xc;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x98) = 0xd;
  if ((local_88.ArrayNum < 0xe) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x9c) = 4;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xa0) = 0xd;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xa4) = 5;
  if ((local_88.ArrayNum < 0xf) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xa8) = 5;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xac) = 0xd;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xb0) = 0xe;
  if ((local_88.ArrayNum < 0x10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xb4) = 5;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xb8) = 0xe;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xbc) = 6;
  if ((local_88.ArrayNum < 0x11) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xc0) = 6;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xc4) = 0xe;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 200) = 0xf;
  if ((local_88.ArrayNum < 0x12) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xcc) = 6;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xd0) = 0xf;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xd4) = 7;
  if ((local_88.ArrayNum < 0x13) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xd8) = 7;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xdc) = 0xf;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xe0) = 0x10;
  if ((local_88.ArrayNum < 0x14) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xe4) = 7;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xe8) = 0x10;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xec) = 8;
  if ((local_88.ArrayNum < 0x15) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xf0) = 8;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xf4) = 0x10;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xf8) = 0x11;
  if ((local_88.ArrayNum < 0x16) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0xfc) = 8;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x100) = 0x11;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x104) = 9;
  if ((local_88.ArrayNum < 0x17) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x108) = 9;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x10c) = 0x11;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x110) = 10;
  if ((local_88.ArrayNum < 0x18) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x114) = 9;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x118) = 10;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x11c) = 2;
  if ((local_88.ArrayNum < 0x19) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x120) = 10;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x124) = 0x12;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x128) = 0x13;
  if ((local_88.ArrayNum < 0x1a) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 300) = 10;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x130) = 0x13;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x134) = 0xb;
  if ((local_88.ArrayNum < 0x1b) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x138) = 0xb;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x13c) = 0x13;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x140) = 0x14;
  if ((local_88.ArrayNum < 0x1c) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x144) = 0xb;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x148) = 0x14;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x14c) = 0xc;
  if ((local_88.ArrayNum < 0x1d) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x150) = 0xc;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x154) = 0x14;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x158) = 0x15;
  if ((local_88.ArrayNum < 0x1e) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x15c) = 0xc;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x160) = 0x15;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x164) = 0xd;
  if ((local_88.ArrayNum < 0x1f) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x168) = 0xd;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x16c) = 0x15;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x170) = 0x16;
  if ((local_88.ArrayNum < 0x20) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x174) = 0xd;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x178) = 0x16;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x17c) = 0xe;
  if ((local_88.ArrayNum < 0x21) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x180) = 0xe;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x184) = 0x16;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x188) = 0x17;
  if ((local_88.ArrayNum < 0x22) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x18c) = 0xe;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 400) = 0x17;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x194) = 0xf;
  if ((local_88.ArrayNum < 0x23) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x198) = 0xf;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x19c) = 0x17;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1a0) = 0x18;
  if ((local_88.ArrayNum < 0x24) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1a4) = 0xf;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1a8) = 0x18;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1ac) = 0x10;
  if ((local_88.ArrayNum < 0x25) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1b0) = 0x10;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1b4) = 0x18;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1b8) = 0x19;
  if ((local_88.ArrayNum < 0x26) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1bc) = 0x10;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1c0) = 0x19;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1c4) = 0x11;
  if ((local_88.ArrayNum < 0x27) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1c8) = 0x11;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1cc) = 0x19;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1d0) = 0x12;
  if ((local_88.ArrayNum < 0x28) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1d4) = 0x11;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1d8) = 0x12;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1dc) = 10;
  if ((local_88.ArrayNum < 0x29) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1e0) = 0x12;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1e4) = 1;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1e8) = 0x13;
  if ((local_88.ArrayNum < 0x2a) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1ec) = 0x13;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1f0) = 1;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 500) = 0x14;
  if ((local_88.ArrayNum < 0x2b) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1f8) = 0x14;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x1fc) = 1;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x200) = 0x15;
  if ((local_88.ArrayNum < 0x2c) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x204) = 0x15;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x208) = 1;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x20c) = 0x16;
  if ((local_88.ArrayNum < 0x2d) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x210) = 0x16;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x214) = 1;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x218) = 0x17;
  if ((local_88.ArrayNum < 0x2e) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x21c) = 0x17;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x220) = 1;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x224) = 0x18;
  if ((local_88.ArrayNum < 0x2f) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x228) = 0x18;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x22c) = 1;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x230) = 0x19;
  if ((local_88.ArrayNum < 0x30) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x234) = 0x19;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x238) = 1;
  *(undefined4 *)(local_88.AllocatorInstance.Data + 0x23c) = 0x12;
  uVar1 = *(undefined8 *)&param_3->field0_0x0;
  uVar5 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,local_78.ArrayNum,&local_68.AllocatorInstance,&local_68.ArrayNum,
             &local_68.ArrayMax);
  uVar8 = 0;
  if (0 < local_68.ArrayNum) {
    do {
      uVar7 = 0;
      if ((int)uVar8 < local_68.ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = uVar8 + 1;
      *(undefined8 *)(local_68.AllocatorInstance.Data + lVar12) = uVar1;
      *(undefined8 *)(local_68.AllocatorInstance.Data + lVar12 + 8) = uVar5;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar8 < local_68.ArrayNum);
  }
  AddSurface(this,&local_78,&local_88,local_58,&local_68);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// AddSpheres @ 143f9a8c0

void __thiscall
GeometryCollection::Facades::FRenderingFacade::AddSpheres
          (FRenderingFacade *this,
          TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *param_1,
          FLinearColor *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  TVector<float>_u_0 local_18;
  
  iVar7 = param_1->ArrayNum;
  uVar5 = 0;
  if (0 < iVar7) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < iVar7) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      local_18._s_0.X = (float)*(double *)(pFVar1 + lVar6);
      local_18._s_0.Y = (float)*(double *)(pFVar1 + lVar6 + 8);
      local_18._s_0.Z = (float)*(double *)(pFVar1 + lVar6 + 0x10);
      AddSphere(this,(TVector<float> *)&local_18._s_0,(float)*(double *)(pFVar1 + lVar6 + 0x18),
                param_2);
      iVar7 = param_1->ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while ((int)uVar5 < iVar7);
  }
  return;
}

// AddSurface @ 143f9a9c0

void __thiscall
GeometryCollection::Facades::FRenderingFacade::AddSurface
          (FRenderingFacade *this,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_4,
          TArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_5,TArray<int,TSizedDefaultAllocator<32>_> *param_6,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_7)

{
  int iVar1;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
  TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TManagedArray<FString> *pTVar5;
  TManagedArray<int> *pTVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  ulonglong uVar19;
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRenderingFacade.cpp"
                         ,0x212,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar8 = IsValid(this);
  if (bVar8) {
    pTVar2 = (this->IndicesAttribute).ConstAttributeArray;
    if (pTVar2 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
      iVar9 = FManagedArrayCollection::NumElements
                        ((this->IndicesAttribute).ConstCollection,(this->IndicesAttribute).Group);
    }
    else {
      iVar9 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
    }
    pTVar3 = (this->VertexAttribute).ConstAttributeArray;
    if (pTVar3 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      iVar10 = FManagedArrayCollection::NumElements
                         ((this->VertexAttribute).ConstCollection,(this->VertexAttribute).Group);
    }
    else {
      iVar10 = (**(code **)(*(longlong *)pTVar3 + 0x60))();
    }
    AddSurface(this,param_1,param_2,param_3,param_4);
    if ((param_5->ArrayNum != param_1->ArrayNum) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUVs.Num() == InVertices.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRenderingFacade.cpp"
                           ,0x21b,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((((this->VertexUVAttribute).AttributeArray ==
          (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0) ||
        ((this->VertexUVAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar14 = 0;
    ((this->VertexUVAttribute).AttributeArray)->field_0x8 = 1;
    iVar11 = param_5->ArrayNum;
    pTVar4 = (this->VertexUVAttribute).AttributeArray;
    if (0 < iVar11) {
      uVar19 = uVar14;
      do {
        uVar13 = (uint)uVar14;
        uVar16 = 0;
        if ((int)uVar13 < iVar11) {
          uVar16 = ~uVar13 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar17 = (param_5->AllocatorInstance).Data + uVar19;
        uVar16 = 0;
        if ((int)(iVar10 + uVar13) < *(int *)&pTVar4->field_0x18) {
          uVar16 = ~(iVar10 + uVar13) >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar15 = (FScriptContainerElement *)
                  (uVar19 + (longlong)iVar10 * 0x10 + *(longlong *)&pTVar4->field_0x10);
        if (pFVar15 != pFVar17) {
          if (*(void **)pFVar15 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar15);
          }
          *(undefined8 *)pFVar15 = *(undefined8 *)pFVar17;
          *(undefined8 *)pFVar17 = 0;
          *(undefined4 *)(pFVar15 + 8) = *(undefined4 *)(pFVar17 + 8);
          *(undefined4 *)(pFVar15 + 0xc) = *(undefined4 *)(pFVar17 + 0xc);
          *(undefined8 *)(pFVar17 + 8) = 0;
        }
        iVar11 = param_5->ArrayNum;
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar19 = uVar19 + 0x10;
      } while ((int)(uVar13 + 1) < iVar11);
    }
    lVar18 = 0;
    iVar10 = param_7->ArrayNum;
    if (((this->MaterialPathAttribute).Collection == (FManagedArrayCollection *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x41,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar11 = FManagedArrayCollection::AddElements
                       ((this->MaterialPathAttribute).Collection,iVar10,
                        (this->MaterialPathAttribute).Group);
    iVar10 = param_7->ArrayNum;
    uVar16 = 0;
    if (0 < iVar10) {
      do {
        uVar13 = 0;
        if ((int)uVar16 < iVar10) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar17 = (param_7->AllocatorInstance).Data;
        if ((((this->MaterialPathAttribute).AttributeArray == (TManagedArray<FString> *)0x0) ||
            ((this->MaterialPathAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("AttributeArray!=nullptr && !IsConst()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x74,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar13 = uVar16 + iVar11;
        ((this->MaterialPathAttribute).AttributeArray)->field_0x8 = 1;
        pTVar5 = (this->MaterialPathAttribute).AttributeArray;
        uVar12 = 0;
        if ((int)uVar13 < *(int *)&pTVar5->field_0x18) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar1 = *(int *)(pFVar17 + lVar18 + 8);
        iVar10 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar10 = 0;
        }
        ::FString::AssignRange
                  ((FString *)((longlong)(int)uVar13 * 0x10 + *(longlong *)&pTVar5->field_0x10),
                   *(wchar_t **)(pFVar17 + lVar18),iVar10);
        iVar10 = param_7->ArrayNum;
        uVar16 = uVar16 + 1;
        lVar18 = lVar18 + 0x10;
      } while ((int)uVar16 < iVar10);
    }
    if ((param_6->ArrayNum != param_2->ArrayNum) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InMaterialIDs.Num() == InIndices.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRenderingFacade.cpp"
                           ,0x22a,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((((this->MaterialIDAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
        ((this->MaterialIDAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar14 = 0;
    ((this->MaterialIDAttribute).AttributeArray)->field_0x8 = 1;
    iVar10 = param_6->ArrayNum;
    pTVar6 = (this->MaterialIDAttribute).AttributeArray;
    if (0 < iVar10) {
      uVar19 = uVar14;
      do {
        uVar13 = (uint)uVar14;
        uVar16 = 0;
        if ((int)uVar13 < iVar10) {
          uVar16 = ~uVar13 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = *(int *)((param_6->AllocatorInstance).Data + uVar19);
        uVar16 = 0;
        if ((int)(iVar9 + uVar13) < *(int *)&pTVar6->field_0x18) {
          uVar16 = ~(iVar9 + uVar13) >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar18 = (longlong)iVar9 * 4 + uVar19;
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar19 = uVar19 + 4;
        *(int *)(lVar18 + *(longlong *)&pTVar6->field_0x10) = iVar10 + iVar11;
        iVar10 = param_6->ArrayNum;
      } while ((int)(uVar13 + 1) < iVar10);
    }
  }
  return;
}

// AddSurface @ 143f9af60

void __thiscall
GeometryCollection::Facades::FRenderingFacade::AddSurface
          (FRenderingFacade *this,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  FManagedArrayCollection **ppFVar2;
  int *piVar3;
  TManagedArray<UE::Math::TVector<float>_> *pTVar4;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRenderingFacade.cpp"
                         ,0x1ea,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar7 = IsValid(this);
  if (bVar7) {
    if ((((this->VertexAttribute).AttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0)
        || ((this->VertexAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    ppFVar2 = &(this->IndicesAttribute).Collection;
    ((this->VertexAttribute).AttributeArray)->field_0x8 = 1;
    pTVar4 = (this->VertexAttribute).AttributeArray;
    if ((((this->IndicesAttribute).AttributeArray ==
          (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) ||
        (*ppFVar2 == (FManagedArrayCollection *)0x0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    piVar1 = &param_2->ArrayNum;
    ((this->IndicesAttribute).AttributeArray)->field_0x8 = 1;
    pTVar5 = (this->IndicesAttribute).AttributeArray;
    iVar9 = *piVar1;
    if ((*ppFVar2 == (FManagedArrayCollection *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x41,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = FManagedArrayCollection::AddElements(*ppFVar2,iVar9,(this->IndicesAttribute).Group);
    iVar9 = param_1->ArrayNum;
    if (((this->VertexAttribute).Collection == (FManagedArrayCollection *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x41,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = FManagedArrayCollection::AddElements
                      ((this->VertexAttribute).Collection,iVar9,(this->VertexAttribute).Group);
    lVar13 = (longlong)(int)uVar8 * 0xc;
    memmove((void *)(*(longlong *)&pTVar5->field_0x10 + lVar13),(param_2->AllocatorInstance).Data,
            (longlong)*piVar1 * 0xc);
    uVar12 = uVar8;
    if ((int)uVar8 < (int)(*piVar1 + uVar8)) {
      do {
        uVar11 = ~uVar12 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar12 < *(int *)&pTVar5->field_0x18) {
          uVar10 = uVar11;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        piVar3 = (int *)(*(longlong *)&pTVar5->field_0x10 + lVar13);
        *piVar3 = *piVar3 + iVar9;
        uVar10 = 0;
        if ((int)uVar12 < *(int *)&pTVar5->field_0x18) {
          uVar10 = uVar11;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        piVar3 = (int *)(*(longlong *)&pTVar5->field_0x10 + 4 + lVar13);
        *piVar3 = *piVar3 + iVar9;
        uVar10 = 0;
        if ((int)uVar12 < *(int *)&pTVar5->field_0x18) {
          uVar10 = uVar11;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar12 = uVar12 + 1;
        piVar3 = (int *)(*(longlong *)&pTVar5->field_0x10 + 8 + lVar13);
        *piVar3 = *piVar3 + iVar9;
        lVar13 = lVar13 + 0xc;
      } while ((int)uVar12 < (int)(*piVar1 + uVar8));
    }
    lVar13 = (longlong)iVar9 * 0xc;
    memmove((void *)(*(longlong *)&pTVar4->field_0x10 + lVar13),(param_1->AllocatorInstance).Data,
            (longlong)param_1->ArrayNum * 0xc);
    if ((((this->VertexNormalAttribute).AttributeArray ==
          (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
        ((this->VertexNormalAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    ((this->VertexNormalAttribute).AttributeArray)->field_0x8 = 1;
    memmove((void *)(*(longlong *)&((this->VertexNormalAttribute).AttributeArray)->field_0x10 +
                    lVar13),(param_3->AllocatorInstance).Data,(longlong)param_3->ArrayNum * 0xc);
    if ((((this->VertexColorAttribute).AttributeArray == (TManagedArray<FLinearColor> *)0x0) ||
        ((this->VertexColorAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    ((this->VertexColorAttribute).AttributeArray)->field_0x8 = 1;
    memmove((void *)((longlong)iVar9 * 0x10 +
                    *(longlong *)&((this->VertexColorAttribute).AttributeArray)->field_0x10),
            (param_4->AllocatorInstance).Data,(longlong)param_4->ArrayNum << 4);
  }
  return;
}

// AddSurfaceBoneWeightsAndIndices @ 143f9b3a0

void __thiscall
GeometryCollection::Facades::FRenderingFacade::AddSurfaceBoneWeightsAndIndices
          (FRenderingFacade *this,
          TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  TManagedArray<FString> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar8;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRenderingFacade.cpp"
                         ,0x1cd,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = IsValid(this);
  if (bVar4) {
    pTVar2 = (this->GeometryNameAttribute).ConstAttributeArray;
    if (pTVar2 == (TManagedArray<FString> *)0x0) {
      iVar5 = FManagedArrayCollection::NumElements
                        ((this->GeometryNameAttribute).ConstCollection,
                         (this->GeometryNameAttribute).Group);
    }
    else {
      iVar5 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
    }
    if ((iVar5 + -1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("GeomIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRenderingFacade.cpp"
                           ,0x1d1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar7 = (uint *)TManagedArrayAccessor<int>::operator[](&this->VertexStartAttribute,iVar5 + -1);
    iVar5 = param_2->ArrayNum;
    uVar1 = *puVar7;
    uVar16 = (ulonglong)(int)uVar1;
    if (param_1->ArrayNum == iVar5) {
      lVar12 = 0;
      TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::Add
                (&this->BoneWeightsAttribute,MakePersistent,(FName)0x0);
      TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::Add
                (&this->BoneIndicesAttribute,MakePersistent,(FName)0x0);
      pTVar8 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::Modify
                         (&this->BoneWeightsAttribute);
      pTVar9 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::Modify
                         (&this->BoneIndicesAttribute);
      uVar17 = 0;
      if (0 < iVar5) {
        lVar14 = 0;
        lVar10 = uVar16 * 0x10;
        do {
          uVar6 = 0;
          if ((int)uVar17 < param_1->ArrayNum) {
            uVar6 = ~uVar17 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar15 = (int)uVar16 + uVar17;
          pFVar13 = (param_1->AllocatorInstance).Data + lVar14;
          uVar6 = 0;
          if ((int)uVar15 < *(int *)&pTVar8->field_0x18) {
            uVar6 = ~uVar15 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar11 = (FScriptContainerElement *)(*(longlong *)&pTVar8->field_0x10 + lVar10 + lVar14);
          if (pFVar11 != pFVar13) {
            if (*(void **)pFVar11 != (void *)0x0) {
              FMemory::Free(*(void **)pFVar11);
            }
            *(undefined8 *)pFVar11 = *(undefined8 *)pFVar13;
            *(undefined8 *)pFVar13 = 0;
            *(undefined4 *)(pFVar11 + 8) = *(undefined4 *)(pFVar13 + 8);
            *(undefined4 *)(pFVar11 + 0xc) = *(undefined4 *)(pFVar13 + 0xc);
            *(undefined8 *)(pFVar13 + 8) = 0;
          }
          uVar6 = 0;
          if ((int)uVar17 < param_2->ArrayNum) {
            uVar6 = ~uVar17 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar13 = (param_2->AllocatorInstance).Data + lVar14;
          uVar6 = 0;
          if ((int)uVar15 < *(int *)&pTVar9->field_0x18) {
            uVar6 = ~uVar15 >> 0x1f;
          }
          if (uVar6 == 0) {
            uVar16 = (ulonglong)(int)uVar1;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            uVar16 = (ulonglong)uVar1;
          }
          pFVar11 = (FScriptContainerElement *)(lVar10 + lVar14 + *(longlong *)&pTVar9->field_0x10);
          if (pFVar11 != pFVar13) {
            if (*(void **)pFVar11 != (void *)0x0) {
              FMemory::Free(*(void **)pFVar11);
            }
            *(undefined8 *)pFVar11 = *(undefined8 *)pFVar13;
            *(undefined8 *)pFVar13 = 0;
            *(undefined4 *)(pFVar11 + 8) = *(undefined4 *)(pFVar13 + 8);
            *(undefined4 *)(pFVar11 + 0xc) = *(undefined4 *)(pFVar13 + 0xc);
            *(undefined8 *)(pFVar13 + 8) = 0;
          }
          uVar17 = uVar17 + 1;
          lVar12 = lVar12 + 1;
          lVar14 = lVar14 + 0x10;
        } while (lVar12 < iVar5);
      }
    }
  }
  return;
}

// AddTetrahedron @ 143f9b740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
GeometryCollection::Facades::FRenderingFacade::AddTetrahedron
          (FRenderingFacade *this,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TIntVector4<int> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStackY_228 [32];
  ForAnyElementType local_1f8;
  int local_1f0 [2];
  ForAnyElementType local_1e8;
  int local_1e0 [2];
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined1 local_168 [16];
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined1 local_118 [16];
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1f8.Data = (FScriptContainerElement *)0x0;
  local_1f0[0] = 0;
  local_1f0[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,4,&local_1f8,local_1f0,local_1f0 + 1);
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0[0] = 0;
  local_1e0[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,4,&local_1e8,local_1e0,local_1e0 + 1);
  uVar7 = (param_2->field0_0x0)._s_0.X;
  uVar13 = 0;
  if ((int)uVar7 < param_1->ArrayNum) {
    uVar13 = ~uVar7 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar9 = (param_1->AllocatorInstance).Data;
  uVar6 = *(undefined8 *)(pFVar9 + (longlong)(int)uVar7 * 0xc);
  fVar8 = *(float *)(pFVar9 + (longlong)(int)uVar7 * 0xc + 8);
  if ((local_1f0[0] < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(undefined8 *)local_1f8.Data = uVar6;
  *(float *)(local_1f8.Data + 8) = fVar8;
  uVar7 = (param_2->field0_0x0)._s_0.Y;
  uVar13 = 0;
  if ((int)uVar7 < param_1->ArrayNum) {
    uVar13 = ~uVar7 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar9 = (param_1->AllocatorInstance).Data;
  uVar6 = *(undefined8 *)(pFVar9 + (longlong)(int)uVar7 * 0xc);
  fVar8 = *(float *)(pFVar9 + (longlong)(int)uVar7 * 0xc + 8);
  if ((local_1f0[0] < 2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(undefined8 *)(local_1f8.Data + 0xc) = uVar6;
  *(float *)(local_1f8.Data + 0x14) = fVar8;
  uVar7 = (param_2->field0_0x0)._s_0.Z;
  uVar13 = 0;
  if ((int)uVar7 < param_1->ArrayNum) {
    uVar13 = ~uVar7 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar9 = (param_1->AllocatorInstance).Data;
  uVar6 = *(undefined8 *)(pFVar9 + (longlong)(int)uVar7 * 0xc);
  fVar8 = *(float *)(pFVar9 + (longlong)(int)uVar7 * 0xc + 8);
  if ((local_1f0[0] < 3) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(undefined8 *)(local_1f8.Data + 0x18) = uVar6;
  *(float *)(local_1f8.Data + 0x20) = fVar8;
  uVar7 = (param_2->field0_0x0)._s_0.W;
  uVar13 = 0;
  if ((int)uVar7 < param_1->ArrayNum) {
    uVar13 = ~uVar7 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar9 = (param_1->AllocatorInstance).Data;
  uVar6 = *(undefined8 *)(pFVar9 + (longlong)(int)uVar7 * 0xc);
  fVar8 = *(float *)(pFVar9 + (longlong)(int)uVar7 * 0xc + 8);
  if ((local_1f0[0] < 4) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(undefined8 *)(local_1f8.Data + 0x24) = uVar6;
  *(float *)(local_1f8.Data + 0x2c) = fVar8;
  if (local_1f0[0] < 3) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  fVar8 = *(float *)(local_1f8.Data + 0x18);
  fVar1 = *(float *)(local_1f8.Data + 0x1c);
  fVar2 = *(float *)(local_1f8.Data + 0x20);
  iVar14 = local_1f0[0];
  if (local_1f0[0] < 2) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar14 = local_1f0[0];
  }
  fVar3 = *(float *)(local_1f8.Data + 0xc);
  uVar6 = *(undefined8 *)(local_1f8.Data + 0x10);
  dVar11 = (double)(float)((ulonglong)uVar6 >> 0x20);
  if ((iVar14 < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_188 = (double)*(float *)local_1f8.Data;
  local_180 = (double)*(float *)(local_1f8.Data + 4);
  local_178 = (double)*(float *)(local_1f8.Data + 8);
  local_168._8_4_ = SUB84(dVar11,0);
  local_168._0_8_ = (double)(float)uVar6;
  local_168._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  local_170 = (double)fVar3;
  local_158 = (double)fVar8;
  local_150 = (double)fVar1;
  local_148 = (double)fVar2;
  AddTriangle(this,(TTriangle<double> *)&local_188);
  if (local_1f0[0] < 2) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  fVar8 = *(float *)(local_1f8.Data + 0xc);
  fVar1 = *(float *)(local_1f8.Data + 0x10);
  fVar2 = *(float *)(local_1f8.Data + 0x14);
  iVar14 = local_1f0[0];
  if (local_1f0[0] < 4) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar14 = local_1f0[0];
  }
  fVar3 = *(float *)(local_1f8.Data + 0x24);
  uVar6 = *(undefined8 *)(local_1f8.Data + 0x28);
  dVar11 = (double)(float)((ulonglong)uVar6 >> 0x20);
  if ((iVar14 < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_138 = (double)*(float *)local_1f8.Data;
  local_130 = (double)*(float *)(local_1f8.Data + 4);
  local_128 = (double)*(float *)(local_1f8.Data + 8);
  local_118._8_4_ = SUB84(dVar11,0);
  local_118._0_8_ = (double)(float)uVar6;
  local_118._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  local_120 = (double)fVar3;
  local_108 = (double)fVar8;
  local_100 = (double)fVar1;
  local_f8 = (double)fVar2;
  AddTriangle(this,(TTriangle<double> *)&local_138);
  if (local_1f0[0] < 4) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  fVar8 = *(float *)(local_1f8.Data + 0x24);
  fVar1 = *(float *)(local_1f8.Data + 0x28);
  fVar2 = *(float *)(local_1f8.Data + 0x2c);
  iVar14 = local_1f0[0];
  if (local_1f0[0] < 1) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar14 = local_1f0[0];
  }
  fVar3 = *(float *)local_1f8.Data;
  fVar4 = *(float *)(local_1f8.Data + 4);
  fVar5 = *(float *)(local_1f8.Data + 8);
  if ((iVar14 < 3) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_1d8 = (double)*(float *)(local_1f8.Data + 0x18);
  local_1d0 = (double)*(float *)(local_1f8.Data + 0x1c);
  local_1c8 = (double)*(float *)(local_1f8.Data + 0x20);
  local_1c0 = (double)fVar3;
  local_1b8 = (double)fVar4;
  local_1b0 = (double)fVar5;
  local_1a8 = (double)fVar8;
  local_1a0 = (double)fVar1;
  local_198 = (double)fVar2;
  AddTriangle(this,(TTriangle<double> *)&local_1d8);
  if (local_1f0[0] < 3) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  fVar8 = *(float *)(local_1f8.Data + 0x18);
  fVar1 = *(float *)(local_1f8.Data + 0x1c);
  fVar2 = *(float *)(local_1f8.Data + 0x20);
  iVar14 = local_1f0[0];
  if (local_1f0[0] < 2) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar14 = local_1f0[0];
  }
  fVar3 = *(float *)(local_1f8.Data + 0xc);
  uVar6 = *(undefined8 *)(local_1f8.Data + 0x10);
  dVar11 = (double)(float)((ulonglong)uVar6 >> 0x20);
  if ((iVar14 < 4) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_e8 = (double)*(float *)(local_1f8.Data + 0x24);
  local_e0 = (double)*(float *)(local_1f8.Data + 0x28);
  local_d8 = (double)*(float *)(local_1f8.Data + 0x2c);
  local_c8._8_4_ = SUB84(dVar11,0);
  local_c8._0_8_ = (double)(float)uVar6;
  local_c8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  local_d0 = (double)fVar3;
  local_b8 = (double)fVar8;
  local_b0 = (double)fVar1;
  local_a8 = (double)fVar2;
  AddTriangle(this,(TTriangle<double> *)&local_e8);
  if (local_1e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data);
  }
  if (local_1f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data);
  }
  return;
}

// AddTetrahedrons @ 143f9c020

void __thiscall
GeometryCollection::Facades::FRenderingFacade::AddTetrahedrons
          (FRenderingFacade *this,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TIntVector4<int>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_2->ArrayNum;
  uVar4 = 0;
  if (0 < iVar5) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < iVar5) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      AddTetrahedron(this,param_1,
                     (TIntVector4<int> *)
                     ((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x10));
      iVar5 = param_2->ArrayNum;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar5);
  }
  return;
}

// AddTriangle @ 143f9c0e0

void __thiscall
GeometryCollection::Facades::FRenderingFacade::AddTriangle
          (FRenderingFacade *this,TTriangle<double> *param_1)

{
  FManagedArrayCollection **ppFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TManagedArray<UE::Math::TVector<float>_> *pTVar5;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar6;
  longlong lVar7;
  code *pcVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsConst()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRenderingFacade.cpp"
                        ,0xe4,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  bVar10 = IsValid(this);
  if (bVar10) {
    if (((this->VertexAttribute).AttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0)
       || ((this->VertexAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    ppFVar1 = &(this->IndicesAttribute).Collection;
    ((this->VertexAttribute).AttributeArray)->field_0x8 = 1;
    pTVar5 = (this->VertexAttribute).AttributeArray;
    if (((this->IndicesAttribute).AttributeArray ==
         (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) ||
       (*ppFVar1 == (FManagedArrayCollection *)0x0)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    ((this->IndicesAttribute).AttributeArray)->field_0x8 = 1;
    pTVar6 = (this->IndicesAttribute).AttributeArray;
    if (*ppFVar1 == (FManagedArrayCollection *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x41,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    uVar11 = FManagedArrayCollection::AddElements(*ppFVar1,1,(this->IndicesAttribute).Group);
    lVar15 = (longlong)(int)uVar11;
    if ((this->VertexAttribute).Collection == (FManagedArrayCollection *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x41,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    uVar12 = FManagedArrayCollection::AddElements
                       ((this->VertexAttribute).Collection,3,(this->VertexAttribute).Group);
    lVar13 = (longlong)(int)uVar12;
    uVar14 = uVar12 + 1;
    uVar9 = 0;
    if ((int)uVar11 < *(int *)&pTVar6->field_0x18) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    lVar7 = *(longlong *)&pTVar6->field_0x10;
    *(uint *)(lVar7 + lVar15 * 0xc) = uVar12;
    *(uint *)(lVar7 + 4 + lVar15 * 0xc) = uVar14;
    *(uint *)(lVar7 + 8 + lVar15 * 0xc) = uVar12 + 2;
    dVar2 = *(double *)param_1->ABC;
    dVar3 = *(double *)&param_1->ABC[0].field_0x8;
    dVar4 = *(double *)&param_1->ABC[0].field_0x10;
    uVar11 = 0;
    if ((int)uVar12 < *(int *)&pTVar5->field_0x18) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    lVar15 = *(longlong *)&pTVar5->field_0x10;
    *(float *)(lVar15 + lVar13 * 0xc) = (float)dVar2;
    *(float *)(lVar15 + 4 + lVar13 * 0xc) = (float)dVar3;
    *(float *)(lVar15 + 8 + lVar13 * 0xc) = (float)dVar4;
    dVar2 = *(double *)(param_1->ABC + 1);
    dVar3 = *(double *)&param_1->ABC[1].field_0x8;
    dVar4 = *(double *)&param_1->ABC[1].field_0x10;
    uVar11 = 0;
    if ((int)uVar14 < *(int *)&pTVar5->field_0x18) {
      uVar11 = ~uVar14 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    lVar13 = (longlong)(int)uVar14;
    uVar12 = uVar12 + 2;
    lVar15 = *(longlong *)&pTVar5->field_0x10;
    *(float *)(lVar15 + lVar13 * 0xc) = (float)dVar2;
    *(float *)(lVar15 + 4 + lVar13 * 0xc) = (float)dVar3;
    *(float *)(lVar15 + 8 + lVar13 * 0xc) = (float)dVar4;
    dVar2 = *(double *)(param_1->ABC + 2);
    dVar3 = *(double *)&param_1->ABC[2].field_0x8;
    dVar4 = *(double *)&param_1->ABC[2].field_0x10;
    uVar11 = 0;
    if ((int)uVar12 < *(int *)&pTVar5->field_0x18) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    lVar13 = (longlong)(int)uVar12;
    lVar15 = *(longlong *)&pTVar5->field_0x10;
    *(float *)(lVar15 + lVar13 * 0xc) = (float)dVar2;
    *(float *)(lVar15 + 4 + lVar13 * 0xc) = (float)dVar3;
    *(float *)(lVar15 + 8 + lVar13 * 0xc) = (float)dVar4;
  }
  return;
}

// BuildMeshSections @ 143f9ee00

TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FRenderingFacade::BuildMeshSections
          (FRenderingFacade *this,
          TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *pTVar4;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRenderingFacade.cpp"
                       ,0x236,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  FGeometryCollectionSection::BuildMeshSections
            (__return_storage_ptr__,this->ConstCollection,param_1,param_2,param_3);
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// CanRenderSurface @ 143fa48d0

bool __thiscall
GeometryCollection::Facades::FRenderingFacade::CanRenderSurface(FRenderingFacade *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  bVar2 = IsValid(this);
  if (bVar2) {
    if ((this->IndicesAttribute).ConstAttributeArray ==
        (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    iVar4 = (**(code **)(*(longlong *)(this->IndicesAttribute).ConstAttributeArray + 0x60))();
    if (iVar4 != 0) {
      if ((this->VertexAttribute).ConstAttributeArray ==
          (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      iVar4 = (**(code **)(*(longlong *)(this->VertexAttribute).ConstAttributeArray + 0x60))();
      if (iVar4 != 0) {
        return true;
      }
    }
  }
  return false;
}

// DefineSchema @ 143fa9b50

void __thiscall GeometryCollection::Facades::FRenderingFacade::DefineSchema(FRenderingFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRenderingFacade.cpp"
                       ,0x4d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            (&this->VertexAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->VertexSelectionAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->VertexToGeometryIndexAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->VertexHitProxyIndexAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            (&this->VertexNormalAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<FLinearColor>::Add(&this->VertexColorAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::Add
            (&this->VertexUVAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::Add
            (&this->IndicesAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->MaterialIDAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<FGeometryCollectionSection>::Add
            (&this->TriangleSectionAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<FString>::Add(&this->MaterialPathAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<FString>::Add(&this->GeometryNameAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TTransform<double>_>::Add
            (&this->GeometryTransformAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->GeometryHitProxyIndexAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->VertexStartAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->VertexCountAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->IndicesStartAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->IndicesCountAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->MaterialStartAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->MaterialCountAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->GeometrySelectionAttribute,MakePersistent,(FName)0x0);
  return;
}

// EndGeometryGroup @ 143faa9f0

void __thiscall
GeometryCollection::Facades::FRenderingFacade::EndGeometryGroup(FRenderingFacade *this,int param_1)

{
  int iVar1;
  TManagedArray<FString> *pTVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
  TManagedArray<int> *pTVar4;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  TManagedArray<int> *pTVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  
  lVar16 = (longlong)param_1;
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRenderingFacade.cpp"
                       ,0x252,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  bVar7 = IsValid(this);
  if (bVar7) {
    pTVar2 = (this->GeometryNameAttribute).ConstAttributeArray;
    if (pTVar2 == (TManagedArray<FString> *)0x0) {
      iVar8 = FManagedArrayCollection::NumElements
                        ((this->GeometryNameAttribute).ConstCollection,
                         (this->GeometryNameAttribute).Group);
    }
    else {
      iVar8 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
    }
    if (iVar8 + -1 != param_1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeometryNameAttribute.Num()-1 == InGeomIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRenderingFacade.cpp"
                         ,0x255,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((this->VertexStartAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar11 = (this->VertexStartAttribute).ConstAttributeArray;
    uVar15 = (uint)~param_1 >> 0x1f;
    uVar13 = 0;
    uVar9 = uVar13;
    if (param_1 < *(int *)&pTVar11->field_0x18) {
      uVar9 = uVar15;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar12 = *(longlong *)&pTVar11->field_0x10;
    pTVar3 = (this->VertexAttribute).ConstAttributeArray;
    if (pTVar3 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      iVar8 = FManagedArrayCollection::NumElements
                        ((this->VertexAttribute).ConstCollection,(this->VertexAttribute).Group);
    }
    else {
      iVar8 = (**(code **)(*(longlong *)pTVar3 + 0x60))();
    }
    uVar9 = 0;
    if (*(int *)(lVar12 + lVar16 * 4) < iVar8) {
      if ((this->VertexStartAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pTVar3 = (this->VertexAttribute).ConstAttributeArray;
      pTVar11 = (this->VertexStartAttribute).ConstAttributeArray;
      if (pTVar3 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        iVar8 = FManagedArrayCollection::NumElements
                          ((this->VertexAttribute).ConstCollection,(this->VertexAttribute).Group);
      }
      else {
        iVar8 = (**(code **)(*(longlong *)pTVar3 + 0x60))();
      }
      uVar10 = uVar13;
      if (param_1 < *(int *)&pTVar11->field_0x18) {
        uVar10 = uVar15;
      }
      if (uVar10 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar1 = *(int *)(*(longlong *)&pTVar11->field_0x10 + lVar16 * 4);
      pTVar11 = TManagedArrayAccessor<int>::Modify(&this->VertexCountAttribute);
      uVar10 = uVar13;
      if (param_1 < *(int *)&pTVar11->field_0x18) {
        uVar10 = uVar15;
      }
      if (uVar10 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(int *)(*(longlong *)&pTVar11->field_0x10 + lVar16 * 4) = iVar8 - iVar1;
      pTVar11 = TManagedArrayAccessor<int>::Modify(&this->VertexToGeometryIndexAttribute);
      if ((this->VertexStartAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pTVar4 = (this->VertexStartAttribute).ConstAttributeArray;
      if (param_1 < *(int *)&pTVar4->field_0x18) {
        uVar13 = uVar15;
      }
      if (uVar13 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      uVar14 = (ulonglong)*(int *)(*(longlong *)&pTVar4->field_0x10 + lVar16 * 4);
      lVar12 = uVar14 * 4;
      while( true ) {
        pTVar3 = (this->VertexAttribute).ConstAttributeArray;
        if (pTVar3 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
          iVar8 = FManagedArrayCollection::NumElements
                            ((this->VertexAttribute).ConstCollection,(this->VertexAttribute).Group);
        }
        else {
          iVar8 = (**(code **)(*(longlong *)pTVar3 + 0x60))();
        }
        uVar13 = (uint)uVar14;
        if (iVar8 <= (int)uVar13) break;
        uVar10 = uVar9;
        if ((int)uVar13 < *(int *)&pTVar11->field_0x18) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        *(int *)(lVar12 + *(longlong *)&pTVar11->field_0x10) = param_1;
        lVar12 = lVar12 + 4;
      }
    }
    else {
      pTVar3 = (this->VertexAttribute).ConstAttributeArray;
      if (pTVar3 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        iVar8 = FManagedArrayCollection::NumElements
                          ((this->VertexAttribute).ConstCollection,(this->VertexAttribute).Group);
      }
      else {
        iVar8 = (**(code **)(*(longlong *)pTVar3 + 0x60))();
      }
      pTVar11 = TManagedArrayAccessor<int>::Modify(&this->VertexStartAttribute);
      uVar13 = uVar9;
      if (param_1 < *(int *)&pTVar11->field_0x18) {
        uVar13 = uVar15;
      }
      if (uVar13 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(int *)(*(longlong *)&pTVar11->field_0x10 + lVar16 * 4) = iVar8;
    }
    if ((this->IndicesStartAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar11 = (this->IndicesStartAttribute).ConstAttributeArray;
    uVar13 = uVar9;
    if (param_1 < *(int *)&pTVar11->field_0x18) {
      uVar13 = uVar15;
    }
    if (uVar13 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar12 = *(longlong *)&pTVar11->field_0x10;
    pTVar5 = (this->IndicesAttribute).ConstAttributeArray;
    if (pTVar5 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
      iVar8 = FManagedArrayCollection::NumElements
                        ((this->IndicesAttribute).ConstCollection,(this->IndicesAttribute).Group);
    }
    else {
      iVar8 = (**(code **)(*(longlong *)pTVar5 + 0x60))();
    }
    uVar13 = 0;
    if (*(int *)(lVar12 + lVar16 * 4) < iVar8) {
      if ((this->IndicesStartAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pTVar5 = (this->IndicesAttribute).ConstAttributeArray;
      pTVar11 = (this->IndicesStartAttribute).ConstAttributeArray;
      if (pTVar5 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
        iVar8 = FManagedArrayCollection::NumElements
                          ((this->IndicesAttribute).ConstCollection,(this->IndicesAttribute).Group);
      }
      else {
        iVar8 = (**(code **)(*(longlong *)pTVar5 + 0x60))();
      }
      uVar10 = uVar9;
      if (param_1 < *(int *)&pTVar11->field_0x18) {
        uVar10 = uVar15;
      }
      if (uVar10 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar1 = *(int *)(*(longlong *)&pTVar11->field_0x10 + lVar16 * 4);
      if (((this->IndicesCountAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
         ((this->IndicesCountAttribute).Collection == (FManagedArrayCollection *)0x0)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      ((this->IndicesCountAttribute).AttributeArray)->field_0x8 = 1;
      pTVar11 = (this->IndicesCountAttribute).AttributeArray;
      if (param_1 < *(int *)&pTVar11->field_0x18) {
        uVar9 = uVar15;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(int *)(*(longlong *)&pTVar11->field_0x10 + lVar16 * 4) = iVar8 - iVar1;
    }
    else {
      pTVar5 = (this->IndicesAttribute).ConstAttributeArray;
      if (pTVar5 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
        iVar8 = FManagedArrayCollection::NumElements
                          ((this->IndicesAttribute).ConstCollection,(this->IndicesAttribute).Group);
      }
      else {
        iVar8 = (**(code **)(*(longlong *)pTVar5 + 0x60))();
      }
      if (((this->IndicesStartAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
         ((this->IndicesStartAttribute).Collection == (FManagedArrayCollection *)0x0)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      ((this->IndicesStartAttribute).AttributeArray)->field_0x8 = 1;
      pTVar11 = (this->IndicesStartAttribute).AttributeArray;
      uVar9 = uVar13;
      if (param_1 < *(int *)&pTVar11->field_0x18) {
        uVar9 = uVar15;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(int *)(*(longlong *)&pTVar11->field_0x10 + lVar16 * 4) = iVar8;
    }
    if ((this->MaterialStartAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pTVar11 = (this->MaterialStartAttribute).ConstAttributeArray;
    uVar9 = uVar13;
    if (param_1 < *(int *)&pTVar11->field_0x18) {
      uVar9 = uVar15;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar12 = *(longlong *)&pTVar11->field_0x10;
    pTVar2 = (this->MaterialPathAttribute).ConstAttributeArray;
    if (pTVar2 == (TManagedArray<FString> *)0x0) {
      iVar8 = FManagedArrayCollection::NumElements
                        ((this->MaterialPathAttribute).ConstCollection,
                         (this->MaterialPathAttribute).Group);
    }
    else {
      iVar8 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
    }
    if (*(int *)(lVar12 + lVar16 * 4) < iVar8) {
      if ((this->MaterialStartAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pTVar2 = (this->MaterialPathAttribute).ConstAttributeArray;
      pTVar11 = (this->MaterialStartAttribute).ConstAttributeArray;
      if (pTVar2 == (TManagedArray<FString> *)0x0) {
        iVar8 = FManagedArrayCollection::NumElements
                          ((this->MaterialPathAttribute).ConstCollection,
                           (this->MaterialPathAttribute).Group);
      }
      else {
        iVar8 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
      }
      uVar9 = uVar13;
      if (param_1 < *(int *)&pTVar11->field_0x18) {
        uVar9 = uVar15;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = iVar8 - *(int *)(*(longlong *)&pTVar11->field_0x10 + lVar16 * 4);
      if (((this->MaterialCountAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
         ((this->MaterialCountAttribute).Collection == (FManagedArrayCollection *)0x0)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      ((this->MaterialCountAttribute).AttributeArray)->field_0x8 = 1;
      pTVar11 = (this->MaterialCountAttribute).AttributeArray;
    }
    else {
      pTVar2 = (this->MaterialPathAttribute).ConstAttributeArray;
      if (pTVar2 == (TManagedArray<FString> *)0x0) {
        iVar8 = FManagedArrayCollection::NumElements
                          ((this->MaterialPathAttribute).ConstCollection,
                           (this->MaterialPathAttribute).Group);
      }
      else {
        iVar8 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
      }
      if (((this->MaterialStartAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
         ((this->MaterialStartAttribute).Collection == (FManagedArrayCollection *)0x0)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      ((this->MaterialStartAttribute).AttributeArray)->field_0x8 = 1;
      pTVar11 = (this->MaterialStartAttribute).AttributeArray;
    }
    if (param_1 < *(int *)&pTVar11->field_0x18) {
      uVar13 = uVar15;
    }
    if (uVar13 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    *(int *)(*(longlong *)&pTVar11->field_0x10 + lVar16 * 4) = iVar8;
  }
  return;
}

// GetGeometryNameToIndexMap @ 143fb09d0

TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> * __thiscall
GeometryCollection::Facades::FRenderingFacade::GetGeometryNameToIndexMap
          (FRenderingFacade *this,
          TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          *__return_storage_ptr__)

{
  TManagedArray<FString> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar6;
  longlong lVar7;
  uint local_res8 [4];
  longlong local_28;
  uint *local_20;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_res8[0] = 0;
  while( true ) {
    pTVar1 = (this->GeometryNameAttribute).ConstAttributeArray;
    if (pTVar1 == (TManagedArray<FString> *)0x0) {
      iVar4 = FManagedArrayCollection::NumElements
                        ((this->GeometryNameAttribute).ConstCollection,
                         (this->GeometryNameAttribute).Group);
    }
    else {
      iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    if (iVar4 <= (int)local_res8[0]) break;
    if ((this->GeometryNameAttribute).ConstAttributeArray == (TManagedArray<FString> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                  *)(*pcVar2)();
        return pTVar6;
      }
    }
    lVar7 = (longlong)(int)local_res8[0];
    pTVar1 = (this->GeometryNameAttribute).ConstAttributeArray;
    uVar5 = 0;
    if ((int)local_res8[0] < *(int *)&pTVar1->field_0x18) {
      uVar5 = ~local_res8[0] >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                  *)(*pcVar2)();
        return pTVar6;
      }
    }
    local_28 = lVar7 * 0x10 + *(longlong *)&pTVar1->field_0x10;
    local_20 = local_res8;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FString_const_&,int_const_&>_>
              ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                *)__return_storage_ptr__,
               (TPairInitializer<FString_const_&,int_const_&> *)(local_res8 + 2),(bool *)&local_28);
    local_res8[0] = local_res8[0] + 1;
  }
  return __return_storage_ptr__;
}

// IsValid @ 143fb7e70

bool __thiscall GeometryCollection::Facades::FRenderingFacade::IsValid(FRenderingFacade *this)

{
  if ((((((((this->VertexAttribute).ConstAttributeArray !=
            (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
          ((this->VertexToGeometryIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0))
         && ((this->VertexSelectionAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
        (((this->VertexHitProxyIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
         ((this->IndicesAttribute).ConstAttributeArray !=
          (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0)))) &&
       (((this->MaterialIDAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
        (((this->TriangleSectionAttribute).ConstAttributeArray !=
          (TManagedArray<FGeometryCollectionSection> *)0x0 &&
         ((this->GeometryNameAttribute).ConstAttributeArray != (TManagedArray<FString> *)0x0))))))
      && ((this->GeometryHitProxyIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0))
     && ((((((this->VertexStartAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
            ((this->VertexCountAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
           ((this->IndicesStartAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
          ((((this->IndicesCountAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
            ((this->GeometrySelectionAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0))
           && (((this->VertexColorAttribute).ConstAttributeArray !=
                (TManagedArray<FLinearColor> *)0x0 &&
               (((this->VertexNormalAttribute).ConstAttributeArray !=
                 (TManagedArray<UE::Math::TVector<float>_> *)0x0 &&
                ((this->VertexUVAttribute).ConstAttributeArray !=
                 (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)
                 0x0)))))))) &&
         ((this->MaterialPathAttribute).ConstAttributeArray != (TManagedArray<FString> *)0x0)))) {
    return true;
  }
  return false;
}

// NumTriangles @ 143fb92b0

int __thiscall GeometryCollection::Facades::FRenderingFacade::NumTriangles(FRenderingFacade *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = IsValid(this);
  if (!bVar2) {
    return 0;
  }
  if ((this->IndicesAttribute).ConstAttributeArray ==
      (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x67,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143fb9301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(*(longlong *)(this->IndicesAttribute).ConstAttributeArray + 0x60))();
  return iVar3;
}

// NumVerticesOnSelectedGeometry @ 143fb9320

int __thiscall
GeometryCollection::Facades::FRenderingFacade::NumVerticesOnSelectedGeometry(FRenderingFacade *this)

{
  TManagedArray<int> *pTVar1;
  TManagedArray<int> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  
  if (((this->GeometrySelectionAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pTVar1 = (this->GeometrySelectionAttribute).ConstAttributeArray;
  if (((this->VertexCountAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pTVar2 = (this->VertexCountAttribute).ConstAttributeArray;
  iVar9 = 0;
  uVar7 = 0;
  iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)&pTVar1->field_0x18) {
        uVar6 = ~uVar7 >> 0x1f;
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
      if (*(int *)(*(longlong *)&pTVar1->field_0x10 + lVar8) != 0) {
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
          iVar5 = (*pcVar3)();
          return iVar5;
        }
        iVar9 = iVar9 + *(int *)(*(longlong *)&pTVar2->field_0x10 + lVar8);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 4;
      iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    } while ((int)uVar7 < iVar5);
  }
  return iVar9;
}

// SetGroupTransform @ 143fc8490

void __thiscall
GeometryCollection::Facades::FRenderingFacade::SetGroupTransform
          (FRenderingFacade *this,int param_1,TTransform<double> *param_2)

{
  double *pdVar1;
  TManagedArray<FString> *pTVar2;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
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
  bool bVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsConst()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRenderingFacade.cpp"
                        ,0x27c,L"");
    if (bVar18) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  bVar18 = IsValid(this);
  if (bVar18) {
    pTVar2 = (this->GeometryNameAttribute).ConstAttributeArray;
    if (pTVar2 == (TManagedArray<FString> *)0x0) {
      iVar19 = FManagedArrayCollection::NumElements
                         ((this->GeometryNameAttribute).ConstCollection,
                          (this->GeometryNameAttribute).Group);
    }
    else {
      iVar19 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
    }
    if (iVar19 + -1 != param_1) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("GeometryNameAttribute.Num() - 1 == InGeometryGroupIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRenderingFacade.cpp"
                          ,0x280,L"Attempted to modify a previously closed geometry group transform"
                         );
      if (bVar18) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    dVar6 = (param_2->Rotation).XY.m128d_f64[0];
    dVar7 = (param_2->Rotation).XY.m128d_f64[1];
    dVar8 = (param_2->Rotation).ZW.m128d_f64[0];
    dVar9 = (param_2->Rotation).ZW.m128d_f64[1];
    dVar10 = (param_2->Translation).XY.m128d_f64[0];
    dVar11 = (param_2->Translation).XY.m128d_f64[1];
    dVar12 = (param_2->Translation).ZW.m128d_f64[0];
    dVar13 = (param_2->Translation).ZW.m128d_f64[1];
    dVar14 = (param_2->Scale3D).XY.m128d_f64[0];
    dVar15 = (param_2->Scale3D).XY.m128d_f64[1];
    dVar16 = (param_2->Scale3D).ZW.m128d_f64[0];
    dVar17 = (param_2->Scale3D).ZW.m128d_f64[1];
    if (((this->GeometryTransformAttribute).AttributeArray ==
         (TManagedArray<UE::Math::TTransform<double>_> *)0x0) ||
       ((this->GeometryTransformAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L"");
      if (bVar18) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    ((this->GeometryTransformAttribute).AttributeArray)->field_0x8 = 1;
    pTVar3 = (this->GeometryTransformAttribute).AttributeArray;
    uVar20 = 0;
    if (param_1 < *(int *)&pTVar3->field_0x18) {
      uVar20 = (uint)~param_1 >> 0x1f;
    }
    if (uVar20 == 0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar4 = *(longlong *)&pTVar3->field_0x10;
    lVar21 = (longlong)param_1 * 0x60;
    *(double *)(lVar21 + lVar4) = dVar6;
    ((double *)(lVar21 + lVar4))[1] = dVar7;
    pdVar1 = (double *)(lVar21 + 0x10 + lVar4);
    *pdVar1 = dVar8;
    pdVar1[1] = dVar9;
    pdVar1 = (double *)(lVar21 + 0x20 + lVar4);
    *pdVar1 = dVar10;
    pdVar1[1] = dVar11;
    pdVar1 = (double *)(lVar21 + 0x30 + lVar4);
    *pdVar1 = dVar12;
    pdVar1[1] = dVar13;
    pdVar1 = (double *)(lVar21 + 0x40 + lVar4);
    *pdVar1 = dVar14;
    pdVar1[1] = dVar15;
    pdVar1 = (double *)(lVar21 + 0x50 + lVar4);
    *pdVar1 = dVar16;
    pdVar1[1] = dVar17;
  }
  return;
}

// StartGeometryGroup @ 143fcc3b0

int __thiscall
GeometryCollection::Facades::FRenderingFacade::StartGeometryGroup
          (FRenderingFacade *this,FString *param_1,TTransform<double> *param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  TManagedArray<FString> *pTVar3;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar4;
  longlong lVar5;
  TManagedArray<UE::Math::TVector<float>_> *pTVar6;
  TManagedArray<int> *pTVar7;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  bool bVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  uint uVar29;
  longlong lVar30;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsConst()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionRenderingFacade.cpp"
                        ,0x23d,L"");
    if (bVar23) {
      pcVar10 = (code *)swi(3);
      iVar24 = (*pcVar10)();
      return iVar24;
    }
  }
  uVar25 = 0xffffffff;
  bVar23 = IsValid(this);
  if (bVar23) {
    if ((this->GeometryNameAttribute).Collection == (FManagedArrayCollection *)0x0) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x41,L"");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    uVar25 = FManagedArrayCollection::AddElements
                       ((this->GeometryNameAttribute).Collection,1,
                        (this->GeometryNameAttribute).Group);
    lVar30 = (longlong)(int)uVar25;
    if (((this->GeometryNameAttribute).AttributeArray == (TManagedArray<FString> *)0x0) ||
       ((this->GeometryNameAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L"");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    uVar29 = ~uVar25 >> 0x1f;
    ((this->GeometryNameAttribute).AttributeArray)->field_0x8 = 1;
    pTVar3 = (this->GeometryNameAttribute).AttributeArray;
    uVar26 = 0;
    if ((int)uVar25 < *(int *)&pTVar3->field_0x18) {
      uVar26 = uVar29;
    }
    if (uVar26 == 0) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    iVar24 = (param_1->Data).ArrayNum;
    uVar26 = iVar24 - 1;
    if (iVar24 == 0) {
      uVar26 = 0;
    }
    ::FString::AssignRange
              ((FString *)(lVar30 * 0x10 + *(longlong *)&pTVar3->field_0x10),
               (wchar_t *)(param_1->Data).AllocatorInstance.Data,uVar26);
    dVar11 = (param_2->Rotation).XY.m128d_f64[0];
    dVar12 = (param_2->Rotation).XY.m128d_f64[1];
    dVar13 = (param_2->Rotation).ZW.m128d_f64[0];
    dVar14 = (param_2->Rotation).ZW.m128d_f64[1];
    dVar15 = (param_2->Translation).XY.m128d_f64[0];
    dVar16 = (param_2->Translation).XY.m128d_f64[1];
    dVar17 = (param_2->Translation).ZW.m128d_f64[0];
    dVar18 = (param_2->Translation).ZW.m128d_f64[1];
    dVar19 = (param_2->Scale3D).XY.m128d_f64[0];
    dVar20 = (param_2->Scale3D).XY.m128d_f64[1];
    dVar21 = (param_2->Scale3D).ZW.m128d_f64[0];
    dVar22 = (param_2->Scale3D).ZW.m128d_f64[1];
    if (((this->GeometryTransformAttribute).AttributeArray ==
         (TManagedArray<UE::Math::TTransform<double>_> *)0x0) ||
       ((this->GeometryTransformAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L"");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    ((this->GeometryTransformAttribute).AttributeArray)->field_0x8 = 1;
    pTVar4 = (this->GeometryTransformAttribute).AttributeArray;
    uVar27 = 0;
    uVar26 = uVar27;
    if ((int)uVar25 < *(int *)&pTVar4->field_0x18) {
      uVar26 = uVar29;
    }
    if (uVar26 == 0) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    lVar5 = *(longlong *)&pTVar4->field_0x10;
    lVar28 = lVar30 * 0x60;
    *(double *)(lVar28 + lVar5) = dVar11;
    ((double *)(lVar28 + lVar5))[1] = dVar12;
    pdVar1 = (double *)(lVar28 + 0x10 + lVar5);
    *pdVar1 = dVar13;
    pdVar1[1] = dVar14;
    pdVar1 = (double *)(lVar28 + 0x20 + lVar5);
    *pdVar1 = dVar15;
    pdVar1[1] = dVar16;
    local_48 = SUB84(dVar19,0);
    uStack_44 = (undefined4)((ulonglong)dVar19 >> 0x20);
    uStack_40 = SUB84(dVar20,0);
    uStack_3c = (undefined4)((ulonglong)dVar20 >> 0x20);
    pdVar1 = (double *)(lVar28 + 0x30 + lVar5);
    *pdVar1 = dVar17;
    pdVar1[1] = dVar18;
    local_38 = SUB84(dVar21,0);
    uStack_34 = (undefined4)((ulonglong)dVar21 >> 0x20);
    uStack_30 = SUB84(dVar22,0);
    uStack_2c = (undefined4)((ulonglong)dVar22 >> 0x20);
    puVar2 = (undefined4 *)(lVar28 + 0x40 + lVar5);
    *puVar2 = local_48;
    puVar2[1] = uStack_44;
    puVar2[2] = uStack_40;
    puVar2[3] = uStack_3c;
    puVar2 = (undefined4 *)(lVar28 + 0x50 + lVar5);
    *puVar2 = local_38;
    puVar2[1] = uStack_34;
    puVar2[2] = uStack_30;
    puVar2[3] = uStack_2c;
    pTVar6 = (this->VertexAttribute).ConstAttributeArray;
    if (pTVar6 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      iVar24 = FManagedArrayCollection::NumElements
                         ((this->VertexAttribute).ConstCollection,(this->VertexAttribute).Group);
    }
    else {
      iVar24 = (**(code **)(*(longlong *)pTVar6 + 0x60))();
    }
    if (((this->VertexStartAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
       ((this->VertexStartAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L"");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    ((this->VertexStartAttribute).AttributeArray)->field_0x8 = 1;
    pTVar7 = (this->VertexStartAttribute).AttributeArray;
    uVar26 = uVar27;
    if ((int)uVar25 < *(int *)&pTVar7->field_0x18) {
      uVar26 = uVar29;
    }
    if (uVar26 == 0) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    *(int *)(*(longlong *)&pTVar7->field_0x10 + lVar30 * 4) = iVar24;
    if (((this->VertexCountAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
       ((this->VertexCountAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L"");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    ((this->VertexCountAttribute).AttributeArray)->field_0x8 = 1;
    pTVar7 = (this->VertexCountAttribute).AttributeArray;
    uVar26 = uVar27;
    if ((int)uVar25 < *(int *)&pTVar7->field_0x18) {
      uVar26 = uVar29;
    }
    if (uVar26 == 0) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    *(undefined4 *)(*(longlong *)&pTVar7->field_0x10 + lVar30 * 4) = 0;
    pTVar8 = (this->IndicesAttribute).ConstAttributeArray;
    if (pTVar8 == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
      iVar24 = FManagedArrayCollection::NumElements
                         ((this->IndicesAttribute).ConstCollection,(this->IndicesAttribute).Group);
    }
    else {
      iVar24 = (**(code **)(*(longlong *)pTVar8 + 0x60))();
    }
    if (((this->IndicesStartAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
       ((this->IndicesStartAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L"");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    ((this->IndicesStartAttribute).AttributeArray)->field_0x8 = 1;
    pTVar7 = (this->IndicesStartAttribute).AttributeArray;
    uVar26 = uVar27;
    if ((int)uVar25 < *(int *)&pTVar7->field_0x18) {
      uVar26 = uVar29;
    }
    if (uVar26 == 0) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    *(int *)(*(longlong *)&pTVar7->field_0x10 + lVar30 * 4) = iVar24;
    if (((this->IndicesCountAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
       ((this->IndicesCountAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L"");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    ((this->IndicesCountAttribute).AttributeArray)->field_0x8 = 1;
    pTVar7 = (this->IndicesCountAttribute).AttributeArray;
    if ((int)uVar25 < *(int *)&pTVar7->field_0x18) {
      uVar27 = uVar29;
    }
    if (uVar27 == 0) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    *(undefined4 *)(*(longlong *)&pTVar7->field_0x10 + lVar30 * 4) = 0;
    if (((this->GeometrySelectionAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
       ((this->GeometrySelectionAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L"");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    ((this->GeometrySelectionAttribute).AttributeArray)->field_0x8 = 1;
    pTVar7 = (this->GeometrySelectionAttribute).AttributeArray;
    uVar27 = 0;
    uVar26 = uVar27;
    if ((int)uVar25 < *(int *)&pTVar7->field_0x18) {
      uVar26 = uVar29;
    }
    if (uVar26 == 0) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    *(undefined4 *)(*(longlong *)&pTVar7->field_0x10 + lVar30 * 4) = 0;
    pTVar3 = (this->MaterialPathAttribute).ConstAttributeArray;
    if (pTVar3 == (TManagedArray<FString> *)0x0) {
      iVar24 = FManagedArrayCollection::NumElements
                         ((this->MaterialPathAttribute).ConstCollection,
                          (this->MaterialPathAttribute).Group);
    }
    else {
      iVar24 = (**(code **)(*(longlong *)pTVar3 + 0x60))();
    }
    if (((this->MaterialStartAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
       ((this->MaterialStartAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L"");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    ((this->MaterialStartAttribute).AttributeArray)->field_0x8 = 1;
    pTVar7 = (this->MaterialStartAttribute).AttributeArray;
    uVar26 = uVar27;
    if ((int)uVar25 < *(int *)&pTVar7->field_0x18) {
      uVar26 = uVar29;
    }
    if (uVar26 == 0) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    *(int *)(*(longlong *)&pTVar7->field_0x10 + lVar30 * 4) = iVar24;
    if (((this->MaterialCountAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
       ((this->MaterialCountAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L"");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    ((this->MaterialCountAttribute).AttributeArray)->field_0x8 = 1;
    pTVar7 = (this->MaterialCountAttribute).AttributeArray;
    if ((int)uVar25 < *(int *)&pTVar7->field_0x18) {
      uVar27 = uVar29;
    }
    if (uVar27 == 0) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        iVar24 = (*pcVar10)();
        return iVar24;
      }
    }
    *(undefined4 *)(*(longlong *)&pTVar7->field_0x10 + lVar30 * 4) = 0;
  }
  pFVar9 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  return uVar25;
}


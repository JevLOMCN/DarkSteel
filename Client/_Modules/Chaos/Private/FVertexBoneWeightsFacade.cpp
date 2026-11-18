// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 18

// FVertexBoneWeightsFacade @ 143fd6850

FVertexBoneWeightsFacade * __thiscall
GeometryCollection::Facades::FVertexBoneWeightsFacade::FVertexBoneWeightsFacade
          (FVertexBoneWeightsFacade *this,FManagedArrayCollection *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FVertexBoneWeightsFacade *pFVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  
  this->ConstCollection = param_1;
  this->Collection = param_1;
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  FVar5 = FVar7;
  if (param_2) {
    FVar5 = FTransformCollection::TransformGroup;
  }
  (this->BoneIndicesAttribute).ConstCollection = param_1;
  (this->BoneIndicesAttribute).Collection = param_1;
  (this->BoneIndicesAttribute).Name = BoneIndicesAttributeName;
  (this->BoneIndicesAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->BoneIndicesAttribute).DefaultGroupDependency = FVar5;
  local_78 = BoneIndicesAttributeName;
  local_70 = FGeometryCollection::VerticesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_78);
  FVar5 = (FName)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    FVar5 = FVar7;
  }
  FVar6 = FVar7;
  if ((FVar5 != (FName)0x0) && (*(char *)FVar5 == '%')) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)FVar5);
    FVar6 = *(FName *)((longlong)FVar5 + 0x20);
    if ((FVar6 == (FName)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexBoneWeightsFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)((longlong)FVar6 + 8) = 1;
  }
  (this->BoneIndicesAttribute).AttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)FVar6;
  (this->BoneIndicesAttribute).ConstAttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)FVar6;
  FVar5 = FVar7;
  if (param_2) {
    FVar5 = FTransformCollection::TransformGroup;
  }
  (this->BoneWeightsAttribute).ConstCollection = param_1;
  (this->BoneWeightsAttribute).Collection = param_1;
  (this->BoneWeightsAttribute).Name = BoneWeightsAttributeName;
  (this->BoneWeightsAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->BoneWeightsAttribute).DefaultGroupDependency = FVar5;
  local_68 = BoneWeightsAttributeName;
  local_60 = FGeometryCollection::VerticesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_68);
  FVar5 = (FName)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    FVar5 = FVar7;
  }
  FVar6 = FVar7;
  if ((FVar5 != (FName)0x0) && (*(char *)FVar5 == '&')) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)FVar5);
    FVar6 = *(FName *)((longlong)FVar5 + 0x20);
    if ((FVar6 == (FName)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexBoneWeightsFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)((longlong)FVar6 + 8) = 1;
  }
  (this->BoneWeightsAttribute).AttributeArray =
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)FVar6;
  (this->BoneWeightsAttribute).ConstAttributeArray =
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)FVar6;
  (this->KinematicWeightAttribute).ConstCollection = param_1;
  (this->KinematicWeightAttribute).Collection = param_1;
  (this->KinematicWeightAttribute).Name = KinematicWeightAttributeName;
  (this->KinematicWeightAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->KinematicWeightAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->KinematicWeightAttribute).DefaultGroupDependency.Number = 0;
  local_58 = KinematicWeightAttributeName;
  local_50 = FGeometryCollection::VerticesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  FVar5 = (FName)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    FVar5 = FVar7;
  }
  FVar6 = FVar7;
  if ((FVar5 != (FName)0x0) && (*(char *)FVar5 == '\t')) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)FVar5);
    FVar6 = *(FName *)((longlong)FVar5 + 0x20);
    if ((FVar6 == (FName)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexBoneWeightsFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)((longlong)FVar6 + 8) = 1;
  }
  (this->KinematicWeightAttribute).AttributeArray = (TManagedArray<float> *)FVar6;
  (this->KinematicWeightAttribute).ConstAttributeArray = (TManagedArray<float> *)FVar6;
  (this->GeometryLODAttribute).ConstCollection = param_1;
  (this->GeometryLODAttribute).Collection = param_1;
  (this->GeometryLODAttribute).Name = GeometryLODAttributeName;
  (this->GeometryLODAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->GeometryLODAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GeometryLODAttribute).DefaultGroupDependency.Number = 0;
  local_48 = GeometryLODAttributeName;
  local_40 = FGeometryCollection::GeometryGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
  FVar5 = (FName)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    FVar5 = FVar7;
  }
  FVar6 = FVar7;
  if ((FVar5 != (FName)0x0) && (*(char *)FVar5 == '\x05')) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)FVar5);
    FVar6 = *(FName *)((longlong)FVar5 + 0x20);
    if ((FVar6 == (FName)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexBoneWeightsFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)((longlong)FVar6 + 8) = 1;
  }
  (this->GeometryLODAttribute).AttributeArray = (TManagedArray<int> *)FVar6;
  (this->GeometryLODAttribute).ConstAttributeArray = (TManagedArray<int> *)FVar6;
  (this->SkeletalMeshAttribute).ConstCollection = param_1;
  (this->SkeletalMeshAttribute).Collection = param_1;
  (this->SkeletalMeshAttribute).Name = SkeletalMeshAttributeName;
  (this->SkeletalMeshAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->SkeletalMeshAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SkeletalMeshAttribute).DefaultGroupDependency.Number = 0;
  local_38 = SkeletalMeshAttributeName;
  local_30 = FGeometryCollection::GeometryGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_38);
  FVar5 = (FName)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    FVar5 = FVar7;
  }
  if ((FVar5 != (FName)0x0) && (*(char *)FVar5 == '3')) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite((FValueType *)FVar5);
    FVar7 = *(FName *)((longlong)FVar5 + 0x20);
    if ((FVar7 == (FName)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexBoneWeightsFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)((longlong)FVar7 + 8) = 1;
  }
  (this->SkeletalMeshAttribute).AttributeArray = (TManagedArray<TObjectPtr<UObject>_> *)FVar7;
  (this->SkeletalMeshAttribute).ConstAttributeArray = (TManagedArray<TObjectPtr<UObject>_> *)FVar7;
  this->bInternalWeights = param_2;
  DefineSchema(this);
  return this;
}

// FVertexBoneWeightsFacade @ 143fd6c50

FVertexBoneWeightsFacade * __thiscall
GeometryCollection::Facades::FVertexBoneWeightsFacade::FVertexBoneWeightsFacade
          (FVertexBoneWeightsFacade *this,FManagedArrayCollection *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FVertexBoneWeightsFacade *pFVar4;
  FName FVar5;
  TManagedArray<float> *pTVar6;
  TManagedArray<int> *pTVar7;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar8;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar9;
  FName FVar10;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  
  this->ConstCollection = param_1;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
  this->Collection = (FManagedArrayCollection *)0x0;
  FVar5 = FVar10;
  if (param_2) {
    FVar5 = FTransformCollection::TransformGroup;
  }
  (this->BoneIndicesAttribute).ConstCollection = param_1;
  (this->BoneIndicesAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->BoneIndicesAttribute).Name = BoneIndicesAttributeName;
  (this->BoneIndicesAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->BoneIndicesAttribute).DefaultGroupDependency = FVar5;
  (this->BoneIndicesAttribute).AttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_58 = BoneIndicesAttributeName;
  local_50 = FGeometryCollection::VerticesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  FVar5 = (FName)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    FVar5 = FVar10;
  }
  if ((FVar5 == (FName)0x0) || (*(char *)FVar5 != '%')) {
    pTVar8 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar8 = *(TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> **)((longlong)FVar5 + 0x20);
    if (pTVar8 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexBoneWeightsFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BoneIndicesAttribute).ConstAttributeArray = pTVar8;
  FVar5 = FVar10;
  if (param_2) {
    FVar5 = FTransformCollection::TransformGroup;
  }
  (this->BoneWeightsAttribute).ConstCollection = param_1;
  (this->BoneWeightsAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->BoneWeightsAttribute).Name = BoneWeightsAttributeName;
  (this->BoneWeightsAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->BoneWeightsAttribute).DefaultGroupDependency = FVar5;
  (this->BoneWeightsAttribute).AttributeArray =
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_48 = BoneWeightsAttributeName;
  local_40 = FGeometryCollection::VerticesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
  FVar5 = (FName)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    FVar5 = FVar10;
  }
  if ((FVar5 == (FName)0x0) || (*(char *)FVar5 != '&')) {
    pTVar9 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar9 = *(TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> **)((longlong)FVar5 + 0x20)
    ;
    if (pTVar9 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVertexBoneWeightsFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BoneWeightsAttribute).ConstAttributeArray = pTVar9;
  (this->KinematicWeightAttribute).ConstCollection = param_1;
  (this->KinematicWeightAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->KinematicWeightAttribute).Name = KinematicWeightAttributeName;
  (this->KinematicWeightAttribute).Group = FGeometryCollection::VerticesGroup;
  (this->KinematicWeightAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->KinematicWeightAttribute).DefaultGroupDependency.Number = 0;
  (this->KinematicWeightAttribute).AttributeArray = (TManagedArray<float> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<float>
                     (param_1,KinematicWeightAttributeName,FGeometryCollection::VerticesGroup);
  (this->KinematicWeightAttribute).ConstAttributeArray = pTVar6;
  (this->GeometryLODAttribute).ConstCollection = param_1;
  (this->GeometryLODAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->GeometryLODAttribute).Name = GeometryLODAttributeName;
  (this->GeometryLODAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->GeometryLODAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->GeometryLODAttribute).DefaultGroupDependency.Number = 0;
  (this->GeometryLODAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar7 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,GeometryLODAttributeName,FGeometryCollection::GeometryGroup);
  (this->GeometryLODAttribute).ConstAttributeArray = pTVar7;
  (this->SkeletalMeshAttribute).ConstCollection = param_1;
  (this->SkeletalMeshAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->SkeletalMeshAttribute).Name = SkeletalMeshAttributeName;
  (this->SkeletalMeshAttribute).Group = FGeometryCollection::GeometryGroup;
  (this->SkeletalMeshAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SkeletalMeshAttribute).DefaultGroupDependency.Number = 0;
  (this->SkeletalMeshAttribute).AttributeArray = (TManagedArray<TObjectPtr<UObject>_> *)0x0;
  local_38 = SkeletalMeshAttributeName;
  local_30 = FGeometryCollection::GeometryGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_38);
  FVar5 = (FName)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    FVar5 = FVar10;
  }
  if (((FVar5 != (FName)0x0) && (*(char *)FVar5 == '3')) &&
     (FVar10 = *(FName *)((longlong)FVar5 + 0x20), FVar10 == (FName)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedManagedArray != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x306,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexBoneWeightsFacade *)(*pcVar1)();
      return pFVar4;
    }
  }
  (this->SkeletalMeshAttribute).ConstAttributeArray = (TManagedArray<TObjectPtr<UObject>_> *)FVar10;
  this->bInternalWeights = param_2;
  return this;
}

// AddBoneWeight @ 143fd88f0

void __thiscall
GeometryCollection::Facades::FVertexBoneWeightsFacade::AddBoneWeight
          (FVertexBoneWeightsFacade *this,int param_1,int param_2,float param_3)

{
  int *piVar1;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ForAnyElementType *pFVar8;
  int local_res18 [2];
  float local_res20 [2];
  
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  if ((((this->BoneIndicesAttribute).AttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
      ((this->BoneIndicesAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ((this->BoneIndicesAttribute).AttributeArray)->field_0x8 = 1;
  pTVar2 = (this->BoneIndicesAttribute).AttributeArray;
  if ((((this->BoneWeightsAttribute).AttributeArray ==
        (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) ||
      ((this->BoneWeightsAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ((this->BoneWeightsAttribute).AttributeArray)->field_0x8 = 1;
  pTVar3 = (this->BoneWeightsAttribute).AttributeArray;
  if ((-1 < param_1) &&
     (iVar6 = FManagedArrayCollection::NumElements
                        (this->ConstCollection,FGeometryCollection::VerticesGroup), param_1 < iVar6)
     ) {
    if (this->bInternalWeights != false) {
      if (local_res18[0] < 0) {
        return;
      }
      iVar6 = FManagedArrayCollection::NumElements
                        (this->ConstCollection,FTransformCollection::TransformGroup);
      if (iVar6 <= local_res18[0]) {
        return;
      }
    }
    uVar7 = 0;
    if (param_1 < *(int *)&pTVar2->field_0x18) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar8 = (ForAnyElementType *)(*(longlong *)&pTVar2->field_0x10 + (longlong)param_1 * 0x10);
    if (((pFVar8->Data <= (FScriptContainerElement *)local_res18) &&
        ((FScriptContainerElement *)local_res18 <
         pFVar8->Data + (longlong)*(int *)((longlong)&pFVar8[1].Data + 4) * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *(int *)&pFVar8[1].Data;
    piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar8,piVar1);
    }
    *(int *)&pFVar8[1].Data = iVar6 + 1;
    *(int *)(pFVar8->Data + (longlong)iVar6 * 4) = local_res18[0];
    uVar7 = 0;
    if (param_1 < *(int *)&pTVar3->field_0x18) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar8 = (ForAnyElementType *)(*(longlong *)&pTVar3->field_0x10 + (longlong)param_1 * 0x10);
    if (((pFVar8->Data <= (FScriptContainerElement *)local_res20) &&
        ((FScriptContainerElement *)local_res20 <
         pFVar8->Data + (longlong)*(int *)((longlong)&pFVar8[1].Data + 4) * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *(int *)&pFVar8[1].Data;
    piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar8,piVar1);
    }
    *(int *)&pFVar8[1].Data = iVar6 + 1;
    *(float *)(pFVar8->Data + (longlong)iVar6 * 4) = local_res20[0];
  }
  return;
}

// AddBoneWeightsFromKinematicBindings @ 143fd8c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
GeometryCollection::Facades::FVertexBoneWeightsFacade::AddBoneWeightsFromKinematicBindings
          (FVertexBoneWeightsFacade *this)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar11;
  ulonglong uVar12;
  FSelectionKey *pFVar13;
  longlong lVar14;
  int *piVar15;
  ulonglong uVar16;
  ForAnyElementType *pFVar17;
  float *pfVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  int *piVar22;
  undefined8 *puVar23;
  uint uVar24;
  float fVar25;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_168;
  float local_164;
  ForAnyElementType local_160;
  uint local_158;
  uint local_154;
  undefined4 local_150;
  undefined1 local_14c;
  undefined1 local_14b [3];
  TArray<int,TSizedDefaultAllocator<32>_> local_148;
  uint local_138;
  float local_134;
  TArray<float,TSizedDefaultAllocator<32>_> local_130;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *local_120;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *local_118;
  FSelectionKey local_110 [2];
  FKinematicBindingFacade local_f8;
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionVertexBoneWeightsFacade.cpp"
                         ,0x114,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  DefineSchema(this);
  if ((((((this->BoneIndicesAttribute).ConstAttributeArray !=
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
        ((this->BoneWeightsAttribute).ConstAttributeArray !=
         (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
       ((this->KinematicWeightAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
      (((this->SkeletalMeshAttribute).ConstAttributeArray !=
        (TManagedArray<TObjectPtr<UObject>_> *)0x0 &&
       ((this->GeometryLODAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)))) &&
     (this->bInternalWeights != false)) {
    local_120 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::Modify
                          (&this->BoneIndicesAttribute);
    pTVar11 = TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::Modify
                        (&this->BoneWeightsAttribute);
    uVar20 = 0;
    local_160.Data = (FScriptContainerElement *)0x0;
    local_154 = 0;
    local_118 = pTVar11;
    uVar6 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
    uVar16 = (ulonglong)uVar6;
    local_150 = 0;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar16);
    }
    local_158 = 0;
    if (local_154 != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar6,&local_160,0,(int *)&local_154);
    }
    if (0 < (int)uVar6) {
      do {
        if (((local_160.Data <= (FScriptContainerElement *)&local_150) &&
            ((FScriptContainerElement *)&local_150 < local_160.Data + (longlong)(int)local_154 * 4))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_158 == local_154) {
          local_158 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_160,(int *)&local_154);
        }
        lVar14 = (longlong)(int)local_158;
        local_158 = local_158 + 1;
        *(undefined4 *)(local_160.Data + lVar14 * 4) = local_150;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    local_138 = *(uint *)&pTVar11->field_0x18;
    uVar12 = (ulonglong)(int)local_138;
    puVar19 = *(undefined8 **)&pTVar11->field_0x10;
    puVar23 = puVar19 + uVar12 * 2;
    uVar16 = uVar20;
    while( true ) {
      if (*(int *)&pTVar11->field_0x18 != (int)uVar12) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TArray<float,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res10);
      }
      if (puVar19 == puVar23) break;
      pfVar18 = (float *)*puVar19;
      iVar8 = *(int *)(puVar19 + 1);
      pfVar1 = pfVar18 + iVar8;
      while( true ) {
        if (*(int *)(puVar19 + 1) != iVar8) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        uVar6 = (uint)uVar16;
        if (pfVar18 == pfVar1) break;
        fVar2 = *pfVar18;
        uVar7 = 0;
        if ((int)uVar6 < (int)local_158) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pfVar18 = pfVar18 + 1;
        *(float *)(local_160.Data + uVar20 * 4) = fVar2 + *(float *)(local_160.Data + uVar20 * 4);
      }
      uVar12 = (ulonglong)local_138;
      uVar16 = (ulonglong)(uVar6 + 1);
      uVar20 = uVar20 + 1;
      puVar19 = puVar19 + 2;
      pTVar11 = local_118;
    }
    FKinematicBindingFacade::FKinematicBindingFacade(&local_f8,this->ConstCollection);
    if (local_f8.KinemaitcBoneBindingAttribute.ConstAttributeArray == (TManagedArray<int> *)0x0) {
      iVar8 = FManagedArrayCollection::NumElements
                        (local_f8.KinemaitcBoneBindingAttribute.ConstCollection,
                         local_f8.KinemaitcBoneBindingAttribute.Group);
      fVar2 = __real_3f800347;
      fVar25 = __real_3f800347;
    }
    else {
      iVar8 = (**(code **)(*(longlong *)local_f8.KinemaitcBoneBindingAttribute.ConstAttributeArray +
                          0x60))();
      fVar2 = __real_3f800347;
      fVar25 = __real_3f800347;
    }
    while (__real_3f800347 = fVar25, fVar25 = __real_3f800347, iVar8 = iVar8 + -1,
          __real_3f800347 = fVar2, -1 < iVar8) {
      local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.ArrayNum = 0;
      local_148.ArrayMax = 0;
      local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_130.ArrayNum = 0;
      local_130.ArrayMax = 0;
      pFVar13 = FKinematicBindingFacade::GetKinematicBindingKey(&local_f8,local_110,iVar8);
      FKinematicBindingFacade::GetBoneBindings(&local_f8,pFVar13,&local_168,&local_148,&local_130);
      if ((-1 < local_168) &&
         (iVar9 = FManagedArrayCollection::NumElements
                            (this->ConstCollection,FTransformCollection::TransformGroup),
         local_168 < iVar9)) {
        uVar6 = 0;
        if (0 < local_148.ArrayNum) {
          lVar14 = 0;
          do {
            uVar7 = 0;
            if ((int)uVar6 < local_148.ArrayNum) {
              uVar7 = ~uVar6 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar7 = *(uint *)(local_148.AllocatorInstance.Data + lVar14);
            lVar21 = (longlong)(int)uVar7;
            uVar10 = 0;
            if ((int)uVar6 < local_130.ArrayNum) {
              uVar10 = ~uVar6 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_164 = *(float *)(local_130.AllocatorInstance.Data + lVar14);
            if ((-1 < (int)uVar7) &&
               (iVar9 = FManagedArrayCollection::NumElements
                                  (this->ConstCollection,FGeometryCollection::VerticesGroup),
               pTVar4 = local_120, (int)uVar7 < iVar9)) {
              uVar24 = ~uVar7 >> 0x1f;
              uVar10 = 0;
              if ((int)uVar7 < *(int *)&local_120->field_0x18) {
                uVar10 = uVar24;
              }
              if ((uVar10 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              piVar15 = *(int **)(*(longlong *)&pTVar4->field_0x10 + lVar21 * 0x10);
              piVar22 = piVar15 + *(int *)(*(longlong *)&pTVar4->field_0x10 + 8 + lVar21 * 0x10);
              for (; piVar15 != piVar22; piVar15 = piVar15 + 1) {
                if (*piVar15 == local_168) goto LAB_143fd94a3;
              }
              if (((this->KinematicWeightAttribute).ConstAttributeArray !=
                   (TManagedArray<float> *)0x0) &&
                 (iVar9 = (**(code **)(*(longlong *)
                                        (this->KinematicWeightAttribute).ConstAttributeArray + 0x60)
                          )(), (int)uVar7 < iVar9)) {
                local_134 = 1.0;
                TManagedArrayAccessor<float>::ModifyAt
                          (&this->KinematicWeightAttribute,uVar7,&local_134);
              }
              uVar10 = 0;
              if ((int)uVar7 < *(int *)&pTVar4->field_0x18) {
                uVar10 = uVar24;
              }
              if ((uVar10 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar10 = 0;
              if ((int)uVar7 < (int)local_158) {
                uVar10 = uVar24;
              }
              if ((uVar10 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (fVar25 < local_164 + *(float *)(local_160.Data + lVar21 * 4)) {
                if (2 < (byte)LogChaos._0_1_) {
                  uVar10 = 0;
                  if ((int)uVar7 < (int)local_158) {
                    uVar10 = uVar24;
                  }
                  if ((uVar10 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
                }
              }
              else {
                uVar10 = 0;
                if ((int)uVar7 < *(int *)&pTVar4->field_0x18) {
                  uVar10 = uVar24;
                }
                if ((uVar10 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar17 = (ForAnyElementType *)(*(longlong *)&pTVar4->field_0x10 + lVar21 * 0x10);
                if (((pFVar17->Data <= (FScriptContainerElement *)&local_168) &&
                    ((FScriptContainerElement *)&local_168 <
                     pFVar17->Data + (longlong)*(int *)((longlong)&pFVar17[1].Data + 4) * 4)) &&
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
                iVar9 = *(int *)&pFVar17[1].Data;
                piVar22 = (int *)((longlong)&pFVar17[1].Data + 4);
                if (iVar9 == *piVar22) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,pFVar17,piVar22);
                }
                pTVar11 = local_118;
                *(int *)&pFVar17[1].Data = iVar9 + 1;
                *(int *)(pFVar17->Data + (longlong)iVar9 * 4) = local_168;
                uVar10 = 0;
                if ((int)uVar7 < *(int *)&local_118->field_0x18) {
                  uVar10 = uVar24;
                }
                if ((uVar10 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar17 = (ForAnyElementType *)(*(longlong *)&pTVar11->field_0x10 + lVar21 * 0x10);
                if (((pFVar17->Data <= (FScriptContainerElement *)&local_164) &&
                    ((FScriptContainerElement *)&local_164 <
                     pFVar17->Data + (longlong)*(int *)((longlong)&pFVar17[1].Data + 4) * 4)) &&
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
                iVar9 = *(int *)&pFVar17[1].Data;
                piVar22 = (int *)((longlong)&pFVar17[1].Data + 4);
                if (iVar9 == *piVar22) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,pFVar17,piVar22);
                }
                fVar2 = local_164;
                *(int *)&pFVar17[1].Data = iVar9 + 1;
                *(float *)(pFVar17->Data + (longlong)iVar9 * 4) = local_164;
                uVar10 = 0;
                if ((int)uVar7 < (int)local_158) {
                  uVar10 = uVar24;
                }
                if ((uVar10 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                *(float *)(local_160.Data + lVar21 * 4) =
                     fVar2 + *(float *)(local_160.Data + lVar21 * 4);
              }
            }
LAB_143fd94a3:
            uVar6 = uVar6 + 1;
            lVar14 = lVar14 + 4;
          } while ((int)uVar6 < local_148.ArrayNum);
        }
      }
      if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.AllocatorInstance.Data);
      }
      fVar2 = __real_3f800347;
      if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
        fVar2 = __real_3f800347;
      }
    }
    if (((((this->BoneIndicesAttribute).ConstAttributeArray !=
           (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
         ((this->BoneWeightsAttribute).ConstAttributeArray !=
          (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
        ((this->KinematicWeightAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
       (((this->SkeletalMeshAttribute).ConstAttributeArray !=
         (TManagedArray<TObjectPtr<UObject>_> *)0x0 &&
        ((this->GeometryLODAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)))) {
      if ((((this->BoneWeightsAttribute).AttributeArray ==
            (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) ||
          ((this->BoneWeightsAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AttributeArray!=nullptr && !IsConst()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x74,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar2 = __real_38d1b717;
      ((this->BoneWeightsAttribute).AttributeArray)->field_0x8 = 1;
      pTVar11 = (this->BoneWeightsAttribute).AttributeArray;
      uVar6 = *(uint *)&pTVar11->field_0x18;
      uVar16 = (ulonglong)(int)uVar6;
      puVar19 = *(undefined8 **)&pTVar11->field_0x10;
      puVar23 = puVar19 + uVar16 * 2;
      piVar22 = (int *)(puVar19 + 1);
      while( true ) {
        if (*(int *)&pTVar11->field_0x18 != (int)uVar16) {
          `TCheckedPointerIterator<TArray<float,TSizedDefaultAllocator<32>_>,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res20);
        }
        if (puVar19 == puVar23) break;
        pfVar18 = (float *)*puVar19;
        fVar25 = 0.0;
        iVar8 = *piVar22;
        pfVar1 = pfVar18 + iVar8;
        while( true ) {
          if (*piVar22 != iVar8) {
            `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_14c);
          }
          if (pfVar18 == pfVar1) break;
          fVar25 = fVar25 + *pfVar18;
          pfVar18 = pfVar18 + 1;
        }
        if (fVar2 < fVar25) {
          pfVar18 = (float *)*puVar19;
          iVar8 = *piVar22;
          pfVar1 = pfVar18 + iVar8;
          while( true ) {
            if (*piVar22 != iVar8) {
              `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_14b);
            }
            if (pfVar18 == pfVar1) break;
            *pfVar18 = *pfVar18 / fVar25;
            pfVar18 = pfVar18 + 1;
          }
        }
        uVar16 = (ulonglong)uVar6;
        puVar19 = puVar19 + 2;
        piVar22 = piVar22 + 4;
      }
    }
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
  }
  return;
}

// DefineSchema @ 143fe8130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
GeometryCollection::Facades::FVertexBoneWeightsFacade::DefineSchema(FVertexBoneWeightsFacade *this)

{
  TManagedArray<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionVertexBoneWeightsFacade.cpp"
                         ,0x3d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = 0;
  TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::Add
            (&this->BoneIndicesAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::Add
            (&this->BoneWeightsAttribute,MakePersistent,(FName)0x0);
  if (((this->KinematicWeightAttribute).Collection == (FManagedArrayCollection *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0xa1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = FManagedArrayCollection::HasAttribute
                    ((this->KinematicWeightAttribute).Collection,
                     (this->KinematicWeightAttribute).Name,(this->KinematicWeightAttribute).Group);
  if (!bVar3) {
    TManagedArrayAccessor<float>::Add(&this->KinematicWeightAttribute,MakePersistent,(FName)0x0);
    pTVar1 = (this->KinematicWeightAttribute).AttributeArray;
    uVar7 = uVar6;
    if (0 < *(int *)&pTVar1->field_0x18) {
      do {
        uVar5 = (uint)uVar6;
        uVar4 = 0;
        if ((int)uVar5 < *(int *)&pTVar1->field_0x18) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = (ulonglong)(uVar5 + 1);
        *(undefined4 *)(uVar7 + *(longlong *)&pTVar1->field_0x10) = 0;
        uVar7 = uVar7 + 4;
      } while ((int)(uVar5 + 1) < *(int *)&pTVar1->field_0x18);
    }
  }
  TManagedArrayAccessor<TObjectPtr<UObject>_>::Add
            (&this->SkeletalMeshAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->GeometryLODAttribute,MakePersistent,(FName)0x0);
  if (((this->BoneIndicesAttribute).ConstAttributeArray ==
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
     (2 < (byte)LogDataflowVertexBoneWeightsFacade._0_1_)) {
    ::FName::ToString(&FGeometryCollection::VerticesGroup,&local_c8);
    ::FName::ToString(&BoneIndicesAttributeName,&local_d8);
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogDataflowVertexBoneWeightsFacade);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (((this->BoneWeightsAttribute).ConstAttributeArray ==
       (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) &&
     (2 < (byte)LogDataflowVertexBoneWeightsFacade._0_1_)) {
    ::FName::ToString(&FGeometryCollection::VerticesGroup,&local_a8);
    ::FName::ToString(&BoneWeightsAttributeName,&local_b8);
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogDataflowVertexBoneWeightsFacade);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if (((this->KinematicWeightAttribute).ConstAttributeArray == (TManagedArray<float> *)0x0) &&
     (2 < (byte)LogDataflowVertexBoneWeightsFacade._0_1_)) {
    ::FName::ToString(&FGeometryCollection::VerticesGroup,&local_88);
    ::FName::ToString(&KinematicWeightAttributeName,&local_98);
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogDataflowVertexBoneWeightsFacade);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if (((this->SkeletalMeshAttribute).ConstAttributeArray ==
       (TManagedArray<TObjectPtr<UObject>_> *)0x0) &&
     (2 < (byte)LogDataflowVertexBoneWeightsFacade._0_1_)) {
    ::FName::ToString(&FGeometryCollection::GeometryGroup,&local_68);
    ::FName::ToString(&SkeletalMeshAttributeName,&local_78);
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogDataflowVertexBoneWeightsFacade);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (((this->GeometryLODAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (2 < (byte)LogDataflowVertexBoneWeightsFacade._0_1_)) {
    ::FName::ToString(&FGeometryCollection::GeometryGroup,&local_48);
    ::FName::ToString(&GeometryLODAttributeName,&local_58);
    UE::Logging::Private::BasicLog<3>
              (&::LOG_Static,(FLogCategoryBase *)&LogDataflowVertexBoneWeightsFacade);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FindBoneIndices @ 143fe9070

TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
GeometryCollection::Facades::FVertexBoneWeightsFacade::FindBoneIndices
          (FVertexBoneWeightsFacade *this)

{
  bool bVar1;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar2;
  FValueType *pFVar3;
  FValueType *this_00;
  FName local_18;
  FName local_10;
  
  bVar1 = FManagedArrayCollection::HasAttribute
                    (this->ConstCollection,DeprecatedBoneIndicesAttributeName,
                     FGeometryCollection::VerticesGroup);
  if (bVar1) {
    local_18 = DeprecatedBoneIndicesAttributeName;
    local_10 = FGeometryCollection::VerticesGroup;
    pTVar2 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                     *)&this->ConstCollection->Map,(TTuple<FName,FName> *)&local_18);
    pFVar3 = (FValueType *)0x0;
    this_00 = (FValueType *)&pTVar2->field_0x10;
    if (pTVar2 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      this_00 = pFVar3;
    }
    if (this_00 != (FValueType *)0x0) {
      pFVar3 = (FValueType *)
               FManagedArrayCollection::FValueType::
               GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>(this_00);
    }
    return (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar3;
  }
  return (this->BoneIndicesAttribute).ConstAttributeArray;
}

// FindBoneWeights @ 143fe90f0

TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
GeometryCollection::Facades::FVertexBoneWeightsFacade::FindBoneWeights
          (FVertexBoneWeightsFacade *this)

{
  return (this->BoneWeightsAttribute).ConstAttributeArray;
}

// GetBoneIndices @ 143fe9230

TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
GeometryCollection::Facades::FVertexBoneWeightsFacade::GetBoneIndices
          (FVertexBoneWeightsFacade *this)

{
  FManagedArrayCollection *this_00;
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar5;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar6;
  FName local_18;
  FName local_10;
  
  bVar4 = FManagedArrayCollection::HasAttribute
                    (this->ConstCollection,DeprecatedBoneIndicesAttributeName,
                     FGeometryCollection::VerticesGroup);
  FVar3 = FGeometryCollection::VerticesGroup;
  FVar2 = DeprecatedBoneIndicesAttributeName;
  if (!bVar4) {
    if ((this->BoneIndicesAttribute).ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar5;
      }
    }
    return (this->BoneIndicesAttribute).ConstAttributeArray;
  }
  this_00 = this->ConstCollection;
  bVar4 = FManagedArrayCollection::HasAttribute
                    (this_00,DeprecatedBoneIndicesAttributeName,FGeometryCollection::VerticesGroup);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x185,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  local_18 = FVar2;
  local_10 = FVar3;
  pTVar6 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&this_00->Map,(TTuple<FName,FName> *)&local_18);
  if (pTVar6 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar5;
    }
  }
  pTVar5 = FManagedArrayCollection::FValueType::
           GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>((FValueType *)&pTVar6->field_0x10);
  return pTVar5;
}

// GetBoneWeights @ 143fe9350

TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
GeometryCollection::Facades::FVertexBoneWeightsFacade::GetBoneWeights
          (FVertexBoneWeightsFacade *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  if ((this->BoneWeightsAttribute).ConstAttributeArray !=
      (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    return (this->BoneWeightsAttribute).ConstAttributeArray;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
    return pTVar3;
  }
  return (this->BoneWeightsAttribute).ConstAttributeArray;
}

// HasValidBoneIndicesAndWeights @ 143fec520

bool __thiscall
GeometryCollection::Facades::FVertexBoneWeightsFacade::HasValidBoneIndicesAndWeights
          (FVertexBoneWeightsFacade *this)

{
  bool bVar1;
  
  bVar1 = FManagedArrayCollection::HasAttribute
                    (this->ConstCollection,DeprecatedBoneIndicesAttributeName,
                     FGeometryCollection::VerticesGroup);
  if (((bVar1) ||
      ((this->BoneIndicesAttribute).ConstAttributeArray !=
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
     ((this->BoneWeightsAttribute).ConstAttributeArray !=
      (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0)) {
    return true;
  }
  return false;
}

// IsKinematicVertex @ 143fefa00

bool __thiscall
GeometryCollection::Facades::FVertexBoneWeightsFacade::IsKinematicVertex
          (FVertexBoneWeightsFacade *this,int param_1)

{
  TManagedArray<float> *pTVar1;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  TManagedArray<bool> *pTVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint uVar11;
  
  lVar10 = (longlong)param_1;
  bVar5 = FManagedArrayCollection::HasAttribute
                    (this->ConstCollection,DeprecatedKinematicFlagAttributeName,
                     FGeometryCollection::VerticesGroup);
  if (bVar5) {
    pTVar8 = FManagedArrayCollection::GetAttribute<bool>
                       (this->ConstCollection,DeprecatedKinematicFlagAttributeName,
                        FGeometryCollection::VerticesGroup);
    if ((-1 < param_1) && (param_1 < *(int *)&pTVar8->field_0x28)) {
      puVar9 = *(undefined1 **)&pTVar8->field_0x20;
      if (*(undefined1 **)&pTVar8->field_0x20 == (undefined1 *)0x0) {
        puVar9 = &pTVar8->field_0x10;
      }
      if ((*(uint *)(puVar9 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0) {
        return true;
      }
    }
    return false;
  }
  if ((this->KinematicWeightAttribute).ConstAttributeArray == (TManagedArray<float> *)0x0) {
    pTVar2 = (this->BoneIndicesAttribute).ConstAttributeArray;
    if (((pTVar2 != (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
        (-1 < param_1)) && (iVar7 = (**(code **)(*(longlong *)pTVar2 + 0x60))(), param_1 < iVar7)) {
      if (((this->BoneIndicesAttribute).ConstAttributeArray ==
           (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x67,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pTVar2 = (this->BoneIndicesAttribute).ConstAttributeArray;
      uVar11 = 0;
      if (param_1 < *(int *)&pTVar2->field_0x18) {
        uVar11 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (((*(int *)(*(longlong *)&pTVar2->field_0x10 + 8 + lVar10 * 0x10) != 0) &&
          (pTVar3 = (this->BoneWeightsAttribute).ConstAttributeArray,
          pTVar3 != (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
         (iVar7 = (**(code **)(*(longlong *)pTVar3 + 0x60))(), param_1 < iVar7)) {
        if (((this->BoneWeightsAttribute).ConstAttributeArray ==
             (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x67,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pTVar3 = (this->BoneWeightsAttribute).ConstAttributeArray;
        uVar11 = 0;
        if (param_1 < *(int *)&pTVar3->field_0x18) {
          uVar11 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if (*(int *)(*(longlong *)&pTVar3->field_0x10 + 8 + lVar10 * 0x10) != 0) {
          return true;
        }
      }
    }
    return false;
  }
  bVar5 = TManagedArrayAccessor<float>::IsValidIndex(&this->KinematicWeightAttribute,param_1);
  if (bVar5) {
    if (((this->KinematicWeightAttribute).ConstAttributeArray == (TManagedArray<float> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pTVar1 = (this->KinematicWeightAttribute).ConstAttributeArray;
    uVar11 = 0;
    if (param_1 < *(int *)&pTVar1->field_0x18) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (__real_3f800000 == *(float *)(*(longlong *)&pTVar1->field_0x10 + lVar10 * 4)) {
      return true;
    }
  }
  return false;
}

// IsValid @ 143fefe40

bool __thiscall
GeometryCollection::Facades::FVertexBoneWeightsFacade::IsValid(FVertexBoneWeightsFacade *this)

{
  if (((((this->BoneIndicesAttribute).ConstAttributeArray !=
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
       ((this->BoneWeightsAttribute).ConstAttributeArray !=
        (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
      ((this->KinematicWeightAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
     (((this->SkeletalMeshAttribute).ConstAttributeArray !=
       (TManagedArray<TObjectPtr<UObject>_> *)0x0 &&
      ((this->GeometryLODAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)))) {
    return true;
  }
  return false;
}

// ModifyBoneWeight @ 143ff03b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
GeometryCollection::Facades::FVertexBoneWeightsFacade::ModifyBoneWeight
          (FVertexBoneWeightsFacade *this,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType *pFVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  undefined1 local_78 [4];
  float local_74;
  uint local_70;
  FScriptContainerElement *local_68;
  longlong local_60;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *local_58;
  longlong local_50;
  
  if (param_2->ArrayNum == param_3->ArrayNum) {
    if ((((this->BoneIndicesAttribute).AttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
        ((this->BoneIndicesAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ((this->BoneIndicesAttribute).AttributeArray)->field_0x8 = 1;
    pTVar2 = (this->BoneIndicesAttribute).AttributeArray;
    if ((((this->BoneWeightsAttribute).AttributeArray ==
          (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) ||
        ((this->BoneWeightsAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ((this->BoneWeightsAttribute).AttributeArray)->field_0x8 = 1;
    pTVar3 = (this->BoneWeightsAttribute).AttributeArray;
    if (((-1 < param_1) && (param_1 < *(int *)&pTVar2->field_0x18)) &&
       (param_1 < *(int *)&pTVar3->field_0x18)) {
      uVar13 = 0;
      uVar14 = (uint)~param_1 >> 0x1f;
      uVar6 = 0;
      if (param_1 < *(int *)&pTVar2->field_0x18) {
        uVar6 = uVar14;
      }
      local_58 = pTVar3;
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar10 = (longlong)param_1 * 0x10;
      pFVar12 = (ForAnyElementType *)(*(longlong *)&pTVar2->field_0x10 + lVar10);
      piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
      *(undefined4 *)&pFVar12[1].Data = 0;
      local_60 = lVar10;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,pFVar12,0,piVar1);
      }
      uVar6 = 0;
      if (param_1 < *(int *)&pTVar3->field_0x18) {
        uVar6 = uVar14;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar12 = (ForAnyElementType *)(*(longlong *)&pTVar3->field_0x10 + lVar10);
      piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
      *(undefined4 *)&pFVar12[1].Data = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,pFVar12,0,piVar1);
      }
      fVar15 = 0.0;
      lVar10 = 0;
      local_70 = param_2->ArrayNum;
      uVar9 = (ulonglong)(int)local_70;
      pFVar11 = (param_2->AllocatorInstance).Data;
      pFVar8 = pFVar11 + uVar9 * 4;
      local_68 = pFVar8;
      while( true ) {
        if (param_2->ArrayNum != (int)uVar9) {
          local_78[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_78);
          pFVar8 = local_68;
        }
        if (pFVar11 == pFVar8) break;
        if ((this->bInternalWeights == false) ||
           ((-1 < *(int *)pFVar11 &&
            (iVar7 = FManagedArrayCollection::NumElements
                               (this->ConstCollection,FTransformCollection::TransformGroup),
            pFVar8 = local_68, *(int *)pFVar11 < iVar7)))) {
          uVar6 = 0;
          if ((int)uVar13 < param_3->ArrayNum) {
            uVar6 = ~uVar13 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar13 = uVar13 + 1;
          local_74 = *(float *)((param_3->AllocatorInstance).Data + lVar10);
          local_50 = lVar10 + 4;
          uVar6 = 0;
          if (param_1 < *(int *)&pTVar2->field_0x18) {
            uVar6 = uVar14;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar12 = (ForAnyElementType *)(local_60 + *(longlong *)&pTVar2->field_0x10);
          if (((pFVar12->Data <= pFVar11) &&
              (pFVar11 < pFVar12->Data + (longlong)*(int *)((longlong)&pFVar12[1].Data + 4) * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = *(int *)&pFVar12[1].Data;
          piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,pFVar12,piVar1);
          }
          pTVar3 = local_58;
          *(int *)&pFVar12[1].Data = iVar7 + 1;
          *(int *)(pFVar12->Data + (longlong)iVar7 * 4) = *(int *)pFVar11;
          uVar6 = 0;
          if (param_1 < *(int *)&local_58->field_0x18) {
            uVar6 = uVar14;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar12 = (ForAnyElementType *)
                    (*(longlong *)&pTVar3->field_0x10 + (longlong)param_1 * 0x10);
          if (((pFVar12->Data <= (FScriptContainerElement *)&local_74) &&
              ((FScriptContainerElement *)&local_74 <
               pFVar12->Data + (longlong)*(int *)((longlong)&pFVar12[1].Data + 4) * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = *(int *)&pFVar12[1].Data;
          piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,pFVar12,piVar1);
          }
          *(int *)&pFVar12[1].Data = iVar7 + 1;
          *(float *)(pFVar12->Data + (longlong)iVar7 * 4) = local_74;
          fVar15 = fVar15 + local_74;
          pFVar8 = local_68;
          lVar10 = local_50;
        }
        pFVar11 = pFVar11 + 4;
        uVar9 = (ulonglong)local_70;
      }
      if (((fVar15 < __real_3f7ff972) || (__real_3f800347 < fVar15)) && (2 < (byte)LogChaos._0_1_))
      {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
    }
  }
  return;
}

// ModifyGeometryBinding @ 143ff08f0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
GeometryCollection::Facades::FVertexBoneWeightsFacade::ModifyGeometryBinding
          (FVertexBoneWeightsFacade *this,int param_1,TObjectPtr<UObject> *param_2,int param_3)

{
  TManagedArray<TObjectPtr<UObject>_> *pTVar1;
  TManagedArray<int> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  if (((this->SkeletalMeshAttribute).AttributeArray == (TManagedArray<TObjectPtr<UObject>_> *)0x0)
     || ((this->SkeletalMeshAttribute).Collection == (FManagedArrayCollection *)0x0)) {
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
  ((this->SkeletalMeshAttribute).AttributeArray)->field_0x8 = 1;
  pTVar1 = (this->SkeletalMeshAttribute).AttributeArray;
  if (((this->GeometryLODAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
     ((this->GeometryLODAttribute).Collection == (FManagedArrayCollection *)0x0)) {
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
  ((this->GeometryLODAttribute).AttributeArray)->field_0x8 = 1;
  pTVar2 = (this->GeometryLODAttribute).AttributeArray;
  if (-1 < param_1) {
    iVar6 = FManagedArrayCollection::NumElements
                      (this->ConstCollection,FGeometryCollection::GeometryGroup);
    if (param_1 < iVar6) {
      uVar7 = 0;
      if (param_1 < *(int *)&pTVar1->field_0x18) {
        uVar7 = (uint)~param_1 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar3 = *(longlong *)&pTVar1->field_0x10;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((param_2->field0_0x0).DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((param_2->field0_0x0).DebugPtr);
      }
      (((TObjectPtr<UObject>_u_0 *)(lVar3 + (longlong)param_1 * 8))->ObjectPtr).field0_0x0 =
           (FObjectPtr_u_0)param_2->field0_0x0;
      uVar7 = 0;
      if (param_1 < *(int *)&pTVar2->field_0x18) {
        uVar7 = (uint)~param_1 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(int *)(*(longlong *)&pTVar2->field_0x10 + (longlong)param_1 * 4) = param_3;
    }
  }
  return;
}

// ModifyKinematicWeight @ 143ff0ab0

void __thiscall
GeometryCollection::Facades::FVertexBoneWeightsFacade::ModifyKinematicWeight
          (FVertexBoneWeightsFacade *this,int param_1,float param_2)

{
  int iVar1;
  float local_res18 [4];
  
  if (((this->KinematicWeightAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0) &&
     (-1 < param_1)) {
    local_res18[0] = param_2;
    iVar1 = (**(code **)(*(longlong *)(this->KinematicWeightAttribute).ConstAttributeArray + 0x60))
                      ();
    if (param_1 < iVar1) {
      TManagedArrayAccessor<float>::ModifyAt(&this->KinematicWeightAttribute,param_1,local_res18);
    }
  }
  return;
}

// NormalizeBoneWeights @ 143ff2a30

void __thiscall
GeometryCollection::Facades::FVertexBoneWeightsFacade::NormalizeBoneWeights
          (FVertexBoneWeightsFacade *this)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  float *pfVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  if (((((this->BoneIndicesAttribute).ConstAttributeArray !=
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
       ((this->BoneWeightsAttribute).ConstAttributeArray !=
        (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
      ((this->KinematicWeightAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
     (((this->SkeletalMeshAttribute).ConstAttributeArray !=
       (TManagedArray<TObjectPtr<UObject>_> *)0x0 &&
      ((this->GeometryLODAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)))) {
    if ((((this->BoneWeightsAttribute).AttributeArray ==
          (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) ||
        ((this->BoneWeightsAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar6 = __real_38d1b717;
    ((this->BoneWeightsAttribute).AttributeArray)->field_0x8 = 1;
    pTVar4 = (this->BoneWeightsAttribute).AttributeArray;
    puVar10 = *(undefined8 **)&pTVar4->field_0x10;
    iVar2 = *(int *)&pTVar4->field_0x18;
    puVar11 = puVar10 + (longlong)iVar2 * 2;
    piVar9 = (int *)(puVar10 + 1);
    while( true ) {
      if (*(int *)&pTVar4->field_0x18 != iVar2) {
        `TCheckedPointerIterator<TArray<float,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (puVar10 == puVar11) break;
      pfVar8 = (float *)*puVar10;
      fVar12 = 0.0;
      iVar3 = *piVar9;
      pfVar1 = pfVar8 + iVar3;
      while( true ) {
        if (*piVar9 != iVar3) {
          `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pfVar8 == pfVar1) break;
        fVar12 = fVar12 + *pfVar8;
        pfVar8 = pfVar8 + 1;
      }
      if (fVar6 < fVar12) {
        pfVar8 = (float *)*puVar10;
        iVar3 = *piVar9;
        pfVar1 = pfVar8 + iVar3;
        while( true ) {
          if (*piVar9 != iVar3) {
            `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (pfVar8 == pfVar1) break;
          *pfVar8 = *pfVar8 / fVar12;
          pfVar8 = pfVar8 + 1;
        }
      }
      puVar10 = puVar10 + 2;
      piVar9 = piVar9 + 4;
    }
  }
  return;
}

// SetVertexArrayKinematic @ 144002530

void __thiscall
GeometryCollection::Facades::FVertexBoneWeightsFacade::SetVertexArrayKinematic
          (FVertexBoneWeightsFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  TManagedArray<float> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  if ((this->KinematicWeightAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0) {
    if ((((this->KinematicWeightAttribute).AttributeArray == (TManagedArray<float> *)0x0) ||
        ((this->KinematicWeightAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ((this->KinematicWeightAttribute).AttributeArray)->field_0x8 = 1;
    pFVar8 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pTVar4 = (this->KinematicWeightAttribute).AttributeArray;
    pFVar1 = pFVar8 + (longlong)iVar2 * 4;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar8 == pFVar1) break;
      uVar3 = *(uint *)pFVar8;
      if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)&pTVar4->field_0x18)) {
        uVar7 = 0;
        if ((int)uVar3 < *(int *)&pTVar4->field_0x18) {
          uVar7 = ~uVar3 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(float *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)uVar3 * 4) = (float)param_2;
      }
      pFVar8 = pFVar8 + 4;
    }
  }
  return;
}

// SetVertexKinematic @ 144002670

void __thiscall
GeometryCollection::Facades::FVertexBoneWeightsFacade::SetVertexKinematic
          (FVertexBoneWeightsFacade *this,int param_1,bool param_2)

{
  int iVar1;
  float local_res8 [2];
  
  if (((this->KinematicWeightAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0) &&
     (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->KinematicWeightAttribute).ConstAttributeArray + 0x60))
                      ();
    if (param_1 < iVar1) {
      local_res8[0] = (float)param_2;
      TManagedArrayAccessor<float>::ModifyAt(&this->KinematicWeightAttribute,param_1,local_res8);
    }
  }
  return;
}


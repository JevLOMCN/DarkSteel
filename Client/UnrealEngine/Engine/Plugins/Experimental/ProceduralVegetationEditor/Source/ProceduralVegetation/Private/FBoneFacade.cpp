// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 15

// FBoneFacade @ 14da60030

FBoneFacade * __thiscall
PV::Facades::FBoneFacade::FBoneFacade(FBoneFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FBoneFacade *pFVar4;
  FValueType *pFVar5;
  FValueType *pFVar6;
  FValueType *pFVar7;
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
  
  (this->BoneName).ConstCollection = param_1;
  pFVar5 = (FValueType *)0x0;
  (this->BoneName).Collection = param_1;
  (this->BoneName).Name = AttributeNames::BoneName;
  (this->BoneName).Group = GroupNames::BonesGroup;
  (this->BoneName).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneName).DefaultGroupDependency.Number = 0;
  local_b8 = AttributeNames::BoneName;
  local_b0 = GroupNames::BonesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_b8);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar5;
  }
  pFVar6 = pFVar5;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FStringType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoneFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->BoneName).AttributeArray = (TManagedArray<FString> *)pFVar6;
  (this->BoneName).ConstAttributeArray = (TManagedArray<FString> *)pFVar6;
  (this->BoneParentIndex).ConstCollection = param_1;
  (this->BoneParentIndex).Collection = param_1;
  (this->BoneParentIndex).Name = AttributeNames::BoneParentIndex;
  (this->BoneParentIndex).Group = GroupNames::BonesGroup;
  (this->BoneParentIndex).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneParentIndex).DefaultGroupDependency.Number = 0;
  local_a8 = AttributeNames::BoneParentIndex;
  local_a0 = GroupNames::BonesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_a8);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar5;
  }
  pFVar6 = pFVar5;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FInt32Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoneFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->BoneParentIndex).AttributeArray = (TManagedArray<int> *)pFVar6;
  (this->BoneParentIndex).ConstAttributeArray = (TManagedArray<int> *)pFVar6;
  (this->BoneId).ConstCollection = param_1;
  (this->BoneId).Collection = param_1;
  (this->BoneId).Name = AttributeNames::BoneId;
  (this->BoneId).Group = GroupNames::BonesGroup;
  (this->BoneId).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneId).DefaultGroupDependency.Number = 0;
  local_98 = AttributeNames::BoneId;
  local_90 = GroupNames::BonesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_98);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar5;
  }
  pFVar6 = pFVar5;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FInt32Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoneFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->BoneId).AttributeArray = (TManagedArray<int> *)pFVar6;
  (this->BoneId).ConstAttributeArray = (TManagedArray<int> *)pFVar6;
  (this->BonePose).ConstCollection = param_1;
  (this->BonePose).Collection = param_1;
  (this->BonePose).Name = AttributeNames::BonePose;
  (this->BonePose).Group = GroupNames::BonesGroup;
  (this->BonePose).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BonePose).DefaultGroupDependency.Number = 0;
  local_88 = AttributeNames::BonePose;
  local_80 = GroupNames::BonesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_88);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar5;
  }
  pFVar6 = pFVar5;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FTransformType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoneFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->BonePose).AttributeArray = (TManagedArray<UE::Math::TTransform<double>_> *)pFVar6;
  (this->BonePose).ConstAttributeArray = (TManagedArray<UE::Math::TTransform<double>_> *)pFVar6;
  (this->BonePointIndex).ConstCollection = param_1;
  (this->BonePointIndex).Collection = param_1;
  (this->BonePointIndex).Name = AttributeNames::BonePointIndex;
  (this->BonePointIndex).Group = GroupNames::BonesGroup;
  (this->BonePointIndex).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BonePointIndex).DefaultGroupDependency.Number = 0;
  local_78 = AttributeNames::BonePointIndex;
  local_70 = GroupNames::BonesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_78);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar5;
  }
  pFVar6 = pFVar5;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FInt32Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoneFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->BonePointIndex).AttributeArray = (TManagedArray<int> *)pFVar6;
  (this->BonePointIndex).ConstAttributeArray = (TManagedArray<int> *)pFVar6;
  (this->BoneAbsolutePosition).ConstCollection = param_1;
  (this->BoneAbsolutePosition).Collection = param_1;
  (this->BoneAbsolutePosition).Name = AttributeNames::BoneAbsolutePosition;
  (this->BoneAbsolutePosition).Group = GroupNames::BonesGroup;
  (this->BoneAbsolutePosition).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneAbsolutePosition).DefaultGroupDependency.Number = 0;
  local_68 = AttributeNames::BoneAbsolutePosition;
  local_60 = GroupNames::BonesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_68);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar5;
  }
  pFVar6 = pFVar5;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FVectorType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoneFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->BoneAbsolutePosition).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  (this->BoneAbsolutePosition).ConstAttributeArray =
       (TManagedArray<UE::Math::TVector<float>_> *)pFVar6;
  (this->BoneBranchIndex).ConstCollection = param_1;
  (this->BoneBranchIndex).Collection = param_1;
  (this->BoneBranchIndex).Name = AttributeNames::BoneBranchIndex;
  (this->BoneBranchIndex).Group = GroupNames::BonesGroup;
  (this->BoneBranchIndex).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneBranchIndex).DefaultGroupDependency.Number = 0;
  local_58 = AttributeNames::BoneBranchIndex;
  local_50 = GroupNames::BonesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar5;
  }
  pFVar6 = pFVar5;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FInt32Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoneFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->BoneBranchIndex).AttributeArray = (TManagedArray<int> *)pFVar6;
  (this->BoneBranchIndex).ConstAttributeArray = (TManagedArray<int> *)pFVar6;
  (this->VertexPointIds).ConstCollection = param_1;
  (this->VertexPointIds).Collection = param_1;
  (this->VertexPointIds).Name = AttributeNames::VertexPointIds;
  (this->VertexPointIds).Group = GroupNames::VerticesGroup;
  (this->VertexPointIds).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexPointIds).DefaultGroupDependency.Number = 0;
  local_48 = AttributeNames::VertexPointIds;
  local_40 = GroupNames::VerticesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar5;
  }
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FInt32Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar5 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBoneFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->VertexPointIds).AttributeArray = (TManagedArray<int> *)pFVar5;
  (this->VertexPointIds).ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  return this;
}

// FBoneFacade @ 14da60620

FBoneFacade * __thiscall
PV::Facades::FBoneFacade::FBoneFacade(FBoneFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FBoneFacade *pFVar4;
  char *pcVar5;
  TManagedArray<FString> *pTVar6;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar7;
  TManagedArray<UE::Math::TVector<float>_> *pTVar8;
  TManagedArray<int> *pTVar9;
  char *pcVar10;
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
  
  (this->BoneName).ConstCollection = param_1;
  pcVar10 = (char *)0x0;
  (this->BoneName).Collection = (FManagedArrayCollection *)0x0;
  (this->BoneName).Name = AttributeNames::BoneName;
  (this->BoneName).Group = GroupNames::BonesGroup;
  (this->BoneName).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneName).DefaultGroupDependency.Number = 0;
  (this->BoneName).AttributeArray = (TManagedArray<FString> *)0x0;
  local_b8 = AttributeNames::BoneName;
  local_b0 = GroupNames::BonesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_b8);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar10;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\b')) {
    pTVar6 = (TManagedArray<FString> *)0x0;
  }
  else {
    pTVar6 = *(TManagedArray<FString> **)(pcVar5 + 0x20);
    if (pTVar6 == (TManagedArray<FString> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBoneFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BoneName).ConstAttributeArray = pTVar6;
  (this->BoneParentIndex).ConstCollection = param_1;
  (this->BoneParentIndex).Collection = (FManagedArrayCollection *)0x0;
  (this->BoneParentIndex).Name = AttributeNames::BoneParentIndex;
  (this->BoneParentIndex).Group = GroupNames::BonesGroup;
  (this->BoneParentIndex).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneParentIndex).DefaultGroupDependency.Number = 0;
  (this->BoneParentIndex).AttributeArray = (TManagedArray<int> *)0x0;
  local_a8 = AttributeNames::BoneParentIndex;
  local_a0 = GroupNames::BonesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_a8);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar10;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x05')) {
    pTVar9 = (TManagedArray<int> *)0x0;
  }
  else {
    pTVar9 = *(TManagedArray<int> **)(pcVar5 + 0x20);
    if (pTVar9 == (TManagedArray<int> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBoneFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BoneParentIndex).ConstAttributeArray = pTVar9;
  (this->BoneId).ConstCollection = param_1;
  (this->BoneId).Collection = (FManagedArrayCollection *)0x0;
  (this->BoneId).Name = AttributeNames::BoneId;
  (this->BoneId).Group = GroupNames::BonesGroup;
  (this->BoneId).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneId).DefaultGroupDependency.Number = 0;
  (this->BoneId).AttributeArray = (TManagedArray<int> *)0x0;
  local_98 = AttributeNames::BoneId;
  local_90 = GroupNames::BonesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_98);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar10;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x05')) {
    pTVar9 = (TManagedArray<int> *)0x0;
  }
  else {
    pTVar9 = *(TManagedArray<int> **)(pcVar5 + 0x20);
    if (pTVar9 == (TManagedArray<int> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBoneFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BoneId).ConstAttributeArray = pTVar9;
  (this->BonePose).ConstCollection = param_1;
  (this->BonePose).Collection = (FManagedArrayCollection *)0x0;
  (this->BonePose).Name = AttributeNames::BonePose;
  (this->BonePose).Group = GroupNames::BonesGroup;
  (this->BonePose).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BonePose).DefaultGroupDependency.Number = 0;
  (this->BonePose).AttributeArray = (TManagedArray<UE::Math::TTransform<double>_> *)0x0;
  local_88 = AttributeNames::BonePose;
  local_80 = GroupNames::BonesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_88);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar10;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\a')) {
    pTVar7 = (TManagedArray<UE::Math::TTransform<double>_> *)0x0;
  }
  else {
    pTVar7 = *(TManagedArray<UE::Math::TTransform<double>_> **)(pcVar5 + 0x20);
    if (pTVar7 == (TManagedArray<UE::Math::TTransform<double>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBoneFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BonePose).ConstAttributeArray = pTVar7;
  (this->BonePointIndex).ConstCollection = param_1;
  (this->BonePointIndex).Collection = (FManagedArrayCollection *)0x0;
  (this->BonePointIndex).Name = AttributeNames::BonePointIndex;
  (this->BonePointIndex).Group = GroupNames::BonesGroup;
  (this->BonePointIndex).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BonePointIndex).DefaultGroupDependency.Number = 0;
  (this->BonePointIndex).AttributeArray = (TManagedArray<int> *)0x0;
  local_78 = AttributeNames::BonePointIndex;
  local_70 = GroupNames::BonesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_78);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar10;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x05')) {
    pTVar9 = (TManagedArray<int> *)0x0;
  }
  else {
    pTVar9 = *(TManagedArray<int> **)(pcVar5 + 0x20);
    if (pTVar9 == (TManagedArray<int> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBoneFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BonePointIndex).ConstAttributeArray = pTVar9;
  (this->BoneAbsolutePosition).ConstCollection = param_1;
  (this->BoneAbsolutePosition).Collection = (FManagedArrayCollection *)0x0;
  (this->BoneAbsolutePosition).Name = AttributeNames::BoneAbsolutePosition;
  (this->BoneAbsolutePosition).Group = GroupNames::BonesGroup;
  (this->BoneAbsolutePosition).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneAbsolutePosition).DefaultGroupDependency.Number = 0;
  (this->BoneAbsolutePosition).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_68 = AttributeNames::BoneAbsolutePosition;
  local_60 = GroupNames::BonesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_68);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar10;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x01')) {
    pTVar8 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  else {
    pTVar8 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar5 + 0x20);
    if (pTVar8 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBoneFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BoneAbsolutePosition).ConstAttributeArray = pTVar8;
  (this->BoneBranchIndex).ConstCollection = param_1;
  (this->BoneBranchIndex).Collection = (FManagedArrayCollection *)0x0;
  (this->BoneBranchIndex).Name = AttributeNames::BoneBranchIndex;
  (this->BoneBranchIndex).Group = GroupNames::BonesGroup;
  (this->BoneBranchIndex).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneBranchIndex).DefaultGroupDependency.Number = 0;
  (this->BoneBranchIndex).AttributeArray = (TManagedArray<int> *)0x0;
  local_58 = AttributeNames::BoneBranchIndex;
  local_50 = GroupNames::BonesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar10;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x05')) {
    pTVar9 = (TManagedArray<int> *)0x0;
  }
  else {
    pTVar9 = *(TManagedArray<int> **)(pcVar5 + 0x20);
    if (pTVar9 == (TManagedArray<int> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBoneFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BoneBranchIndex).ConstAttributeArray = pTVar9;
  (this->VertexPointIds).ConstCollection = param_1;
  (this->VertexPointIds).Collection = (FManagedArrayCollection *)0x0;
  (this->VertexPointIds).Name = AttributeNames::VertexPointIds;
  (this->VertexPointIds).Group = GroupNames::VerticesGroup;
  (this->VertexPointIds).DefaultGroupDependency.ComparisonIndex = 0;
  (this->VertexPointIds).DefaultGroupDependency.Number = 0;
  (this->VertexPointIds).AttributeArray = (TManagedArray<int> *)0x0;
  local_48 = AttributeNames::VertexPointIds;
  local_40 = GroupNames::VerticesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar10;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x05')) {
    (this->VertexPointIds).ConstAttributeArray = (TManagedArray<int> *)0x0;
  }
  else {
    pTVar9 = *(TManagedArray<int> **)(pcVar5 + 0x20);
    if (pTVar9 == (TManagedArray<int> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBoneFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
    (this->VertexPointIds).ConstAttributeArray = pTVar9;
  }
  return this;
}

// CreateBoneData @ 14da77870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014da79154) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
PV::Facades::FBoneFacade::CreateBoneData
          (FBoneFacade *this,TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *param_1,
          float param_2,bool param_3)

{
  ulonglong uVar1;
  float fVar2;
  longlong lVar3;
  int *piVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  undefined1 auVar9 [12];
  FName FVar10;
  undefined8 uVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  longlong *plVar19;
  bool bVar20;
  undefined1 uVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar30;
  FBoneNode *pFVar31;
  float *pfVar32;
  ForAnyElementType FVar33;
  TArray<int,TSizedDefaultAllocator<32>_> *extraout_RAX;
  TArray<int,TSizedDefaultAllocator<32>_> *extraout_RAX_00;
  undefined7 extraout_var;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar34;
  TArray<int,TSizedDefaultAllocator<32>_> *extraout_RAX_01;
  TArray<int,TSizedDefaultAllocator<32>_> *extraout_RAX_02;
  byte bVar35;
  FName *pFVar36;
  longlong lVar37;
  ForAnyElementType FVar38;
  FScriptContainerElement *pFVar39;
  FIdentityFunctor FVar40;
  uint uVar41;
  longlong lVar42;
  FScriptContainerElement *pFVar43;
  longlong lVar44;
  TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *pTVar45;
  uint uVar46;
  FScriptContainerElement *pFVar47;
  int *piVar48;
  uint *puVar49;
  TManagedArray<UE::Math::TVector<float>_> *pTVar50;
  float fVar51;
  FName FVar52;
  FName FVar54;
  undefined1 auVar53 [16];
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auStackY_14c8 [32];
  FIdentityFunctor local_1478;
  undefined1 local_1477;
  undefined1 local_1476 [6];
  ForAnyElementType local_1470;
  undefined8 local_1468;
  uint local_1460;
  TArray<PV::Facades::FConnectingSegment,TSizedDefaultAllocator<32>_> local_1458;
  ForAnyElementType local_1448;
  undefined8 local_1440;
  ForAnyElementType local_1438;
  int local_1430;
  int local_142c;
  uint local_1428;
  uint local_1424;
  uint local_1420;
  uint local_141c;
  TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *local_1418;
  TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> local_1410;
  TManagedArray<UE::Math::TVector<float>_> *local_1400;
  longlong local_13f8;
  undefined1 local_13f0 [12];
  uint uStack_13e4;
  FName local_13e0;
  undefined8 uStack_13d8;
  undefined8 local_13d0;
  int iStack_13c8;
  undefined4 uStack_13c4;
  int local_13c0;
  uint uStack_13bc;
  FName FStack_13b8;
  uint local_13b0;
  uint uStack_13ac;
  uint uStack_13a8;
  undefined4 uStack_13a4;
  TArray<int,TSizedDefaultAllocator<32>_> local_13a0;
  uint local_1390;
  longlong local_1388;
  longlong local_1380;
  FString local_1378;
  TVector<double>_u_0 local_1368;
  int local_1350;
  int local_134c;
  FString local_1348;
  FString local_1338;
  FName local_1328;
  double local_1320;
  double dStack_1318;
  undefined8 local_1310;
  FPlantFacade *local_1308;
  longlong *local_1300;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_12f8;
  undefined8 uStack_12d8;
  FString local_12d0;
  TVector<double>_u_0 local_12c0;
  longlong *local_12a8;
  undefined8 uStack_12a0;
  FName local_1298;
  undefined8 uStack_1290;
  undefined8 local_1288;
  undefined8 uStack_1280;
  FName local_1278;
  FNameEntryId FStack_1270;
  uint uStack_126c;
  FNameEntryId local_1268;
  uint uStack_1264;
  FNameEntryId FStack_1260;
  uint uStack_125c;
  FName local_1258;
  FName FStack_1250;
  FName local_1248;
  FName FStack_1240;
  FName local_1238;
  FName FStack_1230;
  FName local_1228;
  FName FStack_1220;
  FName local_1218;
  FName FStack_1210;
  FName local_1208;
  FName FStack_1200;
  undefined1 local_11f8 [16];
  FName local_11e8;
  undefined8 uStack_11e0;
  FName local_11d8;
  FName FStack_11d0;
  FName local_11c8;
  FPlantFacade local_11b8;
  undefined4 local_10ac;
  FBranchFacade local_10a8;
  FPointFacade local_db8;
  FBranchFacade local_988;
  FPointFacade local_698;
  undefined1 local_268 [40];
  uint local_240;
  int local_234;
  void *local_228;
  undefined4 local_220;
  FName local_218;
  FNameEntryId FStack_210;
  uint uStack_20c;
  FNameEntryId local_208;
  uint uStack_204;
  FNameEntryId FStack_200;
  uint uStack_1fc;
  FName local_1f8;
  FName FStack_1f0;
  FName local_1e8;
  FName FStack_1e0;
  FName local_1d8;
  FName FStack_1d0;
  FName local_1c8;
  FName FStack_1c0;
  FName local_1b8;
  FName FStack_1b0;
  FName local_1a8;
  FName FStack_1a0;
  FName local_198;
  FName FStack_190;
  double local_188;
  undefined8 uStack_180;
  FName local_178;
  FNameEntryId FStack_170;
  uint uStack_16c;
  FNameEntryId FStack_168;
  uint uStack_164;
  FNameEntryId FStack_160;
  uint uStack_15c;
  FName local_158;
  FName FStack_150;
  FName local_148;
  FName FStack_140;
  FName local_138;
  FName FStack_130;
  FName local_128;
  FName FStack_120;
  FName local_118;
  FName FStack_110;
  FName local_108;
  FName FStack_100;
  FName local_f8;
  FName FStack_f0;
  FName local_e8;
  FName FStack_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_14c8;
  local_1418 = param_1;
  FPointFacade::FPointFacade(&local_db8,(this->VertexPointIds).ConstCollection);
  FBranchFacade::FBranchFacade(&local_10a8,(this->VertexPointIds).ConstCollection);
  FPlantFacade::FPlantFacade(&local_11b8,(this->VertexPointIds).ConstCollection);
  bVar20 = Utilities::IsValidPVData((this->VertexPointIds).ConstCollection);
  if ((((bVar20) && (local_11b8.PlantNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
      (local_11b8.BranchNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
     ((local_11b8.BranchParentNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
      (local_11b8.BranchHierarchyNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)))) {
    if (param_3) {
      if (((this->VertexPointIds).Collection == (FManagedArrayCollection *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!IsConst()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x2b,L""), bVar20)) {
        pcVar5 = (code *)swi(3);
        uVar21 = (*pcVar5)();
        return (bool)uVar21;
      }
      if (((this->BoneName).Collection == (FManagedArrayCollection *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!IsConst()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x2b,L""), bVar20)) {
        pcVar5 = (code *)swi(3);
        uVar21 = (*pcVar5)();
        return (bool)uVar21;
      }
      FPointFacade::FPointFacade(&local_698,(this->BoneName).Collection);
      if (((this->BoneName).Collection == (FManagedArrayCollection *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!IsConst()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x2b,L""), bVar20)) {
        pcVar5 = (code *)swi(3);
        uVar21 = (*pcVar5)();
        return (bool)uVar21;
      }
      FBranchFacade::FBranchFacade(&local_988,(this->BoneName).Collection);
      SetBranchSimulationGroupIndex(&local_698,&local_988);
    }
    local_1400 = local_db8.Positions.ConstAttributeArray;
    if ((local_db8.Positions.ConstAttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0)
       && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x67,L""), bVar20)) {
      pcVar5 = (code *)swi(3);
      uVar21 = (*pcVar5)();
      return (bool)uVar21;
    }
    ::FName::FName(&local_178,"Root");
    fVar18 = __real_3f800000;
    iVar23 = param_1->ArrayNum;
    local_158 = (FName)(double)GlobalVectorConstants::Float0001.m128_f32[0];
    FStack_150 = (FName)(double)GlobalVectorConstants::Float0001.m128_f32[1];
    FStack_170.Value = 0;
    uStack_16c = 0xffffffff;
    FStack_168.Value = 0xffffffff;
    uStack_164 = 0xffffffff;
    FStack_160.Value = 0x3f800000;
    local_148 = (FName)(double)GlobalVectorConstants::Float0001.m128_f32[2];
    FStack_140 = (FName)(double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_e8 = (FName)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_138 = (FName)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    FStack_130 = (FName)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_128 = (FName)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    FStack_120.ComparisonIndex.Value = 0;
    FStack_120.Number = 0;
    local_118 = (FName)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    FStack_110 = (FName)(double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_108 = (FName)(double)GlobalVectorConstants::Float1110.m128_f32[2];
    FStack_100 = (FName)(double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_f8 = (FName)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    FStack_f0 = (FName)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (iVar23 == param_1->ArrayMax) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10a0,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar23 + 1;
    local_1460 = 1;
    pFVar36 = (FName *)((param_1->AllocatorInstance).Data + (longlong)iVar23 * 0xa0);
    FVar6.Number = uStack_16c;
    FVar6.ComparisonIndex.Value = FStack_170.Value;
    *pFVar36 = local_178;
    pFVar36[1] = FVar6;
    FVar7.Number = uStack_164;
    FVar7.ComparisonIndex.Value = FStack_168.Value;
    FVar8.Number = uStack_15c;
    FVar8.ComparisonIndex.Value = FStack_160.Value;
    pFVar36[2] = FVar7;
    pFVar36[3] = FVar8;
    pFVar36[4] = local_158;
    pFVar36[5] = FStack_150;
    pFVar36[6] = local_148;
    pFVar36[7] = FStack_140;
    pFVar36[8] = local_138;
    pFVar36[9] = FStack_130;
    pFVar36[10] = local_128;
    pFVar36[0xb] = FStack_120;
    pFVar36[0xc] = local_118;
    pFVar36[0xd] = FStack_110;
    pFVar36[0xe] = local_108;
    pFVar36[0xf] = FStack_100;
    pFVar36[0x10] = local_f8;
    pFVar36[0x11] = FStack_f0;
    pFVar36[0x12] = local_e8;
    pFVar36[0x13] = FStack_e0;
    FPlantFacade::GetPlantNumbersToTrunkIndicesMap
              (&local_11b8,
               (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
               local_268);
    uVar29 = local_240;
    local_13f0._8_4_ = 0;
    local_13d0._0_4_ = 0;
    uStack_13e4 = 1;
    uStack_13d8._4_4_ = 0;
    if (local_240 != 0) {
      puVar49 = (uint *)(local_268 + 0x10);
      if ((uint *)local_268._32_8_ != (uint *)0x0) {
        puVar49 = (uint *)local_268._32_8_;
      }
      uStack_13e4 = *puVar49;
      while (uStack_13e4 == 0) {
        lVar37 = (longlong)(int)local_13f0._8_4_;
        local_13d0._0_4_ = (int)local_13d0 + 0x20;
        local_13f0._8_4_ = local_13f0._8_4_ + 1;
        uStack_13e4 = 1;
        uStack_13d8._4_4_ = local_240;
        if ((int)((local_240 - 1) + ((int)(local_240 - 1) >> 0x1f & 0x1fU)) >> 5 <
            (int)local_13f0._8_4_) goto LAB_14da77cb1;
        uStack_13e4 = puVar49[lVar37 + 1];
      }
      uStack_13e4 = ~(uStack_13e4 - 1) & uStack_13e4;
      uVar1 = (ulonglong)uStack_13e4 * 2 + 1;
      lVar37 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar37 == 0; lVar37 = lVar37 + -1) {
        }
      }
      local_1350 = (int)lVar37;
      uStack_13d8._4_4_ = (int)local_13d0 + -1 + local_1350;
      if ((int)local_240 < (int)uStack_13d8._4_4_) {
        uStack_13d8._4_4_ = local_240;
      }
    }
LAB_14da77cb1:
    local_1300 = (longlong *)local_268;
    iStack_13c8 = local_268._8_4_ - local_234;
    local_13e0 = (FName)((longlong)local_268 + 0x10);
    uVar46 = local_240 & 0xffffffe0;
    local_13f0._0_8_ = local_1300;
    bVar35 = (byte)local_240 & 0x1f;
    uStack_13d8._0_4_ = 0xffffffff;
    uStack_13bc = 1 << bVar35;
    iVar23 = (int)local_240 >> 5;
    uVar41 = -1 << bVar35;
    local_13d0._4_4_ = local_10ac;
    FStack_13b8 = (FName)((longlong)local_268 + 0x10);
    uStack_13ac = local_240;
    TStack_12f8._padding_ = (longlong)stack0xffffffffffffec18;
    uStack_12d8 = CONCAT44(uStack_13c4,iStack_13c8);
    TStack_12f8.UnvisitedBitMask = 0xffffffff;
    TStack_12f8.CurrentBitIndex = uStack_13d8._4_4_;
    TStack_12f8.BaseBitIndex = (int)local_13d0;
    TStack_12f8._28_4_ = local_10ac;
    local_13c0 = iVar23;
    local_13b0 = uVar41;
    uStack_13a8 = uVar46;
    TStack_12f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_13e0;
    if (((int)local_240 < 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar20)) {
      pcVar5 = (code *)swi(3);
      uVar21 = (*pcVar5)();
      return (bool)uVar21;
    }
    fVar17 = __real_38d1b717;
    if (uVar29 != local_240) {
      puVar49 = (uint *)(local_268 + 0x10);
      if ((uint *)local_268._32_8_ != (uint *)0x0) {
        puVar49 = (uint *)local_268._32_8_;
      }
      uVar41 = uVar41 & puVar49[iVar23];
      while (uVar41 == 0) {
        uStack_13a8 = uVar46 + 0x20;
        local_13c0 = iVar23 + 1;
        uStack_13ac = local_240;
        if ((int)((local_240 - 1) + ((int)(local_240 - 1) >> 0x1f & 0x1fU)) >> 5 < local_13c0)
        goto LAB_14da77e0f;
        uVar41 = puVar49[(longlong)iVar23 + 1];
        local_13b0 = 0xffffffff;
        uVar46 = uStack_13a8;
        iVar23 = local_13c0;
      }
      uStack_13bc = ~(uVar41 - 1) & uVar41;
      uVar1 = (ulonglong)uStack_13bc * 2 + 1;
      lVar37 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar37 == 0; lVar37 = lVar37 + -1) {
        }
      }
      local_134c = (int)lVar37;
      uStack_13ac = local_134c + -1 + uVar46;
      if ((int)local_240 < (int)uStack_13ac) {
        uStack_13ac = local_240;
      }
    }
LAB_14da77e0f:
    uStack_12a0 = CONCAT44(uStack_13bc,local_13c0);
    local_12a8 = (longlong *)local_268;
    uStack_13d8 = CONCAT44(uStack_13ac,local_13b0);
    local_13d0 = CONCAT44(uStack_13a4,uStack_13a8);
    local_13e0 = FStack_13b8;
    stack0xffffffffffffec18 = (double)uStack_12a0;
    local_13f0._0_8_ = local_12a8;
    iStack_13c8 = local_268._8_4_ - local_234;
    uStack_1280 = CONCAT44(uStack_13c4,iStack_13c8);
    local_1298 = FStack_13b8;
    pTVar45 = local_1418;
    pTVar50 = local_db8.Positions.ConstAttributeArray;
    FVar40 = local_1478;
    uStack_1290 = uStack_13d8;
    local_1288 = local_13d0;
    while( true ) {
      plVar19 = local_1300;
      if ((int)local_1300[1] - *(int *)((longlong)local_1300 + 0x34) != (int)uStack_12d8) {
        local_1477 = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1477);
      }
      if (((TStack_12f8.CurrentBitIndex == uStack_1290._4_4_) &&
          ((FName)TStack_12f8.Array == local_1298)) && (plVar19 == local_12a8)) break;
      lVar37 = *(longlong *)(*plVar19 + (longlong)TStack_12f8.CurrentBitIndex * 0x10);
      uVar29 = (uint)((ulonglong)lVar37 >> 0x20);
      if (((local_10a8.BranchPoints.ConstAttributeArray ==
            (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || (lVar37 < 0)) ||
         (iVar23 = (**(code **)(*(longlong *)local_10a8.BranchPoints.ConstAttributeArray + 0x60))(),
         iVar23 <= (int)uVar29)) {
        local_13f8 = 0x9d4c;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
                 _dynamic_atexit_destructor_for__EmptyPoints__);
          _Init_thread_footer(&::_TSS0);
        }
        pTVar30 = &EmptyPoints;
      }
      else {
        pTVar30 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                            (&local_10a8.BranchPoints,uVar29);
        local_13f8 = 0x9d4c;
      }
      if ((pTVar30->ArrayNum < 1) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("BranchFacade.GetPoints(TrunkIndex).Num() > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVBoneFacade.cpp"
                              ,0x117,L""), bVar20)) {
        pcVar5 = (code *)swi(3);
        uVar21 = (*pcVar5)();
        return (bool)uVar21;
      }
      if (((local_10a8.BranchPoints.ConstAttributeArray ==
            (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || (lVar37 < 0)) ||
         (iVar23 = (**(code **)(*(longlong *)local_10a8.BranchPoints.ConstAttributeArray + 0x60))(),
         iVar23 <= (int)uVar29)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
                 _dynamic_atexit_destructor_for__EmptyPoints__);
          _Init_thread_footer(&::_TSS0);
        }
        pTVar30 = &EmptyPoints;
      }
      else {
        pTVar30 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                            (&local_10a8.BranchPoints,uVar29);
      }
      if ((pTVar30->ArrayNum < 1) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        uVar21 = (*pcVar5)();
        return (bool)uVar21;
      }
      uVar41 = *(uint *)(pTVar30->AllocatorInstance).Data;
      lVar42 = (longlong)(int)uVar41;
      iVar23 = (**(code **)(*(longlong *)pTVar50 + 0x60))(pTVar50);
      if (((iVar23 < 1) ||
          (iVar23 = (**(code **)(*(longlong *)pTVar50 + 0x60))(pTVar50), iVar23 < (int)uVar41)) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Positions.Num() > 0 && Positions.Num() >= RootPointIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVBoneFacade.cpp"
                              ,0x11a,L""), bVar20)) {
        pcVar5 = (code *)swi(3);
        uVar21 = (*pcVar5)();
        return (bool)uVar21;
      }
      uVar46 = 0;
      if ((int)uVar41 < *(int *)&pTVar50->field_0x18) {
        uVar46 = ~uVar41 >> 0x1f;
      }
      if ((uVar46 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar5 = (code *)swi(3);
        uVar21 = (*pcVar5)();
        return (bool)uVar21;
      }
      lVar44 = *(longlong *)&pTVar50->field_0x10;
      FVar6 = (FName)(double)*(float *)(lVar44 + 8 + lVar42 * 0xc);
      FVar8 = (FName)(double)*(float *)(lVar44 + 4 + lVar42 * 0xc);
      FVar7 = (FName)(double)*(float *)(lVar44 + lVar42 * 0xc);
      ::FName::FName(&local_218,"Root");
      pTVar45 = local_1418;
      FStack_210.Value = local_1460;
      local_1460 = local_1460 + 1;
      local_1f8 = (FName)(double)GlobalVectorConstants::Float0001.m128_f32[0];
      FStack_1f0 = (FName)(double)GlobalVectorConstants::Float0001.m128_f32[1];
      iVar23 = local_1418->ArrayNum;
      uStack_20c = 0;
      FStack_200.Value = 0x3f800000;
      local_1e8 = (FName)(double)GlobalVectorConstants::Float0001.m128_f32[2];
      FStack_1e0 = (FName)(double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_1b8 = (FName)(double)GlobalVectorConstants::Float1110.m128_f32[0];
      FStack_1b0 = (FName)(double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_1a8 = (FName)(double)GlobalVectorConstants::Float1110.m128_f32[2];
      FStack_1a0 = (FName)(double)GlobalVectorConstants::Float1110.m128_f32[3];
      FStack_1c0.ComparisonIndex.Value = 0;
      FStack_1c0.Number = 0;
      local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_198 = (FName)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      FStack_190 = (FName)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_208.Value = uVar41;
      uStack_204 = uVar29;
      local_1d8 = FVar7;
      FStack_1d0 = FVar8;
      local_1c8 = FVar6;
      if (iVar23 == local_1418->ArrayMax) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10a0,&local_1418->AllocatorInstance,&local_1418->ArrayMax);
      }
      pTVar45->ArrayNum = iVar23 + 1;
      FVar10.Number = uStack_20c;
      FVar10.ComparisonIndex.Value = FStack_210.Value;
      pFVar36 = (FName *)((pTVar45->AllocatorInstance).Data + (longlong)iVar23 * 0xa0);
      *pFVar36 = local_218;
      pFVar36[1] = FVar10;
      FVar52.Number = uStack_204;
      FVar52.ComparisonIndex.Value = local_208.Value;
      FVar54.Number = uStack_1fc;
      FVar54.ComparisonIndex.Value = FStack_200.Value;
      pFVar36[2] = FVar52;
      pFVar36[3] = FVar54;
      pFVar36[4] = local_1f8;
      pFVar36[5] = FStack_1f0;
      pFVar36[6] = local_1e8;
      pFVar36[7] = FStack_1e0;
      pFVar36[8] = local_1d8;
      pFVar36[9] = FStack_1d0;
      pFVar36[10] = local_1c8;
      pFVar36[0xb] = FStack_1c0;
      pFVar36[0xc] = local_1b8;
      pFVar36[0xd] = FStack_1b0;
      pFVar36[0xe] = local_1a8;
      pFVar36[0xf] = FStack_1a0;
      pFVar36[0x10] = local_198;
      pFVar36[0x11] = FStack_190;
      auVar16._8_8_ = uStack_180;
      auVar16._0_8_ = local_188;
      *(undefined1 (*) [16])(pFVar36 + 0x12) = auVar16;
      local_1428 = FStack_210.Value;
      FPlantFacade::GetBranchIndices(&local_11b8,&local_13a0,(int)lVar37);
      local_1308 = &local_11b8;
      AlgoImpl::
      IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_PV::Facades::FPlantFacade::GetBranchIndicesSortedByHierarchyNumber_::__l2::<lambda_1>_>_>
                ((int *)local_13a0.AllocatorInstance.Data,local_13a0.ArrayNum,FVar40,
                 (<lambda_1> *)&local_1308);
      if (local_13a0.ArrayNum == 0) {
        if (4 < (byte)LogProceduralVegetation._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
        }
        if (local_13a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_13a0.AllocatorInstance.Data);
        }
      }
      else {
        local_141c = 0;
        if (0 < local_13a0.ArrayNum) {
          local_1380 = 0;
          lVar37 = 0x9d4c;
          do {
            lVar42 = local_1380;
            uVar29 = 0;
            if ((int)local_141c < local_13a0.ArrayNum) {
              uVar29 = ~local_141c >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar5 = (code *)swi(3);
              uVar21 = (*pcVar5)();
              return (bool)uVar21;
            }
            uVar29 = *(uint *)(local_13a0.AllocatorInstance.Data + lVar42);
            local_1424 = uVar29;
            if (((local_10a8.BranchNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0) &&
                (-1 < (int)uVar29)) &&
               (iVar23 = (**(code **)(*(longlong *)local_10a8.BranchNumbers.ConstAttributeArray +
                                     0x60))(), (int)uVar29 < iVar23)) {
              TManagedArrayAccessor<int>::operator[](&local_10a8.BranchNumbers,uVar29);
            }
            if (((local_10a8.BranchPoints.ConstAttributeArray ==
                  (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
                ((int)uVar29 < 0)) ||
               (iVar23 = (**(code **)(*(longlong *)local_10a8.BranchPoints.ConstAttributeArray +
                                     0x60))(), iVar23 <= (int)uVar29)) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           lVar37) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
                       _dynamic_atexit_destructor_for__EmptyPoints__);
                _Init_thread_footer(&::_TSS0);
              }
              pTVar30 = &EmptyPoints;
            }
            else {
              pTVar30 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                                  (&local_10a8.BranchPoints,uVar29);
            }
            local_1438.Data = (FScriptContainerElement *)0x0;
            local_1430 = pTVar30->ArrayNum;
            lVar37 = (longlong)local_1430;
            pFVar47 = (pTVar30->AllocatorInstance).Data;
            if (local_1430 == 0) {
              local_142c = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_1430,0,&local_1438,local_1430,&local_142c);
              memcpy(local_1438.Data,pFVar47,lVar37 << 2);
            }
            if ((local_1430 < 1) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("BranchPoints.IsValidIndex(0)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVBoneFacade.cpp"
                                    ,0x130,L""), bVar20)) {
              pcVar5 = (code *)swi(3);
              uVar21 = (*pcVar5)();
              return (bool)uVar21;
            }
            iVar24 = FBranchFacade::GetParentIndex(&local_10a8,uVar29);
            pTVar45 = local_1418;
            iVar23 = 0;
            local_1410.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1410.ArrayNum = 0;
            local_1410.ArrayMax = 0;
            iVar28 = local_1418->ArrayNum;
            pFVar47 = (local_1418->AllocatorInstance).Data;
            pFVar43 = pFVar47 + (longlong)iVar28 * 0xa0;
            while( true ) {
              if (pTVar45->ArrayNum != iVar28) {
                local_1476[0] = 0;
                `TCheckedPointerIterator<PV::Facades::FBoneNode_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_1476);
                iVar23 = local_1410.ArrayNum;
              }
              lVar37 = local_13f8;
              if (pFVar47 == pFVar43) break;
              if (iVar24 == *(int *)(pFVar47 + 0x14)) {
                iVar25 = iVar23;
                if ((local_1410.AllocatorInstance.Data <= pFVar47) &&
                   (pFVar47 < local_1410.AllocatorInstance.Data +
                              (longlong)local_1410.ArrayMax * 0xa0)) {
                  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar20) {
                    pcVar5 = (code *)swi(3);
                    uVar21 = (*pcVar5)();
                    return (bool)uVar21;
                  }
                  iVar25 = local_1410.ArrayNum;
                }
                if (iVar25 == local_1410.ArrayMax) {
                  iVar25 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x10a0,&local_1410.AllocatorInstance,&local_1410.ArrayMax);
                }
                iVar23 = iVar25 + 1;
                local_1410.ArrayNum = iVar23;
                uVar11 = *(undefined8 *)(pFVar47 + 8);
                pFVar39 = local_1410.AllocatorInstance.Data + (longlong)iVar25 * 0xa0;
                *(undefined8 *)pFVar39 = *(undefined8 *)pFVar47;
                *(undefined8 *)(pFVar39 + 8) = uVar11;
                uVar11 = *(undefined8 *)(pFVar47 + 0x18);
                *(undefined8 *)(pFVar39 + 0x10) = *(undefined8 *)(pFVar47 + 0x10);
                *(undefined8 *)(pFVar39 + 0x18) = uVar11;
                uVar11 = *(undefined8 *)(pFVar47 + 0x28);
                *(undefined8 *)(pFVar39 + 0x20) = *(undefined8 *)(pFVar47 + 0x20);
                *(undefined8 *)(pFVar39 + 0x28) = uVar11;
                uVar11 = *(undefined8 *)(pFVar47 + 0x38);
                *(undefined8 *)(pFVar39 + 0x30) = *(undefined8 *)(pFVar47 + 0x30);
                *(undefined8 *)(pFVar39 + 0x38) = uVar11;
                uVar11 = *(undefined8 *)(pFVar47 + 0x48);
                *(undefined8 *)(pFVar39 + 0x40) = *(undefined8 *)(pFVar47 + 0x40);
                *(undefined8 *)(pFVar39 + 0x48) = uVar11;
                uVar11 = *(undefined8 *)(pFVar47 + 0x58);
                *(undefined8 *)(pFVar39 + 0x50) = *(undefined8 *)(pFVar47 + 0x50);
                *(undefined8 *)(pFVar39 + 0x58) = uVar11;
                uVar11 = *(undefined8 *)(pFVar47 + 0x68);
                *(undefined8 *)(pFVar39 + 0x60) = *(undefined8 *)(pFVar47 + 0x60);
                *(undefined8 *)(pFVar39 + 0x68) = uVar11;
                uVar11 = *(undefined8 *)(pFVar47 + 0x78);
                *(undefined8 *)(pFVar39 + 0x70) = *(undefined8 *)(pFVar47 + 0x70);
                *(undefined8 *)(pFVar39 + 0x78) = uVar11;
                uVar11 = *(undefined8 *)(pFVar47 + 0x88);
                *(undefined8 *)(pFVar39 + 0x80) = *(undefined8 *)(pFVar47 + 0x80);
                *(undefined8 *)(pFVar39 + 0x88) = uVar11;
                *(undefined1 (*) [16])(pFVar39 + 0x90) = *(undefined1 (*) [16])(pFVar47 + 0x90);
              }
              pFVar47 = pFVar47 + 0xa0;
            }
            local_1348.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1348.Data.ArrayNum = 0;
            local_1348.Data.ArrayMax = 0;
            if ((local_1430 < 1) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar5 = (code *)swi(3);
              uVar21 = (*pcVar5)();
              return (bool)uVar21;
            }
            pFVar31 = FindBoneForPoint(&local_db8,&local_1410,*(int *)local_1438.Data,&local_1348,
                                       true,fVar18);
            if (pFVar31 == (FBoneNode *)0x0) {
              FVar10 = FVar6;
              FVar52 = FVar7;
              FVar54 = FVar8;
              FVar12 = FVar7;
              FVar13 = FVar8;
              FVar14 = FVar6;
              if ((local_141c != 0) && (4 < (byte)LogProceduralVegetation._0_1_)) {
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
              }
            }
            else {
              local_1428 = pFVar31->BoneIndex;
              FVar10 = (FName)(pFVar31->AbsolutePosition).field0_0x0._s_0.Z;
              FVar52 = (FName)(pFVar31->AbsolutePosition).field0_0x0._s_0.X;
              FVar54 = (FName)(pFVar31->AbsolutePosition).field0_0x0._s_0.Y;
              FVar12 = local_11d8;
              FVar13 = FStack_11d0;
              FVar14 = local_11c8;
            }
            local_11c8 = FVar14;
            FStack_11d0 = FVar13;
            local_11d8 = FVar12;
            local_1448.Data = (FScriptContainerElement *)0x0;
            local_1440 = 0;
            local_1458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1458.ArrayNum = 0;
            local_1458.ArrayMax = 0;
            local_1470.Data = (FScriptContainerElement *)0x0;
            local_1468._0_4_ = 0;
            local_1468._4_4_ = 0;
            local_1420 = 0;
            local_1388 = 0;
            local_13f0._8_4_ = FVar54.ComparisonIndex.Value;
            uStack_13e4 = FVar54.Number;
            local_13f0._0_4_ = FVar52.ComparisonIndex.Value;
            local_13f0._4_4_ = FVar52.Number;
            local_13e0 = FVar10;
            if (0 < local_1430) {
              do {
                lVar42 = local_1388;
                uVar41 = local_1420;
                uVar26 = 0;
                uVar46 = uVar26;
                if ((int)local_1420 < local_1430) {
                  uVar46 = ~local_1420 >> 0x1f;
                }
                if ((uVar46 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar5 = (code *)swi(3);
                  uVar21 = (*pcVar5)();
                  return (bool)uVar21;
                }
                uVar46 = *(uint *)(local_1438.Data + lVar42 * 4);
                lVar44 = (longlong)(int)uVar46;
                local_1390 = uVar46;
                iVar23 = (**(code **)(*(longlong *)pTVar50 + 0x60))(pTVar50);
                if (((iVar23 <= (int)uVar46) || ((int)uVar46 < 0)) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Positions.Num() > PointIdx && PointIdx >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVBoneFacade.cpp"
                                        ,0x14c,L""), bVar20)) {
                  pcVar5 = (code *)swi(3);
                  uVar21 = (*pcVar5)();
                  return (bool)uVar21;
                }
                uVar27 = uVar26;
                if ((int)uVar46 < *(int *)&pTVar50->field_0x18) {
                  uVar27 = ~uVar46 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar20)) {
                  pcVar5 = (code *)swi(3);
                  uVar21 = (*pcVar5)();
                  return (bool)uVar21;
                }
                lVar3 = *(longlong *)&pTVar50->field_0x10;
                local_1368._s_0.Z = (double)*(float *)(lVar3 + 8 + lVar44 * 0xc);
                local_1368._s_0.Y = (double)*(float *)(lVar3 + 4 + lVar44 * 0xc);
                local_1368._s_0.X = (double)*(float *)(lVar3 + lVar44 * 0xc);
                if (((local_db8.PointScale.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
                    ((int)uVar46 < 0)) ||
                   (iVar23 = (**(code **)(*(longlong *)local_db8.PointScale.ConstAttributeArray +
                                         0x60))(), iVar23 <= (int)uVar46)) {
                  pfVar32 = &DefaultPScale;
                }
                else {
                  pfVar32 = TManagedArrayAccessor<float>::operator[](&local_db8.PointScale,uVar46);
                }
                fVar55 = *pfVar32;
                uVar41 = uVar41 + 1;
                dStack_1318 = local_1368._s_0.Y;
                local_1320 = local_1368._s_0.X;
                local_1310 = local_1368._s_0.Z;
                if ((int)uVar41 < local_1430) {
                  uVar27 = uVar26;
                  if ((int)uVar41 < local_1430) {
                    uVar27 = ~uVar41 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar5 = (code *)swi(3);
                    uVar21 = (*pcVar5)();
                    return (bool)uVar21;
                  }
                  uVar41 = *(uint *)(local_1438.Data + lVar42 * 4 + 4);
                  lVar42 = (longlong)(int)uVar41;
                  if ((int)uVar41 < *(int *)&pTVar50->field_0x18) {
                    uVar26 = ~uVar41 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar5 = (code *)swi(3);
                    uVar21 = (*pcVar5)();
                    return (bool)uVar21;
                  }
                  lVar44 = *(longlong *)&pTVar50->field_0x10;
                  local_1310 = (undefined8)*(float *)(lVar44 + 8 + lVar42 * 0xc);
                  dStack_1318 = (double)*(float *)(lVar44 + 4 + lVar42 * 0xc);
                  local_1320 = (double)*(float *)(lVar44 + lVar42 * 0xc);
                }
                if (((local_db8.NjordPixelIndex.ConstAttributeArray == (TManagedArray<float> *)0x0)
                    || ((int)uVar46 < 0)) ||
                   (iVar23 = (**(code **)(*(longlong *)local_db8.NjordPixelIndex.ConstAttributeArray
                                         + 0x60))(), iVar23 <= (int)uVar46)) {
                  pfVar32 = &IndexNone;
                }
                else {
                  pfVar32 = TManagedArrayAccessor<float>::operator[]
                                      (&local_db8.NjordPixelIndex,uVar46);
                }
                bVar20 = false;
                fVar2 = *pfVar32;
                if (((local_10a8.Children.ConstAttributeArray ==
                      (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
                    ((int)uVar29 < 0)) ||
                   (iVar23 = (**(code **)(*(longlong *)local_10a8.Children.ConstAttributeArray +
                                         0x60))(), iVar23 <= (int)uVar29)) {
                  uVar29 = *(uint *)(*(longlong *)
                                      ((longlong)ThreadLocalStoragePointer +
                                      (ulonglong)_tls_index * 8) + lVar37);
                  FVar33.Data = (FScriptContainerElement *)(ulonglong)uVar29;
                  if (((int)uVar29 < ::_TSS0) &&
                     (_Init_thread_header(&::_TSS0),
                     FVar33.Data = (FScriptContainerElement *)extraout_RAX, ::_TSS0 == -1)) {
                    atexit(`PV::Facades::FBranchFacade::GetChildren'::__l2::
                           _dynamic_atexit_destructor_for__EmptyChildren__);
                    _Init_thread_footer(&::_TSS0);
                    FVar33.Data = (FScriptContainerElement *)extraout_RAX_00;
                  }
                  pTVar30 = &EmptyChildren;
                }
                else {
                  FVar33.Data = (FScriptContainerElement *)
                                TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::
                                operator[](&local_10a8.Children,uVar29);
                  pTVar30 = (TArray<int,TSizedDefaultAllocator<32>_> *)FVar33.Data;
                }
                pFVar43 = (pTVar30->AllocatorInstance).Data;
                iVar23 = pTVar30->ArrayNum;
                pFVar47 = pFVar43 + (longlong)iVar23 * 4;
LAB_14da78a00:
                while( true ) {
                  uVar29 = (uint)FVar33.Data;
                  if (pTVar30->ArrayNum != iVar23) {
                    local_1478 = (FIdentityFunctor)0x0;
                    bVar22 = `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::
                             <lambda_1>::operator()(&local_1478);
                    uVar29 = (uint)CONCAT71(extraout_var,bVar22);
                  }
                  uVar41 = local_1460;
                  if (pFVar43 == pFVar47) break;
                  iVar28 = *(int *)pFVar43;
                  if ((local_10a8.BranchNumbers.ConstAttributeArray == (TManagedArray<int> *)0x0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                          ,0x67,L""), bVar22)) {
                    pcVar5 = (code *)swi(3);
                    uVar21 = (*pcVar5)();
                    return (bool)uVar21;
                  }
                  uVar29 = local_1424;
                  piVar4 = *(int **)&(local_10a8.BranchNumbers.ConstAttributeArray)->field_0x10;
                  FVar33.Data = (FScriptContainerElement *)
                                (longlong)
                                *(int *)&(local_10a8.BranchNumbers.ConstAttributeArray)->field_0x18;
                  for (piVar48 = piVar4; piVar48 != piVar4 + (longlong)FVar33.Data;
                      piVar48 = piVar48 + 1) {
                    if (*piVar48 == iVar28) {
                      iVar28 = (int)((longlong)piVar48 - (longlong)piVar4 >> 2);
                      if (iVar28 != -1) {
                        if (((local_10a8.BranchPoints.ConstAttributeArray ==
                              (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
                            (iVar28 < 0)) ||
                           (iVar24 = (**(code **)(*(longlong *)
                                                   local_10a8.BranchPoints.ConstAttributeArray +
                                                 0x60))(), iVar24 <= iVar28)) {
                          if ((*(int *)(local_13f8 +
                                       *(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8)) < ::_TSS0) &&
                             (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                            atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
                                   _dynamic_atexit_destructor_for__EmptyPoints__);
                            _Init_thread_footer(&::_TSS0);
                          }
                          pTVar34 = &EmptyPoints;
                        }
                        else {
                          pTVar34 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>
                                    ::operator[](&local_10a8.BranchPoints,iVar28);
                        }
                        if ((pTVar34->ArrayNum < 1) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("ChildPoints.Num() > 0",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVBoneFacade.cpp"
                                                ,0x15f,L""), bVar22)) {
                          pcVar5 = (code *)swi(3);
                          uVar21 = (*pcVar5)();
                          return (bool)uVar21;
                        }
                        if ((pTVar34->ArrayNum < 1) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar22)) {
                          pcVar5 = (code *)swi(3);
                          uVar21 = (*pcVar5)();
                          return (bool)uVar21;
                        }
                        uVar29 = *(uint *)(pTVar34->AllocatorInstance).Data;
                        lVar37 = (longlong)(int)uVar29;
                        uVar41 = 0;
                        if ((int)uVar29 < *(int *)&local_1400->field_0x18) {
                          uVar41 = ~uVar29 >> 0x1f;
                        }
                        if ((uVar41 == 0) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar22)) {
                          pcVar5 = (code *)swi(3);
                          uVar21 = (*pcVar5)();
                          return (bool)uVar21;
                        }
                        lVar42 = *(longlong *)&local_1400->field_0x10;
                        local_12c0._s_0.Z = (double)*(float *)(lVar42 + 8 + lVar37 * 0xc);
                        local_12c0._s_0.Y = (double)*(float *)(lVar42 + 4 + lVar37 * 0xc);
                        local_12c0._s_0.X = (double)*(float *)(lVar42 + lVar37 * 0xc);
                        fVar51 = FMath::PointDistToSegment
                                           ((TVector<double> *)&local_12c0._s_0,
                                            (TVector<double> *)&local_1368._s_0,
                                            (TVector<double> *)&local_1320);
                        FVar33.Data = (FScriptContainerElement *)extraout_RAX_01;
                        if (fVar55 < fVar51) goto LAB_14da78dc7;
                        if ((pTVar34->ArrayNum < 1) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar22)) {
                          pcVar5 = (code *)swi(3);
                          uVar21 = (*pcVar5)();
                          return (bool)uVar21;
                        }
                        if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1448.Data ==
                            (TArray<int,TSizedDefaultAllocator<32>_> *)
                            (local_1448.Data + (longlong)(int)local_1440 * 4)) goto LAB_14da78cd3;
                        FVar33.Data = (pTVar34->AllocatorInstance).Data;
                        FVar38.Data = local_1448.Data;
                        goto LAB_14da78cc1;
                      }
                      break;
                    }
                  }
                  if (2 < (byte)LogProceduralVegetation._0_1_) {
                    if (((local_10a8.BranchNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)
                        && (-1 < (int)local_1424)) &&
                       (iVar28 = (**(code **)(*(longlong *)
                                               local_10a8.BranchNumbers.ConstAttributeArray + 0x60))
                                           (), (int)uVar29 < iVar28)) {
                      TManagedArrayAccessor<int>::operator[](&local_10a8.BranchNumbers,uVar29);
                    }
                    UE::Logging::Private::BasicLog<3>
                              ((FStaticBasicLogRecord *)&PTR_u_Child_branch_nu_152c6cf30,
                               (FLogCategoryBase *)&LogProceduralVegetation);
                    FVar33.Data = (FScriptContainerElement *)extraout_RAX_02;
                  }
LAB_14da78dc7:
                  pFVar43 = pFVar43 + 4;
                }
                if (bVar20) {
LAB_14da78e1f:
                  bVar22 = false;
                  iVar23 = (int)fVar2;
                  fVar55 = fVar2;
                  if ((iVar23 != -0x80000000) && ((float)iVar23 != fVar2)) {
                    auVar57._4_4_ = fVar2;
                    auVar57._0_4_ = fVar2;
                    auVar57._8_8_ = 0;
                    uVar29 = movmskps(uVar29,auVar57);
                    fVar55 = (float)(int)(iVar23 - (uVar29 & 1));
                  }
                  if ((fVar2 - fVar55 <= fVar17) || (uVar29 = local_1424, bVar20))
                  goto LAB_14da78e65;
                }
                else {
                  iVar23 = (int)fVar2;
                  fVar55 = fVar2;
                  if ((iVar23 != -0x80000000) && ((float)iVar23 != fVar2)) {
                    auVar56._4_4_ = fVar2;
                    auVar56._0_4_ = fVar2;
                    auVar56._8_8_ = 0;
                    uVar29 = movmskps(uVar29,auVar56);
                    uVar29 = uVar29 & 1;
                    fVar55 = (float)(int)(iVar23 - uVar29);
                  }
                  if ((fVar2 - fVar55 <= fVar17) || (uVar29 = local_1430 - 1, local_1420 != uVar29))
                  goto LAB_14da78e1f;
                  bVar22 = true;
LAB_14da78e65:
                  local_1378.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_1378.Data.ArrayNum = 0;
                  local_1378.Data.ArrayMax = 0;
                  ::FString::AppendInt(&local_1378,local_1460);
                  ::FString::FString(&local_12d0,"Bone_");
                  ::FString::ConcatFF(&local_1338,&local_12d0,&local_1378);
                  FVar33.Data = (FScriptContainerElement *)L"";
                  if (local_1338.Data.ArrayNum != 0) {
                    FVar33.Data = local_1338.Data.AllocatorInstance.Data;
                  }
                  ::FName::FName(&local_1328,(wchar_t *)FVar33.Data);
                  local_1278 = local_1328;
                  if (local_1338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1338.Data.AllocatorInstance.Data);
                  }
                  if (local_12d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_12d0.Data.AllocatorInstance.Data);
                  }
                  if (local_1378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1378.Data.AllocatorInstance.Data);
                  }
                  uVar29 = local_1424;
                  uStack_126c = local_1428;
                  local_11f8._8_8_ = local_1368._s_0.Y;
                  local_11f8._0_8_ = local_1368._s_0.X;
                  local_1258 = (FName)(double)GlobalVectorConstants::Float0001.m128_f32[0];
                  FStack_1250 = (FName)(double)GlobalVectorConstants::Float0001.m128_f32[1];
                  local_1268.Value = local_1390;
                  FStack_1270.Value = uVar41;
                  local_1428 = uVar41;
                  local_1460 = uVar41 + 1;
                  local_1248 = (FName)(double)GlobalVectorConstants::Float0001.m128_f32[2];
                  FStack_1240 = (FName)(double)GlobalVectorConstants::Float0001.m128_f32[3];
                  uStack_1264 = local_1424;
                  local_1238 = (FName)(local_1368._s_0.X - (double)local_13f0._0_8_);
                  auVar9._4_4_ = FStack_1240.ComparisonIndex.Value;
                  auVar9._8_4_ = FStack_1240.Number;
                  auVar9._0_4_ = (int)((ulonglong)local_1368._0_8_ >> 0x20);
                  auVar53._0_8_ = auVar9._0_8_ << 0x20;
                  auVar53._8_4_ = SUB84(local_1368._s_0.Y,0);
                  auVar53._12_4_ = (int)((ulonglong)local_1368._8_8_ >> 0x20);
                  FStack_1230 = (FName)(auVar53._8_8_ - stack0xffffffffffffec18);
                  local_11e8 = (FName)local_1368._s_0.Z;
                  local_1228 = (FName)(local_1368._s_0.Z - (double)local_13e0);
                  local_13e0 = (FName)local_1368._s_0.Z;
                  FStack_1220.ComparisonIndex.Value = 0;
                  FStack_1220.Number = 0;
                  local_1218 = (FName)(double)GlobalVectorConstants::Float1110.m128_f32[0];
                  FStack_1210 = (FName)(double)GlobalVectorConstants::Float1110.m128_f32[1];
                  local_1208 = (FName)(double)GlobalVectorConstants::Float1110.m128_f32[2];
                  FStack_1200 = (FName)(double)GlobalVectorConstants::Float1110.m128_f32[3];
                  iVar23 = (int)local_1468;
                  _local_13f0 = local_11f8;
                  FStack_1260.Value = (uint)fVar2;
                  if ((int)local_1468 == local_1468._4_4_) {
                    iVar23 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x10a0,&local_1470,(int *)((longlong)&local_1468 + 4));
                  }
                  auVar16 = local_11f8;
                  local_1468._0_4_ = iVar23 + 1;
                  pFVar36 = (FName *)(local_1470.Data + (longlong)iVar23 * 0xa0);
                  FVar12.Number = uStack_126c;
                  FVar12.ComparisonIndex.Value = FStack_1270.Value;
                  FVar13.Number = uStack_1264;
                  FVar13.ComparisonIndex.Value = local_1268.Value;
                  FVar14.Number = uStack_125c;
                  FVar14.ComparisonIndex.Value = FStack_1260.Value;
                  *pFVar36 = local_1278;
                  pFVar36[1] = FVar12;
                  pFVar36[2] = FVar13;
                  pFVar36[3] = FVar14;
                  pFVar36[4] = local_1258;
                  pFVar36[5] = FStack_1250;
                  pFVar36[6] = local_1248;
                  pFVar36[7] = FStack_1240;
                  pFVar36[8] = local_1238;
                  pFVar36[9] = FStack_1230;
                  pFVar36[10] = local_1228;
                  pFVar36[0xb] = FStack_1220;
                  pFVar36[0xc] = local_1218;
                  pFVar36[0xd] = FStack_1210;
                  pFVar36[0xe] = local_1208;
                  pFVar36[0xf] = FStack_1200;
                  auVar15._8_8_ = uStack_11e0;
                  auVar15._0_4_ = local_11e8.ComparisonIndex.Value;
                  auVar15._4_4_ = local_11e8.Number;
                  pFVar36[0x10].ComparisonIndex = (FNameEntryId)local_11f8._0_4_;
                  pFVar36[0x10].Number = local_11f8._4_4_;
                  pFVar36[0x11].ComparisonIndex = (FNameEntryId)local_11f8._8_4_;
                  pFVar36[0x11].Number = local_11f8._12_4_;
                  *(undefined1 (*) [16])(pFVar36 + 0x12) = auVar15;
                  local_11f8 = auVar16;
                  if ((bVar20) || (bVar22)) {
                    if ((local_1458.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1470
                        ) && (((FScriptContainerElement *)&local_1470 <
                               local_1458.AllocatorInstance.Data +
                               (longlong)local_1458.ArrayMax * 0x10 &&
                              (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                                  (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar20)))) {
                      pcVar5 = (code *)swi(3);
                      uVar21 = (*pcVar5)();
                      return (bool)uVar21;
                    }
                    iVar23 = local_1458.ArrayNum;
                    if (local_1458.ArrayNum == local_1458.ArrayMax) {
                      iVar23 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&local_1458.AllocatorInstance,&local_1458.ArrayMax);
                    }
                    local_1458.ArrayNum = iVar23 + 1;
                    lVar37 = (longlong)iVar23;
                    *(undefined8 *)(local_1458.AllocatorInstance.Data + lVar37 * 0x10) = 0;
                    *(FScriptContainerElement **)(local_1458.AllocatorInstance.Data + lVar37 * 0x10)
                         = local_1470.Data;
                    *(int *)(local_1458.AllocatorInstance.Data + lVar37 * 0x10 + 8) =
                         (int)local_1468;
                    *(int *)(local_1458.AllocatorInstance.Data + lVar37 * 0x10 + 0xc) =
                         local_1468._4_4_;
                    local_1470.Data = (FScriptContainerElement *)0x0;
                    local_1468._0_4_ = 0;
                    local_1468._4_4_ = 0;
                  }
                }
                local_1420 = local_1420 + 1;
                local_1388 = local_1388 + 1;
                pTVar50 = local_1400;
                lVar37 = local_13f8;
                if (local_1430 <= (int)local_1420) break;
              } while( true );
            }
            pTVar45 = local_1418;
            ApplyBoneReduction(&local_1458,local_1418,param_2);
            if (local_1470.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1470.Data);
            }
            DestructItems<PV::Facades::FConnectingSegment,int>
                      ((FConnectingSegment *)local_1458.AllocatorInstance.Data,local_1458.ArrayNum);
            if (local_1458.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1458.AllocatorInstance.Data);
            }
            if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1448.Data !=
                (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              FMemory::Free(local_1448.Data);
            }
            if (local_1410.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1410.AllocatorInstance.Data);
            }
            if (local_1438.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1438.Data);
            }
            local_141c = local_141c + 1;
            local_1380 = local_1380 + 4;
            lVar37 = local_13f8;
            FVar40 = local_1478;
          } while ((int)local_141c < local_13a0.ArrayNum);
        }
        if (local_13a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_13a0.AllocatorInstance.Data);
        }
      }
      TStack_12f8.UnvisitedBitMask = TStack_12f8.UnvisitedBitMask & ~TStack_12f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_12f8);
    }
    local_220 = 0;
    if (local_228 != (void *)0x0) {
      FMemory::Free(local_228);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_268);
    ReindexBones(pTVar45);
    bVar20 = true;
  }
  else {
    bVar20 = false;
  }
  return bVar20;
  while (FVar38.Data = (FScriptContainerElement *)
                       ((longlong)
                        &(((TArray<int,TSizedDefaultAllocator<32>_> *)FVar38.Data)->
                         AllocatorInstance).Data + 4),
        (TArray<int,TSizedDefaultAllocator<32>_> *)FVar38.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)(local_1448.Data + (longlong)(int)local_1440 * 4)
        ) {
LAB_14da78cc1:
    if (*(int *)&(((TArray<int,TSizedDefaultAllocator<32>_> *)FVar38.Data)->AllocatorInstance).Data
        == *(int *)&(((TArray<int,TSizedDefaultAllocator<32>_> *)FVar33.Data)->AllocatorInstance).
                    Data) goto LAB_14da78dc7;
  }
LAB_14da78cd3:
  if (pTVar34->ArrayNum < 1) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      uVar21 = (*pcVar5)();
      return (bool)uVar21;
    }
  }
  pTVar34 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar34->AllocatorInstance).Data;
  iVar28 = (int)local_1440;
  if ((local_1448.Data <= pTVar34) &&
     (pTVar34 < (TArray<int,TSizedDefaultAllocator<32>_> *)
                (local_1448.Data + (longlong)local_1440._4_4_ * 4))) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      uVar21 = (*pcVar5)();
      return (bool)uVar21;
    }
    iVar28 = (int)local_1440;
  }
  if (iVar28 == local_1440._4_4_) {
    iVar28 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_1448,(int *)((longlong)&local_1440 + 4));
  }
  local_1440 = CONCAT44(local_1440._4_4_,iVar28 + 1);
  bVar20 = true;
  pFVar43 = pFVar43 + 4;
  *(undefined4 *)(local_1448.Data + (longlong)iVar28 * 4) =
       *(undefined4 *)&(pTVar34->AllocatorInstance).Data;
  FVar33.Data = local_1448.Data;
  goto LAB_14da78a00;
}

// DefineSchema @ 14da7a910

void __cdecl PV::Facades::FBoneFacade::DefineSchema(FManagedArrayCollection *param_1)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar5;
  undefined2 local_130;
  undefined2 uStack_12e;
  undefined2 local_124;
  undefined2 uStack_122;
  undefined2 local_118;
  undefined2 uStack_116;
  undefined2 local_10c;
  undefined2 uStack_10a;
  undefined2 local_100;
  undefined2 uStack_fe;
  undefined2 local_f4;
  undefined2 uStack_f2;
  undefined2 local_e8;
  undefined2 uStack_e6;
  undefined2 local_dc;
  undefined2 uStack_da;
  FConstructionParameters local_b8;
  FConstructionParameters local_a8;
  FConstructionParameters local_98;
  FConstructionParameters local_88;
  FConstructionParameters local_78;
  FConstructionParameters local_68;
  FConstructionParameters local_58;
  FConstructionParameters local_48;
  FName local_38;
  FName local_30;
  
  local_b8.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_b8.GroupIndexDependency.Number = 0;
  local_b8.Saved = true;
  local_b8.bAllowCircularDependency = false;
  local_b8._10_2_ = uStack_12e;
  FManagedArrayCollection::AddAttribute<int>
            (param_1,AttributeNames::BoneId,GroupNames::BonesGroup,&local_b8);
  local_a8.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_a8.GroupIndexDependency.Number = 0;
  local_a8.Saved = true;
  local_a8.bAllowCircularDependency = false;
  local_a8._10_2_ = uStack_122;
  FManagedArrayCollection::AddAttribute<FString>
            (param_1,AttributeNames::BoneName,GroupNames::BonesGroup,&local_a8);
  local_98.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_98.GroupIndexDependency.Number = 0;
  local_98.Saved = true;
  local_98.bAllowCircularDependency = false;
  local_98._10_2_ = uStack_116;
  FManagedArrayCollection::AddAttribute<int>
            (param_1,AttributeNames::BoneParentIndex,GroupNames::BonesGroup,&local_98);
  FVar3 = AttributeNames::BonePose;
  FVar2 = GroupNames::BonesGroup;
  local_88.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_88.GroupIndexDependency.Number = 0;
  local_88.Saved = true;
  local_88.bAllowCircularDependency = false;
  local_88._10_2_ = uStack_10a;
  bVar4 = FManagedArrayCollection::HasAttribute
                    (param_1,AttributeNames::BonePose,GroupNames::BonesGroup);
  if (!bVar4) {
    FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<double>_>
              (param_1,FVar3,FVar2,&local_88);
  }
  bVar4 = FManagedArrayCollection::HasAttribute(param_1,FVar3,FVar2);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_38 = FVar3;
  local_30 = FVar2;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_38);
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TTransform<double>_>
            ((FValueType *)&pTVar5->field_0x10);
  local_78.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_78.GroupIndexDependency.Number = 0;
  local_78.Saved = true;
  local_78.bAllowCircularDependency = false;
  local_78._10_2_ = uStack_fe;
  FManagedArrayCollection::AddAttribute<int>
            (param_1,AttributeNames::BonePointIndex,GroupNames::BonesGroup,&local_78);
  local_68.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_68.GroupIndexDependency.Number = 0;
  local_68.Saved = true;
  local_68.bAllowCircularDependency = false;
  local_68._10_2_ = uStack_f2;
  FManagedArrayCollection::AddAttribute<int>
            (param_1,AttributeNames::BoneBranchIndex,GroupNames::BonesGroup,&local_68);
  local_58.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_58.GroupIndexDependency.Number = 0;
  local_58.Saved = true;
  local_58.bAllowCircularDependency = false;
  local_58._10_2_ = uStack_e6;
  FManagedArrayCollection::AddAttribute<int>
            (param_1,AttributeNames::VertexPointIds,GroupNames::VerticesGroup,&local_58);
  local_48.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_48.GroupIndexDependency.Number = 0;
  local_48.Saved = true;
  local_48.bAllowCircularDependency = false;
  local_48._10_2_ = uStack_da;
  FManagedArrayCollection::AddAttribute<UE::Math::TVector<float>_>
            (param_1,AttributeNames::BoneAbsolutePosition,GroupNames::BonesGroup,&local_48);
  return;
}

// FindClosestBone @ 14da8b690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FBoneNode * __cdecl
PV::Facades::FBoneFacade::FindClosestBone
          (FManagedArrayCollection *param_1,
          TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  FBoneNode *pFVar9;
  FBoneNode *pFVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  undefined1 auStackY_868 [32];
  undefined1 local_828 [8];
  ForAnyElementType local_820;
  int local_818;
  int local_814 [3];
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  FBranchFacade local_768;
  FPointFacade local_478;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_868;
  FPointFacade::FPointFacade(&local_478,param_1);
  FBranchFacade::FBranchFacade(&local_768,param_1);
  if (((local_478.NjordPixelIndex.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
      (param_3 < 0)) ||
     (iVar5 = (**(code **)(*(longlong *)local_478.NjordPixelIndex.ConstAttributeArray + 0x60))(),
     iVar5 <= param_3)) {
    pfVar7 = &IndexNone;
  }
  else {
    pfVar7 = TManagedArrayAccessor<float>::operator[](&local_478.NjordPixelIndex,param_3);
  }
  pFVar9 = (FBoneNode *)(param_2->AllocatorInstance).Data;
  fVar1 = *pfVar7;
  pFVar10 = pFVar9 + param_2->ArrayNum;
  if (pFVar9 != pFVar10) {
    do {
      if ((int)ROUND((pFVar9->NjordPixelID + pFVar9->NjordPixelID) - __real_3f000000) >> 1 ==
          (int)ROUND((fVar1 + fVar1) - __real_3f000000) >> 1) {
        if (pFVar9 != (FBoneNode *)0x0) {
          return pFVar9;
        }
        break;
      }
      pFVar9 = pFVar9 + 1;
    } while (pFVar9 != pFVar10);
  }
  iVar5 = 0;
  while( true ) {
    if (local_768.Parents.ConstAttributeArray ==
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar6 = FManagedArrayCollection::NumElements
                        (local_768.Parents.ConstCollection,local_768.Parents.Group);
    }
    else {
      iVar6 = (**(code **)(*(longlong *)local_768.Parents.ConstAttributeArray + 0x60))
                        (local_768.Parents.ConstAttributeArray);
    }
    if (iVar6 <= iVar5) break;
    if (((local_768.BranchPoints.ConstAttributeArray ==
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || (iVar5 < 0)) ||
       (iVar6 = (**(code **)(*(longlong *)local_768.BranchPoints.ConstAttributeArray + 0x60))
                          (local_768.BranchPoints.ConstAttributeArray), iVar6 <= iVar5)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
               _dynamic_atexit_destructor_for__EmptyPoints__);
        _Init_thread_footer(&::_TSS0);
      }
      pTVar8 = &EmptyPoints;
    }
    else {
      pTVar8 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                         (&local_768.BranchPoints,iVar5);
    }
    local_820.Data = (FScriptContainerElement *)0x0;
    local_818 = pTVar8->ArrayNum;
    lVar13 = (longlong)local_818;
    pFVar12 = (pTVar8->AllocatorInstance).Data;
    if (local_818 == 0) {
      local_814[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_818,0,&local_820,local_818,local_814);
      memcpy(local_820.Data,pFVar12,lVar13 << 2);
    }
    for (FVar11.Data = local_820.Data; FVar11.Data != local_820.Data + (longlong)local_818 * 4;
        FVar11.Data = FVar11.Data + 4) {
      if (*(int *)FVar11.Data == param_3) {
        if (local_820.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_820.Data);
        }
        if (iVar5 != -1) {
          iVar6 = param_2->ArrayNum;
          pFVar9 = (FBoneNode *)(param_2->AllocatorInstance).Data;
          pFVar10 = pFVar9 + iVar6;
          while( true ) {
            if (param_2->ArrayNum != iVar6) {
              local_828[0] = 0;
              `TCheckedPointerIterator<PV::Facades::FBoneNode,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(local_828);
            }
            if (pFVar9 == pFVar10) break;
            if (pFVar9->BranchIndex == iVar5) {
              iVar2 = pFVar9->ParentBoneIndex;
              if ((-1 < iVar2) && (iVar2 < param_2->ArrayNum)) {
                if ((iVar2 < 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  pFVar9 = (FBoneNode *)(*pcVar3)();
                  return pFVar9;
                }
                pFVar12 = (param_2->AllocatorInstance).Data + (longlong)iVar2 * 0xa0;
                local_808 = *(undefined8 *)pFVar12;
                uStack_800 = *(undefined8 *)(pFVar12 + 8);
                local_7f8 = *(undefined8 *)(pFVar12 + 0x10);
                uStack_7f0 = *(undefined8 *)(pFVar12 + 0x18);
                local_7e8 = *(undefined8 *)(pFVar12 + 0x20);
                uStack_7e0 = *(undefined8 *)(pFVar12 + 0x28);
                local_7d8 = *(undefined8 *)(pFVar12 + 0x30);
                uStack_7d0 = *(undefined8 *)(pFVar12 + 0x38);
                local_7c8 = *(undefined8 *)(pFVar12 + 0x40);
                uStack_7c0 = *(undefined8 *)(pFVar12 + 0x48);
                local_7b8 = *(undefined8 *)(pFVar12 + 0x50);
                uStack_7b0 = *(undefined8 *)(pFVar12 + 0x58);
                local_7a8 = *(undefined8 *)(pFVar12 + 0x60);
                uStack_7a0 = *(undefined8 *)(pFVar12 + 0x68);
                local_798 = *(undefined8 *)(pFVar12 + 0x70);
                uStack_790 = *(undefined8 *)(pFVar12 + 0x78);
                local_788 = *(undefined8 *)(pFVar12 + 0x80);
                uStack_780 = *(undefined8 *)(pFVar12 + 0x88);
                local_778 = *(undefined8 *)(pFVar12 + 0x90);
                uStack_770 = *(undefined8 *)(pFVar12 + 0x98);
                if (((float)uStack_7f0 < fVar1) &&
                   (fVar1 < pFVar9->NjordPixelID || fVar1 == pFVar9->NjordPixelID)) {
                  return pFVar9;
                }
              }
            }
            pFVar9 = pFVar9 + 1;
          }
          return (FBoneNode *)0x0;
        }
        goto LAB_14da8b9f0;
      }
    }
    if (local_820.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_820.Data);
    }
    iVar5 = iVar5 + 1;
  }
LAB_14da8b9f0:
  if (2 < (byte)LogProceduralVegetation._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
  }
  return (FBoneNode *)0x0;
}

// GetBoneDataFromCollection @ 14da92910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FBoneFacade::GetBoneDataFromCollection
          (FBoneFacade *this,
          TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  TManagedArray<FString> *pTVar3;
  longlong lVar4;
  TManagedArray<int> *pTVar5;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar6;
  TManagedArray<UE::Math::TVector<float>_> *pTVar7;
  code *pcVar8;
  FName FVar9;
  FNameEntryId FVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  bool bVar17;
  int iVar18;
  uint uVar19;
  TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *pTVar20;
  FName *pFVar21;
  float *pfVar22;
  FName *pFVar23;
  uint uVar24;
  FName *pFVar25;
  FName *pFVar26;
  uint uVar27;
  undefined1 auStack_588 [32];
  FName *local_568;
  FName *local_560;
  longlong local_558;
  longlong local_550;
  undefined8 local_548;
  longlong local_538;
  longlong local_530;
  FName local_528 [2];
  FPointFacade local_518;
  FName local_e8;
  FName FStack_e0;
  FName local_d8;
  FNameEntryId FStack_d0;
  uint uStack_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  FName local_58;
  FName FStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_588;
  pFVar21 = (FName *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((this->VertexPointIds).ConstAttributeArray == (TManagedArray<int> *)0x0) {
    if (2 < (byte)LogProceduralVegetation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
    }
  }
  else {
    FPointFacade::FPointFacade(&local_518,(this->BoneName).ConstCollection);
    local_530 = 0;
    local_538 = 0;
    pFVar25 = pFVar21;
    pFVar26 = pFVar21;
    while( true ) {
      pTVar3 = (this->BoneName).ConstAttributeArray;
      if (pTVar3 == (TManagedArray<FString> *)0x0) {
        iVar18 = FManagedArrayCollection::NumElements
                           ((this->BoneName).ConstCollection,(this->BoneName).Group);
      }
      else {
        iVar18 = (**(code **)(*(longlong *)pTVar3 + 0x60))();
      }
      uVar24 = (uint)pFVar21;
      if (iVar18 <= (int)uVar24) break;
      local_e8.ComparisonIndex.Value = 0;
      local_e8.Number = 0;
      FStack_e0.ComparisonIndex.Value = 0xffffffff;
      FStack_e0.Number = 0xffffffff;
      local_d8.ComparisonIndex.Value = 0xffffffff;
      local_d8.Number = 0xffffffff;
      FStack_d0.Value = 0;
      local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_c8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_c8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_b8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_b8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_a8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_a8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_a8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_98._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_98._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_98._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_88._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_88._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_78._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_78._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_58 = (FName)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (((this->BoneName).ConstAttributeArray == (TManagedArray<FString> *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x60,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        pTVar20 = (TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar20;
      }
      pTVar3 = (this->BoneName).ConstAttributeArray;
      uVar27 = ~uVar24 >> 0x1f;
      iVar18 = *(int *)&pTVar3->field_0x18;
      uVar19 = 0;
      if ((int)uVar24 < iVar18) {
        uVar19 = uVar27;
      }
      if (uVar19 == 0) {
        local_568 = (FName *)(longlong)(int)uVar24;
        local_560 = (FName *)(longlong)iVar18;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          pTVar20 = (TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
          return pTVar20;
        }
      }
      lVar4 = *(longlong *)&pTVar3->field_0x10;
      iVar2 = *(int *)(local_538 + 8 + lVar4);
      iVar18 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar18 = 0;
      }
      pFVar21 = ::FName::FName(local_528,iVar18,*(wchar_t **)(local_538 + lVar4),FNAME_Add);
      local_e8 = *pFVar21;
      if (((this->BoneParentIndex).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x60,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        pTVar20 = (TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar20;
      }
      pTVar5 = (this->BoneParentIndex).ConstAttributeArray;
      iVar18 = *(int *)&pTVar5->field_0x18;
      uVar19 = 0;
      if ((int)uVar24 < iVar18) {
        uVar19 = uVar27;
      }
      if ((uVar19 == 0) &&
         (local_568 = pFVar25, local_560 = (FName *)(longlong)iVar18,
         bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        pTVar20 = (TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar20;
      }
      FStack_e0.Number = *(undefined4 *)(*(longlong *)&pTVar5->field_0x10 + (longlong)pFVar25 * 4);
      if (((this->BonePointIndex).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x60,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        pTVar20 = (TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar20;
      }
      pTVar5 = (this->BonePointIndex).ConstAttributeArray;
      iVar18 = *(int *)&pTVar5->field_0x18;
      uVar19 = 0;
      if ((int)uVar24 < iVar18) {
        uVar19 = uVar27;
      }
      if (uVar19 == 0) {
        local_568 = (FName *)(longlong)(int)uVar24;
        local_560 = (FName *)(longlong)iVar18;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          pTVar20 = (TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
          return pTVar20;
        }
      }
      local_d8.ComparisonIndex.Value =
           *(undefined4 *)(*(longlong *)&pTVar5->field_0x10 + (longlong)pFVar25 * 4);
      if (((this->BoneBranchIndex).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x60,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        pTVar20 = (TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar20;
      }
      pTVar5 = (this->BoneBranchIndex).ConstAttributeArray;
      iVar18 = *(int *)&pTVar5->field_0x18;
      uVar19 = 0;
      if ((int)uVar24 < iVar18) {
        uVar19 = uVar27;
      }
      if (uVar19 == 0) {
        local_568 = (FName *)(longlong)(int)uVar24;
        local_560 = (FName *)(longlong)iVar18;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          pTVar20 = (TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
          return pTVar20;
        }
      }
      FVar10.Value = local_d8.ComparisonIndex.Value;
      local_d8.Number = *(uint *)(*(longlong *)&pTVar5->field_0x10 + (longlong)pFVar25 * 4);
      if (((local_518.NjordPixelIndex.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
          ((int)local_d8.ComparisonIndex.Value < 0)) ||
         (iVar18 = (**(code **)(*(longlong *)local_518.NjordPixelIndex.ConstAttributeArray + 0x60))
                             (), iVar18 <= (int)FVar10.Value)) {
        pfVar22 = &IndexNone;
      }
      else {
        pfVar22 = TManagedArrayAccessor<float>::operator[](&local_518.NjordPixelIndex,FVar10.Value);
      }
      FStack_d0.Value = (uint)*pfVar22;
      if (((this->BonePose).ConstAttributeArray ==
           (TManagedArray<UE::Math::TTransform<double>_> *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x60,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        pTVar20 = (TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar20;
      }
      pTVar6 = (this->BonePose).ConstAttributeArray;
      iVar18 = *(int *)&pTVar6->field_0x18;
      uVar19 = 0;
      if ((int)uVar24 < iVar18) {
        uVar19 = uVar27;
      }
      if (uVar19 == 0) {
        local_568 = (FName *)(longlong)(int)uVar24;
        local_560 = (FName *)(longlong)iVar18;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          pTVar20 = (TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
          return pTVar20;
        }
      }
      lVar4 = *(longlong *)&pTVar6->field_0x10;
      local_c8 = *(undefined1 (*) [16])((longlong)&(pFVar26->ComparisonIndex).Value + lVar4);
      local_b8 = *(undefined1 (*) [16])((longlong)&pFVar26[2].ComparisonIndex.Value + lVar4);
      local_a8 = *(undefined1 (*) [16])((longlong)&pFVar26[4].ComparisonIndex.Value + lVar4);
      local_98 = *(undefined1 (*) [16])((longlong)&pFVar26[6].ComparisonIndex.Value + lVar4);
      local_88 = *(undefined1 (*) [16])((longlong)&pFVar26[8].ComparisonIndex.Value + lVar4);
      local_78 = *(undefined1 (*) [16])((longlong)&pFVar26[10].ComparisonIndex.Value + lVar4);
      if (((this->BoneAbsolutePosition).ConstAttributeArray ==
           (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x60,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        pTVar20 = (TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar20;
      }
      pTVar7 = (this->BoneAbsolutePosition).ConstAttributeArray;
      iVar18 = *(int *)&pTVar7->field_0x18;
      uVar19 = 0;
      if ((int)uVar24 < iVar18) {
        uVar19 = uVar27;
      }
      if (uVar19 == 0) {
        local_568 = (FName *)(longlong)(int)uVar24;
        local_560 = (FName *)(longlong)iVar18;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          pTVar20 = (TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
          return pTVar20;
        }
      }
      lVar4 = *(longlong *)&pTVar7->field_0x10;
      uStack_60 = (double)*(float *)(lVar4 + 4 + local_530);
      local_58 = (FName)(double)*(float *)(lVar4 + 8 + local_530);
      local_68 = (double)*(float *)(lVar4 + local_530);
      if (((this->BoneId).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x60,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        pTVar20 = (TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar20;
      }
      pTVar5 = (this->BoneId).ConstAttributeArray;
      iVar18 = *(int *)&pTVar5->field_0x18;
      uVar19 = 0;
      if ((int)uVar24 < iVar18) {
        uVar19 = uVar27;
      }
      if ((uVar19 == 0) &&
         (local_568 = pFVar25, local_560 = (FName *)(longlong)iVar18,
         bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        pTVar20 = (TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar20;
      }
      piVar1 = &__return_storage_ptr__->ArrayMax;
      pFVar21 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
      FStack_e0.ComparisonIndex.Value =
           *(uint *)(*(longlong *)&pTVar5->field_0x10 + (longlong)pFVar25 * 4);
      if ((pFVar21 <= &local_e8) && (&local_e8 < pFVar21 + (longlong)*piVar1 * 0x14)) {
        local_550 = (longlong)__return_storage_ptr__->ArrayNum;
        local_548 = 0xa0;
        local_568 = &local_e8;
        local_560 = pFVar21;
        local_558 = (longlong)*piVar1;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          pTVar20 = (TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
          return pTVar20;
        }
      }
      iVar18 = __return_storage_ptr__->ArrayNum;
      if (iVar18 == *piVar1) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10a0,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      auVar16 = local_78;
      auVar15 = local_88;
      auVar14 = local_98;
      auVar13 = local_a8;
      auVar12 = local_b8;
      auVar11 = local_c8;
      local_538 = local_538 + 0x10;
      __return_storage_ptr__->ArrayNum = iVar18 + 1;
      pFVar21 = (FName *)(ulonglong)(uVar24 + 1);
      pFVar25 = (FName *)((longlong)&(pFVar25->ComparisonIndex).Value + 1);
      pFVar26 = pFVar26 + 0xc;
      pFVar23 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar18 * 0xa0
                         );
      local_530 = local_530 + 0xc;
      *pFVar23 = local_e8;
      pFVar23[1] = FStack_e0;
      FVar9.Number = uStack_cc;
      FVar9.ComparisonIndex.Value = FStack_d0.Value;
      pFVar23[2] = local_d8;
      pFVar23[3] = FVar9;
      pFVar23[4].ComparisonIndex = (FNameEntryId)local_c8._0_4_;
      pFVar23[4].Number = local_c8._4_4_;
      pFVar23[5].ComparisonIndex = (FNameEntryId)local_c8._8_4_;
      pFVar23[5].Number = local_c8._12_4_;
      pFVar23[6].ComparisonIndex = (FNameEntryId)local_b8._0_4_;
      pFVar23[6].Number = local_b8._4_4_;
      pFVar23[7].ComparisonIndex = (FNameEntryId)local_b8._8_4_;
      pFVar23[7].Number = local_b8._12_4_;
      pFVar23[8].ComparisonIndex = (FNameEntryId)local_a8._0_4_;
      pFVar23[8].Number = local_a8._4_4_;
      pFVar23[9].ComparisonIndex = (FNameEntryId)local_a8._8_4_;
      pFVar23[9].Number = local_a8._12_4_;
      pFVar23[10].ComparisonIndex = (FNameEntryId)local_98._0_4_;
      pFVar23[10].Number = local_98._4_4_;
      pFVar23[0xb].ComparisonIndex = (FNameEntryId)local_98._8_4_;
      pFVar23[0xb].Number = local_98._12_4_;
      pFVar23[0xc].ComparisonIndex = (FNameEntryId)local_88._0_4_;
      pFVar23[0xc].Number = local_88._4_4_;
      pFVar23[0xd].ComparisonIndex = (FNameEntryId)local_88._8_4_;
      pFVar23[0xd].Number = local_88._12_4_;
      pFVar23[0xe].ComparisonIndex = (FNameEntryId)local_78._0_4_;
      pFVar23[0xe].Number = local_78._4_4_;
      pFVar23[0xf].ComparisonIndex = (FNameEntryId)local_78._8_4_;
      pFVar23[0xf].Number = local_78._12_4_;
      pFVar23[0x10].ComparisonIndex.Value = (uint)local_68;
      pFVar23[0x10].Number = local_68._4_4_;
      pFVar23[0x11].ComparisonIndex.Value = (uint)uStack_60;
      pFVar23[0x11].Number = uStack_60._4_4_;
      pFVar23[0x12] = local_58;
      pFVar23[0x13] = FStack_50;
      local_c8 = auVar11;
      local_b8 = auVar12;
      local_a8 = auVar13;
      local_98 = auVar14;
      local_88 = auVar15;
      local_78 = auVar16;
    }
  }
  return __return_storage_ptr__;
}

// GetBoneNames @ 14da93080

TManagedArray<FString> * __thiscall PV::Facades::FBoneFacade::GetBoneNames(FBoneFacade *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<FString> *pTVar3;
  
  if ((this->BoneName).ConstAttributeArray != (TManagedArray<FString> *)0x0) {
    return (this->BoneName).ConstAttributeArray;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TManagedArray<FString> *)(*pcVar1)();
    return pTVar3;
  }
  return (this->BoneName).ConstAttributeArray;
}

// GetBoneParentIndices @ 14da930d0

TManagedArray<int> * __thiscall PV::Facades::FBoneFacade::GetBoneParentIndices(FBoneFacade *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
  
  if ((this->BoneParentIndex).ConstAttributeArray != (TManagedArray<int> *)0x0) {
    return (this->BoneParentIndex).ConstAttributeArray;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TManagedArray<int> *)(*pcVar1)();
    return pTVar3;
  }
  return (this->BoneParentIndex).ConstAttributeArray;
}

// GetBonePoses @ 14da93120

TManagedArray<UE::Math::TTransform<double>_> * __thiscall
PV::Facades::FBoneFacade::GetBonePoses(FBoneFacade *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar3;
  
  if ((this->BonePose).ConstAttributeArray != (TManagedArray<UE::Math::TTransform<double>_> *)0x0) {
    return (this->BonePose).ConstAttributeArray;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TManagedArray<UE::Math::TTransform<double>_> *)(*pcVar1)();
    return pTVar3;
  }
  return (this->BonePose).ConstAttributeArray;
}

// GetPointIds @ 14da98450

void __thiscall
PV::Facades::FBoneFacade::GetPointIds
          (FBoneFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  TManagedArray<int> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 local_res8 [8];
  undefined4 local_28 [4];
  
  if ((this->VertexPointIds).ConstAttributeArray == (TManagedArray<int> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x67,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar3 = (this->VertexPointIds).ConstAttributeArray;
  puVar8 = *(undefined4 **)&pTVar3->field_0x10;
  iVar2 = *(int *)&pTVar3->field_0x18;
  puVar1 = puVar8 + iVar2;
  while( true ) {
    if (*(int *)&pTVar3->field_0x18 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar8 == puVar1) break;
    local_28[0] = *puVar8;
    pFVar4 = (param_1->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)param_1->ArrayMax * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar7;
    }
    puVar8 = puVar8 + 1;
    param_1->ArrayNum = iVar7 + 1;
    *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_28[0];
  }
  return;
}

// GetVertexPointIds @ 14da9a9e0

TManagedArray<int> * __thiscall PV::Facades::FBoneFacade::GetVertexPointIds(FBoneFacade *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
  
  if ((this->VertexPointIds).ConstAttributeArray != (TManagedArray<int> *)0x0) {
    return (this->VertexPointIds).ConstAttributeArray;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TManagedArray<int> *)(*pcVar1)();
    return pTVar3;
  }
  return (this->VertexPointIds).ConstAttributeArray;
}

// IsValid @ 14da9afb0

bool __thiscall PV::Facades::FBoneFacade::IsValid(FBoneFacade *this)

{
  return (this->VertexPointIds).ConstAttributeArray != (TManagedArray<int> *)0x0;
}

// ModifyVertexPointIds @ 14da9de20

TManagedArray<int> * __thiscall PV::Facades::FBoneFacade::ModifyVertexPointIds(FBoneFacade *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
  
  if (((this->VertexPointIds).AttributeArray == (TManagedArray<int> *)0x0) ||
     ((this->VertexPointIds).Collection == (FManagedArrayCollection *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  ((this->VertexPointIds).AttributeArray)->field_0x8 = 1;
  return (this->VertexPointIds).AttributeArray;
}

// SetBoneDataToCollection @ 14daa54c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
PV::Facades::FBoneFacade::SetBoneDataToCollection
          (FBoneFacade *this,TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  int iVar5;
  TManagedArray<FString> *pTVar6;
  TManagedArray<int> *pTVar7;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar8;
  longlong lVar9;
  TManagedArray<UE::Math::TVector<float>_> *pTVar10;
  code *pcVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  FName FVar15;
  FName FVar16;
  FName FVar17;
  FName FVar18;
  FName FVar19;
  FName FVar20;
  longlong lVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  FString *pFVar25;
  ulonglong uVar26;
  uint uVar27;
  FName *this_00;
  longlong lVar28;
  uint uVar29;
  FName *pFVar30;
  undefined1 local_res8 [8];
  TArray<PV::Facades::FBoneNode,TSizedDefaultAllocator<32>_> *local_res10;
  uint local_res18;
  longlong local_res20;
  longlong local_c8;
  FString local_b8 [7];
  
  local_res10 = param_1;
  if ((this->VertexPointIds).ConstAttributeArray == (TManagedArray<int> *)0x0) {
    if (2 < (byte)LogProceduralVegetation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProceduralVegetation);
      return;
    }
  }
  else {
    iVar5 = param_1->ArrayNum;
    if (((this->BoneName).Collection == (FManagedArrayCollection *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("!IsConst()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x41,L""), bVar22)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    FManagedArrayCollection::AddElements((this->BoneName).Collection,iVar5,(this->BoneName).Group);
    local_res18 = param_1->ArrayNum;
    uVar26 = (ulonglong)(int)local_res18;
    uVar27 = 0;
    this_00 = (FName *)(param_1->AllocatorInstance).Data;
    pFVar30 = this_00 + uVar26 * 0x14;
    lVar28 = 0;
    local_c8 = 0;
    local_res20 = 0;
    while( true ) {
      if (param_1->ArrayNum != (int)uVar26) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<PV::Facades::FBoneNode,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (this_00 == pFVar30) break;
      pFVar25 = ::FName::ToString(this_00,local_b8);
      if ((((this->BoneName).AttributeArray == (TManagedArray<FString> *)0x0) ||
          ((this->BoneName).Collection == (FManagedArrayCollection *)0x0)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("AttributeArray != nullptr && !IsConst()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x7c,L""), bVar22)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar29 = ~uVar27 >> 0x1f;
      ((this->BoneName).AttributeArray)->field_0x8 = 1;
      pTVar6 = (this->BoneName).AttributeArray;
      uVar23 = 0;
      if ((int)uVar27 < *(int *)&pTVar6->field_0x18) {
        uVar23 = uVar29;
      }
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      ::FString::operator=
                ((FString *)((longlong)(int)uVar27 * 0x10 + *(longlong *)&pTVar6->field_0x10),
                 pFVar25);
      if (local_b8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8[0].Data.AllocatorInstance.Data);
      }
      if ((((this->BoneParentIndex).AttributeArray == (TManagedArray<int> *)0x0) ||
          ((this->BoneParentIndex).Collection == (FManagedArrayCollection *)0x0)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("AttributeArray != nullptr && !IsConst()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x7c,L""), bVar22)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      ((this->BoneParentIndex).AttributeArray)->field_0x8 = 1;
      pTVar7 = (this->BoneParentIndex).AttributeArray;
      uVar23 = this_00[1].Number;
      uVar24 = 0;
      if ((int)uVar27 < *(int *)&pTVar7->field_0x18) {
        uVar24 = uVar29;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      *(uint *)(*(longlong *)&pTVar7->field_0x10 + lVar28) = uVar23;
      if ((((this->BonePointIndex).AttributeArray == (TManagedArray<int> *)0x0) ||
          ((this->BonePointIndex).Collection == (FManagedArrayCollection *)0x0)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("AttributeArray != nullptr && !IsConst()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x7c,L""), bVar22)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      ((this->BonePointIndex).AttributeArray)->field_0x8 = 1;
      pTVar7 = (this->BonePointIndex).AttributeArray;
      uVar23 = this_00[2].ComparisonIndex.Value;
      uVar24 = 0;
      if ((int)uVar27 < *(int *)&pTVar7->field_0x18) {
        uVar24 = uVar29;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      *(uint *)(*(longlong *)&pTVar7->field_0x10 + lVar28) = uVar23;
      if ((((this->BoneBranchIndex).AttributeArray == (TManagedArray<int> *)0x0) ||
          ((this->BoneBranchIndex).Collection == (FManagedArrayCollection *)0x0)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("AttributeArray != nullptr && !IsConst()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x7c,L""), bVar22)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      ((this->BoneBranchIndex).AttributeArray)->field_0x8 = 1;
      pTVar7 = (this->BoneBranchIndex).AttributeArray;
      uVar23 = this_00[2].Number;
      uVar24 = 0;
      if ((int)uVar27 < *(int *)&pTVar7->field_0x18) {
        uVar24 = uVar29;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      *(uint *)(*(longlong *)&pTVar7->field_0x10 + lVar28) = uVar23;
      if ((((this->BoneId).AttributeArray == (TManagedArray<int> *)0x0) ||
          ((this->BoneId).Collection == (FManagedArrayCollection *)0x0)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("AttributeArray != nullptr && !IsConst()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x7c,L""), bVar22)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      ((this->BoneId).AttributeArray)->field_0x8 = 1;
      pTVar7 = (this->BoneId).AttributeArray;
      uVar23 = this_00[1].ComparisonIndex.Value;
      uVar24 = 0;
      if ((int)uVar27 < *(int *)&pTVar7->field_0x18) {
        uVar24 = uVar29;
      }
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      *(uint *)(*(longlong *)&pTVar7->field_0x10 + lVar28) = uVar23;
      if ((((this->BonePose).AttributeArray == (TManagedArray<UE::Math::TTransform<double>_> *)0x0)
          || ((this->BonePose).Collection == (FManagedArrayCollection *)0x0)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("AttributeArray != nullptr && !IsConst()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x7c,L""), bVar22)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      ((this->BonePose).AttributeArray)->field_0x8 = 1;
      pTVar8 = (this->BonePose).AttributeArray;
      FVar2 = this_00[4];
      FVar3 = this_00[5];
      FVar4 = this_00[6];
      FVar12 = this_00[7];
      FVar13 = this_00[8];
      FVar14 = this_00[9];
      FVar15 = this_00[10];
      FVar16 = this_00[0xb];
      FVar17 = this_00[0xc];
      FVar18 = this_00[0xd];
      FVar19 = this_00[0xe];
      FVar20 = this_00[0xf];
      uVar23 = 0;
      if ((int)uVar27 < *(int *)&pTVar8->field_0x18) {
        uVar23 = uVar29;
      }
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar21 = local_res20;
      lVar9 = *(longlong *)&pTVar8->field_0x10;
      *(FName *)(local_res20 + lVar9) = FVar2;
      ((FName *)(local_res20 + lVar9))[1] = FVar3;
      pFVar1 = (FName *)(local_res20 + 0x10 + lVar9);
      *pFVar1 = FVar4;
      pFVar1[1] = FVar12;
      pFVar1 = (FName *)(local_res20 + 0x20 + lVar9);
      *pFVar1 = FVar13;
      pFVar1[1] = FVar14;
      pFVar1 = (FName *)(local_res20 + 0x30 + lVar9);
      *pFVar1 = FVar15;
      pFVar1[1] = FVar16;
      pFVar1 = (FName *)(local_res20 + 0x40 + lVar9);
      *pFVar1 = FVar17;
      pFVar1[1] = FVar18;
      pFVar1 = (FName *)(local_res20 + 0x50 + lVar9);
      *pFVar1 = FVar19;
      pFVar1[1] = FVar20;
      FVar2 = this_00[0x10];
      FVar3 = this_00[0x11];
      FVar4 = this_00[0x12];
      if ((((this->BoneAbsolutePosition).AttributeArray ==
            (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
          ((this->BoneAbsolutePosition).Collection == (FManagedArrayCollection *)0x0)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("AttributeArray != nullptr && !IsConst()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x7c,L""), bVar22)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      ((this->BoneAbsolutePosition).AttributeArray)->field_0x8 = 1;
      pTVar10 = (this->BoneAbsolutePosition).AttributeArray;
      uVar23 = 0;
      if ((int)uVar27 < *(int *)&pTVar10->field_0x18) {
        uVar23 = uVar29;
      }
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_res20 = lVar21 + 0x60;
      lVar9 = *(longlong *)&pTVar10->field_0x10;
      uVar27 = uVar27 + 1;
      lVar28 = lVar28 + 4;
      *(float *)(local_c8 + lVar9) = (float)(double)FVar2;
      *(float *)(local_c8 + 4 + lVar9) = (float)(double)FVar3;
      *(float *)(local_c8 + 8 + lVar9) = (float)(double)FVar4;
      local_c8 = local_c8 + 0xc;
      this_00 = this_00 + 0x14;
      uVar26 = (ulonglong)local_res18;
      param_1 = local_res10;
    }
  }
  return;
}

// SetWindSimulationData @ 14daa9790

void __thiscall
PV::Facades::FBoneFacade::SetWindSimulationData(FBoneFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  FBranchFacade local_728;
  FPointFacade local_438;
  
  if ((this->BoneName).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FPointFacade::FPointFacade(&local_438,(this->BoneName).Collection);
  if ((this->BoneName).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FBranchFacade::FBranchFacade(&local_728,(this->BoneName).Collection);
  SetBranchSimulationGroupIndex(&local_438,&local_728);
  return;
}


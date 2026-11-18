// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 32

// FFoliageFacade @ 14da620b0

FFoliageFacade * __thiscall
PV::Facades::FFoliageFacade::FFoliageFacade
          (FFoliageFacade *this,FManagedArrayCollection *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FFoliageFacade *pFVar4;
  FValueType *pFVar5;
  FValueType *pFVar6;
  FValueType *pFVar7;
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
  
  this->ConstCollection = param_1;
  this->_padding_ = (longlong)&___7FFoliageFacade_Facades_PV__6B_;
  this->Collection = param_1;
  pFVar7 = (FValueType *)0x0;
  (this->NamesAttribute).ConstCollection = param_1;
  (this->NamesAttribute).Collection = param_1;
  (this->NamesAttribute).Name = AttributeNames::FoliageName;
  (this->NamesAttribute).Group = GroupNames::FoliageNamesGroup;
  (this->NamesAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->NamesAttribute).DefaultGroupDependency.Number = 0;
  local_e8 = AttributeNames::FoliageName;
  local_e0 = GroupNames::FoliageNamesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_e8);
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
      pFVar4 = (FFoliageFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->NamesAttribute).AttributeArray = (TManagedArray<FString> *)pFVar5;
  (this->NamesAttribute).ConstAttributeArray = (TManagedArray<FString> *)pFVar5;
  (this->NameIdsAttribute).ConstCollection = param_1;
  (this->NameIdsAttribute).Collection = param_1;
  (this->NameIdsAttribute).Name = AttributeNames::FoliageNameID;
  (this->NameIdsAttribute).Group = GroupNames::FoliageGroup;
  (this->NameIdsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->NameIdsAttribute).DefaultGroupDependency.Number = 0;
  local_d8 = AttributeNames::FoliageNameID;
  local_d0 = GroupNames::FoliageGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_d8);
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
      pFVar4 = (FFoliageFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->NameIdsAttribute).AttributeArray = (TManagedArray<int> *)pFVar5;
  (this->NameIdsAttribute).ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  (this->BranchIdsAttribute).ConstCollection = param_1;
  (this->BranchIdsAttribute).Collection = param_1;
  (this->BranchIdsAttribute).Name = AttributeNames::FoliageBranchID;
  (this->BranchIdsAttribute).Group = GroupNames::FoliageGroup;
  (this->BranchIdsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchIdsAttribute).DefaultGroupDependency.Number = 0;
  local_c8 = AttributeNames::FoliageBranchID;
  local_c0 = GroupNames::FoliageGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_c8);
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
      pFVar4 = (FFoliageFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->BranchIdsAttribute).AttributeArray = (TManagedArray<int> *)pFVar5;
  (this->BranchIdsAttribute).ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  (this->PivotPointsAttribute).ConstCollection = param_1;
  (this->PivotPointsAttribute).Collection = param_1;
  (this->PivotPointsAttribute).Name = AttributeNames::FoliagePivotPoint;
  (this->PivotPointsAttribute).Group = GroupNames::FoliageGroup;
  (this->PivotPointsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PivotPointsAttribute).DefaultGroupDependency.Number = 0;
  local_b8 = AttributeNames::FoliagePivotPoint;
  local_b0 = GroupNames::FoliageGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_b8);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  pFVar5 = pFVar7;
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FVectorType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar5 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFoliageFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->PivotPointsAttribute).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)pFVar5;
  (this->PivotPointsAttribute).ConstAttributeArray =
       (TManagedArray<UE::Math::TVector<float>_> *)pFVar5;
  (this->UpVectorsAttribute).ConstCollection = param_1;
  (this->UpVectorsAttribute).Collection = param_1;
  (this->UpVectorsAttribute).Name = AttributeNames::FoliageUPVector;
  (this->UpVectorsAttribute).Group = GroupNames::FoliageGroup;
  (this->UpVectorsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->UpVectorsAttribute).DefaultGroupDependency.Number = 0;
  local_a8 = AttributeNames::FoliageUPVector;
  local_a0 = GroupNames::FoliageGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_a8);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  pFVar5 = pFVar7;
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FVectorType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar5 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFoliageFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->UpVectorsAttribute).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)pFVar5;
  (this->UpVectorsAttribute).ConstAttributeArray =
       (TManagedArray<UE::Math::TVector<float>_> *)pFVar5;
  (this->NormalVectorsAttribute).ConstCollection = param_1;
  (this->NormalVectorsAttribute).Collection = param_1;
  (this->NormalVectorsAttribute).Name = AttributeNames::FoliageNormalVector;
  (this->NormalVectorsAttribute).Group = GroupNames::FoliageGroup;
  (this->NormalVectorsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->NormalVectorsAttribute).DefaultGroupDependency.Number = 0;
  local_98 = AttributeNames::FoliageNormalVector;
  local_90 = GroupNames::FoliageGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_98);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  pFVar5 = pFVar7;
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FVectorType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar5 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFoliageFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->NormalVectorsAttribute).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)pFVar5
  ;
  (this->NormalVectorsAttribute).ConstAttributeArray =
       (TManagedArray<UE::Math::TVector<float>_> *)pFVar5;
  (this->ScalesAttribute).ConstCollection = param_1;
  (this->ScalesAttribute).Collection = param_1;
  (this->ScalesAttribute).Name = AttributeNames::FoliageScale;
  (this->ScalesAttribute).Group = GroupNames::FoliageGroup;
  (this->ScalesAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ScalesAttribute).DefaultGroupDependency.Number = 0;
  local_88 = AttributeNames::FoliageScale;
  local_80 = GroupNames::FoliageGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_88);
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
      pFVar4 = (FFoliageFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->ScalesAttribute).AttributeArray = (TManagedArray<float> *)pFVar5;
  (this->ScalesAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar5;
  (this->LengthFromRootAttribute).ConstCollection = param_1;
  (this->LengthFromRootAttribute).Collection = param_1;
  (this->LengthFromRootAttribute).Name = AttributeNames::FoliageLengthFromRoot;
  (this->LengthFromRootAttribute).Group = GroupNames::FoliageGroup;
  (this->LengthFromRootAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->LengthFromRootAttribute).DefaultGroupDependency.Number = 0;
  local_78 = AttributeNames::FoliageLengthFromRoot;
  local_70 = GroupNames::FoliageGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_78);
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
      pFVar4 = (FFoliageFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->LengthFromRootAttribute).AttributeArray = (TManagedArray<float> *)pFVar5;
  (this->LengthFromRootAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar5;
  (this->ParentBoneIdsAttribute).ConstCollection = param_1;
  (this->ParentBoneIdsAttribute).Collection = param_1;
  (this->ParentBoneIdsAttribute).Name = AttributeNames::FoliageParentBoneID;
  (this->ParentBoneIdsAttribute).Group = GroupNames::FoliageGroup;
  (this->ParentBoneIdsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ParentBoneIdsAttribute).DefaultGroupDependency.Number = 0;
  local_68 = AttributeNames::FoliageParentBoneID;
  local_60 = GroupNames::FoliageGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_68);
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
      pFVar4 = (FFoliageFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->ParentBoneIdsAttribute).AttributeArray = (TManagedArray<int> *)pFVar5;
  (this->ParentBoneIdsAttribute).ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  (this->FoliageIdsAttribute).ConstCollection = param_1;
  (this->FoliageIdsAttribute).Collection = param_1;
  (this->FoliageIdsAttribute).Name = AttributeNames::BranchFoliageIDs;
  (this->FoliageIdsAttribute).Group = GroupNames::BranchGroup;
  (this->FoliageIdsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FoliageIdsAttribute).DefaultGroupDependency.Number = 0;
  local_58 = AttributeNames::BranchFoliageIDs;
  local_50 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  pFVar5 = pFVar7;
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FInt32ArrayType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar5 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFoliageFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->FoliageIdsAttribute).AttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar5;
  (this->FoliageIdsAttribute).ConstAttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar5;
  (this->FoliagePathAttribute).ConstCollection = param_1;
  (this->FoliagePathAttribute).Collection = param_1;
  (this->FoliagePathAttribute).Name = AttributeNames::FoliagePath;
  (this->FoliagePathAttribute).Group = GroupNames::DetailsGroup;
  (this->FoliagePathAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FoliagePathAttribute).DefaultGroupDependency.Number = 0;
  local_48 = AttributeNames::FoliagePath;
  local_40 = GroupNames::DetailsGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FStringType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar7 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar7 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFoliageFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar7->GroupIndexDependency).Number = 1;
  }
  (this->FoliagePathAttribute).AttributeArray = (TManagedArray<FString> *)pFVar7;
  (this->FoliagePathAttribute).ConstAttributeArray = (TManagedArray<FString> *)pFVar7;
  DefineSchema(this,param_2);
  return this;
}

// FFoliageFacade @ 14da62920

FFoliageFacade * __thiscall
PV::Facades::FFoliageFacade::FFoliageFacade(FFoliageFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FFoliageFacade *pFVar4;
  char *pcVar5;
  TManagedArray<FString> *pTVar6;
  TManagedArray<UE::Math::TVector<float>_> *pTVar7;
  TManagedArray<float> *pTVar8;
  TManagedArray<int> *pTVar9;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar10;
  char *pcVar11;
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
  this->_padding_ = (longlong)&___7FFoliageFacade_Facades_PV__6B_;
  pcVar11 = (char *)0x0;
  this->Collection = (FManagedArrayCollection *)0x0;
  (this->NamesAttribute).ConstCollection = param_1;
  (this->NamesAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->NamesAttribute).Name = AttributeNames::FoliageName;
  (this->NamesAttribute).Group = GroupNames::FoliageNamesGroup;
  (this->NamesAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->NamesAttribute).DefaultGroupDependency.Number = 0;
  (this->NamesAttribute).AttributeArray = (TManagedArray<FString> *)0x0;
  local_f0 = AttributeNames::FoliageName;
  local_e8 = GroupNames::FoliageNamesGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_f0);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar11;
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
        pFVar4 = (FFoliageFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->NamesAttribute).ConstAttributeArray = pTVar6;
  (this->NameIdsAttribute).ConstCollection = param_1;
  (this->NameIdsAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->NameIdsAttribute).Name = AttributeNames::FoliageNameID;
  (this->NameIdsAttribute).Group = GroupNames::FoliageGroup;
  (this->NameIdsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->NameIdsAttribute).DefaultGroupDependency.Number = 0;
  (this->NameIdsAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  local_e0 = AttributeNames::FoliageNameID;
  local_d8 = GroupNames::FoliageGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_e0);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar11;
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
        pFVar4 = (FFoliageFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->NameIdsAttribute).ConstAttributeArray = pTVar9;
  (this->BranchIdsAttribute).ConstCollection = param_1;
  (this->BranchIdsAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->BranchIdsAttribute).Name = AttributeNames::FoliageBranchID;
  (this->BranchIdsAttribute).Group = GroupNames::FoliageGroup;
  (this->BranchIdsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchIdsAttribute).DefaultGroupDependency.Number = 0;
  (this->BranchIdsAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  local_d0 = AttributeNames::FoliageBranchID;
  local_c8 = GroupNames::FoliageGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_d0);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar11;
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
        pFVar4 = (FFoliageFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BranchIdsAttribute).ConstAttributeArray = pTVar9;
  (this->PivotPointsAttribute).ConstCollection = param_1;
  (this->PivotPointsAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->PivotPointsAttribute).Name = AttributeNames::FoliagePivotPoint;
  (this->PivotPointsAttribute).Group = GroupNames::FoliageGroup;
  (this->PivotPointsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PivotPointsAttribute).DefaultGroupDependency.Number = 0;
  (this->PivotPointsAttribute).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_c0 = AttributeNames::FoliagePivotPoint;
  local_b8 = GroupNames::FoliageGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_c0);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar11;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x01')) {
    pTVar7 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  else {
    pTVar7 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar5 + 0x20);
    if (pTVar7 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FFoliageFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->PivotPointsAttribute).ConstAttributeArray = pTVar7;
  (this->UpVectorsAttribute).ConstCollection = param_1;
  (this->UpVectorsAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->UpVectorsAttribute).Name = AttributeNames::FoliageUPVector;
  (this->UpVectorsAttribute).Group = GroupNames::FoliageGroup;
  (this->UpVectorsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->UpVectorsAttribute).DefaultGroupDependency.Number = 0;
  (this->UpVectorsAttribute).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_b0 = AttributeNames::FoliageUPVector;
  local_a8 = GroupNames::FoliageGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_b0);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar11;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x01')) {
    pTVar7 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  else {
    pTVar7 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar5 + 0x20);
    if (pTVar7 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FFoliageFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->UpVectorsAttribute).ConstAttributeArray = pTVar7;
  (this->NormalVectorsAttribute).ConstCollection = param_1;
  (this->NormalVectorsAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->NormalVectorsAttribute).Name = AttributeNames::FoliageNormalVector;
  (this->NormalVectorsAttribute).Group = GroupNames::FoliageGroup;
  (this->NormalVectorsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->NormalVectorsAttribute).DefaultGroupDependency.Number = 0;
  (this->NormalVectorsAttribute).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_a0 = AttributeNames::FoliageNormalVector;
  local_98 = GroupNames::FoliageGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_a0);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar11;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x01')) {
    pTVar7 = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  }
  else {
    pTVar7 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar5 + 0x20);
    if (pTVar7 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FFoliageFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->NormalVectorsAttribute).ConstAttributeArray = pTVar7;
  (this->ScalesAttribute).ConstCollection = param_1;
  (this->ScalesAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ScalesAttribute).Name = AttributeNames::FoliageScale;
  (this->ScalesAttribute).Group = GroupNames::FoliageGroup;
  (this->ScalesAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ScalesAttribute).DefaultGroupDependency.Number = 0;
  (this->ScalesAttribute).AttributeArray = (TManagedArray<float> *)0x0;
  local_90 = AttributeNames::FoliageScale;
  local_88 = GroupNames::FoliageGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_90);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar11;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\t')) {
    pTVar8 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar8 = *(TManagedArray<float> **)(pcVar5 + 0x20);
    if (pTVar8 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FFoliageFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->ScalesAttribute).ConstAttributeArray = pTVar8;
  (this->LengthFromRootAttribute).ConstCollection = param_1;
  (this->LengthFromRootAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->LengthFromRootAttribute).Name = AttributeNames::FoliageLengthFromRoot;
  (this->LengthFromRootAttribute).Group = GroupNames::FoliageGroup;
  (this->LengthFromRootAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->LengthFromRootAttribute).DefaultGroupDependency.Number = 0;
  (this->LengthFromRootAttribute).AttributeArray = (TManagedArray<float> *)0x0;
  local_80 = AttributeNames::FoliageLengthFromRoot;
  local_78 = GroupNames::FoliageGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_80);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar11;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\t')) {
    pTVar8 = (TManagedArray<float> *)0x0;
  }
  else {
    pTVar8 = *(TManagedArray<float> **)(pcVar5 + 0x20);
    if (pTVar8 == (TManagedArray<float> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FFoliageFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->LengthFromRootAttribute).ConstAttributeArray = pTVar8;
  (this->ParentBoneIdsAttribute).ConstCollection = param_1;
  (this->ParentBoneIdsAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ParentBoneIdsAttribute).Name = AttributeNames::FoliageParentBoneID;
  (this->ParentBoneIdsAttribute).Group = GroupNames::FoliageGroup;
  (this->ParentBoneIdsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ParentBoneIdsAttribute).DefaultGroupDependency.Number = 0;
  (this->ParentBoneIdsAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  local_70 = AttributeNames::FoliageParentBoneID;
  local_68 = GroupNames::FoliageGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_70);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar11;
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
        pFVar4 = (FFoliageFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->ParentBoneIdsAttribute).ConstAttributeArray = pTVar9;
  (this->FoliageIdsAttribute).ConstCollection = param_1;
  (this->FoliageIdsAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->FoliageIdsAttribute).Name = AttributeNames::BranchFoliageIDs;
  (this->FoliageIdsAttribute).Group = GroupNames::BranchGroup;
  (this->FoliageIdsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FoliageIdsAttribute).DefaultGroupDependency.Number = 0;
  (this->FoliageIdsAttribute).AttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_60 = AttributeNames::BranchFoliageIDs;
  local_58 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_60);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar11;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '%')) {
    pTVar10 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar10 = *(TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> **)(pcVar5 + 0x20);
    if (pTVar10 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FFoliageFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->FoliageIdsAttribute).ConstAttributeArray = pTVar10;
  (this->FoliagePathAttribute).ConstCollection = param_1;
  (this->FoliagePathAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->FoliagePathAttribute).Name = AttributeNames::FoliagePath;
  (this->FoliagePathAttribute).Group = GroupNames::DetailsGroup;
  (this->FoliagePathAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->FoliagePathAttribute).DefaultGroupDependency.Number = 0;
  (this->FoliagePathAttribute).AttributeArray = (TManagedArray<FString> *)0x0;
  local_50 = AttributeNames::FoliagePath;
  local_48 = GroupNames::DetailsGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_50);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar11;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\b')) {
    (this->FoliagePathAttribute).ConstAttributeArray = (TManagedArray<FString> *)0x0;
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
        pFVar4 = (FFoliageFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
    (this->FoliagePathAttribute).ConstAttributeArray = pTVar6;
  }
  return this;
}

// AddFoliageEntry @ 14da6a630

int __thiscall
PV::Facades::FFoliageFacade::AddFoliageEntry(FFoliageFacade *this,FFoliageEntryData *param_1)

{
  undefined8 uVar1;
  float fVar2;
  TManagedArray<int> *pTVar3;
  TManagedArray<UE::Math::TVector<float>_> *pTVar4;
  longlong lVar5;
  TManagedArray<float> *pTVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                       ,0xb7,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return iVar9;
    }
  }
  bVar8 = IsValid(this);
  if (bVar8) {
    if ((this->NameIdsAttribute).Collection == (FManagedArrayCollection *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x41,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    uVar10 = FManagedArrayCollection::AddElements
                       ((this->NameIdsAttribute).Collection,1,(this->NameIdsAttribute).Group);
    iVar9 = param_1->NameId;
    lVar13 = (longlong)(int)uVar10;
    if (((this->NameIdsAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
       ((this->NameIdsAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    uVar14 = ~uVar10 >> 0x1f;
    ((this->NameIdsAttribute).AttributeArray)->field_0x8 = 1;
    pTVar3 = (this->NameIdsAttribute).AttributeArray;
    uVar11 = 0;
    if ((int)uVar10 < *(int *)&pTVar3->field_0x18) {
      uVar11 = uVar14;
    }
    if (uVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    *(int *)(*(longlong *)&pTVar3->field_0x10 + lVar13 * 4) = iVar9;
    iVar9 = param_1->BranchId;
    if (((this->BranchIdsAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
       ((this->BranchIdsAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    ((this->BranchIdsAttribute).AttributeArray)->field_0x8 = 1;
    pTVar3 = (this->BranchIdsAttribute).AttributeArray;
    uVar12 = 0;
    uVar11 = uVar12;
    if ((int)uVar10 < *(int *)&pTVar3->field_0x18) {
      uVar11 = uVar14;
    }
    if (uVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    *(int *)(*(longlong *)&pTVar3->field_0x10 + lVar13 * 4) = iVar9;
    fVar2 = (param_1->PivotPoint).field0_0x0._s_0.Z;
    uVar1 = *(undefined8 *)&(param_1->PivotPoint).field0_0x0;
    if (((this->PivotPointsAttribute).AttributeArray ==
         (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
       ((this->PivotPointsAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    ((this->PivotPointsAttribute).AttributeArray)->field_0x8 = 1;
    pTVar4 = (this->PivotPointsAttribute).AttributeArray;
    uVar11 = uVar12;
    if ((int)uVar10 < *(int *)&pTVar4->field_0x18) {
      uVar11 = uVar14;
    }
    if (uVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    lVar5 = *(longlong *)&pTVar4->field_0x10;
    *(undefined8 *)(lVar5 + lVar13 * 0xc) = uVar1;
    *(float *)(lVar5 + 8 + lVar13 * 0xc) = fVar2;
    fVar2 = (param_1->UpVector).field0_0x0._s_0.Z;
    uVar1 = *(undefined8 *)&(param_1->UpVector).field0_0x0;
    if (((this->UpVectorsAttribute).AttributeArray ==
         (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
       ((this->UpVectorsAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    ((this->UpVectorsAttribute).AttributeArray)->field_0x8 = 1;
    pTVar4 = (this->UpVectorsAttribute).AttributeArray;
    uVar11 = uVar12;
    if ((int)uVar10 < *(int *)&pTVar4->field_0x18) {
      uVar11 = uVar14;
    }
    if (uVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    lVar5 = *(longlong *)&pTVar4->field_0x10;
    *(undefined8 *)(lVar5 + lVar13 * 0xc) = uVar1;
    *(float *)(lVar5 + 8 + lVar13 * 0xc) = fVar2;
    fVar2 = (param_1->NormalVector).field0_0x0._s_0.Z;
    uVar1 = *(undefined8 *)&(param_1->NormalVector).field0_0x0;
    if (((this->NormalVectorsAttribute).AttributeArray ==
         (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
       ((this->NormalVectorsAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    ((this->NormalVectorsAttribute).AttributeArray)->field_0x8 = 1;
    pTVar4 = (this->NormalVectorsAttribute).AttributeArray;
    if ((int)uVar10 < *(int *)&pTVar4->field_0x18) {
      uVar12 = uVar14;
    }
    if (uVar12 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    lVar5 = *(longlong *)&pTVar4->field_0x10;
    *(undefined8 *)(lVar5 + lVar13 * 0xc) = uVar1;
    *(float *)(lVar5 + 8 + lVar13 * 0xc) = fVar2;
    fVar2 = param_1->Scale;
    if (((this->ScalesAttribute).AttributeArray == (TManagedArray<float> *)0x0) ||
       ((this->ScalesAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    ((this->ScalesAttribute).AttributeArray)->field_0x8 = 1;
    pTVar6 = (this->ScalesAttribute).AttributeArray;
    uVar11 = 0;
    if ((int)uVar10 < *(int *)&pTVar6->field_0x18) {
      uVar11 = uVar14;
    }
    if (uVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    *(float *)(*(longlong *)&pTVar6->field_0x10 + lVar13 * 4) = fVar2;
    fVar2 = param_1->LengthFromRoot;
    if (((this->LengthFromRootAttribute).AttributeArray == (TManagedArray<float> *)0x0) ||
       ((this->LengthFromRootAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    ((this->LengthFromRootAttribute).AttributeArray)->field_0x8 = 1;
    pTVar6 = (this->LengthFromRootAttribute).AttributeArray;
    uVar11 = 0;
    if ((int)uVar10 < *(int *)&pTVar6->field_0x18) {
      uVar11 = uVar14;
    }
    if (uVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    *(float *)(*(longlong *)&pTVar6->field_0x10 + lVar13 * 4) = fVar2;
    iVar9 = param_1->ParentBoneID;
    if (((this->ParentBoneIdsAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
       ((this->ParentBoneIdsAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    ((this->ParentBoneIdsAttribute).AttributeArray)->field_0x8 = 1;
    pTVar3 = (this->ParentBoneIdsAttribute).AttributeArray;
    uVar11 = 0;
    if ((int)uVar10 < *(int *)&pTVar3->field_0x18) {
      uVar11 = uVar14;
    }
    if (uVar11 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        iVar9 = (*pcVar7)();
        return iVar9;
      }
    }
    *(int *)(*(longlong *)&pTVar3->field_0x10 + lVar13 * 4) = iVar9;
    return uVar10;
  }
  return -1;
}

// CopyEntry @ 14da77180

void __thiscall PV::Facades::FFoliageFacade::CopyEntry(FFoliageFacade *this,int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  TVector<float> *pTVar3;
  float *pfVar4;
  
  bVar1 = IsValid(this);
  if (((bVar1) &&
      (bVar1 = TManagedArrayAccessor<int>::IsValidIndex(&this->NameIdsAttribute,param_1), bVar1)) &&
     (bVar1 = TManagedArrayAccessor<int>::IsValidIndex(&this->NameIdsAttribute,param_2), bVar1)) {
    piVar2 = TManagedArrayAccessor<int>::operator[](&this->NameIdsAttribute,param_1);
    TManagedArrayAccessor<int>::ModifyAt(&this->NameIdsAttribute,param_2,piVar2);
    piVar2 = TManagedArrayAccessor<int>::operator[](&this->BranchIdsAttribute,param_1);
    TManagedArrayAccessor<int>::ModifyAt(&this->BranchIdsAttribute,param_2,piVar2);
    pTVar3 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                       (&this->PivotPointsAttribute,param_1);
    TManagedArrayAccessor<UE::Math::TVector<float>_>::ModifyAt
              (&this->PivotPointsAttribute,param_2,pTVar3);
    pTVar3 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                       (&this->UpVectorsAttribute,param_1);
    TManagedArrayAccessor<UE::Math::TVector<float>_>::ModifyAt
              (&this->UpVectorsAttribute,param_2,pTVar3);
    pTVar3 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                       (&this->NormalVectorsAttribute,param_1);
    TManagedArrayAccessor<UE::Math::TVector<float>_>::ModifyAt
              (&this->NormalVectorsAttribute,param_2,pTVar3);
    pfVar4 = TManagedArrayAccessor<float>::operator[](&this->ScalesAttribute,param_1);
    TManagedArrayAccessor<float>::ModifyAt(&this->ScalesAttribute,param_2,pfVar4);
    pfVar4 = TManagedArrayAccessor<float>::operator[](&this->LengthFromRootAttribute,param_1);
    TManagedArrayAccessor<float>::ModifyAt(&this->LengthFromRootAttribute,param_2,pfVar4);
    piVar2 = TManagedArrayAccessor<int>::operator[](&this->ParentBoneIdsAttribute,param_1);
    TManagedArrayAccessor<int>::ModifyAt(&this->ParentBoneIdsAttribute,param_2,piVar2);
  }
  return;
}

// DefineSchema @ 14da7abd0

void __thiscall PV::Facades::FFoliageFacade::DefineSchema(FFoliageFacade *this,int param_1)

{
  FManagedArrayCollection *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                       ,0x31,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar3 = GroupNames::FoliageGroup;
  pFVar1 = this->Collection;
  uVar5 = ::GetTypeHash(GroupNames::FoliageGroup.ComparisonIndex.Value);
  if (*(int *)&(pFVar1->GroupInfo).field_0x8 != *(int *)&(pFVar1->GroupInfo).field_0x34) {
    puVar7 = *(undefined1 **)&(pFVar1->GroupInfo).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(pFVar1->GroupInfo).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(pFVar1->GroupInfo).field_0x48 - 1U & FVar3.Number + uVar5)
                              * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar1->GroupInfo + (longlong)iVar6 * 0x14) == FVar3)
        goto LAB_14da7ac9f;
        iVar6 = *(int *)(*(longlong *)&pFVar1->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,GroupNames::FoliageGroup);
  if (0 < param_1) {
    FManagedArrayCollection::AddElements(this->Collection,param_1,GroupNames::FoliageGroup);
  }
LAB_14da7ac9f:
  FVar3 = GroupNames::FoliageNamesGroup;
  pFVar1 = this->Collection;
  uVar5 = ::GetTypeHash(GroupNames::FoliageNamesGroup.ComparisonIndex.Value);
  if (*(int *)&(pFVar1->GroupInfo).field_0x8 != *(int *)&(pFVar1->GroupInfo).field_0x34) {
    puVar7 = *(undefined1 **)&(pFVar1->GroupInfo).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(pFVar1->GroupInfo).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(pFVar1->GroupInfo).field_0x48 - 1U & FVar3.Number + uVar5)
                              * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar1->GroupInfo + (longlong)iVar6 * 0x14) == FVar3)
        goto LAB_14da7ad25;
        iVar6 = *(int *)(*(longlong *)&pFVar1->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,GroupNames::FoliageNamesGroup);
LAB_14da7ad25:
  FVar3 = GroupNames::DetailsGroup;
  pFVar1 = this->Collection;
  uVar5 = ::GetTypeHash(GroupNames::DetailsGroup.ComparisonIndex.Value);
  if (*(int *)&(pFVar1->GroupInfo).field_0x8 != *(int *)&(pFVar1->GroupInfo).field_0x34) {
    puVar7 = *(undefined1 **)&(pFVar1->GroupInfo).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(pFVar1->GroupInfo).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(pFVar1->GroupInfo).field_0x48 - 1U & FVar3.Number + uVar5)
                              * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar1->GroupInfo + (longlong)iVar6 * 0x14) == FVar3)
        goto LAB_14da7ada5;
        iVar6 = *(int *)(*(longlong *)&pFVar1->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,GroupNames::DetailsGroup);
LAB_14da7ada5:
  TManagedArrayAccessor<FString>::Add(&this->NamesAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->NameIdsAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->BranchIdsAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            (&this->PivotPointsAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            (&this->UpVectorsAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            (&this->NormalVectorsAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->ScalesAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->LengthFromRootAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->ParentBoneIdsAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::Add
            (&this->FoliageIdsAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<FString>::Add(&this->FoliagePathAttribute,MakePersistent,(FName)0x0);
  return;
}

// GetElementCount @ 14da94550

int __thiscall PV::Facades::FFoliageFacade::GetElementCount(FFoliageFacade *this)

{
  TManagedArray<int> *pTVar1;
  int iVar2;
  
  pTVar1 = (this->NameIdsAttribute).ConstAttributeArray;
  if (pTVar1 != (TManagedArray<int> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014da94562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    return iVar2;
  }
  iVar2 = FManagedArrayCollection::NumElements
                    ((this->NameIdsAttribute).ConstCollection,(this->NameIdsAttribute).Group);
  return iVar2;
}

// GetFoliageEntry @ 14da94c90

FFoliageEntryData * __thiscall
PV::Facades::FFoliageFacade::GetFoliageEntry
          (FFoliageFacade *this,FFoliageEntryData *__return_storage_ptr__,int param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  TManagedArray<int> *pTVar4;
  FFoliageEntryData *pFVar5;
  TManagedArray<UE::Math::TVector<float>_> *pTVar6;
  TManagedArray<float> *pTVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  lVar9 = (longlong)param_1;
  __return_storage_ptr__->NameId = 0;
  __return_storage_ptr__->BranchId = 0;
  *(undefined8 *)&(__return_storage_ptr__->PivotPoint).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->PivotPoint).field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->UpVector).field0_0x0 + 4) = 0;
  *(undefined8 *)&(__return_storage_ptr__->NormalVector).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->NormalVector).field0_0x0 + 8) = 0;
  __return_storage_ptr__->LengthFromRoot = 0.0;
  __return_storage_ptr__->ParentBoneID = -1;
  bVar3 = IsValid(this);
  if ((!bVar3) || (param_1 < 0)) {
    return __return_storage_ptr__;
  }
  uVar10 = (uint)~param_1 >> 0x1f;
  bVar3 = TManagedArrayAccessor<int>::IsValidIndex(&this->NameIdsAttribute,param_1);
  if (bVar3) {
    pTVar4 = TManagedArrayAccessor<int>::Get(&this->NameIdsAttribute);
    uVar8 = 0;
    if (param_1 < *(int *)&pTVar4->field_0x18) {
      uVar8 = uVar10;
    }
    if ((uVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFoliageEntryData *)(*pcVar2)();
      return pFVar5;
    }
    __return_storage_ptr__->NameId = *(int *)(*(longlong *)&pTVar4->field_0x10 + lVar9 * 4);
  }
  bVar3 = TManagedArrayAccessor<int>::IsValidIndex(&this->BranchIdsAttribute,param_1);
  if (bVar3) {
    pTVar4 = TManagedArrayAccessor<int>::Get(&this->BranchIdsAttribute);
    uVar8 = 0;
    if (param_1 < *(int *)&pTVar4->field_0x18) {
      uVar8 = uVar10;
    }
    if ((uVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFoliageEntryData *)(*pcVar2)();
      return pFVar5;
    }
    __return_storage_ptr__->BranchId = *(int *)(*(longlong *)&pTVar4->field_0x10 + lVar9 * 4);
  }
  bVar3 = TManagedArrayAccessor<UE::Math::TVector<float>_>::IsValidIndex
                    (&this->PivotPointsAttribute,param_1);
  if (bVar3) {
    pTVar6 = TManagedArrayAccessor<UE::Math::TVector<float>_>::Get(&this->PivotPointsAttribute);
    uVar8 = 0;
    if (param_1 < *(int *)&pTVar6->field_0x18) {
      uVar8 = uVar10;
    }
    if ((uVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFoliageEntryData *)(*pcVar2)();
      return pFVar5;
    }
    fVar1 = *(float *)(*(longlong *)&pTVar6->field_0x10 + 8 + lVar9 * 0xc);
    *(undefined8 *)&(__return_storage_ptr__->PivotPoint).field0_0x0 =
         *(undefined8 *)(*(longlong *)&pTVar6->field_0x10 + lVar9 * 0xc);
    (__return_storage_ptr__->PivotPoint).field0_0x0._s_0.Z = fVar1;
  }
  bVar3 = TManagedArrayAccessor<UE::Math::TVector<float>_>::IsValidIndex
                    (&this->UpVectorsAttribute,param_1);
  if (bVar3) {
    pTVar6 = TManagedArrayAccessor<UE::Math::TVector<float>_>::Get(&this->UpVectorsAttribute);
    uVar8 = 0;
    if (param_1 < *(int *)&pTVar6->field_0x18) {
      uVar8 = uVar10;
    }
    if ((uVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFoliageEntryData *)(*pcVar2)();
      return pFVar5;
    }
    fVar1 = *(float *)(*(longlong *)&pTVar6->field_0x10 + 8 + lVar9 * 0xc);
    *(undefined8 *)&(__return_storage_ptr__->UpVector).field0_0x0 =
         *(undefined8 *)(*(longlong *)&pTVar6->field_0x10 + lVar9 * 0xc);
    (__return_storage_ptr__->UpVector).field0_0x0._s_0.Z = fVar1;
  }
  uVar10 = (uint)~param_1 >> 0x1f;
  bVar3 = TManagedArrayAccessor<UE::Math::TVector<float>_>::IsValidIndex
                    (&this->NormalVectorsAttribute,param_1);
  if (bVar3) {
    pTVar6 = TManagedArrayAccessor<UE::Math::TVector<float>_>::Get(&this->NormalVectorsAttribute);
    uVar8 = 0;
    if (param_1 < *(int *)&pTVar6->field_0x18) {
      uVar8 = uVar10;
    }
    if ((uVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFoliageEntryData *)(*pcVar2)();
      return pFVar5;
    }
    fVar1 = *(float *)(lVar9 * 0xc + 8 + *(longlong *)&pTVar6->field_0x10);
    *(undefined8 *)&(__return_storage_ptr__->NormalVector).field0_0x0 =
         *(undefined8 *)(lVar9 * 0xc + *(longlong *)&pTVar6->field_0x10);
    (__return_storage_ptr__->NormalVector).field0_0x0._s_0.Z = fVar1;
  }
  bVar3 = TManagedArrayAccessor<float>::IsValidIndex(&this->ScalesAttribute,param_1);
  if (bVar3) {
    pTVar7 = TManagedArrayAccessor<float>::Get(&this->ScalesAttribute);
    uVar8 = 0;
    if (param_1 < *(int *)&pTVar7->field_0x18) {
      uVar8 = uVar10;
    }
    if ((uVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFoliageEntryData *)(*pcVar2)();
      return pFVar5;
    }
    __return_storage_ptr__->Scale = *(float *)(*(longlong *)&pTVar7->field_0x10 + lVar9 * 4);
  }
  bVar3 = TManagedArrayAccessor<float>::IsValidIndex(&this->LengthFromRootAttribute,param_1);
  if (bVar3) {
    pTVar7 = TManagedArrayAccessor<float>::Get(&this->LengthFromRootAttribute);
    uVar8 = 0;
    if (param_1 < *(int *)&pTVar7->field_0x18) {
      uVar8 = uVar10;
    }
    if ((uVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFoliageEntryData *)(*pcVar2)();
      return pFVar5;
    }
    __return_storage_ptr__->LengthFromRoot =
         *(float *)(*(longlong *)&pTVar7->field_0x10 + lVar9 * 4);
  }
  bVar3 = TManagedArrayAccessor<int>::IsValidIndex(&this->ParentBoneIdsAttribute,param_1);
  if (bVar3) {
    pTVar4 = TManagedArrayAccessor<int>::Get(&this->ParentBoneIdsAttribute);
    uVar10 = 0;
    if (param_1 < *(int *)&pTVar4->field_0x18) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFoliageEntryData *)(*pcVar2)();
      return pFVar5;
    }
    __return_storage_ptr__->ParentBoneID = *(int *)(*(longlong *)&pTVar4->field_0x10 + lVar9 * 4);
  }
  return __return_storage_ptr__;
}

// GetFoliageEntryIdsForBranch @ 14da95110

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch(FFoliageFacade *this,int param_1)

{
  int iVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (((this->FoliageIdsAttribute).ConstAttributeArray !=
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) && (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->FoliageIdsAttribute).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pTVar2 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                         (&this->FoliageIdsAttribute,param_1);
      return pTVar2;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::EmptyArray;
}

// GetFoliageName @ 14da951d0

FString * __thiscall
PV::Facades::FFoliageFacade::GetFoliageName
          (FFoliageFacade *this,FString *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FString *pFVar2;
  
  if (((this->NamesAttribute).ConstAttributeArray != (TManagedArray<FString> *)0x0) &&
     (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->NamesAttribute).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pFVar2 = TManagedArrayAccessor<FString>::operator[](&this->NamesAttribute,param_1);
      ::FString::FString(__return_storage_ptr__,pFVar2);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetFoliageNames @ 14da95250

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FFoliageFacade::GetFoliageNames
          (FFoliageFacade *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TManagedArray<FString> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((this->NamesAttribute).ConstAttributeArray != (TManagedArray<FString> *)0x0) {
    uVar7 = 0;
    while( true ) {
      pTVar1 = (this->NamesAttribute).ConstAttributeArray;
      if (pTVar1 == (TManagedArray<FString> *)0x0) {
        iVar4 = FManagedArrayCollection::NumElements
                          ((this->NamesAttribute).ConstCollection,(this->NamesAttribute).Group);
      }
      else {
        iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
      }
      if (iVar4 <= (int)uVar7) break;
      if (((this->NamesAttribute).ConstAttributeArray == (TManagedArray<FString> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x60,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      pTVar1 = (this->NamesAttribute).ConstAttributeArray;
      uVar5 = 0;
      if ((int)uVar7 < *(int *)&pTVar1->field_0x18) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                (__return_storage_ptr__,
                 (FString *)((longlong)(int)uVar7 * 0x10 + *(longlong *)&pTVar1->field_0x10));
      uVar7 = uVar7 + 1;
    }
  }
  return __return_storage_ptr__;
}

// GetFoliagePath @ 14da95360

FString * __thiscall
PV::Facades::FFoliageFacade::GetFoliagePath(FFoliageFacade *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FString *pFVar2;
  
  if ((this->FoliagePathAttribute).ConstAttributeArray != (TManagedArray<FString> *)0x0) {
    iVar1 = (**(code **)(*(longlong *)(this->FoliagePathAttribute).ConstAttributeArray + 0x60))();
    if (0 < iVar1) {
      pFVar2 = TManagedArrayAccessor<FString>::operator[](&this->FoliagePathAttribute,0);
      ::FString::FString(__return_storage_ptr__,pFVar2);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetFoliageTransform @ 14da953d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
PV::Facades::FFoliageFacade::GetFoliageTransform
          (FFoliageFacade *this,TTransform<double> *__return_storage_ptr__,int param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  __m128 _Var15;
  undefined8 uVar16;
  TQuat<double> *pTVar17;
  float fVar18;
  undefined1 extraout_XMM0 [16];
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_368 [32];
  TVector<double>_u_0 local_348;
  TQuat<double> local_328;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [12];
  float fStack_2cc;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_368;
  GetFoliageEntry(this,(FFoliageEntryData *)local_2f8,param_1);
  dVar3 = __real_3ff0000000000000;
  dVar8 = (double)(float)local_2e8._4_4_;
  dVar9 = (double)(float)local_2e8._8_4_;
  dVar10 = (double)(float)local_2e8._12_4_;
  dVar7 = dVar9 * dVar9 + dVar8 * dVar8 + dVar10 * dVar10;
  local_348._s_0.X = dVar8;
  local_348._s_0.Y = dVar9;
  local_348._s_0.Z = dVar10;
  if (dVar7 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar7) {
      dVar4 = __real_3ff0000000000000 / SQRT(dVar7);
      local_348._s_0.X = dVar8 * dVar4;
      local_348._s_0.Y = dVar9 * dVar4;
      local_348._s_0.Z = dVar10 * dVar4;
    }
    else {
      local_348._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_348._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_348._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  UE::Math::TQuat<double>::FindBetweenNormals
            (&local_328,&UE::Math::TVector<double>::UpVector,(TVector<double> *)&local_348._s_0);
  dVar5 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z * local_328.Y -
          UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y * local_328.Z;
  dVar5 = dVar5 + dVar5;
  dVar6 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X * local_328.Z -
          UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z * local_328.X;
  dVar6 = dVar6 + dVar6;
  dVar4 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y * local_328.X -
          UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X * local_328.Y;
  dVar4 = dVar4 + dVar4;
  fVar18 = (float)(((dVar5 * local_328.Z - dVar4 * local_328.X) +
                   dVar6 * local_328.W + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y) *
                   (double)(float)local_2d8._4_4_ +
                   ((dVar4 * local_328.Y - dVar6 * local_328.Z) +
                   dVar5 * local_328.W + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X) *
                   (double)(float)local_2d8._0_4_ +
                  ((dVar6 * local_328.X - dVar5 * local_328.Y) +
                  dVar4 * local_328.W + UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z) *
                  (double)(float)local_2d8._8_4_);
  if (__real_3f800000 <= fVar18) {
    fVar18 = __real_3f800000;
  }
  if (fVar18 <= __real_bf800000) {
    fVar18 = __real_bf800000;
  }
  fVar1 = __real_bf800000;
  if ((__real_bf800000 <= fVar18) && (fVar1 = fVar18, __real_3f800000 <= fVar18)) {
    fVar1 = __real_3f800000;
  }
  acosf(fVar1);
  local_1d8.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar19 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
  uVar14 = (ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20;
  uVar11 = dVar8;
  uVar12 = dVar9;
  uVar13 = dVar10;
  if ((dVar7 != dVar3) &&
     (uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar7)) {
    dVar3 = dVar3 / SQRT(dVar7);
    uVar11 = dVar8 * dVar3;
    uVar12 = dVar9 * dVar3;
    uVar13 = dVar10 * dVar3;
  }
  __libm_sse2_sincos_();
  local_1d8.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
  local_1d8.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
  local_1d8.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
  local_1d8.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
  local_1d8.Scale3D.XY.m128d_f64[0] = (double)fStack_2cc;
  dVar3 = extraout_XMM0._0_8_;
  local_1d8.Translation.XY.m128d_f64[1]._0_4_ = uVar19;
  local_1d8.Translation.XY.m128d_f64[0] = (double)uVar16;
  local_1d8.Translation.XY.m128d_f64[1]._4_4_ = (int)uVar14;
  uVar23 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  uVar24 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  uVar21 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar22 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_1d8.Translation.ZW.m128d_f64[1] = 0.0;
  local_1d8.Scale3D.ZW.m128d_f64[1] = 0.0;
  uVar19 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar20 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_238.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_238.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_238.Rotation.XY.m128d_f64[0] = local_328.X;
  local_238.Rotation.XY.m128d_f64[1] = local_328.Y;
  local_178.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar3 * (double)uVar12,0);
  local_178.Rotation.XY.m128d_f64[0] = dVar3 * (double)uVar11;
  local_178.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(dVar3 * (double)uVar12) >> 0x20);
  local_178.Rotation.ZW.m128d_f64[1]._0_4_ = extraout_XMM0._8_4_;
  local_178.Rotation.ZW.m128d_f64[0] = dVar3 * (double)uVar13;
  local_178.Rotation.ZW.m128d_f64[1]._4_4_ = extraout_XMM0._12_4_;
  local_178.Translation.XY.m128d_f64[1]._0_4_ = uVar23;
  local_178.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_178.Translation.XY.m128d_f64[1]._4_4_ = uVar24;
  local_178.Translation.ZW.m128d_f64[1]._0_4_ = uVar21;
  local_178.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_178.Translation.ZW.m128d_f64[1]._4_4_ = uVar22;
  local_178.Scale3D.XY.m128d_f64[1]._0_4_ = uVar19;
  local_178.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_178.Scale3D.XY.m128d_f64[1]._4_4_ = uVar20;
  local_238.Rotation.ZW.m128d_f64[0] = local_328.Z;
  local_238.Rotation.ZW.m128d_f64[1] = local_328.W;
  local_238.Translation.XY.m128d_f64[1]._0_4_ = uVar23;
  local_238.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_238.Translation.XY.m128d_f64[1]._4_4_ = uVar24;
  local_238.Translation.ZW.m128d_f64[1]._0_4_ = uVar21;
  local_238.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_238.Translation.ZW.m128d_f64[1]._4_4_ = uVar22;
  local_238.Scale3D.XY.m128d_f64[1]._0_4_ = uVar19;
  local_238.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_238.Scale3D.XY.m128d_f64[1]._4_4_ = uVar20;
  local_1d8.Scale3D.XY.m128d_f64[1] = local_1d8.Scale3D.XY.m128d_f64[0];
  local_1d8.Scale3D.ZW.m128d_f64[0] = local_1d8.Scale3D.XY.m128d_f64[0];
  local_178.Scale3D.ZW.m128d_f64[0] = local_238.Scale3D.ZW.m128d_f64[0];
  local_178.Scale3D.ZW.m128d_f64[1] = local_238.Scale3D.ZW.m128d_f64[1];
  pTVar17 = UE::Math::TRotator<double>::Quaternion
                      (&UE::Math::TRotator<double>::ZeroRotator,(TQuat<double> *)&local_348._s_0);
  local_118.Rotation.ZW.m128d_f64[0] = pTVar17->Z;
  local_118.Rotation.ZW.m128d_f64[1] = pTVar17->W;
  local_118.Rotation.XY.m128d_f64[0] = pTVar17->X;
  local_118.Rotation.XY.m128d_f64[1] = pTVar17->Y;
  local_118.Translation.ZW.m128d_f64[0] = (double)(float)local_2e8._0_4_;
  local_118.Translation.ZW.m128d_f64[1] = 0.0;
  local_118.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_118.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_118.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)(float)local_2f8._12_4_,0);
  local_118.Translation.XY.m128d_f64[0] = (double)(float)local_2f8._8_4_;
  local_118.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)(float)local_2f8._12_4_ >> 0x20);
  local_118.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_118.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_2f8._0_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
  local_2f8._8_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
  local_2e8._0_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[2];
  local_2e8._8_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[3];
  local_2d8._0_8_ = (undefined8)GlobalVectorConstants::FloatZero.m128_f32[0];
  register0x00001248 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_2c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_2c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_2b8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dStack_2b0 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_2a8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_2a0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply((TTransform<double> *)local_2f8,&local_1d8,&local_238);
  local_298.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_298.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_298.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_298.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_298.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_298.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_298.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_298.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_298.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_298.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_298.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_298.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_298,(TTransform<double> *)local_2f8,&local_178);
  _Var15 = GlobalVectorConstants::Float0001;
  fVar18 = GlobalVectorConstants::Float0001.m128_f32[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar18;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)_Var15.m128_f32[2];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)_Var15.m128_f32[3];
  fVar18 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar18;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar2;
  _Var15 = GlobalVectorConstants::Float1110;
  fVar18 = GlobalVectorConstants::Float1110.m128_f32[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar18;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)_Var15.m128_f32[2];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)_Var15.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(__return_storage_ptr__,&local_298,&local_118);
  return __return_storage_ptr__;
}

// GetLengthFromRoot @ 14da95e20

float * __thiscall PV::Facades::FFoliageFacade::GetLengthFromRoot(FFoliageFacade *this,int param_1)

{
  int iVar1;
  float *pfVar2;
  
  if (((this->LengthFromRootAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0) &&
     (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->LengthFromRootAttribute).ConstAttributeArray + 0x60))()
    ;
    if (param_1 < iVar1) {
      pfVar2 = TManagedArrayAccessor<float>::operator[](&this->LengthFromRootAttribute,param_1);
      return pfVar2;
    }
  }
  return &DefaultLengthFromRoot;
}

// GetNormalVector @ 14da96e80

TVector<float> * __thiscall
PV::Facades::FFoliageFacade::GetNormalVector(FFoliageFacade *this,int param_1)

{
  int iVar1;
  TVector<float> *pTVar2;
  
  if (((this->NormalVectorsAttribute).ConstAttributeArray !=
       (TManagedArray<UE::Math::TVector<float>_> *)0x0) && (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->NormalVectorsAttribute).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pTVar2 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                         (&this->NormalVectorsAttribute,param_1);
      return pTVar2;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      DefaultNormalVector.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      DefaultNormalVector.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &DefaultNormalVector;
}

// GetParentBoneID @ 14da97190

int __thiscall PV::Facades::FFoliageFacade::GetParentBoneID(FFoliageFacade *this,int param_1)

{
  TManagedArray<int> *pTVar1;
  int iVar2;
  int *piVar3;
  
  pTVar1 = (this->ParentBoneIdsAttribute).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<int> *)0x0) && (-1 < param_1)) {
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (param_1 < iVar2) {
      piVar3 = TManagedArrayAccessor<int>::operator[](&this->ParentBoneIdsAttribute,param_1);
      return *piVar3;
    }
  }
  return -1;
}

// GetPivotPoint @ 14da97a00

TVector<float> * __thiscall
PV::Facades::FFoliageFacade::GetPivotPoint(FFoliageFacade *this,int param_1)

{
  int iVar1;
  TVector<float> *pTVar2;
  
  if (((this->PivotPointsAttribute).ConstAttributeArray !=
       (TManagedArray<UE::Math::TVector<float>_> *)0x0) && (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->PivotPointsAttribute).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pTVar2 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                         (&this->PivotPointsAttribute,param_1);
      return pTVar2;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      DefaultPivotPoint.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      DefaultPivotPoint.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &DefaultPivotPoint;
}

// GetPivotPositions @ 14da97ac0

TManagedArray<UE::Math::TVector<float>_> * __thiscall
PV::Facades::FFoliageFacade::GetPivotPositions(FFoliageFacade *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
  
  if ((this->PivotPointsAttribute).ConstAttributeArray !=
      (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    return (this->PivotPointsAttribute).ConstAttributeArray;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
    return pTVar3;
  }
  return (this->PivotPointsAttribute).ConstAttributeArray;
}

// GetUpVector @ 14da9a920

TVector<float> * __thiscall
PV::Facades::FFoliageFacade::GetUpVector(FFoliageFacade *this,int param_1)

{
  int iVar1;
  TVector<float> *pTVar2;
  
  if (((this->UpVectorsAttribute).ConstAttributeArray !=
       (TManagedArray<UE::Math::TVector<float>_> *)0x0) && (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->UpVectorsAttribute).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pTVar2 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                         (&this->UpVectorsAttribute,param_1);
      return pTVar2;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      DefaultUpVector.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      DefaultUpVector.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &DefaultUpVector;
}

// IsValid @ 14da9b040

bool __thiscall PV::Facades::FFoliageFacade::IsValid(FFoliageFacade *this)

{
  if (((((((this->NamesAttribute).ConstAttributeArray != (TManagedArray<FString> *)0x0) &&
         ((this->NameIdsAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
        ((this->BranchIdsAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
       (((this->PivotPointsAttribute).ConstAttributeArray !=
         (TManagedArray<UE::Math::TVector<float>_> *)0x0 &&
        ((this->UpVectorsAttribute).ConstAttributeArray !=
         (TManagedArray<UE::Math::TVector<float>_> *)0x0)))) &&
      (((this->NormalVectorsAttribute).ConstAttributeArray !=
        (TManagedArray<UE::Math::TVector<float>_> *)0x0 &&
       (((this->ScalesAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0 &&
        ((this->LengthFromRootAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)))))) &&
     (((this->FoliageIdsAttribute).ConstAttributeArray !=
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0 &&
      ((this->ParentBoneIdsAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)))) {
    return true;
  }
  return false;
}

// RemoveEntries @ 14daa1560

void __thiscall
PV::Facades::FFoliageFacade::RemoveEntries(FFoliageFacade *this,int param_1,int param_2)

{
  TManagedArray<int> *pTVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = IsValid(this);
  if (bVar2) {
    bVar2 = TManagedArrayAccessor<int>::IsValidIndex(&this->NameIdsAttribute,param_2);
    if (bVar2) {
      pTVar1 = (this->NameIdsAttribute).ConstAttributeArray;
      if (pTVar1 == (TManagedArray<int> *)0x0) {
        iVar3 = FManagedArrayCollection::NumElements
                          ((this->NameIdsAttribute).ConstCollection,(this->NameIdsAttribute).Group);
      }
      else {
        iVar3 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
      }
      if (param_1 + param_2 <= iVar3) {
        TManagedArrayAccessor<int>::RemoveElements(&this->NameIdsAttribute,param_1,param_2);
      }
    }
  }
  return;
}

// SetFoliageBranchId @ 14daa6df0

void __thiscall
PV::Facades::FFoliageFacade::SetFoliageBranchId(FFoliageFacade *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int local_res18 [4];
  
  local_res18[0] = param_2;
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                       ,0xe6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsValid(this);
  if (bVar2) {
    bVar2 = TManagedArrayAccessor<int>::IsValidIndex(&this->BranchIdsAttribute,param_1);
    if (bVar2) {
      TManagedArrayAccessor<int>::ModifyAt(&this->BranchIdsAttribute,param_1,local_res18);
    }
  }
  return;
}

// SetFoliageEntry @ 14daa6e80

void __thiscall
PV::Facades::FFoliageFacade::SetFoliageEntry
          (FFoliageFacade *this,int param_1,FFoliageEntryData *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                       ,0xcb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsValid(this);
  if ((bVar2) && (-1 < param_1)) {
    TManagedArrayAccessor<int>::ModifyAt(&this->NameIdsAttribute,param_1,&param_2->NameId);
    TManagedArrayAccessor<int>::ModifyAt(&this->BranchIdsAttribute,param_1,&param_2->BranchId);
    TManagedArrayAccessor<UE::Math::TVector<float>_>::ModifyAt
              (&this->PivotPointsAttribute,param_1,&param_2->PivotPoint);
    TManagedArrayAccessor<UE::Math::TVector<float>_>::ModifyAt
              (&this->UpVectorsAttribute,param_1,&param_2->UpVector);
    TManagedArrayAccessor<UE::Math::TVector<float>_>::ModifyAt
              (&this->NormalVectorsAttribute,param_1,&param_2->NormalVector);
    TManagedArrayAccessor<float>::ModifyAt(&this->ScalesAttribute,param_1,&param_2->Scale);
    TManagedArrayAccessor<float>::ModifyAt
              (&this->LengthFromRootAttribute,param_1,&param_2->LengthFromRoot);
    TManagedArrayAccessor<float>::ModifyAt
              (&this->LengthFromRootAttribute,param_1,&param_2->LengthFromRoot);
    TManagedArrayAccessor<float>::ModifyAt
              (&this->LengthFromRootAttribute,param_1,&param_2->LengthFromRoot);
    TManagedArrayAccessor<int>::ModifyAt
              (&this->ParentBoneIdsAttribute,param_1,&param_2->ParentBoneID);
  }
  return;
}

// SetFoliageIdsArray @ 14daa6fc0

void __thiscall
PV::Facades::FFoliageFacade::SetFoliageIdsArray
          (FFoliageFacade *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                       ,0xdd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = IsValid(this);
  if (bVar3) {
    bVar3 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::IsValidIndex
                      (&this->FoliageIdsAttribute,param_1);
    if (bVar3) {
      if (((this->FoliageIdsAttribute).AttributeArray ==
           (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
         ((this->FoliageIdsAttribute).Collection == (FManagedArrayCollection *)0x0)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      ((this->FoliageIdsAttribute).AttributeArray)->field_0x8 = 1;
      pTVar1 = (this->FoliageIdsAttribute).AttributeArray;
      uVar4 = 0;
      if (param_1 < *(int *)&pTVar1->field_0x18) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 * 0x10 + *(longlong *)&pTVar1->field_0x10),param_2);
    }
  }
  return;
}

// SetFoliageName @ 14daa70f0

void __thiscall
PV::Facades::FFoliageFacade::SetFoliageName(FFoliageFacade *this,int param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                       ,0x14d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsValid(this);
  if (bVar2) {
    bVar2 = TManagedArrayAccessor<FString>::IsValidIndex(&this->NamesAttribute,param_1);
    if (bVar2) {
      TManagedArrayAccessor<FString>::ModifyAt(&this->NamesAttribute,param_1,param_2);
    }
  }
  return;
}

// SetFoliageNames @ 14daa7180

void __thiscall
PV::Facades::FFoliageFacade::SetFoliageNames
          (FFoliageFacade *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  TManagedArray<FString> *pTVar2;
  void *_Src;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                         ,0x156,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FManagedArrayCollection::EmptyGroup(this->Collection,GroupNames::FoliageNamesGroup);
  FManagedArrayCollection::AddElements
            (this->Collection,param_1->ArrayNum,GroupNames::FoliageNamesGroup);
  iVar7 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar7) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (param_1->AllocatorInstance).Data + lVar11;
      if ((((this->NamesAttribute).AttributeArray == (TManagedArray<FString> *)0x0) ||
          ((this->NamesAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AttributeArray!=nullptr && !IsConst()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x74,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ((this->NamesAttribute).AttributeArray)->field_0x8 = 1;
      pTVar2 = (this->NamesAttribute).AttributeArray;
      uVar6 = 0;
      if ((int)uVar9 < *(int *)&pTVar2->field_0x18) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (FScriptContainerElement *)(*(longlong *)&pTVar2->field_0x10 + lVar11);
      if (pFVar8 != pFVar10) {
        iVar7 = *(int *)&pFVar10[8].field_0x0;
        pFVar4 = pFVar8 + 0xc;
        _Src = *(void **)&pFVar10->field_0x0;
        iVar1 = *(int *)pFVar4;
        *(int *)&pFVar8[8].field_0x0 = iVar7;
        if ((iVar7 == 0) && (iVar1 == 0)) {
          *(int *)pFVar4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,iVar1,(ForAnyElementType *)pFVar8,iVar7,(int *)pFVar4);
          if (iVar7 != 0) {
            memcpy(*(void **)&pFVar8->field_0x0,_Src,(longlong)iVar7 * 2);
          }
        }
      }
      iVar7 = param_1->ArrayNum;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar9 < iVar7);
  }
  return;
}

// SetFoliagePath @ 14daa7380

void __thiscall PV::Facades::FFoliageFacade::SetFoliagePath(FFoliageFacade *this,FString *param_1)

{
  TManagedArray<FString> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                       ,0x161,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = FManagedArrayCollection::NumElements(this->Collection,GroupNames::DetailsGroup);
  if (iVar5 == 0) {
    FManagedArrayCollection::AddElements(this->Collection,1,GroupNames::DetailsGroup);
  }
  if (((this->FoliagePathAttribute).AttributeArray == (TManagedArray<FString> *)0x0) ||
     ((this->FoliagePathAttribute).Collection == (FManagedArrayCollection *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ((this->FoliagePathAttribute).AttributeArray)->field_0x8 = 1;
  pTVar1 = (this->FoliagePathAttribute).AttributeArray;
  if (*(int *)&pTVar1->field_0x18 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::FString::operator=(*(FString **)&pTVar1->field_0x10,param_1);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// SetLengthFromRoot @ 14daa7a30

void __thiscall
PV::Facades::FFoliageFacade::SetLengthFromRoot(FFoliageFacade *this,int param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  float local_res18 [4];
  
  local_res18[0] = param_2;
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                       ,0x90,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsValid(this);
  if (bVar2) {
    bVar2 = TManagedArrayAccessor<float>::IsValidIndex(&this->LengthFromRootAttribute,param_1);
    if (bVar2) {
      TManagedArrayAccessor<float>::ModifyAt(&this->LengthFromRootAttribute,param_1,local_res18);
    }
  }
  return;
}

// SetNormalVector @ 14daa83f0

void __thiscall
PV::Facades::FFoliageFacade::SetNormalVector
          (FFoliageFacade *this,int param_1,TVector<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                       ,0x13b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsValid(this);
  if (bVar2) {
    bVar2 = TManagedArrayAccessor<UE::Math::TVector<float>_>::IsValidIndex
                      (&this->NormalVectorsAttribute,param_1);
    if (bVar2) {
      TManagedArrayAccessor<UE::Math::TVector<float>_>::ModifyAt
                (&this->NormalVectorsAttribute,param_1,param_2);
    }
  }
  return;
}

// SetParentBoneID @ 14daa8c30

void __thiscall
PV::Facades::FFoliageFacade::SetParentBoneID(FFoliageFacade *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int local_res18 [4];
  
  local_res18[0] = param_2;
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                       ,0xa3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsValid(this);
  if (bVar2) {
    bVar2 = TManagedArrayAccessor<int>::IsValidIndex(&this->ParentBoneIdsAttribute,param_1);
    if (bVar2) {
      TManagedArrayAccessor<int>::ModifyAt(&this->ParentBoneIdsAttribute,param_1,local_res18);
    }
  }
  return;
}

// SetPivotPoint @ 14daa8d20

void __thiscall
PV::Facades::FFoliageFacade::SetPivotPoint(FFoliageFacade *this,int param_1,TVector<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                       ,0x129,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsValid(this);
  if (bVar2) {
    bVar2 = TManagedArrayAccessor<UE::Math::TVector<float>_>::IsValidIndex
                      (&this->PivotPointsAttribute,param_1);
    if (bVar2) {
      TManagedArrayAccessor<UE::Math::TVector<float>_>::ModifyAt
                (&this->PivotPointsAttribute,param_1,param_2);
    }
  }
  return;
}

// SetScale @ 14daa8e70

void __thiscall
PV::Facades::FFoliageFacade::SetScale(FFoliageFacade *this,int param_1,float *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                       ,0x144,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsValid(this);
  if (bVar2) {
    bVar2 = TManagedArrayAccessor<float>::IsValidIndex(&this->ScalesAttribute,param_1);
    if (bVar2) {
      TManagedArrayAccessor<float>::ModifyAt(&this->ScalesAttribute,param_1,param_2);
    }
  }
  return;
}

// SetUpVector @ 14daa9700

void __thiscall
PV::Facades::FFoliageFacade::SetUpVector(FFoliageFacade *this,int param_1,TVector<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVFoliageFacade.cpp"
                       ,0x132,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsValid(this);
  if (bVar2) {
    bVar2 = TManagedArrayAccessor<UE::Math::TVector<float>_>::IsValidIndex
                      (&this->UpVectorsAttribute,param_1);
    if (bVar2) {
      TManagedArrayAccessor<UE::Math::TVector<float>_>::ModifyAt
                (&this->UpVectorsAttribute,param_1,param_2);
    }
  }
  return;
}


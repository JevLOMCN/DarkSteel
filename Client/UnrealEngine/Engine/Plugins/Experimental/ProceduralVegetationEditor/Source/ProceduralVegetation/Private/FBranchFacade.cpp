// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 32

// FBranchFacade @ 14da60bc0

FBranchFacade * __thiscall
PV::Facades::FBranchFacade::FBranchFacade(FBranchFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FBranchFacade *pFVar4;
  FValueType *pFVar5;
  FValueType *pFVar6;
  FValueType *pFVar7;
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
  
  this->Collection = param_1;
  this->_padding_ = (longlong)&___7FBranchFacade_Facades_PV__6B_;
  (this->Parents).ConstCollection = param_1;
  pFVar7 = (FValueType *)0x0;
  (this->Parents).Collection = param_1;
  (this->Parents).Name = AttributeNames::BranchParents;
  (this->Parents).Group = GroupNames::BranchGroup;
  (this->Parents).DefaultGroupDependency.ComparisonIndex = 0;
  (this->Parents).DefaultGroupDependency.Number = 0;
  local_110 = AttributeNames::BranchParents;
  local_108 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_110);
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
      pFVar4 = (FBranchFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->Parents).AttributeArray = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar5
  ;
  (this->Parents).ConstAttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar5;
  (this->Children).ConstCollection = param_1;
  (this->Children).Collection = param_1;
  (this->Children).Name = AttributeNames::BranchChildren;
  (this->Children).Group = GroupNames::BranchGroup;
  (this->Children).DefaultGroupDependency.ComparisonIndex = 0;
  (this->Children).DefaultGroupDependency.Number = 0;
  local_100 = AttributeNames::BranchChildren;
  local_f8 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_100);
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
      pFVar4 = (FBranchFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->Children).AttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar5;
  (this->Children).ConstAttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar5;
  (this->BranchPoints).ConstCollection = param_1;
  (this->BranchPoints).Collection = param_1;
  (this->BranchPoints).Name = AttributeNames::BranchPoints;
  (this->BranchPoints).Group = GroupNames::BranchGroup;
  (this->BranchPoints).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchPoints).DefaultGroupDependency.Number = 0;
  local_f0 = AttributeNames::BranchPoints;
  local_e8 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_f0);
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
      pFVar4 = (FBranchFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->BranchPoints).AttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar5;
  (this->BranchPoints).ConstAttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar5;
  (this->BranchNumbers).ConstCollection = param_1;
  (this->BranchNumbers).Collection = param_1;
  (this->BranchNumbers).Name = AttributeNames::BranchNumber;
  (this->BranchNumbers).Group = GroupNames::BranchGroup;
  (this->BranchNumbers).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchNumbers).DefaultGroupDependency.Number = 0;
  local_e0 = AttributeNames::BranchNumber;
  local_d8 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_e0);
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
      pFVar4 = (FBranchFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->BranchNumbers).AttributeArray = (TManagedArray<int> *)pFVar5;
  (this->BranchNumbers).ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  (this->BranchSourceBudNumber).ConstCollection = param_1;
  (this->BranchSourceBudNumber).Collection = param_1;
  (this->BranchSourceBudNumber).Name = AttributeNames::BranchSourceBudNumber;
  (this->BranchSourceBudNumber).Group = GroupNames::BranchGroup;
  (this->BranchSourceBudNumber).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchSourceBudNumber).DefaultGroupDependency.Number = 0;
  local_d0 = AttributeNames::BranchSourceBudNumber;
  local_c8 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_d0);
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
      pFVar4 = (FBranchFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->BranchSourceBudNumber).AttributeArray = (TManagedArray<int> *)pFVar5;
  (this->BranchSourceBudNumber).ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  (this->BranchFoliageIDs).ConstCollection = param_1;
  (this->BranchFoliageIDs).Collection = param_1;
  (this->BranchFoliageIDs).Name = AttributeNames::BranchFoliageIDs;
  (this->BranchFoliageIDs).Group = GroupNames::BranchGroup;
  (this->BranchFoliageIDs).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchFoliageIDs).DefaultGroupDependency.Number = 0;
  local_c0 = AttributeNames::BranchFoliageIDs;
  local_b8 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_c0);
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
      pFVar4 = (FBranchFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->BranchFoliageIDs).AttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar5;
  (this->BranchFoliageIDs).ConstAttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)pFVar5;
  (this->BranchUVMaterial).ConstCollection = param_1;
  (this->BranchUVMaterial).Collection = param_1;
  (this->BranchUVMaterial).Name = AttributeNames::BranchUVMaterial;
  (this->BranchUVMaterial).Group = GroupNames::BranchGroup;
  (this->BranchUVMaterial).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchUVMaterial).DefaultGroupDependency.Number = 0;
  local_b0 = AttributeNames::BranchUVMaterial;
  local_a8 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_b0);
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
      pFVar4 = (FBranchFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->BranchUVMaterial).AttributeArray = (TManagedArray<int> *)pFVar5;
  (this->BranchUVMaterial).ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  (this->BranchHierarchyNumber).ConstCollection = param_1;
  (this->BranchHierarchyNumber).Collection = param_1;
  (this->BranchHierarchyNumber).Name = AttributeNames::BranchHierarchyNumber;
  (this->BranchHierarchyNumber).Group = GroupNames::BranchGroup;
  (this->BranchHierarchyNumber).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchHierarchyNumber).DefaultGroupDependency.Number = 0;
  local_a0 = AttributeNames::BranchHierarchyNumber;
  local_98 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_a0);
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
      pFVar4 = (FBranchFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->BranchHierarchyNumber).AttributeArray = (TManagedArray<int> *)pFVar5;
  (this->BranchHierarchyNumber).ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  (this->BranchSimulationGroupIndex).ConstCollection = param_1;
  (this->BranchSimulationGroupIndex).Collection = param_1;
  (this->BranchSimulationGroupIndex).Name = AttributeNames::BranchSimulationGroupIndex;
  (this->BranchSimulationGroupIndex).Group = GroupNames::BranchGroup;
  (this->BranchSimulationGroupIndex).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchSimulationGroupIndex).DefaultGroupDependency.Number = 0;
  local_90 = AttributeNames::BranchSimulationGroupIndex;
  local_88 = GroupNames::BranchGroup;
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
      pFVar4 = (FBranchFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->BranchSimulationGroupIndex).AttributeArray = (TManagedArray<int> *)pFVar5;
  (this->BranchSimulationGroupIndex).ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  (this->TrunkMaterialPathAttribute).ConstCollection = param_1;
  (this->TrunkMaterialPathAttribute).Collection = param_1;
  (this->TrunkMaterialPathAttribute).Name = AttributeNames::TrunkMaterialPath;
  (this->TrunkMaterialPathAttribute).Group = GroupNames::DetailsGroup;
  (this->TrunkMaterialPathAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TrunkMaterialPathAttribute).DefaultGroupDependency.Number = 0;
  local_80 = AttributeNames::TrunkMaterialPath;
  local_78 = GroupNames::DetailsGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_80);
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
      pFVar4 = (FBranchFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->TrunkMaterialPathAttribute).AttributeArray = (TManagedArray<FString> *)pFVar5;
  (this->TrunkMaterialPathAttribute).ConstAttributeArray = (TManagedArray<FString> *)pFVar5;
  (this->TrunkURangeAttribute).ConstCollection = param_1;
  (this->TrunkURangeAttribute).Collection = param_1;
  (this->TrunkURangeAttribute).Name = AttributeNames::TrunkURange;
  (this->TrunkURangeAttribute).Group = GroupNames::DetailsGroup;
  (this->TrunkURangeAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TrunkURangeAttribute).DefaultGroupDependency.Number = 0;
  local_70 = AttributeNames::TrunkURange;
  local_68 = GroupNames::DetailsGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_70);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  pFVar5 = pFVar7;
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FVector2DArrayType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar5 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBranchFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->TrunkURangeAttribute).AttributeArray =
       (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)pFVar5;
  (this->TrunkURangeAttribute).ConstAttributeArray =
       (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)pFVar5;
  (this->BranchParentNumbers).ConstCollection = param_1;
  (this->BranchParentNumbers).Collection = param_1;
  (this->BranchParentNumbers).Name = AttributeNames::BranchParentNumber;
  (this->BranchParentNumbers).Group = GroupNames::BranchGroup;
  (this->BranchParentNumbers).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchParentNumbers).DefaultGroupDependency.Number = 0;
  local_60 = AttributeNames::BranchParentNumber;
  local_58 = GroupNames::BranchGroup;
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
      pFVar4 = (FBranchFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->BranchParentNumbers).AttributeArray = (TManagedArray<int> *)pFVar5;
  (this->BranchParentNumbers).ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  (this->PlantNumbers).ConstCollection = param_1;
  (this->PlantNumbers).Collection = param_1;
  (this->PlantNumbers).Name = AttributeNames::PlantNumber;
  (this->PlantNumbers).Group = GroupNames::BranchGroup;
  (this->PlantNumbers).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PlantNumbers).DefaultGroupDependency.Number = 0;
  local_50 = AttributeNames::PlantNumber;
  local_48 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_50);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FInt32Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar7 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar7 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBranchFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar7->GroupIndexDependency).Number = 1;
  }
  (this->PlantNumbers).AttributeArray = (TManagedArray<int> *)pFVar7;
  (this->PlantNumbers).ConstAttributeArray = (TManagedArray<int> *)pFVar7;
  return this;
}

// FBranchFacade @ 14da615a0

FBranchFacade * __thiscall
PV::Facades::FBranchFacade::FBranchFacade(FBranchFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FBranchFacade *pFVar4;
  char *pcVar5;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar6;
  TManagedArray<FString> *pTVar7;
  TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *pTVar8;
  TManagedArray<int> *pTVar9;
  char *pcVar10;
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
  
  pcVar10 = (char *)0x0;
  this->_padding_ = (longlong)&___7FBranchFacade_Facades_PV__6B_;
  this->Collection = (FManagedArrayCollection *)0x0;
  (this->Parents).ConstCollection = param_1;
  (this->Parents).Collection = (FManagedArrayCollection *)0x0;
  (this->Parents).Name = AttributeNames::BranchParents;
  (this->Parents).Group = GroupNames::BranchGroup;
  (this->Parents).DefaultGroupDependency.ComparisonIndex = 0;
  (this->Parents).DefaultGroupDependency.Number = 0;
  (this->Parents).AttributeArray = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_110 = AttributeNames::BranchParents;
  local_108 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_110);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar10;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '%')) {
    pTVar6 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar6 = *(TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> **)(pcVar5 + 0x20);
    if (pTVar6 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBranchFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->Parents).ConstAttributeArray = pTVar6;
  (this->Children).ConstCollection = param_1;
  (this->Children).Collection = (FManagedArrayCollection *)0x0;
  (this->Children).Name = AttributeNames::BranchChildren;
  (this->Children).Group = GroupNames::BranchGroup;
  (this->Children).DefaultGroupDependency.ComparisonIndex = 0;
  (this->Children).DefaultGroupDependency.Number = 0;
  (this->Children).AttributeArray = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_100 = AttributeNames::BranchChildren;
  local_f8 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_100);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar10;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '%')) {
    pTVar6 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar6 = *(TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> **)(pcVar5 + 0x20);
    if (pTVar6 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBranchFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->Children).ConstAttributeArray = pTVar6;
  (this->BranchPoints).ConstCollection = param_1;
  (this->BranchPoints).Collection = (FManagedArrayCollection *)0x0;
  (this->BranchPoints).Name = AttributeNames::BranchPoints;
  (this->BranchPoints).Group = GroupNames::BranchGroup;
  (this->BranchPoints).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchPoints).DefaultGroupDependency.Number = 0;
  (this->BranchPoints).AttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_f0 = AttributeNames::BranchPoints;
  local_e8 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_f0);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar10;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '%')) {
    pTVar6 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar6 = *(TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> **)(pcVar5 + 0x20);
    if (pTVar6 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBranchFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BranchPoints).ConstAttributeArray = pTVar6;
  (this->BranchNumbers).ConstCollection = param_1;
  (this->BranchNumbers).Collection = (FManagedArrayCollection *)0x0;
  (this->BranchNumbers).Name = AttributeNames::BranchNumber;
  (this->BranchNumbers).Group = GroupNames::BranchGroup;
  (this->BranchNumbers).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchNumbers).DefaultGroupDependency.Number = 0;
  (this->BranchNumbers).AttributeArray = (TManagedArray<int> *)0x0;
  local_e0 = AttributeNames::BranchNumber;
  local_d8 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_e0);
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
        pFVar4 = (FBranchFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BranchNumbers).ConstAttributeArray = pTVar9;
  (this->BranchSourceBudNumber).ConstCollection = param_1;
  (this->BranchSourceBudNumber).Collection = (FManagedArrayCollection *)0x0;
  (this->BranchSourceBudNumber).Name = AttributeNames::BranchSourceBudNumber;
  (this->BranchSourceBudNumber).Group = GroupNames::BranchGroup;
  (this->BranchSourceBudNumber).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchSourceBudNumber).DefaultGroupDependency.Number = 0;
  (this->BranchSourceBudNumber).AttributeArray = (TManagedArray<int> *)0x0;
  local_d0 = AttributeNames::BranchSourceBudNumber;
  local_c8 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_d0);
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
        pFVar4 = (FBranchFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BranchSourceBudNumber).ConstAttributeArray = pTVar9;
  (this->BranchFoliageIDs).ConstCollection = param_1;
  (this->BranchFoliageIDs).Collection = (FManagedArrayCollection *)0x0;
  (this->BranchFoliageIDs).Name = AttributeNames::BranchFoliageIDs;
  (this->BranchFoliageIDs).Group = GroupNames::BranchGroup;
  (this->BranchFoliageIDs).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchFoliageIDs).DefaultGroupDependency.Number = 0;
  (this->BranchFoliageIDs).AttributeArray =
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_c0 = AttributeNames::BranchFoliageIDs;
  local_b8 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_c0);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar10;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '%')) {
    pTVar6 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar6 = *(TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> **)(pcVar5 + 0x20);
    if (pTVar6 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBranchFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BranchFoliageIDs).ConstAttributeArray = pTVar6;
  (this->BranchUVMaterial).ConstCollection = param_1;
  (this->BranchUVMaterial).Collection = (FManagedArrayCollection *)0x0;
  (this->BranchUVMaterial).Name = AttributeNames::BranchUVMaterial;
  (this->BranchUVMaterial).Group = GroupNames::BranchGroup;
  (this->BranchUVMaterial).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchUVMaterial).DefaultGroupDependency.Number = 0;
  (this->BranchUVMaterial).AttributeArray = (TManagedArray<int> *)0x0;
  local_b0 = AttributeNames::BranchUVMaterial;
  local_a8 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_b0);
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
        pFVar4 = (FBranchFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BranchUVMaterial).ConstAttributeArray = pTVar9;
  (this->BranchHierarchyNumber).ConstCollection = param_1;
  (this->BranchHierarchyNumber).Collection = (FManagedArrayCollection *)0x0;
  (this->BranchHierarchyNumber).Name = AttributeNames::BranchHierarchyNumber;
  (this->BranchHierarchyNumber).Group = GroupNames::BranchGroup;
  (this->BranchHierarchyNumber).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchHierarchyNumber).DefaultGroupDependency.Number = 0;
  (this->BranchHierarchyNumber).AttributeArray = (TManagedArray<int> *)0x0;
  local_a0 = AttributeNames::BranchHierarchyNumber;
  local_98 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_a0);
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
        pFVar4 = (FBranchFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BranchHierarchyNumber).ConstAttributeArray = pTVar9;
  (this->BranchSimulationGroupIndex).ConstCollection = param_1;
  (this->BranchSimulationGroupIndex).Collection = (FManagedArrayCollection *)0x0;
  (this->BranchSimulationGroupIndex).Name = AttributeNames::BranchSimulationGroupIndex;
  (this->BranchSimulationGroupIndex).Group = GroupNames::BranchGroup;
  (this->BranchSimulationGroupIndex).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchSimulationGroupIndex).DefaultGroupDependency.Number = 0;
  (this->BranchSimulationGroupIndex).AttributeArray = (TManagedArray<int> *)0x0;
  local_90 = AttributeNames::BranchSimulationGroupIndex;
  local_88 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_90);
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
        pFVar4 = (FBranchFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BranchSimulationGroupIndex).ConstAttributeArray = pTVar9;
  (this->TrunkMaterialPathAttribute).ConstCollection = param_1;
  (this->TrunkMaterialPathAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->TrunkMaterialPathAttribute).Name = AttributeNames::TrunkMaterialPath;
  (this->TrunkMaterialPathAttribute).Group = GroupNames::DetailsGroup;
  (this->TrunkMaterialPathAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TrunkMaterialPathAttribute).DefaultGroupDependency.Number = 0;
  (this->TrunkMaterialPathAttribute).AttributeArray = (TManagedArray<FString> *)0x0;
  local_80 = AttributeNames::TrunkMaterialPath;
  local_78 = GroupNames::DetailsGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_80);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar10;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\b')) {
    pTVar7 = (TManagedArray<FString> *)0x0;
  }
  else {
    pTVar7 = *(TManagedArray<FString> **)(pcVar5 + 0x20);
    if (pTVar7 == (TManagedArray<FString> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBranchFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->TrunkMaterialPathAttribute).ConstAttributeArray = pTVar7;
  (this->TrunkURangeAttribute).ConstCollection = param_1;
  (this->TrunkURangeAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->TrunkURangeAttribute).Name = AttributeNames::TrunkURange;
  (this->TrunkURangeAttribute).Group = GroupNames::DetailsGroup;
  (this->TrunkURangeAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TrunkURangeAttribute).DefaultGroupDependency.Number = 0;
  (this->TrunkURangeAttribute).AttributeArray =
       (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_70 = AttributeNames::TrunkURange;
  local_68 = GroupNames::DetailsGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_70);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar10;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x1f')) {
    pTVar8 = (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0;
  }
  else {
    pTVar8 = *(TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> **)
              (pcVar5 + 0x20);
    if (pTVar8 == (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)
                  0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBranchFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->TrunkURangeAttribute).ConstAttributeArray = pTVar8;
  (this->BranchParentNumbers).ConstCollection = param_1;
  (this->BranchParentNumbers).Collection = (FManagedArrayCollection *)0x0;
  (this->BranchParentNumbers).Name = AttributeNames::BranchParentNumber;
  (this->BranchParentNumbers).Group = GroupNames::BranchGroup;
  (this->BranchParentNumbers).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchParentNumbers).DefaultGroupDependency.Number = 0;
  (this->BranchParentNumbers).AttributeArray = (TManagedArray<int> *)0x0;
  local_60 = AttributeNames::BranchParentNumber;
  local_58 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_60);
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
        pFVar4 = (FBranchFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BranchParentNumbers).ConstAttributeArray = pTVar9;
  (this->PlantNumbers).ConstCollection = param_1;
  (this->PlantNumbers).Collection = (FManagedArrayCollection *)0x0;
  (this->PlantNumbers).Name = AttributeNames::PlantNumber;
  (this->PlantNumbers).Group = GroupNames::BranchGroup;
  (this->PlantNumbers).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PlantNumbers).DefaultGroupDependency.Number = 0;
  (this->PlantNumbers).AttributeArray = (TManagedArray<int> *)0x0;
  local_50 = AttributeNames::PlantNumber;
  local_48 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_50);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar10;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x05')) {
    (this->PlantNumbers).ConstAttributeArray = (TManagedArray<int> *)0x0;
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
        pFVar4 = (FBranchFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
    (this->PlantNumbers).ConstAttributeArray = pTVar9;
  }
  return this;
}

// operator() @ 14da68b70

bool __thiscall
`PV::Facades::FBranchFacade::GetSortedBranchIndicesByHierarchy'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  
  lVar1 = *(longlong *)this;
  iVar6 = -1;
  plVar2 = *(longlong **)(lVar1 + 0x1c8);
  if ((plVar2 != (longlong *)0x0) && (-1 < param_1)) {
    iVar3 = (**(code **)(*plVar2 + 0x60))();
    if (param_1 < iVar3) {
      piVar5 = TManagedArrayAccessor<int>::operator[]
                         ((TManagedArrayAccessor<int> *)(lVar1 + 0x198),param_1);
      iVar3 = *piVar5;
      goto LAB_14da68bc8;
    }
  }
  iVar3 = -1;
LAB_14da68bc8:
  lVar1 = *(longlong *)this;
  plVar2 = *(longlong **)(lVar1 + 0x1c8);
  if ((plVar2 != (longlong *)0x0) && (-1 < param_2)) {
    iVar4 = (**(code **)(*plVar2 + 0x60))();
    if (param_2 < iVar4) {
      piVar5 = TManagedArrayAccessor<int>::operator[]
                         ((TManagedArrayAccessor<int> *)(lVar1 + 0x198),param_2);
      iVar6 = *piVar5;
    }
  }
  bVar7 = SBORROW4(iVar3,iVar6);
  iVar4 = iVar3 - iVar6;
  if (iVar3 == iVar6) {
    bVar7 = SBORROW4(param_1,param_2);
    iVar4 = param_1 - param_2;
  }
  return bVar7 != iVar4 < 0;
}

// CopyEntry @ 14da76ed0

void __thiscall PV::Facades::FBranchFacade::CopyEntry(FBranchFacade *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  
  if ((((((this->Parents).ConstAttributeArray !=
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
        ((this->Children).ConstAttributeArray !=
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
       ((this->BranchPoints).ConstAttributeArray !=
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
      (((this->BranchNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
       ((this->BranchSourceBudNumber).ConstAttributeArray != (TManagedArray<int> *)0x0)))) &&
     (((this->BranchHierarchyNumber).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
      (((this->BranchParentNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
       ((this->PlantNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0)))))) {
    if (((this->BranchNumbers).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x3b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((-1 < param_1) &&
       (iVar3 = (**(code **)(*(longlong *)(this->BranchNumbers).ConstAttributeArray + 0x60))(),
       param_1 < iVar3)) {
      if (((this->BranchNumbers).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x3b,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((-1 < param_2) &&
         (iVar3 = (**(code **)(*(longlong *)(this->BranchNumbers).ConstAttributeArray + 0x60))(),
         param_2 < iVar3)) {
        pTVar4 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                           (&this->Parents,param_1);
        TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::ModifyAt
                  (&this->Parents,param_2,pTVar4);
        pTVar4 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                           (&this->Children,param_1);
        TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::ModifyAt
                  (&this->Children,param_2,pTVar4);
        pTVar4 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                           (&this->BranchPoints,param_1);
        TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::ModifyAt
                  (&this->BranchPoints,param_2,pTVar4);
        piVar5 = TManagedArrayAccessor<int>::operator[](&this->BranchNumbers,param_1);
        TManagedArrayAccessor<int>::ModifyAt(&this->BranchNumbers,param_2,piVar5);
        piVar5 = TManagedArrayAccessor<int>::operator[](&this->BranchSourceBudNumber,param_1);
        TManagedArrayAccessor<int>::ModifyAt(&this->BranchSourceBudNumber,param_2,piVar5);
        pTVar4 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                           (&this->BranchFoliageIDs,param_1);
        TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::ModifyAt
                  (&this->BranchFoliageIDs,param_2,pTVar4);
        piVar5 = TManagedArrayAccessor<int>::operator[](&this->BranchHierarchyNumber,param_1);
        TManagedArrayAccessor<int>::ModifyAt(&this->BranchHierarchyNumber,param_2,piVar5);
        piVar5 = TManagedArrayAccessor<int>::operator[](&this->BranchParentNumbers,param_1);
        TManagedArrayAccessor<int>::ModifyAt(&this->BranchParentNumbers,param_2,piVar5);
        piVar5 = TManagedArrayAccessor<int>::operator[](&this->PlantNumbers,param_1);
        TManagedArrayAccessor<int>::ModifyAt(&this->PlantNumbers,param_2,piVar5);
        if ((this->BranchUVMaterial).ConstAttributeArray != (TManagedArray<int> *)0x0) {
          piVar5 = TManagedArrayAccessor<int>::operator[](&this->BranchUVMaterial,param_1);
          TManagedArrayAccessor<int>::ModifyAt(&this->BranchUVMaterial,param_2,piVar5);
        }
        if ((this->BranchSimulationGroupIndex).ConstAttributeArray != (TManagedArray<int> *)0x0) {
          piVar5 = TManagedArrayAccessor<int>::operator[](&this->BranchSimulationGroupIndex,param_1)
          ;
          TManagedArrayAccessor<int>::ModifyAt(&this->BranchSimulationGroupIndex,param_2,piVar5);
        }
      }
    }
  }
  return;
}

// GetBranchHierarchyNumber @ 14da93230

int __thiscall PV::Facades::FBranchFacade::GetBranchHierarchyNumber(FBranchFacade *this,int param_1)

{
  TManagedArray<int> *pTVar1;
  int iVar2;
  int *piVar3;
  
  pTVar1 = (this->BranchHierarchyNumber).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<int> *)0x0) && (-1 < param_1)) {
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (param_1 < iVar2) {
      piVar3 = TManagedArrayAccessor<int>::operator[](&this->BranchHierarchyNumber,param_1);
      return *piVar3;
    }
  }
  return -1;
}

// GetBranchIndexFromPointIndex @ 14da93290

int __thiscall
PV::Facades::FBranchFacade::GetBranchIndexFromPointIndex(FBranchFacade *this,int param_1)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FScriptContainerElement *_Src;
  int iVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  int iVar6;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  iVar6 = 0;
  while( true ) {
    pTVar1 = (this->Parents).ConstAttributeArray;
    if (pTVar1 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar2 = FManagedArrayCollection::NumElements
                        ((this->Parents).ConstCollection,(this->Parents).Group);
    }
    else {
      iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    if (iVar2 <= iVar6) break;
    pTVar3 = GetPoints(this,iVar6);
    local_28.Data = (FScriptContainerElement *)0x0;
    local_20 = pTVar3->ArrayNum;
    lVar5 = (longlong)local_20;
    _Src = (pTVar3->AllocatorInstance).Data;
    if (local_20 == 0) {
      local_1c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_20,0,&local_28,local_20,&local_1c);
      memcpy(local_28.Data,_Src,lVar5 << 2);
    }
    for (FVar4.Data = local_28.Data; FVar4.Data != local_28.Data + (longlong)local_20 * 4;
        FVar4.Data = FVar4.Data + 4) {
      if (*(int *)FVar4.Data == param_1) {
        if (local_28.Data == (FScriptContainerElement *)0x0) {
          return iVar6;
        }
        FMemory::Free(local_28.Data);
        return iVar6;
      }
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    iVar6 = iVar6 + 1;
  }
  return -1;
}

// GetBranchNumber @ 14da935b0

int __thiscall PV::Facades::FBranchFacade::GetBranchNumber(FBranchFacade *this,int param_1)

{
  TManagedArray<int> *pTVar1;
  int iVar2;
  int *piVar3;
  
  pTVar1 = (this->BranchNumbers).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<int> *)0x0) && (-1 < param_1)) {
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (param_1 < iVar2) {
      piVar3 = TManagedArrayAccessor<int>::operator[](&this->BranchNumbers,param_1);
      return *piVar3;
    }
  }
  return -1;
}

// GetBranchNumbers @ 14da93610

TManagedArray<int> * __thiscall PV::Facades::FBranchFacade::GetBranchNumbers(FBranchFacade *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
  
  if ((this->BranchNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0) {
    return (this->BranchNumbers).ConstAttributeArray;
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
  return (this->BranchNumbers).ConstAttributeArray;
}

// GetBranchSimulationGroupIndex @ 14da93eb0

int __thiscall
PV::Facades::FBranchFacade::GetBranchSimulationGroupIndex(FBranchFacade *this,int param_1)

{
  TManagedArray<int> *pTVar1;
  int iVar2;
  int *piVar3;
  
  pTVar1 = (this->BranchSimulationGroupIndex).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<int> *)0x0) && (-1 < param_1)) {
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (param_1 < iVar2) {
      piVar3 = TManagedArrayAccessor<int>::operator[](&this->BranchSimulationGroupIndex,param_1);
      return *piVar3;
    }
  }
  return -1;
}

// GetBranchSourceBudNumber @ 14da93f10

int __thiscall PV::Facades::FBranchFacade::GetBranchSourceBudNumber(FBranchFacade *this,int param_1)

{
  TManagedArray<int> *pTVar1;
  int iVar2;
  int *piVar3;
  
  pTVar1 = (this->BranchSourceBudNumber).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<int> *)0x0) && (-1 < param_1)) {
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (param_1 < iVar2) {
      piVar3 = TManagedArrayAccessor<int>::operator[](&this->BranchSourceBudNumber,param_1);
      return *piVar3;
    }
  }
  return -1;
}

// GetBranchUVMaterial @ 14da93f70

int __thiscall PV::Facades::FBranchFacade::GetBranchUVMaterial(FBranchFacade *this,int param_1)

{
  TManagedArray<int> *pTVar1;
  int iVar2;
  int *piVar3;
  
  pTVar1 = (this->BranchUVMaterial).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<int> *)0x0) && (-1 < param_1)) {
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (param_1 < iVar2) {
      piVar3 = TManagedArrayAccessor<int>::operator[](&this->BranchUVMaterial,param_1);
      return *piVar3;
    }
  }
  return -1;
}

// GetChildren @ 14da943f0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FBranchFacade::GetChildren(FBranchFacade *this,int param_1)

{
  int iVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (((this->Children).ConstAttributeArray !=
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) && (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->Children).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pTVar2 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                         (&this->Children,param_1);
      return pTVar2;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`PV::Facades::FBranchFacade::GetChildren'::__l2::
             _dynamic_atexit_destructor_for__EmptyChildren__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyChildren;
}

// GetElementCount @ 14da94520

int __thiscall PV::Facades::FBranchFacade::GetElementCount(FBranchFacade *this)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int iVar2;
  
  pTVar1 = (this->Parents).ConstAttributeArray;
  if (pTVar1 != (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014da9452f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    return iVar2;
  }
  iVar2 = FManagedArrayCollection::NumElements
                    ((this->Parents).ConstCollection,(this->Parents).Group);
  return iVar2;
}

// GetHierarchyGenerationNumber @ 14da95b20

int __thiscall
PV::Facades::FBranchFacade::GetHierarchyGenerationNumber(FBranchFacade *this,int param_1)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int iVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  
  pTVar1 = (this->Parents).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) && (-1 < param_1))
  {
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (param_1 < iVar2) {
      pTVar3 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                         (&this->Parents,param_1);
      return pTVar3->ArrayNum;
    }
  }
  return 0;
}

// GetParentBranchIndex @ 14da97380

int __thiscall PV::Facades::FBranchFacade::GetParentBranchIndex(FBranchFacade *this,int param_1)

{
  FScriptContainerElement *_Src;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TManagedArray<int> *pTVar6;
  int *piVar7;
  uint uVar8;
  longlong lVar9;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  if (((((((this->Parents).ConstAttributeArray !=
           (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
         ((this->Children).ConstAttributeArray !=
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
        ((this->BranchPoints).ConstAttributeArray !=
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
       (((this->BranchNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
        ((this->BranchSourceBudNumber).ConstAttributeArray != (TManagedArray<int> *)0x0)))) &&
      (((this->BranchHierarchyNumber).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
       (((this->BranchParentNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
        ((this->PlantNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0)))))) &&
     (bVar3 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::IsValidIndex
                        (&this->Parents,param_1), bVar3)) {
    pTVar5 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                       (&this->Parents,param_1);
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = pTVar5->ArrayNum;
    lVar9 = (longlong)local_10;
    _Src = (pTVar5->AllocatorInstance).Data;
    if (local_10 == 0) {
      local_c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_10,0,&local_18,local_10,&local_c);
      memcpy(local_18.Data,_Src,lVar9 << 2);
    }
    if (0 < local_10) {
      uVar8 = 0;
      if ((int)(local_10 - 1U) < local_10) {
        uVar8 = ~(local_10 - 1U) >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      iVar4 = *(int *)(local_18.Data + (longlong)(local_10 + -1) * 4);
      pTVar6 = TManagedArrayAccessor<int>::Get(&this->BranchNumbers);
      piVar1 = *(int **)&pTVar6->field_0x10;
      piVar7 = piVar1;
      do {
        if (piVar7 == piVar1 + *(int *)&pTVar6->field_0x18) {
          iVar4 = -1;
LAB_14da97522:
          if (local_18.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data);
          }
          return iVar4;
        }
        if (*piVar7 == iVar4) {
          iVar4 = (int)((longlong)piVar7 - (longlong)piVar1 >> 2);
          goto LAB_14da97522;
        }
        piVar7 = piVar7 + 1;
      } while( true );
    }
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return -1;
}

// GetParentBranchIndices @ 14da97580

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FBranchFacade::GetParentBranchIndices
          (FBranchFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  TManagedArray<int> *pTVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  int *piVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  undefined1 local_res8 [8];
  undefined4 local_48 [2];
  ForAnyElementType local_40;
  int local_38;
  int local_34 [3];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar1 = (this->Parents).ConstAttributeArray;
  if (((((pTVar1 != (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
        ((this->Children).ConstAttributeArray !=
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
       ((this->BranchPoints).ConstAttributeArray !=
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
      ((((this->BranchNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
        ((this->BranchSourceBudNumber).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
       (((this->BranchHierarchyNumber).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
        (((this->BranchParentNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
         ((this->PlantNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0)))))))) &&
     (iVar8 = (**(code **)(*(longlong *)pTVar1 + 0x60))(), 0 < iVar8)) {
    pTVar10 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                        (&this->Parents,param_1);
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = pTVar10->ArrayNum;
    lVar12 = (longlong)local_38;
    pFVar2 = (pTVar10->AllocatorInstance).Data;
    if (local_38 == 0) {
      local_34[0] = 0;
      iVar8 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38,0,&local_40,local_38,local_34);
      memcpy(local_40.Data,pFVar2,lVar12 << 2);
      iVar8 = local_38;
    }
    pFVar2 = local_40.Data + (longlong)iVar8 * 4;
    FVar13.Data = local_40.Data;
    iVar9 = iVar8;
    while( true ) {
      if (iVar9 != iVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar13.Data == pFVar2) break;
      iVar9 = *(int *)FVar13.Data;
      if (((this->BranchNumbers).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x67,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar10;
      }
      pTVar3 = (this->BranchNumbers).ConstAttributeArray;
      piVar4 = *(int **)&pTVar3->field_0x10;
      for (piVar11 = piVar4; piVar11 != piVar4 + *(int *)&pTVar3->field_0x18; piVar11 = piVar11 + 1)
      {
        if (*piVar11 == iVar9) {
          local_48[0] = (undefined4)((longlong)piVar11 - (longlong)piVar4 >> 2);
          goto LAB_14da97719;
        }
      }
      local_48[0] = 0xffffffff;
LAB_14da97719:
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 <
           pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar10;
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == __return_storage_ptr__->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      FVar13.Data = FVar13.Data + 4;
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 4) =
           local_48[0];
      iVar9 = local_38;
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetParentBranchNumber @ 14da97810

int __thiscall PV::Facades::FBranchFacade::GetParentBranchNumber(FBranchFacade *this,int param_1)

{
  TManagedArray<int> *pTVar1;
  int iVar2;
  int *piVar3;
  
  pTVar1 = (this->BranchParentNumbers).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<int> *)0x0) && (-1 < param_1)) {
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (param_1 < iVar2) {
      piVar3 = TManagedArrayAccessor<int>::operator[](&this->BranchParentNumbers,param_1);
      return *piVar3;
    }
  }
  return -1;
}

// GetParentIndex @ 14da97870

int __thiscall PV::Facades::FBranchFacade::GetParentIndex(FBranchFacade *this,int param_1)

{
  TManagedArray<int> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  pTVar1 = (this->BranchParentNumbers).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<int> *)0x0) && (-1 < param_1)) {
    iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (param_1 < iVar5) {
      if ((this->BranchNumbers).ConstAttributeArray == (TManagedArray<int> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
      }
      pTVar1 = (this->BranchNumbers).ConstAttributeArray;
      piVar6 = TManagedArrayAccessor<int>::operator[](&this->BranchParentNumbers,param_1);
      piVar2 = *(int **)&pTVar1->field_0x10;
      if (piVar2 != piVar2 + *(int *)&pTVar1->field_0x18) {
        piVar7 = piVar2;
        do {
          if (*piVar7 == *piVar6) {
            return (int)((longlong)piVar7 - (longlong)piVar2 >> 2);
          }
          piVar7 = piVar7 + 1;
        } while (piVar7 != piVar2 + *(int *)&pTVar1->field_0x18);
      }
    }
  }
  return -1;
}

// GetParents @ 14da97950

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FBranchFacade::GetParents(FBranchFacade *this,int param_1)

{
  int iVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (((this->Parents).ConstAttributeArray !=
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) && (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->Parents).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pTVar2 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                         (&this->Parents,param_1);
      return pTVar2;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`PV::Facades::FBranchFacade::GetParents'::__l2::
             _dynamic_atexit_destructor_for__EmptyParents__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyParents;
}

// GetPoints @ 14da986c0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FBranchFacade::GetPoints(FBranchFacade *this,int param_1)

{
  int iVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (((this->BranchPoints).ConstAttributeArray !=
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) && (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->BranchPoints).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pTVar2 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                         (&this->BranchPoints,param_1);
      return pTVar2;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
             _dynamic_atexit_destructor_for__EmptyPoints__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyPoints;
}

// GetSortedBranchIndicesByHierarchy @ 14da9a130

void __thiscall
PV::Facades::FBranchFacade::GetSortedBranchIndicesByHierarchy
          (FBranchFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FIdentityFunctor FVar5;
  bool bVar6;
  int iVar7;
  FBranchFacade *local_res8;
  int local_28 [4];
  
  local_28[0] = 0;
  while( true ) {
    pTVar2 = (this->Parents).ConstAttributeArray;
    if (pTVar2 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      iVar7 = FManagedArrayCollection::NumElements
                        ((this->Parents).ConstCollection,(this->Parents).Group);
    }
    else {
      iVar7 = (**(code **)(*(longlong *)pTVar2 + 0x60))();
    }
    pFVar3 = (param_1->AllocatorInstance).Data;
    piVar1 = &param_1->ArrayMax;
    if (iVar7 <= local_28[0]) break;
    if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)*piVar1 * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar7 + 1;
    *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_28[0];
    local_28[0] = local_28[0] + 1;
  }
  local_res8._0_1_ = SUB81(this,0);
  FVar5 = local_res8._0_1_;
  local_res8 = this;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_PV::Facades::FBranchFacade::GetSortedBranchIndicesByHierarchy_::__l2::<lambda_1>_>_>
            ((int *)pFVar3,param_1->ArrayNum,FVar5,(<lambda_1> *)&local_res8);
  return;
}

// GetTrunkMaterialPath @ 14da9a730

FString * __thiscall
PV::Facades::FBranchFacade::GetTrunkMaterialPath
          (FBranchFacade *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FString *pFVar2;
  
  if ((this->TrunkMaterialPathAttribute).ConstAttributeArray != (TManagedArray<FString> *)0x0) {
    iVar1 = (**(code **)(*(longlong *)(this->TrunkMaterialPathAttribute).ConstAttributeArray + 0x60)
            )();
    if (0 < iVar1) {
      pFVar2 = TManagedArrayAccessor<FString>::operator[](&this->TrunkMaterialPathAttribute,0);
      ::FString::FString(__return_storage_ptr__,pFVar2);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTrunkURange @ 14da9a7a0

TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FBranchFacade::GetTrunkURange(FBranchFacade *this)

{
  TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  
  pTVar1 = (this->TrunkURangeAttribute).ConstAttributeArray;
  if (pTVar1 != (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0
     ) {
    iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (0 < iVar4) {
      if ((this->TrunkURangeAttribute).ConstAttributeArray ==
          (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x60,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar5;
        }
      }
      pTVar1 = (this->TrunkURangeAttribute).ConstAttributeArray;
      if (*(int *)&pTVar1->field_0x18 < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar5;
        }
      }
      return *(TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> **)&pTVar1->field_0x10;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`PV::Facades::FBranchFacade::GetTrunkURange'::__l2::
             _dynamic_atexit_destructor_for__TrunkURange__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &TrunkURange;
}

// IsValid @ 14da9afd0

bool __thiscall PV::Facades::FBranchFacade::IsValid(FBranchFacade *this)

{
  if ((((((this->Parents).ConstAttributeArray !=
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
        ((this->Children).ConstAttributeArray !=
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
       ((this->BranchPoints).ConstAttributeArray !=
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
      (((this->BranchNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
       ((this->BranchSourceBudNumber).ConstAttributeArray != (TManagedArray<int> *)0x0)))) &&
     (((this->BranchHierarchyNumber).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
      (((this->BranchParentNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
       ((this->PlantNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0)))))) {
    return true;
  }
  return false;
}

// RemoveEntries @ 14daa1450

void __thiscall
PV::Facades::FBranchFacade::RemoveEntries(FBranchFacade *this,int param_1,int param_2)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((((((this->Parents).ConstAttributeArray !=
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
        ((this->Children).ConstAttributeArray !=
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
       ((this->BranchPoints).ConstAttributeArray !=
        (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
      (((this->BranchNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
       ((this->BranchSourceBudNumber).ConstAttributeArray != (TManagedArray<int> *)0x0)))) &&
     (((this->BranchHierarchyNumber).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
      (((this->BranchParentNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0 &&
       ((this->PlantNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0)))))) {
    if (((this->BranchNumbers).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x3b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((-1 < param_2) &&
       (iVar4 = (**(code **)(*(longlong *)(this->BranchNumbers).ConstAttributeArray + 0x60))(),
       param_2 < iVar4)) {
      pTVar1 = (this->BranchNumbers).ConstAttributeArray;
      if (pTVar1 == (TManagedArray<int> *)0x0) {
        iVar4 = FManagedArrayCollection::NumElements
                          ((this->BranchNumbers).ConstCollection,(this->BranchNumbers).Group);
      }
      else {
        iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
      }
      if (param_1 + param_2 <= iVar4) {
        TManagedArrayAccessor<int>::RemoveElements(&this->BranchNumbers,param_1,param_2);
      }
    }
  }
  return;
}

// SetBranchSimulationGroupIndex @ 14daa5bc0

void __thiscall
PV::Facades::FBranchFacade::SetBranchSimulationGroupIndex
          (FBranchFacade *this,int param_1,int param_2)

{
  TManagedArray<int> *pTVar1;
  int iVar2;
  int local_res18 [2];
  
  local_res18[0] = param_2;
  if ((this->BranchSimulationGroupIndex).ConstAttributeArray == (TManagedArray<int> *)0x0) {
    TManagedArrayAccessor<int>::Add(&this->BranchSimulationGroupIndex,MakePersistent,(FName)0x0);
  }
  pTVar1 = (this->BranchSimulationGroupIndex).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<int> *)0x0) && (-1 < param_1)) {
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (param_1 < iVar2) {
      TManagedArrayAccessor<int>::ModifyAt(&this->BranchSimulationGroupIndex,param_1,local_res18);
    }
  }
  return;
}

// SetBranchUVMaterial @ 14daa6150

void __thiscall
PV::Facades::FBranchFacade::SetBranchUVMaterial(FBranchFacade *this,int param_1,int param_2)

{
  TManagedArray<int> *pTVar1;
  int iVar2;
  int local_res18 [2];
  
  local_res18[0] = param_2;
  if ((this->BranchUVMaterial).ConstAttributeArray == (TManagedArray<int> *)0x0) {
    TManagedArrayAccessor<int>::Add(&this->BranchUVMaterial,MakePersistent,(FName)0x0);
  }
  pTVar1 = (this->BranchUVMaterial).ConstAttributeArray;
  if ((pTVar1 != (TManagedArray<int> *)0x0) && (-1 < param_1)) {
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (param_1 < iVar2) {
      TManagedArrayAccessor<int>::ModifyAt(&this->BranchUVMaterial,param_1,local_res18);
    }
  }
  return;
}

// SetChildren @ 14daa6d90

void __thiscall
PV::Facades::FBranchFacade::SetChildren
          (FBranchFacade *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  
  if (((this->Children).ConstAttributeArray !=
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) && (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->Children).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::ModifyAt
                (&this->Children,param_1,param_2);
    }
  }
  return;
}

// SetParents @ 14daa8cc0

void __thiscall
PV::Facades::FBranchFacade::SetParents
          (FBranchFacade *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  
  if (((this->Parents).ConstAttributeArray !=
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) && (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->Parents).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::ModifyAt
                (&this->Parents,param_1,param_2);
    }
  }
  return;
}

// SetPoints @ 14daa8e10

void __thiscall
PV::Facades::FBranchFacade::SetPoints
          (FBranchFacade *this,int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  
  if (((this->BranchPoints).ConstAttributeArray !=
       (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) && (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->BranchPoints).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::ModifyAt
                (&this->BranchPoints,param_1,param_2);
    }
  }
  return;
}

// SetTrunkMaterialPath @ 14daa8f80

void __thiscall
PV::Facades::FBranchFacade::SetTrunkMaterialPath(FBranchFacade *this,FString *param_1)

{
  TManagedArray<FString> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVBranchFacade.cpp"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = FManagedArrayCollection::NumElements(this->Collection,GroupNames::DetailsGroup);
  if (iVar4 == 0) {
    FManagedArrayCollection::AddElements(this->Collection,1,GroupNames::DetailsGroup);
  }
  if ((this->TrunkMaterialPathAttribute).ConstAttributeArray == (TManagedArray<FString> *)0x0) {
    TManagedArrayAccessor<FString>::Add(&this->TrunkMaterialPathAttribute,MakePersistent,(FName)0x0)
    ;
  }
  if (((this->TrunkMaterialPathAttribute).AttributeArray == (TManagedArray<FString> *)0x0) ||
     ((this->TrunkMaterialPathAttribute).Collection == (FManagedArrayCollection *)0x0)) {
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
  ((this->TrunkMaterialPathAttribute).AttributeArray)->field_0x8 = 1;
  pTVar1 = (this->TrunkMaterialPathAttribute).AttributeArray;
  if (*(int *)&pTVar1->field_0x18 < 1) {
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
  ::FString::operator=(*(FString **)&pTVar1->field_0x10,param_1);
  return;
}

// SetTrunkURange @ 14daa90b0

void __thiscall
PV::Facades::FBranchFacade::SetTrunkURange
          (FBranchFacade *this,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Facades\\PVBranchFacade.cpp"
                       ,0x121,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = FManagedArrayCollection::NumElements(this->Collection,GroupNames::DetailsGroup);
  if (iVar4 == 0) {
    FManagedArrayCollection::AddElements(this->Collection,1,GroupNames::DetailsGroup);
  }
  if ((this->TrunkURangeAttribute).ConstAttributeArray ==
      (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    TManagedArrayAccessor<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::Add
              (&this->TrunkURangeAttribute,MakePersistent,(FName)0x0);
  }
  if (((this->TrunkURangeAttribute).AttributeArray ==
       (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0) ||
     ((this->TrunkURangeAttribute).Collection == (FManagedArrayCollection *)0x0)) {
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
  ((this->TrunkURangeAttribute).AttributeArray)->field_0x8 = 1;
  pTVar1 = (this->TrunkURangeAttribute).AttributeArray;
  if (*(int *)&pTVar1->field_0x18 < 1) {
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
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::operator=
            (*(TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> **)&pTVar1->field_0x10,
             param_1);
  return;
}


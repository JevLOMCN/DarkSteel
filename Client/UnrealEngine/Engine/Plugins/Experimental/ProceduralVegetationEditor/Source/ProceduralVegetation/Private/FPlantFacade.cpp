// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 12

// FPlantFacade @ 14da637a0

FPlantFacade * __thiscall
PV::Facades::FPlantFacade::FPlantFacade(FPlantFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FPlantFacade *pFVar4;
  FValueType *pFVar5;
  FValueType *pFVar6;
  FValueType *pFVar7;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  
  this->Collection = param_1;
  pFVar5 = (FValueType *)0x0;
  (this->PlantNumbers).ConstCollection = param_1;
  (this->PlantNumbers).Collection = param_1;
  (this->PlantNumbers).Name = AttributeNames::PlantNumber;
  (this->PlantNumbers).Group = GroupNames::BranchGroup;
  (this->PlantNumbers).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PlantNumbers).DefaultGroupDependency.Number = 0;
  local_68 = AttributeNames::PlantNumber;
  local_60 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_68);
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
      pFVar4 = (FPlantFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->PlantNumbers).AttributeArray = (TManagedArray<int> *)pFVar6;
  (this->PlantNumbers).ConstAttributeArray = (TManagedArray<int> *)pFVar6;
  (this->BranchNumbers).ConstCollection = param_1;
  (this->BranchNumbers).Collection = param_1;
  (this->BranchNumbers).Name = AttributeNames::BranchNumber;
  (this->BranchNumbers).Group = GroupNames::BranchGroup;
  (this->BranchNumbers).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchNumbers).DefaultGroupDependency.Number = 0;
  local_58 = AttributeNames::BranchNumber;
  local_50 = GroupNames::BranchGroup;
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
      pFVar4 = (FPlantFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->BranchNumbers).AttributeArray = (TManagedArray<int> *)pFVar6;
  (this->BranchNumbers).ConstAttributeArray = (TManagedArray<int> *)pFVar6;
  (this->BranchParentNumbers).ConstCollection = param_1;
  (this->BranchParentNumbers).Collection = param_1;
  (this->BranchParentNumbers).Name = AttributeNames::BranchParentNumber;
  (this->BranchParentNumbers).Group = GroupNames::BranchGroup;
  (this->BranchParentNumbers).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchParentNumbers).DefaultGroupDependency.Number = 0;
  local_48 = AttributeNames::BranchParentNumber;
  local_40 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
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
      pFVar4 = (FPlantFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->BranchParentNumbers).AttributeArray = (TManagedArray<int> *)pFVar6;
  (this->BranchParentNumbers).ConstAttributeArray = (TManagedArray<int> *)pFVar6;
  (this->BranchHierarchyNumbers).ConstCollection = param_1;
  (this->BranchHierarchyNumbers).Collection = param_1;
  (this->BranchHierarchyNumbers).Name = AttributeNames::BranchHierarchyNumber;
  (this->BranchHierarchyNumbers).Group = GroupNames::BranchGroup;
  (this->BranchHierarchyNumbers).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchHierarchyNumbers).DefaultGroupDependency.Number = 0;
  local_38 = AttributeNames::BranchHierarchyNumber;
  local_30 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_38);
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
      pFVar4 = (FPlantFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->BranchHierarchyNumbers).AttributeArray = (TManagedArray<int> *)pFVar5;
  (this->BranchHierarchyNumbers).ConstAttributeArray = (TManagedArray<int> *)pFVar5;
  return this;
}

// FPlantFacade @ 14da63ab0

FPlantFacade * __thiscall
PV::Facades::FPlantFacade::FPlantFacade(FPlantFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FPlantFacade *pFVar4;
  char *pcVar5;
  TManagedArray<int> *pTVar6;
  char *pcVar7;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  
  pcVar7 = (char *)0x0;
  this->Collection = (FManagedArrayCollection *)0x0;
  (this->PlantNumbers).ConstCollection = param_1;
  (this->PlantNumbers).Collection = (FManagedArrayCollection *)0x0;
  (this->PlantNumbers).Name = AttributeNames::PlantNumber;
  (this->PlantNumbers).Group = GroupNames::BranchGroup;
  (this->PlantNumbers).DefaultGroupDependency.ComparisonIndex = 0;
  (this->PlantNumbers).DefaultGroupDependency.Number = 0;
  (this->PlantNumbers).AttributeArray = (TManagedArray<int> *)0x0;
  local_68 = AttributeNames::PlantNumber;
  local_60 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_68);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar7;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x05')) {
    pTVar6 = (TManagedArray<int> *)0x0;
  }
  else {
    pTVar6 = *(TManagedArray<int> **)(pcVar5 + 0x20);
    if (pTVar6 == (TManagedArray<int> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPlantFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->PlantNumbers).ConstAttributeArray = pTVar6;
  (this->BranchNumbers).ConstCollection = param_1;
  (this->BranchNumbers).Collection = (FManagedArrayCollection *)0x0;
  (this->BranchNumbers).Name = AttributeNames::BranchNumber;
  (this->BranchNumbers).Group = GroupNames::BranchGroup;
  (this->BranchNumbers).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchNumbers).DefaultGroupDependency.Number = 0;
  (this->BranchNumbers).AttributeArray = (TManagedArray<int> *)0x0;
  local_58 = AttributeNames::BranchNumber;
  local_50 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar7;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x05')) {
    pTVar6 = (TManagedArray<int> *)0x0;
  }
  else {
    pTVar6 = *(TManagedArray<int> **)(pcVar5 + 0x20);
    if (pTVar6 == (TManagedArray<int> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPlantFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BranchNumbers).ConstAttributeArray = pTVar6;
  (this->BranchParentNumbers).ConstCollection = param_1;
  (this->BranchParentNumbers).Collection = (FManagedArrayCollection *)0x0;
  (this->BranchParentNumbers).Name = AttributeNames::BranchParentNumber;
  (this->BranchParentNumbers).Group = GroupNames::BranchGroup;
  (this->BranchParentNumbers).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchParentNumbers).DefaultGroupDependency.Number = 0;
  (this->BranchParentNumbers).AttributeArray = (TManagedArray<int> *)0x0;
  local_48 = AttributeNames::BranchParentNumber;
  local_40 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar7;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x05')) {
    pTVar6 = (TManagedArray<int> *)0x0;
  }
  else {
    pTVar6 = *(TManagedArray<int> **)(pcVar5 + 0x20);
    if (pTVar6 == (TManagedArray<int> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPlantFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->BranchParentNumbers).ConstAttributeArray = pTVar6;
  (this->BranchHierarchyNumbers).ConstCollection = param_1;
  (this->BranchHierarchyNumbers).Collection = (FManagedArrayCollection *)0x0;
  (this->BranchHierarchyNumbers).Name = AttributeNames::BranchHierarchyNumber;
  (this->BranchHierarchyNumbers).Group = GroupNames::BranchGroup;
  (this->BranchHierarchyNumbers).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BranchHierarchyNumbers).DefaultGroupDependency.Number = 0;
  (this->BranchHierarchyNumbers).AttributeArray = (TManagedArray<int> *)0x0;
  local_38 = AttributeNames::BranchHierarchyNumber;
  local_30 = GroupNames::BranchGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_38);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar7;
  }
  if ((pcVar5 != (char *)0x0) && (*pcVar5 == '\x05')) {
    pTVar6 = *(TManagedArray<int> **)(pcVar5 + 0x20);
    if (pTVar6 == (TManagedArray<int> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPlantFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
    (this->BranchHierarchyNumbers).ConstAttributeArray = pTVar6;
    return this;
  }
  (this->BranchHierarchyNumbers).ConstAttributeArray = (TManagedArray<int> *)0x0;
  return this;
}

// GetBranchIndices @ 14da933b0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FPlantFacade::GetBranchIndices
          (FPlantFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  TManagedArray<int> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  uint local_28 [4];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_28[0] = 0;
  while( true ) {
    pTVar1 = (this->BranchNumbers).ConstAttributeArray;
    if (pTVar1 == (TManagedArray<int> *)0x0) {
      iVar6 = FManagedArrayCollection::NumElements
                        ((this->BranchNumbers).ConstCollection,(this->BranchNumbers).Group);
    }
    else {
      iVar6 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    uVar4 = local_28[0];
    lVar9 = (longlong)(int)local_28[0];
    if (iVar6 <= (int)local_28[0]) break;
    if ((this->PlantNumbers).ConstAttributeArray == (TManagedArray<int> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x60,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
    }
    pTVar1 = (this->PlantNumbers).ConstAttributeArray;
    uVar7 = 0;
    if ((int)uVar4 < *(int *)&pTVar1->field_0x18) {
      uVar7 = ~uVar4 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
    }
    if (*(int *)(*(longlong *)&pTVar1->field_0x10 + lVar9 * 4) == param_1) {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
         ((FScriptContainerElement *)local_28 <
          pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
           local_28[0];
    }
    local_28[0] = local_28[0] + 1;
  }
  return __return_storage_ptr__;
}

// GetBranchIndicesSortedByHierarchyNumber @ 14da93560

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FPlantFacade::GetBranchIndicesSortedByHierarchyNumber
          (FPlantFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  FIdentityFunctor FVar1;
  FPlantFacade *local_res8;
  
  GetBranchIndices(this,__return_storage_ptr__,param_1);
  local_res8._0_1_ = SUB81(this,0);
  FVar1 = local_res8._0_1_;
  local_res8 = this;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_PV::Facades::FPlantFacade::GetBranchIndicesSortedByHierarchyNumber_::__l2::<lambda_1>_>_>
            ((int *)(__return_storage_ptr__->AllocatorInstance).Data,
             __return_storage_ptr__->ArrayNum,FVar1,(<lambda_1> *)&local_res8);
  return __return_storage_ptr__;
}

// GetBranchNumbers @ 14da93670

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FPlantFacade::GetBranchNumbers
          (FPlantFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  TManagedArray<int> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar7 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar11 = uVar7;
  while( true ) {
    pTVar1 = (this->BranchNumbers).ConstAttributeArray;
    if (pTVar1 == (TManagedArray<int> *)0x0) {
      iVar5 = FManagedArrayCollection::NumElements
                        ((this->BranchNumbers).ConstCollection,(this->BranchNumbers).Group);
    }
    else {
      iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    uVar10 = (uint)uVar7;
    if (iVar5 <= (int)uVar10) break;
    if ((this->PlantNumbers).ConstAttributeArray == (TManagedArray<int> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x60,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
    }
    pTVar1 = (this->PlantNumbers).ConstAttributeArray;
    uVar6 = 0;
    if ((int)uVar10 < *(int *)&pTVar1->field_0x18) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
    }
    if (*(int *)(uVar11 + *(longlong *)&pTVar1->field_0x10) == param_1) {
      if ((this->BranchNumbers).ConstAttributeArray == (TManagedArray<int> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x60,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
      }
      pTVar1 = (this->BranchNumbers).ConstAttributeArray;
      uVar6 = 0;
      if ((int)uVar10 < *(int *)&pTVar1->field_0x18) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar9 = (FScriptContainerElement *)(*(longlong *)&pTVar1->field_0x10 + uVar11);
      if ((pFVar2 <= pFVar9) && (pFVar9 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4))
      {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
           *(undefined4 *)pFVar9;
    }
    uVar7 = (ulonglong)(uVar10 + 1);
    uVar11 = uVar11 + 4;
  }
  return __return_storage_ptr__;
}

// GetElementCount @ 14da94580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int __thiscall PV::Facades::FPlantFacade::GetElementCount(FPlantFacade *this)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  ForElementType<unsigned_int> FVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStackY_128 [32];
  int local_f8;
  uint uStack_f4;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  FSparseArrayAllocationInfo local_98;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  uVar19 = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_88.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.AllocationFlags.NumBits = 0;
  local_88.AllocationFlags.MaxBits = 0x80;
  local_88.FirstFreeIndex = -1;
  local_88.NumFreeIndices = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_d8 = 0;
  do {
    pTVar1 = (this->PlantNumbers).ConstAttributeArray;
    if (pTVar1 == (TManagedArray<int> *)0x0) {
      iVar4 = FManagedArrayCollection::NumElements
                        ((this->PlantNumbers).ConstCollection,(this->PlantNumbers).Group);
    }
    else {
      iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    iVar5 = local_88.NumFreeIndices;
    if (iVar4 <= (int)uVar19) {
      iVar4 = local_88.Data.ArrayNum;
      local_40 = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      bVar3 = local_88.Data.ArrayMax != 0;
      local_88.Data._8_8_ = (ulonglong)(uint)local_88.Data.ArrayMax << 0x20;
      if (bVar3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)&local_88,0,&local_88.Data.ArrayMax);
      }
      local_88.NumFreeIndices = 0;
      local_88.AllocationFlags.NumBits = 0;
      local_88.FirstFreeIndex = -1;
      if (0x80 < (uint)local_88.AllocationFlags.MaxBits) {
        local_88.AllocationFlags.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88.AllocationFlags,0);
      }
      if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_88.AllocationFlags.AllocatorInstance.SecondaryData);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      return iVar4 - iVar5;
    }
    if (((this->PlantNumbers).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    pTVar1 = (this->PlantNumbers).ConstAttributeArray;
    uVar16 = 0;
    if ((int)uVar19 < *(int *)&pTVar1->field_0x18) {
      uVar16 = ~uVar19 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    lVar12 = *(longlong *)&pTVar1->field_0x10;
    if (local_88.NumFreeIndices == 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)&local_88,&local_88.Data.ArrayNum,
                         &local_88.Data.ArrayMax);
      iVar4 = local_88.AllocationFlags.NumBits;
      if (local_88.AllocationFlags.NumBits == 0) {
        iVar14 = 0;
LAB_14da9471c:
        if (local_88.AllocationFlags.MaxBits < local_88.AllocationFlags.NumBits + 1) {
          uVar16 = local_88.AllocationFlags.MaxBits + 0x1fU >> 5;
          uVar13 = local_88.AllocationFlags.NumBits + 0x20U >> 5;
          if (uVar13 < 5) {
            iVar6 = 4;
          }
          else {
            uVar11 = (ulonglong)uVar13;
            if (uVar16 < 5) {
              uVar16 = 0;
            }
            if (uVar16 == 0) {
              uVar18 = 4;
              if (4 < uVar11) {
                uVar18 = uVar11;
              }
            }
            else {
              uVar18 = ((ulonglong)uVar13 * 3 >> 3) + 0x10 + uVar11;
            }
            uVar7 = FMemory::QuantizeSize(uVar18 * 4,0);
            iVar6 = (int)(uVar7 >> 2);
            if (iVar6 < (int)uVar13) {
              iVar6 = 0x7fffffff;
            }
          }
          local_88.AllocationFlags.MaxBits = iVar6 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    (&local_88.AllocationFlags,local_88.AllocationFlags.NumBits);
        }
        local_88.AllocationFlags.NumBits = local_88.AllocationFlags.NumBits + 1;
        uVar13 = local_88.AllocationFlags.NumBits >> 0x1f & 0x1f;
        uVar16 = local_88.AllocationFlags.NumBits + uVar13;
        iVar6 = (uVar16 & 0x1f) - uVar13;
        if (iVar6 != 0) {
          FVar9 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
          if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar9 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          puVar15 = (uint *)((longlong)FVar9 + (longlong)((int)uVar16 >> 5) * 4);
          *puVar15 = *puVar15 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
        }
      }
      else {
        iVar14 = (int)(local_88.AllocationFlags.NumBits +
                      (local_88.AllocationFlags.NumBits >> 0x1f & 0x1fU)) >> 5;
        if (iVar14 != (int)((local_88.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU) +
                           local_88.AllocationFlags.NumBits + -1) >> 5) goto LAB_14da9471c;
        local_88.AllocationFlags.NumBits = local_88.AllocationFlags.NumBits + 1;
      }
      FVar9 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
      if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar9 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      puVar15 = (uint *)((longlong)FVar9 + (longlong)iVar14 * 4);
      *puVar15 = *puVar15 & ~(1 << ((byte)iVar4 & 0x1f));
      iVar4 = local_88.FirstFreeIndex;
    }
    else {
      local_88.NumFreeIndices = local_88.NumFreeIndices + -1;
      iVar4 = *(int *)(local_88.Data.AllocatorInstance.Data +
                      (longlong)local_88.FirstFreeIndex * 0xc + 4);
      iVar5 = local_88.FirstFreeIndex;
      if (local_88.NumFreeIndices != 0) {
        *(undefined4 *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar4 * 0xc) = 0xffffffff;
      }
    }
    local_88.FirstFreeIndex = iVar4;
    puVar15 = (uint *)0x0;
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex(&local_88,&local_98,iVar5);
    if (local_98.Pointer != (uint *)0x0) {
      *(uint *)local_98.Pointer = *(uint *)(lVar12 + local_d8);
      *(uint *)((longlong)local_98.Pointer + 4) = 0xffffffff;
      puVar15 = local_98.Pointer;
    }
    uVar16 = *puVar15;
    if ((local_88.Data.ArrayNum - local_88.NumFreeIndices != 1) &&
       (local_88.Data.ArrayNum != local_88.NumFreeIndices)) {
      FVar10.Data = local_50;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FVar10.Data = local_48.Data;
      }
      for (iVar4 = *(int *)(FVar10.Data + (ulonglong)(local_40 - 1 & uVar16) * 4); iVar4 != -1;
          iVar4 = *(int *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar4 * 0xc + 4)) {
        if (*(uint *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar4 * 0xc) == uVar16) {
          if (iVar4 != -1) {
            *(uint *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar4 * 0xc) = uVar16;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(&local_88,local_98.Index,1);
            goto LAB_14da94b6e;
          }
          break;
        }
      }
    }
    uVar17 = local_88.Data.ArrayNum - local_88.NumFreeIndices;
    uVar13 = 1;
    if (3 < uVar17) {
      uVar11 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar13 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar17 < 1) || ((int)uVar13 <= (int)local_40)) {
      uVar16 = local_40 - 1 & uVar16;
      puVar15[2] = uVar16;
      FVar10.Data = local_50;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FVar10.Data = local_48.Data;
      }
      uVar11 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar16;
      puVar15[1] = *(uint *)(FVar10.Data + uVar11 * 4);
      *(int *)(FVar10.Data + uVar11 * 4) = local_98.Index;
    }
    else {
      local_40 = uVar13;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
      }
      if (uVar13 != 0) {
        uVar16 = uVar13;
        if (uVar13 < 2) {
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            uVar16 = 0;
            goto LAB_14da94992;
          }
        }
        else {
LAB_14da94992:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar16,4)
          ;
        }
        if (0 < (int)uVar13) {
          uVar18 = (ulonglong)uVar13;
          uVar11 = 0;
          do {
            FVar10.Data = local_50;
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              FVar10.Data = local_48.Data;
            }
            uVar8 = uVar11 & (longlong)(int)uVar13 - 1U;
            uVar11 = uVar11 + 1;
            *(undefined4 *)(FVar10.Data + uVar8 * 4) = 0xffffffff;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
      }
      if (local_40 != 0) {
        local_b8.Array = &local_88.AllocationFlags;
        local_f8 = 0;
        uStack_f4 = 1;
        iStack_e4 = 0;
        iStack_e0 = 0;
        if (local_88.AllocationFlags.NumBits != 0) {
          FVar9 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
          if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar9 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          uVar16 = *(uint *)FVar9;
          while (uVar16 == 0) {
            iStack_e0 = iStack_e0 + 0x20;
            lVar12 = (longlong)local_f8;
            local_f8 = local_f8 + 1;
            if ((int)(local_88.AllocationFlags.NumBits + -1 +
                     (local_88.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_f8)
            goto LAB_14da94aa3;
            uVar16 = *(uint *)((uchar *)((longlong)FVar9 + 4) + lVar12 * 4);
          }
          uStack_f4 = -uVar16 & uVar16;
          uVar11 = (ulonglong)uStack_f4 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iStack_e4 = (int)lVar12 + -1 + iStack_e0;
          if (local_88.AllocationFlags.NumBits < iStack_e4) {
LAB_14da94aa3:
            iStack_e4 = local_88.AllocationFlags.NumBits;
          }
        }
        local_b8._padding_ = CONCAT44(uStack_f4,local_f8);
        local_b8.CurrentBitIndex = iStack_e4;
        local_b8.UnvisitedBitMask = 0xffffffff;
        local_b8._28_4_ = uStack_dc;
        local_b8.BaseBitIndex = iStack_e0;
        if (iStack_e4 < local_88.AllocationFlags.NumBits) {
          do {
            lVar12 = (longlong)iStack_e4;
            uVar16 = local_40 - 1 & *(uint *)(local_88.Data.AllocatorInstance.Data + lVar12 * 0xc);
            *(uint *)(local_88.Data.AllocatorInstance.Data + lVar12 * 0xc + 8) = uVar16;
            FVar10.Data = local_50;
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              FVar10.Data = local_48.Data;
            }
            uVar11 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar16;
            *(undefined4 *)(local_88.Data.AllocatorInstance.Data + lVar12 * 0xc + 4) =
                 *(undefined4 *)(FVar10.Data + uVar11 * 4);
            *(int *)(FVar10.Data + uVar11 * 4) = iStack_e4;
            local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
            iStack_e4 = local_b8.CurrentBitIndex;
          } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
        }
      }
    }
LAB_14da94b6e:
    uVar19 = uVar19 + 1;
    local_d8 = local_d8 + 4;
  } while( true );
}

// GetPlantNumbers @ 14da97b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FPlantFacade::GetPlantNumbers
          (FPlantFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ForElementType<unsigned_int> FVar11;
  ForAnyElementType FVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 auStackY_148 [32];
  int local_118;
  uint uStack_114;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  FSparseArrayAllocationInfo local_b0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uVar20 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_f8 = 0;
  do {
    pTVar1 = (this->PlantNumbers).ConstAttributeArray;
    if (pTVar1 == (TManagedArray<int> *)0x0) {
      iVar4 = FManagedArrayCollection::NumElements
                        ((this->PlantNumbers).ConstCollection,(this->PlantNumbers).Group);
    }
    else {
      iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    if (iVar4 <= (int)uVar20) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,
                 __return_storage_ptr__);
      local_50 = 0;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      bVar3 = local_98._12_4_ != 0;
      local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
      if (bVar3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_64 = 0;
      local_70 = 0;
      local_68 = -1;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      return __return_storage_ptr__;
    }
    if (((this->PlantNumbers).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
    pTVar1 = (this->PlantNumbers).ConstAttributeArray;
    uVar17 = 0;
    if ((int)uVar20 < *(int *)&pTVar1->field_0x18) {
      uVar17 = ~uVar20 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
    lVar10 = *(longlong *)&pTVar1->field_0x10;
    if (local_64 == 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                         (int *)(local_98 + 0xc));
      iVar4 = local_70;
      if (local_70 == 0) {
        iVar15 = 0;
LAB_14da97d1d:
        if ((int)local_6c < local_70 + 1) {
          uVar17 = local_6c + 0x1f >> 5;
          uVar14 = local_70 + 0x20U >> 5;
          if (uVar14 < 5) {
            iVar6 = 4;
          }
          else {
            uVar13 = (ulonglong)uVar14;
            if (uVar17 < 5) {
              uVar17 = 0;
            }
            if (uVar17 == 0) {
              uVar19 = 4;
              if (4 < uVar13) {
                uVar19 = uVar13;
              }
            }
            else {
              uVar19 = ((ulonglong)uVar14 * 3 >> 3) + 0x10 + uVar13;
            }
            uVar8 = FMemory::QuantizeSize(uVar19 * 4,0);
            iVar6 = (int)(uVar8 >> 2);
            if (iVar6 < (int)uVar14) {
              iVar6 = 0x7fffffff;
            }
          }
          local_6c = iVar6 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70);
        }
        local_70 = local_70 + 1;
        uVar14 = local_70 >> 0x1f & 0x1f;
        uVar17 = local_70 + uVar14;
        iVar6 = (uVar17 & 0x1f) - uVar14;
        if (iVar6 != 0) {
          FVar11 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar11 = local_78;
          }
          puVar16 = (uint *)((longlong)FVar11 + (longlong)((int)uVar17 >> 5) * 4);
          *puVar16 = *puVar16 & 0xffffffffU >> (0x20U - (char)iVar6 & 0x1f);
        }
      }
      else {
        iVar15 = (int)(local_70 + (local_70 >> 0x1f & 0x1fU)) >> 5;
        if (iVar15 != (int)((local_70 + -1 >> 0x1f & 0x1fU) + local_70 + -1) >> 5)
        goto LAB_14da97d1d;
        local_70 = local_70 + 1;
      }
      FVar11 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar11 = local_78;
      }
      puVar16 = (uint *)((longlong)FVar11 + (longlong)iVar15 * 4);
      *puVar16 = *puVar16 & ~(1 << ((byte)iVar4 & 0x1f));
      iVar4 = local_68;
    }
    else {
      local_64 = local_64 + -1;
      iVar4 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0xc + 4);
      iVar5 = local_68;
      if (local_64 != 0) {
        *(undefined4 *)(local_98._0_8_ + (longlong)iVar4 * 0xc) = 0xffffffff;
      }
    }
    local_68 = iVar4;
    puVar16 = (uint *)0x0;
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,&local_b0,iVar5);
    if (local_b0.Pointer != (uint *)0x0) {
      *(uint *)local_b0.Pointer = *(uint *)(lVar10 + local_f8);
      *(uint *)((longlong)local_b0.Pointer + 4) = 0xffffffff;
      puVar16 = local_b0.Pointer;
    }
    uVar17 = *puVar16;
    if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
      FVar12.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar12.Data = local_58.Data;
      }
      for (iVar4 = *(int *)(FVar12.Data + (ulonglong)(local_50 - 1 & uVar17) * 4); iVar4 != -1;
          iVar4 = *(int *)(local_98._0_8_ + (longlong)iVar4 * 0xc + 4)) {
        if (*(uint *)(local_98._0_8_ + (longlong)iVar4 * 0xc) == uVar17) {
          if (iVar4 != -1) {
            *(uint *)(local_98._0_8_ + (longlong)iVar4 * 0xc) = uVar17;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_98,local_b0.Index,1);
            goto LAB_14da9817e;
          }
          break;
        }
      }
    }
    uVar18 = local_98._8_4_ - local_64;
    uVar14 = 1;
    if (3 < uVar18) {
      uVar13 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar14 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar18 < 1) || ((int)uVar14 <= (int)local_50)) {
      uVar17 = local_50 - 1 & uVar17;
      puVar16[2] = uVar17;
      FVar12.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar12.Data = local_58.Data;
      }
      uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar17;
      puVar16[1] = *(uint *)(FVar12.Data + uVar13 * 4);
      *(int *)(FVar12.Data + uVar13 * 4) = local_b0.Index;
    }
    else {
      local_50 = uVar14;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar14 != 0) {
        uVar17 = uVar14;
        if (uVar14 < 2) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar17 = 0;
            goto LAB_14da97f92;
          }
        }
        else {
LAB_14da97f92:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar17,4)
          ;
        }
        if (0 < (int)uVar14) {
          uVar19 = (ulonglong)uVar14;
          uVar13 = 0;
          do {
            FVar12.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar12.Data = local_58.Data;
            }
            uVar9 = uVar13 & (longlong)(int)uVar14 - 1U;
            uVar13 = uVar13 + 1;
            *(undefined4 *)(FVar12.Data + uVar9 * 4) = 0xffffffff;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
      }
      if (local_50 != 0) {
        local_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        local_118 = 0;
        uStack_114 = 1;
        iStack_104 = 0;
        iStack_100 = 0;
        if (local_70 != 0) {
          FVar11 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar11 = local_78;
          }
          uVar17 = *(uint *)FVar11;
          while (uVar17 == 0) {
            iStack_100 = iStack_100 + 0x20;
            lVar10 = (longlong)local_118;
            local_118 = local_118 + 1;
            if ((int)((local_70 + -1 >> 0x1f & 0x1fU) + local_70 + -1) >> 5 < local_118)
            goto LAB_14da980b4;
            uVar17 = ((uint *)((longlong)FVar11 + 4))[lVar10];
          }
          uStack_114 = -uVar17 & uVar17;
          uVar13 = (ulonglong)uStack_114 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iStack_104 = (int)lVar10 + -1 + iStack_100;
          if (local_70 < iStack_104) {
LAB_14da980b4:
            iStack_104 = local_70;
          }
        }
        local_d0._padding_ = CONCAT44(uStack_114,local_118);
        local_d0.CurrentBitIndex = iStack_104;
        local_d0.UnvisitedBitMask = 0xffffffff;
        local_d0._28_4_ = uStack_fc;
        local_d0.BaseBitIndex = iStack_100;
        if (iStack_104 < local_70) {
          do {
            lVar10 = (longlong)iStack_104;
            uVar17 = local_50 - 1 & *(uint *)(local_98._0_8_ + lVar10 * 0xc);
            *(uint *)(local_98._0_8_ + lVar10 * 0xc + 8) = uVar17;
            FVar12.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar12.Data = local_58.Data;
            }
            uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar17;
            *(undefined4 *)(local_98._0_8_ + lVar10 * 0xc + 4) =
                 *(undefined4 *)(FVar12.Data + uVar13 * 4);
            *(int *)(FVar12.Data + uVar13 * 4) = iStack_104;
            local_d0.UnvisitedBitMask = local_d0.UnvisitedBitMask & ~local_d0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d0);
            iStack_104 = local_d0.CurrentBitIndex;
          } while (local_d0.CurrentBitIndex < (local_d0.Array)->NumBits);
        }
      }
    }
LAB_14da9817e:
    uVar20 = uVar20 + 1;
    local_f8 = local_f8 + 4;
  } while( true );
}

// GetPlantNumbersToTrunkIndicesMap @ 14da98280

TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> * __thiscall
PV::Facades::FPlantFacade::GetPlantNumbersToTrunkIndicesMap
          (FPlantFacade *this,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
          *__return_storage_ptr__)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar7;
  longlong lVar8;
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
    pTVar1 = (this->BranchNumbers).ConstAttributeArray;
    if (pTVar1 == (TManagedArray<int> *)0x0) {
      iVar5 = FManagedArrayCollection::NumElements
                        ((this->BranchNumbers).ConstCollection,(this->BranchNumbers).Group);
    }
    else {
      iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    uVar3 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    if (iVar5 <= (int)local_res8[0]) break;
    if ((this->BranchParentNumbers).ConstAttributeArray == (TManagedArray<int> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x60,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                 (*pcVar2)();
        return pTVar7;
      }
    }
    pTVar1 = (this->BranchParentNumbers).ConstAttributeArray;
    uVar6 = 0;
    if ((int)uVar3 < *(int *)&pTVar1->field_0x18) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                 (*pcVar2)();
        return pTVar7;
      }
    }
    uVar3 = local_res8[0];
    if (*(int *)(*(longlong *)&pTVar1->field_0x10 + lVar8 * 4) == 0) {
      lVar8 = (longlong)(int)local_res8[0];
      if ((this->PlantNumbers).ConstAttributeArray == (TManagedArray<int> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x60,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                   (*pcVar2)();
          return pTVar7;
        }
      }
      pTVar1 = (this->PlantNumbers).ConstAttributeArray;
      uVar6 = 0;
      if ((int)uVar3 < *(int *)&pTVar1->field_0x18) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                   (*pcVar2)();
          return pTVar7;
        }
      }
      local_28 = *(longlong *)&pTVar1->field_0x10 + lVar8 * 4;
      local_20 = local_res8;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,
                 (TPairInitializer<int_const_&,int_const_&> *)(local_res8 + 2),(bool *)&local_28);
    }
    local_res8[0] = local_res8[0] + 1;
  }
  return __return_storage_ptr__;
}

// GetTrunkIndex @ 14da9a3e0

int __thiscall PV::Facades::FPlantFacade::GetTrunkIndex(FPlantFacade *this,int param_1)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  lVar7 = 0;
  while( true ) {
    pTVar1 = (this->BranchParentNumbers).ConstAttributeArray;
    if (pTVar1 == (TManagedArray<int> *)0x0) {
      iVar4 = FManagedArrayCollection::NumElements
                        ((this->BranchParentNumbers).ConstCollection,
                         (this->BranchParentNumbers).Group);
    }
    else {
      iVar4 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    if (iVar4 <= (int)uVar6) {
      return -1;
    }
    if (((this->PlantNumbers).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x60,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    pTVar1 = (this->PlantNumbers).ConstAttributeArray;
    uVar5 = 0;
    if ((int)uVar6 < *(int *)&pTVar1->field_0x18) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    if (*(int *)(*(longlong *)&pTVar1->field_0x10 + lVar7) == param_1) {
      if (((this->BranchParentNumbers).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x60,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      pTVar1 = (this->BranchParentNumbers).ConstAttributeArray;
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&pTVar1->field_0x18) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if (*(int *)(*(longlong *)&pTVar1->field_0x10 + lVar7) == 0) {
        return uVar6;
      }
    }
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + 4;
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// GetTrunkIndices @ 14da9a580

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
PV::Facades::FPlantFacade::GetTrunkIndices
          (FPlantFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TManagedArray<int> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  uint local_28 [4];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_28[0] = 0;
  while( true ) {
    pTVar1 = (this->BranchNumbers).ConstAttributeArray;
    if (pTVar1 == (TManagedArray<int> *)0x0) {
      iVar6 = FManagedArrayCollection::NumElements
                        ((this->BranchNumbers).ConstCollection,(this->BranchNumbers).Group);
    }
    else {
      iVar6 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    }
    uVar4 = local_28[0];
    lVar9 = (longlong)(int)local_28[0];
    if (iVar6 <= (int)local_28[0]) break;
    if ((this->BranchParentNumbers).ConstAttributeArray == (TManagedArray<int> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x60,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
    }
    pTVar1 = (this->BranchParentNumbers).ConstAttributeArray;
    uVar7 = 0;
    if ((int)uVar4 < *(int *)&pTVar1->field_0x18) {
      uVar7 = ~uVar4 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
    }
    if (*(int *)(*(longlong *)&pTVar1->field_0x10 + lVar9 * 4) == 0) {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
         ((FScriptContainerElement *)local_28 <
          pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar8;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
           local_28[0];
    }
    local_28[0] = local_28[0] + 1;
  }
  return __return_storage_ptr__;
}

// IsTrunkIndex @ 14da9af60

bool __thiscall PV::Facades::FPlantFacade::IsTrunkIndex(FPlantFacade *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = TManagedArrayAccessor<int>::IsValidIndex(&this->BranchParentNumbers,param_1);
  if (bVar1) {
    piVar2 = TManagedArrayAccessor<int>::operator[](&this->BranchParentNumbers,param_1);
    return *piVar2 == 0;
  }
  return false;
}

// IsValid @ 14da9b0c0

bool __thiscall PV::Facades::FPlantFacade::IsValid(FPlantFacade *this)

{
  if (((((this->PlantNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
       ((this->BranchNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
      ((this->BranchParentNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
     ((this->BranchHierarchyNumbers).ConstAttributeArray != (TManagedArray<int> *)0x0)) {
    return true;
  }
  return false;
}

